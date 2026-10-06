/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9ec418; end: 10a9ec547;  */

bool FUN_10a9ec418(uint param_1)

{
  if (0x20 < param_1) {
    if ((param_1 & 0xfffffff0) == 0x2000) {
      return true;
    }
    if (param_1 == 0x61c) {
      return true;
    }
    if (param_1 - 0x80 < 0x21) {
      return true;
    }
    if ((0x35 < param_1 - 0x202a) ||
       ((0x2000000000003fU >> ((ulong)(param_1 - 0x202a) & 0x3f) & 1) == 0)) {
      if (0x2065 < param_1) {
        if (param_1 < 0x206a) {
          return true;
        }
        if (param_1 == 0x3000) {
          return true;
        }
        if (param_1 == 0xfeff) {
          return true;
        }
      }
      return param_1 - 0xfff0 < 0xd;
    }
  }
  return true;
}



/* Entry: 10a9ec548; end: 10a9ec8c3;  */

void FUN_10a9ec548(long *param_1,ulong param_2,ulong param_3,ulong param_4,undefined2 *param_5,
                  ulong param_6,undefined4 *param_7,ulong param_8)

{
  undefined1 *puVar1;
  long lVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 **ppuVar23;
  uint unaff_w26;
  float fVar24;
  float fVar25;
  undefined1 *puStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_120;
  ppuVar23 = &puStack_120;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    func_0x000104bd46a0();
    uVar7 = param_1[1];
    if (uVar7 < (ulong)param_1[2]) {
      FUN_10a9fa0a0(uVar7,param_2);
      lVar18 = uVar7 + 0xd0;
    }
    else {
      lVar18 = uVar7 - *param_1;
      uVar13 = (lVar18 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
      if (0x13b13b13b13b13b < uVar13) {
        FUN_10a9fa1cc();
LAB_10a9eca30:
        func_0x000109ffded8();
        if (((param_6 != 0) && (*param_5 = 0, param_8 != 0)) &&
           (*param_7 = 0xe0ad78ec, param_8 != 1)) {
          uVar13 = (ulong)unaff_w26;
          param_7[1] = 0x60ad78ec;
          if (unaff_w26 < 2) {
            if (unaff_w26 == 0) {
              return;
            }
            uVar13 = 1;
          }
          else {
            uVar15 = 0;
            uVar11 = param_2;
            if (param_2 < 2) {
              uVar11 = 1;
            }
            uVar16 = 1;
            uVar17 = 0;
            do {
              uVar14 = uVar16;
              if (((uVar14 == uVar11) || (param_6 <= uVar15)) ||
                 ((sVar3 = (short)uVar17, param_2 <= (ulong)(long)sVar3 || (param_8 <= uVar15))))
              goto LAB_10a9ecc08;
              iVar12 = (int)uVar14;
              fVar24 = *(float *)(uVar7 + uVar14 * 4) + (float)(uint)(iVar12 * iVar12);
              fVar25 = (fVar24 - (*(float *)(uVar7 + (long)sVar3 * 4) +
                                 (float)(uint)((int)sVar3 * (int)sVar3))) /
                       (float)((iVar12 - sVar3) * 2);
              uVar10 = (int)uVar15 + 2;
              while (fVar25 <= (float)param_7[uVar15]) {
                uVar15 = (ulong)(uVar10 - 3);
                if (param_6 <= uVar15) goto LAB_10a9ecc08;
                sVar3 = param_5[uVar15];
                if (param_2 <= (ulong)(long)sVar3) goto LAB_10a9ecc08;
                fVar25 = (fVar24 - (*(float *)(uVar7 + (long)sVar3 * 4) +
                                   (float)(uint)((int)sVar3 * (int)sVar3))) /
                         (float)((iVar12 - sVar3) * 2);
                uVar10 = uVar10 - 1;
                if (param_8 <= uVar15) goto LAB_10a9ecc08;
              }
              uVar15 = (ulong)(uVar10 - 1);
              if (((param_6 <= uVar15) || (param_5[uVar15] = (short)uVar14, param_8 <= uVar15)) ||
                 (param_7[uVar15] = fVar25, param_8 <= uVar10)) goto LAB_10a9ecc08;
              param_7[uVar10] = 0x60ad78ec;
              uVar16 = uVar14 + 1;
              uVar17 = uVar14;
            } while (uVar14 + 1 != uVar13);
          }
          uVar11 = 0;
          uVar15 = 0;
          while( true ) {
            lVar18 = (uVar15 << 0x20) + -0x100000000;
            uVar16 = (long)(int)uVar15;
            do {
              uVar15 = uVar16;
              uVar16 = uVar15 + 1;
              if (param_8 <= uVar16) goto LAB_10a9ecc08;
              lVar18 = lVar18 + 0x100000000;
            } while ((float)param_7[uVar16] < (float)(uVar11 & 0xffffffff));
            if (param_6 <= (ulong)(lVar18 >> 0x20)) break;
            sVar3 = param_5[lVar18 >> 0x20];
            if ((param_2 <= (ulong)(long)sVar3) || (uVar11 == param_4)) break;
            iVar12 = (int)uVar11 - (int)sVar3;
            *(float *)(param_3 + uVar11 * 4) =
                 *(float *)(uVar7 + (long)sVar3 * 4) + (float)(uint)(iVar12 * iVar12);
            uVar11 = uVar11 + 1;
            if (uVar11 == uVar13) {
              return;
            }
          }
        }
LAB_10a9ecc08:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ecc0c);
        (*pcVar4)();
      }
      lVar20 = param_1[2] - *param_1 >> 4;
      uVar11 = lVar20 * -0x6276276276276276;
      if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
        uVar11 = uVar13;
      }
      if (0x9d89d89d89d89c < (ulong)(lVar20 * 0x4ec4ec4ec4ec4ec5)) {
        uVar11 = 0x13b13b13b13b13b;
      }
      if (uVar11 == 0) {
        lVar20 = 0;
      }
      else {
        if (0x13b13b13b13b13b < uVar11) goto LAB_10a9eca30;
        lVar20 = uVar11 * 0xd0;
        __Znwm();
      }
      lVar18 = lVar20 + lVar18;
      FUN_10a9fa0a0(lVar18,param_2);
      lVar22 = *param_1;
      lVar2 = param_1[1];
      lVar9 = lVar18 + (lVar22 - lVar2);
      lVar8 = lVar9;
      lVar21 = lVar22;
      if (lVar2 != lVar22) {
        do {
          FUN_10a9fa0a0(lVar8,lVar21);
          lVar21 = lVar21 + 0xd0;
          lVar8 = lVar8 + 0xd0;
        } while (lVar21 != lVar2);
        do {
          FUN_10a9fa1e0(lVar22);
          lVar22 = lVar22 + 0xd0;
        } while (lVar22 != lVar2);
        lVar22 = *param_1;
      }
      lVar18 = lVar18 + 0xd0;
      *param_1 = lVar9;
      param_1[1] = lVar18;
      param_1[2] = lVar20 + uVar11 * 0xd0;
      if (lVar22 != 0) {
        __ZdlPv(lVar22);
      }
    }
    param_1[1] = lVar18;
    return;
  }
  lVar18 = param_1[2];
  if (param_3 < 0x17) {
    uStack_110 = CONCAT17((char)param_3,(undefined7)uStack_110);
    if (param_3 == 0) goto LAB_10a9ec5d0;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined1 *)((param_3 | 7) + 1);
    }
    ppuVar6 = (undefined1 **)puVar1;
    __Znwm();
    uStack_110 = (ulong)puVar1 | 0x8000000000000000;
    puStack_120 = (undefined1 *)ppuVar6;
    uStack_118 = param_3;
  }
  _memmove(ppuVar6,param_2,param_3);
  ppuVar23 = ppuVar6;
LAB_10a9ec5d0:
  *(undefined1 *)((long)ppuVar23 + param_3) = 0;
  lVar20 = *param_1;
  if (*(char *)(lVar20 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar20 + 0x20));
  }
  *(ulong *)(lVar20 + 0x28) = uStack_118;
  *(undefined1 **)(lVar20 + 0x20) = puStack_120;
  *(ulong *)(lVar20 + 0x30) = uStack_110;
  FUN_10a2086b4(*param_1 + 0x98,param_1[1] + 0x20);
  FUN_10a9eea84(lVar18,*(undefined8 *)(*param_1 + 8));
  lVar18 = *param_1;
  uVar10 = *(uint *)(lVar18 + 0x90);
  if (uVar10 != 2) {
    if (uVar10 == 0xffffffff) {
      bVar5 = *(int *)(*(long *)(lVar18 + 8) + 0x38) == 5;
      uVar10 = (uint)bVar5;
      *(uint *)(lVar18 + 0x90) = (uint)bVar5;
    }
    lVar18 = param_1[3];
    if (*(long *)(lVar18 + 0x28) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ec8bc);
      (*pcVar4)();
    }
    lVar20 = *(long *)(lVar18 + 0x28) + -1;
    uVar7 = *(long *)(lVar18 + 0x20) + lVar20;
    if (*(int *)(*(long *)(*(long *)(lVar18 + 8) + (uVar7 >> 10) * 8) + (uVar7 & 0x3ff) * 4) == -1)
    {
      lVar22 = ((long *)param_1[4])[1];
      for (lVar21 = *(long *)param_1[4]; lVar21 != lVar22; lVar21 = lVar21 + 0xd0) {
        if (*(int *)(lVar21 + 0x90) == 2) {
          *(uint *)(lVar21 + 0x90) = uVar10;
        }
      }
      *(long *)(lVar18 + 0x28) = lVar20;
      func_0x00010aa10494();
      lVar20 = param_1[3];
      lVar18 = *(long *)(lVar20 + 8);
      lVar21 = *param_1;
      uVar7 = 0;
      if (*(long *)(lVar20 + 0x10) != lVar18) {
        uVar7 = (*(long *)(lVar20 + 0x10) - lVar18) * 0x80 - 1;
      }
      lVar22 = *(long *)(lVar20 + 0x28);
      uVar13 = lVar22 + *(long *)(lVar20 + 0x20);
      lVar9 = lVar21;
      if (uVar7 == uVar13) {
        FUN_10a9f9bc8(lVar20);
        lVar18 = *(long *)(lVar20 + 8);
        lVar22 = *(long *)(lVar20 + 0x28);
        uVar13 = *(long *)(lVar20 + 0x20) + lVar22;
        lVar9 = *param_1;
      }
      *(undefined4 *)(*(long *)(lVar18 + (uVar13 >> 10) * 8) + (uVar13 & 0x3ff) * 4) =
           *(undefined4 *)(lVar21 + 0x90);
      *(long *)(lVar20 + 0x28) = lVar22 + 1;
      uVar10 = *(uint *)(lVar9 + 0x90);
    }
    *(uint *)param_1[5] = uVar10;
  }
  FUN_10a9ec8c4(param_1[4]);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0x3f800000;
  uStack_90 = 0xffffffff;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x3f800000;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar19 = (undefined8 *)*param_1;
  lVar18 = puVar19[1];
  *puVar19 = 0;
  puVar19[1] = 0;
  if (lVar18 != 0) {
    (*(code *)puVar19[2])();
  }
  puVar19[2] = 0;
  *(undefined4 *)(puVar19 + 3) = 0;
  if (*(char *)((long)puVar19 + 0x37) < '\0') {
    __ZdlPv(puVar19[4]);
  }
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[6] = 0;
  uStack_f0 = uStack_f0 & 0xffffffffffffff;
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  func_0x0001093a5e24(puVar19 + 7);
  uStack_e8 = 0;
  lVar18 = puVar19[7];
  puVar19[7] = 0;
  if (lVar18 != 0) {
    __ZdlPv();
  }
  lVar18 = puVar19[0xc];
  puVar19[8] = 0;
  puVar19[9] = 0;
  uStack_e0 = 0;
  puVar19[10] = 0;
  *(undefined4 *)(puVar19 + 0xb) = 0x3f800000;
  if (lVar18 != 0) {
    puVar19[0xd] = lVar18;
    __ZdlPv();
  }
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lVar18 = puVar19[0xf];
  if (lVar18 != 0) {
    puVar19[0x10] = lVar18;
    __ZdlPv();
  }
  puVar19[0xf] = 0;
  puVar19[0x10] = 0;
  puVar19[0x11] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  *(undefined4 *)(puVar19 + 0x12) = 0xffffffff;
  func_0x00010a208730(puVar19 + 0x13,&uStack_88);
  puVar19[0x15] = uStack_78;
  *(undefined1 *)(puVar19 + 0x16) = (undefined1)uStack_70;
  if (puVar19[0x17] != 0) {
    puVar19[0x18] = puVar19[0x17];
    __ZdlPv();
  }
  puVar19[0x18] = uStack_60;
  puVar19[0x17] = uStack_68;
  puVar19[0x19] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10a9fa1e0(&puStack_120);
  *(undefined8 *)*param_1 = 0;
  lVar18 = *param_1;
  *(undefined4 *)(lVar18 + 0xa8) = *(undefined4 *)param_1[6];
  *(undefined4 *)(lVar18 + 0xac) = *(undefined4 *)param_1[7];
  return;
}



/* Entry: 10a9ec8c4; end: 10a9eca33;  */

void FUN_10a9ec8c4(long *param_1,ulong param_2,long param_3,ulong param_4,undefined2 *param_5,
                  ulong param_6,undefined4 *param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  short sVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint unaff_w26;
  float fVar19;
  float fVar20;
  
  uVar5 = param_1[1];
  if (uVar5 < (ulong)param_1[2]) {
    FUN_10a9fa0a0(uVar5,param_2);
    lVar17 = uVar5 + 0xd0;
  }
  else {
    lVar17 = uVar5 - *param_1;
    uVar10 = (lVar17 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x13b13b13b13b13b < uVar10) {
      FUN_10a9fa1cc();
LAB_10a9eca30:
      func_0x000109ffded8();
      if (((param_6 != 0) && (*param_5 = 0, param_8 != 0)) && (*param_7 = 0xe0ad78ec, param_8 != 1))
      {
        uVar10 = (ulong)unaff_w26;
        param_7[1] = 0x60ad78ec;
        if (unaff_w26 < 2) {
          if (unaff_w26 == 0) {
            return;
          }
          uVar10 = 1;
        }
        else {
          uVar12 = 0;
          uVar8 = param_2;
          if (param_2 < 2) {
            uVar8 = 1;
          }
          uVar13 = 1;
          uVar14 = 0;
          do {
            uVar11 = uVar13;
            if (((uVar11 == uVar8) || (param_6 <= uVar12)) ||
               ((sVar3 = (short)uVar14, param_2 <= (ulong)(long)sVar3 || (param_8 <= uVar12))))
            goto LAB_10a9ecc08;
            iVar9 = (int)uVar11;
            fVar19 = *(float *)(uVar5 + uVar11 * 4) + (float)(uint)(iVar9 * iVar9);
            fVar20 = (fVar19 - (*(float *)(uVar5 + (long)sVar3 * 4) +
                               (float)(uint)((int)sVar3 * (int)sVar3))) /
                     (float)((iVar9 - sVar3) * 2);
            uVar15 = (int)uVar12 + 2;
            while (fVar20 <= (float)param_7[uVar12]) {
              uVar12 = (ulong)(uVar15 - 3);
              if (param_6 <= uVar12) goto LAB_10a9ecc08;
              sVar3 = param_5[uVar12];
              if (param_2 <= (ulong)(long)sVar3) goto LAB_10a9ecc08;
              fVar20 = (fVar19 - (*(float *)(uVar5 + (long)sVar3 * 4) +
                                 (float)(uint)((int)sVar3 * (int)sVar3))) /
                       (float)((iVar9 - sVar3) * 2);
              uVar15 = uVar15 - 1;
              if (param_8 <= uVar12) goto LAB_10a9ecc08;
            }
            uVar12 = (ulong)(uVar15 - 1);
            if (((param_6 <= uVar12) || (param_5[uVar12] = (short)uVar11, param_8 <= uVar12)) ||
               (param_7[uVar12] = fVar20, param_8 <= uVar15)) goto LAB_10a9ecc08;
            param_7[uVar15] = 0x60ad78ec;
            uVar13 = uVar11 + 1;
            uVar14 = uVar11;
          } while (uVar11 + 1 != uVar10);
        }
        uVar8 = 0;
        uVar12 = 0;
        while( true ) {
          lVar17 = (uVar12 << 0x20) + -0x100000000;
          uVar13 = (long)(int)uVar12;
          do {
            uVar12 = uVar13;
            uVar13 = uVar12 + 1;
            if (param_8 <= uVar13) goto LAB_10a9ecc08;
            lVar17 = lVar17 + 0x100000000;
          } while ((float)param_7[uVar13] < (float)(uVar8 & 0xffffffff));
          if (param_6 <= (ulong)(lVar17 >> 0x20)) break;
          sVar3 = param_5[lVar17 >> 0x20];
          if ((param_2 <= (ulong)(long)sVar3) || (uVar8 == param_4)) break;
          iVar9 = (int)uVar8 - (int)sVar3;
          *(float *)(param_3 + uVar8 * 4) =
               *(float *)(uVar5 + (long)sVar3 * 4) + (float)(uint)(iVar9 * iVar9);
          uVar8 = uVar8 + 1;
          if (uVar8 == uVar10) {
            return;
          }
        }
      }
LAB_10a9ecc08:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ecc0c);
      (*pcVar4)();
    }
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar8 = lVar7 * -0x6276276276276276;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      uVar8 = uVar10;
    }
    if (0x9d89d89d89d89c < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
      uVar8 = 0x13b13b13b13b13b;
    }
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x13b13b13b13b13b < uVar8) goto LAB_10a9eca30;
      lVar7 = uVar8 * 0xd0;
      __Znwm();
    }
    lVar17 = lVar7 + lVar17;
    FUN_10a9fa0a0(lVar17,param_2);
    lVar16 = *param_1;
    lVar2 = param_1[1];
    lVar1 = lVar17 + (lVar16 - lVar2);
    lVar6 = lVar1;
    lVar18 = lVar16;
    if (lVar2 != lVar16) {
      do {
        FUN_10a9fa0a0(lVar6,lVar18);
        lVar18 = lVar18 + 0xd0;
        lVar6 = lVar6 + 0xd0;
      } while (lVar18 != lVar2);
      do {
        FUN_10a9fa1e0(lVar16);
        lVar16 = lVar16 + 0xd0;
      } while (lVar16 != lVar2);
      lVar16 = *param_1;
    }
    lVar17 = lVar17 + 0xd0;
    *param_1 = lVar1;
    param_1[1] = lVar17;
    param_1[2] = lVar7 + uVar8 * 0xd0;
    if (lVar16 != 0) {
      __ZdlPv(lVar16);
    }
  }
  param_1[1] = lVar17;
  return;
}



/* Entry: 10a9eca34; end: 10a9ecc0b;  */

void FUN_10a9eca34(long param_1,ulong param_2,long param_3,ulong param_4,undefined2 *param_5,
                  ulong param_6,undefined4 *param_7,ulong param_8,uint param_9)

{
  short sVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  if (((param_6 != 0) && (*param_5 = 0, param_8 != 0)) && (*param_7 = 0xe0ad78ec, param_8 != 1)) {
    uVar3 = (ulong)param_9;
    param_7[1] = 0x60ad78ec;
    if (param_9 < 2) {
      if (param_9 == 0) {
        return;
      }
      uVar3 = 1;
    }
    else {
      uVar7 = 0;
      uVar4 = param_2;
      if (param_2 < 2) {
        uVar4 = 1;
      }
      uVar8 = 1;
      uVar9 = 0;
      do {
        uVar6 = uVar8;
        if (((uVar6 == uVar4) || (param_6 <= uVar7)) ||
           ((sVar1 = (short)uVar9, param_2 <= (ulong)(long)sVar1 || (param_8 <= uVar7))))
        goto LAB_10a9ecc08;
        iVar5 = (int)uVar6;
        fVar12 = *(float *)(param_1 + uVar6 * 4) + (float)(uint)(iVar5 * iVar5);
        fVar13 = (fVar12 - (*(float *)(param_1 + (long)sVar1 * 4) +
                           (float)(uint)((int)sVar1 * (int)sVar1))) / (float)((iVar5 - sVar1) * 2);
        uVar11 = (int)uVar7 + 2;
        while (fVar13 <= (float)param_7[uVar7]) {
          uVar7 = (ulong)(uVar11 - 3);
          if (param_6 <= uVar7) goto LAB_10a9ecc08;
          sVar1 = param_5[uVar7];
          if (param_2 <= (ulong)(long)sVar1) goto LAB_10a9ecc08;
          fVar13 = (fVar12 - (*(float *)(param_1 + (long)sVar1 * 4) +
                             (float)(uint)((int)sVar1 * (int)sVar1))) / (float)((iVar5 - sVar1) * 2)
          ;
          uVar11 = uVar11 - 1;
          if (param_8 <= uVar7) goto LAB_10a9ecc08;
        }
        uVar7 = (ulong)(uVar11 - 1);
        if (((param_6 <= uVar7) || (param_5[uVar7] = (short)uVar6, param_8 <= uVar7)) ||
           (param_7[uVar7] = fVar13, param_8 <= uVar11)) goto LAB_10a9ecc08;
        param_7[uVar11] = 0x60ad78ec;
        uVar8 = uVar6 + 1;
        uVar9 = uVar6;
      } while (uVar6 + 1 != uVar3);
    }
    uVar4 = 0;
    uVar7 = 0;
    while( true ) {
      lVar10 = (uVar7 << 0x20) + -0x100000000;
      uVar8 = (long)(int)uVar7;
      do {
        uVar7 = uVar8;
        uVar8 = uVar7 + 1;
        if (param_8 <= uVar8) goto LAB_10a9ecc08;
        lVar10 = lVar10 + 0x100000000;
      } while ((float)param_7[uVar8] < (float)(uVar4 & 0xffffffff));
      if (param_6 <= (ulong)(lVar10 >> 0x20)) break;
      sVar1 = param_5[lVar10 >> 0x20];
      if ((param_2 <= (ulong)(long)sVar1) || (uVar4 == param_4)) break;
      iVar5 = (int)uVar4 - (int)sVar1;
      *(float *)(param_3 + uVar4 * 4) =
           *(float *)(param_1 + (long)sVar1 * 4) + (float)(uint)(iVar5 * iVar5);
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar3) {
        return;
      }
    }
  }
LAB_10a9ecc08:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9ecc0c);
  (*pcVar2)();
}



/* Entry: 10a9ecc0c; end: 10a9ed337;  */

void FUN_10a9ecc0c(float param_1,long param_2,ulong param_3,uint param_4,uint param_5,long param_6,
                  ulong param_7,float *param_8,long param_9,undefined8 param_10,undefined8 param_11,
                  undefined8 param_12,undefined8 param_13)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  uVar11 = (ulong)param_5;
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      if (uVar12 == param_3) goto LAB_10a9ece6c;
      if (param_5 != 0) {
        uVar4 = 0;
        fVar13 = *(float *)(param_2 + uVar12 * 4);
        bVar3 = true;
        uVar7 = uVar12;
        do {
          if ((param_3 <= (uVar7 & 0xffffffff)) || (param_7 == uVar4)) goto LAB_10a9ece6c;
          fVar14 = *(float *)(param_2 + (uVar7 & 0xffffffff) * 4);
          *(float *)(param_6 + uVar4 * 4) = fVar14;
          bVar3 = (bool)(bVar3 & fVar14 == fVar13);
          uVar4 = uVar4 + 1;
          uVar7 = (ulong)((int)uVar7 + param_4);
        } while (uVar11 != uVar4);
        if (!bVar3) {
          FUN_10a9eca34(param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_5)
          ;
          uVar4 = uVar11;
          uVar7 = uVar12;
          pfVar9 = param_8;
          lVar10 = param_9;
          do {
            if ((lVar10 == 0) || (param_3 <= (uVar7 & 0xffffffff))) goto LAB_10a9ece6c;
            *(float *)(param_2 + (uVar7 & 0xffffffff) * 4) = *pfVar9;
            lVar10 = lVar10 + -1;
            uVar7 = (ulong)((int)uVar7 + param_4);
            uVar4 = uVar4 - 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar4 != 0);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
  }
  if (param_5 != 0) {
    uVar4 = 0;
    uVar12 = 0;
    uVar7 = (ulong)param_4;
    do {
      uVar5 = (ulong)(param_4 * (int)uVar12);
      if (param_3 <= uVar5) {
LAB_10a9ece6c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9ece70);
        (*pcVar2)();
      }
      if (param_4 != 0) {
        lVar10 = 0;
        pfVar9 = (float *)(param_2 + uVar4 * 4);
        pfVar1 = (float *)(param_2 + uVar5 * 4);
        fVar13 = *pfVar1;
        pfVar6 = pfVar9;
        lVar8 = uVar7 - 1;
        while( true ) {
          bVar3 = *pfVar6 == fVar13;
          if (lVar8 == 0) break;
          while( true ) {
            lVar10 = lVar10 + 1;
            lVar8 = lVar8 + -1;
            pfVar6 = pfVar6 + 1;
            if (bVar3) break;
            if (lVar8 == 0) goto LAB_10a9ecdec;
            bVar3 = false;
          }
        }
        if (*pfVar6 == fVar13) {
          uVar5 = uVar7;
          fVar14 = SQRT(fVar13);
          if (param_1 * param_1 <= fVar13) {
            fVar14 = param_1;
          }
          do {
            *pfVar9 = fVar14;
            uVar5 = uVar5 - 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar5 != 0);
        }
        else {
LAB_10a9ecdec:
          FUN_10a9eca34(lVar10,pfVar1,uVar7,param_8,param_9,param_10,param_11,param_12,param_13,
                        param_4);
          lVar10 = param_9;
          uVar5 = uVar7;
          pfVar6 = param_8;
          do {
            if (lVar10 == 0) goto LAB_10a9ece6c;
            fVar13 = SQRT(*pfVar6);
            if (param_1 * param_1 <= *pfVar6) {
              fVar13 = param_1;
            }
            *pfVar9 = fVar13;
            lVar10 = lVar10 + -1;
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar6 + 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar5 != 0);
        }
      }
      uVar12 = uVar12 + 1;
      uVar4 = (ulong)((int)uVar4 + param_4);
    } while (uVar12 != uVar11);
  }
  return;
}



/* Entry: 10a9ed338; end: 10a9ed3b7;  */

long FUN_10a9ed338(long param_1)

{
  if ((*(char *)(param_1 + 0xd8) == '\x01') && (*(long *)(param_1 + 0xd0) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a042cd8(param_1 + 0x90);
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(long *)(param_1 + 0x80) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a042cd8(param_1 + 0x40);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a9ed3b8; end: 10a9ed423;  */

void FUN_10a9ed3b8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_28;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_57 = 0;
  uStack_44 = 0x3f800000;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_50 = (undefined1)param_5;
  uStack_4f = (undefined7)((ulong)param_5 >> 8);
  uStack_60 = param_4;
  uStack_40 = param_3;
  FUN_10aa10948(param_1 + 0x178,param_2,param_2,&uStack_70);
  return;
}



/* Entry: 10a9ed424; end: 10a9ed627;  */

long FUN_10a9ed424(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,int param_8,char *param_9,int param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_54 = 0x3f800000;
  uStack_48 = 0;
  cStack_38 = '\0';
  fStack_68 = (float)param_10;
  uStack_58 = (undefined1)param_8;
  param_6 = param_6 + param_10 * 2;
  param_7 = param_7 + param_10 * 2;
  uStack_60 = CONCAT44(param_7,param_6);
  uStack_70 = param_4;
  fStack_64 = fStack_68;
  uStack_50 = param_3;
  if (param_6 < 1 || param_7 < 1) {
    *param_9 = '\x01';
    goto LAB_10a9ed578;
  }
  if (param_8 == 0) {
    FUN_10a9ed784(auStack_90,param_1 + 0x1a0,&uStack_60,param_5,param_1 + 0x178,param_9);
    func_0x00010a9ed6f4(&lStack_80,auStack_90);
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar5 = plStack_88;
      } while (cVar2 != '\0');
      goto LAB_10a9ed530;
    }
  }
  else {
    FUN_10a9ed784(auStack_90,param_1 + 0x1e0,&uStack_60,param_5,param_1 + 0x178,param_9);
    func_0x00010a9ed6f4(&lStack_80,auStack_90);
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar5 = plStack_88;
      } while (cVar2 != '\0');
LAB_10a9ed530:
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (lStack_80 == 0) {
    uStack_60 = 0;
  }
  else {
    *(undefined8 *)(lStack_80 + 0x30) = 0;
    *(undefined8 *)(lStack_80 + 0x28) = 0x3f800000;
    *(undefined8 *)(lStack_80 + 0x40) = 0x3f80000000000000;
    *(undefined8 *)(lStack_80 + 0x38) = 0xbf800000;
    *(undefined4 *)(lStack_80 + 0x48) = 0x3f800000;
  }
LAB_10a9ed578:
  if (*param_9 == '\x01') {
    param_1 = param_1 + 0x178;
    FUN_10aa10948(param_1,param_2,param_2,&lStack_80);
  }
  else {
    param_1 = 0;
  }
  if ((cStack_38 == '\x01') && (lStack_40 != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10a9ed628; end: 10a9ed783;  */

void FUN_10a9ed628(uint *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  uVar2 = (ulong)(uVar5 * param_1[1]);
  uVar4 = param_2[1] - *param_2;
  if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
    if (uVar2 < uVar4) {
      param_2[1] = *param_2 + uVar2;
    }
  }
  else {
    func_0x000107c27d58(param_2,uVar2 - uVar4);
    uVar5 = *param_1;
  }
  if (uVar5 != 0) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 4);
    uVar4 = (ulong)param_1[1];
    do {
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          if ((ulong)(param_2[1] - *param_2) <= uVar6 + uVar2 * uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9ed6f4);
            (*pcVar1)();
          }
          *(byte *)(*param_2 + uVar2 * uVar4 + uVar6) =
               -(*(byte *)(lVar3 + (uVar6 >> 3)) >> (ulong)(((uint)uVar6 ^ 0xffffffff) & 7) & 1);
          uVar6 = uVar6 + 1;
          uVar4 = (ulong)param_1[1];
        } while (uVar6 < uVar4);
        uVar5 = *param_1;
      }
      lVar3 = lVar3 + (int)param_1[2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
  }
  return;
}



/* Entry: 10a9ed784; end: 10a9edad3;  */

void FUN_10a9ed784(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined1 *param_6)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  *param_6 = 1;
  plVar8 = (long *)(param_2 + 2);
  if (*plVar8 == 0) {
    if (*(long *)(param_2 + 10) == *(long *)(param_2 + 8)) goto LAB_10a9edab8;
    FUN_10a797398(&uStack_70,*(long *)(param_2 + 8),param_2[0xe],1,1,1,0,0,1,0,0);
    func_0x00010a66d354(plVar8,&uStack_70);
    plVar12 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar9 = plStack_68 + 1;
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if ((char)param_2[1] == '\x01') {
      FUN_10a9fa5b8(param_2);
    }
  }
  uStack_70 = 0;
  (**(code **)(*(long *)*plVar8 + 0x18))(param_1,(long *)*plVar8,param_3,param_4,0,0,&uStack_70);
  if (*param_1 == 0) {
    for (plVar12 = *(long **)(param_5 + 0x10); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      plVar9 = (long *)plVar12[10];
      if (plVar9 != (long *)0x0) {
        plVar5 = (long *)plVar9[1];
        if (plVar5 == (long *)0x0) {
          lVar6 = *plVar8;
LAB_10a9ed904:
          if (lVar6 != 0) goto LAB_10a9ed944;
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          lVar6 = *plVar8;
          if (plVar5 == (long *)0x0) goto LAB_10a9ed904;
          lVar10 = *plVar9;
          plVar9 = plVar5 + 1;
          do {
            lVar7 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
          if (lVar10 != lVar6) goto LAB_10a9ed944;
        }
        plVar9 = (long *)plVar12[0xb];
        plVar12[10] = 0;
        plVar12[0xb] = 0;
        if (plVar9 != (long *)0x0) {
          plVar5 = plVar9 + 1;
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
LAB_10a9ed944:
    }
    uStack_78 = 0;
    (**(code **)(*(long *)*plVar8 + 0x18))
              (&uStack_70,(long *)*plVar8,param_3,param_4,0,0,&uStack_78);
    FUN_10a350188(param_1,&uStack_70);
    plVar12 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar9 = plStack_68 + 1;
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (*param_1 == 0) {
      uVar1 = (long)*param_2 + 1;
      *param_2 = (int)uVar1;
      uVar11 = *(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 3;
      if (uVar1 < uVar11) {
        FUN_10a9fa6ec(param_5);
        if ((ulong)(*(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 3) <= (ulong)(long)*param_2)
        {
LAB_10a9edab8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9edabc);
          (*pcVar4)();
        }
        FUN_10a797398(&uStack_70,*(long *)(param_2 + 8) + (long)*param_2 * 8,param_2[0xe],1,1,1,0,0,
                      1,0,0);
        func_0x00010a66d354(plVar8,&uStack_70);
        if (plStack_68 != (long *)0x0) {
          plVar8 = plStack_68 + 1;
          do {
            lVar6 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((char)param_2[1] == '\x01') {
          FUN_10a9fa5b8(param_2);
        }
      }
      *param_6 = uVar11 <= uVar1;
    }
  }
  return;
}



/* Entry: 10a9edad4; end: 10a9edb0b;  */

long FUN_10a9edad4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(long *)(param_1 + 0x40) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a9edb0c; end: 10a9edb8b;  */

void FUN_10a9edb0c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  _CFStringCreateWithCString(uVar2,plVar1,0x8000100);
  uStack_28 = uVar2;
  _CTFontCreateWithName(0x4058000000000000);
  *param_1 = uVar2;
  FUN_10aa10ec8(&uStack_28);
  return;
}



/* Entry: 10a9edb8c; end: 10a9eea83;  */

undefined8
FUN_10a9edb8c(double param_1,undefined8 *param_2,long param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,double *param_8,float *param_9,byte param_10,
             undefined4 param_11,int *param_12,byte param_13,undefined4 param_14,undefined8 param_15
             )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  byte bVar19;
  int iVar20;
  long *plVar21;
  undefined8 *puVar22;
  byte bVar23;
  float fVar24;
  long lStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  float fStack_2e8;
  float fStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  byte bStack_2d0;
  undefined1 uStack_2c8;
  char cStack_2c1;
  long lStack_2c0;
  char cStack_2b8;
  undefined7 uStack_2b7;
  long lStack_280;
  char cStack_278;
  long *plStack_268;
  long lStack_230;
  char cStack_228;
  byte bStack_211;
  undefined4 uStack_210;
  int iStack_20c;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  byte bStack_1d8;
  byte bStack_1d7;
  undefined4 uStack_1d0;
  int iStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte bStack_198;
  byte bStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [8];
  long lStack_138;
  byte bStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  byte bStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  double dStack_c0;
  long *plStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *****pppppuStack_98;
  undefined8 uStack_88;
  
  uVar18 = param_15;
  bVar4 = *(byte *)(*param_4 + 200);
  uStack_150._0_4_ = (uint)uStack_150 & 0xffffff00;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  uStack_150 = CONCAT44(0x3f800000,(uint)uStack_150);
  uStack_148 = 0;
  auStack_140[0] = 0;
  bStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_107 = 0;
  uStack_100 = uStack_100 & 0xffffff00;
  uStack_10f = 0;
  uStack_108 = 0;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0;
  auStack_f0[0] = 0;
  bStack_e0 = 0;
  uStack_d8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_190,param_6);
  uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)param_1);
  bVar19 = 0;
  if (*param_12 != 0) {
    bVar19 = bVar4;
  }
  iStack_20c = (int)param_1;
  bVar23 = 0;
  if (0.0 < (float)param_12[1]) {
    bVar23 = bVar19;
  }
  uStack_210 = (undefined4)param_7;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1c8 = 0;
  bStack_1b0 = param_10;
  uStack_1e8 = *(undefined8 *)(*param_4 + 0xc0);
  uStack_1a0 = 0;
  bStack_198 = param_13;
  bStack_197 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  lStack_208 = 0;
  bStack_1f0 = param_10;
  uStack_1e0 = *(undefined8 *)param_12;
  bStack_1d8 = param_13;
  bStack_1d7 = 0;
  puVar22 = param_2;
  uStack_1d0 = uStack_210;
  iStack_1cc = iStack_20c;
  uStack_1a8 = uStack_1e8;
  FUN_10a9e4bb0(param_2,&uStack_1d0);
  if (puVar22 != (undefined8 *)0x0) {
    FUN_10a350d34(&uStack_178,puVar22 + 10);
    uStack_160 = puVar22[0xd];
    uStack_168 = puVar22[0xc];
    uStack_150 = puVar22[0xf];
    uStack_158 = puVar22[0xe];
    uStack_148 = *(undefined1 *)(puVar22 + 0x10);
    func_0x00010a9f95d4(auStack_140,puVar22 + 0x11);
  }
  if ((param_10 & bVar23) == 0) {
LAB_10a9edd3c:
    bVar19 = 0;
    bVar23 = 1;
    if (puVar22 != (undefined8 *)0x0) goto joined_r0x00010a9edefc;
LAB_10a9edd84:
    if (param_10 == 0) {
      puVar22 = param_2;
      FUN_10a9ed3b8(param_2,&uStack_1d0,bVar4 ^ 1,*(undefined8 *)param_9,
                    CONCAT44((int)param_8[3],(int)param_8[2]));
      FUN_10a350d34(&uStack_178,puVar22 + 10);
      uStack_160 = puVar22[0xd];
      uStack_168 = puVar22[0xc];
      uStack_150 = puVar22[0xf];
      uStack_158 = puVar22[0xe];
      uStack_148 = *(undefined1 *)(puVar22 + 0x10);
      func_0x00010a9f95d4(auStack_140,puVar22 + 0x11);
      goto joined_r0x00010a9edefc;
    }
    bStack_211 = 0;
    uStack_2f0 = *(long **)param_9;
    pppppuStack_b0 = (undefined8 *****)CONCAT62(pppppuStack_b0._2_6_,(short)param_7);
    bVar5 = *(byte *)(*param_4 + 200);
    plStack_2f8 = (long *)0x0;
    lStack_300 = 0;
    fStack_2e8 = 0.0;
    fStack_2e4 = 0.0;
    uStack_2d4 = 0x3f800000;
    uStack_2c8 = 0;
    cStack_2b8 = '\0';
    bStack_2d0 = bVar5 ^ 1;
    uStack_2d8 = CONCAT31(uStack_2d8._1_3_,bVar5) ^ 1;
    iStack_2e0 = (int)param_8[2];
    iStack_2dc = (int)param_8[3];
    if ((iStack_2e0 < 1) || (iStack_2dc < 1)) {
      bStack_211 = 1;
    }
    else {
      if (bVar5 == 0) {
        dStack_c0 = (double)((ulong)dStack_c0._1_7_ << 8);
        ppppppuVar13 = &pppppuStack_a0;
        FUN_10a0cf3f0(ppppppuVar13,iStack_2dc * iStack_2e0 * 4,&dStack_c0);
        _CGColorSpaceCreateDeviceRGB();
        ppppppuVar14 = (undefined8 ******)pppppuStack_a0;
        uStack_88 = ppppppuVar13;
        _CGBitmapContextCreate
                  (pppppuStack_a0,(long)iStack_2e0,(long)iStack_2dc,8,(long)iStack_2e0 << 2,
                   ppppppuVar13,1);
        dStack_c0 = -*param_8;
        plStack_b8 = (long *)-param_8[1];
        pppppuStack_a8 = ppppppuVar14;
        _CTFontDrawGlyphs(*(undefined8 *)(*param_4 + 0xc0),&pppppuStack_b0,&dStack_c0,1,ppppppuVar14
                         );
        FUN_10a9ed784(&lStack_d0,param_2 + 0x3c,&iStack_2e0,pppppuStack_a0,param_2 + 0x2f,
                      &bStack_211);
        func_0x00010a9ed6f4(&lStack_300,&lStack_d0);
        if (plStack_c8 != (long *)0x0) {
          plVar8 = plStack_c8 + 1;
          do {
            lVar11 = *plVar8;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            plVar21 = plStack_c8;
          } while (cVar6 != '\0');
          goto LAB_10a9ee528;
        }
      }
      else {
        dStack_c0 = (double)((ulong)dStack_c0._1_7_ << 8);
        ppppppuVar13 = &pppppuStack_a0;
        FUN_10a0cf3f0(ppppppuVar13,iStack_2dc * iStack_2e0,&dStack_c0);
        _CGColorSpaceCreateDeviceGray();
        ppppppuVar14 = (undefined8 ******)pppppuStack_a0;
        uStack_88 = ppppppuVar13;
        _CGBitmapContextCreate
                  (pppppuStack_a0,(long)iStack_2e0,(long)iStack_2dc,8,(long)iStack_2e0,ppppppuVar13,
                   0);
        pppppuStack_a8 = ppppppuVar14;
        _CGContextSetGrayFillColor(0x3ff0000000000000,0x3ff0000000000000);
        dStack_c0 = -*param_8;
        plStack_b8 = (long *)-param_8[1];
        _CTFontDrawGlyphs(*(undefined8 *)(*param_4 + 0xc0),&pppppuStack_b0,&dStack_c0,1,
                          pppppuStack_a8);
        if (param_13 == 0) {
          FUN_10a9ed784(&lStack_d0,param_2 + 0x34,&iStack_2e0,pppppuStack_a0,param_2 + 0x2f,
                        &bStack_211);
          func_0x00010a9ed6f4(&lStack_300,&lStack_d0);
          if (plStack_c8 != (long *)0x0) {
            plVar8 = plStack_c8 + 1;
            do {
              lVar11 = *plVar8;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar7) {
                *plVar8 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              plVar21 = plStack_c8;
            } while (cVar6 != '\0');
            goto LAB_10a9ee528;
          }
        }
        else {
          if (bStack_197 - 1 < 3) {
            uVar15 = *(undefined8 *)(&UNK_10e4eb820 + ((ulong)(bStack_197 - 1) & 0xff) * 8);
          }
          else {
            uVar15 = 0xf0000000f;
          }
          iVar1 = iStack_2e0;
          if (iStack_2e0 <= iStack_2dc) {
            iVar1 = iStack_2dc;
          }
          iVar1 = 400 - iVar1;
          uVar3 = iVar1 / 2 & (iVar1 - (iVar1 >> 0x1f) >> 0x1f ^ 0xffffffffU);
          uVar17 = (uint)((ulong)uVar15 >> 0x20);
          if (uVar17 <= uVar3) {
            uVar3 = uVar17;
          }
          uVar17 = uVar3;
          if ((uint)uVar15 <= uVar3) {
            uVar17 = (uint)uVar15;
          }
          if (uVar17 < 2) {
            uVar17 = 1;
          }
          if (uVar3 <= uVar17) {
            uVar3 = uVar17;
          }
          puVar22 = param_2;
          func_0x00010a9ece70();
          fStack_2e8 = (float)uVar3;
          iStack_2e0 = iStack_2e0 + uVar3 * 2;
          iStack_2dc = iStack_2dc + uVar3 * 2;
          fStack_2e4 = fStack_2e8;
          FUN_10a9ed784(&lStack_d0,param_2 + 0x34,&iStack_2e0,*puVar22,param_2 + 0x2f,&bStack_211);
          func_0x00010a9ed6f4(&lStack_300,&lStack_d0);
          if (plStack_c8 != (long *)0x0) {
            plVar8 = plStack_c8 + 1;
            do {
              lVar11 = *plVar8;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar7) {
                *plVar8 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              plVar21 = plStack_c8;
            } while (cVar6 != '\0');
LAB_10a9ee528:
            if (lVar11 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
            }
          }
        }
      }
      FUN_10aa10ff0(&pppppuStack_a8);
      FUN_10aa10fc0(&uStack_88);
      if ((undefined8 ******)pppppuStack_a0 != (undefined8 ******)0x0) {
        pppppuStack_98 = pppppuStack_a0;
        __ZdlPv();
      }
      if (lStack_300 == 0) {
        iStack_2e0 = 0;
        iStack_2dc = 0;
      }
      else {
        *(undefined8 *)(lStack_300 + 0x30) = 0;
        *(undefined8 *)(lStack_300 + 0x28) = 0x3f800000;
        *(undefined8 *)(lStack_300 + 0x40) = 0x3f80000000000000;
        *(undefined8 *)(lStack_300 + 0x38) = 0xbf800000;
        *(undefined4 *)(lStack_300 + 0x48) = 0x3f800000;
      }
    }
    if (bStack_211 == 1) {
      puVar22 = param_2 + 0x2f;
      FUN_10aa10948(puVar22,&uStack_1d0,&uStack_1d0,&lStack_300);
    }
    else {
      puVar22 = (undefined8 *)0x0;
    }
    if ((cStack_2b8 == '\x01') && (lStack_2c0 != 0)) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar8 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      plVar21 = plStack_2f8 + 1;
      do {
        lVar11 = *plVar21;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *plVar21 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (bStack_211 == 1) {
      FUN_10a350d34(&uStack_178,puVar22 + 10);
      uStack_160 = puVar22[0xd];
      uStack_168 = puVar22[0xc];
      uStack_150 = puVar22[0xf];
      uStack_158 = puVar22[0xe];
      uStack_148 = *(undefined1 *)(puVar22 + 0x10);
      func_0x00010a9f95d4(auStack_140,puVar22 + 0x11);
      goto joined_r0x00010a9edefc;
    }
LAB_10a9ee930:
    uVar18 = 0;
    goto LAB_10a9ee840;
  }
  puVar10 = param_2;
  FUN_10a9e4bb0(param_2,&uStack_210);
  if (puVar10 != (undefined8 *)0x0) {
    FUN_10a350d34(&uStack_128,puVar10 + 10);
    uStack_f8 = *(undefined1 *)(puVar10 + 0x10);
    uStack_118 = puVar10[0xc];
    uStack_110 = (undefined1)puVar10[0xd];
    uStack_10f = (undefined7)((ulong)puVar10[0xd] >> 8);
    uStack_100 = (uint)puVar10[0xf];
    uStack_fc = (undefined4)((ulong)puVar10[0xf] >> 0x20);
    uStack_108 = (undefined1)puVar10[0xe];
    uStack_107 = (undefined7)((ulong)puVar10[0xe] >> 8);
    func_0x00010a9f95d4(auStack_f0,puVar10 + 0x11);
    goto LAB_10a9edd3c;
  }
  bVar19 = param_13 ^ 1;
  if (0.14285715 <= (float)param_12[1]) {
    bVar19 = 1;
  }
  bVar23 = bVar19;
  if (puVar22 == (undefined8 *)0x0) goto LAB_10a9edd84;
joined_r0x00010a9edefc:
  if (bVar19 != 0) {
    if (*param_12 == 2) {
      fVar24 = (float)param_12[1] * (float)param_1;
    }
    else {
      if (*param_12 != 1) goto LAB_10a9ee654;
      fVar24 = (float)param_12[1];
    }
    if (0.0 < fVar24) {
      bStack_211 = 0;
      lVar11 = *(long *)(*param_4 + 0xc0);
      _CTFontCreatePathForGlyph(lVar11,param_7,0);
      lStack_d0 = lVar11;
      if (lVar11 == 0) {
        iStack_2dc = 0;
        uStack_2d8 = (uint)uStack_2d8._1_3_ << 8;
        iStack_2e0 = 0;
        plStack_2f8 = (long *)0x0;
        lStack_300 = 0;
        fStack_2e8 = 0.0;
        fStack_2e4 = 0.0;
        uStack_2f0 = (long *)0x0;
        uStack_2d4 = 0x3f800000;
        bStack_2d0 = 0;
        uStack_2c8 = 0;
        cStack_2b8 = '\0';
        param_2 = param_2 + 0x2f;
        FUN_10aa10948(param_2,&uStack_210,&uStack_210,&lStack_300);
LAB_10a9edfe4:
        FUN_10aa11020(&lStack_d0);
      }
      else {
        iVar20 = (int)fVar24;
        iVar1 = (int)param_8[2] + iVar20 * 2;
        iVar2 = (int)param_8[3] + iVar20 * 2;
        uStack_88 = (undefined8 ******)CONCAT44(iVar2,iVar1);
        ppppppuVar14 = uStack_88;
        if (iVar1 < 1 || iVar2 < 1) {
          bStack_211 = 1;
          iStack_2dc = 0;
          uStack_2d8 = (uint)uStack_2d8._1_3_ << 8;
          iStack_2e0 = 0;
          plStack_2f8 = (long *)0x0;
          lStack_300 = 0;
          fStack_2e8 = 0.0;
          fStack_2e4 = 0.0;
          uStack_2f0 = (long *)0x0;
          uStack_2d4 = 0x3f800000;
          bStack_2d0 = 0;
          uStack_2c8 = 0;
          cStack_2b8 = '\0';
          param_2 = param_2 + 0x2f;
          FUN_10aa10948(param_2,&uStack_210,&uStack_210,&lStack_300);
          goto LAB_10a9edfe4;
        }
        plStack_2f8 = (long *)0x0;
        lStack_300 = 0;
        fStack_2e8 = 0.0;
        fStack_2e4 = 0.0;
        uStack_2d4 = 0x3f800000;
        uStack_2c8 = 0;
        cStack_2b8 = '\0';
        uStack_2d8 = (uint)uStack_2d8._1_3_ << 8;
        uStack_2f0 = (long *)CONCAT44(param_9[1] + (float)iVar20,*param_9 - (float)iVar20);
        bStack_2d0 = 0;
        dStack_c0 = (double)((ulong)dStack_c0 & 0xffffffffffffff00);
        ppppppuVar12 = &pppppuStack_a0;
        iStack_2e0 = iVar1;
        iStack_2dc = iVar2;
        FUN_10a0cf3f0(ppppppuVar12,(long)(iVar2 * iVar1),&dStack_c0);
        _CGColorSpaceCreateDeviceGray();
        ppppppuVar13 = (undefined8 ******)pppppuStack_a0;
        pppppuStack_a8 = ppppppuVar12;
        _CGBitmapContextCreate(pppppuStack_a0,(long)iVar1,(long)iVar2,8,(long)iVar1,ppppppuVar12,0);
        pppppuStack_b0 = ppppppuVar13;
        _CGContextSetGrayFillColor(0,0x3ff0000000000000);
        _CGContextFillRect(0,0,(double)iVar1,(double)iVar2,pppppuStack_b0);
        _CGContextTranslateCTM((double)iVar20 - *param_8,(double)iVar20 - param_8[1],pppppuStack_b0)
        ;
        _CGContextSetGrayFillColor(0x3ff0000000000000,0x3ff0000000000000,pppppuStack_b0);
        _CGContextSetGrayStrokeColor(0x3ff0000000000000,0x3ff0000000000000,pppppuStack_b0);
        _CGContextSetLineWidth((double)(fVar24 + fVar24),pppppuStack_b0);
        _CGContextSetLineCap(pppppuStack_b0,1);
        _CGContextSetLineJoin(pppppuStack_b0,1);
        _CGContextAddPath(pppppuStack_b0,lStack_d0);
        _CGContextDrawPath(pppppuStack_b0,3);
        if (param_13 == 0) {
          FUN_10a9ed784(&dStack_c0,param_2 + 0x34,&uStack_88,pppppuStack_a0,param_2 + 0x2f,
                        &bStack_211);
          func_0x00010a9ed6f4(&lStack_300,&dStack_c0);
          if (plStack_b8 != (long *)0x0) {
            plVar8 = plStack_b8 + 1;
            do {
              lVar11 = *plVar8;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar7) {
                *plVar8 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_10a9ee374;
          }
        }
        else {
          if (bStack_1d7 - 1 < 3) {
            uVar15 = *(undefined8 *)(&UNK_10e4eb820 + ((ulong)(bStack_1d7 - 1) & 0xff) * 8);
          }
          else {
            uVar15 = 0xf0000000f;
          }
          iVar20 = iVar1;
          if (iVar1 <= iVar2) {
            iVar20 = iVar2;
          }
          iVar20 = 400 - iVar20;
          uVar3 = iVar20 / 2 & (iVar20 - (iVar20 >> 0x1f) >> 0x1f ^ 0xffffffffU);
          uVar17 = (uint)((ulong)uVar15 >> 0x20);
          if (uVar17 <= uVar3) {
            uVar3 = uVar17;
          }
          uVar17 = uVar3;
          if ((uint)uVar15 <= uVar3) {
            uVar17 = (uint)uVar15;
          }
          if (uVar17 < 2) {
            uVar17 = 1;
          }
          if (uVar3 <= uVar17) {
            uVar3 = uVar17;
          }
          puVar22 = param_2;
          func_0x00010a9ece70(param_2,ppppppuVar14,iVar2,pppppuStack_a0,uVar17,uVar3);
          fStack_2e8 = (float)uVar3;
          iStack_2e0 = iVar1 + uVar3 * 2;
          iStack_2dc = iVar2 + uVar3 * 2;
          fStack_2e4 = fStack_2e8;
          FUN_10a9ed784(&dStack_c0,param_2 + 0x34,&iStack_2e0,*puVar22,param_2 + 0x2f,&bStack_211);
          func_0x00010a9ed6f4(&lStack_300,&dStack_c0);
          if (plStack_b8 != (long *)0x0) {
            plVar8 = plStack_b8 + 1;
            do {
              lVar11 = *plVar8;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar7) {
                *plVar8 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_10a9ee374:
            plVar8 = plStack_b8;
            if (lVar11 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
        if (lStack_300 == 0) {
          iStack_2e0 = 0;
          iStack_2dc = 0;
        }
        else {
          *(undefined8 *)(lStack_300 + 0x30) = 0;
          *(undefined8 *)(lStack_300 + 0x28) = 0x3f800000;
          *(undefined8 *)(lStack_300 + 0x40) = 0x3f80000000000000;
          *(undefined8 *)(lStack_300 + 0x38) = 0xbf800000;
          *(undefined4 *)(lStack_300 + 0x48) = 0x3f800000;
        }
        if (bStack_211 == 1) {
          param_2 = param_2 + 0x2f;
          FUN_10aa10948(param_2,&uStack_210,&uStack_210,&lStack_300);
        }
        else {
          param_2 = (undefined8 *)0x0;
        }
        FUN_10aa10ff0(&pppppuStack_b0);
        FUN_10aa10fc0(&pppppuStack_a8);
        if ((undefined8 ******)pppppuStack_a0 != (undefined8 ******)0x0) {
          pppppuStack_98 = pppppuStack_a0;
          __ZdlPv();
        }
        if ((cStack_2b8 == '\x01') && (lStack_2c0 != 0)) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar8 = plStack_2f8;
        if (plStack_2f8 != (long *)0x0) {
          plVar21 = plStack_2f8 + 1;
          do {
            lVar11 = *plVar21;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar7) {
              *plVar21 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        bVar19 = bStack_211;
        FUN_10aa11020(&lStack_d0);
        if ((bVar19 & 1) == 0) goto LAB_10a9ee930;
      }
      FUN_10a350d34(&uStack_128,param_2 + 10);
      uStack_f8 = *(undefined1 *)(param_2 + 0x10);
      uStack_118 = param_2[0xc];
      uStack_110 = (undefined1)param_2[0xd];
      uStack_10f = (undefined7)((ulong)param_2[0xd] >> 8);
      uStack_100 = (uint)param_2[0xf];
      uStack_fc = (undefined4)((ulong)param_2[0xf] >> 0x20);
      uStack_108 = (undefined1)param_2[0xe];
      uStack_107 = (undefined7)((ulong)param_2[0xe] >> 8);
      func_0x00010a9f95d4(auStack_f0,param_2 + 0x11);
    }
  }
LAB_10a9ee654:
  if (((bVar23 | (byte)uStack_150) & 1) == 0) {
    FUN_10a350d34(&uStack_128,&uStack_178);
    uStack_110 = (undefined1)uStack_160;
    uStack_10f = (undefined7)((ulong)uStack_160 >> 8);
    uStack_118 = uStack_168;
    uStack_100 = (uint)uStack_150;
    uStack_fc = (undefined4)((ulong)uStack_150 >> 0x20);
    uStack_108 = (undefined1)uStack_158;
    uStack_107 = (undefined7)((ulong)uStack_158 >> 8);
    uStack_f8 = uStack_148;
    func_0x00010a9f95d4(auStack_f0,auStack_140);
    if (*param_12 == 2) {
      fVar24 = (float)param_12[1] * (float)param_1;
    }
    else {
      fVar24 = 0.0;
      if (*param_12 == 1) {
        fVar24 = (float)param_12[1];
      }
    }
    uStack_d8 = CONCAT44(fVar24 / 30.0,(undefined4)uStack_d8);
  }
  FUN_10a9fa49c(&lStack_300,param_5,&uStack_190);
  FUN_10aa106f0(param_3 + 0x18,&lStack_300,&lStack_300);
  if ((cStack_228 == '\x01') && (lStack_230 != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_268 != (long *)0x0) {
    plVar8 = plStack_268 + 1;
    do {
      lVar11 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
    }
  }
  if ((cStack_278 == '\x01') && (lStack_280 != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar8 = (long *)CONCAT71(uStack_2b7,cStack_2b8);
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 1;
    do {
      lVar11 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (cStack_2c1 < '\0') {
    __ZdlPv(CONCAT44(uStack_2d4,uStack_2d8));
  }
  if (plStack_2f8 != (long *)0x0) {
    uStack_2f0 = plStack_2f8;
    __ZdlPv();
  }
  if (bVar4 != 0) {
    lVar11 = param_3 + 0x18;
    FUN_10aa10ddc(lVar11,param_5);
    if (lVar11 == 0) {
      FUN_109ffdddc(&UNK_10f639994);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a9ee948);
      (*pcVar9)();
    }
    if ((*(byte *)(lVar11 + 0x80) & 1) == 0) {
      param_3 = param_3 + 0x80;
      FUN_10aa0fd50(param_3,uVar18,&param_15);
      if (*(float *)(param_3 + 0x38) < *(float *)(lVar11 + 100)) {
        *(float *)(param_3 + 0x38) = *(float *)(lVar11 + 100);
      }
      if ((*(long *)(lVar11 + 0x50) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar11 + 0x50) + 0x18),
         fVar24 = (float)(*(int *)(lVar16 + 0xc) - *(int *)(lVar16 + 4)) -
                  (*(float *)(lVar11 + 100) + *(float *)(lVar11 + 0x6c) * 2.0),
         *(float *)(param_3 + 0x3c) < fVar24)) {
        *(float *)(param_3 + 0x3c) = fVar24;
      }
    }
  }
  uVar18 = 1;
LAB_10a9ee840:
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    __ZdlPv();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  if (((bStack_e0 & 1) != 0) && (lStack_e8 != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar8 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar21 = plStack_120 + 1;
    do {
      lVar11 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (((bStack_130 & 1) != 0) && (lStack_138 != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar8 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    plVar21 = plStack_170 + 1;
    do {
      lVar11 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lStack_180 < 0) {
    __ZdlPv(uStack_190);
  }
  return uVar18;
}



/* Entry: 10a9eea84; end: 10a9eeb27;  */

void FUN_10a9eea84(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  int iStack_30;
  char cStack_21;
  
  if (*(int *)(param_2 + 4) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 1;
  }
  FUN_10a5971e0(&ppuStack_38,*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x900));
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < cStack_21) {
    iStack_30 = (int)cStack_21;
    pppuVar1 = &ppuStack_38;
  }
  func_0x0001096f7e1c(pppuVar1,iStack_30);
  if (*(int *)(param_2 + 4) != 0) {
    *(undefined8 ****)(param_2 + 0x40) = pppuVar1;
  }
  func_0x0001096f69f4(param_2);
  if (cStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return;
}



/* Entry: 10a9eeb28; end: 10a9eebbb;  */

void FUN_10a9eeb28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_10a9eebbc(auStack_50,param_2,param_3);
  lVar1 = lVar1 + 0x40;
  FUN_10aa11050(lVar1,auStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (lVar1 != 0) {
    FUN_10a9e9088(*(undefined8 *)(param_1 + 0x18),lVar1 + 0x30,param_4);
  }
  return;
}



/* Entry: 10a9eebbc; end: 10a9eecb7;  */

void FUN_10a9eebbc(long param_1,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uStack_21;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  if (uVar1 == 0) {
LAB_10a9eec14:
    uVar3 = 0;
  }
  else {
    do {
      uVar3 = uVar1;
      if (uVar3 == 0) goto LAB_10a9eec14;
      uVar1 = uVar3 - 1;
    } while (*(char *)((long)puVar2 + (uVar3 - 1)) != '/');
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,param_2,uVar3,0xffffffffffffffff,&uStack_21);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10a9eecb8; end: 10a9ef103;  */

bool FUN_10a9eecb8(long param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  short *psVar3;
  short *psVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  short *psVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ushort uStack_b8;
  undefined6 uStack_b6;
  short *psStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ushort *puStack_70;
  ushort *puStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
LAB_10a9eefa4:
      bVar6 = false;
    }
    else {
      lStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      FUN_10a40944c(&puStack_70,2);
      lVar17 = *param_2;
      if (param_2[1] != lVar17) {
        uVar16 = 0;
        do {
          uVar1 = *(uint *)(lVar17 + uVar16 * 4);
          uVar2 = (ushort)uVar1;
          if (uVar1 < 0x10000) {
            uStack_b8 = uVar2;
            FUN_10a14f5d0(&lStack_58,&uStack_b8);
          }
          else {
            if (uVar1 - 0x10000 >> 0x14 == 0) {
              if (puStack_70 != (ushort *)0x0) {
                *puStack_70 = (ushort)(uVar1 - 0x10000 >> 10) | 0xd800;
                puStack_70[1] = uVar2 & 0x3ff | 0xdc00;
              }
            }
            else if (puStack_70 != (ushort *)0x0) {
              *puStack_70 = uVar2;
            }
            if ((puStack_68 == puStack_70) ||
               (FUN_10a14f474(&lStack_58), (ulong)((long)puStack_68 - (long)puStack_70) < 3))
            goto LAB_10a9ef038;
            FUN_10a14f474(&lStack_58,puStack_70 + 1);
          }
          uVar16 = uVar16 + 1;
          lVar17 = *param_2;
        } while (uVar16 < (ulong)(param_2[1] - lVar17 >> 2));
      }
      uVar15 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      uVar10 = uVar15;
      _CFStringCreateWithCharacters(uVar15,lStack_58,lStack_50 - lStack_58 >> 1);
      uVar11 = uVar15;
      uStack_78 = uVar10;
      _CFDictionaryCreateMutable
                (uVar15,1,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                 PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
      uStack_80 = uVar11;
      _CFDictionarySetValue();
      _CFAttributedStringCreate(uVar15,uVar10,uStack_80);
      uStack_88 = uVar15;
      _CTLineCreateWithAttributedString();
      uStack_90 = uVar15;
      _CTLineGetGlyphRuns();
      FUN_10a9ef104(&lStack_98,uVar15);
      lVar17 = lStack_98;
      _CFArrayGetCount();
      if (lVar17 == 1) {
        _CFArrayGetValueAtIndex(lStack_98,0);
        FUN_10a9ef144(&lStack_a0,lStack_98);
        lVar17 = lStack_a0;
        _CTRunGetAttributes();
        iVar12 = (int)lVar17;
        _CFDictionaryGetValue();
        _CFEqual();
        if (iVar12 == 0) {
          bVar6 = false;
        }
        else {
          lVar17 = lStack_a0;
          _CTRunGetGlyphCount();
          bVar6 = false;
          if (lVar17 != 0) {
            FUN_10a40944c(&uStack_b8,lVar17);
            _CTRunGetGlyphs(lStack_a0,0,lVar17,CONCAT62(uStack_b6,uStack_b8));
            psVar4 = (short *)CONCAT62(uStack_b6,uStack_b8);
            psVar3 = psVar4;
            if (psVar4 == psStack_b0) {
              bVar6 = true;
            }
            else {
              do {
                psVar13 = psVar3 + 1;
                bVar6 = *psVar3 != 0;
                psVar3 = psVar13;
              } while (bVar6 && psVar13 != psStack_b0);
            }
            if (psVar4 != (short *)0x0) {
              psStack_b0 = psVar4;
              __ZdlPv();
            }
          }
        }
        FUN_10aa120f4(&lStack_a0);
      }
      else {
        bVar6 = false;
      }
      FUN_10a103380(&lStack_98);
      FUN_10aa120c4(&uStack_90);
      FUN_10aa12094(&uStack_88);
      FUN_10aa12064(&uStack_80);
      FUN_10aa10ec8(&uStack_78);
      if (puStack_70 != (ushort *)0x0) {
        puStack_68 = puStack_70;
        __ZdlPv();
      }
      if (lStack_58 != 0) {
        lStack_50 = lStack_58;
        __ZdlPv();
      }
    }
  }
  else {
    lVar17 = *param_2;
    lVar9 = param_2[1];
    if (lVar9 != lVar17) {
      uVar16 = 0;
      do {
        uVar1 = *(uint *)(lVar17 + uVar16 * 4);
        uVar14 = (ulong)uVar1;
        if (uVar1 >> 4 == 0xfe0) {
          piVar7 = *(int **)(param_1 + 0x20);
          func_0x000109755be8(piVar7,uVar14);
          if ((piVar7 == (int *)0x0) || (iVar12 = *piVar7, iVar12 == 0)) goto LAB_10a9eefa4;
          lVar17 = *param_2;
          lVar9 = param_2[1];
          if (uVar16 != 0) {
            if ((ulong)(lVar9 - lVar17 >> 2) <= uVar16 - 1) {
LAB_10a9ef038:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9ef03c);
              (*pcVar5)();
            }
            bVar6 = false;
            do {
              piVar7 = piVar7 + 1;
              bVar6 = (bool)(*(int *)(lVar17 + (uVar16 - 1) * 4) == iVar12 | bVar6);
              iVar12 = *piVar7;
            } while (iVar12 != 0);
            if (!bVar6) goto LAB_10a9eefa4;
          }
        }
        else {
          uVar8 = uVar14;
          FUN_10a9ec418();
          if ((uVar8 & 1) == 0) {
            lVar17 = *(long *)(param_1 + 0x20);
            if (((lVar17 == 0) || (lVar9 = *(long *)(lVar17 + 0xa8), lVar9 == 0)) ||
               ((**(code **)(*(long *)(lVar9 + 0x10) + 0x18))(lVar9,uVar14),
               (uint)lVar9 == 0 || *(uint *)(lVar17 + 0x20) <= (uint)lVar9)) goto LAB_10a9eefa4;
            lVar17 = *param_2;
            lVar9 = param_2[1];
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulong)(lVar9 - lVar17 >> 2));
    }
    bVar6 = true;
  }
  return bVar6;
}



/* Entry: 10a9ef104; end: 10a9ef143;  */

void FUN_10a9ef104(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  return;
}



/* Entry: 10a9ef144; end: 10a9ef183;  */

void FUN_10a9ef144(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  return;
}



/* Entry: 10a9ef184; end: 10a9ef23b;  */

void FUN_10a9ef184(undefined8 *param_1,ushort param_2,ushort param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double adStack_60 [4];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  adStack_60[0] = (double)param_2;
  adStack_60[3] = (double)param_3;
  adStack_60[1] = 0.0;
  adStack_60[2] = 0.0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_90 = 0x3ff0000000000000;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar2 = (undefined *)0x1;
  _calloc(1,0x38);
  puVar1 = &UNK_10dffe2e0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x0001097ef64c(param_4,adStack_60,&uStack_90,puVar1);
  *param_1 = param_4;
  param_1[1] = &UNK_1097eede4;
  func_0x0001097cf308(puVar1);
  return;
}



/* Entry: 10a9ef23c; end: 10a9ef34b;  */

void FUN_10a9ef23c(long param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_s0;
  float fVar9;
  undefined1 auVar8 [16];
  undefined4 extraout_s1;
  float fVar10;
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 extraout_s2;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float in_s3;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
      fVar6 = (float)*(undefined8 *)*param_2;
      fVar10 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
      fVar7 = (float)*(undefined8 *)(*param_2 + 8);
      in_s3 = -fVar7;
      fVar15 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
      uVar16 = NEON_rev64(CONCAT44(fVar15 * fVar15,fVar7 * fVar7),4);
      fVar7 = fVar6 * fVar6 + (float)uVar16;
      fVar9 = fVar10 * fVar10 + (float)((ulong)uVar16 >> 0x20);
      auVar11._4_4_ = in_s3;
      auVar11._0_4_ = in_s3;
      auVar11._8_4_ = in_s3;
      auVar11._12_4_ = fVar15;
      auVar24._4_4_ = in_s3;
      auVar24._0_4_ = in_s3;
      auVar24._8_4_ = in_s3;
      auVar24._12_4_ = fVar15;
      auVar11 = NEON_ext(auVar11,auVar24,8,1);
      *(float *)(param_1 + 0x24) = auVar11._0_4_ / (fVar7 + fVar9);
      *(float *)(param_1 + 0x28) = auVar11._4_4_ / (fVar7 + fVar9);
      *(float *)(param_1 + 0x1c) = -fVar6 / (fVar7 + fVar9);
      *(float *)(param_1 + 0x20) = -fVar10 / (fVar7 + fVar9);
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      if (puVar4 != (undefined8 *)0x0) {
        if (*(char *)(puVar4 + 8) == '\x01') {
          (*(code *)*puVar4)();
        }
        else if (*(char *)(puVar4 + 8) == '\x02') {
          FUN_10a05e614();
        }
      }
    }
    fVar7 = (float)(*(double *)
                     (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x120) + 0x850) + 0x10) +
                   (double)*(float *)(param_1 + 0x54));
    fVar6 = 0.5;
    if (fVar7 <= 0.5) {
      fVar6 = fVar7;
    }
    *(float *)(param_1 + 0x54) = fVar6;
    FUN_10a9ef34c(param_1,param_2);
    uStack_30 = extraout_s0;
    uStack_2c = extraout_s1;
    uStack_28 = extraout_s2;
    fStack_24 = in_s3;
    FUN_10a3e82bc(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x140),&uStack_30);
    return;
  }
  puVar5 = &UNK_10f689cb4;
  FUN_10a00946c();
  iVar1 = *(int *)(puVar5 + 0x40);
  if (iVar1 == 2) {
    fVar7 = *(float *)(puVar5 + 0x18);
    fVar21 = *(float *)(puVar5 + 0x24);
    fVar10 = *(float *)(puVar5 + 0x28);
    uVar17 = *(undefined8 *)(puVar5 + 0xc);
    uVar16 = *(undefined8 *)(puVar5 + 0x10);
    fVar9 = (float)uVar16;
    fVar15 = (float)((ulong)uVar16 >> 0x20);
    fVar20 = (float)((ulong)*(undefined8 *)(puVar5 + 0x1c) >> 0x20);
    fVar22 = (float)uVar17;
    uVar16 = NEON_ext(uVar16,uVar17,4,1);
    fVar6 = (float)*(undefined8 *)(puVar5 + 0x1c);
    auVar23._4_4_ = fVar6;
    auVar23._0_4_ = fVar20;
    auVar23._8_4_ = fVar20;
    auVar23._12_4_ = fVar6;
    auVar3._4_4_ = fVar21;
    auVar3._0_4_ = fVar20;
    auVar3._8_4_ = fVar6;
    auVar3._12_4_ = fVar20;
    auVar24 = NEON_ext(auVar23,auVar3,0xc,1);
    auVar13._0_4_ = fVar9 * fVar10 + fVar20 * fVar7;
    auVar13._4_4_ = fVar15 * fVar10 + fVar21 * fVar7;
    auVar13._8_4_ = fVar22 * fVar10 + fVar6 * fVar7;
    auVar13._12_4_ = fVar15 * fVar10 + fVar21 * fVar7;
    auVar11 = NEON_ext(auVar13,auVar13,0xc,1);
    auVar14._0_4_ = (auVar13._4_4_ + fVar20 * fVar22) - auVar24._0_4_ * fVar9;
    auVar14._4_4_ = (auVar13._8_4_ + fVar21 * fVar9) - auVar24._4_4_ * fVar15;
    auVar14._8_4_ = (auVar11._4_4_ + fVar6 * (float)uVar16) - auVar24._8_4_ * fVar22;
    auVar14._12_4_ =
         (auVar13._12_4_ + fVar20 * (float)((ulong)uVar16 >> 0x20)) -
         auVar24._12_4_ * (float)((ulong)uVar17 >> 0x20);
    uVar19 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar8._4_4_ = uVar19;
    auVar8._0_4_ = uVar19;
    auVar8._8_4_ = uVar19;
    auVar8._12_4_ = uVar19;
    auVar2._12_4_ = uVar19;
    auVar2._0_12_ = *(undefined1 (*) [12])*param_2;
    NEON_ext(auVar8,auVar2,4,1);
    NEON_rev64(auVar14,4);
    auVar18._4_4_ = auVar14._0_4_;
    auVar18._0_4_ = -auVar14._0_4_;
    auVar18._8_4_ = -auVar14._8_4_;
    auVar18._12_4_ = auVar14._8_4_;
    auVar11 = NEON_ext(auVar18,auVar14,8,1);
    NEON_ext(auVar11,auVar11,4,1);
  }
  else if (iVar1 == 1) {
    auVar11 = *param_2;
    auVar12._0_4_ = auVar11._0_4_ * (float)*(undefined8 *)(puVar5 + 0xc);
    auVar12._4_4_ = auVar11._4_4_ * (float)((ulong)*(undefined8 *)(puVar5 + 0xc) >> 0x20);
    auVar12._8_4_ = auVar11._8_4_ * (float)*(undefined8 *)(puVar5 + 0x14);
    auVar12._12_4_ = auVar11._12_4_ * (float)((ulong)*(undefined8 *)(puVar5 + 0x14) >> 0x20);
    auVar11 = NEON_ext(auVar12,auVar12,8,1);
    uVar16 = NEON_rev64(auVar11._0_8_,4);
    fVar7 = auVar12._0_4_ + (float)uVar16 + auVar12._4_4_ + (float)((ulong)uVar16 >> 0x20);
    fVar6 = -fVar7;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    if (fVar6 <= 0.9999999) {
      uVar16 = _acosf();
      _sinf();
      _sinf();
      _sinf(uVar16);
    }
  }
  else if (iVar1 != 0) {
    puVar5 = &UNK_10f689cee;
    FUN_10a00946c();
    (**(code **)(*(long *)*param_2 + 0x38))
              (param_2,&PTR_DAT_110c37240,*(undefined4 *)(puVar5 + 0x40));
    *(int *)(puVar5 + 0x40) = (int)param_2;
    return;
  }
  return;
}



/* Entry: 10a9ef34c; end: 10a9ef54b;  */

void FUN_10a9ef34c(long param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar19 [16];
  undefined8 uVar18;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 2) {
    fVar11 = *(float *)(param_1 + 0x18);
    fVar25 = *(float *)(param_1 + 0x24);
    fVar13 = *(float *)(param_1 + 0x28);
    uVar18 = *(undefined8 *)(param_1 + 0xc);
    uVar17 = *(undefined8 *)(param_1 + 0x10);
    fVar21 = (float)uVar17;
    fVar22 = (float)((ulong)uVar17 >> 0x20);
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar26 = (float)uVar18;
    uVar17 = NEON_ext(uVar17,uVar18,4,1);
    fVar10 = (float)*(undefined8 *)(param_1 + 0x1c);
    auVar27._4_4_ = fVar10;
    auVar27._0_4_ = fVar24;
    auVar27._8_4_ = fVar24;
    auVar27._12_4_ = fVar10;
    auVar7._4_4_ = fVar25;
    auVar7._0_4_ = fVar24;
    auVar7._8_4_ = fVar10;
    auVar7._12_4_ = fVar24;
    auVar28 = NEON_ext(auVar27,auVar7,0xc,1);
    fVar15 = fVar21 * fVar13 + fVar24 * fVar11;
    fVar12 = fVar22 * fVar13 + fVar25 * fVar11;
    fVar14 = fVar26 * fVar13 + fVar10 * fVar11;
    fVar16 = fVar22 * fVar13 + fVar25 * fVar11;
    auVar19._4_4_ = fVar12;
    auVar19._0_4_ = fVar15;
    auVar19._8_4_ = fVar14;
    auVar19._12_4_ = fVar16;
    auVar4._4_4_ = fVar12;
    auVar4._0_4_ = fVar15;
    auVar4._8_4_ = fVar14;
    auVar4._12_4_ = fVar16;
    auVar19 = NEON_ext(auVar19,auVar4,0xc,1);
    fVar11 = (fVar12 + fVar24 * fVar26) - auVar28._0_4_ * fVar21;
    fVar13 = (fVar14 + fVar25 * fVar21) - auVar28._4_4_ * fVar22;
    fVar10 = (auVar19._4_4_ + fVar10 * (float)uVar17) - auVar28._8_4_ * fVar26;
    fVar15 = (fVar16 + fVar24 * (float)((ulong)uVar17 >> 0x20)) -
             auVar28._12_4_ * (float)((ulong)uVar18 >> 0x20);
    uVar23 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar9._4_4_ = uVar23;
    auVar9._0_4_ = uVar23;
    auVar9._8_4_ = uVar23;
    auVar9._12_4_ = uVar23;
    auVar6._12_4_ = uVar23;
    auVar6._0_12_ = *(undefined1 (*) [12])*param_2;
    NEON_ext(auVar9,auVar6,4,1);
    auVar28._4_4_ = fVar13;
    auVar28._0_4_ = fVar11;
    auVar28._8_4_ = fVar10;
    auVar28._12_4_ = fVar15;
    NEON_rev64(auVar28,4);
    auVar20._4_4_ = fVar11;
    auVar20._0_4_ = -fVar11;
    auVar20._8_4_ = -fVar10;
    auVar20._12_4_ = fVar10;
    auVar5._4_4_ = fVar13;
    auVar5._0_4_ = fVar11;
    auVar5._8_4_ = fVar10;
    auVar5._12_4_ = fVar15;
    auVar19 = NEON_ext(auVar20,auVar5,8,1);
    NEON_ext(auVar19,auVar19,4,1);
  }
  else if (iVar1 == 1) {
    auVar19 = *param_2;
    fVar10 = auVar19._0_4_ * (float)*(undefined8 *)(param_1 + 0xc);
    fVar11 = auVar19._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
    fVar13 = auVar19._8_4_ * (float)*(undefined8 *)(param_1 + 0x14);
    fVar15 = auVar19._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar10;
    auVar2._8_4_ = fVar13;
    auVar2._12_4_ = fVar15;
    auVar3._4_4_ = fVar11;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fVar13;
    auVar3._12_4_ = fVar15;
    auVar19 = NEON_ext(auVar2,auVar3,8,1);
    uVar17 = NEON_rev64(auVar19._0_8_,4);
    fVar11 = fVar10 + (float)uVar17 + fVar11 + (float)((ulong)uVar17 >> 0x20);
    fVar10 = -fVar11;
    if (0.0 <= fVar11) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.9999999) {
      uVar17 = _acosf();
      _sinf();
      _sinf();
      _sinf(uVar17);
    }
  }
  else if (iVar1 != 0) {
    puVar8 = &UNK_10f689cee;
    FUN_10a00946c();
    (**(code **)(*(long *)*param_2 + 0x38))
              (param_2,&PTR_DAT_110c37240,*(undefined4 *)(puVar8 + 0x40));
    *(int *)(puVar8 + 0x40) = (int)param_2;
    return;
  }
  return;
}



/* Entry: 10a9ef54c; end: 10a9ef58b;  */

void FUN_10a9ef54c(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c37240,*(undefined4 *)(param_1 + 0x40));
  *(int *)(param_1 + 0x40) = (int)param_2;
  return;
}



/* Entry: 10a9ef58c; end: 10a9ef5ab;  */

void FUN_10a9ef58c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9ef5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c37240,*(undefined4 *)(param_1 + 0x40));
  return;
}



/* Entry: 10a9ef5ac; end: 10a9ef5cf;  */

undefined1  [16] FUN_10a9ef5ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    if (param_2[1] != 0) {
      plVar5 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = *(long **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = (undefined8 *)(param_1 + 0x30);
    return auVar8;
  }
  FUN_10a00946c(&UNK_10f689d16);
  auVar9._8_8_ = 0x14;
  auVar9._0_8_ = &UNK_10f689fac;
  return auVar9;
}



/* Entry: 10a9ef5d0; end: 10a9ef65f;  */

undefined1  [16] FUN_10a9ef5d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f689fac;
  return auVar1;
}



/* Entry: 10a9ef660; end: 10a9ef737;  */

void FUN_10a9ef660(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f6891b4;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0xeb;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a9ef738(param_1,&puStack_a8);
  ppuStack_a0 = &puStack_b0;
  puStack_b0 = &UNK_10f689d70;
  puStack_a8 = &UNK_10f689d61;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f6891b4;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xeb;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aa12280();
  FUN_10aa1241c(param_1);
  return;
}



/* Entry: 10a9ef738; end: 10a9ef80f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9ef7d0) */

undefined1  [16] FUN_10a9ef738(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f689fac,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa12184(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9ef810; end: 10a9ef933;  */

void FUN_10a9ef810(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x30))();
  uVar7 = 0;
  plVar5 = (long *)plVar4[1];
  plVar3 = (long *)0x0;
  if ((plVar5 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 = plVar5, plVar5 != (long *)0x0)) {
    plVar4 = (long *)*plVar4;
    uVar7 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))
                (plVar4,*(long *)(*(long *)(param_1 + 0x18) + 0x100) + 0x208,param_2);
      goto LAB_10a9ef8cc;
    }
  }
  plVar5 = plVar3;
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f689d75,&UNK_10f689db9,0x14,&UNK_10f689e1a,in_x6,in_x7,uVar7,
                        plVar5);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
LAB_10a9ef8cc:
  plVar3 = plVar5 + 1;
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
  return;
}



/* Entry: 10a9ef934; end: 10a9efaa3;  */

void FUN_10a9ef934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined **ppuStack_b8;
  int iStack_b0;
  int iStack_ac;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  int *piStack_98;
  long lStack_90;
  undefined ***pppuStack_88;
  int *piStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR_DAT_110bd9e40;
  pppuVar3 = (undefined ***)(param_5 + 0xd48);
  FUN_10a5aeb74();
  iStack_ac = *(int *)(*(long *)(param_5 + 0x850) + 0x30);
  iStack_b0 = 0;
  pppuVar4 = (undefined ***)pppuVar3[1];
  pppuVar1 = pppuVar3;
  if (pppuVar4 != pppuVar3) {
    do {
      ppuStack_b8 = pppuVar4[5];
      if ((*(char *)((long)ppuStack_b8 + 500) != '\x01') ||
         (*(int *)(ppuStack_b8 + 0x3e) != iStack_ac)) {
        uStack_bc = 0;
        FUN_10a2cd058(*(undefined8 *)(ppuStack_b8[0x2d] + 0x140));
        pcStack_a8 = FUN_10aa12530;
        ppuStack_a0 = &PTR_FUN_110c381a8;
        ppuVar2 = &pcStack_a8;
        uStack_c8 = param_1;
        uStack_c4 = param_2;
        uStack_c0 = param_3;
        piStack_98 = &iStack_ac;
        lStack_90 = param_5;
        pppuStack_88 = &ppuStack_b8;
        piStack_80 = &iStack_b0;
        puStack_78 = &uStack_bc;
        puStack_70 = &uStack_c8;
        FUN_10a9efaa4(ppuStack_b8[0x2d]);
        pppuVar1 = &ppuStack_a0;
        (*(code *)*ppuStack_a0)();
        iStack_b0 = iStack_b0 + 1;
      }
      pppuVar4 = (undefined ***)pppuVar4[1];
    } while (pppuVar4 != pppuVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  __Unwind_Resume();
  if (((ulong)pppuVar1[0x23] & 0x13) != 0) {
    return;
  }
  pppuVar3 = pppuVar1;
  (*(code *)*ppuVar2)();
  if ((int)pppuVar3 != 0) {
    for (pppuVar3 = (undefined ***)pppuVar1[0x33]; pppuVar3 != pppuVar1 + 0x32;
        pppuVar3 = (undefined ***)pppuVar3[1]) {
      FUN_10a9efaa4(pppuVar3[2],ppuVar2);
    }
  }
  return;
}



/* Entry: 10a9efaa4; end: 10a9efb0f;  */

void FUN_10a9efaa4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if ((*(ushort *)(param_1 + 0x118) & 0x13) != 0) {
    return;
  }
  lVar1 = param_1;
  (*(code *)*param_2)();
  if ((int)lVar1 != 0) {
    for (lVar1 = *(long *)(param_1 + 0x198); lVar1 != param_1 + 400; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_10a9efaa4(*(undefined8 *)(lVar1 + 0x10),param_2);
    }
  }
  return;
}



/* Entry: 10a9efb10; end: 10a9efb87;  */

undefined8 * FUN_10a9efb10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c372c8;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a9efb88; end: 10a9efbcb;  */

undefined8 * FUN_10a9efb88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c372c8;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  func_0x00010a3f8cc0(param_1 + 1);
  return param_1;
}



/* Entry: 10a9efbcc; end: 10a9efbcf;  */

undefined8 * FUN_10a9efbcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c372c8;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  func_0x00010a3f8cc0(param_1 + 1);
  return param_1;
}



/* Entry: 10a9efbd0; end: 10a9efbe3;  */

void FUN_10a9efbd0(void)

{
  FUN_10a9efb88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9efbe4; end: 10a9efc5f;  */

undefined8 * FUN_10a9efbe4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a9efc60; end: 10a9efca7;  */

undefined8 FUN_10a9efc60(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x2f) == '\0') {
    return 0;
  }
  FUN_10a0f2c98(*(long *)(param_1 + 8),param_1 + 0x18,param_2);
  return 1;
}



/* Entry: 10a9efca8; end: 10a9efd27;  */

void FUN_10a9efca8(float param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (*(char *)((long)plVar5 + 0x3f) < '\0') {
    if (plVar5[6] == 0) {
      return;
    }
  }
  else if (*(char *)((long)plVar5 + 0x3f) == '\0') {
    return;
  }
  if (*(float *)(plVar5 + 8) <= param_1) {
    if (*(char *)((long)plVar5 + 0x3f) < '\0') {
      if (plVar5[6] == 0) {
        return;
      }
      *(undefined1 *)plVar5[5] = 0;
      plVar5[6] = 0;
    }
    else {
      if (*(char *)((long)plVar5 + 0x3f) == '\0') {
        return;
      }
      *(undefined1 *)(plVar5 + 5) = 0;
      *(undefined1 *)((long)plVar5 + 0x3f) = 0;
    }
    plVar3 = (long *)plVar5[1];
    if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0)
       ) {
      plVar4 = (long *)*plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,plVar5 + 2);
      }
      plVar5 = plVar3 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a9efd28; end: 10a9efd7b;  */

undefined8 * FUN_10a9efd28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = (undefined8 *)&UNK_10f689e50;
    FUN_10a00946c();
    func_0x00010a34c8fc(puVar1 + 9);
    if (puVar1[7] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (puVar1[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *puVar1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(puVar1 + 1);
    return puVar1;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x850);
  if (*(int *)(param_1 + 8) + 1U < *(uint *)(lVar2 + 0x2c)) {
    return (undefined8 *)(ulong)(*(uint *)(lVar2 + 0x30) <= *(int *)(param_1 + 0xc) + 1U);
  }
  return (undefined8 *)0x1;
}



/* Entry: 10a9efd7c; end: 10a9efdcf;  */

undefined8 * FUN_10a9efd7c(undefined8 *param_1)

{
  func_0x00010a34c8fc(param_1 + 9);
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9efdd0; end: 10a9efdd3;  */

undefined8 * FUN_10a9efdd0(undefined8 *param_1)

{
  func_0x00010a34c8fc(param_1 + 9);
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9efdd4; end: 10a9efde7;  */

void FUN_10a9efdd4(void)

{
  FUN_10a9efd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9efde8; end: 10a9f0407;  */

long ****** FUN_10a9efde8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long ******pppppplVar5;
  undefined1 uVar6;
  long ***ppplVar7;
  long lVar8;
  ulong uVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  ulong uVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long ******unaff_x19;
  long lVar17;
  long *****ppppplVar18;
  long ******unaff_x22;
  long *plVar19;
  long ******pppppplVar20;
  long *****ppppplStack_250;
  long *****ppppplStack_248;
  long ****pppplStack_240;
  long *****ppppplStack_238;
  long *****ppppplStack_230;
  long lStack_228;
  float fStack_220;
  long *****ppppplStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  long *****ppppplStack_1d0;
  long *****ppppplStack_1c8;
  long lStack_1b0;
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  long ****pppplStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long lStack_f8;
  float fStack_f0;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(byte *)(param_1 + 0x3b0) = *(byte *)(param_1 + 0x3b0) & 0xfd;
  lVar17 = *(long *)(param_1 + 0x2f8);
  pppppplVar5 = (long ******)0x30;
  __Znwm();
  pppppplVar5[1] = (long *****)0x0;
  pppppplVar5[2] = (long *****)0x0;
  *pppppplVar5 = (long *****)&PTR_DAT_110c377a0;
  pppppplVar5[4] = (long *****)0x0;
  pppppplVar5[5] = (long *****)0x0;
  ppppplStack_120 = (long *****)(pppppplVar5 + 3);
  *ppppplStack_120 = (long ****)&PTR_DAT_110bfb760;
  ppppplStack_108 = (long *****)0x0;
  pppplStack_110 = (long ****)0x0;
  lStack_f8 = 0;
  ppppplStack_100 = (long *****)0x0;
  fStack_f0 = *(float *)(lVar17 + 0x38);
  ppppplStack_118 = (long *****)pppppplVar5;
  FUN_10a632eac(&pppplStack_110,*(undefined8 *)(lVar17 + 0x20));
  plVar19 = *(long **)(lVar17 + 0x28);
  if (plVar19 != (long *)0x0) {
    do {
      unaff_x22 = (long ******)ppppplStack_108;
      ppplVar7 = (long ***)plVar19[2];
      uVar12 = ((ulong)(uint)((int)ppplVar7 << 3) + 8 ^ (ulong)ppplVar7 >> 0x20) *
               -0x622015f714c7d297;
      uVar12 = ((ulong)ppplVar7 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      pppppplVar20 = (long ******)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
      if ((long ******)ppppplStack_108 != (long ******)0x0) {
        uVar12 = (long)ppppplStack_108 - 1;
        if (((ulong)ppppplStack_108 & uVar12) == 0) {
          unaff_x19 = (long ******)((ulong)pppppplVar20 & uVar12);
        }
        else {
          unaff_x19 = pppppplVar20;
          if (ppppplStack_108 <= pppppplVar20) {
            uVar9 = 0;
            if ((long ******)ppppplStack_108 != (long ******)0x0) {
              uVar9 = (ulong)pppppplVar20 / (ulong)ppppplStack_108;
            }
            unaff_x19 = (long ******)((long)pppppplVar20 - uVar9 * (long)ppppplStack_108);
          }
        }
        pppplVar13 = (long ****)pppplStack_110[(long)unaff_x19];
        if (pppplVar13 != (long ****)0x0) {
          do {
            while( true ) {
              pppplVar13 = (long ****)*pppplVar13;
              if (pppplVar13 == (long ****)0x0) goto LAB_10a9eff5c;
              pppppplVar15 = (long ******)pppplVar13[1];
              if (pppppplVar15 != pppppplVar20) break;
              if (pppplVar13[2] == ppplVar7) goto LAB_10a9f00d0;
            }
            if (((ulong)ppppplStack_108 & uVar12) == 0) {
              pppppplVar15 = (long ******)((ulong)pppppplVar15 & uVar12);
            }
            else if (ppppplStack_108 <= pppppplVar15) {
              uVar9 = 0;
              if ((long ******)ppppplStack_108 != (long ******)0x0) {
                uVar9 = (ulong)pppppplVar15 / (ulong)ppppplStack_108;
              }
              pppppplVar15 = (long ******)((long)pppppplVar15 - uVar9 * (long)ppppplStack_108);
            }
          } while (pppppplVar15 == unaff_x19);
        }
      }
LAB_10a9eff5c:
      pppppplVar15 = (long ******)0x68;
      __Znwm();
      pppplStack_b0 = (long ****)0x0;
      *pppppplVar15 = (long *****)0x0;
      pppppplVar15[1] = (long *****)pppppplVar20;
      lVar8 = plVar19[3];
      ppppplVar18 = (long *****)plVar19[2];
      pppppplVar15[3] = (long *****)plVar19[3];
      pppppplVar15[2] = ppppplVar18;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppplStack_e0 = (long *****)(pppppplVar15 + 4);
      *(undefined1 *)(pppppplVar15 + 0xc) = 3;
      ppppplStack_c0 = (long *****)pppppplVar15;
      ppppplStack_b8 = &pppplStack_110;
      if ((char)plVar19[0xc] == '\0') {
        uVar6 = 0;
      }
      else {
        FUN_10a005398(&ppppplStack_e0,plVar19 + 4);
        uVar6 = (undefined1)plVar19[0xc];
      }
      *(undefined1 *)(pppppplVar15 + 0xc) = uVar6;
      pppplStack_b0 = (long ****)CONCAT71(pppplStack_b0._1_7_,1);
      if ((unaff_x22 == (long ******)0x0) || (fStack_f0 * (float)unaff_x22 < (float)(lStack_f8 + 1))
         ) {
        uVar12 = 1;
        if ((long ******)0x2 < unaff_x22) {
          uVar12 = (ulong)(((ulong)unaff_x22 & (long)unaff_x22 - 1U) != 0);
        }
        uVar12 = uVar12 | (long)unaff_x22 << 1;
        uVar9 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        FUN_10a632eac(&pppplStack_110,uVar12);
        unaff_x22 = (long ******)ppppplStack_108;
        if (((ulong)ppppplStack_108 & (long)ppppplStack_108 - 1U) == 0) {
          unaff_x19 = (long ******)((long)ppppplStack_108 - 1U & (ulong)pppppplVar20);
        }
        else {
          unaff_x19 = pppppplVar20;
          if (ppppplStack_108 <= pppppplVar20) {
            uVar12 = 0;
            if ((long ******)ppppplStack_108 != (long ******)0x0) {
              uVar12 = (ulong)pppppplVar20 / (ulong)ppppplStack_108;
            }
            unaff_x19 = (long ******)((long)pppppplVar20 - uVar12 * (long)ppppplStack_108);
          }
        }
      }
      pppplVar13 = (long ****)pppplStack_110[(long)unaff_x19];
      if (pppplVar13 == (long ****)0x0) {
        *ppppplStack_c0 = (long ****)ppppplStack_100;
        ppppplStack_100 = ppppplStack_c0;
        pppplStack_110[(long)unaff_x19] = (long ***)&ppppplStack_100;
        if ((long *****)*ppppplStack_c0 != (long *****)0x0) {
          pppppplVar20 = (long ******)(*ppppplStack_c0)[1];
          if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) == 0) {
            pppppplVar20 = (long ******)((ulong)pppppplVar20 & (long)unaff_x22 - 1U);
          }
          else if (unaff_x22 <= pppppplVar20) {
            uVar12 = 0;
            if (unaff_x22 != (long ******)0x0) {
              uVar12 = (ulong)pppppplVar20 / (ulong)unaff_x22;
            }
            pppppplVar20 = (long ******)((long)pppppplVar20 - uVar12 * (long)unaff_x22);
          }
          pppplStack_110[(long)pppppplVar20] = (long ***)ppppplStack_c0;
        }
      }
      else {
        *ppppplStack_c0 = (long ****)*pppplVar13;
        *pppplVar13 = (long ***)ppppplStack_c0;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a9f00d0:
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
  }
  pppppplVar20 = (long ******)0x0;
  if ((long ******)ppppplStack_100 == (long ******)0x0) {
    pppppplVar15 = (long ******)&pppplStack_110;
    FUN_10a57f7cc();
LAB_10a9f02e0:
    pppppplVar16 = pppppplVar5 + 1;
    do {
      ppppplVar18 = *pppppplVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
      if (bVar3) {
        *pppppplVar16 = (long *****)((long)ppppplVar18 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppppplVar18 == (long *****)0x0) {
      (*(code *)(*pppppplVar5)[2])(pppppplVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppplVar15 = pppppplVar5;
    }
  }
  else {
    unaff_x22 = &ppppplStack_e0;
    pppppplVar20 = &ppppplStack_c0;
    pppppplVar15 = (long ******)ppppplStack_100;
    do {
      lVar8 = lVar17 + 0x18;
      pppppplVar5 = pppppplVar15 + 2;
      FUN_10a633958();
      if (lVar8 != 0) {
        if (*(char *)(pppppplVar15 + 0xc) == '\x01') {
          ppppplVar18 = pppppplVar15[4];
          ppppplStack_b8 = ppppplStack_118;
          ppppplStack_c0 = ppppplStack_120;
          if ((long ******)ppppplStack_118 != (long ******)0x0) {
            pppppplVar5 = (long ******)(ppppplStack_118 + 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
              if (bVar3) {
                *pppppplVar5 = (long *****)((long)*pppppplVar5 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (*(code *)ppppplVar18)(&ppppplStack_c0,pppppplVar15 + 4);
          if ((long ******)ppppplStack_b8 != (long ******)0x0) {
            pppppplVar5 = (long ******)(ppppplStack_b8 + 1);
            do {
              ppppplVar18 = *pppppplVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
              if (bVar3) {
                *pppppplVar5 = (long *****)((long)ppppplVar18 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
              pppppplVar16 = (long ******)ppppplStack_b8;
            } while (cVar2 != '\0');
LAB_10a9f01b0:
            if (ppppplVar18 == (long *****)0x0) {
              (*(code *)(*pppppplVar16)[2])(pppppplVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
            }
          }
        }
        else if (*(char *)(pppppplVar15 + 0xc) == '\x02') {
          pppppplVar16 = pppppplVar15 + 4;
          FUN_10a688b40();
          ppppplVar18 = ppppplStack_118;
          if (pppppplVar16 == (long ******)0x0) {
            if (pppppplVar5 != (long ******)0x0) {
              pppplStack_b0 = (long ****)pppppplVar15[4];
              pppplStack_a8 = (long ****)pppppplVar15[5];
              if ((long *****)pppplStack_a8 != (long *****)0x0) {
                ppppplVar11 = (long *****)(pppplStack_a8 + 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppppplVar11,0x10);
                  if (bVar3) {
                    *ppppplVar11 = (long ****)((long)*ppppplVar11 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppppplStack_d0 = ppppplStack_120;
              ppppplStack_c8 = ppppplStack_118;
              if ((long ******)ppppplStack_118 == (long ******)0x0) {
                ppppplStack_98 = (long *****)0x0;
              }
              else {
                pppppplVar16 = (long ******)(ppppplStack_118 + 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                  if (bVar3) {
                    *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                ppppplStack_98 = ppppplStack_118;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                  if (bVar3) {
                    *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppppplStack_a0 = ppppplStack_120;
              ppppplStack_b8 = (long *****)&PTR_FUN_110c37778;
              ppppplStack_d8 = (long *****)0x0;
              ppppplStack_e0 = (long *****)0x0;
              ppppplStack_c0 = (long *****)FUN_10a9fb1b0;
              FUN_10a4634ec(pppppplVar5,&ppppplStack_c0);
              (*(code *)*ppppplStack_b8)(&ppppplStack_b8);
              if ((long ******)ppppplVar18 != (long ******)0x0) {
                pppppplVar5 = (long ******)(ppppplVar18 + 1);
                do {
                  ppppplVar11 = *pppppplVar5;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
                  if (bVar3) {
                    *pppppplVar5 = (long *****)((long)ppppplVar11 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (ppppplVar11 == (long *****)0x0) {
                  (*(code *)(*ppppplVar18)[2])(ppppplVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar18);
                }
              }
              if ((long ******)ppppplStack_d8 != (long ******)0x0) {
                pppppplVar5 = (long ******)(ppppplStack_d8 + 1);
                do {
                  ppppplVar18 = *pppppplVar5;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
                  if (bVar3) {
                    *pppppplVar5 = (long *****)((long)ppppplVar18 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  pppppplVar16 = (long ******)ppppplStack_d8;
                } while (cVar2 != '\0');
                goto LAB_10a9f01b0;
              }
            }
          }
          else {
            *pppppplVar16 =
                 (long *****)
                 CONCAT44((int)((ulong)*pppppplVar16 >> 0x20) + 1,(int)*pppppplVar16 + 1);
            FUN_10a9fafac(pppppplVar15[4],&ppppplStack_120);
            iVar4 = *(int *)((long)pppppplVar16 + 4) + -1;
            *(int *)((long)pppppplVar16 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)pppppplVar16 = 0;
            }
          }
        }
      }
      pppppplVar5 = (long ******)ppppplStack_118;
      pppppplVar15 = (long ******)*pppppplVar15;
    } while (pppppplVar15 != (long ******)0x0);
    pppppplVar15 = (long ******)&pppplStack_110;
    FUN_10a57f7cc();
    if (pppppplVar5 != (long ******)0x0) goto LAB_10a9f02e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppppplVar15;
  }
  ___stack_chk_fail();
  (*(code *)*ppppplStack_b8)(pppppplVar20 + 1);
  FUN_10a9fb268(unaff_x22 + 2);
  func_0x00010a004dac(&ppppplStack_e0);
  FUN_10a57f7cc(&pppplStack_110);
  FUN_10a9fb268(&ppppplStack_120);
  pppppplVar5 = pppppplVar15;
  __Unwind_Resume();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(byte *)(pppppplVar5 + 0x76) = *(byte *)(pppppplVar5 + 0x76) & 0xfe;
  ppppplVar18 = pppppplVar5[0x5b];
  pppppplVar5 = (long ******)0x30;
  __Znwm();
  pppppplVar5[1] = (long *****)0x0;
  pppppplVar5[2] = (long *****)0x0;
  *pppppplVar5 = (long *****)&PTR_DAT_110c37808;
  pppppplVar5[4] = (long *****)0x0;
  pppppplVar5[5] = (long *****)0x0;
  ppppplStack_250 = (long *****)(pppppplVar5 + 3);
  *ppppplStack_250 = (long ****)&PTR_DAT_110bfb6b0;
  ppppplStack_238 = (long *****)0x0;
  pppplStack_240 = (long ****)0x0;
  lStack_228 = 0;
  ppppplStack_230 = (long *****)0x0;
  fStack_220 = *(float *)(ppppplVar18 + 7);
  ppppplStack_248 = (long *****)pppppplVar5;
  FUN_10a630ef4(&pppplStack_240,ppppplVar18[4]);
  pppplVar13 = ppppplVar18[5];
  if (pppplVar13 != (long ****)0x0) {
    do {
      unaff_x22 = (long ******)ppppplStack_238;
      ppplVar7 = pppplVar13[2];
      uVar12 = ((ulong)(uint)((int)ppplVar7 << 3) + 8 ^ (ulong)ppplVar7 >> 0x20) *
               -0x622015f714c7d297;
      uVar12 = ((ulong)ppplVar7 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      pppppplVar20 = (long ******)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
      if ((long ******)ppppplStack_238 != (long ******)0x0) {
        uVar12 = (long)ppppplStack_238 - 1;
        if (((ulong)ppppplStack_238 & uVar12) == 0) {
          pppppplVar15 = (long ******)((ulong)pppppplVar20 & uVar12);
        }
        else {
          pppppplVar15 = pppppplVar20;
          if (ppppplStack_238 <= pppppplVar20) {
            uVar9 = 0;
            if ((long ******)ppppplStack_238 != (long ******)0x0) {
              uVar9 = (ulong)pppppplVar20 / (ulong)ppppplStack_238;
            }
            pppppplVar15 = (long ******)((long)pppppplVar20 - uVar9 * (long)ppppplStack_238);
          }
        }
        pppplVar14 = (long ****)pppplStack_240[(long)pppppplVar15];
        if (pppplVar14 != (long ****)0x0) {
          do {
            while( true ) {
              pppplVar14 = (long ****)*pppplVar14;
              if (pppplVar14 == (long ****)0x0) goto LAB_10a9f057c;
              pppppplVar16 = (long ******)pppplVar14[1];
              if (pppppplVar16 != pppppplVar20) break;
              if (pppplVar14[2] == ppplVar7) goto LAB_10a9f06f0;
            }
            if (((ulong)ppppplStack_238 & uVar12) == 0) {
              pppppplVar16 = (long ******)((ulong)pppppplVar16 & uVar12);
            }
            else if (ppppplStack_238 <= pppppplVar16) {
              uVar9 = 0;
              if ((long ******)ppppplStack_238 != (long ******)0x0) {
                uVar9 = (ulong)pppppplVar16 / (ulong)ppppplStack_238;
              }
              pppppplVar16 = (long ******)((long)pppppplVar16 - uVar9 * (long)ppppplStack_238);
            }
          } while (pppppplVar16 == pppppplVar15);
        }
      }
LAB_10a9f057c:
      pppppplVar16 = (long ******)0x68;
      __Znwm();
      pppplStack_1e0 = (long ****)0x0;
      *pppppplVar16 = (long *****)0x0;
      pppppplVar16[1] = (long *****)pppppplVar20;
      ppplVar7 = pppplVar13[3];
      ppppplVar11 = (long *****)pppplVar13[2];
      pppppplVar16[3] = (long *****)pppplVar13[3];
      pppppplVar16[2] = ppppplVar11;
      if (ppplVar7 != (long ***)0x0) {
        ppplVar7 = ppplVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppplVar7,0x10);
          if (bVar3) {
            *ppplVar7 = (long **)((long)*ppplVar7 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppppplStack_210 = (long *****)(pppppplVar16 + 4);
      *(undefined1 *)(pppppplVar16 + 0xc) = 3;
      ppppplStack_1f0 = (long *****)pppppplVar16;
      ppppplStack_1e8 = &pppplStack_240;
      if (*(char *)(pppplVar13 + 0xc) == '\0') {
        uVar6 = 0;
      }
      else {
        FUN_10a005398(&ppppplStack_210,pppplVar13 + 4);
        uVar6 = *(undefined1 *)(pppplVar13 + 0xc);
      }
      *(undefined1 *)(pppppplVar16 + 0xc) = uVar6;
      pppplStack_1e0 = (long ****)CONCAT71(pppplStack_1e0._1_7_,1);
      if ((unaff_x22 == (long ******)0x0) ||
         (fStack_220 * (float)unaff_x22 < (float)(lStack_228 + 1))) {
        uVar12 = 1;
        if ((long ******)0x2 < unaff_x22) {
          uVar12 = (ulong)(((ulong)unaff_x22 & (long)unaff_x22 - 1U) != 0);
        }
        uVar12 = uVar12 | (long)unaff_x22 << 1;
        uVar9 = (ulong)((float)(lStack_228 + 1) / fStack_220);
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        FUN_10a630ef4(&pppplStack_240,uVar12);
        unaff_x22 = (long ******)ppppplStack_238;
        if (((ulong)ppppplStack_238 & (long)ppppplStack_238 - 1U) == 0) {
          pppppplVar15 = (long ******)((long)ppppplStack_238 - 1U & (ulong)pppppplVar20);
        }
        else {
          pppppplVar15 = pppppplVar20;
          if (ppppplStack_238 <= pppppplVar20) {
            uVar12 = 0;
            if ((long ******)ppppplStack_238 != (long ******)0x0) {
              uVar12 = (ulong)pppppplVar20 / (ulong)ppppplStack_238;
            }
            pppppplVar15 = (long ******)((long)pppppplVar20 - uVar12 * (long)ppppplStack_238);
          }
        }
      }
      pppplVar14 = (long ****)pppplStack_240[(long)pppppplVar15];
      if (pppplVar14 == (long ****)0x0) {
        *ppppplStack_1f0 = (long ****)ppppplStack_230;
        ppppplStack_230 = ppppplStack_1f0;
        pppplStack_240[(long)pppppplVar15] = (long ***)&ppppplStack_230;
        if ((long *****)*ppppplStack_1f0 != (long *****)0x0) {
          pppppplVar20 = (long ******)(*ppppplStack_1f0)[1];
          if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) == 0) {
            pppppplVar20 = (long ******)((ulong)pppppplVar20 & (long)unaff_x22 - 1U);
          }
          else if (unaff_x22 <= pppppplVar20) {
            uVar12 = 0;
            if (unaff_x22 != (long ******)0x0) {
              uVar12 = (ulong)pppppplVar20 / (ulong)unaff_x22;
            }
            pppppplVar20 = (long ******)((long)pppppplVar20 - uVar12 * (long)unaff_x22);
          }
          pppplStack_240[(long)pppppplVar20] = (long ***)ppppplStack_1f0;
        }
      }
      else {
        *ppppplStack_1f0 = (long ****)*pppplVar14;
        *pppplVar14 = (long ***)ppppplStack_1f0;
      }
      lStack_228 = lStack_228 + 1;
LAB_10a9f06f0:
      pppplVar13 = (long ****)*pppplVar13;
    } while (pppplVar13 != (long ****)0x0);
  }
  pppppplVar20 = (long ******)0x0;
  if ((long ******)ppppplStack_230 == (long ******)0x0) {
    pppppplVar15 = (long ******)&pppplStack_240;
    FUN_10a57f174();
  }
  else {
    unaff_x22 = &ppppplStack_210;
    pppppplVar20 = &ppppplStack_1f0;
    pppppplVar15 = (long ******)ppppplStack_230;
    do {
      ppppplVar11 = ppppplVar18 + 3;
      pppppplVar5 = pppppplVar15 + 2;
      FUN_10a6319a0();
      if (ppppplVar11 != (long *****)0x0) {
        if (*(char *)(pppppplVar15 + 0xc) == '\x01') {
          ppppplVar11 = pppppplVar15[4];
          ppppplStack_1e8 = ppppplStack_248;
          ppppplStack_1f0 = ppppplStack_250;
          if ((long ******)ppppplStack_248 != (long ******)0x0) {
            pppppplVar5 = (long ******)(ppppplStack_248 + 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
              if (bVar3) {
                *pppppplVar5 = (long *****)((long)*pppppplVar5 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          (*(code *)ppppplVar11)(&ppppplStack_1f0,pppppplVar15 + 4);
          if ((long ******)ppppplStack_1e8 != (long ******)0x0) {
            pppppplVar5 = (long ******)(ppppplStack_1e8 + 1);
            do {
              ppppplVar11 = *pppppplVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
              if (bVar3) {
                *pppppplVar5 = (long *****)((long)ppppplVar11 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
              pppppplVar16 = (long ******)ppppplStack_1e8;
            } while (cVar2 != '\0');
LAB_10a9f07d0:
            if (ppppplVar11 == (long *****)0x0) {
              (*(code *)(*pppppplVar16)[2])(pppppplVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
            }
          }
        }
        else if (*(char *)(pppppplVar15 + 0xc) == '\x02') {
          pppppplVar16 = pppppplVar15 + 4;
          FUN_10a688b40();
          ppppplVar11 = ppppplStack_248;
          if (pppppplVar16 == (long ******)0x0) {
            if (pppppplVar5 != (long ******)0x0) {
              pppplStack_1e0 = (long ****)pppppplVar15[4];
              pppplStack_1d8 = (long ****)pppppplVar15[5];
              if ((long *****)pppplStack_1d8 != (long *****)0x0) {
                ppppplVar10 = (long *****)(pppplStack_1d8 + 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
                  if (bVar3) {
                    *ppppplVar10 = (long ****)((long)*ppppplVar10 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppppplStack_200 = ppppplStack_250;
              ppppplStack_1f8 = ppppplStack_248;
              if ((long ******)ppppplStack_248 == (long ******)0x0) {
                ppppplStack_1c8 = (long *****)0x0;
              }
              else {
                pppppplVar16 = (long ******)(ppppplStack_248 + 1);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                  if (bVar3) {
                    *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                ppppplStack_1c8 = ppppplStack_248;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
                  if (bVar3) {
                    *pppppplVar16 = (long *****)((long)*pppppplVar16 + 1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              ppppplStack_1d0 = ppppplStack_250;
              ppppplStack_1e8 = (long *****)&PTR_FUN_110c377e0;
              ppppplStack_208 = (long *****)0x0;
              ppppplStack_210 = (long *****)0x0;
              ppppplStack_1f0 = (long *****)FUN_10a9fb4c4;
              FUN_10a4634ec(pppppplVar5,&ppppplStack_1f0);
              (*(code *)*ppppplStack_1e8)(&ppppplStack_1e8);
              if ((long ******)ppppplVar11 != (long ******)0x0) {
                pppppplVar5 = (long ******)(ppppplVar11 + 1);
                do {
                  ppppplVar10 = *pppppplVar5;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
                  if (bVar3) {
                    *pppppplVar5 = (long *****)((long)ppppplVar10 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (ppppplVar10 == (long *****)0x0) {
                  (*(code *)(*ppppplVar11)[2])(ppppplVar11);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar11);
                }
              }
              if ((long ******)ppppplStack_208 != (long ******)0x0) {
                pppppplVar5 = (long ******)(ppppplStack_208 + 1);
                do {
                  ppppplVar11 = *pppppplVar5;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppplVar5,0x10);
                  if (bVar3) {
                    *pppppplVar5 = (long *****)((long)ppppplVar11 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  pppppplVar16 = (long ******)ppppplStack_208;
                } while (cVar2 != '\0');
                goto LAB_10a9f07d0;
              }
            }
          }
          else {
            *pppppplVar16 =
                 (long *****)
                 CONCAT44((int)((ulong)*pppppplVar16 >> 0x20) + 1,(int)*pppppplVar16 + 1);
            FUN_10a9fb2c0(pppppplVar15[4],&ppppplStack_250);
            iVar4 = *(int *)((long)pppppplVar16 + 4) + -1;
            *(int *)((long)pppppplVar16 + 4) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)pppppplVar16 = 0;
            }
          }
        }
      }
      pppppplVar5 = (long ******)ppppplStack_248;
      pppppplVar15 = (long ******)*pppppplVar15;
    } while (pppppplVar15 != (long ******)0x0);
    pppppplVar15 = (long ******)&pppplStack_240;
    FUN_10a57f174();
    if (pppppplVar5 == (long ******)0x0) goto LAB_10a9f0930;
  }
  pppppplVar16 = pppppplVar5 + 1;
  do {
    ppppplVar18 = *pppppplVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppppplVar16,0x10);
    if (bVar3) {
      *pppppplVar16 = (long *****)((long)ppppplVar18 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppppplVar18 == (long *****)0x0) {
    (*(code *)(*pppppplVar5)[2])(pppppplVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppppplVar15 = pppppplVar5;
  }
LAB_10a9f0930:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return pppppplVar15;
  }
  ___stack_chk_fail();
  (*(code *)*ppppplStack_1e8)(pppppplVar20 + 1);
  FUN_10a9fb57c(unaff_x22 + 2);
  func_0x00010a004dac(&ppppplStack_210);
  FUN_10a57f174(&pppplStack_240);
  FUN_10a9fb57c(&ppppplStack_250);
  __Unwind_Resume();
  if (pppppplVar15[3] != (long *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (pppppplVar15[1] != (long *****)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return pppppplVar15;
}



/* Entry: 10a9f0408; end: 10a9f0a27;  */

undefined ** FUN_10a9f0408(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined ***pppuVar15;
  undefined ***unaff_x19;
  long lVar16;
  undefined ***unaff_x22;
  long *plVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined ***pppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(byte *)(param_1 + 0x3b0) = *(byte *)(param_1 + 0x3b0) & 0xfe;
  lVar16 = *(long *)(param_1 + 0x2d8);
  ppuVar5 = (undefined **)0x30;
  __Znwm();
  ppuVar5[1] = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  *ppuVar5 = (undefined *)&PTR_DAT_110c37808;
  ppuVar5[4] = (undefined *)0x0;
  ppuVar5[5] = (undefined *)0x0;
  ppuStack_120 = ppuVar5 + 3;
  *ppuStack_120 = (undefined *)&PTR_DAT_110bfb6b0;
  pppuStack_108 = (undefined ***)0x0;
  puStack_110 = (undefined *)0x0;
  lStack_f8 = 0;
  ppuStack_100 = (undefined **)0x0;
  fStack_f0 = *(float *)(lVar16 + 0x38);
  ppuStack_118 = ppuVar5;
  FUN_10a630ef4(&puStack_110,*(undefined8 *)(lVar16 + 0x20));
  plVar17 = *(long **)(lVar16 + 0x28);
  if (plVar17 != (long *)0x0) {
    do {
      unaff_x22 = pppuStack_108;
      uVar8 = plVar17[2];
      uVar12 = ((ulong)(uint)((int)uVar8 << 3) + 8 ^ uVar8 >> 0x20) * -0x622015f714c7d297;
      uVar12 = (uVar8 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      pppuVar19 = (undefined ***)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297);
      if (pppuStack_108 != (undefined ***)0x0) {
        puVar11 = (undefined *)((long)pppuStack_108 + -1);
        if (((ulong)pppuStack_108 & (ulong)puVar11) == 0) {
          unaff_x19 = (undefined ***)((ulong)pppuVar19 & (ulong)puVar11);
        }
        else {
          unaff_x19 = pppuVar19;
          if (pppuStack_108 <= pppuVar19) {
            uVar12 = 0;
            if (pppuStack_108 != (undefined ***)0x0) {
              uVar12 = (ulong)pppuVar19 / (ulong)pppuStack_108;
            }
            unaff_x19 = (undefined ***)((long)pppuVar19 - uVar12 * (long)pppuStack_108);
          }
        }
        plVar13 = *(long **)(puStack_110 + (long)unaff_x19 * 8);
        if (plVar13 != (long *)0x0) {
          do {
            while( true ) {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) goto LAB_10a9f057c;
              pppuVar15 = (undefined ***)plVar13[1];
              if (pppuVar15 != pppuVar19) break;
              if (plVar13[2] == uVar8) goto LAB_10a9f06f0;
            }
            if (((ulong)pppuStack_108 & (ulong)puVar11) == 0) {
              pppuVar15 = (undefined ***)((ulong)pppuVar15 & (ulong)puVar11);
            }
            else if (pppuStack_108 <= pppuVar15) {
              uVar12 = 0;
              if (pppuStack_108 != (undefined ***)0x0) {
                uVar12 = (ulong)pppuVar15 / (ulong)pppuStack_108;
              }
              pppuVar15 = (undefined ***)((long)pppuVar15 - uVar12 * (long)pppuStack_108);
            }
          } while (pppuVar15 == unaff_x19);
        }
      }
LAB_10a9f057c:
      ppuVar18 = (undefined **)0x68;
      __Znwm();
      puStack_b0 = (undefined *)0x0;
      *ppuVar18 = (undefined *)0x0;
      ppuVar18[1] = (undefined *)pppuVar19;
      lVar9 = plVar17[3];
      puVar11 = (undefined *)plVar17[2];
      ppuVar18[3] = (undefined *)plVar17[3];
      ppuVar18[2] = puVar11;
      if (lVar9 != 0) {
        plVar13 = (long *)(lVar9 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = *plVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_e0 = ppuVar18 + 4;
      *(undefined1 *)(ppuVar18 + 0xc) = 3;
      ppuStack_c0 = ppuVar18;
      ppuStack_b8 = &puStack_110;
      if ((char)plVar17[0xc] == '\0') {
        uVar7 = 0;
      }
      else {
        FUN_10a005398(&ppuStack_e0,plVar17 + 4);
        uVar7 = (undefined1)plVar17[0xc];
      }
      *(undefined1 *)(ppuVar18 + 0xc) = uVar7;
      puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,1);
      if ((unaff_x22 == (undefined ***)0x0) ||
         (fStack_f0 * (float)unaff_x22 < (float)(lStack_f8 + 1))) {
        uVar8 = 1;
        if ((undefined ***)0x2 < unaff_x22) {
          uVar8 = (ulong)(((ulong)unaff_x22 & (ulong)((long)unaff_x22 + -1)) != 0);
        }
        uVar8 = uVar8 | (long)unaff_x22 << 1;
        uVar12 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
        if (uVar8 <= uVar12) {
          uVar8 = uVar12;
        }
        FUN_10a630ef4(&puStack_110,uVar8);
        unaff_x22 = pppuStack_108;
        if (((ulong)pppuStack_108 & (ulong)((long)pppuStack_108 + -1)) == 0) {
          unaff_x19 = (undefined ***)((ulong)((long)pppuStack_108 + -1) & (ulong)pppuVar19);
        }
        else {
          unaff_x19 = pppuVar19;
          if (pppuStack_108 <= pppuVar19) {
            uVar8 = 0;
            if (pppuStack_108 != (undefined ***)0x0) {
              uVar8 = (ulong)pppuVar19 / (ulong)pppuStack_108;
            }
            unaff_x19 = (undefined ***)((long)pppuVar19 - uVar8 * (long)pppuStack_108);
          }
        }
      }
      puVar14 = *(undefined8 **)(puStack_110 + (long)unaff_x19 * 8);
      if (puVar14 == (undefined8 *)0x0) {
        *ppuStack_c0 = (undefined *)ppuStack_100;
        ppuStack_100 = ppuStack_c0;
        *(undefined ****)(puStack_110 + (long)unaff_x19 * 8) = &ppuStack_100;
        if (*ppuStack_c0 != (undefined *)0x0) {
          pppuVar19 = *(undefined ****)(*ppuStack_c0 + 8);
          if (((ulong)unaff_x22 & (ulong)((long)unaff_x22 + -1)) == 0) {
            pppuVar19 = (undefined ***)((ulong)pppuVar19 & (ulong)((long)unaff_x22 + -1));
          }
          else if (unaff_x22 <= pppuVar19) {
            uVar8 = 0;
            if (unaff_x22 != (undefined ***)0x0) {
              uVar8 = (ulong)pppuVar19 / (ulong)unaff_x22;
            }
            pppuVar19 = (undefined ***)((long)pppuVar19 - uVar8 * (long)unaff_x22);
          }
          *(undefined ***)(puStack_110 + (long)pppuVar19 * 8) = ppuStack_c0;
        }
      }
      else {
        *ppuStack_c0 = (undefined *)*puVar14;
        *puVar14 = ppuStack_c0;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a9f06f0:
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  pppuVar19 = (undefined ***)0x0;
  if (ppuStack_100 == (undefined **)0x0) {
    ppuVar18 = &puStack_110;
    FUN_10a57f174();
  }
  else {
    unaff_x22 = &ppuStack_e0;
    pppuVar19 = &ppuStack_c0;
    ppuVar18 = ppuStack_100;
    do {
      lVar9 = lVar16 + 0x18;
      ppuVar5 = ppuVar18 + 2;
      FUN_10a6319a0();
      if (lVar9 != 0) {
        if (*(char *)(ppuVar18 + 0xc) == '\x01') {
          pcVar10 = (code *)ppuVar18[4];
          ppuStack_b8 = ppuStack_118;
          ppuStack_c0 = ppuStack_120;
          if (ppuStack_118 != (undefined **)0x0) {
            ppuVar5 = ppuStack_118 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
              if (bVar2) {
                *ppuVar5 = *ppuVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          (*pcVar10)(&ppuStack_c0,ppuVar18 + 4);
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar5 = ppuStack_b8 + 1;
            do {
              puVar11 = *ppuVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
              if (bVar2) {
                *ppuVar5 = puVar11 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              ppuVar6 = ppuStack_b8;
            } while (cVar1 != '\0');
LAB_10a9f07d0:
            if (puVar11 == (undefined *)0x0) {
              (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
            }
          }
        }
        else if (*(char *)(ppuVar18 + 0xc) == '\x02') {
          ppuVar6 = ppuVar18 + 4;
          FUN_10a688b40();
          ppuVar4 = ppuStack_118;
          if (ppuVar6 == (undefined **)0x0) {
            if (ppuVar5 != (undefined **)0x0) {
              puStack_b0 = ppuVar18[4];
              puStack_a8 = ppuVar18[5];
              if (puStack_a8 != (undefined *)0x0) {
                plVar17 = (long *)(puStack_a8 + 8);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar2) {
                    *plVar17 = *plVar17 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_d0 = ppuStack_120;
              ppuStack_c8 = ppuStack_118;
              if (ppuStack_118 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar6 = ppuStack_118 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                ppuStack_98 = ppuStack_118;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
                  if (bVar2) {
                    *ppuVar6 = *ppuVar6 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              ppuStack_a0 = ppuStack_120;
              ppuStack_b8 = &PTR_FUN_110c377e0;
              ppuStack_d8 = (undefined **)0x0;
              ppuStack_e0 = (undefined **)0x0;
              ppuStack_c0 = (undefined **)FUN_10a9fb4c4;
              FUN_10a4634ec(ppuVar5,&ppuStack_c0);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar4 != (undefined **)0x0) {
                ppuVar5 = ppuVar4 + 1;
                do {
                  puVar11 = *ppuVar5;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                  if (bVar2) {
                    *ppuVar5 = puVar11 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (puVar11 == (undefined *)0x0) {
                  (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
                }
              }
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar5 = ppuStack_d8 + 1;
                do {
                  puVar11 = *ppuVar5;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
                  if (bVar2) {
                    *ppuVar5 = puVar11 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  ppuVar6 = ppuStack_d8;
                } while (cVar1 != '\0');
                goto LAB_10a9f07d0;
              }
            }
          }
          else {
            *ppuVar6 = (undefined *)CONCAT44((int)((ulong)*ppuVar6 >> 0x20) + 1,(int)*ppuVar6 + 1);
            FUN_10a9fb2c0(ppuVar18[4],&ppuStack_120);
            iVar3 = *(int *)((long)ppuVar6 + 4) + -1;
            *(int *)((long)ppuVar6 + 4) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)ppuVar6 = 0;
            }
          }
        }
      }
      ppuVar5 = ppuStack_118;
      ppuVar18 = (undefined **)*ppuVar18;
    } while (ppuVar18 != (undefined **)0x0);
    ppuVar18 = &puStack_110;
    FUN_10a57f174();
    if (ppuVar5 == (undefined **)0x0) goto LAB_10a9f0930;
  }
  ppuVar6 = ppuVar5 + 1;
  do {
    puVar11 = *ppuVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
    if (bVar2) {
      *ppuVar6 = puVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar11 == (undefined *)0x0) {
    (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar18 = ppuVar5;
  }
LAB_10a9f0930:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar18;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(pppuVar19 + 1);
  FUN_10a9fb57c(unaff_x22 + 2);
  func_0x00010a004dac(&ppuStack_e0);
  FUN_10a57f174(&puStack_110);
  FUN_10a9fb57c(&ppuStack_120);
  __Unwind_Resume();
  if (ppuVar18[3] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppuVar18[1] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return ppuVar18;
}



/* Entry: 10a9f0a28; end: 10a9f0a5f;  */

long FUN_10a9f0a28(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a9f0a60; end: 10a9f2fe3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a9f0a60(code *******param_1,code ******param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  code *******pppppppcVar9;
  code ******ppppppcVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  code ******ppppppcVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  code *****pppppcVar19;
  code ****ppppcVar20;
  ulong uVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  code *******pppppppcVar24;
  code *******pppppppcVar25;
  code *******pppppppcVar26;
  byte bVar27;
  undefined4 uVar28;
  long lVar29;
  ulong uVar30;
  code *******pppppppcVar31;
  code *****pppppcVar32;
  code *******pppppppcVar33;
  ulong uVar34;
  code *******pppppppcVar35;
  undefined8 *puVar36;
  code *******pppppppcVar37;
  code ******ppppppcVar38;
  code *******unaff_x23;
  undefined8 *puVar39;
  code *******pppppppcVar40;
  code ******ppppppcVar41;
  code *******unaff_x28;
  code *******pppppppcStack_360;
  code *******pppppppcStack_358;
  code *******pppppppcStack_330;
  code *******pppppppcStack_328;
  code *******pppppppcStack_320;
  code *******pppppppcStack_318;
  code *******pppppppcStack_310;
  code *******pppppppcStack_308;
  code *******pppppppcStack_300;
  code *******pppppppcStack_2f8;
  code *******pppppppcStack_2f0;
  code *******pppppppcStack_2e8;
  code *******pppppppcStack_2e0;
  code *******pppppppcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  code *******pppppppcStack_290;
  code ******ppppppcStack_288;
  undefined4 *puStack_280;
  undefined1 *puStack_278;
  code *******pppppppcStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined1 uStack_251;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_21c;
  code *****pppppcStack_218;
  code *******pppppppcStack_210;
  long lStack_208;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1f0;
  undefined1 *puStack_1e8;
  code *******pppppppcStack_1e0;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  code ******ppppppcStack_1b0;
  code *******pppppppcStack_180;
  code *******pppppppcStack_178;
  code *******pppppppcStack_170;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  code *******pppppppcStack_130;
  code *******pppppppcStack_128;
  code *******pppppppcStack_100;
  code *******pppppppcStack_f8;
  code *******pppppppcStack_f0;
  code *******pppppppcStack_e8;
  float fStack_e0;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  code ******ppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a1c848c(param_3);
  FUN_10a1c6570(param_4);
  FUN_10a1c6570(param_4 + 0xb8);
  puStack_2a8 = (undefined8 *)0x0;
  puStack_2a0 = (undefined8 *)0x0;
  puStack_298 = (undefined8 *)0x0;
  ppuVar13 = &PTR_DAT_110c02120;
  ppppppcVar38 = param_2 + 0x1a9;
  FUN_10a5aeb74();
  pppppppcVar9 = (code *******)0xffffffffffffffff;
  lVar29 = 8;
  ppppppcVar15 = ppppppcVar38;
  do {
    ppppppcVar15 = (code ******)ppppppcVar15[1];
    pppppppcVar9 = (code *******)((long)pppppppcVar9 + 1);
    lVar29 = lVar29 + -8;
  } while (ppppppcVar15 != ppppppcVar38);
  if (pppppppcVar9 == (code *******)0x0) {
    pppppppcVar9 = (code *******)0x0;
    pppppppcStack_360 = (code *******)0x0;
    pppppppcStack_358 = (code *******)0x0;
LAB_10a9f0b34:
    ppppppcVar15 = (code ******)ppppppcVar38[1];
    pppppppcVar33 = pppppppcVar9;
    if (ppppppcVar15 != ppppppcVar38) {
      unaff_x28 = (code *******)0xccccccccccccccc;
      unaff_x23 = (code *******)0xcccccccccccccccd;
      pppppppcVar37 = pppppppcVar9;
      do {
        ppppppcVar41 = (code ******)ppppppcVar15[5];
        if (((ulong)ppppppcVar41[0x30] & 0x17) == 0) {
          pppppppcVar33 = pppppppcVar37 + 1;
          *pppppppcVar37 = ppppppcVar41;
          FUN_10a603a20(ppppppcVar41,param_3);
          ppppppcVar10 = ppppppcVar41;
          FUN_10a605dc0();
          pppppcVar19 = ppppppcVar41[0x88];
          for (pppppcVar32 = ppppppcVar41[0x87]; pppppcVar32 != pppppcVar19;
              pppppcVar32 = (code *****)((long)pppppcVar32 + 0x14)) {
            if (puStack_2a0 < puStack_298) {
              ppppcVar20 = *pppppcVar32;
              puStack_2a0[1] = pppppcVar32[1];
              *puStack_2a0 = ppppcVar20;
              *(int *)(puStack_2a0 + 2) = (int)ppppppcVar10;
              puVar12 = (undefined8 *)((long)puStack_2a0 + 0x14);
            }
            else {
              lVar29 = (long)puStack_2a0 - (long)puStack_2a8;
              pppppppcVar37 = (code *******)((lVar29 >> 2) * -0x3333333333333333 + 1);
              if ((code *******)0xccccccccccccccc < pppppppcVar37) {
                FUN_10a1ce1ec();
                goto LAB_10a9f2cc4;
              }
              lVar16 = (long)puStack_298 - (long)puStack_2a8 >> 2;
              pppppppcVar35 = (code *******)(lVar16 * -0x6666666666666666);
              if (pppppppcVar35 < pppppppcVar37 || (long)pppppppcVar35 - (long)pppppppcVar37 == 0) {
                pppppppcVar35 = pppppppcVar37;
              }
              if (0x666666666666665 < (ulong)(lVar16 * -0x3333333333333333)) {
                pppppppcVar35 = unaff_x28;
              }
              ppuVar11 = &puStack_2a8;
              FUN_10a1ce200();
              puVar39 = (undefined8 *)((long)ppuVar11 + lVar29);
              puVar36 = (undefined8 *)((long)ppuVar11 + (long)pppppppcVar35 * 0x14);
              ppppcVar20 = *pppppcVar32;
              puVar39[1] = pppppcVar32[1];
              *puVar39 = ppppcVar20;
              *(int *)(puVar39 + 2) = (int)ppppppcVar10;
              puVar12 = (undefined8 *)((long)puVar39 + 0x14);
              puVar39 = (undefined8 *)((long)puVar39 - ((long)puStack_2a0 - (long)puStack_2a8));
              _memcpy(puVar39);
              bVar4 = puStack_2a8 != (undefined8 *)0x0;
              puStack_2a8 = puVar39;
              puStack_298 = puVar36;
              if (bVar4) {
                puStack_2a0 = puVar12;
                __ZdlPv();
              }
            }
            puStack_2a0 = puVar12;
          }
        }
        else {
          FUN_10a6039c8(ppppppcVar41);
          pppppppcVar33 = pppppppcVar37;
        }
        ppppppcVar15 = (code ******)ppppppcVar15[1];
        pppppppcVar37 = pppppppcVar33;
      } while (ppppppcVar15 != ppppppcVar38);
    }
    FUN_10a1c8aac(param_3,&puStack_2a8);
    uVar17 = (long)pppppppcVar33 - (long)pppppppcVar9 >> 3;
    lVar29 = (long)pppppppcStack_358 - (long)pppppppcVar9;
    uVar30 = lVar29 >> 3;
    pppppppcVar37 = pppppppcVar9;
    if (uVar30 < uVar17) {
      uVar34 = uVar17 - uVar30;
      if ((ulong)((long)pppppppcStack_360 - (long)pppppppcStack_358 >> 3) < uVar34) {
        if (uVar17 >> 0x3d != 0) {
          FUN_10a9fb5d4();
          goto LAB_10a9f2cc4;
        }
        uVar21 = (long)pppppppcStack_360 - (long)pppppppcVar9 >> 2;
        if (uVar21 <= uVar17) {
          uVar21 = uVar17;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppppcStack_360 - (long)pppppppcVar9)) {
          uVar21 = 0x1fffffffffffffff;
        }
        FUN_10a9fb5e8();
        lVar16 = uVar21 + lVar29;
        _bzero(lVar16,uVar34 * 8);
        pppppppcVar33 = (code *******)(lVar16 + uVar34 * 8);
        pppppppcVar37 = (code *******)(lVar16 + uVar30 * -8);
        _memcpy(pppppppcVar37,pppppppcVar9,lVar29);
        if (pppppppcVar9 != (code *******)0x0) {
          __ZdlPv(pppppppcVar9);
        }
      }
      else {
        _bzero(pppppppcStack_358,uVar34 * 8);
        pppppppcVar33 = pppppppcStack_358 + uVar34;
      }
    }
    else {
      pppppppcVar33 =
           (code *******)((long)pppppppcVar9 + ((long)pppppppcVar33 - (long)pppppppcVar9));
      if (uVar30 <= uVar17) {
        pppppppcVar33 = pppppppcStack_358;
      }
    }
    pppppppcStack_b8 = (code *******)0x0;
    pppppppcStack_c0 = (code *******)0x0;
    ppppppcStack_a8 = (code ******)0x0;
    pppppppcStack_b0 = (code *******)0x0;
    pppppppcStack_a0 = (code *******)CONCAT44(pppppppcStack_a0._4_4_,0x3f800000);
    if ((long)pppppppcVar33 - (long)pppppppcVar37 != 0) {
      ppppppcVar38 = (code ******)0x0;
      pppppppcVar35 = (code *******)0x0;
      pppppppcVar9 = pppppppcVar37;
      do {
        ppppppcVar15 = (code ******)(*pppppppcVar9)[0x2d][0x31];
        do {
          ppppppcVar10 = ppppppcVar15;
          ppppppcVar41 = (code ******)(*pppppppcVar9)[0x2d];
          if (ppppppcVar10 == (code ******)0x0) break;
          ppppppcVar15 = (code ******)ppppppcVar10[0x31];
          ppppppcVar41 = ppppppcVar10;
        } while ((code ******)ppppppcVar10[0x31] != (code ******)0x0);
        uVar17 = ((ulong)(uint)((int)ppppppcVar41 << 3) + 8 ^ (ulong)ppppppcVar41 >> 0x20) *
                 -0x622015f714c7d297;
        uVar17 = ((ulong)ppppppcVar41 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
        pppppppcVar40 = (code *******)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
        if (pppppppcVar35 != (code *******)0x0) {
          pcVar18 = (code *)((long)pppppppcVar35 + -1);
          if (((ulong)pppppppcVar35 & (ulong)pcVar18) == 0) {
            unaff_x23 = (code *******)((ulong)pppppppcVar40 & (ulong)pcVar18);
          }
          else {
            unaff_x23 = pppppppcVar40;
            if (pppppppcVar35 <= pppppppcVar40) {
              uVar17 = 0;
              if (pppppppcVar35 != (code *******)0x0) {
                uVar17 = (ulong)pppppppcVar40 / (ulong)pppppppcVar35;
              }
              unaff_x23 = (code *******)((long)pppppppcVar40 - uVar17 * (long)pppppppcVar35);
            }
          }
          ppppppcVar15 = pppppppcStack_c0[(long)unaff_x23];
          if (ppppppcVar15 != (code ******)0x0) {
            do {
              while( true ) {
                ppppppcVar15 = (code ******)*ppppppcVar15;
                if (ppppppcVar15 == (code ******)0x0) goto LAB_10a9f0e68;
                pppppppcVar22 = (code *******)ppppppcVar15[1];
                if (pppppppcVar22 != pppppppcVar40) break;
                if ((code ******)ppppppcVar15[2] == ppppppcVar41) goto LAB_10a9f10ec;
              }
              if (((ulong)pppppppcVar35 & (ulong)pcVar18) == 0) {
                pppppppcVar22 = (code *******)((ulong)pppppppcVar22 & (ulong)pcVar18);
              }
              else if (pppppppcVar35 <= pppppppcVar22) {
                uVar17 = 0;
                if (pppppppcVar35 != (code *******)0x0) {
                  uVar17 = (ulong)pppppppcVar22 / (ulong)pppppppcVar35;
                }
                pppppppcVar22 = (code *******)((long)pppppppcVar22 - uVar17 * (long)pppppppcVar35);
              }
            } while (pppppppcVar22 == unaff_x23);
          }
        }
LAB_10a9f0e68:
        pppppppcVar22 = (code *******)0x18;
        __Znwm();
        *pppppppcVar22 = (code ******)0x0;
        pppppppcVar22[1] = (code ******)pppppppcVar40;
        pppppppcVar22[2] = ppppppcVar41;
        if ((pppppppcVar35 == (code *******)0x0) ||
           (pppppppcStack_a0._0_4_ * (float)pppppppcVar35 < (float)(code *)((long)ppppppcVar38 + 1))
           ) {
          uVar17 = 1;
          if ((code *******)0x2 < pppppppcVar35) {
            uVar17 = (ulong)(((ulong)pppppppcVar35 & (ulong)((long)pppppppcVar35 + -1)) != 0);
          }
          pppppppcVar25 = (code *******)(uVar17 | (long)pppppppcVar35 << 1);
          pppppppcVar24 =
               (code *******)
               (long)((float)(code *)((long)ppppppcVar38 + 1) / pppppppcStack_a0._0_4_);
          if (pppppppcVar25 <= pppppppcVar24) {
            pppppppcVar25 = pppppppcVar24;
          }
          pppppppcVar24 = pppppppcVar35;
          if ((code *)((long)pppppppcVar25 - 1U) == (code *)0x0) {
            pppppppcVar25 = (code *******)0x2;
          }
          else if (((ulong)pppppppcVar25 & (long)pppppppcVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pppppppcVar24 = pppppppcStack_b8;
          }
          pppppppcVar35 = pppppppcVar25;
          if (pppppppcVar24 < pppppppcVar25) {
LAB_10a9f0f08:
            if ((ulong)pppppppcVar35 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a9f2cc4;
            }
            pppppppcVar25 = (code *******)((long)pppppppcVar35 << 3);
            __Znwm();
            bVar4 = pppppppcStack_c0 != (code *******)0x0;
            pppppppcStack_c0 = pppppppcVar25;
            if (bVar4) {
              __ZdlPv();
            }
            pppppppcVar25 = (code *******)0x0;
            do {
              pppppppcStack_c0[(long)pppppppcVar25] = (code ******)0x0;
              pppppppcVar25 = (code *******)((long)pppppppcVar25 + 1);
            } while (pppppppcVar35 != pppppppcVar25);
            pppppppcStack_b8 = pppppppcVar35;
            if (pppppppcStack_b0 != (code *******)0x0) {
              pppppppcVar25 = (code *******)pppppppcStack_b0[1];
              uVar17 = (long)pppppppcVar35 - 1;
              if (((ulong)pppppppcVar35 & uVar17) == 0) {
                pppppppcVar25 = (code *******)((ulong)pppppppcVar25 & uVar17);
              }
              else if (pppppppcVar35 <= pppppppcVar25) {
                uVar30 = 0;
                if (pppppppcVar35 != (code *******)0x0) {
                  uVar30 = (ulong)pppppppcVar25 / (ulong)pppppppcVar35;
                }
                pppppppcVar25 = (code *******)((long)pppppppcVar25 - uVar30 * (long)pppppppcVar35);
              }
              pppppppcStack_c0[(long)pppppppcVar25] = (code ******)&pppppppcStack_b0;
              pppppppcVar24 = (code *******)*pppppppcStack_b0;
              pppppppcVar31 = pppppppcStack_b0;
              while (pppppppcVar24 != (code *******)0x0) {
                pppppppcVar26 = (code *******)pppppppcVar24[1];
                if (((ulong)pppppppcVar35 & uVar17) == 0) {
                  pppppppcVar26 = (code *******)((ulong)pppppppcVar26 & uVar17);
                }
                else if (pppppppcVar35 <= pppppppcVar26) {
                  uVar30 = 0;
                  if (pppppppcVar35 != (code *******)0x0) {
                    uVar30 = (ulong)pppppppcVar26 / (ulong)pppppppcVar35;
                  }
                  pppppppcVar26 = (code *******)((long)pppppppcVar26 - uVar30 * (long)pppppppcVar35)
                  ;
                }
                pppppppcVar23 = pppppppcVar24;
                if (pppppppcVar26 != pppppppcVar25) {
                  if (pppppppcStack_c0[(long)pppppppcVar26] == (code ******)0x0) {
                    pppppppcStack_c0[(long)pppppppcVar26] = (code ******)pppppppcVar31;
                    pppppppcVar25 = pppppppcVar26;
                  }
                  else {
                    *pppppppcVar31 = *pppppppcVar24;
                    *pppppppcVar24 = (code ******)*pppppppcStack_c0[(long)pppppppcVar26];
                    *pppppppcStack_c0[(long)pppppppcVar26] = (code *****)pppppppcVar24;
                    pppppppcVar23 = pppppppcVar31;
                  }
                }
                pppppppcVar31 = pppppppcVar23;
                pppppppcVar24 = (code *******)*pppppppcVar23;
              }
            }
          }
          else {
            pppppppcVar35 = pppppppcVar24;
            if (pppppppcVar25 < pppppppcVar24) {
              pppppppcVar35 = (code *******)(long)((float)ppppppcStack_a8 / pppppppcStack_a0._0_4_);
              if ((pppppppcVar24 < (code *******)0x3) ||
                 (((ulong)pppppppcVar24 & (ulong)((long)pppppppcVar24 + -1)) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((code *******)0x1 < pppppppcVar35) {
                pppppppcVar35 =
                     (code *******)(1L << (-LZCOUNT((code *)((long)pppppppcVar35 + -1)) & 0x3fU));
              }
              pppppppcVar31 = pppppppcStack_c0;
              if (pppppppcVar25 <= pppppppcVar35) {
                pppppppcVar25 = pppppppcVar35;
              }
              pppppppcVar35 = pppppppcStack_b8;
              if (pppppppcVar25 < pppppppcVar24) {
                pppppppcVar35 = pppppppcVar25;
                if (pppppppcVar25 != (code *******)0x0) goto LAB_10a9f0f08;
                pppppppcStack_c0 = (code *******)0x0;
                if (pppppppcVar31 != (code *******)0x0) {
                  __ZdlPv();
                }
                pppppppcStack_b8 = (code *******)0x0;
                pppppppcVar35 = (code *******)0x0;
              }
            }
          }
          if (((ulong)pppppppcVar35 & (ulong)((long)pppppppcVar35 + -1)) == 0) {
            unaff_x23 = (code *******)((ulong)((long)pppppppcVar35 + -1) & (ulong)pppppppcVar40);
          }
          else {
            unaff_x23 = pppppppcVar40;
            if (pppppppcVar35 <= pppppppcVar40) {
              uVar17 = 0;
              if (pppppppcVar35 != (code *******)0x0) {
                uVar17 = (ulong)pppppppcVar40 / (ulong)pppppppcVar35;
              }
              unaff_x23 = (code *******)((long)pppppppcVar40 - uVar17 * (long)pppppppcVar35);
            }
          }
        }
        pppppppcVar40 = (code *******)pppppppcStack_c0[(long)unaff_x23];
        if (pppppppcVar40 == (code *******)0x0) {
          *pppppppcVar22 = (code ******)pppppppcStack_b0;
          pppppppcStack_c0[(long)unaff_x23] = (code ******)&pppppppcStack_b0;
          pppppppcStack_b0 = pppppppcVar22;
          if (*pppppppcVar22 != (code ******)0x0) {
            pppppppcVar40 = (code *******)(*pppppppcVar22)[1];
            if (((ulong)pppppppcVar35 & (ulong)((long)pppppppcVar35 + -1)) == 0) {
              pppppppcVar40 =
                   (code *******)((ulong)pppppppcVar40 & (ulong)((long)pppppppcVar35 + -1));
            }
            else if (pppppppcVar35 <= pppppppcVar40) {
              uVar17 = 0;
              if (pppppppcVar35 != (code *******)0x0) {
                uVar17 = (ulong)pppppppcVar40 / (ulong)pppppppcVar35;
              }
              pppppppcVar40 = (code *******)((long)pppppppcVar40 - uVar17 * (long)pppppppcVar35);
            }
            pppppppcVar40 = pppppppcStack_c0 + (long)pppppppcVar40;
            goto LAB_10a9f10dc;
          }
        }
        else {
          *pppppppcVar22 = *pppppppcVar40;
LAB_10a9f10dc:
          *pppppppcVar40 = (code ******)pppppppcVar22;
        }
        ppppppcVar38 = (code ******)((long)ppppppcStack_a8 + 1);
        ppppppcStack_a8 = ppppppcVar38;
LAB_10a9f10ec:
        pppppppcVar9 = pppppppcVar9 + 1;
        pppppppcVar40 = pppppppcStack_b0;
      } while (pppppppcVar9 != pppppppcVar33);
      for (; unaff_x28 = pppppppcVar33, pppppppcVar40 != (code *******)0x0;
          pppppppcVar40 = (code *******)*pppppppcVar40) {
        pppppppcStack_100 = (code *******)((ulong)pppppppcStack_100 & 0xffffffff00000000);
        FUN_10a9fb61c(&pppppppcStack_100,pppppppcVar40[2]);
      }
    }
    FUN_10a9fb6d0(&pppppppcStack_c0);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2b0 = 0x3f800000;
    pppppppcStack_2e8 = (code *******)0x0;
    pppppppcStack_2f0 = (code *******)0x0;
    pppppppcVar40 = param_1 + 6;
    pppppppcVar9 = (code *******)*pppppppcVar40;
    pppppppcVar35 = (code *******)param_1[7];
    if (pppppppcVar35 == (code *******)0x0) {
      pppppppcStack_2e0 = (code *******)0x0;
      pppppppcStack_2d8 = (code *******)0x0;
      *pppppppcVar40 = (code ******)0x0;
      param_1[7] = (code ******)0x0;
    }
    else {
      pppppppcVar22 = pppppppcVar35 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar22,0x10);
        if (bVar4) {
          *pppppppcVar22 = (code ******)((long)*pppppppcVar22 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppppppcVar22 = pppppppcVar35;
      pppppppcStack_2e0 = pppppppcVar9;
      pppppppcStack_2d8 = pppppppcVar35;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (pppppppcVar22 == (code *******)0x0) {
LAB_10a9f1230:
        pppppppcStack_2d8 = (code *******)0x0;
        pppppppcStack_2e0 = (code *******)0x0;
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar35);
      }
      else {
        pppppppcVar35 = pppppppcVar22 + 1;
        do {
          ppppppcVar38 = *pppppppcVar35;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar35,0x10);
          if (bVar4) {
            *pppppppcVar35 = (code ******)((long)ppppppcVar38 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppppcVar35 = pppppppcStack_2d8;
        if (ppppppcVar38 == (code ******)0x0) {
          (*(code *)(*pppppppcVar22)[2])(pppppppcVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar22);
          pppppppcVar35 = pppppppcStack_2d8;
        }
        if (pppppppcVar9 != (code *******)0x0) {
          pppppppcStack_2d8 = pppppppcVar35;
          if (((ulong)pppppppcVar9[0x30] & 0x17) == 0) goto LAB_10a9f124c;
          *(byte *)(pppppppcVar9 + 0x76) = *(byte *)(pppppppcVar9 + 0x76) & 0xfd;
        }
        pppppppcStack_2e0 = (code *******)0x0;
        pppppppcStack_2d8 = (code *******)0x0;
        if (pppppppcVar35 != (code *******)0x0) goto LAB_10a9f1230;
      }
      ppppppcVar38 = param_1[7];
      *pppppppcVar40 = (code ******)0x0;
      param_1[7] = (code ******)0x0;
      if (ppppppcVar38 != (code ******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
LAB_10a9f124c:
    pppppppcVar9 = (code *******)param_1[4];
    pppppppcVar35 = (code *******)param_1[5];
    if (pppppppcVar35 != (code *******)0x0) {
      pppppppcVar40 = pppppppcVar35 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
        if (bVar4) {
          *pppppppcVar40 = (code ******)((long)*pppppppcVar40 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    bVar4 = pppppppcStack_2e8 != (code *******)0x0;
    pppppppcStack_2f0 = pppppppcVar9;
    pppppppcStack_2e8 = pppppppcVar35;
    if (bVar4) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((pppppppcVar35 == (code *******)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), pppppppcVar35 == (code *******)0x0)) {
LAB_10a9f12e8:
      pppppppcVar9 = pppppppcStack_2e8;
      pppppppcStack_2f0 = (code *******)0x0;
      pppppppcStack_2e8 = (code *******)0x0;
      if (pppppppcVar9 != (code *******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      ppppppcVar38 = param_1[5];
      param_1[4] = (code ******)0x0;
      param_1[5] = (code ******)0x0;
      if (ppppppcVar38 != (code ******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      bVar4 = true;
      pppppppcVar9 = (code *******)0x0;
      pppppppcVar35 = (code *******)0x0;
    }
    else {
      pppppppcVar40 = pppppppcVar35 + 1;
      do {
        ppppppcVar38 = *pppppppcVar40;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
        if (bVar4) {
          *pppppppcVar40 = (code ******)((long)ppppppcVar38 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar38 == (code ******)0x0) {
        (*(code *)(*pppppppcVar35)[2])(pppppppcVar35);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar35);
        if (pppppppcVar9 != (code *******)0x0) goto LAB_10a9f12cc;
        goto LAB_10a9f12e8;
      }
      if (pppppppcVar9 == (code *******)0x0) goto LAB_10a9f12e8;
LAB_10a9f12cc:
      if (((ulong)pppppppcVar9[0x30] & 0x17) != 0) {
        *(byte *)(pppppppcVar9 + 0x76) = *(byte *)(pppppppcVar9 + 0x76) & 0xfe;
        goto LAB_10a9f12e8;
      }
      pppppppcVar9 = pppppppcStack_2f0;
      pppppppcVar35 = pppppppcStack_2e8;
      if (pppppppcStack_2e8 == (code *******)0x0) {
        bVar4 = true;
      }
      else {
        pppppppcVar40 = pppppppcStack_2e8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
          if (bVar4) {
            *pppppppcVar40 = (code ******)((long)*pppppppcVar40 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar4 = false;
      }
    }
    pppppppcVar22 = pppppppcStack_2d8;
    pppppppcVar40 = pppppppcStack_2e0;
    if (pppppppcStack_2d8 != (code *******)0x0) {
      pppppppcVar25 = pppppppcStack_2d8 + 2;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
        if (bVar6) {
          *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (!bVar4) {
      pppppppcVar25 = pppppppcVar35 + 2;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
        if (bVar6) {
          *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppcStack_300 = pppppppcStack_2e0;
    pppppppcStack_2f8 = pppppppcStack_2d8;
    if (pppppppcStack_2d8 != (code *******)0x0) {
      pppppppcVar25 = pppppppcStack_2d8 + 2;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
        if (bVar6) {
          *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar29 = (long)pppppppcVar33 - (long)pppppppcVar37 >> 3;
    pppppppcStack_310 = pppppppcVar9;
    pppppppcStack_308 = pppppppcVar35;
    if (*(int *)(param_1 + 3) == 0) {
      if (!bVar4) {
        pppppppcVar25 = pppppppcVar35 + 2;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
          if (bVar6) {
            *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppppppcStack_320 = pppppppcStack_2e0;
      pppppppcStack_318 = pppppppcStack_2d8;
      pppppppcStack_330 = pppppppcVar9;
      pppppppcStack_328 = pppppppcVar35;
      pppppppcStack_210 = pppppppcVar37;
      lStack_208 = lVar29;
      if (pppppppcStack_2d8 != (code *******)0x0) {
        pppppppcVar25 = pppppppcStack_2d8 + 2;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
          if (bVar6) {
            *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
          if (bVar6) {
            *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppppppcVar25 = pppppppcStack_2d8;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (pppppppcVar25 != (code *******)0x0) {
          pppppppcVar24 = pppppppcVar25 + 1;
          do {
            ppppppcVar38 = *pppppppcVar24;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
            if (bVar6) {
              *pppppppcVar24 = (code ******)((long)ppppppcVar38 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppcVar38 == (code ******)0x0) {
            (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
          }
          if ((pppppppcVar40 != (code *******)0x0) && (pppppppcVar40[0x8f] == (code ******)0x0)) {
            FUN_10a9efde8(pppppppcVar40);
            pppppppcVar25 = pppppppcStack_318;
            pppppppcStack_320 = (code *******)0x0;
            pppppppcStack_318 = (code *******)0x0;
            if (pppppppcVar25 != (code *******)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
        }
      }
      pppppcStack_218 = (code *****)0x0;
      uStack_21c = 0x7f7fffff;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_230 = 0x3f800000;
      ppppppcStack_288 = &pppppcStack_218;
      puStack_280 = &uStack_21c;
      puStack_278 = &uStack_251;
      pppppppcStack_270 = (code *******)&pppppppcStack_210;
      puStack_268 = &uStack_2d0;
      puStack_260 = &uStack_250;
      pppppppcStack_c0 = (code *******)FUN_10a9fb718;
      pppppppcStack_b8 = (code *******)&PTR_FUN_110c37848;
      pppppppcStack_b0 = (code *******)&pppppppcStack_290;
      pppppppcStack_290 = &ppppppcStack_288;
      FUN_10a2f0f14(*(long *)(param_3 + 0x18) + 0x50,&pppppppcStack_c0);
      (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
      pppppppcStack_100 = (code *******)FUN_10a9fbd28;
      pppppppcStack_f8 = (code *******)&PTR_FUN_110c37868;
      pppppppcStack_f0 = &ppppppcStack_288;
      FUN_10a6057d8(*(long *)(param_3 + 0x18) + 0x108,&pppppppcStack_100);
      (*(code *)*pppppppcStack_f8)(&pppppppcStack_f8);
      pppppppcStack_140 = (code *******)FUN_10a9fbe28;
      pppppppcStack_138 = (code *******)&PTR_FUN_110c37868;
      pppppppcStack_130 = &ppppppcStack_288;
      FUN_10a605850(*(long *)(param_3 + 0x18) + 0x1c0,&pppppppcStack_140);
      (*(code *)*pppppppcStack_138)(&pppppppcStack_138);
      pppppppcStack_180 = (code *******)0x10a9fbef4;
      pppppppcStack_178 = (code *******)&PTR_FUN_110c37868;
      pppppppcStack_170 = &ppppppcStack_288;
      FUN_10a2f01d8(*(long *)(param_3 + 0x18) + 0x278,&pppppppcStack_180);
      (*(code *)*pppppppcStack_178)(&pppppppcStack_178);
      uStack_1c0 = 0x10a9fbfc0;
      ppuStack_1b8 = &PTR_FUN_110c37868;
      ppppppcStack_1b0 = (code ******)&ppppppcStack_288;
      FUN_10a605760(*(long *)(param_3 + 0x18) + 0x610,&uStack_1c0);
      (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
      if (pppppcStack_218 != (code *****)0x0) {
        FUN_10a2d1b5c(&pppppppcStack_200);
        pppppppcVar25 = pppppppcStack_318;
        if (pppppppcStack_1f8 != (code *******)0x0) {
          pppppppcVar24 = pppppppcStack_1f8 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
            if (bVar6) {
              *pppppppcVar24 = (code ******)((long)*pppppppcVar24 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppppcStack_318 = pppppppcStack_1f8;
        pppppppcStack_320 = pppppppcStack_200;
        if (pppppppcVar25 != (code *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (pppppppcStack_1f8 != (code *******)0x0) {
          pppppppcVar25 = pppppppcStack_1f8 + 1;
          do {
            ppppppcVar38 = *pppppppcVar25;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
            if (bVar6) {
              *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppcVar38 == (code ******)0x0) {
            (*(code *)(*pppppppcStack_1f8)[2])(pppppppcStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcStack_1f8);
          }
        }
        pppppppcVar25 = pppppppcStack_328;
        if (pppppppcStack_318 != (code *******)0x0) {
          pppppppcVar24 = pppppppcStack_318 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
            if (bVar6) {
              *pppppppcVar24 = (code ******)((long)*pppppppcVar24 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppppcStack_328 = pppppppcStack_318;
        pppppppcStack_330 = pppppppcStack_320;
        if (pppppppcVar25 != (code *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      pppppppcStack_200 = (code *******)FUN_10a9fc08c;
      pppppppcStack_1f8 = (code *******)&PTR_FUN_110c37888;
      pppppppcStack_1f0 = (code *******)&pppppppcStack_330;
      puStack_1e8 = &uStack_251;
      pppppppcStack_1e0 = (code *******)&pppppppcStack_210;
      FUN_10a6056e8(*(long *)(param_3 + 0x18) + 0x558,&pppppppcStack_200);
      (*(code *)*pppppppcStack_1f8)(&pppppppcStack_1f8);
      FUN_10a9fc1a8(&uStack_250);
      if (pppppppcVar22 != (code *******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar22);
      }
      pppppppcVar31 = pppppppcStack_308;
      pppppppcVar24 = pppppppcStack_328;
      pppppppcVar25 = pppppppcStack_330;
      pppppppcStack_330 = (code *******)0x0;
      pppppppcStack_328 = (code *******)0x0;
      pppppppcStack_310 = pppppppcVar25;
      pppppppcStack_308 = pppppppcVar24;
      if (pppppppcVar31 != (code *******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      pppppppcVar31 = pppppppcStack_2f8;
      pppppppcStack_2f8 = pppppppcStack_318;
      pppppppcStack_300 = pppppppcStack_320;
      pppppppcStack_320 = (code *******)0x0;
      pppppppcStack_318 = (code *******)0x0;
      if ((pppppppcVar31 != (code *******)0x0) &&
         (__ZNSt3__119__shared_weak_count14__release_weakEv(),
         pppppppcStack_318 != (code *******)0x0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (pppppppcStack_328 == (code *******)0x0) goto LAB_10a9f1c48;
LAB_10a9f1c44:
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    else {
      pppppppcVar25 = pppppppcVar9;
      pppppppcVar24 = pppppppcVar35;
      if (*(int *)(param_1 + 3) == 1) {
        if (!bVar4) {
          pppppppcVar25 = pppppppcVar35 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
            if (bVar6) {
              *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppppcStack_f0 = pppppppcStack_2e0;
        pppppppcStack_e8 = pppppppcStack_2d8;
        if (pppppppcStack_2d8 != (code *******)0x0) {
          pppppppcVar25 = pppppppcStack_2d8 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
            if (bVar6) {
              *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppppcStack_180 =
             (code *******)CONCAT44(pppppppcStack_180._4_4_,*(int *)((long)param_1 + 0x44));
        pppppppcStack_140 = (code *******)&pppppppcStack_138;
        pppppppcStack_130 = (code *******)0x0;
        pppppppcStack_138 = (code *******)0x0;
        pppppppcStack_100 = pppppppcVar9;
        pppppppcStack_f8 = pppppppcVar35;
        if (*(int *)((long)param_1 + 0x44) != -1) {
          func_0x000107426fd8(&pppppppcStack_140,&pppppppcStack_180,&pppppppcStack_180);
        }
        pppppppcStack_c0 = (code *******)FUN_10a9fc1f0;
        pppppppcStack_b8 = (code *******)&PTR_FUN_110c378a8;
        pppppppcStack_b0 = (code *******)&pppppppcStack_140;
        FUN_10a2f0f14(*(long *)(param_3 + 0x18) + 0x50,&pppppppcStack_c0);
        (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
        if (pppppppcStack_130 == (code *******)0x1) {
          uVar28 = *(undefined4 *)((long)pppppppcStack_140 + 0x1c);
        }
        else {
          uVar28 = 0xffffffff;
        }
        func_0x000107c28478(&pppppppcStack_140,pppppppcStack_138);
        *(undefined4 *)((long)param_1 + 0x44) = uVar28;
        if (pppppppcVar22 != (code *******)0x0) {
          pppppppcVar25 = pppppppcVar22 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
            if (bVar6) {
              *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppppppcVar25 = pppppppcVar22;
          __ZNSt3__119__shared_weak_count4lockEv();
          if (pppppppcVar25 != (code *******)0x0) {
            pppppppcVar24 = pppppppcVar25 + 1;
            do {
              ppppppcVar38 = *pppppppcVar24;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
              if (bVar6) {
                *pppppppcVar24 = (code ******)((long)ppppppcVar38 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar38 == (code ******)0x0) {
              (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
            }
            if ((pppppppcVar40 != (code *******)0x0) && (*(int *)((long)param_1 + 0x44) == -1)) {
              FUN_10a9efde8(pppppppcVar40);
              pppppppcVar25 = pppppppcStack_e8;
              pppppppcStack_f0 = (code *******)0x0;
              pppppppcStack_e8 = (code *******)0x0;
              if (pppppppcVar25 != (code *******)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
          }
          pppppppcVar25 = pppppppcVar22;
          __ZNSt3__119__shared_weak_count4lockEv();
          if (pppppppcVar25 != (code *******)0x0) {
            pppppppcVar24 = pppppppcVar25 + 1;
            do {
              ppppppcVar38 = *pppppppcVar24;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
              if (bVar6) {
                *pppppppcVar24 = (code ******)((long)ppppppcVar38 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar38 == (code ******)0x0) {
              (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
            }
            if (pppppppcVar40 != (code *******)0x0) {
              ppppppcVar15 = pppppppcVar40[0x2d];
              for (ppppppcVar38 = (code ******)ppppppcVar15[0x2b];
                  ppppppcVar38 != ppppppcVar15 + 0x2a; ppppppcVar38 = (code ******)ppppppcVar38[1])
              {
                if (ppppppcVar38[2] != (code *****)0x0) {
                  pppppcVar32 = ppppppcVar38[2] + 0x16;
                  (*(code *)(*pppppcVar32)[3])(pppppcVar32,0xc257b61e5dea40f8);
                  if (pppppcVar32 != (code *****)0x0) {
                    bVar27 = *(byte *)((long)pppppcVar32 + 0x1f1) >> 2 & 1;
                    goto LAB_10a9f1948;
                  }
                }
              }
            }
          }
        }
        bVar27 = 0;
LAB_10a9f1948:
        pppppppcStack_140 = (code *******)0x3f0000003f000000;
        FUN_10a6014b4(&pppppppcStack_c0,&pppppppcStack_180,pppppppcVar37,lVar29,&pppppppcStack_140,
                      &uStack_2d0);
        pppppppcVar25 = pppppppcStack_b8;
        cVar3 = (char)pppppppcStack_b0;
        if ((pppppppcStack_e8 == (code *******)0x0) ||
           (pppppppcVar31 = pppppppcStack_e8, __ZNSt3__119__shared_weak_count4lockEv(),
           pppppppcVar24 = pppppppcStack_f0, pppppppcVar31 == (code *******)0x0)) {
          pppppppcVar24 = (code *******)0x0;
        }
        else {
          pppppppcVar26 = pppppppcVar31 + 1;
          do {
            ppppppcVar38 = *pppppppcVar26;
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar26,0x10);
            if (bVar6) {
              *pppppppcVar26 = (code ******)((long)ppppppcVar38 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppppcVar38 == (code ******)0x0) {
            (*(code *)(*pppppppcVar31)[2])(pppppppcVar31);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar31);
          }
        }
        if ((pppppppcStack_f8 == (code *******)0x0) ||
           (pppppppcVar26 = pppppppcStack_f8, __ZNSt3__119__shared_weak_count4lockEv(),
           pppppppcVar31 = pppppppcStack_100, pppppppcVar26 == (code *******)0x0)) {
          if ((pppppppcVar24 == (code *******)0x0 & bVar27) == 0) goto LAB_10a9f1a48;
        }
        else {
          pppppppcVar23 = pppppppcVar26 + 1;
          do {
            ppppppcVar38 = *pppppppcVar23;
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
            if (bVar6) {
              *pppppppcVar23 = (code ******)((long)ppppppcVar38 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppppcVar38 == (code ******)0x0) {
            (*(code *)(*pppppppcVar26)[2])(pppppppcVar26);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar26);
          }
          unaff_x28 = pppppppcVar31;
          if ((pppppppcVar24 == (code *******)0x0 & bVar27) == 0) {
            if (pppppppcVar31 != (code *******)0x0) {
              FUN_10a9f0408(pppppppcVar31);
            }
LAB_10a9f1a48:
            if ((cVar3 == '\0') || (pppppppcVar25 == (code *******)0x0)) {
              pppppppcStack_138 = (code *******)0x0;
              pppppppcStack_140 = (code *******)0x0;
            }
            else {
              FUN_10a2d1b5c(&pppppppcStack_140,pppppppcVar25);
              if (pppppppcStack_138 != (code *******)0x0) {
                pppppppcVar25 = pppppppcStack_138 + 2;
                do {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
                  if (bVar6) {
                    *pppppppcVar25 = (code ******)((long)*pppppppcVar25 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
            }
            bVar6 = pppppppcStack_f8 != (code *******)0x0;
            pppppppcStack_100 = pppppppcStack_140;
            pppppppcStack_f8 = pppppppcStack_138;
            if (bVar6) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppppppcVar25 = pppppppcStack_138;
            if (pppppppcStack_138 == (code *******)0x0) {
LAB_10a9f1ac0:
              if (bVar27 != 0) goto LAB_10a9f1ac4;
LAB_10a9f1ae8:
              if (pppppppcStack_f8 == (code *******)0x0) {
                pppppppcVar25 = (code *******)0x0;
                pppppppcVar24 = (code *******)0x0;
                if (pppppppcVar22 != (code *******)0x0) goto LAB_10a9f1b24;
LAB_10a9f1b70:
                bVar6 = pppppppcVar25 != (code *******)0x0;
              }
              else {
                pppppppcVar24 = pppppppcStack_f8;
                __ZNSt3__119__shared_weak_count4lockEv();
                pppppppcVar25 = (code *******)0x0;
                if (pppppppcVar24 != (code *******)0x0) {
                  pppppppcVar25 = pppppppcStack_100;
                }
                if (pppppppcVar22 == (code *******)0x0) goto LAB_10a9f1b70;
LAB_10a9f1b24:
                pppppppcVar31 = pppppppcVar22;
                __ZNSt3__119__shared_weak_count4lockEv();
                if (pppppppcVar31 == (code *******)0x0) goto LAB_10a9f1b70;
                bVar6 = pppppppcVar25 != pppppppcVar40;
                pppppppcVar25 = pppppppcVar31 + 1;
                do {
                  ppppppcVar38 = *pppppppcVar25;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
                  if (bVar7) {
                    *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar38 == (code ******)0x0) {
                  (*(code *)(*pppppppcVar31)[2])(pppppppcVar31);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar31);
                }
              }
              if (pppppppcVar24 != (code *******)0x0) {
                pppppppcVar25 = pppppppcVar24 + 1;
                do {
                  ppppppcVar38 = *pppppppcVar25;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
                  if (bVar7) {
                    *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar38 == (code ******)0x0) {
                  (*(code *)(*pppppppcVar24)[2])(pppppppcVar24);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
                }
              }
            }
            else {
              pppppppcVar24 = pppppppcStack_138 + 1;
              do {
                ppppppcVar38 = *pppppppcVar24;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
                if (bVar6) {
                  *pppppppcVar24 = (code ******)((long)ppppppcVar38 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppppcVar38 != (code ******)0x0) goto LAB_10a9f1ac0;
              (*(code *)(*pppppppcStack_138)[2])(pppppppcStack_138);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
              if (bVar27 == 0) goto LAB_10a9f1ae8;
LAB_10a9f1ac4:
              bVar6 = false;
            }
            pppppppcVar25 = pppppppcStack_e8;
            if (pppppppcVar22 != (code *******)0x0) {
              bVar6 = (bool)(pppppppcVar22[1] != (code ******)0xffffffffffffffff | bVar6);
            }
            if ((pppppppcStack_f8 != (code *******)0x0) &&
               ((bool)(pppppppcStack_f8[1] != (code ******)0xffffffffffffffff & bVar6) &&
                *(int *)((long)param_1 + 0x44) != -1)) {
              pppppppcVar24 = pppppppcStack_f8 + 2;
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
                if (bVar6) {
                  *pppppppcVar24 = (code ******)((long)*pppppppcVar24 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              pppppppcStack_f0 = pppppppcStack_100;
              pppppppcStack_e8 = pppppppcStack_f8;
              if (pppppppcVar25 != (code *******)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
          }
        }
        if (pppppppcVar22 != (code *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar22);
        }
        pppppppcVar24 = pppppppcStack_f8;
        pppppppcVar25 = pppppppcStack_100;
        pppppppcVar31 = pppppppcStack_308;
        pppppppcStack_310 = pppppppcStack_100;
        pppppppcStack_308 = pppppppcStack_f8;
        if (pppppppcVar31 != (code *******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        pppppppcVar31 = pppppppcStack_2f8;
        pppppppcStack_2f8 = pppppppcStack_e8;
        pppppppcStack_300 = pppppppcStack_f0;
        if (pppppppcVar31 != (code *******)0x0) goto LAB_10a9f1c44;
      }
    }
LAB_10a9f1c48:
    if (pppppppcVar24 == (code *******)0x0) {
      pppppppcVar31 = (code *******)0x0;
      if (!bVar4) goto LAB_10a9f1c70;
LAB_10a9f1cbc:
      bVar6 = pppppppcVar31 == (code *******)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      pppppppcVar31 = (code *******)0x0;
      if (pppppppcVar24 != (code *******)0x0) {
        pppppppcVar31 = pppppppcVar25;
      }
      if (bVar4) goto LAB_10a9f1cbc;
LAB_10a9f1c70:
      pppppppcVar25 = pppppppcVar35;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (pppppppcVar25 == (code *******)0x0) goto LAB_10a9f1cbc;
      bVar6 = pppppppcVar31 == pppppppcVar9;
      pppppppcVar31 = pppppppcVar25 + 1;
      do {
        ppppppcVar38 = *pppppppcVar31;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
        if (bVar7) {
          *pppppppcVar31 = (code ******)((long)ppppppcVar38 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar38 == (code ******)0x0) {
        (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
      }
    }
    if (pppppppcVar24 != (code *******)0x0) {
      pppppppcVar25 = pppppppcVar24 + 1;
      do {
        ppppppcVar38 = *pppppppcVar25;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
        if (bVar7) {
          *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar38 == (code ******)0x0) {
        (*(code *)(*pppppppcVar24)[2])(pppppppcVar24);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
      }
    }
    if (pppppppcStack_2f8 == (code *******)0x0) {
      pppppppcVar25 = (code *******)0x0;
      pppppppcVar24 = (code *******)0x0;
      if (pppppppcVar22 != (code *******)0x0) goto LAB_10a9f1d28;
LAB_10a9f1d78:
      bVar7 = pppppppcVar25 == (code *******)0x0;
    }
    else {
      pppppppcVar24 = pppppppcStack_2f8;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppppppcVar25 = (code *******)0x0;
      if (pppppppcVar24 != (code *******)0x0) {
        pppppppcVar25 = pppppppcStack_300;
      }
      if (pppppppcVar22 == (code *******)0x0) goto LAB_10a9f1d78;
LAB_10a9f1d28:
      pppppppcVar31 = pppppppcVar22;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (pppppppcVar31 == (code *******)0x0) goto LAB_10a9f1d78;
      bVar7 = pppppppcVar25 == pppppppcVar40;
      pppppppcVar25 = pppppppcVar31 + 1;
      do {
        ppppppcVar38 = *pppppppcVar25;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
        if (bVar8) {
          *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar38 == (code ******)0x0) {
        (*(code *)(*pppppppcVar31)[2])(pppppppcVar31);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar31);
      }
    }
    if (pppppppcVar24 != (code *******)0x0) {
      pppppppcVar25 = pppppppcVar24 + 1;
      do {
        ppppppcVar38 = *pppppppcVar25;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
        if (bVar8) {
          *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppppcVar38 == (code ******)0x0) {
        (*(code *)(*pppppppcVar24)[2])(pppppppcVar24);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
      }
    }
    pppppppcStack_140 = (code *******)((ulong)pppppppcStack_140 & 0xffffffff00000000);
    if ((long)pppppppcVar33 - (long)pppppppcVar37 != 0) {
      uVar17 = 0;
      do {
        pppppppcVar40 = (code *******)pppppppcVar37[uVar17];
        if ((*(ushort *)(pppppppcVar40 + 0x30) >> 4 & 1) == 0) {
          if ((pppppppcStack_2f8 == (code *******)0x0) ||
             (pppppppcVar25 = pppppppcStack_2f8, __ZNSt3__119__shared_weak_count4lockEv(),
             pppppppcVar25 == (code *******)0x0)) {
            bVar8 = false;
          }
          else {
            bVar8 = pppppppcVar40 == pppppppcStack_300;
            pppppppcVar24 = pppppppcVar25 + 1;
            do {
              ppppppcVar38 = *pppppppcVar24;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
              if (bVar2) {
                *pppppppcVar24 = (code ******)((long)ppppppcVar38 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar38 == (code ******)0x0) {
              (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
            }
          }
          if ((pppppppcStack_308 == (code *******)0x0) ||
             (pppppppcVar25 = pppppppcStack_308, __ZNSt3__119__shared_weak_count4lockEv(),
             pppppppcVar25 == (code *******)0x0)) {
            unaff_x28 = (code *******)0x0;
          }
          else {
            unaff_x28 = (code *******)(ulong)(pppppppcVar40 == pppppppcStack_310);
            pppppppcVar24 = pppppppcVar25 + 1;
            do {
              ppppppcVar38 = *pppppppcVar24;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
              if (bVar2) {
                *pppppppcVar24 = (code ******)((long)ppppppcVar38 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar38 == (code ******)0x0) {
              (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
            }
          }
          pppppppcStack_f8 = (code *******)pppppppcVar40[9];
          pppppppcStack_100 = (code *******)pppppppcVar40[8];
          puVar12 = &uStack_2d0;
          func_0x00010925b970(puVar12,&pppppppcStack_140);
          if (((puVar12 != (undefined8 *)0x0) && (*(char *)((long)pppppppcVar40 + 0x3b1) != '\x01'))
             || ((bVar8 && (*(char *)((long)pppppppcVar40 + 0x3b1) == '\x01')))) {
            FUN_10a603d60(pppppppcVar40,param_3);
            if ((*(ushort *)(pppppppcVar40 + 0x30) >> 4 & 1) == 0) {
              pppppppcVar25 = (code *******)&pppppppcStack_100;
              FUN_10a357b94(param_1 + 9,pppppppcVar25,&pppppppcStack_100);
              if (((ulong)pppppppcVar25 & 1) != 0) {
                pppppppcStack_98 = pppppppcStack_f8;
                pppppppcStack_a0 = pppppppcStack_100;
                pppppppcStack_c0 = (code *******)0x10aa1293c;
                pppppppcStack_b8 = (code *******)&PTR_DAT_110c381c0;
                pppppppcStack_b0 = param_1;
                ppppppcStack_a8 = param_2;
                func_0x00010a108320(pppppppcVar40 + 0x7b,&pppppppcStack_c0);
                FUN_10a044790(&pppppppcStack_c0);
                (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
              }
            }
          }
          else {
            pppppppcVar25 = param_1 + 9;
            FUN_10a35a030(pppppppcVar25,&pppppppcStack_100);
            if ((pppppppcVar25 != (code *******)0x0) &&
               ((FUN_10a603d60(pppppppcVar40,param_3),
                (*(ushort *)(pppppppcVar40 + 0x30) >> 4 & 1) != 0 ||
                (pppppppcVar40[0x8f] == (code ******)0x0)))) {
              FUN_10a044790(pppppppcVar40 + 0x7b);
            }
          }
          if (((*(ushort *)(pppppppcVar40 + 0x30) >> 4 & 1) == 0) &&
             (*(char *)((long)pppppppcVar40 + 0x3b1) != '\x01' || (int)unaff_x28 != 0)) {
            FUN_10a6052c0(pppppppcVar40,param_3);
          }
        }
        else {
          FUN_10a044790(pppppppcVar40 + 0x7b);
        }
        uVar17 = (long)(int)pppppppcStack_140 + 1;
        pppppppcStack_140 = (code *******)CONCAT44(pppppppcStack_140._4_4_,(int)uVar17);
      } while (uVar17 < (ulong)((long)pppppppcVar33 - (long)pppppppcVar37 >> 3));
    }
    bVar8 = bVar7;
    if (pppppppcVar22 == (code *******)0x0) {
      bVar8 = true;
    }
    if ((!bVar8) && (pppppppcVar22[1] != (code ******)0xffffffffffffffff)) {
      ppppppcVar38 = param_1[7];
      param_1[6] = (code ******)0x0;
      param_1[7] = (code ******)0x0;
      if (ppppppcVar38 != (code ******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    if (!bVar6) {
      if ((!bVar4) && (pppppppcVar35[1] != (code ******)0xffffffffffffffff)) {
        pppppppcStack_c0 = (code *******)0x0;
        pppppppcVar33 = pppppppcVar35;
        __ZNSt3__119__shared_weak_count4lockEv();
        pppppppcVar25 = pppppppcVar9;
        if (pppppppcVar33 == (code *******)0x0) {
          pppppppcVar9 = (code *******)0x0;
          pppppppcVar25 = pppppppcStack_c0;
        }
        pppppppcStack_c0 = pppppppcVar25;
        pppppppcStack_b8 = pppppppcVar33;
        if (((*(ushort *)(pppppppcVar9 + 0x30) >> 4 & 1) == 0) &&
           (FUN_10a6055a8(pppppppcVar9,param_3), (*(ushort *)(pppppppcVar9 + 0x30) >> 4 & 1) == 0))
        {
          FUN_10a9f0408(pppppppcVar9);
        }
        if (pppppppcVar33 != (code *******)0x0) {
          pppppppcVar9 = pppppppcVar33 + 1;
          do {
            ppppppcVar38 = *pppppppcVar9;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
            if (bVar6) {
              *pppppppcVar9 = (code ******)((long)ppppppcVar38 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppcVar38 == (code ******)0x0) {
            (*(code *)(*pppppppcVar33)[2])(pppppppcVar33);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
          }
        }
        ppppppcVar38 = param_1[5];
        param_1[4] = (code ******)0x0;
        param_1[5] = (code ******)0x0;
        if (ppppppcVar38 != (code ******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if ((pppppppcStack_308 != (code *******)0x0) &&
         (pppppppcVar33 = pppppppcStack_308, __ZNSt3__119__shared_weak_count4lockEv(),
         pppppppcVar9 = pppppppcStack_310, pppppppcVar33 != (code *******)0x0)) {
        pppppppcVar25 = pppppppcVar33 + 1;
        do {
          ppppppcVar38 = *pppppppcVar25;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
          if (bVar6) {
            *pppppppcVar25 = (code ******)((long)ppppppcVar38 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppcVar38 == (code ******)0x0) {
          (*(code *)(*pppppppcVar33)[2])(pppppppcVar33);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
        }
        if ((pppppppcVar9 != (code *******)0x0) &&
           ((*(ushort *)(pppppppcVar9 + 0x30) >> 4 & 1) == 0)) {
          *(byte *)(pppppppcVar9 + 0x76) = *(byte *)(pppppppcVar9 + 0x76) | 1;
          ppppppcVar38 = pppppppcVar9[0x59];
          pppppppcVar9 = (code *******)0x30;
          __Znwm();
          pppppppcVar9[1] = (code ******)0x0;
          pppppppcVar9[2] = (code ******)0x0;
          *pppppppcVar9 = (code ******)&PTR_DAT_110c378f0;
          pppppppcVar9[4] = (code ******)0x0;
          pppppppcVar9[5] = (code ******)0x0;
          pppppppcStack_180 = pppppppcVar9 + 3;
          *pppppppcStack_180 = (code ******)&PTR_DAT_110bfb658;
          pppppppcStack_f8 = (code *******)0x0;
          pppppppcStack_100 = (code *******)0x0;
          pppppppcStack_e8 = (code *******)0x0;
          pppppppcStack_f0 = (code *******)0x0;
          fStack_e0 = *(float *)(ppppppcVar38 + 7);
          pppppppcStack_178 = pppppppcVar9;
          FUN_10a62ff18(&pppppppcStack_100,ppppppcVar38[4]);
          pppppcVar32 = ppppppcVar38[5];
          if (pppppcVar32 != (code *****)0x0) {
            unaff_x28 = (code *******)&pppppppcStack_100;
            do {
              pppppppcVar33 = pppppppcStack_f8;
              pppppcVar19 = (code *****)pppppcVar32[2];
              uVar17 = ((ulong)(uint)((int)pppppcVar19 << 3) + 8 ^ (ulong)pppppcVar19 >> 0x20) *
                       -0x622015f714c7d297;
              uVar17 = ((ulong)pppppcVar19 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
              pppppppcVar25 = (code *******)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
              if (pppppppcStack_f8 != (code *******)0x0) {
                uVar17 = (long)pppppppcStack_f8 - 1;
                if (((ulong)pppppppcStack_f8 & uVar17) == 0) {
                  pppppppcVar40 = (code *******)((ulong)pppppppcVar25 & uVar17);
                }
                else {
                  pppppppcVar40 = pppppppcVar25;
                  if (pppppppcStack_f8 <= pppppppcVar25) {
                    uVar30 = 0;
                    if (pppppppcStack_f8 != (code *******)0x0) {
                      uVar30 = (ulong)pppppppcVar25 / (ulong)pppppppcStack_f8;
                    }
                    pppppppcVar40 =
                         (code *******)((long)pppppppcVar25 - uVar30 * (long)pppppppcStack_f8);
                  }
                }
                ppppppcVar15 = pppppppcStack_100[(long)pppppppcVar40];
                if (ppppppcVar15 != (code ******)0x0) {
                  do {
                    while( true ) {
                      ppppppcVar15 = (code ******)*ppppppcVar15;
                      if (ppppppcVar15 == (code ******)0x0) goto LAB_10a9f2244;
                      pppppppcVar24 = (code *******)ppppppcVar15[1];
                      if (pppppppcVar24 != pppppppcVar25) break;
                      if (ppppppcVar15[2] == pppppcVar19) goto LAB_10a9f23bc;
                    }
                    if (((ulong)pppppppcStack_f8 & uVar17) == 0) {
                      pppppppcVar24 = (code *******)((ulong)pppppppcVar24 & uVar17);
                    }
                    else if (pppppppcStack_f8 <= pppppppcVar24) {
                      uVar30 = 0;
                      if (pppppppcStack_f8 != (code *******)0x0) {
                        uVar30 = (ulong)pppppppcVar24 / (ulong)pppppppcStack_f8;
                      }
                      pppppppcVar24 =
                           (code *******)((long)pppppppcVar24 - uVar30 * (long)pppppppcStack_f8);
                    }
                  } while (pppppppcVar24 == pppppppcVar40);
                }
              }
LAB_10a9f2244:
              pppppppcVar24 = (code *******)0x68;
              __Znwm();
              pppppppcStack_b0 = (code *******)0x0;
              *pppppppcVar24 = (code ******)0x0;
              pppppppcVar24[1] = (code ******)pppppppcVar25;
              ppppcVar20 = pppppcVar32[3];
              ppppppcVar15 = (code ******)pppppcVar32[2];
              pppppppcVar24[3] = (code ******)pppppcVar32[3];
              pppppppcVar24[2] = ppppppcVar15;
              if (ppppcVar20 != (code ****)0x0) {
                ppppcVar20 = ppppcVar20 + 1;
                do {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppcVar20,0x10);
                  if (bVar6) {
                    *ppppcVar20 = (code ***)((long)*ppppcVar20 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              pppppppcStack_140 = pppppppcVar24 + 4;
              *(undefined1 *)(pppppppcVar24 + 0xc) = 3;
              pppppppcStack_c0 = pppppppcVar24;
              pppppppcStack_b8 = unaff_x28;
              if (*(char *)(pppppcVar32 + 0xc) == '\0') {
                uVar14 = 0;
              }
              else {
                FUN_10a005398(&pppppppcStack_140,pppppcVar32 + 4);
                uVar14 = *(undefined1 *)(pppppcVar32 + 0xc);
              }
              *(undefined1 *)(pppppppcVar24 + 0xc) = uVar14;
              pppppppcStack_b0 = (code *******)CONCAT71(pppppppcStack_b0._1_7_,1);
              if ((pppppppcVar33 == (code *******)0x0) ||
                 (fStack_e0 * (float)pppppppcVar33 < (float)((long)pppppppcStack_e8 + 1))) {
                uVar17 = 1;
                if ((code *******)0x2 < pppppppcVar33) {
                  uVar17 = (ulong)(((ulong)pppppppcVar33 & (long)pppppppcVar33 - 1U) != 0);
                }
                uVar17 = uVar17 | (long)pppppppcVar33 << 1;
                uVar30 = (ulong)((float)((long)pppppppcStack_e8 + 1) / fStack_e0);
                if (uVar17 <= uVar30) {
                  uVar17 = uVar30;
                }
                FUN_10a62ff18(&pppppppcStack_100,uVar17);
                pppppppcVar33 = pppppppcStack_f8;
                if (((ulong)pppppppcStack_f8 & (long)pppppppcStack_f8 - 1U) == 0) {
                  pppppppcVar40 = (code *******)((long)pppppppcStack_f8 - 1U & (ulong)pppppppcVar25)
                  ;
                }
                else {
                  pppppppcVar40 = pppppppcVar25;
                  if (pppppppcStack_f8 <= pppppppcVar25) {
                    uVar17 = 0;
                    if (pppppppcStack_f8 != (code *******)0x0) {
                      uVar17 = (ulong)pppppppcVar25 / (ulong)pppppppcStack_f8;
                    }
                    pppppppcVar40 =
                         (code *******)((long)pppppppcVar25 - uVar17 * (long)pppppppcStack_f8);
                  }
                }
              }
              ppppppcVar15 = pppppppcStack_100[(long)pppppppcVar40];
              if (ppppppcVar15 == (code ******)0x0) {
                *pppppppcStack_c0 = (code ******)pppppppcStack_f0;
                pppppppcStack_f0 = pppppppcStack_c0;
                pppppppcStack_100[(long)pppppppcVar40] = (code ******)&pppppppcStack_f0;
                if (*pppppppcStack_c0 != (code ******)0x0) {
                  pppppppcVar25 = (code *******)(*pppppppcStack_c0)[1];
                  if (((ulong)pppppppcVar33 & (ulong)((long)pppppppcVar33 + -1)) == 0) {
                    pppppppcVar25 =
                         (code *******)((ulong)pppppppcVar25 & (ulong)((long)pppppppcVar33 + -1));
                  }
                  else if (pppppppcVar33 <= pppppppcVar25) {
                    uVar17 = 0;
                    if (pppppppcVar33 != (code *******)0x0) {
                      uVar17 = (ulong)pppppppcVar25 / (ulong)pppppppcVar33;
                    }
                    pppppppcVar25 =
                         (code *******)((long)pppppppcVar25 - uVar17 * (long)pppppppcVar33);
                  }
                  pppppppcStack_100[(long)pppppppcVar25] = (code ******)pppppppcStack_c0;
                }
              }
              else {
                *pppppppcStack_c0 = (code ******)*ppppppcVar15;
                *ppppppcVar15 = (code *****)pppppppcStack_c0;
              }
              pppppppcStack_e8 = (code *******)((long)pppppppcStack_e8 + 1);
LAB_10a9f23bc:
              pppppcVar32 = (code *****)*pppppcVar32;
            } while (pppppcVar32 != (code *****)0x0);
          }
          pppppppcVar33 = pppppppcStack_f0;
          if (pppppppcStack_f0 == (code *******)0x0) {
            FUN_10a57ee48(&pppppppcStack_100);
LAB_10a9f25e0:
            pppppppcVar33 = pppppppcVar9 + 1;
            do {
              ppppppcVar38 = *pppppppcVar33;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar33,0x10);
              if (bVar6) {
                *pppppppcVar33 = (code ******)((long)ppppppcVar38 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar38 == (code ******)0x0) {
              (*(code *)(*pppppppcVar9)[2])(pppppppcVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar9);
            }
          }
          else {
            do {
              ppppppcVar15 = ppppppcVar38 + 3;
              pppppppcVar9 = pppppppcVar33 + 2;
              FUN_10a6309c4();
              if (ppppppcVar15 != (code ******)0x0) {
                if (*(char *)(pppppppcVar33 + 0xc) == '\x01') {
                  ppppppcVar15 = pppppppcVar33[4];
                  pppppppcStack_b8 = pppppppcStack_178;
                  pppppppcStack_c0 = pppppppcStack_180;
                  if (pppppppcStack_178 != (code *******)0x0) {
                    pppppppcVar9 = pppppppcStack_178 + 1;
                    do {
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                      if (bVar6) {
                        *pppppppcVar9 = (code ******)((long)*pppppppcVar9 + 1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  (*(code *)ppppppcVar15)(&pppppppcStack_c0,pppppppcVar33 + 4);
                  if (pppppppcStack_b8 != (code *******)0x0) {
                    pppppppcVar9 = pppppppcStack_b8 + 1;
                    do {
                      ppppppcVar15 = *pppppppcVar9;
                      cVar3 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                      if (bVar6) {
                        *pppppppcVar9 = (code ******)((long)ppppppcVar15 + -1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar40 = pppppppcStack_b8;
                    } while (cVar3 != '\0');
LAB_10a9f24a0:
                    if (ppppppcVar15 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar40)[2])(pppppppcVar40);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar40);
                    }
                  }
                }
                else if (*(char *)(pppppppcVar33 + 0xc) == '\x02') {
                  pppppppcVar40 = pppppppcVar33 + 4;
                  FUN_10a688b40();
                  pppppppcVar25 = pppppppcStack_178;
                  if (pppppppcVar40 == (code *******)0x0) {
                    if (pppppppcVar9 != (code *******)0x0) {
                      pppppppcStack_b0 = (code *******)pppppppcVar33[4];
                      ppppppcStack_a8 = pppppppcVar33[5];
                      if (ppppppcStack_a8 != (code ******)0x0) {
                        ppppppcVar15 = ppppppcStack_a8 + 1;
                        do {
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
                          if (bVar6) {
                            *ppppppcVar15 = (code *****)((long)*ppppppcVar15 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      pppppppcStack_130 = pppppppcStack_180;
                      pppppppcStack_128 = pppppppcStack_178;
                      if (pppppppcStack_178 == (code *******)0x0) {
                        pppppppcStack_98 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar40 = pppppppcStack_178 + 1;
                        do {
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
                          if (bVar6) {
                            *pppppppcVar40 = (code ******)((long)*pppppppcVar40 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        pppppppcStack_98 = pppppppcStack_178;
                        do {
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
                          if (bVar6) {
                            *pppppppcVar40 = (code ******)((long)*pppppppcVar40 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      pppppppcStack_a0 = pppppppcStack_180;
                      pppppppcStack_b8 = (code *******)&PTR_FUN_110c378c8;
                      pppppppcStack_138 = (code *******)0x0;
                      pppppppcStack_140 = (code *******)0x0;
                      pppppppcStack_c0 = (code *******)FUN_10a9fc4bc;
                      FUN_10a4634ec(pppppppcVar9,&pppppppcStack_c0);
                      (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                      if (pppppppcVar25 != (code *******)0x0) {
                        pppppppcVar9 = pppppppcVar25 + 1;
                        do {
                          ppppppcVar15 = *pppppppcVar9;
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                          if (bVar6) {
                            *pppppppcVar9 = (code ******)((long)ppppppcVar15 + -1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (ppppppcVar15 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                        }
                      }
                      if (pppppppcStack_138 != (code *******)0x0) {
                        pppppppcVar9 = pppppppcStack_138 + 1;
                        do {
                          ppppppcVar15 = *pppppppcVar9;
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                          if (bVar6) {
                            *pppppppcVar9 = (code ******)((long)ppppppcVar15 + -1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar40 = pppppppcStack_138;
                        } while (cVar3 != '\0');
                        goto LAB_10a9f24a0;
                      }
                    }
                  }
                  else {
                    *pppppppcVar40 =
                         (code ******)
                         CONCAT44((int)((ulong)*pppppppcVar40 >> 0x20) + 1,(int)*pppppppcVar40 + 1);
                    FUN_10a9fc2b8(pppppppcVar33[4],&pppppppcStack_180);
                    iVar5 = *(int *)((long)pppppppcVar40 + 4) + -1;
                    *(int *)((long)pppppppcVar40 + 4) = iVar5;
                    if (iVar5 == 0) {
                      *(undefined4 *)pppppppcVar40 = 0;
                    }
                  }
                }
              }
              pppppppcVar9 = pppppppcStack_178;
              pppppppcVar33 = (code *******)*pppppppcVar33;
            } while (pppppppcVar33 != (code *******)0x0);
            FUN_10a57ee48(&pppppppcStack_100);
            if (pppppppcVar9 != (code *******)0x0) goto LAB_10a9f25e0;
          }
          if (pppppppcStack_308 != (code *******)0x0) {
            pppppppcVar9 = pppppppcStack_308 + 2;
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
              if (bVar6) {
                *pppppppcVar9 = (code ******)((long)*pppppppcVar9 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppppcVar38 = param_1[5];
          param_1[5] = (code ******)pppppppcStack_308;
          param_1[4] = (code ******)pppppppcStack_310;
          if (ppppppcVar38 != (code ******)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
    }
    pppppppcVar9 = pppppppcStack_2f8;
    if (bVar7) {
LAB_10a9f264c:
      pppppppcVar9 = pppppppcStack_2f8;
      if (pppppppcStack_2f8 != (code *******)0x0) {
LAB_10a9f2b78:
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar9);
      }
    }
    else if (pppppppcStack_2f8 != (code *******)0x0) {
      pppppppcVar40 = pppppppcStack_2f8;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppppppcVar33 = pppppppcStack_300;
      if (pppppppcVar40 != (code *******)0x0) {
        pppppppcVar9 = pppppppcVar40 + 1;
        do {
          ppppppcVar38 = *pppppppcVar9;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
          if (bVar6) {
            *pppppppcVar9 = (code ******)((long)ppppppcVar38 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppppppcVar38 == (code ******)0x0) {
          (*(code *)(*pppppppcVar40)[2])(pppppppcVar40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar40);
        }
        if ((pppppppcVar33 == (code *******)0x0) ||
           ((*(ushort *)(pppppppcVar33 + 0x30) >> 4 & 1) != 0)) goto LAB_10a9f264c;
        *(byte *)(pppppppcVar33 + 0x76) = *(byte *)(pppppppcVar33 + 0x76) | 2;
        ppppppcVar38 = pppppppcVar33[0x5d];
        pppppppcVar9 = (code *******)0x30;
        __Znwm();
        pppppppcVar9[1] = (code ******)0x0;
        pppppppcVar9[2] = (code ******)0x0;
        *pppppppcVar9 = (code ******)&PTR_DAT_110c37958;
        pppppppcVar9[4] = (code ******)0x0;
        pppppppcVar9[5] = (code ******)0x0;
        pppppppcStack_180 = pppppppcVar9 + 3;
        *pppppppcStack_180 = (code ******)&PTR_DAT_110bfb708;
        pppppppcStack_f8 = (code *******)0x0;
        pppppppcStack_100 = (code *******)0x0;
        pppppppcStack_e8 = (code *******)0x0;
        pppppppcStack_f0 = (code *******)0x0;
        fStack_e0 = *(float *)(ppppppcVar38 + 7);
        pppppppcStack_178 = pppppppcVar9;
        FUN_10a631ed0(&pppppppcStack_100,ppppppcVar38[4]);
        pppppcVar32 = ppppppcVar38[5];
        if (pppppcVar32 != (code *****)0x0) {
          do {
            pppppppcVar33 = pppppppcStack_f8;
            pppppcVar19 = (code *****)pppppcVar32[2];
            uVar17 = ((ulong)(uint)((int)pppppcVar19 << 3) + 8 ^ (ulong)pppppcVar19 >> 0x20) *
                     -0x622015f714c7d297;
            uVar17 = ((ulong)pppppcVar19 >> 0x20 ^ uVar17 >> 0x2f ^ uVar17) * -0x622015f714c7d297;
            pppppppcVar40 = (code *******)((uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297);
            if (pppppppcStack_f8 != (code *******)0x0) {
              uVar17 = (long)pppppppcStack_f8 - 1;
              if (((ulong)pppppppcStack_f8 & uVar17) == 0) {
                unaff_x28 = (code *******)((ulong)pppppppcVar40 & uVar17);
              }
              else {
                unaff_x28 = pppppppcVar40;
                if (pppppppcStack_f8 <= pppppppcVar40) {
                  uVar30 = 0;
                  if (pppppppcStack_f8 != (code *******)0x0) {
                    uVar30 = (ulong)pppppppcVar40 / (ulong)pppppppcStack_f8;
                  }
                  unaff_x28 = (code *******)((long)pppppppcVar40 - uVar30 * (long)pppppppcStack_f8);
                }
              }
              ppppppcVar15 = pppppppcStack_100[(long)unaff_x28];
              if (ppppppcVar15 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar15 = (code ******)*ppppppcVar15;
                    if (ppppppcVar15 == (code ******)0x0) goto LAB_10a9f27ec;
                    pppppppcVar25 = (code *******)ppppppcVar15[1];
                    if (pppppppcVar25 != pppppppcVar40) break;
                    if (ppppppcVar15[2] == pppppcVar19) goto LAB_10a9f2964;
                  }
                  if (((ulong)pppppppcStack_f8 & uVar17) == 0) {
                    pppppppcVar25 = (code *******)((ulong)pppppppcVar25 & uVar17);
                  }
                  else if (pppppppcStack_f8 <= pppppppcVar25) {
                    uVar30 = 0;
                    if (pppppppcStack_f8 != (code *******)0x0) {
                      uVar30 = (ulong)pppppppcVar25 / (ulong)pppppppcStack_f8;
                    }
                    pppppppcVar25 =
                         (code *******)((long)pppppppcVar25 - uVar30 * (long)pppppppcStack_f8);
                  }
                } while (pppppppcVar25 == unaff_x28);
              }
            }
LAB_10a9f27ec:
            pppppppcVar25 = (code *******)0x68;
            __Znwm();
            pppppppcStack_b0 = (code *******)0x0;
            *pppppppcVar25 = (code ******)0x0;
            pppppppcVar25[1] = (code ******)pppppppcVar40;
            ppppcVar20 = pppppcVar32[3];
            ppppppcVar15 = (code ******)pppppcVar32[2];
            pppppppcVar25[3] = (code ******)pppppcVar32[3];
            pppppppcVar25[2] = ppppppcVar15;
            if (ppppcVar20 != (code ****)0x0) {
              ppppcVar20 = ppppcVar20 + 1;
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppcVar20,0x10);
                if (bVar6) {
                  *ppppcVar20 = (code ***)((long)*ppppcVar20 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppppppcStack_140 = pppppppcVar25 + 4;
            *(undefined1 *)(pppppppcVar25 + 0xc) = 3;
            pppppppcStack_c0 = pppppppcVar25;
            pppppppcStack_b8 = (code *******)&pppppppcStack_100;
            if (*(char *)(pppppcVar32 + 0xc) == '\0') {
              uVar14 = 0;
            }
            else {
              FUN_10a005398(&pppppppcStack_140,pppppcVar32 + 4);
              uVar14 = *(undefined1 *)(pppppcVar32 + 0xc);
            }
            *(undefined1 *)(pppppppcVar25 + 0xc) = uVar14;
            pppppppcStack_b0 = (code *******)CONCAT71(pppppppcStack_b0._1_7_,1);
            if ((pppppppcVar33 == (code *******)0x0) ||
               (fStack_e0 * (float)pppppppcVar33 < (float)((long)pppppppcStack_e8 + 1))) {
              uVar17 = 1;
              if ((code *******)0x2 < pppppppcVar33) {
                uVar17 = (ulong)(((ulong)pppppppcVar33 & (long)pppppppcVar33 - 1U) != 0);
              }
              uVar17 = uVar17 | (long)pppppppcVar33 << 1;
              uVar30 = (ulong)((float)((long)pppppppcStack_e8 + 1) / fStack_e0);
              if (uVar17 <= uVar30) {
                uVar17 = uVar30;
              }
              FUN_10a631ed0(&pppppppcStack_100,uVar17);
              pppppppcVar33 = pppppppcStack_f8;
              if (((ulong)pppppppcStack_f8 & (ulong)((long)pppppppcStack_f8 + -1)) == 0) {
                unaff_x28 = (code *******)
                            ((ulong)((long)pppppppcStack_f8 + -1) & (ulong)pppppppcVar40);
              }
              else {
                unaff_x28 = pppppppcVar40;
                if (pppppppcStack_f8 <= pppppppcVar40) {
                  uVar17 = 0;
                  if (pppppppcStack_f8 != (code *******)0x0) {
                    uVar17 = (ulong)pppppppcVar40 / (ulong)pppppppcStack_f8;
                  }
                  unaff_x28 = (code *******)((long)pppppppcVar40 - uVar17 * (long)pppppppcStack_f8);
                }
              }
            }
            ppppppcVar15 = pppppppcStack_100[(long)unaff_x28];
            if (ppppppcVar15 == (code ******)0x0) {
              *pppppppcStack_c0 = (code ******)pppppppcStack_f0;
              pppppppcStack_f0 = pppppppcStack_c0;
              pppppppcStack_100[(long)unaff_x28] = (code ******)&pppppppcStack_f0;
              if (*pppppppcStack_c0 != (code ******)0x0) {
                pppppppcVar40 = (code *******)(*pppppppcStack_c0)[1];
                if (((ulong)pppppppcVar33 & (ulong)((long)pppppppcVar33 + -1)) == 0) {
                  pppppppcVar40 =
                       (code *******)((ulong)pppppppcVar40 & (ulong)((long)pppppppcVar33 + -1));
                }
                else if (pppppppcVar33 <= pppppppcVar40) {
                  uVar17 = 0;
                  if (pppppppcVar33 != (code *******)0x0) {
                    uVar17 = (ulong)pppppppcVar40 / (ulong)pppppppcVar33;
                  }
                  pppppppcVar40 = (code *******)((long)pppppppcVar40 - uVar17 * (long)pppppppcVar33)
                  ;
                }
                pppppppcStack_100[(long)pppppppcVar40] = (code ******)pppppppcStack_c0;
              }
            }
            else {
              *pppppppcStack_c0 = (code ******)*ppppppcVar15;
              *ppppppcVar15 = (code *****)pppppppcStack_c0;
            }
            pppppppcStack_e8 = (code *******)((long)pppppppcStack_e8 + 1);
LAB_10a9f2964:
            pppppcVar32 = (code *****)*pppppcVar32;
          } while (pppppcVar32 != (code *****)0x0);
        }
        pppppppcVar33 = pppppppcStack_f0;
        if (pppppppcStack_f0 == (code *******)0x0) {
          FUN_10a57f4a0(&pppppppcStack_100);
LAB_10a9f2c30:
          pppppppcVar33 = pppppppcVar9 + 1;
          do {
            ppppppcVar38 = *pppppppcVar33;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar33,0x10);
            if (bVar6) {
              *pppppppcVar33 = (code ******)((long)ppppppcVar38 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppcVar38 == (code ******)0x0) {
            (*(code *)(*pppppppcVar9)[2])(pppppppcVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar9);
          }
        }
        else {
          do {
            ppppppcVar15 = ppppppcVar38 + 3;
            pppppppcVar9 = pppppppcVar33 + 2;
            FUN_10a63297c();
            if (ppppppcVar15 != (code ******)0x0) {
              if (*(char *)(pppppppcVar33 + 0xc) == '\x01') {
                ppppppcVar15 = pppppppcVar33[4];
                pppppppcStack_b8 = pppppppcStack_178;
                pppppppcStack_c0 = pppppppcStack_180;
                if (pppppppcStack_178 != (code *******)0x0) {
                  pppppppcVar9 = pppppppcStack_178 + 1;
                  do {
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                    if (bVar6) {
                      *pppppppcVar9 = (code ******)((long)*pppppppcVar9 + 1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                (*(code *)ppppppcVar15)(&pppppppcStack_c0,pppppppcVar33 + 4);
                if (pppppppcStack_b8 != (code *******)0x0) {
                  pppppppcVar9 = pppppppcStack_b8 + 1;
                  do {
                    ppppppcVar15 = *pppppppcVar9;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                    if (bVar6) {
                      *pppppppcVar9 = (code ******)((long)ppppppcVar15 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    pppppppcVar40 = pppppppcStack_b8;
                  } while (cVar3 != '\0');
LAB_10a9f2a48:
                  if (ppppppcVar15 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar40)[2])(pppppppcVar40);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar40);
                  }
                }
              }
              else if (*(char *)(pppppppcVar33 + 0xc) == '\x02') {
                pppppppcVar40 = pppppppcVar33 + 4;
                FUN_10a688b40();
                pppppppcVar25 = pppppppcStack_178;
                if (pppppppcVar40 == (code *******)0x0) {
                  if (pppppppcVar9 != (code *******)0x0) {
                    pppppppcStack_b0 = (code *******)pppppppcVar33[4];
                    ppppppcStack_a8 = pppppppcVar33[5];
                    if (ppppppcStack_a8 != (code ******)0x0) {
                      ppppppcVar15 = ppppppcStack_a8 + 1;
                      do {
                        cVar3 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
                        if (bVar6) {
                          *ppppppcVar15 = (code *****)((long)*ppppppcVar15 + 1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    pppppppcStack_130 = pppppppcStack_180;
                    pppppppcStack_128 = pppppppcStack_178;
                    if (pppppppcStack_178 == (code *******)0x0) {
                      pppppppcStack_98 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar40 = pppppppcStack_178 + 1;
                      do {
                        cVar3 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
                        if (bVar6) {
                          *pppppppcVar40 = (code ******)((long)*pppppppcVar40 + 1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      pppppppcStack_98 = pppppppcStack_178;
                      do {
                        cVar3 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
                        if (bVar6) {
                          *pppppppcVar40 = (code ******)((long)*pppppppcVar40 + 1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    pppppppcStack_a0 = pppppppcStack_180;
                    pppppppcStack_b8 = (code *******)&PTR_FUN_110c37930;
                    pppppppcStack_138 = (code *******)0x0;
                    pppppppcStack_140 = (code *******)0x0;
                    pppppppcStack_c0 = (code *******)FUN_10a9fc7d0;
                    FUN_10a4634ec(pppppppcVar9,&pppppppcStack_c0);
                    (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                    if (pppppppcVar25 != (code *******)0x0) {
                      pppppppcVar9 = pppppppcVar25 + 1;
                      do {
                        ppppppcVar15 = *pppppppcVar9;
                        cVar3 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                        if (bVar6) {
                          *pppppppcVar9 = (code ******)((long)ppppppcVar15 + -1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (ppppppcVar15 == (code ******)0x0) {
                        (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                      }
                    }
                    if (pppppppcStack_138 != (code *******)0x0) {
                      pppppppcVar9 = pppppppcStack_138 + 1;
                      do {
                        ppppppcVar15 = *pppppppcVar9;
                        cVar3 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
                        if (bVar6) {
                          *pppppppcVar9 = (code ******)((long)ppppppcVar15 + -1);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        pppppppcVar40 = pppppppcStack_138;
                      } while (cVar3 != '\0');
                      goto LAB_10a9f2a48;
                    }
                  }
                }
                else {
                  *pppppppcVar40 =
                       (code ******)
                       CONCAT44((int)((ulong)*pppppppcVar40 >> 0x20) + 1,(int)*pppppppcVar40 + 1);
                  FUN_10a9fc5cc(pppppppcVar33[4],&pppppppcStack_180);
                  iVar5 = *(int *)((long)pppppppcVar40 + 4) + -1;
                  *(int *)((long)pppppppcVar40 + 4) = iVar5;
                  if (iVar5 == 0) {
                    *(undefined4 *)pppppppcVar40 = 0;
                  }
                }
              }
            }
            pppppppcVar9 = pppppppcStack_178;
            pppppppcVar33 = (code *******)*pppppppcVar33;
          } while (pppppppcVar33 != (code *******)0x0);
          FUN_10a57f4a0(&pppppppcStack_100);
          if (pppppppcVar9 != (code *******)0x0) goto LAB_10a9f2c30;
        }
        if (pppppppcStack_2f8 != (code *******)0x0) {
          pppppppcVar9 = pppppppcStack_2f8 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
            if (bVar6) {
              *pppppppcVar9 = (code ******)((long)*pppppppcVar9 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppppcVar38 = param_1[7];
        param_1[7] = (code ******)pppppppcStack_2f8;
        param_1[6] = (code ******)pppppppcStack_300;
        if (ppppppcVar38 != (code ******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        goto LAB_10a9f264c;
      }
      goto LAB_10a9f2b78;
    }
    if (pppppppcStack_308 != (code *******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (pppppppcVar22 != (code *******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar22);
    }
    if (!bVar4) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar35);
    }
    if (pppppppcStack_2d8 != (code *******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (pppppppcStack_2e8 != (code *******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x000107c2ab24(&uStack_2d0);
    if (pppppppcVar37 != (code *******)0x0) {
      __ZdlPv(pppppppcVar37);
    }
    if (puStack_2a8 != (undefined8 *)0x0) {
      puStack_2a0 = puStack_2a8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else if ((ulong)pppppppcVar9 >> 0x3d == 0) {
    FUN_10a9fb5e8();
    pppppppcStack_360 = pppppppcVar9 + (long)ppuVar13;
    _bzero();
    pppppppcStack_358 = (code *******)((long)pppppppcVar9 - lVar29);
    goto LAB_10a9f0b34;
  }
  FUN_10a9fb5d4();
LAB_10a9f2cc4:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x10a9f2cc8);
  (*pcVar18)();
}



/* Entry: 10a9f2fe4; end: 10a9f304b;  */

long FUN_10a9f2fe4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a9f304c; end: 10a9f3057;  */

void FUN_10a9f304c(void)

{
  return;
}



/* Entry: 10a9f3058; end: 10a9f306b;  */

void FUN_10a9f3058(void)

{
  FUN_10a9fc8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9f306c; end: 10a9f307b;  */

long FUN_10a9f306c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = *(undefined **)(param_1 + 0x78);
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  lVar4 = 0;
  puVar5 = *ppuVar1;
  *ppuVar1 = puVar3;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (undefined *)0x0;
  while( true ) {
    puVar2 = puVar3 + 0x18;
    FUN_109d203a8(puVar2,&uStack_48);
    if ((int)puVar2 == 0) break;
    *ppuVar1 = puStack_38;
    FUN_109d1aecc(&uStack_48);
    lVar4 = lVar4 + 1;
  }
  *ppuVar1 = puVar5;
  return lVar4;
}



/* Entry: 10a9f307c; end: 10a9f3103;  */

void FUN_10a9f307c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x88) + 0x38))(&plStack_28);
  FUN_109d202f4(*(undefined8 *)(param_1 + 0x78));
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a9f3104; end: 10a9f310b;  */

undefined8 * FUN_10a9f3104(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_DAT_110c381e8;
  *param_1 = &PTR_FUN_110c38258;
  param_1[4] = &PTR_DAT_110c38280;
  param_1[8] = &PTR_DAT_110c382a8;
  FUN_10a9f307c();
  func_0x00010a061620(param_1 + 0xe);
  FUN_10a3f850c(param_1 + 0xc);
  param_1[8] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb] = 0;
  }
  func_0x00010a004e5c(param_1 + 9);
  param_1[4] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[7] = 0;
  }
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
  return puVar1;
}



/* Entry: 10a9f310c; end: 10a9f3123;  */

void FUN_10a9f310c(long param_1)

{
  FUN_10a9fc8e0(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9f3124; end: 10a9f3133;  */

long FUN_10a9f3124(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = *(undefined **)(param_1 + 0x60);
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  lVar4 = 0;
  puVar5 = *ppuVar1;
  *ppuVar1 = puVar3;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (undefined *)0x0;
  while( true ) {
    puVar2 = puVar3 + 0x18;
    FUN_109d203a8(puVar2,&uStack_48);
    if ((int)puVar2 == 0) break;
    *ppuVar1 = puStack_38;
    FUN_109d1aecc(&uStack_48);
    lVar4 = lVar4 + 1;
  }
  *ppuVar1 = puVar5;
  return lVar4;
}



/* Entry: 10a9f3134; end: 10a9f314b;  */

void FUN_10a9f3134(long param_1)

{
  FUN_10a9fc8e0(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9f314c; end: 10a9f315b;  */

long FUN_10a9f314c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = *(undefined **)(param_1 + 0x40);
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  lVar4 = 0;
  puVar5 = *ppuVar1;
  *ppuVar1 = puVar3;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (undefined *)0x0;
  while( true ) {
    puVar2 = puVar3 + 0x18;
    FUN_109d203a8(puVar2,&uStack_48);
    if ((int)puVar2 == 0) break;
    *ppuVar1 = puStack_38;
    FUN_109d1aecc(&uStack_48);
    lVar4 = lVar4 + 1;
  }
  *ppuVar1 = puVar5;
  return lVar4;
}



/* Entry: 10a9f315c; end: 10a9f3173;  */

void FUN_10a9f315c(long param_1)

{
  FUN_10a9fc8e0(param_1 + -0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9f3174; end: 10a9f317b;  */

void FUN_10a9f3174(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x30) + 0x38))(&plStack_28);
  FUN_109d202f4(*(undefined8 *)(param_1 + 0x20));
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a9f317c; end: 10a9f31db;  */

undefined8 * FUN_10a9f317c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9f31dc; end: 10a9f31df;  */

/* WARNING: Removing unreachable block (ram,0x00010a9fca3c) */

undefined8 * FUN_10a9f31dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36cb8;
  if (param_1[0x27] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])();
  FUN_10aa04ef8(param_1 + 0x1c);
  FUN_10a044790(param_1 + 0x13);
  (**(code **)param_1[0x14])(param_1 + 0x14);
  FUN_10aa04b94(param_1 + 0x11);
  FUN_10a9f8808(param_1 + 0xf);
  func_0x00010a05a86c(param_1 + 0xd);
  FUN_10aa04afc(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9f31e0; end: 10a9f31f3;  */

void FUN_10a9f31e0(void)

{
  FUN_10a9fc9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9f31f4; end: 10a9f35a3;  */

undefined8 * FUN_10a9f31f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9f35a4; end: 10a9f38d3;  */

void FUN_10a9f35a4(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10aa12984;
  puVar5[1] = FUN_10aa12c38;
  puVar5[0xc] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a057268(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a9f38d4(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      func_0x0001092af8bc(puVar5[0xc]);
      lVar8 = *(long *)puVar5[0xc];
      if ((*(byte *)(lVar8 + 0x9c) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f3834);
        (*pcVar4)();
      }
      FUN_10a07eb0c((long *)puVar5[0xc] + 1,lVar8 + 0x98);
    }
    plVar7 = (long *)puVar5[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9f38d4; end: 10a9f3e57;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f3a2c) */
/* WARNING: Removing unreachable block (ram,0x00010a9f3c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a9f39ec) */
/* WARNING: Removing unreachable block (ram,0x00010a9f3b80) */

void FUN_10a9f38d4(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x108;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)((long)plVar4 + 0x9c) = 0;
  *plVar4 = (long)&PTR_FUN_110c374b0;
  plVar10 = plVar4 + 0x14;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x15] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x18] = 0;
  plVar4[0x19] = 0x32aaaba7;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x20] = 0;
  lStack_78 = 0;
  plVar4[0x16] = (long)plVar4;
  plVar4[0x17] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x15] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x19);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a9f3e58;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x15];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a9f3b6c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x16];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x15];
    plVar4[0x15] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x16];
    plVar4[0x16] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x16);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a9f3dac:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x19);
  }
  else {
    lVar8 = plVar4[0x16];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x15];
    plVar4[0x15] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x16];
    plVar4[0x16] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x16);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a9f3b6c:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a9f3fb8;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a9f3da8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x16];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x15];
  plVar4[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a9f3c50:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a9f3da0;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a9f3c50;
  pcStack_68 = FUN_10a9f3e58;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x16];
  plVar4[0x16] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x16);
  }
LAB_10a9f3da0:
  *param_1 = (long)plVar4;
LAB_10a9f3da8:
  plStack_80 = (long *)0x0;
  goto LAB_10a9f3dac;
}



/* Entry: 10a9f3e58; end: 10a9f3fb7;  */

void FUN_10a9f3e58(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a9f3fb8;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar9 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0x9c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f3fb4);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar9 + 0x10);
    do {
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          *(undefined4 *)(lVar9 + 0x98) = *(undefined4 *)(lVar6 + 0x98);
          *(undefined1 *)(lVar9 + 0x9c) = 1;
          *(undefined8 *)(lVar9 + 0x10) = 2;
          FUN_109d1b4dc(lVar9 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar9,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a9f4384(param_1,param_1 + 3);
  return;
}



/* Entry: 10a9f3fb8; end: 10a9f4097;  */

void FUN_10a9f3fb8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a9f3e58;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a9f4384(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a9f4098; end: 10a9f410b;  */

long * FUN_10a9f4098(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a9f410c; end: 10a9f4317;  */

undefined8 * FUN_10a9f410c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c374b0;
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  if (param_1[0x16] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x14];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f4318; end: 10a9f43f3;  */

undefined8 * FUN_10a9f4318(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f43f4; end: 10a9f4723;  */

void FUN_10a9f43f4(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10aa13160;
  puVar5[1] = FUN_10aa13414;
  puVar5[0xc] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a057268(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a9f4724(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      func_0x0001092af8bc(puVar5[0xc]);
      lVar8 = *(long *)puVar5[0xc];
      if ((*(byte *)(lVar8 + 0xa0) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f4684);
        (*pcVar4)();
      }
      FUN_10a9f5248((long *)puVar5[0xc] + 1,lVar8 + 0x98);
    }
    plVar7 = (long *)puVar5[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9f4724; end: 10a9f4cab;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f4880) */
/* WARNING: Removing unreachable block (ram,0x00010a9f4a90) */
/* WARNING: Removing unreachable block (ram,0x00010a9f4840) */
/* WARNING: Removing unreachable block (ram,0x00010a9f49d4) */

void FUN_10a9f4724(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x110;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *plVar4 = (long)&PTR_FUN_110c37508;
  plVar10 = plVar4 + 0x15;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x16] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0x32aaaba7;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x21] = 0;
  lStack_78 = 0;
  plVar4[0x17] = (long)plVar4;
  plVar4[0x18] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x16] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1a);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a9f4cac;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x16];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a9f49c0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x17];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x16];
    plVar4[0x16] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x17];
    plVar4[0x17] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x17);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a9f4c00:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1a);
  }
  else {
    lVar8 = plVar4[0x17];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x16];
    plVar4[0x16] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x17];
    plVar4[0x17] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x17);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a9f49c0:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a9f4e0c;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a9f4bfc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x17];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x16];
  plVar4[0x16] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a9f4aa4:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a9f4bf4;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a9f4aa4;
  pcStack_68 = FUN_10a9f4cac;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x17];
  plVar4[0x17] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x17);
  }
LAB_10a9f4bf4:
  *param_1 = (long)plVar4;
LAB_10a9f4bfc:
  plStack_80 = (long *)0x0;
  goto LAB_10a9f4c00;
}



/* Entry: 10a9f4cac; end: 10a9f4e0b;  */

void FUN_10a9f4cac(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a9f4e0c;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar9 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0xa0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f4e08);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar9 + 0x10);
    do {
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)(lVar6 + 0x98);
          *(undefined1 *)(lVar9 + 0xa0) = 1;
          *(undefined8 *)(lVar9 + 0x10) = 2;
          FUN_109d1b4dc(lVar9 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar9,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a9f51d8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a9f4e0c; end: 10a9f4eeb;  */

void FUN_10a9f4e0c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a9f4cac;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a9f51d8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a9f4eec; end: 10a9f4f5f;  */

long * FUN_10a9f4eec(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a9f4f60; end: 10a9f516b;  */

undefined8 * FUN_10a9f4f60(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c37508;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1a);
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f516c; end: 10a9f5247;  */

undefined8 * FUN_10a9f516c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f5248; end: 10a9f538f;  */

void FUN_10a9f5248(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined **ppuVar9;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  int aiStack_100 [2];
  undefined8 *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  int **ppiStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar7 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar8 = (code **)0x0;
    if (ppcVar7 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_80 = *param_2;
      ppcVar5 = &pcStack_78;
      pcStack_78 = FUN_10a9f5524;
      ppuStack_70 = &PTR_DAT_110c37568;
      uStack_90 = 0;
      uStack_88 = 0;
      ppcVar8 = &pcStack_78;
      pcStack_58 = pcStack_80;
      FUN_10a4634ec();
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a9f5390();
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    ppcVar8 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_90);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_f0,pppuVar6 + 1,*pppuVar6);
  func_0x000109884820(&puStack_118,&ppuStack_f0,*pppuVar6);
  if (ppuStack_f0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_f0)();
  }
  (**(code **)(**pppuVar6 + 0x30))(&puStack_120);
  ppuVar9 = *pppuVar6;
  puStack_f8 = (undefined8 *)(double)(long)*ppcVar8;
  aiStack_100[0] = 3;
  piStack_d0 = aiStack_100;
  uStack_c8 = 1;
  (**(code **)(*ppuVar9 + 0x58))(ppuVar9);
  ppuStack_f0 = &puStack_118;
  ppiStack_d8 = &piStack_d0;
  ppuStack_e8 = ppuVar9;
  puStack_e0 = (undefined1 *)&puStack_120;
  func_0x0001098960c0(aiStack_110);
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if ((3 < aiStack_100[0]) && (puStack_f8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f8)();
  }
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a9f5390; end: 10a9f5523;  */

void FUN_10a9f5390(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  puStack_68 = (undefined8 *)(double)*param_2;
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9f5524; end: 10a9f555f;  */

void FUN_10a9f5524(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  puStack_68 = (undefined8 *)(double)*(long *)(param_1 + 0x20);
  aiStack_70[0] = 3;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a9f5560; end: 10a9f588f;  */

void FUN_10a9f5560(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10aa1393c;
  puVar5[1] = FUN_10aa13bf0;
  puVar5[0xc] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a057268(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a9f5890(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      func_0x0001092af8bc(puVar5[0xc]);
      lVar8 = *(long *)puVar5[0xc];
      if ((*(byte *)(lVar8 + 0x99) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f57f0);
        (*pcVar4)();
      }
      FUN_10a087a78((long *)puVar5[0xc] + 1,lVar8 + 0x98);
    }
    plVar7 = (long *)puVar5[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9f5890; end: 10a9f5e0f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f59e4) */
/* WARNING: Removing unreachable block (ram,0x00010a9f5bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a9f59a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9f5b38) */

void FUN_10a9f5890(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x108;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined2 *)(plVar4 + 0x13) = 0;
  *plVar4 = (long)&PTR_FUN_110c37590;
  plVar10 = plVar4 + 0x14;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x15] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x18] = 0;
  plVar4[0x19] = 0x32aaaba7;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x20] = 0;
  lStack_78 = 0;
  plVar4[0x16] = (long)plVar4;
  plVar4[0x17] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x15] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x19);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a9f5e10;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x15];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a9f5b24;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x16];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x15];
    plVar4[0x15] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x16];
    plVar4[0x16] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x16);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a9f5d64:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x19);
  }
  else {
    lVar8 = plVar4[0x16];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x15];
    plVar4[0x15] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x16];
    plVar4[0x16] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x16);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a9f5b24:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a9f5f20;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a9f5d60;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x16];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x15];
  plVar4[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a9f5c08:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a9f5d58;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a9f5c08;
  pcStack_68 = FUN_10a9f5e10;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x16];
  plVar4[0x16] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x16);
  }
LAB_10a9f5d58:
  *param_1 = (long)plVar4;
LAB_10a9f5d60:
  plStack_80 = (long *)0x0;
  goto LAB_10a9f5d64;
}



/* Entry: 10a9f5e10; end: 10a9f5f1f;  */

void FUN_10a9f5e10(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a9f5f20;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0x99) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f5f1c);
      (*pcVar4)();
    }
    FUN_10a234e48(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a9f6280(param_1,param_1 + 3);
  return;
}



/* Entry: 10a9f5f20; end: 10a9f5fff;  */

void FUN_10a9f5f20(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a9f5e10;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a9f6280(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a9f6000; end: 10a9f6073;  */

long * FUN_10a9f6000(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a9f6074; end: 10a9f627f;  */

undefined8 * FUN_10a9f6074(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c37590;
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  if (param_1[0x16] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x14];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f6280; end: 10a9f62ef;  */

void FUN_10a9f6280(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a9f62f0; end: 10a9f661f;  */

void FUN_10a9f62f0(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10aa14118;
  puVar5[1] = FUN_10aa143cc;
  puVar5[0xc] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a057268(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a9f6620(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      func_0x0001092af8bc(puVar5[0xc]);
      lVar8 = *(long *)puVar5[0xc];
      if ((*(byte *)(lVar8 + 0x9c) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f6580);
        (*pcVar4)();
      }
      FUN_10a202b84((long *)puVar5[0xc] + 1,lVar8 + 0x98);
    }
    plVar7 = (long *)puVar5[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9f6620; end: 10a9f6ba3;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f6778) */
/* WARNING: Removing unreachable block (ram,0x00010a9f6988) */
/* WARNING: Removing unreachable block (ram,0x00010a9f6738) */
/* WARNING: Removing unreachable block (ram,0x00010a9f68cc) */

void FUN_10a9f6620(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x108;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)((long)plVar4 + 0x9c) = 0;
  *plVar4 = (long)&PTR_FUN_110c375c8;
  plVar10 = plVar4 + 0x14;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x15] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x18] = 0;
  plVar4[0x19] = 0x32aaaba7;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x20] = 0;
  lStack_78 = 0;
  plVar4[0x16] = (long)plVar4;
  plVar4[0x17] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x15] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x19);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a9f6ba4;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x15];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a9f68b8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x16];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x15];
    plVar4[0x15] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x16];
    plVar4[0x16] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x16);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a9f6af8:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x19);
  }
  else {
    lVar8 = plVar4[0x16];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x15];
    plVar4[0x15] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x16];
    plVar4[0x16] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x16);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a9f68b8:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a9f6d04;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a9f6af4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x16];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x15];
  plVar4[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a9f699c:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a9f6aec;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a9f699c;
  pcStack_68 = FUN_10a9f6ba4;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x16];
  plVar4[0x16] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x16);
  }
LAB_10a9f6aec:
  *param_1 = (long)plVar4;
LAB_10a9f6af4:
  plStack_80 = (long *)0x0;
  goto LAB_10a9f6af8;
}



/* Entry: 10a9f6ba4; end: 10a9f6d03;  */

void FUN_10a9f6ba4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a9f6d04;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar9 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0x9c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f6d00);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar9 + 0x10);
    do {
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          *(undefined4 *)(lVar9 + 0x98) = *(undefined4 *)(lVar6 + 0x98);
          *(undefined1 *)(lVar9 + 0x9c) = 1;
          *(undefined8 *)(lVar9 + 0x10) = 2;
          FUN_109d1b4dc(lVar9 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar9,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a9f70d0(param_1,param_1 + 3);
  return;
}



/* Entry: 10a9f6d04; end: 10a9f6de3;  */

void FUN_10a9f6d04(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a9f6ba4;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a9f70d0(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a9f6de4; end: 10a9f6e57;  */

long * FUN_10a9f6de4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a9f6e58; end: 10a9f7063;  */

undefined8 * FUN_10a9f6e58(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c375c8;
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  if (param_1[0x16] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x14];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f7064; end: 10a9f713f;  */

undefined8 * FUN_10a9f7064(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9f7140; end: 10a9f746b;  */

void FUN_10a9f7140(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10aa148f4;
  puVar5[1] = FUN_10aa14ba4;
  puVar5[0xc] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a057268(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a4f3e88(puVar5 + 0xb,puVar5 + 9,puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      func_0x0001092af8bc(puVar5[0xc]);
      lVar8 = *(long *)puVar5[0xc];
      if ((*(byte *)(lVar8 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f73cc);
        (*pcVar4)();
      }
      FUN_10a05aad0((long *)puVar5[0xc] + 1,lVar8 + 0x98);
    }
    plVar7 = (long *)puVar5[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9f746c; end: 10a9f779b;  */

void FUN_10a9f746c(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10aa150cc;
  puVar5[1] = FUN_10aa15380;
  puVar5[0xc] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a057268(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5[9] = puVar5[10];
    FUN_10a9f779c(puVar5 + 0xb,puVar5 + 9,*(undefined8 *)puVar5[0xc]);
    puVar5[10] = puVar5[0xb];
    plVar7 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xb];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      func_0x0001092af8bc(puVar5[0xc]);
      lVar8 = *(long *)puVar5[0xc];
      if ((*(byte *)(lVar8 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f76fc);
        (*pcVar4)();
      }
      FUN_10a9f82e0((long *)puVar5[0xc] + 1,lVar8 + 0x98);
    }
    plVar7 = (long *)puVar5[9];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10a9f779c; end: 10a9f7d27;  */

/* WARNING: Removing unreachable block (ram,0x00010a9f78fc) */
/* WARNING: Removing unreachable block (ram,0x00010a9f7b0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9f78bc) */
/* WARNING: Removing unreachable block (ram,0x00010a9f7a50) */

void FUN_10a9f779c(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x120;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x16) = 0;
  *plVar4 = (long)&PTR_FUN_110c37638;
  plVar10 = plVar4 + 0x17;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x18] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0x32aaaba7;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x23] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  lStack_78 = 0;
  plVar4[0x19] = (long)plVar4;
  plVar4[0x1a] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x18] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1c);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a9f7d28;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x18];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a9f7a3c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x19];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a9f7c7c:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1c);
  }
  else {
    lVar8 = plVar4[0x19];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a9f7a3c:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a9f7ec0;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a9f7c78;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x19];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x18];
  plVar4[0x18] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a9f7b20:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a9f7c70;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a9f7b20;
  pcStack_68 = FUN_10a9f7d28;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x19];
  plVar4[0x19] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x19);
  }
LAB_10a9f7c70:
  *param_1 = (long)plVar4;
LAB_10a9f7c78:
  plStack_80 = (long *)0x0;
  goto LAB_10a9f7c7c;
}



/* Entry: 10a9f7d28; end: 10a9f7ebf;  */

void FUN_10a9f7d28(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_48 = FUN_10a9f7ec0;
  ppuStack_38 = &PTR_PTR_1132fed68;
  plStack_40 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_48);
  lVar8 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar9 = *param_1;
    if ((*(byte *)(lVar9 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9f7ebc);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar8 + 0x10);
    do {
      lVar7 = *plVar5;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          if (*(char *)(lVar8 + 0xb0) == '\x01') {
            if (*(long *)(lVar8 + 0x98) != 0) {
              *(long *)(lVar8 + 0xa0) = *(long *)(lVar8 + 0x98);
              __ZdlPv();
            }
            *(undefined1 *)(lVar8 + 0xb0) = 0;
          }
          *(undefined8 *)(lVar8 + 0x98) = 0;
          *(undefined8 *)(lVar8 + 0xa0) = 0;
          *(undefined8 *)(lVar8 + 0xa8) = 0;
          FUN_10a05151c(lVar8 + 0x98,*(long *)(lVar9 + 0x98),*(long *)(lVar9 + 0xa0),
                        *(long *)(lVar9 + 0xa0) - *(long *)(lVar9 + 0x98));
          *(undefined1 *)(lVar8 + 0xb0) = 1;
          *(undefined8 *)(lVar8 + 0x10) = 2;
          FUN_109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_48,*param_1 + 0x90);
    func_0x000109d1b350(lVar8,&pcStack_48);
    __ZNSt13exception_ptrD1Ev(&pcStack_48);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a9f8270(param_1,param_1 + 3);
  return;
}



/* Entry: 10a9f7ec0; end: 10a9f7f9f;  */

void FUN_10a9f7ec0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a9f7d28;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a9f8270(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a9f7fa0; end: 10a9f8013;  */

long * FUN_10a9f7fa0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a9f8014; end: 10a9f826f;  */

undefined8 * FUN_10a9f8014(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c37638;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1c);
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x18];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110ba7888;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (param_1[0x13] != 0)) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}


