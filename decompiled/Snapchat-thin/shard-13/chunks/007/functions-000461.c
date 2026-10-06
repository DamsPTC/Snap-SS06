/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aad5004; end: 10aad501b;  */

undefined8 * FUN_10aad5004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  func_0x000105277f8c();
  func_0x000105277f8c();
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0x10aad5010;
  param_1[1] = &PTR_DAT_110950c70;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  puVar1 = param_1 + 9;
  *puVar1 = &PTR_DAT_110950c70;
  param_1[8] = FUN_10aad5004;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))();
  param_1[8] = param_2[8];
  (**(code **)*puVar1)(puVar1);
  (**(code **)(param_2[9] + 0x10))(puVar1,param_2 + 9);
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  func_0x00010a099dfc(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



/* Entry: 10aad501c; end: 10aad50ef;  */

undefined8 * FUN_10aad501c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0x10aad5010;
  param_1[1] = &PTR_DAT_110950c70;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  puVar1 = param_1 + 9;
  *puVar1 = &PTR_DAT_110950c70;
  param_1[8] = FUN_10aad5004;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))();
  param_1[8] = param_2[8];
  (**(code **)*puVar1)(puVar1);
  (**(code **)(param_2[9] + 0x10))(puVar1,param_2 + 9);
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  func_0x00010a099dfc(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



/* Entry: 10aad50f0; end: 10aad618b;  */

void FUN_10aad50f0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 uVar5;
  float *pfVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  do {
    puVar22 = (undefined8 *)((long)param_2 + -0x14);
    puVar25 = param_2 + -5;
    puVar24 = (undefined8 *)((long)param_2 + -0x3c);
    puVar10 = param_1;
LAB_10aad513c:
    param_1 = puVar10;
    uVar12 = (long)param_2 - (long)param_1;
    uVar9 = ((long)uVar12 >> 2) * -0x3333333333333333;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
            *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
          return;
        }
        uVar28 = param_1[1];
        uVar11 = *param_1;
        uVar32 = *(undefined4 *)(param_1 + 2);
        uVar29 = *(undefined8 *)((long)param_2 + -0xc);
        uVar27 = *(undefined8 *)((long)param_2 + -0x14);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + -4);
        param_1[1] = uVar29;
        *param_1 = uVar27;
        *(undefined4 *)((long)param_2 + -4) = uVar32;
        *(undefined8 *)((long)param_2 + -0xc) = uVar28;
        *(undefined8 *)((long)param_2 + -0x14) = uVar11;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        fVar26 = *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4);
        fVar30 = *(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1);
        if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) < fVar26) {
          if (fVar30 <= fVar26) {
            uVar27 = param_1[1];
            uVar11 = *param_1;
            uVar32 = *(undefined4 *)(param_1 + 2);
            param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
            *param_1 = *(undefined8 *)((long)param_1 + 0x14);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
            *(undefined8 *)((long)param_1 + 0x1c) = uVar27;
            *(undefined8 *)((long)param_1 + 0x14) = uVar11;
            *(undefined4 *)((long)param_1 + 0x24) = uVar32;
            if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
                *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
              return;
            }
            uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
            uVar11 = *(undefined8 *)((long)param_1 + 0x14);
            uVar32 = *(undefined4 *)((long)param_1 + 0x24);
            uVar5 = *(undefined4 *)((long)param_2 + -4);
            uVar28 = *puVar22;
            *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + -0xc);
            *(undefined8 *)((long)param_1 + 0x14) = uVar28;
            *(undefined4 *)((long)param_1 + 0x24) = uVar5;
          }
          else {
            uVar27 = param_1[1];
            uVar11 = *param_1;
            uVar32 = *(undefined4 *)(param_1 + 2);
            uVar29 = *(undefined8 *)((long)param_2 + -0xc);
            uVar28 = *puVar22;
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + -4);
            param_1[1] = uVar29;
            *param_1 = uVar28;
          }
          *(undefined4 *)((long)param_2 + -4) = uVar32;
          *(undefined8 *)((long)param_2 + -0xc) = uVar27;
          *puVar22 = uVar11;
          return;
        }
        if (fVar30 <= fVar26) {
          return;
        }
        uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
        uVar11 = *(undefined8 *)((long)param_1 + 0x14);
        uVar5 = *(undefined4 *)((long)param_1 + 0x24);
        uVar32 = *(undefined4 *)((long)param_2 + -4);
        uVar28 = *puVar22;
        *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + -0xc);
        *(undefined8 *)((long)param_1 + 0x14) = uVar28;
        *(undefined4 *)((long)param_1 + 0x24) = uVar32;
        *(undefined4 *)((long)param_2 + -4) = uVar5;
        *(undefined8 *)((long)param_2 + -0xc) = uVar27;
        *puVar22 = uVar11;
LAB_10aad6024:
        if (*(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4) <=
            *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
          return;
        }
        uVar27 = param_1[1];
        uVar11 = *param_1;
        uVar32 = *(undefined4 *)(param_1 + 2);
        param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
        *param_1 = *(undefined8 *)((long)param_1 + 0x14);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = uVar27;
        *(undefined8 *)((long)param_1 + 0x14) = uVar11;
        *(undefined4 *)((long)param_1 + 0x24) = uVar32;
        return;
      }
      if (uVar9 == 4) {
        puVar10 = (undefined8 *)((long)param_1 + 0x14);
        puVar24 = param_1 + 5;
        fVar26 = *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4);
        fVar30 = *(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34);
        if (fVar26 <= *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
          if (fVar26 < fVar30) {
            uVar32 = *(undefined4 *)((long)param_1 + 0x24);
            uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
            uVar11 = *puVar10;
            *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
            *puVar10 = *puVar24;
            *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
            param_1[6] = uVar27;
            *puVar24 = uVar11;
            *(undefined4 *)(param_1 + 7) = uVar32;
            if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) <
                *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
              uVar32 = *(undefined4 *)(param_1 + 2);
              uVar27 = param_1[1];
              uVar11 = *param_1;
              param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
              *param_1 = *puVar10;
              *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
              *(undefined8 *)((long)param_1 + 0x1c) = uVar27;
              *puVar10 = uVar11;
              *(undefined4 *)((long)param_1 + 0x24) = uVar32;
            }
          }
        }
        else {
          if (fVar30 <= fVar26) {
            uVar32 = *(undefined4 *)(param_1 + 2);
            uVar27 = param_1[1];
            uVar11 = *param_1;
            param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
            *param_1 = *puVar10;
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
            *(undefined8 *)((long)param_1 + 0x1c) = uVar27;
            *puVar10 = uVar11;
            *(undefined4 *)((long)param_1 + 0x24) = uVar32;
            if (*(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34) <=
                *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) goto LAB_10aad6294;
            uVar32 = *(undefined4 *)((long)param_1 + 0x24);
            uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
            uVar11 = *puVar10;
            *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
            *puVar10 = *puVar24;
            *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
          }
          else {
            uVar32 = *(undefined4 *)(param_1 + 2);
            uVar27 = param_1[1];
            uVar11 = *param_1;
            param_1[1] = param_1[6];
            *param_1 = *puVar24;
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 7);
          }
          param_1[6] = uVar27;
          *puVar24 = uVar11;
          *(undefined4 *)(param_1 + 7) = uVar32;
        }
LAB_10aad6294:
        if (*(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34) <
            *(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1)) {
          uVar32 = *(undefined4 *)(param_1 + 7);
          uVar27 = param_1[6];
          uVar11 = *puVar24;
          uVar5 = *(undefined4 *)((long)param_2 + -4);
          uVar28 = *puVar22;
          param_1[6] = *(undefined8 *)((long)param_2 + -0xc);
          *puVar24 = uVar28;
          *(undefined4 *)(param_1 + 7) = uVar5;
          *(undefined8 *)((long)param_2 + -0xc) = uVar27;
          *puVar22 = uVar11;
          *(undefined4 *)((long)param_2 + -4) = uVar32;
          if (*(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4) <
              *(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34)) {
            uVar32 = *(undefined4 *)((long)param_1 + 0x24);
            uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
            uVar11 = *puVar10;
            *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
            *puVar10 = *puVar24;
            *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
            param_1[6] = uVar27;
            *puVar24 = uVar11;
            *(undefined4 *)(param_1 + 7) = uVar32;
            if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) <
                *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
              uVar32 = *(undefined4 *)(param_1 + 2);
              uVar27 = param_1[1];
              uVar11 = *param_1;
              param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
              *param_1 = *puVar10;
              *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
              *(undefined8 *)((long)param_1 + 0x1c) = uVar27;
              *puVar10 = uVar11;
              *(undefined4 *)((long)param_1 + 0x24) = uVar32;
            }
          }
        }
        return;
      }
      if (uVar9 == 5) {
        FUN_10aad618c(param_1,(long)param_1 + 0x14,param_1 + 5,(long)param_1 + 0x3c);
        if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
            *(float *)((long)param_1 + 0x44) * *(float *)(param_1 + 9)) {
          return;
        }
        uVar27 = *(undefined8 *)((long)param_1 + 0x44);
        uVar11 = *(undefined8 *)((long)param_1 + 0x3c);
        uVar32 = *(undefined4 *)((long)param_1 + 0x4c);
        uVar5 = *(undefined4 *)((long)param_2 + -4);
        uVar28 = *(undefined8 *)((long)param_2 + -0x14);
        *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + -0xc);
        *(undefined8 *)((long)param_1 + 0x3c) = uVar28;
        *(undefined4 *)((long)param_1 + 0x4c) = uVar5;
        *(undefined4 *)((long)param_2 + -4) = uVar32;
        *(undefined8 *)((long)param_2 + -0xc) = uVar27;
        *(undefined8 *)((long)param_2 + -0x14) = uVar11;
        if (*(float *)((long)param_1 + 0x44) * *(float *)(param_1 + 9) <=
            *(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34)) {
          return;
        }
        uVar32 = *(undefined4 *)(param_1 + 7);
        uVar27 = param_1[6];
        uVar11 = param_1[5];
        param_1[6] = *(undefined8 *)((long)param_1 + 0x44);
        param_1[5] = *(undefined8 *)((long)param_1 + 0x3c);
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)((long)param_1 + 0x4c);
        *(undefined8 *)((long)param_1 + 0x44) = uVar27;
        *(undefined8 *)((long)param_1 + 0x3c) = uVar11;
        *(undefined4 *)((long)param_1 + 0x4c) = uVar32;
        if (*(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34) <=
            *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
          return;
        }
        uVar32 = *(undefined4 *)((long)param_1 + 0x24);
        uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
        uVar11 = *(undefined8 *)((long)param_1 + 0x14);
        *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
        *(undefined8 *)((long)param_1 + 0x14) = param_1[5];
        *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
        param_1[6] = uVar27;
        param_1[5] = uVar11;
        *(undefined4 *)(param_1 + 7) = uVar32;
        goto LAB_10aad6024;
      }
    }
    if ((long)uVar12 < 0x1e0) {
      puVar10 = (undefined8 *)((long)param_1 + 0x14);
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar10 == param_2) {
          return;
        }
        lVar14 = 0x14;
        puVar22 = param_1;
        do {
          fVar26 = *(float *)((long)puVar22 + 0x1c);
          fVar30 = *(float *)(puVar22 + 4);
          fVar31 = fVar26 * fVar30;
          if (*(float *)(puVar22 + 1) * *(float *)((long)puVar22 + 0xc) < fVar31) {
            uVar11 = *puVar10;
            uVar32 = *(undefined4 *)((long)puVar22 + 0x24);
            lVar7 = 0;
            do {
              lVar18 = lVar7;
              puVar10 = (undefined8 *)((long)puVar22 + lVar18);
              *(undefined8 *)((long)puVar10 + 0x1c) = puVar10[1];
              *(undefined8 *)((long)puVar10 + 0x14) = *puVar10;
              *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)(puVar10 + 2);
              if (lVar14 + lVar18 == 0) {
LAB_10aad60f8:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10aad60fc);
                (*pcVar8)();
              }
              lVar7 = lVar18 + -0x14;
            } while (*(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1) < fVar31);
            *(undefined8 *)((long)puVar22 + lVar18) = uVar11;
            *(float *)((long)puVar22 + lVar18 + 8) = fVar26;
            *(float *)((long)puVar22 + lVar18 + 0xc) = fVar30;
            *(undefined4 *)((long)puVar22 + lVar18 + 0x10) = uVar32;
          }
          puVar22 = (undefined8 *)((long)puVar22 + 0x14);
          lVar14 = lVar14 + 0x14;
          puVar10 = (undefined8 *)((long)param_1 + lVar14);
          if (puVar10 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || puVar10 == param_2) {
        return;
      }
      lVar14 = 0;
      puVar22 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar16 = uVar9 - 2 >> 1;
      uVar21 = uVar16;
      goto LAB_10aad5d98;
    }
    puVar10 = (undefined8 *)((long)param_1 + (uVar9 >> 1) * 0x14);
    fVar26 = *(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1);
    if (uVar12 < 0xa01) {
      fVar30 = *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc);
      if (fVar30 <= *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc)) {
        if (fVar30 < fVar26) {
          uVar28 = param_1[1];
          uVar11 = *param_1;
          uVar32 = *(undefined4 *)(param_1 + 2);
          uVar29 = *(undefined8 *)((long)param_2 + -0xc);
          uVar27 = *puVar22;
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + -4);
          param_1[1] = uVar29;
          *param_1 = uVar27;
          *(undefined4 *)((long)param_2 + -4) = uVar32;
          *(undefined8 *)((long)param_2 + -0xc) = uVar28;
          *puVar22 = uVar11;
          if (*(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc) <
              *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
            uVar28 = puVar10[1];
            uVar11 = *puVar10;
            uVar32 = *(undefined4 *)(puVar10 + 2);
            uVar29 = param_1[1];
            uVar27 = *param_1;
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_1 + 2);
            puVar10[1] = uVar29;
            *puVar10 = uVar27;
            *(undefined4 *)(param_1 + 2) = uVar32;
            param_1[1] = uVar28;
            *param_1 = uVar11;
          }
        }
      }
      else {
        if (fVar26 <= fVar30) {
          uVar28 = puVar10[1];
          uVar11 = *puVar10;
          uVar32 = *(undefined4 *)(puVar10 + 2);
          uVar29 = param_1[1];
          uVar27 = *param_1;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_1 + 2);
          puVar10[1] = uVar29;
          *puVar10 = uVar27;
          *(undefined4 *)(param_1 + 2) = uVar32;
          param_1[1] = uVar28;
          *param_1 = uVar11;
          if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
              *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) goto LAB_10aad5810;
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          uStack_70 = *(undefined4 *)(param_1 + 2);
          uVar27 = *(undefined8 *)((long)param_2 + -0xc);
          uVar11 = *puVar22;
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + -4);
          param_1[1] = uVar27;
          *param_1 = uVar11;
        }
        else {
          uStack_78 = puVar10[1];
          uStack_80 = *puVar10;
          uStack_70 = *(undefined4 *)(puVar10 + 2);
          uVar27 = *(undefined8 *)((long)param_2 + -0xc);
          uVar11 = *puVar22;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((long)param_2 + -4);
          puVar10[1] = uVar27;
          *puVar10 = uVar11;
        }
        *(undefined4 *)((long)param_2 + -4) = uStack_70;
        *(undefined8 *)((long)param_2 + -0xc) = uStack_78;
        *puVar22 = uStack_80;
      }
    }
    else {
      fVar30 = *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc);
      if (fVar30 <= *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
        if (fVar30 < fVar26) {
          uVar28 = puVar10[1];
          uVar11 = *puVar10;
          uVar32 = *(undefined4 *)(puVar10 + 2);
          uVar29 = *(undefined8 *)((long)param_2 + -0xc);
          uVar27 = *puVar22;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((long)param_2 + -4);
          puVar10[1] = uVar29;
          *puVar10 = uVar27;
          *(undefined4 *)((long)param_2 + -4) = uVar32;
          *(undefined8 *)((long)param_2 + -0xc) = uVar28;
          *puVar22 = uVar11;
          if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) <
              *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc)) {
            uVar28 = param_1[1];
            uVar11 = *param_1;
            uVar32 = *(undefined4 *)(param_1 + 2);
            uVar29 = puVar10[1];
            uVar27 = *puVar10;
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar10 + 2);
            param_1[1] = uVar29;
            *param_1 = uVar27;
            *(undefined4 *)(puVar10 + 2) = uVar32;
            puVar10[1] = uVar28;
            *puVar10 = uVar11;
          }
        }
      }
      else {
        if (fVar26 <= fVar30) {
          uVar28 = param_1[1];
          uVar11 = *param_1;
          uVar32 = *(undefined4 *)(param_1 + 2);
          uVar29 = puVar10[1];
          uVar27 = *puVar10;
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar10 + 2);
          param_1[1] = uVar29;
          *param_1 = uVar27;
          *(undefined4 *)(puVar10 + 2) = uVar32;
          puVar10[1] = uVar28;
          *puVar10 = uVar11;
          if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
              *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc)) goto LAB_10aad53a8;
          uStack_78 = puVar10[1];
          uStack_80 = *puVar10;
          uStack_70 = *(undefined4 *)(puVar10 + 2);
          uVar27 = *(undefined8 *)((long)param_2 + -0xc);
          uVar11 = *puVar22;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((long)param_2 + -4);
          puVar10[1] = uVar27;
          *puVar10 = uVar11;
        }
        else {
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          uStack_70 = *(undefined4 *)(param_1 + 2);
          uVar27 = *(undefined8 *)((long)param_2 + -0xc);
          uVar11 = *puVar22;
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + -4);
          param_1[1] = uVar27;
          *param_1 = uVar11;
        }
        *(undefined4 *)((long)param_2 + -4) = uStack_70;
        *(undefined8 *)((long)param_2 + -0xc) = uStack_78;
        *puVar22 = uStack_80;
      }
LAB_10aad53a8:
      puVar13 = (undefined8 *)((long)puVar10 + -0x14);
      fVar26 = *(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1);
      fVar30 = *(float *)(param_2 + -4) * *(float *)((long)param_2 + -0x1c);
      if (fVar26 <= *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
        if (fVar26 < fVar30) {
          uVar28 = *(undefined8 *)((long)puVar10 + -0xc);
          uVar11 = *puVar13;
          uVar32 = *(undefined4 *)((long)puVar10 + -4);
          uVar29 = param_2[-4];
          uVar27 = *puVar25;
          *(undefined4 *)((long)puVar10 + -4) = *(undefined4 *)(param_2 + -3);
          *(undefined8 *)((long)puVar10 + -0xc) = uVar29;
          *puVar13 = uVar27;
          *(undefined4 *)(param_2 + -3) = uVar32;
          param_2[-4] = uVar28;
          *puVar25 = uVar11;
          if (*(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4) <
              *(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1)) {
            uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
            uVar11 = *(undefined8 *)((long)param_1 + 0x14);
            uVar5 = *(undefined4 *)((long)param_1 + 0x24);
            uVar32 = *(undefined4 *)((long)puVar10 + -4);
            uVar28 = *puVar13;
            *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)puVar10 + -0xc);
            *(undefined8 *)((long)param_1 + 0x14) = uVar28;
            *(undefined4 *)((long)param_1 + 0x24) = uVar32;
            *(undefined4 *)((long)puVar10 + -4) = uVar5;
            *(undefined8 *)((long)puVar10 + -0xc) = uVar27;
            *puVar13 = uVar11;
          }
        }
      }
      else {
        if (fVar30 <= fVar26) {
          uVar27 = *(undefined8 *)((long)param_1 + 0x1c);
          uVar11 = *(undefined8 *)((long)param_1 + 0x14);
          uVar5 = *(undefined4 *)((long)param_1 + 0x24);
          uVar32 = *(undefined4 *)((long)puVar10 + -4);
          uVar28 = *puVar13;
          *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)puVar10 + -0xc);
          *(undefined8 *)((long)param_1 + 0x14) = uVar28;
          *(undefined4 *)((long)param_1 + 0x24) = uVar32;
          *(undefined4 *)((long)puVar10 + -4) = uVar5;
          *(undefined8 *)((long)puVar10 + -0xc) = uVar27;
          *puVar13 = uVar11;
          if (*(float *)(param_2 + -4) * *(float *)((long)param_2 + -0x1c) <=
              *(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1)) goto LAB_10aad5560;
          uVar29 = *(undefined8 *)((long)puVar10 + -0xc);
          uVar27 = *puVar13;
          uVar32 = *(undefined4 *)((long)puVar10 + -4);
          uVar28 = param_2[-4];
          uVar11 = *puVar25;
          *(undefined4 *)((long)puVar10 + -4) = *(undefined4 *)(param_2 + -3);
          *(undefined8 *)((long)puVar10 + -0xc) = uVar28;
          *puVar13 = uVar11;
        }
        else {
          uVar29 = *(undefined8 *)((long)param_1 + 0x1c);
          uVar27 = *(undefined8 *)((long)param_1 + 0x14);
          uVar32 = *(undefined4 *)((long)param_1 + 0x24);
          uVar5 = *(undefined4 *)(param_2 + -3);
          uVar11 = *puVar25;
          *(undefined8 *)((long)param_1 + 0x1c) = param_2[-4];
          *(undefined8 *)((long)param_1 + 0x14) = uVar11;
          *(undefined4 *)((long)param_1 + 0x24) = uVar5;
        }
        *(undefined4 *)(param_2 + -3) = uVar32;
        param_2[-4] = uVar29;
        *puVar25 = uVar27;
      }
LAB_10aad5560:
      fVar26 = *(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4);
      fVar30 = *(float *)((long)param_2 + -0x34) * *(float *)(param_2 + -6);
      if (fVar26 <= *(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34)) {
        if (fVar26 < fVar30) {
          uVar28 = *(undefined8 *)((long)puVar10 + 0x1c);
          uVar11 = *(undefined8 *)((long)puVar10 + 0x14);
          uVar32 = *(undefined4 *)((long)puVar10 + 0x24);
          uVar29 = *(undefined8 *)((long)param_2 + -0x34);
          uVar27 = *puVar24;
          *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)((long)param_2 + -0x2c);
          *(undefined8 *)((long)puVar10 + 0x1c) = uVar29;
          *(undefined8 *)((long)puVar10 + 0x14) = uVar27;
          *(undefined4 *)((long)param_2 + -0x2c) = uVar32;
          *(undefined8 *)((long)param_2 + -0x34) = uVar28;
          *puVar24 = uVar11;
          if (*(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34) <
              *(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4)) {
            uVar27 = param_1[6];
            uVar11 = param_1[5];
            uVar32 = *(undefined4 *)(param_1 + 7);
            uVar5 = *(undefined4 *)((long)puVar10 + 0x24);
            uVar28 = *(undefined8 *)((long)puVar10 + 0x14);
            param_1[6] = *(undefined8 *)((long)puVar10 + 0x1c);
            param_1[5] = uVar28;
            *(undefined4 *)(param_1 + 7) = uVar5;
            *(undefined4 *)((long)puVar10 + 0x24) = uVar32;
            *(undefined8 *)((long)puVar10 + 0x1c) = uVar27;
            *(undefined8 *)((long)puVar10 + 0x14) = uVar11;
          }
        }
      }
      else {
        if (fVar30 <= fVar26) {
          uVar27 = param_1[6];
          uVar11 = param_1[5];
          uVar32 = *(undefined4 *)(param_1 + 7);
          uVar5 = *(undefined4 *)((long)puVar10 + 0x24);
          uVar28 = *(undefined8 *)((long)puVar10 + 0x14);
          param_1[6] = *(undefined8 *)((long)puVar10 + 0x1c);
          param_1[5] = uVar28;
          *(undefined4 *)(param_1 + 7) = uVar5;
          *(undefined4 *)((long)puVar10 + 0x24) = uVar32;
          *(undefined8 *)((long)puVar10 + 0x1c) = uVar27;
          *(undefined8 *)((long)puVar10 + 0x14) = uVar11;
          if (*(float *)((long)param_2 + -0x34) * *(float *)(param_2 + -6) <=
              *(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4)) goto LAB_10aad5698;
          uVar29 = *(undefined8 *)((long)puVar10 + 0x1c);
          uVar27 = *(undefined8 *)((long)puVar10 + 0x14);
          uVar32 = *(undefined4 *)((long)puVar10 + 0x24);
          uVar28 = *(undefined8 *)((long)param_2 + -0x34);
          uVar11 = *puVar24;
          *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)((long)param_2 + -0x2c);
          *(undefined8 *)((long)puVar10 + 0x1c) = uVar28;
          *(undefined8 *)((long)puVar10 + 0x14) = uVar11;
        }
        else {
          uVar29 = param_1[6];
          uVar27 = param_1[5];
          uVar32 = *(undefined4 *)(param_1 + 7);
          uVar5 = *(undefined4 *)((long)param_2 + -0x2c);
          uVar11 = *puVar24;
          param_1[6] = *(undefined8 *)((long)param_2 + -0x34);
          param_1[5] = uVar11;
          *(undefined4 *)(param_1 + 7) = uVar5;
        }
        *(undefined4 *)((long)param_2 + -0x2c) = uVar32;
        *(undefined8 *)((long)param_2 + -0x34) = uVar29;
        *puVar24 = uVar27;
      }
LAB_10aad5698:
      fVar26 = *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc);
      fVar30 = *(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4);
      if (fVar26 <= *(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1)) {
        if (fVar26 < fVar30) {
          uVar27 = puVar10[1];
          uVar11 = *puVar10;
          uVar32 = *(undefined4 *)(puVar10 + 2);
          puVar10[1] = *(undefined8 *)((long)puVar10 + 0x1c);
          *puVar10 = *(undefined8 *)((long)puVar10 + 0x14);
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((long)puVar10 + 0x24);
          *(undefined4 *)((long)puVar10 + 0x24) = uVar32;
          *(undefined8 *)((long)puVar10 + 0x1c) = uVar27;
          *(undefined8 *)((long)puVar10 + 0x14) = uVar11;
          if (*(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1) <
              *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc)) {
            uVar27 = *(undefined8 *)((long)puVar10 + -0xc);
            uVar11 = *puVar13;
            uVar32 = *(undefined4 *)((long)puVar10 + -4);
            *(undefined8 *)((long)puVar10 + -0xc) = puVar10[1];
            *puVar13 = *puVar10;
            *(undefined4 *)((long)puVar10 + -4) = *(undefined4 *)(puVar10 + 2);
            *(undefined4 *)(puVar10 + 2) = uVar32;
            puVar10[1] = uVar27;
            *puVar10 = uVar11;
          }
        }
      }
      else {
        if (fVar30 <= fVar26) {
          uVar27 = *(undefined8 *)((long)puVar10 + -0xc);
          uVar11 = *puVar13;
          uVar32 = *(undefined4 *)((long)puVar10 + -4);
          *(undefined8 *)((long)puVar10 + -0xc) = puVar10[1];
          *puVar13 = *puVar10;
          *(undefined4 *)((long)puVar10 + -4) = *(undefined4 *)(puVar10 + 2);
          *(undefined4 *)(puVar10 + 2) = uVar32;
          puVar10[1] = uVar27;
          *puVar10 = uVar11;
          if (*(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4) <=
              *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc)) goto LAB_10aad57e0;
          uStack_78 = puVar10[1];
          uStack_80 = *puVar10;
          uStack_70 = *(undefined4 *)(puVar10 + 2);
          puVar10[1] = *(undefined8 *)((long)puVar10 + 0x1c);
          *puVar10 = *(undefined8 *)((long)puVar10 + 0x14);
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((long)puVar10 + 0x24);
        }
        else {
          uStack_78 = *(undefined8 *)((long)puVar10 + -0xc);
          uStack_80 = *puVar13;
          uStack_70 = *(undefined4 *)((long)puVar10 + -4);
          *(undefined8 *)((long)puVar10 + -0xc) = *(undefined8 *)((long)puVar10 + 0x1c);
          *puVar13 = *(undefined8 *)((long)puVar10 + 0x14);
          *(undefined4 *)((long)puVar10 + -4) = *(undefined4 *)((long)puVar10 + 0x24);
        }
        *(undefined4 *)((long)puVar10 + 0x24) = uStack_70;
        *(undefined8 *)((long)puVar10 + 0x1c) = uStack_78;
        *(undefined8 *)((long)puVar10 + 0x14) = uStack_80;
      }
LAB_10aad57e0:
      uVar28 = param_1[1];
      uVar11 = *param_1;
      uVar32 = *(undefined4 *)(param_1 + 2);
      uVar29 = puVar10[1];
      uVar27 = *puVar10;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar10 + 2);
      param_1[1] = uVar29;
      *param_1 = uVar27;
      *(undefined4 *)(puVar10 + 2) = uVar32;
      puVar10[1] = uVar28;
      *puVar10 = uVar11;
    }
LAB_10aad5810:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      fVar30 = *(float *)(param_1 + 1);
      fVar26 = *(float *)((long)param_1 + 0xc);
      fVar31 = fVar30 * fVar26;
      if (*(float *)((long)param_1 - 0xc) * *(float *)(param_1 + -1) <= fVar31) {
        uVar11 = *param_1;
        uVar32 = *(undefined4 *)(param_1 + 2);
        puVar13 = (undefined8 *)((long)param_1 + 0x14);
        if (fVar31 <= *(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1)) {
          do {
            puVar10 = puVar13;
            if (param_2 <= puVar10) break;
            puVar13 = (undefined8 *)((long)puVar10 + 0x14);
          } while (fVar31 <= *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc));
        }
        else {
          do {
            puVar10 = puVar13;
            if (puVar10 == param_2) goto LAB_10aad60f8;
            puVar13 = (undefined8 *)((long)puVar10 + 0x14);
          } while (fVar31 <= *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc));
        }
        puVar13 = param_2;
        puVar15 = param_2;
        if (puVar10 < param_2) {
          do {
            if (puVar15 == param_1) goto LAB_10aad60f8;
            puVar13 = (undefined8 *)((long)puVar15 - 0x14);
            pfVar1 = (float *)((long)puVar15 - 0xc);
            pfVar6 = (float *)(puVar15 + -1);
            puVar15 = puVar13;
          } while (*pfVar1 * *pfVar6 < fVar31);
        }
        if (puVar10 < puVar13) {
          do {
            uVar29 = puVar10[1];
            uVar27 = *puVar10;
            uVar5 = *(undefined4 *)(puVar10 + 2);
            uVar33 = puVar13[1];
            uVar28 = *puVar13;
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar13 + 2);
            puVar10[1] = uVar33;
            *puVar10 = uVar28;
            *(undefined4 *)(puVar13 + 2) = uVar5;
            puVar13[1] = uVar29;
            *puVar13 = uVar27;
            puVar15 = puVar10;
            do {
              puVar10 = (undefined8 *)((long)puVar15 + 0x14);
              if (puVar10 == param_2) goto LAB_10aad60f8;
              pfVar1 = (float *)((long)puVar15 + 0x1c);
              pfVar6 = (float *)(puVar15 + 4);
              puVar23 = puVar13;
              puVar15 = puVar10;
            } while (fVar31 <= *pfVar1 * *pfVar6);
            do {
              if (puVar23 == param_1) goto LAB_10aad60f8;
              puVar13 = (undefined8 *)((long)puVar23 - 0x14);
              pfVar1 = (float *)((long)puVar23 - 0xc);
              pfVar6 = (float *)(puVar23 + -1);
              puVar23 = puVar13;
            } while (*pfVar1 * *pfVar6 < fVar31);
          } while (puVar10 < puVar13);
        }
        if ((undefined8 *)((long)puVar10 - 0x14U) != param_1) {
          uVar28 = *(undefined8 *)((long)puVar10 - 0xc);
          uVar27 = *(undefined8 *)((long)puVar10 - 0x14U);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)puVar10 - 4);
          param_1[1] = uVar28;
          *param_1 = uVar27;
        }
        param_4 = 0;
        *(undefined8 *)((long)puVar10 - 0x14) = uVar11;
        *(float *)((long)puVar10 - 0xc) = fVar30;
        *(float *)(puVar10 + -1) = fVar26;
        *(undefined4 *)((long)puVar10 - 4) = uVar32;
        goto LAB_10aad513c;
      }
    }
    else {
      fVar30 = *(float *)(param_1 + 1);
      fVar26 = *(float *)((long)param_1 + 0xc);
      fVar31 = fVar30 * fVar26;
    }
    lVar14 = 0;
    uVar11 = *param_1;
    uVar32 = *(undefined4 *)(param_1 + 2);
    do {
      if ((undefined8 *)((long)param_1 + lVar14 + 0x14) == param_2) goto LAB_10aad60f8;
      lVar7 = lVar14 + 0x1c;
      lVar18 = lVar14 + 0x20;
      lVar14 = lVar14 + 0x14;
    } while (fVar31 < *(float *)((long)param_1 + lVar7) * *(float *)((long)param_1 + lVar18));
    puVar13 = (undefined8 *)((long)param_1 + lVar14);
    puVar10 = param_2;
    if (lVar14 == 0x14) {
      do {
        puVar15 = puVar10;
        if (puVar10 <= puVar13) break;
        puVar15 = (undefined8 *)((long)puVar10 + -0x14);
        pfVar1 = (float *)((long)puVar10 + -0xc);
        pfVar6 = (float *)(puVar10 + -1);
        puVar10 = puVar15;
      } while (*pfVar1 * *pfVar6 <= fVar31);
    }
    else {
      do {
        if (puVar10 == param_1) goto LAB_10aad60f8;
        puVar15 = (undefined8 *)((long)puVar10 - 0x14);
        pfVar1 = (float *)((long)puVar10 - 0xc);
        pfVar6 = (float *)(puVar10 + -1);
        puVar10 = puVar15;
      } while (*pfVar1 * *pfVar6 <= fVar31);
    }
    puVar17 = puVar15;
    puVar10 = puVar13;
    puVar23 = puVar13;
    if (puVar13 < puVar15) {
      do {
        uVar29 = puVar23[1];
        uVar27 = *puVar23;
        uVar5 = *(undefined4 *)(puVar23 + 2);
        uVar33 = puVar17[1];
        uVar28 = *puVar17;
        *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar17 + 2);
        puVar23[1] = uVar33;
        *puVar23 = uVar28;
        *(undefined4 *)(puVar17 + 2) = uVar5;
        puVar17[1] = uVar29;
        *puVar17 = uVar27;
        do {
          puVar10 = (undefined8 *)((long)puVar23 + 0x14);
          if (puVar10 == param_2) goto LAB_10aad60f8;
          pfVar1 = (float *)((long)puVar23 + 0x1c);
          pfVar6 = (float *)(puVar23 + 4);
          puVar23 = puVar10;
        } while (fVar31 < *pfVar1 * *pfVar6);
        do {
          if (puVar17 == param_1) goto LAB_10aad60f8;
          puVar19 = (undefined8 *)((long)puVar17 - 0x14);
          pfVar1 = (float *)((long)puVar17 - 0xc);
          pfVar6 = (float *)(puVar17 + -1);
          puVar17 = puVar19;
        } while (*pfVar1 * *pfVar6 <= fVar31);
      } while (puVar10 < puVar19);
    }
    puVar23 = (undefined8 *)((long)puVar10 - 0x14);
    if (puVar23 != param_1) {
      uVar28 = *(undefined8 *)((long)puVar10 - 0xc);
      uVar27 = *puVar23;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)puVar10 - 4);
      param_1[1] = uVar28;
      *param_1 = uVar27;
    }
    *(undefined8 *)((long)puVar10 - 0x14) = uVar11;
    *(float *)((long)puVar10 - 0xc) = fVar30;
    *(float *)(puVar10 + -1) = fVar26;
    *(undefined4 *)((long)puVar10 - 4) = uVar32;
    if (puVar13 < puVar15) goto LAB_10aad59bc;
    puVar13 = param_1;
    FUN_10aad6348(param_1,puVar23);
    puVar15 = puVar10;
    FUN_10aad6348(puVar10,param_2);
    if ((int)puVar15 == 0) goto code_r0x00010aad59ac;
    param_2 = puVar23;
    if (((ulong)puVar13 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10aad5cfc:
  puVar24 = puVar10;
  fVar26 = *(float *)((long)puVar22 + 0x1c);
  fVar30 = *(float *)(puVar22 + 4);
  fVar31 = fVar26 * fVar30;
  if (*(float *)(puVar22 + 1) * *(float *)((long)puVar22 + 0xc) < fVar31) {
    uVar11 = *puVar24;
    uVar32 = *(undefined4 *)((long)puVar22 + 0x24);
    lVar7 = lVar14;
    do {
      lVar18 = lVar7;
      puVar10 = (undefined8 *)((long)param_1 + lVar18);
      *(undefined8 *)((long)puVar10 + 0x1c) = puVar10[1];
      *(undefined8 *)((long)puVar10 + 0x14) = *puVar10;
      *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)(puVar10 + 2);
      puVar22 = param_1;
      if (lVar18 == 0) goto LAB_10aad5d60;
      lVar7 = lVar18 + -0x14;
    } while (*(float *)((long)puVar10 + -0xc) * *(float *)(puVar10 + -1) < fVar31);
    puVar22 = (undefined8 *)((long)param_1 + lVar18);
LAB_10aad5d60:
    *puVar22 = uVar11;
    *(float *)(puVar22 + 1) = fVar26;
    *(float *)((long)puVar22 + 0xc) = fVar30;
    *(undefined4 *)(puVar22 + 2) = uVar32;
  }
  lVar14 = lVar14 + 0x14;
  puVar10 = (undefined8 *)((long)puVar24 + 0x14U);
  puVar22 = puVar24;
  if ((undefined8 *)((long)puVar24 + 0x14U) == param_2) {
    return;
  }
  goto LAB_10aad5cfc;
LAB_10aad5d98:
  do {
    if ((long)uVar21 <= (long)uVar16) {
      uVar20 = uVar21 << 1 | 1;
      puVar10 = (undefined8 *)((long)param_1 + uVar20 * 0x14);
      uVar2 = uVar21 * 2 + 2;
      if (((long)uVar2 < (long)uVar9) &&
         (*(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4) <
          *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc))) {
        puVar10 = (undefined8 *)((long)puVar10 + 0x14);
        uVar20 = uVar2;
      }
      puVar22 = (undefined8 *)((long)param_1 + uVar21 * 0x14);
      fVar26 = *(float *)(puVar22 + 1);
      fVar30 = *(float *)((long)puVar22 + 0xc);
      fVar31 = fVar26 * fVar30;
      if (*(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc) <= fVar31) {
        uVar11 = *puVar22;
        uVar32 = *(undefined4 *)(puVar22 + 2);
        do {
          puVar24 = puVar10;
          uVar28 = puVar24[1];
          uVar27 = *puVar24;
          *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar24 + 2);
          puVar22[1] = uVar28;
          *puVar22 = uVar27;
          if ((long)uVar16 < (long)uVar20) break;
          uVar3 = uVar20 << 1 | 1;
          puVar10 = (undefined8 *)((long)param_1 + uVar3 * 0x14);
          uVar2 = uVar20 * 2 + 2;
          uVar20 = uVar3;
          if (((long)uVar2 < (long)uVar9) &&
             (*(float *)((long)puVar10 + 0x1c) * *(float *)(puVar10 + 4) <
              *(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc))) {
            puVar10 = (undefined8 *)((long)puVar10 + 0x14);
            uVar20 = uVar2;
          }
          puVar22 = puVar24;
        } while (*(float *)(puVar10 + 1) * *(float *)((long)puVar10 + 0xc) <= fVar31);
        *puVar24 = uVar11;
        *(float *)(puVar24 + 1) = fVar26;
        *(float *)((long)puVar24 + 0xc) = fVar30;
        *(undefined4 *)(puVar24 + 2) = uVar32;
      }
    }
    bVar4 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar4);
  lVar14 = (uVar12 >> 2) * -0x3333333333333333;
  do {
    uVar27 = param_1[1];
    uVar11 = *param_1;
    uVar32 = *(undefined4 *)(param_1 + 2);
    puVar10 = param_1;
    uVar9 = 0;
    do {
      puVar22 = (undefined8 *)((long)puVar10 + uVar9 * 0x14 + 0x14);
      uVar21 = uVar9 << 1 | 1;
      uVar12 = uVar9 * 2 + 2;
      if (((long)uVar12 < lVar14) &&
         (*(float *)((long)puVar10 + uVar9 * 0x14 + 0x30) *
          *(float *)((long)puVar10 + uVar9 * 0x14 + 0x34) <
          *(float *)((long)puVar10 + uVar9 * 0x14 + 0x1c) *
          *(float *)((long)puVar10 + uVar9 * 0x14 + 0x20))) {
        puVar22 = (undefined8 *)((long)puVar10 + uVar9 * 0x14 + 0x28);
        uVar21 = uVar12;
      }
      uVar29 = puVar22[1];
      uVar28 = *puVar22;
      *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar22 + 2);
      puVar10[1] = uVar29;
      *puVar10 = uVar28;
      puVar10 = puVar22;
      uVar9 = uVar21;
    } while ((long)uVar21 <= (long)(lVar14 - 2U >> 1));
    puVar10 = (undefined8 *)((long)param_2 - 0x14);
    if (puVar22 == puVar10) {
      *(undefined4 *)(puVar22 + 2) = uVar32;
      puVar22[1] = uVar27;
      *puVar22 = uVar11;
    }
    else {
      uVar29 = *(undefined8 *)((long)param_2 - 0xc);
      uVar28 = *puVar10;
      *(undefined4 *)(puVar22 + 2) = *(undefined4 *)((long)param_2 - 4);
      puVar22[1] = uVar29;
      *puVar22 = uVar28;
      *(undefined4 *)((long)param_2 - 4) = uVar32;
      *(undefined8 *)((long)param_2 - 0xc) = uVar27;
      *puVar10 = uVar11;
      uVar9 = (long)puVar22 + (0x14 - (long)param_1);
      if (0x14 < (long)uVar9) {
        uVar9 = (uVar9 >> 2) * -0x3333333333333333 - 2 >> 1;
        puVar24 = (undefined8 *)((long)param_1 + uVar9 * 0x14);
        fVar26 = *(float *)(puVar22 + 1);
        fVar30 = *(float *)((long)puVar22 + 0xc);
        fVar31 = fVar26 * fVar30;
        if (fVar31 < *(float *)(puVar24 + 1) * *(float *)((long)puVar24 + 0xc)) {
          uVar11 = *puVar22;
          uVar32 = *(undefined4 *)(puVar22 + 2);
          do {
            puVar25 = puVar24;
            uVar28 = puVar25[1];
            uVar27 = *puVar25;
            *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(puVar25 + 2);
            puVar22[1] = uVar28;
            *puVar22 = uVar27;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar24 = (undefined8 *)((long)param_1 + uVar9 * 0x14);
            puVar22 = puVar25;
          } while (fVar31 < *(float *)(puVar24 + 1) * *(float *)((long)puVar24 + 0xc));
          *puVar25 = uVar11;
          *(float *)(puVar25 + 1) = fVar26;
          *(float *)((long)puVar25 + 0xc) = fVar30;
          *(undefined4 *)(puVar25 + 2) = uVar32;
        }
      }
    }
    bVar4 = lVar14 < 3;
    lVar14 = lVar14 + -1;
    param_2 = puVar10;
    if (bVar4) {
      return;
    }
  } while( true );
code_r0x00010aad59ac:
  if (((ulong)puVar13 & 1) == 0) {
LAB_10aad59bc:
    FUN_10aad50f0(param_1,puVar23,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10aad513c;
}



/* Entry: 10aad618c; end: 10aad6347;  */

void FUN_10aad618c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  fVar3 = *(float *)(param_2 + 1) * *(float *)((long)param_2 + 0xc);
  fVar6 = *(float *)(param_3 + 1) * *(float *)((long)param_3 + 0xc);
  if (fVar3 <= *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
    if (fVar3 < fVar6) {
      uVar2 = *(undefined4 *)(param_2 + 2);
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar1 = *(undefined4 *)(param_3 + 2);
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      *(undefined4 *)(param_2 + 2) = uVar1;
      param_3[1] = uVar5;
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 2) = uVar2;
      if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) <
          *(float *)(param_2 + 1) * *(float *)((long)param_2 + 0xc)) {
        uVar2 = *(undefined4 *)(param_1 + 2);
        uVar5 = param_1[1];
        uVar4 = *param_1;
        uVar1 = *(undefined4 *)(param_2 + 2);
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        *(undefined4 *)(param_1 + 2) = uVar1;
        param_2[1] = uVar5;
        *param_2 = uVar4;
        *(undefined4 *)(param_2 + 2) = uVar2;
      }
    }
  }
  else {
    if (fVar6 <= fVar3) {
      uVar2 = *(undefined4 *)(param_1 + 2);
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar1 = *(undefined4 *)(param_2 + 2);
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      *(undefined4 *)(param_1 + 2) = uVar1;
      param_2[1] = uVar5;
      *param_2 = uVar4;
      *(undefined4 *)(param_2 + 2) = uVar2;
      if (*(float *)(param_3 + 1) * *(float *)((long)param_3 + 0xc) <=
          *(float *)(param_2 + 1) * *(float *)((long)param_2 + 0xc)) goto LAB_10aad6294;
      uVar2 = *(undefined4 *)(param_2 + 2);
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar1 = *(undefined4 *)(param_3 + 2);
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      *(undefined4 *)(param_2 + 2) = uVar1;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 2);
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar1 = *(undefined4 *)(param_3 + 2);
      uVar7 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      *(undefined4 *)(param_1 + 2) = uVar1;
    }
    param_3[1] = uVar5;
    *param_3 = uVar4;
    *(undefined4 *)(param_3 + 2) = uVar2;
  }
LAB_10aad6294:
  if (*(float *)(param_3 + 1) * *(float *)((long)param_3 + 0xc) <
      *(float *)(param_4 + 1) * *(float *)((long)param_4 + 0xc)) {
    uVar2 = *(undefined4 *)(param_3 + 2);
    uVar5 = param_3[1];
    uVar4 = *param_3;
    uVar1 = *(undefined4 *)(param_4 + 2);
    uVar7 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    *(undefined4 *)(param_3 + 2) = uVar1;
    param_4[1] = uVar5;
    *param_4 = uVar4;
    *(undefined4 *)(param_4 + 2) = uVar2;
    if (*(float *)(param_2 + 1) * *(float *)((long)param_2 + 0xc) <
        *(float *)(param_3 + 1) * *(float *)((long)param_3 + 0xc)) {
      uVar2 = *(undefined4 *)(param_2 + 2);
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar1 = *(undefined4 *)(param_3 + 2);
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      *(undefined4 *)(param_2 + 2) = uVar1;
      param_3[1] = uVar5;
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 2) = uVar2;
      if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) <
          *(float *)(param_2 + 1) * *(float *)((long)param_2 + 0xc)) {
        uVar2 = *(undefined4 *)(param_1 + 2);
        uVar5 = param_1[1];
        uVar4 = *param_1;
        uVar1 = *(undefined4 *)(param_2 + 2);
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        *(undefined4 *)(param_1 + 2) = uVar1;
        param_2[1] = uVar5;
        *param_2 = uVar4;
        *(undefined4 *)(param_2 + 2) = uVar2;
      }
    }
  }
  return;
}



/* Entry: 10aad6348; end: 10aad677f;  */

bool FUN_10aad6348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  
  uVar4 = ((long)param_2 - (long)param_1 >> 2) * -0x3333333333333333;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
          *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
        return true;
      }
      uVar16 = *(undefined4 *)(param_1 + 2);
      uVar12 = param_1[1];
      uVar6 = *param_1;
      uVar2 = *(undefined4 *)((long)param_2 + -4);
      uVar14 = *(undefined8 *)((long)param_2 + -0x14);
      param_1[1] = *(undefined8 *)((long)param_2 + -0xc);
      *param_1 = uVar14;
      *(undefined4 *)(param_1 + 2) = uVar2;
      *(undefined8 *)((long)param_2 + -0xc) = uVar12;
      *(undefined8 *)((long)param_2 + -0x14) = uVar6;
      *(undefined4 *)((long)param_2 + -4) = uVar16;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      puVar5 = (undefined8 *)((long)param_2 + -0x14);
      fVar11 = *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4);
      fVar13 = *(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1);
      if (*(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc) < fVar11) {
        if (fVar13 <= fVar11) {
          uVar16 = *(undefined4 *)(param_1 + 2);
          uVar12 = param_1[1];
          uVar6 = *param_1;
          param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
          *param_1 = *(undefined8 *)((long)param_1 + 0x14);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
          *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
          *(undefined8 *)((long)param_1 + 0x14) = uVar6;
          *(undefined4 *)((long)param_1 + 0x24) = uVar16;
          if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
              *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
            return true;
          }
          uVar16 = *(undefined4 *)((long)param_1 + 0x24);
          uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
          uVar6 = *(undefined8 *)((long)param_1 + 0x14);
          uVar2 = *(undefined4 *)((long)param_2 + -4);
          uVar14 = *puVar5;
          *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + -0xc);
          *(undefined8 *)((long)param_1 + 0x14) = uVar14;
          *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        }
        else {
          uVar16 = *(undefined4 *)(param_1 + 2);
          uVar12 = param_1[1];
          uVar6 = *param_1;
          uVar2 = *(undefined4 *)((long)param_2 + -4);
          uVar14 = *puVar5;
          param_1[1] = *(undefined8 *)((long)param_2 + -0xc);
          *param_1 = uVar14;
          *(undefined4 *)(param_1 + 2) = uVar2;
        }
        *(undefined8 *)((long)param_2 + -0xc) = uVar12;
        *puVar5 = uVar6;
        *(undefined4 *)((long)param_2 + -4) = uVar16;
        return true;
      }
      if (fVar13 <= fVar11) {
        return true;
      }
      uVar2 = *(undefined4 *)((long)param_1 + 0x24);
      uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
      uVar6 = *(undefined8 *)((long)param_1 + 0x14);
      uVar16 = *(undefined4 *)((long)param_2 + -4);
      uVar14 = *puVar5;
      *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + -0xc);
      *(undefined8 *)((long)param_1 + 0x14) = uVar14;
      *(undefined4 *)((long)param_1 + 0x24) = uVar16;
      *(undefined8 *)((long)param_2 + -0xc) = uVar12;
      *puVar5 = uVar6;
      *(undefined4 *)((long)param_2 + -4) = uVar2;
LAB_10aad6570:
      if (*(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4) <=
          *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc)) {
        return true;
      }
      uVar16 = *(undefined4 *)(param_1 + 2);
      uVar12 = param_1[1];
      uVar6 = *param_1;
      param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
      *param_1 = *(undefined8 *)((long)param_1 + 0x14);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
      *(undefined8 *)((long)param_1 + 0x14) = uVar6;
      *(undefined4 *)((long)param_1 + 0x24) = uVar16;
      return true;
    }
    if (uVar4 == 4) {
      FUN_10aad618c(param_1,(long)param_1 + 0x14,param_1 + 5,(long)param_2 + -0x14);
      return true;
    }
    if (uVar4 == 5) {
      FUN_10aad618c(param_1,(long)param_1 + 0x14,param_1 + 5,(long)param_1 + 0x3c);
      if (*(float *)((long)param_2 + -0xc) * *(float *)(param_2 + -1) <=
          *(float *)((long)param_1 + 0x44) * *(float *)(param_1 + 9)) {
        return true;
      }
      uVar16 = *(undefined4 *)((long)param_1 + 0x4c);
      uVar12 = *(undefined8 *)((long)param_1 + 0x44);
      uVar6 = *(undefined8 *)((long)param_1 + 0x3c);
      uVar2 = *(undefined4 *)((long)param_2 + -4);
      uVar14 = *(undefined8 *)((long)param_2 + -0x14);
      *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + -0xc);
      *(undefined8 *)((long)param_1 + 0x3c) = uVar14;
      *(undefined4 *)((long)param_1 + 0x4c) = uVar2;
      *(undefined8 *)((long)param_2 + -0xc) = uVar12;
      *(undefined8 *)((long)param_2 + -0x14) = uVar6;
      *(undefined4 *)((long)param_2 + -4) = uVar16;
      if (*(float *)((long)param_1 + 0x44) * *(float *)(param_1 + 9) <=
          *(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34)) {
        return true;
      }
      uVar16 = *(undefined4 *)(param_1 + 7);
      uVar12 = param_1[6];
      uVar6 = param_1[5];
      param_1[6] = *(undefined8 *)((long)param_1 + 0x44);
      param_1[5] = *(undefined8 *)((long)param_1 + 0x3c);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)((long)param_1 + 0x4c);
      *(undefined8 *)((long)param_1 + 0x44) = uVar12;
      *(undefined8 *)((long)param_1 + 0x3c) = uVar6;
      *(undefined4 *)((long)param_1 + 0x4c) = uVar16;
      if (*(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34) <=
          *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
        return true;
      }
      uVar16 = *(undefined4 *)((long)param_1 + 0x24);
      uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
      uVar6 = *(undefined8 *)((long)param_1 + 0x14);
      *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
      *(undefined8 *)((long)param_1 + 0x14) = param_1[5];
      *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
      param_1[6] = uVar12;
      param_1[5] = uVar6;
      *(undefined4 *)(param_1 + 7) = uVar16;
      goto LAB_10aad6570;
    }
  }
  puVar5 = param_1 + 5;
  fVar15 = *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4);
  fVar11 = *(float *)(param_1 + 1) * *(float *)((long)param_1 + 0xc);
  fVar13 = *(float *)(param_1 + 6) * *(float *)((long)param_1 + 0x34);
  if (fVar15 <= fVar11) {
    if (fVar15 < fVar13) {
      uVar16 = *(undefined4 *)((long)param_1 + 0x24);
      uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
      uVar6 = *(undefined8 *)((long)param_1 + 0x14);
      *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
      *(undefined8 *)((long)param_1 + 0x14) = *puVar5;
      *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
      param_1[6] = uVar12;
      *puVar5 = uVar6;
      *(undefined4 *)(param_1 + 7) = uVar16;
      if (fVar11 < *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) {
        uVar16 = *(undefined4 *)(param_1 + 2);
        uVar12 = param_1[1];
        uVar6 = *param_1;
        param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
        *param_1 = *(undefined8 *)((long)param_1 + 0x14);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
        *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
        *(undefined8 *)((long)param_1 + 0x14) = uVar6;
        *(undefined4 *)((long)param_1 + 0x24) = uVar16;
      }
    }
  }
  else {
    if (fVar13 <= fVar15) {
      uVar16 = *(undefined4 *)(param_1 + 2);
      uVar12 = param_1[1];
      uVar6 = *param_1;
      param_1[1] = *(undefined8 *)((long)param_1 + 0x1c);
      *param_1 = *(undefined8 *)((long)param_1 + 0x14);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x24);
      *(undefined8 *)((long)param_1 + 0x1c) = uVar12;
      *(undefined8 *)((long)param_1 + 0x14) = uVar6;
      *(undefined4 *)((long)param_1 + 0x24) = uVar16;
      if (fVar13 <= *(float *)((long)param_1 + 0x1c) * *(float *)(param_1 + 4)) goto LAB_10aad66b4;
      uVar16 = *(undefined4 *)((long)param_1 + 0x24);
      uVar12 = *(undefined8 *)((long)param_1 + 0x1c);
      uVar6 = *(undefined8 *)((long)param_1 + 0x14);
      *(undefined8 *)((long)param_1 + 0x1c) = param_1[6];
      *(undefined8 *)((long)param_1 + 0x14) = *puVar5;
      *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1 + 7);
    }
    else {
      uVar16 = *(undefined4 *)(param_1 + 2);
      uVar12 = param_1[1];
      uVar6 = *param_1;
      param_1[1] = param_1[6];
      *param_1 = *puVar5;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 7);
    }
    param_1[6] = uVar12;
    *puVar5 = uVar6;
    *(undefined4 *)(param_1 + 7) = uVar16;
  }
LAB_10aad66b4:
  if ((undefined8 *)((long)param_1 + 0x3c) != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    puVar7 = (undefined8 *)((long)param_1 + 0x3c);
    do {
      fVar11 = *(float *)(puVar7 + 1);
      fVar13 = *(float *)((long)puVar7 + 0xc);
      fVar15 = fVar11 * fVar13;
      if (*(float *)(puVar5 + 1) * *(float *)((long)puVar5 + 0xc) < fVar15) {
        uVar6 = *puVar7;
        uVar16 = *(undefined4 *)(puVar7 + 2);
        lVar3 = lVar8;
        do {
          lVar10 = lVar3;
          *(undefined8 *)((long)param_1 + lVar10 + 0x44) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x30);
          *(undefined8 *)((long)param_1 + lVar10 + 0x3c) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x28);
          *(undefined4 *)((long)param_1 + lVar10 + 0x4c) =
               *(undefined4 *)((long)param_1 + lVar10 + 0x38);
          puVar5 = param_1;
          if (lVar10 == -0x28) goto LAB_10aad672c;
          lVar3 = lVar10 + -0x14;
        } while (*(float *)((long)param_1 + lVar10 + 0x1c) *
                 *(float *)((long)param_1 + lVar10 + 0x20) < fVar15);
        puVar5 = (undefined8 *)((long)param_1 + lVar10 + 0x28);
LAB_10aad672c:
        *puVar5 = uVar6;
        *(float *)(puVar5 + 1) = fVar11;
        *(float *)((long)puVar5 + 0xc) = fVar13;
        *(undefined4 *)(puVar5 + 2) = uVar16;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return (undefined8 *)((long)puVar7 + 0x14) == param_2;
        }
      }
      puVar1 = (undefined8 *)((long)puVar7 + 0x14);
      lVar8 = lVar8 + 0x14;
      puVar5 = puVar7;
      puVar7 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}



/* Entry: 10aad6780; end: 10aad6793;  */

void FUN_10aad6780(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_4 != 0) {
    if (param_4 >> 0x3e != 0) {
      FUN_10aad6828();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aad680c);
      (*pcVar1)();
    }
    lVar3 = param_2;
    FUN_10aad683c();
    *puVar2 = param_4;
    puVar2[1] = param_4;
    puVar2[2] = param_4 + lVar3 * 4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(param_4,param_2,param_3);
    }
    puVar2[1] = param_4 + param_3;
  }
  return;
}



/* Entry: 10aad6794; end: 10aad6827;  */

void FUN_10aad6794(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3e != 0) {
      FUN_10aad6828();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aad680c);
      (*pcVar1)();
    }
    lVar2 = param_2;
    FUN_10aad683c();
    *param_1 = param_4;
    param_1[1] = param_4;
    param_1[2] = param_4 + lVar2 * 4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(param_4,param_2,param_3);
    }
    param_1[1] = param_4 + param_3;
  }
  return;
}



/* Entry: 10aad6828; end: 10aad683b;  */

void FUN_10aad6828(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3e == 0) {
    __Znwm((long)puVar4 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar7 = (long *)*puVar4;
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)puVar4[1];
    plVar5 = plVar7;
    if (plVar8 != plVar7) {
      do {
        plVar8 = plVar8 + -1;
        plVar5 = (long *)*plVar8;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      } while (plVar8 != plVar7);
      plVar5 = (long *)*puVar4;
    }
    puVar4[1] = plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
  return;
}



/* Entry: 10aad683c; end: 10aad686f;  */

void FUN_10aad683c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    __Znwm((long)param_1 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    plVar4 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          plVar1 = plVar4 + 1;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      } while (plVar7 != plVar6);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = plVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  return;
}



/* Entry: 10aad6870; end: 10aad68f7;  */

void FUN_10aad6870(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    plVar4 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          plVar1 = plVar4 + 1;
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      } while (plVar7 != plVar6);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = plVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  return;
}



/* Entry: 10aad68f8; end: 10aad69ef;  */

long FUN_10aad68f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10aad69f0; end: 10aad6cff;  */

void FUN_10aad69f0(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x88;
  __Znwm();
  *puVar6 = FUN_10aae7b34;
  puVar6[1] = FUN_10aae7d34;
  puVar6[0xf] = param_2;
  func_0x0001092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  lVar9 = *param_2;
  puVar6[0xe] = lVar9;
  plVar7 = (long *)(lVar9 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xe] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x10) = 0;
    lVar9 = puVar6[0xe];
    plVar7 = (long *)(lVar9 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar11 = *plVar7;
      if (lVar11 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar6;
          func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  lVar9 = puVar6[0xe];
  if (((uint)*(undefined8 *)(puVar6[0xe] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xc0) & 1) != 0) {
      FUN_10a4f0c8c(puVar6 + 9,lVar9 + 0x98);
      plVar7 = (long *)puVar6[0xe];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      lVar9 = puVar6[0xf];
      ppuVar8 = &PTR_PTR_113305fe0;
      FUN_10ae079a0(0,&PTR_PTR_113305fe0);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113305fe0);
      plVar7 = *(long **)(lVar9 + 0x10);
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 != 0) {
          FUN_10aabbbfc(lVar9 + 0x240,puVar6 + 9);
          *(undefined1 *)(lVar9 + 0x1f1) = 1;
        }
        plVar2 = plVar7 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)puVar6[0xd];
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (*(char *)((long)puVar6 + 0x5f) < '\0') {
        __ZdlPv(puVar6[9]);
      }
      func_0x0001092ba100(puVar6 + 2);
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aad6c68);
  (*pcVar5)();
}



/* Entry: 10aad6d00; end: 10aad6d33;  */

undefined * FUN_10aad6d00(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  ppuVar6 = &PTR_PTR_113306018;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10aad6d34; end: 10aad6dcf;  */

ulong * FUN_10aad6d34(ulong *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((undefined8 *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 < (undefined8 *)param_1[2]) {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
      puVar3[1] = uVar10;
      *puVar3 = uVar9;
      uVar5 = (long)puVar3 + 0x14;
      puVar1 = param_1;
    }
    else {
      lVar8 = (long)puVar3 - *param_1;
      uVar5 = (lVar8 >> 2) * -0x3333333333333333 + 1;
      if (0xccccccccccccccc < uVar5) {
        FUN_10a22cce8();
        puVar2 = param_1;
        if (param_4 != 0) {
          FUN_10aad6f38();
          puVar3 = (undefined8 *)param_1[1];
          for (; param_2 != param_3; param_2 = param_2 + 2) {
            uVar9 = *param_2;
            puVar3[1] = param_2[1];
            *puVar3 = uVar9;
            puVar3 = puVar3 + 2;
          }
          param_1[1] = (ulong)puVar3;
        }
        return puVar2;
      }
      lVar4 = (long)((long)param_1[2] - *param_1) >> 2;
      uVar6 = lVar4 * -0x6666666666666666;
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
        uVar6 = uVar5;
      }
      if (0x666666666666665 < (ulong)(lVar4 * -0x3333333333333333)) {
        uVar6 = 0xccccccccccccccc;
      }
      puVar2 = param_1;
      FUN_10a22ccfc();
      puVar3 = (undefined8 *)((long)puVar2 + lVar8);
      uVar10 = param_2[1];
      uVar9 = *param_2;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
      puVar3[1] = uVar10;
      *puVar3 = uVar9;
      uVar5 = (long)puVar3 + 0x14;
      uVar7 = (long)puVar3 - (param_1[1] - *param_1);
      _memcpy(uVar7);
      puVar1 = (ulong *)*param_1;
      *param_1 = uVar7;
      param_1[1] = uVar5;
      param_1[2] = (long)puVar2 + uVar6 * 0x14;
      if (puVar1 != (ulong *)0x0) {
        __ZdlPv();
      }
    }
    param_1[1] = uVar5;
    return puVar1;
  }
  if (param_3 < (undefined8 *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar1 = param_1;
    if (param_3 == (undefined8 *)0x0) goto LAB_10aad6db0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)param_3 | 7) + 1);
    }
    puVar1 = puVar2;
    __Znwm();
    param_1[1] = (ulong)param_3;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar1;
  }
  _memmove(puVar1,param_2,param_3);
LAB_10aad6db0:
  *(undefined1 *)((long)puVar1 + (long)param_3) = 0;
  return param_1;
}



/* Entry: 10aad6dd0; end: 10aad6ec7;  */

void FUN_10aad6dd0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    puVar2[1] = uVar9;
    *puVar2 = uVar8;
    lVar7 = (long)puVar2 + 0x14;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar4 = (lVar7 >> 2) * -0x3333333333333333 + 1;
    if (0xccccccccccccccc < uVar4) {
      FUN_10a22cce8();
      if (param_4 != 0) {
        FUN_10aad6f38();
        puVar2 = (undefined8 *)param_1[1];
        for (; param_2 != param_3; param_2 = param_2 + 2) {
          uVar8 = *param_2;
          puVar2[1] = param_2[1];
          *puVar2 = uVar8;
          puVar2 = puVar2 + 2;
        }
        param_1[1] = (long)puVar2;
      }
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 2;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x666666666666665 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar5 = 0xccccccccccccccc;
    }
    plVar1 = param_1;
    FUN_10a22ccfc();
    puVar2 = (undefined8 *)((long)plVar1 + lVar7);
    uVar9 = param_2[1];
    uVar8 = *param_2;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    puVar2[1] = uVar9;
    *puVar2 = uVar8;
    lVar7 = (long)puVar2 + 0x14;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar3 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7;
    param_1[2] = (long)plVar1 + uVar5 * 0x14;
    if (lVar3 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar7;
  return;
}



/* Entry: 10aad6ec8; end: 10aad6f37;  */

void FUN_10aad6ec8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10aad6f38(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10aad6f38; end: 10aad6f6f;  */

undefined8 * FUN_10aad6f38(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3c == 0) {
    puVar3 = param_1;
    FUN_10a04315c();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + param_2 * 2;
    return puVar3;
  }
  FUN_10a043148();
  puVar3 = param_1 + 1;
  *param_1 = 0;
  FUN_10a7a88cc();
  func_0x000107c2acdc();
  param_1[0x36] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x37] = puVar3[1];
  param_1[0x36] = uVar5;
  if (param_1[0x37] != 0) {
    piVar4 = (int *)(param_1[0x37] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x36] = &PTR_DAT_110b05358;
  func_0x000107c2acdc();
  param_1[0x38] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x39] = puVar3[1];
  param_1[0x38] = uVar5;
  if (param_1[0x39] != 0) {
    piVar4 = (int *)(param_1[0x39] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x38] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x3a] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x3b] = puVar3[1];
  param_1[0x3a] = uVar5;
  if (param_1[0x3b] != 0) {
    piVar4 = (int *)(param_1[0x3b] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x3a] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x3c] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x3d] = puVar3[1];
  param_1[0x3c] = uVar5;
  if (param_1[0x3d] != 0) {
    piVar4 = (int *)(param_1[0x3d] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x3c] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x3e] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x3f] = puVar3[1];
  param_1[0x3e] = uVar5;
  if (param_1[0x3f] != 0) {
    piVar4 = (int *)(param_1[0x3f] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x3e] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x40] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x41] = puVar3[1];
  param_1[0x40] = uVar5;
  if (param_1[0x41] != 0) {
    piVar4 = (int *)(param_1[0x41] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x40] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x42] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x43] = puVar3[1];
  param_1[0x42] = uVar5;
  if (param_1[0x43] != 0) {
    piVar4 = (int *)(param_1[0x43] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x42] = &PTR_DAT_110b05018;
  return param_1;
}



/* Entry: 10aad6f70; end: 10aad716f;  */

undefined8 * FUN_10aad6f70(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar3 = param_1 + 1;
  *param_1 = 0;
  FUN_10a7a88cc();
  func_0x000107c2acdc();
  param_1[0x36] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x37] = puVar3[1];
  param_1[0x36] = uVar5;
  if (param_1[0x37] != 0) {
    piVar4 = (int *)(param_1[0x37] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x36] = &PTR_DAT_110b05358;
  func_0x000107c2acdc();
  param_1[0x38] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x39] = puVar3[1];
  param_1[0x38] = uVar5;
  if (param_1[0x39] != 0) {
    piVar4 = (int *)(param_1[0x39] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x38] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x3a] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x3b] = puVar3[1];
  param_1[0x3a] = uVar5;
  if (param_1[0x3b] != 0) {
    piVar4 = (int *)(param_1[0x3b] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x3a] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x3c] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x3d] = puVar3[1];
  param_1[0x3c] = uVar5;
  if (param_1[0x3d] != 0) {
    piVar4 = (int *)(param_1[0x3d] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x3c] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x3e] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x3f] = puVar3[1];
  param_1[0x3e] = uVar5;
  if (param_1[0x3f] != 0) {
    piVar4 = (int *)(param_1[0x3f] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x3e] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x40] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x41] = puVar3[1];
  param_1[0x40] = uVar5;
  if (param_1[0x41] != 0) {
    piVar4 = (int *)(param_1[0x41] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x40] = &PTR_DAT_110b05018;
  func_0x000107c2acdc();
  param_1[0x42] = &PTR_SUB_110b01d60;
  uVar5 = *puVar3;
  param_1[0x43] = puVar3[1];
  param_1[0x42] = uVar5;
  if (param_1[0x43] != 0) {
    piVar4 = (int *)(param_1[0x43] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x42] = &PTR_DAT_110b05018;
  return param_1;
}



/* Entry: 10aad7170; end: 10aad71bb;  */

long * FUN_10aad7170(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x220;
    FUN_10a4ffeb4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad71bc; end: 10aad722f;  */

void FUN_10aad71bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -0x35;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10aad7230; end: 10aad767f;  */

long * FUN_10aad7230(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
  plVar15 = param_2;
  if (0 < param_5) {
    plVar4 = (long *)param_1[1];
    if (param_1[2] - (long)plVar4 >> 3 < param_5) {
      lVar10 = *param_1;
      uVar7 = param_5 + ((long)plVar4 - lVar10 >> 3);
      if (uVar7 >> 0x3d != 0) {
        FUN_10a050828();
        plVar15 = param_2;
        if (0 < param_5) {
          plVar4 = (long *)param_1[1];
          if ((param_1[2] - (long)plVar4 >> 2) * -0x5555555555555555 < param_5) {
            lVar10 = *param_1;
            uVar7 = param_5 + ((long)plVar4 - lVar10 >> 2) * -0x5555555555555555;
            if (0x1555555555555555 < uVar7) {
              FUN_10a051b10();
              plVar15 = (long *)param_1[1];
              *param_1 = 0;
              param_1[1] = 0;
              if (plVar15 != (long *)0x0) {
                plVar4 = plVar15 + 1;
                do {
                  lVar10 = *plVar4;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar3) {
                    *plVar4 = lVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)
                            (plVar15);
                  return plVar15;
                }
              }
              return param_1;
            }
            lVar5 = param_1[2] - lVar10 >> 2;
            uVar11 = lVar5 * 0x5555555555555556;
            if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
              uVar11 = uVar7;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
              uVar11 = 0x1555555555555555;
            }
            if (uVar11 == 0) {
              plVar4 = (long *)0x0;
            }
            else {
              plVar4 = param_1;
              FUN_10a051b24();
            }
            plVar15 = (long *)((long)plVar4 + ((long)param_2 - lVar10));
            lVar10 = (long)plVar15 + param_5 * 0xc;
            param_5 = param_5 * 0xc;
            plVar12 = plVar15;
            do {
              lVar5 = *param_3;
              *(int *)(plVar12 + 1) = (int)param_3[1];
              *plVar12 = lVar5;
              param_3 = (long *)((long)param_3 + 0xc);
              param_5 = param_5 + -0xc;
              plVar12 = (long *)((long)plVar12 + 0xc);
            } while (param_5 != 0);
            _memcpy(lVar10,param_2,param_1[1] - (long)param_2);
            lVar5 = param_1[1];
            param_1[1] = (long)param_2;
            lVar14 = (long)plVar15 - ((long)param_2 - *param_1);
            _memcpy(lVar14);
            lVar13 = *param_1;
            *param_1 = lVar14;
            param_1[1] = lVar10 + (lVar5 - (long)param_2);
            param_1[2] = (long)plVar4 + uVar11 * 0xc;
            if (lVar13 != 0) {
              __ZdlPv();
            }
          }
          else {
            lVar10 = (long)plVar4 - (long)param_2;
            if ((lVar10 >> 2) * -0x5555555555555555 < param_5) {
              plVar9 = plVar4;
              plVar8 = plVar4;
              for (plVar12 = (long *)((long)param_3 + lVar10); plVar12 != param_4;
                  plVar12 = (long *)((long)plVar12 + 0xc)) {
                lVar5 = *plVar12;
                *(int *)(plVar8 + 1) = (int)plVar12[1];
                *plVar8 = lVar5;
                plVar9 = (long *)((long)plVar9 + 0xc);
                plVar8 = (long *)((long)plVar8 + 0xc);
              }
              param_1[1] = (long)plVar9;
              if (lVar10 < 1) {
                return param_2;
              }
              plVar1 = (long *)((long)param_2 + param_5 * 0xc);
              plVar12 = (long *)((long)plVar9 + param_5 * -0xc);
              for (; plVar12 < plVar4; plVar12 = (long *)((long)plVar12 + 0xc)) {
                lVar5 = *plVar12;
                *(int *)(plVar9 + 1) = (int)plVar12[1];
                *plVar9 = lVar5;
                plVar9 = (long *)((long)plVar9 + 0xc);
              }
              param_1[1] = (long)plVar9;
              if (plVar8 != plVar1) {
                _memmove(plVar1,param_2);
              }
            }
            else {
              plVar9 = (long *)((long)param_2 + param_5 * 0xc);
              plVar8 = plVar4;
              for (plVar12 = (long *)((long)plVar4 + param_5 * -0xc); plVar12 < plVar4;
                  plVar12 = (long *)((long)plVar12 + 0xc)) {
                lVar10 = *plVar12;
                *(int *)(plVar8 + 1) = (int)plVar12[1];
                *plVar8 = lVar10;
                plVar8 = (long *)((long)plVar8 + 0xc);
              }
              param_1[1] = (long)plVar8;
              if (plVar4 != plVar9) {
                _memmove(plVar9,param_2);
              }
              lVar10 = param_5 * 0xc;
            }
            _memmove(param_2,param_3,lVar10);
          }
        }
        return plVar15;
      }
      uVar6 = param_1[2] - lVar10;
      uVar11 = (long)uVar6 >> 2;
      if (uVar11 <= uVar7) {
        uVar11 = uVar7;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = param_1;
        FUN_10a05083c();
      }
      plVar15 = (long *)((long)plVar4 + ((long)param_2 - lVar10));
      lVar10 = param_5 << 3;
      plVar12 = plVar15;
      do {
        *plVar12 = *param_3;
        lVar10 = lVar10 + -8;
        plVar12 = plVar12 + 1;
        param_3 = param_3 + 1;
      } while (lVar10 != 0);
      _memcpy(plVar15 + param_5,param_2,param_1[1] - (long)param_2);
      lVar10 = param_1[1];
      param_1[1] = (long)param_2;
      lVar13 = (long)plVar15 - ((long)param_2 - *param_1);
      _memcpy(lVar13);
      lVar5 = *param_1;
      *param_1 = lVar13;
      param_1[1] = (long)(plVar15 + param_5) + (lVar10 - (long)param_2);
      param_1[2] = (long)(plVar4 + uVar11);
      if (lVar5 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar10 = (long)plVar4 - (long)param_2;
      if (lVar10 >> 3 < param_5) {
        plVar12 = plVar4;
        plVar8 = plVar4;
        for (plVar9 = (long *)(lVar10 + (long)param_3); plVar9 != param_4; plVar9 = plVar9 + 1) {
          *plVar8 = *plVar9;
          plVar12 = plVar12 + 1;
          plVar8 = plVar8 + 1;
        }
        param_1[1] = (long)plVar12;
        if (lVar10 >> 3 < 1) {
          return param_2;
        }
        plVar9 = plVar12 + -param_5;
        for (; plVar9 < plVar4; plVar9 = plVar9 + 1) {
          *plVar12 = *plVar9;
          plVar12 = plVar12 + 1;
        }
        param_1[1] = (long)plVar12;
        if (plVar8 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (plVar4 == param_2) {
          return param_2;
        }
      }
      else {
        plVar12 = plVar4;
        for (plVar9 = plVar4 + -param_5; plVar9 < plVar4; plVar9 = plVar9 + 1) {
          *plVar12 = *plVar9;
          plVar12 = plVar12 + 1;
        }
        param_1[1] = (long)plVar12;
        if (plVar4 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar10 = param_5 << 3;
      }
      _memmove(param_2,param_3,lVar10);
    }
  }
  return plVar15;
}



/* Entry: 10aad7680; end: 10aad771b;  */

void FUN_10aad7680(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10aad771c; end: 10aad77bb;  */

long FUN_10aad771c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    uVar1 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar2 = param_1;
    }
    func_0x000109697928(param_3,puVar2,uVar1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}



/* Entry: 10aad77bc; end: 10aad7887;  */

undefined8 * FUN_10aad77bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    param_3 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      param_3 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0x17);
      puVar4 = param_1;
    }
    func_0x000109697928(&ppuStack_60);
    uVar6 = puVar1[1];
    puVar1[1] = uStack_58;
    *puVar1 = ppuStack_60;
    ppuStack_60 = &PTR_SUB_110b01d60;
    uStack_58 = uVar6;
    func_0x000107c2acd4(&ppuStack_60);
    puVar1 = puVar1 + 2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((int)puVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    puVar4 = (undefined8 *)*puVar1;
    puVar5 = (undefined8 *)*puVar4;
    if (puVar5 == (undefined8 *)0x0) {
      return puVar1;
    }
    puVar3 = (undefined8 *)puVar4[1];
    puVar2 = puVar5;
    if (puVar3 != puVar5) {
      do {
        puVar3 = puVar3 + -2;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar5);
      puVar2 = *(undefined8 **)*puVar1;
    }
    puVar4[1] = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  if (param_3 < (undefined8 *)0x17) {
    *(char *)((long)puVar1 + 0x17) = (char)param_3;
    puVar3 = puVar1;
    if (param_3 == (undefined8 *)0x0) goto LAB_10aad7918;
  }
  else {
    puVar5 = (undefined8 *)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      puVar5 = (undefined8 *)(((ulong)param_3 | 7) + 1);
    }
    puVar3 = puVar5;
    __Znwm();
    puVar1[1] = param_3;
    puVar1[2] = (ulong)puVar5 | 0x8000000000000000;
    *puVar1 = puVar3;
  }
  _memmove(puVar3,puVar4,param_3);
LAB_10aad7918:
  *(undefined1 *)((long)puVar3 + (long)param_3) = 0;
  return puVar1;
}



/* Entry: 10aad7888; end: 10aad789b;  */

undefined8 * FUN_10aad7888(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    puVar4 = (undefined8 *)*puVar1;
    puVar5 = (undefined8 *)*puVar4;
    if (puVar5 == (undefined8 *)0x0) {
      return puVar1;
    }
    puVar3 = (undefined8 *)puVar4[1];
    puVar2 = puVar5;
    if (puVar3 != puVar5) {
      do {
        puVar3 = puVar3 + -2;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar5);
      puVar2 = *(undefined8 **)*puVar1;
    }
    puVar4[1] = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  if (param_3 < 0x17) {
    *(char *)((long)puVar1 + 0x17) = (char)param_3;
    puVar5 = puVar1;
    if (param_3 == 0) goto LAB_10aad7918;
  }
  else {
    puVar4 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar4 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar5 = puVar4;
    __Znwm();
    puVar1[1] = param_3;
    puVar1[2] = (ulong)puVar4 | 0x8000000000000000;
    *puVar1 = puVar5;
  }
  _memmove(puVar5,param_2,param_3);
LAB_10aad7918:
  *(undefined1 *)((long)puVar5 + param_3) = 0;
  return puVar1;
}



/* Entry: 10aad789c; end: 10aad79c3;  */

ulong * FUN_10aad789c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    puVar3 = (undefined8 *)*param_1;
    puVar4 = (ulong *)*puVar3;
    if (puVar4 == (ulong *)0x0) {
      return param_1;
    }
    puVar2 = (ulong *)puVar3[1];
    puVar1 = puVar4;
    if (puVar2 != puVar4) {
      do {
        puVar2 = puVar2 + -2;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar4);
      puVar1 = *(ulong **)*param_1;
    }
    puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return puVar1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
    if (param_3 == 0) goto LAB_10aad7918;
  }
  else {
    puVar4 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar4 = (ulong *)((param_3 | 7) + 1);
    }
    puVar2 = puVar4;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar4 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,param_2,param_3);
LAB_10aad7918:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 10aad79c4; end: 10aad7a47;  */

void FUN_10aad79c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0cf150(param_1,param_4);
    lVar1 = param_1;
    FUN_10aad7a48(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10aad7a48; end: 10aad7ae7;  */

long FUN_10aad7a48(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_10aad7ae8(param_4,param_2);
    param_4 = lStack_38 + 0x18;
  }
  uStack_48 = 1;
  FUN_10a0cf254(&uStack_60);
  return param_4;
}



/* Entry: 10aad7ae8; end: 10aad7b97;  */

undefined8 * FUN_10aad7ae8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = param_2[1];
  uVar7 = (ulong)*(char *)(lVar6 + 0x1f);
  if ((long)uVar7 < 0) {
    uVar7 = *(ulong *)(lVar6 + 0x10);
    if (0x7ffffffffffffff7 < uVar7) {
      func_0x000109ffde50();
      *param_1 = 0;
      param_1[1] = &PTR_SUB_110b01d60;
      param_1[2] = 0;
      func_0x000107c2b054(param_1 + 3,&UNK_10f68da37);
      puVar5 = param_1 + 0x1f;
      *puVar5 = &PTR_SUB_110b01d60;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined2 *)((long)param_1 + 0x54) = 0x101;
      *(undefined1 *)((long)param_1 + 0x56) = 2;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)(param_1 + 0x1b) = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1c] = 0;
      param_1[8] = 0;
      param_1[9] = 0xffffffff3da9fbe7;
      puVar4 = (undefined8 *)0x28;
      _malloc();
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 3) = 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 4;
        *puVar4 = &PTR_DAT_110b00de0;
      }
      param_1[0x1f] = &PTR_FUN_110c430c0;
      param_1[0x20] = puVar4;
      func_0x000107c2acd0(puVar5,0x90);
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[4] = 0;
      puVar5[3] = 0;
      puVar5[6] = 0;
      puVar5[5] = 0;
      *puVar5 = &PTR_DAT_110b00de0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      func_0x000107c2b054(puVar5 + 3,&UNK_10f68da37);
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
      puVar5[0xe] = 0;
      puVar5[0xd] = 0;
      puVar5[0x10] = 0;
      puVar5[0xf] = 0;
      *(undefined4 *)(puVar5 + 0x11) = 0x3f800000;
      *puVar5 = &PTR_FUN_110c44210;
      lVar6 = param_1[0x20];
      uVar10 = param_2[1];
      uVar9 = *param_2;
      if (param_2[1] != 0) {
        plVar8 = (long *)(param_2[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar8 = *(long **)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
      *(undefined8 *)(lVar6 + 8) = uVar9;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      return param_1;
    }
    lVar6 = *(long *)(lVar6 + 8);
  }
  else {
    lVar6 = lVar6 + 8;
  }
  if (uVar7 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar7;
    puVar5 = param_1;
    if (uVar7 == 0) goto LAB_10aad7b78;
  }
  else {
    puVar4 = (undefined8 *)0x19;
    if ((uVar7 | 7) != 0x17) {
      puVar4 = (undefined8 *)((uVar7 | 7) + 1);
    }
    puVar5 = puVar4;
    __Znwm();
    param_1[1] = uVar7;
    param_1[2] = (ulong)puVar4 | 0x8000000000000000;
    *param_1 = puVar5;
  }
  _memmove(puVar5,lVar6,uVar7);
LAB_10aad7b78:
  *(undefined1 *)((long)puVar5 + uVar7) = 0;
  return param_1;
}



/* Entry: 10aad7b98; end: 10aad7da7;  */

undefined8 * FUN_10aad7b98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  param_1[1] = &PTR_SUB_110b01d60;
  param_1[2] = 0;
  func_0x000107c2b054(param_1 + 3,&UNK_10f68da37);
  puVar5 = param_1 + 0x1f;
  *puVar5 = &PTR_SUB_110b01d60;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0x54) = 0x101;
  *(undefined1 *)((long)param_1 + 0x56) = 2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[8] = 0;
  param_1[9] = 0xffffffff3da9fbe7;
  puVar4 = (undefined8 *)0x28;
  _malloc();
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 3) = 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = &PTR_DAT_110b00de0;
  }
  param_1[0x1f] = &PTR_FUN_110c430c0;
  param_1[0x20] = puVar4;
  func_0x000107c2acd0(puVar5,0x90);
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *puVar5 = &PTR_DAT_110b00de0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  func_0x000107c2b054(puVar5 + 3,&UNK_10f68da37);
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0x3f800000;
  *puVar5 = &PTR_FUN_110c44210;
  lVar6 = param_1[0x20];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = *(long **)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = uVar9;
  *(undefined8 *)(lVar6 + 8) = uVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1;
}



/* Entry: 10aad7da8; end: 10aad7e73;  */

long * FUN_10aad7da8(long *param_1)

{
  long *plVar1;
  long *plStack_28;
  
  __ZNSt13exception_ptrD1Ev(param_1 + 0x2a);
  (**(code **)param_1[0x22])(param_1 + 0x22);
  param_1[0x1f] = (long)&PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  plStack_28 = param_1 + 0x1c;
  FUN_10a22d224(&plStack_28);
  FUN_10a22ce48(param_1 + 0xf);
  if (((char)param_1[0xe] == '\x01') && (param_1[0xb] != 0)) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  FUN_10a15206c(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  param_1[1] = (long)&PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10aad7e74; end: 10aad7ea3;  */

void FUN_10aad7e74(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10aad7ea4();
                    /* WARNING: Could not recover jumptable at 0x00010aad7ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aad7ea4; end: 10aad7f7b;  */

void FUN_10aad7ea4(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined **appuStack_30 [2];
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    lVar2 = param_1[5];
    param_1[5] = 0;
    FUN_10aad8390(appuStack_30,param_1);
    FUN_10aad82c8(lVar2,appuStack_30);
    appuStack_30[0] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(appuStack_30);
    if (*(char *)(param_1 + 4) == '\x01') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      *(undefined1 *)(param_1 + 4) = 0;
    }
    appuStack_30[0] = (undefined **)0x0;
    if (lVar2 != 0) {
      func_0x0001092b4274(appuStack_30,lVar2);
      if (appuStack_30[0] != (undefined **)0x0) {
        func_0x0001092b4274(appuStack_30);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aad7f4c);
  (*pcVar1)();
}



/* Entry: 10aad7f7c; end: 10aad801f;  */

undefined8 * FUN_10aad7f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43928;
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    __ZdlPv(param_1[0x16]);
  }
  *param_1 = &PTR_FUN_110c43978;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aad8020; end: 10aad80b7;  */

void FUN_10aad8020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43928;
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    __ZdlPv(param_1[0x16]);
  }
  *param_1 = &PTR_FUN_110c43978;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aad80b8; end: 10aad8127;  */

undefined8 * FUN_10aad80b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43978;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aad8128; end: 10aad818b;  */

void FUN_10aad8128(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43978;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aad818c; end: 10aad822f;  */

undefined8 * FUN_10aad818c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43998;
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    __ZdlPv(param_1[0x16]);
  }
  *param_1 = &PTR_FUN_110c43978;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aad8230; end: 10aad82c7;  */

void FUN_10aad8230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43998;
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    __ZdlPv(param_1[0x16]);
  }
  *param_1 = &PTR_FUN_110c43978;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aad82c8; end: 10aad838f;  */

void FUN_10aad82c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          *(undefined ***)(param_1 + 0x98) = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        *(undefined ***)(param_1 + 0x98) = &PTR_SUB_110b01d60;
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
        param_2[1] = 0;
        *(undefined ***)(param_1 + 0x98) = &PTR_DAT_110b01050;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10aad8390; end: 10aad852b;  */

/* WARNING: Removing unreachable block (ram,0x00010aad84a0) */

void FUN_10aad8390(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  int *piVar6;
  undefined **ppuVar7;
  undefined **appuStack_68 [2];
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  undefined **appuStack_48 [2];
  undefined1 auStack_38 [23];
  undefined1 uStack_21;
  
  FUN_10ad01b0c(auStack_38,param_2);
  func_0x00010969b668(appuStack_48,auStack_38,uStack_21);
  puVar4 = (undefined8 *)0x28;
  _malloc();
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 3) = 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = &PTR_DAT_110b00de0;
  }
  ppuStack_58 = &PTR_DAT_110b027d8;
  puStack_50 = puVar4;
  func_0x0001096a2050(appuStack_68,&ppuStack_58,appuStack_48);
  pppuVar5 = appuStack_68;
  ___dynamic_cast(pppuVar5,&PTR_DAT_110b01d40,&PTR_DAT_110b00f60,0);
  if (pppuVar5 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar7 = *pppuVar5;
  param_1[1] = pppuVar5[1];
  *param_1 = ppuVar7;
  if (param_1[1] == 0) {
    *param_1 = &PTR_DAT_110b01050;
    FUN_10a00946c(&UNK_10f68e2d9);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aad84d4);
    (*pcVar3)();
  }
  piVar6 = (int *)(param_1[1] + -8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar2) {
      *piVar6 = *piVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = &PTR_DAT_110b01050;
  appuStack_68[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_68);
  ppuStack_58 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_58);
  appuStack_48[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_48);
  return;
}



/* Entry: 10aad852c; end: 10aad855b;  */

void FUN_10aad852c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xe8);
  FUN_10aad855c();
                    /* WARNING: Could not recover jumptable at 0x00010aad8558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aad855c; end: 10aad8837;  */

undefined8 *** FUN_10aad855c(long *param_1,undefined8 **param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 **unaff_x21;
  int iVar10;
  long unaff_x24;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  long *plStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    ppuStack_a0 = (undefined8 **)param_1[0x1c];
    param_1[0x1c] = 0;
    ppuVar6 = (undefined8 **)param_1[1];
    pppuVar7 = (undefined8 ***)ppuVar6;
    if (ppuVar6 == (undefined8 **)0x0) goto LAB_10aad8688;
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar7 = (undefined8 ***)ppuVar6;
    ppuStack_90 = ppuVar6;
    if (ppuVar6 == (undefined8 **)0x0) goto LAB_10aad8688;
    unaff_x24 = *param_1;
    lStack_98 = unaff_x24;
    if (unaff_x24 == 0) {
LAB_10aad8658:
      do {
        ppuVar1 = ppuVar6 + 1;
        do {
          puVar9 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        unaff_x21 = ppuVar6;
        if (puVar9 == (undefined8 *)0x0) {
          (*(code *)(*ppuVar6)[2])(ppuVar6);
          pppuVar7 = (undefined8 ***)ppuVar6;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
LAB_10aad8688:
        ppuVar6 = unaff_x21;
        ppuVar4 = ppuStack_a0;
        ppuVar1 = ppuStack_a0 + 2;
        do {
          puVar9 = *ppuVar1;
          if (puVar9 == (undefined8 *)0x0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar3) {
              *ppuVar1 = (undefined8 *)0x2;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              pppuVar7 = (undefined8 ***)(ppuStack_a0 + 3);
              FUN_109d1b4dc();
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)puVar9 >> 1 & 1) == 0);
        if ((char)param_1[0x1b] == '\x01') {
          plStack_88 = param_1 + 0x16;
          FUN_10a22d224(&plStack_88);
          FUN_10a22ce48(param_1 + 9);
          if (((char)param_1[8] == '\x01') && (param_1[5] != 0)) {
            param_1[6] = param_1[5];
            __ZdlPv();
          }
          pppuVar7 = (undefined8 ***)param_1[1];
          if (pppuVar7 != (undefined8 ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(undefined1 *)(param_1 + 0x1b) = 0;
        }
        ppuStack_a0 = (undefined8 **)0x0;
        if ((ppuVar4 != (undefined8 **)0x0) &&
           (pppuVar7 = &ppuStack_a0, func_0x0001092b4274(&ppuStack_a0,ppuVar4),
           param_2 = ppuStack_a0, ppuStack_a0 != (undefined8 **)0x0)) {
          pppuVar7 = &ppuStack_a0;
          func_0x0001092b4274();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return pppuVar7;
        }
        ___stack_chk_fail();
        iVar10 = (int)param_2;
        if (iVar10 == 0) {
          __Unwind_Resume(pppuVar7);
          func_0x000104bd46a0();
          ppuStack_c0 = ppuVar4;
          uStack_a8 = 0x10aad8838;
          *pppuVar7 = (undefined8 **)&PTR_FUN_110c439d0;
          plStack_b8 = param_1;
          puStack_b0 = &stack0xfffffffffffffff0;
          if (pppuVar7[0x30] != (undefined8 **)0x0) {
            func_0x0001092b4274(pppuVar7 + 0x30);
          }
          if (*(char *)(pppuVar7 + 0x2f) == '\x01') {
            ppuStack_c8 = pppuVar7 + 0x2a;
            FUN_10a22d224(&ppuStack_c8);
            FUN_10a22ce48(pppuVar7 + 0x1d);
            if ((*(char *)(pppuVar7 + 0x1c) == '\x01') && (pppuVar7[0x19] != (undefined8 **)0x0)) {
              pppuVar7[0x1a] = pppuVar7[0x19];
              __ZdlPv();
            }
            if (pppuVar7[0x15] != (undefined8 **)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
          *pppuVar7 = (undefined8 **)&PTR_DAT_110ae8be8;
          __ZNSt13exception_ptrD1Ev(pppuVar7 + 0x12);
          *pppuVar7 = (undefined8 **)&PTR_DAT_110ae8c08;
          return pppuVar7;
        }
        ___cxa_begin_catch();
        if (iVar10 == 2) {
          (*(code *)(*pppuVar7)[2])();
          FUN_10aad8bdc();
          if ((*(byte *)(unaff_x24 + 0x2d8) & 1) != 0) {
            *(undefined1 *)(unaff_x24 + 0x2c8) = 2;
            ___cxa_end_catch();
            goto LAB_10aad8658;
          }
          goto LAB_10aad87dc;
        }
        func_0x00010aad8ba8();
        if ((*(byte *)(unaff_x24 + 0x2d8) & 1) == 0) goto LAB_10aad87dc;
        *(undefined1 *)(unaff_x24 + 0x2c8) = 2;
        ___cxa_end_catch();
      } while( true );
    }
    ppuVar8 = &PTR_PTR_113306058;
    FUN_10ae079a0(0,&PTR_PTR_113306058);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113306058);
    if (((*(byte *)(unaff_x24 + 0x2d8) & 1) != 0) &&
       (FUN_10aac4bc8(&plStack_88,unaff_x24 + 0x180,0,param_1[0x19]),
       (*(byte *)(unaff_x24 + 0x2d8) & 1) != 0)) {
      *(long **)(unaff_x24 + 0x288) = plStack_88;
      (*(code *)**(undefined8 **)(unaff_x24 + 0x290))(unaff_x24 + 0x290);
      param_2 = apuStack_80;
      (*(code *)apuStack_80[0][2])(unaff_x24 + 0x290);
      pppuVar7 = (undefined8 ***)apuStack_80;
      (*(code *)*apuStack_80[0])();
      if ((*(byte *)(unaff_x24 + 0x2d8) & 1) != 0) {
        *(undefined1 *)(unaff_x24 + 0x2c8) = 5;
        goto LAB_10aad8658;
      }
    }
  }
LAB_10aad87dc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aad87e0);
  (*pcVar5)();
}



/* Entry: 10aad8838; end: 10aad8bdb;  */

undefined8 * FUN_10aad8838(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c439d0;
  if (param_1[0x30] != 0) {
    func_0x0001092b4274(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    puStack_28 = param_1 + 0x2a;
    FUN_10a22d224(&puStack_28);
    FUN_10a22ce48(param_1 + 0x1d);
    if ((*(char *)(param_1 + 0x1c) == '\x01') && (param_1[0x19] != 0)) {
      param_1[0x1a] = param_1[0x19];
      __ZdlPv();
    }
    if (param_1[0x15] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aad8bdc; end: 10aad8c2f;  */

undefined * FUN_10aad8bdc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_1133060e8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10aad8c30; end: 10aad8ccb;  */

undefined1  [16] FUN_10aad8c30(ulong *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar9 = param_2[1];
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000109ffde50();
    plVar11 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if ((ulong)plVar11 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar6 = param_2;
      plVar7 = plVar11;
      if (plVar11 != param_2) {
        do {
          *param_3 = *plVar7;
          plVar8 = plVar7 + 1;
          *plVar7 = 0;
          param_3 = param_3 + 1;
          plVar7 = plVar8;
          plVar10 = plVar11;
        } while (plVar8 != param_2);
        do {
          plVar11 = (long *)*plVar10;
          if (plVar11 != (long *)0x0) {
            puVar1 = (ulong *)(plVar11 + 1);
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
                (**(code **)(*plVar11 + 8))();
              }
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != param_2);
      }
      auVar14._8_8_ = plVar6;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
    lVar5 = (long)plVar11 << 3;
    __Znwm(lVar5);
    auVar13._8_8_ = plVar11;
    auVar13._0_8_ = lVar5;
    return auVar13;
  }
  plVar11 = (long *)*param_2;
  if (uVar9 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
    puVar4 = param_1;
    if (uVar9 == 0) goto LAB_10aad8cac;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((uVar9 | 7) != 0x17) {
      puVar1 = (ulong *)((uVar9 | 7) + 1);
    }
    puVar4 = puVar1;
    __Znwm();
    param_1[1] = uVar9;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  _memmove(puVar4,plVar11,uVar9);
  param_2 = plVar11;
LAB_10aad8cac:
  *(undefined1 *)((long)puVar4 + uVar9) = 0;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 10aad8ccc; end: 10aad8cdf;  */

void FUN_10aad8ccc(undefined8 param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar4 >> 0x3d != 0) {
    func_0x000109ffded8();
    plVar5 = plVar4;
    if (plVar4 != param_2) {
      do {
        *param_3 = *plVar5;
        plVar6 = plVar5 + 1;
        *plVar5 = 0;
        param_3 = param_3 + 1;
        plVar5 = plVar6;
      } while (plVar6 != param_2);
      do {
        plVar5 = (long *)*plVar4;
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
        plVar4 = plVar4 + 1;
      } while (plVar4 != param_2);
    }
    return;
  }
  __Znwm((long)plVar4 << 3);
  return;
}



/* Entry: 10aad8ce0; end: 10aad8e33;  */

void FUN_10aad8ce0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((ulong)param_1 >> 0x3d != 0) {
    func_0x000109ffded8();
    plVar4 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *plVar4;
        plVar5 = plVar4 + 1;
        *plVar4 = 0;
        param_3 = param_3 + 1;
        plVar4 = plVar5;
      } while (plVar5 != param_2);
      do {
        plVar4 = (long *)*param_1;
        if (plVar4 != (long *)0x0) {
          puVar1 = (ulong *)(plVar4 + 1);
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
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 << 3);
  return;
}



/* Entry: 10aad8e34; end: 10aad949b;  */

/* WARNING: Removing unreachable block (ram,0x00010aad8f40) */
/* WARNING: Removing unreachable block (ram,0x00010aad9050) */

void FUN_10aad8e34(long *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  *puVar7 = FUN_10aae8abc;
  puVar7[1] = FUN_10aae8ee8;
  puVar7[0x15] = param_2;
  func_0x0001092ba17c(puVar7 + 2);
  lVar9 = puVar7[7];
  if (lVar9 != 0) {
    plVar14 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  lVar9 = *(long *)(param_2 + 0x28);
  lVar13 = *(long *)(param_2 + 0x30);
  if (lVar9 == lVar13) {
    FUN_109d1b124(puVar7 + 0xe);
  }
  else {
    lStack_88 = lVar13 - lVar9 >> 3;
    func_0x0001098b7954(&plStack_a0,&lStack_88);
    plVar14 = (long *)(lStack_90 + 8);
    if (*plVar14 != 0) {
      func_0x0001092b4274(plVar14);
    }
    lVar17 = 0;
    *plVar14 = lStack_98;
    lStack_98 = 0;
    do {
      lVar16 = lStack_90;
      plVar18 = (long *)(*(long *)(lStack_90 + 0x18) + lVar17 * 0x10);
      lVar17 = lVar17 + 1;
      plVar18[1] = lStack_90;
      func_0x0001092b4524(plVar18,lVar9);
      lVar15 = *plVar18;
      plVar14 = (long *)(lVar15 + 0x10);
      do {
        lVar11 = *plVar14;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puStack_80 = &UNK_1098b7cfc;
            ppuStack_70 = &PTR_PTR_1132fed68;
            plStack_78 = plVar18;
            func_0x000109d1b588(lVar15 + 0x18,&puStack_80);
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto LAB_10aad8f80;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
      FUN_109d183ec(lVar16);
LAB_10aad8f80:
      lVar9 = lVar9 + 8;
    } while (lVar9 != lVar13);
    puVar7[0xe] = plStack_a0;
    plStack_a0 = (long *)0x0;
    if ((lStack_98 != 0) && (func_0x0001092b4274(&lStack_98), plStack_a0 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_a0 + 1);
      do {
        uVar12 = *puVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar12 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plStack_a0 + 8))();
        }
      }
    }
  }
  puVar7[9] = puVar7[0xe];
  plVar14 = (long *)(puVar7[0xe] + 8);
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = *plVar14 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x16) = 0;
    lVar9 = puVar7[9];
    plVar14 = (long *)(lVar9 + 0x10);
    uVar10 = puVar7[3];
    do {
      lVar13 = *plVar14;
      if (lVar13 == 0) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puStack_80 = (undefined *)0x0;
          plStack_78 = puVar7;
          ppuStack_70 = (undefined **)uVar10;
          func_0x000109d1b588(lVar9 + 0x18,&puStack_80);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar13 >> 1 & 1) == 0);
  }
  plVar14 = (long *)puVar7[9];
  if (((uint)*(undefined8 *)(puVar7[9] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar14 + 0x12);
LAB_10aad9338:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aad933c);
    (*pcVar5)();
  }
  if (plVar14 != (long *)0x0) {
    puVar1 = (ulong *)(plVar14 + 1);
    do {
      uVar12 = *puVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar12 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar12 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar14 + 8))();
      }
    }
  }
  plVar14 = (long *)puVar7[0xe];
  if (plVar14 != (long *)0x0) {
    puVar1 = (ulong *)(plVar14 + 1);
    do {
      uVar12 = *puVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar12 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar12 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar14 + 8))();
      }
    }
  }
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  lVar9 = *(long *)(puVar7[0x15] + 8);
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar7[0x14] = lVar9;
    if (lVar9 != 0) {
      plVar14 = (long *)puVar7[0x15];
      lVar9 = *plVar14;
      puVar7[0x13] = lVar9;
      if (lVar9 != 0) {
        lVar17 = plVar14[0xd];
        lVar9 = plVar14[5];
        lVar13 = plVar14[6];
        puVar7[0xc] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        puVar7[9] = 0;
        *(undefined4 *)(puVar7 + 0xd) = 0x3f800000;
        plVar18 = (long *)plVar14[2];
        if (plVar18 != plVar14 + 3) {
          lVar16 = 0;
          do {
            plStack_78 = (long *)plVar18[5];
            puStack_80 = (undefined *)plVar18[4];
            if (lVar16 == lVar13 - lVar9 >> 3) goto LAB_10aad9338;
            plVar2 = (long *)(lVar9 + lVar16 * 8);
            func_0x0001092af8bc(plVar2);
            lVar15 = *plVar2;
            if ((*(byte *)(lVar15 + 0xc0) & 1) == 0) goto LAB_10aad9338;
            FUN_10aad949c(puVar7 + 9,puStack_80,plStack_78,&puStack_80,lVar15 + 0x98);
            plVar2 = (long *)plVar18[1];
            plVar19 = plVar18;
            if ((long *)plVar18[1] == (long *)0x0) {
              do {
                plVar18 = (long *)plVar19[2];
                bVar6 = (long *)*plVar18 != plVar19;
                plVar19 = plVar18;
              } while (bVar6);
            }
            else {
              do {
                plVar18 = plVar2;
                plVar2 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
            }
            lVar16 = lVar16 + 1;
          } while (plVar18 != plVar14 + 3);
          plVar14 = (long *)puVar7[0x15];
        }
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
        puVar7[0x11] = 0;
        puVar7[0x10] = 0;
        plVar14 = plVar14 + 10;
        *(undefined4 *)(puVar7 + 0x12) = 0x3f800000;
        while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
          puVar8 = puVar7 + 9;
          FUN_10aae2bbc(puVar8,plVar14 + 4);
          if (puVar8 == (undefined8 *)0x0) {
            FUN_109ffdddc(&UNK_10f639994);
            goto LAB_10aad9338;
          }
          FUN_10aad9940(puVar7 + 0xe,plVar14 + 2,plVar14 + 2,puVar8 + 4);
        }
        FUN_10aad9b98(puVar7 + 9);
        plVar14 = (long *)puVar7[0x10];
        if (plVar14 != (long *)0x0) {
          lVar9 = *(long *)(lVar17 + 8);
          do {
            FUN_10aae34d0(lVar9 + 0x68,plVar14 + 2,plVar14 + 2);
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        lVar9 = puVar7[0x15];
        FUN_10aad9b98(puVar7 + 0xe);
        (**(code **)(lVar9 + 0x70))((undefined8 *)(lVar9 + 0x70));
        bVar6 = false;
        goto LAB_10aad92a4;
      }
    }
  }
  func_0x0001092ba100(puVar7 + 2);
  bVar6 = true;
LAB_10aad92a4:
  plVar14 = (long *)puVar7[0x14];
  if (plVar14 != (long *)0x0) {
    plVar18 = plVar14 + 1;
    do {
      lVar9 = *plVar18;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (!bVar6) {
    func_0x0001092ba100(puVar7 + 2);
  }
  func_0x000109d1a1d0(puVar7 + 2);
  __ZdlPv(puVar7);
  return;
}



/* Entry: 10aad949c; end: 10aad96eb;  */

void FUN_10aad949c(long *param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x26;
  ulong uVar8;
  
  plVar6 = param_1;
  FUN_10a054838();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x26 = (long *)(uVar8 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar7 <= plVar6) {
        uVar5 = 0;
        if (plVar7 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar7);
      }
    }
    plVar2 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar2 != (long *)0x0) {
      for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        plVar3 = (long *)plVar2[1];
        if (plVar3 == plVar6) {
          if (plVar2[3] == param_3) {
            uVar1 = plVar2[2];
            _memcmp(uVar1,param_2,param_3);
            if ((int)uVar1 == 0) {
              return;
            }
          }
        }
        else {
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar8);
          }
          else if (plVar7 <= plVar3) {
            uVar5 = 0;
            if (plVar7 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar7;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar7);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  plVar2 = (long *)0x48;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = (long)plVar6;
  lVar4 = *param_4;
  plVar2[3] = param_4[1];
  plVar2[2] = lVar4;
  FUN_10a4f0c8c(plVar2 + 4,param_5);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    FUN_10aad96ec(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar7 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar7 <= plVar6) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar6 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*plVar2 != 0) {
      plVar6 = *(long **)(*plVar2 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar6) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar8 * (long)plVar7);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aad96ec; end: 10aad98bb;  */

void FUN_10aad96ec(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
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
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x00010aad9904(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10aad98bc; end: 10aad993f;  */

void FUN_10aad98bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010aad9904(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aad9940; end: 10aad9b97;  */

void FUN_10aad9940(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  
  plVar7 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar8 <= plVar7) {
        uVar6 = 0;
        if (plVar8 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar6 * (long)plVar8);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      uVar1 = *param_2;
      lVar5 = param_2[1];
      do {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          if (plVar3[3] == lVar5) {
            lVar2 = plVar3[2];
            _memcmp(lVar2,uVar1,lVar5);
            if ((int)lVar2 == 0) {
              return;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar9);
          }
          else if (plVar8 <= plVar4) {
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar8);
          }
          if (plVar4 != unaff_x26) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  plVar3 = (long *)0x48;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar7;
  lVar5 = *param_3;
  plVar3[3] = param_3[1];
  plVar3[2] = lVar5;
  FUN_10a4f0c8c(plVar3 + 4,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    FUN_10aad96ec(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar8 <= plVar7) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar7 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
    *(long **)(lVar5 + (long)unaff_x26 * 8) = plVar7;
    if (*plVar3 != 0) {
      plVar7 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar7) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar7 / (ulong)plVar8;
        }
        plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aad9b98; end: 10aad9c0b;  */

long * FUN_10aad9b98(long *param_1)

{
  long lVar1;
  
  func_0x00010aad9bd0(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad9c0c; end: 10aad9caf;  */

void FUN_10aad9c0c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    plVar4 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
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
      } while (plVar7 != plVar6);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = plVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  return;
}



/* Entry: 10aad9cb0; end: 10aada087;  */

void FUN_10aad9cb0(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10aae936c;
  puVar6[1] = FUN_10aae964c;
  puVar6[0x14] = param_2;
  func_0x0001092ba17c(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  lVar8 = *param_2;
  puVar6[0x13] = lVar8;
  plVar7 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x13] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x15) = 0;
    lVar8 = puVar6[0x13];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lStack_48 = 0;
          plStack_40 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&lStack_48);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar8 = puVar6[0x13];
  if (((uint)*(undefined8 *)(puVar6[0x13] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xc0) & 1) != 0) {
      FUN_10a4f0c8c(puVar6 + 9,lVar8 + 0x98);
      plVar7 = (long *)puVar6[0x13];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      lVar8 = puVar6[0x14];
      lStack_48 = 0;
      plStack_40 = (long *)0x0;
      plVar7 = *(long **)(lVar8 + 0x10);
      if (((plVar7 != (long *)0x0) &&
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar7, plVar7 != (long *)0x0)) &&
         (lStack_48 = *(long *)(lVar8 + 8), lStack_48 != 0)) {
        puVar6[0xf] = puVar6[10];
        puVar6[0xe] = puVar6[9];
        puVar6[0x10] = puVar6[0xb];
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0x12] = puVar6[0xd];
        puVar6[0x11] = puVar6[0xc];
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        FUN_10aac513c(lStack_48,puVar6 + 0xe);
        plVar7 = (long *)puVar6[0x12];
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 1;
          do {
            lVar8 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if (*(char *)((long)puVar6 + 0x87) < '\0') {
          __ZdlPv(puVar6[0xe]);
        }
      }
      plVar7 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        plVar2 = plStack_40 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)puVar6[0xd];
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (*(char *)((long)puVar6 + 0x5f) < '\0') {
        __ZdlPv(puVar6[9]);
      }
      func_0x0001092ba100(puVar6 + 2);
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aada064);
  (*pcVar5)();
}



/* Entry: 10aada088; end: 10aada0c7;  */

void FUN_10aada088(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10aada0c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10aada0c8; end: 10aada133;  */

void FUN_10aada0c8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 8) != param_2) {
    puVar2 = *(undefined8 **)(param_1 + 8) + -9;
    do {
      func_0x00010959a998(puVar2 + 4);
      *puVar2 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(puVar2);
      puVar1 = puVar2 + -1;
      puVar2 = puVar2 + -10;
    } while (puVar1 != param_2);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10aada134; end: 10aada263;  */

void FUN_10aada134(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar8) >> 2) < param_4) {
    puVar5 = param_1;
    if (puVar8 != (undefined8 *)0x0) {
      param_1[1] = puVar8;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar5 = puVar8;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_10a001cf8();
      plVar6 = (long *)puVar5[9];
      FUN_10aada294();
                    /* WARNING: Could not recover jumptable at 0x00010aada290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x30))(plVar6,0);
      return;
    }
    uVar1 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar1 = 0x3fffffffffffffff;
    }
    FUN_10a0ca600(param_1,uVar1);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined4 *)puVar4 = *param_2;
      puVar4 = (undefined8 *)((long)puVar4 + 4);
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar5 - (long)puVar8 >> 2) < param_4) {
      puVar7 = (undefined4 *)((long)param_2 + ((long)puVar5 - (long)puVar8));
      puVar4 = puVar5;
      if (puVar5 != puVar8) {
        _memmove(puVar8,param_2);
        puVar5 = (undefined8 *)param_1[1];
        puVar4 = puVar5;
      }
      for (; puVar7 != param_3; puVar7 = puVar7 + 1) {
        *(undefined4 *)puVar5 = *puVar7;
        puVar5 = (undefined8 *)((long)puVar5 + 4);
        puVar4 = (undefined8 *)((long)puVar4 + 4);
      }
    }
    else {
      lVar2 = (long)param_3 - (long)param_2;
      if (lVar2 != 0) {
        _memmove(puVar8,param_2,lVar2);
      }
      puVar4 = (undefined8 *)((long)puVar8 + lVar2);
    }
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aada264; end: 10aada293;  */

void FUN_10aada264(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  FUN_10aada294();
                    /* WARNING: Could not recover jumptable at 0x00010aada290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aada294; end: 10aada617;  */

/* WARNING: Removing unreachable block (ram,0x00010aada4c0) */
/* WARNING: Removing unreachable block (ram,0x00010aada4c8) */
/* WARNING: Removing unreachable block (ram,0x00010aada464) */
/* WARNING: Removing unreachable block (ram,0x00010aada46c) */
/* WARNING: Removing unreachable block (ram,0x00010aada48c) */
/* WARNING: Removing unreachable block (ram,0x00010aada494) */
/* WARNING: Removing unreachable block (ram,0x00010aada508) */
/* WARNING: Removing unreachable block (ram,0x00010aada510) */

void FUN_10aada294(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  char cStack_39;
  ulong *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
LAB_10aada554:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aada558);
    (*pcVar4)();
  }
  lStack_98 = param_1[8];
  param_1[8] = 0;
  puVar8 = param_1;
  FUN_10ad055a0();
  if ((int)puVar8 != 0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar5 == (undefined *)0x0) {
      ppuVar5 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar6 = (long *)*ppuVar5;
      if ((plVar6 == (long *)0x0) || ((**(code **)(*plVar6 + 0x18))(), plVar6 == (long *)0x0))
      goto LAB_10aada2f0;
      plVar6 = plVar6 + 7;
    }
    else {
      plVar6 = (long *)(*ppuVar5 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar6 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&puStack_38,&UNK_10f68e3ac);
      func_0x000107c2b054(&puStack_50,&UNK_10f68da37);
      ppuStack_70 = (undefined8 **)"null";
      if (cStack_21 != '\0') {
        ppuStack_70 = &puStack_38;
      }
      ppuStack_90 = (undefined8 **)"null";
      if (cStack_39 != '\0') {
        ppuStack_90 = &puStack_50;
      }
      FUN_10a224324(&ppuStack_70,&ppuStack_90);
      if (cStack_21 == '\0') {
        ppuStack_70 = (undefined8 **)((ulong)ppuStack_70 & 0xffffffffffffff00);
      }
      else {
        plStack_68 = (long *)uStack_30;
        ppuStack_70 = (undefined8 **)puStack_38;
      }
      uStack_58 = cStack_21 != '\0';
      if (cStack_39 == '\0') {
        ppuStack_90 = (undefined8 **)((ulong)ppuStack_90 & 0xffffffffffffff00);
      }
      else {
        uStack_88 = uStack_48;
        ppuStack_90 = (undefined8 **)puStack_50;
      }
      uStack_78 = cStack_39 != '\0';
      FUN_10a234a0c(&ppuStack_70,&ppuStack_90);
      goto LAB_10aada554;
    }
  }
LAB_10aada2f0:
  plVar6 = *(long **)*param_1;
  uVar7 = *(undefined8 *)param_1[1];
  puVar8 = (undefined8 *)param_1[2];
  plStack_68 = (long *)puVar8[1];
  ppuStack_70 = (undefined8 **)*puVar8;
  if (puVar8[1] != 0) {
    plVar1 = (long *)(puVar8[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar6 + 0x28))
            (plVar6,uVar7,&ppuStack_70,*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],
             param_1[5]);
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  lVar9 = lStack_98;
  plVar6 = (long *)(lStack_98 + 0x10);
  do {
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lStack_98 + 0x18);
        goto LAB_10aada3c0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar10 >> 1 & 1) != 0) {
LAB_10aada3c0:
      if (*(char *)(param_1 + 7) == '\x01') {
        *(undefined1 *)(param_1 + 7) = 0;
      }
      lStack_98 = 0;
      if ((lVar9 != 0) && (func_0x0001092b4274(&lStack_98,lVar9), lStack_98 != 0)) {
        func_0x0001092b4274(&lStack_98);
      }
      return;
    }
  } while( true );
}



/* Entry: 10aada618; end: 10aada75f;  */

undefined8 * FUN_10aada618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43c38;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aada760; end: 10aada85b;  */

undefined8 ** FUN_10aada760(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110c43cb8,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10aada85c; end: 10aada86b;  */

void FUN_10aada85c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10aada86c; end: 10aada8ff;  */

undefined8 FUN_10aada86c(undefined8 param_1)

{
  func_0x00010aada894(param_1,0);
  return param_1;
}



/* Entry: 10aada900; end: 10aada957;  */

void FUN_10aada900(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -200) {
    func_0x00010a136de4(lVar1 + -0x10);
    func_0x00010a042d30(lVar1 + -0x50);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10aada958; end: 10aadaae7;  */

long * FUN_10aada958(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                    long param_5)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_238 [8];
  long *plStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_120 [200];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f8 = param_1;
  uStack_1f0 = param_2;
  if (param_5 != 0) {
    plVar3 = &lStack_1e8;
    lStack_1e8 = param_1;
    uStack_1e0 = param_2;
    func_0x00010a289568(plVar3,*param_4);
    if (param_5 != 1) {
      plVar5 = &lStack_1e8;
      lStack_1e8 = param_1;
      uStack_1e0 = param_2;
      func_0x00010a289568(plVar5,param_4[1]);
      plVar4 = plVar5;
      if (*plVar3 != 0 && *plVar5 != 0) {
        plVar4 = &lStack_1f8;
        FUN_10aadaae8(plVar4,(ulong)param_3 & 0xffffffff);
        param_3 = (undefined8 *)0x18;
        __Znwm();
        lVar6 = *plVar5;
        plVar5 = &lStack_1e8;
        FUN_10aaca40c(&lStack_1e8,0,*plVar3);
        FUN_10aaca40c(auStack_120,1,lVar6);
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        FUN_10aadae00(param_3,&lStack_1e8,&lStack_58,2);
        lVar6 = 400;
        do {
          func_0x00010a136de4((long)&lStack_1f8 + lVar6);
          func_0x00010a042d30(auStack_238 + lVar6);
          lVar6 = lVar6 + -200;
        } while (lVar6 != 0);
        func_0x00010aada894(plVar4,param_3);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return plVar4;
      }
      ___stack_chk_fail();
      lVar6 = 400;
      do {
        func_0x00010a136de4((long)plVar5 + lVar6 + -0x10);
        func_0x00010a042d30((long)plVar5 + lVar6 + -0x50);
        lVar6 = lVar6 + -200;
      } while (lVar6 != 0);
      __ZdlPv(param_3);
      plVar3 = plVar4;
      __Unwind_Resume();
      pcStack_208 = FUN_10aadaae8;
      plStack_230 = plVar5;
      lStack_228 = lVar6;
      plStack_220 = plVar4;
      puStack_218 = param_3;
      puStack_210 = &stack0xfffffffffffffff0;
      if ((bRam00000001137ec1b0 & 1) == 0) {
        iVar2 = 0x137ec1b0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          ___cxa_atexit(0x10aada86c,0x1137ec1a8,0x100000000);
          ___cxa_guard_release(0x1137ec1b0);
        }
      }
      plVar5 = (long *)plVar3[1];
      FUN_10a26d738();
      if (*plVar5 == -1) {
        plVar3 = (long *)0x1137ec1a8;
      }
      else {
        plVar3 = (long *)(*plVar3 + *plVar5);
      }
      return plVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aadaaa8);
  (*pcVar1)();
}



/* Entry: 10aadaae8; end: 10aadab8b;  */

long FUN_10aadaae8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137ec1b0 & 1) == 0) {
    iVar1 = 0x137ec1b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10aada86c,0x1137ec1a8,0x100000000);
      ___cxa_guard_release(0x1137ec1b0);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137ec1a8;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10aadab8c; end: 10aadaba7;  */

void FUN_10aadab8c(void)

{
  return;
}



/* Entry: 10aadaba8; end: 10aadad2b;  */

void FUN_10aadaba8(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  long param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long *plStack_90;
  long *plStack_50;
  long lStack_48;
  
  plVar5 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_120 = param_1;
  uStack_118 = param_2;
  if (param_5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aadacfc);
    (*pcVar3)();
  }
  plVar4 = &lStack_110;
  lStack_110 = param_1;
  uStack_108 = param_2;
  func_0x00010a289568(plVar4,*param_4);
  if (*plVar4 != 0) {
    FUN_10aadaae8(&lStack_120,(ulong)param_3 & 0xffffffff);
    param_3 = (undefined8 *)0x18;
    __Znwm();
    FUN_10aaca40c(&lStack_110,(int)param_6[2],*plVar4);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    FUN_10aadae00(param_3,&lStack_110,&lStack_48,1);
    if (plStack_50 != (long *)0x0) {
      plVar4 = plStack_50 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    if (plStack_90 != (long *)0x0) {
      plVar4 = plStack_90 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
    func_0x00010aada894(plVar5,param_3);
    plVar4 = plVar5;
    param_6 = plStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a136de4(param_6 + 0x17);
  func_0x00010a042d30(param_6 + 0xf);
  __ZdlPv(param_3);
  __Unwind_Resume(plVar4);
  return;
}



/* Entry: 10aadad2c; end: 10aadad47;  */

void FUN_10aadad2c(void)

{
  return;
}



/* Entry: 10aadad48; end: 10aadad5b;  */

void FUN_10aadad48(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (plVar1 < (long *)0x1642c8590b21643) {
    __Znwm((long)plVar1 * 0xb8);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0xb8;
        func_0x00010930ef1c();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10aadad5c; end: 10aadadff;  */

void FUN_10aadad5c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 < (long *)0x1642c8590b21643) {
    __Znwm((long)param_1 * 0xb8);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xb8;
        func_0x00010930ef1c();
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



/* Entry: 10aadae00; end: 10aadaf17;  */

void FUN_10aadae00(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined4 *)(param_4 * 200);
  __Znwm();
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[2] = puVar4 + param_4 * 0x32;
  for (; param_2 != param_3; param_2 = param_2 + 0x32) {
    *puVar4 = *param_2;
    uVar6 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar4 + 0xe) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(puVar4 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(puVar4 + 0x12) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar4 + 0x16) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x19);
    *(undefined8 *)(puVar4 + 0x1b) = *(undefined8 *)(param_2 + 0x1b);
    *(undefined8 *)(puVar4 + 0x19) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar4 + 2) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar4 + 6) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(puVar4 + 10) = uVar6;
    lVar5 = *(long *)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(puVar4 + 0x1e) = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(puVar4 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(puVar4 + 0x22) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(puVar4 + 0x26) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(puVar4 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(puVar4 + 0x2a) = uVar6;
    lVar5 = *(long *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(puVar4 + 0x2e) = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar4 = puVar4 + 0x32;
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10aadaf18; end: 10aadafa3;  */

undefined8 * FUN_10aadaf18(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110aefaa0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x0001093405f8(param_1,param_2);
    }
    else {
      func_0x00010933fbd8(param_1);
      func_0x00010934043c(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 10aadafa4; end: 10aadafb7;  */

void FUN_10aadafa4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x70;
        func_0x00010933fb14();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10aadafb8; end: 10aadb013;  */

void FUN_10aadafb8(long *param_1)

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
        lVar1 = lVar1 + -0x70;
        func_0x00010933fb14();
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



/* Entry: 10aadb014; end: 10aadb03b;  */

void FUN_10aadb014(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar2 = plVar1[1];
    if (plVar1[1] != lVar3) {
      do {
        lVar4 = lVar2 + -0x80;
        func_0x00010a042d30(lVar2 + -0x10);
        lVar2 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10aadb03c; end: 10aadb0a7;  */

void FUN_10aadb03c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x80;
        func_0x00010a042d30(lVar1 + -0x10);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10aadb0a8; end: 10aadb0e7;  */

void FUN_10aadb0a8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10aadb0e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10aadb0e8; end: 10aadb143;  */

void FUN_10aadb0e8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != param_2) {
    plVar2 = plVar2 + -1;
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      func_0x00010aae5364(plVar2);
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10aadb144; end: 10aadb157;  */

undefined8 ** FUN_10aadb144(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  ppuVar1 = (undefined8 **)&DAT_10f62a4d8;
  FUN_109ffde64();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_80);
  lStack_98 = param_3[1];
  lStack_a0 = *param_3;
  lStack_90 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(ppuVar1,&uStack_88,&UNK_110c43d28,&lStack_a0);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  ppuVar2 = apuStack_80;
  (*(code *)*apuStack_80[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  (*(code *)*apuStack_80[0])(apuStack_80);
  __Unwind_Resume();
  func_0x000107c2ab24(ppuVar2 + 7);
  func_0x00010a052434(ppuVar2 + 4);
  if (*(char *)((long)ppuVar2 + 0x1f) < '\0') {
    __ZdlPv(ppuVar2[1]);
  }
  return ppuVar2;
}



/* Entry: 10aadb158; end: 10aadb253;  */

undefined8 ** FUN_10aadb158(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110c43d28,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  func_0x000107c2ab24(ppuVar1 + 7);
  func_0x00010a052434(ppuVar1 + 4);
  if (*(char *)((long)ppuVar1 + 0x1f) < '\0') {
    __ZdlPv(ppuVar1[1]);
  }
  return ppuVar1;
}



/* Entry: 10aadb254; end: 10aadb293;  */

long FUN_10aadb254(long param_1)

{
  func_0x000107c2ab24(param_1 + 0x38);
  func_0x00010a052434(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10aadb294; end: 10aadb2b3;  */

void FUN_10aadb294(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10aadb2b4; end: 10aadb31b;  */

long * FUN_10aadb2b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010aadb2e4();
  }
  return param_1;
}



/* Entry: 10aadb31c; end: 10aadb53f;  */

ulong * FUN_10aadb31c(ulong param_1,undefined8 param_2,ulong param_3,undefined4 *param_4,
                     ulong param_5,long param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *extraout_x8;
  long lVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  code *pcStack_a8;
  undefined **appuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = *(ulong **)(param_6 + 0x10);
  uStack_f8 = param_1;
  uStack_f0 = param_2;
  if (param_5 != 0) {
    uStack_e8 = (undefined4)param_1;
    uVar2 = uStack_e8;
    uStack_e4 = (undefined4)(param_1 >> 0x20);
    uVar3 = uStack_e4;
    uStack_e0 = (undefined4)param_2;
    uVar4 = uStack_e0;
    uStack_dc = (undefined4)((ulong)param_2 >> 0x20);
    uVar5 = uStack_dc;
    plVar7 = (long *)&uStack_e8;
    func_0x0001098b9090(plVar7,*param_4);
    if (param_5 != 1) {
      plVar8 = (long *)&uStack_e8;
      uStack_e8 = uVar2;
      uStack_e4 = uVar3;
      uStack_e0 = uVar4;
      uStack_dc = uVar5;
      FUN_10aadaae8(plVar8,param_4[1]);
      if (2 < param_5) {
        plVar9 = (long *)&uStack_e8;
        uStack_e8 = uVar2;
        uStack_e4 = uVar3;
        uStack_e0 = uVar4;
        uStack_dc = uVar5;
        func_0x00010a4efc70(plVar9,param_4[2]);
        if (param_5 != 3) {
          uVar12 = (ulong)(uint)param_4[3];
          puVar11 = (ulong *)&uStack_e8;
          uStack_e8 = uVar2;
          uStack_e4 = uVar3;
          uStack_e0 = uVar4;
          uStack_dc = uVar5;
          FUN_10a4ff0c0();
          if ((*plVar7 != 0) && (*plVar8 != 0)) {
            puVar10 = &uStack_f8;
            FUN_10aadb648(puVar10,param_3 & 0xffffffff);
            param_3 = 0x28;
            __Znwm();
            uVar17 = *(undefined8 *)*plVar7;
            uVar18 = *puVar11;
            uVar12 = *puVar16;
            lVar14 = *(long *)*plVar8;
            lVar1 = ((long *)*plVar8)[1];
            if (*plVar9 == 0) {
              uStack_e8 = 0x3f800000;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_e4 = 0;
              uStack_e0 = 0;
              uStack_d4 = 0x3f800000;
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0x3f800000;
              uStack_b4 = 0;
              uStack_bc = 0;
              uStack_ac = 0x3f800000;
            }
            else {
              func_0x0001094f5708(&uStack_e8,*plVar9 + 8);
            }
            pcStack_a8 = FUN_10aadb540;
            appuStack_a0[0] = &PTR_FUN_110c43d48;
            FUN_10aacb4e4(param_3,uVar12,lVar14,(lVar1 - lVar14 >> 3) * -0x70a3d70a3d70a3d7,
                          puVar16 + 1,uVar17,uVar18,&pcStack_a8);
            (*(code *)*appuStack_a0[0])(appuStack_a0);
            puVar11 = (ulong *)*puVar10;
            *puVar10 = param_3;
            if (puVar11 != (ulong *)0x0) {
              func_0x00010aadb2e4();
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return puVar11;
          }
          ___stack_chk_fail();
          __ZdlPv(param_3);
          __Unwind_Resume(puVar11);
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          if (uVar12 != 0) {
            if (0x1642c8590b21642 < uVar12) {
              FUN_10aadad48();
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10aadb620);
              (*pcVar6)();
            }
            uVar18 = uVar12;
            uVar13 = uVar12;
            FUN_10aadad5c();
            *extraout_x8 = uVar18;
            extraout_x8[1] = uVar18;
            extraout_x8[2] = uVar18 + uVar13 * 0xb8;
            lVar14 = uVar12 * 0xb8;
            uVar12 = uVar18 + lVar14;
            puVar15 = (undefined8 *)(uVar18 + 0x70);
            do {
              puVar15[-0xe] = &PTR_DAT_110aeb838;
              puVar15[-0xd] = 0;
              puVar15[-0xb] = 0;
              puVar15[-0xc] = 0;
              puVar15[-9] = 0;
              puVar15[-10] = 0;
              puVar15[-7] = 0;
              puVar15[-8] = 0;
              *(undefined8 *)((long)puVar15 + -0x2c) = 0;
              *(undefined8 *)((long)puVar15 + -0x34) = 0;
              *(undefined8 *)((long)puVar15 + -0x24) = 1;
              *(undefined4 *)((long)puVar15 + -0x1c) = 1;
              puVar15[-3] = &DAT_10e5b4a18;
              puVar15[-2] = 0;
              puVar15[-1] = &DAT_11383d918;
              puVar15[1] = 0;
              *puVar15 = 0;
              puVar15[3] = 0;
              puVar15[2] = 0;
              puVar15[5] = 0;
              puVar15[4] = 0;
              puVar15[7] = 0;
              puVar15[6] = 0;
              puVar15[8] = 0;
              puVar15 = puVar15 + 0x17;
              lVar14 = lVar14 + -0xb8;
            } while (lVar14 != 0);
            extraout_x8[1] = uVar12;
          }
          return extraout_x8;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aadb508);
  (*pcVar6)();
}



/* Entry: 10aadb540; end: 10aadb547;  */

ulong * FUN_10aadb540(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x1642c8590b21642 < param_3) {
      FUN_10aadad48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aadb620);
      (*pcVar1)();
    }
    uVar2 = param_3;
    uVar3 = param_3;
    FUN_10aadad5c();
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2 + uVar3 * 0xb8;
    lVar4 = param_3 * 0xb8;
    uVar3 = uVar2 + lVar4;
    puVar5 = (undefined8 *)(uVar2 + 0x70);
    do {
      puVar5[-0xe] = &PTR_DAT_110aeb838;
      puVar5[-0xd] = 0;
      puVar5[-0xb] = 0;
      puVar5[-0xc] = 0;
      puVar5[-9] = 0;
      puVar5[-10] = 0;
      puVar5[-7] = 0;
      puVar5[-8] = 0;
      *(undefined8 *)((long)puVar5 + -0x2c) = 0;
      *(undefined8 *)((long)puVar5 + -0x34) = 0;
      *(undefined8 *)((long)puVar5 + -0x24) = 1;
      *(undefined4 *)((long)puVar5 + -0x1c) = 1;
      puVar5[-3] = &DAT_10e5b4a18;
      puVar5[-2] = 0;
      puVar5[-1] = &DAT_11383d918;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[8] = 0;
      puVar5 = puVar5 + 0x17;
      lVar4 = lVar4 + -0xb8;
    } while (lVar4 != 0);
    param_1[1] = uVar3;
  }
  return param_1;
}



/* Entry: 10aadb548; end: 10aadb633;  */

ulong * FUN_10aadb548(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x1642c8590b21642 < param_2) {
      FUN_10aadad48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aadb620);
      (*pcVar1)();
    }
    uVar2 = param_2;
    uVar3 = param_2;
    FUN_10aadad5c();
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2 + uVar3 * 0xb8;
    lVar4 = param_2 * 0xb8;
    uVar3 = uVar2 + lVar4;
    puVar5 = (undefined8 *)(uVar2 + 0x70);
    do {
      puVar5[-0xe] = &PTR_DAT_110aeb838;
      puVar5[-0xd] = 0;
      puVar5[-0xb] = 0;
      puVar5[-0xc] = 0;
      puVar5[-9] = 0;
      puVar5[-10] = 0;
      puVar5[-7] = 0;
      puVar5[-8] = 0;
      *(undefined8 *)((long)puVar5 + -0x2c) = 0;
      *(undefined8 *)((long)puVar5 + -0x34) = 0;
      *(undefined8 *)((long)puVar5 + -0x24) = 1;
      *(undefined4 *)((long)puVar5 + -0x1c) = 1;
      puVar5[-3] = &DAT_10e5b4a18;
      puVar5[-2] = 0;
      puVar5[-1] = &DAT_11383d918;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[8] = 0;
      puVar5 = puVar5 + 0x17;
      lVar4 = lVar4 + -0xb8;
    } while (lVar4 != 0);
    param_1[1] = uVar3;
  }
  return param_1;
}



/* Entry: 10aadb634; end: 10aadb647;  */

void FUN_10aadb634(void)

{
  return;
}



/* Entry: 10aadb648; end: 10aadb6eb;  */

long FUN_10aadb648(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137ec1c0 & 1) == 0) {
    iVar1 = 0x137ec1c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10aadb2b4,0x1137ec1b8,0x100000000);
      ___cxa_guard_release(0x1137ec1c0);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137ec1b8;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10aadb6ec; end: 10aadb73b;  */

void FUN_10aadb6ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000107c2ab24(lVar1 + 0x38);
    func_0x00010a052434(lVar1 + 0x20);
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aadb73c; end: 10aadb753;  */

void FUN_10aadb73c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aadb754; end: 10aadb767;  */

void FUN_10aadb754(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_4 != 0) {
    FUN_10a26d390();
    puVar2 = *(undefined4 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10aadb768; end: 10aadb7d7;  */

void FUN_10aadb768(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a26d390(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10aadb7d8; end: 10aadb8eb;  */

void FUN_10aadb7d8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = &uStack_68;
  uStack_68 = param_1;
  uStack_60 = param_2;
  func_0x00010a291414(puVar2,param_3);
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar6 = *(undefined4 **)(param_6 + 0x10);
  puVar1 = *(undefined4 **)(param_6 + 0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uStack_58 = param_1;
  uStack_50 = param_2;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    puVar4 = &uStack_58;
    FUN_10aadb648(puVar4,*puVar6);
    puVar5 = (undefined8 *)*puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4 = (undefined8 *)puVar3[1];
      if (puVar4 < (undefined8 *)puVar3[2]) {
        uVar8 = puVar5[1];
        uVar7 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar8;
        *puVar4 = uVar7;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uVar7 = puVar5[3];
        puVar4[4] = puVar5[4];
        puVar4[3] = uVar7;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar4 = puVar4 + 5;
      }
      else {
        puVar4 = puVar3;
        FUN_10a503eb8();
      }
      puVar3[1] = puVar4;
    }
  }
  uStack_58 = 0;
  func_0x00010a2914e4(puVar2,puVar3);
  func_0x00010a2914e4(&uStack_58,0);
  return;
}



/* Entry: 10aadb8ec; end: 10aadb92f;  */

void FUN_10aadb8ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aadb930; end: 10aadb96f;  */

long FUN_10aadb930(long param_1)

{
  func_0x000107c2ab24(param_1 + 0x38);
  func_0x00010a052434(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10aadb970; end: 10aadbb9f;  */

/* WARNING: Removing unreachable block (ram,0x00010aacaaa4) */

undefined ***
FUN_10aadb970(undefined8 param_1,undefined *param_2,ulong param_3,float param_4,undefined ***param_5
             ,undefined ****param_6,undefined ***param_7,undefined ***param_8,ulong param_9,
             long param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  code **ppcVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  uint uVar23;
  code *pcVar24;
  int *piVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined **ppuVar28;
  undefined ***extraout_x8;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  code *pcVar33;
  undefined **ppuVar34;
  int iVar35;
  long *plVar36;
  undefined ***pppuVar37;
  undefined ***pppuVar38;
  undefined *puVar39;
  code **ppcVar40;
  ulong uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined **appuStack_420 [7];
  undefined4 uStack_3e8;
  undefined4 uStack_3e0;
  undefined1 uStack_3dc;
  undefined1 uStack_3d8;
  undefined4 uStack_3d4;
  undefined1 uStack_3d0;
  undefined1 uStack_3cc;
  long lStack_3c8;
  undefined ***pppuStack_3c0;
  undefined ***pppuStack_3b8;
  code **ppcStack_3b0;
  undefined ***pppuStack_3a8;
  undefined ***pppuStack_3a0;
  undefined ****ppppuStack_398;
  undefined ***pppuStack_390;
  undefined ***pppuStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined *puStack_368;
  undefined ***pppuStack_360;
  undefined ***pppuStack_358;
  long lStack_350;
  undefined ***pppuStack_348;
  undefined ***pppuStack_340;
  undefined *puStack_338;
  undefined ***pppuStack_330;
  undefined *puStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined8 uStack_2dc;
  undefined8 uStack_2d4;
  undefined4 uStack_2cc;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined1 uStack_240;
  long lStack_238;
  long lStack_230;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [24];
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  undefined ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar36 = *(long **)(param_10 + 0x10);
  pppuStack_f8 = param_5;
  ppppuStack_f0 = param_6;
  if (param_9 != 0) {
    uStack_e8._0_4_ = SUB84(param_5,0);
    uVar51 = (undefined4)uStack_e8;
    uStack_e8._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
    uVar10 = uStack_e8._4_4_;
    uStack_e0 = SUB84(param_6,0);
    uVar11 = uStack_e0;
    uStack_dc = (undefined4)((ulong)param_6 >> 0x20);
    uVar12 = uStack_dc;
    pppuVar37 = (undefined ***)&uStack_e8;
    pppuVar16 = param_7;
    pppuVar22 = param_8;
    func_0x0001098b9090(pppuVar37,*(undefined4 *)param_8);
    if (param_9 != 1) {
      pppuVar38 = (undefined ***)&uStack_e8;
      uStack_e8._0_4_ = uVar51;
      uStack_e8._4_4_ = uVar10;
      uStack_e0 = uVar11;
      uStack_dc = uVar12;
      FUN_10aadaae8(pppuVar38,*(undefined4 *)((long)param_8 + 4));
      if (2 < param_9) {
        ppcVar18 = (code **)&uStack_e8;
        uStack_e8._0_4_ = uVar51;
        uStack_e8._4_4_ = uVar10;
        uStack_e0 = uVar11;
        uStack_dc = uVar12;
        func_0x00010a4efc70(ppcVar18,*(undefined4 *)(param_8 + 1));
        if (param_9 != 3) {
          pppuVar21 = (undefined ***)(ulong)*(uint *)((long)param_8 + 0xc);
          pppuVar19 = (undefined ***)&uStack_e8;
          uStack_e8._0_4_ = uVar51;
          uStack_e8._4_4_ = uVar10;
          uStack_e0 = uVar11;
          uStack_dc = uVar12;
          func_0x00010a290d64();
          if (((*pppuVar37 != (undefined **)0x0) && (*pppuVar38 != (undefined **)0x0)) &&
             (param_8 = pppuVar19, *pppuVar19 != (undefined **)0x0)) {
            param_6 = &pppuStack_f8;
            FUN_10aadb648(param_6,(ulong)param_7 & 0xffffffff);
            param_7 = (undefined ***)0x28;
            __Znwm();
            pppuVar37 = (undefined ***)**pppuVar37;
            ppuVar28 = *pppuVar38;
            param_5 = (undefined ***)*pppuVar19;
            pppuVar38 = (undefined ***)*plVar36;
            param_8 = (undefined ***)*ppuVar28;
            puVar39 = ppuVar28[1];
            if (*ppcVar18 == (code *)0x0) {
              uStack_e8._0_4_ = 0x3f800000;
              uStack_dc = 0;
              uStack_d8 = 0;
              uStack_e8._4_4_ = 0;
              uStack_e0 = 0;
              uStack_d4 = 0x3f800000;
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0x3f800000;
              uStack_b4 = 0;
              uStack_bc = 0;
              uStack_ac = 0x3f800000;
            }
            else {
              func_0x0001094f5708(&uStack_e8,*ppcVar18 + 8);
            }
            pppuVar22 = (undefined ***)(((long)puVar39 - (long)param_8 >> 3) * -0x70a3d70a3d70a3d7);
            ppcVar18 = &pcStack_a8;
            pcStack_a8 = FUN_10aadbba0;
            ppuStack_a0 = &PTR_DAT_110c43d90;
            pppuVar21 = pppuVar38;
            pppuVar16 = param_8;
            pppuStack_98 = param_5;
            FUN_10aacb4e4(param_7);
            (*(code *)*ppuStack_a0)(&ppuStack_a0);
            pppuVar19 = *param_6;
            *param_6 = param_7;
            if (pppuVar19 != (undefined ***)0x0) {
              func_0x00010aadb2e4();
            }
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return pppuVar19;
          }
          ___stack_chk_fail();
          __ZdlPv(param_7);
          pppuVar20 = pppuVar19;
          __Unwind_Resume();
          bVar4 = *(byte *)((long)pppuVar16 + 0x17);
          ppuVar28 = pppuVar16[1];
          if (-1 < (char)bVar4) {
            ppuVar28 = (undefined **)(ulong)bVar4;
          }
          puStack_110 = &stack0xfffffffffffffff0;
          if (ppuVar28 == (undefined **)0x9) {
            pppuVar17 = (undefined ***)*pppuVar16;
            if (-1 < (char)bVar4) {
              pppuVar17 = pppuVar16;
            }
            if (*pppuVar17 == (undefined **)0x646f427265707075 && *(char *)(pppuVar17 + 1) == 'y') {
              puStack_368 = pppuVar22[2][5];
              lVar31 = (long)pppuVar22[2][6] - (long)puStack_368 >> 5;
              lStack_350 = lVar31 * -0xf0f0f0f0f0f0f0f;
              pcStack_108 = FUN_10aadbba0;
              lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
              *extraout_x8 = (undefined **)0x0;
              extraout_x8[1] = (undefined **)0x0;
              extraout_x8[2] = (undefined **)0x0;
              pppuVar16 = (undefined ***)0x0;
              pppuVar22 = extraout_x8;
              pppuStack_348 = extraout_x8;
              if (pppuVar21 != (undefined ***)0x0) {
                pppuStack_340 = (undefined ***)0x0;
                puVar39 = puStack_368 + lVar31 * 0x20;
                ppcVar18 = (code **)&uStack_1e0;
                pppuVar19 = (undefined ***)&uStack_1c8;
                pppuVar38 = &ppuStack_268;
                pppuStack_358 = pppuVar20 + (long)pppuVar21 * 0x10;
                param_6 = (undefined ****)0xc;
                pppuVar37 = pppuVar20;
                puStack_338 = puVar39;
                pppuStack_330 = pppuVar19;
                do {
                  pppuVar16 = pppuVar37;
                  FUN_10aaca31c(auStack_210);
                  ppuStack_320 = &PTR_DAT_110aeb838;
                  uStack_318 = 0;
                  uVar15 = 0;
                  uStack_308 = 0;
                  uStack_310 = 0;
                  uStack_2f8 = 0;
                  uStack_300 = 0;
                  uStack_2e8 = 0;
                  uStack_2f0 = 0;
                  uStack_2dc = 0;
                  uStack_2e4 = 0;
                  uStack_2e0 = 0;
                  uStack_2d4 = 1;
                  uStack_2cc = 1;
                  puStack_2c8 = &DAT_10e5b4a18;
                  uStack_2c0 = 0;
                  puStack_2b8 = &DAT_11383d918;
                  uStack_2a8 = 0;
                  uStack_2b0 = 0;
                  uStack_298 = 0;
                  uStack_2a0 = 0;
                  uStack_288 = 0;
                  uStack_290 = 0;
                  uStack_278 = 0;
                  uStack_280 = 0;
                  uStack_270 = 0;
                  puVar30 = puStack_368;
                  if (lStack_350 != 0) {
                    do {
                      uVar51 = (undefined4)uVar15;
                      puVar32 = puVar30;
                      if ((*(long *)(puVar30 + 0x1d8) != 0 && *(long *)(puVar30 + 0x208) != 0) &&
                         (*(long *)(puVar30 + 0x218) != 0)) {
                        puVar14 = &uStack_308;
                        puStack_328 = puVar30;
                        func_0x000107c303b0(puVar14,&UNK_109312438);
                        *(undefined4 *)((long)puVar14 + 0x134) = 0x3f800000;
                        uVar23 = *(uint *)(puVar14 + 2);
                        *(undefined1 *)((long)puVar14 + 0x13c) = 1;
                        *(uint *)(puVar14 + 2) = uVar23 | 0xa0000;
                        puVar39 = puStack_328;
                        *(undefined4 *)((long)puVar14 + 0x144) = *(undefined4 *)(puStack_328 + 4);
                        *(uint *)(puVar14 + 2) = uVar23 | 0x2a0000;
                        func_0x0001096b966c(puVar39 + 0x1d0,0x51);
                        uStack_218 = SUB84(param_2,0);
                        uStack_214 = (undefined4)param_3;
                        uStack_21c = uVar51;
                        FUN_10aac9f88(&uStack_21c,pppuVar37);
                        uStack_1e0 = &PTR_DAT_110aefb90;
                        uStack_1d8 = (code *)0x0;
                        uStack_1b8 = uStack_1b8 & 0xffffffffffffff00;
                        uStack_1c8 = (undefined **)CONCAT44((int)param_2,uVar51);
                        ppuStack_1c0 = (undefined **)(param_3 & 0xffffffff);
                        uStack_1d0 = (undefined **)0x7;
                        *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 2;
                        ppcVar40 = (code **)puVar14[0x17];
                        if (ppcVar40 == (code **)0x0) {
                          ppcVar40 = (code **)puVar14[1];
                          if (((ulong)ppcVar40 & 1) != 0) {
                            ppcVar40 = *(code ***)((ulong)ppcVar40 & 0xfffffffffffffffe);
                          }
                          func_0x0001093416e0();
                          puVar14[0x17] = ppcVar40;
                        }
                        if (ppcVar40 != ppcVar18) {
                          pcVar24 = ppcVar40[1];
                          pcVar13 = pcVar24;
                          if (((ulong)pcVar24 & 1) != 0) {
                            pcVar13 = *(code **)((ulong)pcVar24 & 0xfffffffffffffffe);
                          }
                          pcVar33 = uStack_1d8;
                          if (((ulong)uStack_1d8 & 1) != 0) {
                            pcVar33 = *(code **)((ulong)uStack_1d8 & 0xfffffffffffffffe);
                          }
                          if (pcVar13 == pcVar33) {
                            lVar31 = 0;
                            ppcVar40[1] = uStack_1d8;
                            uStack_1d8 = pcVar24;
                            uVar51 = *(undefined4 *)(ppcVar40 + 2);
                            *(undefined4 *)(ppcVar40 + 2) = (undefined4)uStack_1d0;
                            uStack_1d0 = (undefined **)CONCAT44(uStack_1d0._4_4_,uVar51);
                            do {
                              uVar5 = *(undefined1 *)((long)ppcVar40 + lVar31 + 0x18);
                              *(undefined1 *)((long)ppcVar40 + lVar31 + 0x18) =
                                   *(undefined1 *)((long)pppuVar19 + lVar31);
                              *(undefined1 *)((long)pppuVar19 + lVar31) = uVar5;
                              lVar31 = lVar31 + 1;
                            } while (lVar31 != 0x11);
                          }
                          else {
                            func_0x000109340dd8(ppcVar40);
                            func_0x000109340c8c(ppcVar40,&uStack_1e0);
                          }
                        }
                        if (((ulong)uStack_1d8 & 1) != 0) {
                          func_0x0001053936ac(&uStack_1d8);
                        }
                        *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 2;
                        puVar39 = puStack_328;
                        uVar15 = puVar14[0x17];
                        if (uVar15 == 0) {
                          uVar15 = puVar14[1];
                          if ((uVar15 & 1) != 0) {
                            uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
                          }
                          func_0x0001093416e0();
                          puVar14[0x17] = uVar15;
                        }
                        fVar42 = *(float *)(uVar15 + 0x20);
                        if (0.0 < fVar42) {
                          ppuVar28 = &PTR_PTR_1132d8bd0;
                          if (ppuStack_1f8 != (undefined **)0x0) {
                            ppuVar28 = ppuStack_1f8;
                          }
                          ppuVar26 = &PTR_PTR_1132d8bd0;
                          if (ppuStack_1f0 != (undefined **)0x0) {
                            ppuVar26 = ppuStack_1f0;
                          }
                          param_3 = *(ulong *)(uVar15 + 0x18);
                          param_2 = ppuVar26[3];
                          *(ulong *)(uVar15 + 0x18) =
                               CONCAT44(((float)((ulong)ppuVar28[3] >> 0x20) *
                                        (float)(param_3 >> 0x20)) / fVar42 +
                                        (float)((ulong)param_2 >> 0x20),
                                        (SUB84(ppuVar28[3],0) * (float)param_3) / fVar42 +
                                        SUB84(param_2,0));
                          *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 3;
                        }
                        *(undefined4 *)((long)puVar14 + 0x154) = 3;
                        *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 0x2000000;
                        puVar14 = puVar14 + 9;
                        func_0x000107c303b0(puVar14,&UNK_109312438);
                        uStack_1d0 = (undefined **)CONCAT17(4,(undefined7)uStack_1d0);
                        uStack_1e0 = (undefined **)CONCAT35(uStack_1e0._5_3_,0x64616568);
                        *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 1;
                        uVar15 = puVar14[1];
                        if ((uVar15 & 1) != 0) {
                          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
                        }
                        func_0x000107c3024c(puVar14 + 0x16,&uStack_1e0,uVar15);
                        uStack_1d8 = *(code **)(puVar39 + 0x1d8);
                        if (uStack_1d8 != (code *)0x0) {
                          piVar25 = (int *)((long)uStack_1d8 + -8);
                          do {
                            cVar6 = '\x01';
                            bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                            if (bVar7) {
                              *piVar25 = *piVar25 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        uStack_1e0 = &PTR_DAT_110b05018;
                        uStack_1c8 = *(undefined ***)(puVar39 + 0x218);
                        if (uStack_1c8 != (undefined **)0x0) {
                          ppuVar28 = uStack_1c8 + -1;
                          do {
                            cVar6 = '\x01';
                            bVar7 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
                            if (bVar7) {
                              *(int *)ppuVar28 = *(int *)ppuVar28 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        uStack_1d0 = &PTR_DAT_110b05018;
                        uStack_1b8 = *(ulong *)(puVar39 + 0x208);
                        uVar43 = *(undefined8 *)(puVar39 + 0x200);
                        if (uStack_1b8 != 0) {
                          piVar25 = (int *)(uStack_1b8 - 8);
                          do {
                            cVar6 = '\x01';
                            bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                            if (bVar7) {
                              *piVar25 = *piVar25 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        lVar31 = 0;
                        ppuStack_1c0 = &PTR_DAT_110b05018;
                        do {
                          func_0x0001096b9684(&lStack_238,(long)ppcVar18 + lVar31);
                          lVar9 = lStack_230;
                          for (lVar27 = lStack_238; lVar27 != lVar9; lVar27 = lVar27 + 0xc) {
                            FUN_10aac9f88(lVar27,pppuVar37);
                            ppuStack_268 = &PTR_DAT_110aefb90;
                            ppuStack_260 = (undefined **)0x0;
                            uStack_240 = 0;
                            uStack_250 = CONCAT44((int)param_2,(int)uVar43);
                            uStack_248 = param_3 & 0xffffffff;
                            uStack_258 = 7;
                            pppuVar16 = (undefined ***)(puVar14 + 6);
                            func_0x000107c303b0(pppuVar16,&SUB_1093416e0);
                            if (pppuVar16 != pppuVar38) {
                              ppuVar26 = pppuVar16[1];
                              ppuVar28 = ppuVar26;
                              if (((ulong)ppuVar26 & 1) != 0) {
                                ppuVar28 = *(undefined ***)((ulong)ppuVar26 & 0xfffffffffffffffe);
                              }
                              ppuVar34 = ppuStack_260;
                              if (((ulong)ppuStack_260 & 1) != 0) {
                                ppuVar34 = *(undefined ***)
                                            ((ulong)ppuStack_260 & 0xfffffffffffffffe);
                              }
                              if (ppuVar28 == ppuVar34) {
                                lVar29 = 0;
                                pppuVar16[1] = ppuStack_260;
                                ppuStack_260 = ppuVar26;
                                uVar51 = *(undefined4 *)(pppuVar16 + 2);
                                *(undefined4 *)(pppuVar16 + 2) = (undefined4)uStack_258;
                                uStack_258 = CONCAT44(uStack_258._4_4_,uVar51);
                                do {
                                  uVar5 = *(undefined1 *)((long)pppuVar16 + lVar29 + 0x18);
                                  *(undefined1 *)((long)pppuVar16 + lVar29 + 0x18) =
                                       *(undefined1 *)((long)&uStack_250 + lVar29);
                                  *(undefined1 *)((long)&uStack_250 + lVar29) = uVar5;
                                  lVar29 = lVar29 + 1;
                                } while (lVar29 != 0x11);
                              }
                              else {
                                func_0x000109340dd8(pppuVar16);
                                func_0x000109340c8c(pppuVar16,&ppuStack_268);
                              }
                            }
                            if (((ulong)ppuStack_260 & 1) != 0) {
                              func_0x0001053936ac(&ppuStack_260);
                            }
                          }
                          if (lStack_238 != 0) {
                            lStack_230 = lStack_238;
                            __ZdlPv(lStack_238);
                          }
                          lVar31 = lVar31 + 0x10;
                        } while (lVar31 != 0x30);
                        lVar31 = 0x20;
                        do {
                          *(undefined ***)((long)ppcVar18 + lVar31) = &PTR_SUB_110b01d60;
                          func_0x000107c2acd4((long)ppcVar18 + lVar31);
                          fVar45 = (float)param_3;
                          fVar44 = SUB84(param_2,0);
                          fVar42 = (float)uVar43;
                          lVar31 = lVar31 + -0x10;
                        } while (lVar31 != -0x10);
                        *(undefined4 *)((long)puVar14 + 0x15c) = 4;
                        *(uint *)(puVar14 + 2) = *(uint *)(puVar14 + 2) | 0x8000010;
                        puVar39 = puStack_328;
                        uVar41 = puVar14[0x1a];
                        if (uVar41 == 0) {
                          uVar41 = puVar14[1];
                          if ((uVar41 & 1) != 0) {
                            uVar41 = *(ulong *)(uVar41 & 0xfffffffffffffffe);
                          }
                          func_0x00010933b59c();
                          puVar14[0x1a] = uVar41;
                        }
                        func_0x0001096bb814(*(long *)(puVar39 + 0x1c8) + 0x30);
                        fVar46 = param_4 * param_4 + fVar42 * fVar42 +
                                 fVar44 * fVar44 + fVar45 * fVar45;
                        if (fVar46 == 0.0) {
                          param_4 = 1.0;
                          fVar42 = 0.0;
                          fVar44 = 0.0;
                          fVar45 = 0.0;
                        }
                        else {
                          fVar46 = 1.0 / SQRT(fVar46);
                          param_4 = param_4 * fVar46;
                          fVar42 = fVar42 * fVar46;
                          fVar44 = fVar44 * fVar46;
                          fVar45 = fVar45 * fVar46;
                        }
                        fVar47 = *(float *)((long)pppuVar37 + 0x24);
                        fVar52 = *(float *)(pppuVar37 + 7);
                        fVar53 = *(float *)((long)pppuVar37 + 0x4c);
                        fVar54 = (fVar47 - fVar52) - fVar53;
                        fVar56 = (fVar52 - fVar47) - fVar53;
                        fVar46 = (fVar53 - fVar47) - fVar52;
                        fVar53 = fVar47 + fVar52 + fVar53;
                        fVar47 = fVar54;
                        if (fVar54 <= fVar53) {
                          fVar47 = fVar53;
                        }
                        bVar4 = 2;
                        if (fVar56 <= fVar47) {
                          fVar56 = fVar47;
                          bVar4 = fVar53 < fVar54;
                        }
                        bVar8 = 3;
                        if (fVar46 <= fVar56) {
                          fVar46 = fVar56;
                          bVar8 = bVar4;
                        }
                        fVar48 = SQRT(fVar46 + 1.0) * 0.5;
                        fVar54 = 0.25 / fVar48;
                        fVar52 = (*(float *)((long)pppuVar37 + 0x44) -
                                 *(float *)((long)pppuVar37 + 0x2c)) * fVar54;
                        fVar55 = (*(float *)(pppuVar37 + 5) + *(float *)((long)pppuVar37 + 0x34)) *
                                 fVar54;
                        fVar57 = (*(float *)((long)pppuVar37 + 0x3c) + *(float *)(pppuVar37 + 9)) *
                                 fVar54;
                        fVar53 = (*(float *)(pppuVar37 + 5) - *(float *)((long)pppuVar37 + 0x34)) *
                                 fVar54;
                        fVar50 = (*(float *)((long)pppuVar37 + 0x2c) +
                                 *(float *)((long)pppuVar37 + 0x44)) * fVar54;
                        fVar49 = fVar52;
                        fVar46 = fVar57;
                        fVar56 = fVar48;
                        fVar47 = fVar55;
                        if (bVar8 != 2) {
                          fVar49 = fVar53;
                          fVar46 = fVar48;
                          fVar56 = fVar57;
                          fVar47 = fVar50;
                        }
                        fVar54 = (*(float *)((long)pppuVar37 + 0x3c) - *(float *)(pppuVar37 + 9)) *
                                 fVar54;
                        fVar57 = fVar48;
                        if (bVar8 != 0) {
                          fVar57 = fVar54;
                          fVar53 = fVar50;
                          fVar52 = fVar55;
                          fVar54 = fVar48;
                        }
                        if (bVar8 < 2) {
                          fVar49 = fVar57;
                          fVar46 = fVar53;
                          fVar56 = fVar52;
                          fVar47 = fVar54;
                        }
                        iVar35 = 0;
                        fVar53 = fVar56 * fVar56 + fVar46 * fVar46 +
                                 fVar47 * fVar47 + fVar49 * fVar49;
                        fVar49 = fVar49 / fVar53;
                        fVar47 = -fVar47 / fVar53;
                        fVar56 = -fVar56 / fVar53;
                        fVar53 = -fVar46 / fVar53;
                        fVar54 = (fVar49 * -4.371139e-08 - fVar47) + fVar56 * -0.0 + fVar53 * -0.0;
                        fVar48 = fVar49 + fVar47 * -4.371139e-08 + fVar53 * 0.0 + fVar56 * -0.0;
                        fVar50 = (fVar49 * 0.0 + fVar56 * -4.371139e-08 + fVar47 * 0.0) - fVar53;
                        fVar46 = fVar56 + fVar49 * 0.0 + fVar53 * -4.371139e-08 + fVar47 * -0.0;
                        fVar56 = ((-(fVar48 * fVar42) + param_4 * fVar54) - fVar44 * fVar50) -
                                 fVar45 * fVar46;
                        fVar53 = (param_4 * fVar48 + fVar42 * fVar54 + fVar45 * fVar50) -
                                 fVar44 * fVar46;
                        fVar52 = (param_4 * fVar50 + fVar44 * fVar54 + fVar42 * fVar46) -
                                 fVar45 * fVar48;
                        fVar42 = (param_4 * fVar46 + fVar45 * fVar54 + fVar44 * fVar48) -
                                 fVar42 * fVar50;
                        fVar45 = fVar53 * fVar53;
                        param_2 = (undefined *)(ulong)(uint)fVar45;
                        fVar46 = fVar52 * fVar52;
                        param_3 = (ulong)(uint)fVar46;
                        fVar44 = fVar53 * fVar52 + fVar56 * fVar42;
                        uStack_1e0 = (undefined **)
                                     CONCAT44(fVar44 + fVar44,
                                              (fVar46 + fVar42 * fVar42) * -2.0 + 1.0);
                        fVar47 = fVar53 * fVar42 - fVar56 * fVar52;
                        fVar44 = fVar53 * fVar52 - fVar56 * fVar42;
                        uStack_1d8 = (code *)CONCAT44(fVar44 + fVar44,fVar47 + fVar47);
                        fVar44 = fVar53 * fVar56 + fVar52 * fVar42;
                        uStack_1d0 = (undefined **)
                                     CONCAT44(fVar44 + fVar44,
                                              (fVar45 + fVar42 * fVar42) * -2.0 + 1.0);
                        fVar44 = fVar53 * fVar42 + fVar56 * fVar52;
                        param_4 = fVar52 * fVar42 - fVar53 * fVar56;
                        param_4 = param_4 + param_4;
                        uStack_1c8 = (undefined **)CONCAT44(param_4,fVar44 + fVar44);
                        fVar42 = (fVar45 + fVar46) * -2.0 + 1.0;
                        uVar15 = (ulong)(uint)fVar42;
                        ppuStack_1c0 = (undefined **)CONCAT44(ppuStack_1c0._4_4_,fVar42);
                        do {
                          lVar31 = 0;
                          param_5 = (undefined ***)0x0;
                          do {
                            puVar1 = (undefined4 *)((long)&uStack_1d8 + (long)param_5 * 0xc);
                            if (iVar35 != 2) {
                              puVar1 = (undefined4 *)((long)ppcVar18 + lVar31);
                            }
                            puVar2 = (undefined4 *)((long)&uStack_1e0 + (long)param_5 * 0xc + 4);
                            if (iVar35 != 1) {
                              puVar2 = puVar1;
                            }
                            uVar51 = *puVar2;
                            uVar23 = *(uint *)(uVar41 + 0xd8);
                            uVar3 = *(uint *)(uVar41 + 0xdc);
                            pppuVar16 = (undefined ***)(ulong)uVar3;
                            if (uVar23 == uVar3) {
                              func_0x000109311970(uVar41 + 0xd8,pppuVar16,uVar3 + 1);
                              uVar23 = *(uint *)(uVar41 + 0xd8);
                            }
                            *(uint *)(uVar41 + 0xd8) = uVar23 + 1;
                            *(undefined4 *)(*(long *)(uVar41 + 0xe0) + (long)(int)uVar23 * 4) =
                                 uVar51;
                            param_5 = (undefined ***)((long)param_5 + 1);
                            lVar31 = lVar31 + 0xc;
                          } while (lVar31 != 0x24);
                          iVar35 = iVar35 + 1;
                          puVar32 = puStack_328;
                          pppuVar19 = pppuStack_330;
                          puVar39 = puStack_338;
                        } while (iVar35 != 3);
                      }
                      puVar30 = puVar32 + 0x220;
                    } while (puVar32 + 0x220 != puVar39);
                  }
                  func_0x00010933df00(auStack_210);
                  if (pppuStack_340 < pppuStack_348[2]) {
                    pppuVar16 = &ppuStack_320;
                    pppuVar20 = (undefined ***)0x0;
                    func_0x0001093a1fb8();
                    pppuVar21 = pppuStack_340;
                  }
                  else {
                    lVar31 = (long)pppuStack_340 - (long)*pppuStack_348;
                    puVar30 = (undefined *)((lVar31 >> 3) * -0x2c8590b21642c859 + 1);
                    if ((undefined *)0x1642c8590b21642 < puVar30) {
                      FUN_10aadad48();
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x10aacb204);
                      (*pcVar13)();
                    }
                    lVar27 = (long)pppuStack_348[2] - (long)*pppuStack_348 >> 3;
                    puVar32 = (undefined *)(lVar27 * -0x590b21642c8590b2);
                    if (puVar32 < puVar30 || (long)puVar32 - (long)puVar30 == 0) {
                      puVar32 = puVar30;
                    }
                    if (0xb21642c8590b20 < (ulong)(lVar27 * -0x2c8590b21642c859)) {
                      puVar32 = (undefined *)0x1642c8590b21642;
                    }
                    if (puVar32 == (undefined *)0x0) {
                      pppuStack_360 = (undefined ***)0x0;
                    }
                    else {
                      FUN_10aadad5c();
                      pppuStack_360 = pppuVar16;
                    }
                    pppuVar21 = (undefined ***)(puVar32 + lVar31);
                    pppuVar16 = &ppuStack_320;
                    pppuVar20 = (undefined ***)0x0;
                    puStack_328 = puVar32;
                    func_0x0001093a1fb8(pppuVar21);
                    pppuVar19 = pppuStack_340;
                    param_5 = (undefined ***)*pppuStack_348;
                    ppuVar28 = (undefined **)
                               ((long)pppuVar21 + ((long)param_5 - (long)pppuStack_340));
                    ppuVar26 = ppuVar28;
                    pppuVar22 = param_5;
                    if (pppuStack_340 != param_5) {
                      do {
                        pppuVar20 = (undefined ***)0x0;
                        pppuVar16 = pppuVar22;
                        func_0x0001093a1fb8(ppuVar26);
                        puVar39 = puStack_338;
                        pppuVar22 = pppuVar22 + 0x17;
                        ppuVar26 = ppuVar26 + 0x17;
                      } while (pppuVar22 != pppuVar19);
                      do {
                        func_0x00010930ef1c(param_5);
                        param_5 = param_5 + 0x17;
                      } while (param_5 != pppuVar19);
                      param_5 = (undefined ***)*pppuStack_348;
                    }
                    *pppuStack_348 = ppuVar28;
                    pppuStack_348[2] = (undefined **)(puStack_328 + (long)pppuStack_360 * 0xb8);
                    pppuVar19 = pppuStack_330;
                    if (param_5 != (undefined ***)0x0) {
                      __ZdlPv(param_5);
                      pppuVar19 = pppuStack_330;
                    }
                  }
                  pppuStack_340 = pppuVar21 + 0x17;
                  param_8 = (undefined ***)0x1642c8590b21642;
                  pppuStack_348[1] = (undefined **)pppuStack_340;
                  pppuVar22 = &ppuStack_320;
                  func_0x00010930ef1c();
                  pppuVar37 = pppuVar37 + 0x10;
                } while (pppuVar37 != pppuStack_358);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
                return pppuVar22;
              }
              ___stack_chk_fail();
              func_0x00010930ef1c(&ppuStack_320);
              func_0x00010aadada4(pppuStack_348);
              __Unwind_Resume(pppuVar22);
              pppuVar21 = pppuVar22;
              func_0x000104bd46a0();
              pcStack_378 = FUN_10aacb314;
              lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              *(undefined1 *)(pppuVar21 + 2) = 0;
              *(undefined2 *)((long)pppuVar21 + 0x14) = 0x101;
              *(undefined1 *)((long)pppuVar21 + 0x16) = 2;
              *(undefined1 *)(pppuVar21 + 3) = 0;
              *(undefined1 *)(pppuVar21 + 6) = 0;
              *(undefined1 *)(pppuVar21 + 7) = 0;
              *(undefined1 *)(pppuVar21 + 0x12) = 0;
              *(undefined1 *)(pppuVar21 + 0x13) = 0;
              pppuVar21[0x15] = (undefined **)0x0;
              pppuVar21[0x16] = (undefined **)0x0;
              pppuVar21[0x14] = (undefined **)0x0;
              *pppuVar21 = (undefined **)0x0;
              pppuVar21[1] = (undefined **)0xffffffff3da9fbe7;
              pppuVar17 = pppuVar21;
              pppuStack_3c0 = param_5;
              pppuStack_3b8 = param_8;
              ppcStack_3b0 = ppcVar18;
              pppuStack_3a8 = pppuVar38;
              pppuStack_3a0 = pppuVar37;
              ppppuStack_398 = param_6;
              pppuStack_390 = pppuVar22;
              pppuStack_388 = pppuVar19;
              ppuStack_380 = &puStack_110;
              if (pppuVar16 != (undefined ***)0x0) {
                pppuVar37 = pppuVar20 + (long)pppuVar16 * 0xb;
                do {
                  ppuVar28 = (undefined **)(long)*(char *)((long)pppuVar20 + 0x17);
                  pppuVar16 = pppuVar20;
                  if ((long)ppuVar28 < 0) {
                    ppuVar28 = pppuVar20[1];
                    pppuVar16 = (undefined ***)*pppuVar20;
                  }
                  if (((ppuVar28 == (undefined **)0x9) &&
                      (*pppuVar16 == (undefined **)0x646f427265707075 &&
                       *(char *)(pppuVar16 + 1) == 'y')) && (0 < *(int *)(pppuVar20 + 5))) {
                    iVar35 = 0;
                    do {
                      uStack_3e8 = 0;
                      uStack_3e0 = 0x500;
                      uStack_3dc = 0;
                      uStack_3d8 = 0;
                      uStack_3d4 = 3;
                      uStack_3d0 = 0;
                      uStack_3cc = 0;
                      appuStack_420[0]._0_4_ = iVar35;
                      FUN_10a4c3c44(pppuVar21,appuStack_420);
                      pppuVar17 = appuStack_420;
                      FUN_10a22d0f8();
                      iVar35 = iVar35 + 1;
                    } while (iVar35 < *(int *)(pppuVar20 + 5));
                  }
                  pppuVar20 = pppuVar20 + 0xb;
                } while (pppuVar20 != pppuVar37);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
                return pppuVar17;
              }
              ___stack_chk_fail();
              pppuVar37 = pppuVar17;
              if (pppuVar17 != (undefined ***)0x0) {
                if (((*(byte *)(pppuVar17 + 2) >> 1 & 1) != 0) &&
                   ((*(byte *)(pppuVar17[10] + 2) >> 2 & 1) != 0)) {
                  puVar39 = pppuVar17[10][5];
                  puVar39[0x48] = 0;
                  *(uint *)(puVar39 + 0x10) = *(uint *)(puVar39 + 0x10) | 8;
                }
                pppuVar37 = pppuVar17 + 6;
                pppuVar16 = pppuVar37;
                if (((ulong)*pppuVar37 & 1) != 0) {
                  pppuVar16 = (undefined ***)((long)*pppuVar37 + 7);
                }
                if (*(int *)(pppuVar17 + 7) != 0) {
                  lVar31 = (long)*(int *)(pppuVar17 + 7) << 3;
                  do {
                    pppuVar37 = (undefined ***)*pppuVar16;
                    FUN_10aacb474(pppuVar37);
                    lVar31 = lVar31 + -8;
                    pppuVar16 = pppuVar16 + 1;
                  } while (lVar31 != 0);
                }
              }
              return pppuVar37;
            }
          }
          pcStack_108 = FUN_10aadbba0;
          *extraout_x8 = (undefined **)0x0;
          extraout_x8[1] = (undefined **)0x0;
          extraout_x8[2] = (undefined **)0x0;
          if (pppuVar21 != (undefined ***)0x0) {
            if ((undefined ***)0x1642c8590b21642 < pppuVar21) {
              FUN_10aadad48();
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x10aadb620);
              (*pcVar13)();
            }
            pppuVar16 = pppuVar21;
            pppuVar37 = pppuVar21;
            FUN_10aadad5c();
            *extraout_x8 = (undefined **)pppuVar16;
            extraout_x8[1] = (undefined **)pppuVar16;
            extraout_x8[2] = (undefined **)(pppuVar16 + (long)pppuVar37 * 0x17);
            lVar31 = (long)pppuVar21 * 0xb8;
            pppuVar37 = pppuVar16 + 0xe;
            do {
              pppuVar37[-0xe] = &PTR_DAT_110aeb838;
              pppuVar37[-0xd] = (undefined **)0x0;
              pppuVar37[-0xb] = (undefined **)0x0;
              pppuVar37[-0xc] = (undefined **)0x0;
              pppuVar37[-9] = (undefined **)0x0;
              pppuVar37[-10] = (undefined **)0x0;
              pppuVar37[-7] = (undefined **)0x0;
              pppuVar37[-8] = (undefined **)0x0;
              *(undefined8 *)((long)pppuVar37 + -0x2c) = 0;
              *(undefined8 *)((long)pppuVar37 + -0x34) = 0;
              *(undefined8 *)((long)pppuVar37 + -0x24) = 1;
              *(undefined4 *)((long)pppuVar37 + -0x1c) = 1;
              pppuVar37[-3] = (undefined **)&DAT_10e5b4a18;
              pppuVar37[-2] = (undefined **)0x0;
              pppuVar37[-1] = (undefined **)&DAT_11383d918;
              pppuVar37[1] = (undefined **)0x0;
              *pppuVar37 = (undefined **)0x0;
              pppuVar37[3] = (undefined **)0x0;
              pppuVar37[2] = (undefined **)0x0;
              pppuVar37[5] = (undefined **)0x0;
              pppuVar37[4] = (undefined **)0x0;
              pppuVar37[7] = (undefined **)0x0;
              pppuVar37[6] = (undefined **)0x0;
              pppuVar37[8] = (undefined **)0x0;
              pppuVar37 = pppuVar37 + 0x17;
              lVar31 = lVar31 + -0xb8;
            } while (lVar31 != 0);
            extraout_x8[1] = (undefined **)(pppuVar16 + (long)pppuVar21 * 0x17);
          }
          return extraout_x8;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10aadbb68);
  (*pcVar13)();
}



/* Entry: 10aadbba0; end: 10aadbc43;  */

/* WARNING: Removing unreachable block (ram,0x00010aacaaa4) */

undefined ***
FUN_10aadbba0(undefined ***param_1,undefined8 param_2,undefined *param_3,ulong param_4,float param_5
             ,ulong *param_6,undefined **param_7,long *param_8,long param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  undefined ***pppuVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  ulong *puVar17;
  undefined **ppuVar18;
  uint uVar19;
  ulong uVar20;
  int *piVar21;
  undefined **ppuVar22;
  long lVar23;
  ulong *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined **ppuVar30;
  int iVar31;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  ulong *unaff_x22;
  undefined ***unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined ***unaff_x26;
  ulong uVar32;
  undefined8 *puVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined **appuStack_320 [7];
  undefined4 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_2dc;
  undefined1 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 uStack_2d0;
  undefined1 uStack_2cc;
  long lStack_2c8;
  undefined ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined ***pppuStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  undefined ***pppuStack_290;
  undefined8 *puStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  ulong uStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  long lStack_250;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  ulong uStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [24];
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  
  bVar5 = *(byte *)((long)param_8 + 0x17);
  uVar32 = param_8[1];
  if (-1 < (char)bVar5) {
    uVar32 = (ulong)bVar5;
  }
  if (uVar32 == 9) {
    plVar3 = (long *)*param_8;
    if (-1 < (char)bVar5) {
      plVar3 = param_8;
    }
    if (*plVar3 == 0x646f427265707075 && *(char *)(plVar3 + 1) == 'y') {
      uStack_268 = *(ulong *)(*(long *)(param_9 + 0x10) + 0x28);
      lVar27 = (long)(*(long *)(*(long *)(param_9 + 0x10) + 0x30) - uStack_268) >> 5;
      lStack_250 = lVar27 * -0xf0f0f0f0f0f0f0f;
      lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *param_1 = (undefined **)0x0;
      param_1[1] = (undefined **)0x0;
      param_1[2] = (undefined **)0x0;
      pppuVar16 = (undefined ***)0x0;
      pppuStack_248 = param_1;
      if (param_7 != (undefined **)0x0) {
        pppuStack_240 = (undefined ***)0x0;
        uVar32 = uStack_268 + lVar27 * 0x20;
        unaff_x24 = &uStack_e0;
        unaff_x19 = &uStack_c8;
        unaff_x23 = &ppuStack_168;
        puStack_258 = param_6 + (long)param_7 * 0x10;
        unaff_x21 = 0xc;
        unaff_x22 = param_6;
        uStack_238 = uVar32;
        puStack_230 = unaff_x19;
        do {
          puVar17 = unaff_x22;
          FUN_10aaca31c(auStack_110);
          ppuStack_220 = &PTR_DAT_110aeb838;
          uStack_218 = 0;
          uVar29 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1dc = 0;
          uStack_1e4 = 0;
          uStack_1e0 = 0;
          uStack_1d4 = 1;
          uStack_1cc = 1;
          puStack_1c8 = &DAT_10e5b4a18;
          uStack_1c0 = 0;
          puStack_1b8 = &DAT_11383d918;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_170 = 0;
          uVar20 = uStack_268;
          if (lStack_250 != 0) {
            do {
              uVar43 = (undefined4)uVar29;
              uVar28 = uVar20;
              if ((*(long *)(uVar20 + 0x1d8) != 0 && *(long *)(uVar20 + 0x208) != 0) &&
                 (*(long *)(uVar20 + 0x218) != 0)) {
                puVar13 = &uStack_208;
                uStack_228 = uVar20;
                func_0x000107c303b0(puVar13,&UNK_109312438);
                *(undefined4 *)((long)puVar13 + 0x134) = 0x3f800000;
                uVar19 = *(uint *)(puVar13 + 2);
                *(undefined1 *)((long)puVar13 + 0x13c) = 1;
                *(uint *)(puVar13 + 2) = uVar19 | 0xa0000;
                uVar32 = uStack_228;
                *(undefined4 *)((long)puVar13 + 0x144) = *(undefined4 *)(uStack_228 + 4);
                *(uint *)(puVar13 + 2) = uVar19 | 0x2a0000;
                func_0x0001096b966c(uVar32 + 0x1d0,0x51);
                uStack_118 = SUB84(param_3,0);
                uStack_114 = (undefined4)param_4;
                uStack_11c = uVar43;
                FUN_10aac9f88(&uStack_11c,unaff_x22);
                uStack_e0 = &PTR_DAT_110aefb90;
                uStack_d8 = 0;
                uStack_b8 = uStack_b8 & 0xffffffffffffff00;
                uStack_c8 = CONCAT44((int)param_3,uVar43);
                ppuStack_c0 = (undefined **)(param_4 & 0xffffffff);
                uStack_d0 = (undefined **)0x7;
                *(uint *)(puVar13 + 2) = *(uint *)(puVar13 + 2) | 2;
                puVar33 = (undefined8 *)puVar13[0x17];
                if (puVar33 == (undefined8 *)0x0) {
                  puVar33 = (undefined8 *)puVar13[1];
                  if (((ulong)puVar33 & 1) != 0) {
                    puVar33 = *(undefined8 **)((ulong)puVar33 & 0xfffffffffffffffe);
                  }
                  func_0x0001093416e0();
                  puVar13[0x17] = puVar33;
                }
                if (puVar33 != unaff_x24) {
                  uVar20 = puVar33[1];
                  uVar32 = uVar20;
                  if ((uVar20 & 1) != 0) {
                    uVar32 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
                  }
                  uVar29 = uStack_d8;
                  if ((uStack_d8 & 1) != 0) {
                    uVar29 = *(ulong *)(uStack_d8 & 0xfffffffffffffffe);
                  }
                  if (uVar32 == uVar29) {
                    lVar27 = 0;
                    puVar33[1] = uStack_d8;
                    uStack_d8 = uVar20;
                    uVar43 = *(undefined4 *)(puVar33 + 2);
                    *(undefined4 *)(puVar33 + 2) = (undefined4)uStack_d0;
                    uStack_d0 = (undefined **)CONCAT44(uStack_d0._4_4_,uVar43);
                    do {
                      uVar6 = *(undefined1 *)((long)puVar33 + lVar27 + 0x18);
                      *(undefined1 *)((long)puVar33 + lVar27 + 0x18) =
                           *(undefined1 *)((long)unaff_x19 + lVar27);
                      *(undefined1 *)((long)unaff_x19 + lVar27) = uVar6;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 0x11);
                  }
                  else {
                    func_0x000109340dd8(puVar33);
                    func_0x000109340c8c(puVar33,&uStack_e0);
                  }
                }
                if ((uStack_d8 & 1) != 0) {
                  func_0x0001053936ac(&uStack_d8);
                }
                *(uint *)(puVar13 + 2) = *(uint *)(puVar13 + 2) | 2;
                uVar32 = uStack_228;
                uVar20 = puVar13[0x17];
                if (uVar20 == 0) {
                  uVar20 = puVar13[1];
                  if ((uVar20 & 1) != 0) {
                    uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
                  }
                  func_0x0001093416e0();
                  puVar13[0x17] = uVar20;
                }
                fVar34 = *(float *)(uVar20 + 0x20);
                if (0.0 < fVar34) {
                  ppuVar18 = &PTR_PTR_1132d8bd0;
                  if (ppuStack_f8 != (undefined **)0x0) {
                    ppuVar18 = ppuStack_f8;
                  }
                  ppuVar22 = &PTR_PTR_1132d8bd0;
                  if (ppuStack_f0 != (undefined **)0x0) {
                    ppuVar22 = ppuStack_f0;
                  }
                  param_4 = *(ulong *)(uVar20 + 0x18);
                  param_3 = ppuVar22[3];
                  *(ulong *)(uVar20 + 0x18) =
                       CONCAT44(((float)((ulong)ppuVar18[3] >> 0x20) * (float)(param_4 >> 0x20)) /
                                fVar34 + (float)((ulong)param_3 >> 0x20),
                                (SUB84(ppuVar18[3],0) * (float)param_4) / fVar34 + SUB84(param_3,0))
                  ;
                  *(uint *)(uVar20 + 0x10) = *(uint *)(uVar20 + 0x10) | 3;
                }
                *(undefined4 *)((long)puVar13 + 0x154) = 3;
                *(uint *)(puVar13 + 2) = *(uint *)(puVar13 + 2) | 0x2000000;
                puVar13 = puVar13 + 9;
                func_0x000107c303b0(puVar13,&UNK_109312438);
                uStack_d0 = (undefined **)CONCAT17(4,(undefined7)uStack_d0);
                uStack_e0 = (undefined **)CONCAT35(uStack_e0._5_3_,0x64616568);
                *(uint *)(puVar13 + 2) = *(uint *)(puVar13 + 2) | 1;
                uVar20 = puVar13[1];
                if ((uVar20 & 1) != 0) {
                  uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
                }
                func_0x000107c3024c(puVar13 + 0x16,&uStack_e0,uVar20);
                uStack_d8 = *(long *)(uVar32 + 0x1d8);
                if (uStack_d8 != 0) {
                  piVar21 = (int *)(uStack_d8 + -8);
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                    if (bVar8) {
                      *piVar21 = *piVar21 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                uStack_e0 = &PTR_DAT_110b05018;
                uStack_c8 = *(long *)(uVar32 + 0x218);
                if (uStack_c8 != 0) {
                  piVar21 = (int *)(uStack_c8 + -8);
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                    if (bVar8) {
                      *piVar21 = *piVar21 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                uStack_d0 = &PTR_DAT_110b05018;
                uStack_b8 = *(ulong *)(uVar32 + 0x208);
                uVar35 = *(undefined8 *)(uVar32 + 0x200);
                if (uStack_b8 != 0) {
                  piVar21 = (int *)(uStack_b8 - 8);
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                    if (bVar8) {
                      *piVar21 = *piVar21 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                lVar27 = 0;
                ppuStack_c0 = &PTR_DAT_110b05018;
                do {
                  func_0x0001096b9684(&lStack_138,(long)unaff_x24 + lVar27);
                  lVar11 = lStack_130;
                  for (lVar23 = lStack_138; lVar23 != lVar11; lVar23 = lVar23 + 0xc) {
                    FUN_10aac9f88(lVar23,unaff_x22);
                    ppuStack_168 = &PTR_DAT_110aefb90;
                    ppuStack_160 = (undefined **)0x0;
                    uStack_140 = 0;
                    uStack_150 = CONCAT44((int)param_3,(int)uVar35);
                    uStack_148 = param_4 & 0xffffffff;
                    uStack_158 = 7;
                    pppuVar16 = (undefined ***)(puVar13 + 6);
                    func_0x000107c303b0(pppuVar16,&SUB_1093416e0);
                    if (pppuVar16 != unaff_x23) {
                      ppuVar22 = pppuVar16[1];
                      ppuVar18 = ppuVar22;
                      if (((ulong)ppuVar22 & 1) != 0) {
                        ppuVar18 = *(undefined ***)((ulong)ppuVar22 & 0xfffffffffffffffe);
                      }
                      ppuVar30 = ppuStack_160;
                      if (((ulong)ppuStack_160 & 1) != 0) {
                        ppuVar30 = *(undefined ***)((ulong)ppuStack_160 & 0xfffffffffffffffe);
                      }
                      if (ppuVar18 == ppuVar30) {
                        lVar26 = 0;
                        pppuVar16[1] = ppuStack_160;
                        ppuStack_160 = ppuVar22;
                        uVar43 = *(undefined4 *)(pppuVar16 + 2);
                        *(undefined4 *)(pppuVar16 + 2) = (undefined4)uStack_158;
                        uStack_158 = CONCAT44(uStack_158._4_4_,uVar43);
                        do {
                          uVar6 = *(undefined1 *)((long)pppuVar16 + lVar26 + 0x18);
                          *(undefined1 *)((long)pppuVar16 + lVar26 + 0x18) =
                               *(undefined1 *)((long)&uStack_150 + lVar26);
                          *(undefined1 *)((long)&uStack_150 + lVar26) = uVar6;
                          lVar26 = lVar26 + 1;
                        } while (lVar26 != 0x11);
                      }
                      else {
                        func_0x000109340dd8(pppuVar16);
                        func_0x000109340c8c(pppuVar16,&ppuStack_168);
                      }
                    }
                    if (((ulong)ppuStack_160 & 1) != 0) {
                      func_0x0001053936ac(&ppuStack_160);
                    }
                  }
                  if (lStack_138 != 0) {
                    lStack_130 = lStack_138;
                    __ZdlPv(lStack_138);
                  }
                  lVar27 = lVar27 + 0x10;
                } while (lVar27 != 0x30);
                lVar27 = 0x20;
                do {
                  *(undefined ***)((long)unaff_x24 + lVar27) = &PTR_SUB_110b01d60;
                  func_0x000107c2acd4((long)unaff_x24 + lVar27);
                  fVar37 = (float)param_4;
                  fVar36 = SUB84(param_3,0);
                  fVar34 = (float)uVar35;
                  lVar27 = lVar27 + -0x10;
                } while (lVar27 != -0x10);
                *(undefined4 *)((long)puVar13 + 0x15c) = 4;
                *(uint *)(puVar13 + 2) = *(uint *)(puVar13 + 2) | 0x8000010;
                uVar32 = uStack_228;
                uVar20 = puVar13[0x1a];
                if (uVar20 == 0) {
                  uVar20 = puVar13[1];
                  if ((uVar20 & 1) != 0) {
                    uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
                  }
                  func_0x00010933b59c();
                  puVar13[0x1a] = uVar20;
                }
                func_0x0001096bb814(*(long *)(uVar32 + 0x1c8) + 0x30);
                fVar38 = param_5 * param_5 + fVar34 * fVar34 + fVar36 * fVar36 + fVar37 * fVar37;
                if (fVar38 == 0.0) {
                  param_5 = 1.0;
                  fVar34 = 0.0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                }
                else {
                  fVar38 = 1.0 / SQRT(fVar38);
                  param_5 = param_5 * fVar38;
                  fVar34 = fVar34 * fVar38;
                  fVar36 = fVar36 * fVar38;
                  fVar37 = fVar37 * fVar38;
                }
                fVar39 = *(float *)((long)unaff_x22 + 0x24);
                fVar44 = *(float *)(unaff_x22 + 7);
                fVar45 = *(float *)((long)unaff_x22 + 0x4c);
                fVar46 = (fVar39 - fVar44) - fVar45;
                fVar48 = (fVar44 - fVar39) - fVar45;
                fVar38 = (fVar45 - fVar39) - fVar44;
                fVar45 = fVar39 + fVar44 + fVar45;
                fVar39 = fVar46;
                if (fVar46 <= fVar45) {
                  fVar39 = fVar45;
                }
                bVar5 = 2;
                if (fVar48 <= fVar39) {
                  fVar48 = fVar39;
                  bVar5 = fVar45 < fVar46;
                }
                bVar9 = 3;
                if (fVar38 <= fVar48) {
                  fVar38 = fVar48;
                  bVar9 = bVar5;
                }
                fVar40 = SQRT(fVar38 + 1.0) * 0.5;
                fVar46 = 0.25 / fVar40;
                fVar44 = (*(float *)((long)unaff_x22 + 0x44) - *(float *)((long)unaff_x22 + 0x2c)) *
                         fVar46;
                fVar47 = (*(float *)(unaff_x22 + 5) + *(float *)((long)unaff_x22 + 0x34)) * fVar46;
                fVar49 = (*(float *)((long)unaff_x22 + 0x3c) + *(float *)(unaff_x22 + 9)) * fVar46;
                fVar45 = (*(float *)(unaff_x22 + 5) - *(float *)((long)unaff_x22 + 0x34)) * fVar46;
                fVar42 = (*(float *)((long)unaff_x22 + 0x2c) + *(float *)((long)unaff_x22 + 0x44)) *
                         fVar46;
                fVar41 = fVar44;
                fVar38 = fVar49;
                fVar48 = fVar40;
                fVar39 = fVar47;
                if (bVar9 != 2) {
                  fVar41 = fVar45;
                  fVar38 = fVar40;
                  fVar48 = fVar49;
                  fVar39 = fVar42;
                }
                fVar46 = (*(float *)((long)unaff_x22 + 0x3c) - *(float *)(unaff_x22 + 9)) * fVar46;
                fVar49 = fVar40;
                if (bVar9 != 0) {
                  fVar49 = fVar46;
                  fVar45 = fVar42;
                  fVar44 = fVar47;
                  fVar46 = fVar40;
                }
                if (bVar9 < 2) {
                  fVar41 = fVar49;
                  fVar38 = fVar45;
                  fVar48 = fVar44;
                  fVar39 = fVar46;
                }
                iVar31 = 0;
                fVar45 = fVar48 * fVar48 + fVar38 * fVar38 + fVar39 * fVar39 + fVar41 * fVar41;
                fVar41 = fVar41 / fVar45;
                fVar39 = -fVar39 / fVar45;
                fVar48 = -fVar48 / fVar45;
                fVar45 = -fVar38 / fVar45;
                fVar46 = (fVar41 * -4.371139e-08 - fVar39) + fVar48 * -0.0 + fVar45 * -0.0;
                fVar40 = fVar41 + fVar39 * -4.371139e-08 + fVar45 * 0.0 + fVar48 * -0.0;
                fVar42 = (fVar41 * 0.0 + fVar48 * -4.371139e-08 + fVar39 * 0.0) - fVar45;
                fVar38 = fVar48 + fVar41 * 0.0 + fVar45 * -4.371139e-08 + fVar39 * -0.0;
                fVar48 = ((-(fVar40 * fVar34) + param_5 * fVar46) - fVar36 * fVar42) -
                         fVar37 * fVar38;
                fVar45 = (param_5 * fVar40 + fVar34 * fVar46 + fVar37 * fVar42) - fVar36 * fVar38;
                fVar44 = (param_5 * fVar42 + fVar36 * fVar46 + fVar34 * fVar38) - fVar37 * fVar40;
                fVar34 = (param_5 * fVar38 + fVar37 * fVar46 + fVar36 * fVar40) - fVar34 * fVar42;
                fVar37 = fVar45 * fVar45;
                param_3 = (undefined *)(ulong)(uint)fVar37;
                fVar38 = fVar44 * fVar44;
                param_4 = (ulong)(uint)fVar38;
                fVar36 = fVar45 * fVar44 + fVar48 * fVar34;
                uStack_e0 = (undefined **)
                            CONCAT44(fVar36 + fVar36,(fVar38 + fVar34 * fVar34) * -2.0 + 1.0);
                fVar39 = fVar45 * fVar34 - fVar48 * fVar44;
                fVar36 = fVar45 * fVar44 - fVar48 * fVar34;
                uStack_d8 = CONCAT44(fVar36 + fVar36,fVar39 + fVar39);
                fVar36 = fVar45 * fVar48 + fVar44 * fVar34;
                uStack_d0 = (undefined **)
                            CONCAT44(fVar36 + fVar36,(fVar37 + fVar34 * fVar34) * -2.0 + 1.0);
                fVar36 = fVar45 * fVar34 + fVar48 * fVar44;
                param_5 = fVar44 * fVar34 - fVar45 * fVar48;
                param_5 = param_5 + param_5;
                uStack_c8 = CONCAT44(param_5,fVar36 + fVar36);
                fVar34 = (fVar37 + fVar38) * -2.0 + 1.0;
                uVar29 = (ulong)(uint)fVar34;
                ppuStack_c0 = (undefined **)CONCAT44(ppuStack_c0._4_4_,fVar34);
                do {
                  lVar27 = 0;
                  unaff_x26 = (undefined ***)0x0;
                  do {
                    puVar1 = (undefined4 *)((long)&uStack_d8 + (long)unaff_x26 * 0xc);
                    if (iVar31 != 2) {
                      puVar1 = (undefined4 *)((long)unaff_x24 + lVar27);
                    }
                    puVar2 = (undefined4 *)((long)&uStack_e0 + (long)unaff_x26 * 0xc + 4);
                    if (iVar31 != 1) {
                      puVar2 = puVar1;
                    }
                    uVar43 = *puVar2;
                    uVar19 = *(uint *)(uVar20 + 0xd8);
                    uVar4 = *(uint *)(uVar20 + 0xdc);
                    puVar17 = (ulong *)(ulong)uVar4;
                    if (uVar19 == uVar4) {
                      func_0x000109311970(uVar20 + 0xd8,puVar17,uVar4 + 1);
                      uVar19 = *(uint *)(uVar20 + 0xd8);
                    }
                    *(uint *)(uVar20 + 0xd8) = uVar19 + 1;
                    *(undefined4 *)(*(long *)(uVar20 + 0xe0) + (long)(int)uVar19 * 4) = uVar43;
                    unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
                    lVar27 = lVar27 + 0xc;
                  } while (lVar27 != 0x24);
                  iVar31 = iVar31 + 1;
                  uVar28 = uStack_228;
                  unaff_x19 = puStack_230;
                  uVar32 = uStack_238;
                } while (iVar31 != 3);
              }
              uVar20 = uVar28 + 0x220;
            } while (uVar28 + 0x220 != uVar32);
          }
          func_0x00010933df00(auStack_110);
          if (pppuStack_240 < pppuStack_248[2]) {
            pppuVar16 = &ppuStack_220;
            param_6 = (ulong *)0x0;
            func_0x0001093a1fb8();
            pppuVar15 = pppuStack_240;
          }
          else {
            lVar27 = (long)pppuStack_240 - (long)*pppuStack_248;
            uVar20 = (lVar27 >> 3) * -0x2c8590b21642c859 + 1;
            if (0x1642c8590b21642 < uVar20) {
              FUN_10aadad48();
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10aacb204);
              (*pcVar12)();
            }
            lVar23 = (long)pppuStack_248[2] - (long)*pppuStack_248 >> 3;
            uVar29 = lVar23 * -0x590b21642c8590b2;
            if (uVar29 < uVar20 || uVar29 - uVar20 == 0) {
              uVar29 = uVar20;
            }
            if (0xb21642c8590b20 < (ulong)(lVar23 * -0x2c8590b21642c859)) {
              uVar29 = 0x1642c8590b21642;
            }
            if (uVar29 == 0) {
              puStack_260 = (ulong *)0x0;
            }
            else {
              FUN_10aadad5c();
              puStack_260 = puVar17;
            }
            pppuVar15 = (undefined ***)(uVar29 + lVar27);
            pppuVar16 = &ppuStack_220;
            param_6 = (ulong *)0x0;
            uStack_228 = uVar29;
            func_0x0001093a1fb8(pppuVar15);
            pppuVar10 = pppuStack_240;
            unaff_x26 = (undefined ***)*pppuStack_248;
            ppuVar18 = (undefined **)((long)pppuVar15 + ((long)unaff_x26 - (long)pppuStack_240));
            ppuVar22 = ppuVar18;
            pppuVar14 = unaff_x26;
            if (pppuStack_240 != unaff_x26) {
              do {
                param_6 = (ulong *)0x0;
                pppuVar16 = pppuVar14;
                func_0x0001093a1fb8(ppuVar22);
                uVar32 = uStack_238;
                pppuVar14 = pppuVar14 + 0x17;
                ppuVar22 = ppuVar22 + 0x17;
              } while (pppuVar14 != pppuVar10);
              do {
                func_0x00010930ef1c(unaff_x26);
                unaff_x26 = unaff_x26 + 0x17;
              } while (unaff_x26 != pppuVar10);
              unaff_x26 = (undefined ***)*pppuStack_248;
            }
            *pppuStack_248 = ppuVar18;
            pppuStack_248[2] = (undefined **)(uStack_228 + (long)puStack_260 * 0xb8);
            unaff_x19 = puStack_230;
            if (unaff_x26 != (undefined ***)0x0) {
              __ZdlPv(unaff_x26);
              unaff_x19 = puStack_230;
            }
          }
          pppuStack_240 = pppuVar15 + 0x17;
          unaff_x25 = 0x1642c8590b21642;
          pppuStack_248[1] = (undefined **)pppuStack_240;
          param_1 = &ppuStack_220;
          func_0x00010930ef1c();
          unaff_x22 = unaff_x22 + 0x10;
        } while (unaff_x22 != puStack_258);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x00010930ef1c(&ppuStack_220);
      func_0x00010aadada4(pppuStack_248);
      __Unwind_Resume(param_1);
      pppuVar14 = param_1;
      func_0x000104bd46a0();
      pcStack_278 = FUN_10aacb314;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(undefined1 *)(pppuVar14 + 2) = 0;
      *(undefined2 *)((long)pppuVar14 + 0x14) = 0x101;
      *(undefined1 *)((long)pppuVar14 + 0x16) = 2;
      *(undefined1 *)(pppuVar14 + 3) = 0;
      *(undefined1 *)(pppuVar14 + 6) = 0;
      *(undefined1 *)(pppuVar14 + 7) = 0;
      *(undefined1 *)(pppuVar14 + 0x12) = 0;
      *(undefined1 *)(pppuVar14 + 0x13) = 0;
      pppuVar14[0x15] = (undefined **)0x0;
      pppuVar14[0x16] = (undefined **)0x0;
      pppuVar14[0x14] = (undefined **)0x0;
      *pppuVar14 = (undefined **)0x0;
      pppuVar14[1] = (undefined **)0xffffffff3da9fbe7;
      pppuVar15 = pppuVar14;
      pppuStack_2c0 = unaff_x26;
      uStack_2b8 = unaff_x25;
      puStack_2b0 = unaff_x24;
      pppuStack_2a8 = unaff_x23;
      puStack_2a0 = unaff_x22;
      uStack_298 = unaff_x21;
      pppuStack_290 = param_1;
      puStack_288 = unaff_x19;
      puStack_280 = &stack0xfffffffffffffff0;
      if (pppuVar16 != (undefined ***)0x0) {
        puVar17 = param_6 + (long)pppuVar16 * 0xb;
        do {
          uVar32 = (ulong)*(char *)((long)param_6 + 0x17);
          puVar24 = param_6;
          if ((long)uVar32 < 0) {
            uVar32 = param_6[1];
            puVar24 = (ulong *)*param_6;
          }
          if (((uVar32 == 9) && (*puVar24 == 0x646f427265707075 && (char)puVar24[1] == 'y')) &&
             (0 < (int)param_6[5])) {
            iVar31 = 0;
            do {
              uStack_2e8 = 0;
              uStack_2e0 = 0x500;
              uStack_2dc = 0;
              uStack_2d8 = 0;
              uStack_2d4 = 3;
              uStack_2d0 = 0;
              uStack_2cc = 0;
              appuStack_320[0]._0_4_ = iVar31;
              FUN_10a4c3c44(pppuVar14,appuStack_320);
              pppuVar15 = appuStack_320;
              FUN_10a22d0f8();
              iVar31 = iVar31 + 1;
            } while (iVar31 < (int)param_6[5]);
          }
          param_6 = param_6 + 0xb;
        } while (param_6 != puVar17);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
        return pppuVar15;
      }
      ___stack_chk_fail();
      pppuVar16 = pppuVar15;
      if (pppuVar15 != (undefined ***)0x0) {
        if (((*(byte *)(pppuVar15 + 2) >> 1 & 1) != 0) &&
           ((*(byte *)(pppuVar15[10] + 2) >> 2 & 1) != 0)) {
          puVar25 = pppuVar15[10][5];
          puVar25[0x48] = 0;
          *(uint *)(puVar25 + 0x10) = *(uint *)(puVar25 + 0x10) | 8;
        }
        pppuVar16 = pppuVar15 + 6;
        pppuVar14 = pppuVar16;
        if (((ulong)*pppuVar16 & 1) != 0) {
          pppuVar14 = (undefined ***)((long)*pppuVar16 + 7);
        }
        if (*(int *)(pppuVar15 + 7) != 0) {
          lVar27 = (long)*(int *)(pppuVar15 + 7) << 3;
          do {
            pppuVar16 = (undefined ***)*pppuVar14;
            FUN_10aacb474(pppuVar16);
            lVar27 = lVar27 + -8;
            pppuVar14 = pppuVar14 + 1;
          } while (lVar27 != 0);
        }
      }
      return pppuVar16;
    }
  }
  *param_1 = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  if (param_7 != (undefined **)0x0) {
    if ((undefined **)0x1642c8590b21642 < param_7) {
      FUN_10aadad48();
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10aadb620);
      (*pcVar12)();
    }
    ppuVar22 = param_7;
    ppuVar18 = param_7;
    FUN_10aadad5c();
    *param_1 = ppuVar22;
    param_1[1] = ppuVar22;
    param_1[2] = ppuVar22 + (long)ppuVar18 * 0x17;
    lVar27 = (long)param_7 * 0xb8;
    ppuVar18 = ppuVar22 + 0xe;
    do {
      ppuVar18[-0xe] = (undefined *)&PTR_DAT_110aeb838;
      ppuVar18[-0xd] = (undefined *)0x0;
      ppuVar18[-0xb] = (undefined *)0x0;
      ppuVar18[-0xc] = (undefined *)0x0;
      ppuVar18[-9] = (undefined *)0x0;
      ppuVar18[-10] = (undefined *)0x0;
      ppuVar18[-7] = (undefined *)0x0;
      ppuVar18[-8] = (undefined *)0x0;
      *(undefined8 *)((long)ppuVar18 + -0x2c) = 0;
      *(undefined8 *)((long)ppuVar18 + -0x34) = 0;
      *(undefined8 *)((long)ppuVar18 + -0x24) = 1;
      *(undefined4 *)((long)ppuVar18 + -0x1c) = 1;
      ppuVar18[-3] = &DAT_10e5b4a18;
      ppuVar18[-2] = (undefined *)0x0;
      ppuVar18[-1] = &DAT_11383d918;
      ppuVar18[1] = (undefined *)0x0;
      *ppuVar18 = (undefined *)0x0;
      ppuVar18[3] = (undefined *)0x0;
      ppuVar18[2] = (undefined *)0x0;
      ppuVar18[5] = (undefined *)0x0;
      ppuVar18[4] = (undefined *)0x0;
      ppuVar18[7] = (undefined *)0x0;
      ppuVar18[6] = (undefined *)0x0;
      ppuVar18[8] = (undefined *)0x0;
      ppuVar18 = ppuVar18 + 0x17;
      lVar27 = lVar27 + -0xb8;
    } while (lVar27 != 0);
    param_1[1] = ppuVar22 + (long)param_7 * 0x17;
  }
  return param_1;
}


