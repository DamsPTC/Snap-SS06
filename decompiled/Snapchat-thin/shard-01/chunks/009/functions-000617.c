/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101661108; end: 101661187;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101661108(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101661188; end: 1016611c7;  */

void FUN_101661188(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d976240;
  func_0x000107c61520(&DAT_10d976240,&UNK_1103ef850);
  puRam0000000112dbd0e0 = puVar1;
  return;
}



/* Entry: 1016611c8; end: 101662103;  */

uint FUN_1016611c8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_2e8 [3];
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    func_0x000101565c24(uVar2,param_2[4]);
    if ((uVar2 & 1) != 0) {
      uVar12 = param_1[0xb];
      uVar2 = param_1[10];
      uVar9 = param_1[0xd];
      uVar8 = param_1[0xc];
      uVar13 = param_2[0xb];
      uVar10 = param_2[10];
      uVar14 = param_2[0xd];
      uVar11 = param_2[0xc];
      uStack_b0 = uVar10;
      uStack_a8 = uVar13;
      uStack_a0 = uVar11;
      uStack_98 = uVar14;
      uStack_90 = uVar2;
      uStack_88 = uVar12;
      uStack_80 = uVar8;
      uStack_78 = uVar9;
      if (uVar12 == 0) {
        if (uVar13 != 0) goto LAB_101661314;
        func_0x000101661140(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
        func_0x000101661140(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
LAB_101661390:
        func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
        uVar12 = param_1[0xf];
        uVar2 = param_1[0xe];
        uVar9 = param_1[0x11];
        uVar8 = param_1[0x10];
        uVar13 = param_2[0xf];
        uVar10 = param_2[0xe];
        uVar14 = param_2[0x11];
        uVar11 = param_2[0x10];
        uStack_f0 = uVar10;
        uStack_e8 = uVar13;
        uStack_e0 = uVar11;
        uStack_d8 = uVar14;
        uStack_d0 = uVar2;
        uStack_c8 = uVar12;
        uStack_c0 = uVar8;
        uStack_b8 = uVar9;
        if (uVar12 == 0) {
          if (uVar13 != 0) goto LAB_101661484;
          func_0x000101661140(&uStack_d0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101661140(&uStack_f0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
        }
        else {
          if (uVar13 == 0) {
LAB_101661484:
            uStack_2b0 = uVar2;
            uStack_2a8 = uVar12;
            uStack_2a0 = uVar8;
            uStack_298 = uVar9;
            uStack_290 = uVar10;
            uStack_288 = uVar13;
            uStack_280 = uVar11;
            uStack_278 = uVar14;
            func_0x000101661140(&uStack_d0,&uStack_110,0x112db6f40,&UNK_10d9681d0);
            puVar4 = &uStack_f0;
            puVar5 = &uStack_110;
            goto LAB_1016614c0;
          }
          if (((uVar2 != uVar10) || (uVar12 != uVar13)) &&
             (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0), (uVar3 & 1) == 0)) {
            uVar6 = 0x112db6f40;
            puVar7 = &UNK_10d9681d0;
            func_0x000101661140(&uStack_d0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
            puVar4 = &uStack_f0;
            goto LAB_101661658;
          }
          func_0x000101661140(&uStack_d0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101661140(&uStack_f0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          uVar3 = uVar8;
          FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
          func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
          if ((uVar3 & 1) == 0) goto LAB_10166168c;
        }
        func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
        uVar2 = param_1[5];
        FUN_101660b34(uVar2,param_2[5]);
        if ((uVar2 & 1) != 0) {
          uVar12 = param_1[0x13];
          uVar2 = param_1[0x12];
          uVar9 = param_1[0x15];
          uVar8 = param_1[0x14];
          uVar13 = param_2[0x13];
          uVar10 = param_2[0x12];
          uVar14 = param_2[0x15];
          uVar11 = param_2[0x14];
          uStack_130 = uVar10;
          uStack_128 = uVar13;
          uStack_120 = uVar11;
          uStack_118 = uVar14;
          uStack_110 = uVar2;
          uStack_108 = uVar12;
          uStack_100 = uVar8;
          uStack_f8 = uVar9;
          if (uVar12 == 0) {
            if (uVar13 != 0) {
LAB_1016616bc:
              func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
              func_0x000101661140(&uStack_130,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
              func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
              uVar2 = uVar10;
              uVar12 = uVar13;
              uVar8 = uVar11;
              uVar9 = uVar14;
              goto LAB_10166168c;
            }
            func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
            func_0x000101661140(&uStack_130,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
          }
          else {
            if (uVar13 == 0) goto LAB_1016616bc;
            if (((uVar2 != uVar10) || (uVar12 != uVar13)) &&
               (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0), (uVar3 & 1) == 0))
            {
              uVar6 = 0x112dbd0d0;
              puVar7 = &UNK_10d975fc8;
              func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
              puVar4 = &uStack_130;
              goto LAB_101661658;
            }
            func_0x000101661140(&uStack_110,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
            func_0x000101661140(&uStack_130,&uStack_2b0,0x112dbd0d0,&UNK_10d975fc8);
            uVar3 = uVar8;
            FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
            func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
            if ((uVar3 & 1) == 0) goto LAB_10166168c;
          }
          func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
          uVar12 = param_1[0x17];
          uVar8 = param_1[0x16];
          uVar2 = param_1[0x18];
          uVar14 = param_2[0x17];
          uVar11 = param_2[0x16];
          uVar9 = param_2[0x18];
          uStack_170 = uVar11;
          uStack_168 = uVar14;
          uStack_160 = uVar9;
          uStack_150 = uVar8;
          uStack_148 = uVar12;
          uStack_140 = uVar2;
          if ((uVar8 & 0xff) == 2) {
            if ((uVar11 & 0xff) == 2) {
              func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              func_0x000101661140(&uStack_170,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
LAB_1016617e8:
              func_0x000101556278(uVar8,uVar12,uVar2);
              uVar12 = param_1[0x1a];
              uVar2 = param_1[0x19];
              uVar9 = param_1[0x1c];
              uVar8 = param_1[0x1b];
              uVar13 = param_2[0x1a];
              uVar10 = param_2[0x19];
              uVar14 = param_2[0x1c];
              uVar11 = param_2[0x1b];
              uStack_1b0 = uVar10;
              uStack_1a8 = uVar13;
              uStack_1a0 = uVar11;
              uStack_198 = uVar14;
              uStack_190 = uVar2;
              uStack_188 = uVar12;
              uStack_180 = uVar8;
              uStack_178 = uVar9;
              if (uVar12 == 0) {
                if (uVar13 != 0) goto LAB_101661a28;
                func_0x000101661140(&uStack_190,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                func_0x000101661140(&uStack_1b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
              }
              else {
                if (uVar13 == 0) {
LAB_101661a28:
                  uStack_2b0 = uVar2;
                  uStack_2a8 = uVar12;
                  uStack_2a0 = uVar8;
                  uStack_298 = uVar9;
                  uStack_290 = uVar10;
                  uStack_288 = uVar13;
                  uStack_280 = uVar11;
                  uStack_278 = uVar14;
                  func_0x000101661140(&uStack_190,&uStack_2d0,0x112db6f40,&UNK_10d9681d0);
                  puVar4 = &uStack_1b0;
                  puVar5 = &uStack_2d0;
                  goto LAB_1016614c0;
                }
                if (((uVar2 != uVar10) || (uVar12 != uVar13)) &&
                   (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0),
                   (uVar3 & 1) == 0)) {
                  uVar6 = 0x112db6f40;
                  puVar7 = &UNK_10d9681d0;
                  func_0x000101661140(&uStack_190,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                  puVar4 = &uStack_1b0;
                  goto LAB_101661658;
                }
                func_0x000101661140(&uStack_190,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                func_0x000101661140(&uStack_1b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
                uVar3 = uVar8;
                FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
                func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
                if ((uVar3 & 1) == 0) goto LAB_10166168c;
              }
              func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
              uVar12 = param_1[0x1e];
              uVar2 = param_1[0x1d];
              uVar8 = param_1[0x1f];
              uVar11 = param_2[0x1e];
              uVar14 = param_2[0x1d];
              uVar9 = param_2[0x1f];
              uStack_2d0 = uVar14;
              uStack_2c8 = uVar11;
              uStack_2c0 = uVar9;
              uStack_2b0 = uVar2;
              uStack_2a8 = uVar12;
              uStack_2a0 = uVar8;
              if (uVar8 >> 0x3c < 0xf) {
                if (0xe < uVar9 >> 0x3c) goto LAB_101661d2c;
                if (uVar2 == uVar14) {
                  func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  uVar14 = uVar12;
                  FUN_100e25fcc(uVar12,uVar8,uVar11,uVar9);
                  func_0x00010159fa64(uVar2,uVar11,uVar9);
                  if ((uVar14 & 1) != 0) goto LAB_101661b30;
                }
                else {
                  func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x00010159fa64(uVar14,uVar11,uVar9);
                }
              }
              else {
                if (0xe < uVar9 >> 0x3c) {
                  func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                  func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
LAB_101661b30:
                  func_0x00010159fa64(uVar2,uVar12,uVar8);
                  uVar2 = param_1[6];
                  if (((uVar2 != param_2[6]) || (param_1[7] != param_2[7])) &&
                     (func_0x000107c605b8(), (uVar2 & 1) == 0)) goto LAB_101661690;
                  uVar12 = param_1[0x21];
                  uVar8 = param_1[0x20];
                  uVar2 = param_1[0x22];
                  uVar14 = param_2[0x21];
                  uVar11 = param_2[0x20];
                  uVar9 = param_2[0x22];
                  uStack_1f0 = uVar11;
                  uStack_1e8 = uVar14;
                  uStack_1e0 = uVar9;
                  uStack_1d0 = uVar8;
                  uStack_1c8 = uVar12;
                  uStack_1c0 = uVar2;
                  if ((uVar8 & 0xff) == 2) {
                    if ((uVar11 & 0xff) != 2) {
LAB_101661e84:
                      func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_1f0;
                      puVar5 = &uStack_210;
                      uVar13 = uVar2;
                      uVar10 = uVar12;
                      uVar3 = uVar8;
                      uVar2 = uVar9;
                      uVar12 = uVar14;
                      uVar8 = uVar11;
                      goto LAB_101661900;
                    }
                    func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_1f0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                  }
                  else {
                    if ((uVar11 & 0xff) == 2) goto LAB_101661e84;
                    if ((((uint)uVar11 ^ (uint)uVar8) & 1) != 0) {
                      func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_1f0;
                      puVar5 = &uStack_210;
                      goto LAB_10166198c;
                    }
                    func_0x000101661140(&uStack_1d0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_1f0,&uStack_210,0x112db94f0,&UNK_10d96af00);
                    uVar13 = uVar12;
                    FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
                    func_0x000101556278(uVar11,uVar14,uVar9);
                    if ((uVar13 & 1) == 0) goto LAB_101661a1c;
                  }
                  func_0x000101556278(uVar8,uVar12,uVar2);
                  uVar12 = param_1[0x24];
                  uVar8 = param_1[0x23];
                  uVar2 = param_1[0x25];
                  uVar14 = param_2[0x24];
                  uVar11 = param_2[0x23];
                  uVar9 = param_2[0x25];
                  uStack_230 = uVar11;
                  uStack_228 = uVar14;
                  uStack_220 = uVar9;
                  uStack_210 = uVar8;
                  uStack_208 = uVar12;
                  uStack_200 = uVar2;
                  if ((uVar8 & 0xff) == 2) {
                    if ((uVar11 & 0xff) != 2) {
LAB_101661ef4:
                      func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_230;
                      puVar5 = &uStack_250;
                      uVar13 = uVar2;
                      uVar10 = uVar12;
                      uVar3 = uVar8;
                      uVar2 = uVar9;
                      uVar12 = uVar14;
                      uVar8 = uVar11;
                      goto LAB_101661900;
                    }
                    func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_230,&uStack_250,0x112db94f0,&UNK_10d96af00);
                  }
                  else {
                    if ((uVar11 & 0xff) == 2) goto LAB_101661ef4;
                    if ((((uint)uVar11 ^ (uint)uVar8) & 1) != 0) {
                      func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_230;
                      puVar5 = &uStack_250;
                      goto LAB_10166198c;
                    }
                    func_0x000101661140(&uStack_210,&uStack_250,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_230,&uStack_250,0x112db94f0,&UNK_10d96af00);
                    uVar13 = uVar12;
                    FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
                    func_0x000101556278(uVar11,uVar14,uVar9);
                    if ((uVar13 & 1) == 0) goto LAB_101661a1c;
                  }
                  func_0x000101556278(uVar8,uVar12,uVar2);
                  uVar12 = param_1[0x27];
                  uVar8 = param_1[0x26];
                  uVar2 = param_1[0x28];
                  uVar14 = param_2[0x27];
                  uVar11 = param_2[0x26];
                  uVar9 = param_2[0x28];
                  uStack_270 = uVar11;
                  uStack_268 = uVar14;
                  uStack_260 = uVar9;
                  uStack_250 = uVar8;
                  uStack_248 = uVar12;
                  uStack_240 = uVar2;
                  if ((uVar8 & 0xff) == 2) {
                    if ((uVar11 & 0xff) != 2) {
LAB_101661fcc:
                      func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_270;
                      puVar5 = auStack_2e8;
                      uVar13 = uVar2;
                      uVar10 = uVar12;
                      uVar3 = uVar8;
                      uVar2 = uVar9;
                      uVar12 = uVar14;
                      uVar8 = uVar11;
                      goto LAB_101661900;
                    }
                    func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_270,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                  }
                  else {
                    if ((uVar11 & 0xff) == 2) goto LAB_101661fcc;
                    if ((((uint)uVar11 ^ (uint)uVar8) & 1) != 0) {
                      func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                      puVar4 = &uStack_270;
                      puVar5 = auStack_2e8;
                      goto LAB_10166198c;
                    }
                    func_0x000101661140(&uStack_250,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                    func_0x000101661140(&uStack_270,auStack_2e8,0x112db94f0,&UNK_10d96af00);
                    uVar13 = uVar12;
                    FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
                    func_0x000101556278(uVar11,uVar14,uVar9);
                    if ((uVar13 & 1) == 0) goto LAB_101661a1c;
                  }
                  func_0x000101556278(uVar8,uVar12,uVar2);
                  uVar2 = param_1[8];
                  FUN_100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)uVar2;
                  goto LAB_101661694;
                }
LAB_101661d2c:
                func_0x000101661140(&uStack_2b0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                func_0x000101661140(&uStack_2d0,&uStack_1d0,0x112db6f48,&UNK_10d969b40);
                func_0x00010159fa64(uVar2,uVar12,uVar8);
                uVar2 = uVar14;
                uVar12 = uVar11;
                uVar8 = uVar9;
              }
              func_0x00010159fa64(uVar2,uVar12,uVar8);
              goto LAB_101661690;
            }
LAB_1016618d4:
            func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
            puVar4 = &uStack_170;
            puVar5 = &uStack_2b0;
            uVar13 = uVar2;
            uVar10 = uVar12;
            uVar3 = uVar8;
            uVar2 = uVar9;
            uVar12 = uVar14;
            uVar8 = uVar11;
LAB_101661900:
            func_0x000101661140(puVar4,puVar5,0x112db94f0,&UNK_10d96af00);
            func_0x000101556278(uVar3,uVar10,uVar13);
          }
          else {
            if ((uVar11 & 0xff) == 2) goto LAB_1016618d4;
            if ((((uint)uVar11 ^ (uint)uVar8) & 1) == 0) {
              func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              func_0x000101661140(&uStack_170,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              uVar13 = uVar12;
              FUN_100e25fcc(uVar12,uVar2,uVar14,uVar9);
              func_0x000101556278(uVar11,uVar14,uVar9);
              if ((uVar13 & 1) != 0) goto LAB_1016617e8;
            }
            else {
              func_0x000101661140(&uStack_150,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              puVar4 = &uStack_170;
              puVar5 = &uStack_2b0;
LAB_10166198c:
              func_0x000101661140(puVar4,puVar5,0x112db94f0,&UNK_10d96af00);
              func_0x000101556278(uVar11,uVar14,uVar9);
            }
          }
LAB_101661a1c:
          func_0x000101556278(uVar8,uVar12,uVar2);
        }
      }
      else if (uVar13 == 0) {
LAB_101661314:
        uStack_2b0 = uVar2;
        uStack_2a8 = uVar12;
        uStack_2a0 = uVar8;
        uStack_298 = uVar9;
        uStack_290 = uVar10;
        uStack_288 = uVar13;
        uStack_280 = uVar11;
        uStack_278 = uVar14;
        func_0x000101661140(&uStack_90,&uStack_d0,0x112db6f40,&UNK_10d9681d0);
        puVar4 = &uStack_b0;
        puVar5 = &uStack_d0;
LAB_1016614c0:
        func_0x000101661140(puVar4,puVar5,0x112db6f40,&UNK_10d9681d0);
        FUN_101628968(&uStack_2b0);
      }
      else {
        if (((uVar2 == uVar10) && (uVar12 == uVar13)) ||
           (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar12,uVar10,uVar13,0), (uVar3 & 1) != 0)) {
          func_0x000101661140(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          func_0x000101661140(&uStack_b0,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          uVar3 = uVar8;
          FUN_100e25fcc(uVar8,uVar9,uVar11,uVar14);
          func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
          if ((uVar3 & 1) != 0) goto LAB_101661390;
        }
        else {
          uVar6 = 0x112db6f40;
          puVar7 = &UNK_10d9681d0;
          func_0x000101661140(&uStack_90,&uStack_2b0,0x112db6f40,&UNK_10d9681d0);
          puVar4 = &uStack_b0;
LAB_101661658:
          func_0x000101661140(puVar4,&uStack_2b0,uVar6,puVar7);
          func_0x000101661108(uVar10,uVar13,uVar11,uVar14);
        }
LAB_10166168c:
        func_0x000101661108(uVar2,uVar12,uVar8,uVar9);
      }
    }
  }
LAB_101661690:
  uVar1 = 0;
LAB_101661694:
  return uVar1 & 1;
}



/* Entry: 101662104; end: 101662143;  */

void FUN_101662104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976040;
  func_0x000107c61520(&UNK_10d976040,&UNK_1103ef670);
  puRam0000000112dbd0e8 = puVar1;
  return;
}



/* Entry: 101662144; end: 101662167;  */

void FUN_101662144(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101662168();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101662168; end: 1016621a7;  */

void FUN_101662168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976018;
  func_0x000107c61520(&UNK_10d976018,&UNK_1103ef670);
  puRam0000000112dbd0f0 = puVar1;
  return;
}



/* Entry: 1016621a8; end: 1016621d3;  */

void FUN_1016621a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101662104();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010164aeb4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016621d4; end: 1016621d7;  */

void FUN_1016621d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976080;
  func_0x000107c61520(&UNK_10d976080,&UNK_1103ef670);
  puRam0000000112dbd0f8 = puVar1;
  return;
}



/* Entry: 1016621d8; end: 101662217;  */

void FUN_1016621d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976080;
  func_0x000107c61520(&UNK_10d976080,&UNK_1103ef670);
  puRam0000000112dbd0f8 = puVar1;
  return;
}



/* Entry: 101662218; end: 10166234f;  */

long FUN_101662218(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101662350; end: 1016625ef;  */

undefined8 * FUN_101662350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar9 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  uVar7 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar7;
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar8 = param_2[8];
  uVar3 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar8,uVar3);
  param_1[8] = uVar8;
  param_1[9] = uVar3;
  lVar5 = param_2[0xb];
  if (lVar5 == 0) {
    uVar7 = param_2[10];
    uVar9 = param_2[0xd];
    uVar8 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar7;
    param_1[0xd] = uVar9;
    param_1[0xc] = uVar8;
    lVar5 = param_2[0xf];
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = lVar5;
    uVar7 = param_2[0xc];
    uVar8 = param_2[0xd];
    func_0x000107c61434();
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0xc] = uVar7;
    param_1[0xd] = uVar8;
    lVar5 = param_2[0xf];
  }
  if (lVar5 == 0) {
    uVar7 = param_2[0xe];
    uVar9 = param_2[0x11];
    uVar8 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar7;
    param_1[0x11] = uVar9;
    param_1[0x10] = uVar8;
    lVar5 = param_2[0x13];
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar5;
    uVar7 = param_2[0x10];
    uVar8 = param_2[0x11];
    func_0x000107c61434();
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar8;
    lVar5 = param_2[0x13];
  }
  if (lVar5 == 0) {
    uVar7 = param_2[0x12];
    uVar9 = param_2[0x15];
    uVar8 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar7;
    param_1[0x15] = uVar9;
    param_1[0x14] = uVar8;
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = lVar5;
    uVar7 = param_2[0x14];
    uVar8 = param_2[0x15];
    func_0x000107c61434();
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x14] = uVar7;
    param_1[0x15] = uVar8;
  }
  cVar4 = *(char *)(param_2 + 0x16);
  if (cVar4 == '\x02') {
    uVar7 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar7;
    param_1[0x18] = param_2[0x18];
    lVar5 = param_2[0x1a];
  }
  else {
    *(char *)(param_1 + 0x16) = cVar4;
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    lVar5 = param_2[0x1a];
  }
  if (lVar5 == 0) {
    uVar7 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar7;
    uVar7 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar7;
  }
  else {
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = lVar5;
    uVar7 = param_2[0x1b];
    uVar8 = param_2[0x1c];
    func_0x000107c61434();
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x1b] = uVar7;
    param_1[0x1c] = uVar8;
  }
  uVar6 = param_2[0x1f];
  if (uVar6 >> 0x3c < 0xf) {
    uVar7 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    func_0x00010006c00c(uVar7,uVar6);
    param_1[0x1e] = uVar7;
    param_1[0x1f] = uVar6;
  }
  else {
    uVar7 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar7;
    param_1[0x1f] = param_2[0x1f];
  }
  if (*(char *)(param_2 + 0x20) == '\x02') {
    uVar7 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar7;
    param_1[0x22] = param_2[0x22];
  }
  else {
    *(char *)(param_1 + 0x20) = *(char *)(param_2 + 0x20);
    uVar7 = param_2[0x21];
    uVar8 = param_2[0x22];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x21] = uVar7;
    param_1[0x22] = uVar8;
  }
  if (*(char *)(param_2 + 0x23) == '\x02') {
    uVar7 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar7;
    param_1[0x25] = param_2[0x25];
  }
  else {
    *(char *)(param_1 + 0x23) = *(char *)(param_2 + 0x23);
    uVar7 = param_2[0x24];
    uVar8 = param_2[0x25];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x24] = uVar7;
    param_1[0x25] = uVar8;
  }
  if (*(char *)(param_2 + 0x26) == '\x02') {
    uVar7 = param_2[0x26];
    param_1[0x27] = param_2[0x27];
    param_1[0x26] = uVar7;
    param_1[0x28] = param_2[0x28];
  }
  else {
    *(char *)(param_1 + 0x26) = *(char *)(param_2 + 0x26);
    uVar7 = param_2[0x27];
    uVar8 = param_2[0x28];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x27] = uVar7;
    param_1[0x28] = uVar8;
  }
  return param_1;
}



/* Entry: 1016625f0; end: 101662c23;  */

undefined8 * FUN_1016625f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[8];
  uVar9 = param_2[9];
  func_0x00010006c00c(uVar4,uVar9);
  uVar8 = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar4;
  param_1[9] = uVar9;
  func_0x00010006c090(uVar8,uVar2);
  lVar5 = param_1[0xb];
  if (lVar5 == 0) {
    if (param_2[0xb] == 0) {
      uVar4 = param_2[10];
      uVar9 = param_2[0xd];
      uVar8 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[0xd] = uVar9;
      param_1[0xc] = uVar8;
    }
    else {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      uVar4 = param_2[0xc];
      uVar8 = param_2[0xd];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0xc] = uVar4;
      param_1[0xd] = uVar8;
    }
  }
  else if (param_2[0xb] == 0) {
    func_0x00010159d63c(param_1 + 10);
    uVar9 = param_2[10];
    uVar8 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar9;
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar4;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    func_0x000107c61434();
    func_0x000107c6142c(lVar5);
    uVar4 = param_2[0xc];
    uVar9 = param_2[0xd];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0xc];
    uVar2 = param_1[0xd];
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  lVar5 = param_1[0xf];
  if (lVar5 == 0) {
    if (param_2[0xf] == 0) {
      uVar4 = param_2[0xe];
      uVar9 = param_2[0x11];
      uVar8 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar4;
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar8;
    }
    else {
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      uVar4 = param_2[0x10];
      uVar8 = param_2[0x11];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x10] = uVar4;
      param_1[0x11] = uVar8;
    }
  }
  else if (param_2[0xf] == 0) {
    func_0x00010159d63c(param_1 + 0xe);
    uVar9 = param_2[0xe];
    uVar8 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar9;
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar4;
  }
  else {
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c6142c(lVar5);
    uVar4 = param_2[0x10];
    uVar9 = param_2[0x11];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x10];
    uVar2 = param_1[0x11];
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  lVar5 = param_1[0x13];
  if (lVar5 == 0) {
    if (param_2[0x13] == 0) {
      uVar4 = param_2[0x12];
      uVar9 = param_2[0x15];
      uVar8 = param_2[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar4;
      param_1[0x15] = uVar9;
      param_1[0x14] = uVar8;
    }
    else {
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      uVar4 = param_2[0x14];
      uVar8 = param_2[0x15];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x14] = uVar4;
      param_1[0x15] = uVar8;
    }
  }
  else if (param_2[0x13] == 0) {
    FUN_101662c24(param_1 + 0x12);
    uVar9 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar4 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar9;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar4;
  }
  else {
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    func_0x000107c61434();
    func_0x000107c6142c(lVar5);
    uVar4 = param_2[0x14];
    uVar9 = param_2[0x15];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x14];
    uVar2 = param_1[0x15];
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar6 = (char *)(param_1 + 0x16);
  pbVar7 = (byte *)(param_2 + 0x16);
  bVar3 = *pbVar7;
  if (*pcVar6 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x17];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar8;
      *(undefined8 *)pcVar6 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x16) = bVar3;
      uVar4 = param_2[0x17];
      uVar8 = param_2[0x18];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x17] = uVar4;
      param_1[0x18] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar6);
    uVar4 = param_2[0x18];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0x17] = param_2[0x17];
    *(undefined8 *)pcVar6 = uVar8;
    param_1[0x18] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x16) = bVar3 & 1;
    uVar4 = param_2[0x17];
    uVar9 = param_2[0x18];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x17];
    uVar2 = param_1[0x18];
    param_1[0x17] = uVar4;
    param_1[0x18] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  lVar5 = param_1[0x1a];
  if (lVar5 == 0) {
    if (param_2[0x1a] == 0) {
      uVar8 = param_2[0x1a];
      uVar4 = param_2[0x19];
      uVar9 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar9;
      param_1[0x1a] = uVar8;
      param_1[0x19] = uVar4;
    }
    else {
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      uVar4 = param_2[0x1b];
      uVar8 = param_2[0x1c];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = uVar8;
    }
  }
  else if (param_2[0x1a] == 0) {
    func_0x00010159d63c(param_1 + 0x19);
    uVar8 = param_2[0x1c];
    uVar4 = param_2[0x1b];
    uVar9 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar9;
    param_1[0x1c] = uVar8;
    param_1[0x1b] = uVar4;
  }
  else {
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    func_0x000107c61434();
    func_0x000107c6142c(lVar5);
    uVar4 = param_2[0x1b];
    uVar9 = param_2[0x1c];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x1b];
    uVar2 = param_1[0x1c];
    param_1[0x1b] = uVar4;
    param_1[0x1c] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
      param_1[0x1d] = param_2[0x1d];
      uVar4 = param_2[0x1e];
      uVar9 = param_2[0x1f];
      func_0x00010006c00c(uVar4,uVar9);
      uVar8 = param_1[0x1e];
      uVar2 = param_1[0x1f];
      param_1[0x1e] = uVar4;
      param_1[0x1f] = uVar9;
      func_0x00010006c090(uVar8,uVar2);
    }
    else {
      func_0x00010159d670(param_1 + 0x1d);
      uVar4 = param_2[0x1f];
      uVar8 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar8;
      param_1[0x1f] = uVar4;
    }
  }
  else if ((ulong)param_2[0x1f] >> 0x3c < 0xf) {
    param_1[0x1d] = param_2[0x1d];
    uVar4 = param_2[0x1e];
    uVar8 = param_2[0x1f];
    func_0x00010006c00c(uVar4,uVar8);
    param_1[0x1e] = uVar4;
    param_1[0x1f] = uVar8;
  }
  else {
    uVar8 = param_2[0x1e];
    uVar4 = param_2[0x1d];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar8;
    param_1[0x1d] = uVar4;
  }
  bVar3 = *(byte *)(param_2 + 0x20);
  if (*(char *)(param_1 + 0x20) == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x21];
      uVar4 = param_2[0x20];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar8;
      param_1[0x20] = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x20) = bVar3;
      uVar4 = param_2[0x21];
      uVar8 = param_2[0x22];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x21] = uVar4;
      param_1[0x22] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(param_1 + 0x20);
    uVar4 = param_2[0x22];
    uVar8 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar8;
    param_1[0x22] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x20) = bVar3 & 1;
    uVar4 = param_2[0x21];
    uVar9 = param_2[0x22];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x21];
    uVar2 = param_1[0x22];
    param_1[0x21] = uVar4;
    param_1[0x22] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  puVar1 = param_1 + 0x23;
  bVar3 = *(byte *)(param_2 + 0x23);
  if (*(char *)(param_1 + 0x23) == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x24];
      uVar4 = param_2[0x23];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar8;
      *puVar1 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x23) = bVar3;
      uVar4 = param_2[0x24];
      uVar8 = param_2[0x25];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x24] = uVar4;
      param_1[0x25] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(puVar1);
    uVar4 = param_2[0x25];
    uVar8 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    *puVar1 = uVar8;
    param_1[0x25] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x23) = bVar3 & 1;
    uVar4 = param_2[0x24];
    uVar9 = param_2[0x25];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x24];
    uVar2 = param_1[0x25];
    param_1[0x24] = uVar4;
    param_1[0x25] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  bVar3 = *(byte *)(param_2 + 0x26);
  if (*(char *)(param_1 + 0x26) == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x27];
      uVar4 = param_2[0x26];
      param_1[0x28] = param_2[0x28];
      param_1[0x27] = uVar8;
      param_1[0x26] = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x26) = bVar3;
      uVar4 = param_2[0x27];
      uVar8 = param_2[0x28];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x27] = uVar4;
      param_1[0x28] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(param_1 + 0x26);
    uVar4 = param_2[0x28];
    uVar8 = param_2[0x26];
    param_1[0x27] = param_2[0x27];
    param_1[0x26] = uVar8;
    param_1[0x28] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x26) = bVar3 & 1;
    uVar4 = param_2[0x27];
    uVar9 = param_2[0x28];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x27];
    uVar2 = param_1[0x28];
    param_1[0x27] = uVar4;
    param_1[0x28] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  return param_1;
}



/* Entry: 101662c24; end: 101662c57;  */

undefined8 FUN_101662c24(undefined8 param_1)

{
  (*(code *)(undefined *)0x1016640c0)();
  return param_1;
}



/* Entry: 101662c58; end: 101662c5f;  */

void FUN_101662c58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x148);
  return;
}



/* Entry: 101662c60; end: 101662fa7;  */

undefined8 * FUN_101662c60(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar3);
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar3);
  uVar3 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_1[8];
  uVar2 = param_1[9];
  uVar7 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  func_0x00010006c090(uVar3,uVar2);
  if (param_1[0xb] == 0) {
LAB_101662d1c:
    uVar3 = param_2[10];
    uVar7 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar2;
    if (param_1[0xf] == 0) goto LAB_101662d64;
LAB_101662d2c:
    lVar4 = param_2[0xf];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0xe);
      goto LAB_101662d64;
    }
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar4;
    func_0x000107c6142c();
    uVar3 = param_1[0x10];
    uVar2 = param_1[0x11];
    uVar7 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar7;
    func_0x00010006c090(uVar3,uVar2);
    if (param_1[0x13] != 0) goto LAB_101662d74;
LAB_101662da4:
    uVar3 = param_2[0x12];
    uVar7 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar2;
  }
  else {
    lVar4 = param_2[0xb];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 10);
      goto LAB_101662d1c;
    }
    param_1[10] = param_2[10];
    param_1[0xb] = lVar4;
    func_0x000107c6142c();
    uVar3 = param_1[0xc];
    uVar2 = param_1[0xd];
    uVar7 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar7;
    func_0x00010006c090(uVar3,uVar2);
    if (param_1[0xf] != 0) goto LAB_101662d2c;
LAB_101662d64:
    uVar3 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar2;
    if (param_1[0x13] == 0) goto LAB_101662da4;
LAB_101662d74:
    lVar4 = param_2[0x13];
    if (lVar4 == 0) {
      FUN_101662c24(param_1 + 0x12);
      goto LAB_101662da4;
    }
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = lVar4;
    func_0x000107c6142c();
    uVar3 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar7 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar7;
    func_0x00010006c090(uVar3,uVar2);
  }
  pcVar6 = (char *)(param_1 + 0x16);
  if (*pcVar6 == '\x02') {
LAB_101662dd0:
    uVar3 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    *(undefined8 *)pcVar6 = uVar3;
    param_1[0x18] = param_2[0x18];
    if (param_1[0x1a] == 0) goto LAB_101662e3c;
LAB_101662e0c:
    lVar4 = param_2[0x1a];
    if (lVar4 == 0) {
      func_0x00010159d63c(param_1 + 0x19);
      goto LAB_101662e3c;
    }
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = lVar4;
    func_0x000107c6142c();
    uVar3 = param_1[0x1b];
    uVar2 = param_1[0x1c];
    uVar7 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar7;
    func_0x00010006c090(uVar3,uVar2);
  }
  else {
    if (*(byte *)(param_2 + 0x16) == 2) {
      func_0x0001015fd618(pcVar6);
      goto LAB_101662dd0;
    }
    *(byte *)(param_1 + 0x16) = *(byte *)(param_2 + 0x16) & 1;
    uVar3 = param_1[0x17];
    uVar2 = param_1[0x18];
    uVar7 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar7;
    func_0x00010006c090(uVar3,uVar2);
    if (param_1[0x1a] != 0) goto LAB_101662e0c;
LAB_101662e3c:
    uVar3 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar3;
    uVar3 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar3;
  }
  if ((ulong)param_1[0x1f] >> 0x3c < 0xf) {
    uVar5 = param_2[0x1f];
    if (0xe < uVar5 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x1d);
      goto LAB_101662e74;
    }
    uVar3 = param_1[0x1e];
    uVar2 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar2;
    param_1[0x1f] = uVar5;
    func_0x00010006c090(uVar3);
  }
  else {
LAB_101662e74:
    uVar3 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar3;
    param_1[0x1f] = param_2[0x1f];
  }
  if (*(char *)(param_1 + 0x20) == '\x02') {
LAB_101662ec4:
    uVar3 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar3;
    param_1[0x22] = param_2[0x22];
  }
  else {
    if (*(byte *)(param_2 + 0x20) == 2) {
      func_0x0001015fd618(param_1 + 0x20);
      goto LAB_101662ec4;
    }
    *(byte *)(param_1 + 0x20) = *(byte *)(param_2 + 0x20) & 1;
    uVar3 = param_1[0x21];
    uVar2 = param_1[0x22];
    uVar7 = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar7;
    func_0x00010006c090(uVar3,uVar2);
  }
  if (*(char *)(param_1 + 0x23) != '\x02') {
    bVar1 = *(byte *)(param_2 + 0x23);
    if (bVar1 != 2) {
      *(byte *)(param_1 + 0x23) = bVar1 & 1;
      uVar3 = param_1[0x24];
      uVar2 = param_1[0x25];
      uVar7 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar7;
      func_0x00010006c090(uVar3,uVar2);
      goto LAB_101662f44;
    }
    func_0x0001015fd618(param_1 + 0x23);
  }
  uVar3 = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar3;
  param_1[0x25] = param_2[0x25];
LAB_101662f44:
  if (*(char *)(param_1 + 0x26) != '\x02') {
    if (*(byte *)(param_2 + 0x26) != 2) {
      *(byte *)(param_1 + 0x26) = *(byte *)(param_2 + 0x26) & 1;
      uVar3 = param_1[0x27];
      uVar2 = param_1[0x28];
      uVar7 = param_2[0x27];
      param_1[0x28] = param_2[0x28];
      param_1[0x27] = uVar7;
      func_0x00010006c090(uVar3,uVar2);
      return param_1;
    }
    func_0x0001015fd618(param_1 + 0x26);
  }
  uVar3 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar3;
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Entry: 101662fa8; end: 101663093;  */

int FUN_101662fa8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x52] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101663094; end: 10166315b;  */

void FUN_101663094(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d975fec;
  func_0x000107c61520(&DAT_10d975fec,&UNK_1103ef670);
  puRam0000000112dbd108 = puVar1;
  return;
}



/* Entry: 10166315c; end: 1016631f3;  */

void FUN_10166315c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1016631b0:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001016631cc;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_101663198;
code_r0x0001016631cc:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_101663198:
    (*pcVar3)();
  }
  goto LAB_1016631b0;
}



/* Entry: 1016631f4; end: 101663297;  */

void FUN_1016631f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101663298; end: 1016632d7;  */

void FUN_101663298(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1016632d8; end: 101663307;  */

undefined1  [16] FUN_1016632d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101663308; end: 10166333b;  */

void FUN_101663308(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 10166333c; end: 10166334f;  */

undefined1  [16] FUN_10166333c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10166334c;
  return auVar1;
}



/* Entry: 101663350; end: 101663377;  */

void FUN_101663350(void)

{
  FUN_10166315c();
  return;
}



/* Entry: 101663378; end: 10166337b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101663378(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10166337c; end: 1016633b3;  */

uint FUN_10166337c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1016639f4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1016633b4; end: 1016633fb;  */

uint FUN_1016633b4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_101663630(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1016633fc; end: 10166349b;  */

/* WARNING: Possible PIC construction at 0x000101663448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101663458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010166344c) */
/* WARNING: Removing unreachable block (ram,0x00010166345c) */

void FUN_1016633fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd118 != -1) {
    func_0x000107c61568(0x112dbd118,0x101663114);
  }
  uVar5 = uRam0000000113802700;
  uVar4 = uRam00000001138026f8;
  uVar3 = uRam00000001138026f0;
  uVar2 = uRam00000001138026e8;
  uVar1 = uRam00000001138026e0;
  *param_1 = uRam00000001138026d8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10166349c; end: 1016634d7;  */

void FUN_10166349c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd138;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd138,&UNK_10d976360);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016634d8; end: 1016635eb;  */

void FUN_1016634d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016635ec; end: 10166362f;  */

uint FUN_1016635ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_101663630(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101663630; end: 1016636ab;  */

/* WARNING: Possible PIC construction at 0x000101663660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101663664) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101663630(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1016636ac; end: 1016636eb;  */

void FUN_1016636ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9762b0;
  func_0x000107c61520(&UNK_10d9762b0,&UNK_1103ef850);
  puRam0000000112dbd120 = puVar1;
  return;
}



/* Entry: 1016636ec; end: 10166370f;  */

void FUN_1016636ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101663710();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101663710; end: 10166374f;  */

void FUN_101663710(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976288;
  func_0x000107c61520(&UNK_10d976288,&UNK_1103ef850);
  puRam0000000112dbd128 = puVar1;
  return;
}



/* Entry: 101663750; end: 10166377b;  */

void FUN_101663750(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016636ac();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101661188();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10166377c; end: 10166377f;  */

void FUN_10166377c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9762f0;
  func_0x000107c61520(&UNK_10d9762f0,&UNK_1103ef850);
  puRam0000000112dbd130 = puVar1;
  return;
}



/* Entry: 101663780; end: 1016637bf;  */

void FUN_101663780(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9762f0;
  func_0x000107c61520(&UNK_10d9762f0,&UNK_1103ef850);
  puRam0000000112dbd130 = puVar1;
  return;
}



/* Entry: 1016637c0; end: 10166381b;  */

long FUN_1016637c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10166381c; end: 1016638fb;  */

undefined8 * FUN_10166381c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1016638fc; end: 10166394f;  */

undefined8 * FUN_1016638fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101663950; end: 1016639f3;  */

int FUN_101663950(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016639f4; end: 101663a7b;  */

void FUN_1016639f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d97625c;
  func_0x000107c61520(&DAT_10d97625c,&UNK_1103ef850);
  puRam0000000112dbd140 = puVar1;
  return;
}



/* Entry: 101663a7c; end: 101663aff;  */

void FUN_101663a7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 101663b00; end: 101663b87;  */

void FUN_101663b00(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 101663b88; end: 101663bc3;  */

void FUN_101663b88(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 101663bc4; end: 101663bf3;  */

undefined1  [16] FUN_101663bc4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101663bf4; end: 101663c27;  */

void FUN_101663bf4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101663c28; end: 101663c3b;  */

undefined1  [16] FUN_101663c28(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101663c38;
  return auVar1;
}



/* Entry: 101663c3c; end: 101663c73;  */

void FUN_101663c3c(void)

{
  FUN_101663a7c();
  return;
}



/* Entry: 101663c74; end: 101663c77;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101663c74(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101663c78; end: 101663caf;  */

uint FUN_101663c78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101664274();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101663cb0; end: 101663dc7;  */

/* WARNING: Possible PIC construction at 0x000101663ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101663ce8) */
/* WARNING: Removing unreachable block (ram,0x000101663d10) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101663cb0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar19 != uVar21) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar19 < 1) goto LAB_100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,uVar15)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101663dc8; end: 101663e03;  */

void FUN_101663dc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd168;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd168,&UNK_10d9764c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101663e04; end: 101663f7f;  */

void FUN_101663e04(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101663f80; end: 101663fbf;  */

void FUN_101663f80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976400;
  func_0x000107c61520(&UNK_10d976400,&UNK_1103efa00);
  puRam0000000112dbd150 = puVar1;
  return;
}



/* Entry: 101663fc0; end: 101663fe3;  */

void FUN_101663fc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101663fe4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101663fe4; end: 101664023;  */

void FUN_101663fe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9763d8;
  func_0x000107c61520(&UNK_10d9763d8,&UNK_1103efa00);
  puRam0000000112dbd158 = puVar1;
  return;
}



/* Entry: 101664024; end: 10166404f;  */

void FUN_101664024(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101663f80();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001016630d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101664050; end: 101664053;  */

void FUN_101664050(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976440;
  func_0x000107c61520(&UNK_10d976440,&UNK_1103efa00);
  puRam0000000112dbd160 = puVar1;
  return;
}



/* Entry: 101664054; end: 101664093;  */

void FUN_101664054(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976440;
  func_0x000107c61520(&UNK_10d976440,&UNK_1103efa00);
  puRam0000000112dbd160 = puVar1;
  return;
}



/* Entry: 101664094; end: 1016640e7;  */

long FUN_101664094(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016640e8; end: 101664197;  */

undefined8 * FUN_1016640e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 101664198; end: 1016641db;  */

undefined8 * FUN_101664198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1016641dc; end: 101664273;  */

int FUN_1016641dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101664274; end: 1016642b3;  */

void FUN_101664274(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9763ac;
  func_0x000107c61520(&DAT_10d9763ac,&UNK_1103efa00);
  puRam0000000112dbd170 = puVar1;
  return;
}



/* Entry: 1016642b4; end: 1016643b7;  */

void FUN_1016642b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbd1d0;
  func_0x0001000285a8(0x112dbd1d0,&UNK_10d9764e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016643b8; end: 1016644ab;  */

void FUN_1016643b8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 uStack_d0;
  long lStack_c8;
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
  
  lStack_c8 = *(long *)(unaff_x20 + 0x90);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 200);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x98);
  if (lStack_c8 == 0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0xc000000000000000;
    uVar7 = 1;
    lVar4 = -0x2000000000000000;
    uVar1 = 0xe000000000000000;
    uVar2 = 0xe000000000000000;
    uVar3 = 0xe000000000000000;
  }
  else {
    uVar1 = uStack_b8;
    uVar2 = uStack_a8;
    uVar3 = uStack_88;
    lVar4 = lStack_c8;
    uVar5 = uStack_a0;
    uVar6 = uStack_90;
    uVar8 = uStack_80;
    uVar9 = uStack_78;
    uVar7 = (undefined1)uStack_98;
    uStack_148 = uStack_b0;
    uStack_140 = uStack_c0;
    uStack_138 = uStack_d0;
  }
  FUN_1016644ac(&uStack_d0,auStack_130);
  *param_1 = uStack_138;
  param_1[1] = lVar4;
  param_1[2] = uStack_140;
  param_1[3] = uVar1;
  param_1[4] = uStack_148;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  *(undefined1 *)(param_1 + 7) = uVar7;
  param_1[8] = uVar6;
  param_1[9] = uVar3;
  param_1[10] = uVar8;
  param_1[0xb] = uVar9;
  return;
}



/* Entry: 1016644ac; end: 10166462b;  */

undefined8 FUN_1016644ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbd238;
  func_0x0001000285a8(0x112dbd238,&UNK_10d9764f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10166462c; end: 101664683;  */

void FUN_10166462c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0x10] = 0xc000000000000000;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  return;
}



/* Entry: 101664684; end: 1016646cb;  */

void FUN_101664684(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d976b30,0x15,2);
  uRam0000000113802740 = uStack_38;
  uRam0000000113802738 = uStack_40;
  uRam0000000113802750 = uStack_28;
  uRam0000000113802748 = uStack_30;
  uRam0000000113802760 = uStack_18;
  uRam0000000113802758 = uStack_20;
  return;
}



/* Entry: 1016646cc; end: 10166476b;  */

/* WARNING: Possible PIC construction at 0x000101664718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101664728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010166471c) */
/* WARNING: Removing unreachable block (ram,0x00010166472c) */

void FUN_1016646cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd248 != -1) {
    func_0x000107c61568(0x112dbd248,FUN_101664684);
  }
  uVar5 = uRam0000000113802760;
  uVar4 = uRam0000000113802758;
  uVar3 = uRam0000000113802750;
  uVar2 = uRam0000000113802748;
  uVar1 = uRam0000000113802740;
  *param_1 = uRam0000000113802738;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10166476c; end: 1016647b3;  */

void FUN_10166476c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d976ae0,0x45,2);
  uRam0000000113802770 = uStack_38;
  uRam0000000113802768 = uStack_40;
  uRam0000000113802780 = uStack_28;
  uRam0000000113802778 = uStack_30;
  uRam0000000113802790 = uStack_18;
  uRam0000000113802788 = uStack_20;
  return;
}



/* Entry: 1016647b4; end: 101664853;  */

/* WARNING: Possible PIC construction at 0x000101664800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101664810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101664804) */
/* WARNING: Removing unreachable block (ram,0x000101664814) */

void FUN_1016647b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd250 != -1) {
    func_0x000107c61568(0x112dbd250,FUN_10166476c);
  }
  uVar5 = uRam0000000113802790;
  uVar4 = uRam0000000113802788;
  uVar3 = uRam0000000113802780;
  uVar2 = uRam0000000113802778;
  uVar1 = uRam0000000113802770;
  *param_1 = uRam0000000113802768;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101664854; end: 10166489b;  */

void FUN_101664854(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d976a30,0xab,2);
  uRam00000001138027a0 = uStack_38;
  uRam0000000113802798 = uStack_40;
  uRam00000001138027b0 = uStack_28;
  uRam00000001138027a8 = uStack_30;
  uRam00000001138027c0 = uStack_18;
  uRam00000001138027b8 = uStack_20;
  return;
}



/* Entry: 10166489c; end: 101664a33;  */

/* WARNING: Removing unreachable block (ram,0x000101664a30) */

void FUN_10166489c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 2) goto LAB_101664924;
            pcVar5 = *(code **)(param_3 + 0x168);
          }
        }
        else if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 4) goto LAB_101664924;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_101664914:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 6) goto LAB_101664924;
            pcVar5 = *(code **)(param_3 + 0x150);
          }
          goto LAB_101664914;
        }
        if (lVar1 == 7) {
          pcVar5 = *(code **)(param_3 + 0x138);
          goto LAB_101664914;
        }
        if (lVar1 == 8) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_10166621c();
          lVar2 = unaff_x20 + 0x88;
          puVar3 = &UNK_1103efe78;
        }
        else {
          if (lVar1 != 9) goto LAB_101664924;
          pcVar5 = *(code **)(param_3 + 0x180);
          FUN_1016659ec();
          lVar2 = unaff_x20 + 0x68;
          puVar3 = &UNK_1103efcd0;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_101664924:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101664a34; end: 101664c57;  */

void FUN_101664a34(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar8;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)uVar1;
      lVar7 = (long)uVar1 >> 0x20;
      goto LAB_101664ac4;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_101664ae4;
  }
  else {
    if (uVar5 != 2) goto LAB_101664ae4;
    lVar6 = *(long *)(uVar1 + 0x10);
    lVar7 = *(long *)(uVar1 + 0x18);
LAB_101664ac4:
    if (lVar6 == lVar7) goto LAB_101664ae4;
  }
  (**(code **)(param_3 + 0x78))(uVar1,uVar2,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_101664ae4:
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[4] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[7];
    uVar1 = unaff_x20[6] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[9];
      uVar1 = unaff_x20[8] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[0xb];
        uVar1 = unaff_x20[10] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((((uVar1 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar2,6,param_2,param_3), unaff_x21 == 0))
            && (((char)unaff_x20[0xc] != '\x01' ||
                ((**(code **)(param_3 + 0x68))(1,7,param_2,param_3), unaff_x21 == 0)))) &&
           (puVar4 = unaff_x20, FUN_101664c58(), unaff_x21 == 0)) {
          if (unaff_x20[0xd] != 0) {
            uStack_48 = (undefined1)unaff_x20[0xe];
            pcVar8 = *(code **)(param_3 + 0x80);
            uStack_50 = unaff_x20[0xd];
            FUN_1016659ec();
            (*pcVar8)(&uStack_50,9,&UNK_1103efcd0,puVar4,param_2,param_3);
          }
          func_0x000100076224(param_1,unaff_x20[0xf],unaff_x20[0x10],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 101664c58; end: 101664cf3;  */

void FUN_101664c58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  long lStack_98;
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
  
  lStack_98 = *(long *)(param_1 + 0x90);
  if (lStack_98 != 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x88);
    uStack_78 = *(undefined8 *)(param_1 + 0xb0);
    uStack_80 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    uStack_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    uStack_88 = *(undefined8 *)(param_1 + 0xa0);
    uStack_90 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10166621c();
    (*pcVar1)(&uStack_a0,8,&UNK_1103efe78,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101664cf4; end: 101664d73;  */

uint FUN_101664cf4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 auStack_3a0 [96];
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_1[2];
    FUN_100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[4];
      if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[6];
        if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[8];
          if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[10];
            if ((((uVar2 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
               ((((byte)param_1[0xc] ^ (byte)param_2[0xc]) & 1) == 0)) {
              uStack_d8 = param_1[0x16];
              uStack_e0 = param_1[0x15];
              uStack_c8 = param_1[0x18];
              uStack_d0 = param_1[0x17];
              uStack_b8 = param_1[0x1a];
              uStack_c0 = param_1[0x19];
              uStack_a8 = param_1[0x1c];
              uStack_b0 = param_1[0x1b];
              uStack_f8 = param_1[0x12];
              uStack_100 = param_1[0x11];
              uStack_e8 = param_1[0x14];
              uStack_f0 = param_1[0x13];
              uStack_138 = param_2[0x16];
              uStack_140 = param_2[0x15];
              uStack_128 = param_2[0x18];
              uStack_130 = param_2[0x17];
              uStack_118 = param_2[0x1a];
              uStack_120 = param_2[0x19];
              uStack_108 = param_2[0x1c];
              uStack_110 = param_2[0x1b];
              uStack_158 = param_2[0x12];
              uStack_160 = param_2[0x11];
              uStack_148 = param_2[0x14];
              uStack_150 = param_2[0x13];
              uStack_1f8 = param_1[0x16];
              uStack_200 = param_1[0x15];
              uStack_1e8 = param_1[0x18];
              uStack_1f0 = param_1[0x17];
              uStack_1d8 = param_1[0x1a];
              uStack_1e0 = param_1[0x19];
              uStack_1c8 = param_1[0x1c];
              uStack_1d0 = param_1[0x1b];
              uStack_218 = param_1[0x12];
              uStack_220 = param_1[0x11];
              uStack_208 = param_1[0x14];
              uStack_210 = param_1[0x13];
              uStack_258 = param_2[0x16];
              uStack_260 = param_2[0x15];
              uStack_248 = param_2[0x18];
              uStack_250 = param_2[0x17];
              uStack_238 = param_2[0x1a];
              uStack_240 = param_2[0x19];
              uStack_228 = param_2[0x1c];
              uStack_230 = param_2[0x1b];
              uStack_278 = param_2[0x12];
              uStack_280 = param_2[0x11];
              uStack_268 = param_2[0x14];
              uStack_270 = param_2[0x13];
              uStack_1c0 = uStack_280;
              uStack_1b8 = uStack_278;
              uStack_1b0 = uStack_270;
              uStack_1a8 = uStack_268;
              uStack_1a0 = uStack_260;
              uStack_198 = uStack_258;
              uStack_190 = uStack_250;
              uStack_188 = uStack_248;
              uStack_180 = uStack_240;
              uStack_178 = uStack_238;
              uStack_170 = uStack_230;
              uStack_168 = uStack_228;
              if (uStack_218 == 0) {
                if (uStack_278 != 0) goto LAB_101665c98;
                uStack_2b8 = param_1[0x16];
                uStack_2c0 = param_1[0x15];
                uStack_2a8 = param_1[0x18];
                uStack_2b0 = param_1[0x17];
                uStack_298 = param_1[0x1a];
                uStack_2a0 = param_1[0x19];
                uStack_288 = param_1[0x1c];
                uStack_290 = param_1[0x1b];
                uStack_2d8 = param_1[0x12];
                uStack_2e0 = param_1[0x11];
                uStack_2c8 = param_1[0x14];
                uStack_2d0 = param_1[0x13];
                FUN_1016644ac(&uStack_100,&uStack_a0);
                FUN_1016644ac(&uStack_160,&uStack_a0);
                func_0x0001016645ec(&uStack_2e0,0x112dbd238,&UNK_10d9764f0);
LAB_101665d54:
                uVar2 = param_1[0xd];
                uVar4 = param_2[0xd];
                if ((char)param_2[0xe] == '\x01') {
                  if (uVar4 == 0) {
                    if (uVar2 == 0) goto LAB_101665d9c;
                  }
                  else if (uVar4 == 1) {
                    if (uVar2 == 1) {
LAB_101665d9c:
                      uVar2 = param_1[0xf];
                      FUN_100e25fcc(uVar2,param_1[0x10],param_2[0xf],param_2[0x10]);
                      uVar1 = (uint)uVar2;
                      goto LAB_101665b24;
                    }
                  }
                  else if (uVar2 == 2) goto LAB_101665d9c;
                }
                else if (uVar2 == uVar4) goto LAB_101665d9c;
              }
              else {
                if (uStack_278 == 0) {
LAB_101665c98:
                  uStack_2e0 = uStack_220;
                  uStack_2d8 = uStack_218;
                  uStack_2d0 = uStack_210;
                  uStack_2c8 = uStack_208;
                  uStack_2c0 = uStack_200;
                  uStack_2b8 = uStack_1f8;
                  uStack_2b0 = uStack_1f0;
                  uStack_2a8 = uStack_1e8;
                  uStack_2a0 = uStack_1e0;
                  uStack_298 = uStack_1d8;
                  uStack_290 = uStack_1d0;
                  uStack_288 = uStack_1c8;
                  FUN_1016644ac(&uStack_100,&uStack_a0);
                  FUN_1016644ac(&uStack_160,&uStack_a0);
                  func_0x0001016645ec(&uStack_2e0,0x112dbd240,&UNK_10d9764f8);
                  uVar1 = 0;
                  goto LAB_101665b24;
                }
                uStack_318 = param_2[0x16];
                uStack_320 = param_2[0x15];
                uStack_308 = param_2[0x18];
                uStack_310 = param_2[0x17];
                uStack_2f8 = param_2[0x1a];
                uStack_300 = param_2[0x19];
                uStack_2e8 = param_2[0x1c];
                uStack_2f0 = param_2[0x1b];
                uStack_338 = param_2[0x12];
                uStack_340 = param_2[0x11];
                uStack_328 = param_2[0x14];
                uStack_330 = param_2[0x13];
                uStack_78 = param_1[0x16];
                uStack_80 = param_1[0x15];
                uStack_68 = param_1[0x18];
                uStack_70 = param_1[0x17];
                uStack_58 = param_1[0x1a];
                uStack_60 = param_1[0x19];
                uStack_48 = param_1[0x1c];
                uStack_50 = param_1[0x1b];
                uStack_98 = param_1[0x12];
                uStack_a0 = param_1[0x11];
                uStack_88 = param_1[0x14];
                uStack_90 = param_1[0x13];
                uStack_2e0 = uStack_340;
                uStack_2d8 = uStack_338;
                uStack_2d0 = uStack_330;
                uStack_2c8 = uStack_328;
                uStack_2c0 = uStack_320;
                uStack_2b8 = uStack_318;
                uStack_2b0 = uStack_310;
                uStack_2a8 = uStack_308;
                uStack_2a0 = uStack_300;
                uStack_298 = uStack_2f8;
                uStack_290 = uStack_2f0;
                uStack_288 = uStack_2e8;
                FUN_1016644ac(&uStack_100,auStack_3a0);
                FUN_1016644ac(&uStack_160,auStack_3a0);
                puVar3 = &uStack_a0;
                FUN_1016658e0(puVar3,&uStack_2e0);
                func_0x0001016645ec(&uStack_340,0x112dbd238,&UNK_10d9764f0);
                func_0x0001016645ec(&uStack_220,0x112dbd238,&UNK_10d9764f0);
                if (((ulong)puVar3 & 1) != 0) goto LAB_101665d54;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_101665b24:
  return uVar1 & 1;
}



/* Entry: 101664d74; end: 101664da3;  */

undefined1  [16] FUN_101664d74(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x78);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return auVar1;
}



/* Entry: 101664da4; end: 101664dd7;  */

void FUN_101664da4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  return;
}



/* Entry: 101664dd8; end: 101664deb;  */

undefined1  [16] FUN_101664dd8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = 0x101664de8;
  return auVar1;
}



/* Entry: 101664dec; end: 101664dff;  */

void FUN_101664dec(void)

{
  FUN_10166489c();
  return;
}



/* Entry: 101664e00; end: 101664e67;  */

void FUN_101664e00(void)

{
  FUN_101664a34();
  return;
}



/* Entry: 101664e68; end: 101664e6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101664e68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101664e6c; end: 101664ea3;  */

uint FUN_101664e6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000101666cc4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101664ea4; end: 101664f53;  */

uint FUN_101664ea4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_101665a2c(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 101664f54; end: 101664ff3;  */

/* WARNING: Possible PIC construction at 0x000101664fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101664fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101664fa4) */
/* WARNING: Removing unreachable block (ram,0x000101664fb4) */

void FUN_101664f54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd258 != -1) {
    func_0x000107c61568(0x112dbd258,FUN_101664854);
  }
  uVar5 = uRam00000001138027c0;
  uVar4 = uRam00000001138027b8;
  uVar3 = uRam00000001138027b0;
  uVar2 = uRam00000001138027a8;
  uVar1 = uRam00000001138027a0;
  *param_1 = uRam0000000113802798;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101664ff4; end: 10166502f;  */

void FUN_101664ff4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd310;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd310,&UNK_10d9769c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101665030; end: 10166519b;  */

void FUN_101665030(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10166519c; end: 10166524b;  */

uint FUN_10166519c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_101665a2c(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 10166524c; end: 101665293;  */

void FUN_10166524c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9769d0,0x54,2);
  uRam00000001138027d0 = uStack_38;
  uRam00000001138027c8 = uStack_40;
  uRam00000001138027e0 = uStack_28;
  uRam00000001138027d8 = uStack_30;
  uRam00000001138027f0 = uStack_18;
  uRam00000001138027e8 = uStack_20;
  return;
}



/* Entry: 101665294; end: 1016653ab;  */

/* WARNING: Removing unreachable block (ram,0x00010166539c) */

void FUN_101665294(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_10166530c;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_1016652fc:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_1016652fc;
        }
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000101665dec();
          (*pcVar3)(unaff_x20 + 0x30,&UNK_1103efd60,lVar1,param_2,param_3);
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_1016652fc;
        }
      }
LAB_10166530c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1016653ac; end: 101665507;  */

void FUN_1016653ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar3,1,param_2,param_3), unaff_x21 == 0)) {
    uVar3 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar3,2,param_2,param_3), unaff_x21 == 0)) {
      uVar3 = unaff_x20[4];
      uVar2 = unaff_x20[5];
      uVar1 = uVar3 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar3,uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        if (unaff_x20[6] != 0) {
          uStack_48 = (undefined1)unaff_x20[7];
          pcVar4 = *(code **)(param_3 + 0x80);
          uStack_50 = unaff_x20[6];
          func_0x000101665dec();
          (*pcVar4)(&uStack_50,4,&UNK_1103efd60,uVar3,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar3 = unaff_x20[9];
        uVar1 = unaff_x20[8] & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar1 = uVar3 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar3,5,param_2,param_3), unaff_x21 == 0)) {
          func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 101665508; end: 10166555b;  */

void FUN_101665508(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 10166555c; end: 10166558b;  */

undefined1  [16] FUN_10166555c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 10166558c; end: 1016655bf;  */

void FUN_10166558c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 1016655c0; end: 1016655d3;  */

undefined1  [16] FUN_1016655c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x1016655d0;
  return auVar1;
}



/* Entry: 1016655d4; end: 1016655fb;  */

void FUN_1016655d4(void)

{
  FUN_101665294();
  return;
}



/* Entry: 1016655fc; end: 1016655ff;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016655fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}


