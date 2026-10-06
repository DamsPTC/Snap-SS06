/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0e6abc; end: 10a0e6ccf;  */

void FUN_10a0e6abc(undefined8 param_1,long *param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  char cStack_68;
  
  cStack_68 = '\0';
  uStack_c0 = 0;
  lStack_98 = 0;
  puStack_a0 = (undefined1 *)0x0;
  uStack_88 = 0;
  lStack_90 = 0;
  auStack_80[0] = 0;
  plVar3 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar3 = param_4;
  }
  lVar13 = (long)plVar3;
  _strlen();
  uStack_c0 = CONCAT44(param_3,(undefined4)uStack_c0);
  lStack_98 = param_4[3];
  lStack_90 = param_4[4];
  puStack_d8 = (undefined1 *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  lStack_c8 = 0;
  uVar11 = param_4[6] - param_4[5] >> 3;
  uStack_a8 = (undefined4)uVar11;
  lStack_b8 = (long)plVar3;
  lStack_b0 = lVar13;
  if (param_4[6] - param_4[5] != 0) {
    if (0x1555555555555555 < uVar11) {
      FUN_10a0eaac4();
LAB_10a0e6c9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0e6ca0);
      (*pcVar5)();
    }
    ppuVar6 = &puStack_d8;
    uVar7 = uVar11;
    FUN_10a0eaad8();
    lVar13 = (long)ppuVar6 + uVar7 * 0xc;
    _bzero();
    puVar1 = (undefined1 *)((long)ppuVar6 + ((uVar11 * 0xc - 0xc) / 0xc) * 0xc + 0xc);
    puVar12 = (undefined1 *)((long)ppuVar6 - ((long)puStack_d0 - (long)puStack_d8));
    _memcpy(puVar12);
    bVar2 = puStack_d8 != (undefined1 *)0x0;
    puStack_d8 = puVar12;
    puStack_d0 = puVar1;
    lStack_c8 = lVar13;
    if (bVar2) {
      __ZdlPv();
    }
  }
  puVar1 = puStack_d8;
  lVar13 = param_4[5];
  lVar4 = param_4[6] - lVar13;
  if (lVar4 != 0) {
    lVar8 = 0;
    lVar9 = (long)puStack_d0 - (long)puStack_d8;
    puVar10 = (undefined8 *)(puStack_d8 + 4);
    do {
      if ((lVar9 >> 2) * -0x5555555555555555 - lVar8 == 0) goto LAB_10a0e6c9c;
      *(int *)((long)puVar10 + -4) = (int)lVar8;
      uVar14 = NEON_rev64(*(undefined8 *)(lVar13 + lVar8 * 8),4);
      *puVar10 = uVar14;
      lVar8 = lVar8 + 1;
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
    } while (lVar4 >> 3 != lVar8);
  }
  puStack_a0 = puVar1;
  uStack_88 = param_5;
  (**(code **)(*param_2 + 0xa8))(param_1,param_2,&uStack_c0);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  if (cStack_68 == '\x01') {
    puStack_d8 = auStack_80;
    func_0x00010a0eab1c(&puStack_d8);
  }
  return;
}



/* Entry: 10a0e6cd0; end: 10a0e6d5b;  */

undefined8 * FUN_10a0e6cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    func_0x000109242758();
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    func_0x00010923feb8(param_1 + 3,param_2 + 3);
    func_0x000109294ba8(param_1 + 6);
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[8] = param_2[8];
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  else {
    FUN_10a0eae9c(param_1,param_2);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return param_1;
}



/* Entry: 10a0e6d5c; end: 10a0e80a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e7168) */
/* WARNING: Removing unreachable block (ram,0x00010a0e75d8) */
/* WARNING: Removing unreachable block (ram,0x00010a0e6ff0) */
/* WARNING: Removing unreachable block (ram,0x00010a0e730c) */
/* WARNING: Removing unreachable block (ram,0x00010a0e77e0) */

long ***** FUN_10a0e6d5c(undefined4 *param_1,long *****param_2,long *****param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *****pppppuVar3;
  long **pplVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int iVar13;
  long *****ppppplVar14;
  undefined8 *****pppppuVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  uint uVar18;
  ulong uVar19;
  long ****pppplVar20;
  long lVar21;
  ulong uVar22;
  long ****pppplVar23;
  long lVar24;
  ulong uVar25;
  long ***ppplVar26;
  long ****pppplVar27;
  long *****unaff_x22;
  long **pplVar28;
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  long ***ppplStack_298;
  long ***ppplStack_290;
  long ****pppplStack_288;
  long ****pppplStack_280;
  long ***ppplStack_278;
  long ***ppplStack_270;
  long ***ppplStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  long *plStack_238;
  undefined4 *puStack_230;
  long ****pppplStack_228;
  long ***ppplStack_220;
  undefined8 *puStack_218;
  long ****pppplStack_210;
  long ***ppplStack_208;
  long ***ppplStack_200;
  long ****pppplStack_1f8;
  long ****pppplStack_1f0;
  long **pplStack_1e8;
  long ***ppplStack_1e0;
  long **pplStack_1d8;
  long ****pppplStack_1d0;
  long *plStack_1c8;
  undefined8 ****ppppuStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 ****appppuStack_1a8 [2];
  char cStack_191;
  long ****pppplStack_190;
  long ****pppplStack_188;
  long ****pppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long ***ppplStack_168;
  long ***ppplStack_160;
  long ***ppplStack_158;
  long ****pppplStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long **pplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ****pppplStack_f8;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long **pplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lVar24 = 0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_218 = (undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *puStack_218 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar24 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar24 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + lVar24 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + lVar24 + 0x50) = 0xffffffff;
    lVar24 = lVar24 + 0x20;
  } while (lVar24 != 0x100);
  plStack_238 = (long *)(param_1 + 8);
  *param_1 = 200;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  pppplVar23 = *param_2;
  ppplStack_220 = (long ***)param_2[1];
  puStack_230 = param_1;
  pppplStack_228 = (long ****)param_2;
  if (pppplVar23 != (long ****)ppplStack_220) {
    ppppplVar17 = &pppplStack_128;
    ppplStack_200 = &pplStack_110;
    pppplStack_1f0 = (long ****)&pppplStack_f8;
    ppplStack_208 = &pplStack_e0;
    pppplStack_1f8 = (long ****)&pppplStack_c8;
    pppplStack_1d0 = &ppplStack_168;
    pppplStack_210 = (long ****)ppppplVar17;
    do {
      pppplStack_130 = (long ****)CONCAT44(pppplStack_130._4_4_,*(undefined4 *)pppplVar23);
      ppppplVar17[0xe] = (long ****)0x0;
      ppppplVar17[0xb] = (long ****)0x0;
      ppppplVar17[10] = (long ****)0x0;
      ppppplVar17[0xd] = (long ****)0x0;
      ppppplVar17[0xc] = (long ****)0x0;
      ppppplVar17[7] = (long ****)0x0;
      ppppplVar17[6] = (long ****)0x0;
      ppppplVar17[9] = (long ****)0x0;
      ppppplVar17[8] = (long ****)0x0;
      ppppplVar17[1] = (long ****)0x0;
      *ppppplVar17 = (long ****)0x0;
      ppppplVar17[3] = (long ****)0x0;
      ppppplVar17[2] = (long ****)0x0;
      ppppplVar17[5] = (long ****)0x0;
      ppppplVar17[4] = (long ****)0x0;
      ppplVar5 = pppplVar23[0xb];
      ppplStack_1e0 = (long ***)pppplVar23;
      for (ppplVar26 = pppplVar23[10]; ppplVar26 != ppplVar5; ppplVar26 = ppplVar26 + 4) {
        if (*(char *)((long)ppplVar26 + 0x17) < '\0') {
          func_0x000107c3192c(&pppplStack_b0,*ppplVar26,ppplVar26[1]);
        }
        else {
          pppplStack_a8 = (long ****)ppplVar26[1];
          pppplStack_b0 = (long ****)*ppplVar26;
          pppplStack_a0 = (long ****)ppplVar26[2];
        }
        pppplVar23 = pppplStack_1f0;
        uStack_98 = SUB84(ppplVar26[3],0);
        uStack_94 = (undefined4)((ulong)ppplVar26[3] >> 0x20);
        uStack_90 = 1;
        if (pppplStack_f0 < pppplStack_e8) {
          pppplStack_f0[2] = (long ***)pppplStack_a0;
          pppplStack_f0[1] = (long ***)pppplStack_a8;
          *pppplStack_f0 = (long ***)pppplStack_b0;
          uVar7 = uStack_90;
          pppplStack_a8 = (long ****)0x0;
          pppplStack_a0 = (long ****)0x0;
          pppplStack_b0 = (long ****)0x0;
          pppplStack_f0[3] = (long ***)CONCAT44(uStack_94,uStack_98);
          *(undefined4 *)(pppplStack_f0 + 4) = uVar7;
          pppplStack_f0 = pppplStack_f0 + 5;
        }
        else {
          lVar24 = (long)pppplStack_f0 - (long)pppplStack_f8;
          uVar19 = (lVar24 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar19) {
            FUN_10a0e8658();
            goto LAB_10a0e7e0c;
          }
          lVar21 = (long)pppplStack_e8 - (long)pppplStack_f8 >> 3;
          uVar25 = lVar21 * -0x6666666666666666;
          if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
            uVar25 = uVar19;
          }
          if (0x333333333333332 < (ulong)(lVar21 * -0x3333333333333333)) {
            uVar25 = 0x666666666666666;
          }
          uStack_170 = (long *****)pppplStack_1f0;
          ppppplVar14 = (long *****)pppplStack_1f0;
          FUN_10a0e866c();
          puVar1 = (undefined8 *)((long)ppppplVar14 + lVar24);
          puVar1[2] = pppplStack_a0;
          puVar1[1] = pppplStack_a8;
          *puVar1 = pppplStack_b0;
          pppplStack_a8 = (long ****)0x0;
          pppplStack_a0 = (long ****)0x0;
          pppplStack_b0 = (long ****)0x0;
          *(undefined4 *)(puVar1 + 4) = uStack_90;
          puVar1[3] = CONCAT44(uStack_94,uStack_98);
          ppppplVar17 = (long *****)((long)puVar1 + ((long)pppplStack_f8 - (long)pppplStack_f0));
          func_0x00010a0e86b0(pppplVar23,pppplStack_f8,pppplStack_f0,ppppplVar17);
          pppplStack_180 = pppplStack_f8;
          uStack_178 = (long *****)pppplStack_e8;
          pppplStack_190 = pppplStack_f8;
          pppplStack_188 = pppplStack_f8;
          pppplStack_f8 = (long ****)ppppplVar17;
          pppplStack_f0 = (long ****)(puVar1 + 5);
          pppplStack_e8 = (long ****)(ppppplVar14 + uVar25 * 5);
          func_0x000107c2abbc(&pppplStack_190);
          pppplStack_f0 = (long ****)(puVar1 + 5);
        }
      }
      unaff_x22 = (long *****)ppplStack_1e0[0x11];
      for (ppppplVar17 = (long *****)ppplStack_1e0[0x10]; ppppplVar17 != unaff_x22;
          ppppplVar17 = ppppplVar17 + 4) {
        if (*(char *)((long)ppppplVar17 + 0x17) < '\0') {
          func_0x000107c3192c(&pppplStack_b0,*ppppplVar17,ppppplVar17[1]);
        }
        else {
          pppplStack_a8 = ppppplVar17[1];
          pppplStack_b0 = *ppppplVar17;
          pppplStack_a0 = ppppplVar17[2];
        }
        pppplVar23 = pppplStack_1f8;
        uStack_98 = SUB84(ppppplVar17[3],0);
        uStack_94 = (undefined4)((ulong)ppppplVar17[3] >> 0x20);
        uStack_90 = 1;
        if (pppplStack_c0 < pppplStack_b8) {
          pppplStack_c0[2] = (long ***)pppplStack_a0;
          pppplStack_c0[1] = (long ***)pppplStack_a8;
          *pppplStack_c0 = (long ***)pppplStack_b0;
          pppplStack_a8 = (long ****)0x0;
          pppplStack_a0 = (long ****)0x0;
          pppplStack_b0 = (long ****)0x0;
          pppplStack_c0[3] = (long ***)CONCAT44(uStack_94,uStack_98);
          *(undefined4 *)(pppplStack_c0 + 4) = uStack_90;
          pppplStack_c0 = pppplStack_c0 + 5;
        }
        else {
          lVar24 = (long)pppplStack_c0 - (long)pppplStack_c8;
          uVar19 = (lVar24 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar19) {
            FUN_10a0e87e8();
            goto LAB_10a0e7e0c;
          }
          lVar21 = (long)pppplStack_b8 - (long)pppplStack_c8 >> 3;
          uVar25 = lVar21 * -0x6666666666666666;
          if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
            uVar25 = uVar19;
          }
          if (0x333333333333332 < (ulong)(lVar21 * -0x3333333333333333)) {
            uVar25 = 0x666666666666666;
          }
          uStack_170 = (long *****)pppplStack_1f8;
          ppppplVar16 = (long *****)pppplStack_1f8;
          FUN_10a0e87fc();
          puVar1 = (undefined8 *)((long)ppppplVar16 + lVar24);
          puVar1[2] = pppplStack_a0;
          puVar1[1] = pppplStack_a8;
          *puVar1 = pppplStack_b0;
          pppplStack_a8 = (long ****)0x0;
          pppplStack_a0 = (long ****)0x0;
          pppplStack_b0 = (long ****)0x0;
          *(undefined4 *)(puVar1 + 4) = uStack_90;
          puVar1[3] = CONCAT44(uStack_94,uStack_98);
          ppppplVar14 = (long *****)((long)puVar1 + ((long)pppplStack_c8 - (long)pppplStack_c0));
          func_0x00010a0e8840(pppplVar23,pppplStack_c8,pppplStack_c0,ppppplVar14);
          pppplStack_180 = pppplStack_c8;
          uStack_178 = (long *****)pppplStack_b8;
          pppplStack_190 = pppplStack_c8;
          pppplStack_188 = pppplStack_c8;
          pppplStack_c8 = (long ****)ppppplVar14;
          pppplStack_c0 = (long ****)(puVar1 + 5);
          pppplStack_b8 = (long ****)(ppppplVar16 + uVar25 * 5);
          func_0x000107c2abd0(&pppplStack_190);
          pppplStack_c0 = (long ****)(puVar1 + 5);
        }
      }
      ppplVar5 = (long ***)ppplStack_1e0[5];
      for (ppplVar26 = (long ***)ppplStack_1e0[4]; ppplVar26 != ppplVar5; ppplVar26 = ppplVar26 + 8)
      {
        pppplStack_148 = (long ****)0x0;
        pppplStack_140 = (long ****)0x0;
        pppplStack_138 = (long ****)0x0;
        FUN_10a0e80a8(&pppplStack_148,
                      ((long)ppplVar26[6] - (long)ppplVar26[5] >> 4) * -0x5555555555555555);
        ppppplVar17 = (long *****)ppplVar26[6];
        for (unaff_x22 = (long *****)ppplVar26[5]; unaff_x22 != ppppplVar17;
            unaff_x22 = unaff_x22 + 6) {
          if (*(char *)((long)unaff_x22 + 0x17) < '\0') {
            func_0x000107c3192c(&pppplStack_b0,*unaff_x22,unaff_x22[1]);
          }
          else {
            pppplStack_a8 = unaff_x22[1];
            pppplStack_b0 = *unaff_x22;
            pppplStack_a0 = unaff_x22[2];
          }
          uStack_98 = *(undefined4 *)(unaff_x22 + 3);
          uStack_94 = SUB84(unaff_x22[4],0);
          uStack_90 = (undefined4)((ulong)unaff_x22[4] >> 0x20);
          uStack_8c = *(undefined4 *)((long)unaff_x22 + 0x2c);
          if (pppplStack_140 < pppplStack_138) {
            pppplStack_140[2] = (long ***)pppplStack_a0;
            pppplStack_140[1] = (long ***)pppplStack_a8;
            *pppplStack_140 = (long ***)pppplStack_b0;
            pppplStack_a8 = (long ****)0x0;
            pppplStack_a0 = (long ****)0x0;
            pppplStack_b0 = (long ****)0x0;
            pppplVar23 = (long ****)CONCAT44(uStack_94,uStack_98);
            pppplStack_140[4] = (long ***)CONCAT44(uStack_8c,uStack_90);
            pppplStack_140[3] = (long ***)pppplVar23;
            pppplStack_140 = pppplStack_140 + 5;
          }
          else {
            lVar24 = (long)pppplStack_140 - (long)pppplStack_148;
            uVar19 = (lVar24 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar19) {
              FUN_10a0e9f24();
              goto LAB_10a0e7e0c;
            }
            lVar21 = (long)pppplStack_138 - (long)pppplStack_148 >> 3;
            uVar25 = lVar21 * -0x6666666666666666;
            if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
              uVar25 = uVar19;
            }
            if (0x333333333333332 < (ulong)(lVar21 * -0x3333333333333333)) {
              uVar25 = 0x666666666666666;
            }
            uStack_170 = &pppplStack_148;
            ppppplVar14 = &pppplStack_148;
            FUN_10a0e9f38();
            puVar1 = (undefined8 *)((long)ppppplVar14 + lVar24);
            puVar1[2] = pppplStack_a0;
            puVar1[1] = pppplStack_a8;
            *puVar1 = pppplStack_b0;
            pppplStack_a8 = (long ****)0x0;
            pppplStack_a0 = (long ****)0x0;
            pppplStack_b0 = (long ****)0x0;
            uVar10 = CONCAT44(uStack_94,uStack_98);
            puVar1[4] = CONCAT44(uStack_8c,uStack_90);
            puVar1[3] = uVar10;
            ppppplVar16 = (long *****)((long)puVar1 + ((long)pppplStack_148 - (long)pppplStack_140))
            ;
            FUN_10a0eaf00(&pppplStack_148,pppplStack_148,pppplStack_140,ppppplVar16);
            pppplStack_180 = pppplStack_148;
            uStack_178 = (long *****)pppplStack_138;
            pppplStack_190 = pppplStack_148;
            pppplStack_188 = pppplStack_148;
            pppplStack_148 = (long ****)ppppplVar16;
            pppplStack_140 = (long ****)(puVar1 + 5);
            pppplStack_138 = (long ****)(ppppplVar14 + uVar25 * 5);
            func_0x00010923caa8(&pppplStack_190);
            pppplStack_140 = (long ****)(puVar1 + 5);
          }
        }
        if (*(char *)((long)ppplVar26 + 0x17) < '\0') {
          func_0x000107c3192c(&pppplStack_190,*ppplVar26,ppplVar26[1]);
        }
        else {
          pppplStack_188 = (long ****)ppplVar26[1];
          pppplStack_190 = (long ****)*ppplVar26;
          pppplStack_180 = (long ****)ppplVar26[2];
        }
        uStack_178 = (long *****)ppplVar26[3];
        uStack_170 = (long *****)CONCAT44(1,*(undefined4 *)(ppplVar26 + 4));
        pppplStack_1d0[1] = (long ***)0x0;
        pppplStack_1d0[2] = (long ***)0x0;
        *pppplStack_1d0 = (long ***)0x0;
        FUN_10a0eafb8();
        if (ppplStack_108 < ppplStack_100) {
          ppplStack_108[2] = (long **)pppplStack_180;
          ppplStack_108[1] = (long **)pppplStack_188;
          *ppplStack_108 = (long **)pppplStack_190;
          pppplStack_188 = (long ****)0x0;
          pppplStack_180 = (long ****)0x0;
          pppplStack_190 = (long ****)0x0;
          ppplStack_108[4] = (long **)uStack_170;
          ppplStack_108[3] = (long **)uStack_178;
          ppplStack_108[6] = (long **)0x0;
          ppplStack_108[7] = (long **)0x0;
          ppplStack_108[5] = (long **)0x0;
          ppplStack_108[6] = (long **)ppplStack_160;
          ppplStack_108[5] = (long **)ppplStack_168;
          ppplStack_108[7] = (long **)ppplStack_158;
          *pppplStack_1d0 = (long ***)0x0;
          pppplStack_1d0[1] = (long ***)0x0;
          pppplStack_1d0[2] = (long ***)0x0;
          pppplVar23 = (long ****)(ppplStack_108 + 8);
        }
        else {
          pppplVar23 = (long ****)ppplStack_200;
          FUN_109fe9d58(ppplStack_200,&pppplStack_190);
        }
        pppplStack_b0 = pppplStack_1d0;
        ppplStack_108 = (long ***)pppplVar23;
        func_0x000107c2b0e8(&pppplStack_b0);
        if ((long)pppplStack_180 < 0) {
          __ZdlPv(pppplStack_190);
        }
        pppplStack_190 = (long ****)&pppplStack_148;
        func_0x000107c2b0e8(&pppplStack_190);
      }
      pplStack_1e8 = ppplStack_1e0[2];
      ppplVar26 = (long ***)ppplStack_1e0[1];
      pppplVar23 = (long ****)ppplStack_1e0;
      while (ppplVar26 != (long ***)pplStack_1e8) {
        pppplStack_148 = (long ****)0x0;
        pppplStack_140 = (long ****)0x0;
        pppplStack_138 = (long ****)0x0;
        FUN_10a0e80a8(&pppplStack_148,
                      ((long)ppplVar26[5] - (long)ppplVar26[4] >> 4) * -0x5555555555555555);
        plStack_1c8 = (long *)ppplVar26[5];
        pplStack_1d8 = (long **)ppplVar26;
        for (pplVar28 = ppplVar26[4]; pplVar4 = pplStack_1d8, pplVar28 != (long **)plStack_1c8;
            pplVar28 = pplVar28 + 6) {
          if (*(char *)(pplVar28 + 5) == '\x01') {
            if (*(char *)((long)pplVar28 + 0x17) < '\0') {
              func_0x000107c3192c(&pppplStack_b0,*pplVar28,pplVar28[1]);
            }
            else {
              pppplStack_a8 = (long ****)pplVar28[1];
              pppplStack_b0 = (long ****)*pplVar28;
              pppplStack_a0 = (long ****)pplVar28[2];
            }
            uStack_98 = *(undefined4 *)(pplVar28 + 3);
            uStack_94 = SUB84(pplVar28[4],0);
            uStack_90 = (undefined4)((ulong)pplVar28[4] >> 0x20);
            uStack_8c = *(undefined4 *)((long)pplVar28 + 0x2c);
            if (pppplStack_140 < pppplStack_138) {
              pppplStack_140[2] = (long ***)pppplStack_a0;
              pppplStack_140[1] = (long ***)pppplStack_a8;
              *pppplStack_140 = (long ***)pppplStack_b0;
              pppplStack_a8 = (long ****)0x0;
              pppplStack_a0 = (long ****)0x0;
              pppplStack_b0 = (long ****)0x0;
              pppplVar23 = (long ****)CONCAT44(uStack_94,uStack_98);
              pppplStack_140[4] = (long ***)CONCAT44(uStack_8c,uStack_90);
              pppplStack_140[3] = (long ***)pppplVar23;
              pppplStack_140 = pppplStack_140 + 5;
            }
            else {
              lVar24 = (long)pppplStack_140 - (long)pppplStack_148;
              uVar19 = (lVar24 >> 3) * -0x3333333333333333 + 1;
              if (0x666666666666666 < uVar19) {
                FUN_10a0e9f24();
                goto LAB_10a0e7e0c;
              }
              lVar21 = (long)pppplStack_138 - (long)pppplStack_148 >> 3;
              uVar25 = lVar21 * -0x6666666666666666;
              if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
                uVar25 = uVar19;
              }
              if (0x333333333333332 < (ulong)(lVar21 * -0x3333333333333333)) {
                uVar25 = 0x666666666666666;
              }
              uStack_170 = &pppplStack_148;
              ppppplVar17 = &pppplStack_148;
              FUN_10a0e9f38();
              puVar1 = (undefined8 *)((long)ppppplVar17 + lVar24);
              puVar1[2] = pppplStack_a0;
              puVar1[1] = pppplStack_a8;
              *puVar1 = pppplStack_b0;
              pppplStack_a8 = (long ****)0x0;
              pppplStack_a0 = (long ****)0x0;
              pppplStack_b0 = (long ****)0x0;
              uVar10 = CONCAT44(uStack_94,uStack_98);
              puVar1[4] = CONCAT44(uStack_8c,uStack_90);
              puVar1[3] = uVar10;
              ppppplVar14 = (long *****)
                            ((long)puVar1 + ((long)pppplStack_148 - (long)pppplStack_140));
              FUN_10a0eaf00(&pppplStack_148,pppplStack_148,pppplStack_140,ppppplVar14);
              pppplStack_180 = pppplStack_148;
              uStack_178 = (long *****)pppplStack_138;
              pppplStack_190 = pppplStack_148;
              pppplStack_188 = pppplStack_148;
              pppplStack_148 = (long ****)ppppplVar14;
              pppplStack_140 = (long ****)(puVar1 + 5);
              pppplStack_138 = (long ****)(ppppplVar17 + uVar25 * 5);
              func_0x00010923caa8(&pppplStack_190);
              pppplStack_140 = (long ****)(puVar1 + 5);
            }
            if (*(int *)((long)pplVar28 + 0x24) != 0) {
              uVar18 = 0;
              do {
                iVar13 = *(int *)(pplVar28 + 4);
                plVar2 = pplVar28[1];
                if (-1 < (char)*(byte *)((long)pplVar28 + 0x17)) {
                  plVar2 = (long *)(ulong)*(byte *)((long)pplVar28 + 0x17);
                }
                FUN_10a003c90(appppuStack_1a8,(long)plVar2 + 1,&pppplStack_190);
                pppppuVar3 = (undefined8 *****)appppuStack_1a8[0];
                if (-1 < cStack_191) {
                  pppppuVar3 = appppuStack_1a8;
                }
                if (plVar2 != (long *)0x0) {
                  pplVar4 = (long **)*pplVar28;
                  if (-1 < *(char *)((long)pplVar28 + 0x17)) {
                    pplVar4 = pplVar28;
                  }
                  _memmove(pppppuVar3,pplVar4,plVar2);
                }
                *(undefined2 *)((long)pppppuVar3 + (long)plVar2) = 0x5b;
                __ZNSt3__19to_stringEj(&ppppuStack_1c0,uVar18);
                uVar19 = uStack_1b8;
                pppppuVar3 = (undefined8 *****)ppppuStack_1c0;
                if (-1 < (char)bStack_1a9) {
                  uVar19 = (ulong)bStack_1a9;
                  pppppuVar3 = &ppppuStack_1c0;
                }
                pppppuVar15 = appppuStack_1a8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppuVar15,pppppuVar3,uVar19);
                pppplStack_a8 = pppppuVar15[1];
                pppplStack_b0 = *pppppuVar15;
                pppplStack_a0 = pppppuVar15[2];
                pppppuVar15[1] = (undefined8 ****)0x0;
                pppppuVar15[2] = (undefined8 ****)0x0;
                *pppppuVar15 = (undefined8 ****)0x0;
                ppppplVar17 = &pppplStack_b0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppplVar17,&DAT_10f62a9ea,1);
                pppplVar23 = *ppppplVar17;
                uStack_88 = SUB87(ppppplVar17[1],0);
                uStack_81 = (undefined1)*(undefined8 *)((long)ppppplVar17 + 0xf);
                uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppppplVar17 + 0xf) >> 8);
                uVar8 = *(undefined1 *)((long)ppppplVar17 + 0x17);
                ppppplVar17[1] = (long ****)0x0;
                ppppplVar17[2] = (long ****)0x0;
                *ppppplVar17 = (long ****)0x0;
                iVar9 = *(int *)(pplVar28 + 3) + iVar13 * uVar18;
                uVar7 = *(undefined4 *)((long)pplVar28 + 0x2c);
                if (pppplStack_140 < pppplStack_138) {
                  pppplVar27 = (long ****)CONCAT17(uStack_81,uStack_88);
                  *pppplStack_140 = (long ***)pppplVar23;
                  pppplStack_140[1] = (long ***)pppplVar27;
                  *(ulong *)((long)pppplStack_140 + 0xf) = CONCAT71(uStack_80,uStack_81);
                  *(undefined1 *)((long)pppplStack_140 + 0x17) = uVar8;
                  uStack_88 = 0;
                  uStack_81 = 0;
                  uStack_80 = 0;
                  *(int *)(pppplStack_140 + 3) = iVar9;
                  *(int *)((long)pppplStack_140 + 0x1c) = iVar13;
                  unaff_x22 = (long *****)(pppplStack_140 + 5);
                  *(undefined4 *)(pppplStack_140 + 4) = 0;
                  *(undefined4 *)((long)pppplStack_140 + 0x24) = uVar7;
                }
                else {
                  lVar24 = (long)pppplStack_140 - (long)pppplStack_148;
                  uVar19 = (lVar24 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar19) {
                    FUN_10a0e9f24();
                    goto LAB_10a0e7e0c;
                  }
                  lVar21 = (long)pppplStack_138 - (long)pppplStack_148 >> 3;
                  uVar25 = lVar21 * -0x6666666666666666;
                  if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
                    uVar25 = uVar19;
                  }
                  if (0x333333333333332 < (ulong)(lVar21 * -0x3333333333333333)) {
                    uVar25 = 0x666666666666666;
                  }
                  uStack_170 = &pppplStack_148;
                  ppppplVar17 = &pppplStack_148;
                  FUN_10a0e9f38();
                  plVar2 = (long *)((long)ppppplVar17 + lVar24);
                  lVar24 = CONCAT17(uStack_81,uStack_88);
                  *plVar2 = (long)pppplVar23;
                  plVar2[1] = lVar24;
                  *(ulong *)((long)plVar2 + 0xf) = CONCAT71(uStack_80,uStack_81);
                  *(undefined1 *)((long)plVar2 + 0x17) = uVar8;
                  uStack_88 = 0;
                  uStack_81 = 0;
                  uStack_80 = 0;
                  *(int *)(plVar2 + 3) = iVar9;
                  *(int *)((long)plVar2 + 0x1c) = iVar13;
                  *(undefined4 *)(plVar2 + 4) = 0;
                  *(undefined4 *)((long)plVar2 + 0x24) = uVar7;
                  unaff_x22 = (long *****)(plVar2 + 5);
                  ppppplVar14 = (long *****)
                                ((long)plVar2 + ((long)pppplStack_148 - (long)pppplStack_140));
                  FUN_10a0eaf00(&pppplStack_148,pppplStack_148,pppplStack_140,ppppplVar14);
                  pppplStack_180 = pppplStack_148;
                  uStack_178 = (long *****)pppplStack_138;
                  pppplStack_190 = pppplStack_148;
                  pppplStack_188 = pppplStack_148;
                  pppplStack_148 = (long ****)ppppplVar14;
                  pppplStack_140 = (long ****)unaff_x22;
                  pppplStack_138 = (long ****)(ppppplVar17 + uVar25 * 5);
                  func_0x00010923caa8(&pppplStack_190);
                }
                pppplStack_140 = (long ****)unaff_x22;
                if ((char)bStack_1a9 < '\0') {
                  __ZdlPv(ppppuStack_1c0);
                }
                if (cStack_191 < '\0') {
                  __ZdlPv(appppuStack_1a8[0]);
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < *(uint *)((long)pplVar28 + 0x24));
            }
          }
        }
        if (pppplStack_148 != pppplStack_140) {
          if (*(char *)((long)pplStack_1d8 + 0x17) < '\0') {
            func_0x000107c3192c(&pppplStack_190,*pplStack_1d8,pplStack_1d8[1]);
          }
          else {
            pppplStack_188 = (long ****)pplStack_1d8[1];
            pppplStack_190 = (long ****)*pplStack_1d8;
            pppplStack_180 = (long ****)pplStack_1d8[2];
          }
          unaff_x22 = (long *****)pppplStack_1d0;
          uStack_178 = (long *****)pplVar4[3];
          uStack_170 = (long *****)CONCAT44(uStack_170._4_4_,1);
          pppplStack_1d0[1] = (long ***)0x0;
          pppplStack_1d0[2] = (long ***)0x0;
          *pppplStack_1d0 = (long ***)0x0;
          FUN_10a0eafb8(pppplStack_1d0,pppplStack_148,pppplStack_140,
                        ((long)pppplStack_140 - (long)pppplStack_148 >> 3) * -0x3333333333333333);
          if (pppplStack_120 < pppplStack_118) {
            pppplStack_120[2] = (long ***)pppplStack_180;
            pppplStack_120[1] = (long ***)pppplStack_188;
            *pppplStack_120 = (long ***)pppplStack_190;
            pppplStack_188 = (long ****)0x0;
            pppplStack_180 = (long ****)0x0;
            pppplStack_190 = (long ****)0x0;
            pppplStack_120[3] = (long ***)uStack_178;
            *(undefined4 *)(pppplStack_120 + 4) = (undefined4)uStack_170;
            pppplStack_120[6] = (long ***)0x0;
            pppplStack_120[7] = (long ***)0x0;
            pppplStack_120[5] = (long ***)0x0;
            pppplStack_120[6] = ppplStack_160;
            pppplStack_120[5] = ppplStack_168;
            pppplStack_120[7] = ppplStack_158;
            *unaff_x22 = (long ****)0x0;
            unaff_x22[1] = (long ****)0x0;
            unaff_x22[2] = (long ****)0x0;
            ppppplVar17 = (long *****)(pppplStack_120 + 8);
          }
          else {
            lVar24 = (long)pppplStack_120 - (long)pppplStack_128;
            uVar19 = (lVar24 >> 6) + 1;
            if (uVar19 >> 0x3a != 0) {
              FUN_10a0e8a18();
              goto LAB_10a0e7e0c;
            }
            uVar25 = (long)pppplStack_118 - (long)pppplStack_128 >> 5;
            if (uVar25 <= uVar19) {
              uVar25 = uVar19;
            }
            if (0x7fffffffffffffbf < (ulong)((long)pppplStack_118 - (long)pppplStack_128)) {
              uVar25 = 0x3ffffffffffffff;
            }
            uStack_90 = SUB84(pppplStack_210,0);
            uStack_8c = (undefined4)((ulong)pppplStack_210 >> 0x20);
            ppppplVar16 = (long *****)pppplStack_210;
            FUN_10a0e8a2c();
            puVar1 = (undefined8 *)((long)ppppplVar16 + lVar24);
            puVar1[2] = pppplStack_180;
            puVar1[1] = pppplStack_188;
            *puVar1 = pppplStack_190;
            pppplStack_188 = (long ****)0x0;
            pppplStack_180 = (long ****)0x0;
            pppplStack_190 = (long ****)0x0;
            *(undefined4 *)(puVar1 + 4) = (undefined4)uStack_170;
            puVar1[3] = uStack_178;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[5] = 0;
            puVar1[6] = ppplStack_160;
            puVar1[5] = ppplStack_168;
            puVar1[7] = ppplStack_158;
            *unaff_x22 = (long ****)0x0;
            unaff_x22[1] = (long ****)0x0;
            unaff_x22[2] = (long ****)0x0;
            ppppplVar17 = (long *****)(puVar1 + 8);
            ppppplVar14 = (long *****)((long)puVar1 + ((long)pppplStack_128 - (long)pppplStack_120))
            ;
            func_0x00010a0e8a60(pppplStack_128,pppplStack_120,ppppplVar14);
            pppplStack_a0 = pppplStack_128;
            uStack_98 = SUB84(pppplStack_118,0);
            uStack_94 = (undefined4)((ulong)pppplStack_118 >> 0x20);
            pppplStack_b0 = pppplStack_128;
            pppplStack_a8 = pppplStack_128;
            pppplStack_128 = (long ****)ppppplVar14;
            pppplStack_120 = (long ****)ppppplVar17;
            pppplStack_118 = (long ****)(ppppplVar16 + uVar25 * 8);
            func_0x000107c2abf8(&pppplStack_b0);
          }
          pppplStack_b0 = (long ****)unaff_x22;
          pppplStack_120 = (long ****)ppppplVar17;
          func_0x000107c2b0e8(&pppplStack_b0);
          if ((long)pppplStack_180 < 0) {
            __ZdlPv(pppplStack_190);
          }
        }
        pppplVar23 = (long ****)ppplStack_1e0;
        pppplStack_190 = (long ****)&pppplStack_148;
        func_0x000107c2b0e8(&pppplStack_190);
        ppplVar26 = (long ***)(pplVar4 + 7);
      }
      ppplVar5 = pppplVar23[0xe];
      for (ppplVar26 = pppplVar23[0xd]; ppplVar26 != ppplVar5; ppplVar26 = ppplVar26 + 5) {
        if (*(char *)((long)ppplVar26 + 0x17) < '\0') {
          func_0x000107c3192c(&pppplStack_190,*ppplVar26,ppplVar26[1]);
        }
        else {
          pppplStack_188 = (long ****)ppplVar26[1];
          pppplStack_190 = (long ****)*ppplVar26;
          pppplStack_180 = (long ****)ppplVar26[2];
        }
        uStack_178 = (long *****)ppplVar26[3];
        uStack_170 = (long *****)CONCAT44(1,*(undefined4 *)(ppplVar26 + 4));
        if (ppplStack_d8 < ppplStack_d0) {
          ppplStack_d8[2] = (long **)pppplStack_180;
          ppplStack_d8[1] = (long **)pppplStack_188;
          *ppplStack_d8 = (long **)pppplStack_190;
          pppplStack_188 = (long ****)0x0;
          pppplStack_180 = (long ****)0x0;
          pppplStack_190 = (long ****)0x0;
          ppplStack_d8[4] = (long **)uStack_170;
          ppplStack_d8[3] = (long **)uStack_178;
          ppplStack_d8 = ppplStack_d8 + 5;
        }
        else {
          pppplVar23 = (long ****)ppplStack_208;
          FUN_109fe9af0(ppplStack_208,&pppplStack_190);
          ppplStack_d8 = (long ***)pppplVar23;
          if ((long)pppplStack_180 < 0) {
            __ZdlPv(pppplStack_190);
          }
        }
      }
      param_3 = &pppplStack_130;
      func_0x000107c2b0b4(puStack_218);
      pppplStack_190 = pppplStack_1f8;
      func_0x000107c2b0d8(&pppplStack_190);
      pppplStack_190 = (long ****)ppplStack_208;
      func_0x000107c2b0d0(&pppplStack_190);
      pppplStack_190 = pppplStack_1f0;
      func_0x000107c2b0cc(&pppplStack_190);
      pppplStack_190 = (long ****)ppplStack_200;
      func_0x000107c2b0c8(&pppplStack_190);
      ppppplVar17 = (long *****)pppplStack_210;
      pppplStack_190 = pppplStack_210;
      param_2 = &pppplStack_190;
      func_0x000107c2b0c0();
      pppplVar23 = (long ****)(ppplStack_1e0 + 0x13);
    } while (pppplVar23 != (long ****)ppplStack_220);
  }
  puVar11 = puStack_230;
  plVar2 = plStack_238;
  pppplVar23 = (long ****)pppplStack_228[3];
  pppplVar27 = (long ****)pppplStack_228[4];
  if (pppplVar23 != pppplVar27) {
    unaff_x22 = (long *****)0x7fffffffffffffe0;
    do {
      if (*(char *)((long)pppplVar23 + 0x17) < '\0') {
        param_3 = (long *****)*pppplVar23;
        param_2 = &pppplStack_190;
        func_0x000107c3192c(param_2,param_3,pppplVar23[1]);
      }
      else {
        pppplStack_188 = (long ****)pppplVar23[1];
        pppplStack_190 = (long ****)*pppplVar23;
        pppplStack_180 = (long ****)pppplVar23[2];
      }
      uStack_178 = (long *****)
                   CONCAT44(*(undefined4 *)(pppplVar23 + 4),*(undefined4 *)(pppplVar23 + 3));
      puVar1 = *(undefined8 **)(puVar11 + 10);
      if (puVar1 < *(undefined8 **)(puVar11 + 0xc)) {
        puVar1[2] = pppplStack_180;
        puVar1[1] = pppplStack_188;
        *puVar1 = pppplStack_190;
        pppplStack_188 = (long ****)0x0;
        pppplStack_180 = (long ****)0x0;
        pppplStack_190 = (long ****)0x0;
        puVar1[3] = uStack_178;
        *(undefined8 **)(puVar11 + 10) = puVar1 + 4;
      }
      else {
        lVar24 = (long)puVar1 - *plVar2;
        uVar19 = (lVar24 >> 5) + 1;
        if (uVar19 >> 0x3b != 0) {
          FUN_10a0e8c44();
          goto LAB_10a0e7e0c;
        }
        uVar22 = (long)*(undefined8 **)(puVar11 + 0xc) - (long)*plVar2;
        uVar25 = (long)uVar22 >> 4;
        if (uVar25 <= uVar19) {
          uVar25 = uVar19;
        }
        if (0x7fffffffffffffdf < uVar22) {
          uVar25 = 0x7ffffffffffffff;
        }
        pplStack_110 = (long **)plVar2;
        pplVar28 = (long **)plVar2;
        FUN_10a0e8c58();
        puVar1 = (undefined8 *)((long)pplVar28 + lVar24);
        puVar1[2] = pppplStack_180;
        puVar1[1] = pppplStack_188;
        *puVar1 = pppplStack_190;
        pppplStack_188 = (long ****)0x0;
        pppplStack_180 = (long ****)0x0;
        pppplStack_190 = (long ****)0x0;
        puVar1[3] = uStack_178;
        param_3 = *(long ******)(puVar11 + 8);
        lVar24 = (long)puVar1 + ((long)param_3 - *(long *)(puVar11 + 10));
        func_0x00010a0e8c8c(plVar2,param_3,*(long *)(puVar11 + 10),lVar24);
        pppplStack_130 = *(long *****)(puVar11 + 8);
        *(long *)(puVar11 + 8) = lVar24;
        *(undefined8 **)(puVar11 + 10) = puVar1 + 4;
        pppplStack_118 = *(long *****)(puVar11 + 0xc);
        *(long ***)(puVar11 + 0xc) = pplVar28 + uVar25 * 4;
        param_2 = &pppplStack_130;
        pppplStack_128 = pppplStack_130;
        pppplStack_120 = pppplStack_130;
        func_0x000107c2aba8();
        *(undefined8 **)(puVar11 + 10) = puVar1 + 4;
        if ((long)pppplStack_180 < 0) {
          param_2 = (long *****)pppplStack_190;
          __ZdlPv();
        }
      }
      pppplVar23 = pppplVar23 + 5;
    } while (pppplVar23 != pppplVar27);
  }
  uVar19 = (ulong)((long)pppplStack_228[7] - (long)pppplStack_228[6]) >> 5;
  uVar18 = (uint)uVar19;
  if (uVar18 < 9) {
    if (uVar18 != 0) {
      lVar24 = 0;
      pppplVar23 = (long ****)0x0;
      pppplVar27 = (long ****)
                   ((ulong)((long)pppplStack_228[7] - (long)pppplStack_228[6]) >> 5 & 0xf);
      do {
        pppplVar6 = (long ****)pppplStack_228[6];
        if ((long ****)((long)pppplStack_228[7] - (long)pppplVar6 >> 5) <= pppplVar23) {
LAB_10a0e7e0c:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10a0e7e10);
          (*pcVar12)();
        }
        plVar2 = (long *)((long)pppplVar6 + lVar24);
        if (*(char *)((long)plVar2 + 0x17) < '\0') {
          param_3 = (long *****)*plVar2;
          param_2 = &pppplStack_130;
          func_0x000107c3192c(param_2,param_3,plVar2[1]);
        }
        else {
          pppplStack_128 = (long ****)plVar2[1];
          pppplStack_130 = (long ****)*plVar2;
          pppplStack_120 = (long ****)plVar2[2];
        }
        pppplStack_118 = *(long *****)((long)pppplVar6 + lVar24 + 0x18);
        unaff_x22 = (long *****)((long)puVar11 + lVar24);
        if (*(char *)((long)unaff_x22 + 0x4f) < '\0') {
          param_2 = (long *****)unaff_x22[7];
          __ZdlPv();
        }
        unaff_x22[8] = pppplStack_128;
        unaff_x22[7] = pppplStack_130;
        unaff_x22[9] = pppplStack_120;
        unaff_x22[10] = pppplStack_118;
        pppplVar23 = (long ****)((long)pppplVar23 + 1);
        lVar24 = lVar24 + 0x20;
      } while (pppplVar27 != pppplVar23);
    }
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    uStack_248 = 8;
    param_2 = (long *****)0x0;
    param_3 = (long *****)0x1;
    uStack_250 = uVar19;
    func_0x00010ae06f08(0,1,&UNK_10f63a80d,&UNK_10f63a84a,0x5b,&UNK_10f63a8d7);
  }
  pppplVar6 = (long ****)pppplStack_228[10];
  for (pppplVar23 = (long ****)pppplStack_228[9]; pppplVar23 != pppplVar6;
      pppplVar23 = pppplVar23 + 2) {
    pppplStack_128 = (long ****)pppplVar23[1];
    pppplStack_130 = (long ****)*pppplVar23;
    param_2 = (long *****)(puVar11 + 0x60);
    param_3 = &pppplStack_130;
    func_0x000107c2b0b0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x00010923ff08(puVar11);
    __Unwind_Resume(param_2);
    func_0x000104bd46a0();
    pcStack_258 = FUN_10a0e80a8;
    pppplVar20 = *param_2;
    if ((long *****)(((long)param_2[2] - (long)pppplVar20 >> 3) * -0x3333333333333333) < param_3) {
      pppplStack_280 = (long ****)unaff_x22;
      ppplStack_278 = (long ***)pppplVar27;
      ppplStack_270 = (long ***)pppplVar6;
      ppplStack_268 = (long ***)pppplVar23;
      puStack_260 = &stack0xfffffffffffffff0;
      if ((long *****)0x666666666666666 < param_3) {
        FUN_10a0e9f24();
        if ((bRam0000000113834b90 & 1) == 0) {
          iVar13 = 0x13834b90;
          ___cxa_guard_acquire();
          if (iVar13 != 0) {
            FUN_10a0e81ec();
            ___cxa_atexit(FUN_10a0e8620,0x113834b28,0x100000000);
            ___cxa_guard_release(0x113834b90);
          }
        }
        return (long *****)0x113834b28;
      }
      pppplVar23 = param_2[1];
      ppppplVar17 = param_2;
      pppplStack_288 = (long ****)param_2;
      FUN_10a0e9f38();
      pppplVar23 = (long ****)((long)ppppplVar17 + ((long)pppplVar23 - (long)pppplVar20));
      pppplVar27 = (long ****)((long)pppplVar23 + ((long)*param_2 - (long)param_2[1]));
      FUN_10a0eaf00(param_2,*param_2,param_2[1],pppplVar27);
      ppplStack_2a8 = (long ***)*param_2;
      *param_2 = pppplVar27;
      param_2[1] = pppplVar23;
      ppplStack_290 = (long ***)param_2[2];
      param_2[2] = (long ****)(ppppplVar17 + (long)param_3 * 5);
      param_2 = (long *****)&ppplStack_2a8;
      ppplStack_2a0 = ppplStack_2a8;
      ppplStack_298 = ppplStack_2a8;
      func_0x00010923caa8(param_2);
    }
    return param_2;
  }
  return param_2;
}



/* Entry: 10a0e80a8; end: 10a0e8163;  */

long * FUN_10a0e80a8(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10a0e9f24();
      if ((bRam0000000113834b90 & 1) == 0) {
        iVar1 = 0x13834b90;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          FUN_10a0e81ec();
          ___cxa_atexit(FUN_10a0e8620,0x113834b28,0x100000000);
          ___cxa_guard_release(0x113834b90);
        }
      }
      return (long *)0x113834b28;
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_10a0e9f38();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar4 = lVar3 + (*param_1 - param_1[1]);
    FUN_10a0eaf00(param_1,*param_1,param_1[1],lVar4);
    lStack_58 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar2 + param_2 * 5);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010923caa8(param_1);
  }
  return param_1;
}



/* Entry: 10a0e8164; end: 10a0e81eb;  */

undefined8 FUN_10a0e8164(void)

{
  int iVar1;
  
  if ((bRam0000000113834b90 & 1) == 0) {
    iVar1 = 0x13834b90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10a0e81ec();
      ___cxa_atexit(FUN_10a0e8620,0x113834b28,0x100000000);
      ___cxa_guard_release(0x113834b90);
    }
  }
  return 0x113834b28;
}



/* Entry: 10a0e81ec; end: 10a0e861f;  */

void FUN_10a0e81ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  char cStack_b1;
  byte bStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  char cStack_81;
  byte bStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_38 = 0x3f800000;
  FUN_109f6c690(auStack_a0,&uStack_70,&DAT_10f63ace6,0xe,1,0);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba2130 + lVar3);
    uVar1 = uVar2;
    _strlen(uVar2);
    FUN_109f6cd40(auStack_d0,&uStack_70,uVar2,uVar1,auStack_a0[0]);
    if (((bStack_a8 & 1) == 0) && (cStack_b1 < '\0')) {
      __ZdlPv(uStack_c8);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x48);
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  FUN_109f6c690(auStack_a0,&uStack_70,&DAT_10f63ad92,0xc,1,1);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba2178 + lVar3);
    uVar1 = uVar2;
    _strlen(uVar2);
    FUN_109f6cd40(auStack_d0,&uStack_70,uVar2,uVar1,auStack_a0[0]);
    if (((bStack_a8 & 1) == 0) && (cStack_b1 < '\0')) {
      __ZdlPv(uStack_c8);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0xa0);
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  FUN_109f6c690(auStack_a0,&uStack_70,&UNK_10f63af88,0xe,2,3);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba2218 + lVar3);
    uVar1 = uVar2;
    _strlen(uVar2);
    FUN_109f6cd40(auStack_d0,&uStack_70,uVar2,uVar1,auStack_a0[0]);
    if (((bStack_a8 & 1) == 0) && (cStack_b1 < '\0')) {
      __ZdlPv(uStack_c8);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0xd8);
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  FUN_109f6c690(auStack_a0,&uStack_70,&DAT_10f63b1cc,0xb,2,6);
  FUN_109f6cd40(auStack_d0,&uStack_70,&UNK_10f63b1d8,8,auStack_a0[0]);
  if (((bStack_a8 & 1) == 0) && (cStack_b1 < '\0')) {
    __ZdlPv(uStack_c8);
  }
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  FUN_109f6c690(auStack_a0,&uStack_70,&UNK_10f63b1e1,0x10,2,4);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba22f0 + lVar3);
    uVar1 = uVar2;
    _strlen(uVar2);
    FUN_109f6cd40(auStack_d0,&uStack_70,uVar2,uVar1,auStack_a0[0]);
    if (((bStack_a8 & 1) == 0) && (cStack_b1 < '\0')) {
      __ZdlPv(uStack_c8);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x30);
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  FUN_109f6c690(auStack_a0,&uStack_70,&UNK_10f63b213,0xe,2,5);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba2320 + lVar3);
    uVar1 = uVar2;
    _strlen(uVar2);
    FUN_109f6cd40(auStack_d0,&uStack_70,uVar2,uVar1,auStack_a0[0]);
    if (((bStack_a8 & 1) == 0) && (cStack_b1 < '\0')) {
      __ZdlPv(uStack_c8);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  FUN_109f6c690(auStack_a0,&uStack_70,&UNK_10f62b5e4,0xc,2,7);
  FUN_109f6bf84(0x113834b28,&uStack_70);
  if (((bStack_78 & 1) == 0) && (cStack_81 < '\0')) {
    __ZdlPv(uStack_98);
  }
  func_0x000107c2826c(&uStack_58);
  FUN_10a0eb03c(&uStack_70);
  return;
}



/* Entry: 10a0e8620; end: 10a0e8657;  */

long FUN_10a0e8620(long param_1)

{
  func_0x000109f6f51c(param_1 + 0x40);
  func_0x000109f6f4d4(param_1 + 0x18);
  FUN_10a0eb03c(param_1);
  return param_1;
}



/* Entry: 10a0e8658; end: 10a0e866b;  */

void FUN_10a0e8658(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a0e8770(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a0e866c; end: 10a0e876f;  */

void FUN_10a0e866c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a0e8770(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a0e8770; end: 10a0e87a3;  */

long FUN_10a0e8770(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0e87a4(param_1);
  }
  return param_1;
}



/* Entry: 10a0e87a4; end: 10a0e87e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e87d0) */

void FUN_10a0e87a4(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a0e87e8; end: 10a0e87fb;  */

void FUN_10a0e87e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puStack_58[3] = uVar3;
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a0e8900(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a0e87fc; end: 10a0e88ff;  */

void FUN_10a0e87fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puStack_48[3] = uVar2;
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10a0e8900(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a0e8900; end: 10a0e8933;  */

long FUN_10a0e8900(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0e8934(param_1);
  }
  return param_1;
}



/* Entry: 10a0e8934; end: 10a0e8977;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e8960) */

void FUN_10a0e8934(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a0e8978; end: 10a0e8a17;  */

undefined8 * FUN_10a0e8978(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[3] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a0eafb8();
  return param_1;
}



/* Entry: 10a0e8a18; end: 10a0e8a2b;  */

void FUN_10a0e8a18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar4;
        *param_3 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar3 = puVar2[3];
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar2 + 4);
        param_3[3] = uVar3;
        param_3[6] = 0;
        param_3[7] = 0;
        param_3[5] = 0;
        uVar3 = puVar2[5];
        param_3[6] = puVar2[6];
        param_3[5] = uVar3;
        param_3[7] = puVar2[7];
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = puVar2 + 8;
        param_3 = param_3 + 8;
      } while (puVar2 != param_2);
      do {
        func_0x000107c2b0bc(puVar1);
        puVar1 = puVar1 + 8;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 10a0e8a2c; end: 10a0e8b3b;  */

void FUN_10a0e8a2c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_3[2] = puVar1[2];
        param_3[1] = uVar3;
        *param_3 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar1 + 4);
        param_3[3] = uVar2;
        param_3[6] = 0;
        param_3[7] = 0;
        param_3[5] = 0;
        uVar2 = puVar1[5];
        param_3[6] = puVar1[6];
        param_3[5] = uVar2;
        param_3[7] = puVar1[7];
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1 = puVar1 + 8;
        param_3 = param_3 + 8;
      } while (puVar1 != param_2);
      do {
        func_0x000107c2b0bc(param_1);
        param_1 = param_1 + 8;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 10a0e8b3c; end: 10a0e8b87;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e8b68) */

void FUN_10a0e8b3c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0e8b88; end: 10a0e8b9b;  */

void FUN_10a0e8b88(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x39 == 0) {
    __Znwm(param_2 << 7);
    return;
  }
  func_0x000109ffded8();
  puStack_58 = puVar1 + 0x68;
  func_0x000107c2b0d8(&puStack_58);
  puStack_58 = puVar1 + 0x50;
  func_0x000107c2b0d0(&puStack_58);
  puStack_58 = puVar1 + 0x38;
  func_0x000107c2b0cc(&puStack_58);
  puStack_58 = puVar1 + 0x20;
  func_0x000107c2b0c8(&puStack_58);
  puStack_58 = puVar1 + 8;
  func_0x000107c2b0c0(&puStack_58);
  return;
}



/* Entry: 10a0e8b9c; end: 10a0e8c43;  */

void FUN_10a0e8b9c(long param_1,ulong param_2)

{
  long lStack_48;
  
  if (param_2 >> 0x39 == 0) {
    __Znwm(param_2 << 7);
    return;
  }
  func_0x000109ffded8();
  lStack_48 = param_1 + 0x68;
  func_0x000107c2b0d8(&lStack_48);
  lStack_48 = param_1 + 0x50;
  func_0x000107c2b0d0(&lStack_48);
  lStack_48 = param_1 + 0x38;
  func_0x000107c2b0cc(&lStack_48);
  lStack_48 = param_1 + 0x20;
  func_0x000107c2b0c8(&lStack_48);
  lStack_48 = param_1 + 8;
  func_0x000107c2b0c0(&lStack_48);
  return;
}



/* Entry: 10a0e8c44; end: 10a0e8c57;  */

void FUN_10a0e8c44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_10a0e8d44(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 10a0e8c58; end: 10a0e8d43;  */

void FUN_10a0e8c58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_10a0e8d44(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 10a0e8d44; end: 10a0e8d77;  */

long FUN_10a0e8d44(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0e8d78(param_1);
  }
  return param_1;
}



/* Entry: 10a0e8d78; end: 10a0e8dfb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e8da4) */

void FUN_10a0e8d78(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 10a0e8dfc; end: 10a0e8eb7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e8e28) */

void FUN_10a0e8dfc(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0e8eb8; end: 10a0e8f3b;  */

void FUN_10a0e8eb8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  func_0x00010a0e8dbc(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a0e8f3c; end: 10a0e8ff7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e8f68) */

void FUN_10a0e8f3c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0e8ff8; end: 10a0e900b;  */

undefined1  [16] FUN_10a0e8ff8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a09d364();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a0e900c; end: 10a0e908b;  */

undefined1  [16] FUN_10a0e900c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a09d364();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a0e908c; end: 10a0e92c7;  */

undefined4 * FUN_10a0e908c(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_10a0e92c8(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 7);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_10a0e9408(param_1 + 8,*(long *)(param_2 + 8),*(long *)(param_2 + 10),
                *(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 5);
  lVar1 = 0;
  do {
    if (*(char *)((long)param_2 + lVar1 + 0x4f) < '\0') {
      func_0x000107c3192c((long)param_1 + lVar1 + 0x38,*(undefined8 *)((long)param_2 + lVar1 + 0x38)
                          ,*(undefined8 *)((long)param_2 + lVar1 + 0x40));
    }
    else {
      uVar3 = *(undefined8 *)((long)param_2 + lVar1 + 0x40);
      uVar2 = *(undefined8 *)((long)param_2 + lVar1 + 0x38);
      *(undefined8 *)((long)param_1 + lVar1 + 0x48) = *(undefined8 *)((long)param_2 + lVar1 + 0x48);
      *(undefined8 *)((long)param_1 + lVar1 + 0x40) = uVar3;
      *(undefined8 *)((long)param_1 + lVar1 + 0x38) = uVar2;
    }
    *(undefined8 *)((long)param_1 + lVar1 + 0x50) = *(undefined8 *)((long)param_2 + lVar1 + 0x50);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  FUN_10a0e958c(param_1 + 0x4e,*(long *)(param_2 + 0x4e),*(long *)(param_2 + 0x50),
                (*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x4e) >> 3) * 0x6db6db6db6db6db7);
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_10a0e97d4(param_1 + 0x54,*(long *)(param_2 + 0x54),*(long *)(param_2 + 0x56),
                (*(long *)(param_2 + 0x56) - *(long *)(param_2 + 0x54) >> 3) * -0x3333333333333333);
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  FUN_10a0e9a40(param_1 + 0x5a,*(long *)(param_2 + 0x5a),*(long *)(param_2 + 0x5c),
                *(long *)(param_2 + 0x5c) - *(long *)(param_2 + 0x5a) >> 2);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  FUN_10a0e9ab8(param_1 + 0x60,*(long *)(param_2 + 0x60),*(long *)(param_2 + 0x62),
                *(long *)(param_2 + 0x62) - *(long *)(param_2 + 0x60) >> 4);
  return param_1;
}



/* Entry: 10a0e92c8; end: 10a0e934b;  */

void FUN_10a0e92c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0e934c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0e9384(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0e934c; end: 10a0e9383;  */

long * FUN_10a0e934c(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x39 == 0) {
    plVar1 = param_1;
    FUN_10a0e8b9c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x10);
    return plVar1;
  }
  FUN_10a0e8b88();
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x000107c2ac14(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 10a0e9384; end: 10a0e9407;  */

long FUN_10a0e9384(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x000107c2ac14(param_4,param_2);
    param_4 = param_4 + 0x80;
  }
  return param_4;
}



/* Entry: 10a0e9408; end: 10a0e948b;  */

void FUN_10a0e9408(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0e948c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0e94c4(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0e948c; end: 10a0e94c3;  */

long * FUN_10a0e948c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_10a0e8c58();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    return plVar1;
  }
  FUN_10a0e8c44();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    param_4[3] = param_2[3];
    param_4 = plStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_10a0e8d44(&plStack_80);
  return param_4;
}



/* Entry: 10a0e94c4; end: 10a0e958b;  */

undefined8 *
FUN_10a0e94c4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a0e8d44(&uStack_60);
  return param_4;
}



/* Entry: 10a0e958c; end: 10a0e960f;  */

void FUN_10a0e958c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0e9610(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0e96b8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0e9610; end: 10a0e965b;  */

undefined1  [16] FUN_10a0e9610(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1;
    FUN_10a0e9670();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a0e965c();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x492492492492493) {
    lVar2 = param_2 * 0x38;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    uVar3 = param_2;
    FUN_10a0e973c(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a0e965c; end: 10a0e966f;  */

undefined1  [16] FUN_10a0e965c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x492492492492493) {
    lVar1 = param_2 * 0x38;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    uVar2 = param_2;
    FUN_10a0e973c(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a0e9670; end: 10a0e96b7;  */

undefined1  [16] FUN_10a0e9670(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x492492492492493) {
    lVar1 = param_2 * 0x38;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    uVar2 = param_2;
    FUN_10a0e973c(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a0e96b8; end: 10a0e973b;  */

long FUN_10a0e96b8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a0e973c(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  return param_4;
}



/* Entry: 10a0e973c; end: 10a0e97d3;  */

undefined8 * FUN_10a0e973c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a0e97d4();
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10a0e97d4; end: 10a0e9857;  */

void FUN_10a0e97d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0e9858(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0e98f8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0e9858; end: 10a0e989f;  */

undefined1  [16]
FUN_10a0e9858(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10a0e98b4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar1;
    return auVar7;
  }
  FUN_10a0e98a0();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar3 = (long)param_2 * 0x28;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  puVar4 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar4,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar6;
      *param_4 = uVar5;
    }
    uVar5 = param_2[3];
    *(undefined1 *)(param_4 + 4) = *(undefined1 *)(param_2 + 4);
    param_4[3] = uVar5;
    param_4 = puStack_88 + 5;
  }
  uStack_98 = 1;
  FUN_10a0e99c8(&puStack_b0);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 10a0e98a0; end: 10a0e98b3;  */

undefined1  [16]
FUN_10a0e98a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  puVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar3,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar5;
      *param_4 = uVar4;
    }
    uVar4 = param_2[3];
    *(undefined1 *)(param_4 + 4) = *(undefined1 *)(param_2 + 4);
    param_4[3] = uVar4;
    param_4 = puStack_68 + 5;
  }
  uStack_78 = 1;
  FUN_10a0e99c8(&puStack_90);
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a0e98b4; end: 10a0e98f7;  */

undefined1  [16]
FUN_10a0e98b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar1 = (long)param_2 * 0x28;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  puVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_2;
      func_0x000107c3192c(param_4,puVar2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    uVar3 = param_2[3];
    *(undefined1 *)(param_4 + 4) = *(undefined1 *)(param_2 + 4);
    param_4[3] = uVar3;
    param_4 = puStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10a0e99c8(&uStack_80);
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a0e98f8; end: 10a0e99c7;  */

undefined8 *
FUN_10a0e98f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    *(undefined1 *)(param_4 + 4) = *(undefined1 *)(param_2 + 4);
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10a0e99c8(&uStack_60);
  return param_4;
}



/* Entry: 10a0e99c8; end: 10a0e99fb;  */

long FUN_10a0e99c8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0e99fc(param_1);
  }
  return param_1;
}



/* Entry: 10a0e99fc; end: 10a0e9a3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e9a28) */

void FUN_10a0e99fc(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a0e9a40; end: 10a0e9ab7;  */

void FUN_10a0e9a40(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109ffe268(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0e9ab8; end: 10a0e9b2f;  */

void FUN_10a0e9ab8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0e9b30(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0e9b30; end: 10a0e9b67;  */

void FUN_10a0e9b30(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    func_0x000107c2b0e0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a0e9b68();
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a0eb124();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a0e9b68; end: 10a0e9b7b;  */

void FUN_10a0e9b68(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a0eb124();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a0e9b7c; end: 10a0e9beb;  */

void FUN_10a0e9b7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a0eb124();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a0e9bec; end: 10a0e9d4f;  */

long * FUN_10a0e9bec(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x23;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  undefined1 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((long *)(param_1[2] - (long)plVar5 >> 7) < param_4) {
    plVar1 = param_1;
    plVar6 = param_2;
    plVar3 = param_3;
    plVar4 = param_4;
    func_0x00010923fd80();
    if ((ulong)param_4 >> 0x39 != 0) {
      FUN_10a0e8b88();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = (long)plVar5;
      __Unwind_Resume();
      pcStack_58 = FUN_10a0e9d50;
      plStack_70 = param_3;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((long *)0x666666666666666 < plVar6) {
        FUN_10a0e9f24();
        pcStack_78 = FUN_10a0e9d98;
        pplStack_c8 = &plStack_b0;
        pplStack_c0 = &plStack_a8;
        uStack_b8 = 0;
        plStack_a0 = plVar5;
        ppuStack_80 = &puStack_60;
        plStack_d0 = plVar1;
        plStack_b0 = plVar4;
        plStack_90 = param_3;
        plStack_98 = param_2;
        plStack_88 = param_1;
        for (; plStack_a8 = plVar4, plVar6 != plVar3; plVar6 = plVar6 + 5) {
          if (*(char *)((long)plVar6 + 0x17) < '\0') {
            func_0x000107c3192c(plVar4,*plVar6,plVar6[1]);
          }
          else {
            lVar8 = plVar6[1];
            lVar7 = *plVar6;
            plVar4[2] = plVar6[2];
            plVar4[1] = lVar8;
            *plVar4 = lVar7;
          }
          lVar7 = plVar6[3];
          plVar4[4] = plVar6[4];
          plVar4[3] = lVar7;
          plVar4 = plStack_a8 + 5;
        }
        uStack_b8 = 1;
        FUN_10a0e9e60(&plStack_d0);
        return plVar4;
      }
      plVar5 = plVar1;
      FUN_10a0e9f38();
      *plVar1 = (long)plVar5;
      plVar1[1] = (long)plVar5;
      plVar1[2] = (long)(plVar5 + (long)plVar6 * 5);
      return plVar5;
    }
    plVar5 = (long *)(param_1[2] - *param_1 >> 6);
    if (plVar5 <= param_4) {
      plVar5 = param_4;
    }
    if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
      plVar5 = (long *)0x1ffffffffffffff;
    }
    FUN_10a0e934c(param_1,plVar5);
    FUN_10a0e9384(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar6 = (long *)param_1[1];
    lVar7 = (long)plVar6 - (long)plVar5;
    if (param_4 <= (long *)(lVar7 >> 7)) {
      if (param_2 != param_3) {
        do {
          plVar2 = plVar5;
          func_0x000109241918(plVar5,param_2);
          param_2 = param_2 + 0x10;
          plVar5 = plVar5 + 0x10;
        } while (param_2 != param_3);
        plVar6 = (long *)param_1[1];
      }
      while (plVar6 != plVar5) {
        plVar6 = plVar6 + -0x10;
        plVar2 = plVar6;
        func_0x00010a0e8bd0(plVar6);
      }
      param_1[1] = (long)plVar5;
      return plVar2;
    }
    plVar4 = param_2;
    lVar8 = lVar7;
    if (plVar6 != plVar5) {
      do {
        func_0x000109241918(plVar5,plVar4);
        plVar5 = plVar5 + 0x10;
        lVar8 = lVar8 + -0x80;
        plVar4 = plVar4 + 0x10;
      } while (lVar8 != 0);
      plVar6 = (long *)param_1[1];
    }
    FUN_10a0e9384(param_1,(long)param_2 + lVar7,param_3,plVar6);
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 10a0e9d50; end: 10a0e9d97;  */

long * FUN_10a0e9d50(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10a0e9f38();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    return plVar1;
  }
  FUN_10a0e9f24();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    lVar2 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar2;
    param_4 = plStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10a0e9e60(&plStack_80);
  return param_4;
}



/* Entry: 10a0e9d98; end: 10a0e9e5f;  */

undefined8 *
FUN_10a0e9d98(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10a0e9e60(&uStack_60);
  return param_4;
}



/* Entry: 10a0e9e60; end: 10a0e9e93;  */

long FUN_10a0e9e60(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0e9e94(param_1);
  }
  return param_1;
}



/* Entry: 10a0e9e94; end: 10a0e9ed7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e9ec0) */

void FUN_10a0e9e94(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a0e9ed8; end: 10a0e9f23;  */

/* WARNING: Removing unreachable block (ram,0x00010a0e9f04) */

void FUN_10a0e9ed8(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0e9f24; end: 10a0e9f37;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ea0b0) */

undefined1  [16] FUN_10a0e9f24(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x23;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 uStack_b2;
  undefined1 auStack_b1 [9];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (long *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    __Znwm(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar9 = (long *)*plVar1;
  plVar4 = plVar1;
  if ((ulong)(plVar1[2] - (long)plVar9 >> 5) < param_4) {
    plVar3 = plVar1;
    plVar10 = param_2;
    plVar5 = param_3;
    uVar7 = param_4;
    func_0x00010923fde4();
    if (param_4 >> 0x3b != 0) {
      FUN_10a0e8c44();
      plVar1[1] = unaff_x23;
      __Unwind_Resume();
      plVar1[1] = (long)plVar9;
      __Unwind_Resume();
      plVar9 = (long *)*plVar3;
      plVar1 = plVar3;
      auStack_b1._1_8_ = param_4;
      if ((ulong)((plVar3[2] - (long)plVar9 >> 3) * 0x6db6db6db6db6db7) < uVar7) {
        plVar4 = plVar10;
        plVar6 = plVar5;
        func_0x00010923fe1c(plVar3);
        if (0x492492492492492 < uVar7) {
          FUN_10a0e965c();
          plVar3[1] = uVar7;
          __Unwind_Resume();
          plVar1 = plVar4;
          for (; plVar4 != plVar6; plVar4 = plVar4 + 7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,plVar4);
            if (plVar9 != plVar4) {
              FUN_10a0ea2f0(plVar9 + 3,plVar4[3],plVar4[4],
                            (plVar4[4] - plVar4[3] >> 3) * -0x3333333333333333);
            }
            *(int *)(plVar9 + 6) = (int)plVar4[6];
            plVar9 = plVar9 + 7;
            plVar1 = plVar6;
          }
          auVar14._8_8_ = plVar9;
          auVar14._0_8_ = plVar1;
          return auVar14;
        }
        lVar2 = plVar3[2] - *plVar3 >> 3;
        uVar8 = lVar2 * -0x2492492492492492;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
        if (0x249249249249248 < (ulong)(lVar2 * 0x6db6db6db6db6db7)) {
          uVar8 = 0x492492492492492;
        }
        FUN_10a0e9610(plVar3,uVar8);
        FUN_10a0e96b8(plVar3,plVar10,plVar5,plVar3[1]);
      }
      else {
        lVar2 = plVar3[1] - (long)plVar9;
        if (uVar7 <= (ulong)((lVar2 >> 3) * 0x6db6db6db6db6db7)) {
          plVar1 = (long *)auStack_b1;
          FUN_10a0ea264(plVar1,plVar10,plVar5);
          plVar9 = (long *)plVar3[1];
          plVar4 = plVar10;
          while (plVar9 != plVar10) {
            plVar9 = plVar9 + -7;
            plVar1 = plVar9;
            FUN_10a0e8eb8(plVar9);
          }
          plVar3[1] = (long)plVar10;
          goto LAB_10a0ea23c;
        }
        FUN_10a0ea264(&uStack_b2,plVar10,(long)plVar10 + lVar2);
        plVar10 = (long *)((long)plVar10 + lVar2);
        FUN_10a0e96b8(plVar3,plVar10,plVar5,plVar3[1]);
      }
      plVar3[1] = (long)plVar1;
      plVar4 = plVar10;
LAB_10a0ea23c:
      auVar13._8_8_ = plVar4;
      auVar13._0_8_ = plVar1;
      return auVar13;
    }
    uVar7 = plVar1[2] - *plVar1 >> 4;
    if (uVar7 <= param_4) {
      uVar7 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(plVar1[2] - *plVar1)) {
      uVar7 = 0x7ffffffffffffff;
    }
    FUN_10a0e948c(plVar1,uVar7);
    FUN_10a0e94c4(plVar1,param_2,param_3,plVar1[1]);
    plVar3 = param_2;
  }
  else {
    plVar10 = (long *)plVar1[1];
    if (param_4 <= (ulong)((long)plVar10 - (long)plVar9 >> 5)) {
      plVar3 = param_2;
      if (param_2 != param_3) {
        do {
          plVar4 = plVar9;
          param_2 = plVar3;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,plVar3);
          plVar9[3] = plVar3[3];
          plVar3 = plVar3 + 4;
          plVar9 = plVar9 + 4;
        } while (plVar3 != param_3);
        plVar10 = (long *)plVar1[1];
      }
      for (; plVar10 != plVar9; plVar10 = plVar10 + -4) {
      }
      plVar1[1] = (long)plVar9;
      goto LAB_10a0ea0c4;
    }
    plVar3 = (long *)((long)param_2 + ((long)plVar10 - (long)plVar9));
    if (plVar10 != plVar9) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2);
        plVar9[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar9 = plVar9 + 4;
      } while (param_2 != plVar3);
      plVar10 = (long *)plVar1[1];
    }
    FUN_10a0e94c4(plVar1,plVar3,param_3,plVar10);
  }
  plVar1[1] = (long)plVar4;
  param_2 = plVar3;
LAB_10a0ea0c4:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = plVar4;
  return auVar12;
}



/* Entry: 10a0e9f38; end: 10a0e9f7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ea0b0) */

undefined1  [16] FUN_10a0e9f38(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x23;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 uStack_a2;
  undefined1 auStack_a1 [9];
  
  if (param_2 < (long *)0x666666666666667) {
    lVar1 = (long)param_2 * 0x28;
    __Znwm(lVar1);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar1;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar9 = (long *)*param_1;
  plVar6 = param_1;
  if ((ulong)(param_1[2] - (long)plVar9 >> 5) < param_4) {
    plVar2 = param_1;
    plVar10 = param_2;
    plVar4 = param_3;
    uVar7 = param_4;
    func_0x00010923fde4();
    if (param_4 >> 0x3b != 0) {
      FUN_10a0e8c44();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = (long)plVar9;
      __Unwind_Resume();
      plVar6 = (long *)*plVar2;
      plVar9 = plVar2;
      auStack_a1._1_8_ = param_4;
      if ((ulong)((plVar2[2] - (long)plVar6 >> 3) * 0x6db6db6db6db6db7) < uVar7) {
        plVar3 = plVar10;
        plVar5 = plVar4;
        func_0x00010923fe1c(plVar2);
        if (0x492492492492492 < uVar7) {
          FUN_10a0e965c();
          plVar2[1] = uVar7;
          __Unwind_Resume();
          plVar9 = plVar3;
          for (; plVar3 != plVar5; plVar3 = plVar3 + 7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar3);
            if (plVar6 != plVar3) {
              FUN_10a0ea2f0(plVar6 + 3,plVar3[3],plVar3[4],
                            (plVar3[4] - plVar3[3] >> 3) * -0x3333333333333333);
            }
            *(int *)(plVar6 + 6) = (int)plVar3[6];
            plVar6 = plVar6 + 7;
            plVar9 = plVar5;
          }
          auVar14._8_8_ = plVar6;
          auVar14._0_8_ = plVar9;
          return auVar14;
        }
        lVar1 = plVar2[2] - *plVar2 >> 3;
        uVar8 = lVar1 * -0x2492492492492492;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
        if (0x249249249249248 < (ulong)(lVar1 * 0x6db6db6db6db6db7)) {
          uVar8 = 0x492492492492492;
        }
        FUN_10a0e9610(plVar2,uVar8);
        FUN_10a0e96b8(plVar2,plVar10,plVar4,plVar2[1]);
      }
      else {
        lVar1 = plVar2[1] - (long)plVar6;
        if (uVar7 <= (ulong)((lVar1 >> 3) * 0x6db6db6db6db6db7)) {
          plVar9 = (long *)auStack_a1;
          FUN_10a0ea264(plVar9,plVar10,plVar4);
          plVar6 = (long *)plVar2[1];
          plVar4 = plVar10;
          while (plVar6 != plVar10) {
            plVar6 = plVar6 + -7;
            plVar9 = plVar6;
            FUN_10a0e8eb8(plVar6);
          }
          plVar2[1] = (long)plVar10;
          goto LAB_10a0ea23c;
        }
        FUN_10a0ea264(&uStack_a2,plVar10,(undefined1 *)((long)plVar10 + lVar1));
        plVar10 = (long *)((long)plVar10 + lVar1);
        FUN_10a0e96b8(plVar2,plVar10,plVar4,plVar2[1]);
      }
      plVar2[1] = (long)plVar9;
      plVar4 = plVar10;
LAB_10a0ea23c:
      auVar13._8_8_ = plVar4;
      auVar13._0_8_ = plVar9;
      return auVar13;
    }
    uVar7 = param_1[2] - *param_1 >> 4;
    if (uVar7 <= param_4) {
      uVar7 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar7 = 0x7ffffffffffffff;
    }
    FUN_10a0e948c(param_1,uVar7);
    FUN_10a0e94c4(param_1,param_2,param_3,param_1[1]);
    plVar2 = param_2;
  }
  else {
    plVar10 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar10 - (long)plVar9 >> 5)) {
      plVar2 = param_2;
      if (param_2 != param_3) {
        do {
          plVar6 = plVar9;
          param_2 = plVar2;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,plVar2);
          plVar9[3] = plVar2[3];
          plVar2 = plVar2 + 4;
          plVar9 = plVar9 + 4;
        } while (plVar2 != param_3);
        plVar10 = (long *)param_1[1];
      }
      for (; plVar10 != plVar9; plVar10 = plVar10 + -4) {
      }
      param_1[1] = (long)plVar9;
      goto LAB_10a0ea0c4;
    }
    plVar2 = (long *)((long)param_2 + ((long)plVar10 - (long)plVar9));
    if (plVar10 != plVar9) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2);
        plVar9[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar9 = plVar9 + 4;
      } while (param_2 != plVar2);
      plVar10 = (long *)param_1[1];
    }
    FUN_10a0e94c4(param_1,plVar2,param_3,plVar10);
  }
  param_1[1] = (long)plVar6;
  param_2 = plVar2;
LAB_10a0ea0c4:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = plVar6;
  return auVar12;
}



/* Entry: 10a0e9f7c; end: 10a0ea0eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ea0b0) */

undefined1  [16] FUN_10a0e9f7c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x23;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uStack_82;
  undefined1 auStack_81 [9];
  
  plVar9 = (long *)*param_1;
  plVar5 = param_1;
  if ((ulong)(param_1[2] - (long)plVar9 >> 5) < param_4) {
    plVar1 = param_1;
    plVar10 = param_2;
    plVar3 = param_3;
    uVar7 = param_4;
    func_0x00010923fde4();
    if (param_4 >> 0x3b != 0) {
      FUN_10a0e8c44();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = (long)plVar9;
      __Unwind_Resume();
      plVar5 = (long *)*plVar1;
      plVar9 = plVar1;
      auStack_81._1_8_ = param_4;
      if ((ulong)((plVar1[2] - (long)plVar5 >> 3) * 0x6db6db6db6db6db7) < uVar7) {
        plVar2 = plVar10;
        plVar4 = plVar3;
        func_0x00010923fe1c(plVar1);
        if (0x492492492492492 < uVar7) {
          FUN_10a0e965c();
          plVar1[1] = uVar7;
          __Unwind_Resume();
          plVar9 = plVar2;
          for (; plVar2 != plVar4; plVar2 = plVar2 + 7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,plVar2);
            if (plVar5 != plVar2) {
              FUN_10a0ea2f0(plVar5 + 3,plVar2[3],plVar2[4],
                            (plVar2[4] - plVar2[3] >> 3) * -0x3333333333333333);
            }
            *(int *)(plVar5 + 6) = (int)plVar2[6];
            plVar5 = plVar5 + 7;
            plVar9 = plVar4;
          }
          auVar13._8_8_ = plVar5;
          auVar13._0_8_ = plVar9;
          return auVar13;
        }
        lVar6 = plVar1[2] - *plVar1 >> 3;
        uVar8 = lVar6 * -0x2492492492492492;
        if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
          uVar8 = uVar7;
        }
        if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
          uVar8 = 0x492492492492492;
        }
        FUN_10a0e9610(plVar1,uVar8);
        FUN_10a0e96b8(plVar1,plVar10,plVar3,plVar1[1]);
      }
      else {
        lVar6 = plVar1[1] - (long)plVar5;
        if (uVar7 <= (ulong)((lVar6 >> 3) * 0x6db6db6db6db6db7)) {
          plVar9 = (long *)auStack_81;
          FUN_10a0ea264(plVar9,plVar10,plVar3);
          plVar5 = (long *)plVar1[1];
          plVar3 = plVar10;
          while (plVar5 != plVar10) {
            plVar5 = plVar5 + -7;
            plVar9 = plVar5;
            FUN_10a0e8eb8(plVar5);
          }
          plVar1[1] = (long)plVar10;
          goto LAB_10a0ea23c;
        }
        FUN_10a0ea264(&uStack_82,plVar10,(undefined1 *)((long)plVar10 + lVar6));
        plVar10 = (long *)((long)plVar10 + lVar6);
        FUN_10a0e96b8(plVar1,plVar10,plVar3,plVar1[1]);
      }
      plVar1[1] = (long)plVar9;
      plVar3 = plVar10;
LAB_10a0ea23c:
      auVar12._8_8_ = plVar3;
      auVar12._0_8_ = plVar9;
      return auVar12;
    }
    uVar7 = param_1[2] - *param_1 >> 4;
    if (uVar7 <= param_4) {
      uVar7 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar7 = 0x7ffffffffffffff;
    }
    FUN_10a0e948c(param_1,uVar7);
    FUN_10a0e94c4(param_1,param_2,param_3,param_1[1]);
    plVar1 = param_2;
  }
  else {
    plVar10 = (long *)param_1[1];
    if (param_4 <= (ulong)((long)plVar10 - (long)plVar9 >> 5)) {
      plVar1 = param_2;
      if (param_2 != param_3) {
        do {
          plVar5 = plVar9;
          param_2 = plVar1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,plVar1);
          plVar9[3] = plVar1[3];
          plVar1 = plVar1 + 4;
          plVar9 = plVar9 + 4;
        } while (plVar1 != param_3);
        plVar10 = (long *)param_1[1];
      }
      for (; plVar10 != plVar9; plVar10 = plVar10 + -4) {
      }
      param_1[1] = (long)plVar9;
      goto LAB_10a0ea0c4;
    }
    plVar1 = (long *)((long)param_2 + ((long)plVar10 - (long)plVar9));
    if (plVar10 != plVar9) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2);
        plVar9[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar9 = plVar9 + 4;
      } while (param_2 != plVar1);
      plVar10 = (long *)param_1[1];
    }
    FUN_10a0e94c4(param_1,plVar1,param_3,plVar10);
  }
  param_1[1] = (long)plVar5;
  param_2 = plVar1;
LAB_10a0ea0c4:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = plVar5;
  return auVar11;
}



/* Entry: 10a0ea0ec; end: 10a0ea263;  */

undefined1  [16] FUN_10a0ea0ec(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_42 [2];
  
  plVar4 = (long *)*param_1;
  plVar1 = param_1;
  if ((ulong)((param_1[2] - (long)plVar4 >> 3) * 0x6db6db6db6db6db7) < param_4) {
    plVar2 = param_2;
    plVar3 = param_3;
    func_0x00010923fe1c(param_1);
    if (0x492492492492492 < param_4) {
      FUN_10a0e965c();
      param_1[1] = param_4;
      __Unwind_Resume();
      plVar1 = plVar2;
      for (; plVar2 != plVar3; plVar2 = plVar2 + 7) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4,plVar2);
        if (plVar4 != plVar2) {
          FUN_10a0ea2f0(plVar4 + 3,plVar2[3],plVar2[4],
                        (plVar2[4] - plVar2[3] >> 3) * -0x3333333333333333);
        }
        *(int *)(plVar4 + 6) = (int)plVar2[6];
        plVar4 = plVar4 + 7;
        plVar1 = plVar3;
      }
      auVar8._8_8_ = plVar4;
      auVar8._0_8_ = plVar1;
      return auVar8;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    FUN_10a0e9610(param_1,uVar6);
    FUN_10a0e96b8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar5 = param_1[1] - (long)plVar4;
    if (param_4 <= (ulong)((lVar5 >> 3) * 0x6db6db6db6db6db7)) {
      plVar1 = (long *)(auStack_42 + 1);
      FUN_10a0ea264(plVar1,param_2,param_3);
      plVar4 = (long *)param_1[1];
      plVar2 = param_2;
      while (plVar4 != param_2) {
        plVar4 = plVar4 + -7;
        plVar1 = plVar4;
        FUN_10a0e8eb8(plVar4);
      }
      param_1[1] = (long)param_2;
      goto LAB_10a0ea23c;
    }
    FUN_10a0ea264(auStack_42,param_2,(undefined1 *)((long)param_2 + lVar5));
    param_2 = (long *)((long)param_2 + lVar5);
    FUN_10a0e96b8(param_1,param_2,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar1;
  plVar2 = param_2;
LAB_10a0ea23c:
  auVar7._8_8_ = plVar2;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 10a0ea264; end: 10a0ea2ef;  */

undefined1  [16] FUN_10a0ea264(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_4,param_2);
    if (param_4 != param_2) {
      FUN_10a0ea2f0(param_4 + 0x18,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                    (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) *
                    -0x3333333333333333);
    }
    *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    param_4 = param_4 + 0x38;
    lVar1 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10a0ea2f0; end: 10a0ea49f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ea464) */

void FUN_10a0ea2f0(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x23;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  lVar9 = *param_1;
  plVar11 = param_1;
  if ((ulong)((param_1[2] - lVar9 >> 3) * -0x3333333333333333) < param_4) {
    plVar13 = param_1;
    puVar2 = param_2;
    puVar4 = param_3;
    uVar8 = param_4;
    func_0x00010923fe80();
    if (0x666666666666666 < param_4) {
      FUN_10a0e98a0();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      uVar7 = plVar13[2];
      plVar11 = (long *)*plVar13;
      if ((ulong)((long)(uVar7 - (long)plVar11) >> 2) < uVar8) {
        plVar12 = plVar13;
        puVar3 = puVar2;
        puVar5 = puVar4;
        uVar6 = uVar8;
        if (plVar11 != (long *)0x0) {
          plVar13[1] = (long)plVar11;
          __ZdlPv();
          uVar7 = 0;
          *plVar13 = 0;
          plVar13[1] = 0;
          plVar13[2] = 0;
          plVar12 = plVar11;
        }
        if (uVar8 >> 0x3e != 0) {
          func_0x000109ffdfac();
          uVar8 = plVar12[2];
          plVar11 = (long *)*plVar12;
          if ((ulong)((long)(uVar8 - (long)plVar11) >> 4) < uVar6) {
            plVar13 = plVar12;
            puVar2 = puVar3;
            puVar4 = puVar5;
            uVar7 = uVar6;
            if (plVar11 != (long *)0x0) {
              plVar12[1] = (long)plVar11;
              __ZdlPv();
              uVar8 = 0;
              *plVar12 = 0;
              plVar12[1] = 0;
              plVar12[2] = 0;
              plVar13 = plVar11;
            }
            if (uVar6 >> 0x3c != 0) {
              FUN_10a0e9b68();
              if (uVar7 != 0) {
                FUN_10a0ea760();
                puVar3 = (undefined8 *)plVar13[1];
                for (; puVar2 != puVar4; puVar2 = puVar2 + 1) {
                  *puVar3 = *puVar2;
                  puVar3 = puVar3 + 1;
                }
                plVar13[1] = (long)puVar3;
              }
              return;
            }
            uVar7 = (long)uVar8 >> 3;
            if ((ulong)((long)uVar8 >> 3) <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x7fffffffffffffef < uVar8) {
              uVar7 = 0xfffffffffffffff;
            }
            FUN_10a0e9b30(plVar12,uVar7);
            lVar9 = plVar12[1];
            lVar10 = (long)puVar5 - (long)puVar3;
            if (lVar10 != 0) {
              _memmove(lVar9,puVar3,lVar10);
            }
            lVar9 = lVar9 + lVar10;
          }
          else {
            plVar13 = (long *)plVar12[1];
            if ((ulong)((long)plVar13 - (long)plVar11 >> 4) < uVar6) {
              lVar10 = (long)puVar3 + ((long)plVar13 - (long)plVar11);
              if (plVar13 != plVar11) {
                _memmove(plVar11,puVar3);
                plVar13 = (long *)plVar12[1];
              }
              lVar9 = (long)puVar5 - lVar10;
              if (lVar9 != 0) {
                _memmove(plVar13,lVar10,lVar9);
              }
              lVar9 = (long)plVar13 + lVar9;
            }
            else {
              lVar9 = (long)puVar5 - (long)puVar3;
              if (lVar9 != 0) {
                _memmove(plVar11,puVar3,lVar9);
              }
              lVar9 = (long)plVar11 + lVar9;
            }
          }
          plVar12[1] = lVar9;
          return;
        }
        uVar6 = (long)uVar7 >> 1;
        if ((ulong)((long)uVar7 >> 1) <= uVar8) {
          uVar6 = uVar8;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar6 = 0x3fffffffffffffff;
        }
        FUN_109ffe268(plVar13,uVar6);
        lVar9 = plVar13[1];
        lVar10 = (long)puVar4 - (long)puVar2;
        if (lVar10 != 0) {
          _memmove(lVar9,puVar2,lVar10);
        }
        lVar9 = lVar9 + lVar10;
      }
      else {
        plVar12 = (long *)plVar13[1];
        if ((ulong)((long)plVar12 - (long)plVar11 >> 2) < uVar8) {
          lVar10 = (long)puVar2 + ((long)plVar12 - (long)plVar11);
          if (plVar12 != plVar11) {
            _memmove(plVar11,puVar2);
            plVar12 = (long *)plVar13[1];
          }
          lVar9 = (long)puVar4 - lVar10;
          if (lVar9 != 0) {
            _memmove(plVar12,lVar10,lVar9);
          }
          lVar9 = (long)plVar12 + lVar9;
        }
        else {
          lVar9 = (long)puVar4 - (long)puVar2;
          if (lVar9 != 0) {
            _memmove(plVar11,puVar2,lVar9);
          }
          lVar9 = (long)plVar11 + lVar9;
        }
      }
      plVar13[1] = lVar9;
      return;
    }
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar9 * -0x6666666666666666;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    FUN_10a0e9858(param_1,uVar8);
    FUN_10a0e98f8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar10 = param_1[1];
    if (param_4 <= (ulong)((lVar10 - lVar9 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9,param_2);
          uVar1 = *(undefined1 *)(param_2 + 4);
          *(undefined8 *)(lVar9 + 0x18) = param_2[3];
          *(undefined1 *)(lVar9 + 0x20) = uVar1;
          param_2 = param_2 + 5;
          lVar9 = lVar9 + 0x28;
        } while (param_2 != param_3);
        lVar10 = param_1[1];
      }
      for (; lVar10 != lVar9; lVar10 = lVar10 + -0x28) {
      }
      param_1[1] = lVar9;
      return;
    }
    puVar2 = (undefined8 *)((long)param_2 + (lVar10 - lVar9));
    if (lVar10 != lVar9) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9,param_2);
        uVar1 = *(undefined1 *)(param_2 + 4);
        *(undefined8 *)(lVar9 + 0x18) = param_2[3];
        *(undefined1 *)(lVar9 + 0x20) = uVar1;
        param_2 = param_2 + 5;
        lVar9 = lVar9 + 0x28;
      } while (param_2 != puVar2);
      lVar10 = param_1[1];
    }
    FUN_10a0e98f8(param_1,puVar2,param_3,lVar10);
  }
  param_1[1] = (long)plVar11;
  return;
}



/* Entry: 10a0ea4a0; end: 10a0ea6ef;  */

void FUN_10a0ea4a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar8 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar8 - (long)puVar10) >> 2) < param_4) {
    puVar11 = param_1;
    puVar2 = param_2;
    puVar4 = param_3;
    uVar6 = param_4;
    if (puVar10 != (undefined8 *)0x0) {
      param_1[1] = puVar10;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar11 = puVar10;
    }
    if (param_4 >> 0x3e != 0) {
      func_0x000109ffdfac();
      uVar8 = puVar11[2];
      puVar10 = (undefined8 *)*puVar11;
      if ((ulong)((long)(uVar8 - (long)puVar10) >> 4) < uVar6) {
        puVar12 = puVar11;
        puVar3 = puVar2;
        puVar5 = puVar4;
        uVar7 = uVar6;
        if (puVar10 != (undefined8 *)0x0) {
          puVar11[1] = puVar10;
          __ZdlPv();
          uVar8 = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar12 = puVar10;
        }
        if (uVar6 >> 0x3c != 0) {
          FUN_10a0e9b68();
          if (uVar7 != 0) {
            FUN_10a0ea760();
            puVar10 = (undefined8 *)puVar12[1];
            for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
              *puVar10 = *puVar3;
              puVar10 = puVar10 + 1;
            }
            puVar12[1] = puVar10;
          }
          return;
        }
        uVar7 = (long)uVar8 >> 3;
        if ((ulong)((long)uVar8 >> 3) <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < uVar8) {
          uVar7 = 0xfffffffffffffff;
        }
        FUN_10a0e9b30(puVar11,uVar7);
        lVar9 = puVar11[1];
        lVar1 = (long)puVar4 - (long)puVar2;
        if (lVar1 != 0) {
          _memmove(lVar9,puVar2,lVar1);
        }
        lVar9 = lVar9 + lVar1;
      }
      else {
        puVar12 = (undefined8 *)puVar11[1];
        if ((ulong)((long)puVar12 - (long)puVar10 >> 4) < uVar6) {
          lVar1 = (long)puVar2 + ((long)puVar12 - (long)puVar10);
          if (puVar12 != puVar10) {
            _memmove(puVar10,puVar2);
            puVar12 = (undefined8 *)puVar11[1];
          }
          lVar9 = (long)puVar4 - lVar1;
          if (lVar9 != 0) {
            _memmove(puVar12,lVar1,lVar9);
          }
          lVar9 = (long)puVar12 + lVar9;
        }
        else {
          lVar9 = (long)puVar4 - (long)puVar2;
          if (lVar9 != 0) {
            _memmove(puVar10,puVar2,lVar9);
          }
          lVar9 = (long)puVar10 + lVar9;
        }
      }
      puVar11[1] = lVar9;
      return;
    }
    uVar6 = (long)uVar8 >> 1;
    if ((ulong)((long)uVar8 >> 1) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar6 = 0x3fffffffffffffff;
    }
    FUN_109ffe268(param_1,uVar6);
    lVar9 = param_1[1];
    lVar1 = (long)param_3 - (long)param_2;
    if (lVar1 != 0) {
      _memmove(lVar9,param_2,lVar1);
    }
    lVar9 = lVar9 + lVar1;
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar11 - (long)puVar10 >> 2) < param_4) {
      lVar1 = (long)param_2 + ((long)puVar11 - (long)puVar10);
      if (puVar11 != puVar10) {
        _memmove(puVar10,param_2);
        puVar11 = (undefined8 *)param_1[1];
      }
      lVar9 = (long)param_3 - lVar1;
      if (lVar9 != 0) {
        _memmove(puVar11,lVar1,lVar9);
      }
      lVar9 = (long)puVar11 + lVar9;
    }
    else {
      lVar9 = (long)param_3 - (long)param_2;
      if (lVar9 != 0) {
        _memmove(puVar10,param_2,lVar9);
      }
      lVar9 = (long)puVar10 + lVar9;
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10a0ea6f0; end: 10a0ea75f;  */

void FUN_10a0ea6f0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a0ea760(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a0ea760; end: 10a0ea797;  */

undefined1  [16] FUN_10a0ea760(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_10a0ea7ac();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = plVar1;
    return auVar9;
  }
  FUN_10a0ea798();
  pcStack_28 = FUN_10a0ea798;
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_109ffde64();
  pcStack_38 = FUN_10a0ea7ac;
  ppuStack_60 = &puStack_40;
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    puStack_40 = (undefined1 *)&puStack_30;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  puStack_40 = (undefined1 *)&puStack_30;
  func_0x000109ffded8();
  pcStack_58 = FUN_10a0ea7e0;
  uVar6 = puVar2[2];
  puVar7 = (undefined8 *)*puVar2;
  puVar4 = puVar2;
  if ((ulong)((long)(uVar6 - (long)puVar7) >> 3) < param_4) {
    puVar8 = puVar2;
    uVar5 = param_2;
    if (puVar7 != (undefined8 *)0x0) {
      puVar2[1] = puVar7;
      __ZdlPv();
      uVar6 = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar8 = puVar7;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a0ea798();
      pcStack_98 = FUN_10a0ea908;
      uStack_b0 = param_2;
      puStack_a8 = puVar2;
      ppuStack_a0 = &ppuStack_60;
      func_0x000109295200(puVar8 + 0xba);
      func_0x000109295148(puVar8 + 0xb5);
      func_0x00010a09ad20(puVar8 + 0xab);
      lVar3 = 0x68;
      do {
        func_0x00010a0eb17c((long)puVar8 + lVar3);
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0x38);
      puStack_b8 = puVar8 + 6;
      FUN_10a0e9b7c(&puStack_b8);
      func_0x00010a0eb0cc(puVar8 + 3);
      FUN_10a09da04(puVar8 + 1);
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = puVar8;
      return auVar12;
    }
    uVar5 = (long)uVar6 >> 2;
    if ((ulong)((long)uVar6 >> 2) <= param_4) {
      uVar5 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a0ea760(puVar2,uVar5);
    puVar7 = (undefined8 *)puVar2[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar4 = puVar7;
      _memmove(puVar7,param_2,param_3);
      uVar5 = param_2;
    }
    param_3 = (long)puVar7 + param_3;
  }
  else {
    puVar8 = (undefined8 *)puVar2[1];
    if ((ulong)((long)puVar8 - (long)puVar7 >> 3) < param_4) {
      uVar6 = param_2 + ((long)puVar8 - (long)puVar7);
      if (puVar8 != puVar7) {
        _memmove(puVar7,param_2);
        puVar8 = (undefined8 *)puVar2[1];
        puVar4 = puVar7;
      }
      param_3 = param_3 - uVar6;
      uVar5 = param_2;
      if (param_3 != 0) {
        puVar4 = puVar8;
        _memmove(puVar8,uVar6,param_3);
        uVar5 = uVar6;
      }
      param_3 = (long)puVar8 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar5 = param_2;
      if (param_3 != 0) {
        puVar4 = puVar7;
        _memmove(puVar7,param_2,param_3);
        uVar5 = param_2;
      }
      param_3 = (long)puVar7 + param_3;
    }
  }
  puVar2[1] = param_3;
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = puVar4;
  return auVar11;
}



/* Entry: 10a0ea798; end: 10a0ea7ab;  */

undefined1  [16] FUN_10a0ea798(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  pcStack_18 = FUN_10a0ea7ac;
  ppuStack_40 = &puStack_20;
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000109ffded8();
  pcStack_38 = FUN_10a0ea7e0;
  uVar5 = puVar1[2];
  puVar6 = (undefined8 *)*puVar1;
  puVar3 = puVar1;
  if ((ulong)((long)(uVar5 - (long)puVar6) >> 3) < param_4) {
    puVar7 = puVar1;
    uVar4 = param_2;
    if (puVar6 != (undefined8 *)0x0) {
      puVar1[1] = puVar6;
      __ZdlPv();
      uVar5 = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar7 = puVar6;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a0ea798();
      pcStack_78 = FUN_10a0ea908;
      uStack_90 = param_2;
      puStack_88 = puVar1;
      ppuStack_80 = &ppuStack_40;
      func_0x000109295200(puVar7 + 0xba);
      func_0x000109295148(puVar7 + 0xb5);
      func_0x00010a09ad20(puVar7 + 0xab);
      lVar2 = 0x68;
      do {
        func_0x00010a0eb17c((long)puVar7 + lVar2);
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0x38);
      puStack_98 = puVar7 + 6;
      FUN_10a0e9b7c(&puStack_98);
      func_0x00010a0eb0cc(puVar7 + 3);
      FUN_10a09da04(puVar7 + 1);
      auVar10._8_8_ = uVar4;
      auVar10._0_8_ = puVar7;
      return auVar10;
    }
    uVar4 = (long)uVar5 >> 2;
    if ((ulong)((long)uVar5 >> 2) <= param_4) {
      uVar4 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar4 = 0x1fffffffffffffff;
    }
    FUN_10a0ea760(puVar1,uVar4);
    puVar6 = (undefined8 *)puVar1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar3 = puVar6;
      _memmove(puVar6,param_2,param_3);
      uVar4 = param_2;
    }
    param_3 = (long)puVar6 + param_3;
  }
  else {
    puVar7 = (undefined8 *)puVar1[1];
    if ((ulong)((long)puVar7 - (long)puVar6 >> 3) < param_4) {
      uVar5 = param_2 + ((long)puVar7 - (long)puVar6);
      if (puVar7 != puVar6) {
        _memmove(puVar6,param_2);
        puVar7 = (undefined8 *)puVar1[1];
        puVar3 = puVar6;
      }
      param_3 = param_3 - uVar5;
      uVar4 = param_2;
      if (param_3 != 0) {
        puVar3 = puVar7;
        _memmove(puVar7,uVar5,param_3);
        uVar4 = uVar5;
      }
      param_3 = (long)puVar7 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar4 = param_2;
      if (param_3 != 0) {
        puVar3 = puVar6;
        _memmove(puVar6,param_2,param_3);
        uVar4 = param_2;
      }
      param_3 = (long)puVar6 + param_3;
    }
  }
  puVar1[1] = param_3;
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = puVar3;
  return auVar9;
}



/* Entry: 10a0ea7ac; end: 10a0ea7df;  */

undefined1  [16] FUN_10a0ea7ac(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000109ffded8();
  pcStack_28 = FUN_10a0ea7e0;
  uVar4 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  puVar2 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((ulong)((long)(uVar4 - (long)puVar5) >> 3) < param_4) {
    puVar6 = param_1;
    uVar3 = param_2;
    if (puVar5 != (undefined8 *)0x0) {
      param_1[1] = puVar5;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar6 = puVar5;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a0ea798();
      pcStack_68 = FUN_10a0ea908;
      uStack_80 = param_2;
      puStack_78 = param_1;
      ppuStack_70 = &puStack_30;
      func_0x000109295200(puVar6 + 0xba);
      func_0x000109295148(puVar6 + 0xb5);
      func_0x00010a09ad20(puVar6 + 0xab);
      lVar1 = 0x68;
      do {
        func_0x00010a0eb17c((long)puVar6 + lVar1);
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0x38);
      puStack_88 = puVar6 + 6;
      FUN_10a0e9b7c(&puStack_88);
      func_0x00010a0eb0cc(puVar6 + 3);
      FUN_10a09da04(puVar6 + 1);
      auVar9._8_8_ = uVar3;
      auVar9._0_8_ = puVar6;
      return auVar9;
    }
    uVar3 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar3 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar3 = 0x1fffffffffffffff;
    }
    FUN_10a0ea760(param_1,uVar3);
    puVar5 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar2 = puVar5;
      _memmove(puVar5,param_2,param_3);
      uVar3 = param_2;
    }
    param_3 = (long)puVar5 + param_3;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar6 - (long)puVar5 >> 3) < param_4) {
      uVar4 = param_2 + ((long)puVar6 - (long)puVar5);
      if (puVar6 != puVar5) {
        _memmove(puVar5,param_2);
        puVar6 = (undefined8 *)param_1[1];
        puVar2 = puVar5;
      }
      param_3 = param_3 - uVar4;
      uVar3 = param_2;
      if (param_3 != 0) {
        puVar2 = puVar6;
        _memmove(puVar6,uVar4,param_3);
        uVar3 = uVar4;
      }
      param_3 = (long)puVar6 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar3 = param_2;
      if (param_3 != 0) {
        puVar2 = puVar5;
        _memmove(puVar5,param_2,param_3);
        uVar3 = param_2;
      }
      param_3 = (long)puVar5 + param_3;
    }
  }
  param_1[1] = param_3;
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar2;
  return auVar8;
}



/* Entry: 10a0ea7e0; end: 10a0ea907;  */

undefined8 * FUN_10a0ea7e0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar3 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  puVar2 = param_1;
  if ((ulong)((long)(uVar3 - (long)puVar5) >> 3) < param_4) {
    puVar6 = param_1;
    if (puVar5 != (undefined8 *)0x0) {
      param_1[1] = puVar5;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar6 = puVar5;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a0ea798();
      pcStack_48 = FUN_10a0ea908;
      lStack_60 = param_2;
      puStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000109295200(puVar6 + 0xba);
      func_0x000109295148(puVar6 + 0xb5);
      func_0x00010a09ad20(puVar6 + 0xab);
      lVar4 = 0x68;
      do {
        func_0x00010a0eb17c((long)puVar6 + lVar4);
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0x38);
      puStack_68 = puVar6 + 6;
      FUN_10a0e9b7c(&puStack_68);
      func_0x00010a0eb0cc(puVar6 + 3);
      FUN_10a09da04(puVar6 + 1);
      return puVar6;
    }
    uVar1 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_10a0ea760(param_1,uVar1);
    puVar5 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar2 = puVar5;
      _memmove(puVar5,param_2,param_3);
    }
    param_3 = (long)puVar5 + param_3;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar6 - (long)puVar5 >> 3) < param_4) {
      lVar4 = param_2 + ((long)puVar6 - (long)puVar5);
      if (puVar6 != puVar5) {
        _memmove(puVar5,param_2);
        puVar6 = (undefined8 *)param_1[1];
        puVar2 = puVar5;
      }
      param_3 = param_3 - lVar4;
      if (param_3 != 0) {
        puVar2 = puVar6;
        _memmove(puVar6,lVar4,param_3);
      }
      param_3 = (long)puVar6 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar2 = puVar5;
        _memmove(puVar5,param_2,param_3);
      }
      param_3 = (long)puVar5 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar2;
}



/* Entry: 10a0ea908; end: 10a0eaa2f;  */

long FUN_10a0ea908(long param_1)

{
  long lVar1;
  long lStack_28;
  
  func_0x000109295200(param_1 + 0x5d0);
  func_0x000109295148(param_1 + 0x5a8);
  func_0x00010a09ad20(param_1 + 0x558);
  lVar1 = 0x68;
  do {
    func_0x00010a0eb17c(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x38);
  lStack_28 = param_1 + 0x30;
  FUN_10a0e9b7c(&lStack_28);
  func_0x00010a0eb0cc(param_1 + 0x18);
  FUN_10a09da04(param_1 + 8);
  return param_1;
}



/* Entry: 10a0eaa30; end: 10a0eaa43;  */

undefined1  [16] FUN_10a0eaa30(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a09d22c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a0eaa44; end: 10a0eaac3;  */

undefined1  [16] FUN_10a0eaa44(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a09d22c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a0eaac4; end: 10a0eaad7;  */

void FUN_10a0eaac4(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a0eab5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a0eaad8; end: 10a0eab5b;  */

void FUN_10a0eaad8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a0eab5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0eab5c; end: 10a0eaba7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0eab84) */

void FUN_10a0eab5c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0eaba8; end: 10a0ead43;  */

void FUN_10a0eaba8(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_10a0ead44();
    if (param_4 >> 0x3c != 0) {
      FUN_10a0eae54();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x00010a0eb124();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    func_0x00010a0eada0(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar6 - (long)puVar10;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x00010a0eadd8(puVar10,param_2);
          param_2 = param_2 + 2;
          puVar10 = puVar10 + 2;
        } while (param_2 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x00010a0eb124();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + lVar9);
    if (puVar6 != puVar10) {
      do {
        func_0x00010a0eadd8(puVar10,param_2);
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10a0ead44; end: 10a0eae53;  */

void FUN_10a0ead44(long *param_1)

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
        func_0x00010a0eb124();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a0eae54; end: 10a0eae67;  */

void FUN_10a0eae54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar2 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar2;
  puVar1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar2 = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[6] = uVar2;
  puVar1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 10a0eae68; end: 10a0eae9b;  */

void FUN_10a0eae68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 10a0eae9c; end: 10a0eaeff;  */

void FUN_10a0eae9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 10a0eaf00; end: 10a0eafb7;  */

void FUN_10a0eaf00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  puVar1 = param_2;
  uStack_50 = param_1;
  puStack_30 = param_4;
  if (param_2 == param_3) {
    uStack_38 = 1;
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      puStack_28[2] = puVar1[2];
      puStack_28[1] = uVar3;
      *puStack_28 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = puVar1[3];
      puStack_28[4] = puVar1[4];
      puStack_28[3] = uVar2;
      puVar1 = puVar1 + 5;
      puStack_28 = puStack_28 + 5;
    } while (puVar1 != param_3);
    uStack_38 = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_10a0e9e60(&uStack_50);
  return;
}



/* Entry: 10a0eafb8; end: 10a0eb03b;  */

void FUN_10a0eafb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0e9d50(param_1,param_4);
    lVar1 = param_1;
    FUN_10a0e9d98(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a0eb03c; end: 10a0eb0cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0eb084) */

void FUN_10a0eb03c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = lVar3;
  if (param_1[1] != lVar3) {
    lVar2 = param_1[1] + -0x18;
    do {
      lStack_38 = lVar2;
      FUN_10a0426d8(&lStack_38);
      lVar1 = lVar2 + -0x20;
      lVar2 = lVar2 + -0x38;
    } while (lVar1 != lVar3);
    lVar2 = *param_1;
  }
  param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10a0eb0cc; end: 10a0eb2bb;  */

long FUN_10a0eb0cc(long param_1)

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



/* Entry: 10a0eb2bc; end: 10a0eb383;  */

long * FUN_10a0eb2bc(long *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2 + 0x9e3779b9;
    uVar3 = (ulong)param_2[1] + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar2 + 0x7fffffffffffffff;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(uint *)(plVar6 + 2) == *param_2 && *(uint *)((long)plVar6 + 0x14) == param_2[1]) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a0eb384; end: 10a0eb5d7;  */

undefined1  [16] FUN_10a0eb384(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2 + 0x9e3779b9;
  uVar10 = (ulong)param_2[1] + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - 1;
    if ((uVar9 & uVar5) == 0) {
      unaff_x24 = uVar10 & uVar9 + 0x7fffffffffffffff;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar6; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (*(uint *)(plVar8 + 2) == *param_2 && *(uint *)((long)plVar8 + 0x14) == param_2[1]) {
            uVar2 = 0;
            goto LAB_10a0eb59c;
          }
        }
        else {
          if ((uVar9 & uVar5) == 0) {
            uVar7 = uVar7 & uVar5;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[2] = *(long *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar9) {
      uVar5 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar5 = uVar5 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_10a0eb5d8(param_1,uVar5);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 + 0x7fffffffffffffff & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  lVar4 = *param_1;
  plVar3 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar3;
    if (*plVar8 == 0) goto LAB_10a0eb58c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar5 * uVar9;
    }
    plVar3 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar3;
  }
  *plVar3 = (long)plVar8;
LAB_10a0eb58c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a0eb59c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a0eb5d8; end: 10a0eb6a7;  */

void FUN_10a0eb5d8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a0eb620:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a0eb82c(uVar7 + 0x18);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a0eb620;
  }
  return;
}



/* Entry: 10a0eb6a8; end: 10a0eb883;  */

void FUN_10a0eb6a8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a0eb82c(uVar1 + 0x18);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a0eb884; end: 10a0eb917;  */

void FUN_10a0eb884(long *param_1,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  (**(code **)(*plVar2 + 0x30))(plVar2,2,param_2,0);
  if (plVar2 != (long *)0x0) {
    _memcpy();
                    /* WARNING: Could not recover jumptable at 0x00010a0eb8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x38))();
    return;
  }
  func_0x000105688514(&UNK_10f63b222);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0eb8f8);
  (*pcVar1)();
}



/* Entry: 10a0eb918; end: 10a0eb96f;  */

long FUN_10a0eb918(long param_1)

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



/* Entry: 10a0eb970; end: 10a0ebbcb;  */

undefined1  [16] FUN_10a0eb970(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar6 = uVar7 - 1;
    if ((uVar7 & uVar6) == 0) {
      unaff_x24 = uVar11 & uVar6;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a0ebb90;
          }
        }
        else {
          if ((uVar7 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x28;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  lVar4 = *(long *)*param_4;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[2] = lVar4;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10a0ebbcc(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar10 = *plVar5;
    *plVar5 = (long)plVar10;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar10 == 0) goto LAB_10a0ebb80;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar5 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar5;
  }
  *plVar5 = (long)plVar10;
LAB_10a0ebb80:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a0ebb90:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a0ebbcc; end: 10a0ebc9b;  */

void FUN_10a0ebbcc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a0ebc14:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a0ec370(uVar7 + 0x18);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a0ebc14;
  }
  return;
}



/* Entry: 10a0ebc9c; end: 10a0ebe1f;  */

void FUN_10a0ebc9c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a0ec370(uVar1 + 0x18);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a0ebe20; end: 10a0ebed7;  */

void FUN_10a0ebe20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)0x100;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110ba2358;
  puVar5 = puVar4 + 3;
  *puVar5 = 0;
  uVar6 = *param_3;
  puVar4[4] = 0;
  puVar4[5] = uVar6;
  puVar4[6] = 0x32aaaba7;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  lVar7 = param_4[1];
  uVar6 = *param_4;
  puVar4[0x13] = param_4[1];
  puVar4[0x12] = uVar6;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  *param_1 = puVar5;
  param_1[1] = puVar4;
  if ((puVar5 != (undefined8 *)0x0) &&
     ((lVar7 = puVar4[4], lVar7 == 0 || (*(long *)(lVar7 + 8) == -1)))) {
    plVar8 = (long *)param_1[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = puVar4[4];
    }
    *puVar5 = puVar5;
    puVar4[4] = plVar8;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0ebed8; end: 10a0ebee7;  */

void FUN_10a0ebed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2358;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0ebee8; end: 10a0ebf07;  */

void FUN_10a0ebee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2358;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


