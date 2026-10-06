/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a484fe0; end: 10a48509f;  */

void FUN_10a484fe0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a361364(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 3) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a4850a0; end: 10a4851c3;  */

void FUN_10a4850a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x00010a361364(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a45a7d0(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a4851c4; end: 10a48526f;  */

void FUN_10a4851c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c();
  FUN_10a008350();
  func_0x000107c284a0();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)((float)(param_5 & 0xffffffff) / 4.2949673e+09 + 0.0);
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a485270; end: 10a485413;  */

void FUN_10a485270(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  if ((*(byte *)(plVar7 + 0x3c) & 1) != 0) {
    if ((((*param_4 == 3) && (param_4[4] == 3)) && (param_4[8] == 3)) && (param_4[0xc] == 3)) {
      uVar1 = *(undefined8 *)(param_4 + 2);
      uVar23 = (undefined1)uVar1;
      uVar24 = (undefined1)((ulong)uVar1 >> 8);
      uVar25 = (undefined1)((ulong)uVar1 >> 0x10);
      uVar26 = (undefined1)((ulong)uVar1 >> 0x18);
      uVar27 = (undefined1)((ulong)uVar1 >> 0x20);
      uVar28 = (undefined1)((ulong)uVar1 >> 0x28);
      uVar29 = (undefined1)((ulong)uVar1 >> 0x30);
      uVar30 = (undefined1)((ulong)uVar1 >> 0x38);
      dVar4 = *(double *)(param_4 + 6);
      dVar2 = *(double *)(param_4 + 0xe);
      plVar15 = (long *)plVar7[4];
      uVar10 = *(ulong *)(param_4 + 10);
      if (plVar15 == (long *)0x0) {
        lStack_78 = 0;
        plStack_68 = (long *)0x0;
        lStack_80 = uVar1;
        uStack_70 = *(ulong *)(param_4 + 10);
        func_0x000109899fd8(plVar7);
        uVar23 = (undefined1)lStack_80;
        uVar24 = (undefined1)((ulong)lStack_80 >> 8);
        uVar25 = (undefined1)((ulong)lStack_80 >> 0x10);
        uVar26 = (undefined1)((ulong)lStack_80 >> 0x18);
        uVar27 = (undefined1)((ulong)lStack_80 >> 0x20);
        uVar28 = (undefined1)((ulong)lStack_80 >> 0x28);
        uVar29 = (undefined1)((ulong)lStack_80 >> 0x30);
        uVar30 = (undefined1)((ulong)lStack_80 >> 0x38);
        plVar15 = (long *)plVar7[4];
        uVar10 = uStack_70;
      }
      auVar3[8] = (char)uVar10;
      auVar3._0_8_ = dVar4;
      auVar3[9] = (char)(uVar10 >> 8);
      auVar3[10] = (char)(uVar10 >> 0x10);
      auVar3[0xb] = (char)(uVar10 >> 0x18);
      auVar3[0xc] = (char)(uVar10 >> 0x20);
      auVar3[0xd] = (char)(uVar10 >> 0x28);
      auVar3[0xe] = (char)(uVar10 >> 0x30);
      auVar3[0xf] = (char)(uVar10 >> 0x38);
      fVar21 = (float)dVar4;
      fVar22 = (float)auVar3._8_8_;
      fVar19 = (float)dVar2;
      fVar20 = (float)(double)CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,
                                                  CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,
                                                  uVar23)))))));
      plVar7[4] = *plVar15;
      *plVar15 = (long)&PTR_FUN_110b9fbe8;
      lVar12 = -(ulong)(((ulong)dVar2 >> 0x30 & 0x7ff8) << 0x30 < 0x7ff0000000000000);
      lVar16 = -(ulong)((CONCAT11(uVar30,uVar29) & 0x7ff8) < 0x7ff0);
      lVar9 = -(ulong)(((ulong)dVar4 >> 0x30 & 0x7ff8) << 0x30 < 0x7ff0000000000000);
      lVar14 = -(ulong)((uVar10 >> 0x30 & 0x7ff8) << 0x30 < 0x7ff0000000000000);
      plVar15[2] = CONCAT17((byte)((ulong)lVar16 >> 0x18) & (byte)((uint)fVar20 >> 0x18),
                            CONCAT16((byte)((ulong)lVar16 >> 0x10) & (byte)((uint)fVar20 >> 0x10),
                                     CONCAT15((byte)((ulong)lVar16 >> 8) & (byte)((uint)fVar20 >> 8)
                                              ,CONCAT14((byte)lVar16 & SUB41(fVar20,0),
                                                        CONCAT13((byte)((ulong)lVar12 >> 0x18) &
                                                                 (byte)((uint)fVar19 >> 0x18),
                                                                 CONCAT12((byte)((ulong)lVar12 >>
                                                                                0x10) &
                                                                          (byte)((uint)fVar19 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  lVar12 >> 8) & (byte)((uint)fVar19 >> 8),
                                                  (byte)lVar12 & SUB41(fVar19,0))))))));
      plVar15[1] = CONCAT17((byte)((ulong)lVar14 >> 0x18) & (byte)((uint)fVar22 >> 0x18),
                            CONCAT16((byte)((ulong)lVar14 >> 0x10) & (byte)((uint)fVar22 >> 0x10),
                                     CONCAT15((byte)((ulong)lVar14 >> 8) & (byte)((uint)fVar22 >> 8)
                                              ,CONCAT14((byte)lVar14 & SUB41(fVar22,0),
                                                        CONCAT13((byte)((ulong)lVar9 >> 0x18) &
                                                                 (byte)((uint)fVar21 >> 0x18),
                                                                 CONCAT12((byte)((ulong)lVar9 >>
                                                                                0x10) &
                                                                          (byte)((uint)fVar21 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  lVar9 >> 8) & (byte)((uint)fVar21 >> 8),
                                                  (byte)lVar9 & SUB41(fVar21,0))))))));
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))(param_2);
      (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar15,plVar8,&UNK_10989ba24,param_3);
      *param_1 = 7;
      plVar15 = plVar7 + 0x4b;
      lVar9 = plVar7[0x59];
      uVar10 = lVar9 - 1;
      plVar7[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar15[lVar9 + 2];
        if (plVar7[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar7[0x57] + -8);
        plVar7[0x57] = plVar7[0x57] + -8;
        if (plVar7[0x5a] == uVar10) {
          return;
        }
      }
      lVar9 = *plVar15;
      lVar14 = plVar7[0x4c];
      lVar12 = lVar14 - lVar9;
      uVar17 = lVar12 >> 4;
      if (uVar17 < uVar10) {
        uVar18 = uVar10 - uVar17;
        lVar16 = plVar7[0x4d];
        if ((ulong)(lVar16 - lVar14 >> 4) < uVar18) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar16 - lVar9 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - lVar9)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar15;
            if (uVar11 >> 0x3c == 0) {
              lVar6 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar6 + lVar12;
              _bzero(lVar14,uVar18 * 0x10);
              lVar13 = lVar14 + uVar17 * -0x10;
              _memcpy(lVar13,lVar9,lVar12);
              *plVar15 = lVar13;
              plVar7[0x4c] = lVar14 + uVar18 * 0x10;
              plVar7[0x4d] = lVar6 + uVar11 * 0x10;
              lStack_88 = lVar9;
              lStack_80 = lVar9;
              lStack_78 = lVar9;
              uStack_70 = lVar16;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar14,uVar18 * 0x10);
        plVar7[0x4c] = lVar14 + uVar18 * 0x10;
      }
      else if (uVar10 < uVar17) {
        lVar9 = lVar9 + uVar10 * 0x10;
        while (lVar14 != lVar9) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar7[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar7[0x5a] = uVar10;
      return;
    }
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a485400);
  (*pcVar5)();
}



/* Entry: 10a485414; end: 10a4854cf;  */

void FUN_10a485414(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *param_2;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  pfVar1 = pfVar5 + 0x96;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a4854d0; end: 10a4855bf;  */

void FUN_10a4854d0(undefined4 *param_1,float *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  code *pcVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar6 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar6 + 0xb2) < 8) {
    *(long *)(pfVar6 + *(ulong *)(pfVar6 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar6 + 0xb4);
    *(long *)(pfVar6 + 0xb2) = *(long *)(pfVar6 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar6 + 0x96);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4855ac);
    (*pcVar4)();
  }
  fVar3 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar3 = 0.0;
  }
  *param_2 = fVar3;
  *param_1 = 0;
  pfVar1 = pfVar6 + 0x96;
  uVar7 = *(long *)(pfVar6 + 0xb2) - 1;
  *(ulong *)(pfVar6 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar1 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar6 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar6 + 0xae) + -8);
    *(ulong **)(pfVar6 + 0xae) = (ulong *)(*(long *)(pfVar6 + 0xae) + -8);
    if (*(ulong *)(pfVar6 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar11 = *(long *)(pfVar6 + 0x98);
  lVar9 = lVar11 - lVar2;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar6 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar2 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar2)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar5 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar5 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar2,lVar9);
          *(long *)pfVar1 = lVar10;
          *(ulong *)(pfVar6 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar6 + 0x9a) = lVar5 + uVar8 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    *(ulong *)(pfVar6 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar2 = lVar2 + uVar7 * 0x10;
    while (lVar11 != lVar2) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar6 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar6 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a4855c0; end: 10a48567b;  */

void FUN_10a4855c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a48567c; end: 10a48576b;  */

void FUN_10a48567c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a485758);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 4) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a48576c; end: 10a485827;  */

void FUN_10a48576c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 1);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a485828; end: 10a485917;  */

void FUN_10a485828(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a485904);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)(param_2 + 1) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a485918; end: 10a4859d3;  */

void FUN_10a485918(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0xc);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a4859d4; end: 10a485ac3;  */

void FUN_10a4859d4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a485ab0);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0xc) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a485ac4; end: 10a485b9f;  */

void FUN_10a485ac4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  float fStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_44 = *(undefined4 *)((long)plVar2 + 0xc);
  fStack_48 = -*(float *)(plVar2 + 1);
  uStack_50 = CONCAT44(-(float)((ulong)*plVar2 >> 0x20),-(float)*plVar2);
  FUN_10a085248(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a485ba0; end: 10a485caf;  */

void FUN_10a485ba0(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar16 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = *param_2;
  fVar17 = param_2[1];
  fVar18 = fVar14 * fVar14 + fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
  if (fVar18 == 0.0) {
    fVar14 = 1.0;
    fVar15 = 0.0;
    fVar17 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar18 = 1.0 / SQRT(fVar18);
    fVar14 = fVar14 * fVar18;
    fVar15 = fVar15 * fVar18;
    fVar17 = fVar17 * fVar18;
    fVar16 = fVar16 * fVar18;
  }
  *param_2 = fVar15;
  param_2[1] = fVar17;
  param_2[2] = fVar16;
  param_2[3] = fVar14;
  pfVar1 = pfVar5 + 0x96;
  *param_1 = 0;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a485cb0; end: 10a485dd3;  */

void FUN_10a485cb0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a45dad8(&stack0xffffffffffffffa0,plVar5);
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a485dd4; end: 10a485ea7;  */

void FUN_10a485dd4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_5;
  func_0x00010a077264(param_5,param_6);
  FUN_10a052e3c(param_8);
  FUN_10a0f0a8c(plVar2);
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10a065390(param_1,param_5,&uStack_4c);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a485ea8; end: 10a485f1f;  */

void FUN_10a485ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = param_5;
  func_0x00010a077264(param_5,param_7);
  FUN_10a052e3c(param_8);
  (*param_6)(uVar1);
  uStack_4c = param_1;
  uStack_48 = param_2;
  uStack_44 = param_3;
  FUN_10a065390(param_4,param_5,&uStack_4c);
  return;
}



/* Entry: 10a485f20; end: 10a48603b;  */

void FUN_10a485f20(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  func_0x00010a077264(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar15 = param_2[3];
  if (ABS(fVar15) <= 0.87758255) {
    _acosf();
    fVar14 = fVar15 + fVar15;
  }
  else {
    fVar14 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
    _asinf();
    fVar14 = fVar14 + fVar14;
    if (fVar15 < 0.0) {
      fVar14 = 6.2831855 - fVar14;
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  pfVar1 = pfVar5 + 0x96;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a48603c; end: 10a4860e7;  */

void FUN_10a48603c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a485ea8(param_1,param_2,FUN_10a45dc28,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a4860e8; end: 10a4861db;  */

void FUN_10a4860e8(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  func_0x00010a077264(param_2,param_3);
  func_0x00010a077240(param_5);
  func_0x00010a077264(param_2,param_4);
  fVar15 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar18 = param_2[2];
  fVar16 = param_2[3];
  fVar17 = *pfVar5;
  fVar19 = pfVar5[1];
  fVar20 = *param_2;
  fVar21 = param_2[1];
  *param_1 = 3;
  *(double *)(param_1 + 2) =
       (double)(fVar14 * fVar16 + fVar17 * fVar20 + fVar19 * fVar21 + fVar15 * fVar18);
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a4861dc; end: 10a48632b;  */

void FUN_10a4861dc(undefined8 param_1,undefined1 (*param_2) [12],undefined8 param_3,
                  undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  long lVar5;
  undefined1 (*pauVar6) [12];
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 (*pauStack_68) [12];
  
  pauVar6 = param_2;
  (**(code **)(*(long *)*param_2 + 0x58))();
  if (*(ulong *)(pauVar6[0x3b] + 4) < 8) {
    *(undefined8 *)(pauVar6[0x34] + *(ulong *)(pauVar6[0x3b] + 4) * 8) =
         *(undefined8 *)pauVar6[0x3c];
    *(long *)(pauVar6[0x3b] + 4) = *(long *)(pauVar6[0x3b] + 4) + 1;
  }
  else {
    func_0x00010988bfcc(pauVar6 + 0x32);
  }
  pauVar7 = param_2;
  func_0x00010a077264(param_2,param_3);
  func_0x00010a077240(param_5);
  pauVar8 = param_2;
  func_0x00010a077264(param_2,param_4);
  fVar19 = *(float *)pauVar7[1];
  uVar1 = *(undefined4 *)*pauVar7;
  auVar20._0_8_ = CONCAT44(uVar1,uVar1);
  auVar20._8_4_ = uVar1;
  auVar35._12_4_ = uVar1;
  auVar35._0_12_ = auVar20;
  uVar24 = *(undefined8 *)(*pauVar7 + 4);
  fVar28 = (float)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
  fVar27 = (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
  auVar22._12_4_ = fVar28;
  auVar22._0_12_ = *pauVar8;
  auVar31._12_4_ = fVar28;
  auVar31._0_12_ = *pauVar8;
  auVar29 = NEON_ext(auVar22,auVar31,0xc,1);
  auVar37._8_8_ = auVar35._8_8_;
  auVar37._0_8_ = auVar20._0_8_;
  fVar26 = (float)((ulong)uVar24 >> 0x20);
  auVar30._0_12_ = auVar37._0_12_;
  auVar30._12_4_ = fVar26;
  auVar31 = NEON_ext(auVar30,auVar30,8,1);
  fVar34 = (float)uVar24;
  auVar32._0_4_ = -fVar34;
  auVar32._4_4_ = -fVar26;
  auVar32._8_4_ = -auVar31._0_4_;
  auVar32._12_4_ = -auVar31._4_4_;
  auVar35 = NEON_ext(auVar32,auVar32,4,1);
  auVar36._4_4_ = fVar28;
  auVar36._0_4_ = fVar28;
  auVar36._8_4_ = fVar28;
  auVar36._12_4_ = fVar28;
  auVar33._12_4_ = fVar28;
  auVar33._0_12_ = *pauVar8;
  auVar37 = NEON_ext(auVar36,auVar33,4,1);
  auVar21._12_4_ = auVar32._8_4_;
  auVar21._0_12_ = auVar20;
  auVar22 = NEON_ext(auVar21,auVar21,8,1);
  auVar3._8_4_ = auVar31._0_4_;
  auVar3._0_8_ = uVar24;
  auVar3._12_4_ = auVar31._4_4_;
  auVar33 = NEON_ext(auVar3,auVar32,4,1);
  auVar25._4_4_ = SUB124(*pauVar8,8);
  auVar25._0_4_ = SUB124(*pauVar8,0);
  auVar25._8_4_ = SUB124(*pauVar8,0);
  auVar25._12_4_ = SUB124(*pauVar8,8);
  auVar2._12_4_ = fVar28;
  auVar2._0_12_ = *pauVar8;
  auVar31 = NEON_ext(auVar25,auVar2,0xc,1);
  auVar23._0_4_ =
       auVar37._0_4_ * fVar34 + fVar27 * fVar19 + (float)*(undefined8 *)*pauVar8 * auVar33._0_4_ +
       auVar31._0_4_ * auVar35._4_4_;
  auVar23._4_4_ =
       auVar37._4_4_ * fVar26 + SUB124(*pauVar8,8) * fVar19 + fVar27 * auVar33._4_4_ +
       auVar31._4_4_ * auVar35._12_4_;
  auVar23._8_4_ =
       auVar37._8_4_ * auVar22._0_4_ + auVar29._4_4_ * fVar19 +
       (float)*(undefined8 *)(*pauVar8 + 8) * fVar34 + auVar31._8_4_ * auVar32._4_4_;
  auVar23._12_4_ =
       auVar37._12_4_ * auVar22._4_4_ + fVar28 * fVar19 + fVar27 * auVar33._12_4_ +
       auVar31._12_4_ * auVar32._12_4_;
  NEON_ext(auVar23,auVar23,4,1);
  FUN_10a085248(param_1,param_2,&stack0xffffffffffffffb0);
  pauVar7 = pauVar6 + 0x32;
  lVar10 = *(long *)(pauVar6[0x3b] + 4);
  uVar11 = lVar10 - 1;
  *(ulong *)(pauVar6[0x3b] + 4) = uVar11;
  if (uVar11 < 8) {
    uVar11 = *(ulong *)(pauVar7[1] + lVar10 * 8 + 4);
    if (*(ulong *)pauVar6[0x3c] == uVar11) {
      return;
    }
  }
  else {
    puVar9 = (ulong *)(*(long *)pauVar6[0x3a] + -8);
    uVar11 = *puVar9;
    *(ulong **)pauVar6[0x3a] = puVar9;
    if (*(ulong *)pauVar6[0x3c] == uVar11) {
      return;
    }
  }
  lVar10 = *(long *)*pauVar7;
  lVar15 = *(long *)(pauVar6[0x32] + 8);
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    lVar16 = *(long *)(pauVar6[0x33] + 4);
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar16 - lVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar12 = 0xfffffffffffffff;
        }
        pauStack_68 = pauVar7;
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *(long *)*pauVar7 = lVar14;
          *(ulong *)(pauVar6[0x32] + 8) = lVar15 + uVar18 * 0x10;
          *(ulong *)(pauVar6[0x33] + 4) = lVar5 + uVar12 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar16;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    *(ulong *)(pauVar6[0x32] + 8) = lVar15 + uVar18 * 0x10;
  }
  else if (uVar11 < uVar17) {
    lVar10 = lVar10 + uVar11 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    *(long *)(pauVar6[0x32] + 8) = lVar10;
  }
code_r0x00010988c138:
  *(ulong *)pauVar6[0x3c] = uVar11;
  return;
}



/* Entry: 10a48632c; end: 10a48647f;  */

void FUN_10a48632c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a077264(param_2,param_3);
  FUN_10a400de8(param_5);
  plVar5 = param_2;
  func_0x00010a0655d8(param_2,param_4);
  NEON_ext(*(undefined8 *)((long)plVar5 + 4),*plVar5,4,1);
  NEON_ext(*(undefined8 *)((long)plVar4 + 4),*plVar4,4,1);
  FUN_10a065390(param_1,param_2,&stack0xffffffffffffffb0);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a486480; end: 10a48658b;  */

void FUN_10a486480(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  func_0x00010a077264(param_2,param_3);
  func_0x00010a077240(param_5);
  func_0x00010a077264(param_2,param_4);
  if (((*pfVar5 == *param_2) && (pfVar5[1] == param_2[1])) && (pfVar5[2] == param_2[2])) {
    bVar6 = pfVar5[3] == param_2[3];
  }
  else {
    bVar6 = false;
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = bVar6;
  pfVar5 = pfVar4 + 0x96;
  uVar7 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar5 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar11 = *(long *)(pfVar4 + 0x98);
  lVar9 = lVar11 - lVar1;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar1 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar1)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar1,lVar9);
          *(long *)pfVar5 = lVar10;
          *(ulong *)(pfVar4 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    *(ulong *)(pfVar4 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar1 = lVar1 + uVar7 * 0x10;
    while (lVar11 != lVar1) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a48658c; end: 10a486637;  */

void FUN_10a48658c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a485ea8(param_1,param_2,FUN_10a45dc68,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a486638; end: 10a486767;  */

void FUN_10a486638(undefined4 *param_1,float *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  FUN_10a486768(param_5);
  pfVar5 = param_2;
  func_0x00010a077264(param_2,param_4);
  func_0x00010a077264(param_2,param_4 + 0x10);
  fVar14 = *pfVar5;
  fVar15 = pfVar5[1];
  fVar17 = pfVar5[2];
  fVar16 = pfVar5[3];
  fVar18 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15 + fVar17 * fVar17;
  fVar15 = *param_2 * (fVar14 / fVar18) + param_2[3] * (fVar16 / fVar18) +
           param_2[1] * (fVar15 / fVar18) + param_2[2] * (fVar17 / fVar18);
  fVar14 = -1.0;
  if (-1.0 <= fVar15) {
    fVar14 = fVar15;
  }
  fVar15 = 1.0;
  if (fVar14 <= 1.0) {
    fVar15 = fVar14;
  }
  _acosf();
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(fVar15 + fVar15);
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a486768; end: 10a48678b;  */

void FUN_10a486768(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  float fVar5;
  double dVar6;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar2 = (long *)0x2;
  FUN_10a052ee0(2,0);
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a4868b8(param_4);
  if (*param_1 == 3) {
    dVar6 = *(double *)(param_1 + 2);
    plVar4 = plVar2;
    func_0x00010a0655d8(plVar2,param_1 + 4);
    fVar5 = (float)dVar6 * 0.5;
    uStack_64 = 0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
      fVar5 = 0.0;
    }
    ___sincosf_stret();
    fStack_68 = fVar5 * *(float *)(plVar4 + 1);
    uStack_70 = CONCAT44((float)((ulong)*plVar4 >> 0x20) * fVar5,(float)*plVar4 * fVar5);
    FUN_10a085248(extraout_x8,plVar2,&uStack_70);
    func_0x00010988c170(plVar3 + 0x4b);
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4868a4);
  (*pcVar1)();
}



/* Entry: 10a48678c; end: 10a4868b7;  */

void FUN_10a48678c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_60;
  float fStack_58;
  undefined4 uStack_54;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  FUN_10a4868b8(param_5);
  if (*param_4 == 3) {
    dVar5 = *(double *)(param_4 + 2);
    plVar3 = param_2;
    func_0x00010a0655d8(param_2,param_4 + 4);
    fVar4 = (float)dVar5 * 0.5;
    uStack_54 = 0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
      fVar4 = 0.0;
    }
    ___sincosf_stret();
    fStack_58 = fVar4 * *(float *)(plVar3 + 1);
    uStack_60 = CONCAT44((float)((ulong)*plVar3 >> 0x20) * fVar4,(float)*plVar3 * fVar4);
    FUN_10a085248(param_1,param_2,&uStack_60);
    func_0x00010988c170(plVar2 + 0x4b);
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4868a4);
  (*pcVar1)();
}



/* Entry: 10a4868b8; end: 10a4868db;  */

void FUN_10a4868b8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar2 = (long *)0x2;
  FUN_10a052ee0(2,0);
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a472f1c(param_4);
  if (((*param_1 == 3) && (param_1[4] == 3)) && (param_1[8] == 3)) {
    fVar4 = (float)*(double *)(param_1 + 2) * 0.5;
    fVar7 = 0.0;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 2))) {
      fVar4 = 0.0;
    }
    fVar5 = (float)*(double *)(param_1 + 6) * 0.5;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 6))) {
      fVar5 = 0.0;
    }
    fVar6 = (float)*(double *)(param_1 + 10) * 0.5;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 10))) {
      fVar6 = 0.0;
    }
    ___sincosf_stret();
    fVar8 = fVar7;
    ___sincosf_stret();
    fVar9 = fVar8;
    ___sincosf_stret();
    fStack_84 = fVar4 * fVar5 * fVar6 + fVar9 * fVar7 * fVar8;
    fStack_90 = -(fVar7 * fVar5 * fVar6) + fVar9 * fVar4 * fVar8;
    fStack_8c = fVar4 * fVar8 * fVar6 + fVar9 * fVar7 * fVar5;
    fStack_88 = -(fVar4 * fVar5 * fVar9) + fVar6 * fVar7 * fVar8;
    FUN_10a085248(extraout_x8,plVar2,&fStack_90);
    func_0x00010988c170(plVar3 + 0x4b);
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a486a84);
  (*pcVar1)();
}



/* Entry: 10a4868dc; end: 10a486a97;  */

void FUN_10a4868dc(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  FUN_10a472f1c(param_5);
  if (((*param_4 == 3) && (param_4[4] == 3)) && (param_4[8] == 3)) {
    fVar3 = (float)*(double *)(param_4 + 2) * 0.5;
    fVar6 = 0.0;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar3 = 0.0;
    }
    fVar4 = (float)*(double *)(param_4 + 6) * 0.5;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 6))) {
      fVar4 = 0.0;
    }
    fVar5 = (float)*(double *)(param_4 + 10) * 0.5;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 10))) {
      fVar5 = 0.0;
    }
    ___sincosf_stret();
    fVar7 = fVar6;
    ___sincosf_stret();
    fVar8 = fVar7;
    ___sincosf_stret();
    fStack_74 = fVar3 * fVar4 * fVar5 + fVar8 * fVar6 * fVar7;
    fStack_80 = -(fVar6 * fVar4 * fVar5) + fVar8 * fVar3 * fVar7;
    fStack_7c = fVar3 * fVar7 * fVar5 + fVar8 * fVar6 * fVar4;
    fStack_78 = -(fVar3 * fVar4 * fVar8) + fVar5 * fVar6 * fVar7;
    FUN_10a085248(param_1,param_2,&fStack_80);
    func_0x00010988c170(plVar2 + 0x4b);
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a486a84);
  (*pcVar1)();
}



/* Entry: 10a486a98; end: 10a486b33;  */

float FUN_10a486a98(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = 0.5;
  fVar1 = *param_1 * 0.5;
  fVar5 = param_1[1] * 0.5;
  fVar6 = param_1[2] * 0.5;
  ___sincosf_stret(fVar1);
  fVar3 = fVar2;
  ___sincosf_stret(fVar5);
  fVar4 = fVar3;
  ___sincosf_stret(fVar6);
  return -(fVar2 * fVar5 * fVar6) + fVar4 * fVar1 * fVar3;
}



/* Entry: 10a486b34; end: 10a486bdf;  */

void FUN_10a486b34(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a486be0(param_1,param_2,FUN_10a486a98,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a486be0; end: 10a486c47;  */

void FUN_10a486be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_10a400de8(param_9);
  func_0x00010a0655d8(param_6,param_8);
  (*param_7)();
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_10a085248(param_5,param_6,&uStack_40);
  return;
}



/* Entry: 10a486c48; end: 10a486d2f;  */

float FUN_10a486c48(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  func_0x00010a47dda8();
  fVar4 = (float)*param_2;
  fVar6 = (float)*param_3;
  fVar3 = -*(float *)(param_3 + 1) * fVar4 + fVar6 * *(float *)(param_2 + 1);
  fVar4 = (float)*(undefined8 *)((long)param_2 + 4) * -fVar6 +
          (float)*(undefined8 *)((long)param_3 + 4) * fVar4;
  fVar5 = (float)((ulong)*(undefined8 *)((long)param_2 + 4) >> 0x20) *
          -(float)((ulong)*param_3 >> 0x20) +
          (float)((ulong)*(undefined8 *)((long)param_3 + 4) >> 0x20) *
          (float)((ulong)*param_2 >> 0x20);
  bVar2 = 1e-06 <= ABS(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar6 = 1.0;
  if (bVar2) {
    fVar6 = fVar5;
  }
  fVar5 = 0.0;
  fVar1 = 0.0;
  if (bVar2) {
    fVar5 = fVar4;
    fVar1 = fVar3;
  }
  param_1 = param_1 * 0.5;
  ___sincosf_stret(param_1);
  return param_1 * fVar6 * (1.0 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar1 * fVar1));
}



/* Entry: 10a486d30; end: 10a486ddb;  */

void FUN_10a486d30(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a486ddc(param_1,param_2,FUN_10a486c48,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a486ddc; end: 10a486e63;  */

void FUN_10a486ddc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,long param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_10a480834(param_9);
  uVar1 = param_6;
  func_0x00010a0655d8(param_6,param_8);
  uVar2 = param_6;
  func_0x00010a0655d8(param_6,param_8 + 0x10);
  (*param_7)(uVar1,uVar2);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10a085248(param_5,param_6,&uStack_50);
  return;
}



/* Entry: 10a486e64; end: 10a487023;  */

float FUN_10a486e64(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_30;
  float fStack_28;
  undefined8 uStack_20;
  float fStack_18;
  
  uStack_20 = *param_1;
  fStack_18 = *(float *)(param_1 + 1);
  uStack_30 = *param_2;
  fStack_28 = *(float *)(param_2 + 1);
  FUN_10a480544(&uStack_20,&uStack_30);
  fVar4 = -(uStack_20._4_4_ * fStack_28) + fStack_18 * uStack_30._4_4_;
  fVar7 = -(fStack_18 * (float)uStack_30) + (float)uStack_20 * fStack_28;
  fVar9 = -((float)uStack_20 * uStack_30._4_4_) + uStack_20._4_4_ * (float)uStack_30;
  fVar10 = 1.0 / SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar7 * fVar7);
  fVar4 = fVar4 * fVar10;
  fVar7 = fVar7 * fVar10;
  fVar9 = fVar9 * fVar10;
  fVar11 = (float)uStack_30 * 0.0 + fVar4 + (float)uStack_20 * 0.0;
  fVar6 = uStack_30._4_4_ + fVar7 * 0.0 + uStack_20._4_4_ * 0.0;
  fVar3 = fStack_18 + fStack_28 * 0.0 + fVar9 * 0.0;
  fVar5 = (fVar11 - fVar6) - fVar3;
  fVar8 = (fVar6 - fVar11) - fVar3;
  fVar10 = (fVar3 - fVar11) - fVar6;
  fVar3 = fVar3 + fVar11 + fVar6;
  fVar6 = fVar5;
  if (fVar5 <= fVar3) {
    fVar6 = fVar3;
  }
  bVar1 = 2;
  if (fVar8 <= fVar6) {
    fVar8 = fVar6;
    bVar1 = fVar3 < fVar5;
  }
  bVar2 = 3;
  if (fVar10 <= fVar8) {
    fVar10 = fVar8;
    bVar2 = bVar1;
  }
  fVar8 = SQRT(fVar10 + 1.0) * 0.5;
  fVar6 = 0.25 / fVar8;
  fVar10 = uStack_30._4_4_ * 0.0 + fVar7 + uStack_20._4_4_ * 0.0 +
           (float)uStack_30 + fVar4 * 0.0 + (float)uStack_20 * 0.0;
  if (bVar2 != 2) {
    fVar10 = (float)uStack_20 + (float)uStack_30 * 0.0 + fVar4 * 0.0 +
             fStack_28 * 0.0 + fVar9 + fStack_18 * 0.0;
  }
  fVar3 = ((fStack_28 + fVar9 * 0.0 + fStack_18 * 0.0) -
          (uStack_20._4_4_ + uStack_30._4_4_ * 0.0 + fVar7 * 0.0)) * fVar6;
  if (bVar2 != 0) {
    fVar3 = fVar8;
  }
  fVar10 = fVar10 * fVar6;
  if (bVar2 < 2) {
    fVar10 = fVar3;
  }
  return fVar10;
}



/* Entry: 10a487024; end: 10a4870cf;  */

void FUN_10a487024(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a486ddc(param_1,param_2,FUN_10a486e64,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a4870d0; end: 10a48717b;  */

void FUN_10a4870d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a48717c(param_1,param_2,FUN_10a45de0c,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a48717c; end: 10a48723b;  */

void FUN_10a48717c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,long param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar8 = param_8;
  FUN_10a48723c(param_9);
  uVar3 = param_6;
  func_0x00010a077264(param_6,param_8);
  uVar4 = param_6;
  func_0x00010a077264(param_6,param_8 + 0x10);
  if (*(int *)(param_8 + 0x20) == 3) {
    fVar17 = (float)*(double *)(param_8 + 0x28);
    fStack_50 = fVar17;
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_8 + 0x28))) {
      fStack_50 = 0.0;
    }
    (*param_7)(uVar3,uVar4);
    fStack_4c = fVar17;
    uStack_48 = param_3;
    uStack_44 = param_4;
    FUN_10a085248(param_5,param_6,&fStack_50);
    return;
  }
  puVar5 = &UNK_10f68f550;
  func_0x00010988bd28();
  if ((int)puVar5 == 3) {
    return;
  }
  plVar6 = (long *)0x3;
  FUN_10a052ee0(3,0,puVar5);
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a48717c(extraout_x8,plVar6,0x10a45dedc,puVar5,lVar8);
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar6;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_c8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_e8 = lVar8;
          lStack_e0 = lVar8;
          lStack_d8 = lVar8;
          lStack_d0 = lVar14;
          func_0x00010988c1b8(&lStack_e8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a48723c; end: 10a48725f;  */

void FUN_10a48723c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a48717c(extraout_x8,plVar3,0x10a45dedc,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar3;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a487260; end: 10a48730b;  */

void FUN_10a487260(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a48717c(param_1,param_2,0x10a45dedc,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a48730c; end: 10a4873bf;  */

void FUN_10a48730c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  uStack_38 = 0x3f80000000000000;
  uStack_40 = 0;
  FUN_10a085248(param_1,param_2,&uStack_40);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a4873c0; end: 10a48748b;  */

void FUN_10a4873c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  FUN_10a1f8644(param_9);
  func_0x00010a1f8668(param_6,param_8);
  func_0x00010a14d808();
  uStack_50 = param_2;
  uStack_4c = param_3;
  uStack_48 = param_4;
  uStack_44 = param_5;
  FUN_10a085248(param_1,param_6,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a48748c; end: 10a48763f;  */

void FUN_10a48748c(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pfVar3 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar3 + 0xb2) < 8) {
    *(long *)(pfVar3 + *(ulong *)(pfVar3 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar3 + 0xb4);
    *(long *)(pfVar3 + 0xb2) = *(long *)(pfVar3 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar3 + 0x96);
  }
  FUN_10a400ba8(param_5);
  pfVar4 = param_2;
  FUN_10a36c25c(param_2,param_4);
  fVar5 = *pfVar4;
  fVar6 = pfVar4[5];
  fVar7 = pfVar4[10];
  fVar8 = (fVar5 - fVar6) - fVar7;
  fVar9 = (fVar6 - fVar5) - fVar7;
  fVar11 = (fVar7 - fVar5) - fVar6;
  fVar7 = fVar5 + fVar6 + fVar7;
  fVar5 = fVar8;
  if (fVar8 <= fVar7) {
    fVar5 = fVar7;
  }
  bVar1 = 2;
  if (fVar9 <= fVar5) {
    fVar9 = fVar5;
    bVar1 = fVar7 < fVar8;
  }
  bVar2 = 3;
  if (fVar11 <= fVar9) {
    fVar11 = fVar9;
    bVar2 = bVar1;
  }
  fVar7 = SQRT(fVar11 + 1.0) * 0.5;
  fVar5 = 0.25 / fVar7;
  fVar9 = (pfVar4[8] - pfVar4[2]) * fVar5;
  fVar8 = (pfVar4[1] + pfVar4[4]) * fVar5;
  fVar10 = (pfVar4[6] + pfVar4[9]) * fVar5;
  fVar11 = (pfVar4[1] - pfVar4[4]) * fVar5;
  fVar6 = (pfVar4[2] + pfVar4[8]) * fVar5;
  fStack_44 = fVar9;
  fStack_48 = fVar10;
  fStack_4c = fVar7;
  fStack_50 = fVar8;
  if (bVar2 != 2) {
    fStack_44 = fVar11;
    fStack_48 = fVar7;
    fStack_4c = fVar10;
    fStack_50 = fVar6;
  }
  fVar5 = (pfVar4[6] - pfVar4[9]) * fVar5;
  fVar10 = fVar7;
  if (bVar2 != 0) {
    fVar10 = fVar5;
    fVar11 = fVar6;
    fVar9 = fVar8;
    fVar5 = fVar7;
  }
  if (bVar2 < 2) {
    fStack_44 = fVar10;
    fStack_48 = fVar11;
    fStack_4c = fVar9;
    fStack_50 = fVar5;
  }
  FUN_10a085248(param_1,param_2,&fStack_50);
  func_0x00010988c170(pfVar3 + 0x96);
  return;
}



/* Entry: 10a487640; end: 10a4877ef;  */

void FUN_10a487640(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  pfVar3 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar3 + 0xb2) < 8) {
    *(long *)(pfVar3 + *(ulong *)(pfVar3 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar3 + 0xb4);
    *(long *)(pfVar3 + 0xb2) = *(long *)(pfVar3 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar3 + 0x96);
  }
  FUN_10a077240(param_5);
  pfVar4 = param_2;
  func_0x00010a077264(param_2,param_4);
  fVar10 = pfVar4[2];
  fVar8 = pfVar4[3];
  fVar9 = *pfVar4;
  fVar11 = pfVar4[1];
  fVar5 = fVar8 * fVar9 + fVar10 * fVar11;
  fVar5 = fVar5 + fVar5;
  fVar6 = ABS(fVar5);
  bVar1 = false;
  bVar2 = true;
  if (ABS(((-(fVar9 * fVar9) + fVar8 * fVar8) - fVar11 * fVar11) + fVar10 * fVar10) <= 1.1920929e-07
     ) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar6;
    }
  }
  if (!bVar2 || bVar1) {
    fVar5 = fVar9;
    _atan2f(fVar9,fVar8);
    fVar5 = fVar5 + fVar5;
  }
  else {
    _atan2f();
  }
  fVar6 = fVar10 * fVar8 + fVar11 * fVar9;
  fVar6 = fVar6 + fVar6;
  fVar7 = ABS(fVar6);
  fStack_74 = 0.0;
  bVar1 = false;
  bVar2 = true;
  if (ABS((fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * -fVar11) - fVar10 * fVar10) <= 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar7;
    }
  }
  if (bVar2 && !bVar1) {
    fStack_74 = fVar6;
    _atan2f();
  }
  fVar8 = (-(fVar8 * fVar11) + fVar10 * fVar9) * -2.0;
  fVar6 = -1.0;
  if (-1.0 <= fVar8) {
    fVar6 = fVar8;
  }
  fStack_78 = 1.0;
  if (fVar6 <= 1.0) {
    fStack_78 = fVar6;
  }
  _asinf();
  fStack_7c = fVar5;
  FUN_10a065390(param_1,param_2,&fStack_7c);
  func_0x00010988c170(pfVar3 + 0x96);
  return;
}



/* Entry: 10a4877f0; end: 10a48788b;  */

float FUN_10a4877f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = 0.5;
  fVar1 = *param_1 * 0.5;
  fVar5 = param_1[1] * 0.5;
  fVar6 = param_1[2] * 0.5;
  ___sincosf_stret(fVar1);
  fVar3 = fVar2;
  ___sincosf_stret(fVar5);
  fVar4 = fVar3;
  ___sincosf_stret(fVar6);
  return -(fVar2 * fVar5 * fVar6) + fVar4 * fVar1 * fVar3;
}



/* Entry: 10a48788c; end: 10a487937;  */

void FUN_10a48788c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a486be0(param_1,param_2,FUN_10a4877f0,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a487938; end: 10a487a2b;  */

float FUN_10a487938(float param_1,undefined8 *param_2,undefined1 (*param_3) [12])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  
  fVar2 = (float)*(undefined8 *)*param_3;
  fVar9 = (float)*param_2;
  fVar3 = fVar2 * fVar9;
  fVar4 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * (float)((ulong)*param_2 >> 0x20);
  fVar5 = (float)*(undefined8 *)(*param_3 + 8) * (float)param_2[1];
  fVar6 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) * (float)((ulong)param_2[1] >> 0x20)
  ;
  auVar8._4_4_ = fVar4;
  auVar8._0_4_ = fVar3;
  auVar8._8_4_ = fVar5;
  auVar8._12_4_ = fVar6;
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = fVar6;
  auVar8 = NEON_ext(auVar8,auVar1,8,1);
  uVar7 = NEON_rev64(auVar8._0_8_,4);
  fVar3 = fVar3 + (float)uVar7 + fVar4 + (float)((ulong)uVar7 >> 0x20);
  fVar4 = (float)(SUB124(*param_3,0) ^ (SUB124(*param_3,0) ^ (uint)-fVar2) & -(uint)(fVar3 < 0.0));
  fVar2 = -fVar3;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  if (fVar2 <= 0.9999999) {
    _acosf();
    fVar3 = (1.0 - param_1) * fVar2;
    _sinf();
    param_1 = param_1 * fVar2;
    _sinf();
    _sinf(fVar2);
    fVar2 = (fVar9 * fVar3 + fVar4 * param_1) / fVar2;
  }
  else {
    fVar2 = fVar4 * param_1 + fVar9 * (1.0 - param_1);
  }
  return fVar2;
}



/* Entry: 10a487a2c; end: 10a487ad7;  */

void FUN_10a487a2c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a48717c(param_1,param_2,FUN_10a487938,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a487ad8; end: 10a487bcf;  */

void FUN_10a487ad8(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a487bd0);
    (*pcVar1)();
  }
  plVar11 = (long *)plVar3[4];
  if (plVar11 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar11 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar11;
  *plVar11 = (long)&PTR_FUN_110bc7bb8;
  plVar11[2] = 0x3f80000000000000;
  plVar11[1] = 0x3f800000;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a487bd0; end: 10a487c7b;  */

void FUN_10a487bd0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a487d60(param_1,param_2,FUN_10a45e0a0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a487c7c; end: 10a487d5f;  */

void FUN_10a487c7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  FUN_10a36c130(param_1,param_2);
  FUN_10a06cd04(param_4);
  func_0x000109898570(&uStack_58,param_1,param_3);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_10a00946c(&UNK_10f65b187);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a487d1c);
  (*pcVar1)();
}



/* Entry: 10a487d60; end: 10a487e2f;  */

void FUN_10a487d60(undefined4 *param_1,long *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10a36c130(param_2,param_4);
  FUN_10a052e3c(param_5);
  (*param_3)(&puStack_60,plVar2);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a487e30; end: 10a487efb;  */

void FUN_10a487e30(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a36c130(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = *plVar2;
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a487efc; end: 10a487fbf;  */

void FUN_10a487efc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a36c130(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  *plVar4 = *param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a487fc0; end: 10a48808b;  */

void FUN_10a487fc0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a36c130(param_2,param_3);
  FUN_10a052e3c(param_5);
  lStack_48 = plVar2[1];
  FUN_10a07ff64(param_1,param_2,&lStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a48808c; end: 10a48814f;  */

void FUN_10a48808c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a36c130(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  plVar4[1] = *param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a488150; end: 10a488203;  */

void FUN_10a488150(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488204(param_1,param_2,FUN_10a45e2a8,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488204; end: 10a48828f;  */

void FUN_10a488204(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = param_6;
  FUN_10a36c130(param_6,param_8);
  FUN_10a488290(param_10);
  uVar2 = param_6;
  FUN_10a36c130(param_6,param_9);
  (*param_7)(uVar1,uVar2);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10a4882b4(param_5,param_6,&uStack_50);
  return;
}



/* Entry: 10a488290; end: 10a4882b3;  */

void FUN_10a488290(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar2 = 1;
  plVar4 = (long *)0x0;
  FUN_10a052ee0(1);
  plVar3 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((*(byte *)(plVar3 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar3[4];
    if (plStack_50 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plStack_50 = (long *)plVar3[4];
    }
    plVar3[4] = *plStack_50;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_110bc7bb8;
    lVar5 = *param_1;
    plStack_50[2] = param_1[1];
    plStack_50[1] = lVar5;
    plStack_48 = plVar3;
    FUN_10a3683b4(uVar2,plVar4,&plStack_50);
    plVar3 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plStack_48);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a48836c);
  (*pcVar1)();
}



/* Entry: 10a4882b4; end: 10a48836f;  */

void FUN_10a4882b4(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc7bb8;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a3683b4(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a48836c);
  (*pcVar1)();
}



/* Entry: 10a488370; end: 10a488423;  */

void FUN_10a488370(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488204(param_1,param_2,0x10a45e2cc,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488424; end: 10a4884d7;  */

void FUN_10a488424(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488204(param_1,param_2,0x10a45e2f0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a4884d8; end: 10a48858b;  */

void FUN_10a4884d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488204(param_1,param_2,0x10a45e324,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a48858c; end: 10a488653;  */

void FUN_10a48858c(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  FUN_10a36c130(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar15 = param_2[2];
  fVar14 = param_2[3];
  fVar16 = *param_2;
  fVar17 = param_2[1];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(-(fVar15 * fVar17) + fVar14 * fVar16);
  pfVar1 = pfVar5 + 0x96;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a488654; end: 10a488747;  */

void FUN_10a488654(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a36c130(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a4882b4(param_1,param_2,&stack0xffffffffffffffb0);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488748; end: 10a488817;  */

void FUN_10a488748(undefined8 param_1,undefined1 (*param_2) [16],undefined8 param_3,
                  undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  pauVar4 = param_2;
  (**(code **)(*(long *)*param_2 + 0x58))();
  if (*(ulong *)(pauVar4[0x2c] + 8) < 8) {
    *(undefined8 *)(pauVar4[0x27] + *(ulong *)(pauVar4[0x2c] + 8) * 8) =
         *(undefined8 *)pauVar4[0x2d];
    *(long *)(pauVar4[0x2c] + 8) = *(long *)(pauVar4[0x2c] + 8) + 1;
  }
  else {
    func_0x00010988bfcc(pauVar4[0x25] + 8);
  }
  pauVar5 = param_2;
  FUN_10a36c130(param_2,param_3);
  FUN_10a052e3c(param_5);
  NEON_ext(*pauVar5,*pauVar5,8,1);
  FUN_10a4882b4(param_1,param_2,&stack0xffffffffffffffb0);
  plVar1 = (long *)(pauVar4[0x25] + 8);
  lVar7 = *(long *)(pauVar4[0x2c] + 8);
  uVar8 = lVar7 - 1;
  *(ulong *)(pauVar4[0x2c] + 8) = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar1[lVar7 + 2];
    if (*(ulong *)pauVar4[0x2d] == uVar8) {
      return;
    }
  }
  else {
    puVar6 = (ulong *)(*(long *)(pauVar4[0x2b] + 8) + -8);
    uVar8 = *puVar6;
    *(ulong **)(pauVar4[0x2b] + 8) = puVar6;
    if (*(ulong *)pauVar4[0x2d] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar1;
  lVar12 = *(long *)pauVar4[0x26];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = *(long *)(pauVar4[0x26] + 8);
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar1 = lVar11;
          *(ulong *)pauVar4[0x26] = lVar12 + uVar15 * 0x10;
          *(ulong *)(pauVar4[0x26] + 8) = lVar3 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    *(ulong *)pauVar4[0x26] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    *(long *)pauVar4[0x26] = lVar7;
  }
code_r0x00010988c138:
  *(ulong *)pauVar4[0x2d] = uVar8;
  return;
}



/* Entry: 10a488818; end: 10a48890f;  */

void FUN_10a488818(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  pfVar6 = param_2;
  FUN_10a36c130(param_2,param_3);
  FUN_10a488290(param_5);
  FUN_10a36c130(param_2,param_4);
  bVar3 = false;
  if ((*pfVar6 == *param_2) && (bVar3 = false, !NAN(pfVar6[1]) && !NAN(param_2[1]))) {
    bVar3 = pfVar6[1] == param_2[1];
  }
  if (bVar3) {
    bVar3 = false;
    if ((pfVar6[3] == param_2[3]) && (bVar3 = false, !NAN(pfVar6[2]) && !NAN(param_2[2]))) {
      bVar3 = pfVar6[2] == param_2[2];
    }
  }
  else {
    bVar3 = false;
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = bVar3;
  pfVar6 = pfVar5 + 0x96;
  uVar7 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar6 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar1 = *(long *)pfVar6;
  lVar11 = *(long *)(pfVar5 + 0x98);
  lVar9 = lVar11 - lVar1;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar1 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar1)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar1,lVar9);
          *(long *)pfVar6 = lVar10;
          *(ulong *)(pfVar5 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar1 = lVar1 + uVar7 * 0x10;
    while (lVar11 != lVar1) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar5 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a488910; end: 10a488a1b;  */

void FUN_10a488910(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a36c130(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a488a08);
    (*pcVar2)();
  }
  FUN_10a4882b4(param_1,param_2,&stack0xffffffffffffffb0);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488a1c; end: 10a488ac7;  */

void FUN_10a488a1c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a487d60(param_1,param_2,FUN_10a45e378,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488ac8; end: 10a488b77;  */

void FUN_10a488ac8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  FUN_10a4882b4(param_1,param_2,&stack0xffffffffffffffc0);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488b78; end: 10a488c1f;  */

void FUN_10a488b78(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  FUN_10a4882b4(param_1,param_2,&stack0xffffffffffffffc0);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488c20; end: 10a488ccb;  */

void FUN_10a488c20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488ccc(param_1,param_2,FUN_10a45e4ec,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488ccc; end: 10a488d53;  */

void FUN_10a488ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,long param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_10a488d54(param_9);
  uVar1 = param_6;
  FUN_10a36c130(param_6,param_8);
  uVar2 = param_6;
  FUN_10a36c130(param_6,param_8 + 0x10);
  (*param_7)(uVar1,uVar2);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10a4882b4(param_5,param_6,&uStack_50);
  return;
}



/* Entry: 10a488d54; end: 10a488d77;  */

void FUN_10a488d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488ccc(extraout_x8,plVar3,0x10a45e510,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar3;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488d78; end: 10a488e23;  */

void FUN_10a488d78(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488ccc(param_1,param_2,0x10a45e510,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488e24; end: 10a488ecf;  */

void FUN_10a488e24(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488ccc(param_1,param_2,0x10a45e534,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488ed0; end: 10a488f7b;  */

void FUN_10a488ed0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a488ccc(param_1,param_2,0x10a45e568,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a488f7c; end: 10a48908f;  */

void FUN_10a488f7c(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a489090);
    (*pcVar1)();
  }
  plVar11 = (long *)plVar3[9];
  if (plVar11 == (long *)0x0) {
    FUN_10a140784(plVar3 + 5);
    plVar11 = (long *)plVar3[9];
  }
  plVar3[9] = *plVar11;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[2] = 0;
  plVar11[1] = 0x3f800000;
  *plVar11 = (long)&PTR_FUN_110bb3c68;
  plVar11[4] = 0;
  plVar11[3] = 0x3f800000;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a489090; end: 10a48913b;  */

void FUN_10a489090(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a489220(param_1,param_2,FUN_10a45e75c,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a48913c; end: 10a48921f;  */

void FUN_10a48913c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  func_0x00010a1f8668(param_1,param_2);
  FUN_10a06cd04(param_4);
  func_0x000109898570(&uStack_58,param_1,param_3);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_10a00946c(&UNK_10f65b187);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4891dc);
  (*pcVar1)();
}



/* Entry: 10a489220; end: 10a4892ef;  */

void FUN_10a489220(undefined4 *param_1,long *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  func_0x00010a1f8668(param_2,param_4);
  FUN_10a052e3c(param_5);
  (*param_3)(&puStack_60,plVar2);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10a4892f0; end: 10a4893c3;  */

void FUN_10a4892f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[1];
  lStack_50 = *plVar2;
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a4893c4; end: 10a48948f;  */

void FUN_10a4893c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  *plVar4 = *param_2;
  *(int *)(plVar4 + 1) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a489490; end: 10a489563;  */

void FUN_10a489490(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x14);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0xc);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a489564; end: 10a48962f;  */

void FUN_10a489564(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  *(long *)((long)plVar4 + 0xc) = *param_2;
  *(int *)((long)plVar4 + 0x14) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a489630; end: 10a489703;  */

void FUN_10a489630(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[4];
  lStack_50 = plVar2[3];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a489704; end: 10a4897cf;  */

void FUN_10a489704(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[3] = *param_2;
  *(int *)(plVar4 + 4) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a4897d0; end: 10a489883;  */

void FUN_10a4897d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a489884(param_1,param_2,FUN_10a45e9a0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a489884; end: 10a48990b;  */

void FUN_10a489884(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_64 [36];
  
  uVar1 = param_2;
  func_0x00010a1f8668(param_2,param_4);
  func_0x00010a1f8644(param_6);
  uVar2 = param_2;
  func_0x00010a1f8668(param_2,param_5);
  (*param_3)(auStack_64,uVar1,uVar2);
  FUN_10a1f8460(param_1,param_2,auStack_64);
  return;
}



/* Entry: 10a48990c; end: 10a4899bf;  */

void FUN_10a48990c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a489884(param_1,param_2,0x10a45e9c8,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a4899c0; end: 10a489a73;  */

void FUN_10a4899c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a489884(param_1,param_2,0x10a45e9f0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a489a74; end: 10a489b27;  */

void FUN_10a489a74(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a489884(param_1,param_2,FUN_10a45eabc,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a489b28; end: 10a489c17;  */

void FUN_10a489b28(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar17 = param_2[7];
  fVar14 = param_2[8];
  fVar15 = param_2[4];
  fVar16 = param_2[5];
  fVar18 = param_2[6];
  fVar19 = *param_2;
  fVar20 = param_2[1];
  fVar22 = param_2[2];
  fVar21 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) =
       (double)(-(fVar21 * (-(fVar17 * fVar22) + fVar14 * fVar20)) +
                (-(fVar17 * fVar16) + fVar14 * fVar15) * fVar19 +
               (-(fVar15 * fVar22) + fVar16 * fVar20) * fVar18);
  pfVar1 = pfVar5 + 0x96;
  uVar6 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar1 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar2 = *(long *)pfVar1;
  lVar10 = *(long *)(pfVar5 + 0x98);
  lVar8 = lVar10 - lVar2;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar2 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar2)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar4 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar2,lVar8);
          *(long *)pfVar1 = lVar9;
          *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar2;
          lStack_80 = lVar2;
          lStack_78 = lVar2;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar5 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar2 = lVar2 + uVar6 * 0x10;
    while (lVar10 != lVar2) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar5 + 0x98) = lVar2;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a489c18; end: 10a489d77;  */

void FUN_10a489c18(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = pfVar5[8];
  fVar15 = pfVar5[5];
  fVar16 = -(pfVar5[7] * fVar15) + fVar14 * pfVar5[4];
  fVar17 = pfVar5[1];
  fVar18 = -(pfVar5[7] * pfVar5[2]);
  fVar20 = -(pfVar5[4] * pfVar5[2]) + fVar15 * fVar17;
  fVar19 = 1.0 / (-(pfVar5[3] * (fVar18 + fVar14 * fVar17)) + fVar16 * *pfVar5 + fVar20 * pfVar5[6])
  ;
  pfStack_68 = (float *)CONCAT44((-(pfVar5[3] * fVar14) - -(pfVar5[6] * fVar15)) * fVar19,
                                 fVar20 * fVar19);
  lStack_70 = CONCAT44((-(fVar17 * fVar14) - fVar18) * fVar19,fVar16 * fVar19);
  FUN_10a1f8460(param_1,param_2,&lStack_70);
  pfVar5 = pfVar4 + 0x96;
  uVar6 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar6;
  if (uVar6 < 8) {
    uVar6 = *(ulong *)(pfVar5 + uVar6 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar6) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar10 = *(long *)(pfVar4 + 0x98);
  lVar8 = lVar10 - lVar1;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar1 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar1)) {
          uVar7 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar1,lVar8);
          *(long *)pfVar5 = lVar9;
          *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    *(ulong *)(pfVar4 + 0x98) = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar1 = lVar1 + uVar6 * 0x10;
    while (lVar10 != lVar1) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar6;
  return;
}



/* Entry: 10a489d78; end: 10a489e67;  */

void FUN_10a489d78(undefined8 param_1,undefined1 (*param_2) [16],undefined8 param_3,
                  undefined8 param_4,undefined8 param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined1 auVar6 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pauVar2 = param_2;
  (**(code **)(*(long *)*param_2 + 0x58))();
  if (*(ulong *)(pauVar2[0x2c] + 8) < 8) {
    *(undefined8 *)(pauVar2[0x27] + *(ulong *)(pauVar2[0x2c] + 8) * 8) =
         *(undefined8 *)pauVar2[0x2d];
    *(long *)(pauVar2[0x2c] + 8) = *(long *)(pauVar2[0x2c] + 8) + 1;
  }
  else {
    func_0x00010988bfcc(pauVar2[0x25] + 8);
  }
  pauVar3 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a052e3c(param_5);
  auVar4 = *pauVar3;
  pauVar1 = pauVar3 + 1;
  auVar7 = NEON_ext(*pauVar1,auVar4,4,1);
  auVar11._4_12_ = auVar7._4_12_;
  auVar11._0_4_ = auVar7._4_4_;
  auVar9._0_8_ = auVar11._0_8_;
  auVar9._8_4_ = auVar7._12_4_;
  auVar9._12_4_ = auVar7._12_4_;
  auVar8._8_8_ = auVar9._8_8_;
  auVar8._4_4_ = auVar4._4_4_;
  auVar8._0_4_ = auVar7._4_4_;
  auVar10._0_12_ = auVar8._0_12_;
  auVar10._12_4_ = auVar4._12_4_;
  auVar11 = NEON_ext(auVar10,auVar10,8,1);
  auVar4 = NEON_ext(auVar4,*pauVar1,4,1);
  auVar7._4_12_ = auVar4._4_12_;
  auVar7._0_4_ = auVar4._4_4_;
  auVar6._0_8_ = auVar7._0_8_;
  auVar6._8_4_ = auVar4._12_4_;
  auVar6._12_4_ = auVar4._12_4_;
  auVar5._8_8_ = auVar6._8_8_;
  auVar5._4_4_ = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar5._0_4_ = auVar4._4_4_;
  auVar4._0_12_ = auVar5._0_12_;
  auVar4._12_4_ = (int)((ulong)*(undefined8 *)(pauVar3[1] + 8) >> 0x20);
  auVar4 = NEON_ext(auVar4,auVar4,8,1);
  uStack_4c = auVar4._8_8_;
  uStack_54 = auVar4._0_8_;
  uStack_5c = auVar11._8_8_;
  uStack_64 = auVar11._0_8_;
  uStack_44 = *(undefined4 *)pauVar3[2];
  FUN_10a1f8460(param_1,param_2,&uStack_64);
  func_0x00010988c170(pauVar2[0x25] + 8);
  return;
}



/* Entry: 10a489e68; end: 10a489fc3;  */

void FUN_10a489e68(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar4 + 0xb2) < 8) {
    *(long *)(pfVar4 + *(ulong *)(pfVar4 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar4 + 0xb4);
    *(long *)(pfVar4 + 0xb2) = *(long *)(pfVar4 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar4 + 0x96);
  }
  pfVar5 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  func_0x00010a1f8644(param_5);
  func_0x00010a1f8668(param_2,param_4);
  if (((((*pfVar5 == *param_2) && (pfVar5[1] == param_2[1])) && (pfVar5[2] == param_2[2])) &&
      ((pfVar5[3] == param_2[3] && (pfVar5[4] == param_2[4])))) &&
     ((pfVar5[5] == param_2[5] && ((pfVar5[6] == param_2[6] && (pfVar5[7] == param_2[7])))))) {
    bVar6 = pfVar5[8] == param_2[8];
  }
  else {
    bVar6 = false;
  }
  *param_1 = 2;
  *(bool *)(param_1 + 2) = bVar6;
  pfVar5 = pfVar4 + 0x96;
  uVar7 = *(long *)(pfVar4 + 0xb2) - 1;
  *(ulong *)(pfVar4 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar5 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    *(ulong **)(pfVar4 + 0xae) = (ulong *)(*(long *)(pfVar4 + 0xae) + -8);
    if (*(ulong *)(pfVar4 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar1 = *(long *)pfVar5;
  lVar11 = *(long *)(pfVar4 + 0x98);
  lVar9 = lVar11 - lVar1;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar4 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar1 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar1)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar1,lVar9);
          *(long *)pfVar5 = lVar10;
          *(ulong *)(pfVar4 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar4 + 0x9a) = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    *(ulong *)(pfVar4 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar1 = lVar1 + uVar7 * 0x10;
    while (lVar11 != lVar1) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar4 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar4 + 0xb4) = uVar7;
  return;
}



/* Entry: 10a489fc4; end: 10a48a0df;  */

void FUN_10a489fc4(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010a1f8668(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a48a0cc);
    (*pcVar1)();
  }
  fVar14 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar14 = 0.0;
  }
  lStack_70 = CONCAT44((float)((ulong)*plVar4 >> 0x20) * fVar14,(float)*plVar4 * fVar14);
  plStack_68 = (long *)CONCAT44((float)((ulong)plVar4[1] >> 0x20) * fVar14,(float)plVar4[1] * fVar14
                               );
  FUN_10a1f8460(param_1,param_2,&lStack_70);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a48a0e0; end: 10a48a18b;  */

void FUN_10a48a0e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a489220(param_1,param_2,FUN_10a45ebf0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a48a18c; end: 10a48a24b;  */

void FUN_10a48a18c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  uStack_40 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  FUN_10a1f8460(param_1,param_2,&uStack_60);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}


