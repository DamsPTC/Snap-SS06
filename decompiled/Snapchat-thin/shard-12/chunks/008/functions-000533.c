/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10987d7b8; end: 10987dfc3;  */

void FUN_10987d7b8(float *param_1,float *param_2,uint *param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  
  uVar9 = *param_3;
  uVar17 = param_3[1];
  uVar10 = param_3[(int)(uVar9 << 1)];
  uVar11 = uVar10 * uVar17;
  pfVar8 = param_1;
  if ((uVar9 & 1) != 0) {
    pfVar8 = param_5;
    param_5 = param_1;
  }
  if ((int)uVar10 < 4) {
    if (uVar10 == 2) {
      if (0 < (int)uVar17) {
        uVar16 = uVar17 + 1;
        pfVar14 = param_5;
        do {
          pfVar1 = (float *)((long)param_2 +
                            (-(ulong)((uint)((int)uVar11 / 2) >> 0x1f) & 0xffffffe000000000 |
                            (ulong)(uint)((int)uVar11 / 2) << 5));
          fVar20 = *param_2;
          fVar24 = param_2[1];
          fVar21 = param_2[2];
          fVar25 = param_2[3];
          fVar22 = param_2[4];
          fVar26 = param_2[5];
          fVar23 = param_2[6];
          fVar27 = param_2[7];
          param_2 = param_2 + 8;
          fVar28 = *pfVar1;
          fVar30 = pfVar1[1];
          fVar29 = pfVar1[2];
          fVar54 = pfVar1[3];
          fVar53 = pfVar1[4];
          fVar98 = pfVar1[5];
          fVar96 = pfVar1[6];
          fVar31 = pfVar1[7];
          *pfVar14 = fVar20 + fVar28;
          pfVar14[1] = fVar24 + fVar30;
          pfVar14[2] = fVar21 + fVar29;
          pfVar14[3] = fVar25 + fVar54;
          pfVar14[4] = fVar22 + fVar53;
          pfVar14[5] = fVar26 + fVar98;
          pfVar14[6] = fVar23 + fVar96;
          pfVar14[7] = fVar27 + fVar31;
          pfVar14[8] = fVar20 - fVar28;
          pfVar14[9] = fVar24 - fVar30;
          pfVar14[10] = fVar21 - fVar29;
          pfVar14[0xb] = fVar25 - fVar54;
          pfVar14[0xc] = fVar22 - fVar53;
          pfVar14[0xd] = fVar26 - fVar98;
          pfVar14[0xe] = fVar23 - fVar96;
          pfVar14[0xf] = fVar27 - fVar31;
          uVar16 = uVar16 - 1;
          pfVar14 = pfVar14 + 0x10;
        } while (1 < uVar16);
      }
    }
    else if (uVar10 == 3 && 0 < (int)uVar17) {
      fVar20 = 0.25 / (float)(int)uVar11;
      uVar15 = (int)uVar11 / 3;
      uVar16 = uVar17 + 1;
      pfVar14 = param_5;
      do {
        fVar24 = param_2[1];
        fVar21 = param_2[2];
        fVar25 = param_2[3];
        fVar22 = param_2[4];
        fVar26 = param_2[5];
        fVar23 = param_2[6];
        fVar27 = param_2[7];
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 2) << 5));
        fVar55 = *pfVar1 + *pfVar2;
        fVar100 = pfVar1[2] + pfVar2[2];
        fVar32 = pfVar1[4] + pfVar2[4];
        fVar56 = pfVar1[6] + pfVar2[6];
        fVar87 = pfVar1[1] + pfVar2[1];
        fVar37 = pfVar1[3] + pfVar2[3];
        fVar38 = pfVar1[5] + pfVar2[5];
        fVar39 = pfVar1[7] + pfVar2[7];
        fVar30 = *param_2 - fVar55 * 0.5;
        fVar54 = fVar21 - fVar100 * 0.5;
        fVar98 = fVar22 - fVar32 * 0.5;
        fVar31 = fVar23 - fVar56 * 0.5;
        fVar102 = fVar24 - fVar87 * 0.5;
        fVar33 = fVar25 - fVar37 * 0.5;
        fVar81 = fVar26 - fVar38 * 0.5;
        fVar34 = fVar27 - fVar39 * 0.5;
        fVar83 = (*pfVar1 - *pfVar2) * -0.8660254;
        fVar35 = (pfVar1[2] - pfVar2[2]) * -0.8660254;
        fVar85 = (pfVar1[4] - pfVar2[4]) * -0.8660254;
        fVar36 = (pfVar1[6] - pfVar2[6]) * -0.8660254;
        fVar28 = (pfVar1[1] - pfVar2[1]) * -0.8660254;
        fVar29 = (pfVar1[3] - pfVar2[3]) * -0.8660254;
        fVar53 = (pfVar1[5] - pfVar2[5]) * -0.8660254;
        fVar96 = (pfVar1[7] - pfVar2[7]) * -0.8660254;
        *pfVar14 = (*param_2 + fVar55) * fVar20;
        pfVar14[1] = (fVar24 + fVar87) * fVar20;
        pfVar14[2] = (fVar21 + fVar100) * fVar20;
        pfVar14[3] = (fVar25 + fVar37) * fVar20;
        pfVar14[4] = (fVar22 + fVar32) * fVar20;
        pfVar14[5] = (fVar26 + fVar38) * fVar20;
        pfVar14[6] = (fVar23 + fVar56) * fVar20;
        pfVar14[7] = (fVar27 + fVar39) * fVar20;
        pfVar14[8] = (fVar30 - fVar28) * fVar20;
        pfVar14[9] = (fVar83 + fVar102) * fVar20;
        pfVar14[10] = (fVar54 - fVar29) * fVar20;
        pfVar14[0xb] = (fVar35 + fVar33) * fVar20;
        pfVar14[0xc] = (fVar98 - fVar53) * fVar20;
        pfVar14[0xd] = (fVar85 + fVar81) * fVar20;
        pfVar14[0xe] = (fVar31 - fVar96) * fVar20;
        pfVar14[0xf] = (fVar36 + fVar34) * fVar20;
        pfVar14[0x10] = (fVar28 + fVar30) * fVar20;
        pfVar14[0x11] = (fVar102 - fVar83) * fVar20;
        pfVar14[0x12] = (fVar29 + fVar54) * fVar20;
        pfVar14[0x13] = (fVar33 - fVar35) * fVar20;
        pfVar14[0x14] = (fVar53 + fVar98) * fVar20;
        pfVar14[0x15] = (fVar81 - fVar85) * fVar20;
        pfVar14[0x16] = (fVar96 + fVar31) * fVar20;
        pfVar14[0x17] = (fVar34 - fVar36) * fVar20;
        pfVar14 = pfVar14 + 0x18;
        uVar16 = uVar16 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar16);
    }
  }
  else if (uVar10 == 4) {
    if (0 < (int)uVar17) {
      fVar20 = 0.25 / (float)(int)uVar11;
      uVar16 = uVar11 + 3;
      if (-1 < (int)uVar11) {
        uVar16 = uVar11;
      }
      uVar16 = (int)uVar16 >> 2;
      uVar15 = uVar17 + 1;
      pfVar14 = param_5;
      do {
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar16 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar16 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 2) << 5));
        pfVar3 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 * 3 >> 0x1f) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 3) << 5));
        fVar33 = *param_2 + *pfVar2;
        fVar81 = param_2[2] + pfVar2[2];
        fVar34 = param_2[4] + pfVar2[4];
        fVar83 = param_2[6] + pfVar2[6];
        fVar35 = param_2[1] + pfVar2[1];
        fVar85 = param_2[3] + pfVar2[3];
        fVar36 = param_2[5] + pfVar2[5];
        fVar87 = param_2[7] + pfVar2[7];
        fVar37 = *param_2 - *pfVar2;
        fVar38 = param_2[2] - pfVar2[2];
        fVar39 = param_2[4] - pfVar2[4];
        fVar40 = param_2[6] - pfVar2[6];
        fVar21 = param_2[1] - pfVar2[1];
        fVar22 = param_2[3] - pfVar2[3];
        fVar23 = param_2[5] - pfVar2[5];
        fVar24 = param_2[7] - pfVar2[7];
        fVar25 = *pfVar1 + *pfVar3;
        fVar26 = pfVar1[2] + pfVar3[2];
        fVar27 = pfVar1[4] + pfVar3[4];
        fVar28 = pfVar1[6] + pfVar3[6];
        fVar54 = pfVar1[1] + pfVar3[1];
        fVar98 = pfVar1[3] + pfVar3[3];
        fVar31 = pfVar1[5] + pfVar3[5];
        fVar55 = pfVar1[7] + pfVar3[7];
        fVar100 = *pfVar1 - *pfVar3;
        fVar32 = pfVar1[2] - pfVar3[2];
        fVar56 = pfVar1[4] - pfVar3[4];
        fVar102 = pfVar1[6] - pfVar3[6];
        fVar29 = pfVar1[1] - pfVar3[1];
        fVar53 = pfVar1[3] - pfVar3[3];
        fVar96 = pfVar1[5] - pfVar3[5];
        fVar30 = pfVar1[7] - pfVar3[7];
        *pfVar14 = (fVar33 + fVar25) * fVar20;
        pfVar14[1] = (fVar35 + fVar54) * fVar20;
        pfVar14[2] = (fVar81 + fVar26) * fVar20;
        pfVar14[3] = (fVar85 + fVar98) * fVar20;
        pfVar14[4] = (fVar34 + fVar27) * fVar20;
        pfVar14[5] = (fVar36 + fVar31) * fVar20;
        pfVar14[6] = (fVar83 + fVar28) * fVar20;
        pfVar14[7] = (fVar87 + fVar55) * fVar20;
        pfVar14[8] = (fVar37 + fVar29) * fVar20;
        pfVar14[9] = (fVar21 - fVar100) * fVar20;
        pfVar14[10] = (fVar38 + fVar53) * fVar20;
        pfVar14[0xb] = (fVar22 - fVar32) * fVar20;
        pfVar14[0xc] = (fVar39 + fVar96) * fVar20;
        pfVar14[0xd] = (fVar23 - fVar56) * fVar20;
        pfVar14[0xe] = (fVar40 + fVar30) * fVar20;
        pfVar14[0xf] = (fVar24 - fVar102) * fVar20;
        pfVar14[0x10] = (fVar33 - fVar25) * fVar20;
        pfVar14[0x11] = (fVar35 - fVar54) * fVar20;
        pfVar14[0x12] = (fVar81 - fVar26) * fVar20;
        pfVar14[0x13] = (fVar85 - fVar98) * fVar20;
        pfVar14[0x14] = (fVar34 - fVar27) * fVar20;
        pfVar14[0x15] = (fVar36 - fVar31) * fVar20;
        pfVar14[0x16] = (fVar83 - fVar28) * fVar20;
        pfVar14[0x17] = (fVar87 - fVar55) * fVar20;
        pfVar14[0x18] = (fVar37 - fVar29) * fVar20;
        pfVar14[0x19] = (fVar21 + fVar100) * fVar20;
        pfVar14[0x1a] = (fVar38 - fVar53) * fVar20;
        pfVar14[0x1b] = (fVar22 + fVar32) * fVar20;
        pfVar14[0x1c] = (fVar39 - fVar96) * fVar20;
        pfVar14[0x1d] = (fVar23 + fVar56) * fVar20;
        pfVar14[0x1e] = (fVar40 - fVar30) * fVar20;
        pfVar14[0x1f] = (fVar24 + fVar102) * fVar20;
        pfVar14 = pfVar14 + 0x20;
        uVar15 = uVar15 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar15);
    }
  }
  else if (uVar10 == 5) {
    if (0 < (int)uVar17) {
      fVar20 = 0.25 / (float)(int)uVar11;
      uVar15 = (int)uVar11 / 5;
      uVar16 = uVar17 + 1;
      pfVar14 = param_5;
      do {
        fVar29 = *param_2;
        fVar100 = param_2[1];
        fVar96 = param_2[2];
        fVar56 = param_2[3];
        fVar54 = param_2[4];
        fVar33 = param_2[5];
        fVar31 = param_2[6];
        fVar34 = param_2[7];
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 2) << 5));
        pfVar3 = (float *)((long)param_2 +
                          (-(ulong)(uVar15 * 3 >> 0x1f) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 3) << 5));
        pfVar4 = (float *)((long)param_2 +
                          (-(ulong)((uVar15 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 4) << 5));
        fVar21 = *pfVar1 + *pfVar4;
        fVar22 = pfVar1[2] + pfVar4[2];
        fVar23 = pfVar1[4] + pfVar4[4];
        fVar24 = pfVar1[6] + pfVar4[6];
        fVar45 = pfVar1[1] + pfVar4[1];
        fVar47 = pfVar1[3] + pfVar4[3];
        fVar73 = pfVar1[5] + pfVar4[5];
        fVar77 = pfVar1[7] + pfVar4[7];
        fVar49 = *pfVar2 + *pfVar3;
        fVar50 = pfVar2[2] + pfVar3[2];
        fVar51 = pfVar2[4] + pfVar3[4];
        fVar52 = pfVar2[6] + pfVar3[6];
        fVar57 = pfVar2[1] + pfVar3[1];
        fVar69 = pfVar2[3] + pfVar3[3];
        fVar58 = pfVar2[5] + pfVar3[5];
        fVar70 = pfVar2[7] + pfVar3[7];
        fVar59 = fVar29 + fVar21 * 0.309017 + fVar49 * -0.809017;
        fVar71 = fVar96 + fVar22 * 0.309017 + fVar50 * -0.809017;
        fVar60 = fVar54 + fVar23 * 0.309017 + fVar51 * -0.809017;
        fVar72 = fVar31 + fVar24 * 0.309017 + fVar52 * -0.809017;
        fVar25 = fVar100 + fVar45 * 0.309017 + fVar57 * -0.809017;
        fVar26 = fVar56 + fVar47 * 0.309017 + fVar69 * -0.809017;
        fVar27 = fVar33 + fVar73 * 0.309017 + fVar58 * -0.809017;
        fVar28 = fVar34 + fVar77 * 0.309017 + fVar70 * -0.809017;
        fVar46 = *pfVar1 - *pfVar4;
        fVar48 = pfVar1[2] - pfVar4[2];
        fVar75 = pfVar1[4] - pfVar4[4];
        fVar79 = pfVar1[6] - pfVar4[6];
        fVar35 = pfVar1[1] - pfVar4[1];
        fVar85 = pfVar1[3] - pfVar4[3];
        fVar36 = pfVar1[5] - pfVar4[5];
        fVar87 = pfVar1[7] - pfVar4[7];
        fVar53 = fVar29 + fVar21 * -0.809017 + fVar49 * 0.309017;
        fVar30 = fVar96 + fVar22 * -0.809017 + fVar50 * 0.309017;
        fVar98 = fVar54 + fVar23 * -0.809017 + fVar51 * 0.309017;
        fVar55 = fVar31 + fVar24 * -0.809017 + fVar52 * 0.309017;
        fVar37 = *pfVar2 - *pfVar3;
        fVar38 = pfVar2[2] - pfVar3[2];
        fVar39 = pfVar2[4] - pfVar3[4];
        fVar40 = pfVar2[6] - pfVar3[6];
        fVar95 = pfVar2[1] - pfVar3[1];
        fVar97 = pfVar2[3] - pfVar3[3];
        fVar99 = pfVar2[5] - pfVar3[5];
        fVar101 = pfVar2[7] - pfVar3[7];
        fVar32 = fVar100 + fVar45 * -0.809017 + fVar57 * 0.309017;
        fVar102 = fVar56 + fVar47 * -0.809017 + fVar69 * 0.309017;
        fVar81 = fVar33 + fVar73 * -0.809017 + fVar58 * 0.309017;
        fVar83 = fVar34 + fVar77 * -0.809017 + fVar70 * 0.309017;
        fVar41 = fVar35 * -0.95105654 + fVar95 * -0.58778524;
        fVar89 = fVar85 * -0.95105654 + fVar97 * -0.58778524;
        fVar42 = fVar36 * -0.95105654 + fVar99 * -0.58778524;
        fVar90 = fVar87 * -0.95105654 + fVar101 * -0.58778524;
        fVar43 = fVar46 * 0.95105654 - fVar37 * -0.58778524;
        fVar91 = fVar48 * 0.95105654 - fVar38 * -0.58778524;
        fVar44 = fVar75 * 0.95105654 - fVar39 * -0.58778524;
        fVar93 = fVar79 * 0.95105654 - fVar40 * -0.58778524;
        fVar35 = fVar35 * 0.58778524 + fVar95 * -0.95105654;
        fVar85 = fVar85 * 0.58778524 + fVar97 * -0.95105654;
        fVar36 = fVar36 * 0.58778524 + fVar99 * -0.95105654;
        fVar87 = fVar87 * 0.58778524 + fVar101 * -0.95105654;
        fVar37 = fVar46 * -0.58778524 - fVar37 * -0.95105654;
        fVar38 = fVar48 * -0.58778524 - fVar38 * -0.95105654;
        fVar39 = fVar75 * -0.58778524 - fVar39 * -0.95105654;
        fVar40 = fVar79 * -0.58778524 - fVar40 * -0.95105654;
        *pfVar14 = (fVar49 + fVar29 + fVar21) * fVar20;
        pfVar14[1] = (fVar57 + fVar100 + fVar45) * fVar20;
        pfVar14[2] = (fVar50 + fVar96 + fVar22) * fVar20;
        pfVar14[3] = (fVar69 + fVar56 + fVar47) * fVar20;
        pfVar14[4] = (fVar51 + fVar54 + fVar23) * fVar20;
        pfVar14[5] = (fVar58 + fVar33 + fVar73) * fVar20;
        pfVar14[6] = (fVar52 + fVar31 + fVar24) * fVar20;
        pfVar14[7] = (fVar70 + fVar34 + fVar77) * fVar20;
        pfVar14[8] = (fVar59 - fVar41) * fVar20;
        pfVar14[9] = (fVar25 - fVar43) * fVar20;
        pfVar14[10] = (fVar71 - fVar89) * fVar20;
        pfVar14[0xb] = (fVar26 - fVar91) * fVar20;
        pfVar14[0xc] = (fVar60 - fVar42) * fVar20;
        pfVar14[0xd] = (fVar27 - fVar44) * fVar20;
        pfVar14[0xe] = (fVar72 - fVar90) * fVar20;
        pfVar14[0xf] = (fVar28 - fVar93) * fVar20;
        pfVar14[0x20] = (fVar59 + fVar41) * fVar20;
        pfVar14[0x21] = (fVar25 + fVar43) * fVar20;
        pfVar14[0x22] = (fVar71 + fVar89) * fVar20;
        pfVar14[0x23] = (fVar26 + fVar91) * fVar20;
        pfVar14[0x24] = (fVar60 + fVar42) * fVar20;
        pfVar14[0x25] = (fVar27 + fVar44) * fVar20;
        pfVar14[0x26] = (fVar72 + fVar90) * fVar20;
        pfVar14[0x27] = (fVar28 + fVar93) * fVar20;
        pfVar14[0x10] = (fVar53 + fVar35) * fVar20;
        pfVar14[0x11] = (fVar32 + fVar37) * fVar20;
        pfVar14[0x12] = (fVar30 + fVar85) * fVar20;
        pfVar14[0x13] = (fVar102 + fVar38) * fVar20;
        pfVar14[0x14] = (fVar98 + fVar36) * fVar20;
        pfVar14[0x15] = (fVar81 + fVar39) * fVar20;
        pfVar14[0x16] = (fVar55 + fVar87) * fVar20;
        pfVar14[0x17] = (fVar83 + fVar40) * fVar20;
        pfVar14[0x18] = (fVar53 - fVar35) * fVar20;
        pfVar14[0x19] = (fVar32 - fVar37) * fVar20;
        pfVar14[0x1a] = (fVar30 - fVar85) * fVar20;
        pfVar14[0x1b] = (fVar102 - fVar38) * fVar20;
        pfVar14[0x1c] = (fVar98 - fVar36) * fVar20;
        pfVar14[0x1d] = (fVar81 - fVar39) * fVar20;
        pfVar14[0x1e] = (fVar55 - fVar87) * fVar20;
        pfVar14[0x1f] = (fVar83 - fVar40) * fVar20;
        pfVar14 = pfVar14 + 0x28;
        uVar16 = uVar16 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar16);
    }
  }
  else if (uVar10 == 8 && 0 < (int)uVar17) {
    uVar16 = uVar11 + 7;
    if (-1 < (int)uVar11) {
      uVar16 = uVar11;
    }
    uVar15 = (int)uVar16 >> 3;
    fVar20 = 0.25 / (float)(int)uVar11;
    uVar13 = uVar15 * 3;
    uVar12 = (uVar16 & 0xfffffff8) - uVar15;
    uVar16 = uVar17 + 1;
    pfVar14 = param_5;
    do {
      pfVar1 = (float *)((long)param_2 +
                        (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5));
      pfVar2 = (float *)((long)param_2 +
                        (-(ulong)(uVar13 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar13 << 5));
      pfVar3 = (float *)((long)param_2 +
                        (-(ulong)(uVar15 * 5 >> 0x1f) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 5) << 5));
      pfVar4 = (float *)((long)param_2 +
                        (-(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5));
      pfVar5 = (float *)((long)param_2 +
                        (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 2) << 5));
      pfVar6 = (float *)((long)param_2 +
                        (-(ulong)((uVar13 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 6) << 5));
      pfVar7 = (float *)((long)param_2 +
                        (-(ulong)((uVar15 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 4) << 5));
      fVar81 = *param_2 + *pfVar7;
      fVar83 = param_2[2] + pfVar7[2];
      fVar85 = param_2[4] + pfVar7[4];
      fVar87 = param_2[6] + pfVar7[6];
      fVar89 = param_2[1] + pfVar7[1];
      fVar90 = param_2[3] + pfVar7[3];
      fVar91 = param_2[5] + pfVar7[5];
      fVar93 = param_2[7] + pfVar7[7];
      fVar95 = *param_2 - *pfVar7;
      fVar97 = param_2[2] - pfVar7[2];
      fVar99 = param_2[4] - pfVar7[4];
      fVar101 = param_2[6] - pfVar7[6];
      fVar21 = param_2[1] - pfVar7[1];
      fVar22 = param_2[3] - pfVar7[3];
      fVar23 = param_2[5] - pfVar7[5];
      fVar24 = param_2[7] - pfVar7[7];
      fVar25 = *pfVar1 + *pfVar3;
      fVar26 = pfVar1[2] + pfVar3[2];
      fVar27 = pfVar1[4] + pfVar3[4];
      fVar28 = pfVar1[6] + pfVar3[6];
      fVar69 = pfVar1[1] + pfVar3[1];
      fVar70 = pfVar1[3] + pfVar3[3];
      fVar71 = pfVar1[5] + pfVar3[5];
      fVar72 = pfVar1[7] + pfVar3[7];
      fVar73 = *pfVar1 - *pfVar3;
      fVar75 = pfVar1[2] - pfVar3[2];
      fVar77 = pfVar1[4] - pfVar3[4];
      fVar79 = pfVar1[6] - pfVar3[6];
      fVar29 = pfVar1[1] - pfVar3[1];
      fVar30 = pfVar1[3] - pfVar3[3];
      fVar31 = pfVar1[5] - pfVar3[5];
      fVar32 = pfVar1[7] - pfVar3[7];
      fVar33 = *pfVar5 + *pfVar6;
      fVar34 = pfVar5[2] + pfVar6[2];
      fVar35 = pfVar5[4] + pfVar6[4];
      fVar36 = pfVar5[6] + pfVar6[6];
      fVar41 = pfVar5[1] + pfVar6[1];
      fVar42 = pfVar5[3] + pfVar6[3];
      fVar43 = pfVar5[5] + pfVar6[5];
      fVar44 = pfVar5[7] + pfVar6[7];
      fVar45 = *pfVar5 - *pfVar6;
      fVar46 = pfVar5[2] - pfVar6[2];
      fVar47 = pfVar5[4] - pfVar6[4];
      fVar48 = pfVar5[6] - pfVar6[6];
      fVar53 = pfVar5[1] - pfVar6[1];
      fVar54 = pfVar5[3] - pfVar6[3];
      fVar55 = pfVar5[5] - pfVar6[5];
      fVar56 = pfVar5[7] - pfVar6[7];
      fVar57 = *pfVar2 + *pfVar4;
      fVar58 = pfVar2[2] + pfVar4[2];
      fVar59 = pfVar2[4] + pfVar4[4];
      fVar60 = pfVar2[6] + pfVar4[6];
      fVar61 = pfVar2[1] + pfVar4[1];
      fVar62 = pfVar2[3] + pfVar4[3];
      fVar63 = pfVar2[5] + pfVar4[5];
      fVar64 = pfVar2[7] + pfVar4[7];
      fVar37 = pfVar2[1] - pfVar4[1];
      fVar38 = pfVar2[3] - pfVar4[3];
      fVar39 = pfVar2[5] - pfVar4[5];
      fVar40 = pfVar2[7] - pfVar4[7];
      fVar96 = fVar95 - fVar21 * 0.0;
      fVar98 = fVar97 - fVar22 * 0.0;
      fVar100 = fVar99 - fVar23 * 0.0;
      fVar102 = fVar101 - fVar24 * 0.0;
      fVar21 = fVar21 + fVar95 * 0.0;
      fVar22 = fVar22 + fVar97 * 0.0;
      fVar23 = fVar23 + fVar99 * 0.0;
      fVar24 = fVar24 + fVar101 * 0.0;
      fVar95 = fVar73 * 0.70711 - fVar29 * -0.70711;
      fVar97 = fVar75 * 0.70711 - fVar30 * -0.70711;
      fVar99 = fVar77 * 0.70711 - fVar31 * -0.70711;
      fVar101 = fVar79 * 0.70711 - fVar32 * -0.70711;
      fVar73 = fVar73 * -0.70711 + fVar29 * 0.70711;
      fVar75 = fVar75 * -0.70711 + fVar30 * 0.70711;
      fVar77 = fVar77 * -0.70711 + fVar31 * 0.70711;
      fVar79 = fVar79 * -0.70711 + fVar32 * 0.70711;
      fVar29 = -fVar45 + fVar53 * 0.0;
      fVar30 = -fVar46 + fVar54 * 0.0;
      fVar31 = -fVar47 + fVar55 * 0.0;
      fVar32 = -fVar48 + fVar56 * 0.0;
      fVar49 = (*pfVar2 - *pfVar4) * -0.70711;
      fVar50 = (pfVar2[2] - pfVar4[2]) * -0.70711;
      fVar51 = (pfVar2[4] - pfVar4[4]) * -0.70711;
      fVar52 = (pfVar2[6] - pfVar4[6]) * -0.70711;
      fVar65 = fVar49 - fVar37 * -0.70711;
      fVar66 = fVar50 - fVar38 * -0.70711;
      fVar67 = fVar51 - fVar39 * -0.70711;
      fVar68 = fVar52 - fVar40 * -0.70711;
      fVar49 = fVar49 + fVar37 * -0.70711;
      fVar50 = fVar50 + fVar38 * -0.70711;
      fVar51 = fVar51 + fVar39 * -0.70711;
      fVar52 = fVar52 + fVar40 * -0.70711;
      fVar37 = fVar81 + fVar33;
      fVar38 = fVar83 + fVar34;
      fVar39 = fVar85 + fVar35;
      fVar40 = fVar87 + fVar36;
      fVar74 = fVar89 + fVar41;
      fVar76 = fVar90 + fVar42;
      fVar78 = fVar91 + fVar43;
      fVar80 = fVar93 + fVar44;
      fVar81 = fVar81 - fVar33;
      fVar83 = fVar83 - fVar34;
      fVar85 = fVar85 - fVar35;
      fVar87 = fVar87 - fVar36;
      fVar89 = fVar89 - fVar41;
      fVar90 = fVar90 - fVar42;
      fVar91 = fVar91 - fVar43;
      fVar93 = fVar93 - fVar44;
      fVar53 = fVar53 + fVar45 * 0.0;
      fVar54 = fVar54 + fVar46 * 0.0;
      fVar55 = fVar55 + fVar47 * 0.0;
      fVar56 = fVar56 + fVar48 * 0.0;
      fVar35 = fVar25 + fVar57;
      fVar36 = fVar26 + fVar58;
      fVar41 = fVar27 + fVar59;
      fVar42 = fVar28 + fVar60;
      fVar82 = fVar69 + fVar61;
      fVar84 = fVar70 + fVar62;
      fVar86 = fVar71 + fVar63;
      fVar88 = fVar72 + fVar64;
      fVar25 = fVar25 - fVar57;
      fVar26 = fVar26 - fVar58;
      fVar27 = fVar27 - fVar59;
      fVar28 = fVar28 - fVar60;
      fVar69 = fVar69 - fVar61;
      fVar70 = fVar70 - fVar62;
      fVar71 = fVar71 - fVar63;
      fVar72 = fVar72 - fVar64;
      fVar47 = fVar96 + fVar53;
      fVar48 = fVar98 + fVar54;
      fVar57 = fVar100 + fVar55;
      fVar58 = fVar102 + fVar56;
      fVar59 = fVar21 + fVar29;
      fVar60 = fVar22 + fVar30;
      fVar61 = fVar23 + fVar31;
      fVar62 = fVar24 + fVar32;
      fVar96 = fVar96 - fVar53;
      fVar98 = fVar98 - fVar54;
      fVar100 = fVar100 - fVar55;
      fVar102 = fVar102 - fVar56;
      fVar63 = fVar95 + fVar65;
      fVar64 = fVar97 + fVar66;
      fVar92 = fVar99 + fVar67;
      fVar94 = fVar101 + fVar68;
      fVar95 = fVar95 - fVar65;
      fVar97 = fVar97 - fVar66;
      fVar99 = fVar99 - fVar67;
      fVar101 = fVar101 - fVar68;
      fVar43 = fVar73 - fVar49;
      fVar44 = fVar75 - fVar50;
      fVar45 = fVar77 - fVar51;
      fVar46 = fVar79 - fVar52;
      fVar21 = fVar21 - fVar29;
      fVar22 = fVar22 - fVar30;
      fVar23 = fVar23 - fVar31;
      fVar24 = fVar24 - fVar32;
      fVar31 = fVar81 - fVar89 * 0.0;
      fVar55 = fVar83 - fVar90 * 0.0;
      fVar32 = fVar85 - fVar91 * 0.0;
      fVar56 = fVar87 - fVar93 * 0.0;
      fVar89 = fVar89 + fVar81 * 0.0;
      fVar90 = fVar90 + fVar83 * 0.0;
      fVar91 = fVar91 + fVar85 * 0.0;
      fVar93 = fVar93 + fVar87 * 0.0;
      fVar33 = fVar69 + fVar25 * 0.0;
      fVar81 = fVar70 + fVar26 * 0.0;
      fVar34 = fVar71 + fVar27 * 0.0;
      fVar83 = fVar72 + fVar28 * 0.0;
      fVar73 = fVar73 + fVar49;
      fVar75 = fVar75 + fVar50;
      fVar77 = fVar77 + fVar51;
      fVar79 = fVar79 + fVar52;
      fVar25 = -fVar25 + fVar69 * 0.0;
      fVar26 = -fVar26 + fVar70 * 0.0;
      fVar27 = -fVar27 + fVar71 * 0.0;
      fVar28 = -fVar28 + fVar72 * 0.0;
      fVar29 = fVar96 - fVar21 * 0.0;
      fVar53 = fVar98 - fVar22 * 0.0;
      fVar30 = fVar100 - fVar23 * 0.0;
      fVar54 = fVar102 - fVar24 * 0.0;
      fVar21 = fVar21 + fVar96 * 0.0;
      fVar22 = fVar22 + fVar98 * 0.0;
      fVar23 = fVar23 + fVar100 * 0.0;
      fVar24 = fVar24 + fVar102 * 0.0;
      fVar96 = -fVar95 + fVar43 * 0.0;
      fVar98 = -fVar97 + fVar44 * 0.0;
      fVar100 = -fVar99 + fVar45 * 0.0;
      fVar102 = -fVar101 + fVar46 * 0.0;
      fVar43 = fVar43 + fVar95 * 0.0;
      fVar44 = fVar44 + fVar97 * 0.0;
      fVar45 = fVar45 + fVar99 * 0.0;
      fVar46 = fVar46 + fVar101 * 0.0;
      *pfVar14 = (fVar37 + fVar35) * fVar20;
      pfVar14[1] = (fVar74 + fVar82) * fVar20;
      pfVar14[2] = (fVar38 + fVar36) * fVar20;
      pfVar14[3] = (fVar76 + fVar84) * fVar20;
      pfVar14[4] = (fVar39 + fVar41) * fVar20;
      pfVar14[5] = (fVar78 + fVar86) * fVar20;
      pfVar14[6] = (fVar40 + fVar42) * fVar20;
      pfVar14[7] = (fVar80 + fVar88) * fVar20;
      pfVar14[8] = (fVar47 + fVar63) * fVar20;
      pfVar14[9] = (fVar59 + fVar73) * fVar20;
      pfVar14[10] = (fVar48 + fVar64) * fVar20;
      pfVar14[0xb] = (fVar60 + fVar75) * fVar20;
      pfVar14[0xc] = (fVar57 + fVar92) * fVar20;
      pfVar14[0xd] = (fVar61 + fVar77) * fVar20;
      pfVar14[0xe] = (fVar58 + fVar94) * fVar20;
      pfVar14[0xf] = (fVar62 + fVar79) * fVar20;
      pfVar14[0x10] = (fVar31 + fVar33) * fVar20;
      pfVar14[0x11] = (fVar89 + fVar25) * fVar20;
      pfVar14[0x12] = (fVar55 + fVar81) * fVar20;
      pfVar14[0x13] = (fVar90 + fVar26) * fVar20;
      pfVar14[0x14] = (fVar32 + fVar34) * fVar20;
      pfVar14[0x15] = (fVar91 + fVar27) * fVar20;
      pfVar14[0x16] = (fVar56 + fVar83) * fVar20;
      pfVar14[0x17] = (fVar93 + fVar28) * fVar20;
      pfVar14[0x20] = (fVar37 - fVar35) * fVar20;
      pfVar14[0x21] = (fVar74 - fVar82) * fVar20;
      pfVar14[0x22] = (fVar38 - fVar36) * fVar20;
      pfVar14[0x23] = (fVar76 - fVar84) * fVar20;
      pfVar14[0x24] = (fVar39 - fVar41) * fVar20;
      pfVar14[0x25] = (fVar78 - fVar86) * fVar20;
      pfVar14[0x26] = (fVar40 - fVar42) * fVar20;
      pfVar14[0x27] = (fVar80 - fVar88) * fVar20;
      pfVar14[0x28] = (fVar47 - fVar63) * fVar20;
      pfVar14[0x29] = (fVar59 - fVar73) * fVar20;
      pfVar14[0x2a] = (fVar48 - fVar64) * fVar20;
      pfVar14[0x2b] = (fVar60 - fVar75) * fVar20;
      pfVar14[0x2c] = (fVar57 - fVar92) * fVar20;
      pfVar14[0x2d] = (fVar61 - fVar77) * fVar20;
      pfVar14[0x2e] = (fVar58 - fVar94) * fVar20;
      pfVar14[0x2f] = (fVar62 - fVar79) * fVar20;
      pfVar14[0x30] = (fVar31 - fVar33) * fVar20;
      pfVar14[0x31] = (fVar89 - fVar25) * fVar20;
      pfVar14[0x32] = (fVar55 - fVar81) * fVar20;
      pfVar14[0x33] = (fVar90 - fVar26) * fVar20;
      pfVar14[0x34] = (fVar32 - fVar34) * fVar20;
      pfVar14[0x35] = (fVar91 - fVar27) * fVar20;
      pfVar14[0x36] = (fVar56 - fVar83) * fVar20;
      pfVar14[0x37] = (fVar93 - fVar28) * fVar20;
      uVar16 = uVar16 - 1;
      pfVar14[0x18] = (fVar29 + fVar43) * fVar20;
      pfVar14[0x19] = (fVar21 + fVar96) * fVar20;
      pfVar14[0x1a] = (fVar53 + fVar44) * fVar20;
      pfVar14[0x1b] = (fVar22 + fVar98) * fVar20;
      pfVar14[0x1c] = (fVar30 + fVar45) * fVar20;
      pfVar14[0x1d] = (fVar23 + fVar100) * fVar20;
      pfVar14[0x1e] = (fVar54 + fVar46) * fVar20;
      pfVar14[0x1f] = (fVar24 + fVar102) * fVar20;
      pfVar14[0x38] = (fVar29 - fVar43) * fVar20;
      pfVar14[0x39] = (fVar21 - fVar96) * fVar20;
      pfVar14[0x3a] = (fVar53 - fVar44) * fVar20;
      pfVar14[0x3b] = (fVar22 - fVar98) * fVar20;
      pfVar14[0x3c] = (fVar30 - fVar45) * fVar20;
      pfVar14[0x3d] = (fVar23 - fVar100) * fVar20;
      pfVar14[0x3e] = (fVar54 - fVar46) * fVar20;
      pfVar14[0x3f] = (fVar24 - fVar102) * fVar20;
      pfVar14 = pfVar14 + 0x40;
      param_2 = param_2 + 8;
    } while (1 < uVar16);
  }
  if (1 < (int)uVar9) {
    param_4 = param_4 + (long)(int)(-(uVar10 & 1) & uVar10) * 8;
    uVar18 = (ulong)uVar9 + 1;
    iVar19 = uVar9 * 2;
    do {
      pfVar14 = pfVar8;
      iVar19 = iVar19 + -2;
      uVar9 = param_3[iVar19];
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = (int)uVar17 / (int)uVar9;
      }
      if ((int)uVar9 < 4) {
        if (uVar9 == 2) {
          FUN_10987fa38(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
        }
        else if (uVar9 == 3) {
          FUN_10987fac8(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
        }
      }
      else if (uVar9 == 4) {
        FUN_10987fc10(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
      }
      else if (uVar9 == 5) {
        FUN_10987fd8c(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
      }
      param_4 = param_4 + (long)(int)((uVar9 - 1) * uVar10) * 8;
      uVar10 = uVar9 * uVar10;
      uVar18 = uVar18 - 1;
      pfVar8 = param_5;
      param_5 = pfVar14;
      uVar17 = uVar16;
    } while (2 < uVar18);
  }
  return;
}



/* Entry: 10987dfc4; end: 10987e6e7;  */

void FUN_10987dfc4(float *param_1,float *param_2,uint *param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  
  uVar9 = *param_3;
  uVar17 = param_3[1];
  uVar10 = param_3[(int)(uVar9 << 1)];
  uVar11 = uVar10 * uVar17;
  pfVar8 = param_1;
  if ((uVar9 & 1) != 0) {
    pfVar8 = param_5;
    param_5 = param_1;
  }
  if ((int)uVar10 < 4) {
    if (uVar10 == 2) {
      if (0 < (int)uVar17) {
        uVar16 = uVar17 + 1;
        pfVar14 = param_5;
        do {
          pfVar1 = (float *)((long)param_2 +
                            (-(ulong)((uint)((int)uVar11 / 2) >> 0x1f) & 0xffffffe000000000 |
                            (ulong)(uint)((int)uVar11 / 2) << 5));
          fVar20 = *param_2;
          fVar65 = param_2[1];
          fVar64 = param_2[2];
          fVar99 = param_2[3];
          fVar97 = param_2[4];
          fVar22 = param_2[5];
          fVar21 = param_2[6];
          fVar66 = param_2[7];
          param_2 = param_2 + 8;
          fVar101 = *pfVar1;
          fVar24 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar28 = pfVar1[3];
          fVar67 = pfVar1[4];
          fVar25 = pfVar1[5];
          fVar103 = pfVar1[6];
          fVar29 = pfVar1[7];
          *pfVar14 = fVar20 + fVar101;
          pfVar14[1] = fVar65 + fVar24;
          pfVar14[2] = fVar64 + fVar23;
          pfVar14[3] = fVar99 + fVar28;
          pfVar14[4] = fVar97 + fVar67;
          pfVar14[5] = fVar22 + fVar25;
          pfVar14[6] = fVar21 + fVar103;
          pfVar14[7] = fVar66 + fVar29;
          pfVar14[8] = fVar20 - fVar101;
          pfVar14[9] = fVar65 - fVar24;
          pfVar14[10] = fVar64 - fVar23;
          pfVar14[0xb] = fVar99 - fVar28;
          pfVar14[0xc] = fVar97 - fVar67;
          pfVar14[0xd] = fVar22 - fVar25;
          pfVar14[0xe] = fVar21 - fVar103;
          pfVar14[0xf] = fVar66 - fVar29;
          uVar16 = uVar16 - 1;
          pfVar14 = pfVar14 + 0x10;
        } while (1 < uVar16);
      }
    }
    else if (uVar10 == 3 && 0 < (int)uVar17) {
      uVar15 = (int)uVar11 / 3;
      uVar16 = uVar17 + 1;
      pfVar14 = param_5;
      do {
        fVar21 = param_2[1];
        fVar20 = param_2[2];
        fVar65 = param_2[3];
        fVar64 = param_2[4];
        fVar99 = param_2[5];
        fVar97 = param_2[6];
        fVar22 = param_2[7];
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 2) << 5));
        fVar35 = *pfVar1 + *pfVar2;
        fVar40 = pfVar1[2] + pfVar2[2];
        fVar41 = pfVar1[4] + pfVar2[4];
        fVar42 = pfVar1[6] + pfVar2[6];
        fVar43 = pfVar1[1] + pfVar2[1];
        fVar36 = pfVar1[3] + pfVar2[3];
        fVar48 = pfVar1[5] + pfVar2[5];
        fVar37 = pfVar1[7] + pfVar2[7];
        fVar103 = *param_2 - fVar35 * 0.5;
        fVar24 = fVar20 - fVar40 * 0.5;
        fVar28 = fVar64 - fVar41 * 0.5;
        fVar25 = fVar97 - fVar42 * 0.5;
        fVar29 = fVar21 - fVar43 * 0.5;
        fVar26 = fVar65 - fVar36 * 0.5;
        fVar30 = fVar99 - fVar48 * 0.5;
        fVar27 = fVar22 - fVar37 * 0.5;
        fVar31 = (*pfVar1 - *pfVar2) * -0.8660254;
        fVar32 = (pfVar1[2] - pfVar2[2]) * -0.8660254;
        fVar33 = (pfVar1[4] - pfVar2[4]) * -0.8660254;
        fVar34 = (pfVar1[6] - pfVar2[6]) * -0.8660254;
        fVar66 = (pfVar1[1] - pfVar2[1]) * -0.8660254;
        fVar101 = (pfVar1[3] - pfVar2[3]) * -0.8660254;
        fVar23 = (pfVar1[5] - pfVar2[5]) * -0.8660254;
        fVar67 = (pfVar1[7] - pfVar2[7]) * -0.8660254;
        *pfVar14 = *param_2 + fVar35;
        pfVar14[1] = fVar21 + fVar43;
        pfVar14[2] = fVar20 + fVar40;
        pfVar14[3] = fVar65 + fVar36;
        pfVar14[4] = fVar64 + fVar41;
        pfVar14[5] = fVar99 + fVar48;
        pfVar14[6] = fVar97 + fVar42;
        pfVar14[7] = fVar22 + fVar37;
        pfVar14[8] = fVar103 - fVar66;
        pfVar14[9] = fVar31 + fVar29;
        pfVar14[10] = fVar24 - fVar101;
        pfVar14[0xb] = fVar32 + fVar26;
        pfVar14[0xc] = fVar28 - fVar23;
        pfVar14[0xd] = fVar33 + fVar30;
        pfVar14[0xe] = fVar25 - fVar67;
        pfVar14[0xf] = fVar34 + fVar27;
        pfVar14[0x10] = fVar66 + fVar103;
        pfVar14[0x11] = fVar29 - fVar31;
        pfVar14[0x12] = fVar101 + fVar24;
        pfVar14[0x13] = fVar26 - fVar32;
        pfVar14[0x14] = fVar23 + fVar28;
        pfVar14[0x15] = fVar30 - fVar33;
        pfVar14[0x16] = fVar67 + fVar25;
        pfVar14[0x17] = fVar27 - fVar34;
        pfVar14 = pfVar14 + 0x18;
        uVar16 = uVar16 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar16);
    }
  }
  else if (uVar10 == 4) {
    if (0 < (int)uVar17) {
      uVar16 = uVar11 + 3;
      if (-1 < (int)uVar11) {
        uVar16 = uVar11;
      }
      uVar16 = (int)uVar16 >> 2;
      uVar15 = uVar17 + 1;
      pfVar14 = param_5;
      do {
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar16 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar16 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 2) << 5));
        pfVar3 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 * 3 >> 0x1f) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 3) << 5));
        fVar32 = *param_2 + *pfVar2;
        fVar33 = param_2[2] + pfVar2[2];
        fVar34 = param_2[4] + pfVar2[4];
        fVar35 = param_2[6] + pfVar2[6];
        fVar40 = param_2[1] + pfVar2[1];
        fVar41 = param_2[3] + pfVar2[3];
        fVar42 = param_2[5] + pfVar2[5];
        fVar43 = param_2[7] + pfVar2[7];
        fVar36 = *param_2 - *pfVar2;
        fVar48 = param_2[2] - pfVar2[2];
        fVar37 = param_2[4] - pfVar2[4];
        fVar49 = param_2[6] - pfVar2[6];
        fVar20 = param_2[1] - pfVar2[1];
        fVar64 = param_2[3] - pfVar2[3];
        fVar97 = param_2[5] - pfVar2[5];
        fVar21 = param_2[7] - pfVar2[7];
        fVar65 = *pfVar1 + *pfVar3;
        fVar99 = pfVar1[2] + pfVar3[2];
        fVar22 = pfVar1[4] + pfVar3[4];
        fVar66 = pfVar1[6] + pfVar3[6];
        fVar24 = pfVar1[1] + pfVar3[1];
        fVar28 = pfVar1[3] + pfVar3[3];
        fVar25 = pfVar1[5] + pfVar3[5];
        fVar29 = pfVar1[7] + pfVar3[7];
        fVar26 = *pfVar1 - *pfVar3;
        fVar30 = pfVar1[2] - pfVar3[2];
        fVar27 = pfVar1[4] - pfVar3[4];
        fVar31 = pfVar1[6] - pfVar3[6];
        fVar101 = pfVar1[1] - pfVar3[1];
        fVar23 = pfVar1[3] - pfVar3[3];
        fVar67 = pfVar1[5] - pfVar3[5];
        fVar103 = pfVar1[7] - pfVar3[7];
        *pfVar14 = fVar32 + fVar65;
        pfVar14[1] = fVar40 + fVar24;
        pfVar14[2] = fVar33 + fVar99;
        pfVar14[3] = fVar41 + fVar28;
        pfVar14[4] = fVar34 + fVar22;
        pfVar14[5] = fVar42 + fVar25;
        pfVar14[6] = fVar35 + fVar66;
        pfVar14[7] = fVar43 + fVar29;
        pfVar14[8] = fVar36 + fVar101;
        pfVar14[9] = fVar20 - fVar26;
        pfVar14[10] = fVar48 + fVar23;
        pfVar14[0xb] = fVar64 - fVar30;
        pfVar14[0xc] = fVar37 + fVar67;
        pfVar14[0xd] = fVar97 - fVar27;
        pfVar14[0xe] = fVar49 + fVar103;
        pfVar14[0xf] = fVar21 - fVar31;
        pfVar14[0x10] = fVar32 - fVar65;
        pfVar14[0x11] = fVar40 - fVar24;
        pfVar14[0x12] = fVar33 - fVar99;
        pfVar14[0x13] = fVar41 - fVar28;
        pfVar14[0x14] = fVar34 - fVar22;
        pfVar14[0x15] = fVar42 - fVar25;
        pfVar14[0x16] = fVar35 - fVar66;
        pfVar14[0x17] = fVar43 - fVar29;
        pfVar14[0x18] = fVar36 - fVar101;
        pfVar14[0x19] = fVar20 + fVar26;
        pfVar14[0x1a] = fVar48 - fVar23;
        pfVar14[0x1b] = fVar64 + fVar30;
        pfVar14[0x1c] = fVar37 - fVar67;
        pfVar14[0x1d] = fVar97 + fVar27;
        pfVar14[0x1e] = fVar49 - fVar103;
        pfVar14[0x1f] = fVar21 + fVar31;
        pfVar14 = pfVar14 + 0x20;
        uVar15 = uVar15 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar15);
    }
  }
  else if (uVar10 == 5) {
    if (0 < (int)uVar17) {
      uVar15 = (int)uVar11 / 5;
      uVar16 = uVar17 + 1;
      pfVar14 = param_5;
      do {
        fVar20 = *param_2;
        fVar101 = param_2[1];
        fVar97 = param_2[2];
        fVar67 = param_2[3];
        fVar65 = param_2[4];
        fVar24 = param_2[5];
        fVar22 = param_2[6];
        fVar25 = param_2[7];
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar15 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 4) << 5));
        pfVar3 = (float *)((long)param_2 +
                          (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 2) << 5));
        pfVar4 = (float *)((long)param_2 +
                          (-(ulong)(uVar15 * 3 >> 0x1f) & 0xffffffe000000000 |
                          (ulong)(uVar15 * 3) << 5));
        fVar84 = *pfVar1 + *pfVar2;
        fVar88 = pfVar1[2] + pfVar2[2];
        fVar44 = pfVar1[4] + pfVar2[4];
        fVar46 = pfVar1[6] + pfVar2[6];
        fVar96 = pfVar1[1] + pfVar2[1];
        fVar98 = pfVar1[3] + pfVar2[3];
        fVar100 = pfVar1[5] + pfVar2[5];
        fVar102 = pfVar1[7] + pfVar2[7];
        fVar52 = *pfVar3 + *pfVar4;
        fVar53 = pfVar3[2] + pfVar4[2];
        fVar54 = pfVar3[4] + pfVar4[4];
        fVar55 = pfVar3[6] + pfVar4[6];
        fVar56 = pfVar3[1] + pfVar4[1];
        fVar57 = pfVar3[3] + pfVar4[3];
        fVar58 = pfVar3[5] + pfVar4[5];
        fVar59 = pfVar3[7] + pfVar4[7];
        fVar62 = fVar20 + fVar84 * 0.309017 + fVar52 * -0.809017;
        fVar89 = fVar97 + fVar88 * 0.309017 + fVar53 * -0.809017;
        fVar63 = fVar65 + fVar44 * 0.309017 + fVar54 * -0.809017;
        fVar91 = fVar22 + fVar46 * 0.309017 + fVar55 * -0.809017;
        fVar64 = fVar20 + fVar84 * -0.809017 + fVar52 * 0.309017;
        fVar21 = fVar97 + fVar88 * -0.809017 + fVar53 * 0.309017;
        fVar99 = fVar65 + fVar44 * -0.809017 + fVar54 * 0.309017;
        fVar66 = fVar22 + fVar46 * -0.809017 + fVar55 * 0.309017;
        fVar86 = *pfVar1 - *pfVar2;
        fVar90 = pfVar1[2] - pfVar2[2];
        fVar45 = pfVar1[4] - pfVar2[4];
        fVar47 = pfVar1[6] - pfVar2[6];
        fVar26 = pfVar1[1] - pfVar2[1];
        fVar30 = pfVar1[3] - pfVar2[3];
        fVar27 = pfVar1[5] - pfVar2[5];
        fVar31 = pfVar1[7] - pfVar2[7];
        fVar32 = *pfVar3 - *pfVar4;
        fVar33 = pfVar3[2] - pfVar4[2];
        fVar34 = pfVar3[4] - pfVar4[4];
        fVar35 = pfVar3[6] - pfVar4[6];
        fVar40 = pfVar3[1] - pfVar4[1];
        fVar41 = pfVar3[3] - pfVar4[3];
        fVar42 = pfVar3[5] - pfVar4[5];
        fVar43 = pfVar3[7] - pfVar4[7];
        fVar60 = fVar101 + fVar96 * 0.309017 + fVar56 * -0.809017;
        fVar85 = fVar67 + fVar98 * 0.309017 + fVar57 * -0.809017;
        fVar61 = fVar24 + fVar100 * 0.309017 + fVar58 * -0.809017;
        fVar87 = fVar25 + fVar102 * 0.309017 + fVar59 * -0.809017;
        fVar36 = fVar26 * -0.95105654 + fVar40 * -0.58778524;
        fVar48 = fVar30 * -0.95105654 + fVar41 * -0.58778524;
        fVar37 = fVar27 * -0.95105654 + fVar42 * -0.58778524;
        fVar49 = fVar31 * -0.95105654 + fVar43 * -0.58778524;
        fVar23 = fVar101 + fVar96 * -0.809017 + fVar56 * 0.309017;
        fVar103 = fVar67 + fVar98 * -0.809017 + fVar57 * 0.309017;
        fVar28 = fVar24 + fVar100 * -0.809017 + fVar58 * 0.309017;
        fVar29 = fVar25 + fVar102 * -0.809017 + fVar59 * 0.309017;
        fVar38 = fVar86 * 0.95105654 - fVar32 * -0.58778524;
        fVar50 = fVar90 * 0.95105654 - fVar33 * -0.58778524;
        fVar39 = fVar45 * 0.95105654 - fVar34 * -0.58778524;
        fVar51 = fVar47 * 0.95105654 - fVar35 * -0.58778524;
        fVar26 = fVar26 * 0.58778524 + fVar40 * -0.95105654;
        fVar30 = fVar30 * 0.58778524 + fVar41 * -0.95105654;
        fVar27 = fVar27 * 0.58778524 + fVar42 * -0.95105654;
        fVar31 = fVar31 * 0.58778524 + fVar43 * -0.95105654;
        fVar32 = fVar86 * -0.58778524 - fVar32 * -0.95105654;
        fVar33 = fVar90 * -0.58778524 - fVar33 * -0.95105654;
        fVar34 = fVar45 * -0.58778524 - fVar34 * -0.95105654;
        fVar35 = fVar47 * -0.58778524 - fVar35 * -0.95105654;
        *pfVar14 = fVar52 + fVar20 + fVar84;
        pfVar14[1] = fVar56 + fVar101 + fVar96;
        pfVar14[2] = fVar53 + fVar97 + fVar88;
        pfVar14[3] = fVar57 + fVar67 + fVar98;
        pfVar14[4] = fVar54 + fVar65 + fVar44;
        pfVar14[5] = fVar58 + fVar24 + fVar100;
        pfVar14[6] = fVar55 + fVar22 + fVar46;
        pfVar14[7] = fVar59 + fVar25 + fVar102;
        pfVar14[8] = fVar62 - fVar36;
        pfVar14[9] = fVar60 - fVar38;
        pfVar14[10] = fVar89 - fVar48;
        pfVar14[0xb] = fVar85 - fVar50;
        pfVar14[0xc] = fVar63 - fVar37;
        pfVar14[0xd] = fVar61 - fVar39;
        pfVar14[0xe] = fVar91 - fVar49;
        pfVar14[0xf] = fVar87 - fVar51;
        pfVar14[0x20] = fVar62 + fVar36;
        pfVar14[0x21] = fVar60 + fVar38;
        pfVar14[0x22] = fVar89 + fVar48;
        pfVar14[0x23] = fVar85 + fVar50;
        pfVar14[0x24] = fVar63 + fVar37;
        pfVar14[0x25] = fVar61 + fVar39;
        pfVar14[0x26] = fVar91 + fVar49;
        pfVar14[0x27] = fVar87 + fVar51;
        pfVar14[0x10] = fVar64 + fVar26;
        pfVar14[0x11] = fVar23 + fVar32;
        pfVar14[0x12] = fVar21 + fVar30;
        pfVar14[0x13] = fVar103 + fVar33;
        pfVar14[0x14] = fVar99 + fVar27;
        pfVar14[0x15] = fVar28 + fVar34;
        pfVar14[0x16] = fVar66 + fVar31;
        pfVar14[0x17] = fVar29 + fVar35;
        pfVar14[0x18] = fVar64 - fVar26;
        pfVar14[0x19] = fVar23 - fVar32;
        pfVar14[0x1a] = fVar21 - fVar30;
        pfVar14[0x1b] = fVar103 - fVar33;
        pfVar14[0x1c] = fVar99 - fVar27;
        pfVar14[0x1d] = fVar28 - fVar34;
        pfVar14[0x1e] = fVar66 - fVar31;
        pfVar14[0x1f] = fVar29 - fVar35;
        pfVar14 = pfVar14 + 0x28;
        uVar16 = uVar16 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar16);
    }
  }
  else if (uVar10 == 8 && 0 < (int)uVar17) {
    uVar16 = uVar11 + 7;
    if (-1 < (int)uVar11) {
      uVar16 = uVar11;
    }
    uVar15 = (int)uVar16 >> 3;
    uVar13 = uVar15 * 3;
    uVar12 = (uVar16 & 0xfffffff8) - uVar15;
    uVar16 = uVar17 + 1;
    pfVar14 = param_5;
    do {
      pfVar1 = (float *)((long)param_2 +
                        (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5));
      pfVar2 = (float *)((long)param_2 +
                        (-(ulong)(uVar13 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar13 << 5));
      pfVar3 = (float *)((long)param_2 +
                        (-(ulong)(uVar15 * 5 >> 0x1f) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 5) << 5));
      pfVar4 = (float *)((long)param_2 +
                        (-(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5));
      pfVar5 = (float *)((long)param_2 +
                        (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 2) << 5));
      pfVar6 = (float *)((long)param_2 +
                        (-(ulong)((uVar13 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 6) << 5));
      pfVar7 = (float *)((long)param_2 +
                        (-(ulong)((uVar15 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000 |
                        (ulong)(uVar15 * 4) << 5));
      fVar36 = *param_2 + *pfVar7;
      fVar37 = param_2[2] + pfVar7[2];
      fVar38 = param_2[4] + pfVar7[4];
      fVar39 = param_2[6] + pfVar7[6];
      fVar92 = param_2[1] + pfVar7[1];
      fVar93 = param_2[3] + pfVar7[3];
      fVar94 = param_2[5] + pfVar7[5];
      fVar95 = param_2[7] + pfVar7[7];
      fVar96 = *param_2 - *pfVar7;
      fVar98 = param_2[2] - pfVar7[2];
      fVar100 = param_2[4] - pfVar7[4];
      fVar102 = param_2[6] - pfVar7[6];
      fVar20 = param_2[1] - pfVar7[1];
      fVar21 = param_2[3] - pfVar7[3];
      fVar22 = param_2[5] - pfVar7[5];
      fVar23 = param_2[7] - pfVar7[7];
      fVar24 = *pfVar1 + *pfVar3;
      fVar25 = pfVar1[2] + pfVar3[2];
      fVar26 = pfVar1[4] + pfVar3[4];
      fVar27 = pfVar1[6] + pfVar3[6];
      fVar80 = pfVar1[1] + pfVar3[1];
      fVar81 = pfVar1[3] + pfVar3[3];
      fVar82 = pfVar1[5] + pfVar3[5];
      fVar83 = pfVar1[7] + pfVar3[7];
      fVar84 = *pfVar1 - *pfVar3;
      fVar86 = pfVar1[2] - pfVar3[2];
      fVar88 = pfVar1[4] - pfVar3[4];
      fVar90 = pfVar1[6] - pfVar3[6];
      fVar28 = pfVar1[1] - pfVar3[1];
      fVar29 = pfVar1[3] - pfVar3[3];
      fVar30 = pfVar1[5] - pfVar3[5];
      fVar31 = pfVar1[7] - pfVar3[7];
      fVar32 = *pfVar5 + *pfVar6;
      fVar33 = pfVar5[2] + pfVar6[2];
      fVar34 = pfVar5[4] + pfVar6[4];
      fVar35 = pfVar5[6] + pfVar6[6];
      fVar48 = pfVar5[1] + pfVar6[1];
      fVar49 = pfVar5[3] + pfVar6[3];
      fVar50 = pfVar5[5] + pfVar6[5];
      fVar51 = pfVar5[7] + pfVar6[7];
      fVar52 = *pfVar5 - *pfVar6;
      fVar54 = pfVar5[2] - pfVar6[2];
      fVar56 = pfVar5[4] - pfVar6[4];
      fVar58 = pfVar5[6] - pfVar6[6];
      fVar64 = pfVar5[1] - pfVar6[1];
      fVar65 = pfVar5[3] - pfVar6[3];
      fVar66 = pfVar5[5] - pfVar6[5];
      fVar67 = pfVar5[7] - pfVar6[7];
      fVar68 = *pfVar2 + *pfVar4;
      fVar69 = pfVar2[2] + pfVar4[2];
      fVar70 = pfVar2[4] + pfVar4[4];
      fVar71 = pfVar2[6] + pfVar4[6];
      fVar76 = pfVar2[1] + pfVar4[1];
      fVar77 = pfVar2[3] + pfVar4[3];
      fVar78 = pfVar2[5] + pfVar4[5];
      fVar79 = pfVar2[7] + pfVar4[7];
      fVar40 = pfVar2[1] - pfVar4[1];
      fVar41 = pfVar2[3] - pfVar4[3];
      fVar42 = pfVar2[5] - pfVar4[5];
      fVar43 = pfVar2[7] - pfVar4[7];
      fVar97 = fVar96 - fVar20 * 0.0;
      fVar99 = fVar98 - fVar21 * 0.0;
      fVar101 = fVar100 - fVar22 * 0.0;
      fVar103 = fVar102 - fVar23 * 0.0;
      fVar60 = fVar84 * 0.70711 - fVar28 * -0.70711;
      fVar61 = fVar86 * 0.70711 - fVar29 * -0.70711;
      fVar62 = fVar88 * 0.70711 - fVar30 * -0.70711;
      fVar63 = fVar90 * 0.70711 - fVar31 * -0.70711;
      fVar85 = fVar84 * -0.70711 + fVar28 * 0.70711;
      fVar87 = fVar86 * -0.70711 + fVar29 * 0.70711;
      fVar89 = fVar88 * -0.70711 + fVar30 * 0.70711;
      fVar91 = fVar90 * -0.70711 + fVar31 * 0.70711;
      fVar104 = -fVar52 + fVar64 * 0.0;
      fVar105 = -fVar54 + fVar65 * 0.0;
      fVar106 = -fVar56 + fVar66 * 0.0;
      fVar107 = -fVar58 + fVar67 * 0.0;
      fVar72 = (*pfVar2 - *pfVar4) * -0.70711;
      fVar73 = (pfVar2[2] - pfVar4[2]) * -0.70711;
      fVar74 = (pfVar2[4] - pfVar4[4]) * -0.70711;
      fVar75 = (pfVar2[6] - pfVar4[6]) * -0.70711;
      fVar108 = fVar72 - fVar40 * -0.70711;
      fVar109 = fVar73 - fVar41 * -0.70711;
      fVar110 = fVar74 - fVar42 * -0.70711;
      fVar111 = fVar75 - fVar43 * -0.70711;
      fVar72 = fVar72 + fVar40 * -0.70711;
      fVar73 = fVar73 + fVar41 * -0.70711;
      fVar74 = fVar74 + fVar42 * -0.70711;
      fVar75 = fVar75 + fVar43 * -0.70711;
      fVar84 = fVar36 + fVar32;
      fVar86 = fVar37 + fVar33;
      fVar88 = fVar38 + fVar34;
      fVar90 = fVar39 + fVar35;
      fVar44 = fVar92 + fVar48;
      fVar45 = fVar93 + fVar49;
      fVar46 = fVar94 + fVar50;
      fVar47 = fVar95 + fVar51;
      fVar36 = fVar36 - fVar32;
      fVar37 = fVar37 - fVar33;
      fVar38 = fVar38 - fVar34;
      fVar39 = fVar39 - fVar35;
      fVar20 = fVar20 + fVar96 * 0.0;
      fVar21 = fVar21 + fVar98 * 0.0;
      fVar22 = fVar22 + fVar100 * 0.0;
      fVar23 = fVar23 + fVar102 * 0.0;
      fVar92 = fVar92 - fVar48;
      fVar93 = fVar93 - fVar49;
      fVar94 = fVar94 - fVar50;
      fVar95 = fVar95 - fVar51;
      fVar96 = fVar24 + fVar68;
      fVar98 = fVar25 + fVar69;
      fVar100 = fVar26 + fVar70;
      fVar102 = fVar27 + fVar71;
      fVar53 = fVar80 + fVar76;
      fVar55 = fVar81 + fVar77;
      fVar57 = fVar82 + fVar78;
      fVar59 = fVar83 + fVar79;
      fVar24 = fVar24 - fVar68;
      fVar25 = fVar25 - fVar69;
      fVar26 = fVar26 - fVar70;
      fVar27 = fVar27 - fVar71;
      fVar80 = fVar80 - fVar76;
      fVar81 = fVar81 - fVar77;
      fVar82 = fVar82 - fVar78;
      fVar83 = fVar83 - fVar79;
      fVar64 = fVar64 + fVar52 * 0.0;
      fVar65 = fVar65 + fVar54 * 0.0;
      fVar66 = fVar66 + fVar56 * 0.0;
      fVar67 = fVar67 + fVar58 * 0.0;
      fVar32 = fVar97 + fVar64;
      fVar33 = fVar99 + fVar65;
      fVar34 = fVar101 + fVar66;
      fVar35 = fVar103 + fVar67;
      fVar28 = fVar20 + fVar104;
      fVar29 = fVar21 + fVar105;
      fVar30 = fVar22 + fVar106;
      fVar31 = fVar23 + fVar107;
      fVar97 = fVar97 - fVar64;
      fVar99 = fVar99 - fVar65;
      fVar101 = fVar101 - fVar66;
      fVar103 = fVar103 - fVar67;
      fVar40 = fVar60 + fVar108;
      fVar41 = fVar61 + fVar109;
      fVar42 = fVar62 + fVar110;
      fVar43 = fVar63 + fVar111;
      fVar60 = fVar60 - fVar108;
      fVar61 = fVar61 - fVar109;
      fVar62 = fVar62 - fVar110;
      fVar63 = fVar63 - fVar111;
      fVar20 = fVar20 - fVar104;
      fVar21 = fVar21 - fVar105;
      fVar22 = fVar22 - fVar106;
      fVar23 = fVar23 - fVar107;
      fVar68 = fVar85 - fVar72;
      fVar69 = fVar87 - fVar73;
      fVar70 = fVar89 - fVar74;
      fVar71 = fVar91 - fVar75;
      fVar48 = fVar36 - fVar92 * 0.0;
      fVar49 = fVar37 - fVar93 * 0.0;
      fVar50 = fVar38 - fVar94 * 0.0;
      fVar51 = fVar39 - fVar95 * 0.0;
      fVar92 = fVar92 + fVar36 * 0.0;
      fVar93 = fVar93 + fVar37 * 0.0;
      fVar94 = fVar94 + fVar38 * 0.0;
      fVar95 = fVar95 + fVar39 * 0.0;
      fVar85 = fVar85 + fVar72;
      fVar87 = fVar87 + fVar73;
      fVar89 = fVar89 + fVar74;
      fVar91 = fVar91 + fVar75;
      fVar52 = fVar80 + fVar24 * 0.0;
      fVar54 = fVar81 + fVar25 * 0.0;
      fVar56 = fVar82 + fVar26 * 0.0;
      fVar58 = fVar83 + fVar27 * 0.0;
      fVar36 = -fVar24 + fVar80 * 0.0;
      fVar37 = -fVar25 + fVar81 * 0.0;
      fVar38 = -fVar26 + fVar82 * 0.0;
      fVar39 = -fVar27 + fVar83 * 0.0;
      fVar64 = fVar97 - fVar20 * 0.0;
      fVar65 = fVar99 - fVar21 * 0.0;
      fVar66 = fVar101 - fVar22 * 0.0;
      fVar67 = fVar103 - fVar23 * 0.0;
      fVar24 = -fVar60 + fVar68 * 0.0;
      fVar25 = -fVar61 + fVar69 * 0.0;
      fVar26 = -fVar62 + fVar70 * 0.0;
      fVar27 = -fVar63 + fVar71 * 0.0;
      fVar20 = fVar20 + fVar97 * 0.0;
      fVar21 = fVar21 + fVar99 * 0.0;
      fVar22 = fVar22 + fVar101 * 0.0;
      fVar23 = fVar23 + fVar103 * 0.0;
      *pfVar14 = fVar84 + fVar96;
      pfVar14[1] = fVar44 + fVar53;
      pfVar14[2] = fVar86 + fVar98;
      pfVar14[3] = fVar45 + fVar55;
      pfVar14[4] = fVar88 + fVar100;
      pfVar14[5] = fVar46 + fVar57;
      pfVar14[6] = fVar90 + fVar102;
      pfVar14[7] = fVar47 + fVar59;
      fVar68 = fVar68 + fVar60 * 0.0;
      fVar69 = fVar69 + fVar61 * 0.0;
      fVar70 = fVar70 + fVar62 * 0.0;
      fVar71 = fVar71 + fVar63 * 0.0;
      pfVar14[0x20] = fVar84 - fVar96;
      pfVar14[0x21] = fVar44 - fVar53;
      pfVar14[0x22] = fVar86 - fVar98;
      pfVar14[0x23] = fVar45 - fVar55;
      pfVar14[0x24] = fVar88 - fVar100;
      pfVar14[0x25] = fVar46 - fVar57;
      pfVar14[0x26] = fVar90 - fVar102;
      pfVar14[0x27] = fVar47 - fVar59;
      pfVar14[8] = fVar32 + fVar40;
      pfVar14[9] = fVar28 + fVar85;
      pfVar14[10] = fVar33 + fVar41;
      pfVar14[0xb] = fVar29 + fVar87;
      pfVar14[0xc] = fVar34 + fVar42;
      pfVar14[0xd] = fVar30 + fVar89;
      pfVar14[0xe] = fVar35 + fVar43;
      pfVar14[0xf] = fVar31 + fVar91;
      pfVar14[0x10] = fVar48 + fVar52;
      pfVar14[0x11] = fVar92 + fVar36;
      pfVar14[0x12] = fVar49 + fVar54;
      pfVar14[0x13] = fVar93 + fVar37;
      pfVar14[0x14] = fVar50 + fVar56;
      pfVar14[0x15] = fVar94 + fVar38;
      pfVar14[0x16] = fVar51 + fVar58;
      pfVar14[0x17] = fVar95 + fVar39;
      pfVar14[0x28] = fVar32 - fVar40;
      pfVar14[0x29] = fVar28 - fVar85;
      pfVar14[0x2a] = fVar33 - fVar41;
      pfVar14[0x2b] = fVar29 - fVar87;
      pfVar14[0x2c] = fVar34 - fVar42;
      pfVar14[0x2d] = fVar30 - fVar89;
      pfVar14[0x2e] = fVar35 - fVar43;
      pfVar14[0x2f] = fVar31 - fVar91;
      pfVar14[0x30] = fVar48 - fVar52;
      pfVar14[0x31] = fVar92 - fVar36;
      pfVar14[0x32] = fVar49 - fVar54;
      pfVar14[0x33] = fVar93 - fVar37;
      pfVar14[0x34] = fVar50 - fVar56;
      pfVar14[0x35] = fVar94 - fVar38;
      pfVar14[0x36] = fVar51 - fVar58;
      pfVar14[0x37] = fVar95 - fVar39;
      pfVar14[0x18] = fVar64 + fVar68;
      pfVar14[0x19] = fVar20 + fVar24;
      pfVar14[0x1a] = fVar65 + fVar69;
      pfVar14[0x1b] = fVar21 + fVar25;
      pfVar14[0x1c] = fVar66 + fVar70;
      pfVar14[0x1d] = fVar22 + fVar26;
      pfVar14[0x1e] = fVar67 + fVar71;
      pfVar14[0x1f] = fVar23 + fVar27;
      pfVar14[0x38] = fVar64 - fVar68;
      pfVar14[0x39] = fVar20 - fVar24;
      pfVar14[0x3a] = fVar65 - fVar69;
      pfVar14[0x3b] = fVar21 - fVar25;
      pfVar14[0x3c] = fVar66 - fVar70;
      pfVar14[0x3d] = fVar22 - fVar26;
      pfVar14[0x3e] = fVar67 - fVar71;
      pfVar14[0x3f] = fVar23 - fVar27;
      pfVar14 = pfVar14 + 0x40;
      uVar16 = uVar16 - 1;
      param_2 = param_2 + 8;
    } while (1 < uVar16);
  }
  if (1 < (int)uVar9) {
    param_4 = param_4 + (long)(int)(-(uVar10 & 1) & uVar10) * 8;
    uVar18 = (ulong)uVar9 + 1;
    iVar19 = uVar9 * 2;
    do {
      pfVar14 = pfVar8;
      iVar19 = iVar19 + -2;
      uVar9 = param_3[iVar19];
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = (int)uVar17 / (int)uVar9;
      }
      if ((int)uVar9 < 4) {
        if (uVar9 == 2) {
          FUN_10987fa38(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
        }
        else if (uVar9 == 3) {
          FUN_10987fac8(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
        }
      }
      else if (uVar9 == 4) {
        FUN_10987fc10(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
      }
      else if (uVar9 == 5) {
        FUN_10987fd8c(pfVar14,param_5,param_4,uVar16,uVar10,uVar11);
      }
      param_4 = param_4 + (long)(int)((uVar9 - 1) * uVar10) * 8;
      uVar10 = uVar9 * uVar10;
      uVar18 = uVar18 - 1;
      pfVar8 = param_5;
      param_5 = pfVar14;
      uVar17 = uVar16;
    } while (2 < uVar18);
  }
  return;
}



/* Entry: 10987e6e8; end: 10987e9df;  */

void FUN_10987e6e8(float *param_1,undefined8 param_2,int *param_3,long param_4,float *param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  uint uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  pcVar4 = (code *)0x10987f28c;
  if (param_6 != 0) {
    pcVar4 = FUN_10987e9e0;
  }
  uVar5 = param_3[*param_3 << 1] * param_3[1];
  (*pcVar4)(param_5);
  uVar7 = (ulong)(int)uVar5;
  lVar10 = (long)(int)(uVar5 * 2);
  pfVar6 = (float *)(param_4 + (long)(int)uVar5 * 8);
  if (3 < (int)uVar5) {
    lVar9 = 0;
    uVar11 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
    do {
      pfVar8 = (float *)((long)param_1 + lVar9);
      pfVar1 = (float *)((long)pfVar6 + lVar9);
      pfVar2 = (float *)(param_4 + uVar7 * 0x10 + lVar9);
      pfVar3 = (float *)(param_4 + lVar10 * 8 + uVar7 * 8 + lVar9);
      fVar16 = *pfVar2 * param_5[4] + pfVar2[1] * param_5[5];
      fVar17 = pfVar2[2] * param_5[0xc] + pfVar2[3] * param_5[0xd];
      fVar18 = pfVar2[4] * param_5[0x14] + pfVar2[5] * param_5[0x15];
      fVar19 = pfVar2[6] * param_5[0x1c] + pfVar2[7] * param_5[0x1d];
      fVar20 = pfVar2[1] * param_5[4] - *pfVar2 * param_5[5];
      fVar21 = pfVar2[3] * param_5[0xc] - pfVar2[2] * param_5[0xd];
      fVar22 = pfVar2[5] * param_5[0x14] - pfVar2[4] * param_5[0x15];
      fVar23 = pfVar2[7] * param_5[0x1c] - pfVar2[6] * param_5[0x1d];
      fVar28 = *pfVar1 * param_5[2] + pfVar1[1] * param_5[3];
      fVar29 = pfVar1[2] * param_5[10] + pfVar1[3] * param_5[0xb];
      fVar30 = pfVar1[4] * param_5[0x12] + pfVar1[5] * param_5[0x13];
      fVar31 = pfVar1[6] * param_5[0x1a] + pfVar1[7] * param_5[0x1b];
      fVar44 = pfVar1[1] * param_5[2] - *pfVar1 * param_5[3];
      fVar45 = pfVar1[3] * param_5[10] - pfVar1[2] * param_5[0xb];
      fVar46 = pfVar1[5] * param_5[0x12] - pfVar1[4] * param_5[0x13];
      fVar47 = pfVar1[7] * param_5[0x1a] - pfVar1[6] * param_5[0x1b];
      fVar48 = param_5[6] * *pfVar3 + pfVar3[1] * param_5[7];
      fVar49 = param_5[0xe] * pfVar3[2] + pfVar3[3] * param_5[0xf];
      fVar50 = param_5[0x16] * pfVar3[4] + pfVar3[5] * param_5[0x17];
      fVar51 = param_5[0x1e] * pfVar3[6] + pfVar3[7] * param_5[0x1f];
      fVar12 = param_5[6] * pfVar3[1] - *pfVar3 * param_5[7];
      fVar13 = param_5[0xe] * pfVar3[3] - pfVar3[2] * param_5[0xf];
      fVar14 = param_5[0x16] * pfVar3[5] - pfVar3[4] * param_5[0x17];
      fVar15 = param_5[0x1e] * pfVar3[7] - pfVar3[6] * param_5[0x1f];
      fVar32 = *param_5 + fVar16;
      fVar33 = param_5[8] + fVar17;
      fVar34 = param_5[0x10] + fVar18;
      fVar35 = param_5[0x18] + fVar19;
      fVar36 = fVar20 - param_5[1];
      fVar37 = fVar21 - param_5[9];
      fVar38 = fVar22 - param_5[0x11];
      fVar39 = fVar23 - param_5[0x19];
      fVar16 = *param_5 - fVar16;
      fVar17 = param_5[8] - fVar17;
      fVar18 = param_5[0x10] - fVar18;
      fVar19 = param_5[0x18] - fVar19;
      fVar20 = -param_5[1] - fVar20;
      fVar21 = -param_5[9] - fVar21;
      fVar22 = -param_5[0x11] - fVar22;
      fVar23 = -param_5[0x19] - fVar23;
      fVar24 = fVar28 + fVar48;
      fVar25 = fVar29 + fVar49;
      fVar26 = fVar30 + fVar50;
      fVar27 = fVar31 + fVar51;
      fVar40 = fVar44 + fVar12;
      fVar41 = fVar45 + fVar13;
      fVar42 = fVar46 + fVar14;
      fVar43 = fVar47 + fVar15;
      fVar28 = fVar28 - fVar48;
      fVar29 = fVar29 - fVar49;
      fVar30 = fVar30 - fVar50;
      fVar31 = fVar31 - fVar51;
      fVar44 = fVar44 - fVar12;
      fVar45 = fVar45 - fVar13;
      fVar46 = fVar46 - fVar14;
      fVar47 = fVar47 - fVar15;
      *pfVar8 = fVar32 + fVar24;
      pfVar8[1] = -(fVar36 + fVar40);
      pfVar8[2] = fVar33 + fVar25;
      pfVar8[3] = -(fVar37 + fVar41);
      pfVar8[4] = fVar34 + fVar26;
      pfVar8[5] = -(fVar38 + fVar42);
      pfVar8[6] = fVar35 + fVar27;
      pfVar8[7] = -(fVar39 + fVar43);
      pfVar8 = (float *)((long)param_1 + lVar9 + uVar7 * 8);
      *pfVar8 = fVar16 + fVar44;
      pfVar8[1] = -(fVar20 - fVar28);
      pfVar8[2] = fVar17 + fVar45;
      pfVar8[3] = -(fVar21 - fVar29);
      pfVar8[4] = fVar18 + fVar46;
      pfVar8[5] = -(fVar22 - fVar30);
      pfVar8[6] = fVar19 + fVar47;
      pfVar8[7] = -(fVar23 - fVar31);
      pfVar8 = (float *)((long)param_1 + lVar9 + lVar10 * 8);
      *pfVar8 = fVar32 - fVar24;
      pfVar8[1] = -(fVar36 - fVar40);
      pfVar8[2] = fVar33 - fVar25;
      pfVar8[3] = -(fVar37 - fVar41);
      pfVar8[4] = fVar34 - fVar26;
      pfVar8[5] = -(fVar38 - fVar42);
      pfVar8[6] = fVar35 - fVar27;
      pfVar8[7] = -(fVar39 - fVar43);
      pfVar8 = (float *)((long)param_1 + lVar9 + (long)(int)(uVar5 * 3) * 8);
      *pfVar8 = fVar16 - fVar44;
      pfVar8[1] = -(fVar20 + fVar28);
      pfVar8[2] = fVar17 - fVar45;
      pfVar8[3] = -(fVar21 + fVar29);
      pfVar8[4] = fVar18 - fVar46;
      pfVar8[5] = -(fVar22 + fVar30);
      pfVar8[6] = fVar19 - fVar47;
      pfVar8[7] = -(fVar23 + fVar31);
      param_5 = param_5 + 0x20;
      lVar9 = lVar9 + 0x20;
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
    param_1 = (float *)((long)param_1 + lVar9);
    pfVar6 = (float *)((long)pfVar6 + lVar9);
  }
  uVar11 = uVar5 & 3;
  if (-1 < (int)-uVar5) {
    uVar11 = -(-uVar5 & 3);
  }
  if (0 < (int)uVar11) {
    uVar11 = uVar11 + 1;
    pfVar8 = param_1 + (long)(int)(uVar5 * 3) * 2 + 1;
    do {
      fVar44 = pfVar6[uVar7 * 2];
      fVar45 = (pfVar6 + uVar7 * 2)[1];
      fVar14 = pfVar6[lVar10 * 2];
      fVar47 = (pfVar6 + lVar10 * 2)[1];
      fVar15 = param_5[2] * *pfVar6 + param_5[3] * pfVar6[1];
      fVar13 = param_5[2] * pfVar6[1] - param_5[3] * *pfVar6;
      fVar12 = param_5[4] * fVar44 + param_5[5] * fVar45;
      fVar45 = param_5[4] * fVar45 - param_5[5] * fVar44;
      fVar46 = param_5[6] * fVar14 + param_5[7] * fVar47;
      fVar47 = param_5[6] * fVar47 - param_5[7] * fVar14;
      fVar16 = *param_5 + fVar12;
      fVar44 = fVar45 - param_5[1];
      fVar12 = *param_5 - fVar12;
      fVar45 = -param_5[1] - fVar45;
      fVar14 = fVar15 + fVar46;
      fVar17 = fVar13 + fVar47;
      fVar15 = fVar15 - fVar46;
      fVar13 = fVar13 - fVar47;
      *param_1 = fVar16 + fVar14;
      param_1[1] = -(fVar44 + fVar17);
      param_1[uVar7 * 2] = fVar12 + fVar13;
      (param_1 + uVar7 * 2)[1] = -(fVar45 - fVar15);
      param_1[lVar10 * 2] = fVar16 - fVar14;
      (param_1 + lVar10 * 2)[1] = -(fVar44 - fVar17);
      pfVar6 = pfVar6 + 2;
      uVar11 = uVar11 - 1;
      pfVar8[-1] = fVar12 - fVar13;
      *pfVar8 = -(fVar45 + fVar15);
      pfVar8 = pfVar8 + 2;
      param_5 = param_5 + 8;
      param_1 = param_1 + 2;
    } while (1 < uVar11);
  }
  return;
}



/* Entry: 10987e9e0; end: 10987fa37;  */

void FUN_10987e9e0(float *param_1,float *param_2,uint *param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  
  uVar9 = *param_3;
  uVar18 = param_3[1];
  uVar10 = param_3[(int)(uVar9 << 1)];
  uVar11 = uVar10 * uVar18;
  pfVar8 = param_1;
  if ((uVar9 & 1) != 0) {
    pfVar8 = param_5;
    param_5 = param_1;
  }
  if ((int)uVar10 < 4) {
    if (uVar10 == 2) {
      if (0 < (int)uVar18) {
        fVar13 = 0.25 / (float)(int)uVar11;
        uVar17 = uVar18 + 1;
        pfVar15 = param_5;
        do {
          pfVar1 = (float *)((long)param_2 +
                            (-(ulong)((uint)((int)uVar11 / 2) >> 0x1f) & 0xffffffe000000000 |
                            (ulong)(uint)((int)uVar11 / 2) << 5));
          fVar21 = *param_2;
          fVar25 = param_2[1];
          fVar22 = param_2[2];
          fVar26 = param_2[3];
          fVar23 = param_2[4];
          fVar27 = param_2[5];
          fVar24 = param_2[6];
          fVar28 = param_2[7];
          param_2 = param_2 + 8;
          fVar29 = *pfVar1;
          fVar33 = pfVar1[1];
          fVar30 = pfVar1[2];
          fVar93 = pfVar1[3];
          fVar31 = pfVar1[4];
          fVar34 = pfVar1[5];
          fVar32 = pfVar1[6];
          fVar95 = pfVar1[7];
          *pfVar15 = (fVar21 + fVar29) * fVar13;
          pfVar15[1] = -(-fVar33 - fVar25) * fVar13;
          pfVar15[2] = (fVar22 + fVar30) * fVar13;
          pfVar15[3] = -(-fVar93 - fVar26) * fVar13;
          pfVar15[4] = (fVar23 + fVar31) * fVar13;
          pfVar15[5] = -(-fVar34 - fVar27) * fVar13;
          pfVar15[6] = (fVar24 + fVar32) * fVar13;
          pfVar15[7] = -(-fVar95 - fVar28) * fVar13;
          pfVar15[8] = (fVar21 - fVar29) * fVar13;
          pfVar15[9] = -(fVar33 - fVar25) * fVar13;
          pfVar15[10] = (fVar22 - fVar30) * fVar13;
          pfVar15[0xb] = -(fVar93 - fVar26) * fVar13;
          pfVar15[0xc] = (fVar23 - fVar31) * fVar13;
          pfVar15[0xd] = -(fVar34 - fVar27) * fVar13;
          pfVar15[0xe] = (fVar24 - fVar32) * fVar13;
          pfVar15[0xf] = -(fVar95 - fVar28) * fVar13;
          uVar17 = uVar17 - 1;
          pfVar15 = pfVar15 + 0x10;
        } while (1 < uVar17);
      }
    }
    else if (uVar10 == 3 && 0 < (int)uVar18) {
      fVar13 = 0.25 / (float)(int)uVar11;
      uVar16 = (int)uVar11 / 3;
      uVar17 = uVar18 + 1;
      pfVar15 = param_5;
      do {
        fVar24 = param_2[1];
        fVar21 = param_2[2];
        fVar25 = param_2[3];
        fVar22 = param_2[4];
        fVar26 = param_2[5];
        fVar23 = param_2[6];
        fVar27 = param_2[7];
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar16 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar16 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 2) << 5));
        fVar44 = *pfVar1 + *pfVar2;
        fVar45 = pfVar1[2] + pfVar2[2];
        fVar46 = pfVar1[4] + pfVar2[4];
        fVar47 = pfVar1[6] + pfVar2[6];
        fVar40 = -pfVar2[1] - pfVar1[1];
        fVar41 = -pfVar2[3] - pfVar1[3];
        fVar42 = -pfVar2[5] - pfVar1[5];
        fVar43 = -pfVar2[7] - pfVar1[7];
        fVar32 = *param_2 - fVar44 * 0.5;
        fVar33 = fVar21 - fVar45 * 0.5;
        fVar93 = fVar22 - fVar46 * 0.5;
        fVar34 = fVar23 - fVar47 * 0.5;
        fVar95 = -fVar24 - fVar40 * 0.5;
        fVar35 = -fVar25 - fVar41 * 0.5;
        fVar97 = -fVar26 - fVar42 * 0.5;
        fVar36 = -fVar27 - fVar43 * 0.5;
        fVar99 = (*pfVar1 - *pfVar2) * -0.8660254;
        fVar37 = (pfVar1[2] - pfVar2[2]) * -0.8660254;
        fVar38 = (pfVar1[4] - pfVar2[4]) * -0.8660254;
        fVar39 = (pfVar1[6] - pfVar2[6]) * -0.8660254;
        fVar28 = (pfVar2[1] - pfVar1[1]) * -0.8660254;
        fVar29 = (pfVar2[3] - pfVar1[3]) * -0.8660254;
        fVar30 = (pfVar2[5] - pfVar1[5]) * -0.8660254;
        fVar31 = (pfVar2[7] - pfVar1[7]) * -0.8660254;
        *pfVar15 = (*param_2 + fVar44) * fVar13;
        pfVar15[1] = -(fVar40 - fVar24) * fVar13;
        pfVar15[2] = (fVar21 + fVar45) * fVar13;
        pfVar15[3] = -(fVar41 - fVar25) * fVar13;
        pfVar15[4] = (fVar22 + fVar46) * fVar13;
        pfVar15[5] = -(fVar42 - fVar26) * fVar13;
        pfVar15[6] = (fVar23 + fVar47) * fVar13;
        pfVar15[7] = -(fVar43 - fVar27) * fVar13;
        pfVar15[8] = (fVar32 - fVar28) * fVar13;
        pfVar15[9] = -(fVar99 + fVar95) * fVar13;
        pfVar15[10] = (fVar33 - fVar29) * fVar13;
        pfVar15[0xb] = -(fVar37 + fVar35) * fVar13;
        pfVar15[0xc] = (fVar93 - fVar30) * fVar13;
        pfVar15[0xd] = -(fVar38 + fVar97) * fVar13;
        pfVar15[0xe] = (fVar34 - fVar31) * fVar13;
        pfVar15[0xf] = -(fVar39 + fVar36) * fVar13;
        pfVar15[0x10] = (fVar28 + fVar32) * fVar13;
        pfVar15[0x11] = -(fVar95 - fVar99) * fVar13;
        pfVar15[0x12] = (fVar29 + fVar33) * fVar13;
        pfVar15[0x13] = -(fVar35 - fVar37) * fVar13;
        pfVar15[0x14] = (fVar30 + fVar93) * fVar13;
        pfVar15[0x15] = -(fVar97 - fVar38) * fVar13;
        pfVar15[0x16] = (fVar31 + fVar34) * fVar13;
        pfVar15[0x17] = -(fVar36 - fVar39) * fVar13;
        pfVar15 = pfVar15 + 0x18;
        uVar17 = uVar17 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar17);
    }
  }
  else if (uVar10 == 4) {
    if (0 < (int)uVar18) {
      fVar13 = 0.25 / (float)(int)uVar11;
      uVar17 = uVar11 + 3;
      if (-1 < (int)uVar11) {
        uVar17 = uVar11;
      }
      uVar17 = (int)uVar17 >> 2;
      uVar16 = uVar18 + 1;
      pfVar15 = param_5;
      do {
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)((uVar17 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar17 * 2) << 5));
        pfVar3 = (float *)((long)param_2 +
                          (-(ulong)(uVar17 * 3 >> 0x1f) & 0xffffffe000000000 |
                          (ulong)(uVar17 * 3) << 5));
        fVar41 = *param_2 + *pfVar2;
        fVar42 = param_2[2] + pfVar2[2];
        fVar43 = param_2[4] + pfVar2[4];
        fVar44 = param_2[6] + pfVar2[6];
        fVar37 = -pfVar2[1] - param_2[1];
        fVar38 = -pfVar2[3] - param_2[3];
        fVar39 = -pfVar2[5] - param_2[5];
        fVar40 = -pfVar2[7] - param_2[7];
        fVar45 = *param_2 - *pfVar2;
        fVar46 = param_2[2] - pfVar2[2];
        fVar47 = param_2[4] - pfVar2[4];
        fVar48 = param_2[6] - pfVar2[6];
        fVar21 = pfVar2[1] - param_2[1];
        fVar22 = pfVar2[3] - param_2[3];
        fVar23 = pfVar2[5] - param_2[5];
        fVar24 = pfVar2[7] - param_2[7];
        fVar25 = *pfVar1 + *pfVar3;
        fVar26 = pfVar1[2] + pfVar3[2];
        fVar27 = pfVar1[4] + pfVar3[4];
        fVar28 = pfVar1[6] + pfVar3[6];
        fVar33 = -pfVar3[1] - pfVar1[1];
        fVar93 = -pfVar3[3] - pfVar1[3];
        fVar34 = -pfVar3[5] - pfVar1[5];
        fVar95 = -pfVar3[7] - pfVar1[7];
        fVar35 = *pfVar1 - *pfVar3;
        fVar97 = pfVar1[2] - pfVar3[2];
        fVar36 = pfVar1[4] - pfVar3[4];
        fVar99 = pfVar1[6] - pfVar3[6];
        fVar29 = pfVar3[1] - pfVar1[1];
        fVar30 = pfVar3[3] - pfVar1[3];
        fVar31 = pfVar3[5] - pfVar1[5];
        fVar32 = pfVar3[7] - pfVar1[7];
        *pfVar15 = (fVar41 + fVar25) * fVar13;
        pfVar15[1] = -(fVar37 + fVar33) * fVar13;
        pfVar15[2] = (fVar42 + fVar26) * fVar13;
        pfVar15[3] = -(fVar38 + fVar93) * fVar13;
        pfVar15[4] = (fVar43 + fVar27) * fVar13;
        pfVar15[5] = -(fVar39 + fVar34) * fVar13;
        pfVar15[6] = (fVar44 + fVar28) * fVar13;
        pfVar15[7] = -(fVar40 + fVar95) * fVar13;
        pfVar15[8] = (fVar45 + fVar29) * fVar13;
        pfVar15[9] = -(fVar21 - fVar35) * fVar13;
        pfVar15[10] = (fVar46 + fVar30) * fVar13;
        pfVar15[0xb] = -(fVar22 - fVar97) * fVar13;
        pfVar15[0xc] = (fVar47 + fVar31) * fVar13;
        pfVar15[0xd] = -(fVar23 - fVar36) * fVar13;
        pfVar15[0xe] = (fVar48 + fVar32) * fVar13;
        pfVar15[0xf] = -(fVar24 - fVar99) * fVar13;
        pfVar15[0x10] = (fVar41 - fVar25) * fVar13;
        pfVar15[0x11] = -(fVar37 - fVar33) * fVar13;
        pfVar15[0x12] = (fVar42 - fVar26) * fVar13;
        pfVar15[0x13] = -(fVar38 - fVar93) * fVar13;
        pfVar15[0x14] = (fVar43 - fVar27) * fVar13;
        pfVar15[0x15] = -(fVar39 - fVar34) * fVar13;
        pfVar15[0x16] = (fVar44 - fVar28) * fVar13;
        pfVar15[0x17] = -(fVar40 - fVar95) * fVar13;
        pfVar15[0x18] = (fVar45 - fVar29) * fVar13;
        pfVar15[0x19] = -(fVar21 + fVar35) * fVar13;
        pfVar15[0x1a] = (fVar46 - fVar30) * fVar13;
        pfVar15[0x1b] = -(fVar22 + fVar97) * fVar13;
        pfVar15[0x1c] = (fVar47 - fVar31) * fVar13;
        pfVar15[0x1d] = -(fVar23 + fVar36) * fVar13;
        pfVar15[0x1e] = (fVar48 - fVar32) * fVar13;
        pfVar15[0x1f] = -(fVar24 + fVar99) * fVar13;
        pfVar15 = pfVar15 + 0x20;
        uVar16 = uVar16 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar16);
    }
  }
  else if (uVar10 == 5) {
    if (0 < (int)uVar18) {
      fVar13 = 0.25 / (float)(int)uVar11;
      uVar16 = (int)uVar11 / 5;
      uVar17 = uVar18 + 1;
      pfVar15 = param_5;
      do {
        fVar33 = *param_2;
        fVar37 = param_2[1];
        fVar34 = param_2[2];
        fVar38 = param_2[3];
        fVar35 = param_2[4];
        fVar39 = param_2[5];
        fVar36 = param_2[6];
        fVar40 = param_2[7];
        pfVar1 = (float *)((long)param_2 +
                          (-(ulong)((uVar16 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 4) << 5));
        pfVar2 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar16 << 5));
        pfVar3 = (float *)((long)param_2 +
                          (-(ulong)(uVar16 * 3 >> 0x1f) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 3) << 5));
        pfVar4 = (float *)((long)param_2 +
                          (-(ulong)((uVar16 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                          (ulong)(uVar16 * 2) << 5));
        fVar21 = -fVar37;
        fVar22 = -fVar38;
        fVar23 = -fVar39;
        fVar24 = -fVar40;
        fVar69 = *pfVar2 + *pfVar1;
        fVar70 = pfVar2[2] + pfVar1[2];
        fVar71 = pfVar2[4] + pfVar1[4];
        fVar72 = pfVar2[6] + pfVar1[6];
        fVar55 = -pfVar1[1] - pfVar2[1];
        fVar56 = -pfVar1[3] - pfVar2[3];
        fVar61 = -pfVar1[5] - pfVar2[5];
        fVar63 = -pfVar1[7] - pfVar2[7];
        fVar73 = *pfVar4 + *pfVar3;
        fVar89 = pfVar4[2] + pfVar3[2];
        fVar74 = pfVar4[4] + pfVar3[4];
        fVar90 = pfVar4[6] + pfVar3[6];
        fVar65 = -pfVar3[1] - pfVar4[1];
        fVar66 = -pfVar3[3] - pfVar4[3];
        fVar67 = -pfVar3[5] - pfVar4[5];
        fVar68 = -pfVar3[7] - pfVar4[7];
        fVar25 = fVar33 + fVar69 * 0.309017 + fVar73 * -0.809017;
        fVar26 = fVar34 + fVar70 * 0.309017 + fVar89 * -0.809017;
        fVar27 = fVar35 + fVar71 * 0.309017 + fVar74 * -0.809017;
        fVar28 = fVar36 + fVar72 * 0.309017 + fVar90 * -0.809017;
        fVar29 = fVar21 + fVar55 * 0.309017 + fVar65 * -0.809017;
        fVar30 = fVar22 + fVar56 * 0.309017 + fVar66 * -0.809017;
        fVar31 = fVar23 + fVar61 * 0.309017 + fVar67 * -0.809017;
        fVar32 = fVar24 + fVar63 * 0.309017 + fVar68 * -0.809017;
        fVar87 = *pfVar2 - *pfVar1;
        fVar88 = pfVar2[2] - pfVar1[2];
        fVar62 = pfVar2[4] - pfVar1[4];
        fVar64 = pfVar2[6] - pfVar1[6];
        fVar41 = pfVar1[1] - pfVar2[1];
        fVar42 = pfVar1[3] - pfVar2[3];
        fVar43 = pfVar1[5] - pfVar2[5];
        fVar44 = pfVar1[7] - pfVar2[7];
        fVar21 = fVar21 + fVar55 * -0.809017 + fVar65 * 0.309017;
        fVar22 = fVar22 + fVar56 * -0.809017 + fVar66 * 0.309017;
        fVar23 = fVar23 + fVar61 * -0.809017 + fVar67 * 0.309017;
        fVar24 = fVar24 + fVar63 * -0.809017 + fVar68 * 0.309017;
        fVar45 = *pfVar4 - *pfVar3;
        fVar46 = pfVar4[2] - pfVar3[2];
        fVar47 = pfVar4[4] - pfVar3[4];
        fVar48 = pfVar4[6] - pfVar3[6];
        fVar49 = pfVar3[1] - pfVar4[1];
        fVar57 = pfVar3[3] - pfVar4[3];
        fVar50 = pfVar3[5] - pfVar4[5];
        fVar58 = pfVar3[7] - pfVar4[7];
        fVar93 = fVar33 + fVar69 * -0.809017 + fVar73 * 0.309017;
        fVar95 = fVar34 + fVar70 * -0.809017 + fVar89 * 0.309017;
        fVar97 = fVar35 + fVar71 * -0.809017 + fVar74 * 0.309017;
        fVar99 = fVar36 + fVar72 * -0.809017 + fVar90 * 0.309017;
        fVar51 = fVar41 * -0.95105654 + fVar49 * -0.58778524;
        fVar59 = fVar42 * -0.95105654 + fVar57 * -0.58778524;
        fVar52 = fVar43 * -0.95105654 + fVar50 * -0.58778524;
        fVar60 = fVar44 * -0.95105654 + fVar58 * -0.58778524;
        fVar53 = fVar87 * 0.95105654 - fVar45 * -0.58778524;
        fVar85 = fVar88 * 0.95105654 - fVar46 * -0.58778524;
        fVar54 = fVar62 * 0.95105654 - fVar47 * -0.58778524;
        fVar86 = fVar64 * 0.95105654 - fVar48 * -0.58778524;
        fVar41 = fVar41 * 0.58778524 + fVar49 * -0.95105654;
        fVar42 = fVar42 * 0.58778524 + fVar57 * -0.95105654;
        fVar43 = fVar43 * 0.58778524 + fVar50 * -0.95105654;
        fVar44 = fVar44 * 0.58778524 + fVar58 * -0.95105654;
        fVar45 = fVar87 * -0.58778524 - fVar45 * -0.95105654;
        fVar46 = fVar88 * -0.58778524 - fVar46 * -0.95105654;
        fVar47 = fVar62 * -0.58778524 - fVar47 * -0.95105654;
        fVar48 = fVar64 * -0.58778524 - fVar48 * -0.95105654;
        *pfVar15 = (fVar73 + fVar33 + fVar69) * fVar13;
        pfVar15[1] = -(fVar65 + (fVar55 - fVar37)) * fVar13;
        pfVar15[2] = (fVar89 + fVar34 + fVar70) * fVar13;
        pfVar15[3] = -(fVar66 + (fVar56 - fVar38)) * fVar13;
        pfVar15[4] = (fVar74 + fVar35 + fVar71) * fVar13;
        pfVar15[5] = -(fVar67 + (fVar61 - fVar39)) * fVar13;
        pfVar15[6] = (fVar90 + fVar36 + fVar72) * fVar13;
        pfVar15[7] = -(fVar68 + (fVar63 - fVar40)) * fVar13;
        pfVar15[8] = (fVar25 - fVar51) * fVar13;
        pfVar15[9] = -(fVar29 - fVar53) * fVar13;
        pfVar15[10] = (fVar26 - fVar59) * fVar13;
        pfVar15[0xb] = -(fVar30 - fVar85) * fVar13;
        pfVar15[0xc] = (fVar27 - fVar52) * fVar13;
        pfVar15[0xd] = -(fVar31 - fVar54) * fVar13;
        pfVar15[0xe] = (fVar28 - fVar60) * fVar13;
        pfVar15[0xf] = -(fVar32 - fVar86) * fVar13;
        pfVar15[0x10] = (fVar93 + fVar41) * fVar13;
        pfVar15[0x11] = -(fVar21 + fVar45) * fVar13;
        pfVar15[0x12] = (fVar95 + fVar42) * fVar13;
        pfVar15[0x13] = -(fVar22 + fVar46) * fVar13;
        pfVar15[0x14] = (fVar97 + fVar43) * fVar13;
        pfVar15[0x15] = -(fVar23 + fVar47) * fVar13;
        pfVar15[0x16] = (fVar99 + fVar44) * fVar13;
        pfVar15[0x17] = -(fVar24 + fVar48) * fVar13;
        pfVar15[0x18] = (fVar93 - fVar41) * fVar13;
        pfVar15[0x19] = -(fVar21 - fVar45) * fVar13;
        pfVar15[0x1a] = (fVar95 - fVar42) * fVar13;
        pfVar15[0x1b] = -(fVar22 - fVar46) * fVar13;
        pfVar15[0x1c] = (fVar97 - fVar43) * fVar13;
        pfVar15[0x1d] = -(fVar23 - fVar47) * fVar13;
        pfVar15[0x1e] = (fVar99 - fVar44) * fVar13;
        pfVar15[0x1f] = -(fVar24 - fVar48) * fVar13;
        pfVar15[0x20] = (fVar25 + fVar51) * fVar13;
        pfVar15[0x21] = -(fVar29 + fVar53) * fVar13;
        pfVar15[0x22] = (fVar26 + fVar59) * fVar13;
        pfVar15[0x23] = -(fVar30 + fVar85) * fVar13;
        pfVar15[0x24] = (fVar27 + fVar52) * fVar13;
        pfVar15[0x25] = -(fVar31 + fVar54) * fVar13;
        pfVar15[0x26] = (fVar28 + fVar60) * fVar13;
        pfVar15[0x27] = -(fVar32 + fVar86) * fVar13;
        pfVar15 = pfVar15 + 0x28;
        uVar17 = uVar17 - 1;
        param_2 = param_2 + 8;
      } while (1 < uVar17);
    }
  }
  else if (uVar10 == 8 && 0 < (int)uVar18) {
    uVar17 = uVar11 + 7;
    if (-1 < (int)uVar11) {
      uVar17 = uVar11;
    }
    uVar16 = (int)uVar17 >> 3;
    fVar13 = 0.25 / (float)(int)uVar11;
    uVar14 = uVar16 * 3;
    uVar12 = (uVar17 & 0xfffffff8) - uVar16;
    uVar17 = uVar18 + 1;
    pfVar15 = param_5;
    do {
      pfVar1 = (float *)((long)param_2 +
                        (-(ulong)(uVar16 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar16 << 5));
      pfVar2 = (float *)((long)param_2 +
                        (-(ulong)(uVar14 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar14 << 5));
      pfVar3 = (float *)((long)param_2 +
                        (-(ulong)(uVar16 * 5 >> 0x1f) & 0xffffffe000000000 |
                        (ulong)(uVar16 * 5) << 5));
      pfVar4 = (float *)((long)param_2 +
                        (-(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5));
      pfVar5 = (float *)((long)param_2 +
                        (-(ulong)((uVar16 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                        (ulong)(uVar16 * 2) << 5));
      pfVar6 = (float *)((long)param_2 +
                        (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 |
                        (ulong)(uVar16 * 6) << 5));
      pfVar7 = (float *)((long)param_2 +
                        (-(ulong)((uVar16 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000 |
                        (ulong)(uVar16 * 4) << 5));
      fVar37 = *param_2 + *pfVar7;
      fVar38 = param_2[2] + pfVar7[2];
      fVar39 = param_2[4] + pfVar7[4];
      fVar40 = param_2[6] + pfVar7[6];
      fVar93 = -pfVar7[1] - param_2[1];
      fVar95 = -pfVar7[3] - param_2[3];
      fVar97 = -pfVar7[5] - param_2[5];
      fVar99 = -pfVar7[7] - param_2[7];
      fVar41 = *param_2 - *pfVar7;
      fVar43 = param_2[2] - pfVar7[2];
      fVar45 = param_2[4] - pfVar7[4];
      fVar47 = param_2[6] - pfVar7[6];
      fVar21 = pfVar7[1] - param_2[1];
      fVar22 = pfVar7[3] - param_2[3];
      fVar23 = pfVar7[5] - param_2[5];
      fVar24 = pfVar7[7] - param_2[7];
      fVar25 = *pfVar1 + *pfVar3;
      fVar26 = pfVar1[2] + pfVar3[2];
      fVar27 = pfVar1[4] + pfVar3[4];
      fVar28 = pfVar1[6] + pfVar3[6];
      fVar85 = *pfVar1 - *pfVar3;
      fVar86 = pfVar1[2] - pfVar3[2];
      fVar87 = pfVar1[4] - pfVar3[4];
      fVar88 = pfVar1[6] - pfVar3[6];
      fVar89 = -pfVar3[1] - pfVar1[1];
      fVar90 = -pfVar3[3] - pfVar1[3];
      fVar91 = -pfVar3[5] - pfVar1[5];
      fVar92 = -pfVar3[7] - pfVar1[7];
      fVar29 = pfVar3[1] - pfVar1[1];
      fVar30 = pfVar3[3] - pfVar1[3];
      fVar31 = pfVar3[5] - pfVar1[5];
      fVar32 = pfVar3[7] - pfVar1[7];
      fVar33 = *pfVar5 + *pfVar6;
      fVar34 = pfVar5[2] + pfVar6[2];
      fVar35 = pfVar5[4] + pfVar6[4];
      fVar36 = pfVar5[6] + pfVar6[6];
      fVar53 = *pfVar5 - *pfVar6;
      fVar54 = pfVar5[2] - pfVar6[2];
      fVar55 = pfVar5[4] - pfVar6[4];
      fVar56 = pfVar5[6] - pfVar6[6];
      fVar57 = pfVar6[1] - pfVar5[1];
      fVar58 = pfVar6[3] - pfVar5[3];
      fVar59 = pfVar6[5] - pfVar5[5];
      fVar60 = pfVar6[7] - pfVar5[7];
      fVar77 = *pfVar2 + *pfVar4;
      fVar78 = pfVar2[2] + pfVar4[2];
      fVar79 = pfVar2[4] + pfVar4[4];
      fVar80 = pfVar2[6] + pfVar4[6];
      fVar69 = -pfVar6[1] - pfVar5[1];
      fVar70 = -pfVar6[3] - pfVar5[3];
      fVar71 = -pfVar6[5] - pfVar5[5];
      fVar72 = -pfVar6[7] - pfVar5[7];
      fVar73 = -pfVar4[1] - pfVar2[1];
      fVar74 = -pfVar4[3] - pfVar2[3];
      fVar75 = -pfVar4[5] - pfVar2[5];
      fVar76 = -pfVar4[7] - pfVar2[7];
      fVar49 = pfVar4[1] - pfVar2[1];
      fVar50 = pfVar4[3] - pfVar2[3];
      fVar51 = pfVar4[5] - pfVar2[5];
      fVar52 = pfVar4[7] - pfVar2[7];
      fVar42 = fVar41 - fVar21 * 0.0;
      fVar44 = fVar43 - fVar22 * 0.0;
      fVar46 = fVar45 - fVar23 * 0.0;
      fVar48 = fVar47 - fVar24 * 0.0;
      fVar21 = fVar21 + fVar41 * 0.0;
      fVar22 = fVar22 + fVar43 * 0.0;
      fVar23 = fVar23 + fVar45 * 0.0;
      fVar24 = fVar24 + fVar47 * 0.0;
      fVar41 = fVar85 * 0.70711 - fVar29 * -0.70711;
      fVar43 = fVar86 * 0.70711 - fVar30 * -0.70711;
      fVar45 = fVar87 * 0.70711 - fVar31 * -0.70711;
      fVar47 = fVar88 * 0.70711 - fVar32 * -0.70711;
      fVar61 = fVar85 * -0.70711 + fVar29 * 0.70711;
      fVar62 = fVar86 * -0.70711 + fVar30 * 0.70711;
      fVar63 = fVar87 * -0.70711 + fVar31 * 0.70711;
      fVar64 = fVar88 * -0.70711 + fVar32 * 0.70711;
      fVar85 = -fVar53 + fVar57 * 0.0;
      fVar86 = -fVar54 + fVar58 * 0.0;
      fVar87 = -fVar55 + fVar59 * 0.0;
      fVar88 = -fVar56 + fVar60 * 0.0;
      fVar29 = (*pfVar2 - *pfVar4) * -0.70711;
      fVar30 = (pfVar2[2] - pfVar4[2]) * -0.70711;
      fVar31 = (pfVar2[4] - pfVar4[4]) * -0.70711;
      fVar32 = (pfVar2[6] - pfVar4[6]) * -0.70711;
      fVar81 = fVar29 - fVar49 * -0.70711;
      fVar82 = fVar30 - fVar50 * -0.70711;
      fVar83 = fVar31 - fVar51 * -0.70711;
      fVar84 = fVar32 - fVar52 * -0.70711;
      fVar29 = fVar29 + fVar49 * -0.70711;
      fVar30 = fVar30 + fVar50 * -0.70711;
      fVar31 = fVar31 + fVar51 * -0.70711;
      fVar32 = fVar32 + fVar52 * -0.70711;
      fVar57 = fVar57 + fVar53 * 0.0;
      fVar58 = fVar58 + fVar54 * 0.0;
      fVar59 = fVar59 + fVar55 * 0.0;
      fVar60 = fVar60 + fVar56 * 0.0;
      fVar53 = fVar37 + fVar33;
      fVar54 = fVar38 + fVar34;
      fVar55 = fVar39 + fVar35;
      fVar56 = fVar40 + fVar36;
      fVar65 = fVar93 + fVar69;
      fVar66 = fVar95 + fVar70;
      fVar67 = fVar97 + fVar71;
      fVar68 = fVar99 + fVar72;
      fVar37 = fVar37 - fVar33;
      fVar38 = fVar38 - fVar34;
      fVar39 = fVar39 - fVar35;
      fVar40 = fVar40 - fVar36;
      fVar93 = fVar93 - fVar69;
      fVar95 = fVar95 - fVar70;
      fVar97 = fVar97 - fVar71;
      fVar99 = fVar99 - fVar72;
      fVar69 = fVar25 + fVar77;
      fVar70 = fVar26 + fVar78;
      fVar71 = fVar27 + fVar79;
      fVar72 = fVar28 + fVar80;
      fVar94 = fVar89 + fVar73;
      fVar96 = fVar90 + fVar74;
      fVar98 = fVar91 + fVar75;
      fVar100 = fVar92 + fVar76;
      fVar25 = fVar25 - fVar77;
      fVar26 = fVar26 - fVar78;
      fVar27 = fVar27 - fVar79;
      fVar28 = fVar28 - fVar80;
      fVar89 = fVar89 - fVar73;
      fVar90 = fVar90 - fVar74;
      fVar91 = fVar91 - fVar75;
      fVar92 = fVar92 - fVar76;
      fVar73 = fVar42 + fVar57;
      fVar74 = fVar44 + fVar58;
      fVar75 = fVar46 + fVar59;
      fVar76 = fVar48 + fVar60;
      fVar77 = fVar21 + fVar85;
      fVar78 = fVar22 + fVar86;
      fVar79 = fVar23 + fVar87;
      fVar80 = fVar24 + fVar88;
      fVar42 = fVar42 - fVar57;
      fVar44 = fVar44 - fVar58;
      fVar46 = fVar46 - fVar59;
      fVar48 = fVar48 - fVar60;
      fVar21 = fVar21 - fVar85;
      fVar22 = fVar22 - fVar86;
      fVar23 = fVar23 - fVar87;
      fVar24 = fVar24 - fVar88;
      fVar51 = fVar41 + fVar81;
      fVar59 = fVar43 + fVar82;
      fVar52 = fVar45 + fVar83;
      fVar60 = fVar47 + fVar84;
      fVar41 = fVar41 - fVar81;
      fVar43 = fVar43 - fVar82;
      fVar45 = fVar45 - fVar83;
      fVar47 = fVar47 - fVar84;
      fVar49 = fVar61 - fVar29;
      fVar57 = fVar62 - fVar30;
      fVar50 = fVar63 - fVar31;
      fVar58 = fVar64 - fVar32;
      fVar85 = fVar37 - fVar93 * 0.0;
      fVar86 = fVar38 - fVar95 * 0.0;
      fVar87 = fVar39 - fVar97 * 0.0;
      fVar88 = fVar40 - fVar99 * 0.0;
      fVar61 = fVar61 + fVar29;
      fVar62 = fVar62 + fVar30;
      fVar63 = fVar63 + fVar31;
      fVar64 = fVar64 + fVar32;
      fVar93 = fVar93 + fVar37 * 0.0;
      fVar95 = fVar95 + fVar38 * 0.0;
      fVar97 = fVar97 + fVar39 * 0.0;
      fVar99 = fVar99 + fVar40 * 0.0;
      fVar29 = fVar89 + fVar25 * 0.0;
      fVar30 = fVar90 + fVar26 * 0.0;
      fVar31 = fVar91 + fVar27 * 0.0;
      fVar32 = fVar92 + fVar28 * 0.0;
      fVar25 = -fVar25 + fVar89 * 0.0;
      fVar26 = -fVar26 + fVar90 * 0.0;
      fVar27 = -fVar27 + fVar91 * 0.0;
      fVar28 = -fVar28 + fVar92 * 0.0;
      fVar37 = fVar42 - fVar21 * 0.0;
      fVar38 = fVar44 - fVar22 * 0.0;
      fVar39 = fVar46 - fVar23 * 0.0;
      fVar40 = fVar48 - fVar24 * 0.0;
      fVar21 = fVar21 + fVar42 * 0.0;
      fVar22 = fVar22 + fVar44 * 0.0;
      fVar23 = fVar23 + fVar46 * 0.0;
      fVar24 = fVar24 + fVar48 * 0.0;
      fVar33 = -fVar41 + fVar49 * 0.0;
      fVar34 = -fVar43 + fVar57 * 0.0;
      fVar35 = -fVar45 + fVar50 * 0.0;
      fVar36 = -fVar47 + fVar58 * 0.0;
      fVar49 = fVar49 + fVar41 * 0.0;
      fVar57 = fVar57 + fVar43 * 0.0;
      fVar50 = fVar50 + fVar45 * 0.0;
      fVar58 = fVar58 + fVar47 * 0.0;
      *pfVar15 = (fVar53 + fVar69) * fVar13;
      pfVar15[1] = -(fVar65 + fVar94) * fVar13;
      pfVar15[2] = (fVar54 + fVar70) * fVar13;
      pfVar15[3] = -(fVar66 + fVar96) * fVar13;
      pfVar15[4] = (fVar55 + fVar71) * fVar13;
      pfVar15[5] = -(fVar67 + fVar98) * fVar13;
      pfVar15[6] = (fVar56 + fVar72) * fVar13;
      pfVar15[7] = -(fVar68 + fVar100) * fVar13;
      pfVar15[8] = (fVar73 + fVar51) * fVar13;
      pfVar15[9] = -(fVar77 + fVar61) * fVar13;
      pfVar15[10] = (fVar74 + fVar59) * fVar13;
      pfVar15[0xb] = -(fVar78 + fVar62) * fVar13;
      pfVar15[0xc] = (fVar75 + fVar52) * fVar13;
      pfVar15[0xd] = -(fVar79 + fVar63) * fVar13;
      pfVar15[0xe] = (fVar76 + fVar60) * fVar13;
      pfVar15[0xf] = -(fVar80 + fVar64) * fVar13;
      pfVar15[0x10] = (fVar85 + fVar29) * fVar13;
      pfVar15[0x11] = -(fVar93 + fVar25) * fVar13;
      pfVar15[0x12] = (fVar86 + fVar30) * fVar13;
      pfVar15[0x13] = -(fVar95 + fVar26) * fVar13;
      pfVar15[0x14] = (fVar87 + fVar31) * fVar13;
      pfVar15[0x15] = -(fVar97 + fVar27) * fVar13;
      pfVar15[0x16] = (fVar88 + fVar32) * fVar13;
      pfVar15[0x17] = -(fVar99 + fVar28) * fVar13;
      pfVar15[0x20] = (fVar53 - fVar69) * fVar13;
      pfVar15[0x21] = -(fVar65 - fVar94) * fVar13;
      pfVar15[0x22] = (fVar54 - fVar70) * fVar13;
      pfVar15[0x23] = -(fVar66 - fVar96) * fVar13;
      pfVar15[0x24] = (fVar55 - fVar71) * fVar13;
      pfVar15[0x25] = -(fVar67 - fVar98) * fVar13;
      pfVar15[0x26] = (fVar56 - fVar72) * fVar13;
      pfVar15[0x27] = -(fVar68 - fVar100) * fVar13;
      pfVar15[0x28] = (fVar73 - fVar51) * fVar13;
      pfVar15[0x29] = -(fVar77 - fVar61) * fVar13;
      pfVar15[0x2a] = (fVar74 - fVar59) * fVar13;
      pfVar15[0x2b] = -(fVar78 - fVar62) * fVar13;
      pfVar15[0x2c] = (fVar75 - fVar52) * fVar13;
      pfVar15[0x2d] = -(fVar79 - fVar63) * fVar13;
      pfVar15[0x2e] = (fVar76 - fVar60) * fVar13;
      pfVar15[0x2f] = -(fVar80 - fVar64) * fVar13;
      pfVar15[0x30] = (fVar85 - fVar29) * fVar13;
      pfVar15[0x31] = -(fVar93 - fVar25) * fVar13;
      pfVar15[0x32] = (fVar86 - fVar30) * fVar13;
      pfVar15[0x33] = -(fVar95 - fVar26) * fVar13;
      pfVar15[0x34] = (fVar87 - fVar31) * fVar13;
      pfVar15[0x35] = -(fVar97 - fVar27) * fVar13;
      pfVar15[0x36] = (fVar88 - fVar32) * fVar13;
      pfVar15[0x37] = -(fVar99 - fVar28) * fVar13;
      uVar17 = uVar17 - 1;
      pfVar15[0x18] = (fVar37 + fVar49) * fVar13;
      pfVar15[0x19] = -(fVar21 + fVar33) * fVar13;
      pfVar15[0x1a] = (fVar38 + fVar57) * fVar13;
      pfVar15[0x1b] = -(fVar22 + fVar34) * fVar13;
      pfVar15[0x1c] = (fVar39 + fVar50) * fVar13;
      pfVar15[0x1d] = -(fVar23 + fVar35) * fVar13;
      pfVar15[0x1e] = (fVar40 + fVar58) * fVar13;
      pfVar15[0x1f] = -(fVar24 + fVar36) * fVar13;
      pfVar15[0x38] = (fVar37 - fVar49) * fVar13;
      pfVar15[0x39] = -(fVar21 - fVar33) * fVar13;
      pfVar15[0x3a] = (fVar38 - fVar57) * fVar13;
      pfVar15[0x3b] = -(fVar22 - fVar34) * fVar13;
      pfVar15[0x3c] = (fVar39 - fVar50) * fVar13;
      pfVar15[0x3d] = -(fVar23 - fVar35) * fVar13;
      pfVar15[0x3e] = (fVar40 - fVar58) * fVar13;
      pfVar15[0x3f] = -(fVar24 - fVar36) * fVar13;
      pfVar15 = pfVar15 + 0x40;
      param_2 = param_2 + 8;
    } while (1 < uVar17);
  }
  if (1 < (int)uVar9) {
    param_4 = param_4 + (long)(int)(-(uVar10 & 1) & uVar10) * 8;
    uVar19 = (ulong)uVar9 + 1;
    iVar20 = uVar9 * 2;
    do {
      pfVar15 = pfVar8;
      iVar20 = iVar20 + -2;
      uVar9 = param_3[iVar20];
      uVar17 = 0;
      if (uVar9 != 0) {
        uVar17 = (int)uVar18 / (int)uVar9;
      }
      if ((int)uVar9 < 4) {
        if (uVar9 == 2) {
          FUN_109880018(pfVar15,param_5,param_4,uVar17,uVar10,uVar11);
        }
        else if (uVar9 == 3) {
          FUN_1098800b4(pfVar15,param_5,param_4,uVar17,uVar10,uVar11);
        }
      }
      else if (uVar9 == 4) {
        FUN_10988020c(pfVar15,param_5,param_4,uVar17,uVar10,uVar11);
      }
      else if (uVar9 == 5) {
        FUN_10988039c(pfVar15,param_5,param_4,uVar17,uVar10,uVar11);
      }
      param_4 = param_4 + (long)(int)((uVar9 - 1) * uVar10) * 8;
      uVar10 = uVar9 * uVar10;
      uVar19 = uVar19 - 1;
      pfVar8 = param_5;
      param_5 = pfVar15;
      uVar18 = uVar17;
    } while (2 < uVar19);
  }
  return;
}



/* Entry: 10987fa38; end: 10987fac7;  */

void FUN_10987fa38(float *param_1,float *param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
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
  
  if (0 < param_4) {
    do {
      puVar4 = param_3;
      uVar5 = param_5 + 1;
      if (0 < (int)param_5) {
        do {
          pfVar2 = (float *)((long)param_2 +
                            (-(ulong)((uint)(param_6 / 2) >> 0x1f) & 0xffffffe000000000 |
                            (ulong)(uint)(param_6 / 2) << 5));
          fVar6 = *param_2;
          fVar10 = param_2[1];
          fVar7 = param_2[2];
          fVar11 = param_2[3];
          fVar8 = param_2[4];
          fVar12 = param_2[5];
          fVar9 = param_2[6];
          fVar13 = param_2[7];
          param_2 = param_2 + 8;
          param_3 = puVar4 + 1;
          fVar22 = (float)*puVar4;
          fVar14 = (float)((ulong)*puVar4 >> 0x20);
          fVar15 = *pfVar2 * fVar22 - pfVar2[1] * fVar14;
          fVar16 = pfVar2[2] * fVar22 - pfVar2[3] * fVar14;
          fVar17 = pfVar2[4] * fVar22 - pfVar2[5] * fVar14;
          fVar18 = pfVar2[6] * fVar22 - pfVar2[7] * fVar14;
          fVar19 = *pfVar2 * fVar14 + pfVar2[1] * fVar22;
          fVar20 = pfVar2[2] * fVar14 + pfVar2[3] * fVar22;
          fVar21 = pfVar2[4] * fVar14 + pfVar2[5] * fVar22;
          fVar22 = pfVar2[6] * fVar14 + pfVar2[7] * fVar22;
          pfVar2 = (float *)((long)param_1 +
                            (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 | (ulong)param_5 << 5));
          *param_1 = fVar6 + fVar15;
          param_1[1] = fVar10 + fVar19;
          param_1[2] = fVar7 + fVar16;
          param_1[3] = fVar11 + fVar20;
          param_1[4] = fVar8 + fVar17;
          param_1[5] = fVar12 + fVar21;
          param_1[6] = fVar9 + fVar18;
          param_1[7] = fVar13 + fVar22;
          param_1 = param_1 + 8;
          *pfVar2 = fVar6 - fVar15;
          pfVar2[1] = fVar10 - fVar19;
          pfVar2[2] = fVar7 - fVar16;
          pfVar2[3] = fVar11 - fVar20;
          pfVar2[4] = fVar8 - fVar17;
          pfVar2[5] = fVar12 - fVar21;
          pfVar2[6] = fVar9 - fVar18;
          pfVar2[7] = fVar13 - fVar22;
          uVar5 = uVar5 - 1;
          puVar4 = param_3;
        } while (1 < uVar5);
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)param_5 * 8;
      iVar3 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar3;
    } while (iVar3 != 0 && bVar1);
  }
  return;
}



/* Entry: 10987fac8; end: 10987fc0f;  */

void FUN_10987fac8(long param_1,long param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  if (0 < param_4) {
    uVar7 = param_6 / 3;
    do {
      if (0 < (int)param_5) {
        lVar9 = 0;
        uVar8 = param_5 + 1;
        do {
          pfVar2 = (float *)(param_2 + lVar9);
          fVar13 = pfVar2[1];
          fVar10 = pfVar2[2];
          fVar14 = pfVar2[3];
          fVar11 = pfVar2[4];
          fVar15 = pfVar2[5];
          fVar12 = pfVar2[6];
          fVar16 = pfVar2[7];
          pfVar3 = (float *)(param_2 + (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar7 << 5) + lVar9);
          pfVar4 = (float *)(param_2 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000
                                       | (ulong)(uVar7 * 2) << 5) + lVar9);
          pfVar5 = (float *)(param_1 + lVar9);
          fVar17 = (float)*param_3;
          fVar18 = (float)((ulong)*param_3 >> 0x20);
          fVar37 = *pfVar3 * fVar17 - pfVar3[1] * fVar18;
          fVar39 = pfVar3[2] * fVar17 - pfVar3[3] * fVar18;
          fVar41 = pfVar3[4] * fVar17 - pfVar3[5] * fVar18;
          fVar43 = pfVar3[6] * fVar17 - pfVar3[7] * fVar18;
          fVar45 = *pfVar3 * fVar18 + pfVar3[1] * fVar17;
          fVar46 = pfVar3[2] * fVar18 + pfVar3[3] * fVar17;
          fVar47 = pfVar3[4] * fVar18 + pfVar3[5] * fVar17;
          fVar48 = pfVar3[6] * fVar18 + pfVar3[7] * fVar17;
          fVar17 = (float)param_3[(int)param_5];
          fVar18 = (float)((ulong)param_3[(int)param_5] >> 0x20);
          fVar21 = *pfVar4 * fVar17 - pfVar4[1] * fVar18;
          fVar22 = pfVar4[2] * fVar17 - pfVar4[3] * fVar18;
          fVar23 = pfVar4[4] * fVar17 - pfVar4[5] * fVar18;
          fVar24 = pfVar4[6] * fVar17 - pfVar4[7] * fVar18;
          fVar29 = *pfVar4 * fVar18 + pfVar4[1] * fVar17;
          fVar31 = pfVar4[2] * fVar18 + pfVar4[3] * fVar17;
          fVar33 = pfVar4[4] * fVar18 + pfVar4[5] * fVar17;
          fVar35 = pfVar4[6] * fVar18 + pfVar4[7] * fVar17;
          fVar17 = fVar37 + fVar21;
          fVar18 = fVar39 + fVar22;
          fVar19 = fVar41 + fVar23;
          fVar20 = fVar43 + fVar24;
          fVar25 = fVar45 + fVar29;
          fVar26 = fVar46 + fVar31;
          fVar27 = fVar47 + fVar33;
          fVar28 = fVar48 + fVar35;
          fVar30 = *pfVar2 - fVar17 * 0.5;
          fVar32 = fVar10 - fVar18 * 0.5;
          fVar34 = fVar11 - fVar19 * 0.5;
          fVar36 = fVar12 - fVar20 * 0.5;
          fVar38 = fVar13 - fVar25 * 0.5;
          fVar40 = fVar14 - fVar26 * 0.5;
          fVar42 = fVar15 - fVar27 * 0.5;
          fVar44 = fVar16 - fVar28 * 0.5;
          fVar21 = (fVar37 - fVar21) * -0.8660254;
          fVar22 = (fVar39 - fVar22) * -0.8660254;
          fVar23 = (fVar41 - fVar23) * -0.8660254;
          fVar24 = (fVar43 - fVar24) * -0.8660254;
          fVar29 = (fVar45 - fVar29) * -0.8660254;
          fVar31 = (fVar46 - fVar31) * -0.8660254;
          fVar33 = (fVar47 - fVar33) * -0.8660254;
          fVar35 = (fVar48 - fVar35) * -0.8660254;
          *pfVar5 = *pfVar2 + fVar17;
          pfVar5[1] = fVar13 + fVar25;
          pfVar5[2] = fVar10 + fVar18;
          pfVar5[3] = fVar14 + fVar26;
          pfVar5[4] = fVar11 + fVar19;
          pfVar5[5] = fVar15 + fVar27;
          pfVar5[6] = fVar12 + fVar20;
          pfVar5[7] = fVar16 + fVar28;
          pfVar2 = (float *)(param_1 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)param_5 << 5) + lVar9);
          *pfVar2 = fVar30 - fVar29;
          pfVar2[1] = fVar21 + fVar38;
          pfVar2[2] = fVar32 - fVar31;
          pfVar2[3] = fVar22 + fVar40;
          pfVar2[4] = fVar34 - fVar33;
          pfVar2[5] = fVar23 + fVar42;
          pfVar2[6] = fVar36 - fVar35;
          pfVar2[7] = fVar24 + fVar44;
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) &
                                        0xffffffe000000000 | (ulong)(param_5 << 1) << 5) + lVar9);
          *pfVar2 = fVar29 + fVar30;
          pfVar2[1] = fVar38 - fVar21;
          pfVar2[2] = fVar31 + fVar32;
          pfVar2[3] = fVar40 - fVar22;
          pfVar2[4] = fVar33 + fVar34;
          pfVar2[5] = fVar42 - fVar23;
          pfVar2[6] = fVar35 + fVar36;
          pfVar2[7] = fVar44 - fVar24;
          param_3 = param_3 + 1;
          lVar9 = lVar9 + 0x20;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
        param_1 = param_1 + lVar9;
        param_2 = param_2 + lVar9;
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)(param_5 << 1) * 0x20;
      iVar6 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  return;
}



/* Entry: 10987fc10; end: 10987fd8b;  */

void FUN_10987fc10(long param_1,long param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (0 < param_4) {
    iVar8 = param_6 + 3;
    if (-1 < param_6) {
      iVar8 = param_6;
    }
    uVar7 = iVar8 >> 2;
    uVar9 = param_5 * 3;
    do {
      if (0 < (int)param_5) {
        lVar10 = 0;
        uVar11 = param_5 + 1;
        do {
          pfVar2 = (float *)(param_2 + lVar10);
          pfVar3 = (float *)(param_2 + (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar7 << 5) + lVar10);
          pfVar4 = (float *)(param_2 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000
                                       | (ulong)(uVar7 * 2) << 5) + lVar10);
          pfVar5 = (float *)(param_2 + (-(ulong)(uVar7 * 3 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)(uVar7 * 3) << 5) + lVar10);
          pfVar6 = (float *)(param_1 + lVar10);
          fVar40 = (float)*param_3;
          fVar41 = (float)((ulong)*param_3 >> 0x20);
          fVar44 = *pfVar3 * fVar40 - pfVar3[1] * fVar41;
          fVar45 = pfVar3[2] * fVar40 - pfVar3[3] * fVar41;
          fVar46 = pfVar3[4] * fVar40 - pfVar3[5] * fVar41;
          fVar47 = pfVar3[6] * fVar40 - pfVar3[7] * fVar41;
          fVar48 = *pfVar3 * fVar41 + pfVar3[1] * fVar40;
          fVar49 = pfVar3[2] * fVar41 + pfVar3[3] * fVar40;
          fVar50 = pfVar3[4] * fVar41 + pfVar3[5] * fVar40;
          fVar51 = pfVar3[6] * fVar41 + pfVar3[7] * fVar40;
          fVar43 = (float)param_3[(int)param_5];
          fVar12 = (float)((ulong)param_3[(int)param_5] >> 0x20);
          fVar20 = *pfVar4 * fVar43 - pfVar4[1] * fVar12;
          fVar21 = pfVar4[2] * fVar43 - pfVar4[3] * fVar12;
          fVar22 = pfVar4[4] * fVar43 - pfVar4[5] * fVar12;
          fVar23 = pfVar4[6] * fVar43 - pfVar4[7] * fVar12;
          fVar40 = *pfVar4 * fVar12 + pfVar4[1] * fVar43;
          fVar41 = pfVar4[2] * fVar12 + pfVar4[3] * fVar43;
          fVar42 = pfVar4[4] * fVar12 + pfVar4[5] * fVar43;
          fVar43 = pfVar4[6] * fVar12 + pfVar4[7] * fVar43;
          fVar12 = (float)param_3[(int)(param_5 << 1)];
          fVar13 = (float)((ulong)param_3[(int)(param_5 << 1)] >> 0x20);
          fVar24 = *pfVar5 * fVar12 - pfVar5[1] * fVar13;
          fVar25 = pfVar5[2] * fVar12 - pfVar5[3] * fVar13;
          fVar26 = pfVar5[4] * fVar12 - pfVar5[5] * fVar13;
          fVar27 = pfVar5[6] * fVar12 - pfVar5[7] * fVar13;
          fVar28 = *pfVar5 * fVar13 + pfVar5[1] * fVar12;
          fVar29 = pfVar5[2] * fVar13 + pfVar5[3] * fVar12;
          fVar30 = pfVar5[4] * fVar13 + pfVar5[5] * fVar12;
          fVar31 = pfVar5[6] * fVar13 + pfVar5[7] * fVar12;
          fVar16 = *pfVar2 + fVar20;
          fVar17 = pfVar2[2] + fVar21;
          fVar18 = pfVar2[4] + fVar22;
          fVar19 = pfVar2[6] + fVar23;
          fVar32 = pfVar2[1] + fVar40;
          fVar33 = pfVar2[3] + fVar41;
          fVar34 = pfVar2[5] + fVar42;
          fVar35 = pfVar2[7] + fVar43;
          fVar20 = *pfVar2 - fVar20;
          fVar21 = pfVar2[2] - fVar21;
          fVar22 = pfVar2[4] - fVar22;
          fVar23 = pfVar2[6] - fVar23;
          fVar40 = pfVar2[1] - fVar40;
          fVar41 = pfVar2[3] - fVar41;
          fVar42 = pfVar2[5] - fVar42;
          fVar43 = pfVar2[7] - fVar43;
          fVar12 = fVar44 + fVar24;
          fVar13 = fVar45 + fVar25;
          fVar14 = fVar46 + fVar26;
          fVar15 = fVar47 + fVar27;
          fVar36 = fVar48 + fVar28;
          fVar37 = fVar49 + fVar29;
          fVar38 = fVar50 + fVar30;
          fVar39 = fVar51 + fVar31;
          fVar44 = fVar44 - fVar24;
          fVar45 = fVar45 - fVar25;
          fVar46 = fVar46 - fVar26;
          fVar47 = fVar47 - fVar27;
          fVar48 = fVar48 - fVar28;
          fVar49 = fVar49 - fVar29;
          fVar50 = fVar50 - fVar30;
          fVar51 = fVar51 - fVar31;
          *pfVar6 = fVar16 + fVar12;
          pfVar6[1] = fVar32 + fVar36;
          pfVar6[2] = fVar17 + fVar13;
          pfVar6[3] = fVar33 + fVar37;
          pfVar6[4] = fVar18 + fVar14;
          pfVar6[5] = fVar34 + fVar38;
          pfVar6[6] = fVar19 + fVar15;
          pfVar6[7] = fVar35 + fVar39;
          pfVar2 = (float *)(param_1 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)param_5 << 5) + lVar10);
          *pfVar2 = fVar20 + fVar48;
          pfVar2[1] = fVar40 - fVar44;
          pfVar2[2] = fVar21 + fVar49;
          pfVar2[3] = fVar41 - fVar45;
          pfVar2[4] = fVar22 + fVar50;
          pfVar2[5] = fVar42 - fVar46;
          pfVar2[6] = fVar23 + fVar51;
          pfVar2[7] = fVar43 - fVar47;
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) &
                                        0xffffffe000000000 | (ulong)(param_5 << 1) << 5) + lVar10);
          *pfVar2 = fVar16 - fVar12;
          pfVar2[1] = fVar32 - fVar36;
          pfVar2[2] = fVar17 - fVar13;
          pfVar2[3] = fVar33 - fVar37;
          pfVar2[4] = fVar18 - fVar14;
          pfVar2[5] = fVar34 - fVar38;
          pfVar2[6] = fVar19 - fVar15;
          pfVar2[7] = fVar35 - fVar39;
          pfVar2 = (float *)(param_1 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar9 << 5) + lVar10);
          *pfVar2 = fVar20 - fVar48;
          pfVar2[1] = fVar40 + fVar44;
          pfVar2[2] = fVar21 - fVar49;
          pfVar2[3] = fVar41 + fVar45;
          pfVar2[4] = fVar22 - fVar50;
          pfVar2[5] = fVar42 + fVar46;
          pfVar2[6] = fVar23 - fVar51;
          pfVar2[7] = fVar43 + fVar47;
          param_3 = param_3 + 1;
          lVar10 = lVar10 + 0x20;
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
        param_1 = param_1 + lVar10;
        param_2 = param_2 + lVar10;
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)uVar9 * 0x20;
      iVar8 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
  return;
}



/* Entry: 10987fd8c; end: 109880017;  */

void FUN_10987fd8c(long param_1,long param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  
  if (0 < param_4) {
    uVar9 = param_6 / 5;
    uVar8 = param_5 * 3;
    do {
      if (0 < (int)param_5) {
        lVar10 = 0;
        uVar11 = param_5 + 1;
        do {
          pfVar2 = (float *)(param_2 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar9 << 5) + lVar10);
          pfVar3 = (float *)(param_2 + (-(ulong)((uVar9 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000
                                       | (ulong)(uVar9 * 4) << 5) + lVar10);
          pfVar4 = (float *)(param_2 + lVar10);
          fVar12 = *pfVar4;
          fVar16 = pfVar4[1];
          fVar13 = pfVar4[2];
          fVar17 = pfVar4[3];
          fVar14 = pfVar4[4];
          fVar18 = pfVar4[5];
          fVar15 = pfVar4[6];
          fVar19 = pfVar4[7];
          pfVar4 = (float *)(param_1 + lVar10);
          pfVar5 = (float *)(param_2 + (-(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000
                                       | (ulong)(uVar9 * 2) << 5) + lVar10);
          pfVar6 = (float *)(param_2 + (-(ulong)(uVar9 * 3 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)(uVar9 * 3) << 5) + lVar10);
          fVar45 = (float)*param_3;
          fVar46 = (float)((ulong)*param_3 >> 0x20);
          fVar20 = *pfVar2 * fVar45 - pfVar2[1] * fVar46;
          fVar21 = pfVar2[2] * fVar45 - pfVar2[3] * fVar46;
          fVar22 = pfVar2[4] * fVar45 - pfVar2[5] * fVar46;
          fVar23 = pfVar2[6] * fVar45 - pfVar2[7] * fVar46;
          fVar24 = *pfVar2 * fVar46 + pfVar2[1] * fVar45;
          fVar25 = pfVar2[2] * fVar46 + pfVar2[3] * fVar45;
          fVar26 = pfVar2[4] * fVar46 + pfVar2[5] * fVar45;
          fVar27 = pfVar2[6] * fVar46 + pfVar2[7] * fVar45;
          fVar45 = (float)param_3[(int)param_5];
          fVar46 = (float)((ulong)param_3[(int)param_5] >> 0x20);
          fVar28 = *pfVar5 * fVar45 - pfVar5[1] * fVar46;
          fVar29 = pfVar5[2] * fVar45 - pfVar5[3] * fVar46;
          fVar30 = pfVar5[4] * fVar45 - pfVar5[5] * fVar46;
          fVar31 = pfVar5[6] * fVar45 - pfVar5[7] * fVar46;
          fVar32 = *pfVar5 * fVar46 + pfVar5[1] * fVar45;
          fVar33 = pfVar5[2] * fVar46 + pfVar5[3] * fVar45;
          fVar34 = pfVar5[4] * fVar46 + pfVar5[5] * fVar45;
          fVar35 = pfVar5[6] * fVar46 + pfVar5[7] * fVar45;
          fVar52 = (float)param_3[(int)(param_5 << 1)];
          fVar37 = (float)((ulong)param_3[(int)(param_5 << 1)] >> 0x20);
          fVar49 = (float)param_3[(int)uVar8];
          fVar45 = *pfVar6 * fVar52 - pfVar6[1] * fVar37;
          fVar46 = pfVar6[2] * fVar52 - pfVar6[3] * fVar37;
          fVar47 = pfVar6[4] * fVar52 - pfVar6[5] * fVar37;
          fVar48 = pfVar6[6] * fVar52 - pfVar6[7] * fVar37;
          fVar50 = (float)((ulong)param_3[(int)uVar8] >> 0x20);
          fVar61 = *pfVar3 * fVar49 - pfVar3[1] * fVar50;
          fVar62 = pfVar3[2] * fVar49 - pfVar3[3] * fVar50;
          fVar63 = pfVar3[4] * fVar49 - pfVar3[5] * fVar50;
          fVar64 = pfVar3[6] * fVar49 - pfVar3[7] * fVar50;
          fVar65 = *pfVar3 * fVar50 + pfVar3[1] * fVar49;
          fVar66 = pfVar3[2] * fVar50 + pfVar3[3] * fVar49;
          fVar67 = pfVar3[4] * fVar50 + pfVar3[5] * fVar49;
          fVar68 = pfVar3[6] * fVar50 + pfVar3[7] * fVar49;
          fVar36 = fVar20 + fVar61;
          fVar38 = fVar21 + fVar62;
          fVar39 = fVar22 + fVar63;
          fVar40 = fVar23 + fVar64;
          fVar41 = fVar24 + fVar65;
          fVar42 = fVar25 + fVar66;
          fVar43 = fVar26 + fVar67;
          fVar44 = fVar27 + fVar68;
          fVar49 = *pfVar6 * fVar37 + pfVar6[1] * fVar52;
          fVar50 = pfVar6[2] * fVar37 + pfVar6[3] * fVar52;
          fVar51 = pfVar6[4] * fVar37 + pfVar6[5] * fVar52;
          fVar52 = pfVar6[6] * fVar37 + pfVar6[7] * fVar52;
          fVar53 = fVar28 + fVar45;
          fVar54 = fVar29 + fVar46;
          fVar55 = fVar30 + fVar47;
          fVar56 = fVar31 + fVar48;
          fVar57 = fVar32 + fVar49;
          fVar58 = fVar33 + fVar50;
          fVar59 = fVar34 + fVar51;
          fVar60 = fVar35 + fVar52;
          fVar69 = fVar12 + fVar36 * 0.309017 + fVar53 * -0.809017;
          fVar70 = fVar13 + fVar38 * 0.309017 + fVar54 * -0.809017;
          fVar71 = fVar14 + fVar39 * 0.309017 + fVar55 * -0.809017;
          fVar72 = fVar15 + fVar40 * 0.309017 + fVar56 * -0.809017;
          fVar73 = fVar16 + fVar41 * 0.309017 + fVar57 * -0.809017;
          fVar74 = fVar17 + fVar42 * 0.309017 + fVar58 * -0.809017;
          fVar75 = fVar18 + fVar43 * 0.309017 + fVar59 * -0.809017;
          fVar76 = fVar19 + fVar44 * 0.309017 + fVar60 * -0.809017;
          fVar20 = fVar20 - fVar61;
          fVar21 = fVar21 - fVar62;
          fVar22 = fVar22 - fVar63;
          fVar23 = fVar23 - fVar64;
          fVar24 = fVar24 - fVar65;
          fVar25 = fVar25 - fVar66;
          fVar26 = fVar26 - fVar67;
          fVar27 = fVar27 - fVar68;
          fVar28 = fVar28 - fVar45;
          fVar29 = fVar29 - fVar46;
          fVar30 = fVar30 - fVar47;
          fVar31 = fVar31 - fVar48;
          fVar45 = fVar12 + fVar36 * -0.809017 + fVar53 * 0.309017;
          fVar46 = fVar13 + fVar38 * -0.809017 + fVar54 * 0.309017;
          fVar47 = fVar14 + fVar39 * -0.809017 + fVar55 * 0.309017;
          fVar48 = fVar15 + fVar40 * -0.809017 + fVar56 * 0.309017;
          fVar32 = fVar32 - fVar49;
          fVar33 = fVar33 - fVar50;
          fVar34 = fVar34 - fVar51;
          fVar35 = fVar35 - fVar52;
          fVar49 = fVar16 + fVar41 * -0.809017 + fVar57 * 0.309017;
          fVar50 = fVar17 + fVar42 * -0.809017 + fVar58 * 0.309017;
          fVar51 = fVar18 + fVar43 * -0.809017 + fVar59 * 0.309017;
          fVar52 = fVar19 + fVar44 * -0.809017 + fVar60 * 0.309017;
          fVar37 = fVar24 * -0.95105654 + fVar32 * -0.58778524;
          fVar61 = fVar25 * -0.95105654 + fVar33 * -0.58778524;
          fVar62 = fVar26 * -0.95105654 + fVar34 * -0.58778524;
          fVar63 = fVar27 * -0.95105654 + fVar35 * -0.58778524;
          fVar64 = fVar20 * 0.95105654 - fVar28 * -0.58778524;
          fVar65 = fVar21 * 0.95105654 - fVar29 * -0.58778524;
          fVar66 = fVar22 * 0.95105654 - fVar30 * -0.58778524;
          fVar67 = fVar23 * 0.95105654 - fVar31 * -0.58778524;
          fVar24 = fVar24 * 0.58778524 + fVar32 * -0.95105654;
          fVar25 = fVar25 * 0.58778524 + fVar33 * -0.95105654;
          fVar26 = fVar26 * 0.58778524 + fVar34 * -0.95105654;
          fVar27 = fVar27 * 0.58778524 + fVar35 * -0.95105654;
          fVar20 = fVar20 * -0.58778524 - fVar28 * -0.95105654;
          fVar21 = fVar21 * -0.58778524 - fVar29 * -0.95105654;
          fVar22 = fVar22 * -0.58778524 - fVar30 * -0.95105654;
          fVar23 = fVar23 * -0.58778524 - fVar31 * -0.95105654;
          *pfVar4 = fVar53 + fVar12 + fVar36;
          pfVar4[1] = fVar57 + fVar16 + fVar41;
          pfVar4[2] = fVar54 + fVar13 + fVar38;
          pfVar4[3] = fVar58 + fVar17 + fVar42;
          pfVar4[4] = fVar55 + fVar14 + fVar39;
          pfVar4[5] = fVar59 + fVar18 + fVar43;
          pfVar4[6] = fVar56 + fVar15 + fVar40;
          pfVar4[7] = fVar60 + fVar19 + fVar44;
          pfVar2 = (float *)(param_1 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)param_5 << 5) + lVar10);
          *pfVar2 = fVar69 - fVar37;
          pfVar2[1] = fVar73 - fVar64;
          pfVar2[2] = fVar70 - fVar61;
          pfVar2[3] = fVar74 - fVar65;
          pfVar2[4] = fVar71 - fVar62;
          pfVar2[5] = fVar75 - fVar66;
          pfVar2[6] = fVar72 - fVar63;
          pfVar2[7] = fVar76 - fVar67;
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) &
                                        0xffffffe000000000 | (ulong)(param_5 << 1) << 5) + lVar10);
          *pfVar2 = fVar45 + fVar24;
          pfVar2[1] = fVar49 + fVar20;
          pfVar2[2] = fVar46 + fVar25;
          pfVar2[3] = fVar50 + fVar21;
          pfVar2[4] = fVar47 + fVar26;
          pfVar2[5] = fVar51 + fVar22;
          pfVar2[6] = fVar48 + fVar27;
          pfVar2[7] = fVar52 + fVar23;
          pfVar2 = (float *)(param_1 + (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar8 << 5) + lVar10);
          *pfVar2 = fVar45 - fVar24;
          pfVar2[1] = fVar49 - fVar20;
          pfVar2[2] = fVar46 - fVar25;
          pfVar2[3] = fVar50 - fVar21;
          pfVar2[4] = fVar47 - fVar26;
          pfVar2[5] = fVar51 - fVar22;
          pfVar2[6] = fVar48 - fVar27;
          pfVar2[7] = fVar52 - fVar23;
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x3fffffff) >> 0x1d) &
                                        0xffffffe000000000 | (ulong)(param_5 << 2) << 5) + lVar10);
          *pfVar2 = fVar69 + fVar37;
          pfVar2[1] = fVar73 + fVar64;
          pfVar2[2] = fVar70 + fVar61;
          pfVar2[3] = fVar74 + fVar65;
          pfVar2[4] = fVar71 + fVar62;
          pfVar2[5] = fVar75 + fVar66;
          pfVar2[6] = fVar72 + fVar63;
          pfVar2[7] = fVar76 + fVar67;
          param_3 = param_3 + 1;
          lVar10 = lVar10 + 0x20;
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
        param_1 = param_1 + lVar10;
        param_2 = param_2 + lVar10;
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)(param_5 << 2) * 0x20;
      iVar7 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
  return;
}



/* Entry: 109880018; end: 1098800b3;  */

void FUN_109880018(float *param_1,float *param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
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
  
  if (0 < param_4) {
    do {
      puVar4 = param_3;
      uVar5 = param_5 + 1;
      if (0 < (int)param_5) {
        do {
          pfVar2 = (float *)((long)param_2 +
                            (-(ulong)((uint)(param_6 / 2) >> 0x1f) & 0xffffffe000000000 |
                            (ulong)(uint)(param_6 / 2) << 5));
          fVar6 = *param_2;
          fVar10 = param_2[1];
          fVar7 = param_2[2];
          fVar11 = param_2[3];
          fVar8 = param_2[4];
          fVar12 = param_2[5];
          fVar9 = param_2[6];
          fVar13 = param_2[7];
          param_2 = param_2 + 8;
          param_3 = puVar4 + 1;
          fVar22 = (float)*puVar4;
          fVar14 = (float)((ulong)*puVar4 >> 0x20);
          fVar15 = *pfVar2 * fVar22 + pfVar2[1] * fVar14;
          fVar16 = pfVar2[2] * fVar22 + pfVar2[3] * fVar14;
          fVar17 = pfVar2[4] * fVar22 + pfVar2[5] * fVar14;
          fVar18 = pfVar2[6] * fVar22 + pfVar2[7] * fVar14;
          fVar19 = *pfVar2 * fVar14 - pfVar2[1] * fVar22;
          fVar20 = pfVar2[2] * fVar14 - pfVar2[3] * fVar22;
          fVar21 = pfVar2[4] * fVar14 - pfVar2[5] * fVar22;
          fVar22 = pfVar2[6] * fVar14 - pfVar2[7] * fVar22;
          pfVar2 = (float *)((long)param_1 +
                            (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 | (ulong)param_5 << 5));
          *param_1 = fVar6 + fVar15;
          param_1[1] = -(fVar19 - fVar10);
          param_1[2] = fVar7 + fVar16;
          param_1[3] = -(fVar20 - fVar11);
          param_1[4] = fVar8 + fVar17;
          param_1[5] = -(fVar21 - fVar12);
          param_1[6] = fVar9 + fVar18;
          param_1[7] = -(fVar22 - fVar13);
          param_1 = param_1 + 8;
          *pfVar2 = fVar6 - fVar15;
          pfVar2[1] = -(-fVar10 - fVar19);
          pfVar2[2] = fVar7 - fVar16;
          pfVar2[3] = -(-fVar11 - fVar20);
          pfVar2[4] = fVar8 - fVar17;
          pfVar2[5] = -(-fVar12 - fVar21);
          pfVar2[6] = fVar9 - fVar18;
          pfVar2[7] = -(-fVar13 - fVar22);
          uVar5 = uVar5 - 1;
          puVar4 = param_3;
        } while (1 < uVar5);
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)param_5 * 8;
      iVar3 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar3;
    } while (iVar3 != 0 && bVar1);
  }
  return;
}



/* Entry: 1098800b4; end: 10988020b;  */

void FUN_1098800b4(long param_1,long param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  if (0 < param_4) {
    uVar7 = param_6 / 3;
    do {
      if (0 < (int)param_5) {
        lVar9 = 0;
        uVar8 = param_5 + 1;
        do {
          pfVar2 = (float *)(param_2 + lVar9);
          fVar13 = pfVar2[1];
          fVar10 = pfVar2[2];
          fVar14 = pfVar2[3];
          fVar11 = pfVar2[4];
          fVar15 = pfVar2[5];
          fVar12 = pfVar2[6];
          fVar16 = pfVar2[7];
          pfVar3 = (float *)(param_2 + (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar7 << 5) + lVar9);
          pfVar4 = (float *)(param_2 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000
                                       | (ulong)(uVar7 * 2) << 5) + lVar9);
          pfVar5 = (float *)(param_1 + lVar9);
          fVar17 = (float)*param_3;
          fVar18 = (float)((ulong)*param_3 >> 0x20);
          fVar41 = *pfVar3 * fVar17 + pfVar3[1] * fVar18;
          fVar42 = pfVar3[2] * fVar17 + pfVar3[3] * fVar18;
          fVar43 = pfVar3[4] * fVar17 + pfVar3[5] * fVar18;
          fVar44 = pfVar3[6] * fVar17 + pfVar3[7] * fVar18;
          fVar45 = *pfVar3 * fVar18 - pfVar3[1] * fVar17;
          fVar46 = pfVar3[2] * fVar18 - pfVar3[3] * fVar17;
          fVar47 = pfVar3[4] * fVar18 - pfVar3[5] * fVar17;
          fVar48 = pfVar3[6] * fVar18 - pfVar3[7] * fVar17;
          fVar17 = (float)param_3[(int)param_5];
          fVar18 = (float)((ulong)param_3[(int)param_5] >> 0x20);
          fVar21 = *pfVar4 * fVar17 + pfVar4[1] * fVar18;
          fVar22 = pfVar4[2] * fVar17 + pfVar4[3] * fVar18;
          fVar23 = pfVar4[4] * fVar17 + pfVar4[5] * fVar18;
          fVar24 = pfVar4[6] * fVar17 + pfVar4[7] * fVar18;
          fVar33 = *pfVar4 * fVar18 - pfVar4[1] * fVar17;
          fVar35 = pfVar4[2] * fVar18 - pfVar4[3] * fVar17;
          fVar37 = pfVar4[4] * fVar18 - pfVar4[5] * fVar17;
          fVar39 = pfVar4[6] * fVar18 - pfVar4[7] * fVar17;
          fVar17 = fVar41 + fVar21;
          fVar18 = fVar42 + fVar22;
          fVar19 = fVar43 + fVar23;
          fVar20 = fVar44 + fVar24;
          fVar25 = fVar45 + fVar33;
          fVar26 = fVar46 + fVar35;
          fVar27 = fVar47 + fVar37;
          fVar28 = fVar48 + fVar39;
          fVar34 = *pfVar2 - fVar17 * 0.5;
          fVar36 = fVar10 - fVar18 * 0.5;
          fVar38 = fVar11 - fVar19 * 0.5;
          fVar40 = fVar12 - fVar20 * 0.5;
          fVar29 = -fVar13 - fVar25 * 0.5;
          fVar30 = -fVar14 - fVar26 * 0.5;
          fVar31 = -fVar15 - fVar27 * 0.5;
          fVar32 = -fVar16 - fVar28 * 0.5;
          fVar21 = (fVar41 - fVar21) * -0.8660254;
          fVar22 = (fVar42 - fVar22) * -0.8660254;
          fVar23 = (fVar43 - fVar23) * -0.8660254;
          fVar24 = (fVar44 - fVar24) * -0.8660254;
          fVar33 = (fVar45 - fVar33) * -0.8660254;
          fVar35 = (fVar46 - fVar35) * -0.8660254;
          fVar37 = (fVar47 - fVar37) * -0.8660254;
          fVar39 = (fVar48 - fVar39) * -0.8660254;
          *pfVar5 = *pfVar2 + fVar17;
          pfVar5[1] = -(fVar25 - fVar13);
          pfVar5[2] = fVar10 + fVar18;
          pfVar5[3] = -(fVar26 - fVar14);
          pfVar5[4] = fVar11 + fVar19;
          pfVar5[5] = -(fVar27 - fVar15);
          pfVar5[6] = fVar12 + fVar20;
          pfVar5[7] = -(fVar28 - fVar16);
          pfVar2 = (float *)(param_1 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)param_5 << 5) + lVar9);
          *pfVar2 = fVar34 - fVar33;
          pfVar2[1] = -(fVar21 + fVar29);
          pfVar2[2] = fVar36 - fVar35;
          pfVar2[3] = -(fVar22 + fVar30);
          pfVar2[4] = fVar38 - fVar37;
          pfVar2[5] = -(fVar23 + fVar31);
          pfVar2[6] = fVar40 - fVar39;
          pfVar2[7] = -(fVar24 + fVar32);
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) &
                                        0xffffffe000000000 | (ulong)(param_5 << 1) << 5) + lVar9);
          *pfVar2 = fVar33 + fVar34;
          pfVar2[1] = -(fVar29 - fVar21);
          pfVar2[2] = fVar35 + fVar36;
          pfVar2[3] = -(fVar30 - fVar22);
          pfVar2[4] = fVar37 + fVar38;
          pfVar2[5] = -(fVar31 - fVar23);
          pfVar2[6] = fVar39 + fVar40;
          pfVar2[7] = -(fVar32 - fVar24);
          param_3 = param_3 + 1;
          lVar9 = lVar9 + 0x20;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
        param_1 = param_1 + lVar9;
        param_2 = param_2 + lVar9;
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)(param_5 << 1) * 0x20;
      iVar6 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar6;
    } while (iVar6 != 0 && bVar1);
  }
  return;
}



/* Entry: 10988020c; end: 10988039b;  */

void FUN_10988020c(long param_1,long param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (0 < param_4) {
    iVar8 = param_6 + 3;
    if (-1 < param_6) {
      iVar8 = param_6;
    }
    uVar7 = iVar8 >> 2;
    uVar9 = param_5 * 3;
    do {
      if (0 < (int)param_5) {
        lVar10 = 0;
        uVar11 = param_5 + 1;
        do {
          pfVar2 = (float *)(param_2 + lVar10);
          pfVar3 = (float *)(param_2 + (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar7 << 5) + lVar10);
          pfVar4 = (float *)(param_2 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000
                                       | (ulong)(uVar7 * 2) << 5) + lVar10);
          pfVar5 = (float *)(param_2 + (-(ulong)(uVar7 * 3 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)(uVar7 * 3) << 5) + lVar10);
          pfVar6 = (float *)(param_1 + lVar10);
          fVar16 = (float)*param_3;
          fVar18 = (float)((ulong)*param_3 >> 0x20);
          fVar44 = *pfVar3 * fVar16 + pfVar3[1] * fVar18;
          fVar45 = pfVar3[2] * fVar16 + pfVar3[3] * fVar18;
          fVar46 = pfVar3[4] * fVar16 + pfVar3[5] * fVar18;
          fVar47 = pfVar3[6] * fVar16 + pfVar3[7] * fVar18;
          fVar48 = *pfVar3 * fVar18 - pfVar3[1] * fVar16;
          fVar49 = pfVar3[2] * fVar18 - pfVar3[3] * fVar16;
          fVar50 = pfVar3[4] * fVar18 - pfVar3[5] * fVar16;
          fVar51 = pfVar3[6] * fVar18 - pfVar3[7] * fVar16;
          fVar43 = (float)param_3[(int)param_5];
          fVar12 = (float)((ulong)param_3[(int)param_5] >> 0x20);
          fVar16 = *pfVar4 * fVar43 + pfVar4[1] * fVar12;
          fVar18 = pfVar4[2] * fVar43 + pfVar4[3] * fVar12;
          fVar20 = pfVar4[4] * fVar43 + pfVar4[5] * fVar12;
          fVar22 = pfVar4[6] * fVar43 + pfVar4[7] * fVar12;
          fVar40 = *pfVar4 * fVar12 - pfVar4[1] * fVar43;
          fVar41 = pfVar4[2] * fVar12 - pfVar4[3] * fVar43;
          fVar42 = pfVar4[4] * fVar12 - pfVar4[5] * fVar43;
          fVar43 = pfVar4[6] * fVar12 - pfVar4[7] * fVar43;
          fVar12 = (float)param_3[(int)(param_5 << 1)];
          fVar13 = (float)((ulong)param_3[(int)(param_5 << 1)] >> 0x20);
          fVar24 = *pfVar5 * fVar12 + pfVar5[1] * fVar13;
          fVar25 = pfVar5[2] * fVar12 + pfVar5[3] * fVar13;
          fVar26 = pfVar5[4] * fVar12 + pfVar5[5] * fVar13;
          fVar27 = pfVar5[6] * fVar12 + pfVar5[7] * fVar13;
          fVar28 = *pfVar5 * fVar13 - pfVar5[1] * fVar12;
          fVar29 = pfVar5[2] * fVar13 - pfVar5[3] * fVar12;
          fVar30 = pfVar5[4] * fVar13 - pfVar5[5] * fVar12;
          fVar31 = pfVar5[6] * fVar13 - pfVar5[7] * fVar12;
          fVar12 = *pfVar2 + fVar16;
          fVar13 = pfVar2[2] + fVar18;
          fVar14 = pfVar2[4] + fVar20;
          fVar15 = pfVar2[6] + fVar22;
          fVar32 = fVar40 - pfVar2[1];
          fVar33 = fVar41 - pfVar2[3];
          fVar34 = fVar42 - pfVar2[5];
          fVar35 = fVar43 - pfVar2[7];
          fVar16 = *pfVar2 - fVar16;
          fVar18 = pfVar2[2] - fVar18;
          fVar20 = pfVar2[4] - fVar20;
          fVar22 = pfVar2[6] - fVar22;
          fVar40 = -pfVar2[1] - fVar40;
          fVar41 = -pfVar2[3] - fVar41;
          fVar42 = -pfVar2[5] - fVar42;
          fVar43 = -pfVar2[7] - fVar43;
          fVar17 = fVar44 + fVar24;
          fVar19 = fVar45 + fVar25;
          fVar21 = fVar46 + fVar26;
          fVar23 = fVar47 + fVar27;
          fVar36 = fVar48 + fVar28;
          fVar37 = fVar49 + fVar29;
          fVar38 = fVar50 + fVar30;
          fVar39 = fVar51 + fVar31;
          fVar44 = fVar44 - fVar24;
          fVar45 = fVar45 - fVar25;
          fVar46 = fVar46 - fVar26;
          fVar47 = fVar47 - fVar27;
          fVar48 = fVar48 - fVar28;
          fVar49 = fVar49 - fVar29;
          fVar50 = fVar50 - fVar30;
          fVar51 = fVar51 - fVar31;
          *pfVar6 = fVar12 + fVar17;
          pfVar6[1] = -(fVar32 + fVar36);
          pfVar6[2] = fVar13 + fVar19;
          pfVar6[3] = -(fVar33 + fVar37);
          pfVar6[4] = fVar14 + fVar21;
          pfVar6[5] = -(fVar34 + fVar38);
          pfVar6[6] = fVar15 + fVar23;
          pfVar6[7] = -(fVar35 + fVar39);
          pfVar2 = (float *)(param_1 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)param_5 << 5) + lVar10);
          *pfVar2 = fVar16 + fVar48;
          pfVar2[1] = -(fVar40 - fVar44);
          pfVar2[2] = fVar18 + fVar49;
          pfVar2[3] = -(fVar41 - fVar45);
          pfVar2[4] = fVar20 + fVar50;
          pfVar2[5] = -(fVar42 - fVar46);
          pfVar2[6] = fVar22 + fVar51;
          pfVar2[7] = -(fVar43 - fVar47);
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) &
                                        0xffffffe000000000 | (ulong)(param_5 << 1) << 5) + lVar10);
          *pfVar2 = fVar12 - fVar17;
          pfVar2[1] = -(fVar32 - fVar36);
          pfVar2[2] = fVar13 - fVar19;
          pfVar2[3] = -(fVar33 - fVar37);
          pfVar2[4] = fVar14 - fVar21;
          pfVar2[5] = -(fVar34 - fVar38);
          pfVar2[6] = fVar15 - fVar23;
          pfVar2[7] = -(fVar35 - fVar39);
          pfVar2 = (float *)(param_1 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar9 << 5) + lVar10);
          *pfVar2 = fVar16 - fVar48;
          pfVar2[1] = -(fVar40 + fVar44);
          pfVar2[2] = fVar18 - fVar49;
          pfVar2[3] = -(fVar41 + fVar45);
          pfVar2[4] = fVar20 - fVar50;
          pfVar2[5] = -(fVar42 + fVar46);
          pfVar2[6] = fVar22 - fVar51;
          pfVar2[7] = -(fVar43 + fVar47);
          param_3 = param_3 + 1;
          lVar10 = lVar10 + 0x20;
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
        param_1 = param_1 + lVar10;
        param_2 = param_2 + lVar10;
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)uVar9 * 0x20;
      iVar8 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar8;
    } while (iVar8 != 0 && bVar1);
  }
  return;
}



/* Entry: 10988039c; end: 10988063f;  */

void FUN_10988039c(long param_1,long param_2,undefined8 *param_3,int param_4,uint param_5,
                  int param_6)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  
  if (0 < param_4) {
    uVar9 = param_6 / 5;
    uVar8 = param_5 * 3;
    do {
      if (0 < (int)param_5) {
        lVar10 = 0;
        uVar11 = param_5 + 1;
        do {
          pfVar2 = (float *)(param_2 + lVar10);
          fVar12 = *pfVar2;
          fVar16 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar17 = pfVar2[3];
          fVar14 = pfVar2[4];
          fVar18 = pfVar2[5];
          fVar15 = pfVar2[6];
          fVar19 = pfVar2[7];
          pfVar2 = (float *)(param_2 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar9 << 5) + lVar10);
          pfVar3 = (float *)(param_2 + (-(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000
                                       | (ulong)(uVar9 * 2) << 5) + lVar10);
          pfVar4 = (float *)(param_1 + lVar10);
          pfVar5 = (float *)(param_2 + (-(ulong)(uVar9 * 3 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)(uVar9 * 3) << 5) + lVar10);
          pfVar6 = (float *)(param_2 + (-(ulong)((uVar9 & 0x3fffffff) >> 0x1d) & 0xffffffe000000000
                                       | (ulong)(uVar9 * 4) << 5) + lVar10);
          fVar20 = -fVar16;
          fVar21 = -fVar17;
          fVar22 = -fVar18;
          fVar23 = -fVar19;
          fVar48 = (float)*param_3;
          fVar49 = (float)((ulong)*param_3 >> 0x20);
          fVar24 = *pfVar2 * fVar48 + pfVar2[1] * fVar49;
          fVar25 = pfVar2[2] * fVar48 + pfVar2[3] * fVar49;
          fVar26 = pfVar2[4] * fVar48 + pfVar2[5] * fVar49;
          fVar27 = pfVar2[6] * fVar48 + pfVar2[7] * fVar49;
          fVar28 = *pfVar2 * fVar49 - pfVar2[1] * fVar48;
          fVar29 = pfVar2[2] * fVar49 - pfVar2[3] * fVar48;
          fVar30 = pfVar2[4] * fVar49 - pfVar2[5] * fVar48;
          fVar31 = pfVar2[6] * fVar49 - pfVar2[7] * fVar48;
          fVar48 = (float)param_3[(int)param_5];
          fVar49 = (float)((ulong)param_3[(int)param_5] >> 0x20);
          fVar32 = *pfVar3 * fVar48 + pfVar3[1] * fVar49;
          fVar33 = pfVar3[2] * fVar48 + pfVar3[3] * fVar49;
          fVar34 = pfVar3[4] * fVar48 + pfVar3[5] * fVar49;
          fVar35 = pfVar3[6] * fVar48 + pfVar3[7] * fVar49;
          fVar36 = *pfVar3 * fVar49 - pfVar3[1] * fVar48;
          fVar37 = pfVar3[2] * fVar49 - pfVar3[3] * fVar48;
          fVar38 = pfVar3[4] * fVar49 - pfVar3[5] * fVar48;
          fVar39 = pfVar3[6] * fVar49 - pfVar3[7] * fVar48;
          fVar48 = (float)param_3[(int)(param_5 << 1)];
          fVar49 = (float)((ulong)param_3[(int)(param_5 << 1)] >> 0x20);
          fVar40 = *pfVar5 * fVar48 + pfVar5[1] * fVar49;
          fVar41 = pfVar5[2] * fVar48 + pfVar5[3] * fVar49;
          fVar42 = pfVar5[4] * fVar48 + pfVar5[5] * fVar49;
          fVar43 = pfVar5[6] * fVar48 + pfVar5[7] * fVar49;
          fVar44 = *pfVar5 * fVar49 - pfVar5[1] * fVar48;
          fVar45 = pfVar5[2] * fVar49 - pfVar5[3] * fVar48;
          fVar46 = pfVar5[4] * fVar49 - pfVar5[5] * fVar48;
          fVar47 = pfVar5[6] * fVar49 - pfVar5[7] * fVar48;
          fVar55 = (float)param_3[(int)uVar8];
          fVar56 = (float)((ulong)param_3[(int)uVar8] >> 0x20);
          fVar48 = *pfVar6 * fVar55 + pfVar6[1] * fVar56;
          fVar49 = pfVar6[2] * fVar55 + pfVar6[3] * fVar56;
          fVar50 = pfVar6[4] * fVar55 + pfVar6[5] * fVar56;
          fVar51 = pfVar6[6] * fVar55 + pfVar6[7] * fVar56;
          fVar52 = *pfVar6 * fVar56 - pfVar6[1] * fVar55;
          fVar53 = pfVar6[2] * fVar56 - pfVar6[3] * fVar55;
          fVar54 = pfVar6[4] * fVar56 - pfVar6[5] * fVar55;
          fVar55 = pfVar6[6] * fVar56 - pfVar6[7] * fVar55;
          fVar56 = fVar24 + fVar48;
          fVar58 = fVar25 + fVar49;
          fVar60 = fVar26 + fVar50;
          fVar62 = fVar27 + fVar51;
          fVar64 = fVar28 + fVar52;
          fVar65 = fVar29 + fVar53;
          fVar66 = fVar30 + fVar54;
          fVar67 = fVar31 + fVar55;
          fVar68 = fVar32 + fVar40;
          fVar69 = fVar33 + fVar41;
          fVar70 = fVar34 + fVar42;
          fVar71 = fVar35 + fVar43;
          fVar72 = fVar36 + fVar44;
          fVar73 = fVar37 + fVar45;
          fVar74 = fVar38 + fVar46;
          fVar75 = fVar39 + fVar47;
          fVar76 = fVar12 + fVar56 * 0.309017 + fVar68 * -0.809017;
          fVar77 = fVar13 + fVar58 * 0.309017 + fVar69 * -0.809017;
          fVar78 = fVar14 + fVar60 * 0.309017 + fVar70 * -0.809017;
          fVar79 = fVar15 + fVar62 * 0.309017 + fVar71 * -0.809017;
          fVar57 = fVar20 + fVar64 * 0.309017 + fVar72 * -0.809017;
          fVar59 = fVar21 + fVar65 * 0.309017 + fVar73 * -0.809017;
          fVar61 = fVar22 + fVar66 * 0.309017 + fVar74 * -0.809017;
          fVar63 = fVar23 + fVar67 * 0.309017 + fVar75 * -0.809017;
          fVar24 = fVar24 - fVar48;
          fVar25 = fVar25 - fVar49;
          fVar26 = fVar26 - fVar50;
          fVar27 = fVar27 - fVar51;
          fVar28 = fVar28 - fVar52;
          fVar29 = fVar29 - fVar53;
          fVar30 = fVar30 - fVar54;
          fVar31 = fVar31 - fVar55;
          fVar48 = fVar20 + fVar64 * -0.809017 + fVar72 * 0.309017;
          fVar49 = fVar21 + fVar65 * -0.809017 + fVar73 * 0.309017;
          fVar50 = fVar22 + fVar66 * -0.809017 + fVar74 * 0.309017;
          fVar51 = fVar23 + fVar67 * -0.809017 + fVar75 * 0.309017;
          fVar32 = fVar32 - fVar40;
          fVar33 = fVar33 - fVar41;
          fVar34 = fVar34 - fVar42;
          fVar35 = fVar35 - fVar43;
          fVar36 = fVar36 - fVar44;
          fVar37 = fVar37 - fVar45;
          fVar38 = fVar38 - fVar46;
          fVar39 = fVar39 - fVar47;
          fVar20 = fVar12 + fVar56 * -0.809017 + fVar68 * 0.309017;
          fVar21 = fVar13 + fVar58 * -0.809017 + fVar69 * 0.309017;
          fVar22 = fVar14 + fVar60 * -0.809017 + fVar70 * 0.309017;
          fVar23 = fVar15 + fVar62 * -0.809017 + fVar71 * 0.309017;
          fVar40 = fVar28 * -0.95105654 + fVar36 * -0.58778524;
          fVar41 = fVar29 * -0.95105654 + fVar37 * -0.58778524;
          fVar42 = fVar30 * -0.95105654 + fVar38 * -0.58778524;
          fVar43 = fVar31 * -0.95105654 + fVar39 * -0.58778524;
          fVar44 = fVar24 * 0.95105654 - fVar32 * -0.58778524;
          fVar45 = fVar25 * 0.95105654 - fVar33 * -0.58778524;
          fVar46 = fVar26 * 0.95105654 - fVar34 * -0.58778524;
          fVar47 = fVar27 * 0.95105654 - fVar35 * -0.58778524;
          fVar28 = fVar28 * 0.58778524 + fVar36 * -0.95105654;
          fVar29 = fVar29 * 0.58778524 + fVar37 * -0.95105654;
          fVar30 = fVar30 * 0.58778524 + fVar38 * -0.95105654;
          fVar31 = fVar31 * 0.58778524 + fVar39 * -0.95105654;
          fVar24 = fVar24 * -0.58778524 - fVar32 * -0.95105654;
          fVar25 = fVar25 * -0.58778524 - fVar33 * -0.95105654;
          fVar26 = fVar26 * -0.58778524 - fVar34 * -0.95105654;
          fVar27 = fVar27 * -0.58778524 - fVar35 * -0.95105654;
          *pfVar4 = fVar68 + fVar12 + fVar56;
          pfVar4[1] = -(fVar72 + (fVar64 - fVar16));
          pfVar4[2] = fVar69 + fVar13 + fVar58;
          pfVar4[3] = -(fVar73 + (fVar65 - fVar17));
          pfVar4[4] = fVar70 + fVar14 + fVar60;
          pfVar4[5] = -(fVar74 + (fVar66 - fVar18));
          pfVar4[6] = fVar71 + fVar15 + fVar62;
          pfVar4[7] = -(fVar75 + (fVar67 - fVar19));
          pfVar2 = (float *)(param_1 + (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)param_5 << 5) + lVar10);
          *pfVar2 = fVar76 - fVar40;
          pfVar2[1] = -(fVar57 - fVar44);
          pfVar2[2] = fVar77 - fVar41;
          pfVar2[3] = -(fVar59 - fVar45);
          pfVar2[4] = fVar78 - fVar42;
          pfVar2[5] = -(fVar61 - fVar46);
          pfVar2[6] = fVar79 - fVar43;
          pfVar2[7] = -(fVar63 - fVar47);
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x7fffffff) >> 0x1e) &
                                        0xffffffe000000000 | (ulong)(param_5 << 1) << 5) + lVar10);
          *pfVar2 = fVar20 + fVar28;
          pfVar2[1] = -(fVar48 + fVar24);
          pfVar2[2] = fVar21 + fVar29;
          pfVar2[3] = -(fVar49 + fVar25);
          pfVar2[4] = fVar22 + fVar30;
          pfVar2[5] = -(fVar50 + fVar26);
          pfVar2[6] = fVar23 + fVar31;
          pfVar2[7] = -(fVar51 + fVar27);
          pfVar2 = (float *)(param_1 + (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 |
                                       (ulong)uVar8 << 5) + lVar10);
          *pfVar2 = fVar20 - fVar28;
          pfVar2[1] = -(fVar48 - fVar24);
          pfVar2[2] = fVar21 - fVar29;
          pfVar2[3] = -(fVar49 - fVar25);
          pfVar2[4] = fVar22 - fVar30;
          pfVar2[5] = -(fVar50 - fVar26);
          pfVar2[6] = fVar23 - fVar31;
          pfVar2[7] = -(fVar51 - fVar27);
          pfVar2 = (float *)(param_1 + (-(ulong)((param_5 & 0x3fffffff) >> 0x1d) &
                                        0xffffffe000000000 | (ulong)(param_5 << 2) << 5) + lVar10);
          *pfVar2 = fVar76 + fVar40;
          pfVar2[1] = -(fVar57 + fVar44);
          pfVar2[2] = fVar77 + fVar41;
          pfVar2[3] = -(fVar59 + fVar45);
          pfVar2[4] = fVar78 + fVar42;
          pfVar2[5] = -(fVar61 + fVar46);
          pfVar2[6] = fVar79 + fVar43;
          pfVar2[7] = -(fVar63 + fVar47);
          param_3 = param_3 + 1;
          lVar10 = lVar10 + 0x20;
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
        param_1 = param_1 + lVar10;
        param_2 = param_2 + lVar10;
      }
      param_3 = param_3 + -(long)(int)param_5;
      param_1 = param_1 + (long)(int)(param_5 << 2) * 0x20;
      iVar7 = param_4 + -1;
      bVar1 = 0 < param_4;
      param_4 = iVar7;
    } while (iVar7 != 0 && bVar1);
  }
  return;
}



/* Entry: 109880640; end: 109880647;  */

void FUN_109880640(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 109880648; end: 1098807a7;  */

void FUN_109880648(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&UNK_10f581e4b);
  (**(code **)(*param_2 + 0xd8))(&ppuStack_60,param_2,param_3);
  pppuVar1 = (undefined8 ***)ppuStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    pppuVar1 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_48,pppuVar1,uStack_58);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppuStack_60);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_48,&UNK_10f581e72,0x23);
  uVar3 = 0x60;
  ___cxa_allocate_exception(0x60);
  if (cStack_31 < '\0') {
    func_0x000107c3192c(&uStack_80,uStack_48,uStack_40);
  }
  else {
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
  }
  FUN_1098807a8(uVar3,param_2,&uStack_80);
  ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10988073c);
  (*pcVar2)();
}



/* Entry: 1098807a8; end: 109880bb7;  */

undefined8 * FUN_1098807a8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *apuStack_a8 [3];
  undefined4 auStack_90 [2];
  undefined8 *puStack_88;
  int aiStack_78 [2];
  undefined8 *puStack_70;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110b165c0;
  param_1[5] = 0;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  param_1[8] = param_3[2];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_1[7];
  puVar2 = (undefined8 *)param_1[6];
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x47);
    puVar2 = param_1 + 6;
  }
  (**(code **)(*param_2 + 0x128))(apuStack_a8,param_2,puVar2,uVar1);
  puVar2 = apuStack_a8[0];
  auStack_90[0] = 6;
  puStack_88 = apuStack_a8[0];
  apuStack_a8[0] = (undefined8 *)0x0;
  FUN_1098860e4(aiStack_78,param_2,&DAT_10f685520,auStack_90);
  FUN_1098851fc(param_1,param_2,aiStack_78);
  if ((3 < aiStack_78[0]) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
  }
  if (apuStack_a8[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_a8[0])();
  }
  return param_1;
}



/* Entry: 109880bb8; end: 109880bd3;  */

void FUN_109880bb8(undefined8 param_1)

{
  FUN_109886730(param_1,&PTR_PTR_110b165d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 109880bd4; end: 109880bdb;  */

undefined8 FUN_109880bd4(void)

{
  return 1;
}



/* Entry: 109880bdc; end: 109880cb3;  */

undefined8 **
FUN_109880bdc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 **ppuVar1;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_80,param_5 + 1);
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,param_3,param_4,&uStack_88);
  ppuVar1 = apuStack_80;
  (*(code *)*apuStack_80[0])(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(apuStack_80);
  __Unwind_Resume(ppuVar1);
  return (undefined8 **)&PTR_PTR_1132e04b0;
}



/* Entry: 109880cb4; end: 109880cbf;  */

undefined ** FUN_109880cb4(void)

{
  return &PTR_PTR_1132e04b0;
}



/* Entry: 109880cc0; end: 109880eff;  */

void FUN_109880cc0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  int *piVar7;
  long *extraout_x8;
  undefined1 *puStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined8 auStack_f8 [3];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  int iStack_48;
  undefined4 uStack_44;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&iStack_48);
  FUN_109880f00(&iStack_58,&iStack_48,param_2,&UNK_10f581e96);
  FUN_1098811a4(&puStack_60,&iStack_58,param_2,"parse");
  if ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
  }
  if ((undefined8 *)CONCAT44(uStack_44,iStack_48) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_44,iStack_48))();
  }
  (**(code **)(*param_2 + 0x128))(&puStack_68,param_2,param_3,param_4);
  iStack_48 = 6;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x90))(param_2,puStack_68);
  iStack_58 = 0;
  ppuVar5 = &puStack_60;
  piVar7 = &iStack_58;
  plStack_40 = plVar2;
  (**(code **)(*param_2 + 0x2a8))(param_1,param_2,ppuVar5,piVar7,&iStack_48,1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
    (**(code **)*plStack_40)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  puVar3 = puStack_60;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
    (**(code **)*plStack_40)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_109880f00;
  piVar4 = piVar7;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _strlen(piVar7);
  (*(code *)(*ppuVar5)[0x24])(&puStack_e0,ppuVar5,piVar7,piVar4);
  (*(code *)(*ppuVar5)[0x35])(aiStack_b0,ppuVar5,puVar3,&puStack_e0);
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  if (aiStack_b0[0] == 7) {
    (*(code *)(*ppuVar5)[0x13])(ppuVar5,puStack_a8);
    *extraout_x8 = (long)ppuVar5;
    if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a8)();
    }
    return;
  }
  uVar6 = 0x60;
  ___cxa_allocate_exception(0x60);
  func_0x000107c31940(auStack_128,&UNK_10f581fc9);
  FUN_109259240(auStack_110,auStack_128,piVar7);
  FUN_109259240(auStack_f8,auStack_110,&UNK_10f581fe9);
  FUN_109884518(&puStack_140,aiStack_b0,ppuVar5);
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    puStack_140 = (undefined1 *)&puStack_140;
  }
  puVar3 = auStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,puStack_140,uStack_138);
  uStack_d8 = puVar3[1];
  puStack_e0 = (undefined8 *)*puVar3;
  uStack_d0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_109259240(auStack_c8,&puStack_e0,&UNK_10f581fef);
  FUN_1098807a8(uVar6,ppuVar5,auStack_c8);
  ___cxa_throw(uVar6,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098810a4);
  (*pcVar1)();
}



/* Entry: 109880f00; end: 1098811a3;  */

void FUN_109880f00(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  uVar2 = param_4;
  _strlen(param_4);
  (**(code **)(*param_3 + 0x120))(&puStack_70,param_3,param_4,uVar2);
  (**(code **)(*param_3 + 0x1a8))(aiStack_40,param_3,param_2,&puStack_70);
  if (puStack_70 != (undefined8 *)0x0) {
    (**(code **)*puStack_70)();
  }
  if (aiStack_40[0] != 7) {
    uVar2 = 0x60;
    ___cxa_allocate_exception(0x60);
    func_0x000107c31940(auStack_b8,&UNK_10f581fc9);
    FUN_109259240(auStack_a0,auStack_b8,param_4);
    FUN_109259240(auStack_88,auStack_a0,&UNK_10f581fe9);
    FUN_109884518(&puStack_d0,aiStack_40,param_3);
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
      puStack_d0 = (undefined1 *)&puStack_d0;
    }
    puVar3 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_d0,uStack_c8);
    uStack_68 = puVar3[1];
    puStack_70 = (undefined8 *)*puVar3;
    uStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109259240(auStack_58,&puStack_70,&UNK_10f581fef);
    FUN_1098807a8(uVar2,param_3,auStack_58);
    ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1098810a4);
    (*pcVar1)();
  }
  (**(code **)(*param_3 + 0x98))(param_3,puStack_38);
  *param_1 = param_3;
  if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 1098811a4; end: 1098813d7;  */

void FUN_1098811a4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  FUN_109880f00(&uStack_38);
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x228))(param_3,&uStack_38);
  if (((ulong)plVar2 & 1) == 0) {
    uVar3 = 0x60;
    ___cxa_allocate_exception(0x60);
    func_0x000107c31940(auStack_b8,&UNK_10f582004);
    FUN_109259240(auStack_a0,auStack_b8,param_4);
    FUN_109259240(auStack_88,auStack_a0,&UNK_10f581fe9);
    auStack_e0[0] = 7;
    uStack_d8 = uStack_38;
    uStack_38 = 0;
    FUN_109884518(&ppuStack_d0,auStack_e0,param_3);
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
      ppuStack_d0 = &ppuStack_d0;
    }
    puVar4 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,ppuStack_d0,uStack_c8);
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    uStack_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_109259240(auStack_50,&uStack_70,&UNK_10f582026);
    FUN_1098807a8(uVar3,param_3,auStack_50);
    ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1098812e8);
    (*pcVar1)();
  }
  *param_1 = uStack_38;
  return;
}



/* Entry: 1098813d8; end: 109881817;  */

void FUN_1098813d8(undefined8 *param_1,long ****param_2,ushort *param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long lVar11;
  undefined8 extraout_x8;
  ushort *puVar12;
  long lVar13;
  undefined8 *puStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long ***ppplStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long ***ppplStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar8 = param_2;
  if (param_4 != 0) {
    lVar13 = param_4 << 1;
    lVar11 = lVar13;
    puVar12 = param_3;
LAB_109881420:
    if (*puVar12 < 0x80) goto code_r0x00010988142c;
    func_0x000104c59120(&ppplStack_80,param_4 * 6 + 2,0);
    lVar11 = 0;
    pppplVar8 = (long ****)ppplStack_80;
    if (-1 < (long)uStack_70) {
      pppplVar8 = &ppplStack_80;
    }
    *(undefined1 *)pppplVar8 = 0x27;
    do {
      uVar3 = *param_3;
      pppplVar8 = (long ****)ppplStack_80;
      if (-1 < (long)uStack_70) {
        pppplVar8 = &ppplStack_80;
      }
      *(undefined1 *)((long)pppplVar8 + lVar11 + 1) = 0x5c;
      pppplVar8 = (long ****)ppplStack_80;
      if (-1 < (long)uStack_70) {
        pppplVar8 = &ppplStack_80;
      }
      *(undefined1 *)((long)pppplVar8 + lVar11 + 2) = 0x75;
      bVar5 = (byte)(uVar3 >> 8);
      bVar4 = bVar5 >> 4;
      bVar1 = bVar4 | 0x30;
      if (0x9fff < uVar3) {
        bVar1 = bVar4 + 0x37;
      }
      pppplVar8 = (long ****)ppplStack_80;
      if (-1 < (long)uStack_70) {
        pppplVar8 = &ppplStack_80;
      }
      *(byte *)((long)pppplVar8 + lVar11 + 3) = bVar1;
      uVar6 = uVar3 >> 8 & 0xf;
      bVar1 = bVar5 & 0xf | 0x30;
      if (9 < uVar6) {
        bVar1 = (char)uVar6 + 0x37;
      }
      pppplVar8 = (long ****)ppplStack_80;
      if (-1 < (long)uStack_70) {
        pppplVar8 = &ppplStack_80;
      }
      *(byte *)((long)pppplVar8 + lVar11 + 4) = bVar1;
      uVar6 = uVar3 >> 4 & 0xf;
      bVar1 = (byte)(uVar3 >> 4) & 0xf | 0x30;
      if (9 < uVar6) {
        bVar1 = (char)uVar6 + 0x37;
      }
      pppplVar8 = (long ****)ppplStack_80;
      if (-1 < (long)uStack_70) {
        pppplVar8 = &ppplStack_80;
      }
      *(byte *)((long)pppplVar8 + lVar11 + 5) = bVar1;
      bVar1 = (byte)uVar3 & 0xf | 0x30;
      if (9 < (uVar3 & 0xf)) {
        bVar1 = (char)(uVar3 & 0xf) + 0x37;
      }
      pppplVar8 = (long ****)ppplStack_80;
      if (-1 < (long)uStack_70) {
        pppplVar8 = &ppplStack_80;
      }
      *(byte *)((long)pppplVar8 + lVar11 + 6) = bVar1;
      lVar11 = lVar11 + 6;
      param_4 = param_4 - 1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
    uVar2 = uStack_78;
    pppplVar8 = (long ****)ppplStack_80;
    if (-1 < (long)uStack_70) {
      uVar2 = uStack_70 >> 0x38;
      pppplVar8 = &ppplStack_80;
    }
    *(undefined1 *)((long)pppplVar8 + (uVar2 - 1)) = 0x27;
    (*(code *)(*param_2)[6])(&ppplStack_a0,param_2);
    FUN_1098811a4(&puStack_98,&ppplStack_a0,param_2,&UNK_10f4916a6);
    uVar2 = uStack_78;
    pppplVar8 = (long ****)ppplStack_80;
    if (-1 < (long)uStack_70) {
      uVar2 = uStack_70 >> 0x38;
      pppplVar8 = &ppplStack_80;
    }
    (*(code *)(*param_2)[0x25])(&puStack_50,param_2,pppplVar8,uVar2);
    aiStack_58[0] = 6;
    aiStack_68[0] = 0;
    (*(code *)(*param_2)[0x55])(auStack_90,param_2,&puStack_98,aiStack_68,aiStack_58,1);
    if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
      (**(code **)*puStack_60)();
    }
    if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
      (**(code **)*puStack_50)();
    }
    uVar7 = uStack_88;
    uStack_88 = 0;
    *param_1 = uVar7;
    if (puStack_98 != (undefined8 *)0x0) {
      (**(code **)*puStack_98)();
    }
    pppplVar8 = (long ****)ppplStack_a0;
    if ((long ****)ppplStack_a0 != (long ****)0x0) {
      (*(code *)**ppplStack_a0)();
    }
    goto LAB_10988172c;
  }
  uStack_70 = uStack_70 & 0xffffffffffffff;
  pppplVar10 = &ppplStack_80;
LAB_1098816fc:
  *(undefined1 *)pppplVar10 = 0;
  pppplVar10 = (long ****)ppplStack_80;
  if (-1 < (long)uStack_70) {
    pppplVar10 = &ppplStack_80;
  }
  (*(code *)(*param_2)[0x24])(param_1,param_2,pppplVar10,param_4);
LAB_10988172c:
  if ((long)uStack_70 < 0) {
    pppplVar8 = (long ****)ppplStack_80;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109881770:
  func_0x000104c4f6b8();
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  if ((long ****)ppplStack_a0 != (long ****)0x0) {
    (*(code *)**ppplStack_a0)();
  }
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppplStack_80);
  }
  pppplVar10 = pppplVar8;
  __Unwind_Resume();
  pcStack_a8 = FUN_109881818;
  ppplStack_c0 = (long ***)param_2;
  ppplStack_b8 = (long ***)pppplVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  (*(code *)(*pppplVar10)[0x26])(&puStack_c8);
  (*(code *)(*pppplVar10)[0x19])(extraout_x8,pppplVar10,&puStack_c8);
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
code_r0x00010988142c:
  lVar11 = lVar11 + -2;
  puVar12 = puVar12 + 1;
  if (lVar11 == 0) goto code_r0x000109881434;
  goto LAB_109881420;
code_r0x000109881434:
  if (0x7ffffffffffffff7 < param_4) goto LAB_109881770;
  if (param_4 < 0x17) {
    uStack_70 = CONCAT17((char)param_4,(undefined7)uStack_70);
    pppplVar9 = &ppplStack_80;
  }
  else {
    pppplVar10 = (long ****)0x19;
    if ((param_4 | 7) != 0x17) {
      pppplVar10 = (long ****)((param_4 | 7) + 1);
    }
    pppplVar9 = pppplVar10;
    __Znwm();
    uStack_70 = (ulong)pppplVar10 | 0x8000000000000000;
    ppplStack_80 = (long ***)pppplVar9;
    uStack_78 = param_4;
  }
  do {
    pppplVar10 = (long ****)((long)pppplVar9 + 1);
    *(char *)pppplVar9 = (char)*param_3;
    lVar13 = lVar13 + -2;
    pppplVar9 = pppplVar10;
    param_3 = param_3 + 1;
  } while (lVar13 != 0);
  goto LAB_1098816fc;
}



/* Entry: 109881818; end: 10988189b;  */

void FUN_109881818(undefined8 param_1,long *param_2)

{
  undefined8 *puStack_28;
  
  (**(code **)(*param_2 + 0x130))(&puStack_28);
  (**(code **)(*param_2 + 200))(param_1,param_2,&puStack_28);
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10988189c; end: 109881907;  */

void FUN_10988189c(undefined8 param_1,long *param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  (**(code **)(*param_2 + 0xd8))(auStack_38);
  FUN_109881908(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 109881908; end: 109881adb;  */

void FUN_109881908(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar8 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar3 = (ulong)param_2[0x17];
    pbVar8 = param_2;
  }
  pbVar1 = pbVar8 + uVar3;
  do {
    if (pbVar1 <= pbVar8) {
      return;
    }
    uVar2 = (uint)*pbVar8;
    if ((char)*pbVar8 < '\0') {
      if ((uVar2 & 0xe0) == 0xc0) {
        pbVar9 = pbVar8 + 1;
        bVar4 = *pbVar9;
        if (((bVar4 & 0xc0) == 0x80) && (pbVar9 = pbVar8 + 2, 0x7f < (uVar2 & 0x1f) << 6)) {
          uVar7 = bVar4 & 0x3f | (uVar2 & 0x1f) << 6;
        }
        else {
LAB_109881a90:
          uVar7 = 0xfffd;
        }
      }
      else if ((uVar2 & 0xf0) == 0xe0) {
        pbVar9 = pbVar8 + 1;
        bVar4 = *pbVar9;
        uVar7 = 0xfffd;
        if (((char)bVar4 < 0) && (((uint)(int)(char)bVar4 >> 6 & 1) == 0)) {
          pbVar9 = pbVar8 + 2;
          bVar5 = *pbVar9;
          if (((char)bVar5 < 0) && (((uint)(int)(char)bVar5 >> 6 & 1) == 0)) {
            uVar7 = (uVar2 & 0xf) << 0xc | (bVar4 & 0x3f) << 6;
            pbVar9 = pbVar8 + 3;
            if (uVar7 < 0x800) goto LAB_109881a90;
            uVar7 = uVar7 | bVar5 & 0x3f;
          }
        }
      }
      else {
        pbVar9 = pbVar8 + 1;
        if ((uVar2 & 0xf8) != 0xf0) goto LAB_109881a90;
        bVar4 = *pbVar9;
        uVar7 = 0xfffd;
        if (((char)bVar4 < 0) && (((uint)(int)(char)bVar4 >> 6 & 1) == 0)) {
          pbVar9 = pbVar8 + 2;
          bVar5 = *pbVar9;
          if (((char)bVar5 < 0) && (((uint)(int)(char)bVar5 >> 6 & 1) == 0)) {
            pbVar9 = pbVar8 + 3;
            bVar6 = *pbVar9;
            if (((char)bVar6 < 0) && (((uint)(int)(char)bVar6 >> 6 & 1) == 0)) {
              uVar2 = (uVar2 & 7) << 0x12 | (bVar4 & 0x3f) << 0xc;
              pbVar9 = pbVar8 + 4;
              if (0xfffff < uVar2 - 0x10000) goto LAB_109881a90;
              func_0x0001078281ac(param_1,uVar2 + (bVar5 & 0x3f) * 0x40 + 0xf0000 >> 10 & 0xfffffbff
                                          | 0xd800);
              uVar7 = bVar6 & 0x3f | (bVar5 & 0x3f) << 6 | 0xffffdc00;
            }
          }
        }
      }
    }
    else {
      pbVar9 = pbVar8 + 1;
      uVar7 = uVar2;
    }
    pbVar8 = pbVar9;
    func_0x0001078281ac(param_1,uVar7 & 0xffff);
  } while( true );
}



/* Entry: 109881adc; end: 109881b47;  */

void FUN_109881adc(undefined8 param_1,long *param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  (**(code **)(*param_2 + 0x138))(auStack_38);
  FUN_109881908(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 109881b48; end: 109881bdb;  */

void FUN_109881b48(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  (**(code **)(*param_1 + 0x318))(&ppuStack_48);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  (*param_4)(param_3,0,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 109881bdc; end: 109881c6f;  */

void FUN_109881bdc(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  (**(code **)(*param_1 + 800))(&ppuStack_48);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  (*param_4)(param_3,0,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 109881c70; end: 109881da3;  */

void FUN_109881c70(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_2 == 7) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    param_2[2] = 0;
    param_2[3] = 0;
    *param_1 = uVar2;
    return;
  }
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109884518(auStack_78,param_2,param_3);
  FUN_10928a5e0(auStack_60,&UNK_10f582071,auStack_78);
  FUN_109259240(auStack_48,auStack_60,&UNK_10f581fef);
  FUN_1098807a8(uVar2,param_3,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109881d30);
  (*pcVar1)();
}



/* Entry: 109881da4; end: 109881fcf;  */

long * FUN_109881da4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  int *piVar6;
  long lVar7;
  undefined8 auStack_138 [2];
  char cStack_121;
  ulong uStack_120;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  int aiStack_f8 [2];
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 *puStack_e8;
  long *plStack_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined8 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulong uStack_c0;
  int iStack_b8;
  byte bStack_b1;
  long alStack_b0 [2];
  undefined1 *puStack_80;
  code *pcStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&iStack_48);
  FUN_109880f00(&iStack_58,&iStack_48,param_2,&UNK_10f581e9b);
  FUN_1098811a4(&plStack_60,&iStack_58,param_2,&DAT_10f68efec);
  if ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
  }
  if ((undefined8 *)CONCAT44(uStack_44,iStack_48) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_44,iStack_48))();
  }
  FUN_1098849a4(&iStack_48,param_2,param_3);
  iStack_58 = 0;
  (**(code **)(*param_2 + 0x2a8))(aiStack_70,param_2,&plStack_60,&iStack_58,&iStack_48,1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < iStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  FUN_109881c70(param_1,aiStack_70);
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  plVar3 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    (**(code **)*plStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (plStack_60 != (long *)0x0) {
    (**(code **)*plStack_60)();
  }
  __Unwind_Resume();
  pcStack_78 = FUN_109881fd0;
  alStack_b0[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar3 + 800))(&uStack_c8);
  puVar1 = (undefined4 *)CONCAT44(uStack_c4,uStack_c8);
  if (-1 < (char)bStack_b1) {
    uStack_c0 = (ulong)bStack_b1;
    puVar1 = &uStack_c8;
  }
  (**(code **)(*plVar3 + 0x130))(&plStack_e0,plVar3,puVar1,uStack_c0);
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(CONCAT44(uStack_c4,uStack_c8));
  }
  (**(code **)(*plVar3 + 0x30))(&iStack_d8,plVar3);
  FUN_109880f00(&uStack_c8,&iStack_d8,plVar3,&UNK_10f581ea2);
  FUN_1098811a4(&puStack_e8,&uStack_c8,plVar3,"deleteProperty");
  if ((undefined8 *)CONCAT44(uStack_c4,uStack_c8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_c4,uStack_c8))();
  }
  if ((undefined8 *)CONCAT44(uStack_d4,iStack_d8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_d4,iStack_d8))();
  }
  uStack_c8 = 7;
  (**(code **)(*plVar3 + 0x98))(plVar3,*param_2);
  iStack_b8 = 6;
  (**(code **)(*plVar3 + 0x90))(plVar3,plStack_e0);
  iStack_d8 = 0;
  ppuVar5 = &puStack_e8;
  piVar6 = &iStack_d8;
  (**(code **)(*plVar3 + 0x2a8))(aiStack_f8,plVar3,ppuVar5,piVar6,&uStack_c8,2);
  if ((3 < iStack_d8) && (puStack_d0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d0)();
  }
  lVar7 = 0;
  do {
    if ((3 < *(int *)((long)&iStack_b8 + lVar7)) &&
       (*(undefined8 **)((long)alStack_b0 + lVar7) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_b0 + lVar7))();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != -0x20);
  if ((3 < aiStack_f8[0]) && ((undefined8 *)CONCAT71(uStack_ef,bStack_f0) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_ef,bStack_f0))();
  }
  if ((bStack_f0 & 1) == 0) {
    uVar4 = 0x60;
    ___cxa_allocate_exception(0x60);
    FUN_109882324();
    ___cxa_throw(uVar4,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109882230);
    (*pcVar2)();
  }
  if (puStack_e8 != (undefined8 *)0x0) {
    (**(code **)*puStack_e8)();
  }
  plVar3 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    (**(code **)*plStack_e0)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_b0[1]) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (puStack_e8 != (undefined8 *)0x0) {
    (**(code **)*puStack_e8)();
  }
  if (plStack_e0 != (long *)0x0) {
    (**(code **)*plStack_e0)();
  }
  __Unwind_Resume(plVar3);
  pcStack_108 = FUN_109882324;
  uStack_120 = (ulong)bStack_f0;
  ppuStack_110 = &puStack_80;
  func_0x000107c31940(auStack_138,piVar6);
  FUN_1098807a8(plVar3,ppuVar5,auStack_138);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  return plVar3;
}



/* Entry: 109881fd0; end: 109882323;  */

undefined8 * FUN_109881fd0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  int *piVar8;
  long lVar9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  ulong uStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  int aiStack_88 [2];
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *plStack_50;
  int iStack_48;
  byte bStack_41;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_1 + 800))(&uStack_58,param_1,param_3);
  puVar1 = (undefined4 *)CONCAT44(uStack_54,uStack_58);
  if (-1 < (char)bStack_41) {
    plStack_50 = (long *)(ulong)bStack_41;
    puVar1 = &uStack_58;
  }
  (**(code **)(*param_1 + 0x130))(&puStack_70,param_1,puVar1,plStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(CONCAT44(uStack_54,uStack_58));
  }
  (**(code **)(*param_1 + 0x30))(&iStack_68,param_1);
  FUN_109880f00(&uStack_58,&iStack_68,param_1,&UNK_10f581ea2);
  FUN_1098811a4(&puStack_78,&uStack_58,param_1,"deleteProperty");
  if ((undefined8 *)CONCAT44(uStack_54,uStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,uStack_58))();
  }
  if ((undefined8 *)CONCAT44(uStack_64,iStack_68) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_64,iStack_68))();
  }
  uStack_58 = 7;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  iStack_48 = 6;
  plVar4 = param_1;
  plStack_50 = plVar3;
  (**(code **)(*param_1 + 0x90))(param_1,puStack_70);
  iStack_68 = 0;
  ppuVar7 = &puStack_78;
  piVar8 = &iStack_68;
  plStack_40 = plVar4;
  (**(code **)(*param_1 + 0x2a8))(aiStack_88,param_1,ppuVar7,piVar8,&uStack_58,2);
  if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  lVar9 = 0;
  do {
    if ((3 < *(int *)((long)&iStack_48 + lVar9)) &&
       (*(undefined8 **)((long)&plStack_40 + lVar9) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&plStack_40 + lVar9))();
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != -0x20);
  if ((3 < aiStack_88[0]) && ((undefined8 *)CONCAT71(uStack_7f,bStack_80) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_7f,bStack_80))();
  }
  if ((bStack_80 & 1) != 0) {
    if (puStack_78 != (undefined8 *)0x0) {
      (**(code **)*puStack_78)();
    }
    puVar5 = puStack_70;
    if (puStack_70 != (undefined8 *)0x0) {
      (**(code **)*puStack_70)();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return puVar5;
    }
    ___stack_chk_fail();
    if (puStack_78 != (undefined8 *)0x0) {
      (**(code **)*puStack_78)();
    }
    if (puStack_70 != (undefined8 *)0x0) {
      (**(code **)*puStack_70)();
    }
    __Unwind_Resume(puVar5);
    pcStack_98 = FUN_109882324;
    uStack_b0 = (ulong)bStack_80;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000107c31940(auStack_c8,piVar8);
    FUN_1098807a8(puVar5,ppuVar7,auStack_c8);
    if (cStack_b1 < '\0') {
      __ZdlPv(auStack_c8[0]);
    }
    return puVar5;
  }
  uVar6 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109882324();
  ___cxa_throw(uVar6,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109882230);
  (*pcVar2)();
}



/* Entry: 109882324; end: 109882397;  */

undefined8 FUN_109882324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_38,param_3);
  FUN_1098807a8(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109882398; end: 10988264f;  */

long * FUN_109882398(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long **pplVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  int aiStack_150 [2];
  undefined8 *puStack_148;
  int aiStack_100 [2];
  byte bStack_f8;
  undefined7 uStack_f7;
  long *plStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 *puStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int aiStack_c8 [2];
  long alStack_c0 [2];
  int aiStack_80 [2];
  byte bStack_78;
  undefined7 uStack_77;
  long *plStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *plStack_50;
  int aiStack_48 [2];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_1 + 0x30))(&iStack_68);
  FUN_109880f00(&uStack_58,&iStack_68,param_1,&UNK_10f581ea2);
  FUN_1098811a4(&plStack_70,&uStack_58,param_1,"deleteProperty");
  if ((undefined8 *)CONCAT44(uStack_54,uStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,uStack_58))();
  }
  if ((undefined8 *)CONCAT44(uStack_64,iStack_68) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_64,iStack_68))();
  }
  uStack_58 = 7;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  aiStack_48[0] = 6;
  plVar3 = param_1;
  plStack_50 = plVar2;
  (**(code **)(*param_1 + 0x90))(param_1,*param_3);
  iStack_68 = 0;
  pplVar5 = &plStack_70;
  piVar6 = &iStack_68;
  plStack_40 = plVar3;
  (**(code **)(*param_1 + 0x2a8))(aiStack_80,param_1,pplVar5,piVar6,&uStack_58,2);
  if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  lVar8 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_48 + lVar8)) &&
       (*(undefined8 **)((long)&plStack_40 + lVar8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&plStack_40 + lVar8))();
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x20);
  if ((3 < aiStack_80[0]) && ((undefined8 *)CONCAT71(uStack_77,bStack_78) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_77,bStack_78))();
  }
  if ((bStack_78 & 1) == 0) {
    uVar4 = 0x60;
    ___cxa_allocate_exception(0x60);
    FUN_109882324();
    ___cxa_throw(uVar4,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109882590);
    (*pcVar1)();
  }
  plVar2 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  __Unwind_Resume();
  alStack_c0[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*plVar2 + 0x30))(&iStack_e8);
  FUN_109880f00(&uStack_d8,&iStack_e8,plVar2,&UNK_10f581ea2);
  FUN_1098811a4(&plStack_f0,&uStack_d8,plVar2,"deleteProperty");
  if ((undefined8 *)CONCAT44(uStack_d4,uStack_d8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_d4,uStack_d8))();
  }
  if ((undefined8 *)CONCAT44(uStack_e4,iStack_e8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_e4,iStack_e8))();
  }
  uStack_d8 = 7;
  (**(code **)(*plVar2 + 0x98))(plVar2,*pplVar5);
  FUN_1098849a4(aiStack_c8,plVar2,piVar6);
  iStack_e8 = 0;
  pplVar5 = &plStack_f0;
  piVar6 = &iStack_e8;
  puVar7 = &uStack_d8;
  (**(code **)(*plVar2 + 0x2a8))(aiStack_100,plVar2,pplVar5,piVar6,puVar7,2);
  if ((3 < iStack_e8) && (puStack_e0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_e0)();
  }
  lVar8 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_c8 + lVar8)) &&
       (*(undefined8 **)((long)alStack_c0 + lVar8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_c0 + lVar8))();
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x20);
  if ((3 < aiStack_100[0]) && ((undefined8 *)CONCAT71(uStack_f7,bStack_f8) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_f7,bStack_f8))();
  }
  if ((bStack_f8 & 1) != 0) {
    plVar2 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      (**(code **)*plStack_f0)();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_c0[1]) {
      return plVar2;
    }
    ___stack_chk_fail();
    if (plStack_f0 != (long *)0x0) {
      (**(code **)*plStack_f0)();
    }
    __Unwind_Resume();
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x268))();
    for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)((long)puVar7 + -1)) {
      aiStack_160[0] = 3;
      puStack_158 = (undefined8 *)(double)(int)plVar3;
      FUN_1098849a4(aiStack_150,plVar2,piVar6);
      (**(code **)(*plVar2 + 0x1e0))(plVar2,pplVar5,aiStack_160,aiStack_150);
      if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
        (**(code **)*puStack_148)();
      }
      if ((3 < aiStack_160[0]) && (puStack_158 != (undefined8 *)0x0)) {
        (**(code **)*puStack_158)();
      }
      plVar3 = (long *)((long)plVar3 + 1);
      piVar6 = piVar6 + 4;
    }
    aiStack_150[0] = 3;
    puStack_148 = (undefined8 *)(double)(int)plVar3;
    FUN_109882a90(pplVar5,plVar2,&DAT_10f355a53,aiStack_150);
    if ((3 < aiStack_150[0]) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    return plVar3;
  }
  uVar4 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109882324();
  ___cxa_throw(uVar4,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10988283c);
  (*pcVar1)();
}



/* Entry: 109882650; end: 1098828fb;  */

long * FUN_109882650(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long **pplVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  int aiStack_e0 [2];
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  int aiStack_80 [2];
  byte bStack_78;
  undefined7 uStack_77;
  long *plStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *plStack_50;
  int aiStack_48 [2];
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_1 + 0x30))(&iStack_68);
  FUN_109880f00(&uStack_58,&iStack_68,param_1,&UNK_10f581ea2);
  FUN_1098811a4(&plStack_70,&uStack_58,param_1,"deleteProperty");
  if ((undefined8 *)CONCAT44(uStack_54,uStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,uStack_58))();
  }
  if ((undefined8 *)CONCAT44(uStack_64,iStack_68) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_64,iStack_68))();
  }
  uStack_58 = 7;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  plStack_50 = plVar2;
  FUN_1098849a4(aiStack_48,param_1,param_3);
  iStack_68 = 0;
  pplVar5 = &plStack_70;
  piVar6 = &iStack_68;
  puVar7 = &uStack_58;
  (**(code **)(*param_1 + 0x2a8))(aiStack_80,param_1,pplVar5,piVar6,puVar7,2);
  if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  lVar8 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_48 + lVar8)) &&
       (*(undefined8 **)((long)alStack_40 + lVar8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_40 + lVar8))();
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x20);
  if ((3 < aiStack_80[0]) && ((undefined8 *)CONCAT71(uStack_77,bStack_78) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_77,bStack_78))();
  }
  if ((bStack_78 & 1) == 0) {
    uVar3 = 0x60;
    ___cxa_allocate_exception(0x60);
    FUN_109882324();
    ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10988283c);
    (*pcVar1)();
  }
  plVar2 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_40[1]) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (plStack_70 != (long *)0x0) {
    (**(code **)*plStack_70)();
  }
  __Unwind_Resume();
  plVar4 = plVar2;
  (**(code **)(*plVar2 + 0x268))();
  for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)((long)puVar7 + -1)) {
    aiStack_e0[0] = 3;
    puStack_d8 = (undefined8 *)(double)(int)plVar4;
    FUN_1098849a4(aiStack_d0,plVar2,piVar6);
    (**(code **)(*plVar2 + 0x1e0))(plVar2,pplVar5,aiStack_e0,aiStack_d0);
    if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_e0[0]) && (puStack_d8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_d8)();
    }
    plVar4 = (long *)((long)plVar4 + 1);
    piVar6 = piVar6 + 4;
  }
  aiStack_d0[0] = 3;
  puStack_c8 = (undefined8 *)(double)(int)plVar4;
  FUN_109882a90(pplVar5,plVar2,&DAT_10f355a53,aiStack_d0);
  if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c8)();
  }
  return plVar4;
}



/* Entry: 1098828fc; end: 109882a8f;  */

long * FUN_1098828fc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x268))();
  for (; param_4 != 0; param_4 = param_4 + -1) {
    aiStack_60[0] = 3;
    puStack_58 = (undefined8 *)(double)(int)plVar1;
    FUN_1098849a4(aiStack_50,param_1,param_3);
    (**(code **)(*param_1 + 0x1e0))(param_1,param_2,aiStack_60,aiStack_50);
    if ((3 < aiStack_50[0]) && (puStack_48 != (undefined8 *)0x0)) {
      (**(code **)*puStack_48)();
    }
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    plVar1 = (long *)((long)plVar1 + 1);
    param_3 = param_3 + 0x10;
  }
  aiStack_50[0] = 3;
  puStack_48 = (undefined8 *)(double)(int)plVar1;
  FUN_109882a90(param_2,param_1,&DAT_10f355a53,aiStack_50);
  if ((3 < aiStack_50[0]) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  return plVar1;
}



/* Entry: 109882a90; end: 109882b3b;  */

void FUN_109882a90(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0xb0))(&puStack_38,param_2,param_3,uVar1);
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,&puStack_38,param_4);
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 109882b3c; end: 10988350f;  */

void FUN_109882b3c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong unaff_x24;
  undefined8 uVar18;
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  int aiStack_78 [2];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109883510();
  __ZNSt3__15mutex4lockEv(0x113737dc8);
  plVar17 = param_1;
  FUN_109886b74();
  uVar7 = uRam0000000113737e10;
  if (plVar17 == (long *)0x0) {
    uVar10 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar10 = ((ulong)param_1 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    if (uRam0000000113737e10 != 0) {
      uVar6 = uRam0000000113737e10 - 1;
      if ((uRam0000000113737e10 & uVar6) == 0) {
        unaff_x24 = uVar6 & uVar10;
      }
      else {
        unaff_x24 = uVar10;
        if (uRam0000000113737e10 <= uVar10) {
          uVar12 = 0;
          if (uRam0000000113737e10 != 0) {
            uVar12 = uVar10 / uRam0000000113737e10;
          }
          unaff_x24 = uVar10 - uVar12 * uRam0000000113737e10;
        }
      }
      puVar11 = *(undefined8 **)(lRam0000000113737e08 + unaff_x24 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        for (plVar17 = (long *)*puVar11; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
          uVar12 = plVar17[1];
          if (uVar12 == uVar10) {
            if ((long *)plVar17[2] == param_1) goto LAB_109882f78;
          }
          else {
            if ((uRam0000000113737e10 & uVar6) == 0) {
              uVar12 = uVar12 & uVar6;
            }
            else if (uRam0000000113737e10 <= uVar12) {
              uVar8 = 0;
              if (uRam0000000113737e10 != 0) {
                uVar8 = uVar12 / uRam0000000113737e10;
              }
              uVar12 = uVar12 - uVar8 * uRam0000000113737e10;
            }
            if (uVar12 != unaff_x24) break;
          }
        }
      }
    }
    plVar17 = (long *)0x40;
    __Znwm();
    plStack_90 = (long *)0x113737e08;
    uStack_88 = 1;
    *plVar17 = 0;
    plVar17[1] = uVar10;
    plVar17[2] = (long)param_1;
    plVar17[4] = 0;
    plVar17[3] = 0;
    plVar17[6] = 0;
    plVar17[5] = 0;
    *(undefined4 *)(plVar17 + 7) = 0x3f800000;
    plStack_98 = plVar17;
    if ((uVar7 == 0) || (fRam0000000113737e28 * (float)uVar7 < (float)(uRam0000000113737e20 + 1))) {
      uVar6 = 1;
      if (2 < uVar7) {
        uVar6 = (ulong)((uVar7 & uVar7 - 1) != 0);
      }
      uVar6 = uVar6 | uVar7 << 1;
      uVar12 = (ulong)((float)(uRam0000000113737e20 + 1) / fRam0000000113737e28);
      if (uVar6 <= uVar12) {
        uVar6 = uVar12;
      }
      uVar12 = uVar7;
      if (uVar6 - 1 == 0) {
        uVar6 = 2;
      }
      else if ((uVar6 & uVar6 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar12 = uRam0000000113737e10;
      }
      if (uVar12 < uVar6) {
LAB_109882d78:
        if (uVar6 >> 0x3d != 0) goto LAB_10988339c;
        lVar5 = uVar6 << 3;
        __Znwm();
        bVar1 = lRam0000000113737e08 != 0;
        lRam0000000113737e08 = lVar5;
        if (bVar1) {
          __ZdlPv();
        }
        uVar7 = 0;
        uRam0000000113737e10 = uVar6;
        do {
          *(undefined8 *)(lRam0000000113737e08 + uVar7 * 8) = 0;
          plVar9 = plRam0000000113737e18;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
        uVar7 = uVar6;
        if (plRam0000000113737e18 != (long *)0x0) {
          uVar12 = plRam0000000113737e18[1];
          uVar8 = uVar6 - 1;
          if ((uVar6 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar6 <= uVar12) {
            uVar15 = 0;
            if (uVar6 != 0) {
              uVar15 = uVar12 / uVar6;
            }
            uVar12 = uVar12 - uVar15 * uVar6;
          }
          *(undefined8 *)(lRam0000000113737e08 + uVar12 * 8) = 0x113737e18;
          plVar13 = (long *)*plVar9;
          lVar5 = lRam0000000113737e08;
          while (lRam0000000113737e08 = lVar5, plVar13 != (long *)0x0) {
            uVar15 = plVar13[1];
            if ((uVar6 & uVar8) == 0) {
              uVar15 = uVar15 & uVar8;
            }
            else if (uVar6 <= uVar15) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar15 / uVar6;
              }
              uVar15 = uVar15 - uVar3 * uVar6;
            }
            plVar14 = plVar13;
            if (uVar15 != uVar12) {
              if (*(long *)(lVar5 + uVar15 * 8) == 0) {
                *(long **)(lVar5 + uVar15 * 8) = plVar9;
                uVar12 = uVar15;
              }
              else {
                *plVar9 = *plVar13;
                *plVar13 = **(long **)(lVar5 + uVar15 * 8);
                **(undefined8 **)(lVar5 + uVar15 * 8) = plVar13;
                plVar14 = plVar9;
              }
            }
            lVar5 = lRam0000000113737e08;
            plVar9 = plVar14;
            plVar13 = (long *)*plVar14;
          }
        }
      }
      else {
        uVar7 = uVar12;
        if (uVar6 < uVar12) {
          uVar7 = (ulong)((float)uRam0000000113737e20 / fRam0000000113737e28);
          if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar7) {
            uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
          }
          lVar5 = lRam0000000113737e08;
          if (uVar6 <= uVar7) {
            uVar6 = uVar7;
          }
          uVar7 = uRam0000000113737e10;
          if (uVar6 < uVar12) {
            if (uVar6 != 0) goto LAB_109882d78;
            lRam0000000113737e08 = 0;
            if (lVar5 != 0) {
              __ZdlPv();
            }
            uRam0000000113737e10 = 0;
            uVar7 = 0;
          }
        }
      }
      if ((uVar7 & uVar7 - 1) == 0) {
        unaff_x24 = uVar7 - 1 & uVar10;
      }
      else {
        unaff_x24 = uVar10;
        if (uVar7 <= uVar10) {
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = uVar10 / uVar7;
          }
          unaff_x24 = uVar10 - uVar6 * uVar7;
        }
      }
    }
    lVar5 = lRam0000000113737e08;
    plVar9 = *(long **)(lRam0000000113737e08 + unaff_x24 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar17 = (long)plRam0000000113737e18;
      plRam0000000113737e18 = plVar17;
      *(undefined8 *)(lVar5 + unaff_x24 * 8) = 0x113737e18;
      if (*plVar17 != 0) {
        uVar10 = *(ulong *)(*plVar17 + 8);
        if ((uVar7 & uVar7 - 1) == 0) {
          uVar10 = uVar10 & uVar7 - 1;
        }
        else if (uVar7 <= uVar10) {
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar6 * uVar7;
        }
        plVar9 = (long *)(lRam0000000113737e08 + uVar10 * 8);
        goto LAB_109882f64;
      }
    }
    else {
      *plVar17 = *plVar9;
LAB_109882f64:
      *plVar9 = (long)plVar17;
    }
    uRam0000000113737e20 = uRam0000000113737e20 + 1;
LAB_109882f78:
    plVar17 = plVar17 + 3;
    FUN_109886cec(plVar17,*param_2,param_2[1],param_2);
    plVar17[4] = param_3;
    plVar17[5] = param_4;
    plVar17 = (long *)0x28;
    __Znwm();
    plVar17[1] = 0;
    plVar17[2] = 0;
    plStack_98 = plVar17 + 3;
    *plStack_98 = (long)&PTR_FUN_110b167f0;
    *plVar17 = (long)&PTR_FUN_110b167a0;
    plVar17[4] = (long)param_1;
    plStack_90 = plVar17;
    (**(code **)(*param_1 + 0x150))(&puStack_b0,param_1,&plStack_98);
    plVar17 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar9 = plStack_90 + 1;
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar1) {
          *plVar9 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    (**(code **)(*param_1 + 0x30))(&plStack_98,param_1);
    FUN_10988359c(&plStack_98,param_1,&UNK_10f581ec4,&puStack_b0);
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    (**(code **)(*param_1 + 0x30))(&iStack_a8,param_1);
    FUN_109880f00(&plStack_98,&iStack_a8,param_1,&UNK_10f581e9b);
    FUN_1098811a4(&puStack_b8,&plStack_98,param_1,&UNK_10f581edb);
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    if ((undefined8 *)CONCAT44(uStack_a4,iStack_a8) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_a4,iStack_a8))();
    }
    (**(code **)(*param_1 + 0x148))(&plStack_98,param_1);
    plStack_c0 = plStack_98;
    plStack_98 = (long *)CONCAT44(plStack_98._4_4_,2);
    plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    FUN_109882a90(&plStack_c0,param_1,&UNK_10f581eea,&plStack_98);
    if ((3 < (int)plStack_98) && (plStack_90 != (undefined8 *)0x0)) {
      (**(code **)*plStack_90)();
    }
    plStack_98 = (long *)CONCAT44(plStack_98._4_4_,2);
    plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    FUN_109882a90(&plStack_c0,param_1,&UNK_10f581ef7,&plStack_98);
    if ((3 < (int)plStack_98) && (plStack_90 != (undefined8 *)0x0)) {
      (**(code **)*plStack_90)();
    }
    plStack_98 = (long *)CONCAT44(plStack_98._4_4_,2);
    plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    FUN_109882a90(&plStack_c0,param_1,&UNK_10f581f02,&plStack_98);
    if ((3 < (int)plStack_98) && (plStack_90 != (undefined8 *)0x0)) {
      (**(code **)*plStack_90)();
    }
    (**(code **)(*param_1 + 0x30))(&puStack_d8,param_1);
    plStack_98 = (long *)CONCAT44(plStack_98._4_4_,7);
    plVar17 = param_1;
    (**(code **)(*param_1 + 0x98))(param_1,puStack_d8);
    plStack_90 = plVar17;
    (**(code **)(*param_1 + 0x120))(&iStack_a8,param_1,&UNK_10f581ec4,0x16);
    uStack_88 = CONCAT44(uStack_88._4_4_,6);
    aiStack_78[0] = 7;
    plVar17 = param_1;
    (**(code **)(*param_1 + 0x98))(param_1,plStack_c0);
    iStack_a8 = 0;
    plStack_70 = plVar17;
    (**(code **)(*param_1 + 0x2a8))(aiStack_d0,param_1,&puStack_b8,&iStack_a8,&plStack_98,3);
    if ((3 < iStack_a8) && (puStack_a0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a0)();
    }
    lVar5 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_78 + lVar5)) &&
         (*(undefined8 **)((long)&plStack_70 + lVar5) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&plStack_70 + lVar5))();
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != -0x30);
    if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if (puStack_d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_d8)();
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (puStack_b8 != (undefined8 *)0x0) {
      (**(code **)*puStack_b8)();
    }
    if (puStack_b0 != (undefined8 *)0x0) {
      (**(code **)*puStack_b0)();
    }
  }
  else {
    uVar16 = *param_2;
    uVar18 = param_2[1];
    plVar9 = plVar17 + 3;
    func_0x000109886c48(plVar9,uVar16,uVar18);
    if (plVar9 != (long *)0x0) {
      (*(code *)plVar9[5])(plVar9[4]);
      uVar16 = *param_2;
      uVar18 = param_2[1];
    }
    plVar17 = plVar17 + 3;
    FUN_109886cec(plVar17,uVar16,uVar18,param_2);
    plVar17[4] = param_3;
    plVar17[5] = param_4;
  }
  __ZNSt3__15mutex6unlockEv(0x113737dc8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10988339c:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098833a4);
  (*pcVar4)();
}



/* Entry: 109883510; end: 10988359b;  */

void FUN_109883510(void)

{
  int iVar1;
  
  if ((bRam0000000113737dc0 & 1) == 0) {
    iVar1 = 0x13737dc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113737dc8 = 0x32aaaba7;
      uRam0000000113737dd8 = 0;
      uRam0000000113737dd0 = 0;
      uRam0000000113737de8 = 0;
      uRam0000000113737de0 = 0;
      uRam0000000113737df8 = 0;
      uRam0000000113737df0 = 0;
      uRam0000000113737e08 = 0;
      uRam0000000113737e00 = 0;
      uRam0000000113737e18 = 0;
      uRam0000000113737e10 = 0;
      uRam0000000113737e20 = 0;
      uRam0000000113737e28 = 0x3f800000;
      ___cxa_atexit(FUN_109886ab4,0x113737dc8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113737dc0);
      return;
    }
  }
  return;
}



/* Entry: 10988359c; end: 10988363f;  */

void FUN_10988359c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0xb0))(&puStack_38,param_2,param_3,uVar1);
  FUN_1098872e4(param_1,param_2,&puStack_38,param_4);
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 109883640; end: 1098836a7;  */

undefined8 FUN_109883640(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_109883510();
  __ZNSt3__15mutex4lockEv(0x113737dc8);
  FUN_109886b74();
  if (param_1 != 0) {
    param_1 = param_1 + 0x18;
    func_0x000109886c48(param_1,*param_2,param_2[1]);
    if (param_1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10988368c;
    }
  }
  uVar1 = 0;
LAB_10988368c:
  __ZNSt3__15mutex6unlockEv(0x113737dc8);
  return uVar1;
}



/* Entry: 1098836a8; end: 109883837;  */

void FUN_1098836a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int iStack_50;
  undefined4 uStack_4c;
  byte bStack_48;
  undefined7 uStack_47;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  (**(code **)(*param_1 + 0x30))(&puStack_40);
  FUN_109880f00(&iStack_50,&puStack_40,param_1,&UNK_10f581ea2);
  FUN_1098811a4(&puStack_38,&iStack_50,param_1,&UNK_10f581f0b);
  if ((undefined8 *)CONCAT44(uStack_4c,iStack_50) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_4c,iStack_50))();
  }
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  FUN_109883838(&iStack_50,&puStack_38,param_1,param_2,param_3,param_4);
  if ((3 < iStack_50) && ((undefined8 *)CONCAT71(uStack_47,bStack_48) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_47,bStack_48))();
  }
  if ((bStack_48 & 1) != 0) {
    if (puStack_38 != (undefined8 *)0x0) {
      (**(code **)*puStack_38)();
    }
    return;
  }
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109882324();
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098837d8);
  (*pcVar1)();
}



/* Entry: 109883838; end: 1098839cf;  */

void FUN_109883838(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined7 uVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  char cStack_109;
  long *plStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  int aiStack_e8 [2];
  long *plStack_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  int aiStack_88 [2];
  long *plStack_80;
  undefined4 auStack_78 [2];
  long *plStack_70;
  undefined1 auStack_68 [16];
  int aiStack_58 [2];
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_78[0] = 7;
  plVar7 = param_3;
  (**(code **)(*param_3 + 0x98))(param_3,*param_4);
  plStack_70 = plVar7;
  FUN_1098849a4(auStack_68,param_3,param_5);
  FUN_1098849a4(aiStack_58,param_3,param_6);
  aiStack_88[0] = 0;
  uVar11 = param_2;
  (**(code **)(*param_3 + 0x2a8))(param_1,param_3,param_2,aiStack_88,auStack_78,3);
  if ((3 < aiStack_88[0]) && (param_3 = plStack_80, plStack_80 != (long *)0x0)) {
    (**(code **)*plStack_80)();
  }
  lVar12 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_58 + lVar12)) &&
       (param_3 = *(long **)((long)alStack_50 + lVar12), param_3 != (long *)0x0)) {
      (**(code **)*param_3)();
    }
    lVar12 = lVar12 + -0x10;
  } while (lVar12 != -0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_50[1]) {
    return;
  }
  ___stack_chk_fail();
  if ((3 < aiStack_88[0]) && (plStack_80 != (long *)0x0)) {
    (**(code **)*plStack_80)();
  }
  lVar12 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_58 + lVar12)) &&
       (*(undefined8 **)((long)alStack_50 + lVar12) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_50 + lVar12))();
    }
    lVar12 = lVar12 + -0x10;
  } while (lVar12 != -0x30);
  plVar7 = param_3;
  __Unwind_Resume();
  pcStack_98 = FUN_1098839d0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = param_2;
  puStack_b8 = auStack_78;
  lStack_b0 = lVar12;
  plStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar7 + 0x120))(&uStack_d8);
  (**(code **)(*plVar7 + 0x1a8))(aiStack_e8,plVar7,uVar11,&uStack_d8);
  if ((undefined8 *)CONCAT17(uStack_d1,uStack_d8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT17(uStack_d1,uStack_d8))();
  }
  if (aiStack_e8[0] == 7) {
    plVar8 = plVar7;
    (**(code **)(*plVar7 + 0x98))(plVar7,plStack_e0);
    plVar9 = plVar7;
    plStack_108 = plVar8;
    (**(code **)(*plVar7 + 0x210))(plVar7,&plStack_108);
    if (((ulong)plVar9 & 1) != 0) {
      (**(code **)(*plVar7 + 0x98))(plVar7,plStack_108);
      *extraout_x8 = plVar7;
      plVar7 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        (**(code **)*plStack_108)();
      }
      if ((3 < aiStack_e8[0]) && (plVar7 = plStack_e0, plStack_e0 != (long *)0x0)) {
        (**(code **)*plStack_e0)();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        if (cStack_109 < '\0') {
          __ZdlPv(uStack_120);
        }
        if (plStack_108 != (long *)0x0) {
          (**(code **)*plStack_108)();
        }
        if ((3 < aiStack_e8[0]) && (plStack_e0 != (long *)0x0)) {
          (**(code **)*plStack_e0)();
        }
        __Unwind_Resume();
        *plVar7 = (long)&PTR_SUB_110b166b0;
        if (*(char *)((long)plVar7 + 0x1f) < '\0') {
          __ZdlPv(plVar7[1]);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(plVar7);
        return;
      }
      return;
    }
    puVar10 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(&uStack_120,&UNK_10f581f4d);
    cVar4 = cStack_109;
    uVar3 = uStack_110;
    uVar2 = uStack_111;
    uVar1 = uStack_118;
    uVar11 = uStack_120;
    uStack_118 = 0;
    uStack_111 = 0;
    uStack_110 = 0;
    cStack_109 = '\0';
    uStack_120 = 0;
    puVar10[1] = uVar11;
    puVar10[2] = CONCAT17(uVar2,uVar1);
    *(ulong *)((long)puVar10 + 0x17) = CONCAT71(uVar3,uVar2);
    *(char *)((long)puVar10 + 0x1f) = cVar4;
    *puVar10 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar10,&PTR_DAT_110b16580,FUN_109883ca4);
  }
  else {
    puVar10 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(&uStack_100,&UNK_10f581f2a);
    uVar5 = uStack_e9;
    uVar3 = uStack_f0;
    uVar2 = uStack_f1;
    uVar1 = uStack_f8;
    uVar11 = uStack_100;
    uStack_f8 = 0;
    uStack_f1 = 0;
    uStack_f0 = 0;
    uStack_e9 = 0;
    uStack_100 = 0;
    puVar10[1] = uVar11;
    puVar10[2] = CONCAT17(uVar2,uVar1);
    *(ulong *)((long)puVar10 + 0x17) = CONCAT71(uVar3,uVar2);
    *(undefined1 *)((long)puVar10 + 0x1f) = uVar5;
    *puVar10 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar10,&PTR_DAT_110b16580,FUN_109883ca4);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109883be8);
  (*pcVar6)();
}



/* Entry: 1098839d0; end: 109883ca3;  */

void FUN_1098839d0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  char cVar5;
  undefined1 uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  int aiStack_58 [2];
  long *plStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x120))(&uStack_48,param_2,&DAT_10f637e74,6);
  (**(code **)(*param_2 + 0x1a8))(aiStack_58,param_2,param_3,&uStack_48);
  if ((undefined8 *)CONCAT17(uStack_41,uStack_48) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT17(uStack_41,uStack_48))();
  }
  if (aiStack_58[0] == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,plStack_50);
    plVar9 = param_2;
    plStack_78 = plVar8;
    (**(code **)(*param_2 + 0x210))(param_2,&plStack_78);
    if (((ulong)plVar9 & 1) != 0) {
      (**(code **)(*param_2 + 0x98))(param_2,plStack_78);
      *param_1 = param_2;
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        (**(code **)*plStack_78)();
      }
      if ((3 < aiStack_58[0]) && (plVar8 = plStack_50, plStack_50 != (long *)0x0)) {
        (**(code **)*plStack_50)();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
        ___stack_chk_fail();
        if (cStack_79 < '\0') {
          __ZdlPv(uStack_90);
        }
        if (plStack_78 != (long *)0x0) {
          (**(code **)*plStack_78)();
        }
        if ((3 < aiStack_58[0]) && (plStack_50 != (long *)0x0)) {
          (**(code **)*plStack_50)();
        }
        __Unwind_Resume();
        *plVar8 = (long)&PTR_SUB_110b166b0;
        if (*(char *)((long)plVar8 + 0x1f) < '\0') {
          __ZdlPv(plVar8[1]);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(plVar8);
        return;
      }
      return;
    }
    puVar10 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(&uStack_90,&UNK_10f581f4d);
    cVar5 = cStack_79;
    uVar4 = uStack_80;
    uVar3 = uStack_81;
    uVar2 = uStack_88;
    uVar1 = uStack_90;
    uStack_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    cStack_79 = '\0';
    uStack_90 = 0;
    puVar10[1] = uVar1;
    puVar10[2] = CONCAT17(uVar3,uVar2);
    *(ulong *)((long)puVar10 + 0x17) = CONCAT71(uVar4,uVar3);
    *(char *)((long)puVar10 + 0x1f) = cVar5;
    *puVar10 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar10,&PTR_DAT_110b16580,FUN_109883ca4);
  }
  else {
    puVar10 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(&uStack_70,&UNK_10f581f2a);
    uVar6 = uStack_59;
    uVar4 = uStack_60;
    uVar3 = uStack_61;
    uVar2 = uStack_68;
    uVar1 = uStack_70;
    uStack_68 = 0;
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_59 = 0;
    uStack_70 = 0;
    puVar10[1] = uVar1;
    puVar10[2] = CONCAT17(uVar3,uVar2);
    *(ulong *)((long)puVar10 + 0x17) = CONCAT71(uVar4,uVar3);
    *(undefined1 *)((long)puVar10 + 0x1f) = uVar6;
    *puVar10 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar10,&PTR_DAT_110b16580,FUN_109883ca4);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109883be8);
  (*pcVar7)();
}



/* Entry: 109883ca4; end: 109883cdf;  */

void FUN_109883ca4(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_110b166b0;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 109883ce0; end: 109883ce7;  */

void FUN_109883ce0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109883ce8; end: 109883ed3;  */

void FUN_109883ce8(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&iStack_48);
  FUN_1098811a4(&puStack_50,&iStack_48,param_2,&DAT_10f581f75);
  if ((undefined8 *)CONCAT44(uStack_44,iStack_48) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_44,iStack_48))();
  }
  iStack_48 = 3;
  puStack_40 = (undefined8 *)(double)param_3;
  (**(code **)(*param_2 + 0x2b0))(aiStack_60,param_2,&puStack_50,&iStack_48,1);
  if ((3 < iStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,puStack_58);
  (**(code **)(*param_2 + 0x98))(param_2,plVar1);
  *param_1 = (long)param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
    (**(code **)*puStack_58)();
  }
  puVar2 = puStack_50;
  if (puStack_50 != (undefined8 *)0x0) {
    (**(code **)*puStack_50)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (plVar1 != (long *)0x0) {
      (**(code **)*plVar1)(plVar1);
    }
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    do {
      if (puStack_50 != (undefined8 *)0x0) {
        (**(code **)*puStack_50)();
      }
      __Unwind_Resume(puVar2);
      puStack_50 = (undefined8 *)CONCAT44(uStack_44,iStack_48);
    } while( true );
  }
  return;
}



/* Entry: 109883ed4; end: 109884133;  */

void FUN_109883ed4(long *param_1,long *param_2,undefined8 *param_3,int param_4,int param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long *plStack_70;
  undefined4 uStack_68;
  double dStack_60;
  int aiStack_58 [2];
  double dStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&uStack_78);
  FUN_1098811a4(&puStack_80,&uStack_78,param_2,&DAT_10f581f75);
  if ((undefined8 *)CONCAT44(uStack_74,uStack_78) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_74,uStack_78))();
  }
  uStack_78 = 7;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*param_3);
  uStack_68 = 3;
  dStack_60 = (double)param_4;
  aiStack_58[0] = 3;
  dStack_50 = (double)param_5;
  plStack_70 = plVar1;
  (**(code **)(*param_2 + 0x2b0))(aiStack_90,param_2,&puStack_80,&uStack_78,3);
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_58 + lVar3)) &&
       (*(undefined8 **)((long)&dStack_50 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_50 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,puStack_88);
  (**(code **)(*param_2 + 0x98))(param_2,plVar1);
  *param_1 = (long)param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  puVar2 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (plVar1 != (long *)0x0) {
      (**(code **)*plVar1)(plVar1);
    }
    if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    do {
      if (puStack_80 != (undefined8 *)0x0) {
        (**(code **)*puStack_80)();
      }
      __Unwind_Resume(puVar2);
      puStack_80 = (undefined8 *)CONCAT44(uStack_74,uStack_78);
    } while( true );
  }
  return;
}



/* Entry: 109884134; end: 1098842bb;  */

long * FUN_109884134(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  char cStack_49;
  int aiStack_48 [2];
  byte bStack_40;
  undefined7 uStack_3f;
  undefined7 uStack_38;
  undefined1 uStack_31;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_1 + 0x120))(&uStack_38,param_1,&UNK_10f581f80,8);
  (**(code **)(*param_1 + 0x1a8))(aiStack_48,param_1,param_2,&uStack_38);
  if ((undefined8 *)CONCAT17(uStack_31,uStack_38) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT17(uStack_31,uStack_38))();
  }
  if (aiStack_48[0] != 2) {
    puVar8 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(&uStack_60,&UNK_10f581f89);
    cVar5 = cStack_49;
    uVar4 = uStack_50;
    uVar3 = uStack_51;
    uVar2 = uStack_58;
    uVar1 = uStack_60;
    uStack_58 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    cStack_49 = 0;
    uStack_60 = 0;
    puVar8[1] = uVar1;
    puVar8[2] = CONCAT17(uVar3,uVar2);
    *(ulong *)((long)puVar8 + 0x17) = CONCAT71(uVar4,uVar3);
    *(char *)((long)puVar8 + 0x1f) = cVar5;
    *puVar8 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar8,&PTR_DAT_110b16580,FUN_109883ca4);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109884254);
    (*pcVar6)();
  }
  plVar7 = (long *)(ulong)bStack_40;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
    if ((3 < aiStack_48[0]) && ((undefined8 *)CONCAT71(uStack_3f,bStack_40) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT71(uStack_3f,bStack_40))();
    }
    __Unwind_Resume();
    (**(code **)(*plVar7 + 0x30))(&puStack_a0);
    FUN_1098843c0(&puStack_98,&puStack_a0,plVar7,&DAT_10f581f75);
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)();
    }
    FUN_1098843c0(&puStack_a0,&puStack_98,plVar7,&UNK_10f581fbf);
    plVar9 = plVar7;
    (**(code **)(*plVar7 + 0x98))(plVar7,puStack_a0);
    plStack_a8 = plVar9;
    (**(code **)(*plVar7 + 0x2e8))(plVar7,param_2,&plStack_a8);
    if (plStack_a8 != (long *)0x0) {
      (**(code **)*plStack_a8)();
    }
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)(puStack_a0);
    }
    if (puStack_98 != (undefined8 *)0x0) {
      (**(code **)*puStack_98)();
    }
    return plVar7;
  }
  return plVar7;
}



/* Entry: 1098842bc; end: 1098843bf;  */

long * FUN_1098842bc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  (**(code **)(*param_1 + 0x30))(&puStack_40);
  FUN_1098843c0(&puStack_38,&puStack_40,param_1,&DAT_10f581f75);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  FUN_1098843c0(&puStack_40,&puStack_38,param_1,&UNK_10f581fbf);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,puStack_40);
  plStack_48 = plVar1;
  (**(code **)(*param_1 + 0x2e8))(param_1,param_2,&plStack_48);
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)(puStack_40);
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return param_1;
}



/* Entry: 1098843c0; end: 10988447b;  */

void FUN_1098843c0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uVar1 = param_4;
  _strlen(param_4);
  (**(code **)(*param_3 + 0x120))(&puStack_38,param_3,param_4,uVar1);
  (**(code **)(*param_3 + 0x1a8))(auStack_48,param_3,param_2,&puStack_38);
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  *param_1 = uStack_40;
  return;
}



/* Entry: 10988447c; end: 109884517;  */

long * FUN_10988447c(long *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  (**(code **)(*param_1 + 0x30))(&puStack_30);
  FUN_1098843c0(&puStack_28,&puStack_30,param_1,&DAT_10f581f75);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,param_2,&puStack_28);
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return param_1;
}



/* Entry: 109884518; end: 10988469b;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109884610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x000109884614) */
/* WARNING: Removing unreachable block (ram,0x000109884618) */
/* WARNING: Removing unreachable block (ram,0x000109884620) */
/* WARNING: Removing unreachable block (ram,0x00010988462c) */

ulong * FUN_109884518(ulong *param_1,int *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *unaff_x19;
  long *unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar3 = *param_2;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      puVar5 = (ulong *)&UNK_10f582132;
    }
    else if (iVar3 == 1) {
      puVar5 = (ulong *)&UNK_10f58213c;
    }
    else {
      if (iVar3 != 2) goto LAB_1098845c0;
      puVar5 = (ulong *)&UNK_10f582141;
      if ((char)param_2[2] == '\0') {
        puVar5 = (ulong *)&UNK_10f582146;
      }
    }
  }
  else if (iVar3 < 5) {
    if (iVar3 == 3) {
      puVar5 = (ulong *)&UNK_10f58214c;
    }
    else if (iVar3 == 4) {
      puVar5 = (ulong *)&UNK_10f58215e;
    }
    else {
LAB_1098845c0:
      unaff_x21 = (ulong *)&UNK_10f58217b;
      if (param_3 != (long *)0x0) {
        plVar7 = param_3;
        (**(code **)(*param_3 + 0x98))(param_3,*(undefined8 *)(param_2 + 2));
        plVar8 = param_3;
        plStack_38 = plVar7;
        (**(code **)(*param_3 + 0x228))(param_3,&plStack_38);
        unaff_x21 = (ulong *)&UNK_10f582170;
        if ((int)plVar8 == 0) {
          unaff_x21 = (ulong *)&UNK_10f58217b;
        }
      }
      unaff_x30 = (undefined *)0x109884614;
      register0x00000008 = (BADSPACEBASE *)auStack_40;
      puVar5 = unaff_x21;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
      unaff_x20 = param_3;
    }
  }
  else if (iVar3 == 5) {
    puVar5 = (ulong *)&UNK_10f582167;
  }
  else {
    if (iVar3 != 6) goto LAB_1098845c0;
    puVar5 = (ulong *)&UNK_10f582155;
  }
  while( true ) {
    puVar9 = puVar5;
    puVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = puVar9;
    func_0x000107c613d0();
    if (puVar5 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = puVar4;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar5;
    }
    puVar5 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar5 == 0) {
      return puVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (ulong *)0x1132dfae8;
    puVar5 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar4;
    unaff_x21 = puVar9;
  }
  if (puVar5 < (ulong *)0x17) {
    *(char *)((long)puVar4 + 0x17) = (char)puVar5;
    puVar6 = puVar4;
    if (puVar5 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar5 | 7) + 1);
    }
    puVar6 = puVar2;
    func_0x000107c60e20();
    puVar4[1] = (ulong)puVar5;
    puVar4[2] = (ulong)puVar2 | 0x8000000000000000;
    *puVar4 = (ulong)puVar6;
  }
  func_0x000107c610b8(puVar6,puVar9,puVar5);
code_r0x00010002d55c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return puVar4;
}



/* Entry: 10988469c; end: 10988481f;  */

void FUN_10988469c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 auStack_88 [2];
  long *plStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x208))(param_3,param_2);
  if (((ulong)plVar2 & 1) != 0) {
    uVar3 = *param_2;
    *param_2 = 0;
    *param_1 = uVar3;
    return;
  }
  uVar3 = 0x60;
  ___cxa_allocate_exception(0x60);
  auStack_88[0] = 7;
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x98))(param_3,*param_2);
  plStack_80 = plVar2;
  FUN_109884518(auStack_78,auStack_88,param_3);
  FUN_10928a5e0(auStack_60,&UNK_10f58203c,auStack_78);
  FUN_109259240(auStack_48,auStack_60,&UNK_10f582047);
  FUN_1098807a8(uVar3,param_3,auStack_48);
  ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109884790);
  (*pcVar1)();
}



/* Entry: 109884820; end: 1098849a3;  */

void FUN_109884820(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 auStack_88 [2];
  long *plStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x228))(param_3,param_2);
  if (((ulong)plVar2 & 1) != 0) {
    uVar3 = *param_2;
    *param_2 = 0;
    *param_1 = uVar3;
    return;
  }
  uVar3 = 0x60;
  ___cxa_allocate_exception(0x60);
  auStack_88[0] = 7;
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x98))(param_3,*param_2);
  plStack_80 = plVar2;
  FUN_109884518(auStack_78,auStack_88,param_3);
  FUN_10928a5e0(auStack_60,&UNK_10f58203c,auStack_78);
  FUN_109259240(auStack_48,auStack_60,&UNK_10f58205b);
  FUN_1098807a8(uVar3,param_3,auStack_48);
  ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109884914);
  (*pcVar1)();
}



/* Entry: 1098849a4; end: 109884a8f;  */

int * FUN_1098849a4(int *param_1,long *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = iVar1;
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      *(char *)(param_1 + 2) = (char)param_3[2];
      return param_1;
    }
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      return param_1;
    }
  }
  else {
    if (iVar1 == 4) {
      (**(code **)(*param_2 + 0x80))(param_2,*(undefined8 *)(param_3 + 2));
      goto LAB_109884a78;
    }
    if (iVar1 == 5) {
      (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 2));
      goto LAB_109884a78;
    }
    if (iVar1 == 6) {
      (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_3 + 2));
      goto LAB_109884a78;
    }
  }
  if (iVar1 < 7) {
    return param_1;
  }
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
LAB_109884a78:
  *(long **)(param_1 + 2) = param_2;
  return param_1;
}



/* Entry: 109884a90; end: 109884c0b;  */

/* WARNING: Removing unreachable block (ram,0x000109884bfc) */

void FUN_109884a90(int *param_1,long *param_2)

{
  undefined7 uVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  char cStack_49;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 != 3) {
    puVar6 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    FUN_109884518(auStack_90,param_1,0);
    FUN_10928a5e0(auStack_78,&UNK_10f582071,auStack_90);
    FUN_109259240(&uStack_60,auStack_78,&UNK_10f58207b);
    cVar4 = cStack_49;
    uVar3 = uStack_50;
    uVar2 = uStack_51;
    uVar1 = uStack_58;
    uStack_58 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    cStack_49 = 0;
    puVar6[1] = uStack_60;
    puVar6[2] = CONCAT17(uVar2,uVar1);
    *(ulong *)((long)puVar6 + 0x17) = CONCAT71(uVar3,uVar2);
    uStack_60 = 0;
    *(char *)((long)puVar6 + 0x1f) = cVar4;
    *puVar6 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar6,&PTR_DAT_110b16580,FUN_109883ca4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109884b90);
    (*pcVar5)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail(*(undefined8 *)(param_1 + 2));
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    __Unwind_Resume();
    if (*param_1 != 7) {
      uVar7 = 0x60;
      ___cxa_allocate_exception(0x60);
      FUN_109884518(auStack_108,param_1,param_2);
      FUN_10928a5e0(auStack_f0,&UNK_10f582071,auStack_108);
      FUN_109259240(auStack_d8,auStack_f0,&UNK_10f581fef);
      FUN_1098807a8(uVar7,param_2,auStack_d8);
      ___cxa_throw(uVar7,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109884cdc);
      (*pcVar5)();
    }
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1 + 2));
    *extraout_x8 = param_2;
    return;
  }
  return;
}



/* Entry: 109884c0c; end: 109884d4f;  */

void FUN_109884c0c(undefined8 *param_1,int *param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_2 == 7) {
    (**(code **)(*param_3 + 0x98))(param_3,*(undefined8 *)(param_2 + 2));
    *param_1 = param_3;
    return;
  }
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109884518(auStack_78,param_2,param_3);
  FUN_10928a5e0(auStack_60,&UNK_10f582071,auStack_78);
  FUN_109259240(auStack_48,auStack_60,&UNK_10f581fef);
  FUN_1098807a8(uVar2,param_3,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109884cdc);
  (*pcVar1)();
}



/* Entry: 109884d50; end: 109884ed3;  */

void FUN_109884d50(undefined8 param_1,int *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  long *aplStack_60 [3];
  undefined1 auStack_48 [24];
  
  if (*param_2 == 7) {
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x98))(param_3,*(undefined8 *)(param_2 + 2));
    aplStack_60[0] = plVar2;
    FUN_109884820(param_1,aplStack_60,param_3);
    if (aplStack_60[0] != (long *)0x0) {
      (**(code **)*aplStack_60[0])();
    }
    return;
  }
  uVar3 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109884518(auStack_78,param_2,param_3);
  FUN_10928a5e0(aplStack_60,&UNK_10f582071,auStack_78);
  FUN_109259240(auStack_48,aplStack_60,&UNK_10f58205b);
  FUN_1098807a8(uVar3,param_3,auStack_48);
  ___cxa_throw(uVar3,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109884e44);
  (*pcVar1)();
}



/* Entry: 109884ed4; end: 109885043;  */

void FUN_109884ed4(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined8 *apuStack_60 [3];
  undefined1 auStack_48 [24];
  
  if (*param_1 == 7) {
    apuStack_60[0] = *(undefined8 **)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_109884820(apuStack_60,param_2);
    if (apuStack_60[0] != (undefined8 *)0x0) {
      (**(code **)*apuStack_60[0])();
    }
    return;
  }
  uVar2 = 0x60;
  ___cxa_allocate_exception(0x60);
  FUN_109884518(auStack_78,param_1,param_2);
  FUN_10928a5e0(apuStack_60,&UNK_10f582071,auStack_78);
  FUN_109259240(auStack_48,apuStack_60,&UNK_10f58205b);
  FUN_1098807a8(uVar2,param_2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110b164e0,FUN_109880bb8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109884fb4);
  (*pcVar1)();
}



/* Entry: 109885044; end: 1098851e3;  */

void FUN_109885044(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  int aiStack_48 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_3 + 0x30))(&iStack_58,param_3);
  FUN_1098811a4(&puStack_60,&iStack_58,param_3,"String");
  if ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
  }
  FUN_1098849a4(aiStack_48,param_3,param_2);
  iStack_58 = 0;
  (**(code **)(*param_3 + 0x2a8))(auStack_70,param_3,&puStack_60,&iStack_58,aiStack_48,1);
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if ((3 < aiStack_48[0]) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  *param_1 = uStack_68;
  puVar1 = puStack_60;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
      (**(code **)*puStack_50)();
    }
    if ((3 < aiStack_48[0]) && (puStack_40 != (undefined8 *)0x0)) {
      (**(code **)*puStack_40)();
    }
    if (puStack_60 != (undefined8 *)0x0) {
      (**(code **)*puStack_60)();
    }
    __Unwind_Resume(puVar1);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return;
  }
  return;
}



/* Entry: 1098851e4; end: 1098851fb;  */

void FUN_1098851e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1098851fc; end: 109886033;  */

/* WARNING: Removing unreachable block (ram,0x000109885e78) */

long ******* FUN_1098851fc(long param_1,long *******param_2,undefined8 param_3)

{
  long *******ppppppplVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined6 uVar6;
  long *******ppppppplVar7;
  undefined8 *puVar8;
  int iVar9;
  long *******ppppppplVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long ******pppppplVar15;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined7 uStack_a0;
  byte bStack_99;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 *puStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  long ******pppppplStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  byte bStack_51;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined6 uStack_47;
  undefined1 uStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar9 = (int)&uStack_b0;
  puVar8 = &uStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1098873f8(&uStack_b0,&uStack_50,param_3);
  ppppppplVar10 = (long *******)(param_1 + 0x20);
  FUN_109886668();
  ppppppplVar7 = (long *******)CONCAT71(uStack_a7,uStack_a8);
  if (ppppppplVar7 != (long *******)0x0) {
    ppppppplVar1 = ppppppplVar7 + 1;
    do {
      pppppplVar15 = *ppppppplVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
      if (bVar5) {
        *ppppppplVar1 = (long ******)((long)pppppplVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppplVar15 == (long ******)0x0) {
      (*(code *)(*ppppppplVar7)[2])(ppppppplVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppplVar10 = ppppppplVar7;
    }
  }
  uVar13 = (ulong)*(char *)(param_1 + 0x47);
  uVar2 = uVar13;
  if ((long)uVar13 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar2 != 0) {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      if (*(long *)(param_1 + 0x50) != 0) goto LAB_109885870;
    }
    else if (*(char *)(param_1 + 0x5f) != '\0') goto LAB_109885870;
  }
  if (**(int **)(param_1 + 0x20) != 7) goto LAB_109885870;
  ppppppplVar10 = *(long ********)(*(int **)(param_1 + 0x20) + 2);
  ppppppplVar7 = param_2;
  (*(code *)(*param_2)[0x13])();
  pppppplStack_78 = (long ******)ppppppplVar7;
  if (*(char *)(param_1 + 0x47) < '\0') {
    if (*(long *)(param_1 + 0x38) != 0) goto LAB_109885650;
  }
  else if (*(char *)(param_1 + 0x47) != '\0') goto LAB_109885650;
  (*(code *)(*param_2)[0x24])(&iStack_98,param_2,"message",7);
  ppppppplVar10 = &pppppplStack_78;
  (*(code *)(*param_2)[0x35])(&uStack_88,param_2,ppppppplVar10,&iStack_98);
  if ((undefined8 *)CONCAT44(uStack_94,iStack_98) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_94,iStack_98))();
  }
  if (uStack_88 == 0) goto LAB_109885650;
  if (uStack_88 == 6) {
LAB_10988534c:
    (*(code *)(*param_2)[0x24])(&puStack_70,param_2,&DAT_10f68f148,4);
    (*(code *)(*param_2)[0x35])(&iStack_98,param_2,&pppppplStack_78,&puStack_70);
    if (puStack_70 != (undefined8 *)0x0) {
      (**(code **)*puStack_70)();
    }
    ppppppplVar10 = param_2;
    (*(code *)(*param_2)[0x12])(param_2,puStack_90);
    uStack_50 = (uint)ppppppplVar10;
    uStack_4c = (undefined4)((ulong)ppppppplVar10 >> 0x20);
    (*(code *)(*param_2)[0x27])(&uStack_b0,param_2,&uStack_50);
    if ((undefined8 *)CONCAT44(uStack_4c,uStack_50) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_4c,uStack_50))();
    }
    if ((char)bStack_99 < '\0') {
      if (CONCAT71(uStack_a7,uStack_a8) == 0) goto LAB_109885474;
      func_0x000107c3192c(&uStack_50,CONCAT44(uStack_b0._4_4_,(uint)uStack_b0));
    }
    else if (bStack_99 == 0) {
LAB_109885474:
      func_0x000107c31940(&uStack_50,&DAT_10f685520);
    }
    else {
      uStack_48 = uStack_a8;
      uStack_47 = (undefined6)uStack_a7;
      uStack_41 = (undefined1)((uint7)uStack_a7 >> 0x30);
      uStack_50 = (uint)uStack_b0;
      uStack_4c = uStack_b0._4_4_;
      uStack_40 = CONCAT17(bStack_99,uStack_a0);
    }
    if (*(char *)(param_1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
    }
    *(ulong *)(param_1 + 0x38) = CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48));
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
    ppppppplVar10 = param_2;
    (*(code *)(*param_2)[0x12])(param_2,puStack_80);
    uStack_68._0_7_ = SUB87(ppppppplVar10,0);
    uStack_68._7_1_ = (undefined1)((ulong)ppppppplVar10 >> 0x38);
    ppppppplVar10 = (long *******)&uStack_68;
    (*(code *)(*param_2)[0x27])(&uStack_50,param_2);
    if ((undefined8 *)CONCAT17(uStack_68._7_1_,(undefined7)uStack_68) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT17(uStack_68._7_1_,(undefined7)uStack_68))();
    }
    uVar12 = (uint)(char)uStack_40._7_1_;
    uVar2 = CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48));
    if (-1 < (int)uVar12) {
      uVar2 = (ulong)uStack_40._7_1_;
    }
    if (uVar2 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_68,": ",&uStack_50);
      uVar2 = CONCAT17(uStack_59,uStack_60);
      ppppppplVar10 = (long *******)CONCAT17(uStack_68._7_1_,(undefined7)uStack_68);
      if (-1 < (char)bStack_51) {
        uVar2 = (ulong)bStack_51;
        ppppppplVar10 = (long *******)&uStack_68;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1 + 0x30,ppppppplVar10,uVar2);
      if ((char)bStack_51 < '\0') {
        __ZdlPv(CONCAT17(uStack_68._7_1_,(undefined7)uStack_68));
      }
      uVar12 = (uint)uStack_40._7_1_;
    }
    if ((uVar12 >> 7 & 1) != 0) {
      __ZdlPv(CONCAT44(uStack_4c,uStack_50));
    }
    if ((char)bStack_99 < '\0') {
      __ZdlPv(CONCAT44(uStack_b0._4_4_,(uint)uStack_b0));
    }
    if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
      (**(code **)*puStack_90)();
    }
  }
  else {
    ppppppplVar10 = param_2;
    FUN_1098860e4(&uStack_b0,param_2,"String",&uStack_88);
    if ((3 < (int)uStack_88) && (puStack_80 != (undefined8 *)0x0)) {
      (**(code **)*puStack_80)();
    }
    uStack_88 = (uint)uStack_b0;
    if ((uint)uStack_b0 == 3) {
      puStack_80 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
    }
    else if ((uint)uStack_b0 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,uStack_a8);
    }
    else if ((int)(uint)uStack_b0 < 4) {
      if ((uint)uStack_b0 == 0) goto LAB_109885630;
    }
    else {
      puStack_80 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
      if ((uint)uStack_b0 == 6) goto LAB_10988534c;
    }
    FUN_109884518(&uStack_b0,&uStack_88,param_2);
    ppppppplVar10 = (long *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (&uStack_b0,0,&UNK_10f5820a0,0x17);
    uVar11 = *puVar8;
    uStack_50 = (uint)puVar8[1];
    uVar14 = *(undefined8 *)((long)puVar8 + 0xf);
    uStack_4c._0_3_ = (undefined3)((ulong)puVar8[1] >> 0x20);
    uStack_4c._3_1_ = (undefined1)uVar14;
    uStack_48 = (undefined1)((ulong)uVar14 >> 8);
    uStack_47 = (undefined6)((ulong)uVar14 >> 0x10);
    uVar3 = *(undefined1 *)((long)puVar8 + 0x17);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    if (*(char *)(param_1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_4c,uStack_50);
    *(ulong *)(param_1 + 0x3f) = CONCAT62(uStack_47,CONCAT11(uStack_48,uStack_4c._3_1_));
    *(undefined1 *)(param_1 + 0x47) = uVar3;
    if ((char)bStack_99 < '\0') {
      __ZdlPv(CONCAT44(uStack_b0._4_4_,(uint)uStack_b0));
    }
  }
LAB_109885630:
  if ((3 < (int)uStack_88) && (puStack_80 != (undefined8 *)0x0)) {
    (**(code **)*puStack_80)();
  }
LAB_109885650:
  do {
    iVar9 = (int)ppppppplVar10;
    if (*(char *)(param_1 + 0x5f) < '\0') {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_109885668;
    }
    else if (*(char *)(param_1 + 0x5f) == '\0') {
LAB_109885668:
      (*(code *)(*param_2)[0x24])(&uStack_88,param_2,&DAT_10f3b067d,5);
      ppppppplVar10 = &pppppplStack_78;
      (*(code *)(*param_2)[0x35])(&uStack_50,param_2,ppppppplVar10,&uStack_88);
      iVar9 = (int)ppppppplVar10;
      if ((undefined8 *)CONCAT44(uStack_84,uStack_88) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_84,uStack_88))();
      }
      if (uStack_50 != 0) {
        if (uStack_50 == 6) {
          uVar11 = CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48));
LAB_1098856cc:
          ppppppplVar10 = param_2;
          (*(code *)(*param_2)[0x12])(param_2,uVar11);
          uStack_68._0_7_ = SUB87(ppppppplVar10,0);
          uStack_68._7_1_ = (undefined1)((ulong)ppppppplVar10 >> 0x38);
          iVar9 = (int)&uStack_68;
          (*(code *)(*param_2)[0x27])(&uStack_b0,param_2);
          if (*(char *)(param_1 + 0x5f) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0x48));
          }
          *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_a7,uStack_a8);
          *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
          *(ulong *)(param_1 + 0x58) = CONCAT17(bStack_99,uStack_a0);
          bStack_99 = 0;
          uStack_b0._0_4_ = (uint)uStack_b0 & 0xffffff00;
          if ((undefined8 *)CONCAT17(uStack_68._7_1_,(undefined7)uStack_68) != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)CONCAT17(uStack_68._7_1_,(undefined7)uStack_68))();
          }
        }
        else {
          ppppppplVar10 = param_2;
          FUN_1098860e4(&uStack_b0,param_2,"String",&uStack_50);
          iVar9 = (int)ppppppplVar10;
          if ((3 < (int)uStack_50) &&
             (puVar8 = (undefined8 *)CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48)),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
          uVar3 = uStack_41;
          uVar6 = uStack_47;
          uStack_50 = (uint)uStack_b0;
          uStack_41 = (undefined1)((uint7)uStack_a7 >> 0x30);
          uStack_47 = (undefined6)uStack_a7;
          if ((uint)uStack_b0 == 3) {
            uStack_48 = uStack_a8;
          }
          else if ((uint)uStack_b0 == 2) {
            uStack_48 = uStack_a8;
            uStack_47 = uVar6;
            uStack_41 = uVar3;
          }
          else if ((int)(uint)uStack_b0 < 4) {
            uStack_47 = uVar6;
            uStack_41 = uVar3;
            if ((uint)uStack_b0 == 0) goto LAB_109885838;
          }
          else {
            uVar11 = CONCAT71(uStack_a7,uStack_a8);
            uStack_48 = uStack_a8;
            if ((uint)uStack_b0 == 6) goto LAB_1098856cc;
          }
          FUN_109884518(&uStack_b0,&uStack_50,param_2);
          iVar9 = 0;
          puVar8 = &uStack_b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (&uStack_b0,0,&UNK_10f5820e3,0x15);
          uVar11 = *puVar8;
          uStack_68._0_7_ = (undefined7)puVar8[1];
          uStack_68._7_1_ = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
          uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
          uVar3 = *(undefined1 *)((long)puVar8 + 0x17);
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          if (*(char *)(param_1 + 0x5f) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0x48));
          }
          *(undefined8 *)(param_1 + 0x48) = uVar11;
          *(ulong *)(param_1 + 0x50) = CONCAT17(uStack_68._7_1_,(undefined7)uStack_68);
          *(ulong *)(param_1 + 0x57) = CONCAT71(uStack_60,uStack_68._7_1_);
          *(undefined1 *)(param_1 + 0x5f) = uVar3;
          if ((char)bStack_99 < '\0') {
            __ZdlPv(CONCAT44(uStack_b0._4_4_,(uint)uStack_b0));
          }
        }
LAB_109885838:
        if ((3 < (int)uStack_50) &&
           (puVar8 = (undefined8 *)CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48)),
           puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
    }
    ppppppplVar10 = (long *******)pppppplStack_78;
    if ((long *******)pppppplStack_78 != (long *******)0x0) {
      (*(code *)**pppppplStack_78)();
    }
    uVar13 = (ulong)*(byte *)(param_1 + 0x47);
LAB_109885870:
    if (((uint)uVar13 >> 7 & 1) == 0) {
      uVar13 = uVar13 & 0xff;
    }
    else {
      uVar13 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar13 == 0) {
      if (**(int **)(param_1 + 0x20) == 6) {
        ppppppplVar10 = param_2;
        (*(code *)(*param_2)[0x12])(param_2,*(undefined8 *)(*(int **)(param_1 + 0x20) + 2));
        uStack_50 = (uint)ppppppplVar10;
        uStack_4c = (undefined4)((ulong)ppppppplVar10 >> 0x20);
        iVar9 = (int)&uStack_50;
        (*(code *)(*param_2)[0x27])(&uStack_b0,param_2);
        if (*(char *)(param_1 + 0x47) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0x30));
        }
        *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_a7,uStack_a8);
        *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
        *(ulong *)(param_1 + 0x40) = CONCAT17(bStack_99,uStack_a0);
        bStack_99 = 0;
        uStack_b0._0_4_ = (uint)uStack_b0 & 0xffffff00;
        ppppppplVar10 = (long *******)CONCAT44(uStack_4c,uStack_50);
      }
      else {
        FUN_1098860e4(&uStack_50,param_2,"String");
        if (uStack_50 == 6) {
          ppppppplVar10 = param_2;
          (*(code *)(*param_2)[0x12])(param_2,CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48)));
          uStack_68._0_7_ = SUB87(ppppppplVar10,0);
          uStack_68._7_1_ = (undefined1)((ulong)ppppppplVar10 >> 0x38);
          iVar9 = (int)&uStack_68;
          (*(code *)(*param_2)[0x27])(&uStack_b0,param_2);
          if (*(char *)(param_1 + 0x47) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0x30));
          }
          *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_a7,uStack_a8);
          *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
          *(ulong *)(param_1 + 0x40) = CONCAT17(bStack_99,uStack_a0);
          bStack_99 = 0;
          uStack_b0._0_4_ = (uint)uStack_b0 & 0xffffff00;
          ppppppplVar10 = (long *******)CONCAT17(uStack_68._7_1_,(undefined7)uStack_68);
          if (ppppppplVar10 != (long *******)0x0) {
            (*(code *)**ppppppplVar10)();
          }
        }
        else {
          FUN_109884518(&uStack_b0,&uStack_50,param_2);
          iVar9 = 0;
          ppppppplVar10 = (long *******)&uStack_b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (&uStack_b0,0,&UNK_10f582122,0xf);
          param_2 = (long *******)*ppppppplVar10;
          uStack_68._0_7_ = SUB87(ppppppplVar10[1],0);
          uStack_68._7_1_ = (undefined1)*(undefined8 *)((long)ppppppplVar10 + 0xf);
          uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)ppppppplVar10 + 0xf) >> 8);
          uVar3 = *(undefined1 *)((long)ppppppplVar10 + 0x17);
          ppppppplVar10[1] = (long ******)0x0;
          ppppppplVar10[2] = (long ******)0x0;
          *ppppppplVar10 = (long ******)0x0;
          if (*(char *)(param_1 + 0x47) < '\0') {
            ppppppplVar10 = *(long ********)(param_1 + 0x30);
            __ZdlPv();
          }
          *(long ********)(param_1 + 0x30) = param_2;
          *(ulong *)(param_1 + 0x38) = CONCAT17(uStack_68._7_1_,(undefined7)uStack_68);
          *(ulong *)(param_1 + 0x3f) = CONCAT71(uStack_60,uStack_68._7_1_);
          *(undefined1 *)(param_1 + 0x47) = uVar3;
          if ((char)bStack_99 < '\0') {
            ppppppplVar10 = (long *******)CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
            __ZdlPv();
          }
        }
        if ((int)uStack_50 < 4) goto LAB_109885a24;
        ppppppplVar10 = (long *******)CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48));
      }
      if (ppppppplVar10 != (long *******)0x0) {
        (*(code *)**ppppppplVar10)();
      }
    }
LAB_109885a24:
    if (*(char *)(param_1 + 0x1f) < '\0') {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_109885a3c;
    }
    else if (*(char *)(param_1 + 0x1f) == '\0') {
LAB_109885a3c:
      ppppppplVar10 = (long *******)(param_1 + 8);
      iVar9 = (int)param_1 + 0x30;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      if (*(char *)(param_1 + 0x5f) < '\0') {
        if (*(long *)(param_1 + 0x50) != 0) goto LAB_109885a60;
      }
      else if (*(char *)(param_1 + 0x5f) != '\0') {
LAB_109885a60:
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&uStack_b0,&DAT_10f590110,param_1 + 0x48);
        uVar2 = CONCAT71(uStack_a7,uStack_a8);
        puVar8 = (undefined8 *)CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
        if (-1 < (char)bStack_99) {
          uVar2 = (ulong)bStack_99;
          puVar8 = &uStack_b0;
        }
        ppppppplVar10 = (long *******)(param_1 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppplVar10,puVar8,uVar2);
        iVar9 = (int)puVar8;
        param_2 = (long *******)&uStack_b0;
        if ((char)bStack_99 < '\0') {
          ppppppplVar10 = (long *******)CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
          __ZdlPv();
          param_2 = (long *******)&uStack_b0;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return ppppppplVar10;
    }
    ___stack_chk_fail();
    if ((char)bStack_99 < '\0') {
      __ZdlPv(CONCAT44(uStack_b0._4_4_,(uint)uStack_b0));
    }
    if ((3 < iStack_98) && (puStack_90 != (undefined8 *)0x0)) {
      (**(code **)*puStack_90)();
    }
    if ((3 < (int)uStack_88) && (puStack_80 != (undefined8 *)0x0)) {
      (**(code **)*puStack_80)();
    }
    if (iVar9 != 1) {
      if ((long *******)pppppplStack_78 != (long *******)0x0) {
        (*(code *)**pppppplStack_78)();
      }
      __Unwind_Resume();
      ppppppplVar10[1] = (long ******)0x0;
      ppppppplVar10[2] = (long ******)0x0;
      ppppppplVar10[3] = (long ******)0x0;
      *ppppppplVar10 = (long ******)&PTR_FUN_110b165c0;
      ppppppplVar10[5] = (long ******)0x0;
      ppppppplVar10[4] = (long ******)0x0;
      ppppppplVar10[7] = (long ******)0x0;
      ppppppplVar10[6] = (long ******)0x0;
      ppppppplVar10[9] = (long ******)0x0;
      ppppppplVar10[8] = (long ******)0x0;
      ppppppplVar10[0xb] = (long ******)0x0;
      ppppppplVar10[10] = (long ******)0x0;
      FUN_1098851fc();
      return ppppppplVar10;
    }
    ___cxa_begin_catch();
    func_0x000107c31940(&uStack_68,&UNK_10f5820b8);
    (*(code *)(*ppppppplVar10)[2])(ppppppplVar10);
    FUN_109259240(&uStack_50,&uStack_68,ppppppplVar10);
    ppppppplVar10 = (long *******)&DAT_10f62a9ea;
    FUN_109259240(&uStack_b0,&uStack_50);
    if (*(char *)(param_1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
    }
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_a7,uStack_a8);
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0);
    *(ulong *)(param_1 + 0x40) = CONCAT17(bStack_99,uStack_a0);
    bStack_99 = 0;
    uStack_b0._0_4_ = (uint)uStack_b0 & 0xffffff00;
    if ((char)bStack_51 < '\0') {
      __ZdlPv(CONCAT17(uStack_68._7_1_,(undefined7)uStack_68));
    }
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 109886034; end: 1098860e3;  */

undefined8 * FUN_109886034(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110b165c0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1098851fc();
  return param_1;
}



/* Entry: 1098860e4; end: 109886667;  */

/* WARNING: Removing unreachable block (ram,0x000109886530) */
/* WARNING: Removing unreachable block (ram,0x0001098864c8) */
/* WARNING: Removing unreachable block (ram,0x000109886594) */

long * FUN_1098860e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined7 uVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uStack_118;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined8 ***pppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  long *aplStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  char cStack_99;
  int aiStack_98 [2];
  long *plStack_90;
  undefined8 uStack_88;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 *puStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x30))(&iStack_70,param_2);
  uVar9 = param_3;
  _strlen(param_3);
  (**(code **)(*param_2 + 0x120))(&puStack_d0,param_2,param_3,uVar9);
  (**(code **)(*param_2 + 0x1a8))(aiStack_98,param_2,&iStack_70,&puStack_d0);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if ((undefined8 *)CONCAT44(uStack_6c,iStack_70) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_6c,iStack_70))();
  }
  if (aiStack_98[0] == 7) {
    plVar14 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,plStack_90);
    plVar10 = param_2;
    aplStack_e8[0] = plVar14;
    (**(code **)(*param_2 + 0x228))(param_2,aplStack_e8);
    plVar14 = aplStack_e8[0];
    if (((ulong)plVar10 & 1) != 0) {
      aplStack_e8[0] = (long *)0x0;
      uStack_88._0_7_ = SUB87(plVar14,0);
      uStack_88._7_1_ = (undefined1)((ulong)plVar14 >> 0x38);
      FUN_1098849a4(&iStack_70,param_2,param_4);
      puStack_d0 = (undefined8 *)((ulong)puStack_d0 & 0xffffffff00000000);
      plVar14 = &uStack_88;
      (**(code **)(*param_2 + 0x2a8))(param_1,param_2,plVar14,&puStack_d0,&iStack_70,1);
      if ((3 < (int)puStack_d0) && (puStack_c8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_c8)();
      }
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
      if ((undefined8 *)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88))();
      }
      plVar10 = aplStack_e8[0];
      if (aplStack_e8[0] != (long *)0x0) {
        (**(code **)*aplStack_e8[0])();
      }
      if ((3 < aiStack_98[0]) && (plVar10 = plStack_90, plStack_90 != (long *)0x0)) {
        (**(code **)*plStack_90)();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return plVar10;
      }
      ___stack_chk_fail();
      if (cStack_99 < '\0') {
        __ZdlPv(uStack_b0);
      }
      if (uStack_c0._7_1_ < '\0') {
        __ZdlPv(puStack_d0);
      }
      if ((char)bStack_e9 < '\0') {
        __ZdlPv(pppuStack_100);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(aplStack_e8[0]);
      }
      if ((3 < aiStack_98[0]) && (plStack_90 != (long *)0x0)) {
        (**(code **)*plStack_90)();
      }
      __Unwind_Resume();
      lVar15 = plVar14[1];
      lVar13 = *plVar14;
      *plVar14 = 0;
      plVar14[1] = 0;
      plVar14 = (long *)plVar10[1];
      plVar10[1] = lVar15;
      *plVar10 = lVar13;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          lVar13 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      return plVar10;
    }
    puVar12 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(&iStack_70,&UNK_10f582185);
    FUN_109259240(&puStack_d0);
    FUN_109259240(&uStack_118,&puStack_d0,&UNK_10f5821ae);
    uVar7 = uStack_101;
    uVar6 = uStack_108;
    uVar5 = uStack_109;
    uVar4 = uStack_110;
    uVar9 = uStack_118;
    uStack_110 = 0;
    uStack_109 = 0;
    uStack_108 = 0;
    uStack_101 = 0;
    uStack_118 = 0;
    puVar12[1] = uVar9;
    puVar12[2] = CONCAT17(uVar5,uVar4);
    *(ulong *)((long)puVar12 + 0x17) = CONCAT71(uVar6,uVar5);
    *(undefined1 *)((long)puVar12 + 0x1f) = uVar7;
    *puVar12 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar12,&PTR_DAT_110b16580,FUN_109883ca4);
  }
  else {
    puVar12 = (undefined8 *)0x20;
    ___cxa_allocate_exception();
    func_0x000107c31940(aplStack_e8,&UNK_10f582185);
    FUN_109259240(&uStack_88,aplStack_e8,param_3);
    FUN_109259240(&iStack_70,&uStack_88,&UNK_10f581fe9);
    FUN_109884518(&pppuStack_100,aiStack_98,param_2);
    if (-1 < (char)bStack_e9) {
      uStack_f8 = (ulong)bStack_e9;
      pppuStack_100 = &pppuStack_100;
    }
    piVar11 = &iStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (piVar11,pppuStack_100,uStack_f8);
    puStack_c8 = *(undefined8 **)(piVar11 + 2);
    puStack_d0 = *(undefined8 **)piVar11;
    uStack_c0 = *(undefined8 *)(piVar11 + 4);
    piVar11[2] = 0;
    piVar11[3] = 0;
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[0] = 0;
    piVar11[1] = 0;
    FUN_109259240(&uStack_b0,&puStack_d0,&UNK_10f582026);
    cVar2 = cStack_99;
    uVar6 = uStack_a0;
    uVar5 = uStack_a1;
    uVar4 = uStack_a8;
    uStack_a8 = 0;
    uStack_a1 = 0;
    uStack_a0 = 0;
    cStack_99 = '\0';
    puVar12[1] = uStack_b0;
    puVar12[2] = CONCAT17(uVar5,uVar4);
    uStack_b0 = 0;
    *(ulong *)((long)puVar12 + 0x17) = CONCAT71(uVar6,uVar5);
    *(char *)((long)puVar12 + 0x1f) = cVar2;
    *puVar12 = &PTR_FUN_110b16660;
    ___cxa_throw(puVar12,&PTR_DAT_110b16580,FUN_109883ca4);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109886460);
  (*pcVar8)();
}



/* Entry: 109886668; end: 109886707;  */

undefined8 * FUN_109886668(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109886708; end: 10988672f;  */

void FUN_109886708(void)

{
  func_0x0001098866cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109886730; end: 1098867b3;  */

long * FUN_109886730(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x28)) = param_2[3];
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_1098873a0(param_1 + 4);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x28)) = param_2[2];
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1098867b4; end: 1098867d3;  */

void FUN_1098867b4(undefined8 param_1)

{
  FUN_109886730(param_1,&PTR_PTR_110b165d8);
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098867d4; end: 1098867ef;  */

undefined8 * FUN_1098867d4(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}



/* Entry: 1098867f0; end: 109886863;  */

void FUN_1098867f0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  lVar5 = param_3[1];
  uVar6 = *param_3;
  puVar4[1] = param_3[1];
  *puVar4 = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x000109886860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,param_2,puVar4,FUN_109886b58);
  return;
}



/* Entry: 109886864; end: 1098868bb;  */

void FUN_109886864(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_2 + 0x78))();
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar4 = param_2[1];
    lVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar5;
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
  }
  return;
}



/* Entry: 1098868bc; end: 109886903;  */

void FUN_1098868bc(void)

{
  return;
}



/* Entry: 109886904; end: 1098869c3;  */

void FUN_109886904(void)

{
  undefined7 uVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  func_0x000107c31940(&uStack_50,&UNK_10f5821de);
  uVar4 = uStack_39;
  uVar3 = uStack_40;
  uVar2 = uStack_41;
  uVar1 = uStack_48;
  uStack_48 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  puVar6[1] = uStack_50;
  puVar6[2] = CONCAT17(uVar2,uVar1);
  *(ulong *)((long)puVar6 + 0x17) = CONCAT71(uVar3,uVar2);
  uStack_50 = 0;
  *(undefined1 *)((long)puVar6 + 0x1f) = uVar4;
  *puVar6 = &PTR_FUN_110b16660;
  ___cxa_throw(puVar6,&PTR_DAT_110b16580,FUN_109883ca4);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109886998);
  (*pcVar5)();
}



/* Entry: 1098869c4; end: 109886a83;  */

void FUN_1098869c4(void)

{
  undefined7 uVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  func_0x000107c31940(&uStack_50,&UNK_10f5821de);
  uVar4 = uStack_39;
  uVar3 = uStack_40;
  uVar2 = uStack_41;
  uVar1 = uStack_48;
  uStack_48 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  puVar6[1] = uStack_50;
  puVar6[2] = CONCAT17(uVar2,uVar1);
  *(ulong *)((long)puVar6 + 0x17) = CONCAT71(uVar3,uVar2);
  uStack_50 = 0;
  *(undefined1 *)((long)puVar6 + 0x1f) = uVar4;
  *puVar6 = &PTR_FUN_110b16660;
  ___cxa_throw(puVar6,&PTR_DAT_110b16580,FUN_109883ca4);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109886a58);
  (*pcVar5)();
}



/* Entry: 109886a84; end: 109886ab3;  */

void FUN_109886a84(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0) {
    func_0x000104c4f740();
    plVar1 = (long *)*(long *)(param_1 + 0x50);
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      FUN_109886b10(plVar1 + 3);
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar2;
    }
    lVar2 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
    return;
  }
  __Znwm(param_2 << 1);
  return;
}



/* Entry: 109886ab4; end: 109886b0f;  */

void FUN_109886ab4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x50);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109886b10(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 109886b10; end: 109886b57;  */

long * FUN_109886b10(long *param_1)

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



/* Entry: 109886b58; end: 109886b73;  */

void FUN_109886b58(long param_1)

{
  if (param_1 != 0) {
    FUN_1092bc814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109886b74; end: 109886ceb;  */

long FUN_109886b74(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (uRam0000000113737e10 != 0) {
    uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
    uVar3 = (param_1 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = uRam0000000113737e10 - 1;
    if ((uRam0000000113737e10 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uRam0000000113737e10 <= uVar3) {
        uVar5 = 0;
        if (uRam0000000113737e10 != 0) {
          uVar5 = uVar3 / uRam0000000113737e10;
        }
        uVar5 = uVar3 - uVar5 * uRam0000000113737e10;
      }
    }
    plVar2 = *(long **)(lRam0000000113737e08 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != uVar3) break;
        if (plVar2[2] == param_1) {
          return (long)plVar2;
        }
      }
      if ((uRam0000000113737e10 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uRam0000000113737e10 <= uVar6) {
        uVar1 = 0;
        if (uRam0000000113737e10 != 0) {
          uVar1 = uVar6 / uRam0000000113737e10;
        }
        uVar6 = uVar6 - uVar1 * uRam0000000113737e10;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 109886cec; end: 10988709f;  */

long * FUN_109886cec(long *param_1,ulong param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  
  uVar13 = param_2 ^ param_3 << 1;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar13) {
          if (plVar7[2] == param_2 && plVar7[3] == param_3) {
            return plVar7;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar14 <= uVar8) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar6 * uVar14;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  lVar3 = *param_4;
  plVar7[3] = param_4[1];
  plVar7[2] = lVar3;
  plVar7[4] = 0;
  plVar7[5] = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar5) {
LAB_109886e44:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10988708c);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_109886e44;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_109887024;
    uVar13 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar5 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_109887024:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 1098870a0; end: 1098870e7;  */

void FUN_1098870a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_109886b10(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1098870e8; end: 1098870f7;  */

void FUN_1098870e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b167a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1098870f8; end: 109887117;  */

void FUN_1098870f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b167a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109887118; end: 109887127;  */

void FUN_109887118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109887120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109887128; end: 1098872cf;  */

undefined8 * FUN_109887128(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  *param_1 = &PTR_FUN_110b167f0;
  FUN_109883510();
  __ZNSt3__15mutex4lockEv(0x113737dc8);
  lVar3 = param_1[1];
  FUN_109886b74();
  plVar9 = (long *)(lVar3 + 0x28);
  while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
    (*(code *)plVar9[5])(plVar9[4]);
  }
  plVar9 = (long *)param_1[1];
  FUN_109886b74();
  uVar1 = uRam0000000113737e10;
  if (plVar9 == (long *)0x0) goto LAB_1098872ac;
  lVar3 = *plVar9;
  uVar4 = plVar9[1];
  uVar5 = uRam0000000113737e10 - 1;
  if ((uRam0000000113737e10 & uVar5) == 0) {
    uVar4 = uVar5 & uVar4;
  }
  else if (uRam0000000113737e10 <= uVar4) {
    uVar7 = 0;
    if (uRam0000000113737e10 != 0) {
      uVar7 = uVar4 / uRam0000000113737e10;
    }
    uVar4 = uVar4 - uVar7 * uRam0000000113737e10;
  }
  plVar2 = *(long **)(lRam0000000113737e08 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar9);
  if (plVar6 == (long *)0x113737e18) {
LAB_10988720c:
    if (lVar3 == 0) {
LAB_109887240:
      *(undefined8 *)(lRam0000000113737e08 + uVar4 * 8) = 0;
      lVar3 = *plVar9;
      goto LAB_109887248;
    }
    uVar7 = *(ulong *)(lVar3 + 8);
    if ((uRam0000000113737e10 & uVar5) == 0) {
      uVar8 = uVar7 & uVar5;
    }
    else {
      uVar8 = uVar7;
      if (uRam0000000113737e10 <= uVar7) {
        uVar8 = 0;
        if (uRam0000000113737e10 != 0) {
          uVar8 = uVar7 / uRam0000000113737e10;
        }
        uVar8 = uVar7 - uVar8 * uRam0000000113737e10;
      }
    }
    if (uVar8 != uVar4) goto LAB_109887240;
LAB_109887250:
    if ((uVar1 & uVar5) == 0) {
      uVar7 = uVar7 & uVar5;
    }
    else if (uVar1 <= uVar7) {
      uVar5 = 0;
      if (uVar1 != 0) {
        uVar5 = uVar7 / uVar1;
      }
      uVar7 = uVar7 - uVar5 * uVar1;
    }
    if (uVar7 != uVar4) {
      *(long **)(lRam0000000113737e08 + uVar7 * 8) = plVar6;
      lVar3 = *plVar9;
    }
  }
  else {
    uVar7 = plVar6[1];
    if ((uRam0000000113737e10 & uVar5) == 0) {
      uVar7 = uVar7 & uVar5;
    }
    else if (uRam0000000113737e10 <= uVar7) {
      uVar8 = 0;
      if (uRam0000000113737e10 != 0) {
        uVar8 = uVar7 / uRam0000000113737e10;
      }
      uVar7 = uVar7 - uVar8 * uRam0000000113737e10;
    }
    if (uVar7 != uVar4) goto LAB_10988720c;
LAB_109887248:
    if (lVar3 != 0) {
      uVar7 = *(ulong *)(lVar3 + 8);
      goto LAB_109887250;
    }
  }
  *plVar6 = lVar3;
  *plVar9 = 0;
  lRam0000000113737e20 = lRam0000000113737e20 + -1;
  FUN_109886b10(plVar9 + 3);
  __ZdlPv(plVar9);
LAB_1098872ac:
  __ZNSt3__15mutex6unlockEv(0x113737dc8);
  return param_1;
}



/* Entry: 1098872d0; end: 1098872e3;  */

void FUN_1098872d0(void)

{
  FUN_109887128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098872e4; end: 10988739f;  */

void FUN_1098872e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  int aiStack_40 [2];
  long *plStack_38;
  
  aiStack_40[0] = 7;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*param_4);
  plStack_38 = plVar1;
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,param_3,aiStack_40);
  if ((3 < aiStack_40[0]) && (plStack_38 != (long *)0x0)) {
    (**(code **)*plStack_38)();
  }
  return;
}



/* Entry: 1098873a0; end: 1098873f7;  */

long FUN_1098873a0(long param_1)

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



/* Entry: 1098873f8; end: 10988744f;  */

void FUN_1098873f8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  __Znwm();
  FUN_109887450();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109887450; end: 1098874c3;  */

void FUN_109887450(undefined8 *param_1,int *param_2)

{
  int iVar1;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b16848;
  param_1[1] = 0;
  iVar1 = *param_2;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 3) {
    param_1[4] = *(undefined8 *)(param_2 + 2);
  }
  else if (iVar1 == 2) {
    *(char *)(param_1 + 4) = (char)param_2[2];
  }
  else if (3 < iVar1) {
    param_1[4] = *(undefined8 *)(param_2 + 2);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  *param_2 = 0;
  return;
}



/* Entry: 1098874c4; end: 1098874e7;  */

void FUN_1098874c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b16848;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098874e8; end: 10988750f;  */

void FUN_1098874e8(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x18)) && (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109887504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 109887510; end: 10988759b;  */

undefined8 FUN_109887510(void)

{
  int iVar1;
  
  if ((bRam000000011382b578 & 1) == 0) {
    iVar1 = 0x1382b578;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011382b518 = 0;
      uRam000000011382b510 = 0;
      uRam000000011382b528 = 0;
      uRam000000011382b520 = 0;
      uRam000000011382b530 = 0x3f800000;
      uRam000000011382b538 = 0x32aaaba7;
      uRam000000011382b548 = 0;
      uRam000000011382b540 = 0;
      uRam000000011382b558 = 0;
      uRam000000011382b550 = 0;
      uRam000000011382b568 = 0;
      uRam000000011382b560 = 0;
      uRam000000011382b570 = 0;
      ___cxa_atexit(FUN_10988759c,0x11382b510,0x100000000);
      ___cxa_guard_release(0x11382b578);
    }
  }
  return 0x11382b510;
}



/* Entry: 10988759c; end: 1098875ff;  */

long * FUN_10988759c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27d38(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109887600; end: 109887bcf;  */

void FUN_109887600(long *param_1,undefined8 param_2,long ***param_3,undefined8 param_4,
                  long ***param_5)

{
  long ***ppplVar1;
  long ***ppplVar2;
  undefined8 *****pppppuVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *****pppppuVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *plVar15;
  long *plVar16;
  long *****ppppplVar17;
  long *****ppppplVar18;
  ulong uVar19;
  undefined8 ****ppppuStack_98;
  long **pplStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  long ***ppplStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  if ((long ***)0x7ffffffffffffff7 < param_5) {
    func_0x000104c4f6b8();
    goto LAB_109887b74;
  }
  if (param_5 < (long ***)0x17) {
    uStack_70 = (long ***)CONCAT17((char)param_5,(undefined7)uStack_70);
    ppppplVar18 = &pppplStack_80;
    if (param_5 != (long ***)0x0) goto LAB_109887688;
  }
  else {
    ppppplVar17 = (long *****)0x19;
    if (((ulong)param_5 | 7) != 0x17) {
      ppppplVar17 = (long *****)(((ulong)param_5 | 7) + 1);
    }
    ppppplVar18 = ppppplVar17;
    __Znwm();
    uStack_70 = (long ***)((ulong)ppppplVar17 | 0x8000000000000000);
    pppplStack_80 = (long ****)ppppplVar18;
    pplStack_78 = (long **)param_5;
LAB_109887688:
    _memmove(ppppplVar18,param_4,param_5);
  }
  *(undefined1 *)((long)ppppplVar18 + (long)param_5) = 0;
  if ((long ***)0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    goto LAB_109887b74;
  }
  if (param_3 < (long ***)0x17) {
    uStack_88 = (long ***)CONCAT17((char)param_3,(undefined7)uStack_88);
    pppppuVar7 = &ppppuStack_98;
    if (param_3 != (long ***)0x0) goto LAB_1098876e4;
  }
  else {
    pppppuVar3 = (undefined8 *****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppppuVar3 = (undefined8 *****)(((ulong)param_3 | 7) + 1);
    }
    pppppuVar7 = pppppuVar3;
    __Znwm();
    uStack_88 = (long ***)((ulong)pppppuVar3 | 0x8000000000000000);
    ppppuStack_98 = pppppuVar7;
    pplStack_90 = (long **)param_3;
LAB_1098876e4:
    _memmove(pppppuVar7,param_2,param_3);
  }
  *(undefined1 *)((long)pppppuVar7 + (long)param_3) = 0;
  ppplVar1 = (long ***)pplStack_78;
  ppppplVar17 = (long *****)pppplStack_80;
  if (-1 < (long)uStack_70) {
    ppplVar1 = (long ***)((ulong)uStack_70 >> 0x38);
    ppppplVar17 = &pppplStack_80;
  }
  ppppplVar8 = (long *****)&ppplStack_68;
  func_0x000107c2ac8c(ppppplVar8,ppppplVar17,ppplVar1);
  ppppplVar17 = (long *****)param_1[1];
  if (ppppplVar17 != (long *****)0x0) {
    uVar19 = (long)ppppplVar17 - 1;
    if (((ulong)ppppplVar17 & uVar19) == 0) {
      ppppplVar18 = (long *****)(uVar19 & (ulong)ppppplVar8);
    }
    else {
      ppppplVar18 = ppppplVar8;
      if (ppppplVar17 <= ppppplVar8) {
        uVar5 = 0;
        if (ppppplVar17 != (long *****)0x0) {
          uVar5 = (ulong)ppppplVar8 / (ulong)ppppplVar17;
        }
        ppppplVar18 = (long *****)((long)ppppplVar8 - uVar5 * (long)ppppplVar17);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)ppppplVar18 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      ppplVar1 = (long ***)pplStack_78;
      ppppplVar14 = (long *****)pppplStack_80;
      if (-1 < (long)uStack_70) {
        ppplVar1 = (long ***)((ulong)uStack_70 >> 0x38);
        ppppplVar14 = &pppplStack_80;
      }
      do {
        ppppplVar13 = (long *****)plVar12[1];
        if (ppppplVar13 == ppppplVar8) {
          bVar4 = *(byte *)((long)plVar12 + 0x27);
          ppplVar2 = (long ***)plVar12[3];
          if (-1 < (char)bVar4) {
            ppplVar2 = (long ***)(ulong)bVar4;
          }
          if (ppplVar2 == ppplVar1) {
            plVar15 = (long *)plVar12[2];
            if (-1 < (char)bVar4) {
              plVar15 = plVar12 + 2;
            }
            _memcmp(plVar15,ppppplVar14,ppplVar1);
            if ((int)plVar15 == 0) {
              if (*(char *)((long)plVar12 + 0x3f) < '\0') {
                __ZdlPv(plVar12[5]);
              }
              plVar12[6] = (long)pplStack_90;
              plVar12[5] = (long)ppppuStack_98;
              plVar12[7] = (long)uStack_88;
              goto LAB_109887acc;
            }
          }
        }
        else {
          if (((ulong)ppppplVar17 & uVar19) == 0) {
            ppppplVar13 = (long *****)((ulong)ppppplVar13 & uVar19);
          }
          else if (ppppplVar17 <= ppppplVar13) {
            uVar5 = 0;
            if (ppppplVar17 != (long *****)0x0) {
              uVar5 = (ulong)ppppplVar13 / (ulong)ppppplVar17;
            }
            ppppplVar13 = (long *****)((long)ppppplVar13 - uVar5 * (long)ppppplVar17);
          }
          if (ppppplVar13 != ppppplVar18) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  pppplVar9 = (long ****)0x40;
  __Znwm();
  uStack_58 = 1;
  *pppplVar9 = (long ***)0x0;
  pppplVar9[1] = (long ***)ppppplVar8;
  pppplVar9[3] = (long ***)pplStack_78;
  pppplVar9[2] = (long ***)pppplStack_80;
  pppplVar9[4] = uStack_70;
  pppplStack_80 = (long ****)0x0;
  pplStack_78 = (long **)0x0;
  uStack_70 = (long ***)0x0;
  pppplVar9[6] = (long ***)pplStack_90;
  pppplVar9[5] = (long ***)ppppuStack_98;
  pppplVar9[7] = uStack_88;
  pplStack_90 = (long **)0x0;
  uStack_88 = (long ***)0x0;
  ppppuStack_98 = (undefined8 *****)0x0;
  ppplStack_68 = (long ***)pppplVar9;
  plStack_60 = param_1;
  if ((ppppplVar17 == (long *****)0x0) ||
     (*(float *)(param_1 + 4) * (float)ppppplVar17 < (float)(param_1[3] + 1))) {
    uVar19 = 1;
    if ((long *****)0x2 < ppppplVar17) {
      uVar19 = (ulong)(((ulong)ppppplVar17 & (long)ppppplVar17 - 1U) != 0);
    }
    ppppplVar18 = (long *****)(uVar19 | (long)ppppplVar17 << 1);
    ppppplVar14 = (long *****)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (ppppplVar18 <= ppppplVar14) {
      ppppplVar18 = ppppplVar14;
    }
    if ((long)ppppplVar18 - 1U == 0) {
      ppppplVar18 = (long *****)0x2;
    }
    else if (((ulong)ppppplVar18 & (long)ppppplVar18 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      ppppplVar17 = (long *****)param_1[1];
    }
    if (ppppplVar17 < ppppplVar18) {
LAB_1098878d0:
      if ((ulong)ppppplVar18 >> 0x3d != 0) {
        func_0x000104c4f740();
LAB_109887b74:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109887b78);
        (*pcVar6)();
      }
      lVar10 = (long)ppppplVar18 << 3;
      __Znwm();
      lVar11 = *param_1;
      *param_1 = lVar10;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      ppppplVar17 = (long *****)0x0;
      param_1[1] = (long)ppppplVar18;
      do {
        *(undefined8 *)(*param_1 + (long)ppppplVar17 * 8) = 0;
        ppppplVar17 = (long *****)((long)ppppplVar17 + 1);
      } while (ppppplVar18 != ppppplVar17);
      plVar12 = (long *)param_1[2];
      ppppplVar17 = ppppplVar18;
      if (plVar12 != (long *)0x0) {
        ppppplVar14 = (long *****)plVar12[1];
        uVar19 = (long)ppppplVar18 - 1;
        if (((ulong)ppppplVar18 & uVar19) == 0) {
          ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar19);
        }
        else if (ppppplVar18 <= ppppplVar14) {
          uVar5 = 0;
          if (ppppplVar18 != (long *****)0x0) {
            uVar5 = (ulong)ppppplVar14 / (ulong)ppppplVar18;
          }
          ppppplVar14 = (long *****)((long)ppppplVar14 - uVar5 * (long)ppppplVar18);
        }
        *(long **)(*param_1 + (long)ppppplVar14 * 8) = param_1 + 2;
        plVar15 = (long *)*plVar12;
        while (plVar15 != (long *)0x0) {
          ppppplVar13 = (long *****)plVar15[1];
          if (((ulong)ppppplVar18 & uVar19) == 0) {
            ppppplVar13 = (long *****)((ulong)ppppplVar13 & uVar19);
          }
          else if (ppppplVar18 <= ppppplVar13) {
            uVar5 = 0;
            if (ppppplVar18 != (long *****)0x0) {
              uVar5 = (ulong)ppppplVar13 / (ulong)ppppplVar18;
            }
            ppppplVar13 = (long *****)((long)ppppplVar13 - uVar5 * (long)ppppplVar18);
          }
          plVar16 = plVar15;
          if (ppppplVar13 != ppppplVar14) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + (long)ppppplVar13 * 8) == 0) {
              *(long **)(lVar10 + (long)ppppplVar13 * 8) = plVar12;
              ppppplVar14 = ppppplVar13;
            }
            else {
              *plVar12 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar10 + (long)ppppplVar13 * 8);
              **(long **)(lVar10 + (long)ppppplVar13 * 8) = (long)plVar15;
              plVar16 = plVar12;
            }
          }
          plVar12 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
    }
    else if (ppppplVar18 < ppppplVar17) {
      ppppplVar14 = (long *****)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((ppppplVar17 < (long *****)0x3) || (((ulong)ppppplVar17 & (long)ppppplVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *****)0x1 < ppppplVar14) {
        ppppplVar14 = (long *****)(1L << (-LZCOUNT((long)ppppplVar14 + -1) & 0x3fU));
      }
      if (ppppplVar18 <= ppppplVar14) {
        ppppplVar18 = ppppplVar14;
      }
      if (ppppplVar18 < ppppplVar17) {
        if (ppppplVar18 != (long *****)0x0) goto LAB_1098878d0;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        ppppplVar17 = (long *****)0x0;
      }
      else {
        ppppplVar17 = (long *****)param_1[1];
      }
    }
    if (((ulong)ppppplVar17 & (long)ppppplVar17 - 1U) == 0) {
      ppppplVar18 = (long *****)((long)ppppplVar17 - 1U & (ulong)ppppplVar8);
    }
    else {
      ppppplVar18 = ppppplVar8;
      if (ppppplVar17 <= ppppplVar8) {
        uVar19 = 0;
        if (ppppplVar17 != (long *****)0x0) {
          uVar19 = (ulong)ppppplVar8 / (ulong)ppppplVar17;
        }
        ppppplVar18 = (long *****)((long)ppppplVar8 - uVar19 * (long)ppppplVar17);
      }
    }
  }
  lVar10 = *param_1;
  plVar12 = *(long **)(lVar10 + (long)ppppplVar18 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 2;
    *pppplVar9 = (long ***)*plVar12;
    *plVar12 = (long)pppplVar9;
    *(long **)(lVar10 + (long)ppppplVar18 * 8) = plVar12;
    if (*pppplVar9 == (long ***)0x0) goto LAB_109887ab0;
    ppppplVar18 = (long *****)(*pppplVar9)[1];
    if (((ulong)ppppplVar17 & (long)ppppplVar17 - 1U) == 0) {
      ppppplVar18 = (long *****)((ulong)ppppplVar18 & (long)ppppplVar17 - 1U);
    }
    else if (ppppplVar17 <= ppppplVar18) {
      uVar19 = 0;
      if (ppppplVar17 != (long *****)0x0) {
        uVar19 = (ulong)ppppplVar18 / (ulong)ppppplVar17;
      }
      ppppplVar18 = (long *****)((long)ppppplVar18 - uVar19 * (long)ppppplVar17);
    }
    plVar12 = (long *)(*param_1 + (long)ppppplVar18 * 8);
  }
  else {
    *pppplVar9 = (long ***)*plVar12;
  }
  *plVar12 = (long)pppplVar9;
LAB_109887ab0:
  param_1[3] = param_1[3] + 1;
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppppuStack_98);
  }
LAB_109887acc:
  if ((long)uStack_70 < 0) {
    __ZdlPv(pppplStack_80);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 5);
  return;
}



/* Entry: 109887bd0; end: 109887c57;  */

undefined1  [16] FUN_109887bd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_40;
  long lStack_38;
  
  lStack_40 = param_2;
  lStack_38 = param_3;
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  lVar1 = param_1;
  FUN_109887c58(param_1,&lStack_40);
  lVar2 = lStack_38;
  lVar3 = lStack_40;
  if (lVar1 != 0) {
    if ((long)*(char *)(lVar1 + 0x3f) < 0) {
      lVar2 = *(long *)(lVar1 + 0x30);
      lVar3 = *(long *)(lVar1 + 0x28);
    }
    else {
      lVar2 = (long)*(char *)(lVar1 + 0x3f);
      lVar3 = lVar1 + 0x28;
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 109887c58; end: 109887d4f;  */

long FUN_109887c58(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 uStack_51;
  
  puVar2 = &uStack_51;
  func_0x000107c2ac8c(puVar2,*param_2,param_2[1]);
  puVar6 = (undefined1 *)param_1[1];
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6 + -1;
    if (((ulong)puVar6 & (ulong)puVar7) == 0) {
      puVar8 = (undefined1 *)((ulong)puVar7 & (ulong)puVar2);
    }
    else {
      puVar8 = puVar2;
      if (puVar6 <= puVar2) {
        uVar1 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar2 / (ulong)puVar6;
        }
        puVar8 = puVar2 + -(uVar1 * (long)puVar6);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)puVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        puVar5 = (undefined1 *)plVar4[1];
        if (puVar2 == puVar5) {
          plVar3 = param_1;
          FUN_109887d50(param_1,plVar4 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            return (long)plVar4;
          }
        }
        else {
          if (((ulong)puVar6 & (ulong)puVar7) == 0) {
            puVar5 = (undefined1 *)((ulong)puVar5 & (ulong)puVar7);
          }
          else if (puVar6 <= puVar5) {
            uVar1 = 0;
            if (puVar6 != (undefined1 *)0x0) {
              uVar1 = (ulong)puVar5 / (ulong)puVar6;
            }
            puVar5 = puVar5 + -(uVar1 * (long)puVar6);
          }
          if (puVar5 != puVar8) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109887d50; end: 109887da7;  */

bool FUN_109887d50(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (param_3[1] == uVar1) {
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar3) {
      plVar2 = param_2;
    }
    uVar4 = *param_3;
    _memcmp(uVar4,plVar2);
    return (int)uVar4 == 0;
  }
  return false;
}



/* Entry: 109887da8; end: 109887e97;  */

void FUN_109887da8(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (param_3 == 0) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  else {
    lVar9 = param_2 + 1;
    uVar1 = 0;
    lVar10 = param_2;
    do {
      uVar8 = uVar1;
      lVar10 = lVar10 + -1;
      if (param_3 == uVar8) goto LAB_109887e14;
      uVar1 = uVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (*(char *)(lVar10 + param_3) != '.');
    if (param_3 + 1 != uVar1) {
      if (param_3 <= param_3 - uVar1) goto LAB_109887e8c;
      param_2 = lVar9 + param_3;
      param_3 = uVar8;
    }
LAB_109887e14:
    if (0x7ffffffffffffff7 < param_3) {
      func_0x000104c4f6b8();
LAB_109887e8c:
      puVar7 = (undefined8 *)&UNK_10f582214;
      FUN_109262df8();
      pcStack_38 = FUN_109887e98;
      uStack_50 = param_3;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_109887f14(puVar7 + 2);
      uStack_68 = puVar7[2];
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      if (puVar7[1] != 0) {
        plVar2 = (long *)(puVar7[1] + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *extraout_x8 = 0x109887fc4;
      extraout_x8[1] = &PTR_DAT_110b16888;
      extraout_x8[2] = uStack_68;
      extraout_x8[4] = uVar12;
      extraout_x8[3] = uVar11;
      uStack_60 = 0;
      uStack_58 = 0;
      FUN_109888018(&uStack_68);
      return;
    }
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      puVar6 = param_1;
      if (param_3 == 0) goto LAB_109887e74;
    }
    else {
      puVar3 = (ulong *)0x19;
      if ((param_3 | 7) != 0x17) {
        puVar3 = (ulong *)((param_3 | 7) + 1);
      }
      puVar6 = puVar3;
      __Znwm();
      param_1[1] = param_3;
      param_1[2] = (ulong)puVar3 | 0x8000000000000000;
      *param_1 = (ulong)puVar6;
    }
    _memmove(puVar6,param_2,param_3);
    param_1 = puVar6;
  }
LAB_109887e74:
  *(undefined1 *)((long)param_1 + param_3) = 0;
  return;
}


