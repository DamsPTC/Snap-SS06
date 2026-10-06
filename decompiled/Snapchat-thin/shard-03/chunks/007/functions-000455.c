/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b75b58; end: 102b75bfb;  */

undefined8 * FUN_102b75b58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
  uVar1 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar1;
  *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_2 + 0x4c);
  uVar1 = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 0x54) = uVar1;
  *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
  return param_1;
}



/* Entry: 102b75bfc; end: 102b75cbf;  */

int FUN_102b75bfc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x74) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102b75cc0; end: 102b75d93;  */

long FUN_102b75cc0(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_1d8 [224];
  long lStack_f8;
  long lStack_f0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = unaff_x20;
  func_0x000107c60a28();
  if ((int)lVar3 == 0) {
    iVar2 = (int)*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    func_0x000107c60a14();
    if (iVar2 != 0) {
      func_0x000107c61170();
    }
  }
  lVar3 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return lVar3;
  }
  func_0x000107c60e78();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = unaff_x20;
  func_0x000107c60ac8();
  lVar6 = unaff_x20;
  func_0x000107c60ab8();
  func_0x000107c60ac0();
  lStack_f8 = 0;
  uVar19 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  if (lVar3 == 0) {
LAB_102b75e28:
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar12 = auStack_1d8;
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 8;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    uVar4 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    puVar5 = PTR___ss6UInt32VN_11034f020;
    *(undefined1 **)(lVar3 + 0x28) = puVar12;
    *(undefined **)(lVar3 + 0x48) = puVar5;
    *(int *)(lVar3 + 0x30) = (int)unaff_x20;
    uVar4 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    func_0x000107c5faec();
    puVar5 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
    *(undefined1 **)(lVar3 + 0x58) = puVar12;
    *(undefined **)(lVar3 + 0x78) = puVar5;
    *(long *)(lVar3 + 0x60) = lVar13;
    uVar4 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x80) = uVar4;
    *(undefined1 **)(lVar3 + 0x88) = puVar12;
    *(undefined **)(lVar3 + 0xa8) = puVar5;
    *(long *)(lVar3 + 0x90) = lVar6;
    uVar4 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0xb0) = uVar4;
    *(undefined1 **)(lVar3 + 0xb8) = puVar12;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uVar4 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    *(undefined8 *)(lVar3 + 0xd8) = uVar4;
    *(undefined **)(lVar3 + 0xc0) = puVar5;
    lVar14 = lVar3;
    func_0x000100214a84();
    func_0x000107c61588(lVar3);
    uVar4 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar3 + 0x20),4,uVar4);
    lVar3 = lVar14;
    func_0x000107c5f9dc(lVar14,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar14);
    func_0x000107c60aa0(uVar19,lVar13,lVar6,unaff_x20,lVar3,&lStack_f8);
    func_0x000107c61170(lVar3);
    if (lStack_f8 == 0) {
      lVar6 = 0;
      lVar3 = lStack_f8;
      goto LAB_102b75ff8;
    }
  }
  else {
    uVar4 = uVar19;
    func_0x000107c60ad8(uVar19,lVar3,&lStack_f8);
    lVar3 = lStack_f8;
    if ((int)uVar4 != 0) {
      lStack_f8 = 0;
      func_0x000107c61170(lVar3);
    }
    if (lStack_f8 == 0) goto LAB_102b75e28;
  }
  lVar3 = lStack_f8;
  lVar6 = lStack_f8;
  func_0x000107c61174();
  func_0x000107c60ad0();
  func_0x000107c60ad0(lVar6,0);
  FUN_102b76038();
  func_0x000107c61174();
  func_0x000107c60ae0();
  lVar13 = 1;
  func_0x000107c60ae0();
  func_0x000107c61170(lVar6);
  lVar6 = lStack_f8;
LAB_102b75ff8:
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return lVar3;
  }
  func_0x000107c60e78();
  lVar3 = lVar6;
  func_0x000107c60ac4();
  if (lVar3 < 1) {
    lVar3 = lVar6;
    func_0x000107c60aa8();
    lVar14 = 0;
    if (lVar3 != 0) {
      lVar18 = lVar13;
      func_0x000107c60aa8();
      lVar14 = 0;
      if (lVar18 != 0) {
        lVar10 = lVar6;
        func_0x000107c60ab0();
        lVar11 = lVar13;
        func_0x000107c60ab0();
        func_0x000107c60ab8();
        func_0x000107c60ab8();
        lVar7 = lVar13;
        if (lVar6 <= lVar13) {
          lVar7 = lVar6;
        }
        lVar6 = lVar11;
        if (lVar10 <= lVar11) {
          lVar6 = lVar10;
        }
        if (lVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76224);
          (*pcVar1)();
        }
        lVar14 = lVar13;
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            lVar14 = lVar13 * lVar11;
            if (SUB168(SEXT816(lVar13) * SEXT816(lVar11),8) != lVar14 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7621c);
              (*pcVar1)();
            }
            lVar16 = lVar13 * lVar10;
            if (SUB168(SEXT816(lVar13) * SEXT816(lVar10),8) != lVar16 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76220);
              (*pcVar1)();
            }
            lVar13 = lVar13 + 1;
            lVar14 = lVar18 + lVar14;
            func_0x000107c610b4(lVar14,lVar3 + lVar16,lVar6);
          } while (lVar7 != lVar13);
        }
      }
    }
  }
  else {
    lVar18 = 0;
    do {
      lVar7 = lVar6;
      func_0x000107c60aac(lVar6,lVar18);
      lVar14 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar13;
        func_0x000107c60aac(lVar13,lVar18);
        lVar14 = 0;
        if (lVar10 != 0) {
          lVar16 = lVar6;
          func_0x000107c60ab4(lVar6,lVar18);
          lVar8 = lVar13;
          func_0x000107c60ab4(lVar13,lVar18);
          lVar9 = lVar6;
          func_0x000107c60abc(lVar6,lVar18);
          lVar14 = lVar13;
          func_0x000107c60abc(lVar13,lVar18);
          lVar11 = lVar14;
          if (lVar9 <= lVar14) {
            lVar11 = lVar9;
          }
          lVar9 = lVar8;
          if (lVar16 <= lVar8) {
            lVar9 = lVar16;
          }
          if (lVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76218);
            (*pcVar1)();
          }
          if (lVar11 != 0) {
            lVar17 = 0;
            do {
              lVar14 = lVar17 * lVar8;
              if (SUB168(SEXT816(lVar17) * SEXT816(lVar8),8) != lVar14 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76210);
                (*pcVar1)();
              }
              lVar15 = lVar17 * lVar16;
              if (SUB168(SEXT816(lVar17) * SEXT816(lVar16),8) != lVar15 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76214);
                (*pcVar1)();
              }
              lVar17 = lVar17 + 1;
              lVar14 = lVar10 + lVar14;
              func_0x000107c610b4(lVar14,lVar7 + lVar15,lVar9);
            } while (lVar11 != lVar17);
          }
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar3);
  }
  return lVar14;
}



/* Entry: 102b75d94; end: 102b76037;  */

long FUN_102b75d94(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_148 [224];
  long lStack_68;
  long lStack_60;
  
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x20;
  func_0x000107c60ac8();
  lVar2 = unaff_x20;
  func_0x000107c60ab8();
  func_0x000107c60ac0();
  lStack_68 = 0;
  uVar18 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  if (param_1 == 0) {
LAB_102b75e28:
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar11 = auStack_148;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 8;
    *(undefined8 *)(lVar5 + 0x10) = 4;
    uVar3 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    puVar4 = PTR___ss6UInt32VN_11034f020;
    *(undefined1 **)(lVar5 + 0x28) = puVar11;
    *(undefined **)(lVar5 + 0x48) = puVar4;
    *(int *)(lVar5 + 0x30) = (int)unaff_x20;
    uVar3 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    func_0x000107c5faec();
    puVar4 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar5 + 0x50) = uVar3;
    *(undefined1 **)(lVar5 + 0x58) = puVar11;
    *(undefined **)(lVar5 + 0x78) = puVar4;
    *(long *)(lVar5 + 0x60) = lVar12;
    uVar3 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x80) = uVar3;
    *(undefined1 **)(lVar5 + 0x88) = puVar11;
    *(undefined **)(lVar5 + 0xa8) = puVar4;
    *(long *)(lVar5 + 0x90) = lVar2;
    uVar3 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0xb0) = uVar3;
    *(undefined1 **)(lVar5 + 0xb8) = puVar11;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uVar3 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    *(undefined8 *)(lVar5 + 0xd8) = uVar3;
    *(undefined **)(lVar5 + 0xc0) = puVar4;
    lVar13 = lVar5;
    func_0x000100214a84();
    func_0x000107c61588(lVar5);
    uVar3 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar5 + 0x20),4,uVar3);
    lVar5 = lVar13;
    func_0x000107c5f9dc(lVar13,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar13);
    func_0x000107c60aa0(uVar18,lVar12,lVar2,unaff_x20,lVar5,&lStack_68);
    func_0x000107c61170(lVar5);
    if (lStack_68 == 0) {
      lVar5 = 0;
      lVar2 = lStack_68;
      goto LAB_102b75ff8;
    }
  }
  else {
    uVar3 = uVar18;
    func_0x000107c60ad8(uVar18,param_1,&lStack_68);
    lVar5 = lStack_68;
    if ((int)uVar3 != 0) {
      lStack_68 = 0;
      func_0x000107c61170(lVar5);
    }
    if (lStack_68 == 0) goto LAB_102b75e28;
  }
  lVar2 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c61174();
  func_0x000107c60ad0();
  func_0x000107c60ad0(lVar5,0);
  FUN_102b76038();
  func_0x000107c61174();
  func_0x000107c60ae0();
  lVar12 = 1;
  func_0x000107c60ae0();
  func_0x000107c61170(lVar5);
  lVar5 = lStack_68;
LAB_102b75ff8:
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
    return lVar2;
  }
  func_0x000107c60e78();
  lVar2 = lVar5;
  func_0x000107c60ac4();
  if (lVar2 < 1) {
    lVar2 = lVar5;
    func_0x000107c60aa8();
    lVar13 = 0;
    if (lVar2 != 0) {
      lVar17 = lVar12;
      func_0x000107c60aa8();
      lVar13 = 0;
      if (lVar17 != 0) {
        lVar9 = lVar5;
        func_0x000107c60ab0();
        lVar10 = lVar12;
        func_0x000107c60ab0();
        func_0x000107c60ab8();
        func_0x000107c60ab8();
        lVar6 = lVar12;
        if (lVar5 <= lVar12) {
          lVar6 = lVar5;
        }
        lVar5 = lVar10;
        if (lVar9 <= lVar10) {
          lVar5 = lVar9;
        }
        if (lVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76224);
          (*pcVar1)();
        }
        lVar13 = lVar12;
        if (lVar6 != 0) {
          lVar12 = 0;
          do {
            lVar13 = lVar12 * lVar10;
            if (SUB168(SEXT816(lVar12) * SEXT816(lVar10),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7621c);
              (*pcVar1)();
            }
            lVar15 = lVar12 * lVar9;
            if (SUB168(SEXT816(lVar12) * SEXT816(lVar9),8) != lVar15 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76220);
              (*pcVar1)();
            }
            lVar12 = lVar12 + 1;
            lVar13 = lVar17 + lVar13;
            func_0x000107c610b4(lVar13,lVar2 + lVar15,lVar5);
          } while (lVar6 != lVar12);
        }
      }
    }
  }
  else {
    lVar17 = 0;
    do {
      lVar6 = lVar5;
      func_0x000107c60aac(lVar5,lVar17);
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar9 = lVar12;
        func_0x000107c60aac(lVar12,lVar17);
        lVar13 = 0;
        if (lVar9 != 0) {
          lVar15 = lVar5;
          func_0x000107c60ab4(lVar5,lVar17);
          lVar7 = lVar12;
          func_0x000107c60ab4(lVar12,lVar17);
          lVar8 = lVar5;
          func_0x000107c60abc(lVar5,lVar17);
          lVar13 = lVar12;
          func_0x000107c60abc(lVar12,lVar17);
          lVar10 = lVar13;
          if (lVar8 <= lVar13) {
            lVar10 = lVar8;
          }
          lVar8 = lVar7;
          if (lVar15 <= lVar7) {
            lVar8 = lVar15;
          }
          if (lVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76218);
            (*pcVar1)();
          }
          if (lVar10 != 0) {
            lVar16 = 0;
            do {
              lVar13 = lVar16 * lVar7;
              if (SUB168(SEXT816(lVar16) * SEXT816(lVar7),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76210);
                (*pcVar1)();
              }
              lVar14 = lVar16 * lVar15;
              if (SUB168(SEXT816(lVar16) * SEXT816(lVar15),8) != lVar14 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76214);
                (*pcVar1)();
              }
              lVar16 = lVar16 + 1;
              lVar13 = lVar9 + lVar13;
              func_0x000107c610b4(lVar13,lVar6 + lVar14,lVar8);
            } while (lVar10 != lVar16);
          }
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar2);
  }
  return lVar13;
}



/* Entry: 102b76038; end: 102b76223;  */

void FUN_102b76038(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = param_1;
  func_0x000107c60ac4();
  if (lVar2 < 1) {
    lVar2 = param_1;
    func_0x000107c60aa8();
    if ((lVar2 != 0) && (lVar11 = param_2, func_0x000107c60aa8(), lVar11 != 0)) {
      lVar4 = param_1;
      func_0x000107c60ab0();
      lVar5 = param_2;
      func_0x000107c60ab0();
      func_0x000107c60ab8();
      func_0x000107c60ab8();
      if (param_1 <= param_2) {
        param_2 = param_1;
      }
      lVar3 = lVar5;
      if (lVar4 <= lVar5) {
        lVar3 = lVar4;
      }
      if (param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76224);
        (*pcVar1)();
      }
      if (param_2 != 0) {
        lVar12 = 0;
        do {
          lVar7 = lVar12 * lVar5;
          if (SUB168(SEXT816(lVar12) * SEXT816(lVar5),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7621c);
            (*pcVar1)();
          }
          lVar9 = lVar12 * lVar4;
          if (SUB168(SEXT816(lVar12) * SEXT816(lVar4),8) != lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76220);
            (*pcVar1)();
          }
          lVar12 = lVar12 + 1;
          func_0x000107c610b4(lVar11 + lVar7,lVar2 + lVar9,lVar3);
        } while (param_2 != lVar12);
      }
    }
  }
  else {
    lVar11 = 0;
    do {
      lVar4 = param_1;
      func_0x000107c60aac(param_1,lVar11);
      if ((lVar4 != 0) && (lVar5 = param_2, func_0x000107c60aac(param_2,lVar11), lVar5 != 0)) {
        lVar12 = param_1;
        func_0x000107c60ab4(param_1,lVar11);
        lVar7 = param_2;
        func_0x000107c60ab4(param_2,lVar11);
        lVar9 = param_1;
        func_0x000107c60abc(param_1,lVar11);
        lVar3 = param_2;
        func_0x000107c60abc(param_2,lVar11);
        if (lVar9 <= lVar3) {
          lVar3 = lVar9;
        }
        lVar9 = lVar7;
        if (lVar12 <= lVar7) {
          lVar9 = lVar12;
        }
        if (lVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76218);
          (*pcVar1)();
        }
        if (lVar3 != 0) {
          lVar10 = 0;
          do {
            lVar6 = lVar10 * lVar7;
            if (SUB168(SEXT816(lVar10) * SEXT816(lVar7),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76210);
              (*pcVar1)();
            }
            lVar8 = lVar10 * lVar12;
            if (SUB168(SEXT816(lVar10) * SEXT816(lVar12),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b76214);
              (*pcVar1)();
            }
            lVar10 = lVar10 + 1;
            func_0x000107c610b4(lVar5 + lVar6,lVar4 + lVar8,lVar9);
          } while (lVar3 != lVar10);
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar2);
  }
  return;
}



/* Entry: 102b76224; end: 102b76247;  */

void FUN_102b76224(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100d1c09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102b76248; end: 102b762b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b76248(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b7663c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ef94c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b762b4; end: 102b7631f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b762b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef94c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b76320; end: 102b7637f; -[_TtC50ContextActionPerformerScopedFactoryServiceProvider38SCContextActionPerformerScopedServices init] */

void FUN_102b76320(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionPerformerScopedFactoryServiceProvider.SCContextActionPerformerScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7634c);
  (*pcVar1)();
}



/* Entry: 102b76380; end: 102b7638f; -[_TtC50ContextActionPerformerScopedFactoryServiceProvider38SCContextActionPerformerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b76380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef94c0));
  return;
}



/* Entry: 102b76390; end: 102b763fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b76390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a4b18;
  func_0x000107c613fc(&UNK_1105a4b18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b766d4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b763fc; end: 102b76497;  */

void FUN_102b763fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a4a28;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a4a28;
  return;
}



/* Entry: 102b76498; end: 102b764cf;  */

void FUN_102b76498(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102b764d0; end: 102b764d7;  */

undefined8 FUN_102b764d0(void)

{
  return 0x1b;
}



/* Entry: 102b764d8; end: 102b7660b;  */

void FUN_102b764d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a4b40;
  func_0x000107c613fc(&UNK_1105a4b40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b766ac;
  func_0x00010058fa64(FUN_102b766ac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b7660c; end: 102b7663b;  */

undefined ** FUN_102b7660c(void)

{
  return &PTR_DAT_113066958;
}



/* Entry: 102b7663c; end: 102b7665b;  */

void FUN_102b7663c(void)

{
  func_0x000107c61168(&PTR_PTR_11288fe98);
  return;
}



/* Entry: 102b7665c; end: 102b766ab;  */

undefined1  [16] FUN_102b7665c(void)

{
  return ZEXT816(0x1105a4a78);
}



/* Entry: 102b766ac; end: 102b766d3;  */

void FUN_102b766ac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b766d4; end: 102b766e7;  */

void FUN_102b766d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b766e8; end: 102b76ed3;  */

void FUN_102b766e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 auStack_70 [2];
  
  uVar27 = *param_2;
  func_0x0001000285a8(0x112ef9538,&UNK_10db28c60);
  puVar1 = auStack_70;
  auStack_70[0] = uVar27;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102b78914();
  pcVar3 = "SCContextHeroContextMenuScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContextHeroContextMenuScopeExposerSubjectServiceProvider",0x3a,2);
  func_0x000102b78994();
  pcVar4 = "SCContextTopLevelReactionsTrayScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeExposerSubjectServiceProvider",0x40,2);
  FUN_102b789e0();
  pcVar5 = "SCSpotlightQuickCommentScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpotlightQuickCommentScopeExposerSubjectServiceProvider",0x39,2);
  FUN_102b78a2c();
  pcVar6 = "SCSpotlightQuickShareScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSpotlightQuickShareScopeExposerSubjectServiceProvider",0x37,2);
  FUN_102b78a78();
  func_0x000100082720("SCSpotlightRecommendTrayScopeExposerSubjectServiceProvider",0x3a,2);
  uVar7 = param_3;
  FUN_102b9daac(param_3,param_4,param_5,param_6,param_7);
  func_0x000100082720("SCContextHeroContextMenuScopedFactoryServiceProvider",0x34,2);
  uVar8 = param_8;
  FUN_102ba01a8(param_8,param_9,param_3,param_10);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedFactoryServiceProvider",0x3a,2);
  FUN_102b7cf94(param_11,param_12,param_13,param_14,param_15);
  func_0x000100082720("SCSpotlightQuickCommentScopedFactoryServiceProvider",0x33,2);
  uVar9 = param_16;
  FUN_102b85b44(param_16,param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_5,
                param_6,param_24,param_7,param_15);
  func_0x000100082720("SCSpotlightQuickShareScopedFactoryServiceProvider",0x31,2);
  FUN_102b97830(param_16,param_5,param_6);
  func_0x000100082720("SCSpotlightRecommendTrayScopedFactoryServiceProvider",0x34,2);
  puVar10 = puVar2;
  FUN_102b78954();
  func_0x000100082720("SCContextHeroContextMenuScopeExposerObservableServiceProvider",0x3d,2);
  pcVar11 = pcVar3;
  FUN_102b789d4();
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeExposerObservableServiceProvider",0x43,2);
  pcVar12 = pcVar4;
  FUN_102b78a20();
  func_0x000100082720("SCSpotlightQuickCommentScopeExposerObservableServiceProvider",0x3c,2);
  pcVar13 = pcVar5;
  FUN_102b78a6c();
  func_0x000100082720("SCSpotlightQuickShareScopeExposerObservableServiceProvider",0x3a,2);
  pcVar14 = pcVar6;
  FUN_102b78b04();
  func_0x000100082720("SCSpotlightRecommendTrayScopeExposerObservableServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar15 = FUN_102b76498;
  func_0x0001000823a8(FUN_102b76498,0);
  func_0x000100082720("SCContextActionPerformerScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112ef9540,&UNK_10db28c70);
  puVar25 = &UNK_1105a4bf0;
  func_0x000107c613fc(&UNK_1105a4bf0,0x28,7);
  *(undefined8 **)(puVar25 + 0x10) = puVar1;
  *(undefined8 *)(puVar25 + 0x18) = param_8;
  *(undefined8 *)(puVar25 + 0x20) = param_25;
  func_0x000107c6157c();
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_25);
  pcVar16 = FUN_102b76f34;
  func_0x0001000823a8(FUN_102b76f34,puVar25);
  func_0x000100082720("TopLevelReactionsServiceProviderWrapperServiceProvider",0x36,2);
  uVar17 = uVar7;
  func_0x00010440b8d0();
  func_0x000100082720("SCContextHeroContextMenuScopeServicesServiceProvider",0x34,2);
  uVar18 = uVar8;
  func_0x00010441c68c();
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeServicesServiceProvider",0x3a,2);
  uVar19 = param_11;
  func_0x000104327da8();
  func_0x000100082720("SCSpotlightQuickCommentScopeServicesServiceProvider",0x33,2);
  pcVar20 = pcVar13;
  func_0x00010432f104(pcVar13,uVar9);
  func_0x000100082720("SCSpotlightQuickShareScopeServicesServiceProvider",0x31,2);
  uVar21 = param_16;
  func_0x0001043278d0();
  func_0x000100082720("SCSpotlightRecommendTrayScopeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ef9548,&UNK_10db28c78);
  func_0x000107c6157c(pcVar16);
  uVar27 = 0x102b76f40;
  func_0x0001000823a8(0x102b76f40,pcVar16);
  func_0x000100082720("SCTopLevelReactionsServicesServiceProvider",0x2a,2);
  puVar22 = puVar2;
  FUN_102b783fc(puVar2,uVar17,pcVar3,uVar18,pcVar4,uVar19,pcVar5,pcVar20,pcVar6,uVar21,uVar27);
  func_0x000100082720("ContextActionPerformerScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ef9550,&UNK_10db28c80);
  puVar25 = &UNK_1105a4c18;
  func_0x000107c613fc(&UNK_1105a4c18,0x30,7);
  *(undefined8 **)(puVar25 + 0x10) = puVar1;
  *(undefined8 **)(puVar25 + 0x18) = puVar22;
  *(code **)(puVar25 + 0x20) = pcVar15;
  *(code **)(puVar25 + 0x28) = pcVar16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(puVar22);
  func_0x000107c6157c(pcVar15);
  uVar23 = 0x102b76f48;
  func_0x0001000823a8(0x102b76f48,puVar25);
  func_0x000100082720("SCContextActionPerformerScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112ef94c8,&UNK_10db289b0);
  func_0x000107c6157c(uVar23);
  uVar24 = 0x102b76f54;
  func_0x0001000823a8(0x102b76f54,uVar23);
  func_0x000100082720("SCContextActionPerformerScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ef94b8,&UNK_10db289a0);
  func_0x000107c6157c(uVar24);
  uVar26 = 0x102b76f5c;
  func_0x0001000823a8(0x102b76f5c,uVar24);
  func_0x000100082720("SCContextActionPerformerScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar25 = &UNK_1105a4c40;
  func_0x000107c613fc(&UNK_1105a4c40,0x20,7);
  *(undefined8 *)(puVar25 + 0x10) = uVar26;
  *(code **)(puVar25 + 0x18) = pcVar15;
  func_0x000107c6157c(pcVar15);
  uVar26 = 0x102b76f64;
  func_0x0001000823a8(0x102b76f64,puVar25);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(param_11);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(param_16);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(puVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar24);
  func_0x000100082720("SCContextActionPerformerScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar26;
  return;
}



/* Entry: 102b76ed4; end: 102b76f33;  */

void FUN_102b76ed4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102b766e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 102b76f34; end: 102b76f6b;  */

void FUN_102b76f34(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102b7727c();
  func_0x000107c613fc();
  FUN_102b77054(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b76f6c; end: 102b76fff;  */

void FUN_102b76f6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102b7727c();
  func_0x000107c613fc();
  FUN_102b77054(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102b77000; end: 102b77053;  */

undefined8 FUN_102b77000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102b77054(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102b77054; end: 102b7712f;  */

void FUN_102b77054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_102ba42a8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ba3f94();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102ba4010();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102b77130; end: 102b7716b;  */

void FUN_102b77130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b7716c; end: 102b771bf;  */

void FUN_102b7716c(undefined8 *param_1)

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



/* Entry: 102b771c0; end: 102b771c7;  */

undefined8 FUN_102b771c0(void)

{
  return 0x1b;
}



/* Entry: 102b771c8; end: 102b7724b;  */

void FUN_102b771c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102b772cc,param_2,FUN_102b772d0,param_2,0x102b772f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b7724c; end: 102b7727b;  */

undefined ** FUN_102b7724c(void)

{
  return &PTR_DAT_113066958;
}



/* Entry: 102b7727c; end: 102b7729b;  */

void FUN_102b7727c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef95c0);
  return;
}



/* Entry: 102b7729c; end: 102b772cf;  */

undefined1  [16] FUN_102b7729c(void)

{
  return ZEXT816(0x1105a4c98);
}



/* Entry: 102b772d0; end: 102b77323;  */

void FUN_102b772d0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b77324; end: 102b7735f;  */

void FUN_102b77324(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b77360();
  func_0x0001000a7f38("SCContextActionPerformerScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102b77360; end: 102b7754b;  */

void FUN_102b77360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d208;
  ppuVar4 = &PTR_DAT_113066958;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a4d08;
  func_0x000107c613fc(&UNK_1105a4d08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ef9638;
  func_0x0001000285a8(0x112ef9638,&UNK_10db28e10);
  func_0x0001000a6ee8(&UNK_1105a5110,
                      "ContextActionPerformerScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_102b7754c,puVar2,uVar3,&UNK_1105a5110,&PTR_DAT_112ef9c00);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1105a4d30;
  func_0x000107c613fc(&UNK_1105a4d30,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a4ab8,
                      "SCContextActionPerformerScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_102b77634,puVar2,uVar3,&UNK_1105a4ab8,&PTR_DAT_112ef94d0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a4cb8,
                      "TopLevelReactionsServiceProviderWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_102b776b0,param_4,uVar3,&UNK_1105a4cb8,&PTR_DAT_112ef9558);
  func_0x000107c61574(param_4);
  uVar3 = 0x112ef9640;
  func_0x0001000285a8(0x112ef9640,&UNK_10db28e18);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102b7754c; end: 102b7758b;  */

void FUN_102b7754c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b78b70(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextActionPerformerScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b7758c; end: 102b77633;  */

void FUN_102b7758c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a4d58;
  func_0x000107c613fc(&UNK_1105a4d58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102b776ec;
  func_0x0001000823a8(FUN_102b776ec,puVar1);
  func_0x000100082720("SCContextActionPerformerScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102b77634; end: 102b7763b;  */

void FUN_102b77634(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a4d58;
  func_0x000107c613fc(&UNK_1105a4d58,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b776ec;
  func_0x0001000823a8(FUN_102b776ec,puVar3);
  func_0x000100082720("SCContextActionPerformerScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b7763c; end: 102b776af;  */

void FUN_102b7763c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102b776b8;
  func_0x0001000823a8(0x102b776b8,param_3);
  func_0x000100082720("TopLevelReactionsServiceProviderWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b776b0; end: 102b776bf;  */

void FUN_102b776b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102b776b8;
  func_0x0001000823a8();
  func_0x000100082720("TopLevelReactionsServiceProviderWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b776c0; end: 102b776eb;  */

void FUN_102b776c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b776ec; end: 102b776f3;  */

void FUN_102b776ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a4b40;
  func_0x000107c613fc(&UNK_1105a4b40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b766ac;
  func_0x00010058fa64(FUN_102b766ac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b776f4; end: 102b778cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b776f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102b7830c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112ef9648) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ef9650) = param_7;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b778cc);
  (*pcVar2)();
}



/* Entry: 102b778cc; end: 102b7792b; -[_TtC38ContextActionPerformerScopeGraphBridge53ContextActionPerformerScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b778cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionPerformerScopeGraphBridge.ContextActionPerformerScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b778f8);
  (*pcVar1)();
}



/* Entry: 102b7792c; end: 102b77963; -[_TtC38ContextActionPerformerScopeGraphBridge53ContextActionPerformerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b77948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7794c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7792c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef9648));
  return;
}



/* Entry: 102b77964; end: 102b7798b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b77964(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ef9650),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ef9648));
  return;
}



/* Entry: 102b7798c; end: 102b779ab;  */

void FUN_102b7798c(void)

{
  func_0x000107c61168(&PTR_PTR_11288ff58);
  return;
}



/* Entry: 102b779ac; end: 102b77a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b779ac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef9bb0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b77a10; end: 102b77a17;  */

void FUN_102b77a10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b77a18; end: 102b77ab7;  */

void FUN_102b77a18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b77ab8; end: 102b77ad7;  */

void FUN_102b77ab8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b77ad8; end: 102b77b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b77ad8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef9bc0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b77b3c; end: 102b77b43;  */

void FUN_102b77b3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b77b44; end: 102b77be3;  */

void FUN_102b77b44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b77be4; end: 102b77c03;  */

void FUN_102b77be4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b77c04; end: 102b77c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b77c04(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef9bd0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b77c68; end: 102b77c6f;  */

void FUN_102b77c68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b77c70; end: 102b77d0f;  */

void FUN_102b77c70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b77d10; end: 102b77d2f;  */

void FUN_102b77d10(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b77d30; end: 102b77d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b77d30(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef9be0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b77d94; end: 102b77d9b;  */

void FUN_102b77d94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b77d9c; end: 102b77e3b;  */

void FUN_102b77d9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b77e3c; end: 102b77e5b;  */

void FUN_102b77e3c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b77e5c; end: 102b77ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b77e5c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef9bf0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b77ec0; end: 102b77ec7;  */

void FUN_102b77ec0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b77ec8; end: 102b77f67;  */

void FUN_102b77ec8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b77f68; end: 102b77f87;  */

void FUN_102b77f68(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b77f88; end: 102b77feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b77f88(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112ef9bf8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102b77fec; end: 102b77ff3;  */

void FUN_102b77fec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b77ff4; end: 102b78093;  */

void FUN_102b77ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b78094; end: 102b780b3;  */

void FUN_102b78094(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102b780b4; end: 102b7813b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b780b4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef9b60) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ef9b68);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b7813c);
  (*pcVar2)();
}



/* Entry: 102b7813c; end: 102b78223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b7813c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef9b60);
  *(undefined **)(unaff_x20 + _DAT_112ef9b60) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef9b68);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ef9b68))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a4f08;
  func_0x000107c613fc(&UNK_1105a4f08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b78228,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b78224; end: 102b7822f;  */

void FUN_102b78224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b78230; end: 102b7828f; -[_TtC38ContextActionPerformerScopeGraphBridge53SCContextActionPerformerScopedServicesSaberEntryPoint init] */

void FUN_102b78230(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionPerformerScopeGraphBridge.SCContextActionPerformerScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7825c);
  (*pcVar1)();
}



/* Entry: 102b78290; end: 102b782c7; -[_TtC38ContextActionPerformerScopeGraphBridge53SCContextActionPerformerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b78290(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9b68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef9b60));
  return;
}



/* Entry: 102b782c8; end: 102b782cb;  */

void FUN_102b782c8(void)

{
  return;
}



/* Entry: 102b782cc; end: 102b782eb;  */

void FUN_102b782cc(void)

{
  FUN_102b7813c();
  return;
}



/* Entry: 102b782ec; end: 102b7830b;  */

void FUN_102b782ec(void)

{
  func_0x000107c61168(&PTR_PTR_112890020);
  return;
}



/* Entry: 102b7830c; end: 102b783db;  */

undefined8 FUN_102b7830c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ef9b98,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102b783dc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b783dc; end: 102b783fb;  */

void FUN_102b783dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128900e8);
  return;
}



/* Entry: 102b783fc; end: 102b7869f;  */

void FUN_102b783fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ef9ba0,&UNK_10db290b8);
  puVar1 = &UNK_1105a4f50;
  func_0x000107c613fc(&UNK_1105a4f50,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_102b786a0,puVar1);
  return;
}



/* Entry: 102b786a0; end: 102b786db;  */

void FUN_102b786a0(void)

{
  long unaff_x20;
  
  func_0x000102b78524(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102b786dc; end: 102b787eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b786dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef9ba8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bc0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bc8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bd0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bd8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9be0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9be8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bf0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9bf8) = param_11;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b787ec; end: 102b7884b; -[_TtC38ContextActionPerformerScopeGraphBridge46ContextActionPerformerScopeGraphBridgeServices init] */

void FUN_102b787ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionPerformerScopeGraphBridge.ContextActionPerformerScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b78818);
  (*pcVar1)();
}



/* Entry: 102b7884c; end: 102b78953; -[_TtC38ContextActionPerformerScopeGraphBridge46ContextActionPerformerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b78868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b78888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b788a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b788c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b788e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b788cc) */
/* WARNING: Removing unreachable block (ram,0x000102b788ac) */
/* WARNING: Removing unreachable block (ram,0x000102b7888c) */
/* WARNING: Removing unreachable block (ram,0x000102b7886c) */
/* WARNING: Removing unreachable block (ram,0x000102b788ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7884c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef9bb0));
  return;
}



/* Entry: 102b78954; end: 102b7895f;  */

void FUN_102b78954(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102b78960,param_1);
  return;
}



/* Entry: 102b78960; end: 102b789d3;  */

void FUN_102b78960(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102b789d4; end: 102b789df;  */

void FUN_102b789d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102b78e44,param_1);
  return;
}



/* Entry: 102b789e0; end: 102b78a1f;  */

void FUN_102b789e0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102b78e5c,0);
  return;
}



/* Entry: 102b78a20; end: 102b78a2b;  */

void FUN_102b78a20(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102b78e48,param_1);
  return;
}



/* Entry: 102b78a2c; end: 102b78a6b;  */

void FUN_102b78a2c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102b78e60,0);
  return;
}



/* Entry: 102b78a6c; end: 102b78a77;  */

void FUN_102b78a6c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102b78e4c,param_1);
  return;
}



/* Entry: 102b78a78; end: 102b78b03;  */

void FUN_102b78a78(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102b78e64,0);
  return;
}



/* Entry: 102b78b04; end: 102b78b0f;  */

void FUN_102b78b04(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102b78e50,param_1);
  return;
}



/* Entry: 102b78b10; end: 102b78b67;  */

void FUN_102b78b10(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102b78b68; end: 102b78b6f;  */

undefined8 FUN_102b78b68(void)

{
  return 0x1b;
}



/* Entry: 102b78b70; end: 102b78ce7;  */

void FUN_102b78b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a4f78;
  func_0x000107c613fc(&UNK_1105a4f78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b78ce8,puVar1);
  return;
}



/* Entry: 102b78ce8; end: 102b78cef;  */

void FUN_102b78ce8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ef9b98,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef9b98,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a5150;
  func_0x000107c613fc(&UNK_1105a5150,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b78e3c;
  func_0x00010058fa64(0x102b78e3c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


