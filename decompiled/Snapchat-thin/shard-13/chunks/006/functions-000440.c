/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa43ad0; end: 10aa43f17;  */

bool FUN_10aa43ad0(ulong *param_1,ulong *param_2)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_10aa43b9c:
      puVar6 = param_1 + 2;
      uVar3 = (uint)*puVar6;
      puVar8 = param_1 + 1;
      uVar7 = (uint)*puVar8;
      if ((int)uVar7 < (int)(uint)*param_1) {
        uVar11 = (uint)*param_1;
        uVar2 = (undefined2)(*param_1 >> 0x20);
        if ((int)uVar3 < (int)uVar7) {
          *(uint *)param_1 = (uint)*puVar6;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0x14);
          *(uint *)(param_1 + 2) = uVar11;
          *(undefined2 *)((long)param_1 + 0x14) = uVar2;
        }
        else {
          *(uint *)param_1 = (uint)*puVar8;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
          *(uint *)(param_1 + 1) = uVar11;
          *(undefined2 *)((long)param_1 + 0xc) = uVar2;
          if ((int)uVar3 < (int)uVar11) {
            uVar4 = *puVar8;
            *(uint *)puVar8 = (uint)*puVar6;
            *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
            *(uint *)puVar6 = (uint)uVar4;
            *(short *)((long)param_1 + 0x14) = (short)(uVar4 >> 0x20);
          }
        }
      }
      else if ((int)uVar3 < (int)uVar7) {
        uVar5 = *puVar8;
        uVar4 = *puVar6;
        *(uint *)puVar8 = (uint)uVar4;
        *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
        *(uint *)puVar6 = (uint)uVar5;
        *(short *)((long)param_1 + 0x14) = (short)(uVar5 >> 0x20);
        if ((int)(uint)uVar4 < (int)(uint)*param_1) {
          uVar4 = *param_1;
          *(uint *)param_1 = (uint)*puVar8;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
          *(uint *)(param_1 + 1) = (uint)uVar4;
          *(short *)((long)param_1 + 0xc) = (short)(uVar4 >> 0x20);
        }
      }
      if (param_1 + 3 == param_2) {
        return true;
      }
      lVar10 = 0;
      iVar12 = 0;
      puVar8 = param_1 + 3;
      do {
        if ((int)(uint)*puVar8 < (int)(uint)*puVar6) {
          uVar4 = *puVar8;
          lVar1 = lVar10;
          do {
            lVar13 = lVar1;
            *(undefined4 *)((long)param_1 + lVar13 + 0x18) =
                 *(undefined4 *)((long)param_1 + lVar13 + 0x10);
            *(undefined2 *)((long)param_1 + lVar13 + 0x1c) =
                 *(undefined2 *)((long)param_1 + lVar13 + 0x14);
            uVar3 = (uint)uVar4;
            puVar6 = param_1;
            if (lVar13 == -0x10) goto LAB_10aa43dfc;
            lVar1 = lVar13 + -8;
          } while ((int)uVar3 < *(int *)((long)param_1 + lVar13 + 8));
          puVar6 = (ulong *)((long)param_1 + lVar13 + 0x10);
LAB_10aa43dfc:
          *(uint *)puVar6 = uVar3;
          *(short *)((long)puVar6 + 4) = (short)(uVar4 >> 0x20);
          iVar12 = iVar12 + 1;
          if (iVar12 == 8) {
            return puVar8 + 1 == param_2;
          }
        }
        puVar9 = puVar8 + 1;
        lVar10 = lVar10 + 8;
        puVar6 = puVar8;
        puVar8 = puVar9;
        if (puVar9 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar6 = param_2 + -1;
    if ((int)(uint)*param_1 <= (int)(uint)*puVar6) {
      return true;
    }
    uVar5 = *param_1;
    uVar4 = *puVar6;
    *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
    *(uint *)param_1 = (uint)uVar4;
    *(uint *)puVar6 = (uint)uVar5;
    uVar2 = (undefined2)(uVar5 >> 0x20);
LAB_10aa43b20:
    *(undefined2 *)((long)param_2 + -4) = uVar2;
  }
  else {
    if (uVar4 == 3) {
      puVar8 = param_1 + 1;
      uVar3 = (uint)*puVar8;
      puVar6 = param_2 + -1;
      if ((int)uVar3 < (int)(uint)*param_1) {
        uVar7 = (uint)*param_1;
        uVar2 = (undefined2)(*param_1 >> 0x20);
        if ((int)(uint)*puVar6 < (int)uVar3) {
          uVar4 = *puVar6;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)param_1 = (uint)uVar4;
          *(undefined2 *)((long)param_2 + -4) = uVar2;
          *(uint *)puVar6 = uVar7;
          return true;
        }
        *(uint *)param_1 = (uint)*puVar8;
        *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
        *(uint *)(param_1 + 1) = uVar7;
        *(undefined2 *)((long)param_1 + 0xc) = uVar2;
        if ((int)uVar7 <= (int)(uint)*puVar6) {
          return true;
        }
        uVar5 = *puVar8;
        uVar4 = *puVar6;
        *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar8 = (uint)uVar4;
        *(uint *)puVar6 = (uint)uVar5;
        uVar2 = (undefined2)(uVar5 >> 0x20);
        goto LAB_10aa43b20;
      }
      if ((int)uVar3 <= (int)(uint)*puVar6) {
        return true;
      }
      uVar5 = param_1[1];
      uVar4 = *puVar6;
      *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + -4);
      *(uint *)puVar8 = (uint)uVar4;
      *(uint *)puVar6 = (uint)uVar5;
      *(short *)((long)param_2 + -4) = (short)(uVar5 >> 0x20);
    }
    else {
      if (uVar4 != 4) {
        if (uVar4 == 5) {
          FUN_10aa43894(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
          return true;
        }
        goto LAB_10aa43b9c;
      }
      puVar6 = param_1 + 1;
      uVar3 = (uint)*puVar6;
      puVar8 = param_1 + 2;
      uVar7 = (uint)*puVar8;
      uVar4 = (ulong)uVar7;
      puVar9 = param_2 + -1;
      if ((int)uVar3 < (int)(uint)*param_1) {
        uVar5 = *param_1;
        uVar11 = (uint)uVar5;
        uVar2 = (undefined2)(uVar5 >> 0x20);
        if ((int)uVar7 < (int)uVar3) {
          *(uint *)param_1 = (uint)*puVar8;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0x14);
          *(uint *)(param_1 + 2) = uVar11;
          *(undefined2 *)((long)param_1 + 0x14) = uVar2;
          uVar4 = uVar5;
        }
        else {
          *(uint *)param_1 = (uint)*puVar6;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
          *(uint *)(param_1 + 1) = uVar11;
          *(undefined2 *)((long)param_1 + 0xc) = uVar2;
          if ((int)uVar7 < (int)uVar11) {
            uVar4 = *puVar6;
            *(uint *)puVar6 = (uint)*puVar8;
            *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
            *(uint *)puVar8 = (uint)uVar4;
            *(short *)((long)param_1 + 0x14) = (short)(uVar4 >> 0x20);
          }
        }
      }
      else if ((int)uVar7 < (int)uVar3) {
        uVar4 = *puVar6;
        uVar5 = *puVar8;
        *(uint *)puVar6 = (uint)uVar5;
        *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
        *(uint *)puVar8 = (uint)uVar4;
        *(short *)((long)param_1 + 0x14) = (short)(uVar4 >> 0x20);
        if ((int)(uint)uVar5 < (int)(uint)*param_1) {
          uVar5 = *param_1;
          *(uint *)param_1 = (uint)*puVar6;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
          *(uint *)(param_1 + 1) = (uint)uVar5;
          *(short *)((long)param_1 + 0xc) = (short)(uVar5 >> 0x20);
        }
      }
      if ((int)uVar4 <= (int)(uint)*puVar9) {
        return true;
      }
      uVar5 = *puVar8;
      uVar4 = *puVar9;
      *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + -4);
      *(uint *)puVar8 = (uint)uVar4;
      *(uint *)puVar9 = (uint)uVar5;
      *(short *)((long)param_2 + -4) = (short)(uVar5 >> 0x20);
      if ((int)(uint)*puVar6 <= (int)(uint)*puVar8) {
        return true;
      }
      uVar4 = param_1[1];
      *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
      *(uint *)puVar6 = (uint)*puVar8;
      *(uint *)(param_1 + 2) = (uint)uVar4;
      *(short *)((long)param_1 + 0x14) = (short)(uVar4 >> 0x20);
    }
    if ((int)(uint)param_1[1] < (int)(uint)*param_1) {
      uVar4 = *param_1;
      *(uint *)param_1 = (uint)param_1[1];
      *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
      *(uint *)(param_1 + 1) = (uint)uVar4;
      *(short *)((long)param_1 + 0xc) = (short)(uVar4 >> 0x20);
    }
  }
  return true;
}



/* Entry: 10aa43f18; end: 10aa43fa7;  */

void FUN_10aa43f18(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  uVar9 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[6] = param_2[6];
  if ((param_3 == (long *)0x0) || ((**(code **)(*param_3 + 0x18))(), (int)param_3 != 0)) {
    fVar5 = 0.0;
    fVar6 = 1.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    param_1[1] = 0x3f80000000000000;
    *param_1 = 0;
  }
  else {
    pauVar1 = (undefined1 (*) [12])((long)param_1 + 0x1c);
    fVar6 = (float)((ulong)*(undefined8 *)((long)param_1 + 0x24) >> 0x20);
    fVar3 = (float)*(undefined8 *)*pauVar1;
    fVar4 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar10._12_4_ = fVar6;
    auVar10._0_12_ = *pauVar1;
    auVar2._12_4_ = fVar6;
    auVar2._0_12_ = *pauVar1;
    auVar10 = NEON_ext(auVar10,auVar2,8,1);
    uVar9 = NEON_rev64(CONCAT44(auVar10._4_4_ * (float)((ulong)param_1[1] >> 0x20),
                                auVar10._0_4_ * (float)param_1[1]),4);
    if (0.0 <= fVar3 * (float)*param_1 + (float)uVar9 +
               fVar4 * (float)((ulong)*param_1 >> 0x20) + (float)((ulong)uVar9 >> 0x20)) {
      return;
    }
    fVar3 = -fVar3;
    fVar4 = -fVar4;
    fVar5 = -(float)*(undefined8 *)((long)param_1 + 0x24);
    fVar6 = -fVar6;
  }
  *(ulong *)((long)param_1 + 0x24) = CONCAT44(fVar6,fVar5);
  *(ulong *)((long)param_1 + 0x1c) = CONCAT44(fVar4,fVar3);
  return;
}



/* Entry: 10aa43fa8; end: 10aa440e3;  */

void FUN_10aa43fa8(float param_1,undefined8 *param_2,undefined8 *param_3,undefined1 (*param_4) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar9 = (float)*(undefined8 *)(*param_4 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  fVar14 = (float)*(undefined8 *)*param_4;
  fVar6 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  fVar15 = (float)*param_3;
  fVar5 = fVar14 * fVar15;
  fVar16 = (float)((ulong)*param_3 >> 0x20);
  fVar7 = fVar6 * fVar16;
  fVar17 = (float)param_3[1];
  fVar8 = fVar9 * fVar17;
  fVar18 = (float)((ulong)param_3[1] >> 0x20);
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar8;
  auVar1._12_4_ = fVar4 * fVar18;
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar4 * fVar18;
  auVar11 = NEON_ext(auVar1,auVar2,8,1);
  uVar10 = NEON_rev64(auVar11._0_8_,4);
  fVar5 = fVar5 + (float)uVar10 + fVar7 + (float)((ulong)uVar10 >> 0x20);
  auVar12._0_4_ = -(uint)(fVar5 < 0.0);
  auVar12._4_4_ = auVar12._0_4_;
  auVar12._8_4_ = auVar12._0_4_;
  auVar12._12_4_ = auVar12._0_4_;
  auVar11._12_4_ = fVar4;
  auVar11._0_12_ = *param_4;
  auVar3._4_4_ = -fVar6;
  auVar3._0_4_ = -fVar14;
  auVar3._8_4_ = -fVar9;
  auVar3._12_4_ = -fVar4;
  auVar13._12_4_ = fVar4;
  auVar13._0_12_ = *param_4;
  auVar13 = auVar13 ^ (auVar11 ^ auVar3) & auVar12;
  fVar14 = -fVar5;
  if (0.0 <= fVar5) {
    fVar14 = fVar5;
  }
  if (fVar14 <= 0.9999999) {
    _acosf();
    fVar6 = (1.0 - param_1) * fVar14;
    _sinf();
    fVar9 = param_1 * fVar14;
    _sinf();
    _sinf();
    fVar4 = (fVar15 * fVar6 + auVar13._0_4_ * fVar9) / fVar14;
    fVar5 = (fVar16 * fVar6 + auVar13._4_4_ * fVar9) / fVar14;
    fVar7 = (fVar17 * fVar6 + auVar13._8_4_ * fVar9) / fVar14;
    fVar14 = (fVar18 * fVar6 + auVar13._12_4_ * fVar9) / fVar14;
  }
  else {
    fVar14 = 1.0 - param_1;
    fVar4 = auVar13._0_4_ * param_1 + fVar15 * fVar14;
    fVar5 = auVar13._4_4_ * param_1 + fVar16 * fVar14;
    fVar7 = auVar13._8_4_ * param_1 + fVar17 * fVar14;
    fVar14 = auVar13._12_4_ * param_1 + fVar18 * fVar14;
  }
  fVar8 = 1.0 - param_1;
  fVar6 = *(float *)(param_3 + 3);
  fVar9 = *(float *)param_4[2];
  param_2[1] = CONCAT44(fVar14,fVar7);
  *param_2 = CONCAT44(fVar5,fVar4);
  param_2[2] = CONCAT44((float)((ulong)param_3[2] >> 0x20) * fVar8 +
                        (float)((ulong)*(undefined8 *)(param_4[1] + 4) >> 0x20) * param_1,
                        (float)param_3[2] * fVar8 + (float)*(undefined8 *)(param_4[1] + 4) * param_1
                       );
  *(float *)(param_2 + 3) = fVar8 * fVar6 + param_1 * fVar9;
  return;
}



/* Entry: 10aa440e4; end: 10aa4437b;  */

void FUN_10aa440e4(float *param_1,long param_2,float *param_3,float *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lStack_88;
  
  lVar2 = param_5[1];
  fVar3 = *param_3;
  fVar18 = param_3[1];
  fVar37 = param_3[2];
  fVar33 = param_3[3];
  fVar14 = param_3[4];
  fVar15 = param_3[5];
  uVar39 = *(undefined8 *)(param_3 + 4);
  fVar9 = param_3[6];
  fVar35 = *param_4;
  fVar11 = param_4[1];
  fVar7 = param_4[2];
  fVar34 = param_4[3];
  uVar38 = *(undefined8 *)(param_4 + 4);
  fVar13 = param_4[6];
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    fVar12 = fVar11;
    fVar16 = fVar3;
    FUN_10a2f1bb8(param_2);
    fVar8 = ABS(fVar16 + -1.0);
    fVar10 = 0.001;
    if (fVar8 <= 0.001) {
      lVar1 = 0;
    }
    else {
      fVar8 = 1.0;
      fVar10 = 0.001;
      (**(code **)(*param_5 + 0x20))(&lStack_88,1.0 / fVar16,param_5);
      lVar1 = lStack_88;
      lVar2 = lStack_88;
    }
    if ((*(byte *)(param_2 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(param_2);
    }
    fVar31 = *(float *)(param_2 + 0x108);
    fVar32 = *(float *)(param_2 + 0x118);
    fVar30 = *(float *)(param_2 + 0x128);
    uVar5 = *(undefined8 *)(param_2 + 0x100);
    uVar27 = *(undefined8 *)(param_2 + 0x110);
    uVar29 = *(undefined8 *)(param_2 + 0x120);
    uVar25 = *(undefined8 *)(param_2 + 0x130);
    fVar23 = *(float *)(param_2 + 0x138);
    uVar6 = uVar5;
    func_0x00010a2cd08c(param_2);
    fVar19 = (float)uVar38;
    fVar21 = (float)((ulong)uVar38 >> 0x20);
    fVar20 = (float)uVar29;
    fVar16 = fVar20 * fVar13;
    fVar22 = (float)((ulong)uVar29 >> 0x20);
    fVar17 = fVar22 * fVar13;
    fVar13 = fVar31 * fVar19 + fVar32 * fVar21 + fVar13 * fVar30 + fVar23;
    fVar36 = (float)((ulong)uVar5 >> 0x20);
    fVar4 = (float)uVar27;
    fVar28 = (float)((ulong)uVar27 >> 0x20);
    fVar24 = (float)uVar25;
    fVar26 = (float)((ulong)uVar25 >> 0x20);
    uVar38 = CONCAT44(fVar36 * fVar19 + fVar28 * fVar21 + fVar17 + fVar26,
                      (float)uVar5 * fVar19 + fVar4 * fVar21 + fVar16 + fVar24);
    fVar20 = fVar20 * fVar9;
    fVar22 = fVar22 * fVar9;
    fVar9 = fVar14 * fVar31 + fVar15 * fVar32 + fVar9 * fVar30 + fVar23;
    fVar15 = (float)((ulong)uVar39 >> 0x20);
    uVar39 = CONCAT44(fVar36 * fVar14 + fVar28 * fVar15 + fVar22 + fVar26,
                      (float)uVar5 * fVar14 + fVar4 * fVar15 + fVar20 + fVar24);
    fVar4 = (float)uVar6;
    fVar21 = fVar4 * fVar33;
    fVar22 = fVar8 * fVar33;
    fVar15 = fVar10 * fVar33;
    fVar33 = fVar3 * fVar4 + fVar33 * fVar12 + fVar18 * fVar8 + fVar37 * fVar10;
    fVar16 = fVar37 * fVar8;
    fVar17 = fVar3 * fVar10;
    fVar14 = fVar37 * fVar4;
    fVar37 = ((-fVar15 + fVar37 * fVar12) - fVar18 * fVar4) + fVar3 * fVar8;
    fVar23 = fVar4 * fVar34;
    fVar24 = fVar8 * fVar34;
    fVar26 = fVar10 * fVar34;
    fVar34 = fVar35 * fVar4 + fVar34 * fVar12 + fVar11 * fVar8 + fVar7 * fVar10;
    fVar19 = fVar7 * fVar8;
    fVar15 = fVar11 * fVar10;
    fVar20 = fVar11 * fVar4;
    fVar11 = ((-fVar24 + fVar11 * fVar12) - fVar35 * fVar10) + fVar7 * fVar4;
    fVar7 = ((-fVar26 + fVar7 * fVar12) - fVar20) + fVar35 * fVar8;
    fVar3 = ((-fVar21 + fVar3 * fVar12) - fVar16) + fVar18 * fVar10;
    fVar35 = ((-fVar23 + fVar35 * fVar12) - fVar19) + fVar15;
    fVar18 = ((-fVar22 + fVar18 * fVar12) - fVar17) + fVar14;
  }
  *param_1 = fVar3;
  param_1[1] = fVar18;
  param_1[2] = fVar37;
  param_1[3] = fVar33;
  *(undefined8 *)(param_1 + 4) = uVar39;
  param_1[6] = fVar9;
  param_1[7] = fVar35;
  param_1[8] = fVar11;
  param_1[9] = fVar7;
  param_1[10] = fVar34;
  *(undefined8 *)(param_1 + 0xb) = uVar38;
  param_1[0xd] = fVar13;
  *(long *)(param_1 + 0xe) = lVar2;
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10aa4437c; end: 10aa4437f;  */

void FUN_10aa4437c(void)

{
  return;
}



/* Entry: 10aa44380; end: 10aa444eb;  */

void FUN_10aa44380(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0x3f80000000000000;
  uStack_a0 = 0x3f800000;
  FUN_10aafa34c(0x3f800000,param_1,&UNK_10e482b48,param_2 + 8,&uStack_a0,6,4,2);
  uStack_a8 = 0x3f00000000000000;
  uStack_b0 = 0x3f800000;
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
    uStack_90 = *puVar2;
    uStack_88 = *(undefined4 *)(lVar1 + 0x40);
    puVar3 = (undefined8 *)(lVar1 + 0x44);
    uStack_84 = *puVar3;
    uStack_7c = *(undefined4 *)(lVar1 + 0x4c);
    uStack_64 = *(undefined4 *)(lVar1 + 0x58);
    puVar4 = (undefined8 *)(lVar1 + 0x50);
    uStack_6c = *puVar4;
    uStack_54 = *puVar2;
    uStack_78 = uStack_84;
    uStack_70 = uStack_7c;
    uStack_60 = uStack_6c;
    uStack_58 = uStack_64;
    uStack_4c = uStack_88;
    FUN_10aaf899c(param_1,&UNK_10e482b48,puVar2,puVar3,puVar4,&uStack_b0,6);
    FUN_10aaf899c(param_1,&UNK_10e482b48,puVar2,puVar4,puVar3,&uStack_b0,6);
    FUN_10aaf9e50(param_1,&UNK_10e482b48,&uStack_90,6,&UNK_10de642c0,6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10aa444ec; end: 10aa445d7;  */

void FUN_10aa444ec(void)

{
  return;
}



/* Entry: 10aa445d8; end: 10aa44707;  */

void FUN_10aa445d8(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  
  if (((*(uint *)(param_2 + 1) & *(uint *)(param_1 + 0x1c)) != 0) &&
     ((*(uint *)((long)param_2 + 0xc) & *(uint *)(param_1 + 0x18)) != 0)) {
    uVar5 = *(undefined8 *)(*param_2 + 0x120);
    FUN_10aa29848(uVar5,*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar5 != 0) {
      lVar14 = *param_2;
      lVar6 = *(long *)(lVar14 + 0xd0);
      plVar7 = (long *)0x0;
      FUN_10aa44790();
      if ((int)lVar6 != 0) {
        plVar13 = *(long **)(param_1 + 0x30);
        plVar2 = (long *)plVar13[1];
        if (plVar2 < (long *)plVar13[2]) {
          plVar15 = plVar2 + 1;
          *plVar2 = lVar14;
        }
        else {
          lVar11 = *plVar13;
          lVar12 = (long)plVar2 - lVar11;
          uVar1 = (lVar12 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
            FUN_10aa44844();
LAB_10aa44704:
            func_0x000109ffded8();
            lVar14 = *plVar7;
            *(int *)(lVar6 + 8) = (int)plVar7[4];
            *(long *)(lVar6 + 0x10) = lVar14;
            if (param_3 == 0) {
              fVar23 = *(float *)(plVar7 + 2);
              fVar24 = *(float *)((long)plVar7 + 0x14);
              fVar25 = *(float *)(plVar7 + 3);
              auVar18._0_4_ = *(float *)(lVar14 + 0x10) * fVar23;
              auVar18._4_4_ = *(float *)(lVar14 + 0x14) * fVar24;
              auVar18._8_4_ = *(float *)(lVar14 + 0x18) * fVar25;
              auVar18._12_4_ = *(float *)(lVar14 + 0x1c) * *(float *)((long)plVar7 + 0x1c);
              fVar19 = fVar23 * (float)*(undefined8 *)(lVar14 + 0x20);
              fVar20 = fVar24 * (float)((ulong)*(undefined8 *)(lVar14 + 0x20) >> 0x20);
              fVar21 = fVar25 * (float)*(undefined8 *)(lVar14 + 0x28);
              fVar22 = *(float *)((long)plVar7 + 0x1c) *
                       (float)((ulong)*(undefined8 *)(lVar14 + 0x28) >> 0x20);
              fVar23 = fVar23 * (float)*(undefined8 *)(lVar14 + 0x30);
              fVar24 = fVar24 * (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20);
              fVar25 = fVar25 * (float)*(undefined8 *)(lVar14 + 0x38);
              auVar17 = NEON_ext(auVar18,auVar18,8,1);
              auVar26._4_4_ = fVar20;
              auVar26._0_4_ = fVar19;
              auVar26._8_4_ = fVar21;
              auVar26._12_4_ = fVar22;
              auVar3._4_4_ = fVar20;
              auVar3._0_4_ = fVar19;
              auVar3._8_4_ = fVar21;
              auVar3._12_4_ = fVar22;
              auVar26 = NEON_ext(auVar26,auVar3,8,1);
              auVar16._4_4_ = fVar19 + fVar20 + auVar26._0_4_;
              auVar16._0_4_ = auVar18._0_4_ + auVar18._4_4_ + auVar17._0_4_;
              auVar17._4_4_ = fVar24;
              auVar17._0_4_ = fVar23;
              auVar17._8_4_ = fVar25;
              auVar17._12_4_ = 0;
              auVar4._4_4_ = fVar24;
              auVar4._0_4_ = fVar23;
              auVar4._8_4_ = fVar25;
              auVar4._12_4_ = 0;
              auVar26 = NEON_ext(auVar17,auVar4,8,1);
              auVar16._8_4_ = fVar23 + fVar24 + auVar26._0_4_ + auVar26._4_4_;
            }
            else {
              auVar16 = SUB1612(*(undefined1 (*) [16])(plVar7 + 2),0);
            }
            *(long *)(lVar6 + 0x38) = auVar16._0_8_;
            *(int *)(lVar6 + 0x40) = auVar16._8_4_;
            if (plVar7[1] == 0) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = *(undefined4 *)(plVar7[1] + 4);
            }
            *(undefined4 *)(lVar6 + 0x44) = uVar8;
            return;
          }
          uVar9 = plVar13[2] - lVar11;
          uVar10 = (long)uVar9 >> 2;
          if (uVar10 <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 >> 0x3d != 0) goto LAB_10aa44704;
          lVar6 = uVar10 << 3;
          __Znwm();
          plVar7 = (long *)(lVar6 + lVar12);
          plVar15 = plVar7 + 1;
          *plVar7 = lVar14;
          _memcpy(plVar7 + -(lVar12 >> 3),lVar11,lVar12);
          *plVar13 = (long)(plVar7 + -(lVar12 >> 3));
          plVar13[1] = (long)plVar15;
          plVar13[2] = lVar6 + uVar10 * 8;
          if (lVar11 != 0) {
            __ZdlPv(lVar11);
          }
        }
        plVar13[1] = (long)plVar15;
      }
    }
  }
  return;
}



/* Entry: 10aa44708; end: 10aa4478f;  */

void FUN_10aa44708(long param_1,long *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  lVar4 = *param_2;
  *(int *)(param_1 + 8) = (int)param_2[4];
  *(long *)(param_1 + 0x10) = lVar4;
  if (param_3 == 0) {
    fVar12 = *(float *)(param_2 + 2);
    fVar13 = *(float *)((long)param_2 + 0x14);
    fVar14 = *(float *)(param_2 + 3);
    auVar7._0_4_ = *(float *)(lVar4 + 0x10) * fVar12;
    auVar7._4_4_ = *(float *)(lVar4 + 0x14) * fVar13;
    auVar7._8_4_ = *(float *)(lVar4 + 0x18) * fVar14;
    auVar7._12_4_ = *(float *)(lVar4 + 0x1c) * *(float *)((long)param_2 + 0x1c);
    fVar8 = fVar12 * (float)*(undefined8 *)(lVar4 + 0x20);
    fVar9 = fVar13 * (float)((ulong)*(undefined8 *)(lVar4 + 0x20) >> 0x20);
    fVar10 = fVar14 * (float)*(undefined8 *)(lVar4 + 0x28);
    fVar11 = *(float *)((long)param_2 + 0x1c) *
             (float)((ulong)*(undefined8 *)(lVar4 + 0x28) >> 0x20);
    fVar12 = fVar12 * (float)*(undefined8 *)(lVar4 + 0x30);
    fVar13 = fVar13 * (float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20);
    fVar14 = fVar14 * (float)*(undefined8 *)(lVar4 + 0x38);
    auVar6 = NEON_ext(auVar7,auVar7,8,1);
    auVar15._4_4_ = fVar9;
    auVar15._0_4_ = fVar8;
    auVar15._8_4_ = fVar10;
    auVar15._12_4_ = fVar11;
    auVar1._4_4_ = fVar9;
    auVar1._0_4_ = fVar8;
    auVar1._8_4_ = fVar10;
    auVar1._12_4_ = fVar11;
    auVar15 = NEON_ext(auVar15,auVar1,8,1);
    auVar5._4_4_ = fVar8 + fVar9 + auVar15._0_4_;
    auVar5._0_4_ = auVar7._0_4_ + auVar7._4_4_ + auVar6._0_4_;
    auVar6._4_4_ = fVar13;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = fVar14;
    auVar6._12_4_ = 0;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar12;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = 0;
    auVar15 = NEON_ext(auVar6,auVar2,8,1);
    auVar5._8_4_ = fVar12 + fVar13 + auVar15._0_4_ + auVar15._4_4_;
  }
  else {
    auVar5 = SUB1612(*(undefined1 (*) [16])(param_2 + 2),0);
  }
  *(long *)(param_1 + 0x38) = auVar5._0_8_;
  *(int *)(param_1 + 0x40) = auVar5._8_4_;
  if (param_2[1] == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(param_2[1] + 4);
  }
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  return;
}



/* Entry: 10aa44790; end: 10aa44843;  */

ulong FUN_10aa44790(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((0x1f < param_2) || (uVar1 = *(uint *)(param_1 + 8), 0x1f < uVar1)) {
    return 0;
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x2d01U) == 0) {
    if (uVar1 == 9) {
      return (ulong)(*(int *)(param_1 + 0x7c) - 1U < 2);
    }
    if (uVar1 != 0x1f) {
      return 0;
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x24);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      puVar4 = (ulong *)(*(long *)(param_1 + 0x30) + 0x40);
      do {
        uVar3 = uVar3 - 1;
        uVar2 = *puVar4;
        FUN_10aa44790(uVar2,param_2 + 1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        puVar4 = puVar4 + 0xc;
      } while (uVar3 != 0);
      return uVar2;
    }
  }
  return 1;
}



/* Entry: 10aa44844; end: 10aa44857;  */

void FUN_10aa44844(undefined8 param_1,float *param_2,undefined8 *param_3,int param_4,float *param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  ulong uStack_120;
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_a0 [16];
  
  puVar14 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (0x1f < param_4) {
    return;
  }
  if (param_2[2] == 4.34403e-44) {
    if ((int)param_2[9] < 1) {
      return;
    }
    lVar16 = 0;
    lVar17 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0xc) + lVar16);
      fVar49 = *(float *)(puVar1 + 2);
      fVar51 = *(float *)((long)puVar1 + 0x14);
      fVar50 = *(float *)(puVar1 + 3);
      fVar26 = (float)puVar1[1];
      fVar36 = (float)param_3[3];
      fVar34 = (float)param_3[2];
      fVar43 = (float)((ulong)param_3[2] >> 0x20);
      fVar21 = *(float *)(puVar1 + 4);
      fVar38 = *(float *)((long)puVar1 + 0x24);
      fVar44 = *(float *)(puVar1 + 5);
      fVar40 = (float)puVar1[7];
      fVar27 = (float)((ulong)puVar1[7] >> 0x20);
      fVar33 = (float)puVar1[6];
      fVar35 = (float)((ulong)puVar1[6] >> 0x20);
      fVar52 = (float)*puVar1;
      fVar24 = (float)((ulong)*puVar1 >> 0x20);
      fVar41 = (float)param_3[4];
      fVar42 = (float)((ulong)param_3[4] >> 0x20);
      fVar37 = (float)*param_3;
      auVar45._0_4_ = fVar37 * fVar33;
      fVar28 = (float)((ulong)*param_3 >> 0x20);
      auVar45._4_4_ = fVar28 * fVar35;
      fVar32 = (float)param_3[1];
      auVar45._8_4_ = fVar32 * fVar40;
      auVar45._12_4_ = (float)((ulong)param_3[1] >> 0x20) * fVar27;
      fVar23 = fVar34 * fVar33;
      fVar25 = fVar43 * fVar35;
      fVar27 = (float)((ulong)param_3[3] >> 0x20) * fVar27;
      fVar33 = fVar41 * fVar33;
      fVar35 = fVar42 * fVar35;
      fVar39 = (float)param_3[5];
      auVar47._4_4_ = fVar35;
      auVar47._0_4_ = fVar33;
      auVar47._8_4_ = fVar39 * fVar40;
      auVar47._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar33;
      auVar5._8_4_ = fVar39 * fVar40;
      auVar5._12_4_ = 0;
      auVar47 = NEON_ext(auVar47,auVar5,8,1);
      auVar20._4_4_ = fVar25;
      auVar20._0_4_ = fVar23;
      auVar20._8_4_ = fVar36 * fVar40;
      auVar20._12_4_ = fVar27;
      auVar48._4_4_ = fVar25;
      auVar48._0_4_ = fVar23;
      auVar48._8_4_ = fVar36 * fVar40;
      auVar48._12_4_ = fVar27;
      auVar48 = NEON_ext(auVar20,auVar48,8,1);
      uStack_120 = CONCAT44(fVar24 * fVar37 + fVar51 * fVar28 + fVar38 * fVar32,
                            fVar52 * fVar37 + fVar49 * fVar28 + fVar21 * fVar32);
      dStack_118 = (double)CONCAT44(fVar37 * 0.0 + fVar28 * 0.0 + fVar32 * 0.0,
                                    fVar26 * fVar37 + fVar50 * fVar28 + fVar44 * fVar32);
      auVar20 = NEON_ext(auVar45,auVar45,8,1);
      uStack_108 = CONCAT44(fVar34 * 0.0 + fVar43 * 0.0 + fVar36 * 0.0,
                            fVar26 * fVar34 + fVar50 * fVar43 + fVar44 * fVar36);
      uStack_110 = CONCAT44(fVar24 * fVar34 + fVar51 * fVar43 + fVar38 * fVar36,
                            fVar52 * fVar34 + fVar49 * fVar43 + fVar21 * fVar36);
      dStack_f0 = (double)CONCAT44((float)((ulong)param_3[6] >> 0x20) +
                                   fVar23 + fVar25 + auVar48._0_4_,
                                   (float)param_3[6] + auVar45._0_4_ + auVar45._4_4_ + auVar20._0_4_
                                  );
      dStack_e8 = (double)CONCAT44((float)((ulong)param_3[7] >> 0x20) + 0.0,
                                   (float)param_3[7] +
                                   fVar33 + fVar35 + auVar47._0_4_ + auVar47._4_4_);
      uStack_f8 = CONCAT44(fVar41 * 0.0 + fVar42 * 0.0 + fVar39 * 0.0,
                           fVar26 * fVar41 + fVar50 * fVar42 + fVar44 * fVar39);
      uStack_100 = CONCAT44(fVar24 * fVar41 + fVar51 * fVar42 + fVar38 * fVar39,
                            fVar52 * fVar41 + fVar49 * fVar42 + fVar21 * fVar39);
      FUN_10aa44858(puVar14,puVar1[8],&uStack_120,param_4 + 1,param_5,param_6);
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x60;
    } while (lVar17 < (int)param_2[9]);
    return;
  }
  FUN_10aa452a0(param_5,puVar14,param_2,param_3);
  pfVar15 = param_2;
  (**(code **)(*(long *)param_2 + 0x38))();
  if (ABS(*pfVar15) < 1e-06) {
    return;
  }
  if (ABS(pfVar15[1]) < 1e-06) {
    return;
  }
  if (ABS(pfVar15[2]) < 1e-06) {
    return;
  }
  fVar51 = param_2[2];
  uVar19 = 0x3f800000;
  uVar22 = 0x3f80000000000000;
  fVar49 = 0.0;
  fVar50 = 1.0;
  if ((int)fVar51 < 0x14) {
    if (fVar51 == 1.82169e-44) {
LAB_10aa44a1c:
      fVar51 = param_2[0x12];
    }
    else {
      if (fVar51 != 1.54143e-44) {
        if (fVar51 != 1.4013e-44) goto LAB_10aa44a4c;
        goto LAB_10aa44a1c;
      }
      fVar51 = param_2[0x16];
    }
    if (fVar51 == 2.8026e-45) {
      uVar19 = 0xbf80000000000000;
      fVar38 = -1.0;
      uVar22 = 0x3f800000;
      fVar49 = 0.0;
      fVar50 = 1.0;
      fVar51 = 0.0;
      fVar21 = 0.0;
      fVar44 = 1.0;
      fVar52 = 0.0;
      goto LAB_10aa44a60;
    }
    if (fVar51 != 0.0) goto LAB_10aa44a4c;
    uVar19 = 0;
    fVar51 = 1.0;
    fVar49 = -1.0;
    fVar50 = 0.0;
    fVar21 = 0.0;
  }
  else {
LAB_10aa44a4c:
    fVar51 = 0.0;
    fVar21 = 1.0;
  }
  fVar44 = 0.0;
  fVar38 = 0.0;
  fVar52 = 1.0;
LAB_10aa44a60:
  puVar1 = *(undefined8 **)*param_6;
  puVar2 = (undefined8 *)((long *)*param_6)[1];
  uVar29 = *puVar1;
  fVar28 = (float)uVar29 * 0.01;
  fVar32 = (float)((ulong)uVar29 >> 0x20) * 0.01;
  fVar34 = *(float *)(puVar1 + 1) * 0.01;
  fVar23 = (float)*(undefined8 *)(param_5 + 8);
  fVar25 = (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
  fVar35 = fVar28 * fVar23;
  fVar41 = fVar32 * fVar25;
  fVar43 = fVar34 * (float)*(undefined8 *)(param_5 + 10);
  uVar29 = *puVar2;
  fVar24 = (float)uVar29 * 0.01;
  fVar26 = (float)((ulong)uVar29 >> 0x20) * 0.01;
  fVar37 = *(float *)(puVar2 + 1) * 0.01;
  fVar23 = fVar24 * fVar23;
  fVar25 = fVar26 * fVar25;
  fVar27 = fVar37 * (float)*(undefined8 *)(param_5 + 10);
  auVar46._0_4_ = fVar28 * *param_5;
  auVar46._4_4_ = fVar32 * param_5[1];
  auVar46._8_4_ = fVar34 * param_5[2];
  auVar46._12_4_ = param_5[3] * 0.0;
  auVar30._0_4_ = fVar28 * param_5[4];
  auVar30._4_4_ = fVar32 * param_5[5];
  auVar30._8_4_ = fVar34 * param_5[6];
  auVar30._12_4_ = param_5[7] * 0.0;
  auVar48 = NEON_ext(auVar46,auVar46,8,1);
  auVar47 = NEON_ext(auVar30,auVar30,8,1);
  auVar10._4_4_ = fVar41;
  auVar10._0_4_ = fVar35;
  auVar10._8_4_ = fVar43;
  auVar10._12_4_ = 0;
  auVar11._4_4_ = fVar41;
  auVar11._0_4_ = fVar35;
  auVar11._8_4_ = fVar43;
  auVar11._12_4_ = 0;
  auVar20 = NEON_ext(auVar10,auVar11,8,1);
  fVar43 = (float)*(undefined8 *)(param_5 + 0xc);
  fVar40 = auVar46._0_4_ + auVar46._4_4_ + auVar48._0_4_ + fVar43;
  fVar36 = (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
  fVar42 = auVar30._0_4_ + auVar30._4_4_ + auVar47._0_4_ + fVar36;
  fVar33 = (float)*(undefined8 *)(param_5 + 0xe);
  fVar35 = fVar35 + fVar41 + auVar20._0_4_ + auVar20._4_4_ + fVar33;
  fVar32 = (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20);
  fVar34 = fVar32 + 0.0;
  auVar31._0_4_ = *param_5 * fVar24;
  auVar31._4_4_ = param_5[1] * fVar26;
  auVar31._8_4_ = param_5[2] * fVar37;
  auVar31._12_4_ = param_5[3] * 0.0;
  fVar24 = param_5[4] * fVar24;
  fVar26 = param_5[5] * fVar26;
  fVar37 = param_5[6] * fVar37;
  fVar28 = param_5[7] * 0.0;
  auVar48 = NEON_ext(auVar31,auVar31,8,1);
  auVar3._4_4_ = fVar26;
  auVar3._0_4_ = fVar24;
  auVar3._8_4_ = fVar37;
  auVar3._12_4_ = fVar28;
  auVar4._4_4_ = fVar26;
  auVar4._0_4_ = fVar24;
  auVar4._8_4_ = fVar37;
  auVar4._12_4_ = fVar28;
  auVar47 = NEON_ext(auVar3,auVar4,8,1);
  auVar6._4_4_ = fVar25;
  auVar6._0_4_ = fVar23;
  auVar6._8_4_ = fVar27;
  auVar6._12_4_ = 0;
  auVar7._4_4_ = fVar25;
  auVar7._0_4_ = fVar23;
  auVar7._8_4_ = fVar27;
  auVar7._12_4_ = 0;
  auVar20 = NEON_ext(auVar6,auVar7,8,1);
  fVar43 = fVar43 + auVar48._0_4_ + auVar31._0_4_ + auVar31._4_4_;
  fVar36 = fVar36 + auVar47._0_4_ + fVar24 + fVar26;
  fVar33 = fVar33 + fVar23 + fVar25 + auVar20._0_4_ + auVar20._4_4_;
  fVar32 = fVar32 + 0.0;
  auVar12._4_4_ = fVar42;
  auVar12._0_4_ = fVar40;
  auVar12._8_4_ = fVar35;
  auVar12._12_4_ = fVar34;
  auVar13._4_4_ = fVar42;
  auVar13._0_4_ = fVar40;
  auVar13._8_4_ = fVar35;
  auVar13._12_4_ = fVar34;
  auVar20 = NEON_ext(auVar12,auVar13,8,1);
  auVar8._4_4_ = fVar36;
  auVar8._0_4_ = fVar43;
  auVar8._8_4_ = fVar33;
  auVar8._12_4_ = fVar32;
  auVar9._4_4_ = fVar36;
  auVar9._0_4_ = fVar43;
  auVar9._8_4_ = fVar33;
  auVar9._12_4_ = fVar32;
  auVar48 = NEON_ext(auVar8,auVar9,8,1);
  fVar28 = fVar36 * fVar49 + fVar43 * fVar50 + auVar48._0_4_ * 0.0;
  fVar32 = fVar42 * fVar49 + fVar40 * fVar50 + auVar20._0_4_ * 0.0;
  fVar26 = (float)((ulong)uVar19 >> 0x20);
  fVar37 = (float)((ulong)uVar22 >> 0x20);
  fVar34 = (float)uVar19 * fVar42 + fVar51 * fVar40 + (float)uVar22 * fVar35;
  fVar23 = fVar26 * fVar42 + fVar40 * 0.0 + fVar37 * fVar35;
  fVar24 = (float)uVar19 * fVar36 + fVar51 * fVar43 + (float)uVar22 * fVar33;
  fVar26 = fVar26 * fVar36 + fVar43 * 0.0 + fVar37 * fVar33;
  fVar37 = fVar24 - fVar34;
  uVar19 = NEON_ext(CONCAT44(fVar26,fVar24),CONCAT44(fVar32,fVar28),4,1);
  fVar43 = (float)uVar19 - fVar23;
  fVar25 = (float)((ulong)uVar19 >> 0x20) - fVar32;
  fVar37 = fVar43 * fVar43 + fVar25 * fVar25 + fVar37 * fVar37;
  if ((0.0 <= fVar37) && (fVar37 = SQRT(fVar37), 1e-06 <= fVar37)) {
    dVar18 = (double)fVar37;
    dStack_b8 = (double)fVar32;
    dStack_b0 = (double)fVar34;
    dStack_a8 = (double)fVar23;
    dStack_d0 = ((double)fVar28 - dStack_b8) / dVar18;
    dStack_c8 = ((double)fVar24 - dStack_b0) / dVar18;
    dStack_c0 = ((double)fVar26 - dStack_a8) / dVar18;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
    uStack_110 = 0;
    dStack_118 = 0.0;
    uStack_100 = 0;
    uStack_108 = 0;
    dStack_f0 = 0.0;
    uStack_f8 = 0;
    dStack_e0 = 0.0;
    dStack_e8 = 0.0;
    FUN_10aa457f8(param_2,&dStack_b8,&dStack_d0,*(undefined1 *)param_6[1],&uStack_120);
    if ((int)param_2 != 0) {
      lVar17 = *(long *)param_6[2];
      if ((float)(dStack_118 / dVar18) < *(float *)(lVar17 + 8)) {
        *(float *)(lVar17 + 8) = (float)(dStack_118 / dVar18);
        *(undefined **)(lVar17 + 0x10) = puVar14;
        *(undefined4 *)(lVar17 + 0x44) = 0xffffffff;
        func_0x00010980adc4(param_5,auStack_a0);
        fVar24 = -(float)auStack_a0._0_8_;
        fVar26 = -SUB84(auStack_a0._0_8_,4);
        fVar37 = -(float)auStack_a0._8_8_;
        fVar28 = (float)dStack_f0;
        fVar32 = (float)dStack_e8;
        fVar34 = (float)dStack_e0;
        fVar23 = fVar51 * fVar32 + fVar28 * fVar50 + fVar34 * 0.0;
        fVar38 = fVar21 * fVar32 + fVar28 * fVar49 + fVar34 * fVar38;
        fVar50 = fVar44 * fVar32 + fVar28 * 0.0 + fVar34 * fVar52;
        fVar51 = SUB84(auStack_a0._8_8_,4);
        fVar52 = fVar24 * fVar26 + fVar37 * fVar51;
        fVar28 = fVar24 * fVar37 - fVar26 * fVar51;
        fVar49 = fVar24 * fVar26 - fVar37 * fVar51;
        fVar44 = fVar26 * fVar37 + fVar24 * fVar51;
        fVar21 = fVar24 * fVar37 + fVar26 * fVar51;
        fVar51 = fVar26 * fVar37 - fVar24 * fVar51;
        *(float *)(lVar17 + 0x38) =
             (fVar49 + fVar49) * fVar38 +
             fVar23 * ((fVar26 * fVar26 + fVar37 * fVar37) * -2.0 + 1.0) +
             fVar50 * (fVar21 + fVar21);
        *(float *)(lVar17 + 0x3c) =
             ((fVar24 * fVar24 + fVar37 * fVar37) * -2.0 + 1.0) * fVar38 +
             fVar23 * (fVar52 + fVar52) + fVar50 * (fVar51 + fVar51);
        *(float *)(lVar17 + 0x40) =
             (fVar44 + fVar44) * fVar38 + fVar23 * (fVar28 + fVar28) +
             fVar50 * ((fVar24 * fVar24 + fVar26 * fVar26) * -2.0 + 1.0);
      }
    }
  }
  return;
}



/* Entry: 10aa44858; end: 10aa44dab;  */

void FUN_10aa44858(undefined8 param_1,float *param_2,undefined8 *param_3,int param_4,float *param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float *pfVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulong uStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 auStack_90 [16];
  
  if (0x1f < param_4) {
    return;
  }
  if (param_2[2] == 4.34403e-44) {
    if ((int)param_2[9] < 1) {
      return;
    }
    lVar15 = 0;
    lVar16 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0xc) + lVar15);
      fVar48 = *(float *)(puVar1 + 2);
      fVar50 = *(float *)((long)puVar1 + 0x14);
      fVar49 = *(float *)(puVar1 + 3);
      fVar25 = (float)puVar1[1];
      fVar35 = (float)param_3[3];
      fVar33 = (float)param_3[2];
      fVar42 = (float)((ulong)param_3[2] >> 0x20);
      fVar20 = *(float *)(puVar1 + 4);
      fVar37 = *(float *)((long)puVar1 + 0x24);
      fVar43 = *(float *)(puVar1 + 5);
      fVar39 = (float)puVar1[7];
      fVar26 = (float)((ulong)puVar1[7] >> 0x20);
      fVar32 = (float)puVar1[6];
      fVar34 = (float)((ulong)puVar1[6] >> 0x20);
      fVar51 = (float)*puVar1;
      fVar23 = (float)((ulong)*puVar1 >> 0x20);
      fVar40 = (float)param_3[4];
      fVar41 = (float)((ulong)param_3[4] >> 0x20);
      fVar36 = (float)*param_3;
      auVar44._0_4_ = fVar36 * fVar32;
      fVar27 = (float)((ulong)*param_3 >> 0x20);
      auVar44._4_4_ = fVar27 * fVar34;
      fVar31 = (float)param_3[1];
      auVar44._8_4_ = fVar31 * fVar39;
      auVar44._12_4_ = (float)((ulong)param_3[1] >> 0x20) * fVar26;
      fVar22 = fVar33 * fVar32;
      fVar24 = fVar42 * fVar34;
      fVar26 = (float)((ulong)param_3[3] >> 0x20) * fVar26;
      fVar32 = fVar40 * fVar32;
      fVar34 = fVar41 * fVar34;
      fVar38 = (float)param_3[5];
      auVar46._4_4_ = fVar34;
      auVar46._0_4_ = fVar32;
      auVar46._8_4_ = fVar38 * fVar39;
      auVar46._12_4_ = 0;
      auVar5._4_4_ = fVar34;
      auVar5._0_4_ = fVar32;
      auVar5._8_4_ = fVar38 * fVar39;
      auVar5._12_4_ = 0;
      auVar46 = NEON_ext(auVar46,auVar5,8,1);
      auVar19._4_4_ = fVar24;
      auVar19._0_4_ = fVar22;
      auVar19._8_4_ = fVar35 * fVar39;
      auVar19._12_4_ = fVar26;
      auVar47._4_4_ = fVar24;
      auVar47._0_4_ = fVar22;
      auVar47._8_4_ = fVar35 * fVar39;
      auVar47._12_4_ = fVar26;
      auVar47 = NEON_ext(auVar19,auVar47,8,1);
      uStack_110 = CONCAT44(fVar23 * fVar36 + fVar50 * fVar27 + fVar37 * fVar31,
                            fVar51 * fVar36 + fVar48 * fVar27 + fVar20 * fVar31);
      dStack_108 = (double)CONCAT44(fVar36 * 0.0 + fVar27 * 0.0 + fVar31 * 0.0,
                                    fVar25 * fVar36 + fVar49 * fVar27 + fVar43 * fVar31);
      auVar19 = NEON_ext(auVar44,auVar44,8,1);
      uStack_f8 = CONCAT44(fVar33 * 0.0 + fVar42 * 0.0 + fVar35 * 0.0,
                           fVar25 * fVar33 + fVar49 * fVar42 + fVar43 * fVar35);
      uStack_100 = CONCAT44(fVar23 * fVar33 + fVar50 * fVar42 + fVar37 * fVar35,
                            fVar51 * fVar33 + fVar48 * fVar42 + fVar20 * fVar35);
      dStack_e0 = (double)CONCAT44((float)((ulong)param_3[6] >> 0x20) +
                                   fVar22 + fVar24 + auVar47._0_4_,
                                   (float)param_3[6] + auVar44._0_4_ + auVar44._4_4_ + auVar19._0_4_
                                  );
      dStack_d8 = (double)CONCAT44((float)((ulong)param_3[7] >> 0x20) + 0.0,
                                   (float)param_3[7] +
                                   fVar32 + fVar34 + auVar46._0_4_ + auVar46._4_4_);
      uStack_e8 = CONCAT44(fVar40 * 0.0 + fVar41 * 0.0 + fVar38 * 0.0,
                           fVar25 * fVar40 + fVar49 * fVar41 + fVar43 * fVar38);
      uStack_f0 = CONCAT44(fVar23 * fVar40 + fVar50 * fVar41 + fVar37 * fVar38,
                           fVar51 * fVar40 + fVar48 * fVar41 + fVar20 * fVar38);
      FUN_10aa44858(param_1,puVar1[8],&uStack_110,param_4 + 1,param_5,param_6);
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x60;
    } while (lVar16 < (int)param_2[9]);
    return;
  }
  FUN_10aa452a0(param_5,param_1,param_2,param_3);
  pfVar14 = param_2;
  (**(code **)(*(long *)param_2 + 0x38))();
  if (ABS(*pfVar14) < 1e-06) {
    return;
  }
  if (ABS(pfVar14[1]) < 1e-06) {
    return;
  }
  if (ABS(pfVar14[2]) < 1e-06) {
    return;
  }
  fVar50 = param_2[2];
  uVar18 = 0x3f800000;
  uVar21 = 0x3f80000000000000;
  fVar48 = 0.0;
  fVar49 = 1.0;
  if ((int)fVar50 < 0x14) {
    if (fVar50 == 1.82169e-44) {
LAB_10aa44a1c:
      fVar50 = param_2[0x12];
    }
    else {
      if (fVar50 != 1.54143e-44) {
        if (fVar50 != 1.4013e-44) goto LAB_10aa44a4c;
        goto LAB_10aa44a1c;
      }
      fVar50 = param_2[0x16];
    }
    if (fVar50 == 2.8026e-45) {
      uVar18 = 0xbf80000000000000;
      fVar37 = -1.0;
      uVar21 = 0x3f800000;
      fVar48 = 0.0;
      fVar49 = 1.0;
      fVar50 = 0.0;
      fVar20 = 0.0;
      fVar43 = 1.0;
      fVar51 = 0.0;
      goto LAB_10aa44a60;
    }
    if (fVar50 != 0.0) goto LAB_10aa44a4c;
    uVar18 = 0;
    fVar50 = 1.0;
    fVar48 = -1.0;
    fVar49 = 0.0;
    fVar20 = 0.0;
  }
  else {
LAB_10aa44a4c:
    fVar50 = 0.0;
    fVar20 = 1.0;
  }
  fVar43 = 0.0;
  fVar37 = 0.0;
  fVar51 = 1.0;
LAB_10aa44a60:
  puVar1 = *(undefined8 **)*param_6;
  puVar2 = (undefined8 *)((long *)*param_6)[1];
  uVar28 = *puVar1;
  fVar27 = (float)uVar28 * 0.01;
  fVar31 = (float)((ulong)uVar28 >> 0x20) * 0.01;
  fVar33 = *(float *)(puVar1 + 1) * 0.01;
  fVar22 = (float)*(undefined8 *)(param_5 + 8);
  fVar24 = (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
  fVar34 = fVar27 * fVar22;
  fVar40 = fVar31 * fVar24;
  fVar42 = fVar33 * (float)*(undefined8 *)(param_5 + 10);
  uVar28 = *puVar2;
  fVar23 = (float)uVar28 * 0.01;
  fVar25 = (float)((ulong)uVar28 >> 0x20) * 0.01;
  fVar36 = *(float *)(puVar2 + 1) * 0.01;
  fVar22 = fVar23 * fVar22;
  fVar24 = fVar25 * fVar24;
  fVar26 = fVar36 * (float)*(undefined8 *)(param_5 + 10);
  auVar45._0_4_ = fVar27 * *param_5;
  auVar45._4_4_ = fVar31 * param_5[1];
  auVar45._8_4_ = fVar33 * param_5[2];
  auVar45._12_4_ = param_5[3] * 0.0;
  auVar29._0_4_ = fVar27 * param_5[4];
  auVar29._4_4_ = fVar31 * param_5[5];
  auVar29._8_4_ = fVar33 * param_5[6];
  auVar29._12_4_ = param_5[7] * 0.0;
  auVar47 = NEON_ext(auVar45,auVar45,8,1);
  auVar46 = NEON_ext(auVar29,auVar29,8,1);
  auVar10._4_4_ = fVar40;
  auVar10._0_4_ = fVar34;
  auVar10._8_4_ = fVar42;
  auVar10._12_4_ = 0;
  auVar11._4_4_ = fVar40;
  auVar11._0_4_ = fVar34;
  auVar11._8_4_ = fVar42;
  auVar11._12_4_ = 0;
  auVar19 = NEON_ext(auVar10,auVar11,8,1);
  fVar42 = (float)*(undefined8 *)(param_5 + 0xc);
  fVar39 = auVar45._0_4_ + auVar45._4_4_ + auVar47._0_4_ + fVar42;
  fVar35 = (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
  fVar41 = auVar29._0_4_ + auVar29._4_4_ + auVar46._0_4_ + fVar35;
  fVar32 = (float)*(undefined8 *)(param_5 + 0xe);
  fVar34 = fVar34 + fVar40 + auVar19._0_4_ + auVar19._4_4_ + fVar32;
  fVar31 = (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20);
  fVar33 = fVar31 + 0.0;
  auVar30._0_4_ = *param_5 * fVar23;
  auVar30._4_4_ = param_5[1] * fVar25;
  auVar30._8_4_ = param_5[2] * fVar36;
  auVar30._12_4_ = param_5[3] * 0.0;
  fVar23 = param_5[4] * fVar23;
  fVar25 = param_5[5] * fVar25;
  fVar36 = param_5[6] * fVar36;
  fVar27 = param_5[7] * 0.0;
  auVar47 = NEON_ext(auVar30,auVar30,8,1);
  auVar3._4_4_ = fVar25;
  auVar3._0_4_ = fVar23;
  auVar3._8_4_ = fVar36;
  auVar3._12_4_ = fVar27;
  auVar4._4_4_ = fVar25;
  auVar4._0_4_ = fVar23;
  auVar4._8_4_ = fVar36;
  auVar4._12_4_ = fVar27;
  auVar46 = NEON_ext(auVar3,auVar4,8,1);
  auVar6._4_4_ = fVar24;
  auVar6._0_4_ = fVar22;
  auVar6._8_4_ = fVar26;
  auVar6._12_4_ = 0;
  auVar7._4_4_ = fVar24;
  auVar7._0_4_ = fVar22;
  auVar7._8_4_ = fVar26;
  auVar7._12_4_ = 0;
  auVar19 = NEON_ext(auVar6,auVar7,8,1);
  fVar42 = fVar42 + auVar47._0_4_ + auVar30._0_4_ + auVar30._4_4_;
  fVar35 = fVar35 + auVar46._0_4_ + fVar23 + fVar25;
  fVar32 = fVar32 + fVar22 + fVar24 + auVar19._0_4_ + auVar19._4_4_;
  fVar31 = fVar31 + 0.0;
  auVar12._4_4_ = fVar41;
  auVar12._0_4_ = fVar39;
  auVar12._8_4_ = fVar34;
  auVar12._12_4_ = fVar33;
  auVar13._4_4_ = fVar41;
  auVar13._0_4_ = fVar39;
  auVar13._8_4_ = fVar34;
  auVar13._12_4_ = fVar33;
  auVar19 = NEON_ext(auVar12,auVar13,8,1);
  auVar8._4_4_ = fVar35;
  auVar8._0_4_ = fVar42;
  auVar8._8_4_ = fVar32;
  auVar8._12_4_ = fVar31;
  auVar9._4_4_ = fVar35;
  auVar9._0_4_ = fVar42;
  auVar9._8_4_ = fVar32;
  auVar9._12_4_ = fVar31;
  auVar47 = NEON_ext(auVar8,auVar9,8,1);
  fVar27 = fVar35 * fVar48 + fVar42 * fVar49 + auVar47._0_4_ * 0.0;
  fVar31 = fVar41 * fVar48 + fVar39 * fVar49 + auVar19._0_4_ * 0.0;
  fVar25 = (float)((ulong)uVar18 >> 0x20);
  fVar36 = (float)((ulong)uVar21 >> 0x20);
  fVar33 = (float)uVar18 * fVar41 + fVar50 * fVar39 + (float)uVar21 * fVar34;
  fVar22 = fVar25 * fVar41 + fVar39 * 0.0 + fVar36 * fVar34;
  fVar23 = (float)uVar18 * fVar35 + fVar50 * fVar42 + (float)uVar21 * fVar32;
  fVar25 = fVar25 * fVar35 + fVar42 * 0.0 + fVar36 * fVar32;
  fVar36 = fVar23 - fVar33;
  uVar18 = NEON_ext(CONCAT44(fVar25,fVar23),CONCAT44(fVar31,fVar27),4,1);
  fVar42 = (float)uVar18 - fVar22;
  fVar24 = (float)((ulong)uVar18 >> 0x20) - fVar31;
  fVar36 = fVar42 * fVar42 + fVar24 * fVar24 + fVar36 * fVar36;
  if ((0.0 <= fVar36) && (fVar36 = SQRT(fVar36), 1e-06 <= fVar36)) {
    dVar17 = (double)fVar36;
    dStack_a8 = (double)fVar31;
    dStack_a0 = (double)fVar33;
    dStack_98 = (double)fVar22;
    dStack_c0 = ((double)fVar27 - dStack_a8) / dVar17;
    dStack_b8 = ((double)fVar23 - dStack_a0) / dVar17;
    dStack_b0 = ((double)fVar25 - dStack_98) / dVar17;
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    uStack_100 = 0;
    dStack_108 = 0.0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    dStack_e0 = 0.0;
    uStack_e8 = 0;
    dStack_d0 = 0.0;
    dStack_d8 = 0.0;
    FUN_10aa457f8(param_2,&dStack_a8,&dStack_c0,*(undefined1 *)param_6[1],&uStack_110);
    if ((int)param_2 != 0) {
      lVar16 = *(long *)param_6[2];
      if ((float)(dStack_108 / dVar17) < *(float *)(lVar16 + 8)) {
        *(float *)(lVar16 + 8) = (float)(dStack_108 / dVar17);
        *(undefined8 *)(lVar16 + 0x10) = param_1;
        *(undefined4 *)(lVar16 + 0x44) = 0xffffffff;
        func_0x00010980adc4(param_5,auStack_90);
        fVar23 = -(float)auStack_90._0_8_;
        fVar25 = -SUB84(auStack_90._0_8_,4);
        fVar36 = -(float)auStack_90._8_8_;
        fVar27 = (float)dStack_e0;
        fVar31 = (float)dStack_d8;
        fVar33 = (float)dStack_d0;
        fVar22 = fVar50 * fVar31 + fVar27 * fVar49 + fVar33 * 0.0;
        fVar37 = fVar20 * fVar31 + fVar27 * fVar48 + fVar33 * fVar37;
        fVar49 = fVar43 * fVar31 + fVar27 * 0.0 + fVar33 * fVar51;
        fVar50 = SUB84(auStack_90._8_8_,4);
        fVar51 = fVar23 * fVar25 + fVar36 * fVar50;
        fVar27 = fVar23 * fVar36 - fVar25 * fVar50;
        fVar48 = fVar23 * fVar25 - fVar36 * fVar50;
        fVar43 = fVar25 * fVar36 + fVar23 * fVar50;
        fVar20 = fVar23 * fVar36 + fVar25 * fVar50;
        fVar50 = fVar25 * fVar36 - fVar23 * fVar50;
        *(float *)(lVar16 + 0x38) =
             (fVar48 + fVar48) * fVar37 +
             fVar22 * ((fVar25 * fVar25 + fVar36 * fVar36) * -2.0 + 1.0) +
             fVar49 * (fVar20 + fVar20);
        *(float *)(lVar16 + 0x3c) =
             ((fVar23 * fVar23 + fVar36 * fVar36) * -2.0 + 1.0) * fVar37 +
             fVar22 * (fVar51 + fVar51) + fVar49 * (fVar50 + fVar50);
        *(float *)(lVar16 + 0x40) =
             (fVar43 + fVar43) * fVar37 + fVar22 * (fVar27 + fVar27) +
             fVar49 * ((fVar23 * fVar23 + fVar25 * fVar25) * -2.0 + 1.0);
      }
    }
  }
  return;
}



/* Entry: 10aa44dac; end: 10aa44e2f;  */

void FUN_10aa44dac(void)

{
  undefined8 *puVar1;
  
  if ((bRam00000001137ec068 & 1) == 0) {
    puVar1 = (undefined8 *)0x1137ec068;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      FUN_10aa48018();
      uRam00000001137ec0e8 = puVar1[1];
      uRam00000001137ec0e0 = *puVar1;
      uRam00000001137ec0f8 = puVar1[3];
      uRam00000001137ec0f0 = puVar1[2];
      uRam00000001137ec108 = puVar1[5];
      uRam00000001137ec100 = puVar1[4];
      uRam00000001137ec110 = 0;
      uRam00000001137ec118 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137ec068);
      return;
    }
  }
  return;
}



/* Entry: 10aa44e30; end: 10aa4520f;  */

long * FUN_10aa44e30(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar16 <= uVar9) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar7 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x40;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[7] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  *(undefined4 *)(plVar8 + 7) = 0x3f800000;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_10aa44fac:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa451fc);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar10 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar6 <= uVar9) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar2 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_10aa44fac;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar10 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_10aa45190;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_10aa45190:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10aa45210; end: 10aa4529f;  */

void FUN_10aa45210(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010aa45258(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa452a0; end: 10aa4577f;  */

long * FUN_10aa452a0(long *param_1,ulong param_2,long param_3,float *param_4)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong unaff_x27;
  undefined4 uVar28;
  undefined1 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  
  iVar1 = *(int *)(param_2 + 0x168);
  uVar19 = param_2;
  FUN_10aa45780(param_2,param_3);
  uVar27 = param_1[1];
  if (uVar27 != 0) {
    uVar17 = uVar27 - 1;
    if ((uVar27 & uVar17) == 0) {
      unaff_x27 = uVar17 & uVar19;
    }
    else {
      unaff_x27 = uVar19;
      if (uVar27 <= uVar19) {
        uVar21 = 0;
        if (uVar27 != 0) {
          uVar21 = uVar19 / uVar27;
        }
        unaff_x27 = uVar19 - uVar21 * uVar27;
      }
    }
    puVar20 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if (puVar20 != (undefined8 *)0x0) {
      for (plVar26 = (long *)*puVar20; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
        uVar21 = plVar26[1];
        if (uVar21 == uVar19) {
          if (plVar26[2] == param_2 && plVar26[3] == param_3) goto LAB_10aa45614;
        }
        else {
          if ((uVar27 & uVar17) == 0) {
            uVar21 = uVar21 & uVar17;
          }
          else if (uVar27 <= uVar21) {
            uVar18 = 0;
            if (uVar27 != 0) {
              uVar18 = uVar21 / uVar27;
            }
            uVar21 = uVar21 - uVar18 * uVar27;
          }
          if (uVar21 != unaff_x27) break;
        }
      }
    }
  }
  plVar26 = (long *)0x70;
  __Znwm();
  *plVar26 = 0;
  plVar26[1] = uVar19;
  plVar26[2] = param_2;
  plVar26[3] = param_3;
  plVar26[0xb] = 0;
  plVar26[10] = 0;
  plVar26[0xd] = 0;
  plVar26[0xc] = 0;
  plVar26[5] = 0;
  plVar26[4] = 0;
  plVar26[7] = 0;
  plVar26[6] = 0;
  plVar26[9] = 0;
  plVar26[8] = 0;
  *(undefined4 *)(plVar26 + 0xc) = 0xffffffff;
  if ((uVar27 == 0) || (*(float *)(param_1 + 4) * (float)uVar27 < (float)(param_1[3] + 1))) {
    uVar17 = 1;
    if (2 < uVar27) {
      uVar17 = (ulong)((uVar27 & uVar27 - 1) != 0);
    }
    uVar17 = uVar17 | uVar27 << 1;
    uVar21 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar17 <= uVar21) {
      uVar17 = uVar21;
    }
    if (uVar17 - 1 == 0) {
      uVar17 = 2;
    }
    else if ((uVar17 & uVar17 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar27 = param_1[1];
    }
    if (uVar27 < uVar17) {
LAB_10aa45428:
      if (uVar17 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10aa4576c);
        (*pcVar14)();
      }
      lVar15 = uVar17 << 3;
      __Znwm();
      lVar16 = *param_1;
      *param_1 = lVar15;
      if (lVar16 != 0) {
        __ZdlPv();
      }
      uVar27 = 0;
      param_1[1] = uVar17;
      do {
        *(undefined8 *)(*param_1 + uVar27 * 8) = 0;
        uVar27 = uVar27 + 1;
      } while (uVar17 != uVar27);
      plVar22 = (long *)param_1[2];
      uVar27 = uVar17;
      if (plVar22 != (long *)0x0) {
        uVar21 = plVar22[1];
        uVar18 = uVar17 - 1;
        if ((uVar17 & uVar18) == 0) {
          uVar21 = uVar21 & uVar18;
        }
        else if (uVar17 <= uVar21) {
          uVar25 = 0;
          if (uVar17 != 0) {
            uVar25 = uVar21 / uVar17;
          }
          uVar21 = uVar21 - uVar25 * uVar17;
        }
        *(long **)(*param_1 + uVar21 * 8) = param_1 + 2;
        plVar23 = (long *)*plVar22;
        while (plVar23 != (long *)0x0) {
          uVar25 = plVar23[1];
          if ((uVar17 & uVar18) == 0) {
            uVar25 = uVar25 & uVar18;
          }
          else if (uVar17 <= uVar25) {
            uVar2 = 0;
            if (uVar17 != 0) {
              uVar2 = uVar25 / uVar17;
            }
            uVar25 = uVar25 - uVar2 * uVar17;
          }
          plVar24 = plVar23;
          if (uVar25 != uVar21) {
            lVar15 = *param_1;
            if (*(long *)(lVar15 + uVar25 * 8) == 0) {
              *(long **)(lVar15 + uVar25 * 8) = plVar22;
              uVar21 = uVar25;
            }
            else {
              *plVar22 = *plVar23;
              *plVar23 = **(undefined8 **)(lVar15 + uVar25 * 8);
              **(long **)(lVar15 + uVar25 * 8) = (long)plVar23;
              plVar24 = plVar22;
            }
          }
          plVar22 = plVar24;
          plVar23 = (long *)*plVar24;
        }
      }
    }
    else if (uVar17 < uVar27) {
      uVar21 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar27 < 3) || ((uVar27 & uVar27 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar21) {
        uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
      }
      if (uVar17 <= uVar21) {
        uVar17 = uVar21;
      }
      if (uVar17 < uVar27) {
        if (uVar17 != 0) goto LAB_10aa45428;
        lVar15 = *param_1;
        *param_1 = 0;
        if (lVar15 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar27 = 0;
      }
      else {
        uVar27 = param_1[1];
      }
    }
    if ((uVar27 & uVar27 - 1) == 0) {
      unaff_x27 = uVar27 - 1 & uVar19;
    }
    else {
      unaff_x27 = uVar19;
      if (uVar27 <= uVar19) {
        uVar17 = 0;
        if (uVar27 != 0) {
          uVar17 = uVar19 / uVar27;
        }
        unaff_x27 = uVar19 - uVar17 * uVar27;
      }
    }
  }
  lVar15 = *param_1;
  plVar22 = *(long **)(lVar15 + unaff_x27 * 8);
  if (plVar22 == (long *)0x0) {
    plVar22 = param_1 + 2;
    *plVar26 = *plVar22;
    *plVar22 = (long)plVar26;
    *(long **)(lVar15 + unaff_x27 * 8) = plVar22;
    if (*plVar26 == 0) goto LAB_10aa45608;
    uVar19 = *(ulong *)(*plVar26 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar19 = uVar19 & uVar27 - 1;
    }
    else if (uVar27 <= uVar19) {
      uVar17 = 0;
      if (uVar27 != 0) {
        uVar17 = uVar19 / uVar27;
      }
      uVar19 = uVar19 - uVar17 * uVar27;
    }
    plVar22 = (long *)(*param_1 + uVar19 * 8);
  }
  else {
    *plVar26 = *plVar22;
  }
  *plVar22 = (long)plVar26;
LAB_10aa45608:
  param_1[3] = param_1[3] + 1;
LAB_10aa45614:
  if ((int)plVar26[0xc] != iVar1) {
    fVar52 = *param_4;
    fVar53 = param_4[1];
    fVar33 = param_4[2];
    fVar50 = param_4[4];
    fVar51 = param_4[5];
    fVar7 = param_4[6];
    fVar43 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar41 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar34 = *(float *)(param_2 + 0x20);
    fVar36 = *(float *)(param_2 + 0x24);
    fVar37 = *(float *)(param_2 + 0x28);
    fVar8 = param_4[0xc];
    fVar9 = param_4[0xd];
    fVar10 = param_4[0xe];
    fVar46 = (float)*(undefined8 *)(param_4 + 10);
    fVar11 = *(float *)(param_2 + 0x30);
    fVar12 = *(float *)(param_2 + 0x34);
    fVar13 = *(float *)(param_2 + 0x38);
    fVar44 = (float)*(undefined8 *)(param_4 + 8);
    fVar45 = (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
    fVar3 = fVar52 * fVar34 + fVar50 * fVar36 + fVar44 * fVar37;
    fVar4 = fVar53 * fVar34 + fVar51 * fVar36 + fVar45 * fVar37;
    uVar29 = (undefined1)((uint)fVar4 >> 0x18);
    fVar32 = fVar33 * fVar34 + fVar7 * fVar36 + fVar46 * fVar37;
    fVar54 = fVar41 * fVar8;
    fVar55 = fVar42 * fVar9;
    fVar56 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * param_4[0xf];
    auVar30._0_4_ = fVar34 * fVar8;
    auVar30._4_4_ = fVar36 * fVar9;
    auVar30._8_4_ = fVar37 * fVar10;
    auVar30._12_4_ = *(float *)(param_2 + 0x2c) * param_4[0xf];
    auVar47._0_4_ = fVar11 * fVar8;
    auVar47._4_4_ = fVar12 * fVar9;
    auVar47._8_4_ = fVar13 * fVar10;
    auVar57 = NEON_ext(auVar30,auVar30,8,1);
    auVar47._12_4_ = 0;
    auVar31 = NEON_ext(auVar47,auVar47,8,1);
    fVar34 = fVar52 * fVar41 + fVar50 * fVar42 + fVar44 * fVar43;
    fVar36 = fVar53 * fVar41 + fVar51 * fVar42 + fVar45 * fVar43;
    fVar37 = fVar33 * fVar41 + fVar7 * fVar42 + fVar46 * fVar43;
    fVar50 = fVar52 * fVar11 + fVar50 * fVar12 + fVar44 * fVar13;
    fVar51 = fVar53 * fVar11 + fVar51 * fVar12 + fVar45 * fVar13;
    fVar52 = fVar33 * fVar11 + fVar7 * fVar12 + fVar46 * fVar13;
    fVar53 = fVar11 * 0.0 + fVar12 * 0.0 + fVar13 * 0.0;
    auVar5._4_4_ = fVar55;
    auVar5._0_4_ = fVar54;
    auVar5._8_4_ = fVar43 * fVar10;
    auVar5._12_4_ = fVar56;
    auVar6._4_4_ = fVar55;
    auVar6._0_4_ = fVar54;
    auVar6._8_4_ = fVar43 * fVar10;
    auVar6._12_4_ = fVar56;
    auVar38 = NEON_ext(auVar5,auVar6,8,1);
    uVar28 = (undefined4)
             (CONCAT14((char)((uint)fVar32 >> 0x18),
                       CONCAT13((char)((uint)fVar32 >> 0x10),
                                CONCAT12((char)((uint)fVar32 >> 8),CONCAT11(SUB41(fVar32,0),uVar29))
                               )) >> 8);
    auVar48._4_4_ = fVar51;
    auVar48._0_4_ = fVar50;
    auVar48._8_4_ = fVar52;
    auVar48._12_4_ = fVar53;
    auVar49._4_4_ = fVar51;
    auVar49._0_4_ = fVar50;
    auVar49._8_4_ = fVar52;
    auVar49._12_4_ = fVar53;
    auVar48 = NEON_ext(auVar48,auVar49,8,1);
    auVar35._4_4_ = fVar3;
    auVar35._0_4_ = fVar34;
    auVar35._8_4_ = fVar37;
    auVar35._12_4_ = uVar28;
    auVar40._4_4_ = fVar3;
    auVar40._0_4_ = fVar34;
    auVar40._8_4_ = fVar37;
    auVar40._12_4_ = uVar28;
    auVar49 = NEON_ext(auVar35,auVar40,8,1);
    fVar32 = -((float)*(undefined8 *)(param_2 + 0x40) + fVar54 + fVar55 + auVar38._0_4_);
    fVar52 = -((float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) +
              auVar30._0_4_ + auVar30._4_4_ + auVar57._0_4_);
    fVar53 = -((float)*(undefined8 *)(param_2 + 0x48) +
              auVar47._0_4_ + auVar47._4_4_ + auVar31._0_4_ + auVar31._4_4_);
    fVar33 = -((float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20) + 0.0);
    auVar39._0_4_ = fVar34 * fVar32;
    auVar39._4_4_ = fVar3 * fVar52;
    auVar39._8_4_ = fVar50 * fVar53;
    auVar39._12_4_ = fVar33 * 0.0;
    auVar57._0_4_ = fVar36 * fVar32;
    auVar57._4_4_ = fVar4 * fVar52;
    auVar57._8_4_ = fVar51 * fVar53;
    auVar57._12_4_ = fVar33 * 0.0;
    auVar40 = NEON_ext(auVar39,auVar39,8,1);
    auVar35 = NEON_ext(auVar57,auVar57,8,1);
    fVar32 = auVar49._0_4_ * fVar32;
    fVar52 = auVar49._4_4_ * fVar52;
    fVar53 = auVar48._0_4_ * fVar53;
    auVar31._4_4_ = fVar52;
    auVar31._0_4_ = fVar32;
    auVar31._8_4_ = fVar53;
    auVar31._12_4_ = 0;
    auVar38._4_4_ = fVar52;
    auVar38._0_4_ = fVar32;
    auVar38._8_4_ = fVar53;
    auVar38._12_4_ = 0;
    auVar31 = NEON_ext(auVar31,auVar38,8,1);
    plVar26[5] = (ulong)(uint)fVar50;
    plVar26[4] = CONCAT44(fVar3,fVar34);
    plVar26[7] = (ulong)(uint)fVar51;
    plVar26[6] = CONCAT17(uVar29,CONCAT16((char)((uint)fVar4 >> 0x10),
                                          CONCAT15((char)((uint)fVar4 >> 8),
                                                   CONCAT14(SUB41(fVar4,0),fVar36))));
    plVar26[9] = (ulong)(uint)auVar48._0_4_;
    plVar26[8] = auVar49._0_8_;
    plVar26[0xb] = (ulong)(uint)(fVar32 + fVar52 + auVar31._0_4_ + auVar31._4_4_);
    plVar26[10] = CONCAT44(auVar57._0_4_ + auVar57._4_4_ + auVar35._0_4_,
                           auVar39._0_4_ + auVar39._4_4_ + auVar40._0_4_);
    *(int *)(plVar26 + 0xc) = iVar1;
  }
  return plVar26 + 4;
}



/* Entry: 10aa45780; end: 10aa457f7;  */

ulong FUN_10aa45780(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
  uVar2 = (param_1 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  uVar3 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar1) * -0x622015f714c7d297;
  uVar3 = ((ulong)uVar1 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  return (uVar3 ^ uVar3 >> 0x2f) * 0x3bbfd411d6705ad2 ^
         (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 10aa457f8; end: 10aa4710f;  */

/* WARNING: Type propagation algorithm not settling */

char FUN_10aa457f8(undefined8 ******param_1,long *param_2,double *param_3,double *param_4,
                  int param_5,ulong *param_6)

{
  double *pdVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  long lVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  long *plVar11;
  ulong uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  undefined8 *******pppppppuVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  double dVar25;
  undefined8 ******ppppppuVar26;
  undefined8 ******ppppppuVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined8 ******ppppppuVar35;
  double dVar36;
  float fVar37;
  double dVar38;
  undefined8 *****pppppuVar39;
  undefined8 ******ppppppuVar40;
  undefined8 ******ppppppuVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 ******ppppppuStack_140;
  double *pdStack_138;
  double *pdStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  double *pdStack_c0;
  double *pdStack_b8;
  double *pdStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *****pppppuStack_98;
  double *pdStack_90;
  double *pdStack_88;
  undefined8 *******pppppppuStack_80;
  double dStack_78;
  
  iVar16 = (int)param_2[1];
  pppppppuStack_a8 = (undefined8 *******)param_1;
  pdStack_138 = param_3;
  pdStack_130 = param_4;
  ppppppuStack_d0 = param_1;
  pdStack_c0 = param_3;
  pdStack_b8 = param_4;
  pppppuStack_98 = (undefined8 *****)param_3;
  pdStack_90 = param_4;
  pdStack_88 = param_3;
  pppppppuStack_80 = (undefined8 *******)param_4;
  if (param_5 == 0) {
    if (iVar16 < 10) {
      if (iVar16 != 0) {
        if (iVar16 == 8) {
          dVar25 = (double)(*(float *)(param_2 + 6) * *(float *)(param_2 + 4));
          if ((0.0 <= (double)param_1) && (0.0 <= dVar25)) {
            dVar33 = *param_3;
            dVar29 = param_3[1];
            dVar30 = param_3[2];
            dVar36 = *param_4;
            dVar31 = param_4[1];
            dVar38 = param_4[2];
            dVar28 = dVar36 * dVar36 + dVar31 * dVar31 + dVar38 * dVar38;
            dVar36 = dVar33 * dVar36 + dVar29 * dVar31 + dVar30 * dVar38;
            dVar36 = dVar36 + dVar36;
            dVar25 = (dVar33 * dVar33 + dVar29 * dVar29 + dVar30 * dVar30) - dVar25 * dVar25;
            dVar33 = dVar25 * dVar28 * -4.0 + dVar36 * dVar36;
            if (0.0 <= dVar33) {
              dVar33 = SQRT(dVar33);
              dVar29 = -dVar33;
              if (0.0 <= dVar36) {
                dVar29 = dVar33;
              }
              dVar36 = (dVar36 + dVar29) * -0.5;
              dVar28 = dVar36 / dVar28;
              dVar25 = dVar25 / dVar36;
              if (ABS(dVar36) <= 1e-09) {
                dVar25 = INFINITY;
              }
              if (dVar28 <= dVar25) {
                dVar25 = dVar28;
              }
              bVar7 = false;
              bVar8 = true;
              bVar9 = false;
              if (dVar25 <= (double)param_1) {
                bVar7 = false;
                bVar8 = false;
                bVar9 = true;
                if (!NAN(dVar25)) {
                  bVar7 = dVar25 < 0.0;
                  bVar8 = dVar25 == 0.0;
                  bVar9 = false;
                }
              }
              dVar28 = -1.0;
              if (!bVar8 && bVar7 == bVar9) {
                dVar28 = dVar25;
              }
              if (0.0 < dVar28) {
                *(undefined1 *)param_6 = 1;
                param_6[1] = (ulong)dVar28;
                dVar25 = dVar28 * param_4[2] + param_3[2];
                dVar36 = *param_4 * dVar28 + *param_3;
                dVar28 = param_4[1] * dVar28 + param_3[1];
                param_6[4] = (ulong)dVar28;
                param_6[3] = (ulong)dVar36;
                param_6[5] = (ulong)dVar25;
                dVar33 = dVar36 * dVar36 + dVar28 * dVar28 + dVar25 * dVar25;
                if (1e-18 < dVar33 && (ulong)ABS(dVar33) < 0x7ff0000000000000) {
                  dVar33 = 1.0 / SQRT(dVar33);
                  dVar36 = dVar36 * dVar33;
                  dVar28 = dVar28 * dVar33;
                  dVar25 = dVar25 * dVar33;
                }
                else {
                  dVar36 = -*param_4;
                  dVar28 = -param_4[1];
                  dVar25 = -param_4[2];
                }
                param_6[7] = (ulong)dVar28;
                param_6[6] = (ulong)dVar36;
                param_6[8] = (ulong)dVar25;
                return '\x01';
              }
            }
          }
          return '\0';
        }
        if (iVar16 != 9) {
          return '\0';
        }
        plVar11 = param_2;
        (**(code **)(*param_2 + 0x38))();
        dVar25 = (double)(float)*plVar11;
        dVar28 = (double)(float)((ulong)*plVar11 >> 0x20);
        if (ABS(dVar25) < 9.999999974752427e-07) {
          return '\0';
        }
        if (ABS(dVar28) < 9.999999974752427e-07) {
          return '\0';
        }
        if (ABS((double)*(float *)(plVar11 + 1)) < 9.999999974752427e-07) {
          return '\0';
        }
        auVar32 = NEON_fmov(0x3ff0000000000000,8);
        dVar25 = auVar32._0_8_ / dVar25;
        dVar28 = auVar32._8_8_ / dVar28;
        dVar36 = 1.0 / (double)*(float *)(plVar11 + 1);
        if (*(int *)((long)param_2 + 0x7c) == 2) {
          puVar14 = (undefined8 *)param_2[0x11];
          dStack_e0 = dVar36 * param_3[2];
          ppppppuStack_f0 = (undefined8 ******)(dVar25 * *param_3);
          ppppppuStack_e8 = (undefined8 ******)(dVar28 * param_3[1]);
          dVar29 = dVar25 * *param_4;
          dVar30 = dVar28 * param_4[1];
          dVar31 = dVar36 * param_4[2];
          dVar33 = SQRT(dVar29 * dVar29 + dVar30 * dVar30 + dVar31 * dVar31);
          if (dVar33 < 9.999999974752427e-07) {
            return '\0';
          }
          fVar21 = (float)puVar14[2] - (float)*puVar14;
          fVar23 = (float)((ulong)puVar14[2] >> 0x20) - (float)((ulong)*puVar14 >> 0x20);
          fVar24 = (float)puVar14[3] - (float)puVar14[1];
          auVar32._0_4_ = fVar21 * fVar21;
          auVar32._4_4_ = fVar23 * fVar23;
          auVar32._8_4_ = fVar24 * fVar24;
          auVar32._12_4_ = 0;
          auVar22 = NEON_ext(auVar32,auVar32,8,1);
          pppppppuStack_150 = (undefined8 *******)(dVar29 / dVar33);
          ppppppuStack_148 = (undefined8 ******)(dVar30 / dVar33);
          ppppppuStack_140 = (undefined8 ******)(dVar31 / dVar33);
          ppppppuVar26 = &ppppppuStack_f0;
          FUN_10aa47904((double)param_1 * dVar33,(double)*(float *)param_2[0x15],
                        (double)SQRT(auVar22._0_4_ + auVar32._0_4_ + auVar32._4_4_),ppppppuVar26,
                        &pppppppuStack_150,param_6);
        }
        else {
          if (*(int *)((long)param_2 + 0x7c) != 1) {
            return '\0';
          }
          dStack_e0 = dVar36 * param_3[2];
          ppppppuStack_f0 = (undefined8 ******)(dVar25 * *param_3);
          ppppppuStack_e8 = (undefined8 ******)(dVar28 * param_3[1]);
          dVar29 = dVar25 * *param_4;
          dVar30 = dVar28 * param_4[1];
          dVar31 = dVar36 * param_4[2];
          dVar33 = SQRT(dVar29 * dVar29 + dVar30 * dVar30 + dVar31 * dVar31);
          if (dVar33 < 9.999999974752427e-07) {
            return '\0';
          }
          pppppppuStack_150 = (undefined8 *******)(dVar29 / dVar33);
          ppppppuStack_148 = (undefined8 ******)(dVar30 / dVar33);
          ppppppuStack_140 = (undefined8 ******)(dVar31 / dVar33);
          ppppppuVar26 = &ppppppuStack_f0;
          FUN_10aa47c3c((double)param_1 * dVar33,(double)*(float *)param_2[0x15],ppppppuVar26,
                        &pppppppuStack_150,param_6);
        }
        goto joined_r0x00010aa45a6c;
      }
      lVar3 = param_2[6];
      lVar4 = param_2[7];
      fVar21 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar23 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar24 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      if ((double)param_1 < 0.0) {
        return '\0';
      }
      fStack_160 = (float)lVar3;
      fStack_15c = (float)((ulong)lVar3 >> 0x20);
      fStack_158 = (float)lVar4;
      if (fStack_160 + fVar21 < 0.0) {
        return '\0';
      }
      if (fStack_15c + fVar23 < 0.0) {
        return '\0';
      }
      if (fStack_158 + fVar24 < 0.0) {
        return '\0';
      }
      iVar16 = 0;
      dVar29 = (double)(fStack_160 + fVar21);
      dVar30 = (double)(fStack_15c + fVar23);
      dVar31 = (double)(fStack_158 + fVar24);
      ppppppuStack_f0 = (undefined8 ******)0x0;
      pppppppuStack_150 = (undefined8 *******)0x0;
      pppppppuStack_a0 = (undefined8 *******)0x0;
      pdVar13 = param_4 + 1;
      dVar25 = *pdVar13;
      pdVar15 = param_4 + 2;
      dVar38 = *pdVar15;
      pdVar17 = param_3 + 1;
      dVar28 = *pdVar17;
      pdVar18 = param_3 + 2;
      dVar36 = *pdVar18;
      dVar33 = *param_4;
      dVar34 = *param_3;
      ppppppuVar26 = (undefined8 ******)0x0;
      ppppppuVar40 = (undefined8 ******)0x0;
      ppppppuVar35 = (undefined8 ******)0x0;
      do {
        pdVar19 = param_4;
        if (iVar16 == 1) {
          pdVar19 = pdVar13;
        }
        pdVar1 = pdVar15;
        if (iVar16 != 2) {
          pdVar1 = pdVar19;
        }
        if (1e-09 <= ABS(*pdVar1)) {
          pdVar19 = pdVar18;
          ppppppuVar27 = (undefined8 ******)((1.0 / dVar38) * (-dVar31 - dVar36));
          dVar42 = dVar31;
          dVar43 = 1.0 / dVar38;
          if ((iVar16 != 2) &&
             (pdVar19 = param_3,
             ppppppuVar27 = (undefined8 ******)((1.0 / dVar33) * (-dVar29 - dVar34)),
             dVar42 = dVar29, dVar43 = 1.0 / dVar33, iVar16 == 1)) {
            pdVar19 = pdVar17;
            ppppppuVar27 = (undefined8 ******)((1.0 / dVar25) * (-dVar30 - dVar28));
            dVar42 = dVar30;
            dVar43 = 1.0 / dVar25;
          }
          ppppppuVar41 = (undefined8 ******)(dVar43 * (dVar42 - *pdVar19));
          if ((double)ppppppuVar27 <= (double)ppppppuVar41) {
            if (iVar16 == 2) {
              pppppppuVar20 = &pppppppuStack_a0;
              ppppppuVar40 = ppppppuVar27;
            }
            else if (iVar16 == 1) {
              pppppppuVar20 = &pppppppuStack_150;
              ppppppuVar26 = ppppppuVar27;
            }
            else {
              pppppppuVar20 = &ppppppuStack_f0;
              ppppppuVar35 = ppppppuVar27;
            }
            *pppppppuVar20 = ppppppuVar41;
          }
          else {
            pppppppuVar20 = &ppppppuStack_f0;
            ppppppuVar5 = ppppppuVar26;
            ppppppuVar6 = ppppppuVar41;
            if (iVar16 == 1) {
              pppppppuVar20 = &pppppppuStack_150;
              ppppppuVar5 = ppppppuVar41;
              ppppppuVar6 = ppppppuVar35;
            }
            pppppppuVar2 = &pppppppuStack_a0;
            if (iVar16 != 2) {
              pppppppuVar2 = pppppppuVar20;
              ppppppuVar26 = ppppppuVar5;
              ppppppuVar41 = ppppppuVar40;
              ppppppuVar35 = ppppppuVar6;
            }
            ppppppuVar40 = ppppppuVar41;
            *pppppppuVar2 = ppppppuVar27;
          }
        }
        else {
          pdVar19 = pdVar18;
          dVar42 = -dVar31;
          if ((iVar16 != 2) && (pdVar19 = param_3, dVar42 = -dVar29, iVar16 == 1)) {
            pdVar19 = pdVar17;
            dVar42 = -dVar30;
          }
          if (*pdVar19 < dVar42) {
            return '\0';
          }
          pdVar19 = pdVar18;
          dVar42 = dVar31;
          if ((iVar16 != 2) && (pdVar19 = param_3, dVar42 = dVar29, iVar16 == 1)) {
            pdVar19 = pdVar17;
            dVar42 = dVar30;
          }
          if (dVar42 < *pdVar19) {
            return '\0';
          }
          if (iVar16 == 2) {
            pppppppuVar20 = &pppppppuStack_a0;
            ppppppuVar40 = (undefined8 ******)0xfff0000000000000;
          }
          else if (iVar16 == 1) {
            pppppppuVar20 = &pppppppuStack_150;
            ppppppuVar26 = (undefined8 ******)0xfff0000000000000;
          }
          else {
            pppppppuVar20 = &ppppppuStack_f0;
            ppppppuVar35 = (undefined8 ******)0xfff0000000000000;
          }
          *pppppppuVar20 = (undefined8 ******)0x7ff0000000000000;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 3);
      ppppppuVar27 = ppppppuVar26;
      if ((double)ppppppuVar26 <= (double)ppppppuVar35) {
        ppppppuVar27 = ppppppuVar35;
      }
      if ((double)ppppppuVar40 <= (double)ppppppuVar27) {
        ppppppuVar40 = ppppppuVar27;
      }
      if ((double)ppppppuStack_f0 <= (double)pppppppuStack_150) {
        pppppppuStack_150 = (undefined8 *******)ppppppuStack_f0;
      }
      if ((double)pppppppuStack_150 <= (double)pppppppuStack_a0) {
        pppppppuStack_a0 = pppppppuStack_150;
      }
      if ((double)param_1 < (double)ppppppuVar40) {
        return '\0';
      }
      bVar7 = false;
      bVar8 = true;
      if (0.0 <= (double)ppppppuVar40) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN((double)ppppppuVar40) && !NAN((double)pppppppuStack_a0)) {
          bVar7 = (double)ppppppuVar40 == (double)pppppppuStack_a0;
          bVar8 = (double)pppppppuStack_a0 <= (double)ppppppuVar40;
        }
      }
      if (bVar8 && !bVar7) {
        return '\0';
      }
      *(undefined1 *)param_6 = 1;
      param_6[1] = (ulong)ppppppuVar40;
      dVar28 = param_4[2];
      dVar36 = param_3[2];
      dVar25 = *param_4;
      dVar33 = *param_3;
      param_6[4] = (ulong)(param_4[1] * (double)ppppppuVar40 + param_3[1]);
      param_6[3] = (ulong)(dVar25 * (double)ppppppuVar40 + dVar33);
      param_6[5] = (ulong)((double)ppppppuVar40 * dVar28 + dVar36);
      if (1e-09 <= ABS((double)ppppppuVar40 - (double)ppppppuVar35)) {
        if (1e-09 <= ABS((double)ppppppuVar40 - (double)ppppppuVar26)) {
          dVar25 = *pdVar15;
          dVar36 = 0.0;
          dVar28 = 1.0;
          if (dVar25 == 0.0 || 0.0 > dVar25) {
            dVar28 = 0.0;
          }
          dVar33 = 1.0;
          if (0.0 <= dVar25) {
            dVar33 = 0.0;
          }
          dVar25 = -(dVar28 - dVar33);
        }
        else {
          dVar36 = *pdVar13;
          dVar25 = 0.0;
          dVar28 = 1.0;
          if (dVar36 == 0.0 || 0.0 > dVar36) {
            dVar28 = 0.0;
          }
          dVar33 = 1.0;
          if (0.0 <= dVar36) {
            dVar33 = 0.0;
          }
          dVar36 = -(dVar28 - dVar33);
        }
        goto LAB_10aa470fc;
      }
      dVar28 = *param_4;
      dVar25 = 1.0;
      if (dVar28 == 0.0 || 0.0 > dVar28) {
        dVar25 = 0.0;
      }
      dVar36 = 1.0;
      if (0.0 <= dVar28) {
        dVar36 = 0.0;
      }
      dVar28 = -(dVar25 - dVar36);
      goto LAB_10aa466b0;
    }
    if (iVar16 == 10) {
      dVar28 = (double)*(float *)((long)param_2 + (long)(((int)param_2[9] + 2) % 3) * 4 + 0x30);
      dVar25 = (double)*(float *)((long)param_2 + (long)(int)param_2[9] * 4 + 0x30);
      dVar25 = dVar25 + dVar25;
      pdStack_90 = (double *)&ppppppuStack_120;
      cVar10 = '\0';
      if (((0.0 <= (double)param_1) && (0.0 <= dVar28)) && (0.0 <= dVar25)) {
        dVar25 = dVar25 * 0.5;
        uStack_d8 = (double)((ulong)uStack_d8 & 0xffffffffffffff);
        ppppppuStack_120 = (undefined8 ******)((ulong)ppppppuStack_120._1_7_ << 8);
        uStack_110 = 0;
        ppppppuStack_118 = (undefined8 ******)0x0;
        dStack_100 = 0.0;
        dStack_108 = 0.0;
        ppppppuStack_f0 = (undefined8 ******)0x0;
        dStack_f8 = 0.0;
        dStack_e0 = 0.0;
        ppppppuStack_e8 = (undefined8 ******)0x0;
        dVar36 = *param_3;
        dVar33 = *param_4;
        if (1e-09 <= dVar28) {
          dVar30 = param_4[2];
          dVar29 = dVar30 * dVar30 + dVar33 * dVar33;
          if ((1e-18 <= dVar29) &&
             (dVar31 = param_3[2], dVar30 = dVar30 * dVar31 + dVar33 * dVar36,
             dVar30 = dVar30 + dVar30,
             0.0 <= dVar29 * -4.0 * ((dVar31 * dVar31 + dVar36 * dVar36) - dVar28 * dVar28) +
                    dVar30 * dVar30)) {
            ppppppuStack_c8 = &ppppppuStack_d0;
            pppppuStack_98 = (undefined8 *****)((long)&uStack_d8 + 7);
            pdStack_b0 = &dStack_78;
            pppppppuStack_a8 = &pppppppuStack_a0;
            pppppppuStack_a0 = (undefined8 *******)ppppppuStack_c8;
            dStack_78 = dVar25;
            func_0x00010aa47dcc(&ppppppuStack_c8);
            dVar36 = *param_3;
            dVar33 = *param_4;
            param_1 = ppppppuStack_d0;
          }
        }
        dVar29 = param_3[2];
        dVar30 = param_4[1];
        dVar31 = param_4[2];
        dVar38 = dVar33 * dVar33 + dVar30 * dVar30 + dVar31 * dVar31;
        bVar7 = true;
        do {
          bVar8 = bVar7;
          dVar34 = 1.0;
          if (!bVar8) {
            dVar34 = -1.0;
          }
          dVar43 = dVar25 * dVar34;
          dVar45 = param_3[1] - dVar43;
          dVar42 = dVar29 * dVar31 + dVar33 * dVar36 + dVar30 * dVar45;
          dVar42 = dVar42 + dVar42;
          dVar45 = dVar29 * dVar29 + dVar36 * dVar36 + dVar45 * dVar45 + dVar28 * -dVar28;
          dVar44 = dVar38 * -4.0 * dVar45 + dVar42 * dVar42;
          if (0.0 <= dVar44) {
            dVar44 = SQRT(dVar44);
            dVar46 = -dVar44;
            if (0.0 <= dVar42) {
              dVar46 = dVar44;
            }
            dVar42 = (dVar42 + dVar46) * -0.5;
            ppppppuVar40 = (undefined8 ******)(dVar42 / dVar38);
            ppppppuVar26 = (undefined8 ******)(dVar45 / dVar42);
            if (ABS(dVar42) <= 1e-09) {
              ppppppuVar26 = (undefined8 ******)0x7ff0000000000000;
            }
            if ((double)ppppppuVar40 <= (double)ppppppuVar26) {
              ppppppuVar26 = ppppppuVar40;
            }
            bVar7 = false;
            if ((0.0 <= (double)ppppppuVar26) &&
               (bVar7 = false, !NAN((double)ppppppuVar26) && !NAN((double)param_1 + -1e-09))) {
              bVar7 = (double)ppppppuVar26 < (double)param_1 + -1e-09;
            }
            if (bVar7) {
              dVar42 = param_3[1] + dVar30 * (double)ppppppuVar26;
              dVar43 = dVar42 - dVar43;
              if (0.0 <= dVar34 * dVar43) {
                dStack_f8 = dVar29 + dVar31 * (double)ppppppuVar26;
                dStack_108 = dVar36 + dVar33 * (double)ppppppuVar26;
                uStack_d8 = 7.2911220195563975e-304;
                dVar45 = dStack_f8 * dStack_f8 + dStack_108 * dStack_108 + dVar43 * dVar43;
                ppppppuStack_f0 = (undefined8 ******)0x0;
                dStack_e0 = 0.0;
                param_1 = ppppppuVar26;
                ppppppuStack_118 = ppppppuVar26;
                dStack_100 = dVar42;
                ppppppuStack_e8 = (undefined8 ******)dVar34;
                if (1e-18 < dVar45 && (ulong)ABS(dVar45) < 0x7ff0000000000000) {
                  dStack_e0 = 1.0 / SQRT(dVar45);
                  ppppppuStack_f0 = (undefined8 ******)(dStack_108 * dStack_e0);
                  ppppppuStack_e8 = (undefined8 ******)(dVar43 * dStack_e0);
                  dStack_e0 = dStack_f8 * dStack_e0;
                }
              }
            }
          }
          bVar7 = false;
        } while (bVar8);
        cVar10 = uStack_d8._7_1_;
        if (((ulong)uStack_d8 & 0x100000000000000) != 0) {
          param_6[1] = (ulong)ppppppuStack_118;
          *param_6 = (ulong)ppppppuStack_120;
          param_6[3] = (ulong)dStack_108;
          param_6[2] = uStack_110;
          param_6[5] = (ulong)dStack_f8;
          param_6[4] = (ulong)dStack_100;
          param_6[7] = (ulong)ppppppuStack_e8;
          param_6[6] = (ulong)ppppppuStack_f0;
          param_6[8] = (ulong)dStack_e0;
          *(undefined1 *)param_6 = 1;
        }
      }
      return cVar10;
    }
    if (iVar16 != 0xb) {
      if (iVar16 != 0xd) {
        return '\0';
      }
      lVar3 = param_2[6];
      lVar4 = param_2[7];
      fVar21 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar23 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar24 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fStack_160 = (float)lVar3;
      fStack_15c = (float)((ulong)lVar3 >> 0x20);
      fStack_158 = (float)lVar4;
      dVar28 = (double)(fStack_160 + fVar21);
      dVar36 = (double)(fStack_15c + fVar23);
      iVar16 = (int)param_2[9];
      dVar25 = 0.0;
      if (iVar16 == 0) {
        dVar25 = dVar28 + dVar28;
      }
      dVar33 = 0.0;
      if (iVar16 == 0) {
        dVar33 = dVar36;
      }
      dVar29 = dVar28;
      dVar36 = dVar36 + dVar36;
      if (iVar16 != 1) {
        dVar29 = dVar33;
        dVar36 = dVar25;
      }
      dVar25 = (double)(fStack_158 + fVar24) + (double)(fStack_158 + fVar24);
      if (iVar16 != 2) {
        dVar28 = dVar29;
        dVar25 = dVar36;
      }
      if (dVar25 < 0.0) {
        return '\0';
      }
      if ((double)param_1 < 0.0) {
        return '\0';
      }
      if (dVar28 < 0.0) {
        return '\0';
      }
      ppppppuStack_118 = (undefined8 ******)((ulong)ppppppuStack_118 & 0xffffffffffffff00);
      ppppppuStack_f0 = (undefined8 ******)((ulong)ppppppuStack_f0 & 0xffffffffffffff00);
      dStack_e0 = 0.0;
      ppppppuStack_e8 = (undefined8 ******)0x0;
      ppppppuStack_d0 = (undefined8 ******)0x0;
      uStack_d8 = 0.0;
      pdStack_c0 = (double *)0x0;
      ppppppuStack_c8 = (undefined8 ******)0x0;
      pdStack_b0 = (double *)0x0;
      pdStack_b8 = (double *)0x0;
      if (1e-09 <= dVar28) {
        dVar33 = *param_4;
        dVar29 = param_4[2];
        dVar36 = dVar29 * dVar29 + dVar33 * dVar33;
        if (1e-18 <= dVar36) {
          dVar30 = *param_3;
          dVar31 = param_3[2];
          dVar33 = dVar29 * dVar31 + dVar33 * dVar30;
          dVar33 = dVar33 + dVar33;
          if (0.0 <= dVar36 * -4.0 * ((dVar31 * dVar31 + dVar30 * dVar30) - dVar28 * dVar28) +
                     dVar33 * dVar33) {
            pppppppuStack_150 = &pppppppuStack_a8;
            ppppppuStack_148 = &ppppppuStack_118;
            ppppppuStack_140 = &ppppppuStack_f0;
            pdStack_88 = &dStack_108;
            pppppppuStack_80 = &pppppppuStack_150;
            dStack_108 = dVar25 * 0.5;
            pppppppuStack_a0 = pppppppuStack_150;
            func_0x00010aa47dcc(&pppppppuStack_a0);
          }
        }
      }
      dVar36 = param_4[1];
      uStack_110._7_1_ = (char)ppppppuStack_118;
      if (1e-09 < ABS(dVar36)) {
        bVar7 = true;
        do {
          bVar8 = bVar7;
          dVar33 = 1.0;
          if (!bVar8) {
            dVar33 = -1.0;
          }
          ppppppuVar26 = (undefined8 ******)((dVar25 * 0.5 * dVar33 - param_3[1]) / dVar36);
          if (((0.0 < (double)ppppppuVar26) && (dVar36 * dVar33 <= 0.0)) &&
             ((double)ppppppuVar26 < (double)pppppppuStack_a8 + -1e-09)) {
            dVar29 = *param_3 + *param_4 * (double)ppppppuVar26;
            pppppuVar39 = (undefined8 *****)(param_3[2] + param_4[2] * (double)ppppppuVar26);
            if ((double)pppppuVar39 * (double)pppppuVar39 + dVar29 * dVar29 <= dVar28 * dVar28) {
              ppppppuStack_118 = (undefined8 ******)0x1;
              ppppppuStack_d0 = (undefined8 ******)(param_3[1] + dVar36 * (double)ppppppuVar26);
              pdStack_c0 = (double *)0x0;
              pdStack_b0 = (double *)0x0;
              pppppppuStack_a8 = (undefined8 *******)ppppppuVar26;
              ppppppuStack_e8 = ppppppuVar26;
              uStack_d8 = dVar29;
              ppppppuStack_c8 = (undefined8 ******)pppppuVar39;
              pdStack_b8 = (double *)dVar33;
            }
          }
          uStack_110._7_1_ = (char)ppppppuStack_118;
          bVar7 = false;
        } while (bVar8);
      }
      goto LAB_10aa46bec;
    }
    fVar24 = *(float *)((long)param_2 + 0x4c);
    fVar21 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    fVar37 = *(float *)(param_2 + 10);
    fVar23 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    if ((double)param_1 < 0.0) {
      return '\0';
    }
    fVar24 = fVar24 + fVar21;
    if (fVar24 < 0.0) {
      return '\0';
    }
    dVar25 = (double)fVar37 + (double)fVar23 * 2.0;
    if (dVar25 < 1e-09) {
      return '\0';
    }
    dVar31 = (double)fVar24;
    pppppuStack_98 = (undefined8 *****)(dVar25 * 0.5);
    pppppppuStack_a0 = (undefined8 *******)0x0;
    pdStack_90 = (double *)0x0;
    dStack_108 = *param_3;
    dStack_100 = param_3[1] - (double)pppppuStack_98;
    dStack_f8 = param_3[2];
    uStack_110 = uStack_110 & 0xffffffffffffff;
    ppppppuStack_f0 = (undefined8 ******)((ulong)ppppppuStack_f0 & 0xffffffffffffff00);
    dStack_e0 = 0.0;
    ppppppuStack_e8 = (undefined8 ******)0x0;
    ppppppuStack_d0 = (undefined8 ******)0x0;
    uStack_d8 = 0.0;
    pdStack_c0 = (double *)0x0;
    ppppppuStack_c8 = (undefined8 ******)0x0;
    pdStack_b0 = (double *)0x0;
    pdStack_b8 = (double *)0x0;
    dVar29 = *param_4;
    dVar36 = param_4[1];
    dVar30 = param_4[2];
    dVar28 = dStack_108 * dStack_108 + dStack_f8 * dStack_f8;
    dVar33 = dVar29 * dVar29 + dVar30 * dVar30;
    if ((1e-18 <= dVar28) || (1e-18 <= dVar33)) {
      if ((dVar31 <= 1e-09) || (1e-06 <= dVar25 / dVar31)) {
        ppppppuStack_118 = (undefined8 ******)((dVar31 / dVar25) * (dVar31 / dVar25));
        dVar33 = dVar33 - dVar36 * dVar36 * (double)ppppppuStack_118;
        dVar29 = dStack_f8 * dVar30 + dVar29 * dStack_108 +
                 dVar36 * -((double)ppppppuStack_118 * dStack_100);
        dVar29 = dVar29 + dVar29;
        dVar28 = dVar28 - dStack_100 * dStack_100 * (double)ppppppuStack_118;
        dVar30 = dVar28 * dVar33 * -4.0 + dVar29 * dVar29;
        if ((0.0 <= dVar30) && (1e-09 < ABS(dVar33))) {
          dVar30 = SQRT(dVar30);
          dVar38 = -dVar30;
          if (0.0 <= dVar29) {
            dVar38 = dVar30;
          }
          dVar38 = (dVar29 + dVar38) * -0.5;
          dVar30 = dVar38 / dVar33;
          dVar28 = dVar28 / dVar38;
          if (ABS(dVar38) <= 1e-09) {
            dVar28 = INFINITY;
          }
          dVar38 = dVar28;
          if (dVar30 <= dVar28) {
            dVar38 = dVar30;
            dVar30 = dVar28;
          }
          pppppppuStack_150 = &pppppppuStack_a8;
          ppppppuStack_148 = (undefined8 ******)((long)&uStack_110 + 7);
          ppppppuStack_140 = &ppppppuStack_f0;
          pdStack_138 = &dStack_108;
          pppppppuStack_128 = &pppppppuStack_a0;
          ppppppuStack_120 = &ppppppuStack_118;
          dVar28 = (double)param_1 + -1e-09;
          bVar7 = false;
          if ((1e-09 < dVar38) && (bVar7 = false, !NAN(dVar38) && !NAN(dVar28))) {
            bVar7 = dVar38 < dVar28;
          }
          if (bVar7) {
            dVar34 = dStack_100 + dVar36 * dVar38;
            bVar7 = true;
            bVar8 = false;
            if (dVar34 <= 0.0) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar34) && !NAN(-1e-09 - dVar25)) {
                bVar7 = dVar34 < -1e-09 - dVar25;
                bVar8 = false;
              }
            }
            if ((bVar7 != bVar8) || (0.0 <= dVar33 * dVar38 + dVar29 * 0.5))
            goto code_r0x00010aa4700c;
LAB_10aa47040:
            func_0x00010aa47f30(dVar38,&pppppppuStack_150);
            dVar36 = param_4[1];
          }
          else {
code_r0x00010aa4700c:
            bVar7 = false;
            if ((1e-09 < dVar30) && (bVar7 = false, !NAN(dVar30) && !NAN(dVar28))) {
              bVar7 = dVar30 < dVar28;
            }
            if (bVar7) {
              dVar28 = dStack_100 + dVar36 * dVar30;
              bVar7 = true;
              bVar8 = false;
              if (dVar28 <= 0.0) {
                bVar7 = false;
                bVar8 = true;
                if (!NAN(dVar28) && !NAN(-1e-09 - dVar25)) {
                  bVar7 = dVar28 < -1e-09 - dVar25;
                  bVar8 = false;
                }
              }
              if ((bVar7 == bVar8) && (dVar38 = dVar30, dVar33 * dVar30 + dVar29 * 0.5 < 0.0))
              goto LAB_10aa47040;
            }
          }
        }
      }
    }
    else {
      pppppppuStack_a8 = (undefined8 *******)param_1;
      if (1e-09 < ABS(dVar36)) {
        ppppppuVar26 = (undefined8 ******)(-dStack_100 / dVar36);
        bVar7 = false;
        if ((0.0 < (double)ppppppuVar26) &&
           (bVar7 = false, !NAN((double)ppppppuVar26) && !NAN((double)param_1 + -1e-09))) {
          bVar7 = (double)ppppppuVar26 < (double)param_1 + -1e-09;
        }
        pppppppuStack_a8 = (undefined8 *******)param_1;
        if (bVar7) {
          bVar7 = true;
          bVar8 = false;
          if (dStack_100 <= 0.0) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(dStack_100) && !NAN(-dVar25)) {
              bVar7 = dStack_100 < -dVar25;
              bVar8 = false;
            }
          }
          pppppppuStack_a8 = (undefined8 *******)param_1;
          if (bVar7 != bVar8) {
            uStack_110 = 0x100000000000000;
            uStack_d8 = 0.0;
            ppppppuStack_c8 = (undefined8 ******)0x0;
            pdStack_b8 = (double *)0x3ff0000000000000;
            ppppppuStack_e8 = ppppppuVar26;
            ppppppuStack_d0 = (undefined8 ******)pppppuStack_98;
            pppppppuStack_a8 = (undefined8 *******)ppppppuVar26;
            if (0.0 <= dVar36) {
              pdStack_b8 = (double *)0xbff0000000000000;
            }
          }
        }
      }
    }
    if (((ABS(dVar36) <= 1e-09) ||
        (ppppppuVar26 = (undefined8 ******)((-dVar25 - dStack_100) / dVar36),
        (double)ppppppuVar26 <= 1e-09)) || (dVar36 <= 0.0)) goto LAB_10aa46bec;
  }
  else {
    if (iVar16 < 10) {
      if (iVar16 != 0) {
        if (iVar16 == 8) {
          dVar25 = (double)(*(float *)(param_2 + 6) * *(float *)(param_2 + 4));
          if ((0.0 <= (double)param_1) && (0.0 <= dVar25)) {
            dVar33 = *param_3;
            dVar29 = param_3[1];
            dVar30 = param_3[2];
            dVar36 = *param_4;
            dVar31 = param_4[1];
            dVar38 = param_4[2];
            dVar28 = dVar36 * dVar36 + dVar31 * dVar31 + dVar38 * dVar38;
            dVar36 = dVar33 * dVar36 + dVar29 * dVar31 + dVar30 * dVar38;
            dVar36 = dVar36 + dVar36;
            dVar25 = (dVar33 * dVar33 + dVar29 * dVar29 + dVar30 * dVar30) - dVar25 * dVar25;
            dVar33 = dVar25 * dVar28 * -4.0 + dVar36 * dVar36;
            if (0.0 <= dVar33) {
              dVar33 = SQRT(dVar33);
              dVar29 = -dVar33;
              if (0.0 <= dVar36) {
                dVar29 = dVar33;
              }
              dVar36 = (dVar36 + dVar29) * -0.5;
              dVar28 = dVar36 / dVar28;
              dVar25 = dVar25 / dVar36;
              if (ABS(dVar36) <= 1e-09) {
                dVar25 = INFINITY;
              }
              dVar36 = dVar25;
              if (dVar28 <= dVar25) {
                dVar36 = dVar28;
                dVar28 = dVar25;
              }
              dVar25 = 1.0;
              if (0.0 <= dVar36) {
                dVar25 = 0.0;
              }
              dVar33 = 1.0;
              if (0.0 > dVar36) {
                dVar33 = 0.0;
              }
              dVar25 = dVar36 * dVar33 + dVar28 * dVar25;
              bVar7 = false;
              bVar8 = false;
              if (dVar25 <= (double)param_1) {
                bVar7 = false;
                bVar8 = true;
                if (!NAN(dVar25)) {
                  bVar7 = dVar25 == 0.0;
                  bVar8 = 0.0 <= dVar25;
                }
              }
              dVar28 = -1.0;
              if (bVar8 && !bVar7) {
                dVar28 = dVar25;
              }
              if (0.0 < dVar28) {
                *(undefined1 *)param_6 = 1;
                param_6[1] = (ulong)dVar28;
                dVar25 = dVar28 * param_4[2] + param_3[2];
                dVar36 = *param_4 * dVar28 + *param_3;
                dVar28 = param_4[1] * dVar28 + param_3[1];
                param_6[4] = (ulong)dVar28;
                param_6[3] = (ulong)dVar36;
                param_6[5] = (ulong)dVar25;
                dVar33 = dVar36 * dVar36 + dVar28 * dVar28 + dVar25 * dVar25;
                if (1e-18 < dVar33 && (ulong)ABS(dVar33) < 0x7ff0000000000000) {
                  dVar33 = 1.0 / SQRT(dVar33);
                  dVar36 = dVar36 * dVar33;
                  dVar28 = dVar28 * dVar33;
                  dVar25 = dVar25 * dVar33;
                }
                else {
                  dVar36 = -*param_4;
                  dVar28 = -param_4[1];
                  dVar25 = -param_4[2];
                }
                param_6[7] = (ulong)dVar28;
                param_6[6] = (ulong)dVar36;
                param_6[8] = (ulong)dVar25;
                return '\x01';
              }
            }
          }
          return '\0';
        }
        if (iVar16 != 9) {
          return '\0';
        }
        plVar11 = param_2;
        (**(code **)(*param_2 + 0x38))();
        dVar25 = (double)(float)*plVar11;
        dVar28 = (double)(float)((ulong)*plVar11 >> 0x20);
        if (ABS(dVar25) < 9.999999974752427e-07) {
          return '\0';
        }
        if (ABS(dVar28) < 9.999999974752427e-07) {
          return '\0';
        }
        if (ABS((double)*(float *)(plVar11 + 1)) < 9.999999974752427e-07) {
          return '\0';
        }
        auVar32 = NEON_fmov(0x3ff0000000000000,8);
        dVar25 = auVar32._0_8_ / dVar25;
        dVar28 = auVar32._8_8_ / dVar28;
        dVar36 = 1.0 / (double)*(float *)(plVar11 + 1);
        if (*(int *)((long)param_2 + 0x7c) == 2) {
          puVar14 = (undefined8 *)param_2[0x11];
          dStack_e0 = dVar36 * param_3[2];
          ppppppuStack_f0 = (undefined8 ******)(dVar25 * *param_3);
          ppppppuStack_e8 = (undefined8 ******)(dVar28 * param_3[1]);
          dVar29 = dVar25 * *param_4;
          dVar30 = dVar28 * param_4[1];
          dVar31 = dVar36 * param_4[2];
          dVar33 = SQRT(dVar29 * dVar29 + dVar30 * dVar30 + dVar31 * dVar31);
          if (dVar33 < 9.999999974752427e-07) {
            return '\0';
          }
          fVar21 = (float)puVar14[2] - (float)*puVar14;
          fVar23 = (float)((ulong)puVar14[2] >> 0x20) - (float)((ulong)*puVar14 >> 0x20);
          fVar24 = (float)puVar14[3] - (float)puVar14[1];
          auVar22._0_4_ = fVar21 * fVar21;
          auVar22._4_4_ = fVar23 * fVar23;
          auVar22._8_4_ = fVar24 * fVar24;
          auVar22._12_4_ = 0;
          auVar32 = NEON_ext(auVar22,auVar22,8,1);
          pppppppuStack_150 = (undefined8 *******)(dVar29 / dVar33);
          ppppppuStack_148 = (undefined8 ******)(dVar30 / dVar33);
          ppppppuStack_140 = (undefined8 ******)(dVar31 / dVar33);
          ppppppuVar26 = &ppppppuStack_f0;
          FUN_10aa47110((double)param_1 * dVar33,(double)*(float *)param_2[0x15],
                        (double)SQRT(auVar32._0_4_ + auVar22._0_4_ + auVar22._4_4_),ppppppuVar26,
                        &pppppppuStack_150,param_6);
        }
        else {
          if (*(int *)((long)param_2 + 0x7c) != 1) {
            return '\0';
          }
          dStack_e0 = dVar36 * param_3[2];
          ppppppuStack_f0 = (undefined8 ******)(dVar25 * *param_3);
          ppppppuStack_e8 = (undefined8 ******)(dVar28 * param_3[1]);
          dVar29 = dVar25 * *param_4;
          dVar30 = dVar28 * param_4[1];
          dVar31 = dVar36 * param_4[2];
          dVar33 = SQRT(dVar29 * dVar29 + dVar30 * dVar30 + dVar31 * dVar31);
          if (dVar33 < 9.999999974752427e-07) {
            return '\0';
          }
          pppppppuStack_150 = (undefined8 *******)(dVar29 / dVar33);
          ppppppuStack_148 = (undefined8 ******)(dVar30 / dVar33);
          ppppppuStack_140 = (undefined8 ******)(dVar31 / dVar33);
          ppppppuVar26 = &ppppppuStack_f0;
          FUN_10aa47500((double)param_1 * dVar33,(double)*(float *)param_2[0x15],ppppppuVar26,
                        &pppppppuStack_150,param_6);
        }
joined_r0x00010aa45a6c:
        if (((ulong)ppppppuVar26 & 1) == 0) {
          return '\0';
        }
        param_6[1] = (ulong)((double)param_6[1] / dVar33);
        dVar36 = dVar36 * (double)param_6[8];
        dVar25 = dVar25 * (double)param_6[6];
        dVar28 = dVar28 * (double)param_6[7];
        dVar33 = 1.0 / SQRT(dVar25 * dVar25 + dVar28 * dVar28 + dVar36 * dVar36);
        param_6[7] = (ulong)(dVar28 * dVar33);
        param_6[6] = (ulong)(dVar25 * dVar33);
        param_6[8] = (ulong)(dVar36 * dVar33);
        return '\x01';
      }
      lVar3 = param_2[6];
      lVar4 = param_2[7];
      fVar21 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar23 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar24 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      if ((double)param_1 < 0.0) {
        return '\0';
      }
      fStack_160 = (float)lVar3;
      fStack_15c = (float)((ulong)lVar3 >> 0x20);
      fStack_158 = (float)lVar4;
      if (fStack_160 + fVar21 < 0.0) {
        return '\0';
      }
      if (fStack_15c + fVar23 < 0.0) {
        return '\0';
      }
      if (fStack_158 + fVar24 < 0.0) {
        return '\0';
      }
      iVar16 = 0;
      dVar31 = (double)(fStack_160 + fVar21);
      dVar38 = (double)(fStack_15c + fVar23);
      dVar34 = (double)(fStack_158 + fVar24);
      ppppppuStack_f0 = (undefined8 ******)0x0;
      pppppppuStack_150 = (undefined8 *******)0x0;
      pppppppuStack_a0 = (undefined8 *******)0x0;
      pdVar13 = param_4 + 1;
      dVar25 = *pdVar13;
      pdVar15 = param_4 + 2;
      dVar29 = *pdVar15;
      pdVar17 = param_3 + 1;
      dVar28 = *pdVar17;
      pdVar18 = param_3 + 2;
      dVar36 = *pdVar18;
      dVar33 = *param_4;
      dVar30 = *param_3;
      ppppppuVar26 = (undefined8 ******)0x0;
      ppppppuVar40 = (undefined8 ******)0x0;
      ppppppuVar35 = (undefined8 ******)0x0;
      do {
        pdVar19 = param_4;
        if (iVar16 == 1) {
          pdVar19 = pdVar13;
        }
        pdVar1 = pdVar15;
        if (iVar16 != 2) {
          pdVar1 = pdVar19;
        }
        if (1e-09 <= ABS(*pdVar1)) {
          pdVar19 = pdVar18;
          ppppppuVar27 = (undefined8 ******)((1.0 / dVar29) * (-dVar34 - dVar36));
          dVar42 = dVar34;
          dVar43 = 1.0 / dVar29;
          if ((iVar16 != 2) &&
             (pdVar19 = param_3,
             ppppppuVar27 = (undefined8 ******)((1.0 / dVar33) * (-dVar31 - dVar30)),
             dVar42 = dVar31, dVar43 = 1.0 / dVar33, iVar16 == 1)) {
            pdVar19 = pdVar17;
            ppppppuVar27 = (undefined8 ******)((1.0 / dVar25) * (-dVar38 - dVar28));
            dVar42 = dVar38;
            dVar43 = 1.0 / dVar25;
          }
          ppppppuVar41 = (undefined8 ******)(dVar43 * (dVar42 - *pdVar19));
          if ((double)ppppppuVar27 <= (double)ppppppuVar41) {
            if (iVar16 == 2) {
              pppppppuVar20 = &pppppppuStack_a0;
              ppppppuVar40 = ppppppuVar27;
            }
            else if (iVar16 == 1) {
              pppppppuVar20 = &pppppppuStack_150;
              ppppppuVar26 = ppppppuVar27;
            }
            else {
              pppppppuVar20 = &ppppppuStack_f0;
              ppppppuVar35 = ppppppuVar27;
            }
            *pppppppuVar20 = ppppppuVar41;
          }
          else {
            pppppppuVar20 = &ppppppuStack_f0;
            ppppppuVar5 = ppppppuVar26;
            ppppppuVar6 = ppppppuVar41;
            if (iVar16 == 1) {
              pppppppuVar20 = &pppppppuStack_150;
              ppppppuVar5 = ppppppuVar41;
              ppppppuVar6 = ppppppuVar35;
            }
            pppppppuVar2 = &pppppppuStack_a0;
            if (iVar16 != 2) {
              pppppppuVar2 = pppppppuVar20;
              ppppppuVar26 = ppppppuVar5;
              ppppppuVar41 = ppppppuVar40;
              ppppppuVar35 = ppppppuVar6;
            }
            ppppppuVar40 = ppppppuVar41;
            *pppppppuVar2 = ppppppuVar27;
          }
        }
        else {
          pdVar19 = pdVar18;
          dVar42 = -dVar34;
          if ((iVar16 != 2) && (pdVar19 = param_3, dVar42 = -dVar31, iVar16 == 1)) {
            pdVar19 = pdVar17;
            dVar42 = -dVar38;
          }
          if (*pdVar19 < dVar42) {
            return '\0';
          }
          pdVar19 = pdVar18;
          dVar42 = dVar34;
          if ((iVar16 != 2) && (pdVar19 = param_3, dVar42 = dVar31, iVar16 == 1)) {
            pdVar19 = pdVar17;
            dVar42 = dVar38;
          }
          if (dVar42 < *pdVar19) {
            return '\0';
          }
          if (iVar16 == 2) {
            pppppppuVar20 = &pppppppuStack_a0;
            ppppppuVar40 = (undefined8 ******)0xfff0000000000000;
          }
          else if (iVar16 == 1) {
            pppppppuVar20 = &pppppppuStack_150;
            ppppppuVar26 = (undefined8 ******)0xfff0000000000000;
          }
          else {
            pppppppuVar20 = &ppppppuStack_f0;
            ppppppuVar35 = (undefined8 ******)0xfff0000000000000;
          }
          *pppppppuVar20 = (undefined8 ******)0x7ff0000000000000;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 3);
      ppppppuVar27 = ppppppuVar26;
      if ((double)ppppppuVar26 <= (double)ppppppuVar35) {
        ppppppuVar27 = ppppppuVar35;
      }
      if ((double)ppppppuVar40 <= (double)ppppppuVar27) {
        ppppppuVar40 = ppppppuVar27;
      }
      pppppppuVar20 = pppppppuStack_150;
      if ((double)ppppppuStack_f0 <= (double)pppppppuStack_150) {
        pppppppuVar20 = (undefined8 *******)ppppppuStack_f0;
      }
      if ((double)pppppppuVar20 <= (double)pppppppuStack_a0) {
        pppppppuStack_a0 = pppppppuVar20;
      }
      dVar25 = 1.0;
      if (0.0 <= (double)ppppppuVar40) {
        dVar25 = 0.0;
      }
      dVar28 = 1.0;
      if (0.0 > (double)ppppppuVar40) {
        dVar28 = 0.0;
      }
      if ((double)pppppppuStack_a0 < (double)ppppppuVar40) {
        return '\0';
      }
      if ((double)pppppppuStack_a0 < 0.0) {
        return '\0';
      }
      dVar25 = (double)ppppppuVar40 * dVar28 + (double)pppppppuStack_a0 * dVar25;
      if ((double)param_1 < dVar25) {
        return '\0';
      }
      *(undefined1 *)param_6 = 1;
      param_6[1] = (ulong)dVar25;
      dVar28 = param_4[2];
      dVar36 = param_3[2];
      dVar33 = *param_4;
      dVar29 = *param_3;
      param_6[4] = (ulong)(param_4[1] * dVar25 + param_3[1]);
      param_6[3] = (ulong)(dVar33 * dVar25 + dVar29);
      param_6[5] = (ulong)(dVar25 * dVar28 + dVar36);
      dVar28 = 1.0;
      if (0.0 <= (double)ppppppuVar40) {
        dVar28 = -1.0;
        ppppppuStack_f0 = ppppppuVar35;
      }
      if (1e-09 <= ABS(dVar25 - (double)ppppppuStack_f0)) {
        if (0.0 <= (double)ppppppuVar40) {
          pppppppuStack_150 = (undefined8 *******)ppppppuVar26;
        }
        if (1e-09 <= ABS(dVar25 - (double)pppppppuStack_150)) {
          dVar25 = *pdVar15;
          dVar36 = 0.0;
          dVar33 = 1.0;
          if (dVar25 == 0.0 || 0.0 > dVar25) {
            dVar33 = 0.0;
          }
          dVar29 = 1.0;
          if (0.0 <= dVar25) {
            dVar29 = 0.0;
          }
          dVar25 = dVar28 * (dVar33 - dVar29);
        }
        else {
          dVar33 = *pdVar13;
          dVar25 = 0.0;
          dVar36 = 1.0;
          if (dVar33 == 0.0 || 0.0 > dVar33) {
            dVar36 = 0.0;
          }
          dVar29 = 1.0;
          if (0.0 <= dVar33) {
            dVar29 = 0.0;
          }
          dVar36 = dVar28 * (dVar36 - dVar29);
        }
LAB_10aa470fc:
        dVar28 = 0.0;
        goto LAB_10aa47100;
      }
      dVar36 = *param_4;
      dVar25 = 1.0;
      if (dVar36 == 0.0 || 0.0 > dVar36) {
        dVar25 = 0.0;
      }
      dVar33 = 1.0;
      if (0.0 <= dVar36) {
        dVar33 = 0.0;
      }
      dVar28 = dVar28 * (dVar25 - dVar33);
LAB_10aa466b0:
      dVar25 = 0.0;
      dVar36 = 0.0;
LAB_10aa47100:
      param_6[6] = (ulong)dVar28;
      param_6[7] = (ulong)dVar36;
      param_6[8] = (ulong)dVar25;
      return '\x01';
    }
    if (iVar16 == 10) {
      dVar28 = (double)*(float *)((long)param_2 + (long)(((int)param_2[9] + 2) % 3) * 4 + 0x30);
      dVar25 = (double)*(float *)((long)param_2 + (long)(int)param_2[9] * 4 + 0x30);
      dVar25 = dVar25 + dVar25;
      pdStack_90 = (double *)&ppppppuStack_120;
      cVar10 = '\0';
      if (((0.0 <= (double)param_1) && (0.0 <= dVar28)) && (0.0 <= dVar25)) {
        dVar25 = dVar25 * 0.5;
        uStack_d8 = (double)((ulong)uStack_d8 & 0xffffffffffffff);
        ppppppuStack_120 = (undefined8 ******)((ulong)ppppppuStack_120._1_7_ << 8);
        uStack_110 = 0;
        ppppppuStack_118 = (undefined8 ******)0x0;
        dStack_100 = 0.0;
        dStack_108 = 0.0;
        ppppppuStack_f0 = (undefined8 ******)0x0;
        dStack_f8 = 0.0;
        dStack_e0 = 0.0;
        ppppppuStack_e8 = (undefined8 ******)0x0;
        dVar36 = *param_3;
        dVar33 = *param_4;
        if (1e-09 <= dVar28) {
          dVar30 = param_4[2];
          dVar29 = dVar30 * dVar30 + dVar33 * dVar33;
          if ((1e-18 <= dVar29) &&
             (dVar31 = param_3[2], dVar30 = dVar30 * dVar31 + dVar33 * dVar36,
             dVar30 = dVar30 + dVar30,
             0.0 <= dVar29 * -4.0 * ((dVar31 * dVar31 + dVar36 * dVar36) - dVar28 * dVar28) +
                    dVar30 * dVar30)) {
            ppppppuStack_c8 = &ppppppuStack_d0;
            pppppuStack_98 = (undefined8 *****)((long)&uStack_d8 + 7);
            pdStack_b0 = &dStack_78;
            pppppppuStack_a8 = &pppppppuStack_a0;
            uVar12 = 0;
            pppppppuStack_a0 = (undefined8 *******)ppppppuStack_c8;
            dStack_78 = dVar25;
            func_0x00010aa476ac();
            if ((uVar12 & 1) == 0) {
              func_0x00010aa476ac(&ppppppuStack_c8);
            }
            dVar36 = *param_3;
            dVar33 = *param_4;
            param_1 = ppppppuStack_d0;
          }
        }
        dVar29 = param_3[1];
        dVar30 = param_3[2];
        dVar31 = param_4[1];
        dVar38 = param_4[2];
        dVar34 = dVar33 * dVar33 + dVar31 * dVar31 + dVar38 * dVar38;
        bVar7 = true;
        do {
          bVar8 = bVar7;
          dVar42 = 1.0;
          if (!bVar8) {
            dVar42 = -1.0;
          }
          dVar45 = dVar25 * dVar42;
          dVar44 = dVar29 - dVar45;
          dVar43 = dVar30 * dVar38 + dVar33 * dVar36 + dVar31 * dVar44;
          dVar43 = dVar43 + dVar43;
          dVar44 = dVar30 * dVar30 + dVar36 * dVar36 + dVar44 * dVar44 + dVar28 * -dVar28;
          dVar46 = dVar34 * -4.0 * dVar44 + dVar43 * dVar43;
          if (0.0 <= dVar46) {
            dVar46 = SQRT(dVar46);
            dVar47 = -dVar46;
            if (0.0 <= dVar43) {
              dVar47 = dVar46;
            }
            dVar43 = (dVar43 + dVar47) * -0.5;
            ppppppuVar26 = (undefined8 ******)(dVar43 / dVar34);
            ppppppuVar40 = (undefined8 ******)(dVar44 / dVar43);
            if (ABS(dVar43) <= 1e-09) {
              ppppppuVar40 = (undefined8 ******)0x7ff0000000000000;
            }
            ppppppuVar35 = ppppppuVar40;
            if ((double)ppppppuVar26 <= (double)ppppppuVar40) {
              ppppppuVar35 = ppppppuVar26;
              ppppppuVar26 = ppppppuVar40;
            }
            dVar43 = (double)param_1 + -1e-09;
            bVar7 = false;
            if ((0.0 <= (double)ppppppuVar35) &&
               (bVar7 = false, !NAN((double)ppppppuVar35) && !NAN(dVar43))) {
              bVar7 = (double)ppppppuVar35 < dVar43;
            }
            if (bVar7) {
              dVar44 = dVar29 + dVar31 * (double)ppppppuVar35;
              dVar46 = dVar44 - dVar45;
              if (dVar42 * dVar46 < 0.0) goto LAB_10aa47394;
              dStack_f8 = dVar30 + dVar38 * (double)ppppppuVar35;
              dStack_108 = dVar36 + dVar33 * (double)ppppppuVar35;
              dVar43 = dStack_f8 * dStack_f8 + dStack_108 * dStack_108 + dVar46 * dVar46;
              ppppppuStack_f0 = (undefined8 ******)0x0;
              ppppppuStack_118 = ppppppuVar35;
              dStack_100 = dVar44;
              if (1e-18 < dVar43 && (ulong)ABS(dVar43) < 0x7ff0000000000000) {
                dStack_e0 = 1.0 / SQRT(dVar43);
                ppppppuStack_f0 = (undefined8 ******)(dStack_108 * dStack_e0);
                dVar42 = dVar46 * dStack_e0;
                dStack_e0 = dStack_f8 * dStack_e0;
              }
              else {
                dStack_e0 = 0.0;
              }
LAB_10aa474a0:
              uStack_d8 = 7.2911220195563975e-304;
              param_1 = ppppppuStack_118;
              ppppppuStack_e8 = (undefined8 ******)dVar42;
            }
            else {
LAB_10aa47394:
              bVar7 = false;
              if ((0.0 <= (double)ppppppuVar26) &&
                 (bVar7 = false, !NAN((double)ppppppuVar26) && !NAN(dVar43))) {
                bVar7 = (double)ppppppuVar26 < dVar43;
              }
              if (bVar7) {
                dVar43 = dVar29 + dVar31 * (double)ppppppuVar26;
                dVar45 = dVar43 - dVar45;
                if (0.0 <= dVar42 * dVar45) {
                  dStack_f8 = dVar30 + dVar38 * (double)ppppppuVar26;
                  dStack_108 = dVar36 + dVar33 * (double)ppppppuVar26;
                  dVar44 = dStack_f8 * dStack_f8 + dStack_108 * dStack_108 + dVar45 * dVar45;
                  ppppppuStack_f0 = (undefined8 ******)0x0;
                  ppppppuStack_118 = ppppppuVar26;
                  dStack_100 = dVar43;
                  if (1e-18 < dVar44 && (ulong)ABS(dVar44) < 0x7ff0000000000000) {
                    dStack_e0 = 1.0 / SQRT(dVar44);
                    ppppppuStack_f0 = (undefined8 ******)(dStack_108 * dStack_e0);
                    dVar42 = dVar45 * dStack_e0;
                    dStack_e0 = dStack_f8 * dStack_e0;
                  }
                  else {
                    dStack_e0 = 0.0;
                  }
                  goto LAB_10aa474a0;
                }
              }
            }
          }
          bVar7 = false;
        } while (bVar8);
        cVar10 = uStack_d8._7_1_;
        if (((ulong)uStack_d8 & 0x100000000000000) != 0) {
          param_6[1] = (ulong)ppppppuStack_118;
          *param_6 = (ulong)ppppppuStack_120;
          param_6[3] = (ulong)dStack_108;
          param_6[2] = uStack_110;
          param_6[5] = (ulong)dStack_f8;
          param_6[4] = (ulong)dStack_100;
          param_6[7] = (ulong)ppppppuStack_e8;
          param_6[6] = (ulong)ppppppuStack_f0;
          param_6[8] = (ulong)dStack_e0;
          *(undefined1 *)param_6 = 1;
        }
      }
      return cVar10;
    }
    if (iVar16 != 0xb) {
      if (iVar16 != 0xd) {
        return '\0';
      }
      lVar3 = param_2[6];
      lVar4 = param_2[7];
      fVar21 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar23 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fVar24 = (float)(**(code **)(*param_2 + 0x60))(param_2);
      fStack_160 = (float)lVar3;
      fStack_15c = (float)((ulong)lVar3 >> 0x20);
      fStack_158 = (float)lVar4;
      dVar28 = (double)(fStack_160 + fVar21);
      dVar36 = (double)(fStack_15c + fVar23);
      iVar16 = (int)param_2[9];
      dVar25 = 0.0;
      if (iVar16 == 0) {
        dVar25 = dVar28 + dVar28;
      }
      dVar33 = 0.0;
      if (iVar16 == 0) {
        dVar33 = dVar36;
      }
      dVar29 = dVar28;
      dVar36 = dVar36 + dVar36;
      if (iVar16 != 1) {
        dVar29 = dVar33;
        dVar36 = dVar25;
      }
      dVar25 = (double)(fStack_158 + fVar24) + (double)(fStack_158 + fVar24);
      if (iVar16 != 2) {
        dVar28 = dVar29;
        dVar25 = dVar36;
      }
      if (dVar25 < 0.0) {
        return '\0';
      }
      if ((double)param_1 < 0.0) {
        return '\0';
      }
      if (dVar28 < 0.0) {
        return '\0';
      }
      ppppppuStack_118 = (undefined8 ******)((ulong)ppppppuStack_118 & 0xffffffffffffff00);
      ppppppuStack_f0 = (undefined8 ******)((ulong)ppppppuStack_f0 & 0xffffffffffffff00);
      dStack_e0 = 0.0;
      ppppppuStack_e8 = (undefined8 ******)0x0;
      ppppppuStack_d0 = (undefined8 ******)0x0;
      uStack_d8 = 0.0;
      pdStack_c0 = (double *)0x0;
      ppppppuStack_c8 = (undefined8 ******)0x0;
      pdStack_b0 = (double *)0x0;
      pdStack_b8 = (double *)0x0;
      if (1e-09 <= dVar28) {
        dVar33 = *param_4;
        dVar29 = param_4[2];
        dVar36 = dVar29 * dVar29 + dVar33 * dVar33;
        if (1e-18 <= dVar36) {
          dVar30 = *param_3;
          dVar31 = param_3[2];
          dVar33 = dVar29 * dVar31 + dVar33 * dVar30;
          dVar33 = dVar33 + dVar33;
          if (0.0 <= dVar36 * -4.0 * ((dVar31 * dVar31 + dVar30 * dVar30) - dVar28 * dVar28) +
                     dVar33 * dVar33) {
            pppppppuStack_150 = &pppppppuStack_a8;
            ppppppuStack_148 = &ppppppuStack_118;
            ppppppuStack_140 = &ppppppuStack_f0;
            pdStack_88 = &dStack_108;
            pppppppuStack_80 = &pppppppuStack_150;
            uVar12 = 0;
            dStack_108 = dVar25 * 0.5;
            pppppppuStack_a0 = pppppppuStack_150;
            func_0x00010aa476ac();
            if ((uVar12 & 1) == 0) {
              func_0x00010aa476ac(&pppppppuStack_a0);
            }
          }
        }
      }
      dVar36 = param_4[1];
      uStack_110._7_1_ = (char)ppppppuStack_118;
      if (1e-09 < ABS(dVar36)) {
        bVar7 = true;
        do {
          bVar8 = bVar7;
          dVar33 = 1.0;
          if (!bVar8) {
            dVar33 = -1.0;
          }
          ppppppuVar26 = (undefined8 ******)((dVar25 * 0.5 * dVar33 - param_3[1]) / dVar36);
          bVar7 = false;
          if ((0.0 < (double)ppppppuVar26) &&
             (bVar7 = false, !NAN((double)ppppppuVar26) && !NAN((double)pppppppuStack_a8 + -1e-09)))
          {
            bVar7 = (double)ppppppuVar26 < (double)pppppppuStack_a8 + -1e-09;
          }
          if (bVar7) {
            dVar29 = *param_3 + *param_4 * (double)ppppppuVar26;
            pppppuVar39 = (undefined8 *****)(param_3[2] + param_4[2] * (double)ppppppuVar26);
            if ((double)pppppuVar39 * (double)pppppuVar39 + dVar29 * dVar29 <= dVar28 * dVar28) {
              ppppppuStack_118 = (undefined8 ******)0x1;
              ppppppuStack_d0 = (undefined8 ******)(param_3[1] + dVar36 * (double)ppppppuVar26);
              pdStack_c0 = (double *)0x0;
              pdStack_b0 = (double *)0x0;
              pppppppuStack_a8 = (undefined8 *******)ppppppuVar26;
              ppppppuStack_e8 = ppppppuVar26;
              uStack_d8 = dVar29;
              ppppppuStack_c8 = (undefined8 ******)pppppuVar39;
              pdStack_b8 = (double *)dVar33;
            }
          }
          uStack_110._7_1_ = (char)ppppppuStack_118;
          bVar7 = false;
        } while (bVar8);
      }
      goto LAB_10aa46bec;
    }
    fVar24 = *(float *)((long)param_2 + 0x4c);
    fVar21 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    fVar37 = *(float *)(param_2 + 10);
    fVar23 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    if ((double)param_1 < 0.0) {
      return '\0';
    }
    fVar24 = fVar24 + fVar21;
    if (fVar24 < 0.0) {
      return '\0';
    }
    dVar25 = (double)fVar37 + (double)fVar23 * 2.0;
    if (dVar25 < 1e-09) {
      return '\0';
    }
    dVar31 = (double)fVar24;
    pppppuStack_98 = (undefined8 *****)(dVar25 * 0.5);
    pppppppuStack_a0 = (undefined8 *******)0x0;
    pdStack_90 = (double *)0x0;
    dStack_108 = *param_3;
    dStack_100 = param_3[1] - (double)pppppuStack_98;
    dStack_f8 = param_3[2];
    uStack_110 = uStack_110 & 0xffffffffffffff;
    ppppppuStack_f0 = (undefined8 ******)((ulong)ppppppuStack_f0 & 0xffffffffffffff00);
    dStack_e0 = 0.0;
    ppppppuStack_e8 = (undefined8 ******)0x0;
    ppppppuStack_d0 = (undefined8 ******)0x0;
    uStack_d8 = 0.0;
    pdStack_c0 = (double *)0x0;
    ppppppuStack_c8 = (undefined8 ******)0x0;
    pdStack_b0 = (double *)0x0;
    pdStack_b8 = (double *)0x0;
    dVar29 = *param_4;
    dVar36 = param_4[1];
    dVar30 = param_4[2];
    dVar33 = dStack_108 * dStack_108 + dStack_f8 * dStack_f8;
    dVar28 = dVar29 * dVar29 + dVar30 * dVar30;
    if ((1e-18 <= dVar33) || (1e-18 <= dVar28)) {
      if ((dVar31 <= 1e-09) || (1e-06 <= dVar25 / dVar31)) {
        ppppppuStack_118 = (undefined8 ******)((dVar31 / dVar25) * (dVar31 / dVar25));
        dVar28 = dVar28 - dVar36 * dVar36 * (double)ppppppuStack_118;
        dVar29 = dStack_f8 * dVar30 + dVar29 * dStack_108 +
                 dVar36 * -((double)ppppppuStack_118 * dStack_100);
        dVar29 = dVar29 + dVar29;
        dVar33 = dVar33 - dStack_100 * dStack_100 * (double)ppppppuStack_118;
        dVar30 = dVar33 * dVar28 * -4.0 + dVar29 * dVar29;
        if ((0.0 <= dVar30) && (1e-09 < ABS(dVar28))) {
          dVar30 = SQRT(dVar30);
          dVar38 = -dVar30;
          if (0.0 <= dVar29) {
            dVar38 = dVar30;
          }
          dVar29 = (dVar29 + dVar38) * -0.5;
          dVar28 = dVar29 / dVar28;
          dVar33 = dVar33 / dVar29;
          if (ABS(dVar29) <= 1e-09) {
            dVar33 = INFINITY;
          }
          dVar29 = dVar33;
          if (dVar28 <= dVar33) {
            dVar29 = dVar28;
            dVar28 = dVar33;
          }
          pppppppuStack_150 = &pppppppuStack_a8;
          ppppppuStack_148 = (undefined8 ******)((long)&uStack_110 + 7);
          ppppppuStack_140 = &ppppppuStack_f0;
          pdStack_138 = &dStack_108;
          pppppppuStack_128 = &pppppppuStack_a0;
          ppppppuStack_120 = &ppppppuStack_118;
          dVar33 = (double)param_1 + -1e-09;
          bVar7 = false;
          if ((1e-09 < dVar29) && (bVar7 = false, !NAN(dVar29) && !NAN(dVar33))) {
            bVar7 = dVar29 < dVar33;
          }
          if (bVar7) {
            dVar30 = dStack_100 + dVar36 * dVar29;
            bVar7 = true;
            bVar8 = false;
            if (dVar30 <= 0.0) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(dVar30) && !NAN(-1e-09 - dVar25)) {
                bVar7 = dVar30 < -1e-09 - dVar25;
                bVar8 = false;
              }
            }
            if (bVar7 != bVar8) goto code_r0x00010aa46ed8;
LAB_10aa46ef8:
            func_0x00010aa4781c(dVar29,&pppppppuStack_150);
            dVar36 = param_4[1];
          }
          else {
code_r0x00010aa46ed8:
            bVar7 = false;
            if ((1e-09 < dVar28) && (bVar7 = false, !NAN(dVar28) && !NAN(dVar33))) {
              bVar7 = dVar28 < dVar33;
            }
            if (bVar7) {
              dVar33 = dStack_100 + dVar36 * dVar28;
              bVar7 = true;
              bVar8 = false;
              if (dVar33 <= 0.0) {
                bVar7 = false;
                bVar8 = true;
                if (!NAN(dVar33) && !NAN(-1e-09 - dVar25)) {
                  bVar7 = dVar33 < -1e-09 - dVar25;
                  bVar8 = false;
                }
              }
              dVar29 = dVar28;
              if (bVar7 == bVar8) goto LAB_10aa46ef8;
            }
          }
        }
      }
    }
    else {
      pppppppuStack_a8 = (undefined8 *******)param_1;
      if (1e-09 < ABS(dVar36)) {
        ppppppuVar26 = (undefined8 ******)(-dStack_100 / dVar36);
        bVar7 = false;
        if ((0.0 < (double)ppppppuVar26) &&
           (bVar7 = false, !NAN((double)ppppppuVar26) && !NAN((double)param_1 + -1e-09))) {
          bVar7 = (double)ppppppuVar26 < (double)param_1 + -1e-09;
        }
        pppppppuStack_a8 = (undefined8 *******)param_1;
        if (bVar7) {
          uStack_110 = 0x100000000000000;
          uStack_d8 = 0.0;
          ppppppuStack_c8 = (undefined8 ******)0x0;
          pdStack_b8 = (double *)0x3ff0000000000000;
          ppppppuStack_e8 = ppppppuVar26;
          ppppppuStack_d0 = (undefined8 ******)pppppuStack_98;
          pppppppuStack_a8 = (undefined8 *******)ppppppuVar26;
          if (0.0 <= dVar36) {
            pdStack_b8 = (double *)0xbff0000000000000;
          }
        }
      }
    }
    if ((ABS(dVar36) <= 1e-09) ||
       (ppppppuVar26 = (undefined8 ******)((-dVar25 - dStack_100) / dVar36),
       (double)ppppppuVar26 <= 1e-09)) goto LAB_10aa46bec;
  }
  if ((double)ppppppuVar26 < (double)pppppppuStack_a8 + -1e-09) {
    dStack_108 = (double)ppppppuVar26 * *param_4 + dStack_108;
    dStack_f8 = (double)ppppppuVar26 * param_4[2] + dStack_f8;
    if (dStack_f8 * dStack_f8 + dStack_108 * dStack_108 <= dVar31 * dVar31) {
      uStack_110._7_1_ = '\x01';
      ppppppuStack_c8 = (undefined8 ******)(dStack_f8 + (double)pdStack_90);
      uStack_d8 = dStack_108 + (double)pppppppuStack_a0;
      ppppppuStack_d0 =
           (undefined8 ******)(dStack_100 + dVar36 * (double)ppppppuVar26 + (double)pppppuStack_98);
      pdStack_b8 = (double *)0xbff0000000000000;
      pdStack_c0 = (double *)0x0;
      pdStack_b0 = (double *)0x0;
      ppppppuStack_e8 = ppppppuVar26;
    }
  }
LAB_10aa46bec:
  if (uStack_110._7_1_ == '\x01') {
    param_6[1] = (ulong)ppppppuStack_e8;
    *param_6 = (ulong)ppppppuStack_f0;
    param_6[3] = (ulong)uStack_d8;
    param_6[2] = (ulong)dStack_e0;
    param_6[5] = (ulong)ppppppuStack_c8;
    param_6[4] = (ulong)ppppppuStack_d0;
    param_6[7] = (ulong)pdStack_b8;
    param_6[6] = (ulong)pdStack_c0;
    param_6[8] = (ulong)pdStack_b0;
    *(undefined1 *)param_6 = 1;
  }
  return uStack_110._7_1_;
}



/* Entry: 10aa47110; end: 10aa474ff;  */

byte FUN_10aa47110(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                  undefined8 *param_6)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  double dStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  byte bStack_d1;
  double dStack_d0;
  double *pdStack_c8;
  double *pdStack_c0;
  double *pdStack_b8;
  double *pdStack_b0;
  double **ppdStack_a8;
  double *pdStack_a0;
  byte *pbStack_98;
  undefined1 *puStack_90;
  double *pdStack_88;
  double *pdStack_80;
  double dStack_78;
  
  puStack_90 = &uStack_120;
  bStack_d1 = 0;
  if (((0.0 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    bStack_d1 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    dStack_118 = 0.0;
    dStack_100 = 0.0;
    dStack_108 = 0.0;
    dStack_f0 = 0.0;
    dStack_f8 = 0.0;
    dStack_e0 = 0.0;
    dStack_e8 = 0.0;
    dVar4 = *param_4;
    dVar5 = *param_5;
    if (1e-09 <= param_2) {
      dVar7 = param_5[2];
      dVar6 = dVar7 * dVar7 + dVar5 * dVar5;
      if (1e-18 <= dVar6) {
        dVar8 = param_4[2];
        dVar9 = dVar7 * dVar8 + dVar5 * dVar4;
        dVar9 = dVar9 + dVar9;
        dVar8 = (dVar8 * dVar8 + dVar4 * dVar4) - param_2 * param_2;
        dVar7 = dVar6 * -4.0 * dVar8 + dVar9 * dVar9;
        if (0.0 <= dVar7) {
          dVar7 = SQRT(dVar7);
          dVar4 = -dVar7;
          if (0.0 <= dVar9) {
            dVar4 = dVar7;
          }
          dVar4 = (dVar9 + dVar4) * -0.5;
          dVar6 = dVar4 / dVar6;
          dVar8 = dVar8 / dVar4;
          if (ABS(dVar4) <= 1e-09) {
            dVar8 = INFINITY;
          }
          pdStack_c8 = &dStack_d0;
          pbStack_98 = &bStack_d1;
          dVar4 = dVar8;
          if (dVar6 <= dVar8) {
            dVar4 = dVar6;
          }
          pdStack_b0 = &dStack_78;
          ppdStack_a8 = &pdStack_a0;
          uVar3 = 0;
          dStack_d0 = param_1;
          pdStack_c0 = param_4;
          pdStack_b8 = param_5;
          pdStack_a0 = pdStack_c8;
          pdStack_88 = param_4;
          pdStack_80 = param_5;
          dStack_78 = param_3 * 0.5;
          func_0x00010aa476ac(dVar4);
          if ((uVar3 & 1) == 0) {
            if (dVar6 <= dVar8) {
              dVar6 = dVar8;
            }
            func_0x00010aa476ac(dVar6,&pdStack_c8);
          }
          dVar4 = *param_4;
          dVar5 = *param_5;
          param_1 = dStack_d0;
        }
      }
    }
    dVar6 = param_4[1];
    dVar7 = param_4[2];
    dVar8 = param_5[1];
    dVar9 = param_5[2];
    dVar10 = dVar5 * dVar5 + dVar8 * dVar8 + dVar9 * dVar9;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      dVar12 = 1.0;
      if (!bVar1) {
        dVar12 = -1.0;
      }
      dVar15 = param_3 * 0.5 * dVar12;
      dVar14 = dVar6 - dVar15;
      dVar13 = dVar7 * dVar9 + dVar5 * dVar4 + dVar8 * dVar14;
      dVar13 = dVar13 + dVar13;
      dVar14 = dVar7 * dVar7 + dVar4 * dVar4 + dVar14 * dVar14 + param_2 * -param_2;
      dVar16 = dVar10 * -4.0 * dVar14 + dVar13 * dVar13;
      if (0.0 <= dVar16) {
        dVar16 = SQRT(dVar16);
        dVar11 = -dVar16;
        if (0.0 <= dVar13) {
          dVar11 = dVar16;
        }
        dVar16 = (dVar13 + dVar11) * -0.5;
        dVar13 = dVar16 / dVar10;
        dVar14 = dVar14 / dVar16;
        if (ABS(dVar16) <= 1e-09) {
          dVar14 = INFINITY;
        }
        dVar16 = dVar14;
        if (dVar13 <= dVar14) {
          dVar16 = dVar13;
          dVar13 = dVar14;
        }
        dVar14 = param_1 + -1e-09;
        bVar2 = false;
        if ((0.0 <= dVar16) && (bVar2 = false, !NAN(dVar16) && !NAN(dVar14))) {
          bVar2 = dVar16 < dVar14;
        }
        if (bVar2) {
          dVar11 = dVar6 + dVar8 * dVar16;
          dVar17 = dVar11 - dVar15;
          if (dVar12 * dVar17 < 0.0) goto LAB_10aa47394;
          dStack_f8 = dVar7 + dVar9 * dVar16;
          dStack_108 = dVar4 + dVar5 * dVar16;
          dVar13 = dStack_f8 * dStack_f8 + dStack_108 * dStack_108 + dVar17 * dVar17;
          dStack_f0 = 0.0;
          dStack_118 = dVar16;
          dStack_100 = dVar11;
          if (1e-18 < dVar13 && (ulong)ABS(dVar13) < 0x7ff0000000000000) {
            dStack_e0 = 1.0 / SQRT(dVar13);
            dStack_f0 = dStack_108 * dStack_e0;
            dVar12 = dVar17 * dStack_e0;
            dStack_e0 = dStack_f8 * dStack_e0;
          }
          else {
            dStack_e0 = 0.0;
          }
LAB_10aa474a0:
          bStack_d1 = 1;
          param_1 = dStack_118;
          dStack_e8 = dVar12;
        }
        else {
LAB_10aa47394:
          bVar2 = false;
          if ((0.0 <= dVar13) && (bVar2 = false, !NAN(dVar13) && !NAN(dVar14))) {
            bVar2 = dVar13 < dVar14;
          }
          if (bVar2) {
            dVar14 = dVar6 + dVar8 * dVar13;
            dVar15 = dVar14 - dVar15;
            if (0.0 <= dVar12 * dVar15) {
              dStack_f8 = dVar7 + dVar9 * dVar13;
              dStack_108 = dVar4 + dVar5 * dVar13;
              dVar16 = dStack_f8 * dStack_f8 + dStack_108 * dStack_108 + dVar15 * dVar15;
              dStack_f0 = 0.0;
              dStack_118 = dVar13;
              dStack_100 = dVar14;
              if (1e-18 < dVar16 && (ulong)ABS(dVar16) < 0x7ff0000000000000) {
                dStack_e0 = 1.0 / SQRT(dVar16);
                dStack_f0 = dStack_108 * dStack_e0;
                dVar12 = dVar15 * dStack_e0;
                dStack_e0 = dStack_f8 * dStack_e0;
              }
              else {
                dStack_e0 = 0.0;
              }
              goto LAB_10aa474a0;
            }
          }
        }
      }
      bVar2 = false;
    } while (bVar1);
    if ((bStack_d1 & 1) != 0) {
      param_6[1] = dStack_118;
      *param_6 = CONCAT71(uStack_11f,uStack_120);
      param_6[3] = dStack_108;
      param_6[2] = uStack_110;
      param_6[5] = dStack_f8;
      param_6[4] = dStack_100;
      param_6[7] = dStack_e8;
      param_6[6] = dStack_f0;
      param_6[8] = dStack_e0;
      *(undefined1 *)param_6 = 1;
    }
  }
  return bStack_d1;
}



/* Entry: 10aa47500; end: 10aa47903;  */

undefined8
FUN_10aa47500(double param_1,double param_2,double *param_3,double *param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if ((0.0 <= param_1) && (0.0 <= param_2)) {
    dVar5 = *param_3;
    dVar6 = param_3[1];
    dVar7 = param_3[2];
    dVar4 = *param_4;
    dVar8 = param_4[1];
    dVar9 = param_4[2];
    dVar3 = dVar4 * dVar4 + dVar8 * dVar8 + dVar9 * dVar9;
    dVar8 = dVar5 * dVar4 + dVar6 * dVar8 + dVar7 * dVar9;
    dVar8 = dVar8 + dVar8;
    dVar4 = (dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7) - param_2 * param_2;
    dVar5 = dVar4 * dVar3 * -4.0 + dVar8 * dVar8;
    if (0.0 <= dVar5) {
      dVar5 = SQRT(dVar5);
      dVar6 = -dVar5;
      if (0.0 <= dVar8) {
        dVar6 = dVar5;
      }
      dVar8 = (dVar8 + dVar6) * -0.5;
      dVar3 = dVar8 / dVar3;
      dVar4 = dVar4 / dVar8;
      if (ABS(dVar8) <= 1e-09) {
        dVar4 = INFINITY;
      }
      dVar8 = dVar4;
      if (dVar3 <= dVar4) {
        dVar8 = dVar3;
        dVar3 = dVar4;
      }
      dVar4 = 1.0;
      if (0.0 <= dVar8) {
        dVar4 = 0.0;
      }
      dVar5 = 1.0;
      if (0.0 > dVar8) {
        dVar5 = 0.0;
      }
      dVar3 = dVar8 * dVar5 + dVar3 * dVar4;
      bVar1 = false;
      bVar2 = false;
      if (dVar3 <= param_1) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar3)) {
          bVar1 = dVar3 == 0.0;
          bVar2 = 0.0 <= dVar3;
        }
      }
      dVar4 = -1.0;
      if (bVar2 && !bVar1) {
        dVar4 = dVar3;
      }
      if (0.0 < dVar4) {
        *param_5 = 1;
        *(double *)(param_5 + 8) = dVar4;
        dVar3 = dVar4 * param_4[2] + param_3[2];
        dVar8 = *param_4 * dVar4 + *param_3;
        dVar4 = param_4[1] * dVar4 + param_3[1];
        *(double *)(param_5 + 0x20) = dVar4;
        *(double *)(param_5 + 0x18) = dVar8;
        *(double *)(param_5 + 0x28) = dVar3;
        dVar5 = dVar8 * dVar8 + dVar4 * dVar4 + dVar3 * dVar3;
        if (1e-18 < dVar5 && (ulong)ABS(dVar5) < 0x7ff0000000000000) {
          dVar5 = 1.0 / SQRT(dVar5);
          dVar8 = dVar8 * dVar5;
          dVar4 = dVar4 * dVar5;
          dVar3 = dVar3 * dVar5;
        }
        else {
          dVar8 = -*param_4;
          dVar4 = -param_4[1];
          dVar3 = -param_4[2];
        }
        *(double *)(param_5 + 0x38) = dVar4;
        *(double *)(param_5 + 0x30) = dVar8;
        *(double *)(param_5 + 0x40) = dVar3;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10aa47904; end: 10aa47c3b;  */

byte FUN_10aa47904(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                  undefined8 *param_6)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  double dStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  byte bStack_d1;
  double dStack_d0;
  double *pdStack_c8;
  double *pdStack_c0;
  double *pdStack_b8;
  double *pdStack_b0;
  double **ppdStack_a8;
  double *pdStack_a0;
  byte *pbStack_98;
  undefined1 *puStack_90;
  double *pdStack_88;
  double *pdStack_80;
  double dStack_78;
  
  puStack_90 = &uStack_120;
  bStack_d1 = 0;
  if (((0.0 <= param_1) && (0.0 <= param_2)) && (0.0 <= param_3)) {
    bStack_d1 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    dStack_118 = 0.0;
    dStack_100 = 0.0;
    dStack_108 = 0.0;
    dStack_f0 = 0.0;
    dStack_f8 = 0.0;
    dStack_e0 = 0.0;
    dStack_e8 = 0.0;
    dVar3 = *param_4;
    dVar4 = *param_5;
    if (1e-09 <= param_2) {
      dVar6 = param_5[2];
      dVar5 = dVar6 * dVar6 + dVar4 * dVar4;
      if (1e-18 <= dVar5) {
        dVar7 = param_4[2];
        dVar8 = dVar6 * dVar7 + dVar4 * dVar3;
        dVar8 = dVar8 + dVar8;
        dVar6 = (dVar7 * dVar7 + dVar3 * dVar3) - param_2 * param_2;
        dVar7 = dVar5 * -4.0 * dVar6 + dVar8 * dVar8;
        if (0.0 <= dVar7) {
          dVar7 = SQRT(dVar7);
          dVar3 = -dVar7;
          if (0.0 <= dVar8) {
            dVar3 = dVar7;
          }
          dVar3 = (dVar8 + dVar3) * -0.5;
          dVar6 = dVar6 / dVar3;
          if (ABS(dVar3) <= 1e-09) {
            dVar6 = INFINITY;
          }
          pdStack_c8 = &dStack_d0;
          pbStack_98 = &bStack_d1;
          if (dVar3 / dVar5 <= dVar6) {
            dVar6 = dVar3 / dVar5;
          }
          pdStack_b0 = &dStack_78;
          ppdStack_a8 = &pdStack_a0;
          dStack_d0 = param_1;
          pdStack_c0 = param_4;
          pdStack_b8 = param_5;
          pdStack_a0 = pdStack_c8;
          pdStack_88 = param_4;
          pdStack_80 = param_5;
          dStack_78 = param_3 * 0.5;
          func_0x00010aa47dcc(dVar6,&pdStack_c8);
          dVar3 = *param_4;
          dVar4 = *param_5;
          param_1 = dStack_d0;
        }
      }
    }
    dVar5 = param_4[2];
    dVar6 = param_5[1];
    dVar7 = param_5[2];
    dVar8 = dVar4 * dVar4 + dVar6 * dVar6 + dVar7 * dVar7;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      dVar9 = 1.0;
      if (!bVar1) {
        dVar9 = -1.0;
      }
      dVar11 = param_3 * 0.5 * dVar9;
      dVar12 = param_4[1] - dVar11;
      dVar10 = dVar5 * dVar7 + dVar4 * dVar3 + dVar6 * dVar12;
      dVar10 = dVar10 + dVar10;
      dVar12 = dVar5 * dVar5 + dVar3 * dVar3 + dVar12 * dVar12 + param_2 * -param_2;
      dVar13 = dVar8 * -4.0 * dVar12 + dVar10 * dVar10;
      if (0.0 <= dVar13) {
        dVar13 = SQRT(dVar13);
        dVar14 = -dVar13;
        if (0.0 <= dVar10) {
          dVar14 = dVar13;
        }
        dVar10 = (dVar10 + dVar14) * -0.5;
        dVar13 = dVar10 / dVar8;
        dVar12 = dVar12 / dVar10;
        if (ABS(dVar10) <= 1e-09) {
          dVar12 = INFINITY;
        }
        if (dVar13 <= dVar12) {
          dVar12 = dVar13;
        }
        bVar2 = false;
        if ((0.0 <= dVar12) && (bVar2 = false, !NAN(dVar12) && !NAN(param_1 + -1e-09))) {
          bVar2 = dVar12 < param_1 + -1e-09;
        }
        if (bVar2) {
          dVar10 = param_4[1] + dVar6 * dVar12;
          dVar11 = dVar10 - dVar11;
          if (0.0 <= dVar9 * dVar11) {
            dStack_f8 = dVar5 + dVar7 * dVar12;
            dStack_108 = dVar3 + dVar4 * dVar12;
            bStack_d1 = 1;
            dVar13 = dStack_f8 * dStack_f8 + dStack_108 * dStack_108 + dVar11 * dVar11;
            dStack_f0 = 0.0;
            dStack_e0 = 0.0;
            param_1 = dVar12;
            dStack_118 = dVar12;
            dStack_100 = dVar10;
            dStack_e8 = dVar9;
            if (1e-18 < dVar13 && (ulong)ABS(dVar13) < 0x7ff0000000000000) {
              dStack_e0 = 1.0 / SQRT(dVar13);
              dStack_f0 = dStack_108 * dStack_e0;
              dStack_e8 = dVar11 * dStack_e0;
              dStack_e0 = dStack_f8 * dStack_e0;
            }
          }
        }
      }
      bVar2 = false;
    } while (bVar1);
    if ((bStack_d1 & 1) != 0) {
      param_6[1] = dStack_118;
      *param_6 = CONCAT71(uStack_11f,uStack_120);
      param_6[3] = dStack_108;
      param_6[2] = uStack_110;
      param_6[5] = dStack_f8;
      param_6[4] = dStack_100;
      param_6[7] = dStack_e8;
      param_6[6] = dStack_f0;
      param_6[8] = dStack_e0;
      *(undefined1 *)param_6 = 1;
    }
  }
  return bStack_d1;
}



/* Entry: 10aa47c3c; end: 10aa48017;  */

undefined8
FUN_10aa47c3c(double param_1,double param_2,double *param_3,double *param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if ((0.0 <= param_1) && (0.0 <= param_2)) {
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar8 = param_3[2];
    dVar5 = *param_4;
    dVar9 = param_4[1];
    dVar10 = param_4[2];
    dVar4 = dVar5 * dVar5 + dVar9 * dVar9 + dVar10 * dVar10;
    dVar9 = dVar6 * dVar5 + dVar7 * dVar9 + dVar8 * dVar10;
    dVar9 = dVar9 + dVar9;
    dVar5 = (dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8) - param_2 * param_2;
    dVar6 = dVar5 * dVar4 * -4.0 + dVar9 * dVar9;
    if (0.0 <= dVar6) {
      dVar6 = SQRT(dVar6);
      dVar7 = -dVar6;
      if (0.0 <= dVar9) {
        dVar7 = dVar6;
      }
      dVar9 = (dVar9 + dVar7) * -0.5;
      dVar4 = dVar9 / dVar4;
      dVar5 = dVar5 / dVar9;
      if (ABS(dVar9) <= 1e-09) {
        dVar5 = INFINITY;
      }
      if (dVar4 <= dVar5) {
        dVar5 = dVar4;
      }
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (dVar5 <= param_1) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar5)) {
          bVar1 = dVar5 < 0.0;
          bVar2 = dVar5 == 0.0;
          bVar3 = false;
        }
      }
      dVar4 = -1.0;
      if (!bVar2 && bVar1 == bVar3) {
        dVar4 = dVar5;
      }
      if (0.0 < dVar4) {
        *param_5 = 1;
        *(double *)(param_5 + 8) = dVar4;
        dVar5 = dVar4 * param_4[2] + param_3[2];
        dVar9 = *param_4 * dVar4 + *param_3;
        dVar4 = param_4[1] * dVar4 + param_3[1];
        *(double *)(param_5 + 0x20) = dVar4;
        *(double *)(param_5 + 0x18) = dVar9;
        *(double *)(param_5 + 0x28) = dVar5;
        dVar6 = dVar9 * dVar9 + dVar4 * dVar4 + dVar5 * dVar5;
        if (1e-18 < dVar6 && (ulong)ABS(dVar6) < 0x7ff0000000000000) {
          dVar6 = 1.0 / SQRT(dVar6);
          dVar9 = dVar9 * dVar6;
          dVar4 = dVar4 * dVar6;
          dVar5 = dVar5 * dVar6;
        }
        else {
          dVar9 = -*param_4;
          dVar4 = -param_4[1];
          dVar5 = -param_4[2];
        }
        *(double *)(param_5 + 0x38) = dVar4;
        *(double *)(param_5 + 0x30) = dVar9;
        *(double *)(param_5 + 0x40) = dVar5;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10aa48018; end: 10aa48087;  */

undefined8 FUN_10aa48018(void)

{
  int iVar1;
  
  if ((bRam0000000113305fb0 & 1) == 0) {
    iVar1 = 0x13305fb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113305f88 = 0;
      uRam0000000113305f80 = 0x3f800000;
      uRam0000000113305f98 = 0;
      uRam0000000113305f90 = 0x3f80000000000000;
      uRam0000000113305fa8 = 0x3f800000;
      uRam0000000113305fa0 = 0;
      ___cxa_guard_release(0x113305fb0);
    }
  }
  return 0x113305f80;
}



/* Entry: 10aa48088; end: 10aa48097;  */

void FUN_10aa48088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ba80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa48098; end: 10aa480b7;  */

void FUN_10aa48098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ba80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa480b8; end: 10aa480cb;  */

undefined8 * FUN_10aa480b8(long param_1)

{
  FUN_10a40bb4c(param_1 + 0x68);
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aa480cc; end: 10aa48167;  */

void FUN_10aa480cc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_10aa4a650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_10aa4a664();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010aa4a698(&lStack_58);
  }
  return;
}



/* Entry: 10aa48168; end: 10aa4816b;  */

void FUN_10aa48168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4816c; end: 10aa4855f;  */

undefined8 FUN_10aa4816c(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar24 [12];
  undefined8 uVar23;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  float fStack_d0;
  float fStack_cc;
  long lStack_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  float fStack_78;
  
  lVar10 = *param_2;
  if (param_2[1] == 0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *(int *)(param_2[1] + 4);
    if (-1 < iVar9) goto LAB_10aa481bc;
  }
  if ((*(uint *)(lVar10 + 300) >> 2 & 1) != 0) {
    return 0x3f800000;
  }
  *(uint *)(lVar10 + 300) = *(uint *)(lVar10 + 300) | 4;
LAB_10aa481bc:
  fVar12 = (float)param_2[4] * 100.0;
  fVar13 = (float)((ulong)param_2[4] >> 0x20) * 100.0;
  fStack_78 = (float)param_2[5] * 100.0;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x58);
    fVar17 = *(float *)(puVar8 + 1) * fVar12;
    fVar21 = *(float *)(puVar8 + 3) * fVar13;
    fVar26 = (float)((ulong)*puVar8 >> 0x20) * fVar12;
    fVar12 = (float)*puVar8 * fVar12 + (float)puVar8[2] * fVar13 +
             (float)puVar8[4] * fStack_78 + (float)puVar8[6];
    fVar13 = fVar26 + (float)((ulong)puVar8[2] >> 0x20) * fVar13 +
             (float)((ulong)puVar8[4] >> 0x20) * fStack_78 + (float)((ulong)puVar8[6] >> 0x20);
    fStack_78 = fVar17 + fVar21 + fStack_78 * *(float *)(puVar8 + 5) + *(float *)(puVar8 + 7);
  }
  fVar17 = *(float *)(param_2 + 6);
  fVar21 = *(float *)(param_1 + 0x40);
  fVar26 = *(float *)(param_1 + 0x44);
  lVar11 = *(long *)(lVar10 + 0x120);
  fVar27 = *(float *)(param_1 + 0x3c);
  lStack_80 = CONCAT44(fVar13,fVar12);
  if (param_3 == 0) {
    fVar14 = (float)param_2[3];
    fVar15 = (float)((ulong)param_2[3] >> 0x20);
    fVar12 = (float)param_2[2];
    fVar13 = (float)((ulong)param_2[2] >> 0x20);
    auVar16._0_4_ = *(float *)(lVar10 + 0x10) * fVar12;
    auVar16._4_4_ = *(float *)(lVar10 + 0x14) * fVar13;
    auVar16._8_4_ = *(float *)(lVar10 + 0x18) * fVar14;
    auVar16._12_4_ = *(float *)(lVar10 + 0x1c) * fVar15;
    fVar18 = fVar12 * (float)*(undefined8 *)(lVar10 + 0x20);
    fVar19 = fVar13 * (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
    fVar20 = fVar14 * (float)*(undefined8 *)(lVar10 + 0x28);
    fVar15 = fVar15 * (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
    fVar12 = fVar12 * *(float *)(lVar10 + 0x30);
    fVar13 = fVar13 * *(float *)(lVar10 + 0x34);
    fVar14 = fVar14 * *(float *)(lVar10 + 0x38);
    auVar22 = NEON_ext(auVar16,auVar16,8,1);
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar20;
    auVar4._12_4_ = fVar15;
    auVar5._4_4_ = fVar19;
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = fVar20;
    auVar5._12_4_ = fVar15;
    auVar25 = NEON_ext(auVar4,auVar5,8,1);
    auVar24._4_4_ = fVar18 + fVar19 + auVar25._0_4_;
    auVar24._0_4_ = auVar16._0_4_ + auVar16._4_4_ + auVar22._0_4_;
    auVar22._4_4_ = fVar13;
    auVar22._0_4_ = fVar12;
    auVar22._8_4_ = fVar14;
    auVar22._12_4_ = 0;
    auVar25._4_4_ = fVar13;
    auVar25._0_4_ = fVar12;
    auVar25._8_4_ = fVar14;
    auVar25._12_4_ = 0;
    auVar22 = NEON_ext(auVar22,auVar25,8,1);
    auVar24._8_4_ = fVar12 + fVar13 + auVar22._0_4_ + auVar22._4_4_;
  }
  else {
    auVar24 = SUB1612(*(undefined1 (*) [16])(param_2 + 2),0);
  }
  uVar23 = auVar24._0_8_;
  fVar12 = auVar24._8_4_;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    fVar18 = auVar24._4_4_;
    fVar15 = auVar24._0_4_;
    fVar13 = (float)*(undefined8 *)((long)puVar8 + 0xc) * fVar18 + (float)*puVar8 * fVar15 +
             (float)puVar8[3] * fVar12;
    fVar14 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0xc) >> 0x20) * fVar18 +
             (float)((ulong)*puVar8 >> 0x20) * fVar15 + (float)((ulong)puVar8[3] >> 0x20) * fVar12;
    fVar15 = *(float *)((long)puVar8 + 0x14) * fVar18 + fVar15 * *(float *)(puVar8 + 1) +
             fVar12 * *(float *)(puVar8 + 4);
    fVar18 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
    if ((1e-06 < fVar18) && (fVar18 = 1.0 / SQRT(fVar18), 0.0 < fVar18)) {
      uVar23 = CONCAT44(fVar14 * fVar18,fVar13 * fVar18);
      fVar12 = fVar15 * fVar18;
    }
  }
  plVar6 = *(long **)(lVar11 + 0x10);
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 != (long *)0x0) {
      fVar21 = fVar21 + fVar26 * fVar17;
      lVar10 = *(long *)(lVar11 + 8);
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      if (lVar10 != 0) {
        if ((iVar9 < 0) || (*(char *)(*(long *)(lVar10 + 0x250) + 0x3c) != '\x06')) {
          lStack_90 = 0;
          plStack_88 = (long *)0x0;
        }
        else {
          FUN_10a407a70(&lStack_90,*(long *)(lVar10 + 0x250),lVar10,iVar9,&lStack_80);
        }
        uStack_b8 = (undefined4)((ulong)uVar23 >> 0x20);
        lVar7 = *(long *)(param_1 + 0x68);
        lStack_c8 = lStack_80;
        fStack_c0 = fStack_78;
        lStack_d8 = lVar11;
        fStack_d0 = fVar27 * fVar21;
        fStack_cc = fVar21;
        uStack_bc = (int)uVar23;
        fStack_b4 = fVar12;
        FUN_10aa29550(&lStack_e8,lVar10);
        plVar6 = plStack_88;
        lVar10 = lStack_90;
        lStack_b0 = lStack_e8;
        plStack_a8 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar1 = plStack_e0 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_a0 = lStack_90;
        plStack_98 = plStack_88;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        plVar1 = *(long **)(lVar7 + 8);
        if (plVar1 < *(long **)(lVar7 + 0x10)) {
          *plVar1 = lVar11;
          plVar1[4] = CONCAT44(fStack_b4,uStack_b8);
          plVar1[3] = CONCAT44(uStack_bc,fStack_c0);
          plVar1[2] = lStack_c8;
          plVar1[1] = CONCAT44(fStack_cc,fStack_d0);
          plVar1[5] = lStack_e8;
          plVar1[6] = (long)plStack_e0;
          lStack_b0 = 0;
          plStack_a8 = (long *)0x0;
          plVar1[7] = lVar10;
          plVar1[8] = (long)plVar6;
          lStack_a0 = 0;
          plStack_98 = (long *)0x0;
          *(long **)(lVar7 + 8) = plVar1 + 9;
        }
        else {
          lVar10 = lVar7;
          FUN_10aa48594(lVar7,&lStack_d8);
          plVar6 = plStack_98;
          *(long *)(lVar7 + 8) = lVar10;
          if (plStack_98 != (long *)0x0) {
            plVar1 = plStack_98 + 1;
            do {
              lVar10 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
        }
        if (plStack_a8 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (plStack_e0 != (long *)0x0) {
          plVar6 = plStack_e0 + 1;
          do {
            lVar10 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
        plVar6 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
          do {
            lVar10 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
    }
  }
  return 0x3f800000;
}



/* Entry: 10aa48560; end: 10aa48593;  */

long FUN_10aa48560(long param_1)

{
  FUN_10a40bb4c(param_1 + 0x38);
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aa48594; end: 10aa486c7;  */

undefined8 * FUN_10aa48594(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar6 = (lVar9 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar6 < 0x38e38e38e38e38f) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * 0x1c71c71c71c71c72;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
      uVar7 = 0x38e38e38e38e38e;
    }
    plStack_38 = param_1;
    if (uVar7 < 0x38e38e38e38e38f) {
      lVar2 = uVar7 * 0x48;
      __Znwm();
      puVar3 = (undefined8 *)(lVar2 + lVar9);
      *puVar3 = *param_2;
      uVar10 = param_2[1];
      puVar3[2] = param_2[2];
      puVar3[1] = uVar10;
      uVar10 = param_2[3];
      puVar3[4] = param_2[4];
      puVar3[3] = uVar10;
      uVar10 = param_2[5];
      puVar3[6] = param_2[6];
      puVar3[5] = uVar10;
      param_2[5] = 0;
      param_2[6] = 0;
      uVar11 = param_2[8];
      uVar10 = param_2[7];
      param_2[7] = 0;
      param_2[8] = 0;
      lVar5 = *param_1;
      lVar1 = param_1[1];
      lVar9 = (long)puVar3 + (lVar5 - lVar1);
      puVar3[8] = uVar11;
      puVar3[7] = uVar10;
      FUN_10aa486dc(lVar5,lVar1,lVar9);
      lStack_58 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)(puVar3 + 9);
      lStack_40 = param_1[2];
      param_1[2] = lVar2 + uVar7 * 0x48;
      lStack_50 = lStack_58;
      lStack_48 = lStack_58;
      func_0x00010aa48794(&lStack_58);
      return puVar3 + 9;
    }
  }
  else {
    FUN_10aa486c8();
  }
  func_0x000109ffded8();
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar4 = puVar3;
  if (puVar3 != param_2) {
    do {
      *param_3 = *puVar4;
      uVar11 = puVar4[2];
      uVar10 = puVar4[1];
      uVar12 = puVar4[3];
      param_3[4] = puVar4[4];
      param_3[3] = uVar12;
      param_3[2] = uVar11;
      param_3[1] = uVar10;
      uVar10 = puVar4[5];
      param_3[6] = puVar4[6];
      param_3[5] = uVar10;
      puVar4[5] = 0;
      puVar4[6] = 0;
      uVar10 = puVar4[7];
      param_3[8] = puVar4[8];
      param_3[7] = uVar10;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4 = puVar4 + 9;
      param_3 = param_3 + 9;
      puVar8 = puVar3;
    } while (puVar4 != param_2);
    do {
      puVar3 = puVar8;
      func_0x00010aa4875c(puVar8);
      puVar8 = puVar8 + 9;
    } while (puVar8 != param_2);
  }
  return puVar3;
}



/* Entry: 10aa486c8; end: 10aa486db;  */

void FUN_10aa486c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar2 = puVar1;
  if (puVar1 != param_2) {
    do {
      *param_3 = *puVar2;
      uVar4 = puVar2[2];
      uVar3 = puVar2[1];
      uVar5 = puVar2[3];
      param_3[4] = puVar2[4];
      param_3[3] = uVar5;
      param_3[2] = uVar4;
      param_3[1] = uVar3;
      uVar3 = puVar2[5];
      param_3[6] = puVar2[6];
      param_3[5] = uVar3;
      puVar2[5] = 0;
      puVar2[6] = 0;
      uVar3 = puVar2[7];
      param_3[8] = puVar2[8];
      param_3[7] = uVar3;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2 = puVar2 + 9;
      param_3 = param_3 + 9;
    } while (puVar2 != param_2);
    do {
      func_0x00010aa4875c(puVar1);
      puVar1 = puVar1 + 9;
    } while (puVar1 != param_2);
  }
  return;
}



/* Entry: 10aa486dc; end: 10aa487df;  */

void FUN_10aa486dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = *puVar1;
      uVar3 = puVar1[2];
      uVar2 = puVar1[1];
      uVar4 = puVar1[3];
      param_3[4] = puVar1[4];
      param_3[3] = uVar4;
      param_3[2] = uVar3;
      param_3[1] = uVar2;
      uVar2 = puVar1[5];
      param_3[6] = puVar1[6];
      param_3[5] = uVar2;
      puVar1[5] = 0;
      puVar1[6] = 0;
      uVar2 = puVar1[7];
      param_3[8] = puVar1[8];
      param_3[7] = uVar2;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1 = puVar1 + 9;
      param_3 = param_3 + 9;
    } while (puVar1 != param_2);
    do {
      func_0x00010aa4875c(param_1);
      param_1 = param_1 + 9;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10aa487e0; end: 10aa487e3;  */

void FUN_10aa487e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa487e4; end: 10aa48b8b;  */

undefined8 FUN_10aa487e4(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar23 [12];
  undefined8 uVar22;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  float fStack_b0;
  float fStack_ac;
  long lStack_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  float fStack_58;
  
  lVar10 = *param_2;
  if (param_2[1] == 0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *(int *)(param_2[1] + 4);
    if (-1 < iVar9) goto LAB_10aa4882c;
  }
  if ((*(uint *)(lVar10 + 300) >> 2 & 1) != 0) {
    return 0x3f800000;
  }
  *(uint *)(lVar10 + 300) = *(uint *)(lVar10 + 300) | 4;
LAB_10aa4882c:
  lVar11 = *(long *)(lVar10 + 0x120);
  fVar26 = *(float *)(param_1 + 0x3c);
  fVar17 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44) * *(float *)(param_2 + 4);
  fStack_58 = fVar17 * *(float *)(*(undefined8 **)(param_1 + 0x50) + 1) +
              *(float *)(*(undefined8 **)(param_1 + 0x48) + 1);
  uVar15 = **(undefined8 **)(param_1 + 0x50);
  uVar22 = **(undefined8 **)(param_1 + 0x48);
  lStack_60 = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar17 + (float)((ulong)uVar22 >> 0x20),
                       (float)uVar15 * fVar17 + (float)uVar22);
  if (param_3 == 0) {
    fVar13 = (float)param_2[3];
    fVar14 = (float)((ulong)param_2[3] >> 0x20);
    fVar25 = (float)param_2[2];
    fVar12 = (float)((ulong)param_2[2] >> 0x20);
    auVar16._0_4_ = *(float *)(lVar10 + 0x10) * fVar25;
    auVar16._4_4_ = *(float *)(lVar10 + 0x14) * fVar12;
    auVar16._8_4_ = *(float *)(lVar10 + 0x18) * fVar13;
    auVar16._12_4_ = *(float *)(lVar10 + 0x1c) * fVar14;
    fVar18 = fVar25 * (float)*(undefined8 *)(lVar10 + 0x20);
    fVar19 = fVar12 * (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
    fVar20 = fVar13 * (float)*(undefined8 *)(lVar10 + 0x28);
    fVar14 = fVar14 * (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
    fVar25 = fVar25 * *(float *)(lVar10 + 0x30);
    fVar12 = fVar12 * *(float *)(lVar10 + 0x34);
    fVar13 = fVar13 * *(float *)(lVar10 + 0x38);
    auVar21 = NEON_ext(auVar16,auVar16,8,1);
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar20;
    auVar4._12_4_ = fVar14;
    auVar5._4_4_ = fVar19;
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = fVar20;
    auVar5._12_4_ = fVar14;
    auVar24 = NEON_ext(auVar4,auVar5,8,1);
    auVar23._4_4_ = fVar18 + fVar19 + auVar24._0_4_;
    auVar23._0_4_ = auVar16._0_4_ + auVar16._4_4_ + auVar21._0_4_;
    auVar21._4_4_ = fVar12;
    auVar21._0_4_ = fVar25;
    auVar21._8_4_ = fVar13;
    auVar21._12_4_ = 0;
    auVar24._4_4_ = fVar12;
    auVar24._0_4_ = fVar25;
    auVar24._8_4_ = fVar13;
    auVar24._12_4_ = 0;
    auVar21 = NEON_ext(auVar21,auVar24,8,1);
    auVar23._8_4_ = fVar25 + fVar12 + auVar21._0_4_ + auVar21._4_4_;
  }
  else {
    auVar23 = SUB1612(*(undefined1 (*) [16])(param_2 + 2),0);
  }
  uVar22 = auVar23._0_8_;
  fVar25 = auVar23._8_4_;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    fVar18 = auVar23._4_4_;
    fVar14 = auVar23._0_4_;
    fVar12 = (float)*(undefined8 *)((long)puVar7 + 0xc) * fVar18 + (float)*puVar7 * fVar14 +
             (float)puVar7[3] * fVar25;
    fVar13 = (float)((ulong)*(undefined8 *)((long)puVar7 + 0xc) >> 0x20) * fVar18 +
             (float)((ulong)*puVar7 >> 0x20) * fVar14 + (float)((ulong)puVar7[3] >> 0x20) * fVar25;
    fVar14 = *(float *)((long)puVar7 + 0x14) * fVar18 + fVar14 * *(float *)(puVar7 + 1) +
             fVar25 * *(float *)(puVar7 + 4);
    fVar18 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
    if ((1e-06 < fVar18) && (fVar18 = 1.0 / SQRT(fVar18), 0.0 < fVar18)) {
      uVar22 = CONCAT44(fVar13 * fVar18,fVar12 * fVar18);
      fVar25 = fVar14 * fVar18;
    }
  }
  plVar6 = *(long **)(lVar11 + 0x10);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    lVar10 = *(long *)(lVar11 + 8);
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    if (lVar10 != 0) {
      if ((iVar9 < 0) || (*(char *)(*(long *)(lVar10 + 0x250) + 0x3c) != '\x06')) {
        lStack_70 = 0;
        plStack_68 = (long *)0x0;
      }
      else {
        FUN_10a407a70(&lStack_70,*(long *)(lVar10 + 0x250),lVar10,iVar9,&lStack_60);
      }
      lVar8 = *(long *)(param_1 + 0x68);
      lStack_a8 = lStack_60;
      fStack_a0 = fStack_58;
      uStack_9c = (undefined4)uVar22;
      uStack_98 = (undefined4)((ulong)uVar22 >> 0x20);
      lStack_b8 = lVar11;
      fStack_b0 = fVar26 * fVar17;
      fStack_ac = fVar17;
      fStack_94 = fVar25;
      FUN_10aa29550(&lStack_c8,lVar10);
      plVar6 = plStack_68;
      lVar10 = lStack_70;
      lStack_90 = lStack_c8;
      plStack_88 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar1 = plStack_c0 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_80 = lStack_70;
      plStack_78 = plStack_68;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      plVar1 = *(long **)(lVar8 + 8);
      if (plVar1 < *(long **)(lVar8 + 0x10)) {
        *plVar1 = lVar11;
        plVar1[4] = CONCAT44(fStack_94,uStack_98);
        plVar1[3] = CONCAT44(uStack_9c,fStack_a0);
        plVar1[2] = lStack_a8;
        plVar1[1] = CONCAT44(fStack_ac,fStack_b0);
        plVar1[5] = lStack_c8;
        plVar1[6] = (long)plStack_c0;
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        plVar1[7] = lVar10;
        plVar1[8] = (long)plVar6;
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        *(long **)(lVar8 + 8) = plVar1 + 9;
      }
      else {
        lVar10 = lVar8;
        FUN_10aa48594(lVar8,&lStack_b8);
        plVar6 = plStack_78;
        *(long *)(lVar8 + 8) = lVar10;
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
          do {
            lVar10 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      if (plStack_88 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_c0 != (long *)0x0) {
        plVar6 = plStack_c0 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
        }
      }
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
  }
  return 0x3f800000;
}



/* Entry: 10aa48b8c; end: 10aa492eb;  */

void FUN_10aa48b8c(long param_1,float *param_2,undefined8 *param_3,int param_4,float *param_5,
                  undefined8 *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  float *pfVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_178 [8];
  double dStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b0;
  long *plStack_a8;
  
  if (0x1f < param_4) {
    return;
  }
  if (param_2[2] == 4.34403e-44) {
    if ((int)param_2[9] < 1) {
      return;
    }
    lVar17 = 0;
    lVar18 = 0;
    do {
      puVar15 = (undefined8 *)(*(long *)(param_2 + 0xc) + lVar17);
      fVar51 = *(float *)(puVar15 + 2);
      fVar53 = *(float *)((long)puVar15 + 0x14);
      fVar52 = *(float *)(puVar15 + 3);
      fVar30 = (float)puVar15[1];
      fVar42 = (float)param_3[1];
      fVar31 = (float)*param_3;
      fVar32 = (float)((ulong)*param_3 >> 0x20);
      fVar24 = *(float *)(param_3 + 2);
      fVar38 = *(float *)((long)param_3 + 0x14);
      fVar43 = *(float *)(param_3 + 3);
      fVar35 = (float)puVar15[5];
      fVar33 = (float)puVar15[4];
      fVar34 = (float)((ulong)puVar15[4] >> 0x20);
      fVar45 = *(float *)(puVar15 + 6);
      fVar23 = *(float *)((long)puVar15 + 0x34);
      fVar25 = *(float *)(puVar15 + 7);
      fVar37 = (float)*puVar15;
      fVar26 = (float)((ulong)*puVar15 >> 0x20);
      fVar40 = (float)param_3[5];
      fVar36 = (float)param_3[4];
      fVar39 = (float)((ulong)param_3[4] >> 0x20);
      lStack_f0 = CONCAT44(fVar26 * fVar24 + fVar53 * fVar38 + fVar34 * fVar43,
                           fVar37 * fVar24 + fVar51 * fVar38 + fVar33 * fVar43);
      uStack_e8 = CONCAT44(fVar24 * 0.0 + fVar38 * 0.0 + fVar43 * 0.0,
                           fVar30 * fVar24 + fVar52 * fVar38 + fVar35 * fVar43);
      auVar46._0_4_ = fVar31 * fVar45;
      auVar46._4_4_ = fVar32 * fVar23;
      auVar46._8_4_ = fVar42 * fVar25;
      auVar46._12_4_ = (float)((ulong)param_3[1] >> 0x20) * *(float *)((long)puVar15 + 0x3c);
      auVar47._0_4_ = fVar24 * fVar45;
      auVar47._4_4_ = fVar38 * fVar23;
      auVar47._8_4_ = fVar43 * fVar25;
      auVar47._12_4_ = *(float *)((long)param_3 + 0x1c) * *(float *)((long)puVar15 + 0x3c);
      auVar50._0_4_ = fVar36 * fVar45;
      auVar50._4_4_ = fVar39 * fVar23;
      auVar50._8_4_ = fVar40 * fVar25;
      auVar50._12_4_ = 0;
      auVar48 = NEON_ext(auVar50,auVar50,8,1);
      auVar49 = NEON_ext(auVar47,auVar47,8,1);
      lStack_100 = CONCAT44(fVar26 * fVar31 + fVar53 * fVar32 + fVar34 * fVar42,
                            fVar37 * fVar31 + fVar51 * fVar32 + fVar33 * fVar42);
      uStack_f8 = CONCAT44(fVar31 * 0.0 + fVar32 * 0.0 + fVar42 * 0.0,
                           fVar30 * fVar31 + fVar52 * fVar32 + fVar35 * fVar42);
      auVar22 = NEON_ext(auVar46,auVar46,8,1);
      fStack_e0 = fVar37 * fVar36 + fVar51 * fVar39 + fVar33 * fVar40;
      fStack_dc = fVar26 * fVar36 + fVar53 * fVar39 + fVar34 * fVar40;
      plStack_d0 = (long *)CONCAT44(*(float *)((long)param_3 + 0x34) +
                                    auVar47._0_4_ + auVar47._4_4_ + auVar49._0_4_,
                                    *(float *)(param_3 + 6) +
                                    auVar46._0_4_ + auVar46._4_4_ + auVar22._0_4_);
      uStack_c8 = CONCAT44(*(float *)((long)param_3 + 0x3c) + 0.0,
                           *(float *)(param_3 + 7) +
                           auVar50._0_4_ + auVar50._4_4_ + auVar48._0_4_ + auVar48._4_4_);
      uStack_d8 = CONCAT44(fVar36 * 0.0 + fVar39 * 0.0 + fVar40 * 0.0,
                           fVar30 * fVar36 + fVar52 * fVar39 + fVar35 * fVar40);
      FUN_10aa48b8c(param_1,puVar15[8],&lStack_100,param_4 + 1,param_5,param_6);
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x60;
    } while (lVar18 < (int)param_2[9]);
    return;
  }
  FUN_10aa452a0(param_5,param_1,param_2,param_3);
  pfVar13 = param_2;
  (**(code **)(*(long *)param_2 + 0x38))();
  if (ABS(*pfVar13) < 1e-06) {
    return;
  }
  if (ABS(pfVar13[1]) < 1e-06) {
    return;
  }
  if (ABS(pfVar13[2]) < 1e-06) {
    return;
  }
  fVar53 = param_2[2];
  uVar19 = 0x3f800000;
  uVar21 = 0x3f80000000000000;
  fVar51 = 0.0;
  fVar52 = 1.0;
  if ((int)fVar53 < 0x14) {
    if (fVar53 == 1.82169e-44) {
LAB_10aa48d60:
      fVar53 = param_2[0x12];
    }
    else {
      if (fVar53 != 1.54143e-44) {
        if (fVar53 != 1.4013e-44) goto LAB_10aa48d90;
        goto LAB_10aa48d60;
      }
      fVar53 = param_2[0x16];
    }
    if (fVar53 == 2.8026e-45) {
      uVar19 = 0xbf80000000000000;
      fVar38 = -1.0;
      uVar21 = 0x3f800000;
      fVar51 = 0.0;
      fVar52 = 1.0;
      fVar53 = 0.0;
      fVar24 = 0.0;
      fVar43 = 1.0;
      fVar45 = 0.0;
      goto LAB_10aa48da4;
    }
    if (fVar53 != 0.0) goto LAB_10aa48d90;
    uVar19 = 0;
    fVar53 = 1.0;
    fVar51 = -1.0;
    fVar52 = 0.0;
    fVar24 = 0.0;
  }
  else {
LAB_10aa48d90:
    fVar53 = 0.0;
    fVar24 = 1.0;
  }
  fVar43 = 0.0;
  fVar38 = 0.0;
  fVar45 = 1.0;
LAB_10aa48da4:
  puVar15 = *(undefined8 **)*param_6;
  puVar2 = (undefined8 *)((long *)*param_6)[1];
  uVar27 = *puVar15;
  fVar26 = (float)uVar27 * 0.01;
  fVar30 = (float)((ulong)uVar27 >> 0x20) * 0.01;
  fVar31 = *(float *)(puVar15 + 1) * 0.01;
  fVar32 = (float)*(undefined8 *)(param_5 + 8);
  fVar33 = (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
  fVar39 = fVar26 * fVar32;
  fVar40 = fVar30 * fVar33;
  fVar42 = fVar31 * (float)*(undefined8 *)(param_5 + 10);
  uVar27 = *puVar2;
  fVar23 = (float)uVar27 * 0.01;
  fVar25 = (float)((ulong)uVar27 >> 0x20) * 0.01;
  fVar37 = *(float *)(puVar2 + 1) * 0.01;
  fVar32 = fVar23 * fVar32;
  fVar33 = fVar25 * fVar33;
  fVar35 = fVar37 * (float)*(undefined8 *)(param_5 + 10);
  auVar44._0_4_ = fVar26 * *param_5;
  auVar44._4_4_ = fVar30 * param_5[1];
  auVar44._8_4_ = fVar31 * param_5[2];
  auVar44._12_4_ = param_5[3] * 0.0;
  auVar28._0_4_ = fVar26 * param_5[4];
  auVar28._4_4_ = fVar30 * param_5[5];
  auVar28._8_4_ = fVar31 * param_5[6];
  auVar28._12_4_ = param_5[7] * 0.0;
  auVar47 = NEON_ext(auVar44,auVar44,8,1);
  auVar50 = NEON_ext(auVar28,auVar28,8,1);
  auVar8._4_4_ = fVar40;
  auVar8._0_4_ = fVar39;
  auVar8._8_4_ = fVar42;
  auVar8._12_4_ = 0;
  auVar9._4_4_ = fVar40;
  auVar9._0_4_ = fVar39;
  auVar9._8_4_ = fVar42;
  auVar9._12_4_ = 0;
  auVar22 = NEON_ext(auVar8,auVar9,8,1);
  fVar42 = (float)*(undefined8 *)(param_5 + 0xc);
  fVar31 = auVar44._0_4_ + auVar44._4_4_ + auVar47._0_4_ + fVar42;
  fVar34 = (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
  fVar41 = auVar28._0_4_ + auVar28._4_4_ + auVar50._0_4_ + fVar34;
  fVar36 = (float)*(undefined8 *)(param_5 + 0xe);
  fVar39 = fVar39 + fVar40 + auVar22._0_4_ + auVar22._4_4_ + fVar36;
  fVar30 = (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20);
  fVar40 = fVar30 + 0.0;
  auVar29._0_4_ = *param_5 * fVar23;
  auVar29._4_4_ = param_5[1] * fVar25;
  auVar29._8_4_ = param_5[2] * fVar37;
  auVar29._12_4_ = param_5[3] * 0.0;
  fVar23 = param_5[4] * fVar23;
  fVar25 = param_5[5] * fVar25;
  fVar37 = param_5[6] * fVar37;
  fVar26 = param_5[7] * 0.0;
  auVar47 = NEON_ext(auVar29,auVar29,8,1);
  auVar22._4_4_ = fVar25;
  auVar22._0_4_ = fVar23;
  auVar22._8_4_ = fVar37;
  auVar22._12_4_ = fVar26;
  auVar48._4_4_ = fVar25;
  auVar48._0_4_ = fVar23;
  auVar48._8_4_ = fVar37;
  auVar48._12_4_ = fVar26;
  auVar50 = NEON_ext(auVar22,auVar48,8,1);
  auVar49._4_4_ = fVar33;
  auVar49._0_4_ = fVar32;
  auVar49._8_4_ = fVar35;
  auVar49._12_4_ = 0;
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar35;
  auVar5._12_4_ = 0;
  auVar22 = NEON_ext(auVar49,auVar5,8,1);
  fVar42 = fVar42 + auVar47._0_4_ + auVar29._0_4_ + auVar29._4_4_;
  fVar34 = fVar34 + auVar50._0_4_ + fVar23 + fVar25;
  fVar36 = fVar36 + fVar32 + fVar33 + auVar22._0_4_ + auVar22._4_4_;
  fVar30 = fVar30 + 0.0;
  auVar10._4_4_ = fVar41;
  auVar10._0_4_ = fVar31;
  auVar10._8_4_ = fVar39;
  auVar10._12_4_ = fVar40;
  auVar11._4_4_ = fVar41;
  auVar11._0_4_ = fVar31;
  auVar11._8_4_ = fVar39;
  auVar11._12_4_ = fVar40;
  auVar22 = NEON_ext(auVar10,auVar11,8,1);
  auVar6._4_4_ = fVar34;
  auVar6._0_4_ = fVar42;
  auVar6._8_4_ = fVar36;
  auVar6._12_4_ = fVar30;
  auVar7._4_4_ = fVar34;
  auVar7._0_4_ = fVar42;
  auVar7._8_4_ = fVar36;
  auVar7._12_4_ = fVar30;
  auVar47 = NEON_ext(auVar6,auVar7,8,1);
  fVar37 = fVar34 * fVar51 + fVar42 * fVar52 + auVar47._0_4_ * 0.0;
  fVar26 = fVar41 * fVar51 + fVar31 * fVar52 + auVar22._0_4_ * 0.0;
  fVar23 = (float)((ulong)uVar19 >> 0x20);
  fVar25 = (float)((ulong)uVar21 >> 0x20);
  fVar30 = (float)uVar19 * fVar41 + fVar53 * fVar31 + (float)uVar21 * fVar39;
  fVar31 = fVar23 * fVar41 + fVar31 * 0.0 + fVar25 * fVar39;
  fVar33 = (float)uVar19 * fVar34 + fVar53 * fVar42 + (float)uVar21 * fVar36;
  fVar42 = fVar23 * fVar34 + fVar42 * 0.0 + fVar25 * fVar36;
  fVar23 = fVar33 - fVar30;
  uVar19 = NEON_ext(CONCAT44(fVar42,fVar33),CONCAT44(fVar26,fVar37),4,1);
  fVar25 = (float)uVar19 - fVar31;
  fVar32 = (float)((ulong)uVar19 >> 0x20) - fVar26;
  fVar23 = fVar25 * fVar25 + fVar32 * fVar32 + fVar23 * fVar23;
  if ((0.0 <= fVar23) && (fVar23 = SQRT(fVar23), 1e-06 <= fVar23)) {
    dVar20 = (double)fVar23;
    dStack_118 = (double)fVar26;
    dStack_110 = (double)fVar30;
    dStack_108 = (double)fVar31;
    dStack_130 = ((double)fVar37 - dStack_118) / dVar20;
    dStack_128 = ((double)fVar33 - dStack_110) / dVar20;
    dStack_120 = ((double)fVar42 - dStack_108) / dVar20;
    auStack_178[0] = 0;
    dStack_168 = 0.0;
    dStack_170 = 0.0;
    uStack_158 = 0;
    uStack_160 = 0;
    dStack_148 = 0.0;
    uStack_150 = 0;
    dStack_138 = 0.0;
    dStack_140 = 0.0;
    FUN_10aa457f8(param_2,&dStack_118,&dStack_130,*(undefined1 *)param_6[1],auStack_178);
    dVar12 = dStack_170;
    if ((int)param_2 != 0) {
      lVar18 = *(long *)param_6[2];
      lVar17 = ((long *)param_6[2])[1];
      lVar16 = *(long *)(param_1 + 0x120);
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
      fVar33 = *(float *)(*(undefined8 **)(lVar17 + 0x18) + 1);
      uVar21 = **(undefined8 **)(lVar17 + 0x18);
      uVar19 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x10);
      fVar23 = *(float *)(*(long *)(lVar17 + 0x10) + 0x18);
      dStack_168 = dVar20;
      func_0x00010980adc4(param_5,&lStack_100);
      fVar25 = -(float)lStack_100;
      fVar37 = -(float)((ulong)lStack_100 >> 0x20);
      fVar26 = -(float)uStack_f8;
      fVar30 = (float)dStack_148;
      fVar31 = (float)dStack_140;
      fVar32 = (float)dStack_138;
      fVar42 = fVar53 * fVar31 + fVar30 * fVar52 + fVar32 * 0.0;
      fVar38 = fVar24 * fVar31 + fVar30 * fVar51 + fVar32 * fVar38;
      fVar52 = fVar43 * fVar31 + fVar30 * 0.0 + fVar32 * fVar45;
      fVar53 = (float)((ulong)uStack_f8 >> 0x20);
      fVar30 = fVar25 * fVar37 + fVar26 * fVar53;
      fVar31 = fVar25 * fVar26 - fVar37 * fVar53;
      fVar51 = fVar25 * fVar37 - fVar26 * fVar53;
      fVar45 = fVar37 * fVar26 + fVar25 * fVar53;
      fVar24 = fVar25 * fVar26 + fVar37 * fVar53;
      fVar43 = fVar37 * fVar26 - fVar25 * fVar53;
      fVar53 = (fVar51 + fVar51) * fVar38 +
               fVar42 * ((fVar37 * fVar37 + fVar26 * fVar26) * -2.0 + 1.0) +
               fVar52 * (fVar24 + fVar24);
      fVar24 = ((fVar25 * fVar25 + fVar26 * fVar26) * -2.0 + 1.0) * fVar38 +
               fVar42 * (fVar30 + fVar30) + fVar52 * (fVar43 + fVar43);
      fVar51 = (fVar45 + fVar45) * fVar38 + fVar42 * (fVar31 + fVar31) +
               fVar52 * ((fVar25 * fVar25 + fVar37 * fVar37) * -2.0 + 1.0);
      if ((*(byte *)(lVar17 + 0x20) & 1) == 0) {
        puVar15 = *(undefined8 **)(lVar17 + 0x28);
        fVar52 = fVar24 * *(float *)((long)puVar15 + 0x14) + fVar53 * *(float *)(puVar15 + 1) +
                 fVar51 * *(float *)(puVar15 + 4);
        fVar38 = (float)*(undefined8 *)((long)puVar15 + 0xc) * fVar24 + (float)*puVar15 * fVar53 +
                 (float)puVar15[3] * fVar51;
        fVar43 = (float)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x20) * fVar24 +
                 (float)((ulong)*puVar15 >> 0x20) * fVar53 +
                 (float)((ulong)puVar15[3] >> 0x20) * fVar51;
        fVar45 = fVar38 * fVar38 + fVar43 * fVar43 + fVar52 * fVar52;
        if ((1e-06 < fVar45) && (fVar45 = 1.0 / SQRT(fVar45), 0.0 < fVar45)) {
          fVar53 = fVar45 * fVar38;
          fVar24 = fVar45 * fVar43;
          fVar51 = fVar52 * fVar45;
        }
      }
      plVar14 = *(long **)(lVar16 + 0x10);
      if ((plVar14 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar14 != (long *)0x0)) {
        lStack_b0 = *(long *)(lVar16 + 8);
        plStack_a8 = plVar14;
        if (lStack_b0 != 0) {
          fVar38 = (float)uVar21;
          fVar43 = (float)((ulong)uVar21 >> 0x20);
          fVar52 = (float)(dVar12 / dVar20);
          lStack_f0 = CONCAT44(fVar43 * fVar52 + (float)((ulong)uVar19 >> 0x20),
                               fVar38 * fVar52 + (float)uVar19);
          uStack_f8 = CONCAT44(fVar52,SQRT(fVar38 * fVar38 + fVar43 * fVar43 + fVar33 * fVar33) *
                                      fVar52);
          uStack_e8 = CONCAT44(fVar53,fVar33 * fVar52 + fVar23);
          plVar1 = plVar14 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uStack_c8 = 0;
          plStack_c0 = (long *)0x0;
          plVar1 = *(long **)(lVar18 + 0x30);
          lStack_100 = lVar16;
          fStack_e0 = fVar24;
          fStack_dc = fVar51;
          if (plVar1 < *(long **)(lVar18 + 0x38)) {
            *plVar1 = lVar16;
            plVar1[4] = CONCAT44(fVar51,fVar24);
            plVar1[3] = uStack_e8;
            plVar1[2] = lStack_f0;
            plVar1[1] = uStack_f8;
            plVar1[5] = lStack_b0;
            plVar1[6] = (long)plVar14;
            uStack_d8 = 0;
            plStack_d0 = (long *)0x0;
            plVar1[7] = 0;
            plVar1[8] = 0;
            *(long **)(lVar18 + 0x30) = plVar1 + 9;
          }
          else {
            lVar17 = lVar18 + 0x28;
            uStack_d8 = lStack_b0;
            plStack_d0 = plVar14;
            FUN_10aa48594(lVar17,&lStack_100);
            plVar14 = plStack_c0;
            *(long *)(lVar18 + 0x30) = lVar17;
            if (plStack_c0 != (long *)0x0) {
              plVar1 = plStack_c0 + 1;
              do {
                lVar18 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
              }
            }
          }
          if (plStack_d0 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plStack_a8 == (long *)0x0) {
            return;
          }
        }
        plVar1 = plStack_a8;
        plVar14 = plStack_a8 + 1;
        do {
          lVar18 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 10aa492ec; end: 10aa497ef;  */

/* WARNING: Removing unreachable block (ram,0x00010aa4a400) */

void FUN_10aa492ec(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long *plVar26;
  float fStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      if (*(float *)((long)param_2 + -0x3c) < *(float *)((long)param_1 + 0xc)) {
        puVar8 = param_2 + -9;
code_r0x00010aa4a2c0:
        uVar17 = *param_1;
        uStack_78 = (undefined4)param_1[2];
        uStack_74 = (undefined4)((ulong)param_1[2] >> 0x20);
        uStack_80 = (undefined4)param_1[1];
        uStack_7c = (undefined4)((ulong)param_1[1] >> 0x20);
        uStack_68 = (undefined4)param_1[4];
        uStack_64 = (undefined4)((ulong)param_1[4] >> 0x20);
        uStack_70 = (undefined4)param_1[3];
        uStack_6c = (undefined4)((ulong)param_1[3] >> 0x20);
        uVar23 = param_1[6];
        uVar22 = param_1[5];
        param_1[5] = 0;
        param_1[6] = 0;
        plVar26 = (long *)param_1[8];
        param_1[7] = 0;
        param_1[8] = 0;
        *param_1 = *puVar8;
        param_1[1] = puVar8[1];
        uVar3 = *(undefined4 *)(puVar8 + 3);
        param_1[2] = puVar8[2];
        *(undefined4 *)(param_1 + 3) = uVar3;
        uVar3 = *(undefined4 *)((long)puVar8 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)puVar8 + 0x1c);
        *(undefined4 *)((long)param_1 + 0x24) = uVar3;
        uVar25 = puVar8[6];
        uVar24 = puVar8[5];
        puVar8[5] = 0;
        puVar8[6] = 0;
        lVar7 = param_1[6];
        param_1[6] = uVar25;
        param_1[5] = uVar24;
        if (lVar7 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(param_1 + 7,puVar8 + 7);
        *puVar8 = uVar17;
        puVar8[1] = CONCAT44(uStack_7c,uStack_80);
        puVar8[2] = CONCAT44(uStack_74,uStack_78);
        *(undefined4 *)(puVar8 + 3) = uStack_70;
        *(undefined8 *)((long)puVar8 + 0x1c) = CONCAT44(uStack_68,uStack_6c);
        *(undefined4 *)((long)puVar8 + 0x24) = uStack_64;
        lVar7 = puVar8[6];
        puVar8[6] = uVar23;
        puVar8[5] = uVar22;
        if (lVar7 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(puVar8 + 7,&stack0xffffffffffffffb0);
        if (plVar26 != (long *)0x0) {
          plVar1 = plVar26 + 1;
          do {
            lVar7 = *plVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
        return;
      }
    }
    else if ((long)param_3 < 1) {
      if ((param_1 != param_2) && (param_1 + 9 != param_2)) {
        lVar7 = 0;
        puVar8 = param_1;
        puVar10 = param_1 + 9;
        do {
          if (*(float *)((long)puVar8 + 0x54) < *(float *)((long)puVar8 + 0xc)) {
            uVar24 = puVar8[0xb];
            uVar22 = puVar8[10];
            uStack_78 = (undefined4)puVar8[0xd];
            uStack_74 = (undefined4)((ulong)puVar8[0xd] >> 0x20);
            uStack_80 = (undefined4)puVar8[0xc];
            uStack_7c = (undefined4)((ulong)puVar8[0xc] >> 0x20);
            plVar26 = (long *)puVar8[0x11];
            uStack_68 = (undefined4)puVar8[0xf];
            uStack_64 = (undefined4)((ulong)puVar8[0xf] >> 0x20);
            uStack_70 = (undefined4)puVar8[0xe];
            uStack_6c = (undefined4)((ulong)puVar8[0xe] >> 0x20);
            uVar17 = *puVar10;
            puVar8[0xe] = 0;
            puVar8[0xf] = 0;
            puVar8[0x10] = 0;
            puVar8[0x11] = 0;
            lVar21 = lVar7;
            do {
              lVar18 = lVar21;
              puVar8 = (undefined8 *)((long)param_1 + lVar18);
              puVar8[10] = puVar8[1];
              puVar8[9] = *puVar8;
              puVar8[0xb] = puVar8[2];
              *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar8 + 3);
              *(undefined8 *)((long)puVar8 + 100) = *(undefined8 *)((long)puVar8 + 0x1c);
              *(undefined4 *)((long)puVar8 + 0x6c) = *(undefined4 *)((long)puVar8 + 0x24);
              uVar25 = puVar8[6];
              uVar23 = puVar8[5];
              puVar8[5] = 0;
              puVar8[6] = 0;
              lVar21 = puVar8[0xf];
              puVar8[0xf] = uVar25;
              puVar8[0xe] = uVar23;
              if (lVar21 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10aa4a430(puVar8 + 0x10,puVar8 + 7);
              puVar8 = param_1;
              if (lVar18 == 0) goto LAB_10aa494dc;
              fStack_8c = (float)((ulong)uVar22 >> 0x20);
              lVar21 = lVar18 + -0x48;
            } while (fStack_8c < *(float *)((long)param_1 + lVar18 + -0x3c));
            puVar8 = (undefined8 *)((long)param_1 + lVar18);
LAB_10aa494dc:
            *puVar8 = uVar17;
            puVar8[1] = uVar22;
            *(undefined4 *)((long)param_1 + lVar18 + 0x18) = uStack_80;
            *(undefined8 *)((long)param_1 + lVar18 + 0x10) = uVar24;
            *(undefined4 *)((long)param_1 + lVar18 + 0x24) = uStack_74;
            *(ulong *)((long)param_1 + lVar18 + 0x1c) = CONCAT44(uStack_78,uStack_7c);
            uVar17 = CONCAT44(uStack_6c,uStack_70);
            uVar22 = CONCAT44(uStack_64,uStack_68);
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            uStack_64 = 0;
            *(undefined8 *)((long)param_1 + lVar18 + 0x28) = uVar17;
            lVar21 = puVar8[6];
            puVar8[6] = uVar22;
            if (lVar21 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            FUN_10aa4a430((long)param_1 + lVar18 + 0x38,&stack0xffffffffffffffa0);
            if (plVar26 != (long *)0x0) {
              plVar1 = plVar26 + 1;
              do {
                lVar21 = *plVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
              }
            }
            if (CONCAT44(uStack_64,uStack_68) != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          puVar16 = puVar10 + 9;
          lVar7 = lVar7 + 0x48;
          puVar8 = puVar10;
          puVar10 = puVar16;
        } while (puVar16 != param_2);
      }
    }
    else {
      uVar19 = param_3 >> 1;
      puVar8 = param_1 + uVar19 * 9;
      if (param_5 < (long)param_3) {
        FUN_10aa492ec(param_1,puVar8,uVar19,param_4,param_5);
        FUN_10aa492ec(puVar8,param_2,param_3 - uVar19,param_4,param_5);
        lVar7 = param_3 - uVar19;
        while( true ) {
          if (lVar7 == 0) {
            return;
          }
          if (((long)uVar19 <= param_5) || (lVar7 <= param_5)) break;
          if (uVar19 == 0) {
            return;
          }
          lVar21 = 0;
          lVar18 = -uVar19;
          while (puVar10 = (undefined8 *)((long)param_1 + lVar21),
                *(float *)((long)puVar10 + 0xc) <= *(float *)((long)puVar8 + 0xc)) {
            lVar21 = lVar21 + 0x48;
            bVar6 = lVar18 == -1;
            lVar18 = lVar18 + 1;
            if (bVar6) {
              return;
            }
          }
          if (-lVar18 < lVar7) {
            lVar12 = lVar7 / 2;
            puVar16 = puVar8 + lVar12 * 9;
            lVar5 = (long)puVar8 + (-lVar21 - (long)param_1);
            puVar15 = puVar8;
            if (lVar5 != 0) {
              uVar19 = (lVar5 >> 3) * -0x71c71c71c71c71c7;
              puVar15 = puVar10;
              do {
                uVar11 = uVar19 >> 1;
                uVar9 = uVar19 + (uVar19 >> 1 ^ 0xffffffffffffffff);
                uVar19 = uVar11;
                if (*(float *)((long)puVar15 + uVar11 * 0x48 + 0xc) <=
                    *(float *)((long)puVar16 + 0xc)) {
                  uVar19 = uVar9;
                  puVar15 = puVar15 + uVar11 * 9 + 9;
                }
              } while (uVar19 != 0);
            }
            uVar19 = ((long)puVar15 + (-lVar21 - (long)param_1) >> 3) * -0x71c71c71c71c71c7;
          }
          else {
            if (lVar18 == -1) {
              param_1 = (undefined8 *)((long)param_1 + lVar21);
              goto code_r0x00010aa4a2c0;
            }
            uVar19 = -lVar18 / 2;
            puVar16 = puVar8;
            if (puVar8 != param_2) {
              uVar9 = ((long)param_2 - (long)puVar8 >> 3) * -0x71c71c71c71c71c7;
              puVar15 = puVar8;
              do {
                uVar11 = uVar9 >> 1;
                puVar16 = puVar15 + uVar11 * 9 + 9;
                uVar9 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
                if (*(float *)((long)param_1 + lVar21 + uVar19 * 0x48 + 0xc) <=
                    *(float *)((long)puVar15 + uVar11 * 0x48 + 0xc)) {
                  puVar16 = puVar15;
                  uVar9 = uVar11;
                }
                puVar15 = puVar16;
              } while (uVar9 != 0);
            }
            lVar12 = ((long)puVar16 - (long)puVar8 >> 3) * -0x71c71c71c71c71c7;
            puVar15 = (undefined8 *)((long)param_1 + lVar21 + uVar19 * 0x48);
          }
          puVar20 = puVar16;
          if ((puVar15 != puVar8) && (puVar20 = puVar15, puVar8 != puVar16)) {
            FUN_10aa4a2c0(puVar15,puVar8);
            puVar13 = puVar8;
            while( true ) {
              puVar20 = puVar20 + 9;
              puVar8 = puVar8 + 9;
              if (puVar8 == puVar16) break;
              puVar2 = puVar8;
              if (puVar20 != puVar13) {
                puVar2 = puVar13;
              }
              FUN_10aa4a2c0(puVar20,puVar8);
              puVar13 = puVar2;
            }
            puVar2 = puVar13;
            puVar8 = puVar20;
            if (puVar20 != puVar13) {
              do {
                while( true ) {
                  puVar14 = puVar2;
                  FUN_10aa4a2c0(puVar8,puVar13);
                  puVar8 = puVar8 + 9;
                  puVar13 = puVar13 + 9;
                  if (puVar13 == puVar16) break;
                  puVar2 = puVar13;
                  if (puVar8 != puVar14) {
                    puVar2 = puVar14;
                  }
                }
                puVar2 = puVar14;
                puVar13 = puVar14;
              } while (puVar8 != puVar14);
            }
          }
          if ((long)(uVar19 + lVar12) < (long)((lVar7 - (uVar19 + lVar12)) - lVar18)) {
            FUN_10aa49c84((long)param_1 + lVar21,puVar15,puVar20,uVar19,lVar12,param_4);
            uVar19 = -uVar19 - lVar18;
            puVar8 = puVar16;
            lVar7 = lVar7 - lVar12;
            param_1 = puVar20;
          }
          else {
            FUN_10aa49c84(puVar20,puVar16,param_2,-uVar19 - lVar18,lVar7 - lVar12,param_4);
            puVar8 = puVar15;
            lVar7 = lVar12;
            param_2 = puVar20;
            param_1 = puVar10;
          }
        }
        if (lVar7 < (long)uVar19) {
          if (puVar8 == param_2) goto LAB_10aa4a0e0;
          lVar7 = 0;
          param_3 = 0;
          do {
            puVar10 = (undefined8 *)((long)param_4 + lVar7);
            puVar16 = (undefined8 *)((long)puVar8 + lVar7);
            *puVar10 = *puVar16;
            uVar22 = puVar16[2];
            uVar17 = puVar16[1];
            uVar24 = puVar16[3];
            puVar10[4] = puVar16[4];
            puVar10[3] = uVar24;
            puVar10[2] = uVar22;
            puVar10[1] = uVar17;
            uVar17 = puVar16[5];
            puVar10[6] = puVar16[6];
            puVar10[5] = uVar17;
            puVar16[5] = 0;
            puVar16[6] = 0;
            uVar17 = puVar16[7];
            puVar10[8] = puVar16[8];
            puVar10[7] = uVar17;
            puVar16[7] = 0;
            puVar16[8] = 0;
            param_3 = param_3 + 1;
            lVar7 = lVar7 + 0x48;
          } while (puVar16 + 9 != param_2);
          puVar15 = param_2 + -4;
          puVar16 = param_2;
          puVar10 = (undefined8 *)((long)param_4 + lVar7);
          do {
            if (puVar8 == param_1) {
              FUN_10aa4a578(&uStack_80,(undefined8 *)((long)param_4 + lVar7),puVar10,param_4,param_4
                            ,param_2,puVar16);
              break;
            }
            if (*(float *)((long)puVar8 + -0x3c) <= *(float *)((long)puVar10 + -0x3c)) {
              puVar15[-5] = puVar10[-9];
              puVar15[-4] = puVar10[-8];
              uVar17 = puVar10[-7];
              *(undefined4 *)(puVar15 + -2) = *(undefined4 *)(puVar10 + -6);
              puVar15[-3] = uVar17;
              uVar17 = *(undefined8 *)((long)puVar10 + -0x2c);
              *(undefined4 *)((long)puVar15 + -4) = *(undefined4 *)((long)puVar10 + -0x24);
              *(undefined8 *)((long)puVar15 + -0xc) = uVar17;
              uVar22 = puVar10[-3];
              uVar17 = puVar10[-4];
              puVar10[-4] = 0;
              puVar10[-3] = 0;
              lVar21 = puVar15[1];
              puVar15[1] = uVar22;
              *puVar15 = uVar17;
              puVar13 = puVar10 + -9;
              puVar2 = puVar8;
              puVar20 = puVar10;
            }
            else {
              puVar15[-5] = puVar8[-9];
              puVar15[-4] = puVar8[-8];
              uVar17 = puVar8[-7];
              *(undefined4 *)(puVar15 + -2) = *(undefined4 *)(puVar8 + -6);
              puVar15[-3] = uVar17;
              uVar17 = *(undefined8 *)((long)puVar8 + -0x2c);
              *(undefined4 *)((long)puVar15 + -4) = *(undefined4 *)((long)puVar8 + -0x24);
              *(undefined8 *)((long)puVar15 + -0xc) = uVar17;
              uVar22 = puVar8[-3];
              uVar17 = puVar8[-4];
              puVar8[-4] = 0;
              puVar8[-3] = 0;
              lVar21 = puVar15[1];
              puVar15[1] = uVar22;
              *puVar15 = uVar17;
              puVar13 = puVar10;
              puVar2 = puVar8 + -9;
              puVar20 = puVar8;
            }
            puVar8 = puVar2;
            puVar10 = puVar13;
            if (lVar21 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            FUN_10aa4a430(puVar15 + 2,puVar20 + -2);
            puVar16 = puVar16 + -9;
            puVar15 = puVar15 + -9;
          } while (puVar10 != param_4);
        }
        else if (puVar8 == param_1) {
LAB_10aa4a0e0:
          param_3 = 0;
        }
        else {
          param_3 = 0;
          puVar10 = param_1;
          puVar16 = param_4;
          do {
            *puVar16 = *puVar10;
            uVar22 = puVar10[2];
            uVar17 = puVar10[1];
            uVar24 = puVar10[3];
            puVar16[4] = puVar10[4];
            puVar16[3] = uVar24;
            puVar16[2] = uVar22;
            puVar16[1] = uVar17;
            uVar17 = puVar10[5];
            puVar16[6] = puVar10[6];
            puVar16[5] = uVar17;
            puVar10[5] = 0;
            puVar10[6] = 0;
            uVar17 = puVar10[7];
            puVar16[8] = puVar10[8];
            puVar16[7] = uVar17;
            puVar10[7] = 0;
            puVar10[8] = 0;
            param_3 = param_3 + 1;
            puVar10 = puVar10 + 9;
            puVar16 = puVar16 + 9;
            puVar15 = param_4;
          } while (puVar10 != puVar8);
          do {
            if (puVar8 == param_2) {
              FUN_10aa4a4d8(puVar15,puVar16,param_1);
              break;
            }
            if (*(float *)((long)puVar15 + 0xc) <= *(float *)((long)puVar8 + 0xc)) {
              *param_1 = *puVar15;
              param_1[1] = puVar15[1];
              uVar17 = puVar15[2];
              *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar15 + 3);
              param_1[2] = uVar17;
              uVar17 = *(undefined8 *)((long)puVar15 + 0x1c);
              *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)puVar15 + 0x24);
              *(undefined8 *)((long)param_1 + 0x1c) = uVar17;
              uVar22 = puVar15[6];
              uVar17 = puVar15[5];
              puVar15[5] = 0;
              puVar15[6] = 0;
              lVar7 = param_1[6];
              param_1[6] = uVar22;
              param_1[5] = uVar17;
              if (lVar7 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10aa4a430(param_1 + 7,puVar15 + 7);
              puVar15 = puVar15 + 9;
            }
            else {
              *param_1 = *puVar8;
              param_1[1] = puVar8[1];
              uVar17 = puVar8[2];
              *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar8 + 3);
              param_1[2] = uVar17;
              uVar17 = *(undefined8 *)((long)puVar8 + 0x1c);
              *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)puVar8 + 0x24);
              *(undefined8 *)((long)param_1 + 0x1c) = uVar17;
              uVar22 = puVar8[6];
              uVar17 = puVar8[5];
              puVar8[5] = 0;
              puVar8[6] = 0;
              lVar7 = param_1[6];
              param_1[6] = uVar22;
              param_1[5] = uVar17;
              if (lVar7 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10aa4a430(param_1 + 7,puVar8 + 7);
              puVar8 = puVar8 + 9;
            }
            param_1 = param_1 + 9;
          } while (puVar16 != puVar15);
        }
        if (param_4 == (undefined8 *)0x0) {
          return;
        }
        goto LAB_10aa4a494;
      }
      FUN_10aa497f0(param_1,puVar8,uVar19,param_4);
      puVar16 = param_4 + uVar19 * 9;
      FUN_10aa497f0(puVar8,param_2,param_3 - uVar19,puVar16);
      puVar15 = param_4 + param_3 * 9;
      param_1 = param_1 + 7;
      puVar8 = puVar16;
      puVar10 = param_4;
      do {
        if (puVar8 == puVar15) {
          if (puVar10 != puVar16) {
            puVar8 = puVar10 + 7;
            do {
              param_1[-7] = puVar8[-7];
              param_1[-6] = puVar8[-6];
              uVar17 = puVar8[-5];
              *(undefined4 *)(param_1 + -4) = *(undefined4 *)(puVar8 + -4);
              param_1[-5] = uVar17;
              uVar17 = *(undefined8 *)((long)puVar8 + -0x1c);
              *(undefined4 *)((long)param_1 + -0x14) = *(undefined4 *)((long)puVar8 + -0x14);
              *(undefined8 *)((long)param_1 + -0x1c) = uVar17;
              uVar22 = puVar8[-1];
              uVar17 = puVar8[-2];
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              lVar7 = param_1[-1];
              param_1[-1] = uVar22;
              param_1[-2] = uVar17;
              if (lVar7 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10aa4a430(param_1,puVar8);
              param_1 = param_1 + 9;
              puVar10 = puVar8 + 2;
              puVar8 = puVar8 + 9;
            } while (puVar10 != puVar16);
          }
          goto LAB_10aa497ac;
        }
        if (*(float *)((long)puVar10 + 0xc) <= *(float *)((long)puVar8 + 0xc)) {
          param_1[-7] = *puVar10;
          param_1[-6] = puVar10[1];
          uVar17 = puVar10[2];
          *(undefined4 *)(param_1 + -4) = *(undefined4 *)(puVar10 + 3);
          param_1[-5] = uVar17;
          uVar17 = *(undefined8 *)((long)puVar10 + 0x1c);
          *(undefined4 *)((long)param_1 + -0x14) = *(undefined4 *)((long)puVar10 + 0x24);
          *(undefined8 *)((long)param_1 + -0x1c) = uVar17;
          uVar22 = puVar10[6];
          uVar17 = puVar10[5];
          puVar10[5] = 0;
          puVar10[6] = 0;
          lVar7 = param_1[-1];
          param_1[-1] = uVar22;
          param_1[-2] = uVar17;
          if (lVar7 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_10aa4a430(param_1,puVar10 + 7);
          puVar10 = puVar10 + 9;
        }
        else {
          param_1[-7] = *puVar8;
          param_1[-6] = puVar8[1];
          uVar17 = puVar8[2];
          *(undefined4 *)(param_1 + -4) = *(undefined4 *)(puVar8 + 3);
          param_1[-5] = uVar17;
          uVar17 = *(undefined8 *)((long)puVar8 + 0x1c);
          *(undefined4 *)((long)param_1 + -0x14) = *(undefined4 *)((long)puVar8 + 0x24);
          *(undefined8 *)((long)param_1 + -0x1c) = uVar17;
          uVar22 = puVar8[6];
          uVar17 = puVar8[5];
          puVar8[5] = 0;
          puVar8[6] = 0;
          lVar7 = param_1[-1];
          param_1[-1] = uVar22;
          param_1[-2] = uVar17;
          if (lVar7 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_10aa4a430(param_1,puVar8 + 7);
          puVar8 = puVar8 + 9;
        }
        param_1 = param_1 + 9;
      } while (puVar10 != puVar16);
      if (puVar8 != puVar15) {
        puVar8 = puVar8 + 7;
        do {
          param_1[-7] = puVar8[-7];
          param_1[-6] = puVar8[-6];
          uVar17 = puVar8[-5];
          *(undefined4 *)(param_1 + -4) = *(undefined4 *)(puVar8 + -4);
          param_1[-5] = uVar17;
          uVar17 = *(undefined8 *)((long)puVar8 + -0x1c);
          *(undefined4 *)((long)param_1 + -0x14) = *(undefined4 *)((long)puVar8 + -0x14);
          *(undefined8 *)((long)param_1 + -0x1c) = uVar17;
          uVar22 = puVar8[-1];
          uVar17 = puVar8[-2];
          puVar8[-2] = 0;
          puVar8[-1] = 0;
          lVar7 = param_1[-1];
          param_1[-1] = uVar22;
          param_1[-2] = uVar17;
          if (lVar7 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_10aa4a430(param_1,puVar8);
          param_1 = param_1 + 9;
          puVar10 = puVar8 + 2;
          puVar8 = puVar8 + 9;
        } while (puVar10 != puVar15);
      }
LAB_10aa497ac:
      if (param_4 != (undefined8 *)0x0) {
LAB_10aa4a494:
        if (param_3 != 0) {
          param_4 = param_4 + 7;
          do {
            FUN_10a40bb4c(param_4);
            if (param_4[-1] != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            param_4 = param_4 + 9;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa497f0; end: 10aa49c83;  */

void FUN_10aa497f0(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 2) {
    if (*(float *)((long)param_1 + 0xc) <= *(float *)((long)param_2 + -0x3c)) {
      *param_4 = *param_1;
      uVar9 = param_1[2];
      uVar5 = param_1[1];
      uVar10 = param_1[3];
      param_4[4] = param_1[4];
      param_4[3] = uVar10;
      param_4[2] = uVar9;
      param_4[1] = uVar5;
      uVar5 = param_1[5];
      param_4[6] = param_1[6];
      param_4[5] = uVar5;
      param_1[5] = 0;
      param_1[6] = 0;
      uVar5 = param_1[7];
      param_4[8] = param_1[8];
      param_4[7] = uVar5;
      param_1[7] = 0;
      param_1[8] = 0;
      param_4[9] = param_2[-9];
      uVar5 = param_2[-8];
      uVar10 = param_2[-5];
      uVar9 = param_2[-6];
      param_4[0xb] = param_2[-7];
      param_4[10] = uVar5;
      param_4[0xd] = uVar10;
      param_4[0xc] = uVar9;
      uVar5 = param_2[-4];
      param_4[0xf] = param_2[-3];
      param_4[0xe] = uVar5;
      param_2[-4] = 0;
      puVar6 = param_2 + -2;
      param_2[-3] = 0;
      param_4[0x10] = *puVar6;
      param_4 = param_4 + 0x11;
      param_1 = param_2 + -1;
      goto LAB_10aa49ae8;
    }
    *param_4 = param_2[-9];
    uVar9 = param_2[-7];
    uVar5 = param_2[-8];
    uVar10 = param_2[-6];
    param_4[4] = param_2[-5];
    param_4[3] = uVar10;
    param_4[2] = uVar9;
    param_4[1] = uVar5;
    uVar5 = param_2[-4];
    param_4[6] = param_2[-3];
    param_4[5] = uVar5;
    param_2[-4] = 0;
    param_2[-3] = 0;
    uVar5 = param_2[-2];
    param_4[8] = param_2[-1];
    param_4[7] = uVar5;
    param_2[-2] = 0;
    param_2[-1] = 0;
    param_4[9] = *param_1;
    uVar5 = param_1[1];
    uVar10 = param_1[4];
    uVar9 = param_1[3];
    param_4[0xb] = param_1[2];
    param_4[10] = uVar5;
    param_4[0xd] = uVar10;
    param_4[0xc] = uVar9;
    uVar5 = param_1[5];
    param_4[0xf] = param_1[6];
    param_4[0xe] = uVar5;
    param_1[5] = 0;
    param_1[6] = 0;
    param_4[0x10] = param_1[7];
    param_4 = param_4 + 0x11;
  }
  else {
    if (param_3 != 1) {
      if (8 < (long)param_3) {
        uVar3 = param_3 >> 1;
        lVar7 = uVar3 * 8 + (param_3 >> 1);
        puVar8 = param_1 + lVar7;
        FUN_10aa492ec(param_1,puVar8,uVar3,param_4,uVar3);
        lVar2 = param_3 - (param_3 >> 1);
        FUN_10aa492ec(puVar8,param_2,lVar2,param_4 + lVar7,lVar2);
        param_4 = param_4 + 7;
        puVar6 = puVar8;
        do {
          if (puVar6 == param_2) {
            if (param_1 == puVar8) {
              return;
            }
            lVar7 = 0;
            do {
              puVar6 = (undefined8 *)((long)param_4 + lVar7);
              puVar4 = (undefined8 *)((long)param_1 + lVar7);
              puVar6[-7] = *puVar4;
              uVar5 = puVar4[1];
              uVar10 = puVar4[4];
              uVar9 = puVar4[3];
              puVar6[-5] = puVar4[2];
              puVar6[-6] = uVar5;
              puVar6[-3] = uVar10;
              puVar6[-4] = uVar9;
              uVar5 = puVar4[5];
              puVar6[-1] = puVar4[6];
              puVar6[-2] = uVar5;
              puVar4[5] = 0;
              puVar4[6] = 0;
              uVar5 = puVar4[7];
              puVar6[1] = puVar4[8];
              *puVar6 = uVar5;
              puVar4[7] = 0;
              puVar4[8] = 0;
              lVar7 = lVar7 + 0x48;
            } while (puVar4 + 9 != puVar8);
            return;
          }
          if (*(float *)((long)param_1 + 0xc) <= *(float *)((long)puVar6 + 0xc)) {
            param_4[-7] = *param_1;
            uVar5 = param_1[1];
            uVar10 = param_1[4];
            uVar9 = param_1[3];
            param_4[-5] = param_1[2];
            param_4[-6] = uVar5;
            param_4[-3] = uVar10;
            param_4[-4] = uVar9;
            uVar5 = param_1[5];
            param_4[-1] = param_1[6];
            param_4[-2] = uVar5;
            param_1[5] = 0;
            param_1[6] = 0;
            uVar5 = param_1[7];
            param_4[1] = param_1[8];
            *param_4 = uVar5;
            param_1[7] = 0;
            param_1[8] = 0;
            param_1 = param_1 + 9;
          }
          else {
            param_4[-7] = *puVar6;
            uVar5 = puVar6[1];
            uVar10 = puVar6[4];
            uVar9 = puVar6[3];
            param_4[-5] = puVar6[2];
            param_4[-6] = uVar5;
            param_4[-3] = uVar10;
            param_4[-4] = uVar9;
            uVar5 = puVar6[5];
            param_4[-1] = puVar6[6];
            param_4[-2] = uVar5;
            puVar6[5] = 0;
            puVar6[6] = 0;
            uVar5 = puVar6[7];
            param_4[1] = puVar6[8];
            *param_4 = uVar5;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6 = puVar6 + 9;
          }
          param_4 = param_4 + 9;
        } while (param_1 != puVar8);
        if (puVar6 == param_2) {
          return;
        }
        lVar7 = 0;
        do {
          puVar8 = (undefined8 *)((long)puVar6 + lVar7);
          puVar4 = (undefined8 *)((long)param_4 + lVar7);
          puVar4[-7] = *puVar8;
          uVar5 = puVar8[1];
          uVar10 = puVar8[4];
          uVar9 = puVar8[3];
          puVar4[-5] = puVar8[2];
          puVar4[-6] = uVar5;
          puVar4[-3] = uVar10;
          puVar4[-4] = uVar9;
          uVar5 = puVar8[5];
          puVar4[-1] = puVar8[6];
          puVar4[-2] = uVar5;
          puVar8[5] = 0;
          puVar8[6] = 0;
          uVar5 = puVar8[7];
          puVar4[1] = puVar8[8];
          *puVar4 = uVar5;
          puVar8[7] = 0;
          puVar8[8] = 0;
          lVar7 = lVar7 + 0x48;
        } while (puVar8 + 9 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      *param_4 = *param_1;
      uVar9 = param_1[2];
      uVar5 = param_1[1];
      uVar10 = param_1[3];
      param_4[4] = param_1[4];
      param_4[3] = uVar10;
      param_4[2] = uVar9;
      param_4[1] = uVar5;
      uVar5 = param_1[5];
      param_4[6] = param_1[6];
      param_4[5] = uVar5;
      param_1[5] = 0;
      param_1[6] = 0;
      uVar5 = param_1[7];
      param_4[8] = param_1[8];
      param_4[7] = uVar5;
      param_1[7] = 0;
      param_1[8] = 0;
      if (param_1 + 9 == param_2) {
        return;
      }
      lVar7 = 0;
      puVar8 = param_1 + 9;
      puVar6 = param_4;
      do {
        puVar4 = puVar8;
        if (*(float *)((long)puVar6 + 0xc) <= *(float *)((long)param_1 + 0x54)) {
          puVar6[9] = *puVar4;
          uVar5 = param_1[10];
          uVar10 = param_1[0xd];
          uVar9 = param_1[0xc];
          puVar6[0xb] = param_1[0xb];
          puVar6[10] = uVar5;
          puVar6[0xd] = uVar10;
          puVar6[0xc] = uVar9;
          uVar5 = param_1[0xe];
          puVar6[0xf] = param_1[0xf];
          puVar6[0xe] = uVar5;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          uVar5 = param_1[0x10];
          puVar6[0x11] = param_1[0x11];
          puVar6[0x10] = uVar5;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
        }
        else {
          puVar6[0xb] = puVar6[2];
          puVar6[10] = puVar6[1];
          puVar6[0xd] = puVar6[4];
          puVar6[0xc] = puVar6[3];
          uVar9 = puVar6[6];
          uVar5 = puVar6[5];
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[0xf] = uVar9;
          puVar6[0xe] = uVar5;
          puVar6[0x11] = puVar6[8];
          puVar6[0x10] = puVar6[7];
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = *puVar6;
          puVar8 = param_4;
          lVar2 = lVar7;
          if (puVar6 != param_4) {
            do {
              puVar8 = (undefined8 *)((long)param_4 + lVar2);
              if (*(float *)((long)puVar8 + -0x3c) <= *(float *)((long)param_1 + 0x54)) break;
              *puVar8 = puVar8[-9];
              puVar8[1] = puVar8[-8];
              puVar8[2] = puVar8[-7];
              *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar8 + -6);
              *(undefined8 *)((long)puVar8 + 0x1c) = *(undefined8 *)((long)puVar8 + -0x2c);
              *(undefined4 *)((long)puVar8 + 0x24) = *(undefined4 *)((long)puVar8 + -0x24);
              uVar9 = puVar8[-3];
              uVar5 = puVar8[-4];
              puVar8[-4] = 0;
              puVar8[-3] = 0;
              lVar1 = puVar8[6];
              puVar8[6] = uVar9;
              puVar8[5] = uVar5;
              if (lVar1 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10aa4a430((long)param_4 + lVar2 + 0x38,(long)param_4 + lVar2 + -0x10);
              lVar2 = lVar2 + -0x48;
              puVar8 = param_4;
            } while (lVar2 != 0);
          }
          *puVar8 = *puVar4;
          puVar8[1] = param_1[10];
          uVar5 = param_1[0xb];
          *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_1 + 0xc);
          puVar8[2] = uVar5;
          uVar5 = *(undefined8 *)((long)param_1 + 100);
          *(undefined4 *)((long)puVar8 + 0x24) = *(undefined4 *)((long)param_1 + 0x6c);
          *(undefined8 *)((long)puVar8 + 0x1c) = uVar5;
          uVar9 = param_1[0xf];
          uVar5 = param_1[0xe];
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          lVar2 = puVar8[6];
          puVar8[6] = uVar9;
          puVar8[5] = uVar5;
          if (lVar2 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_10aa4a430(puVar8 + 7,param_1 + 0x10);
        }
        puVar6 = puVar6 + 9;
        lVar7 = lVar7 + 0x48;
        puVar8 = puVar4 + 9;
        param_1 = puVar4;
        if (puVar4 + 9 == param_2) {
          return;
        }
      } while( true );
    }
    *param_4 = *param_1;
    uVar9 = param_1[2];
    uVar5 = param_1[1];
    uVar10 = param_1[3];
    param_4[4] = param_1[4];
    param_4[3] = uVar10;
    param_4[2] = uVar9;
    param_4[1] = uVar5;
    uVar5 = param_1[5];
    param_4[6] = param_1[6];
    param_4[5] = uVar5;
    param_1[5] = 0;
    param_1[6] = 0;
    param_4[7] = param_1[7];
    param_4 = param_4 + 8;
  }
  puVar6 = param_1 + 7;
  param_1 = param_1 + 8;
LAB_10aa49ae8:
  *param_4 = *param_1;
  *puVar6 = 0;
  puVar6[1] = 0;
  return;
}



/* Entry: 10aa49c84; end: 10aa4a2bf;  */

/* WARNING: Removing unreachable block (ram,0x00010aa4a400) */

void FUN_10aa49c84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,undefined8 *param_6,long param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) break;
    if (param_4 == 0) {
      return;
    }
    lVar20 = 0;
    lVar17 = -param_4;
    while (puVar8 = (undefined8 *)((long)param_1 + lVar20),
          *(float *)((long)puVar8 + 0xc) <= *(float *)((long)param_2 + 0xc)) {
      lVar20 = lVar20 + 0x48;
      bVar6 = lVar17 == -1;
      lVar17 = lVar17 + 1;
      if (bVar6) {
        return;
      }
    }
    if (-lVar17 < param_5) {
      lVar11 = param_5 / 2;
      puVar15 = param_2 + lVar11 * 9;
      lVar4 = (long)param_2 + (-lVar20 - (long)param_1);
      puVar14 = param_2;
      if (lVar4 != 0) {
        uVar7 = (lVar4 >> 3) * -0x71c71c71c71c71c7;
        puVar14 = puVar8;
        do {
          uVar9 = uVar7 >> 1;
          uVar10 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          uVar7 = uVar9;
          if (*(float *)((long)puVar14 + uVar9 * 0x48 + 0xc) <= *(float *)((long)puVar15 + 0xc)) {
            uVar7 = uVar10;
            puVar14 = puVar14 + uVar9 * 9 + 9;
          }
        } while (uVar7 != 0);
      }
      param_4 = ((long)puVar14 + (-lVar20 - (long)param_1) >> 3) * -0x71c71c71c71c71c7;
    }
    else {
      if (lVar17 == -1) {
        param_1 = (undefined8 *)((long)param_1 + lVar20);
        uVar16 = *param_1;
        uStack_78 = param_1[2];
        uStack_80 = param_1[1];
        uStack_68 = (undefined4)param_1[4];
        uStack_64 = (undefined4)((ulong)param_1[4] >> 0x20);
        uStack_70 = (undefined4)param_1[3];
        uStack_6c = (undefined4)((ulong)param_1[3] >> 0x20);
        uVar23 = param_1[6];
        uVar22 = param_1[5];
        param_1[5] = 0;
        param_1[6] = 0;
        plVar24 = (long *)param_1[8];
        param_1[7] = 0;
        param_1[8] = 0;
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        uVar2 = *(undefined4 *)(param_2 + 3);
        param_1[2] = param_2[2];
        *(undefined4 *)(param_1 + 3) = uVar2;
        uVar2 = *(undefined4 *)((long)param_2 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        uVar25 = param_2[6];
        uVar21 = param_2[5];
        param_2[5] = 0;
        param_2[6] = 0;
        lVar20 = param_1[6];
        param_1[6] = uVar25;
        param_1[5] = uVar21;
        if (lVar20 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(param_1 + 7,param_2 + 7);
        *param_2 = uVar16;
        param_2[1] = uStack_80;
        param_2[2] = uStack_78;
        *(undefined4 *)(param_2 + 3) = uStack_70;
        *(undefined8 *)((long)param_2 + 0x1c) = CONCAT44(uStack_68,uStack_6c);
        *(undefined4 *)((long)param_2 + 0x24) = uStack_64;
        lVar20 = param_2[6];
        param_2[6] = uVar23;
        param_2[5] = uVar22;
        if (lVar20 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(param_2 + 7,&stack0xffffffffffffffb0);
        if (plVar24 != (long *)0x0) {
          plVar1 = plVar24 + 1;
          do {
            lVar20 = *plVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
          }
        }
        return;
      }
      param_4 = -lVar17 / 2;
      puVar15 = param_2;
      if (param_2 != param_3) {
        uVar7 = ((long)param_3 - (long)param_2 >> 3) * -0x71c71c71c71c71c7;
        puVar14 = param_2;
        do {
          uVar10 = uVar7 >> 1;
          puVar15 = puVar14 + uVar10 * 9 + 9;
          uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          if (*(float *)((long)param_1 + lVar20 + param_4 * 0x48 + 0xc) <=
              *(float *)((long)puVar14 + uVar10 * 0x48 + 0xc)) {
            puVar15 = puVar14;
            uVar7 = uVar10;
          }
          puVar14 = puVar15;
        } while (uVar7 != 0);
      }
      lVar11 = ((long)puVar15 - (long)param_2 >> 3) * -0x71c71c71c71c71c7;
      puVar14 = (undefined8 *)((long)param_1 + lVar20 + param_4 * 0x48);
    }
    puVar19 = puVar15;
    if ((puVar14 != param_2) && (puVar19 = puVar14, param_2 != puVar15)) {
      FUN_10aa4a2c0(puVar14,param_2);
      puVar12 = param_2;
      while( true ) {
        puVar19 = puVar19 + 9;
        param_2 = param_2 + 9;
        if (param_2 == puVar15) break;
        puVar18 = param_2;
        if (puVar19 != puVar12) {
          puVar18 = puVar12;
        }
        FUN_10aa4a2c0(puVar19,param_2);
        puVar12 = puVar18;
      }
      puVar5 = puVar12;
      puVar18 = puVar19;
      if (puVar19 != puVar12) {
        do {
          while( true ) {
            puVar13 = puVar5;
            FUN_10aa4a2c0(puVar18,puVar12);
            puVar18 = puVar18 + 9;
            puVar12 = puVar12 + 9;
            if (puVar12 == puVar15) break;
            puVar5 = puVar12;
            if (puVar18 != puVar13) {
              puVar5 = puVar13;
            }
          }
          puVar5 = puVar13;
          puVar12 = puVar13;
        } while (puVar18 != puVar13);
      }
    }
    if (param_4 + lVar11 < (param_5 - (param_4 + lVar11)) - lVar17) {
      FUN_10aa49c84((long)param_1 + lVar20,puVar14,puVar19,param_4,lVar11,param_6);
      param_5 = param_5 - lVar11;
      param_4 = -param_4 - lVar17;
      param_2 = puVar15;
      param_1 = puVar19;
    }
    else {
      FUN_10aa49c84(puVar19,puVar15,param_3,-param_4 - lVar17,param_5 - lVar11,param_6);
      param_5 = lVar11;
      param_3 = puVar19;
      param_2 = puVar14;
      param_1 = puVar8;
    }
  }
  if (param_5 < param_4) {
    if (param_2 != param_3) {
      lVar17 = 0;
      lVar20 = 0;
      do {
        puVar8 = (undefined8 *)((long)param_6 + lVar17);
        puVar15 = (undefined8 *)((long)param_2 + lVar17);
        *puVar8 = *puVar15;
        uVar22 = puVar15[2];
        uVar16 = puVar15[1];
        uVar21 = puVar15[3];
        puVar8[4] = puVar15[4];
        puVar8[3] = uVar21;
        puVar8[2] = uVar22;
        puVar8[1] = uVar16;
        uVar16 = puVar15[5];
        puVar8[6] = puVar15[6];
        puVar8[5] = uVar16;
        puVar15[5] = 0;
        puVar15[6] = 0;
        uVar16 = puVar15[7];
        puVar8[8] = puVar15[8];
        puVar8[7] = uVar16;
        puVar15[7] = 0;
        puVar15[8] = 0;
        lVar20 = lVar20 + 1;
        lVar17 = lVar17 + 0x48;
      } while (puVar15 + 9 != param_3);
      puVar14 = param_3 + -4;
      puVar15 = param_3;
      puVar8 = (undefined8 *)((long)param_6 + lVar17);
      do {
        if (param_2 == param_1) {
          FUN_10aa4a578(&uStack_80,(undefined8 *)((long)param_6 + lVar17),puVar8,param_6,param_6,
                        param_3,puVar15);
          break;
        }
        if (*(float *)((long)param_2 + -0x3c) <= *(float *)((long)puVar8 + -0x3c)) {
          puVar14[-5] = puVar8[-9];
          puVar14[-4] = puVar8[-8];
          uVar16 = puVar8[-7];
          *(undefined4 *)(puVar14 + -2) = *(undefined4 *)(puVar8 + -6);
          puVar14[-3] = uVar16;
          uVar16 = *(undefined8 *)((long)puVar8 + -0x2c);
          *(undefined4 *)((long)puVar14 + -4) = *(undefined4 *)((long)puVar8 + -0x24);
          *(undefined8 *)((long)puVar14 + -0xc) = uVar16;
          uVar22 = puVar8[-3];
          uVar16 = puVar8[-4];
          puVar8[-4] = 0;
          puVar8[-3] = 0;
          lVar11 = puVar14[1];
          puVar14[1] = uVar22;
          *puVar14 = uVar16;
          puVar12 = puVar8 + -9;
          puVar18 = param_2;
          puVar19 = puVar8;
        }
        else {
          puVar14[-5] = param_2[-9];
          puVar14[-4] = param_2[-8];
          uVar16 = param_2[-7];
          *(undefined4 *)(puVar14 + -2) = *(undefined4 *)(param_2 + -6);
          puVar14[-3] = uVar16;
          uVar16 = *(undefined8 *)((long)param_2 + -0x2c);
          *(undefined4 *)((long)puVar14 + -4) = *(undefined4 *)((long)param_2 + -0x24);
          *(undefined8 *)((long)puVar14 + -0xc) = uVar16;
          uVar22 = param_2[-3];
          uVar16 = param_2[-4];
          param_2[-4] = 0;
          param_2[-3] = 0;
          lVar11 = puVar14[1];
          puVar14[1] = uVar22;
          *puVar14 = uVar16;
          puVar12 = puVar8;
          puVar18 = param_2 + -9;
          puVar19 = param_2;
        }
        param_2 = puVar18;
        puVar8 = puVar12;
        if (lVar11 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(puVar14 + 2,puVar19 + -2);
        puVar15 = puVar15 + -9;
        puVar14 = puVar14 + -9;
      } while (puVar8 != param_6);
      goto LAB_10aa4a274;
    }
  }
  else if (param_2 != param_1) {
    lVar20 = 0;
    puVar8 = param_1;
    puVar15 = param_6;
    do {
      *puVar15 = *puVar8;
      uVar22 = puVar8[2];
      uVar16 = puVar8[1];
      uVar21 = puVar8[3];
      puVar15[4] = puVar8[4];
      puVar15[3] = uVar21;
      puVar15[2] = uVar22;
      puVar15[1] = uVar16;
      uVar16 = puVar8[5];
      puVar15[6] = puVar8[6];
      puVar15[5] = uVar16;
      puVar8[5] = 0;
      puVar8[6] = 0;
      uVar16 = puVar8[7];
      puVar15[8] = puVar8[8];
      puVar15[7] = uVar16;
      puVar8[7] = 0;
      puVar8[8] = 0;
      lVar20 = lVar20 + 1;
      puVar8 = puVar8 + 9;
      puVar15 = puVar15 + 9;
      puVar14 = param_6;
    } while (puVar8 != param_2);
    do {
      if (param_2 == param_3) {
        FUN_10aa4a4d8(puVar14,puVar15,param_1);
        break;
      }
      if (*(float *)((long)puVar14 + 0xc) <= *(float *)((long)param_2 + 0xc)) {
        *param_1 = *puVar14;
        param_1[1] = puVar14[1];
        uVar16 = puVar14[2];
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar14 + 3);
        param_1[2] = uVar16;
        uVar16 = *(undefined8 *)((long)puVar14 + 0x1c);
        *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)puVar14 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = uVar16;
        uVar22 = puVar14[6];
        uVar16 = puVar14[5];
        puVar14[5] = 0;
        puVar14[6] = 0;
        lVar17 = param_1[6];
        param_1[6] = uVar22;
        param_1[5] = uVar16;
        if (lVar17 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(param_1 + 7,puVar14 + 7);
        puVar14 = puVar14 + 9;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        uVar16 = param_2[2];
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
        param_1[2] = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x1c);
        *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = uVar16;
        uVar22 = param_2[6];
        uVar16 = param_2[5];
        param_2[5] = 0;
        param_2[6] = 0;
        lVar17 = param_1[6];
        param_1[6] = uVar22;
        param_1[5] = uVar16;
        if (lVar17 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10aa4a430(param_1 + 7,param_2 + 7);
        param_2 = param_2 + 9;
      }
      param_1 = param_1 + 9;
    } while (puVar15 != puVar14);
    goto LAB_10aa4a274;
  }
  lVar20 = 0;
LAB_10aa4a274:
  if (param_6 == (undefined8 *)0x0) {
    return;
  }
  if (lVar20 != 0) {
    param_6 = param_6 + 7;
    do {
      FUN_10a40bb4c(param_6);
      if (param_6[-1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      param_6 = param_6 + 9;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  return;
}



/* Entry: 10aa4a2c0; end: 10aa4a42f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa4a400) */

void FUN_10aa4a2c0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_50;
  long *plStack_48;
  
  uVar8 = *param_1;
  uVar14 = param_1[2];
  uVar13 = param_1[1];
  uStack_68 = (undefined4)param_1[4];
  uStack_64 = (undefined4)((ulong)param_1[4] >> 0x20);
  uStack_70 = (undefined4)param_1[3];
  uStack_6c = (undefined4)((ulong)param_1[3] >> 0x20);
  uVar11 = param_1[6];
  uVar9 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  puVar7 = param_1 + 7;
  plStack_48 = (long *)param_1[8];
  uStack_50 = *puVar7;
  *puVar7 = 0;
  param_1[8] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = uVar2;
  uVar2 = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  uVar12 = param_2[6];
  uVar10 = param_2[5];
  param_2[5] = 0;
  param_2[6] = 0;
  lVar6 = param_1[6];
  param_1[6] = uVar12;
  param_1[5] = uVar10;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10aa4a430(puVar7,param_2 + 7);
  *param_2 = uVar8;
  param_2[1] = uVar13;
  param_2[2] = uVar14;
  *(undefined4 *)(param_2 + 3) = uStack_70;
  *(undefined8 *)((long)param_2 + 0x1c) = CONCAT44(uStack_68,uStack_6c);
  *(undefined4 *)((long)param_2 + 0x24) = uStack_64;
  lVar6 = param_2[6];
  param_2[6] = uVar11;
  param_2[5] = uVar9;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10aa4a430(param_2 + 7,&uStack_50);
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10aa4a430; end: 10aa4a4d7;  */

undefined8 * FUN_10aa4a430(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 10aa4a4d8; end: 10aa4a577;  */

void FUN_10aa4a4d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    param_3 = param_3 + 0x38;
    lVar3 = param_1 + 0x38;
    do {
      *(undefined8 *)(param_3 + -0x38) = *(undefined8 *)(lVar3 + -0x38);
      *(undefined8 *)(param_3 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
      uVar2 = *(undefined8 *)(lVar3 + -0x28);
      *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(lVar3 + -0x20);
      *(undefined8 *)(param_3 + -0x28) = uVar2;
      uVar2 = *(undefined8 *)(lVar3 + -0x1c);
      *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(lVar3 + -0x14);
      *(undefined8 *)(param_3 + -0x1c) = uVar2;
      uVar4 = *(undefined8 *)(lVar3 + -8);
      uVar2 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(undefined8 *)(lVar3 + -8) = 0;
      lVar1 = *(long *)(param_3 + -8);
      *(undefined8 *)(param_3 + -8) = uVar4;
      *(undefined8 *)(param_3 + -0x10) = uVar2;
      if (lVar1 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10aa4a430(param_3,lVar3);
      param_3 = param_3 + 0x48;
      lVar1 = lVar3 + 0x10;
      lVar3 = lVar3 + 0x48;
    } while (lVar1 != param_2);
  }
  return;
}



/* Entry: 10aa4a578; end: 10aa4a64f;  */

void FUN_10aa4a578(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = param_3;
  if (param_3 != param_5) {
    lVar5 = 0;
    do {
      lVar4 = param_3 + lVar5;
      lVar1 = param_7 + lVar5;
      *(undefined8 *)(lVar1 + -0x48) = *(undefined8 *)(lVar4 + -0x48);
      *(undefined8 *)(lVar1 + -0x40) = *(undefined8 *)(lVar4 + -0x40);
      uVar3 = *(undefined8 *)(lVar4 + -0x38);
      *(undefined4 *)(lVar1 + -0x30) = *(undefined4 *)(lVar4 + -0x30);
      *(undefined8 *)(lVar1 + -0x38) = uVar3;
      uVar3 = *(undefined8 *)(lVar4 + -0x2c);
      *(undefined4 *)(lVar1 + -0x24) = *(undefined4 *)(lVar4 + -0x24);
      *(undefined8 *)(lVar1 + -0x2c) = uVar3;
      uVar6 = *(undefined8 *)(lVar4 + -0x18);
      uVar3 = *(undefined8 *)(lVar4 + -0x20);
      *(undefined8 *)(lVar4 + -0x20) = 0;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      lVar2 = *(long *)(lVar1 + -0x18);
      *(undefined8 *)(lVar1 + -0x18) = uVar6;
      *(undefined8 *)(lVar1 + -0x20) = uVar3;
      if (lVar2 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10aa4a430(lVar1 + -0x10,lVar4 + -0x10);
      lVar5 = lVar5 + -0x48;
      lVar4 = param_3 + lVar5;
    } while (lVar4 != param_5);
    param_7 = param_7 + lVar5;
  }
  *param_1 = param_2;
  param_1[1] = lVar4;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return;
}



/* Entry: 10aa4a650; end: 10aa4a663;  */

undefined1  [16] FUN_10aa4a650(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010aa4dd5c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10aa4a664; end: 10aa4a6e3;  */

undefined1  [16] FUN_10aa4a664(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010aa4dd5c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10aa4a6e4; end: 10aa4a8b3;  */

void FUN_10aa4a6e4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar10 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar6);
      }
      else if (param_2 <= plVar10) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)param_2;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      while (plVar7 != (long *)0x0) {
        plVar9 = (long *)plVar7[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar7;
        if (plVar9 != plVar10) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar9 * 8) = plVar5;
            plVar10 = plVar9;
          }
          else {
            *plVar5 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar9 * 8);
            **(long **)(lVar2 + (long)plVar9 * 8) = (long)plVar7;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    return;
  }
  lVar4 = plVar5[1];
  lVar3 = lVar2;
  if (lVar4 != lVar2) {
    do {
      lVar4 = lVar4 + -0x10;
      func_0x00010aa4dd5c();
    } while (lVar4 != lVar2);
    lVar3 = *plVar5;
  }
  plVar5[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 10aa4a8b4; end: 10aa4a90f;  */

void FUN_10aa4a8b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010aa4dd5c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa4a910; end: 10aa4a923;  */

void FUN_10aa4a910(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puStack_88;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b == 0) {
    __Znwm((long)puVar1 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar2 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        *param_3 = *puVar3;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        uVar4 = puVar3[1];
        param_3[2] = puVar3[2];
        param_3[1] = uVar4;
        param_3[3] = puVar3[3];
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
        param_3 = param_3 + 4;
      } while (puVar3 != param_2);
      do {
        puStack_88 = puVar2 + 1;
        FUN_10aa4aa24(&puStack_88);
        puVar2 = puVar2 + 4;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 << 5);
  return;
}



/* Entry: 10aa4a924; end: 10aa4a957;  */

void FUN_10aa4a924(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puStack_78;
  
  if (param_1 >> 0x3b == 0) {
    __Znwm(param_1 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        uVar3 = puVar2[1];
        param_3[2] = puVar2[2];
        param_3[1] = uVar3;
        param_3[3] = puVar2[3];
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
        param_3 = param_3 + 4;
      } while (puVar2 != param_2);
      do {
        puStack_78 = puVar1 + 1;
        FUN_10aa4aa24(&puStack_78);
        puVar1 = puVar1 + 4;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10aa4a958; end: 10aa4a96b;  */

void FUN_10aa4a958(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puStack_58;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        uVar3 = puVar2[1];
        param_3[2] = puVar2[2];
        param_3[1] = uVar3;
        param_3[3] = puVar2[3];
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
        param_3 = param_3 + 4;
      } while (puVar2 != param_2);
      do {
        puStack_58 = puVar1 + 1;
        FUN_10aa4aa24(&puStack_58);
        puVar1 = puVar1 + 4;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10aa4a96c; end: 10aa4aa23;  */

void FUN_10aa4a96c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  if ((ulong)param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        uVar2 = puVar1[1];
        param_3[2] = puVar1[2];
        param_3[1] = uVar2;
        param_3[3] = puVar1[3];
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 4;
        param_3 = param_3 + 4;
      } while (puVar1 != param_2);
      do {
        puStack_48 = param_1 + 1;
        FUN_10aa4aa24(&puStack_48);
        param_1 = param_1 + 4;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 << 5);
  return;
}



/* Entry: 10aa4aa24; end: 10aa4aaab;  */

void FUN_10aa4aa24(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x20;
        lStack_38 = lVar1 + -0x18;
        FUN_10aa4aa24(&lStack_38);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10aa4aaac; end: 10aa4ab0b;  */

long * FUN_10aa4aaac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    lStack_28 = lVar2 + -0x18;
    FUN_10aa4aa24(&lStack_28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa4ab0c; end: 10aa4ab7f;  */

void FUN_10aa4ab0c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10aa4ab80; end: 10aa4aba7;  */

void FUN_10aa4ab80(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar2[2] != 0) {
    plVar1 = (long *)plVar2[1];
    plVar3 = *(long **)(*plVar2 + 8);
    lVar4 = *plVar1;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    plVar2[2] = 0;
    while (plVar1 != plVar2) {
      plVar3 = (long *)plVar1[1];
      FUN_10aa4ac14(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar3;
    }
  }
  return;
}



/* Entry: 10aa4aba8; end: 10aa4ac13;  */

void FUN_10aa4aba8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10aa4ac14(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10aa4ac14; end: 10aa4ac5b;  */

void FUN_10aa4ac14(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aa4ac5c; end: 10aa4ad3b;  */

void FUN_10aa4ac5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar3 = *(long **)(*param_1 + 8);
    lVar4 = *plVar1;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar3 = (long *)plVar1[1];
      if (plVar1[0x7e] != 0) {
        plVar1[0x7f] = plVar1[0x7e];
        __ZdlPv();
      }
      if (plVar1[0x7b] != 0) {
        plVar1[0x7c] = plVar1[0x7b];
        __ZdlPv();
      }
      func_0x00010a3f8ab8(plVar1 + 0x71);
      plVar1[0xe] = (long)&PTR_DAT_110b14840;
      func_0x000109833fe0(plVar1 + 0x5a);
      plVar1[0xe] = (long)&PTR_DAT_110b122a8;
      func_0x000109807e94(plVar1 + 0x37);
      plVar2 = (long *)plVar1[5];
      plVar1[5] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1[4] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZdlPv(plVar1);
      plVar1 = plVar3;
    }
  }
  return;
}



/* Entry: 10aa4ad3c; end: 10aa4ad97;  */

void FUN_10aa4ad3c(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*param_1 + 0x350);
  lVar3 = *(long *)(*param_1 + 0x358);
  if ((lVar2 != 0 && lVar3 != 0) &&
     ((((*(byte *)(lVar2 + 300) >> 1 & 1) != 0 ||
       (pbVar1 = (byte *)(lVar3 + 300), lVar3 = lVar2, (*pbVar1 >> 1 & 1) != 0)) &&
      ((*(byte *)(lVar3 + 0xe8) & 3) == 0)))) {
    if ((*(uint *)(lVar3 + 0xf8) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar3 + 0xf8) = 1;
    }
    *(undefined4 *)(lVar3 + 0xfc) = 0;
    return;
  }
  return;
}



/* Entry: 10aa4ad98; end: 10aa4aeab;  */

void FUN_10aa4ad98(long *param_1,ulong param_2)

{
  undefined1 ***pppuVar1;
  long lVar2;
  undefined *puVar3;
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
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar5 = *param_1;
  lVar11 = param_1[1];
  lVar8 = lVar11 - lVar5;
  uVar13 = lVar8 >> 3;
  if (param_2 <= uVar13) {
    if (uVar13 <= param_2) {
      return;
    }
    lVar11 = lVar5 + param_2 * 8;
LAB_10aa4ae88:
    param_1[1] = lVar11;
    return;
  }
  uVar12 = param_2 - uVar13;
  if (uVar12 <= (ulong)(param_1[2] - lVar11 >> 3)) {
    _bzero(lVar11,uVar12 * 8);
    lVar11 = lVar11 + uVar12 * 8;
    goto LAB_10aa4ae88;
  }
  if (param_2 >> 0x3d == 0) {
    uVar6 = param_1[2] - lVar5;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= param_2) {
      uVar7 = param_2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar2 = uVar7 << 3;
      __Znwm();
      lVar11 = lVar2 + lVar8;
      _bzero(lVar11,uVar12 * 8);
      lVar10 = lVar11 + uVar13 * -8;
      _memcpy(lVar10,lVar5,lVar8);
      *param_1 = lVar10;
      param_1[1] = lVar11 + uVar12 * 8;
      param_1[2] = lVar2 + uVar7 * 8;
      if (lVar5 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
  }
  else {
    FUN_10aa4aeac();
  }
  func_0x000109ffded8();
  pcStack_58 = FUN_10aa4aeac;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_109ffde64(&DAT_10f62a4d8);
  uStack_68 = 0x10aa4aec0;
  puVar3 = &DAT_10f62a4d8;
  puStack_70 = (undefined1 *)&puStack_60;
  FUN_109ffde64();
  pcStack_78 = FUN_10aa4aed4;
  lStack_90 = lVar5;
  plStack_88 = param_1;
  if (puVar3 < (undefined *)0xaaaaaaaaaaaaaab) {
    puStack_80 = (undefined1 *)&puStack_70;
    __Znwm((long)puVar3 * 0x18);
    return;
  }
  puStack_80 = (undefined1 *)&puStack_70;
  func_0x000109ffded8();
  pcStack_98 = FUN_10aa4af18;
  plVar4 = (long *)&DAT_10f62a4d8;
  ppuStack_a0 = &puStack_80;
  FUN_109ffde64();
  pcStack_a8 = FUN_10aa4af2c;
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    return;
  }
  lVar10 = lVar2;
  lVar9 = plVar4[1];
  lStack_d0 = lVar11;
  lStack_c8 = lVar8;
  lStack_c0 = lVar5;
  plStack_b8 = param_1;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  pppuVar1 = &ppuStack_a0;
  if (plVar4[1] != lVar2) {
    do {
      if (*(long *)(lVar9 + -0x18) != 0) {
        *(long *)(lVar9 + -0x10) = *(long *)(lVar9 + -0x18);
        __ZdlPv();
      }
      lVar11 = lVar9 + -0x40;
      lStack_d8 = lVar9 + -0x30;
      FUN_10aa4aa24(&lStack_d8);
      lVar9 = lVar11;
    } while (lVar11 != lVar2);
    lVar10 = *plVar4;
    pppuVar1 = (undefined1 ***)puStack_b0;
  }
  puStack_b0 = (undefined1 *)pppuVar1;
  plVar4[1] = lVar2;
  lVar5 = lVar10;
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar5);
  return;
}



/* Entry: 10aa4aeac; end: 10aa4aed3;  */

void FUN_10aa4aeac(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_88;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar5 = lVar3;
    lVar4 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        if (*(long *)(lVar4 + -0x18) != 0) {
          *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
          __ZdlPv();
        }
        lVar5 = lVar4 + -0x40;
        lStack_88 = lVar4 + -0x30;
        FUN_10aa4aa24(&lStack_88);
        lVar4 = lVar5;
      } while (lVar5 != lVar3);
      lVar5 = *plVar2;
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5);
    return;
  }
  return;
}



/* Entry: 10aa4aed4; end: 10aa4af17;  */

void FUN_10aa4aed4(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_68;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar4 = lVar2;
    lVar3 = plVar1[1];
    if (plVar1[1] != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x18) != 0) {
          *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
          __ZdlPv();
        }
        lVar4 = lVar3 + -0x40;
        lStack_68 = lVar3 + -0x30;
        FUN_10aa4aa24(&lStack_68);
        lVar3 = lVar4;
      } while (lVar4 != lVar2);
      lVar4 = *plVar1;
    }
    plVar1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10aa4af18; end: 10aa4af2b;  */

void FUN_10aa4af18(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar4 = lVar2;
    lVar3 = plVar1[1];
    if (plVar1[1] != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x18) != 0) {
          *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
          __ZdlPv();
        }
        lVar4 = lVar3 + -0x40;
        lStack_48 = lVar3 + -0x30;
        FUN_10aa4aa24(&lStack_48);
        lVar3 = lVar4;
      } while (lVar4 != lVar2);
      lVar4 = *plVar1;
    }
    plVar1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10aa4af2c; end: 10aa4afbb;  */

void FUN_10aa4af2c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    lVar2 = param_1[1];
    if (param_1[1] != lVar1) {
      do {
        if (*(long *)(lVar2 + -0x18) != 0) {
          *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
          __ZdlPv();
        }
        lVar3 = lVar2 + -0x40;
        lStack_38 = lVar2 + -0x30;
        FUN_10aa4aa24(&lStack_38);
        lVar2 = lVar3;
      } while (lVar3 != lVar1);
      lVar3 = *param_1;
    }
    param_1[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa4afbc; end: 10aa4b01f;  */

void FUN_10aa4afbc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10aa4b020; end: 10aa4b17b;  */

undefined8 * FUN_10aa4b020(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  puStack_48 = param_1 + 5;
  param_1[6] = 0;
  *puStack_48 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  lVar1 = 0x5a0;
  __Znwm();
  FUN_10aa486dc(0,0,lVar1);
  uStack_68 = param_1[5];
  param_1[5] = lVar1;
  param_1[6] = lVar1;
  uStack_50 = param_1[7];
  param_1[7] = lVar1 + 0x5a0;
  uStack_60 = uStack_68;
  uStack_58 = uStack_68;
  func_0x00010aa48794(&uStack_68);
  FUN_10aa480cc(param_1 + 8,0x14);
  lVar1 = param_1[0xb];
  if ((ulong)(param_1[0xd] - lVar1) < 0xa0) {
    lVar3 = param_1[0xc];
    lVar2 = 0xa0;
    __Znwm();
    _memcpy();
    param_1[0xb] = lVar2;
    param_1[0xc] = lVar2 + (lVar3 - lVar1);
    param_1[0xd] = lVar2 + 0xa0;
    if (lVar1 != 0) {
      __ZdlPv(lVar1);
    }
  }
  FUN_10aa4a6e4(param_1 + 0xe,(long)(20.0 / *(float *)(param_1 + 0x12)));
  return param_1;
}



/* Entry: 10aa4b17c; end: 10aa4b1c3;  */

long * FUN_10aa4b17c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa4b1c4; end: 10aa4b2ef;  */

void FUN_10aa4b1c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x48;
        func_0x00010aa4875c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa4b2f0; end: 10aa4b37f;  */

void FUN_10aa4b2f0(long param_1)

{
  long *plVar1;
  long lStack_28;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    FUN_10a688c1c(param_1 + 200);
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_10a688c1c(param_1 + 0xa0);
  }
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lStack_28 = param_1 + 0x48;
  func_0x00010a4aec24(&lStack_28);
  lStack_28 = param_1 + 0x30;
  func_0x00010a4aec24(&lStack_28);
  return;
}



/* Entry: 10aa4b380; end: 10aa4b687;  */

void FUN_10aa4b380(long param_1)

{
  undefined **ppuVar1;
  long **pplVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined **ppuVar13;
  long lVar14;
  long *plVar15;
  undefined **extraout_x8;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  code *extraout_x9;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  float *pfVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *puVar31;
  byte *pbVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  float fVar39;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long **pplStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long **pplStack_120;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar14 = param_1;
  FUN_10a008350();
  puStack_88 = (undefined *)0x40000000000;
  func_0x00010937f57c(&puStack_88,lVar14,&puStack_88);
  ppuVar13 = &PTR___tlv_bootstrap_11340d7b0;
  (*(code *)PTR___tlv_bootstrap_11340d7b0)();
  if (((ulong)*ppuVar13 & 1) == 0) {
    ppuVar13 = extraout_x8;
    (*extraout_x9)();
    *(undefined1 *)ppuVar13 = 1;
  }
  plVar26 = *(long **)(*(long *)(param_1 + 0x90) + 0x58d0);
  plVar16 = *(long **)(*(long *)(param_1 + 0x90) + 0x58d8);
  do {
    if (plVar26 == plVar16) {
      return;
    }
    lVar37 = *plVar26;
    plVar30 = (long *)(lVar37 + 0x2f0);
    lVar17 = *(long *)(lVar37 + 0x2c8);
    lVar20 = *(long *)(lVar37 + 0x2c0);
    uVar27 = (lVar17 - lVar20 >> 4) * -0x5555555555555555;
    lVar24 = *(long *)(lVar37 + 0x2f0);
    if ((ulong)((*(long *)(lVar37 + 0x300) - lVar24 >> 3) * -0x3333333333333333) < uVar27) {
      if (0x666666666666666 < uVar27) {
LAB_10aa4b684:
        FUN_10aa3e2a4();
        pbVar32 = ppuVar13[0x12];
        lVar14 = *(long *)(pbVar32 + 0x58d0);
        lVar17 = *(long *)(pbVar32 + 0x58d8);
        bVar8 = *pbVar32;
        if (lVar14 != lVar17 || (bVar8 & 2) != 0) {
          fStack_208 = 0.0;
          uStack_204 = 0;
          fStack_210 = 1.0;
          fStack_20c = 0.0;
          uStack_1f8 = 0;
          uStack_200 = 0x3f80000000000000;
          uStack_1e8 = 0x3f800000;
          uStack_1f0 = 0;
          uStack_1d8 = 0x3f80000000000000;
          uStack_1e0 = 0;
          if ((bVar8 & 1) == 0) {
            plVar16 = *(long **)(pbVar32 + 0x18);
            __ZNSt3__119__shared_weak_count4lockEv();
            lVar20 = *(long *)(pbVar32 + 0x10);
            plVar26 = plVar16 + 1;
            do {
              lVar24 = *plVar26;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar11) {
                *plVar26 = lVar24 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
            lVar20 = *(long *)(lVar20 + 0x178);
            if ((*(byte *)(lVar20 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(lVar20);
            }
            uStack_1f8 = *(undefined8 *)(lVar20 + 0xd8);
            uStack_200 = *(undefined8 *)(lVar20 + 0xd0);
            fStack_208 = (float)*(undefined8 *)(lVar20 + 200);
            uStack_204 = (undefined4)((ulong)*(undefined8 *)(lVar20 + 200) >> 0x20);
            fStack_210 = (float)*(undefined8 *)(lVar20 + 0xc0);
            fStack_20c = (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20);
            uStack_1e8 = *(undefined8 *)(lVar20 + 0xe8);
            uStack_1f0 = *(undefined8 *)(lVar20 + 0xe0);
            uStack_1d8 = *(undefined8 *)(lVar20 + 0xf8);
            uStack_1e0 = *(undefined8 *)(lVar20 + 0xf0);
            fVar39 = SQRT(fStack_210 * fStack_210 + fStack_20c * fStack_20c +
                          fStack_208 * fStack_208);
            pfVar28 = &fStack_210;
          }
          else {
            pfVar28 = (float *)0x0;
            fVar39 = 1.0;
          }
          lVar20 = (long)*(int *)(pbVar32 + 0x2e4);
          if (*(int *)(pbVar32 + 0x2e4) != 0) {
            plVar26 = *(long **)(pbVar32 + 0x2f0);
            do {
              lVar24 = *plVar26;
              lVar38 = *(long *)(lVar24 + 0x350);
              lVar37 = *(long *)(lVar24 + 0x358);
              if ((lVar14 != lVar17) && (*(int *)(lVar24 + 0x360) != 0)) {
                uVar6 = *(uint *)(lVar37 + 300);
                if ((*(byte *)(lVar38 + 300) & 1) != 0) {
                  FUN_10aa29188(fVar39,lVar24,0,pfVar28);
                }
                if ((uVar6 & 1) != 0) {
                  FUN_10aa29188(fVar39,lVar24,1,pfVar28);
                }
              }
              if ((bVar8 >> 1 & 1) != 0) {
                uVar6 = *(uint *)(*(long *)(lVar37 + 0xd0) + 0x18);
                if (((*(byte *)(*(long *)(lVar38 + 0xd0) + 0x18) & 1) != 0) &&
                   ((*(byte *)(lVar37 + 0xe8) & 3) == 0)) {
                  if ((*(uint *)(lVar37 + 0xf8) & 0xfffffffe) != 4) {
                    *(undefined4 *)(lVar37 + 0xf8) = 1;
                  }
                  *(undefined4 *)(lVar37 + 0xfc) = 0;
                }
                if (((uVar6 & 1) != 0) && ((*(byte *)(lVar38 + 0xe8) & 3) == 0)) {
                  if ((*(uint *)(lVar38 + 0xf8) & 0xfffffffe) != 4) {
                    *(undefined4 *)(lVar38 + 0xf8) = 1;
                  }
                  *(undefined4 *)(lVar38 + 0xfc) = 0;
                }
              }
              lVar20 = lVar20 + -1;
              plVar26 = plVar26 + 1;
            } while (lVar20 != 0);
          }
          plVar26 = *(long **)(pbVar32 + 0x58d0);
          plVar16 = *(long **)(pbVar32 + 0x58d8);
          if (plVar26 == plVar16) {
            return;
          }
          do {
            lVar14 = *plVar26;
            plVar30 = *(long **)(lVar14 + 0x2f0);
            plVar29 = *(long **)(lVar14 + 0x2f8);
            if (plVar30 != plVar29) {
              FUN_10aa3e3e4(plVar30,plVar29,
                            LZCOUNT(((long)plVar29 - (long)plVar30 >> 3) * -0x3333333333333333) * -2
                            + 0x7e,1);
              plStack_158 = (long *)0x0;
              plStack_150 = (long *)0x0;
              plStack_148 = (long *)0x0;
              plStack_170 = (long *)0x0;
              plStack_168 = (long *)0x0;
              plStack_160 = (long *)0x0;
              plStack_188 = (long *)0x0;
              plStack_180 = (long *)0x0;
              pplVar2 = (long **)(lVar14 + 0x2c0);
              plStack_178 = (long *)0x0;
              do {
                uVar35 = 0x555555555555555;
                plVar15 = (long *)*plVar30;
                uVar9 = *(ushort *)((long)plVar30 + 0xc);
                uVar27 = (ulong)uVar9;
                plVar23 = plVar30 + 5;
                if (uVar9 != 0xffff) {
                  plVar30 = plVar23;
                }
                if ((plVar23 == plVar29) || (plVar15 == (long *)0x0)) {
LAB_10aa4b940:
                  lVar17 = (long)plVar23 - (long)plVar30;
                  if (lVar17 != 0) goto LAB_10aa4b948;
                  uVar21 = (*(long *)(lVar14 + 0x2c8) - *(long *)(lVar14 + 0x2c0) >> 4) *
                           -0x5555555555555555;
                  if (uVar21 < uVar27 || uVar21 - uVar27 == 0) goto LAB_10aa4c250;
                  plVar30 = (long *)(*(long *)(lVar14 + 0x2c0) + (ulong)(uint)uVar9 * 0x30);
                  if (plStack_180 < plStack_178) {
                    lVar17 = *plVar30;
                    plStack_180[1] = plVar30[1];
                    *plStack_180 = lVar17;
                    *plVar30 = 0;
                    plVar30[1] = 0;
                    lVar17 = plVar30[2];
                    *(undefined1 *)((long)plStack_180 + 0x14) =
                         *(undefined1 *)((long)plVar30 + 0x14);
                    *(int *)(plStack_180 + 2) = (int)lVar17;
                    plStack_180[4] = 0;
                    plStack_180[5] = 0;
                    plStack_180[3] = 0;
                    lVar17 = plVar30[3];
                    plStack_180[4] = plVar30[4];
                    plStack_180[3] = lVar17;
                    plStack_180[5] = plVar30[5];
                    plVar30[3] = 0;
                    plVar30[4] = 0;
                    plVar30[5] = 0;
                    plStack_180 = plStack_180 + 6;
                  }
                  else {
                    lVar17 = (long)plStack_180 - (long)plStack_188;
                    uVar27 = (lVar17 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar27) {
                      FUN_10aa3fab4();
                      goto LAB_10aa4c250;
                    }
                    lVar20 = (long)plStack_178 - (long)plStack_188 >> 4;
                    uVar21 = lVar20 * 0x5555555555555556;
                    if (uVar21 < uVar27 || uVar21 - uVar27 == 0) {
                      uVar21 = uVar27;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar20 * -0x5555555555555555)) {
                      uVar21 = uVar35;
                    }
                    pplStack_198 = &plStack_188;
                    func_0x00010aa3fac8();
                    plVar33 = (long *)(uVar21 + lVar17);
                    lVar17 = *plVar30;
                    plVar33[1] = plVar30[1];
                    *plVar33 = lVar17;
                    *plVar30 = 0;
                    plVar30[1] = 0;
                    lVar17 = plVar30[2];
                    *(undefined1 *)((long)plVar33 + 0x14) = *(undefined1 *)((long)plVar30 + 0x14);
                    *(int *)(plVar33 + 2) = (int)lVar17;
                    plVar33[4] = 0;
                    plVar33[5] = 0;
                    plVar33[3] = 0;
                    lVar17 = plVar30[3];
                    plVar33[4] = plVar30[4];
                    plVar33[3] = lVar17;
                    plVar33[5] = plVar30[5];
                    plVar30[3] = 0;
                    plVar30[4] = 0;
                    plVar30[5] = 0;
                    plVar30 = (long *)((long)plVar33 + ((long)plStack_188 - (long)plStack_180));
                    func_0x00010aa3fb0c(plStack_188,plStack_180,plVar30);
                    uStack_1a8 = plStack_188;
                    plStack_1a0 = plStack_178;
                    plStack_1b8 = plStack_188;
                    plStack_1b0 = plStack_188;
                    plStack_188 = plVar30;
                    plStack_180 = plVar33 + 6;
                    plStack_178 = (long *)(uVar21 + (long)plVar15 * 0x30);
                    func_0x00010aa3fb98(&plStack_1b8);
                    plStack_180 = plVar33 + 6;
                  }
                }
                else {
                  do {
                    if ((long *)*plVar23 != plVar15) goto LAB_10aa4b940;
                    plVar23 = plVar23 + 5;
                  } while (plVar23 != plVar29);
                  lVar17 = (long)plVar29 - (long)plVar30;
LAB_10aa4b948:
                  if (uVar9 == 0xffff) {
                    iVar7 = *(int *)(lVar14 + 0x2b8);
                    *(int *)(lVar14 + 0x2b8) = iVar7 + 1;
                    FUN_10aa29550(&plStack_1c8);
                    plVar34 = plStack_1c0;
                    plVar33 = plStack_1c8;
                    plStack_1b8 = plStack_1c8;
                    plStack_1b0 = plStack_1c0;
                    if (plStack_1c0 != (long *)0x0) {
                      plVar19 = plStack_1c0 + 2;
                      do {
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                        if (bVar11) {
                          *plVar19 = *plVar19 + 1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                    }
                    uStack_1a8._0_5_ = CONCAT14(3,iVar7);
                    pplStack_198 = (long **)0x0;
                    uStack_190 = 0;
                    plStack_1a0 = (long *)0x0;
                    if (plStack_150 < plStack_148) {
                      *plStack_150 = (long)plStack_1c8;
                      plStack_150[1] = (long)plStack_1c0;
                      plStack_1b8 = (long *)0x0;
                      plStack_1b0 = (long *)0x0;
                      *(int *)(plStack_150 + 2) = iVar7;
                      *(undefined1 *)((long)plStack_150 + 0x14) = 3;
                      plStack_150[4] = 0;
                      plStack_150[5] = 0;
                      plVar33 = plStack_150 + 6;
                      plStack_150[3] = 0;
                    }
                    else {
                      lVar20 = (long)plStack_150 - (long)plStack_158;
                      uVar27 = (lVar20 >> 4) * -0x5555555555555555 + 1;
                      if (0x555555555555555 < uVar27) {
                        FUN_10aa3fab4();
                        goto LAB_10aa4c250;
                      }
                      lVar24 = (long)plStack_148 - (long)plStack_158 >> 4;
                      uVar21 = lVar24 * 0x5555555555555556;
                      if (uVar21 < uVar27 || uVar21 - uVar27 == 0) {
                        uVar21 = uVar27;
                      }
                      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
                        uVar21 = uVar35;
                      }
                      pplStack_120 = &plStack_158;
                      func_0x00010aa3fac8();
                      plVar19 = (long *)(uVar21 + lVar20);
                      *plVar19 = (long)plVar33;
                      plVar19[1] = (long)plVar34;
                      plStack_1b8 = (long *)0x0;
                      plStack_1b0 = (long *)0x0;
                      *(undefined4 *)(plVar19 + 2) = (undefined4)uStack_1a8;
                      *(undefined1 *)((long)plVar19 + 0x14) = uStack_1a8._4_1_;
                      plVar19[4] = 0;
                      plVar19[5] = 0;
                      plVar19[3] = 0;
                      pplStack_198 = (long **)0x0;
                      uStack_190 = 0;
                      plStack_1a0 = (long *)0x0;
                      plVar33 = plVar19 + 6;
                      plVar19 = (long *)((long)plVar19 + ((long)plStack_158 - (long)plStack_150));
                      func_0x00010aa3fb0c(plStack_158,plStack_150,plVar19);
                      plStack_140 = plStack_158;
                      plStack_130 = plStack_158;
                      plStack_128 = plStack_148;
                      plStack_138 = plStack_158;
                      plStack_158 = plVar19;
                      plVar19 = plStack_150;
                      plStack_150 = plVar33;
                      plStack_148 = (long *)(uVar21 + (long)plVar15 * 0x30);
                      func_0x00010aa3fb98(&plStack_140);
                      plVar15 = plStack_150;
                    }
                    plVar19 = plStack_158;
                    plStack_150 = plVar33;
                    if (plVar34 != (long *)0x0) {
                      plVar3 = plVar34 + 1;
                      do {
                        lVar20 = *plVar3;
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar11) {
                          *plVar3 = lVar20 + -1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                      if (lVar20 == 0) {
                        (**(code **)(*plVar34 + 0x10))(plVar34);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
                        plVar19 = plStack_158;
                        plVar33 = plStack_150;
                      }
                    }
                  }
                  else {
                    uVar21 = (*(long *)(lVar14 + 0x2c8) - *(long *)(lVar14 + 0x2c0) >> 4) *
                             -0x5555555555555555;
                    if (uVar21 < uVar27 || uVar21 - uVar27 == 0) goto LAB_10aa4c250;
                    plVar33 = (long *)(*(long *)(lVar14 + 0x2c0) + (ulong)(uint)uVar9 * 0x30);
                    if (plStack_168 < plStack_160) {
                      lVar20 = *plVar33;
                      plStack_168[1] = plVar33[1];
                      *plStack_168 = lVar20;
                      *plVar33 = 0;
                      plVar33[1] = 0;
                      lVar20 = plVar33[2];
                      *(undefined1 *)((long)plStack_168 + 0x14) =
                           *(undefined1 *)((long)plVar33 + 0x14);
                      *(int *)(plStack_168 + 2) = (int)lVar20;
                      plStack_168[4] = 0;
                      plStack_168[5] = 0;
                      plStack_168[3] = 0;
                      lVar20 = plVar33[3];
                      plStack_168[4] = plVar33[4];
                      plStack_168[3] = lVar20;
                      plStack_168[5] = plVar33[5];
                      plVar33[3] = 0;
                      plVar33[4] = 0;
                      plVar33[5] = 0;
                      plVar33 = plStack_168 + 6;
                      plVar19 = plStack_170;
                      plStack_168 = plVar33;
                    }
                    else {
                      lVar20 = (long)plStack_168 - (long)plStack_170;
                      uVar27 = (lVar20 >> 4) * -0x5555555555555555 + 1;
                      if (0x555555555555555 < uVar27) {
                        FUN_10aa3fab4();
                        goto LAB_10aa4c250;
                      }
                      lVar24 = (long)plStack_160 - (long)plStack_170 >> 4;
                      uVar21 = lVar24 * 0x5555555555555556;
                      if (uVar21 < uVar27 || uVar21 - uVar27 == 0) {
                        uVar21 = uVar27;
                      }
                      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
                        uVar21 = uVar35;
                      }
                      pplStack_198 = &plStack_170;
                      func_0x00010aa3fac8();
                      plVar34 = (long *)(uVar21 + lVar20);
                      lVar20 = *plVar33;
                      plVar34[1] = plVar33[1];
                      *plVar34 = lVar20;
                      *plVar33 = 0;
                      plVar33[1] = 0;
                      lVar20 = plVar33[2];
                      *(undefined1 *)((long)plVar34 + 0x14) = *(undefined1 *)((long)plVar33 + 0x14);
                      *(int *)(plVar34 + 2) = (int)lVar20;
                      plVar34[4] = 0;
                      plVar34[5] = 0;
                      plVar34[3] = 0;
                      lVar20 = plVar33[3];
                      plVar34[4] = plVar33[4];
                      plVar34[3] = lVar20;
                      plVar34[5] = plVar33[5];
                      plVar33[3] = 0;
                      plVar33[4] = 0;
                      plVar33[5] = 0;
                      plVar33 = plVar34 + 6;
                      plVar34 = (long *)((long)plVar34 + ((long)plStack_170 - (long)plStack_168));
                      func_0x00010aa3fb0c(plStack_170,plStack_168,plVar34);
                      uStack_1a8 = plStack_170;
                      plStack_1a0 = plStack_160;
                      plStack_1b8 = plStack_170;
                      plStack_1b0 = plStack_170;
                      plStack_170 = plVar34;
                      plVar34 = plStack_168;
                      plStack_168 = plVar33;
                      plStack_160 = (long *)(uVar21 + (long)plVar15 * 0x30);
                      func_0x00010aa3fb98(&plStack_1b8);
                      plVar15 = plStack_168;
                      plVar19 = plStack_170;
                      plStack_168 = plVar33;
                    }
                  }
                  if (plVar19 == plVar33) goto LAB_10aa4c250;
                  if (lVar17 == 0x28) {
                    func_0x00010aa3fbe4(plVar33 + -3,plVar30 + 2);
                  }
                  else {
                    uVar27 = 0;
                    plVar34 = plVar30;
                    do {
                      uVar27 = uVar27 + (plVar34[3] - plVar34[2] >> 5);
                      plVar34 = plVar34 + 5;
                    } while (plVar34 != plVar23);
                    lVar20 = plVar33[-3];
                    lVar17 = plVar33[-2];
                    uVar35 = lVar17 - lVar20 >> 5;
                    if (uVar35 < uVar27) {
                      uVar35 = uVar27 - uVar35;
                      if ((ulong)(plVar33[-1] - lVar17 >> 5) < uVar35) {
                        if (uVar27 >> 0x3b != 0) {
                          FUN_10aa3e25c();
                          goto LAB_10aa4c250;
                        }
                        uVar25 = plVar33[-1] - lVar20;
                        uVar21 = (long)uVar25 >> 4;
                        if (uVar21 <= uVar27) {
                          uVar21 = uVar27;
                        }
                        if (0x7fffffffffffffdf < uVar25) {
                          uVar21 = 0x7ffffffffffffff;
                        }
                        FUN_10aa3e270();
                        lVar17 = uVar21 + (lVar17 - lVar20);
                        _bzero(lVar17,uVar35 * 0x20);
                        lVar24 = lVar17 - (plVar33[-2] - plVar33[-3]);
                        _memcpy(lVar24);
                        lVar20 = plVar33[-3];
                        plVar33[-3] = lVar24;
                        plVar33[-2] = lVar17 + uVar35 * 0x20;
                        plVar33[-1] = uVar21 + (long)plVar15 * 0x20;
                        if (lVar20 != 0) {
                          __ZdlPv();
                        }
                      }
                      else {
                        _bzero(lVar17,uVar35 * 0x20);
                        lVar17 = lVar17 + uVar35 * 0x20;
LAB_10aa4be80:
                        plVar33[-2] = lVar17;
                      }
                    }
                    else if (uVar27 < uVar35) {
                      lVar17 = lVar20 + uVar27 * 0x20;
                      goto LAB_10aa4be80;
                    }
                    lVar17 = plVar33[-3];
                    do {
                      lVar20 = plVar30[2];
                      lVar24 = lVar20;
                      if (plVar30[3] - lVar20 != 0) {
                        _memmove(lVar17,lVar20,plVar30[3] - lVar20);
                        lVar20 = plVar30[2];
                        lVar24 = plVar30[3];
                      }
                      lVar17 = lVar17 + (lVar24 - lVar20);
                      plVar30 = plVar30 + 5;
                    } while (plVar30 != plVar23);
                  }
                }
                plVar30 = plVar23;
              } while (plVar23 != plVar29);
              lVar17 = 0;
              if (plStack_168 != plStack_170) {
                lVar17 = LZCOUNT(((long)plStack_168 - (long)plStack_170 >> 4) * -0x5555555555555555)
                         * -2 + 0x7e;
              }
              FUN_10aa3fc34(plStack_170,plStack_168,lVar17,1);
              lVar17 = 0;
              if (plStack_180 != plStack_188) {
                lVar17 = LZCOUNT(((long)plStack_180 - (long)plStack_188 >> 4) * -0x5555555555555555)
                         * -2 + 0x7e;
              }
              plVar23 = plStack_180;
              FUN_10aa3fc34(plStack_188,plStack_180,lVar17,1);
              plVar29 = plStack_168;
              plVar30 = plStack_170;
              if (pplVar2 == &plStack_170) {
                plVar30 = *(long **)(lVar14 + 0x2c8);
              }
              else {
                uVar27 = (long)plStack_168 - (long)plStack_170;
                lVar17 = *(long *)(lVar14 + 0x2d0);
                plVar15 = *(long **)(lVar14 + 0x2c0);
                if ((ulong)(lVar17 - (long)plVar15) < uVar27) {
                  if (plVar15 != (long *)0x0) {
                    plVar34 = *(long **)(lVar14 + 0x2c8);
                    plVar33 = plVar15;
                    if (plVar34 != plVar15) {
                      do {
                        plVar34 = plVar34 + -6;
                        FUN_10aa3c98c(plVar34);
                      } while (plVar34 != plVar15);
                      plVar33 = *pplVar2;
                    }
                    *(long **)(lVar14 + 0x2c8) = plVar15;
                    __ZdlPv(plVar33);
                    lVar17 = 0;
                    *pplVar2 = (long *)0x0;
                    *(undefined8 *)(lVar14 + 0x2c8) = 0;
                    *(undefined8 *)(lVar14 + 0x2d0) = 0;
                  }
                  uVar35 = ((long)uVar27 >> 4) * -0x5555555555555555;
                  if (uVar35 < 0x555555555555556) {
                    uVar21 = (lVar17 >> 4) * 0x5555555555555556;
                    if (uVar21 < uVar35 || uVar21 + ((long)uVar27 >> 4) * 0x5555555555555555 == 0) {
                      uVar21 = uVar35;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar17 >> 4) * -0x5555555555555555)) {
                      uVar21 = 0x555555555555555;
                    }
                    if (uVar21 < 0x555555555555556) {
                      func_0x00010aa3fac8();
                      *(ulong *)(lVar14 + 0x2c0) = uVar21;
                      *(ulong *)(lVar14 + 0x2c8) = uVar21;
                      *(ulong *)(lVar14 + 0x2d0) = uVar21 + (long)plVar23 * 0x30;
                      FUN_10aa4105c(plVar30,plVar29,uVar21);
                      goto LAB_10aa4c03c;
                    }
                  }
                  FUN_10aa3fab4();
                  goto LAB_10aa4c250;
                }
                uVar35 = *(long *)(lVar14 + 0x2c8) - (long)plVar15;
                if (uVar35 < uVar27) {
                  FUN_10aa411a4(plStack_170,(long)plStack_170 + uVar35,plVar15);
                  plVar30 = (long *)((long)plVar30 + uVar35);
                  FUN_10aa4105c(plVar30,plVar29,*(undefined8 *)(lVar14 + 0x2c8));
                }
                else {
                  FUN_10aa411a4(plStack_170,plStack_168,plVar15);
                  plVar29 = *(long **)(lVar14 + 0x2c8);
                  while (plVar29 != plVar30) {
                    plVar29 = plVar29 + -6;
                    FUN_10aa3c98c(plVar29);
                  }
                }
LAB_10aa4c03c:
                *(long **)(lVar14 + 0x2c8) = plVar30;
              }
              plVar29 = plStack_158;
              lVar17 = (long)plStack_150 - (long)plStack_158;
              if (0 < lVar17) {
                if (*(long *)(lVar14 + 0x2d0) - (long)plVar30 < lVar17) {
                  lVar20 = (long)plVar30 - (long)*pplVar2;
                  plVar23 = (long *)((lVar17 >> 4) * -0x5555555555555555 +
                                    (lVar20 >> 4) * -0x5555555555555555);
                  if ((long *)0x555555555555555 < plVar23) {
                    FUN_10aa3fab4();
LAB_10aa4c250:
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10aa4c254);
                    (*pcVar12)();
                  }
                  lVar24 = *(long *)(lVar14 + 0x2d0) - (long)*pplVar2 >> 4;
                  plVar15 = (long *)(lVar24 * 0x5555555555555556);
                  if (plVar15 < plVar23 || (long)plVar15 - (long)plVar23 == 0) {
                    plVar15 = plVar23;
                  }
                  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
                    plVar15 = (long *)0x555555555555555;
                  }
                  pplStack_198 = pplVar2;
                  if (plVar15 == (long *)0x0) {
                    plVar23 = (long *)0x0;
                  }
                  else {
                    plVar23 = plStack_150;
                    func_0x00010aa3fac8();
                  }
                  lVar20 = (long)plVar15 + lVar20;
                  lVar37 = lVar20 + lVar17;
                  lVar24 = lVar20;
                  plStack_1b8 = plVar15;
                  plStack_1b0 = (long *)lVar20;
                  plStack_1a0 = plVar15 + (long)plVar23 * 6;
                  do {
                    FUN_10aa410e0(lVar24,plVar29);
                    lVar24 = lVar24 + 0x30;
                    plVar29 = plVar29 + 6;
                    lVar17 = lVar17 + -0x30;
                  } while (lVar17 != 0);
                  func_0x00010aa3fb0c(plVar30,*(undefined8 *)(lVar14 + 0x2c8),lVar37);
                  lVar17 = *(long *)(lVar14 + 0x2c8);
                  *(long **)(lVar14 + 0x2c8) = plVar30;
                  lVar20 = lVar20 + (*(long *)(lVar14 + 0x2c0) - (long)plVar30);
                  func_0x00010aa3fb0c(*(long *)(lVar14 + 0x2c0),plVar30,lVar20);
                  plStack_1b8 = *(long **)(lVar14 + 0x2c0);
                  *(long *)(lVar14 + 0x2c0) = lVar20;
                  *(long *)(lVar14 + 0x2c8) = lVar37 + (lVar17 - (long)plVar30);
                  plStack_1a0 = *(long **)(lVar14 + 0x2d0);
                  *(long **)(lVar14 + 0x2d0) = plVar15 + (long)plVar23 * 6;
                  plStack_1b0 = plStack_1b8;
                  uStack_1a8 = plStack_1b8;
                  func_0x00010aa3fb98(&plStack_1b8);
                }
                else {
                  FUN_10aa4105c(plStack_158,plStack_150,plVar30);
                  *(long **)(lVar14 + 0x2c8) = plVar29;
                }
              }
              FUN_10aa295e4(lVar14 + 0x2d8,0,&plStack_158);
              FUN_10aa295e4(lVar14 + 0x2d8,1,&plStack_170);
              FUN_10aa295e4(lVar14 + 0x2d8,2,&plStack_188);
              FUN_10aa297fc(lVar14 + 0x2f0);
              FUN_10aa3c924(&plStack_188);
              FUN_10aa3c924(&plStack_170);
              FUN_10aa3c924(&plStack_158);
            }
            plVar26 = plVar26 + 1;
          } while (plVar26 != plVar16);
        }
        return;
      }
      lVar17 = *(long *)(lVar37 + 0x2f8);
      plStack_68 = plVar30;
      FUN_10aa3e2b8();
      lVar17 = uVar27 + (lVar17 - lVar24);
      lVar24 = lVar14 * 0x28;
      lVar14 = *(long *)(lVar37 + 0x2f8);
      lVar20 = lVar17 + (*(long *)(lVar37 + 0x2f0) - lVar14);
      func_0x00010aa3e2fc(*(long *)(lVar37 + 0x2f0),lVar14,lVar20);
      puStack_88 = *(undefined **)(lVar37 + 0x2f0);
      *(long *)(lVar37 + 0x2f0) = lVar20;
      *(long *)(lVar37 + 0x2f8) = lVar17;
      uStack_70 = *(undefined8 *)(lVar37 + 0x300);
      *(ulong *)(lVar37 + 0x300) = uVar27 + lVar24;
      ppuVar13 = &puStack_88;
      puStack_80 = puStack_88;
      puStack_78 = puStack_88;
      func_0x00010aa3e384();
      lVar17 = *(long *)(lVar37 + 0x2c8);
      lVar20 = *(long *)(lVar37 + 0x2c0);
      uVar27 = (lVar17 - lVar20 >> 4) * -0x5555555555555555;
    }
    if (lVar17 != lVar20) {
      uVar35 = 0;
      do {
        uVar21 = (*(long *)(lVar37 + 0x2c8) - *(long *)(lVar37 + 0x2c0) >> 4) * -0x5555555555555555;
        if (uVar21 < uVar35 || uVar21 - uVar35 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10aa4b670);
          (*pcVar12)();
        }
        puVar31 = (undefined8 *)(*(long *)(lVar37 + 0x2c0) + uVar35 * 0x30);
        ppuVar13 = (undefined **)puVar31[1];
        if ((ppuVar13 == (undefined **)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), ppuVar13 == (undefined **)0x0)) {
          uVar36 = 0;
        }
        else {
          uVar36 = *puVar31;
          ppuVar1 = ppuVar13 + 1;
          do {
            puVar22 = *ppuVar1;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar11) {
              *ppuVar1 = puVar22 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (puVar22 == (undefined *)0x0) {
            (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        puVar18 = *(undefined8 **)(lVar37 + 0x2f8);
        if (puVar18 < *(undefined8 **)(lVar37 + 0x300)) {
          uVar5 = *(undefined4 *)(puVar31 + 2);
          *puVar18 = uVar36;
          *(undefined4 *)(puVar18 + 1) = uVar5;
          *(short *)((long)puVar18 + 0xc) = (short)uVar35;
          puVar18[3] = 0;
          puVar18[4] = 0;
          puVar18[2] = 0;
          puVar18 = puVar18 + 5;
        }
        else {
          lVar17 = (long)puVar18 - *plVar30;
          uVar21 = (lVar17 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar21) goto LAB_10aa4b684;
          lVar20 = (long)*(undefined8 **)(lVar37 + 0x300) - *plVar30 >> 3;
          uVar25 = lVar20 * -0x6666666666666666;
          if (uVar25 < uVar21 || uVar25 - uVar21 == 0) {
            uVar25 = uVar21;
          }
          if (0x333333333333332 < (ulong)(lVar20 * -0x3333333333333333)) {
            uVar25 = 0x666666666666666;
          }
          plStack_68 = plVar30;
          FUN_10aa3e2b8();
          puVar4 = (undefined8 *)(uVar25 + lVar17);
          lVar20 = lVar14 * 0x28;
          uVar5 = *(undefined4 *)(puVar31 + 2);
          *puVar4 = uVar36;
          *(undefined4 *)(puVar4 + 1) = uVar5;
          *(short *)((long)puVar4 + 0xc) = (short)uVar35;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[2] = 0;
          puVar18 = puVar4 + 5;
          lVar14 = *(long *)(lVar37 + 0x2f8);
          lVar17 = (long)puVar4 + (*(long *)(lVar37 + 0x2f0) - lVar14);
          func_0x00010aa3e2fc(*(long *)(lVar37 + 0x2f0),lVar14,lVar17);
          puStack_88 = *(undefined **)(lVar37 + 0x2f0);
          *(long *)(lVar37 + 0x2f0) = lVar17;
          *(undefined8 **)(lVar37 + 0x2f8) = puVar18;
          uStack_70 = *(undefined8 *)(lVar37 + 0x300);
          *(ulong *)(lVar37 + 0x300) = uVar25 + lVar20;
          ppuVar13 = &puStack_88;
          puStack_80 = puStack_88;
          puStack_78 = puStack_88;
          func_0x00010aa3e384();
        }
        *(undefined8 **)(lVar37 + 0x2f8) = puVar18;
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar27);
    }
    plVar26 = plVar26 + 1;
  } while( true );
}



/* Entry: 10aa4b688; end: 10aa4c2eb;  */

void FUN_10aa4b688(long param_1)

{
  long **pplVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  float *pfVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long **pplStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long **pplStack_80;
  
  pbVar24 = *(byte **)(param_1 + 0x90);
  lVar26 = *(long *)(pbVar24 + 0x58d0);
  lVar28 = *(long *)(pbVar24 + 0x58d8);
  bVar5 = *pbVar24;
  if (lVar26 != lVar28 || (bVar5 & 2) != 0) {
    fStack_168 = 0.0;
    uStack_164 = 0;
    fStack_170 = 1.0;
    fStack_16c = 0.0;
    uStack_158 = 0;
    uStack_160 = 0x3f80000000000000;
    uStack_148 = 0x3f800000;
    uStack_150 = 0;
    uStack_138 = 0x3f80000000000000;
    uStack_140 = 0;
    if ((bVar5 & 1) == 0) {
      plVar10 = *(long **)(pbVar24 + 0x18);
      __ZNSt3__119__shared_weak_count4lockEv();
      lVar22 = *(long *)(pbVar24 + 0x10);
      plVar12 = plVar10 + 1;
      do {
        lVar15 = *plVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
      lVar22 = *(long *)(lVar22 + 0x178);
      if ((*(byte *)(lVar22 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar22);
      }
      uStack_158 = *(undefined8 *)(lVar22 + 0xd8);
      uStack_160 = *(undefined8 *)(lVar22 + 0xd0);
      fStack_168 = (float)*(undefined8 *)(lVar22 + 200);
      uStack_164 = (undefined4)((ulong)*(undefined8 *)(lVar22 + 200) >> 0x20);
      fStack_170 = (float)*(undefined8 *)(lVar22 + 0xc0);
      fStack_16c = (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20);
      uStack_148 = *(undefined8 *)(lVar22 + 0xe8);
      uStack_150 = *(undefined8 *)(lVar22 + 0xe0);
      uStack_138 = *(undefined8 *)(lVar22 + 0xf8);
      uStack_140 = *(undefined8 *)(lVar22 + 0xf0);
      fVar31 = SQRT(fStack_170 * fStack_170 + fStack_16c * fStack_16c + fStack_168 * fStack_168);
      pfVar20 = &fStack_170;
    }
    else {
      pfVar20 = (float *)0x0;
      fVar31 = 1.0;
    }
    lVar22 = (long)*(int *)(pbVar24 + 0x2e4);
    if (*(int *)(pbVar24 + 0x2e4) != 0) {
      plVar12 = *(long **)(pbVar24 + 0x2f0);
      do {
        lVar15 = *plVar12;
        lVar30 = *(long *)(lVar15 + 0x350);
        lVar29 = *(long *)(lVar15 + 0x358);
        if ((lVar26 != lVar28) && (*(int *)(lVar15 + 0x360) != 0)) {
          uVar3 = *(uint *)(lVar29 + 300);
          if ((*(byte *)(lVar30 + 300) & 1) != 0) {
            FUN_10aa29188(fVar31,lVar15,0,pfVar20);
          }
          if ((uVar3 & 1) != 0) {
            FUN_10aa29188(fVar31,lVar15,1,pfVar20);
          }
        }
        if ((bVar5 >> 1 & 1) != 0) {
          uVar3 = *(uint *)(*(long *)(lVar29 + 0xd0) + 0x18);
          if (((*(byte *)(*(long *)(lVar30 + 0xd0) + 0x18) & 1) != 0) &&
             ((*(byte *)(lVar29 + 0xe8) & 3) == 0)) {
            if ((*(uint *)(lVar29 + 0xf8) & 0xfffffffe) != 4) {
              *(undefined4 *)(lVar29 + 0xf8) = 1;
            }
            *(undefined4 *)(lVar29 + 0xfc) = 0;
          }
          if (((uVar3 & 1) != 0) && ((*(byte *)(lVar30 + 0xe8) & 3) == 0)) {
            if ((*(uint *)(lVar30 + 0xf8) & 0xfffffffe) != 4) {
              *(undefined4 *)(lVar30 + 0xf8) = 1;
            }
            *(undefined4 *)(lVar30 + 0xfc) = 0;
          }
        }
        lVar22 = lVar22 + -1;
        plVar12 = plVar12 + 1;
      } while (lVar22 != 0);
    }
    plVar10 = *(long **)(pbVar24 + 0x58d8);
    for (plVar12 = *(long **)(pbVar24 + 0x58d0); plVar12 != plVar10; plVar12 = plVar12 + 1) {
      lVar26 = *plVar12;
      plVar23 = *(long **)(lVar26 + 0x2f0);
      plVar21 = *(long **)(lVar26 + 0x2f8);
      if (plVar23 != plVar21) {
        FUN_10aa3e3e4(plVar23,plVar21,
                      LZCOUNT(((long)plVar21 - (long)plVar23 >> 3) * -0x3333333333333333) * -2 +
                      0x7e,1);
        plStack_b8 = (long *)0x0;
        plStack_b0 = (long *)0x0;
        plStack_a8 = (long *)0x0;
        plStack_d0 = (long *)0x0;
        plStack_c8 = (long *)0x0;
        plStack_c0 = (long *)0x0;
        plStack_e8 = (long *)0x0;
        plStack_e0 = (long *)0x0;
        pplVar1 = (long **)(lVar26 + 0x2c0);
        plStack_d8 = (long *)0x0;
        do {
          uVar17 = 0x555555555555555;
          plVar11 = (long *)*plVar23;
          uVar6 = *(ushort *)((long)plVar23 + 0xc);
          uVar13 = (ulong)uVar6;
          plVar18 = plVar23 + 5;
          if (uVar6 != 0xffff) {
            plVar23 = plVar18;
          }
          if ((plVar18 == plVar21) || (plVar11 == (long *)0x0)) {
LAB_10aa4b940:
            lVar28 = (long)plVar18 - (long)plVar23;
            if (lVar28 != 0) goto LAB_10aa4b948;
            uVar19 = (*(long *)(lVar26 + 0x2c8) - *(long *)(lVar26 + 0x2c0) >> 4) *
                     -0x5555555555555555;
            if (uVar19 < uVar13 || uVar19 - uVar13 == 0) goto LAB_10aa4c250;
            plVar23 = (long *)(*(long *)(lVar26 + 0x2c0) + (ulong)(uint)uVar6 * 0x30);
            if (plStack_e0 < plStack_d8) {
              lVar28 = *plVar23;
              plStack_e0[1] = plVar23[1];
              *plStack_e0 = lVar28;
              *plVar23 = 0;
              plVar23[1] = 0;
              lVar28 = plVar23[2];
              *(undefined1 *)((long)plStack_e0 + 0x14) = *(undefined1 *)((long)plVar23 + 0x14);
              *(int *)(plStack_e0 + 2) = (int)lVar28;
              plStack_e0[4] = 0;
              plStack_e0[5] = 0;
              plStack_e0[3] = 0;
              lVar28 = plVar23[3];
              plStack_e0[4] = plVar23[4];
              plStack_e0[3] = lVar28;
              plStack_e0[5] = plVar23[5];
              plVar23[3] = 0;
              plVar23[4] = 0;
              plVar23[5] = 0;
              plStack_e0 = plStack_e0 + 6;
            }
            else {
              lVar28 = (long)plStack_e0 - (long)plStack_e8;
              uVar13 = (lVar28 >> 4) * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar13) {
                FUN_10aa3fab4();
                goto LAB_10aa4c250;
              }
              lVar22 = (long)plStack_d8 - (long)plStack_e8 >> 4;
              uVar19 = lVar22 * 0x5555555555555556;
              if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
                uVar19 = uVar13;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar22 * -0x5555555555555555)) {
                uVar19 = uVar17;
              }
              pplStack_f8 = &plStack_e8;
              func_0x00010aa3fac8();
              plVar25 = (long *)(uVar19 + lVar28);
              lVar28 = *plVar23;
              plVar25[1] = plVar23[1];
              *plVar25 = lVar28;
              *plVar23 = 0;
              plVar23[1] = 0;
              lVar28 = plVar23[2];
              *(undefined1 *)((long)plVar25 + 0x14) = *(undefined1 *)((long)plVar23 + 0x14);
              *(int *)(plVar25 + 2) = (int)lVar28;
              plVar25[4] = 0;
              plVar25[5] = 0;
              plVar25[3] = 0;
              lVar28 = plVar23[3];
              plVar25[4] = plVar23[4];
              plVar25[3] = lVar28;
              plVar25[5] = plVar23[5];
              plVar23[3] = 0;
              plVar23[4] = 0;
              plVar23[5] = 0;
              plVar23 = (long *)((long)plVar25 + ((long)plStack_e8 - (long)plStack_e0));
              func_0x00010aa3fb0c(plStack_e8,plStack_e0,plVar23);
              uStack_108 = plStack_e8;
              plStack_100 = plStack_d8;
              plStack_118 = plStack_e8;
              plStack_110 = plStack_e8;
              plStack_e8 = plVar23;
              plStack_e0 = plVar25 + 6;
              plStack_d8 = (long *)(uVar19 + (long)plVar11 * 0x30);
              func_0x00010aa3fb98(&plStack_118);
              plStack_e0 = plVar25 + 6;
            }
          }
          else {
            do {
              if ((long *)*plVar18 != plVar11) goto LAB_10aa4b940;
              plVar18 = plVar18 + 5;
            } while (plVar18 != plVar21);
            lVar28 = (long)plVar21 - (long)plVar23;
LAB_10aa4b948:
            if (uVar6 == 0xffff) {
              iVar4 = *(int *)(lVar26 + 0x2b8);
              *(int *)(lVar26 + 0x2b8) = iVar4 + 1;
              FUN_10aa29550(&plStack_128);
              plVar27 = plStack_120;
              plVar25 = plStack_128;
              plStack_118 = plStack_128;
              plStack_110 = plStack_120;
              if (plStack_120 != (long *)0x0) {
                plVar14 = plStack_120 + 2;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar8) {
                    *plVar14 = *plVar14 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              uStack_108._0_5_ = CONCAT14(3,iVar4);
              pplStack_f8 = (long **)0x0;
              uStack_f0 = 0;
              plStack_100 = (long *)0x0;
              if (plStack_b0 < plStack_a8) {
                *plStack_b0 = (long)plStack_128;
                plStack_b0[1] = (long)plStack_120;
                plStack_118 = (long *)0x0;
                plStack_110 = (long *)0x0;
                *(int *)(plStack_b0 + 2) = iVar4;
                *(undefined1 *)((long)plStack_b0 + 0x14) = 3;
                plStack_b0[4] = 0;
                plStack_b0[5] = 0;
                plVar25 = plStack_b0 + 6;
                plStack_b0[3] = 0;
              }
              else {
                lVar22 = (long)plStack_b0 - (long)plStack_b8;
                uVar13 = (lVar22 >> 4) * -0x5555555555555555 + 1;
                if (0x555555555555555 < uVar13) {
                  FUN_10aa3fab4();
                  goto LAB_10aa4c250;
                }
                lVar15 = (long)plStack_a8 - (long)plStack_b8 >> 4;
                uVar19 = lVar15 * 0x5555555555555556;
                if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
                  uVar19 = uVar13;
                }
                if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                  uVar19 = uVar17;
                }
                pplStack_80 = &plStack_b8;
                func_0x00010aa3fac8();
                plVar14 = (long *)(uVar19 + lVar22);
                *plVar14 = (long)plVar25;
                plVar14[1] = (long)plVar27;
                plStack_118 = (long *)0x0;
                plStack_110 = (long *)0x0;
                *(undefined4 *)(plVar14 + 2) = (undefined4)uStack_108;
                *(undefined1 *)((long)plVar14 + 0x14) = uStack_108._4_1_;
                plVar14[4] = 0;
                plVar14[5] = 0;
                plVar14[3] = 0;
                pplStack_f8 = (long **)0x0;
                uStack_f0 = 0;
                plStack_100 = (long *)0x0;
                plVar25 = plVar14 + 6;
                plVar14 = (long *)((long)plVar14 + ((long)plStack_b8 - (long)plStack_b0));
                func_0x00010aa3fb0c(plStack_b8,plStack_b0,plVar14);
                plStack_a0 = plStack_b8;
                plStack_90 = plStack_b8;
                plStack_88 = plStack_a8;
                plStack_98 = plStack_b8;
                plStack_b8 = plVar14;
                plVar14 = plStack_b0;
                plStack_b0 = plVar25;
                plStack_a8 = (long *)(uVar19 + (long)plVar11 * 0x30);
                func_0x00010aa3fb98(&plStack_a0);
                plVar11 = plStack_b0;
              }
              plVar14 = plStack_b8;
              plStack_b0 = plVar25;
              if (plVar27 != (long *)0x0) {
                plVar2 = plVar27 + 1;
                do {
                  lVar22 = *plVar2;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar22 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar22 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
                  plVar14 = plStack_b8;
                  plVar25 = plStack_b0;
                }
              }
            }
            else {
              uVar19 = (*(long *)(lVar26 + 0x2c8) - *(long *)(lVar26 + 0x2c0) >> 4) *
                       -0x5555555555555555;
              if (uVar19 < uVar13 || uVar19 - uVar13 == 0) goto LAB_10aa4c250;
              plVar25 = (long *)(*(long *)(lVar26 + 0x2c0) + (ulong)(uint)uVar6 * 0x30);
              if (plStack_c8 < plStack_c0) {
                lVar22 = *plVar25;
                plStack_c8[1] = plVar25[1];
                *plStack_c8 = lVar22;
                *plVar25 = 0;
                plVar25[1] = 0;
                lVar22 = plVar25[2];
                *(undefined1 *)((long)plStack_c8 + 0x14) = *(undefined1 *)((long)plVar25 + 0x14);
                *(int *)(plStack_c8 + 2) = (int)lVar22;
                plStack_c8[4] = 0;
                plStack_c8[5] = 0;
                plStack_c8[3] = 0;
                lVar22 = plVar25[3];
                plStack_c8[4] = plVar25[4];
                plStack_c8[3] = lVar22;
                plStack_c8[5] = plVar25[5];
                plVar25[3] = 0;
                plVar25[4] = 0;
                plVar25[5] = 0;
                plVar25 = plStack_c8 + 6;
                plVar14 = plStack_d0;
                plStack_c8 = plVar25;
              }
              else {
                lVar22 = (long)plStack_c8 - (long)plStack_d0;
                uVar13 = (lVar22 >> 4) * -0x5555555555555555 + 1;
                if (0x555555555555555 < uVar13) {
                  FUN_10aa3fab4();
                  goto LAB_10aa4c250;
                }
                lVar15 = (long)plStack_c0 - (long)plStack_d0 >> 4;
                uVar19 = lVar15 * 0x5555555555555556;
                if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
                  uVar19 = uVar13;
                }
                if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                  uVar19 = uVar17;
                }
                pplStack_f8 = &plStack_d0;
                func_0x00010aa3fac8();
                plVar27 = (long *)(uVar19 + lVar22);
                lVar22 = *plVar25;
                plVar27[1] = plVar25[1];
                *plVar27 = lVar22;
                *plVar25 = 0;
                plVar25[1] = 0;
                lVar22 = plVar25[2];
                *(undefined1 *)((long)plVar27 + 0x14) = *(undefined1 *)((long)plVar25 + 0x14);
                *(int *)(plVar27 + 2) = (int)lVar22;
                plVar27[4] = 0;
                plVar27[5] = 0;
                plVar27[3] = 0;
                lVar22 = plVar25[3];
                plVar27[4] = plVar25[4];
                plVar27[3] = lVar22;
                plVar27[5] = plVar25[5];
                plVar25[3] = 0;
                plVar25[4] = 0;
                plVar25[5] = 0;
                plVar25 = plVar27 + 6;
                plVar27 = (long *)((long)plVar27 + ((long)plStack_d0 - (long)plStack_c8));
                func_0x00010aa3fb0c(plStack_d0,plStack_c8,plVar27);
                uStack_108 = plStack_d0;
                plStack_100 = plStack_c0;
                plStack_118 = plStack_d0;
                plStack_110 = plStack_d0;
                plStack_d0 = plVar27;
                plVar27 = plStack_c8;
                plStack_c8 = plVar25;
                plStack_c0 = (long *)(uVar19 + (long)plVar11 * 0x30);
                func_0x00010aa3fb98(&plStack_118);
                plVar11 = plStack_c8;
                plVar14 = plStack_d0;
                plStack_c8 = plVar25;
              }
            }
            if (plVar14 == plVar25) goto LAB_10aa4c250;
            if (lVar28 == 0x28) {
              func_0x00010aa3fbe4(plVar25 + -3,plVar23 + 2);
            }
            else {
              uVar13 = 0;
              plVar27 = plVar23;
              do {
                uVar13 = uVar13 + (plVar27[3] - plVar27[2] >> 5);
                plVar27 = plVar27 + 5;
              } while (plVar27 != plVar18);
              lVar22 = plVar25[-3];
              lVar28 = plVar25[-2];
              uVar17 = lVar28 - lVar22 >> 5;
              if (uVar17 < uVar13) {
                uVar17 = uVar13 - uVar17;
                if ((ulong)(plVar25[-1] - lVar28 >> 5) < uVar17) {
                  if (uVar13 >> 0x3b != 0) {
                    FUN_10aa3e25c();
                    goto LAB_10aa4c250;
                  }
                  uVar16 = plVar25[-1] - lVar22;
                  uVar19 = (long)uVar16 >> 4;
                  if (uVar19 <= uVar13) {
                    uVar19 = uVar13;
                  }
                  if (0x7fffffffffffffdf < uVar16) {
                    uVar19 = 0x7ffffffffffffff;
                  }
                  FUN_10aa3e270();
                  lVar28 = uVar19 + (lVar28 - lVar22);
                  _bzero(lVar28,uVar17 * 0x20);
                  lVar15 = lVar28 - (plVar25[-2] - plVar25[-3]);
                  _memcpy(lVar15);
                  lVar22 = plVar25[-3];
                  plVar25[-3] = lVar15;
                  plVar25[-2] = lVar28 + uVar17 * 0x20;
                  plVar25[-1] = uVar19 + (long)plVar11 * 0x20;
                  if (lVar22 != 0) {
                    __ZdlPv();
                  }
                }
                else {
                  _bzero(lVar28,uVar17 * 0x20);
                  lVar28 = lVar28 + uVar17 * 0x20;
LAB_10aa4be80:
                  plVar25[-2] = lVar28;
                }
              }
              else if (uVar13 < uVar17) {
                lVar28 = lVar22 + uVar13 * 0x20;
                goto LAB_10aa4be80;
              }
              lVar28 = plVar25[-3];
              do {
                lVar22 = plVar23[2];
                lVar15 = lVar22;
                if (plVar23[3] - lVar22 != 0) {
                  _memmove(lVar28,lVar22,plVar23[3] - lVar22);
                  lVar22 = plVar23[2];
                  lVar15 = plVar23[3];
                }
                lVar28 = lVar28 + (lVar15 - lVar22);
                plVar23 = plVar23 + 5;
              } while (plVar23 != plVar18);
            }
          }
          plVar23 = plVar18;
        } while (plVar18 != plVar21);
        lVar28 = 0;
        if (plStack_c8 != plStack_d0) {
          lVar28 = LZCOUNT(((long)plStack_c8 - (long)plStack_d0 >> 4) * -0x5555555555555555) * -2 +
                   0x7e;
        }
        FUN_10aa3fc34(plStack_d0,plStack_c8,lVar28,1);
        lVar28 = 0;
        if (plStack_e0 != plStack_e8) {
          lVar28 = LZCOUNT(((long)plStack_e0 - (long)plStack_e8 >> 4) * -0x5555555555555555) * -2 +
                   0x7e;
        }
        plVar18 = plStack_e0;
        FUN_10aa3fc34(plStack_e8,plStack_e0,lVar28,1);
        plVar21 = plStack_c8;
        plVar23 = plStack_d0;
        if (pplVar1 == &plStack_d0) {
          plVar23 = *(long **)(lVar26 + 0x2c8);
        }
        else {
          uVar13 = (long)plStack_c8 - (long)plStack_d0;
          lVar28 = *(long *)(lVar26 + 0x2d0);
          plVar11 = *(long **)(lVar26 + 0x2c0);
          if ((ulong)(lVar28 - (long)plVar11) < uVar13) {
            if (plVar11 != (long *)0x0) {
              plVar27 = *(long **)(lVar26 + 0x2c8);
              plVar25 = plVar11;
              if (plVar27 != plVar11) {
                do {
                  plVar27 = plVar27 + -6;
                  FUN_10aa3c98c(plVar27);
                } while (plVar27 != plVar11);
                plVar25 = *pplVar1;
              }
              *(long **)(lVar26 + 0x2c8) = plVar11;
              __ZdlPv(plVar25);
              lVar28 = 0;
              *pplVar1 = (long *)0x0;
              *(undefined8 *)(lVar26 + 0x2c8) = 0;
              *(undefined8 *)(lVar26 + 0x2d0) = 0;
            }
            uVar17 = ((long)uVar13 >> 4) * -0x5555555555555555;
            if (uVar17 < 0x555555555555556) {
              uVar19 = (lVar28 >> 4) * 0x5555555555555556;
              if (uVar19 < uVar17 || uVar19 + ((long)uVar13 >> 4) * 0x5555555555555555 == 0) {
                uVar19 = uVar17;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar28 >> 4) * -0x5555555555555555)) {
                uVar19 = 0x555555555555555;
              }
              if (uVar19 < 0x555555555555556) {
                func_0x00010aa3fac8();
                *(ulong *)(lVar26 + 0x2c0) = uVar19;
                *(ulong *)(lVar26 + 0x2c8) = uVar19;
                *(ulong *)(lVar26 + 0x2d0) = uVar19 + (long)plVar18 * 0x30;
                FUN_10aa4105c(plVar23,plVar21,uVar19);
                goto LAB_10aa4c03c;
              }
            }
            FUN_10aa3fab4();
            goto LAB_10aa4c250;
          }
          uVar17 = *(long *)(lVar26 + 0x2c8) - (long)plVar11;
          if (uVar17 < uVar13) {
            FUN_10aa411a4(plStack_d0,(long)plStack_d0 + uVar17,plVar11);
            plVar23 = (long *)((long)plVar23 + uVar17);
            FUN_10aa4105c(plVar23,plVar21,*(undefined8 *)(lVar26 + 0x2c8));
          }
          else {
            FUN_10aa411a4(plStack_d0,plStack_c8,plVar11);
            plVar21 = *(long **)(lVar26 + 0x2c8);
            while (plVar21 != plVar23) {
              plVar21 = plVar21 + -6;
              FUN_10aa3c98c(plVar21);
            }
          }
LAB_10aa4c03c:
          *(long **)(lVar26 + 0x2c8) = plVar23;
        }
        plVar21 = plStack_b8;
        lVar28 = (long)plStack_b0 - (long)plStack_b8;
        if (0 < lVar28) {
          if (*(long *)(lVar26 + 0x2d0) - (long)plVar23 < lVar28) {
            lVar22 = (long)plVar23 - (long)*pplVar1;
            plVar18 = (long *)((lVar28 >> 4) * -0x5555555555555555 +
                              (lVar22 >> 4) * -0x5555555555555555);
            if ((long *)0x555555555555555 < plVar18) {
              FUN_10aa3fab4();
LAB_10aa4c250:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa4c254);
              (*pcVar9)();
            }
            lVar15 = *(long *)(lVar26 + 0x2d0) - (long)*pplVar1 >> 4;
            plVar11 = (long *)(lVar15 * 0x5555555555555556);
            if (plVar11 < plVar18 || (long)plVar11 - (long)plVar18 == 0) {
              plVar11 = plVar18;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              plVar11 = (long *)0x555555555555555;
            }
            pplStack_f8 = pplVar1;
            if (plVar11 == (long *)0x0) {
              plVar18 = (long *)0x0;
            }
            else {
              plVar18 = plStack_b0;
              func_0x00010aa3fac8();
            }
            lVar22 = (long)plVar11 + lVar22;
            lVar29 = lVar22 + lVar28;
            lVar15 = lVar22;
            plStack_118 = plVar11;
            plStack_110 = (long *)lVar22;
            plStack_100 = plVar11 + (long)plVar18 * 6;
            do {
              FUN_10aa410e0(lVar15,plVar21);
              lVar15 = lVar15 + 0x30;
              plVar21 = plVar21 + 6;
              lVar28 = lVar28 + -0x30;
            } while (lVar28 != 0);
            func_0x00010aa3fb0c(plVar23,*(undefined8 *)(lVar26 + 0x2c8),lVar29);
            lVar28 = *(long *)(lVar26 + 0x2c8);
            *(long **)(lVar26 + 0x2c8) = plVar23;
            lVar22 = lVar22 + (*(long *)(lVar26 + 0x2c0) - (long)plVar23);
            func_0x00010aa3fb0c(*(long *)(lVar26 + 0x2c0),plVar23,lVar22);
            plStack_118 = *(long **)(lVar26 + 0x2c0);
            *(long *)(lVar26 + 0x2c0) = lVar22;
            *(long *)(lVar26 + 0x2c8) = lVar29 + (lVar28 - (long)plVar23);
            plStack_100 = *(long **)(lVar26 + 0x2d0);
            *(long **)(lVar26 + 0x2d0) = plVar11 + (long)plVar18 * 6;
            plStack_110 = plStack_118;
            uStack_108 = plStack_118;
            func_0x00010aa3fb98(&plStack_118);
          }
          else {
            FUN_10aa4105c(plStack_b8,plStack_b0,plVar23);
            *(long **)(lVar26 + 0x2c8) = plVar21;
          }
        }
        FUN_10aa295e4(lVar26 + 0x2d8,0,&plStack_b8);
        FUN_10aa295e4(lVar26 + 0x2d8,1,&plStack_d0);
        FUN_10aa295e4(lVar26 + 0x2d8,2,&plStack_e8);
        FUN_10aa297fc(lVar26 + 0x2f0);
        FUN_10aa3c924(&plStack_e8);
        FUN_10aa3c924(&plStack_d0);
        FUN_10aa3c924(&plStack_b8);
      }
    }
  }
  return;
}



/* Entry: 10aa4c2ec; end: 10aa4c2ff;  */

void FUN_10aa4c2ec(undefined8 param_1,long *param_2,ulong param_3,long *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar6 >> 0x3d == 0) {
    __Znwm((long)plVar6 << 3);
    return;
  }
  func_0x000109ffded8();
  if (1 < param_3) {
    if (param_3 == 2) {
      lVar10 = *plVar6;
      if (*(int *)(param_2[-1] + 8) < *(int *)(lVar10 + 8)) {
        *plVar6 = param_2[-1];
        param_2[-1] = lVar10;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((plVar6 != param_2) && (plVar6 + 1 != param_2)) {
        lVar10 = 0;
        plVar7 = plVar6;
        plVar9 = plVar6 + 1;
        do {
          lVar20 = *plVar7;
          lVar15 = *plVar9;
          iVar1 = *(int *)(lVar15 + 8);
          lVar25 = lVar10;
          if (iVar1 < *(int *)(lVar20 + 8)) {
            do {
              lVar8 = lVar25;
              *(long *)((long)plVar6 + lVar8 + 8) = lVar20;
              plVar7 = plVar6;
              if (lVar8 == 0) goto LAB_10aa4c414;
              lVar20 = *(long *)((long)plVar6 + lVar8 + -8);
              lVar25 = lVar8 + -8;
            } while (iVar1 < *(int *)(lVar20 + 8));
            plVar7 = (long *)((long)plVar6 + lVar8);
LAB_10aa4c414:
            *plVar7 = lVar15;
          }
          plVar11 = plVar9 + 1;
          lVar10 = lVar10 + 8;
          plVar7 = plVar9;
          plVar9 = plVar11;
        } while (plVar11 != param_2);
      }
    }
    else {
      uVar24 = param_3 >> 1;
      plVar7 = plVar6 + uVar24;
      lVar10 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_10aa4c334();
        FUN_10aa4c334(plVar7,param_2,lVar10,param_4,param_5);
        do {
          if (lVar10 == 0) {
            return;
          }
          if (((long)uVar24 <= param_5) || (lVar10 <= param_5)) {
            if ((long)uVar24 <= lVar10) {
              if (plVar7 == plVar6) {
                return;
              }
              lVar10 = -(long)param_4;
              plVar9 = param_4;
              plVar11 = plVar6;
              do {
                plVar22 = plVar11 + 1;
                plVar23 = plVar9 + 1;
                *plVar9 = *plVar11;
                lVar10 = lVar10 + -8;
                plVar9 = plVar23;
                plVar11 = plVar22;
              } while (plVar22 != plVar7);
              do {
                if (plVar7 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(plVar6,param_4,-((long)param_4 + lVar10));
                  return;
                }
                iVar1 = *(int *)(*plVar7 + 8);
                iVar2 = *(int *)(*param_4 + 8);
                lVar25 = *plVar7;
                if (iVar2 <= iVar1) {
                  lVar25 = *param_4;
                }
                lVar15 = 8;
                if (iVar2 <= iVar1) {
                  lVar15 = 0;
                }
                plVar7 = (long *)((long)plVar7 + lVar15);
                lVar15 = 0;
                if (iVar2 <= iVar1) {
                  lVar15 = 8;
                }
                param_4 = (long *)((long)param_4 + lVar15);
                *plVar6 = lVar25;
                plVar6 = plVar6 + 1;
              } while (plVar23 != param_4);
              return;
            }
            if (plVar7 != param_2) {
              lVar10 = 0;
              do {
                *(undefined8 *)((long)param_4 + lVar10) = *(undefined8 *)((long)plVar7 + lVar10);
                lVar10 = lVar10 + 8;
              } while ((long *)((long)plVar7 + lVar10) != param_2);
              plVar9 = (long *)((long)param_4 + lVar10);
              do {
                if (plVar7 == plVar6) {
                  if (plVar9 == param_4) {
                    return;
                  }
                  lVar10 = -8;
                  do {
                    plVar9 = plVar9 + -1;
                    *(long *)((long)param_2 + lVar10) = *plVar9;
                    lVar10 = lVar10 + -8;
                  } while (plVar9 != param_4);
                  return;
                }
                lVar25 = plVar9[-1];
                lVar10 = plVar7[-1];
                plVar11 = plVar7 + -1;
                if (*(int *)(lVar10 + 8) <= *(int *)(lVar25 + 8)) {
                  plVar9 = plVar9 + -1;
                  plVar11 = plVar7;
                  lVar10 = lVar25;
                }
                plVar7 = plVar11;
                param_2 = param_2 + -1;
                *param_2 = lVar10;
              } while (plVar9 != param_4);
              return;
            }
            return;
          }
          if (uVar24 == 0) {
            return;
          }
          lVar25 = 0;
          lVar15 = -uVar24;
          while (lVar20 = *(long *)((long)plVar6 + lVar25),
                *(int *)(lVar20 + 8) <= *(int *)(*plVar7 + 8)) {
            lVar25 = lVar25 + 8;
            bVar5 = lVar15 == -1;
            lVar15 = lVar15 + 1;
            if (bVar5) {
              return;
            }
          }
          if (-lVar15 < lVar10) {
            lVar20 = lVar10 / 2;
            plVar9 = plVar7 + lVar20;
            puVar3 = (undefined *)((long)plVar7 + (-lVar25 - (long)plVar6));
            plVar11 = plVar7;
            if (puVar3 != (undefined *)0x0) {
              uVar24 = (long)puVar3 >> 3;
              plVar11 = (long *)((long)plVar6 + lVar25);
              do {
                uVar16 = uVar24 >> 1;
                uVar12 = uVar24 + (uVar24 >> 1 ^ 0xffffffffffffffff);
                uVar24 = uVar16;
                if (*(int *)(plVar11[uVar16] + 8) <= *(int *)(*plVar9 + 8)) {
                  uVar24 = uVar12;
                  plVar11 = plVar11 + uVar16 + 1;
                }
              } while (uVar24 != 0);
            }
            uVar24 = (long)((long)plVar11 + (-lVar25 - (long)plVar6)) >> 3;
          }
          else {
            if (lVar15 == -1) {
              *(long *)((long)plVar6 + lVar25) = *plVar7;
              *plVar7 = lVar20;
              return;
            }
            uVar24 = -lVar15 / 2;
            plVar9 = plVar7;
            if (plVar7 != param_2) {
              uVar12 = (long)param_2 - (long)plVar7 >> 3;
              plVar11 = plVar7;
              do {
                uVar16 = uVar12 >> 1;
                plVar9 = plVar11 + uVar16 + 1;
                uVar12 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
                if (*(int *)(*(long *)((long)plVar6 + lVar25 + uVar24 * 8) + 8) <=
                    *(int *)(plVar11[uVar16] + 8)) {
                  plVar9 = plVar11;
                  uVar12 = uVar16;
                }
                plVar11 = plVar9;
              } while (uVar12 != 0);
            }
            lVar20 = (long)plVar9 - (long)plVar7 >> 3;
            plVar11 = (long *)((long)plVar6 + lVar25 + uVar24 * 8);
          }
          lVar8 = (long)plVar7 - (long)plVar11;
          plVar23 = plVar9;
          if ((lVar8 != 0) && (lVar4 = (long)plVar9 - (long)plVar7, plVar23 = plVar11, lVar4 != 0))
          {
            if (plVar11 + 1 == plVar7) {
              lVar8 = *plVar11;
              _memmove(plVar11,plVar7,lVar4);
              *(long *)((long)plVar11 + lVar4) = lVar8;
              plVar23 = (long *)((long)plVar11 + lVar4);
            }
            else if (plVar7 + 1 == plVar9) {
              plVar7 = plVar9 + -1;
              lVar8 = *plVar7;
              plVar23 = (long *)((long)plVar9 - ((long)plVar7 - (long)plVar11));
              if ((long)plVar7 - (long)plVar11 != 0) {
                _memmove(plVar23,plVar11,(long)plVar7 - (long)plVar11);
              }
              *plVar11 = lVar8;
            }
            else {
              lVar13 = lVar8 >> 3;
              lVar18 = lVar4 >> 3;
              lVar19 = lVar13;
              plVar22 = plVar11;
              plVar21 = plVar7;
              if (lVar13 == lVar4 >> 3) {
                do {
                  plVar14 = plVar21 + 1;
                  lVar8 = *plVar22;
                  *plVar22 = *plVar21;
                  *plVar21 = lVar8;
                  plVar23 = plVar7;
                  if (plVar22 + 1 == plVar7) break;
                  plVar22 = plVar22 + 1;
                  plVar21 = plVar14;
                } while (plVar14 != plVar9);
              }
              else {
                do {
                  lVar17 = lVar18;
                  lVar18 = 0;
                  if (lVar17 != 0) {
                    lVar18 = lVar19 / lVar17;
                  }
                  lVar18 = lVar19 - lVar18 * lVar17;
                  lVar19 = lVar17;
                } while (lVar18 != 0);
                plVar7 = plVar11 + lVar17;
                do {
                  plVar7 = plVar7 + -1;
                  lVar18 = *plVar7;
                  plVar23 = (long *)(lVar8 + (long)plVar7);
                  plVar22 = plVar7;
                  do {
                    plVar21 = plVar23;
                    *plVar22 = *plVar21;
                    lVar19 = (long)plVar9 - (long)plVar21 >> 3;
                    plVar23 = (long *)((long)plVar21 + lVar8);
                    if (lVar19 <= lVar13) {
                      plVar23 = plVar11 + (lVar13 - lVar19);
                    }
                    plVar22 = plVar21;
                  } while (plVar23 != plVar7);
                  *plVar21 = lVar18;
                } while (plVar7 != plVar11);
                plVar23 = (long *)(lVar4 + (long)plVar11);
              }
            }
          }
          if ((long)(uVar24 + lVar20) < (long)((lVar10 - (uVar24 + lVar20)) - lVar15)) {
            FUN_10aa4c700((undefined *)((long)plVar6 + lVar25),plVar11,plVar23);
            uVar24 = -(uVar24 + lVar15);
            plVar7 = plVar9;
            lVar10 = lVar10 - lVar20;
            plVar6 = plVar23;
          }
          else {
            FUN_10aa4c700(plVar23,plVar9,param_2,-(uVar24 + lVar15),lVar10 - lVar20);
            plVar7 = plVar11;
            lVar10 = lVar20;
            plVar6 = (long *)((long)plVar6 + lVar25);
            param_2 = plVar23;
          }
        } while( true );
      }
      FUN_10aa4c538(plVar6,plVar7,uVar24);
      plVar9 = param_4 + uVar24;
      FUN_10aa4c538(plVar7,param_2,lVar10,plVar9);
      plVar7 = param_4 + param_3;
      plVar11 = plVar9;
      do {
        if (plVar11 == plVar7) {
          for (; param_4 != plVar9; param_4 = param_4 + 1) {
            *plVar6 = *param_4;
            plVar6 = plVar6 + 1;
          }
          return;
        }
        iVar1 = *(int *)(*plVar11 + 8);
        iVar2 = *(int *)(*param_4 + 8);
        lVar10 = *plVar11;
        if (iVar2 <= iVar1) {
          lVar10 = *param_4;
        }
        lVar25 = 0;
        if (iVar2 <= iVar1) {
          lVar25 = 8;
        }
        param_4 = (long *)((long)param_4 + lVar25);
        lVar25 = 8;
        if (iVar2 <= iVar1) {
          lVar25 = 0;
        }
        plVar11 = (long *)((long)plVar11 + lVar25);
        plVar23 = plVar6 + 1;
        *plVar6 = lVar10;
        plVar6 = plVar23;
      } while (param_4 != plVar9);
      for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        *plVar23 = *plVar11;
        plVar23 = plVar23 + 1;
      }
    }
  }
  return;
}



/* Entry: 10aa4c300; end: 10aa4c333;  */

void FUN_10aa4c300(long *param_1,long *param_2,ulong param_3,long *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  if (1 < param_3) {
    if (param_3 == 2) {
      lVar8 = *param_1;
      if (*(int *)(param_2[-1] + 8) < *(int *)(lVar8 + 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar8;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar8 = 0;
        plVar5 = param_1;
        plVar7 = param_1 + 1;
        do {
          lVar18 = *plVar5;
          lVar13 = *plVar7;
          iVar1 = *(int *)(lVar13 + 8);
          lVar23 = lVar8;
          if (iVar1 < *(int *)(lVar18 + 8)) {
            do {
              lVar6 = lVar23;
              *(long *)((long)param_1 + lVar6 + 8) = lVar18;
              plVar5 = param_1;
              if (lVar6 == 0) goto LAB_10aa4c414;
              lVar18 = *(long *)((long)param_1 + lVar6 + -8);
              lVar23 = lVar6 + -8;
            } while (iVar1 < *(int *)(lVar18 + 8));
            plVar5 = (long *)((long)param_1 + lVar6);
LAB_10aa4c414:
            *plVar5 = lVar13;
          }
          plVar9 = plVar7 + 1;
          lVar8 = lVar8 + 8;
          plVar5 = plVar7;
          plVar7 = plVar9;
        } while (plVar9 != param_2);
      }
    }
    else {
      uVar22 = param_3 >> 1;
      plVar5 = param_1 + uVar22;
      lVar8 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_10aa4c334();
        FUN_10aa4c334(plVar5,param_2,lVar8,param_4,param_5);
        do {
          if (lVar8 == 0) {
            return;
          }
          if (((long)uVar22 <= param_5) || (lVar8 <= param_5)) {
            if ((long)uVar22 <= lVar8) {
              if (plVar5 == param_1) {
                return;
              }
              lVar8 = -(long)param_4;
              plVar7 = param_4;
              plVar9 = param_1;
              do {
                plVar20 = plVar9 + 1;
                plVar21 = plVar7 + 1;
                *plVar7 = *plVar9;
                lVar8 = lVar8 + -8;
                plVar7 = plVar21;
                plVar9 = plVar20;
              } while (plVar20 != plVar5);
              do {
                if (plVar5 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(param_1,param_4,-((long)param_4 + lVar8));
                  return;
                }
                iVar1 = *(int *)(*plVar5 + 8);
                iVar2 = *(int *)(*param_4 + 8);
                lVar23 = *plVar5;
                if (iVar2 <= iVar1) {
                  lVar23 = *param_4;
                }
                lVar13 = 8;
                if (iVar2 <= iVar1) {
                  lVar13 = 0;
                }
                plVar5 = (long *)((long)plVar5 + lVar13);
                lVar13 = 0;
                if (iVar2 <= iVar1) {
                  lVar13 = 8;
                }
                param_4 = (long *)((long)param_4 + lVar13);
                *param_1 = lVar23;
                param_1 = param_1 + 1;
              } while (plVar21 != param_4);
              return;
            }
            if (plVar5 != param_2) {
              lVar8 = 0;
              do {
                *(undefined8 *)((long)param_4 + lVar8) = *(undefined8 *)((long)plVar5 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((long *)((long)plVar5 + lVar8) != param_2);
              plVar7 = (long *)((long)param_4 + lVar8);
              do {
                if (plVar5 == param_1) {
                  if (plVar7 == param_4) {
                    return;
                  }
                  lVar8 = -8;
                  do {
                    plVar7 = plVar7 + -1;
                    *(long *)((long)param_2 + lVar8) = *plVar7;
                    lVar8 = lVar8 + -8;
                  } while (plVar7 != param_4);
                  return;
                }
                lVar23 = plVar7[-1];
                lVar8 = plVar5[-1];
                plVar9 = plVar5 + -1;
                if (*(int *)(lVar8 + 8) <= *(int *)(lVar23 + 8)) {
                  plVar7 = plVar7 + -1;
                  plVar9 = plVar5;
                  lVar8 = lVar23;
                }
                plVar5 = plVar9;
                param_2 = param_2 + -1;
                *param_2 = lVar8;
              } while (plVar7 != param_4);
              return;
            }
            return;
          }
          if (uVar22 == 0) {
            return;
          }
          lVar23 = 0;
          lVar13 = -uVar22;
          while (lVar18 = *(long *)((long)param_1 + lVar23),
                *(int *)(lVar18 + 8) <= *(int *)(*plVar5 + 8)) {
            lVar23 = lVar23 + 8;
            bVar4 = lVar13 == -1;
            lVar13 = lVar13 + 1;
            if (bVar4) {
              return;
            }
          }
          if (-lVar13 < lVar8) {
            lVar18 = lVar8 / 2;
            plVar7 = plVar5 + lVar18;
            lVar6 = (long)plVar5 + (-lVar23 - (long)param_1);
            plVar9 = plVar5;
            if (lVar6 != 0) {
              uVar22 = lVar6 >> 3;
              plVar9 = (long *)((long)param_1 + lVar23);
              do {
                uVar14 = uVar22 >> 1;
                uVar10 = uVar22 + (uVar22 >> 1 ^ 0xffffffffffffffff);
                uVar22 = uVar14;
                if (*(int *)(plVar9[uVar14] + 8) <= *(int *)(*plVar7 + 8)) {
                  uVar22 = uVar10;
                  plVar9 = plVar9 + uVar14 + 1;
                }
              } while (uVar22 != 0);
            }
            uVar22 = (long)plVar9 + (-lVar23 - (long)param_1) >> 3;
          }
          else {
            if (lVar13 == -1) {
              *(long *)((long)param_1 + lVar23) = *plVar5;
              *plVar5 = lVar18;
              return;
            }
            uVar22 = -lVar13 / 2;
            plVar7 = plVar5;
            if (plVar5 != param_2) {
              uVar10 = (long)param_2 - (long)plVar5 >> 3;
              plVar9 = plVar5;
              do {
                uVar14 = uVar10 >> 1;
                plVar7 = plVar9 + uVar14 + 1;
                uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
                if (*(int *)(*(long *)((long)param_1 + lVar23 + uVar22 * 8) + 8) <=
                    *(int *)(plVar9[uVar14] + 8)) {
                  plVar7 = plVar9;
                  uVar10 = uVar14;
                }
                plVar9 = plVar7;
              } while (uVar10 != 0);
            }
            lVar18 = (long)plVar7 - (long)plVar5 >> 3;
            plVar9 = (long *)((long)param_1 + lVar23 + uVar22 * 8);
          }
          lVar6 = (long)plVar5 - (long)plVar9;
          plVar21 = plVar7;
          if ((lVar6 != 0) && (lVar3 = (long)plVar7 - (long)plVar5, plVar21 = plVar9, lVar3 != 0)) {
            if (plVar9 + 1 == plVar5) {
              lVar6 = *plVar9;
              _memmove(plVar9,plVar5,lVar3);
              *(long *)((long)plVar9 + lVar3) = lVar6;
              plVar21 = (long *)((long)plVar9 + lVar3);
            }
            else if (plVar5 + 1 == plVar7) {
              plVar5 = plVar7 + -1;
              lVar6 = *plVar5;
              plVar21 = (long *)((long)plVar7 - ((long)plVar5 - (long)plVar9));
              if ((long)plVar5 - (long)plVar9 != 0) {
                _memmove(plVar21,plVar9,(long)plVar5 - (long)plVar9);
              }
              *plVar9 = lVar6;
            }
            else {
              lVar11 = lVar6 >> 3;
              lVar16 = lVar3 >> 3;
              lVar17 = lVar11;
              plVar20 = plVar9;
              plVar19 = plVar5;
              if (lVar11 == lVar3 >> 3) {
                do {
                  plVar12 = plVar19 + 1;
                  lVar6 = *plVar20;
                  *plVar20 = *plVar19;
                  *plVar19 = lVar6;
                  plVar21 = plVar5;
                  if (plVar20 + 1 == plVar5) break;
                  plVar20 = plVar20 + 1;
                  plVar19 = plVar12;
                } while (plVar12 != plVar7);
              }
              else {
                do {
                  lVar15 = lVar16;
                  lVar16 = 0;
                  if (lVar15 != 0) {
                    lVar16 = lVar17 / lVar15;
                  }
                  lVar16 = lVar17 - lVar16 * lVar15;
                  lVar17 = lVar15;
                } while (lVar16 != 0);
                plVar5 = plVar9 + lVar15;
                do {
                  plVar5 = plVar5 + -1;
                  lVar16 = *plVar5;
                  plVar21 = (long *)(lVar6 + (long)plVar5);
                  plVar20 = plVar5;
                  do {
                    plVar19 = plVar21;
                    *plVar20 = *plVar19;
                    lVar17 = (long)plVar7 - (long)plVar19 >> 3;
                    plVar21 = (long *)((long)plVar19 + lVar6);
                    if (lVar17 <= lVar11) {
                      plVar21 = plVar9 + (lVar11 - lVar17);
                    }
                    plVar20 = plVar19;
                  } while (plVar21 != plVar5);
                  *plVar19 = lVar16;
                } while (plVar5 != plVar9);
                plVar21 = (long *)(lVar3 + (long)plVar9);
              }
            }
          }
          if ((long)(uVar22 + lVar18) < (long)((lVar8 - (uVar22 + lVar18)) - lVar13)) {
            FUN_10aa4c700((long)param_1 + lVar23,plVar9,plVar21);
            uVar22 = -(uVar22 + lVar13);
            plVar5 = plVar7;
            lVar8 = lVar8 - lVar18;
            param_1 = plVar21;
          }
          else {
            FUN_10aa4c700(plVar21,plVar7,param_2,-(uVar22 + lVar13),lVar8 - lVar18);
            plVar5 = plVar9;
            lVar8 = lVar18;
            param_1 = (long *)((long)param_1 + lVar23);
            param_2 = plVar21;
          }
        } while( true );
      }
      FUN_10aa4c538(param_1,plVar5,uVar22);
      plVar7 = param_4 + uVar22;
      FUN_10aa4c538(plVar5,param_2,lVar8,plVar7);
      plVar5 = param_4 + param_3;
      plVar9 = plVar7;
      do {
        if (plVar9 == plVar5) {
          for (; param_4 != plVar7; param_4 = param_4 + 1) {
            *param_1 = *param_4;
            param_1 = param_1 + 1;
          }
          return;
        }
        iVar1 = *(int *)(*plVar9 + 8);
        iVar2 = *(int *)(*param_4 + 8);
        lVar8 = *plVar9;
        if (iVar2 <= iVar1) {
          lVar8 = *param_4;
        }
        lVar23 = 0;
        if (iVar2 <= iVar1) {
          lVar23 = 8;
        }
        param_4 = (long *)((long)param_4 + lVar23);
        lVar23 = 8;
        if (iVar2 <= iVar1) {
          lVar23 = 0;
        }
        plVar9 = (long *)((long)plVar9 + lVar23);
        plVar21 = param_1 + 1;
        *param_1 = lVar8;
        param_1 = plVar21;
      } while (param_4 != plVar7);
      for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
        *plVar21 = *plVar9;
        plVar21 = plVar21 + 1;
      }
    }
  }
  return;
}



/* Entry: 10aa4c334; end: 10aa4c537;  */

void FUN_10aa4c334(long *param_1,long *param_2,ulong param_3,long *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      lVar8 = *param_1;
      if (*(int *)(param_2[-1] + 8) < *(int *)(lVar8 + 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar8;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar8 = 0;
        plVar5 = param_1;
        plVar7 = param_1 + 1;
        do {
          lVar18 = *plVar5;
          lVar13 = *plVar7;
          iVar1 = *(int *)(lVar13 + 8);
          lVar23 = lVar8;
          if (iVar1 < *(int *)(lVar18 + 8)) {
            do {
              lVar6 = lVar23;
              *(long *)((long)param_1 + lVar6 + 8) = lVar18;
              plVar5 = param_1;
              if (lVar6 == 0) goto LAB_10aa4c414;
              lVar18 = *(long *)((long)param_1 + lVar6 + -8);
              lVar23 = lVar6 + -8;
            } while (iVar1 < *(int *)(lVar18 + 8));
            plVar5 = (long *)((long)param_1 + lVar6);
LAB_10aa4c414:
            *plVar5 = lVar13;
          }
          plVar9 = plVar7 + 1;
          lVar8 = lVar8 + 8;
          plVar5 = plVar7;
          plVar7 = plVar9;
        } while (plVar9 != param_2);
      }
    }
    else {
      uVar22 = param_3 >> 1;
      plVar5 = param_1 + uVar22;
      lVar8 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_10aa4c334();
        FUN_10aa4c334(plVar5,param_2,lVar8,param_4,param_5);
        do {
          if (lVar8 == 0) {
            return;
          }
          if (((long)uVar22 <= param_5) || (lVar8 <= param_5)) {
            if ((long)uVar22 <= lVar8) {
              if (plVar5 == param_1) {
                return;
              }
              lVar8 = -(long)param_4;
              plVar7 = param_4;
              plVar9 = param_1;
              do {
                plVar20 = plVar9 + 1;
                plVar21 = plVar7 + 1;
                *plVar7 = *plVar9;
                lVar8 = lVar8 + -8;
                plVar7 = plVar21;
                plVar9 = plVar20;
              } while (plVar20 != plVar5);
              do {
                if (plVar5 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(param_1,param_4,-((long)param_4 + lVar8));
                  return;
                }
                iVar1 = *(int *)(*plVar5 + 8);
                iVar2 = *(int *)(*param_4 + 8);
                lVar23 = *plVar5;
                if (iVar2 <= iVar1) {
                  lVar23 = *param_4;
                }
                lVar13 = 8;
                if (iVar2 <= iVar1) {
                  lVar13 = 0;
                }
                plVar5 = (long *)((long)plVar5 + lVar13);
                lVar13 = 0;
                if (iVar2 <= iVar1) {
                  lVar13 = 8;
                }
                param_4 = (long *)((long)param_4 + lVar13);
                *param_1 = lVar23;
                param_1 = param_1 + 1;
              } while (plVar21 != param_4);
              return;
            }
            if (plVar5 != param_2) {
              lVar8 = 0;
              do {
                *(undefined8 *)((long)param_4 + lVar8) = *(undefined8 *)((long)plVar5 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((long *)((long)plVar5 + lVar8) != param_2);
              plVar7 = (long *)((long)param_4 + lVar8);
              do {
                if (plVar5 == param_1) {
                  if (plVar7 == param_4) {
                    return;
                  }
                  lVar8 = -8;
                  do {
                    plVar7 = plVar7 + -1;
                    *(long *)((long)param_2 + lVar8) = *plVar7;
                    lVar8 = lVar8 + -8;
                  } while (plVar7 != param_4);
                  return;
                }
                lVar23 = plVar7[-1];
                lVar8 = plVar5[-1];
                plVar9 = plVar5 + -1;
                if (*(int *)(lVar8 + 8) <= *(int *)(lVar23 + 8)) {
                  plVar7 = plVar7 + -1;
                  plVar9 = plVar5;
                  lVar8 = lVar23;
                }
                plVar5 = plVar9;
                param_2 = param_2 + -1;
                *param_2 = lVar8;
              } while (plVar7 != param_4);
              return;
            }
            return;
          }
          if (uVar22 == 0) {
            return;
          }
          lVar23 = 0;
          lVar13 = -uVar22;
          while (lVar18 = *(long *)((long)param_1 + lVar23),
                *(int *)(lVar18 + 8) <= *(int *)(*plVar5 + 8)) {
            lVar23 = lVar23 + 8;
            bVar4 = lVar13 == -1;
            lVar13 = lVar13 + 1;
            if (bVar4) {
              return;
            }
          }
          if (-lVar13 < lVar8) {
            lVar18 = lVar8 / 2;
            plVar7 = plVar5 + lVar18;
            lVar6 = (long)plVar5 + (-lVar23 - (long)param_1);
            plVar9 = plVar5;
            if (lVar6 != 0) {
              uVar22 = lVar6 >> 3;
              plVar9 = (long *)((long)param_1 + lVar23);
              do {
                uVar14 = uVar22 >> 1;
                uVar10 = uVar22 + (uVar22 >> 1 ^ 0xffffffffffffffff);
                uVar22 = uVar14;
                if (*(int *)(plVar9[uVar14] + 8) <= *(int *)(*plVar7 + 8)) {
                  uVar22 = uVar10;
                  plVar9 = plVar9 + uVar14 + 1;
                }
              } while (uVar22 != 0);
            }
            uVar22 = (long)plVar9 + (-lVar23 - (long)param_1) >> 3;
          }
          else {
            if (lVar13 == -1) {
              *(long *)((long)param_1 + lVar23) = *plVar5;
              *plVar5 = lVar18;
              return;
            }
            uVar22 = -lVar13 / 2;
            plVar7 = plVar5;
            if (plVar5 != param_2) {
              uVar10 = (long)param_2 - (long)plVar5 >> 3;
              plVar9 = plVar5;
              do {
                uVar14 = uVar10 >> 1;
                plVar7 = plVar9 + uVar14 + 1;
                uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
                if (*(int *)(*(long *)((long)param_1 + lVar23 + uVar22 * 8) + 8) <=
                    *(int *)(plVar9[uVar14] + 8)) {
                  plVar7 = plVar9;
                  uVar10 = uVar14;
                }
                plVar9 = plVar7;
              } while (uVar10 != 0);
            }
            lVar18 = (long)plVar7 - (long)plVar5 >> 3;
            plVar9 = (long *)((long)param_1 + lVar23 + uVar22 * 8);
          }
          lVar6 = (long)plVar5 - (long)plVar9;
          plVar21 = plVar7;
          if ((lVar6 != 0) && (lVar3 = (long)plVar7 - (long)plVar5, plVar21 = plVar9, lVar3 != 0)) {
            if (plVar9 + 1 == plVar5) {
              lVar6 = *plVar9;
              _memmove(plVar9,plVar5,lVar3);
              *(long *)((long)plVar9 + lVar3) = lVar6;
              plVar21 = (long *)((long)plVar9 + lVar3);
            }
            else if (plVar5 + 1 == plVar7) {
              plVar5 = plVar7 + -1;
              lVar6 = *plVar5;
              plVar21 = (long *)((long)plVar7 - ((long)plVar5 - (long)plVar9));
              if ((long)plVar5 - (long)plVar9 != 0) {
                _memmove(plVar21,plVar9,(long)plVar5 - (long)plVar9);
              }
              *plVar9 = lVar6;
            }
            else {
              lVar11 = lVar6 >> 3;
              lVar16 = lVar3 >> 3;
              lVar17 = lVar11;
              plVar20 = plVar9;
              plVar19 = plVar5;
              if (lVar11 == lVar3 >> 3) {
                do {
                  plVar12 = plVar19 + 1;
                  lVar6 = *plVar20;
                  *plVar20 = *plVar19;
                  *plVar19 = lVar6;
                  plVar21 = plVar5;
                  if (plVar20 + 1 == plVar5) break;
                  plVar20 = plVar20 + 1;
                  plVar19 = plVar12;
                } while (plVar12 != plVar7);
              }
              else {
                do {
                  lVar15 = lVar16;
                  lVar16 = 0;
                  if (lVar15 != 0) {
                    lVar16 = lVar17 / lVar15;
                  }
                  lVar16 = lVar17 - lVar16 * lVar15;
                  lVar17 = lVar15;
                } while (lVar16 != 0);
                plVar5 = plVar9 + lVar15;
                do {
                  plVar5 = plVar5 + -1;
                  lVar16 = *plVar5;
                  plVar21 = (long *)(lVar6 + (long)plVar5);
                  plVar20 = plVar5;
                  do {
                    plVar19 = plVar21;
                    *plVar20 = *plVar19;
                    lVar17 = (long)plVar7 - (long)plVar19 >> 3;
                    plVar21 = (long *)((long)plVar19 + lVar6);
                    if (lVar17 <= lVar11) {
                      plVar21 = plVar9 + (lVar11 - lVar17);
                    }
                    plVar20 = plVar19;
                  } while (plVar21 != plVar5);
                  *plVar19 = lVar16;
                } while (plVar5 != plVar9);
                plVar21 = (long *)(lVar3 + (long)plVar9);
              }
            }
          }
          if ((long)(uVar22 + lVar18) < (long)((lVar8 - (uVar22 + lVar18)) - lVar13)) {
            FUN_10aa4c700((long)param_1 + lVar23,plVar9,plVar21);
            uVar22 = -(uVar22 + lVar13);
            plVar5 = plVar7;
            lVar8 = lVar8 - lVar18;
            param_1 = plVar21;
          }
          else {
            FUN_10aa4c700(plVar21,plVar7,param_2,-(uVar22 + lVar13),lVar8 - lVar18);
            plVar5 = plVar9;
            lVar8 = lVar18;
            param_2 = plVar21;
            param_1 = (long *)((long)param_1 + lVar23);
          }
        } while( true );
      }
      FUN_10aa4c538(param_1,plVar5,uVar22);
      plVar7 = param_4 + uVar22;
      FUN_10aa4c538(plVar5,param_2,lVar8,plVar7);
      plVar5 = param_4 + param_3;
      plVar9 = plVar7;
      do {
        if (plVar9 == plVar5) {
          for (; param_4 != plVar7; param_4 = param_4 + 1) {
            *param_1 = *param_4;
            param_1 = param_1 + 1;
          }
          return;
        }
        iVar1 = *(int *)(*plVar9 + 8);
        iVar2 = *(int *)(*param_4 + 8);
        lVar8 = *plVar9;
        if (iVar2 <= iVar1) {
          lVar8 = *param_4;
        }
        lVar23 = 0;
        if (iVar2 <= iVar1) {
          lVar23 = 8;
        }
        param_4 = (long *)((long)param_4 + lVar23);
        lVar23 = 8;
        if (iVar2 <= iVar1) {
          lVar23 = 0;
        }
        plVar9 = (long *)((long)plVar9 + lVar23);
        plVar21 = param_1 + 1;
        *param_1 = lVar8;
        param_1 = plVar21;
      } while (param_4 != plVar7);
      for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
        *plVar21 = *plVar9;
        plVar21 = plVar21 + 1;
      }
    }
  }
  return;
}



/* Entry: 10aa4c538; end: 10aa4c6ff;  */

void FUN_10aa4c538(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    return;
  }
  plVar7 = param_4;
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (8 < (long)param_3) {
        uVar8 = param_3 >> 1;
        plVar7 = param_1 + uVar8;
        FUN_10aa4c334(param_1,plVar7,uVar8,param_4,uVar8);
        lVar3 = param_3 - (param_3 >> 1);
        FUN_10aa4c334(plVar7,param_2,lVar3,param_4 + uVar8,lVar3);
        plVar4 = plVar7;
        do {
          if (plVar4 == param_2) {
            for (; param_1 != plVar7; param_1 = param_1 + 1) {
              *param_4 = *param_1;
              param_4 = param_4 + 1;
            }
            return;
          }
          iVar1 = *(int *)(*plVar4 + 8);
          iVar2 = *(int *)(*param_1 + 8);
          lVar3 = *plVar4;
          if (iVar2 <= iVar1) {
            lVar3 = *param_1;
          }
          lVar5 = 8;
          if (iVar2 <= iVar1) {
            lVar5 = 0;
          }
          plVar4 = (long *)((long)plVar4 + lVar5);
          lVar5 = 0;
          if (iVar2 <= iVar1) {
            lVar5 = 8;
          }
          param_1 = (long *)((long)param_1 + lVar5);
          plVar6 = param_4 + 1;
          *param_4 = lVar3;
          param_4 = plVar6;
        } while (param_1 != plVar7);
        for (; plVar4 != param_2; plVar4 = plVar4 + 1) {
          *plVar6 = *plVar4;
          plVar6 = plVar6 + 1;
        }
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      plVar7 = param_1 + 1;
      *param_4 = *param_1;
      if (plVar7 == param_2) {
        return;
      }
      lVar3 = 0;
      plVar4 = param_4;
      do {
        if (*(int *)(*plVar7 + 8) < *(int *)(*plVar4 + 8)) {
          plVar4[1] = *plVar4;
          lVar5 = lVar3;
          plVar6 = param_4;
          if (plVar4 != param_4) {
            do {
              plVar6 = (long *)((long)param_4 + lVar5);
              if (*(int *)(plVar6[-1] + 8) <= *(int *)(*plVar7 + 8)) break;
              *plVar6 = plVar6[-1];
              lVar5 = lVar5 + -8;
              plVar6 = param_4;
            } while (lVar5 != 0);
          }
          *plVar6 = *plVar7;
        }
        else {
          plVar4[1] = *plVar7;
        }
        plVar7 = plVar7 + 1;
        lVar3 = lVar3 + 8;
        plVar4 = plVar4 + 1;
        if (plVar7 == param_2) {
          return;
        }
      } while( true );
    }
    lVar3 = param_2[-1];
    iVar1 = *(int *)(lVar3 + 8);
    iVar2 = *(int *)(*param_1 + 8);
    if (iVar2 <= iVar1) {
      lVar3 = *param_1;
    }
    plVar7 = param_4 + 1;
    *param_4 = lVar3;
    if (iVar2 <= iVar1) {
      param_1 = param_2 + -1;
    }
  }
  *plVar7 = *param_1;
  return;
}



/* Entry: 10aa4c700; end: 10aa4cbc7;  */

void FUN_10aa4c700(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6
                  ,long param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  
  do {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) {
      if (param_4 <= param_5) {
        if (param_2 == param_1) {
          return;
        }
        lVar21 = -(long)param_6;
        plVar7 = param_6;
        plVar15 = param_1;
        do {
          plVar6 = plVar15 + 1;
          plVar19 = plVar7 + 1;
          *plVar7 = *plVar15;
          lVar21 = lVar21 + -8;
          plVar7 = plVar19;
          plVar15 = plVar6;
        } while (plVar6 != param_2);
        do {
          if (param_2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(param_1,param_6,-((long)param_6 + lVar21));
            return;
          }
          iVar1 = *(int *)(*param_2 + 8);
          iVar2 = *(int *)(*param_6 + 8);
          lVar20 = *param_2;
          if (iVar2 <= iVar1) {
            lVar20 = *param_6;
          }
          lVar11 = 8;
          if (iVar2 <= iVar1) {
            lVar11 = 0;
          }
          param_2 = (long *)((long)param_2 + lVar11);
          lVar11 = 0;
          if (iVar2 <= iVar1) {
            lVar11 = 8;
          }
          param_6 = (long *)((long)param_6 + lVar11);
          *param_1 = lVar20;
          param_1 = param_1 + 1;
        } while (plVar19 != param_6);
        return;
      }
      if (param_2 != param_3) {
        lVar21 = 0;
        do {
          *(undefined8 *)((long)param_6 + lVar21) = *(undefined8 *)((long)param_2 + lVar21);
          lVar21 = lVar21 + 8;
        } while ((long *)((long)param_2 + lVar21) != param_3);
        plVar7 = (long *)((long)param_6 + lVar21);
        do {
          if (param_2 == param_1) {
            if (plVar7 == param_6) {
              return;
            }
            lVar21 = -8;
            do {
              plVar7 = plVar7 + -1;
              *(long *)((long)param_3 + lVar21) = *plVar7;
              lVar21 = lVar21 + -8;
            } while (plVar7 != param_6);
            return;
          }
          lVar20 = plVar7[-1];
          lVar21 = param_2[-1];
          plVar15 = param_2 + -1;
          if (*(int *)(lVar21 + 8) <= *(int *)(lVar20 + 8)) {
            plVar7 = plVar7 + -1;
            plVar15 = param_2;
            lVar21 = lVar20;
          }
          param_2 = plVar15;
          param_3 = param_3 + -1;
          *param_3 = lVar21;
        } while (plVar7 != param_6);
        return;
      }
      return;
    }
    if (param_4 == 0) {
      return;
    }
    lVar21 = 0;
    lVar20 = -param_4;
    while (lVar11 = *(long *)((long)param_1 + lVar21),
          *(int *)(lVar11 + 8) <= *(int *)(*param_2 + 8)) {
      lVar21 = lVar21 + 8;
      bVar4 = lVar20 == -1;
      lVar20 = lVar20 + 1;
      if (bVar4) {
        return;
      }
    }
    if (-lVar20 < param_5) {
      lVar11 = param_5 / 2;
      plVar7 = param_2 + lVar11;
      lVar5 = (long)param_2 + (-lVar21 - (long)param_1);
      plVar15 = param_2;
      if (lVar5 != 0) {
        uVar8 = lVar5 >> 3;
        plVar15 = (long *)((long)param_1 + lVar21);
        do {
          uVar12 = uVar8 >> 1;
          uVar16 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          uVar8 = uVar12;
          if (*(int *)(plVar15[uVar12] + 8) <= *(int *)(*plVar7 + 8)) {
            uVar8 = uVar16;
            plVar15 = plVar15 + uVar12 + 1;
          }
        } while (uVar8 != 0);
      }
      param_4 = (long)plVar15 + (-lVar21 - (long)param_1) >> 3;
    }
    else {
      if (lVar20 == -1) {
        *(long *)((long)param_1 + lVar21) = *param_2;
        *param_2 = lVar11;
        return;
      }
      param_4 = -lVar20 / 2;
      plVar7 = param_2;
      if (param_2 != param_3) {
        uVar8 = (long)param_3 - (long)param_2 >> 3;
        plVar15 = param_2;
        do {
          uVar16 = uVar8 >> 1;
          plVar7 = plVar15 + uVar16 + 1;
          uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          if (*(int *)(*(long *)((long)param_1 + lVar21 + param_4 * 8) + 8) <=
              *(int *)(plVar15[uVar16] + 8)) {
            plVar7 = plVar15;
            uVar8 = uVar16;
          }
          plVar15 = plVar7;
        } while (uVar8 != 0);
      }
      lVar11 = (long)plVar7 - (long)param_2 >> 3;
      plVar15 = (long *)((long)param_1 + lVar21 + param_4 * 8);
    }
    lVar5 = (long)param_2 - (long)plVar15;
    plVar19 = plVar7;
    if ((lVar5 != 0) && (lVar3 = (long)plVar7 - (long)param_2, plVar19 = plVar15, lVar3 != 0)) {
      if (plVar15 + 1 == param_2) {
        lVar5 = *plVar15;
        _memmove(plVar15,param_2,lVar3);
        *(long *)((long)plVar15 + lVar3) = lVar5;
        plVar19 = (long *)((long)plVar15 + lVar3);
      }
      else if (param_2 + 1 == plVar7) {
        plVar6 = plVar7 + -1;
        lVar5 = *plVar6;
        plVar19 = (long *)((long)plVar7 - ((long)plVar6 - (long)plVar15));
        if ((long)plVar6 - (long)plVar15 != 0) {
          _memmove(plVar19,plVar15,(long)plVar6 - (long)plVar15);
        }
        *plVar15 = lVar5;
      }
      else {
        lVar9 = lVar5 >> 3;
        lVar14 = lVar3 >> 3;
        lVar17 = lVar9;
        plVar6 = plVar15;
        plVar18 = param_2;
        if (lVar9 == lVar3 >> 3) {
          do {
            plVar10 = plVar18 + 1;
            lVar5 = *plVar6;
            *plVar6 = *plVar18;
            *plVar18 = lVar5;
            plVar19 = param_2;
            if (plVar6 + 1 == param_2) break;
            plVar6 = plVar6 + 1;
            plVar18 = plVar10;
          } while (plVar10 != plVar7);
        }
        else {
          do {
            lVar13 = lVar14;
            lVar14 = 0;
            if (lVar13 != 0) {
              lVar14 = lVar17 / lVar13;
            }
            lVar14 = lVar17 - lVar14 * lVar13;
            lVar17 = lVar13;
          } while (lVar14 != 0);
          plVar19 = plVar15 + lVar13;
          do {
            plVar19 = plVar19 + -1;
            lVar14 = *plVar19;
            plVar6 = (long *)(lVar5 + (long)plVar19);
            plVar18 = plVar19;
            do {
              plVar10 = plVar6;
              *plVar18 = *plVar10;
              lVar17 = (long)plVar7 - (long)plVar10 >> 3;
              plVar6 = (long *)((long)plVar10 + lVar5);
              if (lVar17 <= lVar9) {
                plVar6 = plVar15 + (lVar9 - lVar17);
              }
              plVar18 = plVar10;
            } while (plVar6 != plVar19);
            *plVar10 = lVar14;
          } while (plVar19 != plVar15);
          plVar19 = (long *)(lVar3 + (long)plVar15);
        }
      }
    }
    if (param_4 + lVar11 < (param_5 - (param_4 + lVar11)) - lVar20) {
      FUN_10aa4c700((long)param_1 + lVar21,plVar15,plVar19);
      param_5 = param_5 - lVar11;
      param_4 = -(param_4 + lVar20);
      param_2 = plVar7;
      param_1 = plVar19;
    }
    else {
      FUN_10aa4c700(plVar19,plVar7,param_3,-(param_4 + lVar20),param_5 - lVar11);
      param_5 = lVar11;
      param_3 = plVar19;
      param_2 = plVar15;
      param_1 = (long *)((long)param_1 + lVar21);
    }
  } while( true );
}



/* Entry: 10aa4cbc8; end: 10aa4cbdb;  */

void FUN_10aa4cbc8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lStack_48;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = *(long *)(puVar2 + 8);
  while (lVar1 != param_2) {
    lStack_48 = lVar1 + -0x18;
    func_0x00010a4aec24(&lStack_48);
    lStack_48 = lVar1 + -0x30;
    func_0x00010a4aec24(&lStack_48);
    lVar1 = lVar1 + -0x30;
  }
  *(long *)(puVar2 + 8) = param_2;
  return;
}



/* Entry: 10aa4cbdc; end: 10aa4cc47;  */

void FUN_10aa4cbdc(long param_1,long param_2)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lStack_38 = lVar1 + -0x18;
    func_0x00010a4aec24(&lStack_38);
    lStack_38 = lVar1 + -0x30;
    func_0x00010a4aec24(&lStack_38);
    lVar1 = lVar1 + -0x30;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10aa4cc48; end: 10aa4cc77;  */

void FUN_10aa4cc48(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10aa4cbdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10aa4cc78; end: 10aa4cc8b;  */

undefined1  [16] FUN_10aa4cc78(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  plVar11 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar11 >> 0x3d == 0) {
    lVar4 = (long)plVar11 << 3;
    __Znwm(lVar4);
    auVar13._8_8_ = plVar11;
    auVar13._0_8_ = lVar4;
    return auVar13;
  }
  func_0x000109ffded8();
  uVar7 = plVar11[1];
  if (uVar7 != 0) {
    uVar8 = param_2 & 0xffffffff;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    uVar5 = (uint)param_2;
    if ((uVar7 & uVar9) == 0) {
      uVar10 = uVar6 - 1 & uVar8;
    }
    else {
      uVar10 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        uVar10 = (ulong)(uVar5 - uVar1 * uVar6);
      }
    }
    plVar11 = *(long **)(*plVar11 + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar12 = plVar11[1];
        if (uVar12 == uVar8) {
          if (*(uint *)(plVar11 + 2) == uVar5) break;
        }
        else {
          if ((uVar7 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar10) goto LAB_10aa4cd5c;
        }
      }
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
  }
LAB_10aa4cd5c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 10aa4cc8c; end: 10aa4ccbf;  */

undefined1  [16] FUN_10aa4cc8c(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar4 = (long)param_1 << 3;
    __Znwm(lVar4);
    auVar13._8_8_ = param_1;
    auVar13._0_8_ = lVar4;
    return auVar13;
  }
  func_0x000109ffded8();
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = param_2 & 0xffffffff;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    uVar5 = (uint)param_2;
    if ((uVar7 & uVar9) == 0) {
      uVar10 = uVar6 - 1 & uVar8;
    }
    else {
      uVar10 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        uVar10 = (ulong)(uVar5 - uVar1 * uVar6);
      }
    }
    plVar11 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar12 = plVar11[1];
        if (uVar12 == uVar8) {
          if (*(uint *)(plVar11 + 2) == uVar5) break;
        }
        else {
          if ((uVar7 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar10) goto LAB_10aa4cd5c;
        }
      }
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
  }
LAB_10aa4cd5c:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 10aa4ccc0; end: 10aa4cd63;  */

long * FUN_10aa4ccc0(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (ulong)param_2;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa4cd64; end: 10aa4cf97;  */

void FUN_10aa4cd64(long param_1,int param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  if ((param_1 != 0) && (param_2 < 0x20)) {
    plVar1 = *(long **)(param_3 + 0x18);
    uVar13 = **(ulong **)(param_3 + 0x10);
    uVar4 = uVar13;
    FUN_10aa45780(uVar13,param_1);
    uVar6 = plVar1[1];
    if (uVar6 != 0) {
      uVar7 = uVar6 - 1;
      if ((uVar6 & uVar7) == 0) {
        uVar9 = uVar7 & uVar4;
      }
      else {
        uVar9 = uVar4;
        if (uVar6 <= uVar4) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar4 / uVar6;
          }
          uVar9 = uVar4 - uVar9 * uVar6;
        }
      }
      lVar8 = *plVar1;
      plVar5 = *(long **)(lVar8 + uVar9 * 8);
      if (plVar5 != (long *)0x0) {
LAB_10aa4cde0:
        while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
          uVar11 = plVar5[1];
          if (uVar11 != uVar4) goto LAB_10aa4ce08;
          if (plVar5[2] == uVar13 && plVar5[3] == param_1) {
            lVar10 = *plVar5;
            if ((uVar6 & uVar7) == 0) {
              uVar4 = uVar4 & uVar7;
            }
            else if (uVar6 <= uVar4) {
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar13 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar13 * uVar6;
            }
            plVar3 = *(long **)(lVar8 + uVar4 * 8);
            do {
              plVar12 = plVar3;
              plVar3 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar5);
            if (plVar12 == plVar1 + 2) {
LAB_10aa4cea4:
              if (lVar10 == 0) {
LAB_10aa4ced8:
                *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
                lVar10 = *plVar5;
                goto LAB_10aa4cee0;
              }
              uVar13 = *(ulong *)(lVar10 + 8);
              if ((uVar6 & uVar7) == 0) {
                uVar9 = uVar13 & uVar7;
              }
              else {
                uVar9 = uVar13;
                if (uVar6 <= uVar13) {
                  uVar9 = 0;
                  if (uVar6 != 0) {
                    uVar9 = uVar13 / uVar6;
                  }
                  uVar9 = uVar13 - uVar9 * uVar6;
                }
              }
              if (uVar9 != uVar4) goto LAB_10aa4ced8;
LAB_10aa4cee8:
              if ((uVar6 & uVar7) == 0) {
                uVar13 = uVar13 & uVar7;
              }
              else if (uVar6 <= uVar13) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar7 * uVar6;
              }
              if (uVar13 != uVar4) {
                *(long **)(*plVar1 + uVar13 * 8) = plVar12;
                lVar10 = *plVar5;
              }
            }
            else {
              uVar13 = plVar12[1];
              if ((uVar6 & uVar7) == 0) {
                uVar13 = uVar13 & uVar7;
              }
              else if (uVar6 <= uVar13) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar9 * uVar6;
              }
              if (uVar13 != uVar4) goto LAB_10aa4cea4;
LAB_10aa4cee0:
              if (lVar10 != 0) {
                uVar13 = *(ulong *)(lVar10 + 8);
                goto LAB_10aa4cee8;
              }
            }
            *plVar12 = lVar10;
            *plVar5 = 0;
            plVar1[3] = plVar1[3] + -1;
            __ZdlPv(plVar5);
            break;
          }
        }
      }
    }
LAB_10aa4cf38:
    if ((*(int *)(param_1 + 8) == 0x1f) && (0 < *(int *)(param_1 + 0x24))) {
      lVar8 = 0;
      lVar10 = 0x40;
      do {
        (*(code *)**(undefined8 **)(param_3 + 0x20))
                  (*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10),param_2 + 1);
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x60;
      } while (lVar8 < *(int *)(param_1 + 0x24));
    }
  }
  return;
LAB_10aa4ce08:
  if ((uVar6 & uVar7) == 0) {
    uVar11 = uVar11 & uVar7;
  }
  else if (uVar6 <= uVar11) {
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar11 / uVar6;
    }
    uVar11 = uVar11 - uVar2 * uVar6;
  }
  if (uVar11 != uVar9) goto LAB_10aa4cf38;
  goto LAB_10aa4cde0;
}



/* Entry: 10aa4cf98; end: 10aa4cfbb;  */

void FUN_10aa4cf98(void)

{
  return;
}



/* Entry: 10aa4cfbc; end: 10aa4d1af;  */

long * FUN_10aa4cfbc(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,uint param_5,
                    char param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar13 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)param_1[1];
  lVar15 = (long)puVar14 - (long)puVar13;
  uVar7 = (lVar15 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar7) {
    FUN_10aa4d1b0();
LAB_10aa4d1ac:
    func_0x000109ffded8();
    plVar5 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    lVar15 = plVar5[1];
    lVar11 = plVar5[2];
    while (lVar11 != lVar15) {
      plVar5[2] = lVar11 + -0x30;
      plVar1 = (long *)(lVar11 + -0x28);
      lVar11 = lVar11 + -0x30;
      if (*plVar1 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        lVar11 = plVar5[2];
      }
    }
    if (*plVar5 != 0) {
      __ZdlPv();
    }
    return plVar5;
  }
  lVar11 = param_1[2] - (long)puVar13 >> 4;
  uVar12 = lVar11 * 0x5555555555555556;
  if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
    uVar12 = uVar7;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
    uVar12 = 0x555555555555555;
  }
  plStack_68 = param_1;
  if (uVar12 == 0) {
    lVar11 = 0;
  }
  else {
    if (0x555555555555555 < uVar12) goto LAB_10aa4d1ac;
    lVar11 = uVar12 * 0x30;
    __Znwm();
  }
  puVar2 = (undefined8 *)(lVar11 + lVar15);
  lStack_70 = lVar11 + uVar12 * 0x30;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar13 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    lVar15 = (long)puVar14 - (long)puVar13;
  }
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = *param_4;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  puVar2[4] = 0;
  bVar9 = 4;
  if ((param_5 & 0xfd) != 1) {
    bVar9 = 0;
  }
  bVar10 = 8;
  if ((param_5 & 0xfe) != 2) {
    bVar10 = 0;
  }
  *(byte *)(puVar2 + 5) = bVar10 | param_6 << 4 | bVar9;
  plStack_78 = puVar2 + 6;
  puVar6 = (undefined8 *)((long)puVar2 - lVar15);
  puVar8 = puVar13;
  plVar5 = plStack_78;
  if (puVar13 != puVar14) {
    do {
      lVar11 = puVar8[1];
      uVar16 = *puVar8;
      puVar6[1] = puVar8[1];
      *puVar6 = uVar16;
      if (lVar11 != 0) {
        plVar5 = (long *)(lVar11 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar17 = puVar8[3];
      uVar16 = puVar8[2];
      uVar18 = *(undefined8 *)((long)puVar8 + 0x19);
      *(undefined8 *)((long)puVar6 + 0x21) = *(undefined8 *)((long)puVar8 + 0x21);
      *(undefined8 *)((long)puVar6 + 0x19) = uVar18;
      puVar6[3] = uVar17;
      puVar6[2] = uVar16;
      puVar8 = puVar8 + 6;
      puVar6 = puVar6 + 6;
    } while (puVar8 != puVar14);
    do {
      if (puVar13[1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      puVar13 = puVar13 + 6;
    } while (puVar13 != puVar14);
    puVar13 = (undefined8 *)*param_1;
    plVar5 = plStack_78;
  }
  *param_1 = (long)puVar2 - lVar15;
  param_1[1] = (long)plVar5;
  lVar15 = param_1[2];
  param_1[2] = lStack_70;
  puStack_88 = puVar13;
  puStack_80 = puVar13;
  plStack_78 = puVar13;
  lStack_70 = lVar15;
  FUN_10aa4d1c4(&puStack_88);
  return plVar5;
}



/* Entry: 10aa4d1b0; end: 10aa4d1c3;  */

long * FUN_10aa4d1b0(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar2 = plVar3[1];
  lVar4 = plVar3[2];
  while (lVar4 != lVar2) {
    plVar3[2] = lVar4 + -0x30;
    plVar1 = (long *)(lVar4 + -0x28);
    lVar4 = lVar4 + -0x30;
    if (*plVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      lVar4 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10aa4d1c4; end: 10aa4d21f;  */

long * FUN_10aa4d1c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar2) {
    param_1[2] = lVar3 + -0x30;
    plVar1 = (long *)(lVar3 + -0x28);
    lVar3 = lVar3 + -0x30;
    if (*plVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa4d220; end: 10aa4d363;  */

long * FUN_10aa4d220(ulong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_88;
  ulong uStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 8) + 1;
  if (uVar1 >> 0x38 == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 7;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffeff < uVar7) {
      uVar8 = 0xffffffffffffff;
    }
    puStack_68 = param_1;
    if (uVar8 == 0) {
      uVar8 = 0;
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = param_2;
      FUN_10aa4d610();
    }
    lVar9 = uVar8 + lVar9;
    uVar1 = uVar8 + (long)puVar6 * 0x100;
    uStack_88 = uVar8;
    uStack_80 = lVar9;
    plStack_78 = (long *)lVar9;
    uStack_70 = uVar1;
    FUN_10aa4d364(lVar9,*param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar2 = (long *)(lVar9 + 0x100);
    uVar8 = lVar9 + (*param_1 - param_1[1]);
    plStack_78 = plVar2;
    FUN_10aa4d644(*param_1,param_1[1],uVar8);
    uStack_88 = *param_1;
    *param_1 = uVar8;
    param_1[1] = (ulong)plVar2;
    uStack_70 = param_1[2];
    param_1[2] = uVar1;
    uStack_80 = uStack_88;
    plStack_78 = (long *)uStack_88;
    FUN_10aa4d7b4(&uStack_88);
    return plVar2;
  }
  FUN_10aa4d5fc();
  uVar5 = (uint)param_2;
  FUN_10aa4d7b4(&uStack_88);
  __Unwind_Resume(param_1);
  uStack_d8 = param_7[1];
  uStack_e0 = *param_7;
  if (param_7[1] != 0) {
    plVar2 = (long *)(param_7[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_c8 = param_7[3];
  uStack_d0 = param_7[2];
  if (param_7[3] != 0) {
    plVar2 = (long *)(param_7[3] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_c0 = 1;
  FUN_10aa4d418(param_1,uVar5 & 0xff);
  FUN_10a688c1c(&uStack_e0);
  return (long *)param_1;
}



/* Entry: 10aa4d364; end: 10aa4d417;  */

undefined8 FUN_10aa4d364(undefined8 param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *in_x6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = in_x6[1];
  uStack_50 = *in_x6;
  if (in_x6[1] != 0) {
    plVar1 = (long *)(in_x6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = in_x6[3];
  uStack_40 = in_x6[2];
  if (in_x6[3] != 0) {
    plVar1 = (long *)(in_x6[3] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = 1;
  FUN_10aa4d418(param_1,param_2);
  FUN_10a688c1c(&uStack_50);
  return param_1;
}



/* Entry: 10aa4d418; end: 10aa4d52b;  */

undefined1 *
FUN_10aa4d418(undefined1 *param_1,undefined1 param_2,undefined1 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  param_1[1] = *param_3;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  *(undefined8 *)(param_1 + 0x28) = param_4[4];
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_10a60f164(param_1 + 0x30,param_4[5],param_4[6],(long)(param_4[6] - param_4[5]) >> 4);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_10a60f164();
  uVar2 = param_5[1];
  uVar1 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  uVar6 = param_5[5];
  uVar5 = param_5[4];
  *(undefined8 *)(param_1 + 0x90) = param_5[6];
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = *param_6;
  *param_6 = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  FUN_10aa4d52c(param_1 + 0xa0,param_7);
  func_0x00010aa4d594(param_1 + 200,param_8);
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0xf8) = param_9[1];
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  return param_1;
}



/* Entry: 10aa4d52c; end: 10aa4d5fb;  */

void FUN_10aa4d52c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    lVar4 = param_2[1];
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = param_2[3];
    uVar5 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



/* Entry: 10aa4d5fc; end: 10aa4d60f;  */

void FUN_10aa4d5fc(undefined8 param_1,undefined2 *param_2,long param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = (undefined2 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x38 == 0) {
    __Znwm((long)puVar4 << 8);
    return;
  }
  func_0x000109ffded8();
  if (puVar4 != param_2) {
    lVar6 = 0;
    do {
      puVar1 = (undefined2 *)((long)puVar4 + lVar6);
      puVar2 = (undefined2 *)(param_3 + lVar6);
      *puVar2 = *puVar1;
      uVar8 = *(undefined8 *)(puVar1 + 8);
      uVar7 = *(undefined8 *)(puVar1 + 4);
      uVar10 = *(undefined8 *)(puVar1 + 0x10);
      uVar9 = *(undefined8 *)(puVar1 + 0xc);
      uVar5 = *(undefined8 *)(puVar1 + 0x14);
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x14) = uVar5;
      *(undefined8 *)(puVar2 + 0x10) = uVar10;
      *(undefined8 *)(puVar2 + 0xc) = uVar9;
      *(undefined8 *)(puVar2 + 8) = uVar8;
      *(undefined8 *)(puVar2 + 4) = uVar7;
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      FUN_10a60f164();
      *(undefined8 *)(puVar2 + 0x24) = 0;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x2c) = 0;
      FUN_10a60f164(puVar2 + 0x24,*(long *)(puVar1 + 0x24),*(long *)(puVar1 + 0x28),
                    *(long *)(puVar1 + 0x28) - *(long *)(puVar1 + 0x24) >> 4);
      lVar3 = param_3 + lVar6;
      uVar7 = *(undefined8 *)(puVar1 + 0x34);
      uVar5 = *(undefined8 *)(puVar1 + 0x30);
      uVar9 = *(undefined8 *)(puVar1 + 0x3c);
      uVar8 = *(undefined8 *)(puVar1 + 0x38);
      uVar11 = *(undefined8 *)(puVar1 + 0x44);
      uVar10 = *(undefined8 *)(puVar1 + 0x40);
      *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(puVar1 + 0x48);
      *(undefined8 *)(lVar3 + 0x78) = uVar9;
      *(undefined8 *)(lVar3 + 0x70) = uVar8;
      *(undefined8 *)(lVar3 + 0x88) = uVar11;
      *(undefined8 *)(lVar3 + 0x80) = uVar10;
      *(undefined8 *)(lVar3 + 0x68) = uVar7;
      *(undefined8 *)(lVar3 + 0x60) = uVar5;
      uVar5 = *(undefined8 *)(puVar1 + 0x4c);
      *(undefined8 *)(puVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar3 + 0x98) = uVar5;
      FUN_10aa4d52c(lVar3 + 0xa0,(undefined *)((long)puVar4 + lVar6 + 0xa0));
      func_0x00010aa4d594(lVar3 + 200,(undefined *)((long)puVar4 + lVar6 + 200));
      uVar5 = *(undefined8 *)(puVar1 + 0x78);
      *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(puVar1 + 0x7c);
      *(undefined8 *)(lVar3 + 0xf0) = uVar5;
      *(undefined8 *)(puVar1 + 0x78) = 0;
      *(undefined8 *)(puVar1 + 0x7c) = 0;
      lVar6 = lVar6 + 0x100;
    } while (puVar1 + 0x80 != param_2);
    do {
      FUN_10aa4b2f0(puVar4);
      puVar4 = puVar4 + 0x80;
    } while (puVar4 != param_2);
  }
  return;
}



/* Entry: 10aa4d610; end: 10aa4d643;  */

void FUN_10aa4d610(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((ulong)param_1 >> 0x38 == 0) {
    __Znwm((long)param_1 << 8);
    return;
  }
  func_0x000109ffded8();
  if (param_1 != param_2) {
    lVar5 = 0;
    do {
      puVar1 = (undefined2 *)((long)param_1 + lVar5);
      puVar2 = (undefined2 *)(param_3 + lVar5);
      *puVar2 = *puVar1;
      uVar7 = *(undefined8 *)(puVar1 + 8);
      uVar6 = *(undefined8 *)(puVar1 + 4);
      uVar9 = *(undefined8 *)(puVar1 + 0x10);
      uVar8 = *(undefined8 *)(puVar1 + 0xc);
      uVar4 = *(undefined8 *)(puVar1 + 0x14);
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x14) = uVar4;
      *(undefined8 *)(puVar2 + 0x10) = uVar9;
      *(undefined8 *)(puVar2 + 0xc) = uVar8;
      *(undefined8 *)(puVar2 + 8) = uVar7;
      *(undefined8 *)(puVar2 + 4) = uVar6;
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      FUN_10a60f164();
      *(undefined8 *)(puVar2 + 0x24) = 0;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x2c) = 0;
      FUN_10a60f164(puVar2 + 0x24,*(long *)(puVar1 + 0x24),*(long *)(puVar1 + 0x28),
                    *(long *)(puVar1 + 0x28) - *(long *)(puVar1 + 0x24) >> 4);
      lVar3 = param_3 + lVar5;
      uVar6 = *(undefined8 *)(puVar1 + 0x34);
      uVar4 = *(undefined8 *)(puVar1 + 0x30);
      uVar8 = *(undefined8 *)(puVar1 + 0x3c);
      uVar7 = *(undefined8 *)(puVar1 + 0x38);
      uVar10 = *(undefined8 *)(puVar1 + 0x44);
      uVar9 = *(undefined8 *)(puVar1 + 0x40);
      *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(puVar1 + 0x48);
      *(undefined8 *)(lVar3 + 0x78) = uVar8;
      *(undefined8 *)(lVar3 + 0x70) = uVar7;
      *(undefined8 *)(lVar3 + 0x88) = uVar10;
      *(undefined8 *)(lVar3 + 0x80) = uVar9;
      *(undefined8 *)(lVar3 + 0x68) = uVar6;
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
      uVar4 = *(undefined8 *)(puVar1 + 0x4c);
      *(undefined8 *)(puVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar3 + 0x98) = uVar4;
      FUN_10aa4d52c(lVar3 + 0xa0,(long)param_1 + lVar5 + 0xa0);
      func_0x00010aa4d594(lVar3 + 200,(long)param_1 + lVar5 + 200);
      uVar4 = *(undefined8 *)(puVar1 + 0x78);
      *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(puVar1 + 0x7c);
      *(undefined8 *)(lVar3 + 0xf0) = uVar4;
      *(undefined8 *)(puVar1 + 0x78) = 0;
      *(undefined8 *)(puVar1 + 0x7c) = 0;
      lVar5 = lVar5 + 0x100;
    } while (puVar1 + 0x80 != param_2);
    do {
      FUN_10aa4b2f0(param_1);
      param_1 = param_1 + 0x80;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10aa4d644; end: 10aa4d7b3;  */

void FUN_10aa4d644(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    lVar5 = 0;
    do {
      puVar1 = (undefined2 *)((long)param_1 + lVar5);
      puVar2 = (undefined2 *)(param_3 + lVar5);
      *puVar2 = *puVar1;
      uVar7 = *(undefined8 *)(puVar1 + 8);
      uVar6 = *(undefined8 *)(puVar1 + 4);
      uVar9 = *(undefined8 *)(puVar1 + 0x10);
      uVar8 = *(undefined8 *)(puVar1 + 0xc);
      uVar4 = *(undefined8 *)(puVar1 + 0x14);
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x14) = uVar4;
      *(undefined8 *)(puVar2 + 0x10) = uVar9;
      *(undefined8 *)(puVar2 + 0xc) = uVar8;
      *(undefined8 *)(puVar2 + 8) = uVar7;
      *(undefined8 *)(puVar2 + 4) = uVar6;
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      FUN_10a60f164();
      *(undefined8 *)(puVar2 + 0x24) = 0;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x2c) = 0;
      FUN_10a60f164(puVar2 + 0x24,*(long *)(puVar1 + 0x24),*(long *)(puVar1 + 0x28),
                    *(long *)(puVar1 + 0x28) - *(long *)(puVar1 + 0x24) >> 4);
      lVar3 = param_3 + lVar5;
      uVar6 = *(undefined8 *)(puVar1 + 0x34);
      uVar4 = *(undefined8 *)(puVar1 + 0x30);
      uVar8 = *(undefined8 *)(puVar1 + 0x3c);
      uVar7 = *(undefined8 *)(puVar1 + 0x38);
      uVar10 = *(undefined8 *)(puVar1 + 0x44);
      uVar9 = *(undefined8 *)(puVar1 + 0x40);
      *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(puVar1 + 0x48);
      *(undefined8 *)(lVar3 + 0x78) = uVar8;
      *(undefined8 *)(lVar3 + 0x70) = uVar7;
      *(undefined8 *)(lVar3 + 0x88) = uVar10;
      *(undefined8 *)(lVar3 + 0x80) = uVar9;
      *(undefined8 *)(lVar3 + 0x68) = uVar6;
      *(undefined8 *)(lVar3 + 0x60) = uVar4;
      uVar4 = *(undefined8 *)(puVar1 + 0x4c);
      *(undefined8 *)(puVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar3 + 0x98) = uVar4;
      FUN_10aa4d52c(lVar3 + 0xa0,(long)param_1 + lVar5 + 0xa0);
      func_0x00010aa4d594(lVar3 + 200,(long)param_1 + lVar5 + 200);
      uVar4 = *(undefined8 *)(puVar1 + 0x78);
      *(undefined8 *)(lVar3 + 0xf8) = *(undefined8 *)(puVar1 + 0x7c);
      *(undefined8 *)(lVar3 + 0xf0) = uVar4;
      *(undefined8 *)(puVar1 + 0x78) = 0;
      *(undefined8 *)(puVar1 + 0x7c) = 0;
      lVar5 = lVar5 + 0x100;
    } while (puVar1 + 0x80 != param_2);
    do {
      FUN_10aa4b2f0(param_1);
      param_1 = param_1 + 0x80;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10aa4d7b4; end: 10aa4d7ff;  */

long * FUN_10aa4d7b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x100;
    FUN_10aa4b2f0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa4d800; end: 10aa4d943;  */

long * FUN_10aa4d800(ulong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [32];
  char cStack_b8;
  ulong uStack_88;
  ulong uStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 8) + 1;
  if (uVar1 >> 0x38 == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 7;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffeff < uVar7) {
      uVar8 = 0xffffffffffffff;
    }
    puStack_68 = param_1;
    if (uVar8 == 0) {
      uVar8 = 0;
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = param_2;
      FUN_10aa4d610();
    }
    lVar9 = uVar8 + lVar9;
    uVar1 = uVar8 + (long)puVar6 * 0x100;
    uStack_88 = uVar8;
    uStack_80 = lVar9;
    plStack_78 = (long *)lVar9;
    uStack_70 = uVar1;
    FUN_10aa4d944(lVar9,*param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar2 = (long *)(lVar9 + 0x100);
    uVar8 = lVar9 + (*param_1 - param_1[1]);
    plStack_78 = plVar2;
    FUN_10aa4d644(*param_1,param_1[1],uVar8);
    uStack_88 = *param_1;
    *param_1 = uVar8;
    param_1[1] = (ulong)plVar2;
    uStack_70 = param_1[2];
    param_1[2] = uVar1;
    uStack_80 = uStack_88;
    plStack_78 = (long *)uStack_88;
    FUN_10aa4d7b4(&uStack_88);
    return plVar2;
  }
  FUN_10aa4d5fc();
  uVar5 = (uint)param_2;
  FUN_10aa4d7b4(&uStack_88);
  __Unwind_Resume(param_1);
  auStack_d8[0] = 0;
  cStack_b8 = '\0';
  uStack_f8 = param_7[1];
  uStack_100 = *param_7;
  if (param_7[1] != 0) {
    plVar2 = (long *)(param_7[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_e8 = param_7[3];
  uStack_f0 = param_7[2];
  if (param_7[3] != 0) {
    plVar2 = (long *)(param_7[3] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_e0 = 1;
  FUN_10aa4d418(param_1,uVar5 & 0xff);
  FUN_10a688c1c(&uStack_100);
  if (cStack_b8 == '\x01') {
    FUN_10a688c1c(auStack_d8);
  }
  return (long *)param_1;
}



/* Entry: 10aa4d944; end: 10aa4da1f;  */

undefined8 FUN_10aa4d944(undefined8 param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *in_x6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  auStack_48[0] = 0;
  cStack_28 = '\0';
  uStack_68 = in_x6[1];
  uStack_70 = *in_x6;
  if (in_x6[1] != 0) {
    plVar1 = (long *)(in_x6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = in_x6[3];
  uStack_60 = in_x6[2];
  if (in_x6[3] != 0) {
    plVar1 = (long *)(in_x6[3] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = 1;
  FUN_10aa4d418(param_1,param_2);
  FUN_10a688c1c(&uStack_70);
  if (cStack_28 == '\x01') {
    FUN_10a688c1c(auStack_48);
  }
  return param_1;
}



/* Entry: 10aa4da20; end: 10aa4da5f;  */

undefined8 * FUN_10aa4da20(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa4da60; end: 10aa4dbc3;  */

void FUN_10aa4da60(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aa4dbc4; end: 10aa4dbd3;  */

void FUN_10aa4dbc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3bb98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


