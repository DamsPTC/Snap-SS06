/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018b101c; end: 1018b105b;  */

void FUN_1018b101c(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x98,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 1018b105c; end: 1018b10a3;  */

void FUN_1018b105c(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  FUN_1018ad790(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018b10a4; end: 1018b10c7;  */

void FUN_1018b10a4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1018b10c8; end: 1018b18e3;  */

undefined * FUN_1018b10c8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dccc38,&UNK_10d98f900);
    puVar2 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20 + (long)puVar11 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = uVar10;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar3 >> 6;
      uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar3 & 0x3f);
      lVar4 = *(long *)(puVar2 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar4 + uVar3 * 8) == (int)uVar10) goto LAB_1018b114c;
          uVar3 = uVar3 + 1 & ~uVar8;
          uVar5 = uVar3 >> 6;
          uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar3 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar2 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(ulong *)(lVar4 + uVar3 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018b1200);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1018b114c:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar2;
}



/* Entry: 1018b18e4; end: 1018b32ab;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018b18e4(double param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_f8;
  ulong uStack_f0;
  ulong uStack_c0;
  undefined *puStack_90;
  
  uVar13 = *param_2;
  if (uVar13 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar22 = param_2[1];
  uVar12 = param_2[2];
  uVar23 = param_2[3];
  uVar3 = param_2[4];
  if (param_3 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar17 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar17 = param_3;
    }
    func_0x000107c60480();
    puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_120;
  if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24f0);
    (*pcVar4)();
  }
  if (uVar17 != 1) {
    uVar8 = uVar13 & 0xffffffffffffff8;
    if (uVar13 >> 0x3e == 0) {
      puStack_90 = *(undefined **)(uVar8 + 0x10);
    }
    else {
      puStack_90 = (undefined *)uVar13;
      if (-1 < (long)uVar13) {
        puStack_90 = (undefined *)uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar22 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar22 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar22) {
        uVar11 = uVar22;
      }
      func_0x000107c60480();
    }
    if (uVar12 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar10 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar23 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar23 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar23) {
        uVar14 = uVar23;
      }
      func_0x000107c60480();
    }
    if (uVar3 >> 0x3e == 0) {
      uStack_c0 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uStack_c0 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uStack_c0 = uVar3;
      }
      func_0x000107c60480();
    }
    uStack_f0 = uVar3 & 0xffffffffffffff8;
    uVar16 = 1;
    puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (uVar16 == uVar17) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24c4);
        (*pcVar4)();
      }
      lVar5 = uVar16 - 1;
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) < uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24c8);
          (*pcVar4)();
        }
        lVar5 = *(long *)(param_3 + 0x20 + lVar5 * 8);
        func_0x000107c61174();
      }
      else {
        func_0x000101887b4c(lVar5,param_3);
      }
      uVar9 = *(undefined8 *)(lVar5 + _DAT_11308c0c0);
      func_0x000107c61174(uVar9);
      func_0x000107c61170(lVar5);
      func_0x000107c30b10(uVar9);
      dVar24 = param_1;
      func_0x000107c61170(uVar9);
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24cc);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_3 + 0x20 + uVar16 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar16;
        func_0x000101887b4c(uVar16,param_3);
      }
      uVar9 = *(undefined8 *)(uVar6 + _DAT_11308c0c0);
      func_0x000107c61174(uVar9);
      func_0x000107c61170(uVar6);
      func_0x000107c30b10(uVar9);
      dVar25 = dVar24;
      func_0x000107c61170(uVar9);
      puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puStack_90 != (undefined *)0x0) {
        uVar6 = 0;
        do {
          while( true ) {
            if ((uVar13 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2498);
                (*pcVar4)();
              }
              uVar7 = *(ulong *)(uVar13 + uVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar6;
              func_0x000101888844(uVar6,uVar13);
            }
            lVar5 = _DAT_11308ce90;
            uVar2 = uVar6 + 1;
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2494);
              (*pcVar4)();
            }
            func_0x000107c30b10(*(undefined8 *)(uVar7 + _DAT_11308ce90));
            if ((param_1 <= dVar25) &&
               (func_0x000107c30b10(*(undefined8 *)(uVar7 + lVar5)), dVar25 < dVar24)) break;
            func_0x000107c61170(uVar7);
            uVar6 = uVar6 + 1;
            if ((undefined *)uVar2 == puStack_90) goto LAB_1018b1c78;
          }
          puVar19 = puStack_f8;
          func_0x000107c61558();
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001018acfe4(0,*(long *)(puStack_f8 + 0x10) + 1,1);
          }
          uVar6 = *(ulong *)(puStack_f8 + 0x10);
          if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar6) {
            func_0x0001018acfe4(1 < *(ulong *)(puStack_f8 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(puStack_f8 + 0x10) = uVar6 + 1;
          *(ulong *)(puStack_f8 + uVar6 * 8 + 0x20) = uVar7;
          uVar6 = uVar2;
        } while ((undefined *)uVar2 != puStack_90);
      }
LAB_1018b1c78:
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar11 != 0) {
        uVar6 = 0;
        do {
          while( true ) {
            if ((uVar22 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24a0);
                (*pcVar4)();
              }
              uVar7 = *(ulong *)(uVar22 + uVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar6;
              func_0x0001018889e0(uVar6,uVar22);
            }
            lVar5 = _DAT_11308cec8;
            uVar2 = uVar6 + 1;
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b249c);
              (*pcVar4)();
            }
            func_0x000107c30b10(*(undefined8 *)(uVar7 + _DAT_11308cec8));
            if ((param_1 <= dVar25) &&
               (func_0x000107c30b10(*(undefined8 *)(uVar7 + lVar5)), dVar25 < dVar24)) break;
            func_0x000107c61170(uVar7);
            uVar6 = uVar6 + 1;
            if (uVar2 == uVar11) goto LAB_1018b1db0;
          }
          puVar19 = puStack_108;
          func_0x000107c61558();
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001018acfb0(0,*(long *)(puStack_108 + 0x10) + 1,1);
          }
          uVar6 = *(ulong *)(puStack_108 + 0x10);
          if (*(ulong *)(puStack_108 + 0x18) >> 1 <= uVar6) {
            func_0x0001018acfb0(1 < *(ulong *)(puStack_108 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(puStack_108 + 0x10) = uVar6 + 1;
          *(ulong *)(puStack_108 + uVar6 * 8 + 0x20) = uVar7;
          uVar6 = uVar2;
        } while (uVar2 != uVar11);
      }
LAB_1018b1db0:
      puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar10 != 0) {
        uVar6 = 0;
        do {
          while( true ) {
            if ((uVar12 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24a8);
                (*pcVar4)();
              }
              uVar7 = *(ulong *)(uVar12 + uVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar6;
              func_0x000101887e84(uVar6,uVar12);
            }
            lVar5 = _DAT_11308cf00;
            uVar2 = uVar6 + 1;
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24a4);
              (*pcVar4)();
            }
            func_0x000107c30b10(*(undefined8 *)(uVar7 + _DAT_11308cf00));
            if ((param_1 <= dVar25) &&
               (func_0x000107c30b10(*(undefined8 *)(uVar7 + lVar5)), dVar25 < dVar24)) break;
            func_0x000107c61170(uVar7);
            uVar6 = uVar6 + 1;
            if (uVar2 == uVar10) goto LAB_1018b1ee8;
          }
          puVar19 = puStack_110;
          func_0x000107c61558();
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001018acf7c(0,*(long *)(puStack_110 + 0x10) + 1,1);
          }
          uVar6 = *(ulong *)(puStack_110 + 0x10);
          if (*(ulong *)(puStack_110 + 0x18) >> 1 <= uVar6) {
            func_0x0001018acf7c(1 < *(ulong *)(puStack_110 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(puStack_110 + 0x10) = uVar6 + 1;
          *(ulong *)(puStack_110 + uVar6 * 8 + 0x20) = uVar7;
          uVar6 = uVar2;
        } while (uVar2 != uVar10);
      }
LAB_1018b1ee8:
      puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar14 != 0) {
        uVar6 = 0;
        do {
          while( true ) {
            if ((uVar23 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24b0);
                (*pcVar4)();
              }
              uVar7 = *(ulong *)(uVar23 + uVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar6;
              func_0x000101888020(uVar6,uVar23);
            }
            lVar5 = _DAT_11308bf78;
            uVar2 = uVar6 + 1;
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24ac);
              (*pcVar4)();
            }
            func_0x000107c30b10(*(undefined8 *)(uVar7 + _DAT_11308bf78));
            if ((param_1 <= dVar25) &&
               (func_0x000107c30b10(*(undefined8 *)(uVar7 + lVar5)), dVar25 < dVar24)) break;
            func_0x000107c61170(uVar7);
            uVar6 = uVar6 + 1;
            if (uVar2 == uVar14) goto LAB_1018b2028;
          }
          puVar19 = puStack_118;
          func_0x000107c61558();
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001018acf48(0,*(long *)(puStack_118 + 0x10) + 1,1);
          }
          uVar6 = *(ulong *)(puStack_118 + 0x10);
          if (*(ulong *)(puStack_118 + 0x18) >> 1 <= uVar6) {
            func_0x0001018acf48(1 < *(ulong *)(puStack_118 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(puStack_118 + 0x10) = uVar6 + 1;
          *(ulong *)(puStack_118 + uVar6 * 8 + 0x20) = uVar7;
          uVar6 = uVar2;
        } while (uVar2 != uVar14);
      }
LAB_1018b2028:
      puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uStack_c0 == 0) {
        if ((long)puStack_f8 < 0) goto LAB_1018b22a8;
LAB_1018b2180:
        if (((ulong)puStack_f8 >> 0x3e & 1) != 0) goto LAB_1018b22a8;
        puVar20 = *(undefined **)(puStack_f8 + 0x10);
        param_1 = dVar25;
      }
      else {
        uVar6 = 0;
        do {
          while( true ) {
            if ((uVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uStack_f0 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24b8);
                (*pcVar4)();
              }
              uVar7 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar6;
              func_0x000101888b7c(uVar6,uVar3);
            }
            lVar5 = _DAT_11308cf38;
            uVar2 = uVar6 + 1;
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24b4);
              (*pcVar4)();
            }
            func_0x000107c30b10(*(undefined8 *)(uVar7 + _DAT_11308cf38));
            if ((param_1 <= dVar25) &&
               (func_0x000107c30b10(*(undefined8 *)(uVar7 + lVar5)), dVar25 < dVar24)) break;
            func_0x000107c61170(uVar7);
            uVar6 = uVar6 + 1;
            if (uVar2 == uStack_c0) goto LAB_1018b2164;
          }
          puVar20 = puVar19;
          func_0x000107c61558();
          if (((ulong)puVar20 & 1) == 0) {
            func_0x0001018acf14(0,*(long *)(puVar19 + 0x10) + 1,1);
          }
          uVar6 = *(ulong *)(puVar19 + 0x10);
          if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar6) {
            func_0x0001018acf14(1 < *(ulong *)(puVar19 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(puVar19 + 0x10) = uVar6 + 1;
          *(ulong *)(puVar19 + uVar6 * 8 + 0x20) = uVar7;
          uVar6 = uVar2;
        } while (uVar2 != uStack_c0);
LAB_1018b2164:
        if (-1 < (long)puStack_f8) goto LAB_1018b2180;
LAB_1018b22a8:
        puVar20 = puStack_f8;
        func_0x000107c60480();
        param_1 = dVar25;
      }
      if (puVar20 == (undefined *)0x0) {
        if (((long)puStack_108 < 0) || (((ulong)puStack_108 >> 0x3e & 1) != 0)) {
          puVar20 = puStack_108;
          func_0x000107c60480();
        }
        else {
          puVar20 = *(undefined **)(puStack_108 + 0x10);
        }
        if (puVar20 == (undefined *)0x0) {
          if (((long)puStack_110 < 0) || (((ulong)puStack_110 >> 0x3e & 1) != 0)) {
            puVar20 = puStack_110;
            func_0x000107c60480();
          }
          else {
            puVar20 = *(undefined **)(puStack_110 + 0x10);
          }
          if (puVar20 == (undefined *)0x0) {
            if (((long)puVar19 < 0) || (((ulong)puVar19 >> 0x3e & 1) != 0)) {
              puVar20 = puVar19;
              func_0x000107c60480();
            }
            else {
              puVar20 = *(undefined **)(puVar19 + 0x10);
            }
            if (puVar20 == (undefined *)0x0) {
              func_0x000107c61574(puStack_f8);
              func_0x000107c61574(puStack_108);
              func_0x000107c61574(puStack_110);
              func_0x000107c61574(puStack_118);
              func_0x000107c61574(puVar19);
              puStack_f8 = (undefined *)0x0;
              puStack_110 = (undefined *)0x0;
              puStack_108 = (undefined *)0x0;
              puStack_118 = (undefined *)0x0;
              puVar19 = (undefined *)0x0;
            }
          }
        }
      }
      puVar20 = puStack_120;
      func_0x000107c61558();
      puVar21 = puStack_120;
      if (((ulong)puVar20 & 1) == 0) {
        puVar21 = (undefined *)0x0;
        FUN_1018a64e8(0,*(long *)(puStack_120 + 0x10) + 1,1,puStack_120);
      }
      uVar6 = *(ulong *)(puVar21 + 0x10);
      puStack_120 = puVar21;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar6) {
        puStack_120 = (undefined *)(ulong)(1 < *(ulong *)(puVar21 + 0x18));
        FUN_1018a64e8(puStack_120,uVar6 + 1,1,puVar21);
      }
      uVar16 = uVar16 + 1;
      *(ulong *)(puStack_120 + 0x10) = uVar6 + 1;
      *(undefined **)(puStack_120 + uVar6 * 0x28 + 0x20) = puStack_f8;
      *(undefined **)(puStack_120 + uVar6 * 0x28 + 0x28) = puStack_108;
      *(undefined **)(puStack_120 + uVar6 * 0x28 + 0x30) = puStack_110;
      *(undefined **)(puStack_120 + uVar6 * 0x28 + 0x38) = puStack_118;
      *(undefined **)(puStack_120 + uVar6 * 0x28 + 0x40) = puVar19;
    } while (uVar16 != uVar17);
  }
  if (param_3 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar17 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar17 == 0) {
    return puStack_120;
  }
  uVar8 = uVar17 - 1;
  if (SBORROW8(uVar17,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b25b8);
    (*pcVar4)();
  }
  if ((param_3 & 0xc000000000000001) == 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b25c8);
      (*pcVar4)();
    }
    if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2718);
      (*pcVar4)();
    }
    uVar8 = *(ulong *)(param_3 + uVar8 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    func_0x000101887b4c(uVar8,param_3);
  }
  uVar9 = *(undefined8 *)(uVar8 + _DAT_11308c0c0);
  func_0x000107c61174(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c30b10(uVar9);
  dVar24 = param_1;
  func_0x000107c61170(uVar9);
  uVar17 = uVar13 & 0xffffffffffffff8;
  if (uVar13 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar17 + 0x10);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar13;
    if (-1 < (long)uVar13) {
      uVar8 = uVar17;
    }
    func_0x000107c60480();
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar19;
  if (uVar8 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24c0);
            (*pcVar4)();
          }
          uVar10 = *(ulong *)(uVar13 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar11;
          func_0x000101888844(uVar11,uVar13);
        }
        uVar14 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b24bc);
          (*pcVar4)();
        }
        func_0x000107c30b10(*(undefined8 *)(uVar10 + _DAT_11308ce90));
        if (param_1 <= dVar24) break;
        func_0x000107c61170(uVar10);
        uVar11 = uVar11 + 1;
        if (uVar14 == uVar8) goto LAB_1018b25f0;
      }
      puVar20 = puVar19;
      func_0x000107c61558();
      if (((ulong)puVar20 & 1) == 0) {
        func_0x0001018acfe4(0,*(long *)(puVar19 + 0x10) + 1,1);
      }
      uVar11 = *(ulong *)(puVar19 + 0x10);
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar11) {
        func_0x0001018acfe4(1 < *(ulong *)(puVar19 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(puVar19 + 0x10) = uVar11 + 1;
      *(ulong *)(puVar19 + uVar11 * 8 + 0x20) = uVar10;
      uVar11 = uVar14;
    } while (uVar14 != uVar8);
  }
LAB_1018b25f0:
  uVar13 = uVar22 & 0xffffffffffffff8;
  if (uVar22 >> 0x3e == 0) {
    uVar17 = *(ulong *)(uVar13 + 0x10);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar17 = uVar13;
    if (0x7fffffffffffffff < uVar22) {
      uVar17 = uVar22;
    }
    func_0x000107c60480();
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar20;
  if (uVar17 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((uVar22 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2714);
            (*pcVar4)();
          }
          uVar11 = *(ulong *)(uVar22 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar11 = uVar8;
          func_0x0001018889e0(uVar8,uVar22);
        }
        uVar10 = uVar8 + 1;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2710);
          (*pcVar4)();
        }
        func_0x000107c30b10(*(undefined8 *)(uVar11 + _DAT_11308cec8));
        if (param_1 <= dVar24) break;
        func_0x000107c61170(uVar11);
        uVar8 = uVar8 + 1;
        if (uVar10 == uVar17) goto LAB_1018b273c;
      }
      puVar21 = puVar20;
      func_0x000107c61558();
      if (((ulong)puVar21 & 1) == 0) {
        func_0x0001018acfb0(0,*(long *)((long)puVar20 + 0x10) + 1,1);
      }
      uVar8 = *(ulong *)((long)puVar20 + 0x10);
      if (*(ulong *)((long)puVar20 + 0x18) >> 1 <= uVar8) {
        func_0x0001018acfb0(1 < *(ulong *)((long)puVar20 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)((long)puVar20 + 0x10) = uVar8 + 1;
      *(ulong *)((long)puVar20 + uVar8 * 8 + 0x20) = uVar11;
      uVar8 = uVar10;
    } while (uVar10 != uVar17);
  }
LAB_1018b273c:
  uVar13 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar13 + 0x10);
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar22 = uVar13;
    if (0x7fffffffffffffff < uVar12) {
      uVar22 = uVar12;
    }
    func_0x000107c60480();
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_90;
  if (uVar22 != 0) {
    uVar17 = 0;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2860);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar12 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar17;
          func_0x000101887e84(uVar17,uVar12);
        }
        uVar11 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b285c);
          (*pcVar4)();
        }
        func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308cf00));
        if (param_1 <= dVar24) break;
        func_0x000107c61170(uVar8);
        uVar17 = uVar17 + 1;
        if (uVar11 == uVar22) goto LAB_1018b2884;
      }
      puVar21 = puStack_90;
      func_0x000107c61558();
      if (((ulong)puVar21 & 1) == 0) {
        func_0x0001018acf7c(0,*(long *)(puStack_90 + 0x10) + 1,1);
      }
      uVar17 = *(ulong *)(puStack_90 + 0x10);
      if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar17) {
        func_0x0001018acf7c(1 < *(ulong *)(puStack_90 + 0x18),uVar17 + 1,1);
      }
      *(ulong *)(puStack_90 + 0x10) = uVar17 + 1;
      *(ulong *)(puStack_90 + uVar17 * 8 + 0x20) = uVar8;
      uVar17 = uVar11;
    } while (uVar11 != uVar22);
  }
LAB_1018b2884:
  uVar13 = uVar23 & 0xffffffffffffff8;
  if (uVar23 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar13 + 0x10);
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar22 = uVar13;
    if (0x7fffffffffffffff < uVar23) {
      uVar22 = uVar23;
    }
    func_0x000107c60480();
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar21;
  if (uVar22 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((uVar23 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b29ac);
            (*pcVar4)();
          }
          uVar17 = *(ulong *)(uVar23 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar17 = uVar12;
          func_0x000101888020(uVar12,uVar23);
        }
        uVar8 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b29a8);
          (*pcVar4)();
        }
        func_0x000107c30b10(*(undefined8 *)(uVar17 + _DAT_11308bf78));
        if (param_1 <= dVar24) break;
        func_0x000107c61170(uVar17);
        uVar12 = uVar12 + 1;
        if (uVar8 == uVar22) goto LAB_1018b29c8;
      }
      puVar18 = puVar21;
      func_0x000107c61558();
      if (((ulong)puVar18 & 1) == 0) {
        func_0x0001018acf48(0,*(long *)(puVar21 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar21 + 0x10);
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar12) {
        func_0x0001018acf48(1 < *(ulong *)(puVar21 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar21 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar21 + uVar12 * 8 + 0x20) = uVar17;
      uVar12 = uVar8;
    } while (uVar8 != uVar22);
  }
LAB_1018b29c8:
  uVar13 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar13 + 0x10);
  }
  else {
    uVar22 = uVar13;
    if (0x7fffffffffffffff < uVar3) {
      uVar22 = uVar3;
    }
    func_0x000107c60480();
  }
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar22 != 0) {
    uVar23 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2be8);
            (*pcVar4)();
          }
          uVar12 = *(ulong *)(uVar3 + uVar23 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar12 = uVar23;
          func_0x000101888b7c(uVar23,uVar3);
        }
        uVar17 = uVar23 + 1;
        if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018b2be4);
          (*pcVar4)();
        }
        func_0x000107c30b10(*(undefined8 *)(uVar12 + _DAT_11308cf38));
        if (dVar24 < param_1) break;
        puVar15 = puVar18;
        func_0x000107c61558();
        if (((ulong)puVar15 & 1) == 0) {
          func_0x0001018acf14(0,*(long *)(puVar18 + 0x10) + 1,1);
        }
        uVar23 = *(ulong *)(puVar18 + 0x10);
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar23) {
          func_0x0001018acf14(1 < *(ulong *)(puVar18 + 0x18),uVar23 + 1,1);
        }
        *(ulong *)(puVar18 + 0x10) = uVar23 + 1;
        *(ulong *)(puVar18 + uVar23 * 8 + 0x20) = uVar12;
        uVar23 = uVar17;
        if (uVar17 == uVar22) goto LAB_1018b2aec;
      }
      func_0x000107c61170(uVar12);
      uVar23 = uVar23 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1018b2aec:
  if (((long)puVar19 < 0) || (((ulong)puVar19 >> 0x3e & 1) != 0)) {
    puVar15 = puVar19;
    func_0x000107c60480();
  }
  else {
    puVar15 = *(undefined **)(puVar19 + 0x10);
  }
  if (puVar15 == (undefined *)0x0) {
    if (((long)puVar20 < 0) || (((ulong)puVar20 >> 0x3e & 1) != 0)) {
      puVar15 = puVar20;
      func_0x000107c60480();
    }
    else {
      puVar15 = *(undefined **)((long)puVar20 + 0x10);
    }
    if (puVar15 == (undefined *)0x0) {
      if (((long)puStack_90 < 0) || (((ulong)puStack_90 >> 0x3e & 1) != 0)) {
        puVar15 = puStack_90;
        func_0x000107c60480();
      }
      else {
        puVar15 = *(undefined **)(puStack_90 + 0x10);
      }
      if (puVar15 == (undefined *)0x0) {
        if (((long)puVar18 < 0) || (((ulong)puVar18 >> 0x3e & 1) != 0)) {
          puVar15 = puVar18;
          func_0x000107c60480();
        }
        else {
          puVar15 = *(undefined **)(puVar18 + 0x10);
        }
        if (puVar15 == (undefined *)0x0) {
          func_0x000107c61574(puVar19);
          func_0x000107c61574(puVar20);
          func_0x000107c61574(puStack_90);
          func_0x000107c61574(puVar21);
          func_0x000107c61574(puVar18);
          puVar19 = (undefined *)0x0;
          puVar20 = (undefined *)0x0;
          puStack_90 = (undefined *)0x0;
          puVar21 = (undefined *)0x0;
          puVar18 = (undefined *)0x0;
        }
      }
    }
  }
  puVar15 = puStack_120;
  func_0x000107c61558();
  if (((ulong)puVar15 & 1) == 0) {
    plVar1 = (long *)(puStack_120 + 0x10);
    puStack_120 = (undefined *)0x0;
    FUN_1018a64e8(0,*plVar1 + 1,1);
  }
  uVar13 = *(ulong *)(puStack_120 + 0x10);
  if (*(ulong *)(puStack_120 + 0x18) >> 1 <= uVar13) {
    puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puStack_120 + 0x18));
    FUN_1018a64e8(puVar15,uVar13 + 1,1,puStack_120);
    puStack_120 = puVar15;
  }
  *(ulong *)(puStack_120 + 0x10) = uVar13 + 1;
  *(undefined **)(puStack_120 + uVar13 * 0x28 + 0x20) = puVar19;
  *(undefined **)(puStack_120 + uVar13 * 0x28 + 0x28) = puVar20;
  *(undefined **)(puStack_120 + uVar13 * 0x28 + 0x30) = puStack_90;
  *(undefined **)(puStack_120 + uVar13 * 0x28 + 0x38) = puVar21;
  *(undefined **)(puStack_120 + uVar13 * 0x28 + 0x40) = puVar18;
  return puStack_120;
}



/* Entry: 1018b32ac; end: 1018b33cb;  */

void FUN_1018b32ac(undefined8 param_1,long param_2,long param_3,char param_4,long param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_d60 [8];
  long lStack_d58;
  undefined1 auStack_a18 [840];
  undefined1 auStack_6d0 [8];
  long lStack_6c8;
  undefined1 auStack_388 [840];
  
  puVar2 = auStack_d60;
  if (((param_5 != 0) && (param_4 != '\x01')) &&
     (lVar4 = *(long *)(param_5 + 0x10), param_2 < lVar4)) {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018b33cc);
      (*pcVar1)();
    }
    param_5 = param_5 + 0x20;
    lVar3 = param_5 + param_2 * 0x348;
    func_0x000107c610b4(auStack_6d0,lVar3,0x348);
    if (lStack_6c8 == param_3) {
      func_0x000107c610b4(auStack_a18,lVar3,0x348);
      FUN_1018b34bc(auStack_a18);
      puVar2 = auStack_6d0;
LAB_1018b33ac:
      func_0x00010178e544(puVar2,auStack_388);
      func_0x000107c610b4(auStack_388,auStack_a18,0x348);
      goto LAB_1018b3380;
    }
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      func_0x000107c610b4(auStack_d60,param_5,0x348);
      func_0x000107c610b4(auStack_a18,param_5,0x348);
      FUN_1018b34bc(auStack_a18);
      if (lStack_d58 == param_3) goto LAB_1018b33ac;
      param_5 = param_5 + 0x348;
    }
  }
  func_0x0001018b3484(auStack_388);
LAB_1018b3380:
  func_0x000107c610b4(param_1,auStack_388,0x348);
  return;
}



/* Entry: 1018b33cc; end: 1018b3423;  */

/* WARNING: Possible PIC construction at 0x0001018b33f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018b3400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018b33f4) */
/* WARNING: Removing unreachable block (ram,0x0001018b3404) */

void FUN_1018b33cc(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 1018b3424; end: 1018b34bb;  */

undefined8 FUN_1018b3424(undefined8 param_1,undefined8 param_2)

{
  FUN_1018b0bf0(param_2,param_1,&UNK_11040b640);
  return param_2;
}



/* Entry: 1018b34bc; end: 1018b34bf;  */

void FUN_1018b34bc(void)

{
  return;
}



/* Entry: 1018b34c0; end: 1018b354f;  */

undefined8 FUN_1018b34c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018b3550; end: 1018b3573;  */

int FUN_1018b3550(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x328);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1018b3574; end: 1018b35cb;  */

/* WARNING: Possible PIC construction at 0x0001018b3598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018b35a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018b359c) */
/* WARNING: Removing unreachable block (ram,0x0001018b35ac) */

void FUN_1018b3574(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1018b35cc; end: 1018b360b;  */

undefined8 FUN_1018b35cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1018b360c; end: 1018b3b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018b360c(void)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined1 auVar13 [16];
  undefined8 uStack_48;
  
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11308c0c8);
  uVar5 = uVar11;
  func_0x000107c30b1c();
  if ((int)uVar5 == 0) {
    uVar5 = uVar11;
    func_0x000107c30b24();
    if ((int)uVar5 == -1) {
      uVar6 = 0x4c4e49;
      lVar8 = -0x1d00000000000000;
    }
    else {
      uVar5 = uVar11;
      func_0x000107c30b24();
      uVar6 = 0x414e49;
      lVar8 = -0x1d00000000000000;
      switch(uVar5) {
      case 1:
        uVar6 = 0x414149;
        break;
      case 2:
        uVar6 = 0x534149;
        break;
      case 3:
        uVar6 = 0x544149;
        break;
      case 4:
        func_0x000107c30b28(uVar11,0xe300000000000000);
        bVar3 = (int)uVar11 == 0;
        uVar1 = 0x41474249;
        if (bVar3) {
          uVar1 = 0x474249;
        }
        uVar6 = (ulong)uVar1;
        lVar8 = -0x1c00000000000000;
        if (bVar3) {
          lVar8 = -0x1d00000000000000;
        }
        break;
      case 5:
        uVar6 = 0x534449;
        break;
      case 6:
        uVar6 = 0x544549;
        break;
      case 7:
        uVar6 = 0x4f5049;
        break;
      case 8:
        uVar6 = 0x424149;
        break;
      case 9:
        uVar6 = 0x434149;
        break;
      case 10:
        uVar6 = 0x464149;
        break;
      default:
        uStack_48 = uVar5;
        func_0x000107c60614(&UNK_11079a048,&uStack_48,&UNK_11079a048,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b3ba0);
        (*pcVar2)();
      case 0xffffffffffffffff:
      case 0:
        break;
      }
    }
    goto LAB_1018b3b64;
  }
  uVar5 = uVar11;
  func_0x000107c30b1c();
  lVar8 = -0x1e00000000000000;
  uVar6 = 0x5054;
  switch(uVar5) {
  case 1:
    break;
  case 2:
    uVar6 = 0x4454;
    break;
  case 3:
    uVar12 = *(ulong *)(unaff_x20 + _DAT_11308c0c0);
    uVar10 = uVar12;
    func_0x000107c30b14();
    func_0x000107c61180();
    lVar9 = lVar8;
    if (uVar10 != 0) {
      uVar6 = 0x58455f50495f5441;
      uVar7 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      if (uVar7 == 0xd000000000000015 && lVar8 == -0x7ffffffef1043390) {
        func_0x000107c6142c(lVar8);
      }
      else {
        lVar9 = lVar8;
        func_0x000107c605b8(uVar7,lVar8,0xd000000000000015,0x800000010efbcc70,0);
        func_0x000107c6142c(lVar8);
        if ((uVar7 & 1) == 0) goto code_r0x0001018b387c;
      }
      lVar8 = -0x1800000000000000;
      break;
    }
code_r0x0001018b387c:
    func_0x000107c30b14();
    func_0x000107c61180();
    if (uVar12 == 0) {
code_r0x0001018b3b10:
      lVar8 = -0x1e00000000000000;
      uVar6 = 0x5441;
    }
    else {
      uVar6 = uVar12;
      func_0x000107c5faec();
      func_0x000107c61170(uVar12);
      if (uVar6 == 0xd000000000000015 && lVar9 == -0x7ffffffef10433d0) {
        func_0x000107c6142c(lVar9);
      }
      else {
        func_0x000107c605b8(uVar6,lVar9,0xd000000000000015,0x800000010efbcc30,0);
        func_0x000107c6142c(lVar9);
        if ((uVar6 & 1) == 0) goto code_r0x0001018b3b10;
      }
      uVar6 = 0x504f5f50495f5441;
      lVar8 = -0x1800000000000000;
    }
    break;
  case 4:
    uVar10 = *(ulong *)(unaff_x20 + _DAT_11308c0c0);
    uVar6 = uVar10;
    func_0x000107c30b14();
    func_0x000107c61180();
    lVar9 = lVar8;
    if (uVar6 != 0) {
      uVar12 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      if (uVar12 == 0xd000000000000013 && lVar8 == -0x7ffffffef10433b0) {
        func_0x000107c6142c(lVar8);
      }
      else {
        lVar9 = lVar8;
        func_0x000107c605b8();
        func_0x000107c6142c(lVar8);
        if ((uVar12 & 1) == 0) goto code_r0x0001018b3998;
      }
      uVar6 = 0x555f50495f544441;
      lVar8 = -0x15ffffffffffb7bf;
      break;
    }
code_r0x0001018b3998:
    func_0x000107c30b14();
    func_0x000107c61180();
    if (uVar10 == 0) {
code_r0x0001018b3b00:
      lVar8 = -0x1d00000000000000;
      uVar6 = 0x544441;
    }
    else {
      uVar6 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      if (uVar6 == 0xd000000000000015 && lVar9 == -0x7ffffffef10433d0) {
        func_0x000107c6142c(lVar9);
      }
      else {
        func_0x000107c605b8(uVar6,lVar9,0xd000000000000015,0x800000010efbcc30,0);
        func_0x000107c6142c(lVar9);
        if ((uVar6 & 1) == 0) goto code_r0x0001018b3b00;
      }
      uVar6 = 0x4f5f50495f544441;
      lVar8 = -0x16ffffffffffffb0;
    }
    break;
  case 5:
    lVar8 = -0x1d00000000000000;
    uVar6 = 0x465441;
    break;
  case 6:
    uVar6 = 0x5741;
    break;
  case 7:
    uVar6 = 0x5041;
    break;
  case 8:
    uVar6 = 0x4441;
    break;
  case 9:
    func_0x000107c30b28();
    uVar6 = 0x414746;
    iVar4 = (int)uVar11;
    uVar10 = 0x4746;
    goto code_r0x0001018b396c;
  case 10:
    func_0x000107c30b28();
    uVar6 = 0x414742;
    iVar4 = (int)uVar11;
    uVar10 = 0x4742;
code_r0x0001018b396c:
    bVar3 = iVar4 == 0;
    if (bVar3) {
      uVar6 = uVar10;
    }
code_r0x0001018b3970:
    lVar8 = -0x1d00000000000000;
    if (bVar3) {
      lVar8 = -0x1e00000000000000;
    }
    break;
  default:
    lVar8 = -0x1e00000000000000;
    uVar6 = 0x414e;
    break;
  case 0xc:
    func_0x000107c30b34();
    bVar3 = (int)uVar11 == 0;
    uVar6 = 0x454c44;
    if (bVar3) {
      uVar6 = 0x4c44;
    }
    goto code_r0x0001018b3970;
  case 0xe:
    lVar8 = -0x1d00000000000000;
    uVar6 = 0x434946;
    break;
  case 0xf:
    uVar6 = 0x4c54;
    break;
  case 0x10:
    lVar8 = -0x1d00000000000000;
    uVar6 = 0x4c4654;
    break;
  case 0x11:
    uVar6 = 0x5454;
    break;
  case 0x12:
    lVar8 = -0x1c00000000000000;
    uVar6 = 0x544f4f54;
    break;
  case 0x15:
    uVar6 = 0x544f53;
    lVar8 = -0x1d00000000000000;
  }
LAB_1018b3b64:
  auVar13._8_8_ = lVar8;
  auVar13._0_8_ = uVar6;
  return auVar13;
}



/* Entry: 1018b3ba0; end: 1018b3c1b;  */

void FUN_1018b3ba0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f148(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112dce598);
  func_0x000107c5f144(uVar1,0xd000000000000014,0x800000010efbbbd0,0xd000000000000011,
                      0x800000010d990620);
  return;
}



/* Entry: 1018b3c1c; end: 1018b42bf;  */

/* WARNING: Possible PIC construction at 0x0001018b3d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018b3d34) */

void FUN_1018b3c1c(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(unaff_x20 + 0xb0);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 == 0) {
    uVar7 = *(ulong *)(unaff_x20 + 0xa8);
    *(undefined **)(unaff_x20 + 0xa8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000107c61434(uVar7);
    func_0x000100403514(0,uVar9,0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b3d7c);
      (*pcVar3)();
    }
    uVar10 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar7 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
        uVar6 = uVar9;
      }
      else {
        uVar4 = uVar10;
        uVar6 = uVar7;
        FUN_101887b4c();
      }
      func_0x000107c61174();
      uVar5 = uVar4;
      FUN_1018b360c();
      uVar9 = uVar6;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      uVar4 = uVar1 + 1;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        uVar9 = uVar4;
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar4,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4;
      *(ulong *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar2 + uVar1 * 0x10 + 0x28) = uVar6;
    } while (uVar8 != uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 1018b42c0; end: 1018b4967;  */

void FUN_1018b42c0(double param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  undefined8 uVar16;
  double dVar17;
  undefined1 auStack_70e0 [2744];
  undefined8 uStack_6628;
  undefined8 uStack_6620;
  undefined8 uStack_6618;
  undefined8 uStack_6610;
  double dStack_6608;
  undefined8 uStack_6600;
  undefined8 uStack_65f8;
  undefined8 uStack_65f0;
  undefined8 uStack_65e8;
  undefined8 uStack_65e0;
  undefined8 uStack_65d8;
  undefined8 uStack_65d0;
  undefined8 uStack_65c8;
  undefined8 uStack_65c0;
  undefined8 uStack_65b8;
  undefined8 uStack_65b0;
  undefined8 uStack_65a8;
  undefined8 uStack_65a0;
  undefined8 uStack_6598;
  undefined8 uStack_6590;
  undefined8 uStack_6588;
  undefined8 uStack_6577;
  ulong uStack_5b70;
  undefined1 auStack_5b68 [1448];
  undefined1 auStack_55c0 [1288];
  undefined1 auStack_50b8 [2744];
  ulong uStack_4600;
  undefined1 auStack_45f8 [1448];
  undefined1 auStack_4050 [1288];
  undefined1 auStack_3b48 [1448];
  uint auStack_35a0 [686];
  undefined1 auStack_2ae8 [1448];
  long alStack_2540 [343];
  undefined1 auStack_1a88 [1448];
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined1 uStack_1478;
  undefined1 auStack_1468 [776];
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  double dStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_104f;
  undefined1 auStack_1038 [1288];
  undefined1 auStack_b30 [1288];
  undefined1 auStack_628 [1464];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = *param_2;
  func_0x000107c610b4(auStack_628,param_2 + 1,0x5a8);
  func_0x000107c610b4(auStack_b30,param_2 + 0xb6,0x502);
  pcVar3 = "parse";
  uVar10 = 5;
  func_0x0001018b3d7c("parse",5,2);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  func_0x000107c40fd4(uVar16);
  dVar17 = param_1;
  func_0x0001000d224c(alStack_2540);
  if (alStack_2540[0] == 0) {
    func_0x0001018b723c(param_2,alStack_2540,0x112dcbc88,&UNK_10d98e360);
  }
  else {
    uVar14 = param_3[1];
    func_0x000107c5fadc(uVar14,param_3[2]);
    if ((long)param_3[4] < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018b47fc);
      (*pcVar1)();
    }
    lVar4 = alStack_2540[0];
    func_0x000107c3d32c();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    uVar5 = 0;
    func_0x00010468506c(0);
    lVar6 = lVar4;
    func_0x000107c5fc54(lVar4,uVar5);
    func_0x000107c61170(lVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(long *)(unaff_x20 + 0xb0) = lVar6;
    func_0x000107c6142c(uVar5);
    func_0x0001018b3c1c();
    uVar14 = *(ulong *)(unaff_x20 + 0xb0);
    if (uVar14 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar7 = uVar14;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      func_0x000107c610b4(alStack_2540,param_2,0xab2);
      iVar2 = (int)alStack_2540;
      FUN_10178e478();
      if (iVar2 == 1) {
        FUN_10178ed8c(auStack_50b8);
        func_0x000107c610b4(auStack_1a88,auStack_50b8,0x5a8);
        uStack_14d8 = 0;
        uStack_14e0 = 0;
        uStack_14c8 = 0;
        uStack_14d0 = 0;
        uStack_14c0 = 1;
        uStack_14b0 = 0;
        uStack_14b8 = 0;
        uStack_14a0 = 0;
        uStack_14a8 = 0;
        uStack_1490 = 0;
        uStack_1498 = 0;
        uStack_1480 = 0;
        uStack_1488 = 0;
        uStack_1478 = 0;
        func_0x00010178e4b4(&uStack_5b70);
        func_0x000107c610b4(auStack_1468,&uStack_5b70,0x301);
        uStack_1150 = 0;
        uStack_1158 = 0;
        uStack_1140 = 0;
        uStack_1148 = 0;
        uStack_1130 = 0;
        uStack_1138 = 0;
        uStack_1120 = 0;
        uStack_1128 = 0;
        uStack_1110 = 0;
        uStack_1118 = 0;
        uStack_1160 = 1;
        uStack_1108 = 0;
        func_0x00010178e4d4(&uStack_6628);
        uStack_1078 = uStack_65a0;
        uStack_1080 = uStack_65a8;
        uStack_1068 = uStack_6590;
        uStack_1070 = uStack_6598;
        uStack_1060 = uStack_6588;
        uStack_104f = uStack_6577;
        uStack_10b8 = uStack_65e0;
        uStack_10c0 = uStack_65e8;
        uStack_10a8 = uStack_65d0;
        uStack_10b0 = uStack_65d8;
        uStack_1098 = uStack_65c0;
        uStack_10a0 = uStack_65c8;
        uStack_1088 = uStack_65b0;
        uStack_1090 = uStack_65b8;
        uStack_10f8 = uStack_6620;
        uStack_1100 = uStack_6628;
        uStack_10e8 = uStack_6610;
        uStack_10f0 = uStack_6618;
        uStack_10d8 = uStack_6600;
        dStack_10e0 = dStack_6608;
        uStack_10c8 = uStack_65f0;
        uStack_10d0 = uStack_65f8;
        func_0x000104220e6c(auStack_35a0,0x17,auStack_1a88,&uStack_14e0,auStack_1468,1,0,1,0,0x202);
        uVar15 = (ulong)auStack_35a0[0];
        func_0x000107c610b4(&uStack_4600,auStack_35a0,0xab2);
        puVar8 = auStack_3b48;
        puVar11 = auStack_50b8;
        dVar17 = dStack_6608;
      }
      else {
        func_0x000107c610b4(auStack_3b48,auStack_628,0x5a8);
        func_0x000107c610b4(auStack_4050,auStack_b30,0x502);
        puVar8 = auStack_45f8;
        puVar11 = auStack_628;
        uStack_4600 = uVar15;
      }
      func_0x000107c610b4(puVar8,puVar11,0x5a8);
      func_0x0001018b723c(param_2,auStack_50b8,0x112dcbc88,&UNK_10d98e360);
      FUN_1018b4968(auStack_2ae8,auStack_3b48,param_3,param_4);
      func_0x000107c615e8(alStack_2540[0]);
      if ((int)uVar15 == 0x17) {
        uStack_4600 = *param_3;
      }
      func_0x0001018b71ec(auStack_2ae8,auStack_45f8);
      func_0x000107c610b4(&uStack_6628,&uStack_4600,0xab2);
      func_0x000107c610b4(&uStack_5b70,&uStack_4600,0xab2);
      func_0x00010178e4a0(&uStack_5b70);
      func_0x000107c610b4(auStack_50b8,&uStack_4600,0xab2);
      FUN_101795250(&uStack_6628,auStack_70e0);
      func_0x00010179528c(auStack_50b8);
      (*(code *)pcVar3)();
      func_0x000107c40fd4(uVar16);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
      lVar4 = *(long *)(unaff_x20 + 0x80);
      uVar5 = uVar16;
      func_0x0001000a8868(unaff_x20 + 0x60,uVar16);
      uVar15 = param_3[6];
      func_0x000104840a4c(uVar15);
      uVar14 = *param_3;
      uVar12 = uVar5;
      func_0x0001046b4ddc(uVar14);
      uVar7 = param_3[7];
      uVar13 = uVar12;
      func_0x00010420d984(uVar7);
      (**(code **)(lVar4 + 8))
                ((dVar17 - param_1) * 1000.0,uVar15,uVar5,uVar14,uVar12,uVar7,uVar13,uVar16,lVar4);
      func_0x000107c61574(uVar10);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uVar13);
      func_0x000107c610b4(auStack_70e0,auStack_5b68,0x5a8);
      puVar8 = auStack_55c0;
      uVar15 = uStack_5b70;
      goto LAB_1018b490c;
    }
    func_0x0001018b723c(param_2,alStack_2540,0x112dcbc88,&UNK_10d98e360);
    func_0x000107c615e8(alStack_2540[0]);
  }
  (*(code *)pcVar3)();
  func_0x000107c40fd4(uVar16);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar4 = *(long *)(unaff_x20 + 0x80);
  uVar5 = uVar16;
  func_0x0001000a8868(unaff_x20 + 0x60,uVar16);
  uVar14 = param_3[6];
  func_0x000104840a4c(uVar14);
  uVar7 = *param_3;
  uVar12 = uVar5;
  func_0x0001046b4ddc(uVar7);
  uVar9 = param_3[7];
  uVar13 = uVar12;
  func_0x00010420d984(uVar9);
  (**(code **)(lVar4 + 8))
            ((dVar17 - param_1) * 1000.0,uVar14,uVar5,uVar7,uVar12,uVar9,uVar13,uVar16,lVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar12);
  func_0x000107c6142c(uVar13);
  func_0x000107c610b4(auStack_70e0,auStack_628,0x5a8);
  puVar8 = auStack_b30;
LAB_1018b490c:
  func_0x000107c610b4(auStack_1038,puVar8,0x502);
  *extraout_x8 = uVar15;
  func_0x000107c610b4(extraout_x8 + 1,auStack_70e0,0x5a8);
  func_0x000107c610b4(extraout_x8 + 0xb6,auStack_1038,0x502);
  return;
}



/* Entry: 1018b4968; end: 1018b62eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018b4968(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  long extraout_x12;
  long unaff_x20;
  int *piVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_3e40;
  undefined1 auStack_3e38 [8];
  long lStack_3e30;
  undefined1 auStack_3e28 [8];
  undefined8 auStack_3e20 [3];
  undefined4 auStack_3e08 [2];
  long alStack_3e00 [6];
  undefined2 auStack_3dd0 [4];
  undefined8 auStack_3dc8 [2];
  undefined1 auStack_3db8 [8];
  undefined8 uStack_3db0;
  undefined2 auStack_3da8 [4];
  long lStack_3da0;
  undefined1 auStack_3d98 [8];
  undefined8 auStack_3d90 [6];
  undefined1 auStack_3d60 [8];
  undefined8 uStack_3d58;
  undefined1 auStack_3d50 [8];
  undefined8 uStack_3d48;
  undefined1 auStack_3d40 [8];
  long alStack_3d38 [5];
  undefined1 auStack_3d10 [8];
  long alStack_3d08 [5];
  undefined1 auStack_3ce0 [8];
  undefined8 auStack_3cd8 [2];
  undefined1 auStack_3cc8 [8];
  undefined8 auStack_3cc0 [2];
  undefined1 auStack_3cb0 [8];
  undefined8 auStack_3ca8 [5];
  undefined8 uStack_3c80;
  long lStack_3c78;
  undefined8 uStack_3c70;
  undefined8 uStack_3c68;
  long lStack_3c60;
  undefined8 uStack_3c58;
  long lStack_3c50;
  undefined8 uStack_3c48;
  undefined8 uStack_3c40;
  undefined8 uStack_3c38;
  undefined8 uStack_3c30;
  undefined8 uStack_3c28;
  int *piStack_3c20;
  int *piStack_3c18;
  long lStack_3c10;
  long lStack_3c08;
  long lStack_3c00;
  ulong uStack_3bf8;
  long lStack_3bf0;
  ulong uStack_3be8;
  int *piStack_3be0;
  undefined8 uStack_3bd8;
  code *pcStack_3bd0;
  undefined8 uStack_3bc8;
  undefined8 *puStack_3bc0;
  undefined8 uStack_3bb8;
  long lStack_3bb0;
  undefined8 *puStack_3ba8;
  undefined8 uStack_3b98;
  undefined8 uStack_3b90;
  undefined8 uStack_3b88;
  undefined8 uStack_3b80;
  undefined8 uStack_3b78;
  undefined8 uStack_3b70;
  undefined8 uStack_3b68;
  undefined8 uStack_3b60;
  undefined8 uStack_3b58;
  undefined8 uStack_3b50;
  undefined8 uStack_3b48;
  undefined8 uStack_3b40;
  undefined8 uStack_3b38;
  undefined8 uStack_3b27;
  undefined8 uStack_35f0;
  undefined8 uStack_35e8;
  undefined8 uStack_35e0;
  undefined8 uStack_35d8;
  undefined8 uStack_35d0;
  undefined8 uStack_35c8;
  undefined8 uStack_35c0;
  undefined8 uStack_35b8;
  undefined8 uStack_35b0;
  undefined8 uStack_35a8;
  undefined8 uStack_35a0;
  ulong uStack_3598;
  undefined8 uStack_3590;
  undefined2 uStack_3588;
  undefined6 uStack_3586;
  undefined2 uStack_3580;
  undefined6 uStack_357e;
  undefined2 uStack_3578;
  undefined6 uStack_3576;
  undefined8 uStack_3570;
  undefined8 uStack_3568;
  undefined8 uStack_3560;
  undefined8 uStack_3558;
  undefined8 uStack_3550;
  undefined8 uStack_3548;
  undefined8 uStack_3540;
  undefined8 uStack_3538;
  undefined8 uStack_3530;
  undefined8 uStack_3528;
  undefined8 uStack_3520;
  undefined8 uStack_3518;
  undefined8 uStack_3510;
  undefined8 uStack_3508;
  undefined8 uStack_3500;
  undefined8 uStack_34f8;
  undefined8 uStack_34f0;
  undefined8 uStack_34e8;
  undefined8 uStack_34e0;
  undefined8 uStack_34d8;
  undefined8 uStack_34d0;
  undefined8 uStack_34c8;
  undefined8 uStack_34c0;
  undefined8 uStack_34b8;
  long lStack_34b0;
  undefined8 uStack_34a8;
  undefined8 uStack_34a0;
  long lStack_3498;
  undefined8 uStack_3490;
  undefined8 uStack_3488;
  long lStack_3480;
  undefined8 uStack_3478;
  undefined8 uStack_3470;
  undefined8 uStack_3468;
  undefined8 uStack_3460;
  undefined8 uStack_3458;
  undefined8 uStack_3450;
  int *piStack_3448;
  int *piStack_3440;
  undefined1 uStack_3438;
  undefined8 uStack_3437;
  undefined8 uStack_342f;
  undefined8 uStack_3427;
  undefined8 uStack_341f;
  undefined8 uStack_3417;
  undefined8 uStack_340f;
  undefined8 uStack_3407;
  undefined8 uStack_33ff;
  undefined8 uStack_33f7;
  undefined8 uStack_33ef;
  undefined8 uStack_33e7;
  undefined8 uStack_33df;
  undefined8 uStack_33d7;
  undefined8 uStack_33cf;
  undefined8 uStack_33c7;
  undefined8 uStack_33bf;
  undefined1 auStack_33b7 [351];
  long lStack_3258;
  undefined1 auStack_3250 [520];
  undefined8 uStack_3048;
  undefined8 uStack_3040;
  undefined8 uStack_3038;
  undefined8 uStack_3030;
  undefined8 uStack_3028;
  undefined8 uStack_3020;
  undefined8 uStack_3018;
  undefined8 uStack_3010;
  undefined8 uStack_3008;
  undefined8 uStack_3000;
  undefined8 uStack_2ff8;
  undefined8 *puStack_2ff0;
  undefined8 uStack_2fe8;
  undefined8 uStack_2fe0;
  undefined8 uStack_2fd8;
  undefined8 uStack_2fd0;
  undefined1 uStack_2fc8;
  undefined7 uStack_2fc7;
  undefined8 uStack_2fc0;
  undefined8 uStack_2fb8;
  undefined8 uStack_2fb0;
  undefined8 uStack_2fa8;
  undefined8 uStack_2fa0;
  undefined8 uStack_2f98;
  undefined8 uStack_2f90;
  undefined8 uStack_2f88;
  undefined8 uStack_2f80;
  undefined8 uStack_2f78;
  undefined8 uStack_2f70;
  undefined8 uStack_2f68;
  undefined8 uStack_2f60;
  undefined8 uStack_2f58;
  undefined8 uStack_2f50;
  undefined8 uStack_2f48;
  undefined8 uStack_2f40;
  undefined8 uStack_2f38;
  undefined8 uStack_2f30;
  undefined8 uStack_2f28;
  undefined8 uStack_2f20;
  undefined8 uStack_2f18;
  undefined8 uStack_2f10;
  undefined8 uStack_2f08;
  undefined8 uStack_2f00;
  undefined8 uStack_2ef8;
  undefined8 uStack_2ef0;
  undefined8 uStack_2ee8;
  undefined8 uStack_2ee0;
  undefined8 uStack_2ed8;
  undefined8 uStack_2ed0;
  undefined8 uStack_2ec8;
  undefined8 uStack_2ec0;
  undefined8 uStack_2eb8;
  undefined8 uStack_2eb0;
  undefined8 uStack_2ea8;
  undefined8 uStack_2ea0;
  undefined8 uStack_2e98;
  undefined1 uStack_2e90;
  undefined8 uStack_2e8f;
  undefined8 uStack_2e87;
  undefined8 uStack_2e7f;
  undefined8 uStack_2e77;
  undefined8 uStack_2e6f;
  undefined8 uStack_2e67;
  undefined8 uStack_2e5f;
  undefined8 uStack_2e57;
  undefined8 uStack_2e4f;
  undefined8 uStack_2e47;
  undefined8 uStack_2e3f;
  undefined8 uStack_2e37;
  undefined8 uStack_2e2f;
  undefined8 uStack_2e27;
  undefined8 uStack_2e1f;
  undefined8 uStack_2e17;
  undefined1 auStack_2e0f [351];
  long lStack_2cb0;
  undefined1 auStack_2ca8 [520];
  undefined8 uStack_2aa0;
  undefined8 uStack_2a98;
  undefined8 uStack_2a90;
  undefined8 uStack_2a88;
  undefined8 uStack_2a80;
  undefined8 uStack_2a78;
  undefined8 uStack_2a70;
  undefined8 uStack_2a68;
  undefined8 uStack_2a60;
  undefined8 uStack_2a58;
  undefined8 uStack_2a50;
  ulong uStack_2a48;
  undefined8 uStack_2a40;
  undefined1 uStack_2a38;
  undefined7 uStack_2a37;
  undefined1 uStack_2a30;
  undefined7 uStack_2a2f;
  undefined1 uStack_2a28;
  undefined7 uStack_2a27;
  undefined8 uStack_2a20;
  undefined8 uStack_2a18;
  undefined8 uStack_2a10;
  undefined8 uStack_2a08;
  undefined8 uStack_2a00;
  undefined8 uStack_29f8;
  undefined8 uStack_29f0;
  undefined8 uStack_29e8;
  undefined8 uStack_29e0;
  undefined8 uStack_29d8;
  undefined8 uStack_29d0;
  undefined8 uStack_29c8;
  undefined8 uStack_29c0;
  undefined8 uStack_29b8;
  undefined8 uStack_29b0;
  undefined8 uStack_29a8;
  undefined8 uStack_29a0;
  undefined8 uStack_2998;
  undefined8 uStack_2990;
  undefined8 uStack_2988;
  undefined8 uStack_2980;
  undefined8 uStack_2978;
  undefined8 uStack_2970;
  undefined8 uStack_2968;
  long lStack_2960;
  undefined8 uStack_2958;
  undefined8 uStack_2950;
  long lStack_2948;
  undefined8 uStack_2940;
  undefined8 uStack_2938;
  long lStack_2930;
  undefined8 uStack_2928;
  undefined8 uStack_2920;
  undefined8 uStack_2918;
  undefined8 uStack_2910;
  undefined8 uStack_2908;
  undefined8 uStack_2900;
  int *piStack_28f8;
  int *piStack_28f0;
  undefined1 uStack_28e8;
  undefined8 uStack_28e7;
  undefined8 uStack_28df;
  undefined8 uStack_28d7;
  undefined8 uStack_28cf;
  undefined8 uStack_28c7;
  undefined8 uStack_28bf;
  undefined8 uStack_28b7;
  undefined8 uStack_28af;
  undefined8 uStack_28a7;
  undefined8 uStack_289f;
  undefined8 uStack_2897;
  undefined8 uStack_288f;
  undefined8 uStack_2887;
  undefined8 uStack_287f;
  undefined8 uStack_2877;
  undefined8 uStack_286f;
  undefined1 auStack_2867 [351];
  long lStack_2708;
  undefined1 auStack_2700 [520];
  undefined1 auStack_24f8 [520];
  undefined1 auStack_22f0 [352];
  undefined7 uStack_2190;
  undefined1 uStack_2189;
  undefined7 uStack_2188;
  undefined1 uStack_2181;
  undefined7 uStack_2180;
  undefined1 uStack_2179;
  undefined7 uStack_2178;
  undefined1 uStack_2171;
  undefined7 uStack_2170;
  undefined1 uStack_2169;
  undefined7 uStack_2168;
  undefined1 uStack_2161;
  undefined7 uStack_2160;
  undefined1 uStack_2159;
  undefined7 uStack_2158;
  undefined1 uStack_2151;
  undefined7 uStack_2150;
  undefined1 uStack_2149;
  undefined7 uStack_2148;
  undefined1 uStack_2141;
  undefined7 uStack_2140;
  undefined1 uStack_2139;
  undefined7 uStack_2138;
  undefined1 uStack_2131;
  undefined7 uStack_2130;
  undefined1 uStack_2129;
  undefined7 uStack_2128;
  undefined1 uStack_2121;
  undefined7 uStack_2120;
  undefined1 uStack_2119;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 uStack_20e0;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined8 uStack_20c8;
  undefined8 uStack_20c0;
  undefined8 uStack_20b8;
  undefined8 uStack_20b0;
  undefined8 uStack_20a8;
  undefined8 uStack_20a0;
  undefined8 uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined8 uStack_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2040;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  undefined8 uStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  undefined8 uStack_2008;
  undefined8 uStack_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  long lStack_1fe8;
  undefined8 uStack_1fe0;
  undefined8 uStack_1fd8;
  long lStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  long lStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f90;
  undefined8 uStack_1f88;
  int *piStack_1f80;
  int *piStack_1f78;
  undefined1 uStack_1f70;
  undefined8 uStack_1f60;
  long lStack_1f58;
  undefined8 uStack_1f50;
  undefined8 uStack_1f48;
  long lStack_1f40;
  undefined8 uStack_1f38;
  undefined8 uStack_1f30;
  long lStack_1f28;
  undefined8 uStack_1f20;
  undefined8 uStack_1f18;
  undefined8 uStack_1f10;
  undefined8 uStack_1f08;
  undefined8 uStack_1f00;
  undefined8 uStack_1ef8;
  int *piStack_1ef0;
  int *piStack_1ee8;
  undefined1 uStack_1ee0;
  byte bStack_1ed8;
  undefined7 uStack_1ed7;
  undefined8 uStack_1ed0;
  undefined8 uStack_1ec8;
  undefined8 uStack_1ec0;
  undefined8 uStack_1eb8;
  undefined8 uStack_1eb0;
  undefined8 uStack_1e98;
  undefined8 uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  undefined8 uStack_1e60;
  undefined8 uStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  undefined8 uStack_1e40;
  undefined8 uStack_1e38;
  undefined8 uStack_1e30;
  undefined8 uStack_1e28;
  undefined8 uStack_1e20;
  undefined8 uStack_1e18;
  undefined8 uStack_1e10;
  undefined8 uStack_1e08;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 uStack_1de8;
  undefined8 uStack_1de0;
  undefined8 uStack_1dd8;
  undefined8 uStack_1dd0;
  undefined8 uStack_1dc8;
  undefined8 uStack_1dc0;
  undefined8 uStack_1db8;
  undefined8 uStack_1db0;
  undefined8 uStack_1da8;
  undefined8 uStack_1d1f;
  undefined8 uStack_1d17;
  undefined8 uStack_1d0f;
  undefined8 uStack_1d07;
  undefined8 uStack_1cff;
  undefined8 uStack_1cf7;
  undefined8 uStack_1cef;
  undefined8 uStack_1ce7;
  undefined8 uStack_1cdf;
  undefined8 uStack_1cd7;
  undefined8 uStack_1ccf;
  undefined8 uStack_1cc7;
  undefined8 uStack_1cbf;
  undefined8 uStack_1cb7;
  undefined8 uStack_1caf;
  undefined8 uStack_1ca7;
  undefined1 auStack_1c9f [351];
  long lStack_1b40;
  undefined1 auStack_1b38 [520];
  undefined8 uStack_1930;
  long lStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  long lStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  long lStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  int *piStack_18c0;
  int *piStack_18b8;
  undefined1 uStack_18b0;
  long lStack_1388;
  undefined8 uStack_1380;
  undefined1 uStack_1378;
  undefined8 uStack_1250;
  long lStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  long lStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  long lStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  int *piStack_11e0;
  int *piStack_11d8;
  undefined1 uStack_11d0;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  ulong uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d60;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 *puStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined1 uStack_cd0;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c4f;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  ulong uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined2 uStack_a70;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined2 uStack_a20;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined1 auStack_9df [351];
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_780;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 auStack_648 [521];
  undefined1 auStack_43f [351];
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
  undefined8 uStack_250;
  undefined8 uStack_248;
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
  undefined1 uStack_1e0;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uVar26 = param_1[6];
  uVar27 = param_1[7];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_f0 = param_1[10];
  uStack_3bd8 = (undefined8 *)param_1[0xb];
  uVar28 = param_1[0xc];
  uStack_1c8 = param_1[0xe];
  uStack_1d0 = param_1[0xd];
  uStack_1b8 = param_1[0x10];
  uStack_1c0 = param_1[0xf];
  uStack_1a8 = param_1[0x12];
  uStack_1b0 = param_1[0x11];
  uStack_198 = param_1[0x14];
  uStack_1a0 = param_1[0x13];
  uStack_188 = param_1[0x16];
  uStack_190 = param_1[0x15];
  uStack_178 = param_1[0x18];
  uStack_180 = param_1[0x17];
  uStack_168 = param_1[0x1a];
  uStack_170 = param_1[0x19];
  uStack_158 = param_1[0x1c];
  uStack_160 = param_1[0x1b];
  uStack_148 = param_1[0x1e];
  uStack_150 = param_1[0x1d];
  uStack_138 = param_1[0x20];
  uStack_140 = param_1[0x1f];
  uStack_128 = param_1[0x22];
  uStack_130 = param_1[0x21];
  uStack_118 = param_1[0x24];
  uStack_120 = param_1[0x23];
  uStack_110 = param_1[0x25];
  uStack_3bb8 = param_1[0x26];
  uStack_218 = param_1[0x30];
  uStack_220 = param_1[0x2f];
  uStack_208 = param_1[0x32];
  uStack_210 = param_1[0x31];
  uStack_1f8 = param_1[0x34];
  uStack_200 = param_1[0x33];
  uStack_1e8 = param_1[0x36];
  uStack_1f0 = param_1[0x35];
  uStack_1e0 = *(undefined1 *)(param_1 + 0x37);
  uStack_258 = param_1[0x28];
  uStack_260 = param_1[0x27];
  uStack_248 = param_1[0x2a];
  uStack_250 = param_1[0x29];
  uStack_238 = param_1[0x2c];
  uStack_240 = param_1[0x2b];
  uStack_228 = param_1[0x2e];
  uStack_230 = param_1[0x2d];
  uStack_298 = *(undefined8 *)((long)param_1 + 0x201);
  uStack_2a0 = *(undefined8 *)((long)param_1 + 0x1f9);
  uStack_288 = *(undefined8 *)((long)param_1 + 0x211);
  uStack_290 = *(undefined8 *)((long)param_1 + 0x209);
  uStack_278 = *(undefined8 *)((long)param_1 + 0x221);
  uStack_280 = *(undefined8 *)((long)param_1 + 0x219);
  uStack_268 = *(undefined8 *)((long)param_1 + 0x231);
  uStack_270 = *(undefined8 *)((long)param_1 + 0x229);
  uStack_2d8 = *(undefined8 *)((long)param_1 + 0x1c1);
  uStack_2e0 = *(undefined8 *)((long)param_1 + 0x1b9);
  uStack_2c8 = *(undefined8 *)((long)param_1 + 0x1d1);
  uStack_2d0 = *(undefined8 *)((long)param_1 + 0x1c9);
  uStack_2b8 = *(undefined8 *)((long)param_1 + 0x1e1);
  uVar25 = *(undefined8 *)((long)param_1 + 0x1d9);
  uStack_2a8 = *(undefined8 *)((long)param_1 + 0x1f1);
  uStack_2b0 = *(undefined8 *)((long)param_1 + 0x1e9);
  piStack_3be0 = param_2;
  puStack_3bc0 = extraout_x8;
  uStack_2c0 = uVar25;
  func_0x000107c610b4(auStack_43f,(long)param_1 + 0x239,0x15f);
  lStack_3bb0 = param_1[0x73];
  puStack_3ba8 = param_1;
  func_0x000107c610b4(auStack_648,param_1 + 0x74,0x208);
  lVar6 = 0x112dcbcf8;
  func_0x0001000285a8(0x112dcbcf8,&UNK_10d98e3f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)&uStack_3c80 - extraout_x8_00;
  lVar7 = 0;
  func_0x0001046d90b0();
  lVar19 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  uVar17 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_3be8 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = uVar17 - extraout_x12;
  pcVar8 = "parseCommon";
  uVar13 = 0xb;
  func_0x0001018b3d7c("parseCommon",0xb,2);
  pcStack_3bd0 = (code *)pcVar8;
  uStack_3bc8 = uVar13;
  func_0x0001018b723c(param_3,lVar24,0x112dcbcf8,&UNK_10d98e3f0);
  lVar6 = lVar24;
  lStack_3bf0 = lVar7;
  (**(code **)(lVar19 + 0x30))(lVar24,1,lVar7);
  if ((int)lVar6 == 1) {
    func_0x0001018abb7c(lVar24);
  }
  else {
    func_0x0001018a91ac(lVar24,lVar21);
    func_0x0001000d224c(&lStack_1388);
    lVar6 = lStack_1388;
    if (lStack_1388 == 0) {
      func_0x0001018abbc4(lVar21);
    }
    else {
      uVar17 = *(ulong *)(unaff_x20 + 0xb0);
      if (uVar17 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
        piVar18 = piStack_3be0;
      }
      else {
        uVar9 = uVar17 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar17) {
          uVar9 = uVar17;
        }
        func_0x000107c60480();
        piVar18 = piStack_3be0;
      }
      piStack_3be0 = piVar18;
      if (uVar9 != 0) {
        iVar5 = *piVar18;
        if (iVar5 == 6) {
          uVar13 = *(undefined8 *)(piVar18 + 2);
          func_0x000107c5fadc(uVar13,*(undefined8 *)(piVar18 + 4));
          if (*(long *)(piVar18 + 8) < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b5634);
            (*pcVar2)();
          }
          lVar19 = lVar6;
          func_0x000107c3d2bc();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar13 = 0;
          func_0x000104681c70(0);
          lVar7 = lVar19;
          func_0x000107c5fc54(lVar19,uVar13);
          func_0x000107c61170(lVar19);
        }
        else {
          lVar7 = 0;
        }
        uVar13 = *(undefined8 *)(unaff_x20 + 0x90);
        *(long *)(unaff_x20 + 0x90) = lVar7;
        func_0x000107c6142c(uVar13);
        if (iVar5 == 3) {
          uVar13 = *(undefined8 *)(piVar18 + 2);
          func_0x000107c5fadc(uVar13,*(undefined8 *)(piVar18 + 4));
          if (*(long *)(piVar18 + 8) < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b5638);
            (*pcVar2)();
          }
          lVar19 = lVar6;
          func_0x000107c5e294();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar13 = 0;
          func_0x0001046a9c0c(0);
          lVar7 = lVar19;
          func_0x000107c5fc54(lVar19,uVar13);
          func_0x000107c61170(lVar19);
        }
        else {
          lVar7 = 0;
        }
        uVar13 = *(undefined8 *)(unaff_x20 + 0x98);
        *(long *)(unaff_x20 + 0x98) = lVar7;
        func_0x000107c6142c(uVar13);
        uVar17 = uStack_3be8;
        func_0x000101541068(lVar21,uStack_3be8);
        func_0x0001047c6864(0);
        func_0x000107c610f8();
        func_0x0001047c2b40();
        uVar9 = uVar17;
        func_0x000107c49f38();
        if ((int)uVar9 != 0) {
          func_0x0001000d224c(&lStack_1388);
          lVar7 = lStack_1388;
          func_0x000107c4260c();
          func_0x000107c615e8(lStack_1388);
          if ((int)lVar7 != 0) {
            uVar13 = *(undefined8 *)(piVar18 + 2);
            func_0x000107c5fadc(uVar13,*(undefined8 *)(piVar18 + 4));
            if (*(long *)(piVar18 + 8) < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b62e8);
              (*pcVar2)();
            }
            lVar7 = lVar6;
            func_0x000107c497e8();
            func_0x000107c61180();
            func_0x000107c61170(uVar13);
            uVar13 = 0;
            func_0x00010468314c(0);
            lVar19 = lVar7;
            func_0x000107c5fc54(lVar7,uVar13);
            func_0x000107c61170(lVar7);
            uVar13 = *(undefined8 *)(unaff_x20 + 0xa0);
            *(long *)(unaff_x20 + 0xa0) = lVar19;
            func_0x000107c6142c(uVar13);
          }
        }
        lStack_3c08 = lVar6;
        lStack_3c00 = lVar21;
        uStack_3be8 = uVar17;
        if ((piVar18[0xe] == 5) && (func_0x000107c4a050(), (int)uVar17 != 0)) {
          uVar13 = *(undefined8 *)(piVar18 + 2);
          func_0x000107c5fadc(uVar13,*(undefined8 *)(piVar18 + 4));
          if (*(long *)(piVar18 + 8) < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b62ec);
            (*pcVar2)();
          }
          func_0x000107c422a8();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar13 = 0;
          func_0x00010469e0dc(0);
          lVar7 = lVar6;
          func_0x000107c5fc54(lVar6,uVar13);
          lStack_3c10 = lVar7;
          func_0x000107c61170(lVar6);
        }
        else {
          lStack_3c10 = 0;
        }
        func_0x0001000d224c(&uStack_1930);
        lVar6 = lStack_1928;
        uVar13 = uStack_1930;
        uVar26 = uStack_1930;
        func_0x000107c614f0(uStack_1930);
        lStack_1388 = -0x2fffffffffffffd9;
        uStack_1380 = 0x800000010efbc520;
        uStack_1378 = 0;
        (**(code **)(lVar6 + 8))
                  (&bStack_1ed8,&lStack_1388,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar26,lVar6);
        func_0x000107c615e8(uVar13);
        if ((bStack_1ed8 & 1) == 0) {
          uVar17 = uStack_3be8;
          func_0x000107c49f38();
          if (((uVar17 & 1) == 0) && (piVar18[0xc] != 0x16)) {
            if (piVar18[0xc] == 4) {
              func_0x0001000d224c(&lStack_1388);
              uVar13 = uStack_1380;
              lVar6 = lStack_1388;
              lVar7 = lStack_1388;
              func_0x000107c614f0(lStack_1388);
              uVar3 = 0x2e;
              func_0x00010403c628(0xd00000000000002e,0x800000010efbca60,lVar7,uVar13);
              uStack_3bd8 = (undefined8 *)CONCAT44(uStack_3bd8._4_4_,uVar3);
              func_0x000107c615e8(lVar6);
            }
            else {
              uStack_3bd8 = (undefined8 *)((ulong)uStack_3bd8._4_4_ << 0x20);
            }
          }
          else {
            uStack_3bd8 = (undefined8 *)CONCAT44(uStack_3bd8._4_4_,1);
          }
        }
        else {
          uStack_3bd8 = (undefined8 *)CONCAT44(uStack_3bd8._4_4_,1);
        }
        uVar9 = *(ulong *)(unaff_x20 + 0xb0);
        uVar13 = *(undefined8 *)(unaff_x20 + 0x90);
        uVar26 = *(undefined8 *)(unaff_x20 + 0x98);
        uVar27 = *(undefined8 *)(unaff_x20 + 0xa0);
        func_0x000107c61434(uVar27);
        func_0x000107c61434(uVar9);
        func_0x000107c61434(uVar13);
        func_0x000107c61434(uVar26);
        uVar17 = uVar9;
        FUN_10189fc00(uVar9,uVar13,uVar26,uVar27);
        uStack_3bf8 = uVar17;
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar26);
        func_0x000107c6142c(uVar27);
        uVar28 = *(undefined8 *)(unaff_x20 + 0xb0);
        uVar13 = *(undefined8 *)(unaff_x20 + 0x90);
        uVar26 = *(undefined8 *)(unaff_x20 + 0x98);
        uVar22 = *(undefined8 *)(unaff_x20 + 0xa0);
        func_0x000107c61434(uVar22);
        func_0x000107c61434(uVar28);
        func_0x000107c61434(uVar13);
        func_0x000107c61434(uVar26);
        FUN_10189d730(uVar28,uVar13,uVar26,uVar22);
        uVar27 = uVar25;
        func_0x000107c6142c(uVar28);
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar26);
        func_0x000107c6142c(uVar22);
        uVar26 = *(undefined8 *)(unaff_x20 + 0xb0);
        func_0x000107c61434(uVar26);
        FUN_1018a03f4();
        uVar13 = uVar27;
        func_0x000107c6142c(uVar26);
        FUN_1018b62ec(piStack_3be0);
        puVar14 = puStack_3ba8;
        func_0x000107c610b4(&lStack_1388,puStack_3ba8,0x5a8);
        iVar4 = (int)&lStack_1388;
        FUN_10189c838();
        if (iVar4 == 1) {
          func_0x000101895d08(&uStack_1930);
          uStack_1ef8 = uStack_18c8;
          uStack_1f00 = uStack_18d0;
          piStack_1ee8 = piStack_18b8;
          piStack_1ef0 = piStack_18c0;
          uStack_1ee0 = uStack_18b0;
          uStack_1f38 = uStack_1908;
          lStack_1f40 = lStack_1910;
          lStack_1f28 = lStack_18f8;
          uStack_1f30 = uStack_1900;
          uStack_1f18 = uStack_18e8;
          uStack_1f20 = uStack_18f0;
          uStack_1f08 = uStack_18d8;
          uStack_1f10 = uStack_18e0;
          lStack_1f58 = lStack_1928;
          uStack_1f60 = uStack_1930;
          uStack_1f48 = uStack_1918;
          uStack_1f50 = uStack_1920;
        }
        else {
          uStack_1ee0 = uStack_11d0;
          uStack_1ef8 = uStack_11e8;
          uStack_1f00 = uStack_11f0;
          piStack_1ee8 = piStack_11d8;
          piStack_1ef0 = piStack_11e0;
          uStack_1f38 = uStack_1228;
          lStack_1f40 = lStack_1230;
          lStack_1f28 = lStack_1218;
          uStack_1f30 = uStack_1220;
          uStack_1f18 = uStack_1208;
          uStack_1f20 = uStack_1210;
          uStack_1f08 = uStack_11f8;
          uStack_1f10 = uStack_1200;
          lStack_1f58 = lStack_1248;
          uStack_1f60 = uStack_1250;
          uStack_1f48 = uStack_1238;
          uStack_1f50 = uStack_1240;
        }
        uVar17 = *(ulong *)(unaff_x20 + 0xb0);
        puVar20 = *(undefined8 **)(unaff_x20 + 0x90);
        uVar26 = *(undefined8 *)(unaff_x20 + 0x98);
        piVar18 = *(int **)(unaff_x20 + 0xa0);
        func_0x000107c61434(uVar17);
        func_0x000107c61434(puVar20);
        func_0x000107c61434(uVar26);
        func_0x000107c61434(piVar18);
        if (iVar5 == 0xd) {
LAB_1018b564c:
          func_0x000107c6142c(uVar17);
          func_0x000107c6142c(puVar20);
          func_0x000107c6142c(uVar26);
          func_0x000107c6142c();
          uStack_1f88 = uStack_1ef8;
          uStack_1f90 = uStack_1f00;
          piStack_1f78 = piStack_1ee8;
          piStack_1f80 = piStack_1ef0;
          uStack_1f70 = uStack_1ee0;
          uStack_1fc8 = uStack_1f38;
          lStack_1fd0 = lStack_1f40;
          lStack_1fb8 = lStack_1f28;
          uStack_1fc0 = uStack_1f30;
          uStack_1fa8 = uStack_1f18;
          uStack_1fb0 = uStack_1f20;
          uStack_1f98 = uStack_1f08;
          uStack_1fa0 = uStack_1f10;
          lStack_1fe8 = lStack_1f58;
          uStack_1ff0 = uStack_1f60;
          uStack_1fd8 = uStack_1f48;
          uStack_1fe0 = uStack_1f50;
        }
        else {
          if (uVar17 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar17 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar17) {
              uVar9 = uVar17;
            }
            func_0x000107c60480();
          }
          if (uVar9 == 0) goto LAB_1018b564c;
          iVar5 = (int)&uStack_1f60;
          FUN_10187bbec();
          if (iVar5 == 1) {
            uStack_3c68 = 0;
            uStack_3c70 = 0;
            piStack_3c20 = (int *)0x0;
            piStack_3c18 = (int *)0x0;
            uStack_3c40 = 0;
            uStack_3c48 = 0;
            lStack_3c50 = 0;
            uVar28 = 0;
            uVar22 = 0;
            uVar29 = 0;
            lVar6 = 0;
            uVar30 = 0;
            uVar31 = 0;
            uVar32 = 0;
          }
          else {
            uStack_3c48 = uStack_1f20;
            lStack_3c50 = lStack_1f28;
            uStack_3c68 = uStack_1f30;
            uStack_3c70 = uStack_1f38;
            uStack_3c40 = uStack_1ef8;
            piStack_3c20 = piStack_1ef0;
            piStack_3c18 = piStack_1ee8;
            uVar28 = uStack_1f10;
            uVar22 = uStack_1f18;
            uVar29 = uStack_1f48;
            lVar6 = lStack_1f58;
            uVar30 = uStack_1f60;
            uVar31 = uStack_1f00;
            uVar32 = uStack_1f08;
          }
          puVar14 = puVar20;
          uStack_3c38 = uVar13;
          uStack_3c30 = uVar27;
          uStack_3c28 = uVar25;
          func_0x00010189e3d4(&uStack_1930,uVar17,puVar20,uVar26,piVar18);
          lStack_3c78 = lStack_1910;
          uStack_3c80 = uStack_1918;
          uStack_3c58 = uStack_1920;
          lStack_3c60 = lStack_1928;
          func_0x000107c6142c(uVar17);
          func_0x000107c6142c(puVar20);
          func_0x000107c6142c(uVar26);
          func_0x000107c6142c(piVar18);
          if (((ulong)uStack_3bd8 & 1) == 0) {
            uStack_1900 = uStack_3c68;
            uStack_1908 = uStack_3c70;
            lStack_18f8 = lStack_3c50;
          }
          else {
            uStack_1908 = uStack_3c58;
            lStack_18f8 = lStack_3c78;
            uStack_1900 = uStack_3c80;
          }
          uStack_18f0 = uStack_3c48;
          lStack_1910 = lStack_3c60;
          uStack_1920 = uStack_1930;
          uStack_18c8 = uStack_3c40;
          piStack_18c0 = piStack_3c20;
          piStack_18b8 = piStack_3c18;
          piVar18 = (int *)&uStack_1930;
          uStack_1930 = uVar30;
          lStack_1928 = lVar6;
          uStack_1918 = uVar29;
          uStack_18e8 = uVar22;
          uStack_18e0 = uVar28;
          uStack_18d8 = uVar32;
          uStack_18d0 = uVar31;
          func_0x00010187bc08();
          uStack_1f88 = uStack_18c8;
          uStack_1f90 = uStack_18d0;
          piStack_1f78 = piStack_18b8;
          piStack_1f80 = piStack_18c0;
          uStack_1f70 = uStack_18b0;
          uStack_1fc8 = uStack_1908;
          lStack_1fd0 = lStack_1910;
          lStack_1fb8 = lStack_18f8;
          uStack_1fc0 = uStack_1900;
          uStack_1fa8 = uStack_18e8;
          uStack_1fb0 = uStack_18f0;
          uStack_1f98 = uStack_18d8;
          uStack_1fa0 = uStack_18e0;
          lStack_1fe8 = lStack_1928;
          uStack_1ff0 = uStack_1930;
          uStack_1fd8 = uStack_1918;
          uStack_1fe0 = uStack_1920;
          uVar25 = uStack_3c28;
          uVar27 = uStack_3c30;
          uVar13 = uStack_3c38;
        }
        piVar10 = piStack_3be0;
        FUN_1018b6a0c();
        piVar10 = *(int **)(piVar10 + 0xc);
        piStack_3c20 = piVar10;
        FUN_1018b6d8c();
        piStack_3be0 = piVar10;
        if (piVar10 == (int *)0x0) {
          func_0x000107c61174(piVar18);
          piStack_3be0 = piVar18;
        }
        puVar20 = *(undefined8 **)(unaff_x20 + 0xb0);
        piStack_3c18 = piVar18;
        if ((ulong)puVar20 >> 0x3e == 0) {
          puVar23 = *(undefined8 **)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar23 = (undefined8 *)((ulong)puVar20 & 0xffffffffffffff8);
          if ((undefined8 *)0x7fffffffffffffff < puVar20) {
            puVar23 = puVar20;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(puVar20);
        if (puVar23 != (undefined8 *)0x0) {
          uVar17 = 0;
          uStack_3bd8 = (undefined8 *)0x800000010efbc4a0;
          do {
            if (((ulong)puVar20 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b62cc);
                (*pcVar2)();
              }
              uVar9 = puVar20[uVar17 + 4];
              func_0x000107c61174();
              puVar15 = puVar14;
            }
            else {
              uVar9 = uVar17;
              puVar15 = puVar20;
              FUN_101887b4c();
            }
            puVar1 = (undefined8 *)(uVar17 + 1);
            if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b62c8);
              (*pcVar2)();
            }
            iVar5 = (int)*(undefined8 *)(uVar9 + _DAT_11308c0c8);
            func_0x000107c30b1c();
            puVar14 = puVar15;
            if (iVar5 == 3) {
              uVar11 = *(ulong *)(uVar9 + _DAT_11308c0c0);
              func_0x000107c30b14();
              func_0x000107c61180();
              puVar14 = puVar15;
              if (uVar11 == 0) goto LAB_1018b5718;
              uVar12 = uVar11;
              func_0x000107c5faec();
              func_0x000107c61170(uVar11);
              if (uVar12 == 0xd000000000000021 && uStack_3bd8 == puVar15) {
                func_0x000107c6142c(puVar20);
                func_0x000107c6142c(puVar15);
                func_0x000107c61170(uVar9);
LAB_1018b5860:
                if (uStack_3bf8 < 2) {
                  uStack_3bf8 = 1;
                }
                goto LAB_1018b5870;
              }
              puVar14 = puVar15;
              func_0x000107c605b8(uVar12,puVar15,0xd000000000000021,uStack_3bd8,0);
              func_0x000107c6142c(puVar15);
              func_0x000107c61170(uVar9);
              if ((uVar12 & 1) != 0) {
                func_0x000107c6142c(puVar20);
                goto LAB_1018b5860;
              }
            }
            else {
LAB_1018b5718:
              func_0x000107c61170(uVar9);
            }
            uVar17 = uVar17 + 1;
          } while (puVar1 != puVar23);
        }
        func_0x000107c6142c(puVar20);
LAB_1018b5870:
        lVar6 = lStack_3c00;
        func_0x000107c610b4(&uStack_1930,puStack_3ba8,0x5a8);
        iVar5 = (int)&uStack_1930;
        FUN_10189c838();
        if (iVar5 == 1) {
          func_0x000101895cec(&uStack_2aa0);
          uStack_d88 = uStack_2a48;
          uStack_d90 = uStack_2a50;
          uStack_d80 = uStack_2a40;
          uStack_dc8 = uStack_2a88;
          uStack_dd0 = uStack_2a90;
          uStack_db8 = uStack_2a78;
          uStack_dc0 = uStack_2a80;
          uStack_da8 = uStack_2a68;
          uStack_db0 = uStack_2a70;
          uStack_d98 = uStack_2a58;
          uStack_da0 = uStack_2a60;
          uStack_d60 = uStack_2a20;
          uStack_dd8 = uStack_2a98;
          uStack_de0 = uStack_2aa0;
          func_0x000101895d08(&uStack_3048);
          puStack_cf8 = puStack_2ff0;
          uStack_d00 = uStack_2ff8;
          uStack_ce8 = uStack_2fe0;
          uStack_cf0 = uStack_2fe8;
          uStack_cd8 = uStack_2fd0;
          uStack_ce0 = uStack_2fd8;
          uStack_d38 = uStack_3030;
          uStack_d40 = uStack_3038;
          uStack_d28 = uStack_3020;
          uStack_d30 = uStack_3028;
          uStack_d18 = uStack_3010;
          uStack_d20 = uStack_3018;
          uStack_d08 = uStack_3000;
          uStack_d10 = uStack_3008;
          uStack_cd0 = uStack_2fc8;
          uStack_d48 = uStack_3040;
          uStack_d50 = uStack_3048;
          func_0x0001018797b4(&uStack_3b98);
          uStack_c78 = uStack_3b50;
          uStack_c80 = uStack_3b58;
          uStack_c68 = uStack_3b40;
          uStack_c70 = uStack_3b48;
          uStack_c60 = uStack_3b38;
          uStack_c4f = uStack_3b27;
          uStack_cb8 = uStack_3b90;
          uStack_cc0 = uStack_3b98;
          uStack_ca8 = uStack_3b80;
          uStack_cb0 = uStack_3b88;
          uStack_c98 = uStack_3b70;
          uStack_ca0 = uStack_3b78;
          uStack_c88 = uStack_3b60;
          uStack_c90 = uStack_3b68;
          func_0x000101895d28(&uStack_35f0);
          uStack_bf8 = uStack_35a8;
          uStack_c00 = uStack_35b0;
          uStack_be8 = uStack_3598;
          uStack_bf0 = uStack_35a0;
          uStack_be0 = uStack_3590;
          uStack_c38 = uStack_35e8;
          uStack_c40 = uStack_35f0;
          uStack_c28 = uStack_35d8;
          uStack_c30 = uStack_35e0;
          uStack_c18 = uStack_35c8;
          uStack_c20 = uStack_35d0;
          uStack_c08 = uStack_35b8;
          uStack_c10 = uStack_35c0;
          uStack_bb0 = 0;
          uStack_bb8 = 0;
          uStack_bc0 = 0;
          uStack_ba8 = 1;
          uStack_b98 = 0;
          uStack_ba0 = 0;
          uStack_b88 = 0;
          uStack_b90 = 0;
          uStack_b80 = 0;
          uStack_b78 = 2;
          uStack_b68 = 0;
          uStack_b70 = 0;
          uStack_b58 = 0;
          uStack_b60 = 0;
          uStack_b48 = 0;
          uStack_b50 = 0;
          uStack_b38 = 0;
          uStack_b40 = 0;
          uStack_b28 = 0;
          uStack_b30 = 0;
          uStack_b18 = 0;
          uStack_b20 = 0;
          uStack_b08 = 0;
          uStack_b10 = 0;
          uStack_af8 = 0;
          uStack_b00 = 0;
          uStack_ae8 = 0;
          uStack_af0 = 0;
          uStack_ad8 = 0;
          uStack_ae0 = 0;
          uStack_ac8 = 0;
          uStack_ad0 = 0;
          uStack_ab8 = 0;
          uStack_ac0 = 0;
          uStack_aa8 = 0;
          uStack_ab0 = 0;
          uStack_a98 = 0;
          uStack_aa0 = 0;
          uStack_a88 = 0;
          uStack_a90 = 0;
          uStack_a78 = 0;
          uStack_a80 = 1;
          uStack_a70 = 0;
          uStack_a58 = 0;
          uStack_a60 = 0;
          uStack_a48 = 0;
          uStack_a50 = 0;
          uStack_a38 = 0;
          uStack_a40 = 0;
          uStack_a28 = 0;
          uStack_a30 = 0;
          uStack_a20 = 0x100;
          uStack_a08 = 0;
          uStack_a10 = 0;
          uStack_9f8 = 0;
          uStack_a00 = 0;
          uStack_9f0 = 0;
          *(undefined1 *)(lVar21 + -0x30) = 0;
          *(undefined8 *)(lVar21 + -0x38) = 0;
          *(undefined8 *)(lVar21 + -0x40) = 0;
          *(undefined1 *)(lVar21 + -0x48) = 0;
          *(undefined1 *)(lVar21 + -0x60) = 1;
          *(undefined8 *)(lVar21 + -0x68) = 0;
          *(undefined8 *)(lVar21 + -0x70) = 0;
          *(undefined8 **)(lVar21 + -0x78) = &uStack_a10;
          *(undefined8 *)(lVar21 + -0x88) = 0;
          *(undefined8 **)(lVar21 + -0x80) = &uStack_a60;
          *(undefined1 *)(lVar21 + -0x90) = 0;
          *(undefined8 **)(lVar21 + -0x98) = &uStack_ae0;
          *(undefined8 **)(lVar21 + -0xa8) = &uStack_b90;
          *(undefined8 **)(lVar21 + -0xa0) = &uStack_b30;
          *(undefined1 *)(lVar21 + -0xc0) = 1;
          *(undefined8 *)(lVar21 + -200) = 0;
          *(undefined1 *)(lVar21 + -0xd0) = 1;
          *(undefined8 *)(lVar21 + -0xd8) = 0;
          *(undefined1 *)(lVar21 + -0xe0) = 1;
          *(undefined8 *)(lVar21 + -0xf8) = 0;
          *(undefined8 *)(lVar21 + -0x100) = 0;
          *(undefined8 *)(lVar21 + -0xe8) = 0;
          *(undefined8 *)(lVar21 + -0xf0) = 0;
          *(undefined8 *)(lVar21 + -0x108) = 0;
          *(undefined8 *)(lVar21 + -0x110) = 0;
          *(undefined1 *)(lVar21 + -0x118) = 0;
          *(undefined8 **)(lVar21 + -0x120) = &uStack_bc0;
          *(undefined2 *)(lVar21 + -0x128) = 0;
          *(undefined8 *)(lVar21 + -0x130) = 0;
          *(undefined1 *)(lVar21 + -0x138) = 0;
          *(undefined8 *)(lVar21 + -0x140) = 0;
          *(undefined8 *)(lVar21 + -0x148) = 0;
          *(undefined2 *)(lVar21 + -0x150) = 0;
          *(undefined8 *)(lVar21 + -0x158) = 0;
          *(undefined8 *)(lVar21 + -0x160) = 0;
          *(undefined8 **)(lVar21 + -0x170) = &uStack_cc0;
          *(undefined8 **)(lVar21 + -0x168) = &uStack_c40;
          *(undefined8 *)(lVar21 + -0x180) = 3;
          *(undefined8 **)(lVar21 + -0x178) = &uStack_d50;
          *(undefined4 *)(lVar21 + -0x188) = 0;
          *(undefined8 *)(lVar21 + -400) = 0;
          *(undefined8 *)(lVar21 + -0x198) = 0;
          *(undefined8 *)(lVar21 + -0x1a0) = 0x30000000000;
          *(undefined1 *)(lVar21 + -0x1a8) = 0;
          *(undefined8 **)(lVar21 + -0x1b0) = &uStack_de0;
          *(undefined1 *)(lVar21 + -0x1b8) = 0;
          *(undefined8 *)(lVar21 + -0x1c0) = 0;
          *(undefined8 *)(lVar21 + -0x10) = 0;
          *(undefined8 *)(lVar21 + -0x18) = 0;
          *(undefined8 *)(lVar21 + -0x20) = 0;
          *(undefined8 *)(lVar21 + -0x28) = 0;
          *(undefined8 *)(lVar21 + -0x50) = 0;
          *(undefined8 *)(lVar21 + -0x58) = 0;
          *(undefined8 *)(lVar21 + -0xb0) = 0;
          *(undefined8 *)(lVar21 + -0xb8) = 0;
          func_0x000104218d60(&bStack_1ed8,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
          uStack_2020 = CONCAT71(uStack_1ed7,bStack_1ed8);
          uStack_2018 = uStack_1ed0;
          uStack_2008 = uStack_1ec0;
          uStack_2010 = uStack_1ec8;
          uStack_1ff8 = uStack_1eb0;
          uStack_2000 = uStack_1eb8;
          uStack_2038 = uStack_1e90;
          uStack_2040 = uStack_1e98;
          uStack_2068 = uStack_1dc8;
          uStack_2070 = uStack_1dd0;
          uStack_2058 = uStack_1db8;
          uStack_2060 = uStack_1dc0;
          uStack_20a8 = uStack_1e08;
          uStack_20b0 = uStack_1e10;
          uStack_2098 = uStack_1df8;
          uStack_20a0 = uStack_1e00;
          uStack_2088 = uStack_1de8;
          uStack_2090 = uStack_1df0;
          uStack_2078 = uStack_1dd8;
          uStack_2080 = uStack_1de0;
          uStack_20e8 = uStack_1e48;
          uStack_20f0 = uStack_1e50;
          uStack_20d8 = uStack_1e38;
          uStack_20e0 = uStack_1e40;
          uStack_20c8 = uStack_1e28;
          uStack_20d0 = uStack_1e30;
          uStack_20b8 = uStack_1e18;
          uStack_20c0 = uStack_1e20;
          uStack_2108 = uStack_1e68;
          uStack_2110 = uStack_1e70;
          uStack_20f8 = uStack_1e58;
          uStack_2100 = uStack_1e60;
          uStack_2148 = (undefined7)uStack_1cd7;
          uStack_2141 = (undefined1)((ulong)uStack_1cd7 >> 0x38);
          uStack_2150 = (undefined7)uStack_1cdf;
          uStack_2149 = (undefined1)((ulong)uStack_1cdf >> 0x38);
          uStack_2138 = (undefined7)uStack_1cc7;
          uStack_2131 = (undefined1)((ulong)uStack_1cc7 >> 0x38);
          uStack_2140 = (undefined7)uStack_1ccf;
          uStack_2139 = (undefined1)((ulong)uStack_1ccf >> 0x38);
          uStack_2128 = (undefined7)uStack_1cb7;
          uStack_2121 = (undefined1)((ulong)uStack_1cb7 >> 0x38);
          uStack_2130 = (undefined7)uStack_1cbf;
          uStack_2129 = (undefined1)((ulong)uStack_1cbf >> 0x38);
          uStack_2118 = uStack_1ca7;
          uStack_2120 = (undefined7)uStack_1caf;
          uStack_2119 = (undefined1)((ulong)uStack_1caf >> 0x38);
          uStack_2188 = (undefined7)uStack_1d17;
          uStack_2181 = (undefined1)((ulong)uStack_1d17 >> 0x38);
          uStack_2190 = (undefined7)uStack_1d1f;
          uStack_2189 = (undefined1)((ulong)uStack_1d1f >> 0x38);
          uStack_2178 = (undefined7)uStack_1d07;
          uStack_2171 = (undefined1)((ulong)uStack_1d07 >> 0x38);
          uStack_2180 = (undefined7)uStack_1d0f;
          uStack_2179 = (undefined1)((ulong)uStack_1d0f >> 0x38);
          uStack_2168 = (undefined7)uStack_1cf7;
          uStack_2161 = (undefined1)((ulong)uStack_1cf7 >> 0x38);
          uStack_2170 = (undefined7)uStack_1cff;
          uStack_2169 = (undefined1)((ulong)uStack_1cff >> 0x38);
          uStack_2030 = uStack_1e88;
          uStack_2050 = uStack_1db0;
          uStack_3bb8 = uStack_1da8;
          lStack_3bb0 = lStack_1b40;
          uStack_2158 = (undefined7)uStack_1ce7;
          uStack_2151 = (undefined1)((ulong)uStack_1ce7 >> 0x38);
          uStack_2160 = (undefined7)uStack_1cef;
          uStack_2159 = (undefined1)((ulong)uStack_1cef >> 0x38);
          func_0x000107c610b4(auStack_22f0,auStack_1c9f,0x15f);
          puVar16 = auStack_1b38;
        }
        else {
          uStack_2018 = uStack_d8;
          uStack_2020 = uStack_e0;
          uStack_2008 = uStack_c8;
          uStack_2010 = uStack_d0;
          uStack_1ff8 = uStack_b8;
          uStack_2000 = uStack_c0;
          uStack_2038 = uStack_f8;
          uStack_2040 = uStack_100;
          uStack_2030 = uStack_f0;
          uStack_20e8 = uStack_1a8;
          uStack_20f0 = uStack_1b0;
          uStack_20d8 = uStack_198;
          uStack_20e0 = uStack_1a0;
          uStack_20a8 = uStack_168;
          uStack_20b0 = uStack_170;
          uStack_2098 = uStack_158;
          uStack_20a0 = uStack_160;
          uStack_20c8 = uStack_188;
          uStack_20d0 = uStack_190;
          uStack_20b8 = uStack_178;
          uStack_20c0 = uStack_180;
          uStack_2050 = uStack_110;
          uStack_2068 = uStack_128;
          uStack_2070 = uStack_130;
          uStack_2058 = uStack_118;
          uStack_2060 = uStack_120;
          uStack_2088 = uStack_148;
          uStack_2090 = uStack_150;
          uStack_2078 = uStack_138;
          uStack_2080 = uStack_140;
          uStack_2108 = uStack_1c8;
          uStack_2110 = uStack_1d0;
          uStack_20f8 = uStack_1b8;
          uStack_2100 = uStack_1c0;
          uStack_2148 = (undefined7)uStack_298;
          uStack_2141 = (undefined1)((ulong)uStack_298 >> 0x38);
          uStack_2150 = (undefined7)uStack_2a0;
          uStack_2149 = (undefined1)((ulong)uStack_2a0 >> 0x38);
          uStack_2138 = (undefined7)uStack_288;
          uStack_2131 = (undefined1)((ulong)uStack_288 >> 0x38);
          uStack_2140 = (undefined7)uStack_290;
          uStack_2139 = (undefined1)((ulong)uStack_290 >> 0x38);
          uStack_2128 = (undefined7)uStack_278;
          uStack_2121 = (undefined1)((ulong)uStack_278 >> 0x38);
          uStack_2130 = (undefined7)uStack_280;
          uStack_2129 = (undefined1)((ulong)uStack_280 >> 0x38);
          uStack_2118 = uStack_268;
          uStack_2120 = (undefined7)uStack_270;
          uStack_2119 = (undefined1)((ulong)uStack_270 >> 0x38);
          uStack_2188 = (undefined7)uStack_2d8;
          uStack_2181 = (undefined1)((ulong)uStack_2d8 >> 0x38);
          uStack_2190 = (undefined7)uStack_2e0;
          uStack_2189 = (undefined1)((ulong)uStack_2e0 >> 0x38);
          uStack_2178 = (undefined7)uStack_2c8;
          uStack_2171 = (undefined1)((ulong)uStack_2c8 >> 0x38);
          uStack_2180 = (undefined7)uStack_2d0;
          uStack_2179 = (undefined1)((ulong)uStack_2d0 >> 0x38);
          uStack_2168 = (undefined7)uStack_2b8;
          uStack_2161 = (undefined1)((ulong)uStack_2b8 >> 0x38);
          uStack_2170 = (undefined7)uStack_2c0;
          uStack_2169 = (undefined1)((ulong)uStack_2c0 >> 0x38);
          uStack_2158 = (undefined7)uStack_2a8;
          uStack_2151 = (undefined1)((ulong)uStack_2a8 >> 0x38);
          uStack_2160 = (undefined7)uStack_2b0;
          uStack_2159 = (undefined1)((ulong)uStack_2b0 >> 0x38);
          func_0x000107c610b4(auStack_22f0,auStack_43f,0x15f);
          puVar16 = auStack_648;
        }
        func_0x000107c610b4(auStack_24f8,puVar16,0x208);
        piVar18 = piStack_3c20;
        if (piStack_3be0 == (int *)0x0) {
          func_0x0001018b723c(puStack_3ba8,&uStack_2aa0,0x112dcbd00,&UNK_10d98e550);
        }
        else {
          func_0x0001018b723c(puStack_3ba8,&uStack_2aa0,0x112dcbd00,&UNK_10d98e550);
          func_0x000107c61174(piStack_3be0);
          func_0x0001047c84d8(&uStack_2aa0);
          func_0x0001018797d8(&uStack_2aa0);
          uStack_2141 = (undefined1)uStack_2a58;
          uStack_2140 = (undefined7)((ulong)uStack_2a58 >> 8);
          uStack_2149 = (undefined1)uStack_2a60;
          uStack_2148 = (undefined7)((ulong)uStack_2a60 >> 8);
          uStack_2131 = (undefined1)uStack_2a48;
          uStack_2130 = (undefined7)(uStack_2a48 >> 8);
          uStack_2139 = (undefined1)uStack_2a50;
          uStack_2138 = (undefined7)((ulong)uStack_2a50 >> 8);
          uStack_2121 = uStack_2a38;
          uStack_2129 = (undefined1)uStack_2a40;
          uStack_2128 = (undefined7)((ulong)uStack_2a40 >> 8);
          uStack_2118 = CONCAT17(uStack_2a28,uStack_2a2f);
          uStack_2120 = uStack_2a37;
          uStack_2119 = uStack_2a30;
          uStack_2181 = (undefined1)uStack_2a98;
          uStack_2180 = (undefined7)((ulong)uStack_2a98 >> 8);
          uStack_2189 = (undefined1)uStack_2aa0;
          uStack_2188 = (undefined7)((ulong)uStack_2aa0 >> 8);
          uStack_2171 = (undefined1)uStack_2a88;
          uStack_2170 = (undefined7)((ulong)uStack_2a88 >> 8);
          uStack_2179 = (undefined1)uStack_2a90;
          uStack_2178 = (undefined7)((ulong)uStack_2a90 >> 8);
          uStack_2161 = (undefined1)uStack_2a78;
          uStack_2160 = (undefined7)((ulong)uStack_2a78 >> 8);
          uStack_2169 = (undefined1)uStack_2a80;
          uStack_2168 = (undefined7)((ulong)uStack_2a80 >> 8);
          uStack_2151 = (undefined1)uStack_2a68;
          uStack_2150 = (undefined7)((ulong)uStack_2a68 >> 8);
          uStack_2159 = (undefined1)uStack_2a70;
          uStack_2158 = (undefined7)((ulong)uStack_2a70 >> 8);
        }
        lVar7 = lStack_3c10;
        uVar26 = uStack_3bb8;
        if ((int)piVar18 == 0x16) {
          uVar26 = *(undefined8 *)(lVar6 + *(int *)(lStack_3bf0 + 0x40));
        }
        if (lStack_3c10 == 0) {
          func_0x000107c615e8(lStack_3c08);
          func_0x000107c61170(uStack_3be8);
          func_0x000107c61170(piStack_3c18);
          func_0x000107c61170(piStack_3be0);
          func_0x0001018abbc4(lVar6);
        }
        else {
          lVar19 = lStack_3c10;
          FUN_1018b7284();
          if (lVar19 == 0) {
            func_0x0001018abbc4(lVar6);
            func_0x000107c6142c(lVar7);
            func_0x000107c615e8(lStack_3c08);
            func_0x000107c61170(uStack_3be8);
            func_0x000107c61170(piStack_3c18);
            func_0x000107c61170(piStack_3be0);
          }
          else {
            lVar21 = *(long *)(lVar19 + 0x10);
            func_0x000107c615e8(lStack_3c08);
            func_0x000107c6142c(lVar7);
            func_0x000107c61170(uStack_3be8);
            func_0x000107c61170(piStack_3be0);
            func_0x000107c61170(piStack_3c18);
            func_0x0001018abbc4(lVar6);
            if (lVar21 == 0) {
              func_0x000107c6142c(lVar19);
            }
            else {
              func_0x000107c6142c(lStack_3bb0);
              lStack_3bb0 = lVar19;
            }
          }
        }
        uVar17 = uStack_3bf8;
        uStack_35e8 = uStack_2018;
        uStack_35f0 = uStack_2020;
        uStack_35d8 = uStack_2008;
        uStack_35e0 = uStack_2010;
        uStack_35c8 = uStack_1ff8;
        uStack_35d0 = uStack_2000;
        uStack_35a8 = uStack_2038;
        uStack_35b0 = uStack_2040;
        uStack_35a0 = uStack_2030;
        uStack_3598 = uStack_3bf8;
        uStack_34e0 = uStack_2068;
        uStack_34e8 = uStack_2070;
        uStack_34d0 = uStack_2058;
        uStack_34d8 = uStack_2060;
        uStack_3580 = (undefined2)uStack_2108;
        uStack_357e = (undefined6)((ulong)uStack_2108 >> 0x10);
        uStack_3588 = (undefined2)uStack_2110;
        uStack_3586 = (undefined6)((ulong)uStack_2110 >> 0x10);
        uStack_3540 = uStack_20c8;
        uStack_3548 = uStack_20d0;
        uStack_3550 = uStack_20d8;
        uStack_3558 = uStack_20e0;
        uStack_3560 = uStack_20e8;
        uStack_3568 = uStack_20f0;
        uStack_3570 = uStack_20f8;
        uStack_3578 = (undefined2)uStack_2100;
        uStack_3576 = (undefined6)((ulong)uStack_2100 >> 0x10);
        uStack_3500 = uStack_2088;
        uStack_3508 = uStack_2090;
        uStack_3510 = uStack_2098;
        uStack_3518 = uStack_20a0;
        uStack_3520 = uStack_20a8;
        uStack_3528 = uStack_20b0;
        uStack_3530 = uStack_20b8;
        uStack_3538 = uStack_20c0;
        uStack_34f0 = uStack_2078;
        uStack_34f8 = uStack_2080;
        uStack_34c8 = uStack_2050;
        uStack_3450 = uStack_1f88;
        uStack_3458 = uStack_1f90;
        piStack_3440 = piStack_1f78;
        piStack_3448 = piStack_1f80;
        uStack_3490 = uStack_1fc8;
        lStack_3498 = lStack_1fd0;
        lStack_3480 = lStack_1fb8;
        uStack_3488 = uStack_1fc0;
        uStack_3470 = uStack_1fa8;
        uStack_3478 = uStack_1fb0;
        uStack_3460 = uStack_1f98;
        uStack_3468 = uStack_1fa0;
        lStack_34b0 = lStack_1fe8;
        uStack_34b8 = uStack_1ff0;
        uStack_34a0 = uStack_1fd8;
        uStack_34a8 = uStack_1fe0;
        uStack_3438 = uStack_1f70;
        uStack_33ef = CONCAT17(uStack_2141,uStack_2148);
        uStack_33f7 = CONCAT17(uStack_2149,uStack_2150);
        uStack_33df = CONCAT17(uStack_2131,uStack_2138);
        uStack_33e7 = CONCAT17(uStack_2139,uStack_2140);
        uStack_33cf = CONCAT17(uStack_2121,uStack_2128);
        uStack_33d7 = CONCAT17(uStack_2129,uStack_2130);
        uStack_33c7 = CONCAT17(uStack_2119,uStack_2120);
        uStack_33bf = uStack_2118;
        uStack_342f = CONCAT17(uStack_2181,uStack_2188);
        uStack_3437 = CONCAT17(uStack_2189,uStack_2190);
        uStack_341f = CONCAT17(uStack_2171,uStack_2178);
        uStack_3427 = CONCAT17(uStack_2179,uStack_2180);
        uStack_340f = CONCAT17(uStack_2161,uStack_2168);
        uStack_3417 = CONCAT17(uStack_2169,uStack_2170);
        uStack_33ff = CONCAT17(uStack_2151,uStack_2158);
        uStack_3407 = CONCAT17(uStack_2159,uStack_2160);
        uStack_35c0 = uVar27;
        uStack_35b8 = uVar13;
        uStack_3590 = uVar25;
        uStack_34c0 = uVar26;
        func_0x000107c610b4(auStack_33b7,auStack_22f0,0x15f);
        lVar6 = lStack_3bb0;
        lStack_3258 = lStack_3bb0;
        func_0x000107c610b4(auStack_3250,auStack_24f8,0x208);
        func_0x000107c610b4(&uStack_3048,&uStack_35f0,0x5a8);
        func_0x00010178e49c(&uStack_3048);
        uStack_2a98 = uStack_2018;
        uStack_2aa0 = uStack_2020;
        uStack_2a88 = uStack_2008;
        uStack_2a90 = uStack_2010;
        uStack_2a78 = uStack_1ff8;
        uStack_2a80 = uStack_2000;
        uStack_2a58 = uStack_2038;
        uStack_2a60 = uStack_2040;
        uStack_2a50 = uStack_2030;
        uStack_2a48 = uVar17;
        uStack_2990 = uStack_2068;
        uStack_2998 = uStack_2070;
        uStack_2980 = uStack_2058;
        uStack_2988 = uStack_2060;
        uStack_2a30 = (undefined1)uStack_2108;
        uStack_2a2f = (undefined7)((ulong)uStack_2108 >> 8);
        uStack_2a38 = (undefined1)uStack_2110;
        uStack_2a37 = (undefined7)((ulong)uStack_2110 >> 8);
        uStack_29f0 = uStack_20c8;
        uStack_29f8 = uStack_20d0;
        uStack_2a00 = uStack_20d8;
        uStack_2a08 = uStack_20e0;
        uStack_2a10 = uStack_20e8;
        uStack_2a18 = uStack_20f0;
        uStack_2a20 = uStack_20f8;
        uStack_2a28 = (undefined1)uStack_2100;
        uStack_2a27 = (undefined7)((ulong)uStack_2100 >> 8);
        uStack_29b0 = uStack_2088;
        uStack_29b8 = uStack_2090;
        uStack_29c0 = uStack_2098;
        uStack_29c8 = uStack_20a0;
        uStack_29d0 = uStack_20a8;
        uStack_29d8 = uStack_20b0;
        uStack_29e0 = uStack_20b8;
        uStack_29e8 = uStack_20c0;
        uStack_29a0 = uStack_2078;
        uStack_29a8 = uStack_2080;
        uStack_2978 = uStack_2050;
        uStack_2900 = uStack_1f88;
        uStack_2908 = uStack_1f90;
        piStack_28f0 = piStack_1f78;
        piStack_28f8 = piStack_1f80;
        uStack_2940 = uStack_1fc8;
        lStack_2948 = lStack_1fd0;
        lStack_2930 = lStack_1fb8;
        uStack_2938 = uStack_1fc0;
        uStack_2920 = uStack_1fa8;
        uStack_2928 = uStack_1fb0;
        uStack_2910 = uStack_1f98;
        uStack_2918 = uStack_1fa0;
        lStack_2960 = lStack_1fe8;
        uStack_2968 = uStack_1ff0;
        uStack_2950 = uStack_1fd8;
        uStack_2958 = uStack_1fe0;
        uStack_28e8 = uStack_1f70;
        uStack_289f = CONCAT17(uStack_2141,uStack_2148);
        uStack_28a7 = CONCAT17(uStack_2149,uStack_2150);
        uStack_288f = CONCAT17(uStack_2131,uStack_2138);
        uStack_2897 = CONCAT17(uStack_2139,uStack_2140);
        uStack_287f = CONCAT17(uStack_2121,uStack_2128);
        uStack_2887 = CONCAT17(uStack_2129,uStack_2130);
        uStack_2877 = CONCAT17(uStack_2119,uStack_2120);
        uStack_286f = uStack_2118;
        uStack_28df = CONCAT17(uStack_2181,uStack_2188);
        uStack_28e7 = CONCAT17(uStack_2189,uStack_2190);
        uStack_28cf = CONCAT17(uStack_2171,uStack_2178);
        uStack_28d7 = CONCAT17(uStack_2179,uStack_2180);
        uStack_28bf = CONCAT17(uStack_2161,uStack_2168);
        uStack_28c7 = CONCAT17(uStack_2169,uStack_2170);
        uStack_28af = CONCAT17(uStack_2151,uStack_2158);
        uStack_28b7 = CONCAT17(uStack_2159,uStack_2160);
        uStack_2a70 = uVar27;
        uStack_2a68 = uVar13;
        uStack_2a40 = uVar25;
        uStack_2970 = uVar26;
        func_0x000107c610b4(auStack_2867,auStack_22f0,0x15f);
        lStack_2708 = lVar6;
        func_0x000107c610b4(auStack_2700,auStack_24f8,0x208);
        func_0x00010178e37c(&uStack_35f0,&uStack_3b98);
        func_0x00010178e3b8(&uStack_2aa0);
        uStack_678 = uStack_3040;
        uStack_680 = uStack_3048;
        uStack_668 = uStack_3030;
        uStack_670 = uStack_3038;
        uStack_658 = uStack_3020;
        uStack_660 = uStack_3028;
        uStack_698 = uStack_3000;
        uStack_6a0 = uStack_3008;
        uStack_690 = uStack_2ff8;
        uStack_768 = uStack_2fd8;
        uStack_770 = uStack_2fe0;
        uStack_758 = CONCAT71(uStack_2fc7,uStack_2fc8);
        uStack_728 = uStack_2f98;
        uStack_730 = uStack_2fa0;
        uStack_738 = uStack_2fa8;
        uStack_740 = uStack_2fb0;
        uStack_748 = uStack_2fb8;
        uStack_750 = uStack_2fc0;
        uStack_760 = uStack_2fd0;
        uStack_6e8 = uStack_2f58;
        uStack_6f0 = uStack_2f60;
        uStack_6f8 = uStack_2f68;
        uStack_700 = uStack_2f70;
        uStack_708 = uStack_2f78;
        uStack_710 = uStack_2f80;
        uStack_718 = uStack_2f88;
        uStack_720 = uStack_2f90;
        uStack_6b0 = uStack_2f20;
        uStack_6b8 = uStack_2f28;
        uStack_6c0 = uStack_2f30;
        uStack_6c8 = uStack_2f38;
        uStack_6d0 = uStack_2f40;
        uStack_6d8 = uStack_2f48;
        uStack_6e0 = uStack_2f50;
        uStack_7a8 = uStack_2eb8;
        uStack_7b0 = uStack_2ec0;
        uStack_798 = uStack_2ea8;
        uStack_7a0 = uStack_2eb0;
        uStack_788 = uStack_2e98;
        uStack_790 = uStack_2ea0;
        uStack_780 = uStack_2e90;
        uStack_7d8 = uStack_2ee8;
        uStack_7e0 = uStack_2ef0;
        uStack_7c8 = uStack_2ed8;
        uStack_7d0 = uStack_2ee0;
        uStack_7b8 = uStack_2ec8;
        uStack_7c0 = uStack_2ed0;
        uStack_7f8 = uStack_2f08;
        uStack_800 = uStack_2f10;
        uStack_7e8 = uStack_2ef8;
        uStack_7f0 = uStack_2f00;
        uStack_838 = uStack_2e47;
        uStack_840 = uStack_2e4f;
        uStack_828 = uStack_2e37;
        uStack_830 = uStack_2e3f;
        uStack_818 = uStack_2e27;
        uStack_820 = uStack_2e2f;
        uStack_808 = uStack_2e17;
        uStack_810 = uStack_2e1f;
        uStack_878 = uStack_2e87;
        uStack_880 = uStack_2e8f;
        uStack_868 = uStack_2e77;
        uStack_870 = uStack_2e7f;
        uStack_858 = uStack_2e67;
        uStack_860 = uStack_2e6f;
        uStack_848 = uStack_2e57;
        uStack_850 = uStack_2e5f;
        func_0x000107c610b4(auStack_9df,auStack_2e0f,0x15f);
        func_0x000107c610b4(&uStack_3b98,auStack_2ca8,0x208);
        goto LAB_1018b54d8;
      }
      func_0x0001018abbc4(lVar21);
      func_0x000107c615e8(lVar6);
    }
  }
  puVar14 = uStack_3bd8;
  func_0x0001018b723c(puStack_3ba8,&lStack_1388,0x112dcbd00,&UNK_10d98e550);
  uStack_678 = uStack_d8;
  uStack_680 = uStack_e0;
  uStack_668 = uStack_c8;
  uStack_670 = uStack_d0;
  uStack_658 = uStack_b8;
  uStack_660 = uStack_c0;
  uStack_698 = uStack_f8;
  uStack_6a0 = uStack_100;
  uStack_690 = uStack_f0;
  uStack_6b0 = uStack_110;
  uStack_6b8 = uStack_118;
  uStack_6c0 = uStack_120;
  uStack_6c8 = uStack_128;
  uStack_6d0 = uStack_130;
  uStack_6d8 = uStack_138;
  uStack_6e0 = uStack_140;
  uStack_6e8 = uStack_148;
  uStack_6f0 = uStack_150;
  uStack_6f8 = uStack_158;
  uStack_700 = uStack_160;
  uStack_708 = uStack_168;
  uStack_710 = uStack_170;
  uStack_718 = uStack_178;
  uStack_720 = uStack_180;
  uStack_728 = uStack_188;
  uStack_730 = uStack_190;
  uStack_738 = uStack_198;
  uStack_740 = uStack_1a0;
  uStack_748 = uStack_1a8;
  uStack_750 = uStack_1b0;
  uStack_758 = uStack_1b8;
  uStack_760 = uStack_1c0;
  uStack_768 = uStack_1c8;
  uStack_770 = uStack_1d0;
  uStack_7a8 = uStack_208;
  uStack_7b0 = uStack_210;
  uStack_798 = uStack_1f8;
  uStack_7a0 = uStack_200;
  uStack_788 = uStack_1e8;
  uStack_790 = uStack_1f0;
  uStack_780 = uStack_1e0;
  uStack_7d8 = uStack_238;
  uStack_7e0 = uStack_240;
  uStack_7c8 = uStack_228;
  uStack_7d0 = uStack_230;
  uStack_7b8 = uStack_218;
  uStack_7c0 = uStack_220;
  uStack_7f8 = uStack_258;
  uStack_800 = uStack_260;
  uStack_7e8 = uStack_248;
  uStack_7f0 = uStack_250;
  uStack_838 = uStack_298;
  uStack_840 = uStack_2a0;
  uStack_828 = uStack_288;
  uStack_830 = uStack_290;
  uStack_818 = uStack_278;
  uStack_820 = uStack_280;
  uStack_808 = uStack_268;
  uStack_810 = uStack_270;
  uStack_878 = uStack_2d8;
  uStack_880 = uStack_2e0;
  uStack_868 = uStack_2c8;
  uStack_870 = uStack_2d0;
  uStack_858 = uStack_2b8;
  uStack_860 = uStack_2c0;
  uStack_848 = uStack_2a8;
  uStack_850 = uStack_2b0;
  func_0x000107c610b4(auStack_9df,auStack_43f,0x15f);
  func_0x000107c610b4(&uStack_3b98,auStack_648,0x208);
  uStack_2f18 = uStack_3bb8;
  lStack_2cb0 = lStack_3bb0;
  puStack_2ff0 = puVar14;
  uStack_3018 = uVar26;
  uStack_3010 = uVar27;
  uStack_2fe8 = uVar28;
LAB_1018b54d8:
  uVar25 = uStack_3bc8;
  (*pcStack_3bd0)();
  func_0x000107c61574(uVar25);
  puStack_3bc0[1] = uStack_678;
  *puStack_3bc0 = uStack_680;
  puStack_3bc0[3] = uStack_668;
  puStack_3bc0[2] = uStack_670;
  puStack_3bc0[5] = uStack_658;
  puStack_3bc0[4] = uStack_660;
  puStack_3bc0[6] = uStack_3018;
  puStack_3bc0[7] = uStack_3010;
  puStack_3bc0[9] = uStack_698;
  puStack_3bc0[8] = uStack_6a0;
  puStack_3bc0[10] = uStack_690;
  puStack_3bc0[0xb] = puStack_2ff0;
  puStack_3bc0[0xc] = uStack_2fe8;
  puStack_3bc0[0xe] = uStack_768;
  puStack_3bc0[0xd] = uStack_770;
  puStack_3bc0[0x16] = uStack_728;
  puStack_3bc0[0x15] = uStack_730;
  puStack_3bc0[0x14] = uStack_738;
  puStack_3bc0[0x13] = uStack_740;
  puStack_3bc0[0x12] = uStack_748;
  puStack_3bc0[0x11] = uStack_750;
  puStack_3bc0[0x10] = uStack_758;
  puStack_3bc0[0xf] = uStack_760;
  puStack_3bc0[0x1e] = uStack_6e8;
  puStack_3bc0[0x1d] = uStack_6f0;
  puStack_3bc0[0x1c] = uStack_6f8;
  puStack_3bc0[0x1b] = uStack_700;
  puStack_3bc0[0x1a] = uStack_708;
  puStack_3bc0[0x19] = uStack_710;
  puStack_3bc0[0x18] = uStack_718;
  puStack_3bc0[0x17] = uStack_720;
  puStack_3bc0[0x22] = uStack_6c8;
  puStack_3bc0[0x21] = uStack_6d0;
  puStack_3bc0[0x24] = uStack_6b8;
  puStack_3bc0[0x23] = uStack_6c0;
  puStack_3bc0[0x20] = uStack_6d8;
  puStack_3bc0[0x1f] = uStack_6e0;
  puStack_3bc0[0x25] = uStack_6b0;
  puStack_3bc0[0x26] = uStack_2f18;
  puStack_3bc0[0x34] = uStack_798;
  puStack_3bc0[0x33] = uStack_7a0;
  puStack_3bc0[0x36] = uStack_788;
  puStack_3bc0[0x35] = uStack_790;
  *(undefined1 *)(puStack_3bc0 + 0x37) = uStack_780;
  puStack_3bc0[0x2c] = uStack_7d8;
  puStack_3bc0[0x2b] = uStack_7e0;
  puStack_3bc0[0x2e] = uStack_7c8;
  puStack_3bc0[0x2d] = uStack_7d0;
  puStack_3bc0[0x30] = uStack_7b8;
  puStack_3bc0[0x2f] = uStack_7c0;
  puStack_3bc0[0x32] = uStack_7a8;
  puStack_3bc0[0x31] = uStack_7b0;
  puStack_3bc0[0x28] = uStack_7f8;
  puStack_3bc0[0x27] = uStack_800;
  puStack_3bc0[0x2a] = uStack_7e8;
  puStack_3bc0[0x29] = uStack_7f0;
  *(undefined8 *)((long)puStack_3bc0 + 0x201) = uStack_838;
  *(undefined8 *)((long)puStack_3bc0 + 0x1f9) = uStack_840;
  *(undefined8 *)((long)puStack_3bc0 + 0x211) = uStack_828;
  *(undefined8 *)((long)puStack_3bc0 + 0x209) = uStack_830;
  *(undefined8 *)((long)puStack_3bc0 + 0x221) = uStack_818;
  *(undefined8 *)((long)puStack_3bc0 + 0x219) = uStack_820;
  *(undefined8 *)((long)puStack_3bc0 + 0x231) = uStack_808;
  *(undefined8 *)((long)puStack_3bc0 + 0x229) = uStack_810;
  *(undefined8 *)((long)puStack_3bc0 + 0x1c1) = uStack_878;
  *(undefined8 *)((long)puStack_3bc0 + 0x1b9) = uStack_880;
  *(undefined8 *)((long)puStack_3bc0 + 0x1d1) = uStack_868;
  *(undefined8 *)((long)puStack_3bc0 + 0x1c9) = uStack_870;
  *(undefined8 *)((long)puStack_3bc0 + 0x1e1) = uStack_858;
  *(undefined8 *)((long)puStack_3bc0 + 0x1d9) = uStack_860;
  *(undefined8 *)((long)puStack_3bc0 + 0x1f1) = uStack_848;
  *(undefined8 *)((long)puStack_3bc0 + 0x1e9) = uStack_850;
  func_0x000107c610b4((long)puStack_3bc0 + 0x239,auStack_9df,0x15f);
  puStack_3bc0[0x73] = lStack_2cb0;
  func_0x000107c610b4(puStack_3bc0 + 0x74,&uStack_3b98,0x208);
  return;
}



/* Entry: 1018b62ec; end: 1018b6a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1018b62ec(double param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  func_0x0001000d224c(&uStack_78);
  if (uStack_78 == 0) {
    return 0.0;
  }
  if ((ulong)param_2[3] < 2) {
LAB_1018b6728:
    func_0x000107c615e8(uStack_78);
    return 0.0;
  }
  if ((long)param_2[4] < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b6708);
    (*pcVar3)();
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar14 = param_2[2];
  uVar5 = uVar7;
  func_0x000107c5fadc(uVar7,uVar14);
  uVar15 = uStack_78;
  func_0x000107c3d32c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  func_0x00010468506c(0);
  uVar11 = uVar15;
  func_0x000107c5fc54(uVar15,uVar5);
  func_0x000107c61170(uVar15);
  if (uVar11 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar15 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar15 == 0) {
    func_0x000107c6142c(uVar11);
    goto LAB_1018b6728;
  }
  if ((int)uVar6 == 3) {
    func_0x000107c5fadc(uVar7,uVar14);
    uVar12 = uStack_78;
    func_0x000107c5e294();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar6 = 0;
    func_0x0001046a9c0c(0);
    uStack_88 = uVar12;
    func_0x000107c5fc54(uVar12,uVar6);
    func_0x000107c61170(uVar12);
    uStack_80 = 0;
  }
  else if ((int)uVar6 == 6) {
    func_0x000107c5fadc(uVar7,uVar14);
    uVar12 = uStack_78;
    func_0x000107c3d2bc();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar6 = 0;
    func_0x000104681c70(0);
    uStack_80 = uVar12;
    func_0x000107c5fc54(uVar12,uVar6);
    func_0x000107c61170(uVar12);
    uStack_88 = 0;
  }
  else {
    uStack_88 = 0;
    uStack_80 = 0;
  }
  uVar12 = 0;
  uVar16 = uVar11 & 0xc000000000000001;
  uVar13 = uVar11 & 0xffffffffffffff8;
  do {
    if (uVar16 == 0) {
      if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b66ec);
        (*pcVar3)();
      }
      uVar8 = *(ulong *)(uVar11 + uVar12 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar8 = uVar12;
      func_0x000101887b4c(uVar12,uVar11);
    }
    uVar9 = uVar12 + 1;
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b66e8);
      (*pcVar3)();
    }
    iVar4 = (int)*(undefined8 *)(uVar8 + _DAT_11308c0c8);
    func_0x000107c30b1c();
    if (iVar4 == 9) goto LAB_1018b6500;
    func_0x000107c61170(uVar8);
    uVar12 = uVar12 + 1;
  } while (uVar9 != uVar15);
  uVar8 = 0;
LAB_1018b6500:
  uVar12 = 0;
  do {
    if (uVar16 == 0) {
      if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b66f4);
        (*pcVar3)();
      }
      uVar9 = *(ulong *)(uVar11 + uVar12 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar9 = uVar12;
      func_0x000101887b4c(uVar12,uVar11);
    }
    uVar10 = uVar12 + 1;
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b66f0);
      (*pcVar3)();
    }
    iVar4 = (int)*(undefined8 *)(uVar9 + _DAT_11308c0c8);
    func_0x000107c30b1c();
    if (iVar4 == 10) goto LAB_1018b6570;
    func_0x000107c61170(uVar9);
    uVar12 = uVar12 + 1;
  } while (uVar10 != uVar15);
  uVar9 = 0;
LAB_1018b6570:
  uVar12 = 0;
  do {
    if (uVar16 == 0) {
      if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b66fc);
        (*pcVar3)();
      }
      uVar10 = *(ulong *)(uVar11 + uVar12 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar10 = uVar12;
      func_0x000101887b4c(uVar12,uVar11);
    }
    uVar1 = uVar12 + 1;
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b66f8);
      (*pcVar3)();
    }
    iVar4 = (int)*(undefined8 *)(uVar10 + _DAT_11308c0c8);
    func_0x000107c30b24();
    if (iVar4 == 4) {
      func_0x000107c6142c(uVar11);
      goto LAB_1018b65f0;
    }
    func_0x000107c61170(uVar10);
    uVar12 = uVar12 + 1;
  } while (uVar1 != uVar15);
  func_0x000107c6142c(uVar11);
  uVar10 = 0;
LAB_1018b65f0:
  if (uStack_80 == 0) {
    uVar15 = 0;
    if (uStack_88 != 0) goto LAB_1018b6788;
LAB_1018b66a4:
    uVar16 = 0;
  }
  else {
    uVar11 = uStack_80 & 0xffffffffffffff8;
    if (uStack_80 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar12 = uStack_80;
      if (-1 < (long)uStack_80) {
        uVar12 = uVar11;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if ((uStack_80 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b6704);
            (*pcVar3)();
          }
          uVar15 = *(ulong *)(uStack_80 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar15 = uVar13;
          func_0x000101887ce8(uVar13,uStack_80);
        }
        lVar2 = _DAT_11308bea8;
        uVar16 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b6700);
          (*pcVar3)();
        }
        iVar4 = (int)*(undefined8 *)(uVar15 + _DAT_11308bea8);
        func_0x000107c30b48();
        if (iVar4 == 2) {
LAB_1018b66d8:
          func_0x000107c6142c(uStack_80);
          goto LAB_1018b677c;
        }
        iVar4 = (int)*(undefined8 *)(uVar15 + lVar2);
        func_0x000107c30b48();
        if (iVar4 == 4) goto LAB_1018b66d8;
        func_0x000107c61170(uVar15);
        uVar13 = uVar13 + 1;
      } while (uVar16 != uVar12);
    }
    func_0x000107c6142c();
    uVar15 = 0;
LAB_1018b677c:
    if (uStack_88 == 0) goto LAB_1018b66a4;
LAB_1018b6788:
    uVar11 = uStack_88 & 0xffffffffffffff8;
    if (uStack_88 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar12 = uStack_88;
      if (-1 < (long)uStack_88) {
        uVar12 = uVar11;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if ((uStack_88 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b683c);
            (*pcVar3)();
          }
          uVar16 = *(ulong *)(uStack_88 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar16 = uVar13;
          func_0x000101887e84(uVar13,uStack_88);
        }
        lVar2 = _DAT_11308cf08;
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018b6838);
          (*pcVar3)();
        }
        iVar4 = (int)*(undefined8 *)(uVar16 + _DAT_11308cf08);
        func_0x000107c30c30();
        if (iVar4 == 10) {
LAB_1018b6828:
          func_0x000107c6142c(uStack_88);
          goto joined_r0x0001018b686c;
        }
        iVar4 = (int)*(undefined8 *)(uVar16 + lVar2);
        func_0x000107c30c30();
        if (iVar4 == 7) goto LAB_1018b6828;
        func_0x000107c61170(uVar16);
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar12);
    }
    func_0x000107c6142c();
    uVar16 = 0;
  }
joined_r0x0001018b686c:
  if (uVar8 == 0) {
    func_0x000107c615e8(uStack_78);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    return 0.0;
  }
  if (uVar9 == 0) {
    if (uVar15 == 0) {
      if (uVar16 == 0) {
        if (uVar10 == 0) {
          func_0x000107c615e8(uStack_78);
          func_0x000107c61170(uVar8);
          return 0.0;
        }
        func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308c0c0));
        uVar6 = *(undefined8 *)(uVar10 + _DAT_11308c0c0);
        dVar17 = param_1;
        func_0x000107c61174(uVar6);
        func_0x000107c30b10();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(uStack_78);
        goto LAB_1018b6990;
      }
      func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308c0c0));
      uVar6 = *(undefined8 *)(uVar16 + _DAT_11308cf00);
      dVar17 = param_1;
      func_0x000107c61174(uVar6);
      func_0x000107c30b10();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uStack_78);
    }
    else {
      func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308c0c0));
      uVar6 = *(undefined8 *)(uVar15 + _DAT_11308bea0);
      dVar17 = param_1;
      func_0x000107c61174(uVar6);
      func_0x000107c30b10();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(uStack_78);
      func_0x000107c61170(uVar15);
    }
  }
  else {
    func_0x000107c30b10(*(undefined8 *)(uVar8 + _DAT_11308c0c0));
    uVar6 = *(undefined8 *)(uVar9 + _DAT_11308c0c0);
    dVar17 = param_1;
    func_0x000107c61174(uVar6);
    func_0x000107c30b10();
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uStack_78);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar16);
    uVar16 = uVar15;
  }
  func_0x000107c61170(uVar16);
LAB_1018b6990:
  func_0x000107c61170(uVar10);
  if (param_1 - dVar17 <= 0.0) {
    return 0.0;
  }
  return param_1 - dVar17;
}



/* Entry: 1018b6a0c; end: 1018b6d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018b6a0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar12 = *(ulong *)(unaff_x20 + 0xb0);
  if (uVar12 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar13 = uVar12;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar12);
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b6d70);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
        uVar11 = param_3;
      }
      else {
        uVar4 = uVar14;
        uVar11 = uVar12;
        FUN_101887b4c();
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b6d6c);
        (*pcVar2)();
      }
      iVar3 = (int)*(undefined8 *)(uVar4 + _DAT_11308c0c8);
      func_0x000107c30b1c();
      param_3 = uVar11;
      if (iVar3 == 3) {
        uVar5 = *(ulong *)(uVar4 + _DAT_11308c0c0);
        func_0x000107c30b14();
        func_0x000107c61180();
        param_3 = uVar11;
        if (uVar5 != 0) {
          uVar6 = uVar5;
          func_0x000107c5faec();
          func_0x000107c61170(uVar5);
          if (uVar6 == 0xd000000000000021 && uVar11 == 0x800000010efbc4a0) {
            func_0x000107c6142c(uVar12);
            uVar12 = uVar11;
LAB_1018b6bd8:
            func_0x000107c6142c(uVar12);
            lVar7 = *(long *)(uVar4 + _DAT_11308c0d0);
            if (lVar7 == 0) {
              func_0x000107c61170(uVar4);
              return 0;
            }
            func_0x000107c61174();
            lVar8 = lVar7;
            func_0x000107c30c6c();
            func_0x000107c61180();
            uVar15 = 0;
            uVar16 = 0;
            uVar17 = 0;
            if (lVar8 != 0) {
              lVar9 = lVar7;
              func_0x000107c30c70();
              func_0x000107c61180();
              uVar18 = param_1;
              if (lVar9 != 0) {
                func_0x000107c4223c(lVar8);
                uVar17 = param_1;
                func_0x000107c4223c(lVar9);
                uVar18 = uVar17;
                func_0x000107c61170(lVar9);
                uVar16 = param_1;
              }
              param_1 = uVar18;
              func_0x000107c61170(lVar8);
            }
            lVar8 = lVar7;
            func_0x000107c30c74();
            func_0x000107c61180();
            uVar18 = 0;
            if (lVar8 != 0) {
              lVar9 = lVar7;
              func_0x000107c30c78();
              func_0x000107c61180();
              if (lVar9 != 0) {
                func_0x000107c4223c(lVar8);
                uVar18 = param_1;
                func_0x000107c4223c(lVar9);
                func_0x000107c61170(lVar9);
                uVar15 = param_1;
              }
              func_0x000107c61170(lVar8);
            }
            lVar8 = lVar7;
            func_0x000107c30c90();
            func_0x000107c61180();
            if (lVar8 != 0) {
              func_0x000107c4223c();
              func_0x000107c61170(lVar8);
            }
            lVar8 = lVar7;
            func_0x000107c30c94(lVar7);
            uVar10 = 0;
            func_0x0001047c8648(0);
            func_0x000107c610f8();
            func_0x0001047c7744(uVar16,uVar17,uVar15,uVar18,0,0,0,0,lVar8,uVar10);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(lVar7);
            return lVar8;
          }
          param_3 = uVar11;
          func_0x000107c605b8(uVar6,uVar11,0xd000000000000021,0x800000010efbc4a0,0);
          func_0x000107c6142c(uVar11);
          if ((uVar6 & 1) != 0) goto LAB_1018b6bd8;
        }
      }
      func_0x000107c61170(uVar4);
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar13);
  }
  func_0x000107c6142c(uVar12);
  return 0;
}



/* Entry: 1018b6d8c; end: 1018b712b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018b6d8c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((param_2 & 0xfffffffe) == 0x16) {
    uVar9 = *(ulong *)(unaff_x20 + 0xb0);
    if (uVar9 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar10 = uVar9;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar9);
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b7114);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar11;
          FUN_101887b4c(uVar11,uVar9);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b7110);
          (*pcVar2)();
        }
        iVar3 = (int)*(undefined8 *)(uVar4 + _DAT_11308c0c8);
        func_0x000107c30b1c();
        if (iVar3 == 3) {
          func_0x000107c6142c(uVar9);
          lVar5 = *(long *)(uVar4 + _DAT_11308c0d0);
          if (lVar5 == 0) {
            func_0x000107c61170(uVar4);
            return 0;
          }
          func_0x000107c61174();
          lVar6 = lVar5;
          func_0x000107c30c6c();
          func_0x000107c61180();
          uVar12 = 0;
          uVar13 = 0;
          uVar14 = 0;
          if (lVar6 != 0) {
            lVar7 = lVar5;
            func_0x000107c30c70();
            func_0x000107c61180();
            uVar15 = param_1;
            if (lVar7 != 0) {
              func_0x000107c4223c(lVar6);
              uVar14 = param_1;
              func_0x000107c4223c(lVar7);
              uVar15 = uVar14;
              func_0x000107c61170(lVar7);
              uVar13 = param_1;
            }
            param_1 = uVar15;
            func_0x000107c61170(lVar6);
          }
          lVar6 = lVar5;
          func_0x000107c30c74();
          func_0x000107c61180();
          uVar15 = 0;
          if (lVar6 != 0) {
            lVar7 = lVar5;
            func_0x000107c30c78();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c4223c(lVar6);
              uVar15 = param_1;
              func_0x000107c4223c(lVar7);
              func_0x000107c61170(lVar7);
              uVar12 = param_1;
            }
            func_0x000107c61170(lVar6);
          }
          lVar6 = lVar5;
          func_0x000107c30c7c();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar5;
            func_0x000107c30c80();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c4223c(lVar6);
              func_0x000107c4223c(lVar7);
              func_0x000107c61170(lVar7);
            }
            func_0x000107c61170(lVar6);
          }
          lVar6 = lVar5;
          func_0x000107c30c84();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar5;
            func_0x000107c30c88();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c4223c(lVar6);
              func_0x000107c4223c(lVar7);
              func_0x000107c61170(lVar7);
            }
            func_0x000107c61170(lVar6);
          }
          lVar6 = lVar5;
          func_0x000107c30c8c();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c4223c();
            func_0x000107c61170(lVar6);
          }
          lVar6 = lVar5;
          func_0x000107c30c90();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c4223c();
            func_0x000107c61170(lVar6);
          }
          lVar6 = lVar5;
          func_0x000107c30c94(lVar5);
          uVar8 = 0;
          func_0x0001047c8648(0);
          func_0x000107c610f8();
          func_0x0001047c7744(uVar13,uVar14,uVar12,uVar15,0,0,0,0,lVar6,uVar8);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(uVar4);
          return lVar6;
        }
        func_0x000107c61170(uVar4);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar10);
    }
    func_0x000107c6142c(uVar9);
  }
  return 0;
}



/* Entry: 1018b712c; end: 1018b7197;  */

void FUN_1018b712c(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018b7198; end: 1018b71a3;  */

void FUN_1018b7198(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0xa8));
  return;
}



/* Entry: 1018b71a4; end: 1018b71eb;  */

void FUN_1018b71a4(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  FUN_1018b42c0(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018b71ec; end: 1018b7283;  */

undefined8 FUN_1018b71ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcbd00;
  func_0x0001000285a8(0x112dcbd00,&UNK_10d98e550);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018b7284; end: 1018b7467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018b7284(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    uVar7 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x0001018740f8(0,uVar7,0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b7468);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(param_1 + 0x20);
      do {
        lVar5 = *plVar11;
        uVar4 = *(undefined8 *)(lVar5 + _DAT_11308ca70);
        func_0x000107c61174();
        func_0x000107c30d7c();
        func_0x000107c61180();
        uVar6 = uVar4;
        func_0x000107c5ee30();
        uVar9 = uVar7;
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar4);
        uVar8 = *(ulong *)(puVar1 + 0x10);
        uVar3 = uVar8 + 1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar8) {
          uVar9 = uVar3;
          func_0x0001018740f8(1 < *(ulong *)(puVar1 + 0x18),uVar3,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3;
        *(undefined8 *)(puVar1 + uVar8 * 0x10 + 0x20) = uVar6;
        *(ulong *)(puVar1 + uVar8 * 0x10 + 0x28) = uVar7;
        uVar10 = uVar10 - 1;
        uVar7 = uVar9;
        plVar11 = plVar11 + 1;
      } while (uVar10 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar8 = param_1;
        func_0x000101888d18();
        uVar4 = *(undefined8 *)(uVar3 + _DAT_11308ca70);
        func_0x000107c30d7c();
        func_0x000107c61180();
        uVar6 = uVar4;
        func_0x000107c5ee30();
        func_0x000107c615e8(uVar3);
        func_0x000107c61170(uVar4);
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          func_0x0001018740f8(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar6;
        *(ulong *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar8;
      } while (uVar10 != uVar7);
    }
  }
  return puVar1;
}



/* Entry: 1018b7468; end: 1018b7477;  */

void FUN_1018b7468(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 auStack_90 [8];
  uint uStack_88;
  uint uStack_84;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [8];
  
  puStack_70 = *(undefined1 **)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_84 = (uint)*(byte *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000107c5f14c(0,*(undefined8 *)(unaff_x20 + 0x18),*(byte *)(unaff_x20 + 0x20),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar16 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f13c();
  lStack_80 = *(long *)(lVar4 + -8);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar13 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f148();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar14 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112dce590 != -1) {
    func_0x000107c61568(0x112dce590,FUN_1018b3ba0);
  }
  lVar5 = lVar4;
  func_0x000100028790(lVar4,0x112dce598);
  uVar6 = uVar14;
  (**(code **)(lVar11 + 0x10))(uVar14,lVar5,lVar4);
  func_0x000107c5f140();
  uVar7 = uVar6;
  func_0x000107c5f150(lVar13);
  func_0x000107c6002c();
  uStack_88 = (uint)uVar7;
  func_0x000107c6015c();
  if ((uVar7 & 1) != 0) {
    if ((uStack_84 & 1) == 0) {
      if (puStack_70 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b416c);
        (*pcVar2)();
      }
    }
    else {
      if ((ulong)puStack_70 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b42b8);
        (*pcVar2)();
      }
      if (((ulong)puStack_70 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b42c0);
        (*pcVar2)();
      }
      if (0x10 < (ulong)puStack_70 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b42bc);
        (*pcVar2)();
      }
      puStack_70 = auStack_68;
    }
    func_0x000107c6157c(uVar1);
    func_0x000107c5f15c(puVar16);
    func_0x000107c61574(uVar1);
    puVar8 = puVar16;
    (**(code **)(lVar12 + 0x58))(puVar16,lVar3);
    if ((int)puVar8 == *(int *)PTR___s2os15OSSignpostErrorO9doubleEndyA2CmFWC_110350190) {
      pcVar15 = "[Error] Interval already ended";
    }
    else {
      (**(code **)(lVar12 + 8))(puVar16,lVar3);
      pcVar15 = "";
    }
    puVar9 = (undefined2 *)0x2;
    func_0x000107c6158c(2,0xffffffffffffffff);
    *puVar9 = 0;
    puVar10 = puVar9;
    func_0x000107c5f134();
    func_0x000107c60ea8(0x100000000,uVar6,uStack_88 & 0xff,puVar10,puStack_70,pcVar15,puVar9,2);
    func_0x000107c61590(puVar9,0xffffffffffffffff,0xffffffffffffffff);
  }
  func_0x000107c61170(uVar6);
  (**(code **)(lStack_80 + 8))(lVar13,lStack_78);
  (**(code **)(lVar11 + 8))(uVar14,lVar4);
  return;
}



/* Entry: 1018b7478; end: 1018b8b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018b7478(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long unaff_x20;
  undefined1 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined1 uVar20;
  long lStack_340;
  long *plStack_328;
  undefined1 auStack_320 [112];
  long lStack_2b0;
  long lStack_2a8;
  undefined1 uStack_2a0;
  undefined1 uStack_29f;
  undefined4 uStack_29e;
  undefined2 uStack_29a;
  long lStack_298;
  long *plStack_290;
  undefined1 uStack_288;
  undefined8 uStack_287;
  undefined8 uStack_27f;
  undefined8 uStack_277;
  undefined8 uStack_26f;
  undefined8 uStack_267;
  undefined8 uStack_25f;
  undefined8 uStack_257;
  undefined8 uStack_24f;
  long lStack_240;
  long lStack_238;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined4 uStack_22e;
  undefined2 uStack_22a;
  long lStack_228;
  long *plStack_220;
  undefined1 uStack_218;
  undefined8 uStack_217;
  undefined8 uStack_20f;
  undefined8 uStack_207;
  undefined8 uStack_1ff;
  undefined8 uStack_1f7;
  undefined8 uStack_1ef;
  undefined8 uStack_1e7;
  undefined8 uStack_1df;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_188;
  undefined2 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined4 uStack_16e;
  undefined2 uStack_16a;
  long *plStack_160;
  undefined1 uStack_158;
  undefined8 auStack_157 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined2 uStack_74;
  
  lVar13 = *param_2;
  lVar15 = param_2[1];
  uVar12 = (undefined1)param_2[2];
  uVar20 = *(undefined1 *)((long)param_2 + 0x11);
  uStack_78 = *(undefined4 *)((long)param_2 + 0x12);
  uStack_74 = *(undefined2 *)((long)param_2 + 0x16);
  lStack_340 = param_2[3];
  plStack_328 = (long *)param_2[4];
  uVar11 = (undefined1)param_2[5];
  uStack_b8 = *(undefined8 *)((long)param_2 + 0x31);
  uStack_c0 = *(undefined8 *)((long)param_2 + 0x29);
  uStack_a8 = *(undefined8 *)((long)param_2 + 0x41);
  uStack_b0 = *(undefined8 *)((long)param_2 + 0x39);
  uStack_98 = *(undefined8 *)((long)param_2 + 0x51);
  uStack_a0 = *(undefined8 *)((long)param_2 + 0x49);
  uStack_88 = *(undefined8 *)((long)param_2 + 0x61);
  uStack_90 = *(undefined8 *)((long)param_2 + 0x59);
  if (param_3 != (long *)0x0) {
    if ((ulong)param_3 >> 0x3e == 0) {
      plVar16 = (long *)((long *)((ulong)param_3 & 0xffffffffffffff8))[2];
    }
    else {
      plVar16 = param_3;
      if (-1 < (long)param_3) {
        plVar16 = (long *)((ulong)param_3 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
    }
    if (plVar16 != (long *)0x0) {
      uVar14 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(long **)(unaff_x20 + 0xa0) = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c6142c(uVar14);
      func_0x0001018b7974();
      if (param_2[4] == 1) {
        func_0x00010420fe14(auStack_180,0,0,0,0,0,0,0,0,0);
        uStack_188 = uStack_16e;
        uStack_184 = uStack_16a;
        puVar10 = auStack_157;
        plVar19 = plStack_160;
        uVar12 = uStack_170;
        uVar20 = uStack_16f;
        uVar11 = uStack_158;
      }
      else {
        uStack_188 = uStack_78;
        uStack_184 = uStack_74;
        puVar10 = &uStack_c0;
        plVar19 = plStack_328;
      }
      uStack_1c8 = puVar10[1];
      uStack_1d0 = *puVar10;
      uStack_1b8 = puVar10[3];
      uStack_1c0 = puVar10[2];
      uStack_1a8 = puVar10[5];
      uStack_1b0 = puVar10[4];
      uStack_198 = puVar10[7];
      uStack_1a0 = puVar10[6];
      if ((long)plVar16 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b7974);
        (*pcVar2)();
      }
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        plVar17 = &lStack_240;
        func_0x0001018b8e1c(param_2,plVar17,0x112dcbca8,&UNK_10d98e380);
        lVar15 = 0;
        lVar13 = 0;
        lStack_340 = 0;
        plStack_328 = (long *)0x0;
        plVar5 = param_3 + 4;
        do {
          lVar1 = _DAT_11308bea8;
          lVar18 = *plVar5;
          iVar4 = (int)*(undefined8 *)(lVar18 + _DAT_11308bea8);
          lVar6 = lVar18;
          func_0x000107c61174(lVar18);
          func_0x000107c30b48();
          plVar9 = plVar17;
          if (plStack_328 == (long *)0x0) {
            lVar8 = *(long *)(lVar18 + lVar1);
            func_0x000107c30b4c();
            func_0x000107c61180();
            if (lVar8 == 0) {
              lStack_340 = 0;
              plStack_328 = (long *)0x0;
              plVar9 = plVar17;
            }
            else {
              lStack_340 = lVar8;
              func_0x000107c5faec();
              plVar9 = plVar17;
              func_0x000107c61170(lVar8);
              plStack_328 = plVar17;
            }
          }
          plVar17 = plVar9;
          bVar3 = SCARRY8(lVar13,(ulong)(iVar4 == 2));
          lVar13 = lVar13 + (ulong)(iVar4 == 2);
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b78b0);
            (*pcVar2)();
          }
          bVar3 = SCARRY8(lVar15,(ulong)(iVar4 == 5));
          lVar15 = lVar15 + (ulong)(iVar4 == 5);
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b78b4);
            (*pcVar2)();
          }
          if (iVar4 == 3) {
            uVar12 = 1;
          }
          if (iVar4 == 4) {
            uVar20 = 1;
          }
          uVar7 = *(undefined8 *)(lVar18 + lVar1);
          func_0x000107c61174();
          uVar14 = uVar7;
          func_0x000107c30b50();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(lVar6);
          if ((int)uVar14 != 0) {
            uVar11 = 1;
          }
          plVar16 = (long *)((long)plVar16 + -1);
          plVar5 = plVar5 + 1;
        } while (plVar16 != (long *)0x0);
      }
      else {
        func_0x0001018b8e1c(param_2,&lStack_240,0x112dcbca8,&UNK_10d98e380);
        lVar15 = 0;
        lVar13 = 0;
        lStack_340 = 0;
        plStack_328 = (long *)0x0;
        plVar17 = (long *)0x0;
        do {
          plVar5 = plVar17;
          plVar9 = param_3;
          func_0x000101887ce8();
          lVar1 = _DAT_11308bea8;
          iVar4 = (int)*(undefined8 *)((long)plVar5 + _DAT_11308bea8);
          func_0x000107c30b48();
          if (plStack_328 == (long *)0x0) {
            lVar6 = *(long *)((long)plVar5 + lVar1);
            func_0x000107c30b4c();
            func_0x000107c61180();
            if (lVar6 == 0) {
              lStack_340 = 0;
              plStack_328 = (long *)0x0;
            }
            else {
              lStack_340 = lVar6;
              func_0x000107c5faec();
              func_0x000107c61170(lVar6);
              plStack_328 = plVar9;
            }
          }
          bVar3 = SCARRY8(lVar13,(ulong)(iVar4 == 2));
          lVar13 = lVar13 + (ulong)(iVar4 == 2);
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b78a8);
            (*pcVar2)();
          }
          bVar3 = SCARRY8(lVar15,(ulong)(iVar4 == 5));
          lVar15 = lVar15 + (ulong)(iVar4 == 5);
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b78ac);
            (*pcVar2)();
          }
          plVar17 = (long *)((long)plVar17 + 1);
          if (iVar4 == 3) {
            uVar12 = 1;
          }
          if (iVar4 == 4) {
            uVar20 = 1;
          }
          uVar7 = *(undefined8 *)((long)plVar5 + lVar1);
          func_0x000107c61174();
          uVar14 = uVar7;
          func_0x000107c30b50();
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(plVar5);
          if ((int)uVar14 != 0) {
            uVar11 = 1;
          }
        } while (plVar16 != plVar17);
      }
      func_0x000107c6142c(plVar19);
      uStack_27f = uStack_1c8;
      uStack_287 = uStack_1d0;
      uStack_26f = uStack_1b8;
      uStack_277 = uStack_1c0;
      uStack_25f = uStack_1a8;
      uStack_267 = uStack_1b0;
      uStack_24f = uStack_198;
      uStack_257 = uStack_1a0;
      uStack_108 = uStack_1c8;
      uStack_110 = uStack_1d0;
      uStack_f8 = uStack_1b8;
      uStack_100 = uStack_1c0;
      uStack_e8 = uStack_1a8;
      uStack_f0 = uStack_1b0;
      uStack_d8 = uStack_198;
      uStack_e0 = uStack_1a0;
      uStack_1df = uStack_198;
      uStack_1e7 = uStack_1a0;
      uStack_1ef = uStack_1a8;
      uStack_1f7 = uStack_1b0;
      uStack_1ff = uStack_1b8;
      uStack_207 = uStack_1c0;
      uStack_29e = uStack_188;
      uStack_29a = uStack_184;
      lStack_298 = lStack_340;
      plStack_290 = plStack_328;
      uStack_c8 = uStack_188;
      uStack_c4 = uStack_184;
      uStack_22a = uStack_184;
      uStack_22e = uStack_188;
      lStack_228 = lStack_340;
      plStack_220 = plStack_328;
      uStack_20f = uStack_1c8;
      uStack_217 = uStack_1d0;
      lStack_2b0 = lVar13;
      lStack_2a8 = lVar15;
      uStack_2a0 = uVar12;
      uStack_29f = uVar20;
      uStack_288 = uVar11;
      lStack_240 = lVar13;
      lStack_238 = lVar15;
      uStack_230 = uVar12;
      uStack_22f = uVar20;
      uStack_218 = uVar11;
      func_0x00010178e30c(&lStack_2b0,auStack_320);
      func_0x00010178e348(&lStack_240);
      goto LAB_1018b7914;
    }
  }
  func_0x0001018b8e1c(param_2,auStack_180,0x112dcbca8,&UNK_10d98e380);
  uStack_c8 = uStack_78;
  uStack_c4 = uStack_74;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
LAB_1018b7914:
  *(undefined8 *)((long)param_1 + 0x31) = uStack_108;
  *(undefined8 *)((long)param_1 + 0x29) = uStack_110;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_f8;
  *(undefined8 *)((long)param_1 + 0x39) = uStack_100;
  *(undefined8 *)((long)param_1 + 0x51) = uStack_e8;
  *(undefined8 *)((long)param_1 + 0x49) = uStack_f0;
  *param_1 = lVar13;
  param_1[1] = lVar15;
  *(undefined1 *)(param_1 + 2) = uVar12;
  *(undefined1 *)((long)param_1 + 0x11) = uVar20;
  *(undefined4 *)((long)param_1 + 0x12) = uStack_c8;
  *(undefined2 *)((long)param_1 + 0x16) = uStack_c4;
  param_1[3] = lStack_340;
  param_1[4] = (long)plStack_328;
  *(undefined1 *)(param_1 + 5) = uVar11;
  *(undefined8 *)((long)param_1 + 0x61) = uStack_d8;
  *(undefined8 *)((long)param_1 + 0x59) = uStack_e0;
  return;
}



/* Entry: 1018b8b28; end: 1018b8d23;  */

void FUN_1018b8b28(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_c88 [1464];
  long lStack_6d0;
  long lStack_6b8;
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
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
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
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x000107c610b4(auStack_c88,param_2,0xab2);
  iVar3 = (int)auStack_c88;
  FUN_10178e478();
  if (((iVar3 == 1 || lStack_6b8 == 1) || lStack_6d0 < 1) || (*(int *)(param_3 + 0x30) != 0x16)) {
    func_0x00010178e4d4(&uStack_110);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar4 = 0;
    func_0x0001018abab8();
    func_0x000107c613fc();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + 0x98) = puVar1;
    func_0x000100400294(lVar7 + 0x10,lVar4 + 0x10);
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x000107c5fadc(uVar5,*(undefined8 *)(param_3 + 0x10));
    if (*(long *)(param_3 + 0x20) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b8d24);
      (*pcVar2)();
    }
    func_0x000107c3d208(param_4);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar6 = 0;
    func_0x00010467de68(0);
    uVar5 = param_4;
    func_0x000107c5fc54(param_4,uVar6);
    func_0x000107c61170(param_4);
    uStack_148 = *(undefined8 *)(param_2 + 0xa38);
    uStack_150 = *(undefined8 *)(param_2 + 0xa30);
    uStack_138 = *(undefined8 *)(param_2 + 0xa48);
    uStack_140 = *(undefined8 *)(param_2 + 0xa40);
    uStack_130 = *(undefined8 *)(param_2 + 0xa50);
    uStack_128 = (undefined1)*(undefined8 *)(param_2 + 0xa58);
    uStack_11f = *(undefined8 *)(param_2 + 0xa61);
    uStack_127 = (undefined7)*(undefined8 *)(param_2 + 0xa59);
    uStack_120 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xa59) >> 0x38);
    uStack_188 = *(undefined8 *)(param_2 + 0x9f8);
    uStack_190 = *(undefined8 *)(param_2 + 0x9f0);
    uStack_178 = *(undefined8 *)(param_2 + 0xa08);
    uStack_180 = *(undefined8 *)(param_2 + 0xa00);
    uStack_168 = *(undefined8 *)(param_2 + 0xa18);
    uStack_170 = *(undefined8 *)(param_2 + 0xa10);
    uStack_158 = *(undefined8 *)(param_2 + 0xa28);
    uStack_160 = *(undefined8 *)(param_2 + 0xa20);
    uStack_1c8 = *(undefined8 *)(param_2 + 0x9b8);
    uStack_1d0 = *(undefined8 *)(param_2 + 0x9b0);
    uStack_1b8 = *(undefined8 *)(param_2 + 0x9c8);
    uStack_1c0 = *(undefined8 *)(param_2 + 0x9c0);
    uStack_1a8 = *(undefined8 *)(param_2 + 0x9d8);
    uStack_1b0 = *(undefined8 *)(param_2 + 0x9d0);
    uStack_198 = *(undefined8 *)(param_2 + 0x9e8);
    uStack_1a0 = *(undefined8 *)(param_2 + 0x9e0);
    FUN_1018ab5ec(&uStack_110,&uStack_1d0,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c61588(lVar4);
    func_0x000100400450(lVar4 + 0x10);
    func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x90));
    func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x98));
    func_0x000107c6145c(lVar4,0xa0,7);
  }
  param_1[0x11] = uStack_88;
  param_1[0x10] = uStack_90;
  param_1[0x13] = uStack_78;
  param_1[0x12] = uStack_80;
  param_1[0x15] = CONCAT71(uStack_67,uStack_68);
  param_1[0x14] = uStack_70;
  *(undefined8 *)((long)param_1 + 0xb1) = uStack_5f;
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_60,uStack_67);
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[0xd] = uStack_a8;
  param_1[0xc] = uStack_b0;
  param_1[0xf] = uStack_98;
  param_1[0xe] = uStack_a0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  return;
}



/* Entry: 1018b8d24; end: 1018b8d7f;  */

void FUN_1018b8d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100400450(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018b8d80; end: 1018b8d8b;  */

void FUN_1018b8d80(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x98));
  return;
}



/* Entry: 1018b8d8c; end: 1018b8dd3;  */

void FUN_1018b8d8c(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  func_0x0001018b7bbc(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018b8dd4; end: 1018b8edf;  */

undefined8 FUN_1018b8dd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018b8ee0; end: 1018b9b97;  */

/* WARNING: Possible PIC construction at 0x0001018b9040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018b9044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018b8ee0(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x98);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 == 0) {
    uVar6 = *(ulong *)(unaff_x20 + 0x90);
    *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(uVar6);
    func_0x000100403514(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018b908c);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar8;
        func_0x0001018886a8(uVar8,uVar6);
      }
      lVar5 = *(long *)(uVar3 + _DAT_11308c050);
      func_0x000107c61174();
      func_0x000107c30d9c();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      if (lVar5 == 1) {
        uVar4 = 0xe300000000000000;
        uVar9 = 0x53474c;
      }
      else if (lVar5 == 2) {
        uVar4 = 0xe500000000000000;
        uVar9 = 0x4d4653474c;
      }
      else {
        uVar4 = 0xe200000000000000;
        uVar9 = 0x414e;
      }
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar4;
    } while (uVar7 != uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 1018b9b98; end: 1018b9beb;  */

void FUN_1018b9b98(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018b9bec; end: 1018b9bf7;  */

void FUN_1018b9bec(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x90));
  return;
}



/* Entry: 1018b9bf8; end: 1018b9c3f;  */

void FUN_1018b9bf8(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  func_0x0001018b908c(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018b9c40; end: 1018b9d17;  */

undefined8 FUN_1018b9c40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcbc38;
  func_0x0001000285a8(0x112dcbc38,&UNK_10d98e290);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018b9d18; end: 1018b9dfb;  */

/* WARNING: Possible PIC construction at 0x0001018b9dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018b9dc8) */

void FUN_1018b9d18(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_6,param_7);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018b9df4);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000105411078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018b9dfc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018b9df8);
  (*pcVar1)();
}



/* Entry: 1018b9dfc; end: 1018b9e1b;  */

void FUN_1018b9dfc(void)

{
  FUN_1018b9d18();
  return;
}



/* Entry: 1018b9e1c; end: 1018bab17;  */

/* WARNING: Possible PIC construction at 0x0001018b9f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018ba010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018ba258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018ba35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ba25c) */
/* WARNING: Removing unreachable block (ram,0x0001018ba014) */
/* WARNING: Removing unreachable block (ram,0x0001018b9f1c) */
/* WARNING: Removing unreachable block (ram,0x0001018ba360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018b9e1c(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x98);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    if (uVar7 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar7;
      if (-1 < (long)uVar7) {
        uVar9 = uVar7 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 != 0) {
      func_0x000107c61434(uVar7);
      func_0x000100403514(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ba38c);
        (*pcVar2)();
      }
      uVar10 = 0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          func_0x000107c61174(*(undefined8 *)(uVar7 + uVar10 * 8 + 0x20));
        }
        else {
          func_0x000101888844(uVar10,uVar7);
        }
        func_0x000107c61170();
        uVar3 = *(ulong *)(puVar6 + 0x10);
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = 0x4147;
        *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x28) = 0xe200000000000000;
      } while (uVar9 != uVar10);
      goto code_r0x000107c6142c;
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(unaff_x20 + 0x98) != 0) {
      uVar7 = *(ulong *)(unaff_x20 + 0xa0);
      if (uVar7 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar9 = uVar7;
        }
        func_0x000107c60480();
      }
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar9 != 0) {
        func_0x000107c61434(uVar7);
        func_0x000100403514(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ba3ac);
          (*pcVar2)();
        }
        uVar10 = 0;
        do {
          if ((uVar7 & 0xc000000000000001) == 0) {
            func_0x000107c61174(*(undefined8 *)(uVar7 + uVar10 * 8 + 0x20));
          }
          else {
            func_0x0001018889e0(uVar10,uVar7);
          }
          func_0x000107c61170();
          uVar3 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
            func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x20) = 0x504c;
          *(undefined8 *)(puVar8 + uVar3 * 0x10 + 0x28) = 0xe200000000000000;
        } while (uVar9 != uVar10);
        goto code_r0x000107c6142c;
      }
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(unaff_x20 + 0x98) != 0) {
        uVar7 = *(ulong *)(unaff_x20 + 0xa8);
        if (uVar7 >> 0x3e == 0) {
          uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar9 = uVar7;
          }
          func_0x000107c60480();
        }
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar9 != 0) {
          func_0x000107c61434();
          func_0x000100403514(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ba3d4);
            (*pcVar2)();
          }
          uVar10 = 0;
          do {
            if ((uVar7 & 0xc000000000000001) == 0) {
              uVar3 = *(ulong *)(uVar7 + uVar10 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar3 = uVar10;
              func_0x000101887e84();
            }
            uVar4 = *(undefined8 *)(uVar3 + _DAT_11308cf08);
            func_0x000107c30c30();
            func_0x000107c61170(uVar3);
            uVar5 = 0xe200000000000000;
            uVar11 = 0x414e;
            switch(uVar4) {
            case 0:
              break;
            case 1:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x554c57;
              break;
            case 2:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x504157;
              break;
            case 3:
              uVar11 = 0x5242;
              break;
            case 4:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x52504c;
              break;
            case 5:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x444157;
              break;
            case 6:
              uVar11 = 0x415352;
              uVar5 = 0xe300000000000000;
              break;
            case 7:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x414457;
              break;
            case 8:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x4c5758;
              break;
            case 9:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x4c4458;
              break;
            case 10:
              uVar5 = 0xe300000000000000;
              uVar11 = 0x4f4458;
              break;
            default:
              uVar5 = 0xe700000000000000;
              uVar11 = 0x6e776f6e6b6e75;
            }
            uVar3 = *(ulong *)(puVar12 + 0x10);
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
              func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar3 + 1,1);
            }
            uVar10 = uVar10 + 1;
            *(ulong *)(puVar12 + 0x10) = uVar3 + 1;
            *(undefined8 *)(puVar12 + uVar3 * 0x10 + 0x20) = uVar11;
            *(undefined8 *)(puVar12 + uVar3 * 0x10 + 0x28) = uVar5;
          } while (uVar9 != uVar10);
          goto code_r0x000107c6142c;
        }
        if (*(long *)(unaff_x20 + 0x98) != 0) {
          uVar7 = *(ulong *)(unaff_x20 + 0xb8);
          if (uVar7 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar7 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar7) {
              uVar9 = uVar7;
            }
            func_0x000107c60480();
          }
          puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uVar9 != 0) {
            func_0x000107c61434(uVar7);
            func_0x000100403514(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ba3f0);
              (*pcVar2)();
            }
            uVar10 = 0;
            do {
              if ((uVar7 & 0xc000000000000001) == 0) {
                func_0x000107c61174(*(undefined8 *)(uVar7 + uVar10 * 8 + 0x20));
              }
              else {
                func_0x000101888b7c(uVar10,uVar7);
              }
              func_0x000107c61170();
              uVar3 = *(ulong *)(puVar1 + 0x10);
              if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
                func_0x000100403514(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
              }
              uVar10 = uVar10 + 1;
              *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
              *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x20) = 0x5557;
              *(undefined8 *)(puVar1 + uVar3 * 0x10 + 0x28) = 0xe200000000000000;
            } while (uVar9 != uVar10);
            goto code_r0x000107c6142c;
          }
        }
      }
    }
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010109a32c(puVar8);
  func_0x00010109a32c(puVar6);
  func_0x00010109a32c(puVar1);
  uVar7 = *(ulong *)(unaff_x20 + 0x90);
  *(undefined **)(unaff_x20 + 0x90) = puVar12;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 1018bab18; end: 1018bab73;  */

void FUN_1018bab18(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  FUN_1018b3574(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018bab74; end: 1018babdf;  */

long FUN_1018bab74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1018babe0; end: 1018bac4b;  */

undefined8 * FUN_1018babe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1018bac4c; end: 1018bacef;  */

undefined8 * FUN_1018bac4c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018bacf0; end: 1018bad53;  */

undefined8 * FUN_1018bacf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018bad54; end: 1018badff;  */

int FUN_1018bad54(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018bae00; end: 1018bae47;  */

void FUN_1018bae00(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  func_0x0001018ba3f0(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1018bae48; end: 1018baf9f;  */

ulong FUN_1018bae48(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018bafa0);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018baf94);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x0001018892d8(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018baf98);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018baf9c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1018881bc(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1018bafa0; end: 1018bc033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bafa0(long param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_13a8 [408];
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined1 uStack_1108;
  undefined4 uStack_1107;
  undefined3 uStack_1103;
  long lStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined1 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined1 uStack_1050;
  undefined4 uStack_1048;
  undefined3 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined1 auStack_f40 [408];
  undefined1 auStack_da8 [408];
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined4 uStack_b07;
  undefined3 uStack_b03;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined1 uStack_aa8;
  undefined1 auStack_aa0 [776];
  undefined1 auStack_798 [264];
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 uStack_610;
  undefined4 uStack_608;
  undefined3 uStack_604;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4f8 [408];
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
  undefined1 uStack_310;
  undefined3 uStack_308;
  undefined1 uStack_305;
  undefined3 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [408];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_1f8,param_1,0x198);
  uVar3 = *(undefined8 *)(param_1 + 0x198);
  uStack_238 = *(undefined8 *)(param_1 + 0x268);
  uStack_240 = *(undefined8 *)(param_1 + 0x260);
  uStack_228 = *(undefined8 *)(param_1 + 0x278);
  uStack_230 = *(undefined8 *)(param_1 + 0x270);
  uStack_218 = *(undefined8 *)(param_1 + 0x288);
  uStack_220 = *(undefined8 *)(param_1 + 0x280);
  uStack_208 = *(undefined8 *)(param_1 + 0x298);
  uStack_210 = *(undefined8 *)(param_1 + 0x290);
  uStack_278 = *(undefined8 *)(param_1 + 0x228);
  uStack_280 = *(undefined8 *)(param_1 + 0x220);
  uStack_268 = *(undefined8 *)(param_1 + 0x238);
  uStack_270 = *(undefined8 *)(param_1 + 0x230);
  uStack_258 = *(undefined8 *)(param_1 + 0x248);
  uStack_260 = *(undefined8 *)(param_1 + 0x240);
  uStack_248 = *(undefined8 *)(param_1 + 600);
  uStack_250 = *(undefined8 *)(param_1 + 0x250);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_2a8 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_298 = *(undefined8 *)(param_1 + 0x208);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x200);
  uStack_288 = *(undefined8 *)(param_1 + 0x218);
  uStack_290 = *(undefined8 *)(param_1 + 0x210);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_300 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined1 *)(param_1 + 0x2a0);
  uStack_308 = (undefined3)*(undefined4 *)(param_1 + 0x2a1);
  uStack_305 = (undefined1)*(undefined4 *)(param_1 + 0x2a4);
  uStack_304 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x2a4) >> 8);
  lVar4 = *(long *)(param_1 + 0x2a8);
  uStack_338 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_340 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_328 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_330 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_318 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_320 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_310 = *(undefined1 *)(param_1 + 0x300);
  uStack_358 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_360 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_348 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_350 = *(undefined8 *)(param_1 + 0x2c0);
  if (param_2 == 0) {
    FUN_1018be1c0(param_1,auStack_aa0,0x112dcbc48,&UNK_10d98e2c0);
    func_0x000107c610b4(auStack_4f8,auStack_1f8,0x198);
    uStack_538 = uStack_238;
    uStack_540 = uStack_240;
    uStack_528 = uStack_228;
    uStack_530 = uStack_230;
    uStack_518 = uStack_218;
    uStack_520 = uStack_220;
    uStack_508 = uStack_208;
    uStack_510 = uStack_210;
    uStack_578 = uStack_278;
    uStack_580 = uStack_280;
    uStack_568 = uStack_268;
    uStack_570 = uStack_270;
    uStack_558 = uStack_258;
    uStack_560 = uStack_260;
    uStack_548 = uStack_248;
    uStack_550 = uStack_250;
    uStack_5b8 = uStack_2b8;
    uStack_5c0 = uStack_2c0;
    uStack_5a8 = uStack_2a8;
    uStack_5b0 = uStack_2b0;
    uStack_598 = uStack_298;
    uStack_5a0 = uStack_2a0;
    uStack_588 = uStack_288;
    uStack_590 = uStack_290;
    uStack_5f8 = uStack_2f8;
    uStack_600 = uStack_300;
    uStack_5e8 = uStack_2e8;
    uStack_5f0 = uStack_2f0;
    uStack_5d8 = uStack_2d8;
    uStack_5e0 = uStack_2e0;
    uStack_5c8 = uStack_2c8;
    uStack_5d0 = uStack_2d0;
    uStack_638 = uStack_338;
    uStack_640 = uStack_340;
    uStack_628 = uStack_328;
    uStack_630 = uStack_330;
    uStack_618 = uStack_318;
    uStack_620 = uStack_320;
    uStack_658 = uStack_358;
    uStack_660 = uStack_360;
    uStack_608 = CONCAT13(uStack_305,uStack_308);
    uStack_604 = uStack_304;
    uStack_650 = uStack_350;
    uStack_648 = uStack_348;
    uStack_610 = uStack_310;
  }
  else {
    func_0x000107c610b4(auStack_aa0,param_1,0x301);
    iVar2 = (int)auStack_aa0;
    func_0x00010178e1e4();
    if (iVar2 == 1) {
      func_0x000100406b98(auStack_13a8);
      func_0x000107c610b4(auStack_798,auStack_13a8,0x101);
      uStack_688 = 1;
      uStack_690 = 0;
      uStack_678 = 0;
      uStack_680 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      func_0x000107c61174(param_2);
      func_0x00010425b4fc(auStack_da8,0,0,0,0,0,1,0,0,0,1);
      func_0x000107c610b4(auStack_f40,auStack_da8,0x198);
      uStack_f78 = uStack_b40;
      uStack_f80 = uStack_b48;
      uStack_f68 = uStack_b30;
      uStack_f70 = uStack_b38;
      uStack_f58 = uStack_b20;
      uStack_f60 = uStack_b28;
      uStack_f48 = uStack_b10;
      uStack_f50 = uStack_b18;
      uStack_fb8 = uStack_b80;
      uStack_fc0 = uStack_b88;
      uStack_fa8 = uStack_b70;
      uStack_fb0 = uStack_b78;
      uStack_f98 = uStack_b60;
      uStack_fa0 = uStack_b68;
      uStack_f88 = uStack_b50;
      uStack_f90 = uStack_b58;
      uStack_ff8 = uStack_bc0;
      uStack_1000 = uStack_bc8;
      uStack_fe8 = uStack_bb0;
      uStack_ff0 = uStack_bb8;
      uStack_fd8 = uStack_ba0;
      uStack_fe0 = uStack_ba8;
      uStack_fc8 = uStack_b90;
      uStack_fd0 = uStack_b98;
      uStack_1038 = uStack_c00;
      uStack_1040 = uStack_c08;
      uStack_1028 = uStack_bf0;
      uStack_1030 = uStack_bf8;
      uStack_1018 = uStack_be0;
      uStack_1020 = uStack_be8;
      uStack_1008 = uStack_bd0;
      uStack_1010 = uStack_bd8;
      uStack_1048 = uStack_b07;
      uStack_1044 = uStack_b03;
      uStack_1078 = uStack_ad0;
      uStack_1080 = uStack_ad8;
      uStack_1068 = uStack_ac0;
      uStack_1070 = uStack_ac8;
      uStack_1058 = uStack_ab0;
      uStack_1060 = uStack_ab8;
      uStack_1050 = uStack_aa8;
      uStack_1098 = uStack_af0;
      uStack_10a0 = uStack_af8;
      uStack_1088 = uStack_ae0;
      uStack_1090 = uStack_ae8;
      uVar3 = uStack_c10;
    }
    else {
      func_0x000107c610b4(auStack_f40,auStack_1f8,0x198);
      uStack_f78 = uStack_238;
      uStack_f80 = uStack_240;
      uStack_f68 = uStack_228;
      uStack_f70 = uStack_230;
      uStack_f58 = uStack_218;
      uStack_f60 = uStack_220;
      uStack_f48 = uStack_208;
      uStack_f50 = uStack_210;
      uStack_fb8 = uStack_278;
      uStack_fc0 = uStack_280;
      uStack_fa8 = uStack_268;
      uStack_fb0 = uStack_270;
      uStack_f98 = uStack_258;
      uStack_fa0 = uStack_260;
      uStack_f88 = uStack_248;
      uStack_f90 = uStack_250;
      uStack_ff8 = uStack_2b8;
      uStack_1000 = uStack_2c0;
      uStack_fe8 = uStack_2a8;
      uStack_ff0 = uStack_2b0;
      uStack_fd8 = uStack_298;
      uStack_fe0 = uStack_2a0;
      uStack_fc8 = uStack_288;
      uStack_fd0 = uStack_290;
      uStack_1038 = uStack_2f8;
      uStack_1040 = uStack_300;
      uStack_1028 = uStack_2e8;
      uStack_1030 = uStack_2f0;
      uStack_1018 = uStack_2d8;
      uStack_1020 = uStack_2e0;
      uStack_1008 = uStack_2c8;
      uStack_1010 = uStack_2d0;
      uStack_1048 = CONCAT13(uStack_305,uStack_308);
      uStack_1044 = uStack_304;
      uStack_1078 = uStack_338;
      uStack_1080 = uStack_340;
      uStack_1068 = uStack_328;
      uStack_1070 = uStack_330;
      uStack_1058 = uStack_318;
      uStack_1060 = uStack_320;
      uStack_1050 = uStack_310;
      uStack_1098 = uStack_358;
      uStack_10a0 = uStack_360;
      uStack_1088 = uStack_348;
      uStack_1090 = uStack_350;
      func_0x000107c61174(param_2);
    }
    lVar4 = *(long *)(param_2 + _DAT_1130913c0);
    FUN_1018be1c0(param_1,auStack_13a8,0x112dcbc48,&UNK_10d98e2c0);
    func_0x000103bfc614();
    func_0x000107c61170(param_2);
    uStack_1108 = lVar4 != 0;
    if ((bool)uStack_1108) {
      uVar3 = 1;
    }
    func_0x000107c610b4(auStack_13a8,auStack_f40,0x198);
    uStack_1140 = uStack_f78;
    uStack_1148 = uStack_f80;
    uStack_1130 = uStack_f68;
    uStack_1138 = uStack_f70;
    uStack_1120 = uStack_f58;
    uStack_1128 = uStack_f60;
    uStack_1110 = uStack_f48;
    uStack_1118 = uStack_f50;
    uStack_1180 = uStack_fb8;
    uStack_1188 = uStack_fc0;
    uStack_1170 = uStack_fa8;
    uStack_1178 = uStack_fb0;
    uStack_1160 = uStack_f98;
    uStack_1168 = uStack_fa0;
    uStack_1150 = uStack_f88;
    uStack_1158 = uStack_f90;
    uStack_11c0 = uStack_ff8;
    uStack_11c8 = uStack_1000;
    uStack_11b0 = uStack_fe8;
    uStack_11b8 = uStack_ff0;
    uStack_11a0 = uStack_fd8;
    uStack_11a8 = uStack_fe0;
    uStack_1190 = uStack_fc8;
    uStack_1198 = uStack_fd0;
    uStack_1200 = uStack_1038;
    uStack_1208 = uStack_1040;
    uStack_11f0 = uStack_1028;
    uStack_11f8 = uStack_1030;
    uStack_11e0 = uStack_1018;
    uStack_11e8 = uStack_1020;
    uStack_11d0 = uStack_1008;
    uStack_11d8 = uStack_1010;
    uStack_1107 = uStack_1048;
    uStack_1103 = uStack_1044;
    uStack_10d0 = uStack_1078;
    uStack_10d8 = uStack_1080;
    uStack_10c0 = uStack_1068;
    uStack_10c8 = uStack_1070;
    uStack_10b0 = uStack_1058;
    uStack_10b8 = uStack_1060;
    uStack_10a8 = uStack_1050;
    uStack_10f0 = uStack_1098;
    uStack_10f8 = uStack_10a0;
    uStack_10e0 = uStack_1088;
    uStack_10e8 = uStack_1090;
    uStack_1210 = uVar3;
    lStack_1100 = param_1;
    func_0x00010178e4b0(auStack_13a8);
    func_0x000107c610b4(auStack_4f8,auStack_13a8,0x198);
    uStack_538 = uStack_1140;
    uStack_540 = uStack_1148;
    uStack_528 = uStack_1130;
    uStack_530 = uStack_1138;
    uStack_518 = uStack_1120;
    uStack_520 = uStack_1128;
    uStack_508 = uStack_1110;
    uStack_510 = uStack_1118;
    uStack_578 = uStack_1180;
    uStack_580 = uStack_1188;
    uStack_568 = uStack_1170;
    uStack_570 = uStack_1178;
    uStack_558 = uStack_1160;
    uStack_560 = uStack_1168;
    uStack_548 = uStack_1150;
    uStack_550 = uStack_1158;
    uStack_5b8 = uStack_11c0;
    uStack_5c0 = uStack_11c8;
    uStack_5a8 = uStack_11b0;
    uStack_5b0 = uStack_11b8;
    uStack_598 = uStack_11a0;
    uStack_5a0 = uStack_11a8;
    uStack_588 = uStack_1190;
    uStack_590 = uStack_1198;
    uStack_5f8 = uStack_1200;
    uStack_600 = uStack_1208;
    uStack_5e8 = uStack_11f0;
    uStack_5f0 = uStack_11f8;
    uStack_5d8 = uStack_11e0;
    uStack_5e0 = uStack_11e8;
    uStack_5c8 = uStack_11d0;
    uStack_5d0 = uStack_11d8;
    uStack_638 = uStack_10d0;
    uStack_640 = uStack_10d8;
    uStack_628 = uStack_10c0;
    uStack_630 = uStack_10c8;
    uStack_618 = uStack_10b0;
    uStack_620 = uStack_10b8;
    uStack_658 = uStack_10f0;
    uStack_660 = uStack_10f8;
    uStack_608 = uStack_1107;
    uStack_604 = uStack_1103;
    uVar3 = uStack_1210;
    lVar4 = lStack_1100;
    uStack_650 = uStack_10e8;
    uStack_648 = uStack_10e0;
    uStack_610 = uStack_10a8;
    uVar1 = uStack_1108;
  }
  func_0x000107c610b4(extraout_x8,auStack_4f8,0x198);
  *(undefined8 *)(extraout_x8 + 0x198) = uVar3;
  *(undefined8 *)(extraout_x8 + 0x268) = uStack_538;
  *(undefined8 *)(extraout_x8 + 0x260) = uStack_540;
  *(undefined8 *)(extraout_x8 + 0x278) = uStack_528;
  *(undefined8 *)(extraout_x8 + 0x270) = uStack_530;
  *(undefined8 *)(extraout_x8 + 0x288) = uStack_518;
  *(undefined8 *)(extraout_x8 + 0x280) = uStack_520;
  *(undefined8 *)(extraout_x8 + 0x298) = uStack_508;
  *(undefined8 *)(extraout_x8 + 0x290) = uStack_510;
  *(undefined8 *)(extraout_x8 + 0x228) = uStack_578;
  *(undefined8 *)(extraout_x8 + 0x220) = uStack_580;
  *(undefined8 *)(extraout_x8 + 0x238) = uStack_568;
  *(undefined8 *)(extraout_x8 + 0x230) = uStack_570;
  *(undefined8 *)(extraout_x8 + 0x248) = uStack_558;
  *(undefined8 *)(extraout_x8 + 0x240) = uStack_560;
  *(undefined8 *)(extraout_x8 + 600) = uStack_548;
  *(undefined8 *)(extraout_x8 + 0x250) = uStack_550;
  *(undefined8 *)(extraout_x8 + 0x1e8) = uStack_5b8;
  *(undefined8 *)(extraout_x8 + 0x1e0) = uStack_5c0;
  *(undefined8 *)(extraout_x8 + 0x1f8) = uStack_5a8;
  *(undefined8 *)(extraout_x8 + 0x1f0) = uStack_5b0;
  *(undefined8 *)(extraout_x8 + 0x208) = uStack_598;
  *(undefined8 *)(extraout_x8 + 0x200) = uStack_5a0;
  *(undefined8 *)(extraout_x8 + 0x218) = uStack_588;
  *(undefined8 *)(extraout_x8 + 0x210) = uStack_590;
  *(undefined8 *)(extraout_x8 + 0x1a8) = uStack_5f8;
  *(undefined8 *)(extraout_x8 + 0x1a0) = uStack_600;
  *(undefined8 *)(extraout_x8 + 0x1b8) = uStack_5e8;
  *(undefined8 *)(extraout_x8 + 0x1b0) = uStack_5f0;
  *(undefined8 *)(extraout_x8 + 0x1c8) = uStack_5d8;
  *(undefined8 *)(extraout_x8 + 0x1c0) = uStack_5e0;
  *(undefined8 *)(extraout_x8 + 0x1d8) = uStack_5c8;
  *(undefined8 *)(extraout_x8 + 0x1d0) = uStack_5d0;
  *(undefined1 *)(extraout_x8 + 0x2a0) = uVar1;
  *(undefined4 *)(extraout_x8 + 0x2a1) = uStack_608;
  *(uint *)(extraout_x8 + 0x2a4) = CONCAT31(uStack_604,uStack_608._3_1_);
  *(long *)(extraout_x8 + 0x2a8) = lVar4;
  *(undefined8 *)(extraout_x8 + 0x2d8) = uStack_638;
  *(undefined8 *)(extraout_x8 + 0x2d0) = uStack_640;
  *(undefined8 *)(extraout_x8 + 0x2e8) = uStack_628;
  *(undefined8 *)(extraout_x8 + 0x2e0) = uStack_630;
  *(undefined8 *)(extraout_x8 + 0x2f8) = uStack_618;
  *(undefined8 *)(extraout_x8 + 0x2f0) = uStack_620;
  *(undefined1 *)(extraout_x8 + 0x300) = uStack_610;
  *(undefined8 *)(extraout_x8 + 0x2b8) = uStack_658;
  *(undefined8 *)(extraout_x8 + 0x2b0) = uStack_660;
  *(undefined8 *)(extraout_x8 + 0x2c8) = uStack_648;
  *(undefined8 *)(extraout_x8 + 0x2c0) = uStack_650;
  return;
}



/* Entry: 1018bc034; end: 1018bdd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bc034(long param_1,undefined *param_2,long *param_3,undefined *param_4,ulong param_5)

{
  int *piVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 extraout_x8;
  ulong uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long *plVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined1 uVar35;
  long *plVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined1 uVar42;
  undefined *puVar43;
  long *plVar44;
  ulong uVar45;
  undefined *puVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  ulong in_stack_ffffffffffffdf78;
  ulong uStack_1eb8;
  ulong uStack_1ea8;
  ulong uStack_1e90;
  ulong uStack_1e80;
  ulong uStack_1e70;
  ulong uStack_1e60;
  ulong uStack_1e50;
  ulong uStack_1e40;
  ulong uStack_1e30;
  ulong uStack_1e20;
  ulong uStack_1e18;
  ulong uStack_1e10;
  undefined *puStack_1e00;
  undefined *puStack_1df8;
  undefined *puStack_1df0;
  undefined1 auStack_1de8 [776];
  ulong uStack_1ae0;
  undefined1 uStack_1ad8;
  ulong uStack_1ad0;
  undefined1 uStack_1ac8;
  ulong uStack_1ac0;
  undefined1 uStack_1ab8;
  undefined4 uStack_1ab7;
  ulong uStack_1ab0;
  undefined1 uStack_1aa8;
  undefined4 uStack_1aa7;
  double dStack_1aa0;
  undefined1 uStack_1a98;
  undefined1 uStack_1a97;
  undefined4 uStack_1a96;
  undefined2 uStack_1a92;
  ulong uStack_1a90;
  undefined *puStack_1a88;
  ulong uStack_1a80;
  undefined *puStack_1a78;
  ulong uStack_1a70;
  undefined1 uStack_1a68;
  undefined4 uStack_1a67;
  ulong uStack_1a60;
  undefined1 uStack_1a58;
  undefined4 uStack_1a57;
  ulong uStack_1a50;
  undefined1 uStack_1a48;
  undefined4 uStack_1a47;
  ulong uStack_1a40;
  undefined1 uStack_1a38;
  undefined4 uStack_1a37;
  ulong uStack_1a30;
  undefined1 uStack_1a28;
  undefined4 uStack_1a27;
  ulong uStack_1a20;
  undefined *puStack_1a18;
  double dStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined1 uStack_19e0;
  undefined1 auStack_19d8 [264];
  undefined1 auStack_18d0 [264];
  undefined auStack_17c8 [776];
  ulong uStack_14c0;
  undefined1 uStack_14b8;
  ulong uStack_14b0;
  undefined1 uStack_14a8;
  ulong uStack_14a0;
  undefined1 uStack_1498;
  ulong uStack_1490;
  undefined1 uStack_1488;
  double dStack_1480;
  undefined1 uStack_1478;
  undefined1 uStack_1477;
  ulong uStack_1470;
  undefined *puStack_1468;
  ulong uStack_1460;
  undefined *puStack_1458;
  ulong uStack_1450;
  undefined1 uStack_1448;
  ulong uStack_1440;
  undefined1 uStack_1438;
  ulong uStack_1430;
  undefined1 uStack_1428;
  ulong uStack_1420;
  undefined1 uStack_1418;
  ulong uStack_1410;
  undefined1 uStack_1408;
  ulong uStack_1400;
  undefined *puStack_13f8;
  ulong uStack_11b8;
  undefined1 uStack_11b0;
  ulong uStack_11a8;
  undefined1 uStack_11a0;
  ulong uStack_1198;
  undefined1 uStack_1190;
  undefined4 uStack_118f;
  ulong uStack_1188;
  undefined1 uStack_1180;
  undefined4 uStack_117f;
  double dStack_1178;
  undefined1 uStack_1170;
  undefined1 uStack_116f;
  undefined4 uStack_116e;
  undefined2 uStack_116a;
  ulong uStack_1168;
  undefined *puStack_1160;
  ulong uStack_1158;
  undefined *puStack_1150;
  ulong uStack_1148;
  undefined1 uStack_1140;
  undefined4 uStack_113f;
  ulong uStack_1138;
  undefined1 uStack_1130;
  undefined4 uStack_112f;
  ulong uStack_1128;
  undefined1 uStack_1120;
  undefined4 uStack_111f;
  ulong uStack_1118;
  undefined1 uStack_1110;
  undefined4 uStack_110f;
  ulong uStack_1108;
  undefined1 uStack_1100;
  undefined4 uStack_10ff;
  ulong uStack_10f8;
  undefined *puStack_10f0;
  double dStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined1 uStack_10b8;
  undefined1 auStack_10b0 [24];
  undefined auStack_1098 [24];
  double dStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined1 uStack_1050;
  undefined4 uStack_1040;
  undefined4 uStack_1038;
  undefined4 uStack_1030;
  undefined4 uStack_1028;
  undefined4 uStack_1020;
  undefined4 uStack_1018;
  undefined2 uStack_1014;
  undefined4 uStack_1010;
  undefined4 uStack_1008;
  undefined1 uStack_ff0;
  undefined1 uStack_fef;
  undefined1 auStack_f60 [257];
  undefined1 uStack_e5f;
  undefined8 uStack_e58;
  undefined1 auStack_e50 [232];
  undefined8 uStack_d68;
  ulong uStack_ce8;
  undefined1 uStack_ce0;
  ulong uStack_cd8;
  undefined1 uStack_cd0;
  ulong uStack_cc8;
  undefined1 uStack_cc0;
  undefined4 uStack_cbf;
  ulong uStack_cb8;
  undefined1 uStack_cb0;
  undefined4 uStack_caf;
  double dStack_ca8;
  undefined1 uStack_ca0;
  undefined1 uStack_c9f;
  undefined4 uStack_c9e;
  undefined2 uStack_c9a;
  ulong uStack_c98;
  undefined *puStack_c90;
  ulong uStack_c88;
  undefined *puStack_c80;
  ulong uStack_c78;
  undefined1 uStack_c70;
  undefined4 uStack_c6f;
  ulong uStack_c68;
  undefined1 uStack_c60;
  undefined4 uStack_c5f;
  ulong uStack_c58;
  undefined1 uStack_c50;
  undefined4 uStack_c4f;
  ulong uStack_c48;
  undefined1 uStack_c40;
  undefined4 uStack_c3f;
  ulong uStack_c38;
  undefined1 uStack_c30;
  undefined4 uStack_c2f;
  ulong uStack_c28;
  undefined *puStack_c20;
  double dStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 uStack_be8;
  undefined1 auStack_be0 [41];
  undefined4 uStack_bb7;
  undefined4 uStack_ba7;
  undefined4 uStack_b96;
  undefined2 uStack_b92;
  undefined4 uStack_b67;
  undefined4 uStack_b57;
  undefined1 auStack_b50 [9];
  undefined4 uStack_b47;
  undefined4 uStack_b37;
  undefined4 uStack_b27;
  double dStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined1 uStack_ae0;
  undefined1 auStack_8d8 [144];
  undefined1 auStack_848 [632];
  undefined1 auStack_5d0 [776];
  undefined1 auStack_2c8 [264];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [88];
  long lStack_130;
  undefined *puVar21;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar31 = *(undefined8 *)(param_1 + 0x198);
  func_0x000107c610b4(auStack_5d0,param_1,0x301);
  iVar14 = (int)auStack_5d0;
  func_0x00010178e1e4();
  uVar28 = (ulong)param_3 >> 0x3e;
  if (iVar14 == 1) {
    func_0x000100406b98(auStack_8d8);
    func_0x000107c610b4(auStack_2c8,auStack_8d8,0x101);
    uStack_1b8 = 1;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    func_0x00010425b4fc(&uStack_ff0,0,0,0,0,0,1,0,0,0,1,0,0,
                        in_stack_ffffffffffffdf78 & 0xffffffffffff0000,0,1,0,1);
    FUN_1018be1c0(param_1,auStack_8d8,0x112dcbc48,&UNK_10d98e2c0);
  }
  else {
    func_0x000107c610b4(&uStack_ff0,param_1,0x198);
    func_0x000107c610b4(auStack_e50,param_1 + 0x1a0,0x161);
    uStack_e58 = uVar31;
    FUN_1018be1c0(param_1,auStack_8d8,0x112dcbc48,&UNK_10d98e2c0);
    if ((int)uVar31 != 0) goto LAB_1018bc448;
  }
  if (uVar28 == 0) {
    plVar32 = *(long **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar32 = (long *)((ulong)param_3 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < param_3) {
      plVar32 = param_3;
    }
    func_0x000107c60480();
  }
  if (plVar32 != (long *)0x0) {
    plVar36 = (long *)0x0;
    uVar31 = 3;
    do {
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        if (*(long **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10) <= plVar36) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bc34c);
          (*pcVar12)();
        }
        plVar16 = (long *)param_3[(long)plVar36 + 4];
        func_0x000107c61174();
      }
      else {
        plVar16 = plVar36;
        func_0x000101887e84(plVar36,param_3);
      }
      bVar13 = SCARRY8((long)plVar36,1);
      plVar36 = (long *)((long)plVar36 + 1);
      if (bVar13) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bc348);
        (*pcVar12)();
      }
      plVar24 = plVar16;
      func_0x000103c02174();
      lVar38 = *plVar24;
      iVar14 = (int)*(undefined8 *)((long)plVar16 + _DAT_11308cf08);
      func_0x000107c61434(lVar38);
      func_0x000107c30c30();
      lVar29 = *(long *)(lVar38 + 0x10);
      lVar30 = 0x20;
      while (lVar29 != 0) {
        piVar1 = (int *)(lVar38 + lVar30);
        lVar30 = lVar30 + 8;
        lVar29 = lVar29 + -1;
        if (*piVar1 == iVar14) goto LAB_1018bc434;
      }
      func_0x000107c6142c(lVar38);
      func_0x000107c61170(plVar16);
    } while (plVar36 != plVar32);
  }
  if (uVar28 == 0) {
    plVar32 = *(long **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar32 = (long *)((ulong)param_3 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < param_3) {
      plVar32 = param_3;
    }
    func_0x000107c60480();
  }
  if (plVar32 != (long *)0x0) {
    plVar36 = (long *)0x0;
    uVar31 = 1;
    do {
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        if (*(long **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10) <= plVar36) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdd10);
          (*pcVar12)();
        }
        plVar16 = (long *)param_3[(long)plVar36 + 4];
        func_0x000107c61174();
      }
      else {
        plVar16 = plVar36;
        func_0x000101887e84(plVar36,param_3);
      }
      bVar13 = SCARRY8((long)plVar36,1);
      plVar36 = (long *)((long)plVar36 + 1);
      if (bVar13) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdd0c);
        (*pcVar12)();
      }
      plVar24 = plVar16;
      func_0x000103c021ec();
      lVar38 = *plVar24;
      iVar14 = (int)*(undefined8 *)((long)plVar16 + _DAT_11308cf08);
      func_0x000107c61434(lVar38);
      func_0x000107c30c30();
      lVar29 = *(long *)(lVar38 + 0x10);
      lVar30 = 0x20;
      while (lVar29 != 0) {
        piVar1 = (int *)(lVar38 + lVar30);
        lVar30 = lVar30 + 8;
        lVar29 = lVar29 + -1;
        if (*piVar1 == iVar14) goto LAB_1018bc434;
      }
      func_0x000107c6142c(lVar38);
      func_0x000107c61170(plVar16);
    } while (plVar36 != plVar32);
  }
  goto LAB_1018bc448;
LAB_1018bc434:
  func_0x000107c6142c(lVar38);
  func_0x000107c61170(plVar16);
  uStack_e58 = uVar31;
LAB_1018bc448:
  func_0x000107c610b4(auStack_8d8,param_1,0x301);
  iVar14 = (int)auStack_8d8;
  func_0x00010178e1e4();
  if (iVar14 == 1) {
LAB_1018bc4a8:
    puVar27 = (undefined *)0x1;
    func_0x00010425f244(&uStack_ce8,0,1,0,1,0,1,0,1,0,0x201,0,0,0,0,0,1);
    uStack_1e30 = uStack_ce8;
    uStack_1e50 = uStack_cd8;
    uStack_1e70 = uStack_cc8;
    uStack_1008 = uStack_cbf;
    uStack_1e80 = uStack_cb8;
    uStack_1010 = uStack_caf;
    uStack_1014 = uStack_c9a;
    uStack_1018 = uStack_c9e;
    puStack_1df8 = puStack_c90;
    uStack_1e18 = uStack_c98;
    uStack_1e10 = uStack_c88;
    uStack_1020 = uStack_c6f;
    uStack_1028 = uStack_c5f;
    uStack_1e20 = uStack_c58;
    uStack_1030 = uStack_c4f;
    uStack_1e40 = uStack_c48;
    uStack_1038 = uStack_c3f;
    uStack_1e60 = uStack_c38;
    uStack_1040 = uStack_c2f;
    uStack_1050 = uStack_be8;
    uStack_1068 = uStack_c00;
    uStack_1070 = uStack_c08;
    uStack_1058 = uStack_bf0;
    uStack_1060 = uStack_bf8;
    uStack_1078 = uStack_c10;
    dStack_1080 = dStack_c18;
    uStack_1e90 = uStack_c28;
    puStack_1df0 = puStack_c80;
    puStack_1e00 = puStack_c20;
    uStack_1ea8 = uStack_c78;
    uStack_1eb8 = uStack_c68;
    dVar47 = dStack_c18;
    dVar49 = dStack_ca8;
    uVar7 = uStack_ce0;
    uVar8 = uStack_cd0;
    uVar9 = uStack_cc0;
    uVar10 = uStack_cb0;
    uVar11 = uStack_ca0;
    uVar35 = uStack_c9f;
    uVar42 = uStack_c70;
    uVar3 = uStack_c60;
    uVar4 = uStack_c50;
    uVar5 = uStack_c40;
    uVar6 = uStack_c30;
    if ((ulong)param_2 >> 0x3e == 0) goto LAB_1018bc6d4;
LAB_1018bcd24:
    puVar46 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar46 = param_2;
    }
    func_0x000107c60480();
  }
  else {
    func_0x000107c610b4(auStack_be0,auStack_848,0x101);
    iVar14 = (int)auStack_be0;
    func_0x0001018803f0();
    if (iVar14 == 1) goto LAB_1018bc4a8;
    func_0x000107c610b4(&uStack_14c0,auStack_be0,0x101);
    uStack_1e30 = uStack_14c0;
    uStack_1e50 = uStack_14b0;
    uStack_1e70 = uStack_14a0;
    uStack_1008 = uStack_bb7;
    uStack_1e80 = uStack_1490;
    uStack_1010 = uStack_ba7;
    uStack_1018 = uStack_b96;
    uStack_1014 = uStack_b92;
    puStack_1df8 = puStack_1468;
    uStack_1e18 = uStack_1470;
    uStack_1e10 = uStack_1460;
    uStack_1020 = uStack_b67;
    uStack_1028 = uStack_b57;
    uStack_1e20 = uStack_1430;
    uStack_1030 = uStack_b47;
    uStack_1e40 = uStack_1420;
    uStack_1038 = uStack_b37;
    uStack_1e60 = uStack_1410;
    uStack_1040 = uStack_b27;
    uStack_1050 = uStack_ae0;
    uStack_1068 = uStack_af8;
    uStack_1070 = uStack_b00;
    uStack_1058 = uStack_ae8;
    uStack_1060 = uStack_af0;
    uStack_1078 = uStack_b08;
    dStack_1080 = dStack_b10;
    puVar27 = auStack_17c8;
    func_0x000101880464(&uStack_14c0);
    uStack_1e90 = uStack_1400;
    puStack_1df0 = puStack_1458;
    puStack_c80 = puStack_1458;
    puStack_1e00 = puStack_13f8;
    puStack_c20 = puStack_13f8;
    uStack_1ea8 = uStack_1450;
    uStack_c78 = uStack_1450;
    uStack_1eb8 = uStack_1440;
    uStack_c68 = uStack_1440;
    dVar47 = dStack_b10;
    dVar49 = dStack_1480;
    dStack_ca8 = dStack_1480;
    uStack_ce0 = uStack_14b8;
    uVar7 = uStack_14b8;
    uStack_cd0 = uStack_14a8;
    uVar8 = uStack_14a8;
    uStack_cc0 = uStack_1498;
    uVar9 = uStack_1498;
    uStack_cb0 = uStack_1488;
    uVar10 = uStack_1488;
    uStack_ca0 = uStack_1478;
    uVar11 = uStack_1478;
    uVar35 = uStack_1477;
    uVar42 = uStack_1448;
    uStack_c70 = uStack_1448;
    uStack_c60 = uStack_1438;
    uVar3 = uStack_1438;
    uStack_c50 = uStack_1428;
    uVar4 = uStack_1428;
    uStack_c40 = uStack_1418;
    uVar5 = uStack_1418;
    uStack_c30 = uStack_1408;
    uVar6 = uStack_1408;
    if ((ulong)param_2 >> 0x3e != 0) goto LAB_1018bcd24;
LAB_1018bc6d4:
    puVar46 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    puStack_1df0 = puStack_c80;
    puStack_1e00 = puStack_c20;
    uStack_1ea8 = uStack_c78;
    uStack_1eb8 = uStack_c68;
    dVar49 = dStack_ca8;
    uVar7 = uStack_ce0;
    uVar8 = uStack_cd0;
    uVar9 = uStack_cc0;
    uVar10 = uStack_cb0;
    uVar11 = uStack_ca0;
    uVar42 = uStack_c70;
    uVar3 = uStack_c60;
    uVar4 = uStack_c50;
    uVar5 = uStack_c40;
    uVar6 = uStack_c30;
  }
  if (puVar46 != (undefined *)0x0) {
    if ((long)puVar46 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc8c);
      (*pcVar12)();
    }
    puVar33 = (undefined *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        puVar34 = *(undefined **)(param_2 + (long)puVar33 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar34 = puVar33;
        puVar27 = param_2;
        func_0x0001018889e0();
      }
      uVar17 = *(ulong *)(puVar34 + _DAT_11308ced0);
      func_0x000107c61174();
      uVar18 = uVar17;
      func_0x000107c30bfc();
      func_0x000107c61180();
      uVar42 = uVar18 == 0;
      if ((bool)uVar42) {
        uStack_1ea8 = 0;
      }
      else {
        uStack_1ea8 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c00();
      func_0x000107c61180();
      uVar3 = uVar18 == 0;
      if ((bool)uVar3) {
        uStack_1eb8 = 0;
      }
      else {
        uStack_1eb8 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c04();
      func_0x000107c61180();
      uVar4 = uVar18 == 0;
      if ((bool)uVar4) {
        uStack_1e20 = 0;
      }
      else {
        uStack_1e20 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c08();
      func_0x000107c61180();
      uVar5 = uVar18 == 0;
      if ((bool)uVar5) {
        uStack_1e40 = 0;
      }
      else {
        uStack_1e40 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c0c();
      func_0x000107c61180();
      uVar6 = uVar18 == 0;
      if ((bool)uVar6) {
        uStack_1e60 = 0;
      }
      else {
        uStack_1e60 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c10();
      func_0x000107c61180();
      uVar7 = uVar18 == 0;
      if ((bool)uVar7) {
        uStack_1e30 = 0;
      }
      else {
        uStack_1e30 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c14();
      func_0x000107c61180();
      uVar8 = uVar18 == 0;
      if ((bool)uVar8) {
        uStack_1e50 = 0;
      }
      else {
        uStack_1e50 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c18();
      func_0x000107c61180();
      uVar9 = uVar18 == 0;
      if ((bool)uVar9) {
        uStack_1e70 = 0;
      }
      else {
        uStack_1e70 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c1c();
      func_0x000107c61180();
      uVar10 = uVar18 == 0;
      if ((bool)uVar10) {
        uStack_1e80 = 0;
      }
      else {
        uStack_1e80 = uVar18;
        func_0x000107c49820();
        func_0x000107c61170(uVar18);
      }
      uVar18 = uVar17;
      func_0x000107c30c20();
      func_0x000107c61180();
      if (uVar18 == 0) {
        func_0x000107c6142c(puStack_1df8);
        uStack_1e18 = 0;
        puStack_1df8 = (undefined *)0x0;
        puVar19 = puVar27;
      }
      else {
        uStack_1e18 = uVar18;
        func_0x000107c5faec();
        puVar19 = puVar27;
        func_0x000107c61170(uVar18);
        func_0x000107c6142c(puStack_1df8);
        puStack_1df8 = puVar27;
      }
      uVar18 = uVar17;
      func_0x000107c30c24();
      func_0x000107c61180();
      if (uVar18 == 0) {
        func_0x000107c6142c(puStack_1df0);
        uStack_1e10 = 0;
        puStack_1df0 = (undefined *)0x0;
        puVar43 = puVar19;
      }
      else {
        uStack_1e10 = uVar18;
        func_0x000107c5faec();
        puVar43 = puVar19;
        func_0x000107c61170(uVar18);
        func_0x000107c6142c(puStack_1df0);
        puStack_1df0 = puVar19;
      }
      uVar18 = uVar17;
      func_0x000107c30c28();
      func_0x000107c61180();
      if (uVar18 == 0) {
        func_0x000107c61170(puVar34);
        func_0x000107c61170(uVar17);
        func_0x000107c6142c(puStack_1e00);
        uStack_1e90 = 0;
        puStack_1e00 = (undefined *)0x0;
        puVar27 = puVar43;
      }
      else {
        uStack_1e90 = uVar18;
        func_0x000107c5faec();
        puVar27 = puVar43;
        func_0x000107c61170(uVar18);
        func_0x000107c61170(puVar34);
        func_0x000107c61170(uVar17);
        func_0x000107c6142c(puStack_1e00);
        puStack_1e00 = puVar43;
      }
      puVar33 = puVar33 + 1;
    } while (puVar46 != puVar33);
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    puVar46 = *(undefined **)(((ulong)param_4 & 0xffffffffffffff8) + 0x10);
    puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar46 = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_4) {
      puVar46 = param_4;
    }
    func_0x000107c60480();
    puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar33;
  if (puVar46 == (undefined *)0x0) goto LAB_1018bd060;
  if (((ulong)param_4 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdce0);
      (*pcVar12)();
    }
    puVar33 = *(undefined **)(*(long *)(param_4 + 0x20) + _DAT_11308bf80);
    func_0x000107c61434(puVar33);
    if ((-1 < (long)puVar33) && (((ulong)puVar33 >> 0x3e & 1) == 0)) goto LAB_1018bcacc;
LAB_1018bdcc4:
    puVar34 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar33) {
      puVar34 = puVar33;
    }
    func_0x000107c60480();
    if (puVar34 != (undefined *)0x0) goto LAB_1018bcad8;
LAB_1018bcd74:
    func_0x000107c6142c(puVar33);
  }
  else {
    lVar30 = 0;
    puVar27 = param_4;
    func_0x000101888020();
    puVar33 = *(undefined **)(lVar30 + _DAT_11308bf80);
    func_0x000107c61434(puVar33);
    func_0x000107c615e8(lVar30);
    if (((long)puVar33 < 0) || (((ulong)puVar33 >> 0x3e & 1) != 0)) goto LAB_1018bdcc4;
LAB_1018bcacc:
    if (*(long *)(((ulong)puVar33 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1018bcd74;
LAB_1018bcad8:
    if (((ulong)puVar33 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar33 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdd08);
        (*pcVar12)();
      }
      uVar18 = *(ulong *)(puVar33 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar18 = 0;
      puVar27 = puVar33;
      FUN_1018881bc();
    }
    func_0x000107c6142c(puVar33);
    uVar17 = uVar18;
    func_0x000107c30cc4();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    if (uVar17 != 0) {
      uVar18 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
      func_0x000107c610b4(auStack_be0,param_1,0x301);
      iVar14 = (int)auStack_be0;
      func_0x00010178e1e4();
      if (iVar14 != 1) {
        func_0x000107c610b4(auStack_188,auStack_b50,0x101);
        iVar14 = (int)auStack_188;
        func_0x0001018803f0();
        if ((iVar14 != 1) && (puVar33 = puVar27, lStack_130 != 0)) goto LAB_1018bcd74;
      }
      func_0x000107c6142c(puStack_1df8);
      uStack_1e18 = uVar18;
      puStack_1df8 = puVar27;
    }
  }
  puVar34 = (undefined *)0x0;
  puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    if (((ulong)param_4 & 0xc000000000000001) == 0) {
      if (*(undefined **)(((ulong)param_4 & 0xffffffffffffff8) + 0x10) <= puVar34) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd024);
        (*pcVar12)();
      }
      puVar19 = *(undefined **)(param_4 + (long)puVar34 * 8 + 0x20);
      func_0x000107c61174();
      lVar30 = _DAT_11308bf80;
    }
    else {
      puVar19 = puVar34;
      func_0x000101888020(puVar34,param_4);
      lVar30 = _DAT_11308bf80;
    }
    _DAT_11308bf80 = lVar30;
    if (SCARRY8((long)puVar34,1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd020);
      (*pcVar12)();
    }
    puVar34 = puVar34 + 1;
    puVar27 = auStack_1098;
    func_0x000107c61428(puVar19 + lVar30,puVar27,0,0);
    puVar43 = *(undefined **)(puVar19 + lVar30);
    func_0x000107c61434(puVar43);
    func_0x000107c61170(puVar19);
    if ((ulong)puVar43 >> 0x3e == 0) {
      puVar19 = *(undefined **)((undefined *)((ulong)puVar43 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar19 = (undefined *)((ulong)puVar43 & 0xffffffffffffff8);
      if (((ulong)puVar43 & 0x8000000000000000) != 0) {
        puVar19 = puVar43;
      }
      func_0x000107c60480();
    }
    uVar18 = (ulong)puVar33 >> 0x3e;
    if (uVar18 == 0) {
      puVar20 = *(undefined **)((undefined *)((ulong)puVar33 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
      if (((ulong)puVar33 & 0x8000000000000000) != 0) {
        puVar20 = puVar33;
      }
      func_0x000107c60480();
    }
    if (SCARRY8((long)puVar20,(long)puVar19)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd028);
      (*pcVar12)();
    }
    puVar20 = puVar20 + (long)puVar19;
    puVar21 = puVar33;
    func_0x000107c61550();
    uVar15 = 0;
    if (uVar18 == 0) {
      uVar15 = (uint)puVar21;
    }
    puVar21 = (undefined *)(ulong)uVar15;
    if ((uVar15 != 1) ||
       (uVar17 = (ulong)puVar33 & 0xffffffffffffff8,
       (long)(*(ulong *)(uVar17 + 0x18) >> 1) < (long)puVar20)) {
      if (uVar18 == 0) {
        puVar27 = *(undefined **)((undefined *)((ulong)puVar33 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar27 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
        if (((ulong)puVar33 & 0x8000000000000000) != 0) {
          puVar27 = puVar33;
        }
        func_0x000107c60480();
      }
      if ((long)puVar27 <= (long)puVar20) {
        puVar27 = puVar20;
      }
      FUN_1018a68a4(puVar21,puVar27,1,puVar33);
      uVar17 = (ulong)puVar21 & 0xffffffffffffff8;
      puVar33 = puVar21;
    }
    lVar30 = *(long *)(uVar17 + 0x10);
    puVar20 = (undefined *)((*(ulong *)(uVar17 + 0x18) >> 1) - lVar30);
    if ((ulong)puVar43 >> 0x3e == 0) {
      puVar21 = *(undefined **)(((ulong)puVar43 & 0xffffffffffffff8) + 0x10);
      if (puVar21 != (undefined *)0x0) {
        if (puVar20 < puVar21) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd038);
          (*pcVar12)();
        }
        uVar31 = 0;
        func_0x0001018892d8(0);
        puVar27 = (undefined *)(((ulong)puVar43 & 0xffffffffffffff8) + 0x20);
        func_0x000107c6140c(uVar17 + lVar30 * 8 + 0x20,puVar27,puVar21,uVar31);
        goto LAB_1018bcf8c;
      }
LAB_1018bcd9c:
      func_0x000107c6142c(puVar43);
      if (0 < (long)puVar19) goto LAB_1018bd028;
    }
    else {
      puVar21 = (undefined *)((ulong)puVar43 & 0xffffffffffffff8);
      if (((ulong)puVar43 & 0x8000000000000000) != 0) {
        puVar21 = puVar43;
      }
      puVar22 = puVar21;
      func_0x000107c60480();
      if (puVar22 == (undefined *)0x0) goto LAB_1018bcd9c;
      func_0x000107c60480();
      if ((long)puVar20 < (long)puVar21) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd034);
        (*pcVar12)();
      }
      if ((long)puVar22 < 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd03c);
        (*pcVar12)();
      }
      lVar30 = uVar17 + lVar30 * 8;
      puVar40 = (undefined8 *)(lVar30 + 0x20);
      if (((ulong)puVar43 & 0xc000000000000001) == 0) {
        uVar31 = *(undefined8 *)(puVar43 + 0x20);
        *puVar40 = uVar31;
        puVar22 = puVar22 + -1;
        if (puVar22 != (undefined *)0x0) {
          uVar26 = uVar31;
          puVar40 = (undefined8 *)(lVar30 + 0x28);
          puVar41 = (undefined8 *)(puVar43 + 0x28);
          do {
            uVar31 = *puVar41;
            *puVar40 = uVar31;
            func_0x000107c61174(uVar26);
            puVar22 = puVar22 + -1;
            uVar26 = uVar31;
            puVar40 = puVar40 + 1;
            puVar41 = puVar41 + 1;
          } while (puVar22 != (undefined *)0x0);
        }
        func_0x000107c61174(uVar31);
      }
      else {
        puVar20 = (undefined *)0x0;
        do {
          puVar23 = puVar20;
          puVar27 = puVar43;
          FUN_1018881bc();
          puVar40[(long)puVar20] = puVar23;
          puVar20 = puVar20 + 1;
        } while (puVar22 != puVar20);
      }
LAB_1018bcf8c:
      func_0x000107c6142c(puVar43);
      if ((long)puVar21 < (long)puVar19) {
LAB_1018bd028:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd02c);
        (*pcVar12)();
      }
      if (0 < (long)puVar21) {
        if (SCARRY8(*(long *)(uVar17 + 0x10),(long)puVar21)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd030);
          (*pcVar12)();
        }
        *(undefined **)(uVar17 + 0x10) = puVar21 + *(long *)(uVar17 + 0x10);
      }
    }
  } while (puVar34 != puVar46);
LAB_1018bd060:
  if ((ulong)puVar33 >> 0x3e == 0) {
    puVar34 = *(undefined **)(((ulong)puVar33 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar34 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar33) {
      puVar34 = puVar33;
    }
    func_0x000107c60480();
  }
  if (puVar34 != (undefined *)0x0) {
    uVar18 = 0;
    do {
      if (((ulong)puVar33 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar33 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd200);
          (*pcVar12)();
        }
        uVar17 = *(ulong *)(puVar33 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar17 = uVar18;
        puVar27 = puVar33;
        FUN_1018881bc();
      }
      puVar19 = (undefined *)(uVar18 + 1);
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd1fc);
        (*pcVar12)();
      }
      uVar37 = uVar17;
      func_0x000107c30cb8();
      if ((int)uVar37 == 5) {
        func_0x000107c6142c(puVar33);
        func_0x000107c30cbc(uVar17);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar17);
        uStack_e5f = 1;
        puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
        goto joined_r0x0001018bd114;
      }
      func_0x000107c61170(uVar17);
      uVar18 = uVar18 + 1;
    } while (puVar19 != puVar34);
  }
  func_0x000107c6142c(puVar33);
  puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x0001018bd114:
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar33;
  if (puVar46 != (undefined *)0x0) {
    uVar18 = 0;
    do {
      if (((ulong)param_4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_4 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd3e8);
          (*pcVar12)();
        }
        uVar17 = *(ulong *)(param_4 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
        lVar30 = _DAT_11308bf80;
      }
      else {
        uVar17 = uVar18;
        func_0x000101888020(uVar18,param_4);
        lVar30 = _DAT_11308bf80;
      }
      _DAT_11308bf80 = lVar30;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd3e4);
        (*pcVar12)();
      }
      puVar34 = (undefined *)(uVar18 + 1);
      func_0x000107c61428(uVar17 + lVar30,auStack_10b0,0,0);
      uVar37 = *(ulong *)(uVar17 + lVar30);
      func_0x000107c61434(uVar37);
      func_0x000107c61170(uVar17);
      if (uVar37 >> 0x3e == 0) {
        uVar17 = *(ulong *)((uVar37 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar17 = uVar37 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar37) {
          uVar17 = uVar37;
        }
        func_0x000107c60480();
      }
      uVar45 = (ulong)puVar33 >> 0x3e;
      if (uVar45 == 0) {
        puVar27 = *(undefined **)((undefined *)((ulong)puVar33 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar27 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
        if (((ulong)puVar33 & 0x8000000000000000) != 0) {
          puVar27 = puVar33;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar27,uVar17)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd3ec);
        (*pcVar12)();
      }
      puVar27 = puVar27 + uVar17;
      puVar19 = puVar33;
      func_0x000107c61550();
      uVar15 = 0;
      if (uVar45 == 0) {
        uVar15 = (uint)puVar19;
      }
      puVar19 = (undefined *)(ulong)uVar15;
      if ((uVar15 != 1) ||
         (uVar39 = (ulong)puVar33 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar39 + 0x18) >> 1) < (long)puVar27)) {
        if (uVar45 == 0) {
          puVar43 = *(undefined **)((undefined *)((ulong)puVar33 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar43 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
          if (((ulong)puVar33 & 0x8000000000000000) != 0) {
            puVar43 = puVar33;
          }
          func_0x000107c60480();
        }
        if ((long)puVar43 <= (long)puVar27) {
          puVar43 = puVar27;
        }
        FUN_1018a68a4(puVar19,puVar43,1,puVar33);
        uVar39 = (ulong)puVar19 & 0xffffffffffffff8;
        puVar33 = puVar19;
      }
      puVar27 = (undefined *)((*(ulong *)(uVar39 + 0x18) >> 1) - *(long *)(uVar39 + 0x10));
      FUN_1018bae48(uVar39 + *(long *)(uVar39 + 0x10) * 8 + 0x20);
      func_0x000107c6142c();
      if ((long)uVar37 < (long)uVar17) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd3f0);
        (*pcVar12)();
      }
      if (0 < (long)uVar37) {
        if (SCARRY8(*(long *)(uVar39 + 0x10),uVar37)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd3f4);
          (*pcVar12)();
        }
        *(ulong *)(uVar39 + 0x10) = *(long *)(uVar39 + 0x10) + uVar37;
      }
      uVar18 = uVar18 + 1;
    } while (puVar34 != puVar46);
  }
  if ((ulong)puVar33 >> 0x3e == 0) {
    puVar46 = *(undefined **)(((ulong)puVar33 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar46 = (undefined *)((ulong)puVar33 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar33) {
      puVar46 = puVar33;
    }
    func_0x000107c60480();
  }
  if (puVar46 != (undefined *)0x0) {
    uVar18 = 0;
    do {
      if (((ulong)puVar33 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar33 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd208);
          (*pcVar12)();
        }
        uVar17 = *(ulong *)(puVar33 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar17 = uVar18;
        puVar27 = puVar33;
        FUN_1018881bc();
      }
      puVar34 = (undefined *)(uVar18 + 1);
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd204);
        (*pcVar12)();
      }
      uVar37 = uVar17;
      func_0x000107c30cb8();
      if ((int)uVar37 == 6) {
        func_0x000107c6142c(puVar33);
        uVar18 = uVar17;
        func_0x000107c30cbc();
        func_0x000107c61180();
        func_0x000107c61170(uVar17);
        uStack_1e10 = uVar18;
        func_0x000107c5faec();
        func_0x000107c61170(uVar18);
        func_0x000107c6142c(puStack_1df0);
        puStack_1df0 = puVar27;
        goto LAB_1018bd418;
      }
      func_0x000107c61170(uVar17);
      uVar18 = uVar18 + 1;
    } while (puVar34 != puVar46);
  }
  func_0x000107c6142c(puVar33);
LAB_1018bd418:
  if (uVar28 == 0) {
    plVar32 = *(long **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar32 = (long *)((ulong)param_3 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < param_3) {
      plVar32 = param_3;
    }
    func_0x000107c60480();
  }
  uVar28 = (ulong)param_3 & 0xffffffffffffff8;
  plVar16 = (long *)0x0;
  uVar18 = (ulong)param_3 & 0xc000000000000001;
  plVar36 = param_3 + 4;
  do {
    if (plVar32 == plVar16) goto LAB_1018bd4bc;
    if (uVar18 == 0) {
      if (*(long **)(uVar28 + 0x10) <= plVar16) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc4c);
        (*pcVar12)();
      }
      plVar24 = (long *)param_3[(long)plVar16 + 4];
      func_0x000107c61174();
    }
    else {
      plVar24 = plVar16;
      func_0x000101887e84(plVar16,param_3);
    }
    if (SCARRY8((long)plVar16,1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bd4b4);
      (*pcVar12)();
    }
    iVar14 = (int)*(undefined8 *)((long)plVar24 + _DAT_11308cf08);
    func_0x000107c30c30();
    func_0x000107c61170(plVar24);
    plVar16 = (long *)((long)plVar16 + 1);
  } while (iVar14 != 3);
  uVar35 = 1;
LAB_1018bd4bc:
  plVar16 = plVar32;
  if (plVar32 != (long *)0x0) {
    if (uVar18 == 0) {
      if (*(long *)(uVar28 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdcf4);
        (*pcVar12)();
      }
      plVar24 = (long *)*plVar36;
      func_0x000107c61174();
    }
    else {
      plVar24 = (long *)0x0;
      func_0x000101887e84(0,param_3);
    }
    if (plVar32 != (long *)0x1) {
      plVar44 = (long *)0x1;
      do {
        while( true ) {
          if (uVar18 == 0) {
            if ((long)plVar44 < 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc6c);
              (*pcVar12)();
            }
            if (*(long **)(uVar28 + 0x10) <= plVar44) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc70);
              (*pcVar12)();
            }
            plVar25 = (long *)param_3[(long)plVar44 + 4];
            func_0x000107c61174();
            dVar49 = dVar47;
          }
          else {
            plVar25 = plVar44;
            func_0x000101887e84(plVar44,param_3);
            dVar49 = dVar47;
          }
          plVar2 = (long *)((long)plVar44 + 1);
          if (SCARRY8((long)plVar44,1)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc5c);
            (*pcVar12)();
          }
          lVar30 = *(long *)((long)plVar24 + _DAT_11308cf08);
          func_0x000107c30c34();
          func_0x000107c61180();
          if (lVar30 == 0) {
            dVar48 = 0.0;
            dVar47 = dVar49;
          }
          else {
            func_0x000107c4223c();
            dVar47 = dVar49;
            func_0x000107c61170(lVar30);
            dVar48 = dVar49;
          }
          lVar30 = *(long *)((long)plVar25 + _DAT_11308cf08);
          func_0x000107c30c34();
          func_0x000107c61180();
          if (lVar30 != 0) break;
          if (dVar48 < 0.0) goto LAB_1018bd5c4;
LAB_1018bd4f8:
          func_0x000107c61170(plVar25);
          plVar44 = (long *)((long)plVar44 + 1);
          if (plVar2 == plVar32) goto LAB_1018bd5dc;
        }
        func_0x000107c4223c();
        dVar49 = dVar47;
        func_0x000107c61170(lVar30);
        bVar13 = dVar47 <= dVar48;
        dVar47 = dVar49;
        if (bVar13) goto LAB_1018bd4f8;
LAB_1018bd5c4:
        func_0x000107c61170(plVar24);
        plVar24 = plVar25;
        plVar44 = plVar2;
      } while (plVar2 != plVar32);
    }
LAB_1018bd5dc:
    lVar30 = *(long *)((long)plVar24 + _DAT_11308cf08);
    func_0x000107c30c34();
    func_0x000107c61180();
    uVar11 = lVar30 == 0;
    if ((bool)uVar11) {
      func_0x000107c61170(plVar24);
      dVar49 = 0.0;
    }
    else {
      func_0x000107c4223c();
      func_0x000107c61170(lVar30);
      func_0x000107c61170(plVar24);
      dVar49 = dVar47;
    }
  }
  do {
    if (plVar16 == (long *)0x0) goto LAB_1018bd6f4;
    plVar24 = (long *)((long)plVar16 - 1);
    if (SBORROW8((long)plVar16,1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc50);
      (*pcVar12)();
    }
    if (uVar18 == 0) {
      if ((long)plVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc54);
        (*pcVar12)();
      }
      if (*(long **)(uVar28 + 0x10) <= plVar24) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc58);
        (*pcVar12)();
      }
      plVar16 = (long *)plVar36[(long)plVar24];
      func_0x000107c61174();
    }
    else {
      plVar16 = plVar24;
      func_0x000101887e84(plVar24,param_3);
    }
    iVar14 = (int)*(undefined8 *)((long)plVar16 + _DAT_11308cf08);
    func_0x000107c30c40();
    func_0x000107c61170(plVar16);
    plVar16 = plVar24;
  } while (iVar14 == 0);
  if (uVar18 == 0) {
    plVar24 = (long *)plVar36[(long)plVar24];
    func_0x000107c61174();
  }
  else {
    func_0x000101887e84(plVar24,param_3);
  }
  uVar26 = *(undefined8 *)((long)plVar24 + _DAT_11308cf08);
  func_0x000107c61174();
  uVar31 = uVar26;
  func_0x000107c30c40();
  func_0x000107c61170(uVar26);
  func_0x000107c61170(plVar24);
  uStack_d68 = uVar31;
LAB_1018bd6f4:
  if ((param_5 & 0xfffffffe) == 0x16) {
    do {
      if (plVar32 == (long *)0x0) goto LAB_1018bd838;
      bVar13 = SBORROW8((long)plVar32,1);
      plVar32 = (long *)((long)plVar32 - 1);
      if (bVar13) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc60);
        (*pcVar12)();
      }
      if (uVar18 == 0) {
        if ((long)plVar32 < 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc64);
          (*pcVar12)();
        }
        if (*(long **)(uVar28 + 0x10) <= plVar32) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018bdc68);
          (*pcVar12)();
        }
        plVar16 = (long *)plVar36[(long)plVar32];
        func_0x000107c61174();
      }
      else {
        plVar16 = plVar32;
        func_0x000101887e84(plVar32,param_3);
      }
      iVar14 = (int)*(undefined8 *)((long)plVar16 + _DAT_11308cf08);
      func_0x000107c30c30();
      func_0x000107c61170(plVar16);
    } while (iVar14 != 5);
    if (uVar18 == 0) {
      plVar32 = (long *)plVar36[(long)plVar32];
      func_0x000107c61174();
    }
    else {
      func_0x000101887e84(plVar32,param_3);
    }
    lVar30 = _DAT_11308cf08;
    lVar29 = *(long *)((long)plVar32 + _DAT_11308cf08);
    func_0x000107c30c44();
    func_0x000107c61180();
    if (lVar29 != 0) {
      lVar38 = lVar29;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar29);
      uStack_ff0 = (undefined1)lVar38;
    }
    lVar29 = *(long *)((long)plVar32 + lVar30);
    func_0x000107c30c48();
    func_0x000107c61180();
    if (lVar29 != 0) {
      lVar38 = lVar29;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar29);
      uStack_fef = (undefined1)lVar38;
    }
    lVar30 = *(long *)((long)plVar32 + lVar30);
    func_0x000107c30c4c();
    func_0x000107c61180();
    if (lVar30 == 0) {
      func_0x000107c61170(plVar32);
    }
    else {
      func_0x000107c4223c();
      func_0x000107c61170(plVar32);
      func_0x000107c61170(lVar30);
    }
  }
LAB_1018bd838:
  uStack_1ae0 = uStack_1e30;
  uStack_1ad0 = uStack_1e50;
  uStack_1ac0 = uStack_1e70;
  uStack_1ab7 = uStack_1008;
  uStack_1ab0 = uStack_1e80;
  uStack_1aa7 = uStack_1010;
  uStack_1a92 = uStack_1014;
  uStack_1a96 = uStack_1018;
  uStack_1a90 = uStack_1e18;
  puStack_1a88 = puStack_1df8;
  uStack_1a80 = uStack_1e10;
  puStack_1a78 = puStack_1df0;
  uStack_1a70 = uStack_1ea8;
  uStack_1a67 = uStack_1020;
  uStack_1a60 = uStack_1eb8;
  uStack_1a57 = uStack_1028;
  uStack_1a50 = uStack_1e20;
  uStack_1a47 = uStack_1030;
  uStack_1a40 = uStack_1e40;
  uStack_1a37 = uStack_1038;
  uStack_1a30 = uStack_1e60;
  uStack_1a27 = uStack_1040;
  uStack_1a20 = uStack_1e90;
  puStack_1a18 = puStack_1e00;
  uStack_19e0 = uStack_1050;
  uStack_19f8 = uStack_1068;
  uStack_1a00 = uStack_1070;
  uStack_19e8 = uStack_1058;
  uStack_19f0 = uStack_1060;
  uStack_1a08 = uStack_1078;
  dStack_1a10 = dStack_1080;
  uStack_1ad8 = uVar7;
  uStack_1ac8 = uVar8;
  uStack_1ab8 = uVar9;
  uStack_1aa8 = uVar10;
  dStack_1aa0 = dVar49;
  uStack_1a98 = uVar11;
  uStack_1a97 = uVar35;
  uStack_1a68 = uVar42;
  uStack_1a58 = uVar3;
  uStack_1a48 = uVar4;
  uStack_1a38 = uVar5;
  uStack_1a28 = uVar6;
  func_0x000107c610b4(auStack_19d8,&uStack_1ae0,0x101);
  func_0x0001018803e8(auStack_19d8);
  func_0x000107c610b4(auStack_18d0,auStack_f60,0x101);
  func_0x000101880464(&uStack_1ae0,&uStack_14c0);
  func_0x0001018be208(auStack_18d0,0x112dcc740,&UNK_10d9907d0);
  func_0x000107c610b4(auStack_f60,auStack_19d8,0x101);
  func_0x000107c610b4(auStack_17c8,&uStack_ff0,0x301);
  func_0x000107c610b4(&uStack_14c0,&uStack_ff0,0x301);
  func_0x00010178e4b0(&uStack_14c0);
  uStack_11b8 = uStack_1e30;
  uStack_11a8 = uStack_1e50;
  uStack_1198 = uStack_1e70;
  uStack_118f = uStack_1008;
  uStack_1188 = uStack_1e80;
  uStack_117f = uStack_1010;
  uStack_116e = uStack_1018;
  uStack_116a = uStack_1014;
  uStack_1168 = uStack_1e18;
  puStack_1160 = puStack_1df8;
  uStack_1158 = uStack_1e10;
  puStack_1150 = puStack_1df0;
  uStack_1148 = uStack_1ea8;
  uStack_113f = uStack_1020;
  uStack_1138 = uStack_1eb8;
  uStack_112f = uStack_1028;
  uStack_1128 = uStack_1e20;
  uStack_111f = uStack_1030;
  uStack_1118 = uStack_1e40;
  uStack_110f = uStack_1038;
  uStack_1108 = uStack_1e60;
  uStack_10ff = uStack_1040;
  uStack_10f8 = uStack_1e90;
  puStack_10f0 = puStack_1e00;
  uStack_10b8 = uStack_1050;
  uStack_10c0 = uStack_1058;
  uStack_10c8 = uStack_1060;
  uStack_10d0 = uStack_1068;
  uStack_10d8 = uStack_1070;
  uStack_10e0 = uStack_1078;
  dStack_10e8 = dStack_1080;
  uStack_11b0 = uVar7;
  uStack_11a0 = uVar8;
  uStack_1190 = uVar9;
  uStack_1180 = uVar10;
  dStack_1178 = dVar49;
  uStack_1170 = uVar11;
  uStack_116f = uVar35;
  uStack_1140 = uVar42;
  uStack_1130 = uVar3;
  uStack_1120 = uVar4;
  uStack_1110 = uVar5;
  uStack_1100 = uVar6;
  FUN_10178e208(auStack_17c8,auStack_1de8);
  FUN_1017e2180(&uStack_11b8);
  func_0x00010178e244(&uStack_ff0);
  func_0x000107c610b4(extraout_x8,&uStack_14c0,0x301);
  return;
}



/* Entry: 1018bdd30; end: 1018be1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bdd30(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_13e8 [689];
  undefined1 uStack_1137;
  undefined1 uStack_1136;
  undefined8 uStack_1135;
  undefined8 uStack_112d;
  undefined8 uStack_1125;
  undefined8 uStack_111d;
  undefined8 uStack_1115;
  undefined8 uStack_110d;
  undefined8 uStack_1105;
  undefined6 uStack_10fd;
  undefined2 uStack_10f7;
  undefined6 uStack_10f5;
  undefined8 uStack_10ef;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined6 uStack_10a8;
  undefined2 uStack_10a2;
  undefined6 uStack_10a0;
  undefined8 uStack_109a;
  undefined1 auStack_1088 [696];
  undefined1 auStack_dd0 [776];
  undefined1 auStack_ac8 [689];
  undefined1 uStack_817;
  undefined1 uStack_816;
  undefined8 uStack_815;
  undefined8 uStack_80d;
  undefined8 uStack_805;
  undefined8 uStack_7fd;
  undefined8 uStack_7f5;
  undefined8 uStack_7ed;
  undefined8 uStack_7e5;
  undefined6 uStack_7dd;
  undefined2 uStack_7d7;
  undefined6 uStack_7d5;
  undefined8 uStack_7cf;
  undefined1 auStack_7c0 [776];
  undefined1 auStack_4b8 [264];
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_378 [792];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_378,param_1,0x301);
  if (param_2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar8 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    FUN_1018be1c0(param_1,auStack_7c0,0x112dcbc48,&UNK_10d98e2c0);
    func_0x000107c610b4(auStack_dd0,auStack_378,0x301);
  }
  else {
    func_0x000107c610b4(auStack_7c0,param_1,0x301);
    iVar5 = (int)auStack_7c0;
    func_0x00010178e1e4();
    if (iVar5 == 1) {
      func_0x000100406b98(auStack_dd0);
      func_0x000107c610b4(auStack_4b8,auStack_dd0,0x101);
      uStack_3a8 = 1;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      func_0x00010425b4fc(auStack_ac8,0,0,0,0,0,1,0,0,0,1);
      func_0x000107c610b4(auStack_1088,auStack_ac8,0x2b1);
      uStack_10b8 = uStack_7ed;
      uStack_10c0 = uStack_7f5;
      uStack_10a8 = uStack_7dd;
      uStack_10b0 = uStack_7e5;
      uStack_109a = uStack_7cf;
      uStack_10a2 = uStack_7d7;
      uStack_10a0 = uStack_7d5;
      uStack_10d8 = uStack_80d;
      uStack_10e0 = uStack_815;
      uStack_10c8 = uStack_7fd;
      uStack_10d0 = uStack_805;
      uVar7 = uStack_816;
      uVar2 = uStack_817;
    }
    else {
      func_0x000107c610b4(auStack_ac8,param_1,0x301);
      func_0x000107c610b4(auStack_1088,param_1,0x2b1);
      uStack_10b8 = *(undefined8 *)(param_1 + 0x2db);
      uStack_10c0 = *(undefined8 *)(param_1 + 0x2d3);
      uStack_10b0 = *(undefined8 *)(param_1 + 0x2e3);
      uStack_10a8 = (undefined6)*(undefined8 *)(param_1 + 0x2eb);
      uStack_109a = *(undefined8 *)(param_1 + 0x2f9);
      uStack_10a2 = (undefined2)*(undefined8 *)(param_1 + 0x2f1);
      uStack_10a0 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x2f1) >> 0x10);
      uStack_10d8 = *(undefined8 *)(param_1 + 699);
      uStack_10e0 = *(undefined8 *)(param_1 + 0x2b3);
      uStack_10c8 = *(undefined8 *)(param_1 + 0x2cb);
      uStack_10d0 = *(undefined8 *)(param_1 + 0x2c3);
      FUN_10178e208(auStack_ac8,auStack_dd0);
      uVar7 = uStack_816;
      uVar2 = uStack_817;
    }
    uVar9 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018be13c);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar9;
        func_0x000101888b7c(uVar9,param_2);
      }
      lVar3 = _DAT_11308cf40;
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018be138);
        (*pcVar4)();
      }
      iVar5 = (int)*(undefined8 *)(uVar6 + _DAT_11308cf40);
      func_0x000107c30be8();
      if (iVar5 == 3) {
        iVar5 = (int)*(undefined8 *)(uVar6 + lVar3);
        func_0x000107c30bec();
        func_0x000107c61170(uVar6);
        if (iVar5 == 8) {
          uVar2 = 1;
          break;
        }
      }
      else {
        func_0x000107c61170(uVar6);
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
    uVar9 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018be144);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar9;
        func_0x000101888b7c(uVar9,param_2);
      }
      lVar3 = _DAT_11308cf40;
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1018be140);
        (*pcVar4)();
      }
      iVar5 = (int)*(undefined8 *)(uVar6 + _DAT_11308cf40);
      func_0x000107c30be8();
      if (iVar5 == 3) {
        iVar5 = (int)*(undefined8 *)(uVar6 + lVar3);
        func_0x000107c30bec();
        if (iVar5 == 10) {
          func_0x000107c61170(uVar6);
        }
        else {
          iVar5 = (int)*(undefined8 *)(uVar6 + lVar3);
          func_0x000107c30bec();
          func_0x000107c61170(uVar6);
          if (iVar5 != 0x1c) goto LAB_1018be03c;
        }
        uVar7 = 1;
        break;
      }
      func_0x000107c61170(uVar6);
LAB_1018be03c:
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
    func_0x000107c610b4(auStack_13e8,auStack_1088,0x2b1);
    uStack_110d = uStack_10b8;
    uStack_1115 = uStack_10c0;
    uStack_10fd = uStack_10a8;
    uStack_1105 = uStack_10b0;
    uStack_10ef = uStack_109a;
    uStack_10f7 = uStack_10a2;
    uStack_10f5 = uStack_10a0;
    uStack_112d = uStack_10d8;
    uStack_1135 = uStack_10e0;
    uStack_111d = uStack_10c8;
    uStack_1125 = uStack_10d0;
    uStack_1137 = uVar2;
    uStack_1136 = uVar7;
    func_0x00010178e4b0(auStack_13e8);
    func_0x000107c610b4(auStack_dd0,auStack_13e8,0x301);
  }
  func_0x000107c610b4(extraout_x8,auStack_dd0,0x301);
  return;
}



/* Entry: 1018be1c0; end: 1018be247;  */

undefined8 FUN_1018be1c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018be248; end: 1018be373; -[_TtC34AppStoreInfoServicesImplementation20AppStoreInfoProvider getStoreFrontCountryCodeWithCompletionHandler:] */

void FUN_1018be248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puVar1 = &UNK_11040b880;
  func_0x000107c613fc(&UNK_11040b880,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040b8a8;
  func_0x000107c613fc(&UNK_11040b8a8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d990838;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040b8d0;
  func_0x000107c613fc(&UNK_11040b8d0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d990848;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d990858,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018be374; end: 1018be43f;  */

void FUN_1018be374(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1018be3f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar3,uVar2);
  return;
}



/* Entry: 1018be440; end: 1018be51b;  */

void FUN_1018be440(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = 0;
  func_0x000107c5f8a4();
  lVar5 = *(long *)(lVar1 + -8);
  uVar2 = 1;
  uVar4 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar4 == 1) {
    FUN_1018be794(uVar3,0x112dbf6f8,&UNK_10d97ae20);
    uVar4 = 0;
  }
  else {
    func_0x000107c5f894();
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x10) + 0x10))(*(long *)(unaff_x22 + 0x10),uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001018be518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018be51c; end: 1018be54f;  */

void FUN_1018be51c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018be550; end: 1018be5b3;  */

void FUN_1018be550(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1018be5b4;
  plVar4[2] = lVar1;
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[3] = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  plVar4[4] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x1018be3f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar3,uVar2);
  return;
}



/* Entry: 1018be5b4; end: 1018be5ef;  */

void FUN_1018be5b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018be5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018be5f0; end: 1018be667;  */

void FUN_1018be5f0(void)

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
  plVar5[1] = (long)FUN_1018be7d4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018be668; end: 1018be6cf;  */

void FUN_1018be668(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018be6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018be6d0; end: 1018be753;  */

void FUN_1018be6d0(undefined8 param_1)

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
  plVar5[1] = 0x1018be7dc;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018be754; end: 1018be793;  */

void FUN_1018be754(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018be790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018be794; end: 1018be7d3;  */

undefined8 FUN_1018be794(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1018be7d4; end: 1018be7df;  */

void FUN_1018be7d4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018be5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018be7e0; end: 1018be80f;  */

void FUN_1018be7e0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1018be810; end: 1018be817;  */

void FUN_1018be810(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018be818; end: 1018be83b;  */

void FUN_1018be818(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018be83c; end: 1018be88b;  */

void FUN_1018be83c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001003fd344();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  func_0x0001001c98ac(0);
  func_0x000107c610f8();
  func_0x0001003fd3e4(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1018be88c; end: 1018be8ef;  */

void FUN_1018be88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1018be8f0; end: 1018be967;  */

void FUN_1018be8f0(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a7c78;
  func_0x000107c610f8();
  func_0x000107c45db0();
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018be930);
  (*pcVar1)();
}



/* Entry: 1018be968; end: 1018be9a3;  */

/* WARNING: Possible PIC construction at 0x0001018be974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018be984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018be994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018be988) */
/* WARNING: Removing unreachable block (ram,0x0001018be978) */
/* WARNING: Removing unreachable block (ram,0x0001018be998) */

void FUN_1018be968(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018be9a4; end: 1018bea33;  */

void FUN_1018be9a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018bea34; end: 1018bea3b;  */

void FUN_1018bea34(void)

{
  if (lRam000000011347a240 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e655c60);
  return;
}



/* Entry: 1018bea3c; end: 1018bec67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1018bea3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112dce9d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dce9e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_11347a250;
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar4);
  *(undefined8 *)(unaff_x20 + _DAT_11347a258) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dce9e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dce9f0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dce9f8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dcea00) = param_5;
  (**(code **)(lVar8 + 0x68))
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_3);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efbcd20);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + _DAT_112dcea08) = puVar5;
  puVar7 = auStack_70;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar7;
}



/* Entry: 1018bec68; end: 1018beeab; -[AdShake2ReportLoggerSwift initWithPreferences:lifecycleInfoMetadataProvider:usernameProvider:valdiRuntimeProvider:] */

undefined8
FUN_1018bec68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11040bc60;
  func_0x000107c613fc(&UNK_11040bc60,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  uVar4 = param_6;
  func_0x000107c61174(param_6);
  FUN_1018bfcf8(param_3,0x1018c0354,puVar1,param_5,param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return param_3;
}



/* Entry: 1018beeac; end: 1018bef37;  */

undefined8 FUN_1018beeac(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_1018bfca8();
  }
  uVar6 = uVar4 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 8;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    uVar5 = *puVar3;
    func_0x000107c610b8(puVar3,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar4;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018bef38);
  (*pcVar2)();
}



/* Entry: 1018bef38; end: 1018bef97; -[AdShake2ReportLoggerSwift didViewAd:snapIndex:] */

/* WARNING: Possible PIC construction at 0x0001018bef80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018bef84) */

void FUN_1018bef38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001018bed3c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018bef98; end: 1018bf09f; -[AdShake2ReportLoggerSwift didLeaveAdWithRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bef98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dcea08);
  puVar1 = &UNK_11040bc10;
  func_0x000107c613fc(&UNK_11040bc10,0x28,7);
  *(long *)(puVar1 + 0x10) = param_1;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  uStack_50 = 0x1018c0588;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11040bc28;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1018bf0a0; end: 1018bf20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bf0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar9 = *(long *)(lVar7 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dcea08);
  puVar1 = &UNK_11040bb20;
  func_0x000107c613fc(&UNK_11040bb20,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000100029394(param_1,(long)&puStack_80 - extraout_x8);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar6 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar8 = lVar7 + uVar6 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_11040bb48;
  func_0x000107c613fc(&UNK_11040bb48,uVar8 + 8,uVar4 | 7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  func_0x0001001021cc((long)&puStack_80 - extraout_x8,puVar2 + uVar6);
  *(undefined8 *)(puVar2 + uVar8) = param_2;
  pcStack_60 = FUN_1018c00bc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11040bb60;
  ppuVar3 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1018bf210; end: 1018bf2ff; -[AdShake2ReportLoggerSwift didLoadURLInBrowser:config:] */

void FUN_1018bf210(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_3);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1018bf0a0(puVar3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x0001000293e4(puVar3);
  return;
}



/* Entry: 1018bf300; end: 1018bf43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018bf300(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dcea08);
  puVar3 = &UNK_11040bb98;
  func_0x000107c613fc(&UNK_11040bb98,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_48;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  puVar4 = &UNK_11040bbc0;
  func_0x000107c613fc(&UNK_11040bbc0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1018c01b8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_58 = FUN_1018c0218;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10006eb60;
  puStack_60 = &UNK_11040bbd8;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_50;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e530(uVar6);
  func_0x000107c60bd0(ppuVar5);
  uVar6 = uStack_48;
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x76,0x68,0x27,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018bf440);
  (*pcVar2)();
}



/* Entry: 1018bf440; end: 1018bf49f; -[AdShake2ReportLoggerSwift lastViewedAds] */

void FUN_1018bf440(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1018bf300();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000103e03b1c(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1018bf4a0; end: 1018bf5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018bf4a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  
  FUN_1018bf300();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000103e03b1c(0);
    lVar7 = param_1;
    func_0x000107c5fc48(param_1,uVar2);
    func_0x000107c6142c(param_1);
  }
  FUN_1018bf5c8();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dce9e8);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dce9f0);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  lVar5 = lVar7;
  lVar6 = param_1;
  func_0x00010576ccb0(lVar7,param_1,uVar3,uVar2,*(undefined8 *)(unaff_x20 + _DAT_112dcea00));
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  if (lVar5 != 0) {
    lVar7 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar8._8_8_ = lVar6;
    auVar8._0_8_ = lVar7;
    return auVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018bf5c8);
  (*pcVar1)();
}



/* Entry: 1018bf5c8; end: 1018bf7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1018bf5c8(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  func_0x000103ded290();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar5 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = _DAT_11347a250;
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_11347a250,auStack_68,0,0);
  func_0x000100029394(unaff_x20 + lVar6,lVar8);
  lVar6 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar6 == 1) {
    func_0x0001000293e4(lVar8);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar8,lVar4);
    bVar1 = *(long *)(unaff_x20 + _DAT_11347a258) == 0;
    if (!bVar1) {
      func_0x000107c61174();
      func_0x0001046465c0(puVar5);
    }
    lVar6 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar5,bVar1,1,lVar6);
    iVar2 = *(int *)(lVar3 + 0x14);
    (**(code **)(lVar9 + 0x10))(puVar5 + iVar2,lVar7,lVar4);
    (**(code **)(lVar9 + 0x38))(puVar5 + iVar2,0,1,lVar4);
    func_0x000103e042d8(0);
    func_0x000107c610f8();
    func_0x000103e03e54(puVar5);
    (**(code **)(lVar9 + 8))(lVar7,lVar4);
  }
  return puVar5;
}



/* Entry: 1018bf7c0; end: 1018bf817; -[AdShake2ReportLoggerSwift shake2ReportDebugInfo] */

void FUN_1018bf7c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018bf4a0();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018bf818; end: 1018bf84b;  */

void FUN_1018bf818(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018bf84c; end: 1018bf8fb; -[AdShake2ReportLoggerSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018bf868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018bf89c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018bf86c) */
/* WARNING: Removing unreachable block (ram,0x0001018bf8a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bf84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dcea08));
  return;
}



/* Entry: 1018bf8fc; end: 1018bf957;  */

void FUN_1018bf8fc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000103e03b1c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dcea38;
  plVar5 = (long *)&UNK_10d990980;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1018bf958; end: 1018bfb2f;  */

void FUN_1018bf958(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001018bfa08();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1018bfb30; end: 1018bfbaf;  */

undefined * FUN_1018bfb30(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1018bf8fc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1018bfbb0; end: 1018bfca7;  */

long FUN_1018bfbb0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018bfca4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1018bfca8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103e03b1c(0);
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
      func_0x000103e03b1c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018bfca0);
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



/* Entry: 1018bfca8; end: 1018bfcf7;  */

/* WARNING: Removing unreachable block (ram,0x0001018bfa3c) */
/* WARNING: Removing unreachable block (ram,0x0001018bfa60) */
/* WARNING: Removing unreachable block (ram,0x0001018bfa44) */
/* WARNING: Removing unreachable block (ram,0x0001018bfb2c) */
/* WARNING: Removing unreachable block (ram,0x0001018bfa50) */
/* WARNING: Removing unreachable block (ram,0x0001018bfa58) */
/* WARNING: Removing unreachable block (ram,0x0001018bfa9c) */
/* WARNING: Removing unreachable block (ram,0x0001018bfab0) */
/* WARNING: Removing unreachable block (ram,0x0001018bfabc) */
/* WARNING: Removing unreachable block (ram,0x0001018bfac4) */

ulong FUN_1018bfca8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_1018bfb30(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_1018bfbb0(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018bfb2c);
  (*pcVar1)();
}



/* Entry: 1018bfcf8; end: 1018bfeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bfcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_80 [16];
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  *(undefined **)(unaff_x20 + _DAT_112dce9d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dce9e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_11347a250;
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar4);
  *(undefined8 *)(unaff_x20 + _DAT_11347a258) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dce9e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dce9f0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dce9f8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dcea00) = param_5;
  (**(code **)(lVar7 + 0x68))
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_3);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efbcd20);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar7 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + _DAT_112dcea08) = puVar5;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018bfeec; end: 1018c0083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018bfeec(void)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (ulong *)(lVar3 + _DAT_112dce9e0);
  uVar11 = puVar1[1];
  puVar2 = (ulong *)(*(long *)(unaff_x20 + 0x18) + _DAT_11308f150);
  uVar9 = *puVar2;
  uVar7 = puVar2[1];
  if (uVar11 == 0) {
    if (uVar7 == 0) {
      return;
    }
  }
  else if (uVar7 != 0) {
    uVar6 = *puVar1;
    if (uVar6 == uVar9 && uVar11 == uVar7) {
      return;
    }
    func_0x000107c605b8(uVar6,uVar11,uVar9,uVar7,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  *puVar1 = uVar9;
  puVar1[1] = uVar7;
  func_0x000107c61434(uVar7);
  func_0x000107c6142c(uVar11);
  lVar4 = _DAT_112dce9d8;
  func_0x000107c61428(lVar3 + _DAT_112dce9d8,auStack_58,0,0);
  uVar9 = *(ulong *)(lVar3 + lVar4);
  if (uVar9 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar7 = uVar9;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 3) {
    func_0x000107c61428(lVar3 + lVar4,auStack_70,0x21,0);
    uVar8 = 2;
    FUN_1018beeac(2);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61428(lVar3 + lVar4,auStack_70,0x21,0);
  uVar9 = *(ulong *)(lVar3 + lVar4);
  if (uVar9 >> 0x3e != 0) {
    uVar7 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar7 = uVar9;
    }
    func_0x000107c60480();
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1018c0084);
      (*pcVar5)();
    }
  }
  func_0x000107c61174(uVar10);
  FUN_1018c0498(0,0,uVar10);
  func_0x000107c614a8(auStack_70);
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 1018c0084; end: 1018c00bb;  */

void FUN_1018c0084(long param_1,long param_2)

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



/* Entry: 1018c00bc; end: 1018c01b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c00bc(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c3e208(*(undefined8 *)(lVar5 + _DAT_112dcea08));
    lVar1 = _DAT_11347a250;
    func_0x000107c61428(lVar5 + _DAT_11347a250,auStack_70,0x21,0);
    func_0x00010137dd74(unaff_x20 + uVar2,lVar5 + lVar1);
    func_0x000107c614a8(auStack_70);
    uVar4 = *(undefined8 *)(lVar5 + _DAT_11347a258);
    *(undefined8 *)(lVar5 + _DAT_11347a258) = uVar3;
    func_0x000107c61174(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1018c01b8; end: 1018c0217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c01b8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112dce9d8;
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + _DAT_112dce9d8,auStack_48,0,0);
  uVar4 = *puVar1;
  *puVar1 = *(undefined8 *)(lVar2 + lVar3);
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 1018c0218; end: 1018c0237;  */

void FUN_1018c0218(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1018c0238; end: 1018c023f;  */

void FUN_1018c0238(void)

{
  if (lRam000000011347a260 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e655cd0);
  return;
}


