/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0b0eb4; end: 10a0b1f57;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b1b28) */
/* WARNING: Removing unreachable block (ram,0x00010a0b121c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b13a0) */
/* WARNING: Removing unreachable block (ram,0x00010a0b12b8) */
/* WARNING: Removing unreachable block (ram,0x00010a0b15bc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b130c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b15d8) */

undefined8 FUN_10a0b0eb4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  code *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  char **ppcVar10;
  long **pplVar11;
  long **pplVar12;
  long ***ppplVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  long ***ppplVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  char *pcStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  char *pcStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
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
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
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
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long **pplStack_198;
  long *plStack_190;
  long lStack_188;
  long **pplStack_180;
  long *plStack_178;
  long lStack_170;
  long **pplStack_168;
  long *plStack_160;
  long lStack_158;
  long **pplStack_150;
  long *plStack_148;
  long lStack_140;
  long **pplStack_138;
  long *plStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long **pplStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  long *plStack_78;
  
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0x8000000000000000;
  FUN_10a0a87b8(param_1,&DAT_10f414fbf,&uStack_370);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar8 = (char *)&uStack_370;
  func_0x00010937c560();
  if (*pcVar8 != '\x02') {
    return 1;
  }
  pcVar8 = (char *)&uStack_370;
  func_0x00010937c560();
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0x8000000000000000;
  cVar4 = *pcVar8;
  if (cVar4 == '\0') {
    uStack_378 = 1;
  }
  else {
    if (cVar4 == '\x02') {
      uStack_380 = **(undefined8 **)(pcVar8 + 8);
      lStack_3a8 = 0;
      uStack_398 = 0x8000000000000000;
      uStack_3a0 = *(undefined8 *)(*(long *)(pcVar8 + 8) + 8);
      goto LAB_10a0b0fa4;
    }
    if (cVar4 == '\x01') {
      uStack_388 = **(undefined8 **)(pcVar8 + 8);
      uStack_3a0 = 0;
      uStack_398 = 0x8000000000000000;
      lStack_3a8 = *(long *)(pcVar8 + 8) + 8;
      goto LAB_10a0b0fa4;
    }
    uStack_378 = 0;
  }
  lStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 1;
LAB_10a0b0fa4:
  ppcVar9 = &pcStack_390;
  pcStack_3b0 = pcVar8;
  pcStack_390 = pcVar8;
  func_0x00010937c708(ppcVar9,&pcStack_3b0);
  if (((ulong)ppcVar9 & 1) == 0) {
    do {
      ppcVar9 = &pcStack_390;
      func_0x00010937c560();
      if (*(char *)ppcVar9 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a4fd,0x2d);
          return 0;
        }
        return 0;
      }
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      lStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_298 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      lStack_270 = 0;
      lStack_278 = 0;
      lStack_260 = 0;
      lStack_268 = 0;
      lStack_250 = 0;
      lStack_258 = 0;
      lVar27 = *(long *)*param_2;
      cVar4 = *(char *)(param_2[1] + 0x12);
      plStack_f8 = (long *)0x0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0x8000000000000000;
      ppcVar10 = ppcVar9;
      puStack_2b0 = &uStack_2a8;
      puStack_290 = &uStack_288;
      FUN_10a0a87b8();
      if ((int)ppcVar10 != 0) {
        pplVar11 = &plStack_f8;
        func_0x00010937c560();
        if (*(char *)pplVar11 == '\x02') {
          pplVar11 = &plStack_f8;
          func_0x00010937c560();
          plStack_110 = (long *)0x0;
          lStack_108 = 0;
          uStack_100 = 0x8000000000000000;
          if (*(char *)pplVar11 == '\x02') {
            lStack_108 = pplVar11[1][1];
          }
          else if (*(char *)pplVar11 == '\x01') {
            plStack_110 = pplVar11[1] + 1;
          }
          else {
            uStack_100 = 1;
          }
          pplVar12 = &plStack_f8;
          pplStack_118 = pplVar11;
          func_0x00010937c560();
          plStack_130 = (long *)0x0;
          lStack_128 = 0;
          uStack_120 = 0x8000000000000000;
          cVar5 = *(char *)pplVar12;
          pplStack_138 = pplVar12;
          if (cVar5 == '\0') {
            uStack_120 = 1;
          }
          else if (cVar5 == '\x02') {
            lStack_128 = *pplVar12[1];
          }
          else if (cVar5 == '\x01') {
            plStack_130 = (long *)*pplVar12[1];
          }
          else {
            uStack_120 = 0;
          }
          while( true ) {
            ppplVar13 = &pplStack_138;
            func_0x00010937c708(ppplVar13,&pplStack_118);
            if ((int)ppplVar13 != 0) break;
            uStack_248 = 0xffffffffffffffff;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            lStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1b8 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            plStack_190 = (long *)0x0;
            lStack_188 = 0;
            lStack_140 = 0;
            plStack_148 = (long *)0x0;
            pplStack_150 = (long **)0x0;
            lStack_158 = 0;
            plStack_160 = (long *)0x0;
            pplStack_168 = (long **)0x0;
            lStack_170 = 0;
            plStack_178 = (long *)0x0;
            pplStack_180 = (long **)0x0;
            ppplVar13 = &pplStack_138;
            puStack_1d0 = &uStack_1c8;
            puStack_1b0 = &uStack_1a8;
            pplStack_198 = &plStack_190;
            func_0x00010937c560();
            uStack_a0 = 0xffffffff;
            uStack_9c = 0xffffffff;
            func_0x000107c2b054(&lStack_98,&DAT_10f638aa0);
            func_0x000107c2b054(&plStack_d8,&UNK_10f63a58a);
            puVar16 = &uStack_9c;
            FUN_10a0deaa0(puVar16,lVar27,ppplVar13,&lStack_98,1,&plStack_d8);
            if (((ulong)puVar16 & 1) == 0) {
              if (lVar27 != 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (lVar27,&UNK_10f63a59b,0x31);
              }
            }
            else {
              lStack_98 = 0;
              lStack_90 = 0;
              lStack_88 = 0;
              uStack_80 = 0x8000000000000000;
              ppplVar19 = ppplVar13;
              FUN_10a0a87b8(ppplVar13,&DAT_10f638ab2,&lStack_98);
              if ((int)ppplVar19 == 0) {
LAB_10a0b13c8:
                uVar22 = 0xffffffff;
LAB_10a0b13cc:
                uStack_248 = CONCAT44(uVar22,uStack_9c);
                FUN_10a0b3de4(&puStack_1b0,ppplVar13);
                ppplVar19 = ppplVar13;
                FUN_10a0b4a84(&uStack_228);
                if (cVar4 != '\0') {
                  plStack_d8 = (long *)0x0;
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  uStack_c0 = 0x8000000000000000;
                  ppplVar19 = ppplVar13;
                  FUN_10a0a87b8(ppplVar13,&DAT_10f6372be,&plStack_d8);
                  if ((int)ppplVar19 != 0) {
                    func_0x00010937c560(&plStack_d8);
                    FUN_10a0c32e4(&pplStack_b8);
                    if (lStack_158 < 0) {
                      __ZdlPv(pplStack_168);
                    }
                    plStack_160 = plStack_b0;
                    pplStack_168 = pplStack_b8;
                    lStack_158 = lStack_a8;
                  }
                  plStack_d8 = (long *)0x0;
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  uStack_c0 = 0x8000000000000000;
                  ppplVar19 = (long ***)&DAT_10f6372cc;
                  FUN_10a0a87b8(ppplVar13,&DAT_10f6372cc,&plStack_d8);
                  if ((int)ppplVar13 != 0) {
                    func_0x00010937c560(&plStack_d8);
                    ppplVar19 = (long ***)0xffffffff;
                    FUN_10a0c32e4(&pplStack_b8);
                    if (lStack_170 < 0) {
                      __ZdlPv(pplStack_180);
                    }
                    plStack_178 = plStack_b0;
                    pplStack_180 = pplStack_b8;
                    lStack_170 = lStack_a8;
                  }
                }
              }
              else {
                plVar15 = &lStack_98;
                func_0x00010937c560();
                if ((char)*plVar15 != '\x01') goto LAB_10a0b13c8;
                plVar15 = &lStack_98;
                func_0x00010937c560();
                func_0x000107c2b054(&plStack_d8,&DAT_10f638aa8);
                func_0x000107c2b054(&pplStack_b8,"");
                puVar16 = &uStack_a0;
                FUN_10a0deaa0(puVar16,lVar27,plVar15,&plStack_d8,1,&pplStack_b8);
                if (((ulong)puVar16 & 1) == 0) {
                  puVar20 = &UNK_10f63a5cd;
joined_r0x00010a0b15ec:
                  if (lVar27 != 0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (lVar27,puVar20,0x35);
                  }
                  goto LAB_10a0b15a8;
                }
                func_0x000107c2b054(&plStack_d8,"path");
                pplStack_b8 = (long **)0x0;
                plStack_b0 = (long *)0x0;
                lStack_a8 = 0;
                puVar14 = &uStack_240;
                FUN_10a0cdaf8(puVar14,lVar27,plVar15,&plStack_d8,1,&pplStack_b8);
                if (((ulong)puVar14 & 1) == 0) {
                  puVar20 = &UNK_10f63a603;
                  goto joined_r0x00010a0b15ec;
                }
                FUN_10a0b3de4(&pplStack_198,plVar15);
                if (cVar4 != '\0') {
                  plStack_d8 = (long *)0x0;
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  uStack_c0 = 0x8000000000000000;
                  FUN_10a0a87b8(plVar15,&DAT_10f6372be,&plStack_d8);
                  uVar22 = uStack_a0;
                  if ((int)plVar15 != 0) {
                    func_0x00010937c560(&plStack_d8);
                    FUN_10a0c32e4(&pplStack_b8);
                    if (lStack_140 < 0) {
                      __ZdlPv(pplStack_150);
                    }
                    plStack_148 = plStack_b0;
                    pplStack_150 = pplStack_b8;
                    lStack_140 = lStack_a8;
                    uVar22 = uStack_a0;
                  }
                  goto LAB_10a0b13cc;
                }
                uStack_248 = CONCAT44(uStack_a0,uStack_9c);
                FUN_10a0b3de4(&puStack_1b0,ppplVar13);
                FUN_10a0b4a84(&uStack_228);
                ppplVar19 = ppplVar13;
              }
              if (uStack_330 < uStack_328) {
                FUN_10a0c9c98(uStack_330,&uStack_248);
                uStack_330 = uStack_330 + 0x110;
              }
              else {
                lVar26 = uStack_330 - lStack_338;
                uVar24 = (lVar26 >> 4) * -0xf0f0f0f0f0f0f0f + 1;
                if (0xf0f0f0f0f0f0f0 < uVar24) {
                  FUN_10a0c9bdc();
                  goto LAB_10a0b1e28;
                }
                lVar23 = (long)(uStack_328 - lStack_338) >> 4;
                uVar25 = lVar23 * -0x1e1e1e1e1e1e1e1e;
                if (uVar25 < uVar24 || uVar25 - uVar24 == 0) {
                  uVar25 = uVar24;
                }
                if (0x78787878787877 < (ulong)(lVar23 * -0xf0f0f0f0f0f0f0f)) {
                  uVar25 = 0xf0f0f0f0f0f0f0;
                }
                plStack_78 = &lStack_338;
                if (uVar25 == 0) {
                  ppplVar19 = (long ***)0x0;
                }
                else {
                  FUN_10a0c9bf0();
                }
                lVar26 = uVar25 + lVar26;
                FUN_10a0c9c98(lVar26,&uStack_248);
                lVar23 = lVar26 + (lStack_338 - uStack_330);
                FUN_10a0c9c30(lStack_338,uStack_330,lVar23);
                lStack_88 = lStack_338;
                uStack_80 = uStack_328;
                lStack_98 = lStack_338;
                lStack_90 = lStack_338;
                lStack_338 = lVar23;
                uStack_330 = lVar26 + 0x110U;
                uStack_328 = uVar25 + (long)ppplVar19 * 0x110;
                func_0x00010a0c9ebc(&lStack_98);
                uStack_330 = lVar26 + 0x110U;
              }
            }
LAB_10a0b15a8:
            FUN_10a0c9e44(&uStack_248);
            func_0x00010937c698(&pplStack_138);
          }
        }
      }
      lStack_98 = 0;
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0x8000000000000000;
      ppcVar10 = ppcVar9;
      FUN_10a0a87b8(ppcVar9,&UNK_10f414faa,&lStack_98);
      if ((int)ppcVar10 != 0) {
        plVar15 = &lStack_98;
        func_0x00010937c560();
        if ((char)*plVar15 == '\x02') {
          plVar15 = &lStack_98;
          func_0x00010937c560();
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0x8000000000000000;
          cVar5 = (char)*plVar15;
          plStack_f8 = plVar15;
          plStack_d8 = plVar15;
          if (cVar5 == '\0') {
            uStack_c0 = 1;
LAB_10a0b16f4:
            lStack_f0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 1;
          }
          else if (cVar5 == '\x02') {
            uStack_c8 = *(undefined8 *)plVar15[1];
            lStack_f0 = 0;
            uStack_e0 = 0x8000000000000000;
            uStack_e8 = *(undefined8 *)(plVar15[1] + 8);
          }
          else {
            if (cVar5 != '\x01') {
              uStack_c0 = 0;
              goto LAB_10a0b16f4;
            }
            uStack_d0 = *(undefined8 *)plVar15[1];
            uStack_e8 = 0;
            uStack_e0 = 0x8000000000000000;
            lStack_f0 = plVar15[1] + 8;
          }
          while( true ) {
            pplVar11 = &plStack_d8;
            func_0x00010937c708(pplVar11,&plStack_f8);
            if (((ulong)pplVar11 & 1) != 0) break;
            pplVar11 = &plStack_d8;
            func_0x00010937c560(pplVar11);
            uStack_248 = 0xffffffffffffffff;
            func_0x000107c2b054(&uStack_240,&DAT_10f35384e);
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_220 = 0;
            uStack_228 = 0;
            uStack_210 = 0;
            uStack_218 = 0;
            uStack_200 = 0;
            uStack_208 = 0;
            uStack_1f0 = 0;
            uStack_1f8 = 0;
            uStack_1e0 = 0;
            uStack_1e8 = 0;
            uStack_1d8 = 0;
            uStack_1b8 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            plStack_190 = (long *)0x0;
            pplStack_198 = (long **)0x0;
            pplStack_180 = (long **)0x0;
            lStack_188 = 0;
            lStack_170 = 0;
            plStack_178 = (long *)0x0;
            pplStack_b8 = (long **)CONCAT44(pplStack_b8._4_4_,0xffffffff);
            uStack_9c = 0xffffffff;
            puStack_1d0 = &uStack_1c8;
            puStack_1b0 = &uStack_1a8;
            func_0x000107c2b054(&pplStack_118,&DAT_10f311774);
            func_0x000107c2b054(&pplStack_138,"");
            ppplVar13 = &pplStack_b8;
            FUN_10a0deaa0(ppplVar13,lVar27,pplVar11,&pplStack_118,1,&pplStack_138);
            if (lStack_128 < 0) {
              __ZdlPv(pplStack_138);
            }
            if (lStack_108 < 0) {
              __ZdlPv(pplStack_118);
            }
            if (((ulong)ppplVar13 & 1) == 0) {
              if (lVar27 == 0) goto LAB_10a0b1dcc;
              puVar20 = &UNK_10f63a52b;
              uVar21 = 0x2e;
LAB_10a0b1dc4:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (lVar27,puVar20,uVar21);
LAB_10a0b1dcc:
              func_0x00010a0cefc4(&uStack_248);
              func_0x00010a0d40a0(&uStack_350);
              return 0;
            }
            func_0x000107c2b054(&pplStack_118,&UNK_10f638abe);
            plStack_130 = (long *)0x0;
            pplStack_138 = (long **)0x0;
            lStack_128 = 0;
            FUN_10a0cdaf8(&uStack_240,lVar27,pplVar11,&pplStack_118,0,&pplStack_138);
            if (lStack_128 < 0) {
              __ZdlPv(pplStack_138);
            }
            if (lStack_108 < 0) {
              __ZdlPv(pplStack_118);
            }
            func_0x000107c2b054(&pplStack_118,&DAT_10f3b93c3);
            func_0x000107c2b054(&pplStack_138,"");
            puVar16 = &uStack_9c;
            FUN_10a0deaa0(puVar16,lVar27,pplVar11,&pplStack_118,1,&pplStack_138);
            if (lStack_128 < 0) {
              __ZdlPv(pplStack_138);
            }
            if (lStack_108 < 0) {
              __ZdlPv(pplStack_118);
            }
            if (((ulong)puVar16 & 1) == 0) {
              if (lVar27 == 0) goto LAB_10a0b1dcc;
              puVar20 = &UNK_10f63a55a;
              uVar21 = 0x2f;
              goto LAB_10a0b1dc4;
            }
            uStack_248 = CONCAT44(uStack_9c,(int)pplStack_b8);
            FUN_10a0b3de4(&puStack_1b0,ppcVar9);
            FUN_10a0b4a84(&uStack_228,pplVar11);
            if (cVar4 != '\0') {
              plStack_110 = (long *)0x0;
              pplStack_118 = (long **)0x0;
              lStack_108 = 0;
              uStack_100 = 0x8000000000000000;
              ppcVar10 = ppcVar9;
              FUN_10a0a87b8(ppcVar9,&DAT_10f6372be,&pplStack_118);
              if ((int)ppcVar10 != 0) {
                func_0x00010937c560(&pplStack_118);
                FUN_10a0c32e4(&pplStack_138);
                if (lStack_170 < 0) {
                  __ZdlPv(pplStack_180);
                }
                plStack_178 = plStack_130;
                pplStack_180 = pplStack_138;
                lStack_170 = lStack_128;
              }
              plStack_110 = (long *)0x0;
              pplStack_118 = (long **)0x0;
              lStack_108 = 0;
              uStack_100 = 0x8000000000000000;
              ppcVar10 = ppcVar9;
              FUN_10a0a87b8(ppcVar9,&DAT_10f6372cc,&pplStack_118);
              if ((int)ppcVar10 != 0) {
                func_0x00010937c560(&pplStack_118);
                FUN_10a0c32e4(&pplStack_138);
                if (lStack_188 < 0) {
                  __ZdlPv(pplStack_198);
                }
                plStack_190 = plStack_130;
                pplStack_198 = pplStack_138;
                lStack_188 = lStack_128;
              }
            }
            if (uStack_318 < uStack_310) {
              FUN_10a0e2bb0(uStack_318,&uStack_248);
              uVar24 = uStack_318 + 0xe0;
              uVar1 = uStack_320;
            }
            else {
              lVar26 = uStack_318 - uStack_320;
              uVar24 = (lVar26 >> 5) * 0x6db6db6db6db6db7 + 1;
              if (0x124924924924924 < uVar24) {
                FUN_10a0e2c68();
                goto LAB_10a0b1e28;
              }
              lVar23 = (long)(uStack_310 - uStack_320) >> 5;
              uVar25 = lVar23 * -0x2492492492492492;
              if (uVar25 < uVar24 || uVar25 - uVar24 == 0) {
                uVar25 = uVar24;
              }
              if (0x92492492492491 < (ulong)(lVar23 * 0x6db6db6db6db6db7)) {
                uVar25 = 0x124924924924924;
              }
              if (uVar25 == 0) {
                lVar23 = 0;
              }
              else {
                if (0x124924924924924 < uVar25) {
                  func_0x000109ffded8();
                  goto LAB_10a0b1e28;
                }
                lVar23 = uVar25 * 0xe0;
                __Znwm();
              }
              lVar26 = lVar23 + lVar26;
              FUN_10a0e2bb0(lVar26,&uStack_248);
              uVar6 = uStack_318;
              uVar28 = uStack_320;
              uVar1 = lVar26 + (uStack_320 - uStack_318);
              uVar17 = uVar1;
              uVar24 = uStack_320;
              if (uStack_318 != uStack_320) {
                do {
                  FUN_10a0e2bb0(uVar17,uVar24);
                  uVar24 = uVar24 + 0xe0;
                  uVar17 = uVar17 + 0xe0;
                } while (uVar24 != uVar6);
                do {
                  func_0x00010a0cefc4(uVar28);
                  uVar28 = uVar28 + 0xe0;
                } while (uVar28 != uVar6);
              }
              uVar24 = lVar26 + 0xe0;
              uStack_310 = lVar23 + uVar25 * 0xe0;
              if (uStack_320 != 0) {
                uVar25 = uStack_320;
                uStack_320 = uVar1;
                uStack_318 = uVar24;
                __ZdlPv(uVar25);
                uVar1 = uStack_320;
              }
            }
            uStack_320 = uVar1;
            uStack_318 = uVar24;
            func_0x00010a0cefc4(&uStack_248);
            func_0x00010937c698(&plStack_d8);
          }
        }
      }
      func_0x000107c2b054(&uStack_248,&DAT_10f68f148);
      lStack_98 = 0;
      lStack_90 = 0;
      lStack_88 = 0;
      FUN_10a0cdaf8(&uStack_350,lVar27,ppcVar9,&uStack_248,0,&lStack_98);
      if (lStack_238 < 0) {
        __ZdlPv(uStack_248);
      }
      FUN_10a0b3de4(&puStack_290,ppcVar9);
      FUN_10a0b4a84(&uStack_308,ppcVar9);
      if (cVar4 != '\0') {
        uStack_248 = 0;
        uStack_240 = 0;
        lStack_238 = 0;
        uStack_230 = 0x8000000000000000;
        ppcVar10 = ppcVar9;
        FUN_10a0a87b8(ppcVar9,&DAT_10f6372be,&uStack_248);
        if ((int)ppcVar10 != 0) {
          func_0x00010937c560(&uStack_248);
          FUN_10a0c32e4(&lStack_98);
          if (lStack_250 < 0) {
            __ZdlPv(lStack_260);
          }
          lStack_258 = lStack_90;
          lStack_260 = lStack_98;
          lStack_250 = lStack_88;
        }
        uStack_248 = 0;
        uStack_240 = 0;
        lStack_238 = 0;
        uStack_230 = 0x8000000000000000;
        FUN_10a0a87b8(ppcVar9,&DAT_10f6372cc,&uStack_248);
        if ((int)ppcVar9 != 0) {
          func_0x00010937c560(&uStack_248);
          FUN_10a0c32e4(&lStack_98);
          if (lStack_268 < 0) {
            __ZdlPv(lStack_278);
          }
          lStack_270 = lStack_90;
          lStack_278 = lStack_98;
          lStack_268 = lStack_88;
        }
      }
      lVar27 = *(long *)param_2[2];
      uVar24 = *(ulong *)(lVar27 + 0x20);
      if (uVar24 < *(ulong *)(lVar27 + 0x28)) {
        FUN_10a0e2c7c(uVar24,&uStack_350);
        lVar26 = uVar24 + 0x108;
      }
      else {
        lVar26 = uVar24 - *(long *)(lVar27 + 0x18);
        uVar24 = (lVar26 >> 3) * 0xf83e0f83e0f83e1 + 1;
        if (0xf83e0f83e0f83e < uVar24) {
          FUN_10a0e2d6c();
LAB_10a0b1e28:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a0b1e2c);
          (*pcVar7)();
        }
        lVar23 = (long)(*(ulong *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x18)) >> 3;
        uVar25 = lVar23 * 0x1f07c1f07c1f07c2;
        if (uVar25 < uVar24 || uVar25 - uVar24 == 0) {
          uVar25 = uVar24;
        }
        if (0x7c1f07c1f07c1e < (ulong)(lVar23 * 0xf83e0f83e0f83e1)) {
          uVar25 = 0xf83e0f83e0f83e;
        }
        if (uVar25 == 0) {
          lVar23 = 0;
        }
        else {
          if (0xf83e0f83e0f83e < uVar25) {
            func_0x000109ffded8();
            goto LAB_10a0b1e28;
          }
          lVar23 = uVar25 * 0x108;
          __Znwm();
        }
        lVar26 = lVar23 + lVar26;
        FUN_10a0e2c7c(lVar26,&uStack_350);
        lVar30 = *(long *)(lVar27 + 0x18);
        lVar3 = *(long *)(lVar27 + 0x20);
        lVar2 = lVar26 + (lVar30 - lVar3);
        lVar18 = lVar2;
        lVar29 = lVar30;
        if (lVar3 != lVar30) {
          do {
            FUN_10a0e2c7c(lVar18,lVar29);
            lVar29 = lVar29 + 0x108;
            lVar18 = lVar18 + 0x108;
          } while (lVar29 != lVar3);
          do {
            func_0x00010a0d40a0(lVar30);
            lVar30 = lVar30 + 0x108;
          } while (lVar30 != lVar3);
          lVar30 = *(long *)(lVar27 + 0x18);
        }
        lVar26 = lVar26 + 0x108;
        *(long *)(lVar27 + 0x18) = lVar2;
        *(long *)(lVar27 + 0x20) = lVar26;
        *(ulong *)(lVar27 + 0x28) = lVar23 + uVar25 * 0x108;
        if (lVar30 != 0) {
          __ZdlPv(lVar30);
        }
      }
      *(long *)(lVar27 + 0x20) = lVar26;
      func_0x00010a0d40a0(&uStack_350);
      func_0x00010937c698(&pcStack_390);
      ppcVar9 = &pcStack_390;
      func_0x00010937c708(ppcVar9,&pcStack_3b0);
    } while ((int)ppcVar9 == 0);
  }
  return 1;
}



/* Entry: 10a0b1f58; end: 10a0b25ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b2188) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2114) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2124) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2284) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2170) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2208) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2218) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2274) */

undefined8 FUN_10a0b1f58(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  long *plVar7;
  char **ppcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  char *pcStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char acStack_1d8 [32];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
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
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  acStack_1d8[0] = '\0';
  acStack_1d8[1] = '\0';
  acStack_1d8[2] = '\0';
  acStack_1d8[3] = '\0';
  acStack_1d8[4] = '\0';
  acStack_1d8[5] = '\0';
  acStack_1d8[6] = '\0';
  acStack_1d8[7] = '\0';
  acStack_1d8[8] = '\0';
  acStack_1d8[9] = '\0';
  acStack_1d8[10] = '\0';
  acStack_1d8[0xb] = '\0';
  acStack_1d8[0xc] = '\0';
  acStack_1d8[0xd] = '\0';
  acStack_1d8[0xe] = '\0';
  acStack_1d8[0xf] = '\0';
  acStack_1d8[0x10] = '\0';
  acStack_1d8[0x11] = '\0';
  acStack_1d8[0x12] = '\0';
  acStack_1d8[0x13] = '\0';
  acStack_1d8[0x14] = '\0';
  acStack_1d8[0x15] = '\0';
  acStack_1d8[0x16] = '\0';
  acStack_1d8[0x17] = '\0';
  acStack_1d8[0x18] = '\0';
  acStack_1d8[0x19] = '\0';
  acStack_1d8[0x1a] = '\0';
  acStack_1d8[0x1b] = '\0';
  acStack_1d8[0x1c] = '\0';
  acStack_1d8[0x1d] = '\0';
  acStack_1d8[0x1e] = '\0';
  acStack_1d8[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&UNK_10f414fb3,acStack_1d8);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar5 = acStack_1d8;
  func_0x00010937c560();
  if (*pcVar5 != '\x02') {
    return 1;
  }
  pcVar5 = acStack_1d8;
  func_0x00010937c560();
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0x8000000000000000;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uStack_1e0 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_1e8 = **(undefined8 **)(pcVar5 + 8);
      lStack_210 = 0;
      uStack_200 = 0x8000000000000000;
      uStack_208 = *(undefined8 *)(*(long *)(pcVar5 + 8) + 8);
      goto LAB_10a0b2048;
    }
    if (cVar3 == '\x01') {
      uStack_1f0 = **(undefined8 **)(pcVar5 + 8);
      uStack_208 = 0;
      uStack_200 = 0x8000000000000000;
      lStack_210 = *(long *)(pcVar5 + 8) + 8;
      goto LAB_10a0b2048;
    }
    uStack_1e0 = 0;
  }
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 1;
LAB_10a0b2048:
  ppcVar6 = &pcStack_1f8;
  pcStack_218 = pcVar5;
  pcStack_1f8 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_218);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_1f8;
      func_0x00010937c560();
      if (*(char *)ppcVar6 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a639,0x28);
          return 0;
        }
        return 0;
      }
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      lStack_190 = 0;
      lStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_110 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_1a0 = 0xffffffffffffffff;
      uVar15 = *(undefined8 *)*param_2;
      cVar3 = *(char *)(param_2[1] + 0x12);
      puStack_128 = &uStack_120;
      puStack_108 = &uStack_100;
      func_0x000107c2b054(&uStack_c0,&DAT_10f68f148);
      func_0x000107c2b054(&lStack_80,&UNK_10f63a662);
      FUN_10a0cdaf8(&uStack_1b8,uVar15,ppcVar6,&uStack_c0,0,&lStack_80);
      lStack_80 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c2b054(&uStack_c0,&UNK_10f415456);
      func_0x000107c2b054(&uStack_98,&UNK_10f63a662);
      plVar7 = &lStack_80;
      func_0x00010a0e18d4(plVar7,ppcVar6,&uStack_c0);
      if (((ulong)plVar7 & 1) != 0) {
        if (lStack_198 != 0) {
          lStack_190 = lStack_198;
          __ZdlPv();
        }
        lStack_190 = lStack_78;
        lStack_198 = lStack_80;
        uStack_188 = uStack_70;
        lStack_78 = 0;
        uStack_70 = 0;
        lStack_80 = 0;
        uStack_9c = 0xffffffff;
        func_0x000107c2b054(&uStack_c0,&UNK_10f638bb4);
        func_0x000107c2b054(&uStack_98,&UNK_10f63a662);
        FUN_10a0deaa0(&uStack_9c,uVar15,ppcVar6,&uStack_c0,0,&uStack_98);
        uStack_1a0._4_4_ = uStack_9c;
        uStack_a0 = 0xffffffff;
        func_0x000107c2b054(&uStack_c0,&UNK_10f41545d);
        func_0x000107c2b054(&uStack_98,&UNK_10f63a662);
        FUN_10a0deaa0(&uStack_a0,uVar15,ppcVar6,&uStack_c0,1,&uStack_98);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uStack_a0);
        FUN_10a0b3de4(&puStack_108,ppcVar6);
        FUN_10a0b4a84(&uStack_180,ppcVar6);
        if (cVar3 != '\0') {
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0x8000000000000000;
          ppcVar8 = ppcVar6;
          FUN_10a0a87b8(ppcVar6,&DAT_10f6372be,&uStack_c0);
          if ((int)ppcVar8 != 0) {
            func_0x00010937c560(&uStack_c0);
            FUN_10a0c32e4(&uStack_98);
            if (lStack_c8 < 0) {
              __ZdlPv(uStack_d8);
            }
            uStack_d0 = uStack_90;
            uStack_d8 = uStack_98;
            lStack_c8 = CONCAT17(uStack_81,uStack_88);
          }
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0x8000000000000000;
          FUN_10a0a87b8(ppcVar6,&DAT_10f6372cc,&uStack_c0);
          if ((int)ppcVar6 != 0) {
            func_0x00010937c560(&uStack_c0);
            FUN_10a0c32e4(&uStack_98);
            if (lStack_e0 < 0) {
              __ZdlPv(uStack_f0);
            }
            uStack_e8 = uStack_90;
            uStack_f0 = uStack_98;
            lStack_e0 = CONCAT17(uStack_81,uStack_88);
          }
        }
      }
      if (lStack_80 != 0) {
        lStack_78 = lStack_80;
        __ZdlPv();
      }
      if (((ulong)plVar7 & 1) == 0) {
        func_0x00010a0d3d0c(&uStack_1b8);
        return 0;
      }
      lVar14 = *(long *)param_2[2];
      uVar11 = *(ulong *)(lVar14 + 0xe0);
      if (uVar11 < *(ulong *)(lVar14 + 0xe8)) {
        FUN_10a0e2d80(uVar11,&uStack_1b8);
        lVar13 = uVar11 + 0xf8;
      }
      else {
        lVar13 = uVar11 - *(long *)(lVar14 + 0xd8);
        uVar11 = (lVar13 >> 3) * -0x1084210842108421 + 1;
        if (0x108421084210842 < uVar11) {
          FUN_10a0e2e54();
LAB_10a0b2544:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0b2548);
          (*pcVar4)();
        }
        lVar10 = (long)(*(ulong *)(lVar14 + 0xe8) - *(long *)(lVar14 + 0xd8)) >> 3;
        uVar12 = lVar10 * -0x2108421084210842;
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        if (0x84210842108420 < (ulong)(lVar10 * -0x1084210842108421)) {
          uVar12 = 0x108421084210842;
        }
        if (uVar12 == 0) {
          lVar10 = 0;
        }
        else {
          if (0x108421084210842 < uVar12) {
            func_0x000109ffded8();
            goto LAB_10a0b2544;
          }
          lVar10 = uVar12 * 0xf8;
          __Znwm();
        }
        lVar13 = lVar10 + lVar13;
        FUN_10a0e2d80(lVar13,&uStack_1b8);
        lVar16 = *(long *)(lVar14 + 0xd8);
        lVar2 = *(long *)(lVar14 + 0xe0);
        lVar1 = lVar13 + (lVar16 - lVar2);
        lVar9 = lVar1;
        lVar17 = lVar16;
        if (lVar2 != lVar16) {
          do {
            FUN_10a0e2d80(lVar9,lVar17);
            lVar17 = lVar17 + 0xf8;
            lVar9 = lVar9 + 0xf8;
          } while (lVar17 != lVar2);
          do {
            func_0x00010a0d3d0c(lVar16);
            lVar16 = lVar16 + 0xf8;
          } while (lVar16 != lVar2);
          lVar16 = *(long *)(lVar14 + 0xd8);
        }
        lVar13 = lVar13 + 0xf8;
        *(long *)(lVar14 + 0xd8) = lVar1;
        *(long *)(lVar14 + 0xe0) = lVar13;
        *(ulong *)(lVar14 + 0xe8) = lVar10 + uVar12 * 0xf8;
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
      }
      *(long *)(lVar14 + 0xe0) = lVar13;
      func_0x00010a0d3d0c(&uStack_1b8);
      func_0x00010937c698(&pcStack_1f8);
      ppcVar6 = &pcStack_1f8;
      func_0x00010937c708(ppcVar6,&pcStack_218);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}



/* Entry: 10a0b2600; end: 10a0b2ccb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b295c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2848) */
/* WARNING: Removing unreachable block (ram,0x00010a0b27cc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b28f0) */
/* WARNING: Removing unreachable block (ram,0x00010a0b27dc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b29b8) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2838) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2900) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2894) */
/* WARNING: Removing unreachable block (ram,0x00010a0b28a4) */
/* WARNING: Removing unreachable block (ram,0x00010a0b294c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b29a8) */

undefined8 FUN_10a0b2600(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  char *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char acStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
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
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  acStack_1c8[0] = '\0';
  acStack_1c8[1] = '\0';
  acStack_1c8[2] = '\0';
  acStack_1c8[3] = '\0';
  acStack_1c8[4] = '\0';
  acStack_1c8[5] = '\0';
  acStack_1c8[6] = '\0';
  acStack_1c8[7] = '\0';
  acStack_1c8[8] = '\0';
  acStack_1c8[9] = '\0';
  acStack_1c8[10] = '\0';
  acStack_1c8[0xb] = '\0';
  acStack_1c8[0xc] = '\0';
  acStack_1c8[0xd] = '\0';
  acStack_1c8[0xe] = '\0';
  acStack_1c8[0xf] = '\0';
  acStack_1c8[0x10] = '\0';
  acStack_1c8[0x11] = '\0';
  acStack_1c8[0x12] = '\0';
  acStack_1c8[0x13] = '\0';
  acStack_1c8[0x14] = '\0';
  acStack_1c8[0x15] = '\0';
  acStack_1c8[0x16] = '\0';
  acStack_1c8[0x17] = '\0';
  acStack_1c8[0x18] = '\0';
  acStack_1c8[0x19] = '\0';
  acStack_1c8[0x1a] = '\0';
  acStack_1c8[0x1b] = '\0';
  acStack_1c8[0x1c] = '\0';
  acStack_1c8[0x1d] = '\0';
  acStack_1c8[0x1e] = '\0';
  acStack_1c8[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&UNK_10f414faa,acStack_1c8);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar5 = acStack_1c8;
  func_0x00010937c560();
  if (*pcVar5 != '\x02') {
    return 1;
  }
  pcVar5 = acStack_1c8;
  func_0x00010937c560();
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0x8000000000000000;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uStack_1d0 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_1d8 = **(undefined8 **)(pcVar5 + 8);
      lStack_200 = 0;
      uStack_1f0 = 0x8000000000000000;
      uStack_1f8 = *(undefined8 *)(*(long *)(pcVar5 + 8) + 8);
      goto LAB_10a0b26f0;
    }
    if (cVar3 == '\x01') {
      uStack_1e0 = **(undefined8 **)(pcVar5 + 8);
      uStack_1f8 = 0;
      uStack_1f0 = 0x8000000000000000;
      lStack_200 = *(long *)(pcVar5 + 8) + 8;
      goto LAB_10a0b26f0;
    }
    uStack_1d0 = 0;
  }
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 1;
LAB_10a0b26f0:
  ppcVar6 = &pcStack_1e8;
  pcStack_208 = pcVar5;
  pcStack_1e8 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_208);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_1e8;
      func_0x00010937c560();
      if (*(char *)ppcVar6 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a667,0x2b);
          return 0;
        }
        return 0;
      }
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_188 = 0x290100002901;
      uStack_190 = 0xffffffffffffffff;
      uStack_180 = 0x2901;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_128 = 0;
      uStack_108 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_d0 = 0;
      lStack_d8 = 0;
      lStack_c0 = 0;
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uVar16 = *(undefined8 *)*param_2;
      cVar3 = *(char *)(param_2[1] + 0x12);
      puStack_120 = &uStack_118;
      puStack_100 = &uStack_f8;
      func_0x000107c2b054(&uStack_b8,&DAT_10f68f148);
      uStack_80 = 0;
      uStack_78 = 0;
      lStack_70 = 0;
      FUN_10a0cdaf8(&uStack_1a8,uVar16,ppcVar6,&uStack_b8,0,&uStack_80);
      uStack_88 = 0xffffffff;
      uStack_84 = 0xffffffff;
      uStack_90 = 0x2901;
      uStack_8c = 0x2901;
      uStack_94 = 0x2901;
      func_0x000107c2b054(&uStack_b8,&UNK_10f638bce);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_84,uVar16,ppcVar6,&uStack_b8,0,&uStack_80);
      func_0x000107c2b054(&uStack_b8,&UNK_10f638bc4);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_88,uVar16,ppcVar6,&uStack_b8,0,&uStack_80);
      func_0x000107c2b054(&uStack_b8,&UNK_10f638bde);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_8c,uVar16,ppcVar6,&uStack_b8,0,&uStack_80);
      func_0x000107c2b054(&uStack_b8,&UNK_10f638be4);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_90,uVar16,ppcVar6,&uStack_b8,0,&uStack_80);
      func_0x000107c2b054(&uStack_b8,&UNK_10f638bd8);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_94,uVar16,ppcVar6,&uStack_b8,0,&uStack_80);
      uStack_190 = CONCAT44(uStack_88,uStack_84);
      uStack_188 = CONCAT44(uStack_90,uStack_8c);
      uStack_180 = uStack_94;
      FUN_10a0b3de4(&puStack_100,ppcVar6);
      FUN_10a0b4a84(&uStack_178,ppcVar6);
      if (cVar3 != '\0') {
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0x8000000000000000;
        ppcVar7 = ppcVar6;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372be,&uStack_b8);
        if ((int)ppcVar7 != 0) {
          func_0x00010937c560(&uStack_b8);
          FUN_10a0c32e4(&uStack_80);
          if (lStack_c0 < 0) {
            __ZdlPv(uStack_d0);
          }
          uStack_c8 = uStack_78;
          uStack_d0 = uStack_80;
          lStack_c0 = lStack_70;
        }
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0x8000000000000000;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372cc,&uStack_b8);
        if ((int)ppcVar6 != 0) {
          func_0x00010937c560(&uStack_b8);
          FUN_10a0c32e4(&uStack_80);
          if (lStack_d8 < 0) {
            __ZdlPv(uStack_e8);
          }
          uStack_e0 = uStack_78;
          uStack_e8 = uStack_80;
          lStack_d8 = lStack_70;
        }
      }
      lVar15 = *(long *)param_2[2];
      uVar10 = *(ulong *)(lVar15 + 0xf8);
      if (uVar10 < *(ulong *)(lVar15 + 0x100)) {
        FUN_10a0e2e68(uVar10,&uStack_1a8);
        lVar12 = uVar10 + 0xf0;
      }
      else {
        lVar12 = uVar10 - *(long *)(lVar15 + 0xf0);
        uVar10 = (lVar12 >> 4) * -0x1111111111111111 + 1;
        if (0x111111111111111 < uVar10) {
          FUN_10a0e2f28();
LAB_10a0b2c5c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0b2c60);
          (*pcVar4)();
        }
        lVar9 = (long)(*(ulong *)(lVar15 + 0x100) - *(long *)(lVar15 + 0xf0)) >> 4;
        uVar11 = lVar9 * -0x2222222222222222;
        if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
          uVar11 = uVar10;
        }
        if (0x88888888888887 < (ulong)(lVar9 * -0x1111111111111111)) {
          uVar11 = 0x111111111111111;
        }
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        else {
          if (0x111111111111111 < uVar11) {
            func_0x000109ffded8();
            goto LAB_10a0b2c5c;
          }
          lVar9 = uVar11 * 0xf0;
          __Znwm();
        }
        lVar12 = lVar9 + lVar12;
        FUN_10a0e2e68(lVar12,&uStack_1a8);
        lVar14 = *(long *)(lVar15 + 0xf0);
        lVar2 = *(long *)(lVar15 + 0xf8);
        lVar1 = lVar12 + (lVar14 - lVar2);
        lVar8 = lVar1;
        lVar13 = lVar14;
        if (lVar2 != lVar14) {
          do {
            FUN_10a0e2e68(lVar8,lVar13);
            lVar13 = lVar13 + 0xf0;
            lVar8 = lVar8 + 0xf0;
          } while (lVar13 != lVar2);
          do {
            func_0x00010a0d3cac(lVar14);
            lVar14 = lVar14 + 0xf0;
          } while (lVar14 != lVar2);
          lVar14 = *(long *)(lVar15 + 0xf0);
        }
        lVar12 = lVar12 + 0xf0;
        *(long *)(lVar15 + 0xf0) = lVar1;
        *(long *)(lVar15 + 0xf8) = lVar12;
        *(ulong *)(lVar15 + 0x100) = lVar9 + uVar11 * 0xf0;
        if (lVar14 != 0) {
          __ZdlPv(lVar14);
        }
      }
      *(long *)(lVar15 + 0xf8) = lVar12;
      func_0x00010a0d3cac(&uStack_1a8);
      func_0x00010937c698(&pcStack_1e8);
      ppcVar6 = &pcStack_1e8;
      func_0x00010937c708(ppcVar6,&pcStack_208);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}



/* Entry: 10a0b2ccc; end: 10a0b3de3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b3c10) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3090) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3598) */
/* WARNING: Removing unreachable block (ram,0x00010a0b2f60) */
/* WARNING: Removing unreachable block (ram,0x00010a0b32fc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3364) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3028) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3924) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3c14) */
/* WARNING: Removing unreachable block (ram,0x00010a0b33cc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b30f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3434) */
/* WARNING: Removing unreachable block (ram,0x00010a0b3154) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10a0b2ccc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  char **ppcVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *pcStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  char *pcStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  char acStack_4b0 [32];
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined8 *******pppppppuStack_3b0;
  ulong uStack_3a8;
  long lStack_3a0;
  undefined8 *******pppppppuStack_398;
  ulong uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
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
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  char cStack_1f9;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  char cStack_1e1;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  char cStack_171;
  undefined **appuStack_160 [19];
  undefined8 *******pppppppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined7 uStack_80;
  byte bStack_79;
  undefined8 auStack_78 [3];
  
  acStack_4b0[0] = '\0';
  acStack_4b0[1] = '\0';
  acStack_4b0[2] = '\0';
  acStack_4b0[3] = '\0';
  acStack_4b0[4] = '\0';
  acStack_4b0[5] = '\0';
  acStack_4b0[6] = '\0';
  acStack_4b0[7] = '\0';
  acStack_4b0[8] = '\0';
  acStack_4b0[9] = '\0';
  acStack_4b0[10] = '\0';
  acStack_4b0[0xb] = '\0';
  acStack_4b0[0xc] = '\0';
  acStack_4b0[0xd] = '\0';
  acStack_4b0[0xe] = '\0';
  acStack_4b0[0xf] = '\0';
  acStack_4b0[0x10] = '\0';
  acStack_4b0[0x11] = '\0';
  acStack_4b0[0x12] = '\0';
  acStack_4b0[0x13] = '\0';
  acStack_4b0[0x14] = '\0';
  acStack_4b0[0x15] = '\0';
  acStack_4b0[0x16] = '\0';
  acStack_4b0[0x17] = '\0';
  acStack_4b0[0x18] = '\0';
  acStack_4b0[0x19] = '\0';
  acStack_4b0[0x1a] = '\0';
  acStack_4b0[0x1b] = '\0';
  acStack_4b0[0x1c] = '\0';
  acStack_4b0[0x1d] = '\0';
  acStack_4b0[0x1e] = '\0';
  acStack_4b0[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&DAT_10f6372b6,acStack_4b0);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar5 = acStack_4b0;
  func_0x00010937c560();
  if (*pcVar5 != '\x02') {
    return 1;
  }
  pcVar5 = acStack_4b0;
  func_0x00010937c560();
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0x8000000000000000;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uStack_4b8 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_4c0 = **(undefined8 **)(pcVar5 + 8);
      lStack_4e8 = 0;
      uStack_4d8 = 0x8000000000000000;
      uStack_4e0 = *(undefined8 *)(*(long *)(pcVar5 + 8) + 8);
      goto LAB_10a0b2dbc;
    }
    if (cVar3 == '\x01') {
      uStack_4c8 = **(undefined8 **)(pcVar5 + 8);
      uStack_4e0 = 0;
      uStack_4d8 = 0x8000000000000000;
      lStack_4e8 = *(long *)(pcVar5 + 8) + 8;
      goto LAB_10a0b2dbc;
    }
    uStack_4b8 = 0;
  }
  lStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 1;
LAB_10a0b2dbc:
  ppcVar6 = &pcStack_4d0;
  pcStack_4f0 = pcVar5;
  pcStack_4d0 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_4f0);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_4d0;
      func_0x00010937c560();
      if (*(char *)ppcVar6 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a693,0x2a);
          return 0;
        }
        return 0;
      }
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_420 = 0;
      uStack_428 = 0;
      uStack_410 = 0;
      uStack_418 = 0;
      uStack_400 = 0;
      uStack_408 = 0;
      uStack_3f0 = 0;
      uStack_3f8 = 0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      uStack_3d8 = 0;
      uStack_3b8 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_3a8 = 0;
      pppppppuStack_3b0 = (undefined8 *******)0x0;
      pppppppuStack_398 = (undefined8 *******)0x0;
      lStack_3a0 = 0;
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_330 = 0;
      uStack_338 = 0;
      uStack_320 = 0;
      uStack_328 = 0;
      uStack_310 = 0;
      uStack_318 = 0;
      uStack_300 = 0;
      uStack_308 = 0;
      uStack_2f8 = 0;
      uStack_2d8 = 0;
      pppppppuStack_2b8 = (undefined8 *******)0x0;
      lStack_2c0 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2c8 = 0;
      pppppppuStack_2d0 = (undefined8 *******)0x0;
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_280 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      uStack_238 = 0;
      uStack_218 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      cStack_1f9 = '\0';
      cStack_1e1 = '\0';
      uStack_1f0 = 0;
      lVar16 = *(long *)*param_2;
      cVar3 = *(char *)(param_2[1] + 0x12);
      puStack_440 = &uStack_438;
      puStack_3d0 = &uStack_3c8;
      puStack_360 = &uStack_358;
      puStack_2f0 = &uStack_2e8;
      puStack_2a0 = &uStack_298;
      puStack_230 = &uStack_228;
      func_0x000107c2b054(&ppuStack_1e0,&DAT_10f6389e8);
      func_0x000107c2b054(&pppppppuStack_c8,&DAT_10f63a6be);
      puVar7 = &uStack_490;
      FUN_10a0cdaf8(puVar7,lVar16,ppcVar6,&ppuStack_1e0,1,&pppppppuStack_c8);
      if ((long)ppuStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
      puVar7 = &uStack_490;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                (puVar7,&UNK_10f638bea);
      if ((int)puVar7 != 0) {
        puVar7 = &uStack_490;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar7,&UNK_10f415471);
        if ((int)puVar7 == 0) {
          pppppppuStack_c8 = (undefined8 *******)0x0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0x8000000000000000;
          ppcVar8 = ppcVar6;
          FUN_10a0a87b8(ppcVar6,&UNK_10f415471,&pppppppuStack_c8);
          if (((ulong)ppcVar8 & 1) == 0) {
            if (lVar16 == 0) goto LAB_10a0b3c90;
            FUN_109febc44(&ppuStack_1e0);
            pppuVar11 = &ppuStack_1d0;
            FUN_10a002568(pppuVar11,&UNK_10f63a714,0x29);
            __ZNKSt3__18ios_base6getlocEv
                      (&pppppppuStack_90,(undefined *)((long)pppuVar11 + (long)(*pppuVar11)[-3]));
            pppppppuVar12 = &pppppppuStack_90;
            __ZNKSt3__16locale9use_facetERNS0_2idE
                      (pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (*(code *)(*pppppppuVar12)[7])();
            __ZNSt3__16localeD1Ev(&pppppppuStack_90);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar11,pppppppuVar12);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar11);
            func_0x00010a002480(&pppppppuStack_90,&ppuStack_1c8,auStack_78);
            if (-1 < (char)bStack_79) {
              uStack_88 = (ulong)bStack_79;
              pppppppuStack_90 = &pppppppuStack_90;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (lVar16,pppppppuStack_90,uStack_88);
          }
          else {
            pppppppuVar12 = &pppppppuStack_c8;
            func_0x00010937c560();
            if (*(char *)pppppppuVar12 == '\x01') {
              auStack_78[0] = 0;
              func_0x000107c2b054(&ppuStack_1e0,&UNK_10f638c14);
              func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7a4);
              puVar7 = auStack_78;
              FUN_10a0ce9f0(puVar7,lVar16,pppppppuVar12,&ppuStack_1e0,1,&pppppppuStack_90);
              if ((long)ppuStack_1d0 < 0) {
                __ZdlPv(ppuStack_1e0);
              }
              if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
              uStack_98 = 0;
              func_0x000107c2b054(&ppuStack_1e0,&UNK_10f638bf8);
              func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7b7);
              puVar7 = &uStack_98;
              FUN_10a0ce9f0(puVar7,lVar16,pppppppuVar12,&ppuStack_1e0,1,&pppppppuStack_90);
              if ((long)ppuStack_1d0 < 0) {
                __ZdlPv(ppuStack_1e0);
              }
              if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
              uStack_a0 = 0;
              func_0x000107c2b054(&ppuStack_1e0,&DAT_10f638c08);
              func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7b7);
              FUN_10a0ce9f0(&uStack_a0,lVar16,pppppppuVar12,&ppuStack_1e0,0,&pppppppuStack_90);
              if ((long)ppuStack_1d0 < 0) {
                __ZdlPv(ppuStack_1e0);
              }
              uStack_a8 = 0;
              func_0x000107c2b054(&ppuStack_1e0,&UNK_10f41547d);
              func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7b7);
              FUN_10a0ce9f0(&uStack_a8,lVar16,pppppppuVar12,&ppuStack_1e0,0,&pppppppuStack_90);
              if ((long)ppuStack_1d0 < 0) {
                __ZdlPv(ppuStack_1e0);
              }
              uStack_460 = uStack_a0;
              uStack_458 = auStack_78[0];
              uStack_450 = uStack_a8;
              uStack_448 = uStack_98;
              FUN_10a0b3de4(&puStack_440,pppppppuVar12);
              FUN_10a0b4a84(&uStack_428,pppppppuVar12);
              if (cVar3 != '\0') {
                uStack_1d8 = 0;
                ppuStack_1e0 = (undefined **)0x0;
                ppuStack_1d0 = (undefined **)0x0;
                ppuStack_1c8 = (undefined **)0x8000000000000000;
                pppppppuVar9 = pppppppuVar12;
                FUN_10a0a87b8(pppppppuVar12,&DAT_10f6372be,&ppuStack_1e0);
                if ((int)pppppppuVar9 != 0) {
                  func_0x00010937c560(&ppuStack_1e0);
                  FUN_10a0c32e4(&pppppppuStack_90);
                  if (lStack_388 < 0) {
                    __ZdlPv(pppppppuStack_398);
                  }
                  uStack_390 = uStack_88;
                  pppppppuStack_398 = pppppppuStack_90;
                  lStack_388 = CONCAT17(bStack_79,uStack_80);
                }
                uStack_1d8 = 0;
                ppuStack_1e0 = (undefined **)0x0;
                ppuStack_1d0 = (undefined **)0x0;
                ppuStack_1c8 = (undefined **)0x8000000000000000;
                FUN_10a0a87b8(pppppppuVar12,&DAT_10f6372cc,&ppuStack_1e0);
                if ((int)pppppppuVar12 != 0) {
                  func_0x00010937c560(&ppuStack_1e0);
                  FUN_10a0c32e4(&pppppppuStack_90);
                  if (lStack_3a0 < 0) {
                    __ZdlPv(pppppppuStack_3b0);
                  }
                  uStack_3a8 = uStack_88;
                  pppppppuStack_3b0 = pppppppuStack_90;
                  lStack_3a0 = CONCAT17(bStack_79,uStack_80);
                }
              }
              goto LAB_10a0b355c;
            }
            if (lVar16 == 0) goto LAB_10a0b3c90;
            FUN_109febc44(&ppuStack_1e0);
            pppuVar11 = &ppuStack_1d0;
            FUN_10a002568(pppuVar11,&UNK_10f63a73e,0x23);
            __ZNKSt3__18ios_base6getlocEv
                      (&pppppppuStack_90,(undefined *)((long)pppuVar11 + (long)(*pppuVar11)[-3]));
            pppppppuVar12 = &pppppppuStack_90;
            __ZNKSt3__16locale9use_facetERNS0_2idE
                      (pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (*(code *)(*pppppppuVar12)[7])();
            __ZNSt3__16localeD1Ev(&pppppppuStack_90);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar11,pppppppuVar12);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar11);
            func_0x00010a002480(&pppppppuStack_90,&ppuStack_1c8,auStack_78);
            if (-1 < (char)bStack_79) {
              uStack_88 = (ulong)bStack_79;
              pppppppuStack_90 = &pppppppuStack_90;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (lVar16,pppppppuStack_90,uStack_88);
          }
        }
        else {
          if (lVar16 == 0) goto LAB_10a0b3c90;
          FUN_109febc44(&ppuStack_1e0);
          pppuVar11 = &ppuStack_1d0;
          FUN_10a002568(pppuVar11,&UNK_10f63a762,0x16);
          FUN_10a002568();
          FUN_10a002568();
          __ZNKSt3__18ios_base6getlocEv
                    (&pppppppuStack_c8,(undefined *)((long)pppuVar11 + (long)(*pppuVar11)[-3]));
          pppppppuVar12 = &pppppppuStack_c8;
          __ZNKSt3__16locale9use_facetERNS0_2idE
                    (pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (*(code *)(*pppppppuVar12)[7])();
          __ZNSt3__16localeD1Ev(&pppppppuStack_c8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar11,pppppppuVar12);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar11);
          func_0x00010a002480(&pppppppuStack_c8,&ppuStack_1c8,&pppppppuStack_90);
          uVar14 = uStack_c0;
          pppppppuVar12 = pppppppuStack_c8;
          if (-1 < (long)uStack_b8) {
            uVar14 = uStack_b8 >> 0x38;
            pppppppuVar12 = &pppppppuStack_c8;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar16,pppppppuVar12,uVar14);
        }
LAB_10a0b3c18:
        ppuStack_1e0 = &PTR_SUB_1108a5a38;
        ppuStack_1d0 = &PTR_DAT_1108a5a60;
        appuStack_160[0] = &PTR_DAT_1108a5a88;
        ppuStack_1c8 = &PTR_DAT_11088d7b0;
        if (cStack_171 < '\0') {
          __ZdlPv(uStack_188);
        }
        ppuStack_1c8 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_1c0);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1e0,&PTR_PTR_1108a5aa0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_160);
LAB_10a0b3c90:
        FUN_10a0cd968(&uStack_490);
        return 0;
      }
      pppppppuStack_c8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0x8000000000000000;
      ppcVar8 = ppcVar6;
      FUN_10a0a87b8(ppcVar6,&UNK_10f638bea,&pppppppuStack_c8);
      if (((ulong)ppcVar8 & 1) == 0) {
        if (lVar16 == 0) goto LAB_10a0b3c90;
        FUN_109febc44(&ppuStack_1e0);
        pppuVar11 = &ppuStack_1d0;
        FUN_10a002568(pppuVar11,&UNK_10f63a6c5,0x29);
        __ZNKSt3__18ios_base6getlocEv
                  (&pppppppuStack_90,(undefined *)((long)pppuVar11 + (long)(*pppuVar11)[-3]));
        pppppppuVar12 = &pppppppuStack_90;
        __ZNKSt3__16locale9use_facetERNS0_2idE(pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (*(code *)(*pppppppuVar12)[7])();
        __ZNSt3__16localeD1Ev(&pppppppuStack_90);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar11,pppppppuVar12);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar11);
        func_0x00010a002480(&pppppppuStack_90,&ppuStack_1c8,auStack_78);
        if (-1 < (char)bStack_79) {
          uStack_88 = (ulong)bStack_79;
          pppppppuStack_90 = &pppppppuStack_90;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (lVar16,pppppppuStack_90,uStack_88);
        goto LAB_10a0b3c18;
      }
      pppppppuVar12 = &pppppppuStack_c8;
      func_0x00010937c560();
      if (*(char *)pppppppuVar12 != '\x01') {
        if (lVar16 == 0) goto LAB_10a0b3c90;
        FUN_109febc44(&ppuStack_1e0);
        pppuVar11 = &ppuStack_1d0;
        FUN_10a002568(pppuVar11,&UNK_10f63a6ef,0x24);
        __ZNKSt3__18ios_base6getlocEv
                  (&pppppppuStack_90,(undefined *)((long)pppuVar11 + (long)(*pppuVar11)[-3]));
        pppppppuVar12 = &pppppppuStack_90;
        __ZNKSt3__16locale9use_facetERNS0_2idE(pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (*(code *)(*pppppppuVar12)[7])();
        __ZNSt3__16localeD1Ev(&pppppppuStack_90);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar11,pppppppuVar12);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar11);
        func_0x00010a002480(&pppppppuStack_90,&ppuStack_1c8,auStack_78);
        if (-1 < (char)bStack_79) {
          uStack_88 = (ulong)bStack_79;
          pppppppuStack_90 = &pppppppuStack_90;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (lVar16,pppppppuStack_90,uStack_88);
        goto LAB_10a0b3c18;
      }
      auStack_78[0] = 0;
      func_0x000107c2b054(&ppuStack_1e0,&UNK_10f638bfe);
      func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7a4);
      puVar7 = auStack_78;
      FUN_10a0ce9f0(puVar7,lVar16,pppppppuVar12,&ppuStack_1e0,1,&pppppppuStack_90);
      if ((long)ppuStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
      uStack_98 = 0;
      func_0x000107c2b054(&ppuStack_1e0,&UNK_10f415482);
      func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7a4);
      puVar7 = &uStack_98;
      FUN_10a0ce9f0(puVar7,lVar16,pppppppuVar12,&ppuStack_1e0,1,&pppppppuStack_90);
      if ((long)ppuStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
      uStack_a0 = 0;
      func_0x000107c2b054(&ppuStack_1e0,&UNK_10f41547d);
      func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7a4);
      puVar7 = &uStack_a0;
      FUN_10a0ce9f0(puVar7,lVar16,pppppppuVar12,&ppuStack_1e0,1,&pppppppuStack_90);
      if ((long)ppuStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
      uStack_a8 = 0;
      func_0x000107c2b054(&ppuStack_1e0,&UNK_10f638bf8);
      func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a7a4);
      puVar7 = &uStack_a8;
      FUN_10a0ce9f0(puVar7,lVar16,pppppppuVar12,&ppuStack_1e0,1,&pppppppuStack_90);
      if ((long)ppuStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if (((ulong)puVar7 & 1) == 0) goto LAB_10a0b3c90;
      FUN_10a0b3de4(&puStack_360,pppppppuVar12);
      FUN_10a0b4a84(&uStack_348,pppppppuVar12);
      if (cVar3 != '\0') {
        uStack_1d8 = 0;
        ppuStack_1e0 = (undefined **)0x0;
        ppuStack_1d0 = (undefined **)0x0;
        ppuStack_1c8 = (undefined **)0x8000000000000000;
        pppppppuVar9 = pppppppuVar12;
        FUN_10a0a87b8(pppppppuVar12,&DAT_10f6372be,&ppuStack_1e0);
        if ((int)pppppppuVar9 != 0) {
          func_0x00010937c560(&ppuStack_1e0);
          FUN_10a0c32e4(&pppppppuStack_90);
          if (lStack_2a8 < 0) {
            __ZdlPv(pppppppuStack_2b8);
          }
          uStack_2b0 = uStack_88;
          pppppppuStack_2b8 = pppppppuStack_90;
          lStack_2a8 = CONCAT17(bStack_79,uStack_80);
        }
        uStack_1d8 = 0;
        ppuStack_1e0 = (undefined **)0x0;
        ppuStack_1d0 = (undefined **)0x0;
        ppuStack_1c8 = (undefined **)0x8000000000000000;
        FUN_10a0a87b8(pppppppuVar12,&DAT_10f6372cc,&ppuStack_1e0);
        if ((int)pppppppuVar12 != 0) {
          func_0x00010937c560(&ppuStack_1e0);
          FUN_10a0c32e4(&pppppppuStack_90);
          if (lStack_2c0 < 0) {
            __ZdlPv(pppppppuStack_2d0);
          }
          uStack_2c8 = uStack_88;
          pppppppuStack_2d0 = pppppppuStack_90;
          lStack_2c0 = CONCAT17(bStack_79,uStack_80);
        }
      }
      uStack_380 = auStack_78[0];
      uStack_378 = uStack_98;
      uStack_370 = uStack_a0;
      uStack_368 = uStack_a8;
LAB_10a0b355c:
      func_0x000107c2b054(&ppuStack_1e0,&DAT_10f68f148);
      pppppppuStack_c8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      FUN_10a0cdaf8(&uStack_478,lVar16,ppcVar6,&ppuStack_1e0,0,&pppppppuStack_c8);
      if ((long)ppuStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      FUN_10a0b3de4(&puStack_2a0,ppcVar6);
      FUN_10a0b4a84(&uStack_288,ppcVar6);
      if (cVar3 != '\0') {
        uStack_1d8 = 0;
        ppuStack_1e0 = (undefined **)0x0;
        ppuStack_1d0 = (undefined **)0x0;
        ppuStack_1c8 = (undefined **)0x8000000000000000;
        ppcVar8 = ppcVar6;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372be,&ppuStack_1e0);
        if ((int)ppcVar8 != 0) {
          func_0x00010937c560(&ppuStack_1e0);
          FUN_10a0c32e4(&pppppppuStack_c8);
          if (cStack_1e1 < '\0') {
            __ZdlPv(uStack_1f8);
          }
          uStack_1f0 = uStack_c0;
        }
        uStack_1d8 = 0;
        ppuStack_1e0 = (undefined **)0x0;
        ppuStack_1d0 = (undefined **)0x0;
        ppuStack_1c8 = (undefined **)0x8000000000000000;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372cc,&ppuStack_1e0);
        if ((int)ppcVar6 != 0) {
          func_0x00010937c560(&ppuStack_1e0);
          FUN_10a0c32e4(&pppppppuStack_c8);
          if (cStack_1f9 < '\0') {
            __ZdlPv(uStack_210);
          }
          uStack_208 = uStack_c0;
        }
      }
      lVar16 = *(long *)param_2[2];
      uVar14 = *(ulong *)(lVar16 + 0x110);
      if (uVar14 < *(ulong *)(lVar16 + 0x118)) {
        FUN_10a0e2f3c(uVar14,&uStack_490);
        lVar17 = uVar14 + 0x2b0;
      }
      else {
        lVar17 = uVar14 - *(long *)(lVar16 + 0x108);
        uVar14 = (lVar17 >> 4) * -0x7d05f417d05f417d + 1;
        if (0x5f417d05f417d0 < uVar14) {
          FUN_10a0e3104();
LAB_10a0b3cac:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0b3cb0);
          (*pcVar4)();
        }
        lVar13 = (long)(*(ulong *)(lVar16 + 0x118) - *(long *)(lVar16 + 0x108)) >> 4;
        uVar15 = lVar13 * 0x5f417d05f417d06;
        if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
          uVar15 = uVar14;
        }
        if (0x2fa0be82fa0be7 < (ulong)(lVar13 * -0x7d05f417d05f417d)) {
          uVar15 = 0x5f417d05f417d0;
        }
        if (uVar15 == 0) {
          lVar13 = 0;
        }
        else {
          if (0x5f417d05f417d0 < uVar15) {
            func_0x000109ffded8();
            goto LAB_10a0b3cac;
          }
          lVar13 = uVar15 * 0x2b0;
          __Znwm();
        }
        lVar17 = lVar13 + lVar17;
        FUN_10a0e2f3c(lVar17,&uStack_490);
        lVar18 = *(long *)(lVar16 + 0x108);
        lVar2 = *(long *)(lVar16 + 0x110);
        lVar1 = lVar17 + (lVar18 - lVar2);
        lVar10 = lVar1;
        lVar19 = lVar18;
        if (lVar2 != lVar18) {
          do {
            FUN_10a0e2f3c(lVar10,lVar19);
            lVar19 = lVar19 + 0x2b0;
            lVar10 = lVar10 + 0x2b0;
          } while (lVar19 != lVar2);
          do {
            FUN_10a0cd968(lVar18);
            lVar18 = lVar18 + 0x2b0;
          } while (lVar18 != lVar2);
          lVar18 = *(long *)(lVar16 + 0x108);
        }
        lVar17 = lVar17 + 0x2b0;
        *(long *)(lVar16 + 0x108) = lVar1;
        *(long *)(lVar16 + 0x110) = lVar17;
        *(ulong *)(lVar16 + 0x118) = lVar13 + uVar15 * 0x2b0;
        if (lVar18 != 0) {
          __ZdlPv(lVar18);
        }
      }
      *(long *)(lVar16 + 0x110) = lVar17;
      FUN_10a0cd968(&uStack_490);
      func_0x00010937c698(&pcStack_4d0);
      ppcVar6 = &pcStack_4d0;
      func_0x00010937c708(ppcVar6,&pcStack_4f0);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}



/* Entry: 10a0b3de4; end: 10a0b409f;  */

void FUN_10a0b3de4(long *param_1,undefined8 param_2)

{
  char **ppcVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  long **pplVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 auStack_158 [22];
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  char *pcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  char acStack_70 [32];
  
  acStack_70[0] = '\0';
  acStack_70[1] = '\0';
  acStack_70[2] = '\0';
  acStack_70[3] = '\0';
  acStack_70[4] = '\0';
  acStack_70[5] = '\0';
  acStack_70[6] = '\0';
  acStack_70[7] = '\0';
  acStack_70[8] = '\0';
  acStack_70[9] = '\0';
  acStack_70[10] = '\0';
  acStack_70[0xb] = '\0';
  acStack_70[0xc] = '\0';
  acStack_70[0xd] = '\0';
  acStack_70[0xe] = '\0';
  acStack_70[0xf] = '\0';
  acStack_70[0x10] = '\0';
  acStack_70[0x11] = '\0';
  acStack_70[0x12] = '\0';
  acStack_70[0x13] = '\0';
  acStack_70[0x14] = '\0';
  acStack_70[0x15] = '\0';
  acStack_70[0x16] = '\0';
  acStack_70[0x17] = '\0';
  acStack_70[0x18] = '\0';
  acStack_70[0x19] = '\0';
  acStack_70[0x1a] = '\0';
  acStack_70[0x1b] = '\0';
  acStack_70[0x1c] = '\0';
  acStack_70[0x1d] = '\0';
  acStack_70[0x1e] = '\0';
  acStack_70[0x1f] = -0x80;
  FUN_10a0a87b8(param_2,&DAT_10f6372be,acStack_70);
  if ((int)param_2 == 0) {
    return;
  }
  pcVar4 = acStack_70;
  func_0x00010937c560();
  if (*pcVar4 != '\x01') {
    return;
  }
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x8000000000000000;
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    uStack_90 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_98 = **(undefined8 **)(pcVar4 + 8);
      lStack_c0 = 0;
      uStack_b0 = 0x8000000000000000;
      uStack_b8 = *(undefined8 *)(*(long *)(pcVar4 + 8) + 8);
      goto LAB_10a0b3ee0;
    }
    if (cVar3 == '\x01') {
      uStack_a0 = **(undefined8 **)(pcVar4 + 8);
      uStack_b0 = 0x8000000000000000;
      uStack_b8 = 0;
      lStack_c0 = *(long *)(pcVar4 + 8) + 8;
      goto LAB_10a0b3ee0;
    }
    uStack_90 = 0;
  }
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 1;
LAB_10a0b3ee0:
  puVar10 = (undefined8 *)((ulong)auStack_158 | 4);
  pcStack_c8 = pcVar4;
  pcStack_a8 = pcVar4;
  plStack_88 = &lStack_80;
  while( true ) {
    ppcVar5 = &pcStack_a8;
    func_0x00010937c708(ppcVar5,&pcStack_c8);
    if (((ulong)ppcVar5 & 1) != 0) break;
    ppcVar5 = &pcStack_a8;
    func_0x00010937c560();
    if (*(char *)ppcVar5 == '\x01') {
      ppcVar6 = &pcStack_a8;
      func_0x0001095a27d4();
      ppcVar1 = (char **)*ppcVar6;
      if (-1 < *(char *)((long)ppcVar6 + 0x17)) {
        ppcVar1 = ppcVar6;
      }
      func_0x000107c2b054(&uStack_e0,ppcVar1);
      pplVar7 = &plStack_88;
      FUN_10a0ce79c(pplVar7,&uStack_e0,&uStack_e0);
      pplVar7 = pplVar7 + 7;
      FUN_10a0cde2c(pplVar7,ppcVar5);
      uVar8 = (uint)(char)bStack_c9;
      if (((ulong)pplVar7 & 1) == 0) {
        uVar2 = uStack_d8;
        if (-1 < (int)uVar8) {
          uVar2 = (ulong)bStack_c9;
        }
        if (uVar2 != 0) {
          auStack_158[0] = 7;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 10) = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          pplVar7 = &plStack_88;
          puStack_100 = &uStack_f8;
          FUN_10a0ce79c(pplVar7,&uStack_e0,&uStack_e0);
          FUN_10a0ce5e4(pplVar7 + 7,auStack_158);
          func_0x00010a0c9b7c(auStack_158);
          func_0x00010a0c9b2c(0);
          uVar8 = (uint)bStack_c9;
        }
      }
      if ((uVar8 >> 7 & 1) != 0) {
        __ZdlPv(uStack_e0);
      }
    }
    func_0x00010937c698(&pcStack_a8);
  }
  if (param_1 != (long *)0x0) {
    plVar9 = param_1 + 1;
    func_0x00010a0c9b2c(*plVar9);
    *param_1 = (long)plStack_88;
    *plVar9 = lStack_80;
    param_1[2] = lStack_78;
    if (lStack_78 == 0) {
      *param_1 = (long)plVar9;
    }
    else {
      *(long **)(lStack_80 + 0x10) = plVar9;
      lStack_80 = 0;
      lStack_78 = 0;
      plStack_88 = &lStack_80;
    }
  }
  func_0x00010a0c9b2c(lStack_80);
  return;
}



/* Entry: 10a0b40a0; end: 10a0b40d7;  */

ulong * FUN_10a0b40a0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  func_0x0001095a27d4();
  puVar5 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar5 = param_2;
  }
  puVar2 = puVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a0b40d8; end: 10a0b4157;  */

bool FUN_10a0b40d8(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_2;
  _strlen();
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    if (lVar2 == param_1[1]) {
      if (lVar2 == -1) {
        FUN_109ffddc8();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0b4154);
        (*pcVar1)();
      }
      param_1 = (long *)*param_1;
      goto LAB_10a0b4124;
    }
  }
  else if (lVar2 == *(char *)((long)param_1 + 0x17)) {
LAB_10a0b4124:
    _memcmp(param_1,param_2);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 10a0b4158; end: 10a0b4913;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b430c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b4260) */
/* WARNING: Removing unreachable block (ram,0x00010a0b44f0) */
/* WARNING: Removing unreachable block (ram,0x00010a0b41c8) */
/* WARNING: Removing unreachable block (ram,0x00010a0b47bc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b454c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b42b0) */
/* WARNING: Removing unreachable block (ram,0x00010a0b4368) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10a0b4158(long param_1,long param_2,ulong param_3,int param_4)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined ***pppuVar5;
  undefined8 *******pppppppuVar6;
  long *plVar7;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  char cStack_139;
  undefined **appuStack_128 [19];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  undefined7 uStack_58;
  byte bStack_51;
  
  plVar7 = (long *)(param_1 + 0x38);
  func_0x000107c2b054(&ppuStack_1a8,&DAT_10f6389e8);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plVar1 = plVar7;
  FUN_10a0cdaf8(plVar7,param_2,param_3,&ppuStack_1a8,1,&uStack_90);
  if ((long)ppuStack_198 < 0) {
    __ZdlPv(ppuStack_1a8);
  }
  if (((ulong)plVar1 & 1) != 0) {
    if (*(char *)(param_1 + 0x4f) < '\0') {
      if (*(long *)(param_1 + 0x40) != 4) goto LAB_10a0b4224;
      plVar7 = (long *)*plVar7;
    }
    else if (*(char *)(param_1 + 0x4f) != '\x04') goto LAB_10a0b4224;
    if (*(int *)plVar7 != 0x746f7073) {
LAB_10a0b4224:
      func_0x000107c2b054(&ppuStack_1a8,&DAT_10f68f148);
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_10a0cdaf8(param_1,param_2,param_3,&ppuStack_1a8,0,&uStack_90);
      if ((long)ppuStack_198 < 0) {
        __ZdlPv(ppuStack_1a8);
      }
      func_0x000107c2b054(&ppuStack_1a8,&DAT_10f68f0f0);
      func_0x000107c2b054(&uStack_90,"");
      FUN_10a0ce878(param_1 + 0x18,param_3,&ppuStack_1a8);
      if ((long)ppuStack_198 < 0) {
        __ZdlPv(ppuStack_1a8);
      }
      func_0x000107c2b054(&ppuStack_1a8,"range");
      func_0x000107c2b054(&uStack_90,"");
      FUN_10a0ce9f0(param_1 + 0x50,param_2,param_3,&ppuStack_1a8,0,&uStack_90);
      if ((long)ppuStack_198 < 0) {
        __ZdlPv(ppuStack_1a8);
      }
      func_0x000107c2b054(&ppuStack_1a8,&DAT_10f4154b4);
      func_0x000107c2b054(&uStack_90,"");
      FUN_10a0ce9f0(param_1 + 0x30,param_2,param_3,&ppuStack_1a8,0,&uStack_90);
      if ((long)ppuStack_198 < 0) {
        __ZdlPv(ppuStack_1a8);
      }
      FUN_10a0b3de4(param_1 + 0x128,param_3);
      FUN_10a0b4a84(param_1 + 0x140,param_3);
      if (param_4 != 0) {
        ppuStack_1a8 = (undefined **)0x0;
        uStack_1a0 = 0;
        ppuStack_198 = (undefined **)0x0;
        ppuStack_190 = (undefined **)0x8000000000000000;
        uVar2 = param_3;
        FUN_10a0a87b8(param_3,&DAT_10f6372be,&ppuStack_1a8);
        if ((int)uVar2 != 0) {
          func_0x00010937c560(&ppuStack_1a8);
          FUN_10a0c32e4(&uStack_90);
          if (*(char *)(param_1 + 0x1e7) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0x1d0));
          }
          *(undefined8 *)(param_1 + 0x1d8) = uStack_88;
          *(undefined8 *)(param_1 + 0x1d0) = uStack_90;
          *(undefined8 *)(param_1 + 0x1e0) = uStack_80;
        }
        ppuStack_1a8 = (undefined **)0x0;
        uStack_1a0 = 0;
        ppuStack_198 = (undefined **)0x0;
        ppuStack_190 = (undefined **)0x8000000000000000;
        FUN_10a0a87b8(param_3,&DAT_10f6372cc,&ppuStack_1a8);
        if ((int)param_3 != 0) {
          func_0x00010937c560(&ppuStack_1a8);
          FUN_10a0c32e4(&uStack_90);
          if (*(char *)(param_1 + 0x1cf) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0x1b8));
          }
          *(undefined8 *)(param_1 + 0x1c0) = uStack_88;
          *(undefined8 *)(param_1 + 0x1b8) = uStack_90;
          *(undefined8 *)(param_1 + 0x1c8) = uStack_80;
        }
      }
      return 1;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0x8000000000000000;
    uVar2 = param_3;
    FUN_10a0a87b8(param_3,&UNK_10f4154be,&uStack_90);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        return 0;
      }
      FUN_109febc44(&ppuStack_1a8);
      pppuVar5 = &ppuStack_198;
      FUN_10a002568(pppuVar5,&UNK_10f6389f2,0x21);
      __ZNKSt3__18ios_base6getlocEv
                (&pppppppuStack_68,(undefined *)((long)pppuVar5 + (long)(*pppuVar5)[-3]));
      pppppppuVar6 = &pppppppuStack_68;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppppppuVar6,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppppppuVar6)[7])();
      __ZNSt3__16localeD1Ev(&pppppppuStack_68);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar5,pppppppuVar6);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar5);
      func_0x00010a002480(&pppppppuStack_68,&ppuStack_190,&uStack_69);
      if (-1 < (char)bStack_51) {
        uStack_60 = (ulong)bStack_51;
        pppppppuStack_68 = &pppppppuStack_68;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppuStack_68,uStack_60);
    }
    else {
      pcVar3 = (char *)&uStack_90;
      func_0x00010937c560();
      if (*pcVar3 == '\x01') {
        func_0x000107c2b054(&ppuStack_1a8,&DAT_10f4154c3);
        func_0x000107c2b054(&pppppppuStack_68,"");
        FUN_10a0ce9f0(param_1 + 0x58,param_2,pcVar3,&ppuStack_1a8,0,&pppppppuStack_68);
        if ((long)ppuStack_198 < 0) {
          __ZdlPv(ppuStack_1a8);
        }
        func_0x000107c2b054(&ppuStack_1a8,&DAT_10f638a38);
        func_0x000107c2b054(&pppppppuStack_68,"");
        FUN_10a0ce9f0(param_1 + 0x60,param_2,pcVar3,&ppuStack_1a8,0,&pppppppuStack_68);
        if ((long)ppuStack_198 < 0) {
          __ZdlPv(ppuStack_1a8);
        }
        FUN_10a0b3de4(param_1 + 0x68,pcVar3);
        FUN_10a0b4a84(param_1 + 0x80,pcVar3);
        if (param_4 != 0) {
          ppuStack_1a8 = (undefined **)0x0;
          uStack_1a0 = 0;
          ppuStack_198 = (undefined **)0x0;
          ppuStack_190 = (undefined **)0x8000000000000000;
          pcVar4 = pcVar3;
          FUN_10a0a87b8(pcVar3,&DAT_10f6372be,&ppuStack_1a8);
          if ((int)pcVar4 != 0) {
            func_0x00010937c560(&ppuStack_1a8);
            FUN_10a0c32e4(&pppppppuStack_68);
            if (*(char *)(param_1 + 0x127) < '\0') {
              __ZdlPv(*(undefined8 *)(param_1 + 0x110));
            }
            *(ulong *)(param_1 + 0x118) = uStack_60;
            *(undefined8 ********)(param_1 + 0x110) = pppppppuStack_68;
            *(ulong *)(param_1 + 0x120) = CONCAT17(bStack_51,uStack_58);
          }
          ppuStack_1a8 = (undefined **)0x0;
          uStack_1a0 = 0;
          ppuStack_198 = (undefined **)0x0;
          ppuStack_190 = (undefined **)0x8000000000000000;
          FUN_10a0a87b8(pcVar3,&DAT_10f6372cc,&ppuStack_1a8);
          if ((int)pcVar3 != 0) {
            func_0x00010937c560(&ppuStack_1a8);
            FUN_10a0c32e4(&pppppppuStack_68);
            if (*(char *)(param_1 + 0x10f) < '\0') {
              __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
            }
            *(ulong *)(param_1 + 0x100) = uStack_60;
            *(undefined8 ********)(param_1 + 0xf8) = pppppppuStack_68;
            *(ulong *)(param_1 + 0x108) = CONCAT17(bStack_51,uStack_58);
          }
        }
        goto LAB_10a0b4224;
      }
      if (param_2 == 0) {
        return 0;
      }
      FUN_109febc44(&ppuStack_1a8);
      pppuVar5 = &ppuStack_198;
      FUN_10a002568(pppuVar5,&UNK_10f638a14,0x1c);
      __ZNKSt3__18ios_base6getlocEv
                (&pppppppuStack_68,(undefined *)((long)pppuVar5 + (long)(*pppuVar5)[-3]));
      pppppppuVar6 = &pppppppuStack_68;
      __ZNKSt3__16locale9use_facetERNS0_2idE(pppppppuVar6,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (*(code *)(*pppppppuVar6)[7])();
      __ZNSt3__16localeD1Ev(&pppppppuStack_68);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar5,pppppppuVar6);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar5);
      func_0x00010a002480(&pppppppuStack_68,&ppuStack_190,&uStack_69);
      if (-1 < (char)bStack_51) {
        uStack_60 = (ulong)bStack_51;
        pppppppuStack_68 = &pppppppuStack_68;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppuStack_68,uStack_60);
    }
    ppuStack_1a8 = &PTR_SUB_1108a5a38;
    ppuStack_198 = &PTR_DAT_1108a5a60;
    appuStack_128[0] = &PTR_DAT_1108a5a88;
    ppuStack_190 = &PTR_DAT_11088d7b0;
    if (cStack_139 < '\0') {
      __ZdlPv(uStack_150);
    }
    ppuStack_190 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_188);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1a8,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_128);
  }
  return 0;
}



/* Entry: 10a0b4914; end: 10a0b4a83;  */

void FUN_10a0b4914(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x00010a0ced8c(uVar3,param_2);
    lVar10 = uVar3 + 0x1e8;
  }
  else {
    lVar10 = uVar3 - *param_1;
    uVar8 = (lVar10 >> 3) * 0x4fbcda3ac10c9715 + 1;
    if (0x864b8a7de6d1d6 < uVar8) {
      FUN_10a0cef00();
LAB_10a0b4a80:
      func_0x000109ffded8();
      puVar5 = &uStack_90;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0x8000000000000000;
      FUN_10a0a87b8(param_2,&DAT_10f6372cc,&uStack_90);
      if ((int)param_2 != 0) {
        func_0x00010937c560(&uStack_90);
        FUN_10a0cde2c(uVar3,puVar5);
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * -0x60864b8a7de6d1d6;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x4325c53ef368ea < (ulong)(lVar6 * 0x4fbcda3ac10c9715)) {
      uVar7 = 0x864b8a7de6d1d6;
    }
    if (uVar7 == 0) {
      lVar6 = 0;
    }
    else {
      if (0x864b8a7de6d1d6 < uVar7) goto LAB_10a0b4a80;
      lVar6 = uVar7 * 0x1e8;
      __Znwm();
    }
    lVar10 = lVar6 + lVar10;
    func_0x00010a0ced8c(lVar10,param_2);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    lVar1 = lVar10 + (lVar9 - lVar2);
    lVar4 = lVar1;
    lVar11 = lVar9;
    if (lVar2 != lVar9) {
      do {
        func_0x00010a0ced8c(lVar4,lVar11);
        lVar11 = lVar11 + 0x1e8;
        lVar4 = lVar4 + 0x1e8;
      } while (lVar11 != lVar2);
      do {
        FUN_10a0cef14(lVar9);
        lVar9 = lVar9 + 0x1e8;
      } while (lVar9 != lVar2);
      lVar9 = *param_1;
    }
    lVar10 = lVar10 + 0x1e8;
    *param_1 = lVar1;
    param_1[1] = lVar10;
    param_1[2] = lVar6 + uVar7 * 0x1e8;
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 10a0b4a84; end: 10a0b4ae3;  */

void FUN_10a0b4a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  FUN_10a0a87b8(param_2,&DAT_10f6372cc,&uStack_40);
  if ((int)param_2 != 0) {
    func_0x00010937c560(&uStack_40);
    FUN_10a0cde2c(param_1,puVar1);
  }
  return;
}



/* Entry: 10a0b4ae4; end: 10a0b4b73;  */

long * FUN_10a0b4ae4(long *param_1)

{
  long *plVar1;
  long lStack_28;
  
  __ZNKSt3__18ios_base6getlocEv(&lStack_28,(long)param_1 + *(long *)(*param_1 + -0x18));
  plVar1 = &lStack_28;
  __ZNKSt3__16locale9use_facetERNS0_2idE(plVar1,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*plVar1 + 0x38))();
  __ZNSt3__16localeD1Ev(&lStack_28);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(param_1,plVar1);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(param_1);
  return param_1;
}



/* Entry: 10a0b4b74; end: 10a0b4c13;  */

ulong * FUN_10a0b4b74(ulong *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)*(char *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < lVar8) {
    plVar1 = param_2;
  }
  lVar9 = param_2[1];
  lVar7 = param_2[1];
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar9 = lVar8;
    lVar7 = lVar8;
  }
  do {
    if (lVar9 == 0) goto LAB_10a0b4be4;
    cVar2 = *(char *)((long)plVar1 + lVar9 + -1);
    lVar9 = lVar9 + -1;
  } while ((cVar2 != '\\') && (cVar2 != '/'));
  if (lVar9 != -1) {
    while (lVar7 != 0) {
      cVar2 = *(char *)((long)plVar1 + lVar7 + -1);
      lVar7 = lVar7 + -1;
      if ((cVar2 == '\\') || (cVar2 == '/')) goto LAB_10a0b4bfc;
    }
    lVar7 = -1;
LAB_10a0b4bfc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (param_1,param_2,0,lVar7,&stack0xffffffffffffffef);
    return param_1;
  }
LAB_10a0b4be4:
  pcVar3 = "";
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < pcVar3) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      pcVar3 = (char *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)pcVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar6 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar6;
      }
    }
    return (ulong *)pcVar3;
  }
  if (pcVar3 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)pcVar3;
    puVar4 = param_1;
    if ((ulong *)pcVar3 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar6 = (ulong *)0x19;
    if (((ulong)pcVar3 | 7) != 0x17) {
      puVar6 = (ulong *)(((ulong)pcVar3 | 7) + 1);
    }
    puVar4 = puVar6;
    func_0x000107c60e20();
    param_1[1] = (ulong)pcVar3;
    param_1[2] = (ulong)puVar6 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,"",pcVar3);
code_r0x0001000537e0:
  *(char *)((long)puVar4 + (long)pcVar3) = '\0';
  return param_1;
}



/* Entry: 10a0b4c14; end: 10a0b4df7;  */

long * FUN_10a0b4c14(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    char *param_5,uint param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  if (param_6 < 0x14) {
    func_0x000107c2c4d8(param_3,&UNK_10f63731a,0x24);
    param_1 = (long *)0x0;
  }
  else if ((((*param_5 == 'g') && (param_5[1] == 'l')) && (param_5[2] == 'T')) &&
          (param_5[3] == 'F')) {
    uVar1 = *(uint *)(param_5 + 0xc);
    uVar3 = (ulong)uVar1;
    if (((uVar1 == 0) || (uVar1 = uVar1 + 0x14, param_6 < uVar1)) ||
       ((uVar2 = *(uint *)(param_5 + 8), param_6 < uVar2 ||
        ((uVar2 < uVar1 || (*(int *)(param_5 + 0x10) != 0x4e4f534a)))))) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_3[1] = 0x14;
        param_3 = (undefined8 *)*param_3;
      }
      else {
        *(undefined1 *)((long)param_3 + 0x17) = 0x14;
      }
      param_1 = (long *)0x0;
      *(undefined4 *)(param_3 + 2) = 0x2e797261;
      param_3[1] = 0x6e69622046546c67;
      *param_3 = 0x2064696c61766e49;
      *(undefined1 *)((long)param_3 + 0x14) = 0;
    }
    else {
      param_5 = param_5 + 0x14;
      FUN_109ffe064(auStack_68,param_5,uVar3);
      *(undefined1 *)(param_1 + 2) = 1;
      *param_1 = (long)(param_5 + uVar3 + 8);
      param_1[1] = (ulong)(uVar2 - uVar1);
      FUN_10a0a6aa8(param_1,param_2,param_3,param_4,param_5,uVar3,param_7);
      if (cStack_51 < '\0') {
        __ZdlPv(auStack_68[0]);
      }
    }
  }
  else {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      param_3[1] = 0xe;
      param_3 = (undefined8 *)*param_3;
    }
    else {
      *(undefined1 *)((long)param_3 + 0x17) = 0xe;
    }
    param_1 = (long *)0x0;
    *param_3 = 0x2064696c61766e49;
    *(undefined8 *)((long)param_3 + 6) = 0x2e636967616d2064;
    *(undefined1 *)((long)param_3 + 0xe) = 0;
  }
  return param_1;
}



/* Entry: 10a0b4df8; end: 10a0b4ebf;  */

void FUN_10a0b4df8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_41;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar2 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  FUN_10a003c90(param_1,uVar2 + uVar1,&uStack_41);
  plVar3 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
  }
  if (uVar1 != 0) {
    plVar4 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar4 = param_2;
    }
    _memmove(plVar3,plVar4,uVar1);
  }
  if (uVar2 != 0) {
    plVar4 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar4 = param_3;
    }
    _memmove((long)plVar3 + uVar1,plVar4,uVar2);
  }
  *(undefined1 *)((long)plVar3 + uVar1 + uVar2) = 0;
  return;
}



/* Entry: 10a0b4ec0; end: 10a0b5097;  */

void FUN_10a0b4ec0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a0cf46c();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    func_0x000107c281ec();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a0b5098; end: 10a0b51af;  */

void FUN_10a0b5098(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  double *pdVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  double *pdVar11;
  long lVar12;
  float fStack_94;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar10 = (long *)param_1[1];
  if (plVar10 < (long *)param_1[2]) {
    lVar7 = param_2[1];
    lVar12 = *param_2;
    plVar10[1] = param_2[1];
    *plVar10 = lVar12;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar10 = plVar10 + 2;
  }
  else {
    lVar7 = (long)plVar10 - *param_1;
    uVar2 = (lVar7 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_10a0cfe84();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      func_0x0001073b504c();
      pdVar3 = (double *)param_2[1];
      for (pdVar11 = (double *)*param_2; pdVar11 != pdVar3; pdVar11 = pdVar11 + 1) {
        fStack_94 = (float)*pdVar11;
        FUN_10a001c34(param_1,&fStack_94);
      }
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a0cfe98();
    plVar1 = (long *)((long)plVar6 + lVar7);
    lVar7 = param_2[1];
    lVar12 = *param_2;
    plVar1[1] = param_2[1];
    *plVar1 = lVar12;
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar10 = plVar1 + 2;
    lVar7 = (long)plVar1 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a0cfecc(&lStack_58);
  }
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 10a0b51b0; end: 10a0b523f;  */

void FUN_10a0b51b0(undefined8 *param_1,long *param_2)

{
  double *pdVar1;
  double *pdVar2;
  float fStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001073b504c(param_1,param_2[1] - *param_2 >> 3);
  pdVar1 = (double *)param_2[1];
  for (pdVar2 = (double *)*param_2; pdVar2 != pdVar1; pdVar2 = pdVar2 + 1) {
    fStack_34 = (float)*pdVar2;
    FUN_10a001c34(param_1,&fStack_34);
  }
  return;
}



/* Entry: 10a0b5240; end: 10a0b863f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b71ec) */
/* WARNING: Removing unreachable block (ram,0x00010a0b6f58) */
/* WARNING: Removing unreachable block (ram,0x00010a0b5a28) */
/* WARNING: Removing unreachable block (ram,0x00010a0b5628) */
/* WARNING: Removing unreachable block (ram,0x00010a0b55bc) */
/* WARNING: Removing unreachable block (ram,0x00010a0b58b4) */
/* WARNING: Removing unreachable block (ram,0x00010a0b5ab0) */
/* WARNING: Removing unreachable block (ram,0x00010a0b708c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b7278) */
/* WARNING: Removing unreachable block (ram,0x00010a0b5948) */
/* WARNING: Removing unreachable block (ram,0x00010a0b70a8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a0b5240(undefined8 *param_1,uint ******param_2,uint *******param_3,long *param_4,
                  long param_5,undefined1 *param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  ulong uVar5;
  undefined7 *puVar6;
  uint *******pppppppuVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uint *******pppppppuVar11;
  uint ******ppppppuVar12;
  uint ******ppppppuVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  uint *****pppppuVar16;
  uint *****pppppuVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 *******pppppppuVar20;
  uint *******pppppppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  byte *pbVar27;
  uint *******pppppppuVar28;
  ushort *puVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int *piVar33;
  uint *puVar34;
  uint ******ppppppuVar35;
  long lVar36;
  float *pfVar37;
  ulong uVar38;
  undefined8 *******pppppppuVar39;
  long *plVar40;
  ulong uVar41;
  undefined8 ******ppppppuVar42;
  long lVar43;
  uint ****ppppuVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  uint *******pppppppuVar48;
  uint *****pppppuVar49;
  undefined4 *puVar50;
  uint ****ppppuVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  int iStack_25c;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  uint *****pppppuStack_208;
  uint *****pppppuStack_200;
  uint *****pppppuStack_1f8;
  uint ******ppppppuStack_1f0;
  uint *****pppppuStack_1e8;
  uint *******pppppppuStack_1e0;
  uint *******pppppppuStack_1d8;
  uint *******pppppppuStack_1d0;
  uint *******pppppppuStack_1c8;
  uint ******ppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *******pppppppuStack_180;
  uint ******ppppppuStack_178;
  undefined8 uStack_170;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 uStack_150;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 uStack_130;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined8 uStack_110;
  uint *******pppppppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint *****pppppuStack_e8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  byte bStack_b9;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  byte bStack_99;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar35 = param_2;
  FUN_10a0e3118(param_2,lRam00000001137e9570 + 0x18);
  uVar1 = *(uint *)(ppppppuVar35 + 7);
  uVar46 = (ulong)uVar1;
  if (-1 < (int)uVar1) {
    pppppppuVar21 = param_3 + 6;
    uVar32 = ((long)param_3[7] - (long)*pppppppuVar21 >> 4) * -0x30c30c30c30c30c3;
    if ((int)uVar1 < (int)uVar32) {
      if (uVar32 < uVar46 || uVar32 - uVar46 == 0) goto LAB_10a0b7f90;
      pppppuStack_1e8 = (*pppppppuVar21)[(ulong)uVar1 * 0x2a + 6];
      ppppppuStack_1f0 = param_2;
      FUN_10a0d0194(&pppppppuStack_1e0,&pppppppuStack_100);
      uVar24 = 0;
      if (uRam00000001137e9628 != 0) {
        uVar46 = (ulong)(int)*(uint *)(param_2 + 4);
        uVar32 = uRam00000001137e9628 - 1;
        if ((uRam00000001137e9628 & uVar32) == 0) {
          uVar38 = uVar32 & uVar46;
        }
        else {
          uVar38 = uVar46;
          if (uRam00000001137e9628 <= uVar46) {
            uVar38 = 0;
            if (uRam00000001137e9628 != 0) {
              uVar38 = uVar46 / uRam00000001137e9628;
            }
            uVar38 = uVar46 - uVar38 * uRam00000001137e9628;
          }
        }
        plVar40 = *(long **)(lRam00000001137e9620 + uVar38 * 8);
        if (plVar40 != (long *)0x0) {
          do {
            while( true ) {
              plVar40 = (long *)*plVar40;
              if (plVar40 == (long *)0x0) goto LAB_10a0b539c;
              uVar41 = plVar40[1];
              if (uVar41 != uVar46) break;
              if (*(uint *)(plVar40 + 2) == *(uint *)(param_2 + 4)) {
                uVar24 = *(undefined4 *)((long)plVar40 + 0x14);
                goto LAB_10a0b53a0;
              }
            }
            if ((uRam00000001137e9628 & uVar32) == 0) {
              uVar41 = uVar41 & uVar32;
            }
            else if (uRam00000001137e9628 <= uVar41) {
              uVar5 = 0;
              if (uRam00000001137e9628 != 0) {
                uVar5 = uVar41 / uRam00000001137e9628;
              }
              uVar41 = uVar41 - uVar5 * uRam00000001137e9628;
            }
          } while (uVar41 == uVar38);
        }
LAB_10a0b539c:
        uVar24 = 0;
      }
LAB_10a0b53a0:
      *(undefined4 *)((long)pppppppuStack_1e0 + 0xec) = uVar24;
      pppppuStack_208 = (uint *****)0x0;
      pppppuStack_200 = (uint *****)0x0;
      pppppuStack_1f8 = (uint *****)0x0;
      pppppppuStack_1b8 = pppppppuStack_1e0 + 0x1e;
      pppppppuStack_1d0 = &ppppppuStack_1f0;
      ppppppuStack_1c0 = &pppppuStack_208;
      pppppppuStack_1c8 = param_3;
      FUN_10a0d0264(&pppppppuStack_1d0,lRam00000001137e9570,5,uRam00000001137e95a8,0);
      FUN_10a0d0264(&pppppppuStack_1d0,lRam00000001137e9578,5,uRam00000001137e95a8,0);
      if (*(byte *)(param_3 + 3) == 1) {
        FUN_10a0d0264(&pppppppuStack_1d0,lRam00000001137e9580,5,
                      CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0),0);
      }
      ppppppuVar35 = ppppppuStack_1f0;
      FUN_10a0e3118(ppppppuStack_1f0,lRam00000001137e9588 + 0x18);
      if ((*(byte *)param_3 == 1) && (ppppppuStack_1f0 + 1 != ppppppuVar35)) {
        uVar1 = *(uint *)(ppppppuVar35 + 7);
        if (-1 < (int)uVar1) {
          uVar46 = ((long)param_3[7] - (long)param_3[6] >> 4) * -0x30c30c30c30c30c3;
          if ((int)uVar1 < (int)uVar46) {
            if (uVar46 < uVar1 || uVar46 - uVar1 == 0) goto LAB_10a0b7f90;
            piVar33 = (int *)((long)param_3[6] + ((ulong)uVar1 * 0x54 + 0xb) * 4);
            iVar45 = *piVar33;
            if (iVar45 < 0x1402) {
              if (iVar45 == 0x1400) {
                uVar22 = 1;
                uVar23 = 1;
              }
              else {
                if (iVar45 != 0x1401) {
LAB_10a0b7f30:
                  uVar22 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  __ZNSt3__19to_stringEi(&pppppppuStack_140,*piVar33);
                  FUN_109feb280(&pppppppuStack_100,&UNK_10f638c92,&pppppppuStack_140);
                  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (uVar22,&pppppppuStack_100);
                  ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                               PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                  goto LAB_10a0b7f90;
                }
                uVar23 = 1;
                uVar22 = 2;
              }
            }
            else if (iVar45 == 0x1402) {
              uVar23 = 1;
              uVar22 = 3;
            }
            else if (iVar45 == 0x1403) {
              uVar23 = 1;
              uVar22 = 4;
            }
            else {
              if (iVar45 != 0x1406) goto LAB_10a0b7f30;
              uVar23 = 0;
              uVar22 = 5;
            }
            FUN_10a0d0264(&pppppppuStack_1d0,lRam00000001137e9588,uVar22,
                          CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0),uVar23);
          }
        }
      }
      lVar43 = lRam00000001137e9590;
      __ZNSt3__19to_stringEi(&pppppppuStack_100,0);
      uVar46 = uRam00000001137e97d8;
      lVar36 = lRam00000001137e97d0;
      if (-1 < (char)bRam00000001137e97e7) {
        uVar46 = (ulong)bRam00000001137e97e7;
        lVar36 = lVar43;
      }
      pppppppuVar11 = (uint *******)&pppppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppppppuVar11,0,lVar36,uVar46);
      pppppppuStack_138 = (undefined8 *******)pppppppuVar11[1];
      pppppppuStack_140 = (undefined8 *******)*pppppppuVar11;
      uStack_130 = pppppppuVar11[2];
      pppppppuVar11[1] = (uint ******)0x0;
      pppppppuVar11[2] = (uint ******)0x0;
      *pppppppuVar11 = (uint ******)0x0;
      lVar43 = lRam00000001137e9590;
      __ZNSt3__19to_stringEi(&pppppppuStack_100,0);
      uVar46 = uRam00000001137e97f0;
      lVar36 = lRam00000001137e97e8;
      if (-1 < (char)bRam00000001137e97ff) {
        uVar46 = (ulong)bRam00000001137e97ff;
        lVar36 = lVar43 + 0x18;
      }
      pppppppuVar11 = (uint *******)&pppppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppppppuVar11,0,lVar36,uVar46);
      pppppppuStack_158 = (undefined8 *******)pppppppuVar11[1];
      pppppppuStack_160 = (undefined8 *******)*pppppppuVar11;
      uStack_150 = pppppppuVar11[2];
      pppppppuVar11[1] = (uint ******)0x0;
      pppppppuVar11[2] = (uint ******)0x0;
      *pppppppuVar11 = (uint ******)0x0;
      ppppppuVar35 = ppppppuStack_1f0;
      ppppppuVar12 = ppppppuStack_1f0;
      FUN_10a0e3118(ppppppuStack_1f0,&pppppppuStack_160);
      if (ppppppuVar35 + 1 != ppppppuVar12) {
        iVar45 = 0;
        do {
          ppppppuVar35 = ppppppuStack_1f0;
          FUN_10a0d0c2c(ppppppuStack_1f0,&pppppppuStack_160);
          uVar1 = *(uint *)ppppppuVar35;
          if ((int)uVar1 < 0) break;
          uVar46 = ((long)param_3[7] - (long)param_3[6] >> 4) * -0x30c30c30c30c30c3;
          if ((int)uVar46 <= (int)uVar1) break;
          if (uVar46 < uVar1 || uVar46 - uVar1 == 0) goto LAB_10a0b7f90;
          ppppppuVar35 = param_3[6] + (ulong)uVar1 * 0x2a;
          if (pppppuStack_1e8 != ppppppuVar35[6]) {
            __ZNSt3__19to_stringEm(&uStack_120);
            FUN_109feb280(&uStack_d0,&UNK_10f638cf8,&uStack_120);
            FUN_10a012db0(&uStack_b0,&uStack_d0,&UNK_10f638d16);
            __ZNSt3__19to_stringEm(&pppppppuStack_180,pppppuStack_1e8);
            ppppppuVar35 = ppppppuStack_178;
            pppppppuVar20 = pppppppuStack_180;
            if (-1 < (long)uStack_170) {
              ppppppuVar35 = (uint ******)((ulong)uStack_170 >> 0x38);
              pppppppuVar20 = &pppppppuStack_180;
            }
            puVar19 = &uStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar19,pppppppuVar20,ppppppuVar35);
            uStack_f8 = (uint *******)puVar19[1];
            pppppppuStack_100 = (uint *******)*puVar19;
            uStack_f0 = (uint ******)puVar19[2];
            puVar19[1] = 0;
            puVar19[2] = 0;
            *puVar19 = 0;
            FUN_10a0edf4c(&pppppppuStack_100);
            goto LAB_10a0b7f90;
          }
          lVar36 = lRam00000001137e9560;
          func_0x000107c2b0ac(lRam00000001137e9560,2);
          if (lVar36 == 0) {
            FUN_109ffdddc(&UNK_10f639994);
            goto LAB_10a0b7f90;
          }
          FUN_10a0d0c68(&uStack_b0,pppppppuVar21,ppppppuVar35,*(undefined8 *)(lVar36 + 0x18));
          pppppuVar26 = pppppuStack_200;
          if (pppppuStack_1e8 != (uint *****)0x0) {
            pppppuVar25 = (uint *****)0x0;
            pfVar37 = (float *)(CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0) + 4);
            do {
              *pfVar37 = 1.0 - *pfVar37;
              pppppuVar25 = (uint *****)((long)pppppuVar25 + 1);
              pfVar37 = pfVar37 + 2;
            } while (pppppuVar25 < pppppuStack_1e8);
          }
          if (pppppuStack_200 < pppppuStack_1f8) {
            FUN_10a0d08a0(pppppuStack_200,&uStack_b0,&pppppppuStack_140,5,uRam00000001137e95a0,0);
            pppppuVar26 = pppppuVar26 + 0xb;
          }
          else {
            lVar36 = ((long)pppppuStack_200 - (long)pppppuStack_208 >> 3) * 0x2e8ba2e8ba2e8ba3;
            uVar46 = lVar36 + 1;
            if (0x2e8ba2e8ba2e8ba < uVar46) {
              FUN_10a0d0bd4();
              goto LAB_10a0b7f90;
            }
            lVar43 = (long)pppppuStack_1f8 - (long)pppppuStack_208 >> 3;
            uVar32 = lVar43 * 0x5d1745d1745d1746;
            if (uVar32 < uVar46 || uVar32 - uVar46 == 0) {
              uVar32 = uVar46;
            }
            if (0x1745d1745d1745c < (ulong)(lVar43 * 0x2e8ba2e8ba2e8ba3)) {
              uVar32 = 0x2e8ba2e8ba2e8ba;
            }
            FUN_10a0d0a0c(&pppppppuStack_100,uVar32,lVar36,&pppppuStack_208);
            FUN_10a0d08a0(uStack_f0,&uStack_b0,&pppppppuStack_140,5,uRam00000001137e95a0,0);
            uStack_f0 = uStack_f0 + 0xb;
            FUN_10a0d0a88(&pppppuStack_208,&pppppppuStack_100);
            pppppuVar26 = pppppuStack_200;
            FUN_10a0d0b88(&pppppppuStack_100);
          }
          pppppppuVar11 = pppppppuStack_1e0;
          pppppuStack_200 = pppppuVar26;
          if (pppppuStack_208 == pppppuVar26) goto LAB_10a0b7f90;
          FUN_10ab6f958(pppppppuStack_1e0 + 0x1f,pppppuVar26 + -7);
          FUN_10ab6f86c(pppppppuVar11 + 0x1e);
          lVar43 = lRam00000001137e9590;
          iVar45 = iVar45 + 1;
          __ZNSt3__19to_stringEi(&pppppppuStack_100,iVar45);
          uVar46 = uRam00000001137e97d8;
          lVar36 = lRam00000001137e97d0;
          if (-1 < (char)bRam00000001137e97e7) {
            uVar46 = (ulong)bRam00000001137e97e7;
            lVar36 = lVar43;
          }
          pppppppuVar11 = (uint *******)&pppppppuStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar11,0,lVar36,uVar46);
          pppppppuVar20 = (undefined8 *******)*pppppppuVar11;
          uStack_d0 = SUB87(pppppppuVar11[1],0);
          uStack_c9 = (undefined1)*(undefined8 *)((long)pppppppuVar11 + 0xf);
          uStack_c8 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar11 + 0xf) >> 8);
          uVar3 = *(undefined1 *)((long)pppppppuVar11 + 0x17);
          pppppppuVar11[1] = (uint ******)0x0;
          pppppppuVar11[2] = (uint ******)0x0;
          *pppppppuVar11 = (uint ******)0x0;
          if ((long)uStack_130 < 0) {
            __ZdlPv(pppppppuStack_140);
          }
          *(undefined8 *)((ulong)&pppppppuStack_140 | 8) = CONCAT17(uStack_c9,uStack_d0);
          *(ulong *)((long)((ulong)&pppppppuStack_140 | 8) + 7) = CONCAT71(uStack_c8,uStack_c9);
          lVar43 = lRam00000001137e9590;
          uStack_130 = (uint ******)CONCAT17(uVar3,(undefined7)uStack_130);
          pppppppuStack_140 = pppppppuVar20;
          __ZNSt3__19to_stringEi(&pppppppuStack_100,iVar45);
          uVar46 = uRam00000001137e97f0;
          lVar36 = lRam00000001137e97e8;
          if (-1 < (char)bRam00000001137e97ff) {
            uVar46 = (ulong)bRam00000001137e97ff;
            lVar36 = lVar43 + 0x18;
          }
          pppppppuVar11 = (uint *******)&pppppppuStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar11,0,lVar36,uVar46);
          pppppppuVar20 = (undefined8 *******)*pppppppuVar11;
          uStack_d0 = SUB87(pppppppuVar11[1],0);
          uStack_c9 = (undefined1)*(undefined8 *)((long)pppppppuVar11 + 0xf);
          uStack_c8 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar11 + 0xf) >> 8);
          uVar3 = *(undefined1 *)((long)pppppppuVar11 + 0x17);
          pppppppuVar11[1] = (uint ******)0x0;
          pppppppuVar11[2] = (uint ******)0x0;
          *pppppppuVar11 = (uint ******)0x0;
          if ((long)uStack_150 < 0) {
            __ZdlPv(pppppppuStack_160);
          }
          *(undefined8 *)((ulong)&pppppppuStack_160 | 8) = CONCAT17(uStack_c9,uStack_d0);
          *(ulong *)((long)((ulong)&pppppppuStack_160 | 8) + 7) = CONCAT71(uStack_c8,uStack_c9);
          uStack_150 = (uint ******)CONCAT17(uVar3,(undefined7)uStack_150);
          pppppppuStack_160 = pppppppuVar20;
          if (CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0) != 0) {
            uStack_a8 = (undefined4)(undefined7)uStack_b0;
            uStack_a4 = (undefined1)((uint7)(undefined7)uStack_b0 >> 0x20);
            uStack_a3 = (undefined2)((uint7)(undefined7)uStack_b0 >> 0x28);
            uStack_a1 = uStack_b0._7_1_;
            __ZdlPv();
          }
          ppppppuVar35 = ppppppuStack_1f0;
          ppppppuVar12 = ppppppuStack_1f0;
          FUN_10a0e3118(ppppppuStack_1f0,&pppppppuStack_160);
        } while (ppppppuVar35 + 1 != ppppppuVar12);
      }
      if ((long)uStack_150 < 0) {
        __ZdlPv(pppppppuStack_160);
      }
      if ((long)uStack_130 < 0) {
        __ZdlPv(pppppppuStack_140);
      }
      uStack_f0 = (uint ******)CONCAT17(7,(undefined7)uStack_f0);
      pppppppuStack_100 = (uint *******)0x5f53544e494f4a;
      __ZNSt3__19to_stringEi(&pppppppuStack_140,0);
      pppppppuVar20 = pppppppuStack_138;
      pppppppuVar39 = pppppppuStack_140;
      if (-1 < (long)uStack_130) {
        pppppppuVar20 = (undefined8 *******)((ulong)uStack_130 >> 0x38);
        pppppppuVar39 = &pppppppuStack_140;
      }
      pppppppuVar11 = (uint *******)&pppppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar11,pppppppuVar39,pppppppuVar20);
      uStack_110 = pppppppuVar11[2];
      uStack_118 = SUB87(pppppppuVar11[1],0);
      uStack_111 = (undefined1)((ulong)pppppppuVar11[1] >> 0x38);
      uStack_120 = SUB87(*pppppppuVar11,0);
      uStack_119 = (undefined1)((ulong)*pppppppuVar11 >> 0x38);
      pppppppuVar11[1] = (uint ******)0x0;
      pppppppuVar11[2] = (uint ******)0x0;
      *pppppppuVar11 = (uint ******)0x0;
      if ((long)uStack_130 < 0) {
        __ZdlPv(pppppppuStack_140);
      }
      uStack_f0 = (uint ******)CONCAT17(8,(undefined7)uStack_f0);
      pppppppuStack_100 = (uint *******)0x5f53544847494557;
      uStack_f8 = (uint *******)((ulong)uStack_f8 & 0xffffffffffffff00);
      __ZNSt3__19to_stringEi(&pppppppuStack_140,0);
      pppppppuVar20 = pppppppuStack_138;
      pppppppuVar39 = pppppppuStack_140;
      if (-1 < (long)uStack_130) {
        pppppppuVar20 = (undefined8 *******)((ulong)uStack_130 >> 0x38);
        pppppppuVar39 = &pppppppuStack_140;
      }
      pppppppuVar11 = (uint *******)&pppppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar11,pppppppuVar39,pppppppuVar20);
      ppppppuStack_178 = pppppppuVar11[1];
      pppppppuStack_180 = (undefined8 *******)*pppppppuVar11;
      uStack_170 = pppppppuVar11[2];
      pppppppuVar11[1] = (uint ******)0x0;
      pppppppuVar11[2] = (uint ******)0x0;
      *pppppppuVar11 = (uint ******)0x0;
      if ((long)uStack_130 < 0) {
        __ZdlPv(pppppppuStack_140);
      }
      ppppppuVar35 = ppppppuStack_1f0;
      ppppppuVar13 = ppppppuStack_1f0;
      FUN_10a0e3118(ppppppuStack_1f0,&uStack_120);
      ppppppuVar12 = ppppppuStack_1f0;
      if ((ppppppuVar35 + 1 != ppppppuVar13) &&
         (ppppppuVar35 = ppppppuStack_1f0, FUN_10a0e3118(ppppppuStack_1f0,&pppppppuStack_180),
         pppppuVar26 = pppppuStack_1e8, ppppppuVar12 + 1 != ppppppuVar35)) {
        lStack_198 = 0;
        lStack_190 = 0;
        lStack_188 = 0;
        if (pppppuStack_1e8 == (uint *****)0x0) {
LAB_10a0b5b6c:
          lVar36 = lStack_198;
          iStack_25c = 0;
          pppppuVar26 = (uint *****)((lStack_190 - lStack_198 >> 3) * -0x5555555555555555);
LAB_10a0b5ba0:
          if ((iStack_25c != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
            func_0x00010ae06f08(1,2,&UNK_10f638d76,&UNK_10f638daf,0xf1,&UNK_10f638e5f);
          }
          ppppppuVar35 = ppppppuStack_1f0;
          FUN_10a0e3118(ppppppuStack_1f0,&uStack_120);
          uVar1 = *(uint *)(ppppppuVar35 + 7);
          ppppppuVar35 = ppppppuStack_1f0;
          FUN_10a0e3118(ppppppuStack_1f0,&pppppppuStack_180);
          if ((int)uVar1 < 0) {
LAB_10a0b674c:
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              func_0x00010ae06f08(1,2,&UNK_10f638d76,&UNK_10f638daf,0xfa,&UNK_10f638ec5);
            }
            goto LAB_10a0b6884;
          }
          ppppppuVar12 = param_3[6];
          uVar46 = ((long)param_3[7] - (long)ppppppuVar12 >> 4) * -0x30c30c30c30c30c3;
          if ((int)uVar46 <= (int)uVar1) goto LAB_10a0b674c;
          uVar2 = *(uint *)(ppppppuVar35 + 7);
          if (((int)uVar2 < 0) || ((int)uVar46 <= (int)uVar2)) goto LAB_10a0b674c;
          if ((uVar46 < uVar1 || uVar46 - uVar1 == 0) || (uVar46 < uVar2 || uVar46 - uVar2 == 0))
          goto LAB_10a0b7f90;
          ppppppuVar35 = ppppppuVar12 + (ulong)uVar1 * 0x2a;
          pppppuVar25 = (ppppppuVar12 + (ulong)uVar2 * 0x2a)[6];
          if (pppppuVar25 != pppppuStack_1e8 || ppppppuVar35[6] != pppppuStack_1e8) {
            uVar22 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1EPKc();
            ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0b7f90;
          }
          uVar46 = CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0);
          iVar45 = *(int *)((long)ppppppuVar35 + 0x2c);
          if (iVar45 < 0x1403) {
            if (iVar45 == 0x1400) {
              lVar43 = lRam00000001137e9560;
              func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
              if (lVar43 == 0) goto LAB_10a0b780c;
              uVar32 = *(ulong *)(lVar43 + 0x18);
              lVar43 = lRam00000001137e9568;
              func_0x000107c2b0ac(lRam00000001137e9568,0x1400);
              if (lVar43 == 0) goto LAB_10a0b780c;
              uVar38 = uVar46 * 4;
              if (uVar46 < uVar32 || uVar38 < *(long *)(lVar43 + 0x18) * uVar32) {
                uVar22 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                uVar46 = CONCAT17(uStack_c1,uStack_c8);
                puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                if (-1 < (char)bStack_b9) {
                  uVar46 = (ulong)bStack_b9;
                  puVar6 = &uStack_d0;
                }
                pppppppuVar20 = &pppppppuStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar20,puVar6,uVar46);
                uStack_f8 = (uint *******)pppppppuVar20[1];
                pppppppuStack_100 = (uint *******)*pppppppuVar20;
                uStack_f0 = (uint ******)pppppppuVar20[2];
                pppppppuVar20[1] = (undefined8 ******)0x0;
                pppppppuVar20[2] = (undefined8 ******)0x0;
                *pppppppuVar20 = (undefined8 ******)0x0;
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar22,&pppppppuStack_100);
                ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0b7f90;
              }
              FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
              lVar43 = lStack_1b0;
              FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
              pppppppuVar11 = pppppppuStack_100;
              if (pppppuVar25 != (uint *****)0x0) {
                pppppuVar49 = (uint *****)0x0;
                do {
                  if (uVar32 != 0) {
                    pppppppuVar28 = (uint *******)((long)pppppppuVar11 + (long)pppppuVar49 * uVar32)
                    ;
                    piVar33 = (int *)(lVar43 + (long)pppppuVar49 * uVar46 * 4);
                    uVar41 = uVar32;
                    do {
                      *piVar33 = (int)(char)*(byte *)pppppppuVar28;
                      uVar41 = uVar41 - 1;
                      pppppppuVar28 = (uint *******)((long)pppppppuVar28 + 1);
                      piVar33 = piVar33 + 1;
                    } while (uVar41 != 0);
                  }
                  if ((long)uVar32 < (long)uVar46) {
                    _bzero(lVar43 + uVar32 * 4 + (long)pppppuVar49 * uVar38,uVar38 + uVar32 * -4);
                  }
                  pppppuVar49 = (uint *****)((long)pppppuVar49 + 1);
                } while (pppppuVar49 != pppppuVar25);
              }
LAB_10a0b60cc:
              pppppppuVar28 = uStack_f8;
              if (pppppppuVar11 != (uint *******)0x0) {
                uStack_f8 = pppppppuVar11;
                __ZdlPv(pppppppuVar11);
                pppppppuVar28 = uStack_f8;
              }
LAB_10a0b62a0:
              uStack_f8 = pppppppuVar28;
              lVar43 = lStack_1b0;
              FUN_10a0d0c68(&pppppppuStack_100,pppppppuVar21,ppppppuVar12 + (ulong)uVar2 * 0x2a,
                            CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0));
              pppppppuVar11 = pppppppuStack_100;
              if (pppppuStack_1e8 != (uint *****)0x0) {
                lVar47 = 0;
                pppppuVar25 = (uint *****)0x0;
                uVar46 = CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0);
                pppppuVar49 = pppppuStack_1e8;
                do {
                  if (uVar46 != 0) {
                    if (pppppuVar26 <= pppppuVar25) goto LAB_10a0b7f90;
                    uVar32 = 0;
                    plVar40 = (long *)(lVar36 + (long)pppppuVar25 * 0x18);
                    puVar50 = (undefined4 *)plVar40[1];
                    lVar30 = uVar46 * lVar47;
                    do {
                      uVar24 = *(undefined4 *)(lVar43 + lVar30 + uVar32 * 4);
                      uVar57 = *(undefined4 *)((long)pppppppuVar11 + uVar32 * 4 + lVar30);
                      if (puVar50 < (undefined4 *)plVar40[2]) {
                        *puVar50 = uVar24;
                        puVar50[1] = uVar57;
                        puVar50 = puVar50 + 2;
                      }
                      else {
                        lVar31 = *plVar40;
                        uVar46 = ((long)puVar50 - lVar31 >> 3) + 1;
                        if (uVar46 >> 0x3d != 0) {
                          func_0x00010a0d1a54();
                          goto LAB_10a0b7f90;
                        }
                        uVar41 = plVar40[2] - lVar31;
                        uVar38 = (long)uVar41 >> 2;
                        if (uVar38 <= uVar46) {
                          uVar38 = uVar46;
                        }
                        if (0x7ffffffffffffff7 < uVar41) {
                          uVar38 = 0x1fffffffffffffff;
                        }
                        if (uVar38 >> 0x3d != 0) {
                          func_0x000109ffded8();
                          goto LAB_10a0b7f90;
                        }
                        lVar14 = uVar38 << 3;
                        __Znwm();
                        puVar50 = (undefined4 *)(lVar14 + ((long)puVar50 - lVar31));
                        *puVar50 = uVar24;
                        puVar50[1] = uVar57;
                        puVar50 = puVar50 + 2;
                        _memcpy();
                        *plVar40 = lVar14;
                        plVar40[1] = (long)puVar50;
                        plVar40[2] = lVar14 + uVar38 * 8;
                        if (lVar31 != 0) {
                          __ZdlPv(lVar31);
                        }
                      }
                      plVar40[1] = (long)puVar50;
                      uVar32 = uVar32 + 1;
                      uVar46 = CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0);
                      pppppuVar49 = pppppuStack_1e8;
                    } while (uVar32 < uVar46);
                  }
                  pppppuVar25 = (uint *****)((long)pppppuVar25 + 1);
                  lVar47 = lVar47 + 4;
                } while (pppppuVar25 < pppppuVar49);
              }
              iStack_25c = iStack_25c + 1;
              uStack_130 = (uint ******)CONCAT17(7,(undefined7)uStack_130);
              pppppppuStack_140 = (undefined8 *******)0x5f53544e494f4a;
              __ZNSt3__19to_stringEi(&pppppppuStack_160);
              pppppppuVar20 = pppppppuStack_158;
              pppppppuVar39 = pppppppuStack_160;
              if (-1 < (long)uStack_150) {
                pppppppuVar20 = (undefined8 *******)((ulong)uStack_150 >> 0x38);
                pppppppuVar39 = &pppppppuStack_160;
              }
              pppppppuVar15 = &pppppppuStack_140;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppuVar15,pppppppuVar39,pppppppuVar20);
              ppppppuVar42 = *pppppppuVar15;
              uStack_b0._0_7_ = SUB87(pppppppuVar15[1],0);
              uVar22 = *(undefined8 *)((long)pppppppuVar15 + 0xf);
              uStack_b0._7_1_ = (undefined1)uVar22;
              uStack_a8 = (undefined4)((ulong)uVar22 >> 8);
              uStack_a4 = (undefined1)((ulong)uVar22 >> 0x28);
              uStack_a3 = (undefined2)((ulong)uVar22 >> 0x30);
              uVar3 = *(undefined1 *)((long)pppppppuVar15 + 0x17);
              pppppppuVar15[1] = (undefined8 ******)0x0;
              pppppppuVar15[2] = (undefined8 ******)0x0;
              *pppppppuVar15 = (undefined8 ******)0x0;
              if ((long)uStack_110 < 0) {
                __ZdlPv(CONCAT17(uStack_119,uStack_120));
              }
              uStack_120 = SUB87(ppppppuVar42,0);
              uStack_119 = (undefined1)((ulong)ppppppuVar42 >> 0x38);
              *(undefined8 *)((ulong)&uStack_120 | 8) =
                   CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0);
              *(ulong *)((long)((ulong)&uStack_120 | 8) + 7) =
                   CONCAT26(uStack_a3,CONCAT15(uStack_a4,CONCAT41(uStack_a8,uStack_b0._7_1_)));
              uStack_110 = (uint ******)CONCAT17(uVar3,(undefined7)uStack_110);
              if ((long)uStack_150 < 0) {
                __ZdlPv(pppppppuStack_160);
              }
              if ((long)uStack_130 < 0) {
                __ZdlPv(pppppppuStack_140);
              }
              uStack_130 = (uint ******)CONCAT17(8,(undefined7)uStack_130);
              pppppppuStack_140 = (undefined8 *******)0x5f53544847494557;
              pppppppuStack_138 =
                   (undefined8 *******)((ulong)pppppppuStack_138 & 0xffffffffffffff00);
              __ZNSt3__19to_stringEi(&pppppppuStack_160,iStack_25c);
              pppppppuVar20 = pppppppuStack_158;
              pppppppuVar39 = pppppppuStack_160;
              if (-1 < (long)uStack_150) {
                pppppppuVar20 = (undefined8 *******)((ulong)uStack_150 >> 0x38);
                pppppppuVar39 = &pppppppuStack_160;
              }
              pppppppuVar15 = &pppppppuStack_140;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppppuVar15,pppppppuVar39,pppppppuVar20);
              pppppppuVar20 = (undefined8 *******)*pppppppuVar15;
              uStack_b0._0_7_ = SUB87(pppppppuVar15[1],0);
              uVar22 = *(undefined8 *)((long)pppppppuVar15 + 0xf);
              uStack_b0._7_1_ = (undefined1)uVar22;
              uStack_a8 = (undefined4)((ulong)uVar22 >> 8);
              uStack_a4 = (undefined1)((ulong)uVar22 >> 0x28);
              uStack_a3 = (undefined2)((ulong)uVar22 >> 0x30);
              uVar3 = *(undefined1 *)((long)pppppppuVar15 + 0x17);
              pppppppuVar15[1] = (undefined8 ******)0x0;
              pppppppuVar15[2] = (undefined8 ******)0x0;
              *pppppppuVar15 = (undefined8 ******)0x0;
              if ((long)uStack_170 < 0) {
                __ZdlPv(pppppppuStack_180);
              }
              *(undefined8 *)((ulong)&pppppppuStack_180 | 8) =
                   CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0);
              *(ulong *)((long)((ulong)&pppppppuStack_180 | 8) + 7) =
                   CONCAT26(uStack_a3,CONCAT15(uStack_a4,CONCAT41(uStack_a8,uStack_b0._7_1_)));
              uStack_170 = (uint ******)CONCAT17(uVar3,(undefined7)uStack_170);
              pppppppuStack_180 = pppppppuVar20;
              if ((long)uStack_150 < 0) {
                __ZdlPv(pppppppuStack_160);
              }
              if ((long)uStack_130 < 0) {
                __ZdlPv(pppppppuStack_140);
              }
              ppppppuVar35 = ppppppuStack_1f0;
              ppppppuVar13 = ppppppuStack_1f0;
              FUN_10a0e3118(ppppppuStack_1f0,&uStack_120);
              ppppppuVar12 = ppppppuStack_1f0;
              if (ppppppuVar35 + 1 == ppppppuVar13) {
                bVar9 = false;
              }
              else {
                ppppppuVar35 = ppppppuStack_1f0;
                FUN_10a0e3118(ppppppuStack_1f0,&pppppppuStack_180);
                bVar9 = ppppppuVar12 + 1 != ppppppuVar35;
              }
              if (pppppppuStack_100 != (uint *******)0x0) {
                uStack_f8 = pppppppuStack_100;
                __ZdlPv();
              }
              if (lStack_1b0 != 0) {
                lStack_1a8 = lStack_1b0;
                __ZdlPv();
              }
              if (!bVar9) goto code_r0x00010a0b65c4;
              goto LAB_10a0b5ba0;
            }
            if (iVar45 == 0x1401) {
              lVar43 = lRam00000001137e9560;
              func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
              if (lVar43 != 0) {
                uVar32 = *(ulong *)(lVar43 + 0x18);
                lVar43 = lRam00000001137e9568;
                func_0x000107c2b0ac(lRam00000001137e9568,0x1401);
                if (lVar43 != 0) {
                  uVar38 = uVar46 * 4;
                  if (uVar32 <= uVar46 && *(long *)(lVar43 + 0x18) * uVar32 <= uVar38) {
                    FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
                    lVar43 = lStack_1b0;
                    FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
                    pppppppuVar11 = pppppppuStack_100;
                    if (pppppuVar25 != (uint *****)0x0) {
                      pppppuVar49 = (uint *****)0x0;
                      do {
                        if (uVar32 != 0) {
                          pppppppuVar28 =
                               (uint *******)((long)pppppppuVar11 + (long)pppppuVar49 * uVar32);
                          puVar34 = (uint *)(lVar43 + (long)pppppuVar49 * uVar46 * 4);
                          uVar41 = uVar32;
                          do {
                            *puVar34 = (uint)*(byte *)pppppppuVar28;
                            uVar41 = uVar41 - 1;
                            pppppppuVar28 = (uint *******)((long)pppppppuVar28 + 1);
                            puVar34 = puVar34 + 1;
                          } while (uVar41 != 0);
                        }
                        if ((long)uVar32 < (long)uVar46) {
                          _bzero(lVar43 + uVar32 * 4 + (long)pppppuVar49 * uVar38,
                                 uVar38 + uVar32 * -4);
                        }
                        pppppuVar49 = (uint *****)((long)pppppuVar49 + 1);
                      } while (pppppuVar49 != pppppuVar25);
                    }
                    goto LAB_10a0b60cc;
                  }
                  uVar22 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                  FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                  FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                  __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                  uVar46 = CONCAT17(uStack_c1,uStack_c8);
                  puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                  if (-1 < (char)bStack_b9) {
                    uVar46 = (ulong)bStack_b9;
                    puVar6 = &uStack_d0;
                  }
                  pppppppuVar20 = &pppppppuStack_140;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppuVar20,puVar6,uVar46);
                  uStack_f8 = (uint *******)pppppppuVar20[1];
                  pppppppuStack_100 = (uint *******)*pppppppuVar20;
                  uStack_f0 = (uint ******)pppppppuVar20[2];
                  pppppppuVar20[1] = (undefined8 ******)0x0;
                  pppppppuVar20[2] = (undefined8 ******)0x0;
                  *pppppppuVar20 = (undefined8 ******)0x0;
                  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (uVar22,&pppppppuStack_100);
                  ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                               PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                  goto LAB_10a0b7f90;
                }
              }
            }
            else {
              if (iVar45 != 0x1402) goto LAB_10a0b7df4;
              lVar43 = lRam00000001137e9560;
              func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
              if (lVar43 != 0) {
                uVar32 = *(ulong *)(lVar43 + 0x18);
                lVar43 = lRam00000001137e9568;
                func_0x000107c2b0ac(lRam00000001137e9568,0x1402);
                if (lVar43 == 0) goto LAB_10a0b780c;
                uVar38 = uVar46 * 4;
                if (uVar32 <= uVar46 && *(long *)(lVar43 + 0x18) * uVar32 <= uVar38) {
                  FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
                  lVar43 = lStack_1b0;
                  FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
                  pppppppuVar11 = pppppppuStack_100;
                  if (pppppuVar25 != (uint *****)0x0) {
                    pppppuVar49 = (uint *****)0x0;
                    do {
                      if (uVar32 != 0) {
                        pbVar27 = (byte *)((long)pppppppuVar11 + (long)pppppuVar49 * uVar32 * 2);
                        piVar33 = (int *)(lVar43 + (long)pppppuVar49 * uVar46 * 4);
                        lVar47 = uVar32 << 1;
                        do {
                          *piVar33 = (int)*(short *)pbVar27;
                          lVar47 = lVar47 + -2;
                          pbVar27 = pbVar27 + 2;
                          piVar33 = piVar33 + 1;
                        } while (lVar47 != 0);
                      }
                      if ((long)uVar32 < (long)uVar46) {
                        _bzero(lVar43 + uVar32 * 4 + (long)pppppuVar49 * uVar38,uVar38 + uVar32 * -4
                              );
                      }
                      pppppuVar49 = (uint *****)((long)pppppuVar49 + 1);
                    } while (pppppuVar49 != pppppuVar25);
                  }
                  goto LAB_10a0b61b4;
                }
                uVar22 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                uVar46 = CONCAT17(uStack_c1,uStack_c8);
                puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                if (-1 < (char)bStack_b9) {
                  uVar46 = (ulong)bStack_b9;
                  puVar6 = &uStack_d0;
                }
                pppppppuVar20 = &pppppppuStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar20,puVar6,uVar46);
                uStack_f8 = (uint *******)pppppppuVar20[1];
                pppppppuStack_100 = (uint *******)*pppppppuVar20;
                uStack_f0 = (uint ******)pppppppuVar20[2];
                pppppppuVar20[1] = (undefined8 ******)0x0;
                pppppppuVar20[2] = (undefined8 ******)0x0;
                *pppppppuVar20 = (undefined8 ******)0x0;
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar22,&pppppppuStack_100);
                ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0b7f90;
              }
            }
          }
          else if (iVar45 < 0x1405) {
            if (iVar45 == 0x1403) {
              lVar43 = lRam00000001137e9560;
              func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
              if (lVar43 != 0) {
                uVar32 = *(ulong *)(lVar43 + 0x18);
                lVar43 = lRam00000001137e9568;
                func_0x000107c2b0ac(lRam00000001137e9568,0x1403);
                if (lVar43 != 0) {
                  uVar38 = uVar46 * 4;
                  if (uVar32 <= uVar46 && *(long *)(lVar43 + 0x18) * uVar32 <= uVar38) {
                    FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
                    lVar43 = lStack_1b0;
                    FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
                    pppppppuVar11 = pppppppuStack_100;
                    if (pppppuVar25 != (uint *****)0x0) {
                      pppppuVar49 = (uint *****)0x0;
                      do {
                        if (uVar32 != 0) {
                          puVar29 = (ushort *)((long)pppppppuVar11 + (long)pppppuVar49 * uVar32 * 2)
                          ;
                          puVar34 = (uint *)(lVar43 + (long)pppppuVar49 * uVar46 * 4);
                          lVar47 = uVar32 << 1;
                          do {
                            *puVar34 = (uint)*puVar29;
                            lVar47 = lVar47 + -2;
                            puVar29 = puVar29 + 1;
                            puVar34 = puVar34 + 1;
                          } while (lVar47 != 0);
                        }
                        if ((long)uVar32 < (long)uVar46) {
                          _bzero(lVar43 + uVar32 * 4 + (long)pppppuVar49 * uVar38,
                                 uVar38 + uVar32 * -4);
                        }
                        pppppuVar49 = (uint *****)((long)pppppuVar49 + 1);
                      } while (pppppuVar49 != pppppuVar25);
                    }
LAB_10a0b61b4:
                    pppppppuVar28 = uStack_f8;
                    if (pppppppuVar11 != (uint *******)0x0) {
                      uStack_f8 = pppppppuVar11;
                      __ZdlPv(pppppppuVar11);
                      pppppppuVar28 = uStack_f8;
                    }
                    goto LAB_10a0b62a0;
                  }
                  uVar22 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                  FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                  FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                  __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                  uVar46 = CONCAT17(uStack_c1,uStack_c8);
                  puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                  if (-1 < (char)bStack_b9) {
                    uVar46 = (ulong)bStack_b9;
                    puVar6 = &uStack_d0;
                  }
                  pppppppuVar20 = &pppppppuStack_140;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppuVar20,puVar6,uVar46);
                  uStack_f8 = (uint *******)pppppppuVar20[1];
                  pppppppuStack_100 = (uint *******)*pppppppuVar20;
                  uStack_f0 = (uint ******)pppppppuVar20[2];
                  pppppppuVar20[1] = (undefined8 ******)0x0;
                  pppppppuVar20[2] = (undefined8 ******)0x0;
                  *pppppppuVar20 = (undefined8 ******)0x0;
                  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (uVar22,&pppppppuStack_100);
                  ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                               PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                  goto LAB_10a0b7f90;
                }
              }
            }
            else {
              if (iVar45 != 0x1404) {
LAB_10a0b7df4:
                uVar22 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__19to_stringEi
                          (&pppppppuStack_140,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                FUN_109feb280(&pppppppuStack_100,&UNK_10f638c92,&pppppppuStack_140);
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar22,&pppppppuStack_100);
                ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0b7f90;
              }
              lVar43 = lRam00000001137e9560;
              func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
              if (lVar43 != 0) {
                uVar32 = *(ulong *)(lVar43 + 0x18);
                lVar43 = lRam00000001137e9568;
                func_0x000107c2b0ac(lRam00000001137e9568,0x1404);
                if (lVar43 != 0) {
                  uVar38 = uVar46 * 4;
                  if (uVar32 <= uVar46 && *(long *)(lVar43 + 0x18) * uVar32 <= uVar38) {
                    FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
                    lVar43 = lStack_1b0;
                    FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
                    pppppppuVar11 = pppppppuStack_100;
                    pppppppuVar28 = uStack_f8;
                    if (pppppuVar25 != (uint *****)0x0) {
                      lVar47 = uVar32 * 4;
                      pppppppuVar48 = pppppppuStack_100;
                      do {
                        if (uVar32 != 0) {
                          _memmove(lVar43,pppppppuVar48,lVar47);
                        }
                        if ((long)uVar32 < (long)uVar46) {
                          _bzero(lVar43 + lVar47,uVar38 + uVar32 * -4);
                        }
                        pppppppuVar48 = (uint *******)((long)pppppppuVar48 + lVar47);
                        lVar43 = lVar43 + uVar38;
                        pppppuVar25 = (uint *****)((long)pppppuVar25 - 1);
                        pppppppuVar28 = uStack_f8;
                      } while (pppppuVar25 != (uint *****)0x0);
                    }
                    goto joined_r0x00010a0b6284;
                  }
                  uVar22 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                  FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                  FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                  __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                  uVar46 = CONCAT17(uStack_c1,uStack_c8);
                  puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                  if (-1 < (char)bStack_b9) {
                    uVar46 = (ulong)bStack_b9;
                    puVar6 = &uStack_d0;
                  }
                  pppppppuVar20 = &pppppppuStack_140;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppuVar20,puVar6,uVar46);
                  uStack_f8 = (uint *******)pppppppuVar20[1];
                  pppppppuStack_100 = (uint *******)*pppppppuVar20;
                  uStack_f0 = (uint ******)pppppppuVar20[2];
                  pppppppuVar20[1] = (undefined8 ******)0x0;
                  pppppppuVar20[2] = (undefined8 ******)0x0;
                  *pppppppuVar20 = (undefined8 ******)0x0;
                  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (uVar22,&pppppppuStack_100);
                  ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                               PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                  goto LAB_10a0b7f90;
                }
              }
            }
          }
          else if (iVar45 == 0x1405) {
            lVar43 = lRam00000001137e9560;
            func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
            if (lVar43 != 0) {
              uVar32 = *(ulong *)(lVar43 + 0x18);
              lVar43 = lRam00000001137e9568;
              func_0x000107c2b0ac(lRam00000001137e9568,0x1405);
              if (lVar43 != 0) {
                uVar38 = uVar46 * 4;
                if (uVar32 <= uVar46 && *(long *)(lVar43 + 0x18) * uVar32 <= uVar38) {
                  FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
                  lVar43 = lStack_1b0;
                  FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
                  pppppppuVar11 = pppppppuStack_100;
                  pppppppuVar28 = uStack_f8;
                  if (pppppuVar25 != (uint *****)0x0) {
                    lVar47 = uVar32 * 4;
                    pppppppuVar48 = pppppppuStack_100;
                    do {
                      if (uVar32 != 0) {
                        _memmove(lVar43,pppppppuVar48,lVar47);
                      }
                      if ((long)uVar32 < (long)uVar46) {
                        _bzero(lVar43 + lVar47,uVar38 + uVar32 * -4);
                      }
                      pppppppuVar48 = (uint *******)((long)pppppppuVar48 + lVar47);
                      lVar43 = lVar43 + uVar38;
                      pppppuVar25 = (uint *****)((long)pppppuVar25 - 1);
                      pppppppuVar28 = uStack_f8;
                    } while (pppppuVar25 != (uint *****)0x0);
                  }
joined_r0x00010a0b6284:
                  uStack_f8 = pppppppuVar11;
                  if (uStack_f8 != (uint *******)0x0) {
                    __ZdlPv(uStack_f8);
                    pppppppuVar28 = uStack_f8;
                  }
                  goto LAB_10a0b62a0;
                }
                uVar22 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                uVar46 = CONCAT17(uStack_c1,uStack_c8);
                puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                if (-1 < (char)bStack_b9) {
                  uVar46 = (ulong)bStack_b9;
                  puVar6 = &uStack_d0;
                }
                pppppppuVar20 = &pppppppuStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar20,puVar6,uVar46);
                uStack_f8 = (uint *******)pppppppuVar20[1];
                pppppppuStack_100 = (uint *******)*pppppppuVar20;
                uStack_f0 = (uint ******)pppppppuVar20[2];
                pppppppuVar20[1] = (undefined8 ******)0x0;
                pppppppuVar20[2] = (undefined8 ******)0x0;
                *pppppppuVar20 = (undefined8 ******)0x0;
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar22,&pppppppuStack_100);
                ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0b7f90;
              }
            }
          }
          else {
            if (iVar45 != 0x1406) goto LAB_10a0b7df4;
            lVar43 = lRam00000001137e9560;
            func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
            if (lVar43 != 0) {
              uVar32 = *(ulong *)(lVar43 + 0x18);
              lVar43 = lRam00000001137e9568;
              func_0x000107c2b0ac(lRam00000001137e9568,0x1406);
              if (lVar43 != 0) {
                uVar38 = uVar46 * 4;
                if (uVar32 <= uVar46 && *(long *)(lVar43 + 0x18) * uVar32 <= uVar38) {
                  FUN_10a0dc020(&lStack_1b0,(long)pppppuVar25 * uVar38);
                  lVar43 = lStack_1b0;
                  FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
                  pppppppuVar11 = pppppppuStack_100;
                  if (pppppuVar25 != (uint *****)0x0) {
                    pppppuVar49 = (uint *****)0x0;
                    do {
                      if (uVar32 != 0) {
                        pfVar37 = (float *)((long)pppppppuVar11 + (long)pppppuVar49 * uVar32 * 4);
                        piVar33 = (int *)(lVar43 + (long)pppppuVar49 * uVar46 * 4);
                        lVar47 = uVar32 << 2;
                        do {
                          *piVar33 = (int)*pfVar37;
                          lVar47 = lVar47 + -4;
                          pfVar37 = pfVar37 + 1;
                          piVar33 = piVar33 + 1;
                        } while (lVar47 != 0);
                      }
                      if ((long)uVar32 < (long)uVar46) {
                        _bzero(lVar43 + uVar32 * 4 + (long)pppppuVar49 * uVar38,uVar38 + uVar32 * -4
                              );
                      }
                      pppppuVar49 = (uint *****)((long)pppppuVar49 + 1);
                    } while (pppppuVar49 != pppppuVar25);
                  }
                  goto LAB_10a0b61b4;
                }
                uVar22 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)(ppppppuVar35 + 7));
                FUN_109feb280(&pppppppuStack_160,&UNK_10f638d39,&uStack_b0);
                FUN_10a012db0(&pppppppuStack_140,&pppppppuStack_160,&UNK_10f638d5f);
                __ZNSt3__19to_stringEi(&uStack_d0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
                uVar46 = CONCAT17(uStack_c1,uStack_c8);
                puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
                if (-1 < (char)bStack_b9) {
                  uVar46 = (ulong)bStack_b9;
                  puVar6 = &uStack_d0;
                }
                pppppppuVar20 = &pppppppuStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar20,puVar6,uVar46);
                uStack_f8 = (uint *******)pppppppuVar20[1];
                pppppppuStack_100 = (uint *******)*pppppppuVar20;
                uStack_f0 = (uint ******)pppppppuVar20[2];
                pppppppuVar20[1] = (undefined8 ******)0x0;
                pppppppuVar20[2] = (undefined8 ******)0x0;
                *pppppppuVar20 = (undefined8 ******)0x0;
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar22,&pppppppuStack_100);
                ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0b7f90;
              }
            }
          }
LAB_10a0b780c:
          FUN_109ffdddc(&UNK_10f639994);
          goto LAB_10a0b7f90;
        }
        if (pppppuStack_1e8 < (uint *****)0xaaaaaaaaaaaaaab) {
          lVar43 = (long)pppppuStack_1e8 * 0x18;
          lVar36 = lVar43;
          __Znwm();
          _bzero();
          lStack_190 = lVar36 + ((lVar43 - 0x18U) / 0x18) * 0x18 + 0x18;
          lStack_198 = lVar36;
          lStack_188 = lVar36 + (long)pppppuVar26 * 0x18;
          goto LAB_10a0b5b6c;
        }
        func_0x00010a0d1a40();
        goto LAB_10a0b7f90;
      }
      goto LAB_10a0b688c;
    }
  }
  uVar22 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(&pppppppuStack_1d0,uVar46);
  FUN_109feb280(&pppppppuStack_100,&UNK_10f638c4d,&pppppppuStack_1d0);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar22,&pppppppuStack_100);
  ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  goto LAB_10a0b7f90;
code_r0x00010a0b65c4:
  FUN_10a0dc020(&pppppppuStack_140,
                (long)pppppuStack_1e8 * CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0) * 4);
  pppppppuVar20 = pppppppuStack_140;
  if (pppppuStack_1e8 != (uint *****)0x0) {
    lVar43 = 0;
    pppppuVar25 = (uint *****)0x0;
    do {
      if (pppppuVar25 == pppppuVar26) goto LAB_10a0b7f90;
      plVar40 = (long *)(lVar36 + (long)pppppuVar25 * 0x18);
      lVar30 = *plVar40;
      lVar31 = plVar40[1];
      lVar47 = 0;
      if (lVar31 != lVar30) {
        lVar47 = LZCOUNT(lVar31 - lVar30 >> 3) * -2 + 0x7e;
      }
      FUN_10a0d1a68(lVar30,lVar31,lVar47,1);
      lVar31 = CONCAT44(uRam00000001137e95b4,uRam00000001137e95b0);
      lVar47 = *plVar40;
      lVar30 = plVar40[1];
      uVar46 = lVar30 - lVar47 >> 3;
      if (lVar31 != 0) {
        if (uVar46 <= lVar31 - 1U) goto LAB_10a0b7f90;
        fVar52 = 0.0;
        pfVar37 = (float *)(lVar47 + 4);
        lVar14 = lVar31;
        do {
          fVar52 = fVar52 + *pfVar37;
          lVar14 = lVar14 + -1;
          pfVar37 = pfVar37 + 2;
        } while (lVar14 != 0);
        pfVar37 = (float *)(lVar47 + 4);
        lVar14 = lVar31;
        if (1.1920929e-07 < ABS(fVar52)) {
          do {
            *pfVar37 = *pfVar37 / fVar52;
            lVar14 = lVar14 + -1;
            pfVar37 = pfVar37 + 2;
          } while (lVar14 != 0);
        }
      }
      if (lVar30 == lVar47) goto LAB_10a0b7f90;
      fVar52 = *(float *)(lVar47 + 4);
      if (fVar52 <= 0.0) {
        fVar52 = 0.0;
      }
      fVar52 = (float)NEON_fminnm(fVar52,0x3f7d70a4);
      pfVar37 = (float *)(lVar47 + 4);
      *pfVar37 = fVar52;
      if (lVar31 != 0) {
        pppppppuVar39 = (undefined8 *******)((long)pppppppuVar20 + lVar31 * lVar43);
        do {
          if (uVar46 == 0) goto LAB_10a0b7f90;
          *(float *)pppppppuVar39 = *pfVar37 + (float)(int)pfVar37[-1];
          pfVar37 = pfVar37 + 2;
          uVar46 = uVar46 - 1;
          lVar31 = lVar31 + -1;
          pppppppuVar39 = (undefined8 *******)((long)pppppppuVar39 + 4);
        } while (lVar31 != 0);
      }
      pppppuVar25 = (uint *****)((long)pppppuVar25 + 1);
      lVar43 = lVar43 + 4;
    } while (pppppuVar25 < pppppuStack_1e8);
  }
  pppppuVar26 = pppppuStack_200;
  uStack_150 = (uint ******)CONCAT17(8,(undefined7)uStack_150);
  pppppppuStack_160 = (undefined8 *******)0x61746144656e6f62;
  pppppppuStack_158 = (undefined8 *******)((ulong)pppppppuStack_158 & 0xffffffffffffff00);
  if (pppppuStack_200 < pppppuStack_1f8) {
    FUN_10a0d08a0(pppppuStack_200,&pppppppuStack_140,&pppppppuStack_160,5,uRam00000001137e95b0,0);
    pppppuVar26 = pppppuVar26 + 0xb;
  }
  else {
    lVar36 = ((long)pppppuStack_200 - (long)pppppuStack_208 >> 3) * 0x2e8ba2e8ba2e8ba3;
    uVar46 = lVar36 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar46) {
      FUN_10a0d0bd4();
      goto LAB_10a0b7f90;
    }
    lVar43 = (long)pppppuStack_1f8 - (long)pppppuStack_208 >> 3;
    uVar32 = lVar43 * 0x5d1745d1745d1746;
    if (uVar32 < uVar46 || uVar32 - uVar46 == 0) {
      uVar32 = uVar46;
    }
    if (0x1745d1745d1745c < (ulong)(lVar43 * 0x2e8ba2e8ba2e8ba3)) {
      uVar32 = 0x2e8ba2e8ba2e8ba;
    }
    FUN_10a0d0a0c(&pppppppuStack_100,uVar32,lVar36,&pppppuStack_208);
    FUN_10a0d08a0(uStack_f0,&pppppppuStack_140,&pppppppuStack_160,5,uRam00000001137e95b0,0);
    uStack_f0 = uStack_f0 + 0xb;
    FUN_10a0d0a88(&pppppuStack_208,&pppppppuStack_100);
    pppppuVar26 = pppppuStack_200;
    FUN_10a0d0b88(&pppppppuStack_100);
  }
  pppppuStack_200 = pppppuVar26;
  if ((long)uStack_150 < 0) {
    __ZdlPv(pppppppuStack_160);
  }
  pppppppuVar11 = pppppppuStack_1e0;
  if (pppppuStack_208 == pppppuStack_200) goto LAB_10a0b7f90;
  FUN_10ab6f958(pppppppuStack_1e0 + 0x1f,pppppuStack_200 + -7);
  FUN_10ab6f86c(pppppppuVar11 + 0x1e);
  if (pppppppuStack_140 != (undefined8 *******)0x0) {
    pppppppuStack_138 = pppppppuStack_140;
    __ZdlPv();
  }
LAB_10a0b6884:
  FUN_10a0d19d4(&lStack_198);
LAB_10a0b688c:
  if ((long)uStack_170 < 0) {
    __ZdlPv(pppppppuStack_180);
  }
  if ((long)uStack_110 < 0) {
    __ZdlPv(CONCAT17(uStack_119,uStack_120));
  }
  pppppppuVar28 = pppppppuStack_1d8;
  pppppppuVar11 = pppppppuStack_1e0;
  pppppppuStack_100 = pppppppuStack_1e0;
  uStack_f8 = pppppppuStack_1d8;
  if (pppppppuStack_1d8 != (uint *******)0x0) {
    pppppppuVar48 = pppppppuStack_1d8 + 1;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar48,0x10);
      if (bVar9) {
        *pppppppuVar48 = (uint ******)((long)*pppppppuVar48 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x000107c31950(pppppppuStack_1e0 + 2,
                      (long)pppppuStack_1e8 * (ulong)*(uint *)(pppppppuStack_1e0 + 0x1e));
  if (pppppuStack_1e8 != (uint *****)0x0) {
    pppppuVar26 = (uint *****)0x0;
    pppppuVar25 = pppppuStack_1e8;
    pppppuVar49 = pppppuStack_208;
    pppppuVar16 = pppppuStack_200;
    do {
      for (; pppppuVar17 = pppppuStack_200, pppppuVar49 != pppppuStack_200;
          pppppuVar49 = pppppuVar49 + 0xb) {
        ppppuVar51 = pppppuVar49[3];
        pppppuStack_200 = pppppuVar16;
        if (ppppuVar51 != (uint ****)0x0) {
          ppppuVar44 = (uint ****)((long)*pppppuVar49 + (long)ppppuVar51 * (long)pppppuVar26);
          do {
            FUN_10a0dc090(pppppppuVar11 + 2,ppppuVar44);
            ppppuVar44 = (uint ****)((long)ppppuVar44 + 1);
            ppppuVar51 = (uint ****)((long)ppppuVar51 + -1);
          } while (ppppuVar51 != (uint ****)0x0);
        }
        pppppuVar25 = pppppuStack_1e8;
        pppppuVar16 = pppppuStack_200;
        pppppuStack_200 = pppppuVar17;
      }
      pppppuVar26 = (uint *****)((long)pppppuVar26 + 1);
      pppppuStack_200 = pppppuVar16;
      pppppuVar49 = pppppuStack_208;
    } while (pppppuVar26 < pppppuVar25);
  }
  if (pppppppuVar28 != (uint *******)0x0) {
    pppppppuVar11 = pppppppuVar28 + 1;
    do {
      ppppppuVar35 = *pppppppuVar11;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
      if (bVar9) {
        *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppuVar35 == (uint ******)0x0) {
      (*(code *)(*pppppppuVar28)[2])(pppppppuVar28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar28);
    }
  }
  pppppppuVar28 = pppppppuStack_1d8;
  pppppppuVar11 = pppppppuStack_1e0;
  uStack_120 = SUB87(pppppppuStack_1e0,0);
  uStack_119 = (undefined1)((ulong)pppppppuStack_1e0 >> 0x38);
  uStack_118 = SUB87(pppppppuStack_1d8,0);
  uStack_111 = (undefined1)((ulong)pppppppuStack_1d8 >> 0x38);
  if (pppppppuStack_1d8 != (uint *******)0x0) {
    pppppppuVar48 = pppppppuStack_1d8 + 1;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar48,0x10);
      if (bVar9) {
        *pppppppuVar48 = (uint ******)((long)*pppppppuVar48 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined4 *)(pppppppuStack_1e0 + 0x1d) = 1;
  uVar1 = *(uint *)((long)ppppppuStack_1f0 + 0x1c);
  if ((int)uVar1 < 0) {
LAB_10a0b6ae0:
    pppppppuVar11 = pppppppuStack_1e0 + 5;
    ppppppuVar35 = *pppppppuVar11;
    uVar46 = (long)pppppuStack_1e8 * 2;
    uVar32 = (long)pppppppuStack_1e0[6] - (long)ppppppuVar35;
    if (uVar46 < uVar32 || uVar46 - uVar32 == 0) {
      if (uVar46 < uVar32) {
        pppppppuStack_1e0[6] = (uint ******)((long)ppppppuVar35 + uVar46);
      }
    }
    else {
      func_0x000107c27d58(pppppppuVar11,uVar46 - uVar32);
      ppppppuVar35 = *pppppppuVar11;
    }
    if (pppppuStack_1e8 != (uint *****)0x0) {
      pppppuVar26 = (uint *****)0x0;
      do {
        *(short *)((long)ppppppuVar35 + (long)pppppuVar26 * 2) = (short)pppppuVar26;
        pppppuVar26 = (uint *****)((long)pppppuVar26 + 1);
      } while (pppppuStack_1e8 != pppppuVar26);
    }
  }
  else {
    uVar46 = ((long)param_3[7] - (long)param_3[6] >> 4) * -0x30c30c30c30c30c3;
    if ((int)uVar46 <= (int)uVar1) goto LAB_10a0b6ae0;
    if (uVar46 < uVar1 || uVar46 - uVar1 == 0) goto LAB_10a0b7f90;
    ppppppuVar35 = param_3[6] + (ulong)uVar1 * 0x2a;
    iVar45 = *(int *)((long)ppppppuVar35 + 0x2c);
    if (iVar45 == 0x1405) {
      *(undefined4 *)(pppppppuStack_1e0 + 0x1d) = 2;
      FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
LAB_10a0b6b64:
      ppppppuVar35 = pppppppuVar11[5];
      if (ppppppuVar35 != (uint ******)0x0) {
        pppppppuVar11[6] = ppppppuVar35;
        __ZdlPv();
        pppppppuVar11[5] = (uint ******)0x0;
        pppppppuVar11[6] = (uint ******)0x0;
        pppppppuVar11[7] = (uint ******)0x0;
      }
      pppppppuVar11[6] = (uint ******)uStack_f8;
      pppppppuVar11[5] = (uint ******)pppppppuStack_100;
      ppppppuVar35 = uStack_f0;
LAB_10a0b6b8c:
      pppppppuVar11[7] = ppppppuVar35;
    }
    else {
      if (iVar45 == 0x1403) {
        FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
        goto LAB_10a0b6b64;
      }
      if (iVar45 == 0x1401) {
        pppppuVar26 = ppppppuVar35[6];
        lVar36 = lRam00000001137e9560;
        func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(ppppppuVar35 + 7));
        if (lVar36 == 0) {
LAB_10a0b7e58:
          FUN_109ffdddc(&UNK_10f639994);
          goto LAB_10a0b7f90;
        }
        uVar46 = *(ulong *)(lVar36 + 0x18);
        lVar36 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1401);
        if (lVar36 == 0) goto LAB_10a0b7e58;
        if (1 < uVar46 || 2 < *(long *)(lVar36 + 0x18) * uVar46) {
          uVar22 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(&pppppppuStack_160,*(undefined4 *)(ppppppuVar35 + 7));
          FUN_109feb280(&pppppppuStack_140,&UNK_10f638d39,&pppppppuStack_160);
          FUN_10a012db0(&pppppppuStack_1d0,&pppppppuStack_140,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&uStack_b0,*(undefined4 *)((long)ppppppuVar35 + 0x2c));
          uVar46 = CONCAT17(uStack_a1,CONCAT25(uStack_a3,CONCAT14(uStack_a4,uStack_a8)));
          puVar19 = (undefined8 *)CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0);
          if (-1 < (char)bStack_99) {
            uVar46 = (ulong)bStack_99;
            puVar19 = &uStack_b0;
          }
          pppppppuVar21 = (uint *******)&pppppppuStack_1d0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar21,puVar19,uVar46);
          uStack_f8 = (uint *******)pppppppuVar21[1];
          pppppppuStack_100 = (uint *******)*pppppppuVar21;
          uStack_f0 = pppppppuVar21[2];
          pppppppuVar21[1] = (uint ******)0x0;
          pppppppuVar21[2] = (uint ******)0x0;
          *pppppppuVar21 = (uint ******)0x0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar22,&pppppppuStack_100);
          ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0b7f90;
        }
        FUN_10a0dc020(&uStack_d0,(long)pppppuVar26 << 1);
        puVar29 = (ushort *)CONCAT17(uStack_c9,uStack_d0);
        FUN_10a0c7dfc(&pppppppuStack_100,pppppppuVar21,ppppppuVar35);
        pppppppuVar48 = pppppppuStack_100;
        for (; pppppuVar26 != (uint *****)0x0; pppppuVar26 = (uint *****)((long)pppppuVar26 + -1)) {
          if (uVar46 == 0) {
            *puVar29 = 0;
          }
          else {
            *puVar29 = (ushort)*(byte *)pppppppuVar48;
          }
          pppppppuVar48 = (uint *******)((long)pppppppuVar48 + uVar46);
          puVar29 = puVar29 + 1;
        }
        if (pppppppuStack_100 != (uint *******)0x0) {
          uStack_f8 = pppppppuStack_100;
          __ZdlPv();
        }
        ppppppuVar35 = pppppppuVar11[5];
        if (ppppppuVar35 != (uint ******)0x0) {
          pppppppuVar11[6] = ppppppuVar35;
          __ZdlPv();
          pppppppuVar11[5] = (uint ******)0x0;
          pppppppuVar11[6] = (uint ******)0x0;
          pppppppuVar11[7] = (uint ******)0x0;
        }
        pppppppuVar11[6] = (uint ******)CONCAT17(uStack_c1,uStack_c8);
        pppppppuVar11[5] = (uint ******)CONCAT17(uStack_c9,uStack_d0);
        ppppppuVar35 = (uint ******)CONCAT17(bStack_b9,uStack_c0);
        goto LAB_10a0b6b8c;
      }
      pppppppuVar11 = pppppppuStack_1e0 + 5;
      ppppppuVar35 = *pppppppuVar11;
      uVar46 = (long)pppppuStack_1e8 * 2;
      uVar32 = (long)pppppppuStack_1e0[6] - (long)ppppppuVar35;
      if (uVar46 < uVar32 || uVar46 - uVar32 == 0) {
        if (uVar46 < uVar32) {
          pppppppuStack_1e0[6] = (uint ******)((long)ppppppuVar35 + uVar46);
        }
      }
      else {
        func_0x000107c27d58(pppppppuVar11,uVar46 - uVar32);
        ppppppuVar35 = *pppppppuVar11;
      }
      if (pppppuStack_1e8 != (uint *****)0x0) {
        pppppuVar26 = (uint *****)0x0;
        do {
          *(short *)((long)ppppppuVar35 + (long)pppppuVar26 * 2) = (short)pppppuVar26;
          pppppuVar26 = (uint *****)((long)pppppuVar26 + 1);
        } while (pppppuStack_1e8 != pppppuVar26);
      }
    }
  }
  if (pppppppuVar28 != (uint *******)0x0) {
    pppppppuVar11 = pppppppuVar28 + 1;
    do {
      ppppppuVar35 = *pppppppuVar11;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
      if (bVar9) {
        *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppuVar35 == (uint ******)0x0) {
      (*(code *)(*pppppppuVar28)[2])(pppppppuVar28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar28);
    }
  }
  pppppppuVar11 = pppppppuStack_1e0;
  ppppppuVar35 = ppppppuStack_1f0;
  FUN_10a0e3118(ppppppuStack_1f0,lRam00000001137e9570 + 0x18);
  uVar1 = *(uint *)(ppppppuVar35 + 7);
  ppppppuVar35 = param_3[6];
  uVar46 = ((long)param_3[7] - (long)ppppppuVar35 >> 4) * -0x30c30c30c30c30c3;
  if (uVar46 < (ulong)(long)(int)uVar1 || uVar46 - (long)(int)uVar1 == 0) goto LAB_10a0b7f90;
  pppppuVar26 = ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x20];
  lVar36 = (long)ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x21] - (long)pppppuVar26;
  uVar46 = lVar36 >> 3;
  if ((uVar46 < uRam00000001137e95a8) ||
     ((ulong)((long)ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x24] -
              (long)ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x23] >> 3) < uRam00000001137e95a8)) {
    FUN_10a0d05a8(&pppppppuStack_100,lRam00000001137e9570 + 0x18,ppppppuStack_1f0,pppppppuVar21);
    uVar46 = uRam00000001137e95a8;
    pppppuVar26 = ppppppuVar35[(long)(int)uVar1 * 0x2a + 6];
    if (pppppuVar26 != (uint *****)0x0) {
      pppppuVar25 = (uint *****)0x0;
      do {
        if (uVar46 != 0) {
          uVar32 = 0;
          pfVar37 = (float *)((long)pppppppuStack_100 + (long)pppppuVar25 * 0xc);
          fVar52 = *pfVar37;
          fVar53 = pfVar37[1];
          fVar54 = pfVar37[2];
          do {
            pppppppuVar21 = pppppppuVar11 + 0x27;
            fVar56 = fVar52;
            pppppppuVar28 = (uint *******)((long)pppppppuVar11 + 0x144);
            if ((int)uVar32 == 2) {
              pppppppuVar21 = pppppppuVar11 + 0x28;
              fVar56 = fVar54;
              pppppppuVar28 = (uint *******)((long)pppppppuVar11 + 0x14c);
            }
            pppppppuVar48 = (uint *******)((long)pppppppuVar11 + 0x13c);
            fVar55 = fVar53;
            pppppppuVar7 = pppppppuVar11 + 0x29;
            if ((int)uVar32 != 1) {
              pppppppuVar48 = pppppppuVar21;
              fVar55 = fVar56;
              pppppppuVar7 = pppppppuVar28;
            }
            fVar56 = fVar55;
            if (*(float *)pppppppuVar7 <= fVar55) {
              fVar56 = *(float *)pppppppuVar7;
            }
            *(float *)pppppppuVar7 = fVar56;
            if (fVar55 <= *(float *)pppppppuVar48) {
              fVar55 = *(float *)pppppppuVar48;
            }
            *(float *)pppppppuVar48 = fVar55;
            uVar32 = uVar32 + 1;
          } while (uVar46 != uVar32);
        }
        pppppuVar25 = (uint *****)((long)pppppuVar25 + 1);
      } while (pppppuVar25 != pppppuVar26);
    }
    if (pppppppuStack_100 != (uint *******)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (((ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x21] == pppppuVar26) || (uVar46 < 2)) ||
       (lVar36 == 0x10)) goto LAB_10a0b7f90;
    ppppuVar44 = pppppuVar26[2];
    ppppuVar51 = pppppuVar26[1];
    *(float *)((long)pppppppuVar11 + 0x144) = (float)(double)*pppppuVar26;
    pppppppuVar11[0x29] = (uint ******)CONCAT44((float)(double)ppppuVar44,(float)(double)ppppuVar51)
    ;
    pppppuVar26 = ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x23];
    uVar46 = (long)ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x24] - (long)pppppuVar26;
    if (((ppppppuVar35[(long)(int)uVar1 * 0x2a + 0x24] == pppppuVar26) || (uVar46 < 9)) ||
       (uVar46 == 0x10)) goto LAB_10a0b7f90;
    ppppuVar44 = pppppuVar26[2];
    ppppuVar51 = pppppuVar26[1];
    *(float *)(pppppppuVar11 + 0x27) = (float)(double)*pppppuVar26;
    *(ulong *)((long)pppppppuVar11 + 0x13c) =
         CONCAT44((float)(double)ppppuVar44,(float)(double)ppppuVar51);
  }
  pppppuVar26 = ppppppuStack_1f0[5];
  pppppuVar25 = ppppppuStack_1f0[6];
  if (pppppuVar26 == pppppuVar25) {
LAB_10a0b71f4:
    pppppppuVar21 = pppppppuStack_1e0;
    pppppppuStack_100 = (uint *******)0x61746144656e6f62;
    uStack_f8 = (uint *******)((ulong)uStack_f8 & 0xffffffffffffff00);
    uStack_f0 = (uint ******)CONCAT17(8,(undefined7)uStack_f0);
    pppppuStack_e8 = (uint *****)0x0;
    func_0x000107c2b080(&pppppppuStack_100);
    ppppppuVar12 = pppppppuVar21[0x20];
    ppppppuVar35 = pppppppuVar21[0x1f];
    ppppppuVar13 = ppppppuVar35;
    for (; (ppppppuVar35 != ppppppuVar12 &&
           (ppppppuVar13 = ppppppuVar35, ppppppuVar35[3] != pppppuStack_e8));
        ppppppuVar35 = ppppppuVar35 + 7) {
      ppppppuVar13 = ppppppuVar12;
    }
    if (ppppppuVar13 != ppppppuVar12 && ppppppuVar13 != (uint ******)0x0) {
      for (ppppppuVar35 = param_3[0x18]; ppppppuVar35 != param_3[0x19];
          ppppppuVar35 = ppppppuVar35 + 0x2f) {
        if (param_7 == (long)*(int *)((long)ppppppuVar35 + 0x24)) {
          uVar1 = *(uint *)(ppppppuVar35 + 4);
          if (-1 < (int)uVar1) {
            ppppppuVar35 = param_3[0x21];
            uVar46 = ((long)param_3[0x22] - (long)ppppppuVar35 >> 3) * -0x1084210842108421;
            if (uVar46 < uVar1 || uVar46 - uVar1 == 0) goto LAB_10a0b7f90;
            pppppuVar26 = ppppppuVar35[(ulong)uVar1 * 0x1f + 4];
            pppppuVar25 = ppppppuVar35[(ulong)uVar1 * 0x1f + 5];
            if ((long)pppppuVar25 - (long)pppppuVar26 != 0) {
              ppppuVar51 = param_3[5][0x20][0x4c];
              pppppppuStack_100 = (uint *******)&UNK_10f653c20;
              uStack_f8 = (uint *******)0x21;
              if (ppppuVar51 == (uint ****)0x0) {
                FUN_10a0edfc4(&pppppppuStack_100);
                goto LAB_10a0b7f90;
              }
              FUN_10a244d68();
              (*(code *)(*ppppuVar51)[0x1b])();
              pppppppuVar21 = pppppppuStack_1e0;
              uVar46 = (long)pppppuVar25 - (long)pppppuVar26 >> 2;
              if (uVar46 <= ((ulong)ppppuVar51 & 0xffffffff)) {
                ppppppuVar35 = pppppppuStack_1e0[0x12];
                if (ppppppuVar35 < pppppppuStack_1e0[0x13]) {
                  ppppppuVar35[3] = (uint *****)0x0;
                  ppppppuVar35[2] = (uint *****)0x0;
                  ppppppuVar35[5] = (uint *****)0x0;
                  ppppppuVar35[4] = (uint *****)0x0;
                  ppppppuVar35[1] = (uint *****)0x0;
                  *ppppppuVar35 = (uint *****)0x0;
                  pppppppuVar11 = (uint *******)(ppppppuVar35 + 6);
                }
                else {
                  pppppppuVar11 = pppppppuStack_1e0 + 0x11;
                  FUN_10a0d3794();
                }
                pppppppuVar21[0x12] = (uint ******)pppppppuVar11;
                uVar1 = 0;
                if (*(int *)(pppppppuStack_1e0 + 0x1d) == 1) {
                  uVar1 = (uint)((ulong)((long)pppppppuStack_1e0[6] - (long)pppppppuStack_1e0[5]) >>
                                1);
                }
                uVar2 = (uint)((ulong)((long)pppppppuStack_1e0[6] - (long)pppppppuStack_1e0[5]) >> 2
                              );
                if (*(int *)(pppppppuStack_1e0 + 0x1d) != 2) {
                  uVar2 = uVar1;
                }
                pppppppuStack_100 = (uint *******)((ulong)uVar2 << 0x20);
                uStack_f8 = (uint *******)((ulong)uStack_f8 & 0xffffffff00000000);
                FUN_10a0d3a24(pppppppuVar11 + -3,&pppppppuStack_100,(long)&uStack_f8 + 4,1);
                func_0x0001074287b0(pppppppuVar11 + -6,uVar46);
                uVar32 = 0;
                ppppppuVar35 = pppppppuVar11[-6];
                ppppppuVar12 = pppppppuVar11[-5];
                goto LAB_10a0b7684;
              }
            }
            break;
          }
        }
      }
      if (*(char *)(param_5 + 0x1b) == '\x01') {
        uVar46 = ((long)param_3[0x16] - (long)param_3[0x15] >> 3) * 0xf83e0f83e0f83e1;
        if (uVar46 < param_7 || uVar46 - param_7 == 0) goto LAB_10a0b7f90;
        func_0x000109382360(auStack_218,0,0,0,2);
        puVar18 = param_6;
        func_0x00010945a80c(param_6,&UNK_10f638c84);
        func_0x0001095b7584();
        uVar3 = *puVar18;
        *puVar18 = auStack_218[0];
        uVar22 = *(undefined8 *)(puVar18 + 8);
        *(undefined8 *)(puVar18 + 8) = uStack_210;
        auStack_218[0] = uVar3;
        uStack_210 = uVar22;
        func_0x000109380ffc(&uStack_210);
        pppppppuStack_100 = (uint *******)0x0;
        uStack_f8 = (uint *******)0x0;
        uStack_f0 = (uint ******)0x0;
        FUN_10a39d16c(&pppppppuStack_1d0,pppppppuStack_1e0,0xc,0,&pppppppuStack_100);
        pppppppuVar11 = pppppppuStack_1c8;
        pppppppuStack_1e0 = pppppppuStack_1d0;
        pppppppuVar21 = pppppppuStack_1d8;
        pppppppuStack_1d0 = (uint *******)0x0;
        pppppppuStack_1c8 = (uint *******)0x0;
        pppppppuStack_1d8 = pppppppuVar11;
        if (pppppppuVar21 != (uint *******)0x0) {
          pppppppuVar11 = pppppppuVar21 + 1;
          do {
            ppppppuVar35 = *pppppppuVar11;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar9) {
              *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppuVar35 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar21)[2])(pppppppuVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
          }
        }
        pppppppuVar21 = pppppppuStack_1c8;
        if (pppppppuStack_1c8 != (uint *******)0x0) {
          pppppppuVar11 = pppppppuStack_1c8 + 1;
          do {
            ppppppuVar35 = *pppppppuVar11;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar9) {
              *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppuVar35 == (uint ******)0x0) {
            (*(code *)(*pppppppuStack_1c8)[2])(pppppppuStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
          }
        }
        if (uStack_f8 != pppppppuStack_100) {
          uVar46 = 0;
          do {
            func_0x00010945a80c(param_6,&UNK_10f638c84);
            func_0x0001095b7584();
            if ((ulong)((long)uStack_f8 - (long)pppppppuStack_100 >> 2) <= uVar46)
            goto LAB_10a0b7f90;
            pppppppuStack_1c8 = (uint *******)(ulong)*(uint *)((long)pppppppuStack_100 + uVar46 * 4)
            ;
            pppppppuStack_1d0 = (uint *******)CONCAT71(pppppppuStack_1d0._1_7_,6);
            FUN_10a0a4bec();
            func_0x000109380ffc(&pppppppuStack_1c8,(ulong)pppppppuStack_1d0 & 0xff);
            uVar46 = uVar46 + 1;
          } while (uVar46 < (ulong)((long)uStack_f8 - (long)pppppppuStack_100 >> 2));
        }
        if (pppppppuStack_100 != (uint *******)0x0) {
          uStack_f8 = pppppppuStack_100;
          __ZdlPv();
        }
      }
      else {
        FUN_10a39d16c(&pppppppuStack_100,pppppppuStack_1e0,0xc,0,0);
        pppppppuVar11 = uStack_f8;
        pppppppuStack_1e0 = pppppppuStack_100;
        pppppppuVar21 = pppppppuStack_1d8;
        pppppppuStack_100 = (uint *******)0x0;
        uStack_f8 = (uint *******)0x0;
        pppppppuStack_1d8 = pppppppuVar11;
        if (pppppppuVar21 != (uint *******)0x0) {
          pppppppuVar11 = pppppppuVar21 + 1;
          do {
            ppppppuVar35 = *pppppppuVar11;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar9) {
              *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppuVar35 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar21)[2])(pppppppuVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
          }
        }
        pppppppuVar21 = uStack_f8;
        if (uStack_f8 != (uint *******)0x0) {
          pppppppuVar11 = uStack_f8 + 1;
          do {
            ppppppuVar35 = *pppppppuVar11;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar9) {
              *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppuVar35 == (uint ******)0x0) {
            (*(code *)(*uStack_f8)[2])(uStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
          }
        }
      }
    }
    goto LAB_10a0b769c;
  }
  bVar9 = false;
  lVar36 = 0;
  lVar43 = 0;
  do {
    pppppuVar16 = pppppuVar26;
    FUN_10a0e3118(pppppuVar26,lRam00000001137e9570 + 0x18);
    pppppuVar49 = pppppuVar26 + 1;
    if (pppppuVar49 != pppppuVar16) {
      lVar36 = lVar36 + 1;
    }
    pppppuVar16 = pppppuVar26;
    FUN_10a0e3118(pppppuVar26,lRam00000001137e9578 + 0x18);
    pppppuVar17 = pppppuVar26;
    FUN_10a0e3118(pppppuVar26,lRam00000001137e9580 + 0x18);
    if (pppppuVar49 != pppppuVar16) {
      lVar43 = lVar43 + 1;
    }
    bVar9 = (bool)(pppppuVar49 != pppppuVar17 | bVar9);
    pppppuVar26 = pppppuVar26 + 3;
  } while (pppppuVar26 != pppppuVar25);
  if ((lVar36 == 0 || lVar43 == 0) || lVar36 == lVar43) {
    if ((bVar9) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
      func_0x00010ae06f08(1,2,&UNK_10f638d76,&UNK_10f638f94,0x237,&UNK_10f639034);
    }
    func_0x000107c2b054(&pppppppuStack_100,"");
    pppppppuVar21 = pppppppuStack_1e0;
    ppppppuStack_1c0 = (uint ******)&ppppppuStack_1f0;
    pppppppuStack_1d0 = param_3;
    pppppppuStack_1c8 = (uint *******)&pppppppuStack_100;
    FUN_10a0d2960(pppppppuStack_1e0 + 8,
                  ((long)ppppppuStack_1f0[6] - (long)ppppppuStack_1f0[5] >> 3) * -0x5555555555555555
                 );
    if (pppppppuVar21[9] != pppppppuVar21[8]) {
      uVar46 = 0;
      lVar36 = *param_4;
      lVar43 = param_4[1];
      do {
        pppppppuStack_160 = (undefined8 *******)((ulong)pppppppuStack_160 & 0xffffffffffffff00);
        FUN_10a0cf3f0(&pppppppuStack_140,(long)pppppuStack_1e8 * 0x18,&pppppppuStack_160);
        pppppuVar26 = ppppppuStack_1f0[5];
        uVar32 = ((long)ppppppuStack_1f0[6] - (long)pppppuVar26 >> 3) * -0x5555555555555555;
        if (uVar32 < uVar46 || uVar32 - uVar46 == 0) {
          FUN_10a0d371c();
          goto LAB_10a0b7f90;
        }
        uVar32 = (param_4[1] - *param_4 >> 3) * -0x5555555555555555;
        if (uVar32 < uVar46 || uVar32 - uVar46 == 0) {
          uStack_f0 = (uint ******)((ulong)uStack_f0 & 0xffffffffffffff);
                    /* WARNING: Ignoring partial resolution of indirect */
          pppppppuStack_100._0_1_ = 0;
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&pppppppuStack_100,*param_4 + uVar46 * 0x18);
        }
        pppppuVar26 = pppppuVar26 + uVar46 * 3;
        FUN_10a0d29ec(&pppppppuStack_160,&pppppppuStack_1d0,lRam00000001137e9570 + 0x18,pppppuVar26,
                      uRam00000001137e95a8);
        pppppppuVar11 = uStack_f8;
        if (-1 < (long)uStack_f0) {
          pppppppuVar11 = (uint *******)((ulong)uStack_f0 >> 0x38);
        }
        if (pppppppuVar11 == (uint *******)0x0) {
          bStack_99 = 0xc;
          uStack_a8 = 0x74656772;
          uStack_b0._0_7_ = 0x54206870726f4d;
          uStack_b0._7_1_ = 0x61;
          uStack_a4 = 0;
          __ZNSt3__19to_stringEm(&uStack_d0,uVar46);
          uVar32 = CONCAT17(uStack_c1,uStack_c8);
          puVar6 = (undefined7 *)CONCAT17(uStack_c9,uStack_d0);
          if (-1 < (char)bStack_b9) {
            uVar32 = (ulong)bStack_b9;
            puVar6 = &uStack_d0;
          }
          puVar19 = &uStack_b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar19,puVar6,uVar32);
          pppppuVar25 = (uint *****)*puVar19;
          uStack_120 = (undefined7)puVar19[1];
          uStack_119 = (undefined1)*(undefined8 *)((long)puVar19 + 0xf);
          uStack_118 = (undefined7)((ulong)*(undefined8 *)((long)puVar19 + 0xf) >> 8);
          uVar3 = *(undefined1 *)((long)puVar19 + 0x17);
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          uVar32 = ((long)pppppppuVar21[9] - (long)pppppppuVar21[8] >> 3) * -0x71c71c71c71c71c7;
          if (uVar32 < uVar46 || uVar32 - uVar46 == 0) goto LAB_10a0b7f90;
          ppppppuVar35 = pppppppuVar21[8] + uVar46 * 9;
          if (*(char *)((long)ppppppuVar35 + 0x17) < '\0') {
            __ZdlPv(*ppppppuVar35);
          }
          *ppppppuVar35 = pppppuVar25;
          ppppppuVar35[1] = (uint *****)CONCAT17(uStack_119,uStack_120);
          *(ulong *)((long)ppppppuVar35 + 0xf) = CONCAT71(uStack_118,uStack_119);
          *(undefined1 *)((long)ppppppuVar35 + 0x17) = uVar3;
        }
        else {
          uVar32 = ((long)pppppppuVar21[9] - (long)pppppppuVar21[8] >> 3) * -0x71c71c71c71c71c7;
          if (uVar32 < uVar46 || uVar32 - uVar46 == 0) goto LAB_10a0b7f90;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (pppppppuVar21[8] + uVar46 * 9,&pppppppuStack_100);
        }
        if (lVar43 == lVar36) {
          uVar32 = ((long)pppppppuVar21[9] - (long)pppppppuVar21[8] >> 3) * -0x71c71c71c71c71c7;
          if (uVar32 < uVar46 || uVar32 - uVar46 == 0) goto LAB_10a0b7f90;
          FUN_10a0b4ec0(param_4,pppppppuVar21[8] + uVar46 * 9);
        }
        FUN_10a0d29ec(&uStack_b0,&pppppppuStack_1d0,lRam00000001137e9578 + 0x18,pppppuVar26,
                      uRam00000001137e95a8);
        if (pppppuStack_1e8 != (uint *****)0x0) {
          pppppuVar26 = (uint *****)0x0;
          puVar19 = (undefined8 *)CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0);
          bVar9 = puVar19 != (undefined8 *)0x0;
          bVar10 = puVar19 !=
                   (undefined8 *)
                   CONCAT17(uStack_a1,CONCAT25(uStack_a3,CONCAT14(uStack_a4,uStack_a8)));
          pppppppuVar20 = pppppppuStack_140;
          pppppppuVar39 = pppppppuStack_160;
          do {
            if (pppppppuStack_160 != (undefined8 *******)0x0 &&
                pppppppuStack_160 != pppppppuStack_158) {
              ppppppuVar42 = *pppppppuVar39;
              *(undefined4 *)(pppppppuVar20 + 1) = *(undefined4 *)(pppppppuVar39 + 1);
              *pppppppuVar20 = ppppppuVar42;
            }
            if (bVar9 && bVar10) {
              uVar22 = *puVar19;
              *(undefined4 *)((long)pppppppuVar20 + 0x14) = *(undefined4 *)(puVar19 + 1);
              *(undefined8 *)((long)pppppppuVar20 + 0xc) = uVar22;
            }
            pppppuVar26 = (uint *****)((long)pppppuVar26 + 1);
            pppppppuVar20 = pppppppuVar20 + 3;
            puVar19 = (undefined8 *)((long)puVar19 + 0xc);
            pppppppuVar39 = (undefined8 *******)((long)pppppppuVar39 + 0xc);
          } while (pppppuVar26 < pppppuStack_1e8);
        }
        uVar32 = ((long)pppppppuVar21[9] - (long)pppppppuVar21[8] >> 3) * -0x71c71c71c71c71c7;
        if (uVar32 < uVar46 || uVar32 - uVar46 == 0) goto LAB_10a0b7f90;
        FUN_10a0d3194(pppppppuVar21[8] + uVar46 * 9,&pppppppuStack_140);
        if (CONCAT17(uStack_b0._7_1_,(undefined7)uStack_b0) != 0) {
          uStack_a8 = (undefined4)(undefined7)uStack_b0;
          uStack_a4 = (undefined1)((uint7)(undefined7)uStack_b0 >> 0x20);
          uStack_a3 = (undefined2)((uint7)(undefined7)uStack_b0 >> 0x28);
          uStack_a1 = uStack_b0._7_1_;
          __ZdlPv();
        }
        if (pppppppuStack_160 != (undefined8 *******)0x0) {
          pppppppuStack_158 = pppppppuStack_160;
          __ZdlPv();
        }
        if (pppppppuStack_140 != (undefined8 *******)0x0) {
          pppppppuStack_138 = pppppppuStack_140;
          __ZdlPv();
        }
        uVar46 = uVar46 + 1;
      } while (uVar46 < (ulong)(((long)pppppppuVar21[9] - (long)pppppppuVar21[8] >> 3) *
                               -0x71c71c71c71c71c7));
    }
    goto LAB_10a0b71f4;
  }
  goto LAB_10a0b78b8;
  while( true ) {
    *(int *)((long)ppppppuVar35 + uVar32 * 4) = (int)uVar32;
    uVar32 = uVar32 + 1;
    if (uVar46 == uVar32) break;
LAB_10a0b7684:
    if ((long)ppppppuVar12 - (long)ppppppuVar35 >> 2 == uVar32) goto LAB_10a0b7f90;
  }
LAB_10a0b769c:
  if (*(char *)(param_5 + 0x1a) == '\x01') {
    FUN_10ab4e8b4(pppppppuStack_1e0,0);
  }
  *param_1 = pppppppuStack_1e0;
  param_1[1] = pppppppuStack_1d8;
  if (pppppppuStack_1d8 != (uint *******)0x0) {
    pppppppuVar21 = pppppppuStack_1d8 + 1;
    do {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar21,0x10);
      if (bVar9) {
        *pppppppuVar21 = (uint ******)((long)*pppppppuVar21 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010a0d0134(&pppppuStack_208);
  pppppppuVar21 = pppppppuStack_1d8;
  if (pppppppuStack_1d8 != (uint *******)0x0) {
    pppppppuVar11 = pppppppuStack_1d8 + 1;
    do {
      ppppppuVar35 = *pppppppuVar11;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
      if (bVar9) {
        *pppppppuVar11 = (uint ******)((long)ppppppuVar35 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppuVar35 == (uint ******)0x0) {
      (*(code *)(*pppppppuStack_1d8)[2])(pppppppuStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
LAB_10a0b78b8:
  uVar22 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  ___cxa_throw(uVar22,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a0b7f90:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0b7f94);
  (*pcVar8)();
}



/* Entry: 10a0b8640; end: 10a0b8957;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b88f8) */
/* WARNING: Removing unreachable block (ram,0x00010a0b8908) */

void FUN_10a0b8640(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
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
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
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
  undefined8 *puStack_248;
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
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
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
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code **ppcStack_38;
  
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f6373a3,0x1e5,&UNK_10f6373fe);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_80 = 0;
    puStack_48 = &uStack_90;
    uStack_88 = 0;
    uStack_81 = 0;
    uStack_90 = 0;
    pcStack_78 = FUN_10a0a5140;
    pcStack_70 = FUN_10a0a518c;
    pcStack_68 = FUN_10a0a51b4;
    pcStack_60 = FUN_10a0a55a8;
    ppcStack_38 = &pcStack_78;
    uStack_98 = 0;
    uStack_a0 = 0;
    ppuStack_a8 = (undefined8 ***)0x0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    ppuStack_c0 = (undefined8 ***)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_2e0 = 0xffffffff;
    puStack_248 = &uStack_240;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    puStack_1d8 = &uStack_1d0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    puStack_130 = &uStack_128;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_138 = 0;
    uStack_118 = 0;
    puStack_110 = &uStack_108;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    lStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_58 = 0;
    pcStack_50 = FUN_10a0d419c;
    uStack_40 = 0;
    uStack_7e = 1;
    puVar3 = &uStack_430;
    FUN_10a0b8958(puVar3,&uStack_90,param_3,&ppuStack_a8,&ppuStack_c0);
    if (((ulong)puVar3 & 1) == 0) {
      uVar1 = uStack_a0;
      if (-1 < (long)uStack_98) {
        uVar1 = uStack_98 >> 0x38;
      }
      if ((uVar1 != 0) && ((bRam000000011330a9e8 & 1) != 0)) {
        pppuVar2 = (undefined8 ***)ppuStack_a8;
        if (-1 < (long)uStack_98) {
          pppuVar2 = &ppuStack_a8;
        }
        func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f6373a3,0x1ff,&UNK_10f637429,in_x6,in_x7,
                            pppuVar2);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      uVar1 = uStack_b8;
      if (-1 < (long)uStack_b0) {
        uVar1 = uStack_b0 >> 0x38;
      }
      if ((uVar1 != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        pppuVar2 = (undefined8 ***)ppuStack_c0;
        if (-1 < (long)uStack_b0) {
          pppuVar2 = &ppuStack_c0;
        }
        func_0x00010ae06f08(1,2,&UNK_10f637370,&UNK_10f6373a3,0x205,&UNK_10f637442,in_x6,in_x7,
                            pppuVar2);
      }
      if (lStack_e8 < 0) {
        func_0x000107c3192c(param_1,uStack_f8,uStack_f0);
      }
      else {
        param_1[1] = uStack_f0;
        *param_1 = uStack_f8;
        param_1[2] = lStack_e8;
      }
    }
    FUN_10a0d41a4(&uStack_430);
  }
  return;
}



/* Entry: 10a0b8958; end: 10a0b9097;  */

undefined8 *
FUN_10a0b8958(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined ***pppuVar3;
  int ****ppppiVar4;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  int ***pppiStack_1c0;
  long lStack_1b8;
  char cStack_1a9;
  long lStack_1a8;
  long lStack_1a0;
  undefined7 uStack_198;
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined **appuStack_160 [2];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  FUN_10a0f2388(&pppiStack_1c0,param_3);
  plVar2 = param_3;
  FUN_10ab275d8();
  if ((int)plVar2 == 0) {
    if (cStack_1a9 < '\0') {
      ppppiVar4 = (int ****)pppiStack_1c0;
      if (lStack_1b8 == 4) goto LAB_10a0b8a60;
    }
    else if (cStack_1a9 == '\x04') {
      ppppiVar4 = &pppiStack_1c0;
LAB_10a0b8a60:
      if (*(int *)ppppiVar4 == 0x66746c67) {
        plVar2 = (long *)*param_3;
        if (-1 < *(char *)((long)param_3 + 0x17)) {
          plVar2 = param_3;
        }
        func_0x000107c2b054(auStack_1d8,plVar2);
        FUN_109febc44(appuStack_160);
        if ((code *)param_2[5] == (code *)0x0) {
          pppuVar3 = &ppuStack_150;
          FUN_10a002568(pppuVar3,&UNK_10f6372d3,0x15);
          FUN_10a002568();
          FUN_10a002568();
          __ZNKSt3__18ios_base6getlocEv
                    (&lStack_178,(undefined *)((long)pppuVar3 + (long)(*pppuVar3)[-3]));
          plVar2 = &lStack_178;
          __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (**(code **)(*plVar2 + 0x38))();
          __ZNSt3__16localeD1Ev(&lStack_178);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar3,plVar2);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar3);
          func_0x00010a002480(&lStack_178,&ppuStack_148,&uStack_190);
          goto LAB_10a0b8b44;
        }
        lStack_178 = 0;
        lStack_170 = 0;
        lStack_168 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        lStack_180 = 0;
        plVar2 = &lStack_178;
        (*(code *)param_2[5])(plVar2,&uStack_190,auStack_1d8,param_2[7]);
        if (((ulong)plVar2 & 1) == 0) {
          pppuVar3 = &ppuStack_150;
          FUN_10a002568(pppuVar3,&UNK_10f6372d3,0x15);
          FUN_10a002568();
          FUN_10a002568();
          FUN_10a002568();
          __ZNKSt3__18ios_base6getlocEv
                    (&lStack_1a8,(undefined *)((long)pppuVar3 + (long)(*pppuVar3)[-3]));
          plVar2 = &lStack_1a8;
          __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (**(code **)(*plVar2 + 0x38))();
          __ZNSt3__16localeD1Ev(&lStack_1a8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar3,plVar2);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar3);
          func_0x00010a002480(&lStack_1a8,&ppuStack_148,&uStack_41);
          goto LAB_10a0b8c40;
        }
        if (lStack_170 != lStack_178) {
          FUN_10a0b4b74(&lStack_1a8,auStack_1d8);
          if (lStack_170 == lStack_178) {
            FUN_10a0cd3e4();
LAB_10a0b8fb8:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0b8fbc);
            (*pcVar1)();
          }
          *param_2 = 0;
          param_2[1] = 0;
          *(undefined1 *)(param_2 + 2) = 0;
          FUN_10a0a6aa8(param_2,param_1,param_4,param_5,lStack_178,(int)lStack_170 - (int)lStack_178
                        ,&lStack_1a8);
          goto LAB_10a0b8a20;
        }
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          param_4[1] = 0xb;
          param_4 = (long *)*param_4;
        }
        else {
          *(undefined1 *)((long)param_4 + 0x17) = 0xb;
        }
        param_2 = (undefined8 *)0x0;
        *(undefined4 *)((long)param_4 + 7) = 0x2e656c69;
        *param_4 = 0x6966207974706d45;
        *(undefined1 *)((long)param_4 + 0xb) = 0;
        goto LAB_10a0b8c64;
      }
    }
    func_0x000107c2c4d8(param_4,&UNK_10f639090,0x17);
    param_2 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar2 = param_3;
    }
    func_0x000107c2b054(auStack_1d8,plVar2);
    FUN_109febc44(appuStack_160);
    if ((code *)param_2[5] == (code *)0x0) {
      pppuVar3 = &ppuStack_150;
      FUN_10a002568(pppuVar3,&UNK_10f6372d3,0x15);
      FUN_10a002568();
      FUN_10a002568();
      __ZNKSt3__18ios_base6getlocEv
                (&lStack_178,(undefined *)((long)pppuVar3 + (long)(*pppuVar3)[-3]));
      plVar2 = &lStack_178;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar2 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_178);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar3,plVar2);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar3);
      func_0x00010a002480(&lStack_178,&ppuStack_148,&uStack_190);
LAB_10a0b8b44:
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        __ZdlPv(*param_4);
      }
      param_2 = (undefined8 *)0x0;
      param_4[1] = lStack_170;
      *param_4 = lStack_178;
      param_4[2] = lStack_168;
    }
    else {
      lStack_178 = 0;
      lStack_170 = 0;
      lStack_168 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      lStack_180 = 0;
      plVar2 = &lStack_178;
      (*(code *)param_2[5])(plVar2,&uStack_190,auStack_1d8,param_2[7]);
      if (((ulong)plVar2 & 1) == 0) {
        pppuVar3 = &ppuStack_150;
        FUN_10a002568(pppuVar3,&UNK_10f6372d3,0x15);
        FUN_10a002568();
        FUN_10a002568();
        FUN_10a002568();
        __ZNKSt3__18ios_base6getlocEv
                  (&lStack_1a8,(undefined *)((long)pppuVar3 + (long)(*pppuVar3)[-3]));
        plVar2 = &lStack_1a8;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar2 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_1a8);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar3,plVar2);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar3);
        func_0x00010a002480(&lStack_1a8,&ppuStack_148,&uStack_41);
LAB_10a0b8c40:
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          __ZdlPv(*param_4);
        }
        param_2 = (undefined8 *)0x0;
        param_4[1] = lStack_1a0;
        *param_4 = lStack_1a8;
        param_4[2] = CONCAT17(cStack_191,uStack_198);
      }
      else {
        FUN_10a0b4b74(&lStack_1a8,auStack_1d8);
        if (lStack_170 == lStack_178) {
          FUN_10a0cd3e4();
          goto LAB_10a0b8fb8;
        }
        FUN_10a0b4c14(param_2,param_1,param_4,param_5,lStack_178,(int)lStack_170 - (int)lStack_178,
                      &lStack_1a8);
LAB_10a0b8a20:
        if (cStack_191 < '\0') {
          __ZdlPv(lStack_1a8);
        }
      }
LAB_10a0b8c64:
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      if (lStack_178 != 0) {
        lStack_170 = lStack_178;
        __ZdlPv();
      }
    }
    appuStack_160[0] = &PTR_SUB_1108a5a38;
    ppuStack_150 = &PTR_DAT_1108a5a60;
    appuStack_e0[0] = &PTR_DAT_1108a5a88;
    ppuStack_148 = &PTR_DAT_11088d7b0;
    if (cStack_f1 < '\0') {
      __ZdlPv(uStack_108);
    }
    ppuStack_148 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_140);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_160,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
    if (cStack_1c1 < '\0') {
      __ZdlPv(auStack_1d8[0]);
    }
  }
  if (cStack_1a9 < '\0') {
    __ZdlPv(pppiStack_1c0);
  }
  return param_2;
}



/* Entry: 10a0b9098; end: 10a0b94eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b944c) */
/* WARNING: Removing unreachable block (ram,0x00010a0b945c) */

void FUN_10a0b9098(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_518;
  byte *pbStack_510;
  undefined8 *puStack_508;
  undefined8 **ppuStack_500;
  undefined8 *puStack_4f8;
  undefined8 **ppuStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  byte bStack_4c1;
  undefined8 *puStack_4c0;
  undefined7 uStack_4b8;
  undefined1 uStack_4b1;
  undefined2 uStack_4b0;
  undefined1 uStack_4ae;
  code *pcStack_4a8;
  code *pcStack_4a0;
  code *pcStack_498;
  code *pcStack_490;
  undefined8 uStack_488;
  code *pcStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  code **ppcStack_468;
  undefined8 uStack_460;
  undefined5 uStack_458;
  undefined3 uStack_453;
  undefined5 uStack_450;
  undefined8 uStack_44b;
  byte bStack_443;
  undefined8 uStack_442;
  undefined2 uStack_43a;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
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
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
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
  undefined8 *puStack_248;
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
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
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
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
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
  undefined8 **ppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  ppuStack_98 = (undefined8 ***)0x0;
  uStack_44b = *(undefined8 *)((long)param_5 + 0x15);
  uStack_450 = (undefined5)((ulong)*(undefined8 *)((long)param_5 + 0xd) >> 0x18);
  uStack_460 = *param_5;
  uStack_458 = (undefined5)param_5[1];
  uStack_453 = (undefined3)((ulong)param_5[1] >> 0x28);
  uStack_442 = *(undefined8 *)((long)param_5 + 0x1e);
  uStack_43a = *(undefined2 *)((long)param_5 + 0x26);
  lStack_438 = *(long *)(param_2 + 0x18);
  bStack_443 = *(int *)(*(long *)(lStack_438 + 0xa20) + 0x18) < 0xff |
               *(byte *)((long)param_5 + 0x1d) & 1;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_2e0 = 0xffffffff;
  puStack_248 = &uStack_240;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  puStack_1d8 = &uStack_1d0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  uStack_1c0 = 0;
  puStack_130 = &uStack_128;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_138 = 0;
  uStack_118 = 0;
  puStack_110 = &uStack_108;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  ppcStack_468 = &pcStack_4a8;
  uStack_4b0 = 0;
  puStack_4c0 = (undefined8 *)0x0;
  uStack_4b8 = 0;
  uStack_4b1 = 0;
  pcStack_4a8 = FUN_10a0a5140;
  pcStack_4a0 = FUN_10a0a518c;
  pcStack_498 = FUN_10a0a51b4;
  pcStack_490 = FUN_10a0a55a8;
  uStack_470 = 0;
  uStack_488 = 0;
  pcStack_480 = FUN_10a0c57e8;
  uStack_4ae = 1;
  bStack_4c1 = 0;
  puStack_478 = &uStack_460;
  func_0x000107c2b054(auStack_4e0,"");
  pbStack_510 = &bStack_4c1;
  puStack_4f8 = &uStack_80;
  ppuStack_4f0 = &ppuStack_98;
  lStack_518 = param_3;
  puStack_508 = &uStack_460;
  ppuStack_500 = &puStack_4c0;
  puStack_4e8 = auStack_4e0;
  if (*(uint *)(param_3 + 0x18) == 0xffffffff) {
    FUN_10a0d459c();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0b948c);
    (*pcVar6)();
  }
  plStack_68 = &lStack_518;
  (*(code *)(&PTR_FUN_110ba1528)[*(uint *)(param_3 + 0x18)])(&plStack_68,param_3);
  if ((bStack_4c1 & 1) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f637454,0x241,&UNK_10f637564,param_8,param_9,
                          &uStack_80);
    }
    *param_1 = 0;
    param_1[1] = param_1 + 1;
    param_1[2] = param_1 + 1;
    param_1[3] = 0;
    param_1[4] = param_1 + 4;
    param_1[5] = param_1 + 4;
    param_1[6] = 0;
    param_1[7] = param_1 + 7;
    param_1[8] = param_1 + 7;
    param_1[9] = 0;
    param_1[10] = param_1 + 10;
    param_1[0xb] = param_1 + 10;
    param_1[0xc] = 0;
    param_1[0xd] = param_1 + 0xd;
    param_1[0xe] = param_1 + 0xd;
    param_1[0xf] = 0;
    param_1[0x10] = param_1 + 0x10;
    param_1[0x11] = param_1 + 0x10;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
  }
  else {
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0x3d9d89d9;
    }
    uVar2 = uStack_90;
    if (-1 < (long)uStack_88) {
      uVar2 = uStack_88 >> 0x38;
    }
    if ((uVar2 != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
      pppuVar3 = (undefined8 ***)ppuStack_98;
      if (-1 < (long)uStack_88) {
        pppuVar3 = &ppuStack_98;
      }
      func_0x00010ae06f08(1,2,&UNK_10f637370,&UNK_10f637454,0x24b,&UNK_10f63757c,param_8,param_9,
                          pppuVar3);
    }
    plVar8 = (long *)param_4[1];
    uStack_528 = param_4[1];
    uStack_530 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
    FUN_10a0b94ec(param_1,param_2,&uStack_460,&uStack_530,auStack_4e0,param_6);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if (cStack_4c9 < '\0') {
    __ZdlPv(auStack_4e0[0]);
  }
  FUN_10a0d48d8(&uStack_b0);
  puStack_4c0 = &uStack_c8;
  func_0x00010a0d494c(&puStack_4c0);
  FUN_10a0d41a4(&uStack_430);
  return;
}



/* Entry: 10a0b94ec; end: 10a0c10a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a0b94ec(long *param_1,long param_2,mach_header *param_3,undefined8 *param_4,
                  undefined8 param_5,float *param_6)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined1 uVar17;
  char cVar18;
  char cVar19;
  dword dVar20;
  float fVar21;
  code *pcVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  undefined1 *puVar26;
  int *piVar27;
  int *piVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  mach_header *pmVar35;
  mach_header *pmVar36;
  mach_header *pmVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 *puVar40;
  undefined8 *puVar41;
  mach_header *pmVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long ***ppplVar45;
  long *******ppppppplVar46;
  undefined8 uVar47;
  undefined **ppuVar48;
  dword *pdVar49;
  char *pcVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  byte bVar53;
  uint uVar54;
  ulong uVar56;
  long lVar57;
  uint uVar55;
  undefined8 *puVar58;
  undefined1 auVar59 [8];
  long lVar60;
  uint *puVar61;
  long lVar62;
  undefined *extraout_x8;
  mach_header *pmVar63;
  long lVar64;
  long lVar65;
  ulong uVar66;
  long lVar67;
  undefined8 *puVar68;
  long lVar69;
  long lVar70;
  ulong uVar71;
  ulong uVar72;
  mach_header *pmVar73;
  mach_header *pmVar74;
  long ******pppppplVar75;
  long ******pppppplVar76;
  ulong uVar77;
  long *plVar78;
  mach_header *pmVar79;
  undefined8 uVar80;
  mach_header *pmVar81;
  dword *pdVar82;
  undefined4 *puVar83;
  undefined8 uVar84;
  long **pplVar85;
  undefined1 unaff_x22 [8];
  long lVar86;
  long *****ppppplVar87;
  undefined8 uVar88;
  int iVar89;
  dword *pdVar90;
  long *****ppppplVar91;
  long lVar92;
  mach_header *pmVar93;
  undefined1 auVar94 [8];
  uint uVar95;
  undefined1 auVar96 [8];
  undefined1 auVar97 [8];
  undefined *puVar98;
  dword *pdVar99;
  long *plVar100;
  float fVar101;
  long ******pppppplVar102;
  double dVar103;
  dword dVar104;
  float fVar105;
  dword dVar106;
  dword dVar107;
  dword dVar108;
  float fVar109;
  mach_header *pmStack_530;
  mach_header *pmStack_528;
  uint *puStack_520;
  long *plStack_518;
  undefined1 auStack_510 [8];
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  mach_header *pmStack_4e8;
  undefined1 auStack_4e0 [24];
  mach_header *pmStack_4c8;
  mach_header *apmStack_4c0 [3];
  undefined1 auStack_4a8 [8];
  mach_header *pmStack_4a0;
  ulong uStack_498;
  mach_header *pmStack_490;
  mach_header *pmStack_488;
  mach_header *pmStack_480;
  mach_header *pmStack_478;
  mach_header *pmStack_470;
  ulong uStack_468;
  mach_header *pmStack_460;
  mach_header *pmStack_458;
  mach_header *pmStack_450;
  mach_header *pmStack_448;
  undefined4 uStack_440;
  mach_header *pmStack_438;
  mach_header *pmStack_430;
  mach_header *pmStack_428;
  undefined1 auStack_420 [8];
  mach_header *apmStack_418 [2];
  long lStack_408;
  long *******ppppppplStack_400;
  long *******ppppppplStack_3f8;
  long lStack_3f0;
  long *******ppppppplStack_3e8;
  long *******ppppppplStack_3e0;
  long lStack_3d8;
  long *******ppppppplStack_3d0;
  long *******ppppppplStack_3c8;
  long lStack_3c0;
  long *******ppppppplStack_3b8;
  long *******ppppppplStack_3b0;
  long lStack_3a8;
  long *******ppppppplStack_3a0;
  long *******ppppppplStack_398;
  long lStack_390;
  long *******ppppppplStack_388;
  long *******ppppppplStack_380;
  long lStack_378;
  mach_header *pmStack_370;
  mach_header *pmStack_368;
  mach_header *pmStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  int iStack_338;
  undefined4 uStack_334;
  long lStack_330;
  long *plStack_328;
  long *****ppppplStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *****ppppplStack_300;
  undefined1 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 uStack_2e0;
  uint *puStack_2d8;
  mach_header *pmStack_2d0;
  mach_header *pmStack_2c8;
  mach_header *pmStack_2c0;
  mach_header *pmStack_2b8;
  mach_header *pmStack_2b0;
  mach_header *pmStack_2a8;
  mach_header *pmStack_2a0;
  mach_header *pmStack_298;
  mach_header *pmStack_290;
  mach_header *pmStack_288;
  undefined1 auStack_280 [8];
  mach_header *pmStack_278;
  ulong uStack_270;
  undefined1 auStack_268 [8];
  mach_header *pmStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [8];
  mach_header *pmStack_248;
  mach_header *pmStack_240;
  mach_header *pmStack_230;
  mach_header *pmStack_228;
  mach_header *pmStack_220;
  mach_header *pmStack_218;
  undefined1 auStack_210 [8];
  mach_header *pmStack_208;
  ulong uStack_200;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  dword *pdStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  char cStack_1a9;
  undefined8 uStack_1a8;
  char cStack_191;
  long alStack_190 [3];
  long *plStack_178;
  undefined1 auStack_170 [8];
  mach_header *pmStack_168;
  long lStack_160;
  long *plStack_158;
  dword dStack_150;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  mach_header *pmStack_120;
  mach_header *pmStack_118;
  undefined1 auStack_110 [8];
  mach_header *pmStack_108;
  dword *pdStack_100;
  dword dStack_f8;
  dword dStack_f4;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  int iStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_318._0_4_ = param_3->cpusubtype;
  uStack_318._4_4_ = param_3->filetype;
  ppppplStack_320 = *(long ******)param_3;
  uStack_308._0_4_ = param_3->flags;
  uStack_308._4_4_ = param_3->reserved;
  uStack_310._0_4_ = param_3->ncmds;
  uStack_310._4_4_ = param_3->sizeofcmds;
  ppppplStack_300 = *(long ******)(param_3 + 1);
  lStack_3f0 = 0;
  lStack_3d8 = 0;
  lStack_3c0 = 0;
  lStack_3a8 = 0;
  lStack_390 = 0;
  plStack_328 = (long *)0x0;
  lStack_330 = 0;
  iStack_338 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  lStack_340 = 0;
  lStack_348 = 0;
  pmStack_370 = (mach_header *)0x0;
  lStack_378 = 0;
  pmStack_360 = (mach_header *)0x0;
  pmStack_368 = (mach_header *)0x0;
  pmStack_470 = (mach_header *)0x0;
  uStack_468 = 0;
  apmStack_4c0[1] = (mach_header *)0x0;
  apmStack_4c0[0] = (mach_header *)0x0;
  auStack_4a8 = (undefined1  [8])0x0;
  apmStack_4c0[2] = (mach_header *)0x0;
  uStack_498 = 0;
  pmStack_4a0 = (mach_header *)0x0;
  pmStack_488 = (mach_header *)0x0;
  pmStack_490 = (mach_header *)0x0;
  pmStack_480 = (mach_header *)0x0;
  pmStack_458 = (mach_header *)0x0;
  pmStack_460 = (mach_header *)0x0;
  pmStack_448 = (mach_header *)0x0;
  pmStack_450 = (mach_header *)0x0;
  uStack_440 = 0x3f800000;
  pmStack_430 = (mach_header *)0x0;
  pmStack_428 = (mach_header *)0x0;
  auStack_420[0] = 0;
  apmStack_418[0] = (mach_header *)0x0;
  pmStack_478 = (mach_header *)&pmStack_470;
  pmStack_438 = (mach_header *)&pmStack_430;
  ppppppplStack_400 = (long *******)&ppppppplStack_400;
  ppppppplStack_3f8 = (long *******)&ppppppplStack_400;
  ppppppplStack_3e8 = (long *******)&ppppppplStack_3e8;
  ppppppplStack_3e0 = (long *******)&ppppppplStack_3e8;
  ppppppplStack_3d0 = (long *******)&ppppppplStack_3d0;
  ppppppplStack_3c8 = (long *******)&ppppppplStack_3d0;
  ppppppplStack_3b8 = (long *******)&ppppppplStack_3b8;
  ppppppplStack_3b0 = (long *******)&ppppppplStack_3b8;
  ppppppplStack_3a0 = (long *******)&ppppppplStack_3a0;
  ppppppplStack_398 = (long *******)&ppppppplStack_3a0;
  ppppppplStack_388 = (long *******)&ppppppplStack_388;
  ppppppplStack_380 = (long *******)&ppppppplStack_388;
  func_0x000109382360(auStack_4e0 + 0x10,0,0,0,1);
  pmVar63 = apmStack_418[0];
  uVar17 = auStack_420[0];
  auStack_420[0] = auStack_4e0[0x10];
  auStack_4e0[0x10] = uVar17;
  apmStack_418[0] = pmStack_4c8;
  pmStack_4c8 = pmVar63;
  func_0x000109380ffc(&pmStack_4c8);
  pmStack_240 = (mach_header *)0x0;
  auStack_250 = (undefined1  [8])0x0;
  pmStack_248 = (mach_header *)0x0;
  func_0x000109c20474(&param_3[0x1c].flags,
                      (*(long *)&param_3[5].ncmds - *(long *)&param_3[5].cpusubtype >> 3) *
                      0xf83e0f83e0f83e1);
  func_0x000109382360(auStack_280,0,0,0,2);
  puVar26 = auStack_420;
  func_0x00010945a80c(puVar26,&UNK_10f414f74);
  uVar17 = *puVar26;
  *puVar26 = auStack_280[0];
  auStack_280[0] = uVar17;
  pmVar63 = *(mach_header **)(puVar26 + 8);
  *(mach_header **)(puVar26 + 8) = pmStack_278;
  pmStack_278 = pmVar63;
  func_0x000109380ffc(&pmStack_278);
  pmStack_4e8 = (mach_header *)((ulong)pmStack_4e8 & 0xffffffffffffff00);
  auStack_4e0._0_8_ = (mach_header *)0x0;
  lVar65._0_4_ = param_3[5].cpusubtype;
  lVar65._4_4_ = param_3[5].filetype;
  lVar57._0_4_ = param_3[5].ncmds;
  lVar57._4_4_ = param_3[5].sizeofcmds;
  if (lVar57 == lVar65) {
    uVar77 = 0;
  }
  else {
    uVar77 = 0;
    unaff_x22 = (undefined1  [8])&UNK_10f638c1f;
    do {
      uVar71 = ((long)*(long ******)(param_3 + 0x1d) - *(long *)&param_3[0x1c].flags >> 3) *
               -0x5555555555555555;
      if (uVar71 < uVar77 || uVar71 - uVar77 == 0) goto LAB_10a0c08b4;
      puVar58 = (undefined8 *)(lVar65 + uVar77 * 0x108);
      lVar65 = *(long *)&param_3[0x1c].flags + uVar77 * 0x18;
      piVar27 = (int *)(puVar58 + 0xc);
      if (*piVar27 == 7) {
        func_0x000107c2b054(auStack_140,&UNK_10f637364);
        func_0x00010a0b4efc(piVar27,auStack_140);
        if ((long)uStack_130 < 0) {
          __ZdlPv(auStack_140);
        }
        if ((*piVar27 == 5) &&
           (func_0x000107c31930(lVar65,(*(long *)(piVar27 + 0x12) - *(long *)(piVar27 + 0x10) >> 3)
                                       * -0x1111111111111111), *piVar27 == 5)) {
          uVar71 = 0;
          do {
            uVar56 = (*(long *)(piVar27 + 0x12) - *(long *)(piVar27 + 0x10) >> 3) *
                     -0x1111111111111111;
            if (uVar56 < uVar71 || uVar56 - uVar71 == 0) break;
            piVar28 = piVar27;
            func_0x00010a0b4fbc(piVar27,uVar71);
            func_0x00010a0b4ec0(lVar65,piVar28 + 4);
            uVar71 = uVar71 + 1;
          } while (*piVar27 == 5);
        }
        puVar26 = auStack_420;
        func_0x00010945a80c(puVar26,&UNK_10f414f74);
        uStack_1d8 = (mach_header *)0x0;
        func_0x0001094749d8(auStack_140,puVar58 + 0x1b,auStack_1f0,1,0);
        FUN_10a0a4bec(puVar26,auStack_140);
        func_0x000109380ffc(&uStack_138,(ulong)auStack_140 & 0xff);
        if (uStack_1d8 == (mach_header *)auStack_1f0) {
          lVar57 = 0x20;
        }
        else {
          if (uStack_1d8 == (mach_header *)0x0) goto LAB_10a0b98e0;
          lVar57 = 0x28;
        }
        (**(code **)((long)*(long ******)uStack_1d8 + lVar57))();
      }
      else {
        puVar26 = auStack_420;
        func_0x00010945a80c(puVar26,&UNK_10f414f74);
        func_0x000109382360(auStack_140,0,0,0,1);
        FUN_10a0a4bec(puVar26,auStack_140);
        func_0x000109380ffc(&uStack_138,(ulong)auStack_140 & 0xff);
      }
LAB_10a0b98e0:
      pmStack_168 = (mach_header *)0x0;
      auStack_170 = (undefined1  [8])0x0;
      lStack_160 = 0;
      lVar70 = puVar58[4];
      for (lVar57 = puVar58[3]; pmVar63 = pmStack_248, lVar57 != lVar70; lVar57 = lVar57 + 0x100) {
        lVar64 = lVar57;
        FUN_10a0e3118(lVar57,lRam00000001137e9570 + 0x18);
        if (lVar57 + 8 == lVar64) {
          func_0x000107c2b054(auStack_140,&UNK_10f638c1f);
          pmVar63 = (mach_header *)uStack_138;
          if (-1 < (long)uStack_130) {
            pmVar63 = (mach_header *)((ulong)uStack_130 >> 0x38);
          }
          if (pmVar63 != (mach_header *)0x0) {
            uVar47 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      ();
            ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0c08b4;
          }
        }
        else {
          uStack_138 = (undefined **)0x0;
          auStack_140 = (undefined1  [8])0x0;
          uStack_130 = (code *)0x0;
        }
        FUN_10a0b5240(auStack_268,lVar57,param_3,lVar65,&ppppplStack_320,auStack_420,uVar77);
        uVar47._0_4_ = param_3[1].cpusubtype;
        uVar47._4_4_ = param_3[1].filetype;
        FUN_10a0cf520(&pmStack_220,uVar47,auStack_268);
        pmVar63 = pmStack_260;
        if (pmStack_260 != (mach_header *)0x0) {
          pdVar90 = &pmStack_260->cpusubtype;
          do {
            lVar64 = *(long *)pdVar90;
            cVar18 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar64 + -1;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          if (lVar64 == 0) {
            (*(code *)(*(long ******)pmStack_260)[2])(pmStack_260);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
        pmVar63 = pmStack_220;
        if (pmStack_220 != (mach_header *)0x0) {
          if (*(char *)((long)puVar58 + 0x17) < '\0') {
            func_0x000107c3192c(auStack_210,*puVar58,puVar58[1]);
          }
          else {
            pmStack_208 = (mach_header *)puVar58[1];
            auStack_210 = (undefined1  [8])*puVar58;
            uStack_200 = puVar58[2];
          }
          if (*(char *)((long)&pmVar63[3].filetype + 3) < '\0') {
            uVar80._0_4_ = pmVar63[2].flags;
            uVar80._4_4_ = pmVar63[2].reserved;
            __ZdlPv(uVar80);
          }
          *(mach_header **)(pmVar63 + 3) = pmStack_208;
          pmVar63[2].flags = auStack_210._0_4_;
          pmVar63[2].reserved = auStack_210._4_4_;
          pmVar63[3].cpusubtype = (undefined4)uStack_200;
          pmVar63[3].filetype = uStack_200._4_4_;
          uStack_200 = uStack_200 & 0xffffffffffffff;
          auStack_210 = (undefined1  [8])((ulong)auStack_210 & 0xffffffffffffff00);
          FUN_10a0b5098(auStack_170,&pmStack_220);
        }
        pmVar63 = pmStack_218;
        if (pmStack_218 != (mach_header *)0x0) {
          pdVar90 = &pmStack_218->cpusubtype;
          do {
            lVar64 = *(long *)pdVar90;
            cVar18 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar64 + -1;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          if (lVar64 == 0) {
            (*(code *)(*(long ******)pmStack_218)[2])(pmStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
        if ((long)uStack_130 < 0) {
          __ZdlPv(auStack_140);
        }
      }
      if (pmStack_248 < pmStack_240) {
        *(long ******)pmStack_248 = (long *****)0x0;
        pmStack_248->cpusubtype = 0;
        pmStack_248->filetype = 0;
        pmStack_248->ncmds = 0;
        pmStack_248->sizeofcmds = 0;
        FUN_10a0cff18(pmStack_248,auStack_170,pmStack_168,(long)pmStack_168 - (long)auStack_170 >> 4
                     );
        pmVar63 = (mach_header *)&pmVar63->flags;
      }
      else {
        lVar65 = (long)pmStack_248 - (long)auStack_250;
        uVar71 = (lVar65 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar71) {
          FUN_10a0d005c();
          goto LAB_10a0c08b4;
        }
        lVar57 = (long)pmStack_240 - (long)auStack_250 >> 3;
        uVar56 = lVar57 * 0x5555555555555556;
        if (uVar56 < uVar71 || uVar56 - uVar71 == 0) {
          uVar56 = uVar71;
        }
        if (0x555555555555554 < (ulong)(lVar57 * -0x5555555555555555)) {
          uVar56 = 0xaaaaaaaaaaaaaaa;
        }
        pmStack_120 = (mach_header *)auStack_250;
        if (uVar56 == 0) {
          lVar57 = 0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar56) {
            func_0x000109ffded8();
            goto LAB_10a0c08b4;
          }
          lVar57 = uVar56 * 0x18;
          __Znwm();
        }
        puVar58 = (undefined8 *)(lVar57 + lVar65);
        pmVar79 = (mach_header *)(lVar57 + uVar56 * 0x18);
        puVar58[1] = 0;
        puVar58[2] = 0;
        *puVar58 = 0;
        auStack_140 = (undefined1  [8])lVar57;
        uStack_138 = (undefined **)puVar58;
        uStack_130 = (code *)puVar58;
        uStack_128 = pmVar79;
        FUN_10a0cff18(puVar58,auStack_170,pmStack_168,(long)pmStack_168 - (long)auStack_170 >> 4);
        auVar59 = auStack_250;
        pmVar63 = (mach_header *)(puVar58 + 3);
        pmVar42 = (mach_header *)((long)puVar58 - ((long)pmStack_248 - (long)auStack_250));
        _memcpy(pmVar42,auStack_250);
        uStack_130 = (code *)auVar59;
        uStack_128 = pmStack_240;
        uStack_138 = (undefined **)auVar59;
        auStack_140 = auVar59;
        auStack_250 = (undefined1  [8])pmVar42;
        pmStack_248 = pmVar63;
        pmStack_240 = pmVar79;
        FUN_10a0d0070(auStack_140);
      }
      auStack_140 = (undefined1  [8])auStack_170;
      pmStack_248 = pmVar63;
      FUN_10a0cffec(auStack_140);
      uVar77 = uVar77 + 1;
      lVar65 = *(long *)&param_3[5].cpusubtype;
    } while (uVar77 < (ulong)((*(long *)&param_3[5].ncmds - lVar65 >> 3) * 0xf83e0f83e0f83e1));
    uVar77 = (ulong)pmStack_4e8 & 0xff;
  }
  func_0x000109380ffc(auStack_4e0,uVar77);
  pmVar42 = apmStack_4c0[0];
  pmVar63 = apmStack_4c0[1];
  if (apmStack_4c0[0] != (mach_header *)0x0) {
    while (pmVar63 != pmVar42) {
      auStack_140 = (undefined1  [8])&pmVar63[-1].cpusubtype;
      FUN_10a0cffec(auStack_140);
      pmVar63 = (mach_header *)&pmVar63[-1].cpusubtype;
    }
    apmStack_4c0[1] = pmVar42;
    __ZdlPv(apmStack_4c0[0]);
  }
  apmStack_4c0[1] = pmStack_248;
  apmStack_4c0[0] = (mach_header *)auStack_250;
  apmStack_4c0[2] = pmStack_240;
  pmStack_240 = (mach_header *)0x0;
  pmStack_248 = (mach_header *)0x0;
  auStack_250 = (undefined1  [8])0x0;
  FUN_10a0d00cc(auStack_250);
  if (param_6 != (float *)0x0) {
    *param_6 = 0.15384616;
  }
  cVar18 = uStack_308._6_1_;
  if (((uStack_308 & 0x1000000000000) != 0) || ((uStack_308 & 0x100000000000000) != 0)) {
    FUN_10ad00f3c(&pmStack_4e8,param_5);
    auStack_210 = (undefined1  [8])&pmStack_208;
    uStack_200 = 0;
    pmStack_208 = (mach_header *)0x0;
    auStack_250 = (undefined1  [8])&pmStack_248;
    pmStack_240 = (mach_header *)0x0;
    pmStack_248 = (mach_header *)0x0;
    lVar70._0_4_ = param_3[4].ncmds;
    lVar70._4_4_ = param_3[4].sizeofcmds;
    lVar64._0_4_ = param_3[4].flags;
    lVar64._4_4_ = param_3[4].reserved;
    for (; lVar70 != lVar64; lVar70 = lVar70 + 0x628) {
      if (*(int *)(lVar70 + 0x148) != -1) {
        func_0x000105341058(auStack_210,lVar70 + 0x148,lVar70 + 0x148);
      }
      if (*(int *)(lVar70 + 0x3a0) != -1) {
        func_0x000105341058(auStack_250,lVar70 + 0x3a0,lVar70 + 0x3a0);
      }
    }
    pmStack_278 = (mach_header *)0x0;
    auStack_280 = (undefined1  [8])0x0;
    uStack_270 = 0;
    func_0x000109382360(&pmStack_290,0,0,0,2);
    puVar26 = auStack_420;
    func_0x00010945a80c(puVar26,&UNK_10f6372a6);
    uVar17 = *puVar26;
    *puVar26 = pmStack_290._0_1_;
    pmStack_290 = (mach_header *)CONCAT71(pmStack_290._1_7_,uVar17);
    pmVar63 = *(mach_header **)(puVar26 + 8);
    *(mach_header **)(puVar26 + 8) = pmStack_288;
    pmStack_288 = pmVar63;
    func_0x000109380ffc(&pmStack_288);
    ppppplVar91 = *(long ******)&param_3[6].flags;
    if (*(long ******)(param_3 + 7) != ppppplVar91) {
      uVar77 = 0;
LAB_10a0b9da8:
      pmStack_298 = (mach_header *)0x0;
      pmStack_2a0 = (mach_header *)0x0;
      uVar55 = *(uint *)((long)ppppplVar91 + (uVar77 * 0x38 + 7) * 4);
      uVar71 = (ulong)uVar55;
      if ((int)uVar55 < 0) {
        uStack_130._7_1_ = 0x12;
        uStack_138 = (undefined **)0x697361625f657275;
        auStack_140 = (undefined1  [8])0x747865745f52484b;
        uStack_130 = (code *)CONCAT53(uStack_130._3_5_,0x7573);
        ppppplVar87 = ppppplVar91 + uVar77 * 0x1c + 0x13;
        FUN_10a0dc2d0(ppppplVar87,auStack_140);
        if ((long)uStack_130 < 0) {
          __ZdlPv(auStack_140);
        }
        if ((ppppplVar91 + uVar77 * 0x1c + 0x14 != ppppplVar87) &&
           (ppppplVar30 = ppppplVar87 + 7, *(int *)ppppplVar30 == 7)) {
          func_0x000107c2b054(auStack_140,"source");
          if (*(int *)ppppplVar30 == 7) {
            ppppplVar29 = ppppplVar87 + 0x12;
            FUN_10a0dc2d0(ppppplVar29,auStack_140);
            bVar23 = ppppplVar87 + 0x13 != ppppplVar29;
          }
          else {
            bVar23 = false;
          }
          if ((long)uStack_130 < 0) {
            __ZdlPv(auStack_140);
          }
          if (bVar23) {
            func_0x000107c2b054(auStack_140,"source");
            func_0x00010a0b4efc(ppppplVar30,auStack_140);
            if ((long)uStack_130 < 0) {
              __ZdlPv(auStack_140);
            }
            if (*(int *)ppppplVar30 == 2) {
              uVar71 = (ulong)*(uint *)((long)ppppplVar30 + 4);
              goto LAB_10a0b9ec0;
            }
          }
        }
        uVar71 = 0xffffffff;
      }
LAB_10a0b9ec0:
      iVar89 = (int)uVar71;
      if (-1 < iVar89) {
        uVar56 = (*(long *)&param_3[7].flags - *(long *)&param_3[7].ncmds >> 3) *
                 -0x7063e7063e7063e7;
        if (iVar89 < (int)uVar56) {
          pmVar63 = pmStack_208;
          if (uVar71 <= uVar56 && uVar56 - uVar71 != 0) {
            for (; pmVar42 = pmStack_248, pmVar63 != (mach_header *)0x0;
                pmVar63 = *(mach_header **)pmVar63) {
              if ((long)(int)pmVar63->reserved <= (long)uVar77) {
                if ((long)uVar77 <= (long)(int)pmVar63->reserved) {
                  uVar55 = 1;
                  goto joined_r0x00010a0ba18c;
                }
                pmVar63 = (mach_header *)&pmVar63->cpusubtype;
              }
            }
            uVar55 = 0;
joined_r0x00010a0ba18c:
            do {
              if (pmVar42 == (mach_header *)0x0) goto LAB_10a0ba1ac;
              if ((long)(int)pmVar42->reserved <= (long)uVar77) {
                if ((long)uVar77 <= (long)(int)pmVar42->reserved) {
                  uVar95 = 1;
                  goto LAB_10a0ba1b8;
                }
                pmVar42 = (mach_header *)&pmVar42->cpusubtype;
              }
              pmVar42 = *(mach_header **)pmVar42;
            } while( true );
          }
          goto LAB_10a0c08b4;
        }
      }
      plVar78 = *(long **)(param_2 + 0x20);
      if (plVar78 != (long *)0x0) {
        (**(code **)(*plVar78 + 0x18))(auStack_140,plVar78,param_3);
        pmVar42 = (mach_header *)uStack_138;
        pmStack_2a0 = (mach_header *)auStack_140;
        pmVar63 = pmStack_298;
        uStack_138 = (undefined **)0x0;
        auStack_140 = (undefined1  [8])0x0;
        pmStack_298 = pmVar42;
        if (pmVar63 != (mach_header *)0x0) {
          pdVar90 = &pmVar63->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          if (lVar65 == 0) {
            (*(code *)(*(long ******)pmVar63)[2])(pmVar63);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
        if ((mach_header *)uStack_138 == (mach_header *)0x0) goto LAB_10a0bac00;
        pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
        do {
          lVar65 = *(long *)pdVar90;
          cVar19 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
          if (bVar23) {
            *(long *)pdVar90 = lVar65 + -1;
            cVar19 = ExclusiveMonitorsStatus();
          }
          pmVar63 = (mach_header *)uStack_138;
        } while (cVar19 != '\0');
        goto LAB_10a0babe4;
      }
      if ((bRam00000001137e95e8 & 1) == 0) {
        iVar25 = 0x137e95e8;
        ___cxa_guard_acquire();
        if (iVar25 != 0) {
          func_0x000107c2b054(0x1137e9608,&UNK_10f639da5);
          ___cxa_guard_release(0x1137e95e8);
        }
      }
      lVar65 = *(long *)&param_3[1].cpusubtype;
      if (lVar65 == 0) {
        plVar100 = (long *)0x2c0;
        __Znwm();
        plVar100[1] = 0;
        plVar100[2] = 0;
        plVar78 = plVar100 + 3;
        *plVar100 = (long)&PTR_DAT_110b9fda0;
        FUN_10ab6a964(plVar78,0,0x1137e9608,0);
        auStack_1f0 = (undefined1  [8])plVar78;
        uStack_1e8 = (undefined **)plVar100;
        FUN_10a05b2a8(auStack_1f0,plVar100 + 8,plVar78);
        FUN_10a05b04c(&pmStack_220,auStack_1f0);
        plVar78 = (long *)uStack_1e8;
        if (uStack_1e8 != (undefined **)0x0) {
          plVar100 = (long *)(uStack_1e8 + 1);
          do {
            lVar65 = *plVar100;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar100,0x10);
            if (bVar23) {
              *plVar100 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          if (lVar65 == 0) {
            (**(code **)((long)*uStack_1e8 + 0x10))(uStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar78);
          }
        }
        if (pmStack_218 == (mach_header *)0x0) {
          uStack_138 = (undefined **)0x0;
        }
        else {
          pdVar90 = &pmStack_218->cpusubtype;
          do {
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          uStack_138 = (undefined **)pmStack_218;
          if (pmStack_218 != (mach_header *)0x0) {
            pdVar90 = &pmStack_218->cpusubtype;
            do {
              cVar19 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
              if (bVar23) {
                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                cVar19 = ExclusiveMonitorsStatus();
              }
            } while (cVar19 != '\0');
          }
        }
        auStack_140 = (undefined1  [8])pmStack_220;
        uStack_130 = FUN_10a0dbfe8;
        uStack_128 = (mach_header *)&PTR_DAT_110ba16d8;
        pmStack_120 = pmStack_220;
        pmStack_118 = pmStack_218;
        uStack_1e0 = (mach_header *)0x0;
        uStack_1d8 = (mach_header *)0x0;
        auStack_1f0 = (undefined1  [8])&UNK_1053a6a3c;
        uStack_1e8 = &PTR_DAT_110ae9180;
        FUN_10a044790(auStack_1f0);
        (*(code *)*uStack_1e8)(&uStack_1e8);
        pmVar63 = pmStack_218;
        if (pmStack_218 != (mach_header *)0x0) {
          pdVar90 = &pmStack_218->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          if (lVar65 == 0) {
            (*(code *)(*(long ******)pmStack_218)[2])(pmStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
        pmStack_2a8 = (mach_header *)uStack_138;
        pmStack_2b0 = (mach_header *)auStack_140;
        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
          pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
          do {
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
        }
        FUN_10a044790(&uStack_130);
        (*(code *)*(long ******)uStack_128)(&uStack_128);
        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
          pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
            pmVar63 = (mach_header *)uStack_138;
          } while (cVar19 != '\0');
          goto LAB_10a0ba718;
        }
      }
      else {
        pmVar63 = *(mach_header **)(lVar65 + 0x858);
        pmVar42 = *(mach_header **)(lVar65 + 0x860);
        if (pmVar42 != (mach_header *)0x0) {
          pdVar90 = &pmVar42->cpusubtype;
          do {
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
        }
        uVar47 = 0x2a8;
        pmStack_230 = pmVar63;
        pmStack_228 = pmVar42;
        __Znwm(0x2a8);
        FUN_10ab6a964();
        pmStack_220 = pmVar63;
        pmStack_218 = pmVar42;
        if (pmVar42 != (mach_header *)0x0) {
          pdVar90 = &pmVar42->cpusubtype;
          do {
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          pdVar90 = &pmVar42->ncmds;
          do {
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          do {
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
        }
        auStack_1f0 = (undefined1  [8])pmVar63;
        uStack_1e8 = (undefined **)pmVar42;
        FUN_10a05b208(auStack_140,uVar47,auStack_1f0);
        FUN_10a05b04c(&pmStack_2b0,auStack_140);
        pmVar63 = (mach_header *)uStack_138;
        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
          pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          if (lVar65 == 0) {
            (*(code *)*(long *****)((long)*uStack_138 + 0x10))(uStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
        if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        pmVar63 = pmStack_218;
        if (pmStack_218 != (mach_header *)0x0) {
          pdVar90 = &pmStack_218->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
          } while (cVar19 != '\0');
          if (lVar65 == 0) {
            (*(code *)(*(long ******)pmStack_218)[2])(pmStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
        if ((pmStack_230 != (mach_header *)0x0) && (pmStack_2b0 != (mach_header *)0x0)) {
          auStack_140 = (undefined1  [8])pmStack_2b0;
          uStack_138 = (undefined **)pmStack_2a8;
          if (pmStack_2a8 != (mach_header *)0x0) {
            pdVar90 = &pmStack_2a8->cpusubtype;
            do {
              cVar19 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
              if (bVar23) {
                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                cVar19 = ExclusiveMonitorsStatus();
              }
            } while (cVar19 != '\0');
          }
          FUN_10aa88c30(pmStack_230,auStack_140);
          pmVar63 = (mach_header *)uStack_138;
          if ((mach_header *)uStack_138 != (mach_header *)0x0) {
            pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
            do {
              lVar65 = *(long *)pdVar90;
              cVar19 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
              if (bVar23) {
                *(long *)pdVar90 = lVar65 + -1;
                cVar19 = ExclusiveMonitorsStatus();
              }
            } while (cVar19 != '\0');
            if (lVar65 == 0) {
              (*(code *)*(long *****)((long)*uStack_138 + 0x10))(uStack_138);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
            }
          }
        }
        if (pmStack_228 != (mach_header *)0x0) {
          pdVar90 = &pmStack_228->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar19 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar19 = ExclusiveMonitorsStatus();
            }
            pmVar63 = pmStack_228;
          } while (cVar19 != '\0');
LAB_10a0ba718:
          if (lVar65 == 0) {
            (*(code *)(*(long ******)pmVar63)[2])(pmVar63);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
          }
        }
      }
      pmVar63 = pmStack_298;
      pmStack_298 = pmStack_2a8;
      pmStack_2a0 = pmStack_2b0;
      pmStack_2b0 = (mach_header *)0x0;
      pmStack_2a8 = (mach_header *)0x0;
      if (pmVar63 != (mach_header *)0x0) {
        pdVar90 = &pmVar63->cpusubtype;
        do {
          lVar65 = *(long *)pdVar90;
          cVar19 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
          if (bVar23) {
            *(long *)pdVar90 = lVar65 + -1;
            cVar19 = ExclusiveMonitorsStatus();
          }
        } while (cVar19 != '\0');
        if (lVar65 == 0) {
          (*(code *)(*(long ******)pmVar63)[2])(pmVar63);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
        }
      }
      pmVar63 = pmStack_2a8;
      if (pmStack_2a8 != (mach_header *)0x0) {
        pdVar90 = &pmStack_2a8->cpusubtype;
        do {
          lVar65 = *(long *)pdVar90;
          cVar19 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
          if (bVar23) {
            *(long *)pdVar90 = lVar65 + -1;
            cVar19 = ExclusiveMonitorsStatus();
          }
        } while (cVar19 != '\0');
        if (lVar65 == 0) {
          (*(code *)(*(long ******)pmStack_2a8)[2])(pmStack_2a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
        }
      }
      pmVar63 = pmStack_2a0;
      func_0x000107c2b054(auStack_268,"empty");
      if (*(char *)((long)&pmVar63[3].filetype + 3) < '\0') {
        uVar32._0_4_ = pmVar63[2].flags;
        uVar32._4_4_ = pmVar63[2].reserved;
        __ZdlPv(uVar32);
      }
      *(mach_header **)(pmVar63 + 3) = pmStack_260;
      pmVar63[2].flags = auStack_268._0_4_;
      pmVar63[2].reserved = auStack_268._4_4_;
      pmVar63[3].cpusubtype = (undefined4)uStack_258;
      pmVar63[3].filetype = uStack_258._4_4_;
      uStack_258 = uStack_258 & 0xffffffffffffff;
      auStack_268 = (undefined1  [8])((ulong)auStack_268 & 0xffffffffffffff00);
      goto LAB_10a0bac00;
    }
LAB_10a0baf20:
    func_0x000105340e88(auStack_250,pmStack_248);
    func_0x000105340e88(auStack_210,pmStack_208);
    FUN_10a04aa78(auStack_4a8);
    pmStack_4a0 = pmStack_278;
    auStack_4a8 = auStack_280;
    uStack_498 = uStack_270;
    uStack_270 = 0;
    pmStack_278 = (mach_header *)0x0;
    auStack_280 = (undefined1  [8])0x0;
    auStack_140 = (undefined1  [8])auStack_280;
    FUN_10a04a568(auStack_140);
    if ((long)auStack_4e0._8_8_ < 0) {
      __ZdlPv(pmStack_4e8);
    }
    if (param_6 != (float *)0x0) {
      *param_6 = 0.23076923;
    }
    if (cVar18 != '\0') {
      plVar78 = (long *)param_4[1];
      uStack_4f8 = param_4[1];
      uStack_500 = *param_4;
      if (plVar78 != (long *)0x0) {
        plVar100 = plVar78 + 1;
        do {
          cVar18 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar100,0x10);
          if (bVar23) {
            *plVar100 = *plVar100 + 1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
      }
      FUN_10a0c10ec(auStack_140,param_3,&uStack_500,auStack_4a8,auStack_420,param_2 + 0x28);
      FUN_10a0d49bc(&pmStack_490);
      pmStack_488 = (mach_header *)uStack_138;
      pmStack_490 = (mach_header *)auStack_140;
      pmStack_480 = (mach_header *)uStack_130;
      uStack_130 = (code *)0x0;
      uStack_138 = (undefined **)0x0;
      auStack_140 = (undefined1  [8])0x0;
      auStack_1f0 = (undefined1  [8])auStack_140;
      FUN_10a0d4a18(auStack_1f0);
      if (plVar78 != (long *)0x0) {
        plVar100 = plVar78 + 1;
        do {
          lVar65 = *plVar100;
          cVar18 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar100,0x10);
          if (bVar23) {
            *plVar100 = lVar65 + -1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if (lVar65 == 0) {
          (**(code **)(*plVar78 + 0x10))(plVar78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar78);
        }
      }
      if (param_6 != (float *)0x0) {
        *param_6 = 0.30769232;
      }
    }
  }
  if (*(char *)((long)&param_3->reserved + 1) == '\x01') {
    uStack_258 = 0;
    pmStack_260 = (mach_header *)0x0;
    dVar103 = 30.0;
    auStack_268 = (undefined1  [8])&pmStack_260;
    if ((char)param_3->ncmds != '\x01') {
LAB_10a0bb0e8:
      func_0x000109382360(&pmStack_290,0,0,0,2);
      puVar26 = auStack_420;
      func_0x00010945a80c(puVar26,&DAT_10f414fbf);
      uVar17 = *puVar26;
      *puVar26 = pmStack_290._0_1_;
      pmStack_290 = (mach_header *)CONCAT71(pmStack_290._1_7_,uVar17);
      pmVar63 = *(mach_header **)(puVar26 + 8);
      *(mach_header **)(puVar26 + 8) = pmStack_288;
      pmStack_288 = pmVar63;
      func_0x000109380ffc(&pmStack_288);
      pmVar63 = *(mach_header **)&param_3[2].cpusubtype;
      pmVar42 = *(mach_header **)&param_3[2].ncmds;
      if (pmVar63 != pmVar42) {
        do {
          pmStack_208 = (mach_header *)0x0;
          uStack_200 = 0;
          ppppplVar91 = *(long ******)(pmVar63 + 1);
          auStack_210 = (undefined1  [8])&pmStack_208;
          if (*(long ******)&pmVar63->flags != ppppplVar91) {
            puVar61 = (uint *)((long)*(long ******)&pmVar63->flags + 4);
            do {
              pmVar79 = (mach_header *)(puVar61 + -1);
              uVar55 = *puVar61;
              ppuVar48 = (undefined **)(ulong)uVar55;
              if (uVar55 != 0xffffffff) {
                puVar26 = auStack_210;
                FUN_10a0dc550(puVar26,(mach_header *)(ulong)uVar55,puVar61);
                FUN_10a0a294c(puVar26 + 0x28);
                ppuVar48 = (undefined **)pmVar79;
              }
              ppppplVar87 = (long *****)(puVar61 + 0x43);
              puVar61 = puVar61 + 0x44;
              auVar59 = auStack_210;
            } while (ppppplVar87 != ppppplVar91);
            while (auVar59 != (undefined1  [8])&pmStack_208) {
              uVar34._0_4_ = param_3[1].cpusubtype;
              uVar34._4_4_ = param_3[1].filetype;
              FUN_10a0a2a90(&pmStack_2a0,uVar34);
              piVar28 = *(int **)&((mach_header *)((long)auVar59 + 0x20))->ncmds;
              for (piVar27 = *(int **)&((mach_header *)((long)auVar59 + 0x20))->cpusubtype;
                  piVar27 != piVar28; piVar27 = piVar27 + 0x44) {
                iVar89 = *piVar27;
                uVar77 = (*(long *)&pmVar63[1].flags - *(long *)&pmVar63[1].ncmds >> 5) *
                         0x6db6db6db6db6db7;
                if (uVar77 < (ulong)(long)iVar89 || uVar77 - (long)iVar89 == 0) goto LAB_10a0c08b4;
                plVar78 = (long *)(piVar27 + 2);
                ppuVar48 = (undefined **)param_3;
                FUN_10a0a2b44(1.0 / dVar103,auStack_250,param_3,
                              *(long *)&pmVar63[1].ncmds + (long)iVar89 * 0xe0,plVar78);
                pmVar36 = pmStack_248;
                auVar94 = auStack_250;
                pmVar81 = pmStack_298;
                pmVar79 = pmStack_2a0;
                if (auStack_250 != (undefined1  [8])pmStack_248) {
                  uVar71 = (ulong)*(byte *)((long)piVar27 + 0x1f);
                  plVar100 = plVar78;
                  uVar77 = uVar71;
                  if ((char)*(byte *)((long)piVar27 + 0x1f) < '\0') {
                    plVar100 = *(long **)(piVar27 + 2);
                    uVar77 = *(ulong *)(piVar27 + 4);
                  }
                  if (((uVar77 != 7) ||
                      (*(int *)plVar100 != 0x67696577 || *(int *)((long)plVar100 + 3) != 0x73746867)
                      ) || ((param_3->flags & 0x100) == 0)) {
                    pmStack_2c0 = pmStack_2a0;
                    pmStack_2b8 = pmStack_298;
                    if (pmStack_298 != (mach_header *)0x0) {
                      pdVar90 = &pmStack_298->cpusubtype;
                      do {
                        cVar18 = '\x01';
                        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                        if (bVar23) {
                          *(long *)pdVar90 = *(long *)pdVar90 + 1;
                          cVar18 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar18 != '\0');
                      uVar71 = (ulong)*(byte *)((long)piVar27 + 0x1f);
                    }
                    cVar18 = (char)uVar71;
                    uVar77 = *(ulong *)(piVar27 + 4);
                    if (-1 < cVar18) {
                      uVar77 = uVar71;
                    }
                    if (uVar77 == 5) {
                      plVar100 = (long *)*plVar78;
                      if (-1 < cVar18) {
                        plVar100 = plVar78;
                      }
                      if ((int)*plVar100 == 0x6c616373 && *(char *)((long)plVar100 + 4) == 'e') {
                        uVar52._0_4_ = param_3[1].cpusubtype;
                        uVar52._4_4_ = param_3[1].filetype;
                        FUN_10a0cb474(auStack_170,auStack_250,pmStack_248,uVar52);
                        uStack_138 = (undefined **)pmStack_168;
                        auStack_140 = auStack_170;
                        pmStack_168 = (mach_header *)0x0;
                        auStack_170 = (undefined1  [8])0x0;
                        ppuVar48 = (undefined **)auStack_140;
                        FUN_10aa781e4(pmVar79);
                        pmVar79 = (mach_header *)uStack_138;
                        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                          pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)*(long *****)((long)*uStack_138 + 0x10))(uStack_138);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                          }
                        }
                        if (pmStack_168 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_168->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar79 = pmStack_168;
                          } while (cVar18 != '\0');
LAB_10a0bbf54:
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmVar79)[2])(pmVar79);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                          }
                        }
LAB_10a0bbf70:
                        if (pmStack_2b8 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_2b8->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar81 = pmStack_2b8;
                          } while (cVar18 != '\0');
                          goto LAB_10a0bbf8c;
                        }
                        goto LAB_10a0bbfa8;
                      }
                    }
                    else if (uVar77 == 8) {
                      plVar100 = (long *)*plVar78;
                      if (-1 < cVar18) {
                        plVar100 = plVar78;
                      }
                      if (*plVar100 == 0x6e6f697461746f72) {
                        lVar65 = *(long *)&param_3[1].cpusubtype;
                        uStack_138 = (undefined **)0x0;
                        auStack_140 = (undefined1  [8])0x0;
                        uStack_130 = (code *)0x0;
                        do {
                          pdVar90 = *(dword **)&((mach_header *)auVar94)->cpusubtype;
                          if ((ulong)(*(long *)&((mach_header *)auVar94)->ncmds - (long)pdVar90) <
                              0xd) goto LAB_10a0c08b4;
                          dVar108 = *pdVar90;
                          dVar106 = pdVar90[1];
                          dVar107 = pdVar90[2];
                          dVar104 = pdVar90[3];
                          if (uStack_138 < uStack_130) {
                            ((mach_header *)uStack_138)->magic = ((mach_header *)auVar94)->magic;
                            ((mach_header *)uStack_138)->cputype = dVar108;
                            ((mach_header *)uStack_138)->cpusubtype = dVar106;
                            ((mach_header *)uStack_138)->filetype = dVar107;
                            ((mach_header *)uStack_138)->ncmds = dVar104;
                            pmVar81 = (mach_header *)&((mach_header *)uStack_138)->sizeofcmds;
                          }
                          else {
                            lVar57 = (long)uStack_138 - (long)auStack_140;
                            uVar77 = (lVar57 >> 2) * -0x3333333333333333 + 1;
                            if (0xccccccccccccccc < uVar77) {
                              FUN_10a0cc118();
                              goto LAB_10a0c08b4;
                            }
                            lVar70 = (long)uStack_130 - (long)auStack_140 >> 2;
                            uVar71 = lVar70 * -0x6666666666666666;
                            if (uVar71 < uVar77 || uVar71 - uVar77 == 0) {
                              uVar71 = uVar77;
                            }
                            if (0x666666666666665 < (ulong)(lVar70 * -0x3333333333333333)) {
                              uVar71 = 0xccccccccccccccc;
                            }
                            puVar26 = auStack_140;
                            FUN_10a0cc12c();
                            ppuVar48 = (undefined **)auStack_140;
                            lVar70 = (long)uStack_138 - (long)auStack_140;
                            pdVar90 = (dword *)(puVar26 + lVar57);
                            *pdVar90 = ((mach_header *)auVar94)->magic;
                            pdVar90[1] = dVar108;
                            pdVar90[2] = dVar106;
                            pdVar90[3] = dVar107;
                            pdVar90[4] = dVar104;
                            pmVar81 = (mach_header *)(pdVar90 + 5);
                            pmVar35 = (mach_header *)((long)pdVar90 - lVar70);
                            _memcpy(pmVar35,ppuVar48);
                            bVar23 = auStack_140 != (undefined1  [8])0x0;
                            auStack_140 = (undefined1  [8])pmVar35;
                            uStack_130 = (code *)(puVar26 + uVar71 * 0x14);
                            if (bVar23) {
                              uStack_138 = (undefined **)pmVar81;
                              __ZdlPv();
                            }
                          }
                          auVar94 = (undefined1  [8])((long)auVar94 + 0x20);
                          uStack_138 = (undefined **)pmVar81;
                        } while (auVar94 != (undefined1  [8])pmVar36);
                        if (lVar65 == 0) {
                          pmVar36 = (mach_header *)0x140;
                          __Znwm();
                          pmVar36->cpusubtype = 0;
                          pmVar36->filetype = 0;
                          pmVar36->ncmds = 0;
                          pmVar36->sizeofcmds = 0;
                          pdVar90 = &pmVar36->flags;
                          *(undefined ***)pmVar36 = &PTR_DAT_110ba14e8;
                          pmVar81 = pmVar36;
                          func_0x00010a0fda30();
                          FUN_10aa7093c(pdVar90,0,pmVar81,ppuVar48);
                          pmVar36[8].flags = 0;
                          pmVar36[8].reserved = 0;
                          pmVar36[8].ncmds = 0;
                          pmVar36[8].sizeofcmds = 0;
                          pmVar36[9].cpusubtype = 0;
                          pmVar36[9].filetype = 0;
                          *(long ******)(pmVar36 + 9) = (long *****)0x0;
                          pmVar36[8].cpusubtype = 0;
                          pmVar36[8].filetype = 0;
                          *(long ******)(pmVar36 + 8) = (long *****)0x0;
                          pmVar36[9].ncmds = 0;
                          pmVar36[9].sizeofcmds = 0x3f800000;
                          pmVar36[9].flags = 0;
                          *(undefined ***)&pmVar36->flags = &PTR_FUN_110c42488;
                          *(undefined ***)&pmVar36[1].cpusubtype = &PTR_FUN_110c42538;
                          *(undefined ***)&pmVar36[2].ncmds = &PTR_DAT_110c42590;
                          *(undefined ***)&pmVar36[7].flags = &PTR_FUN_110c425b0;
                          auStack_170 = (undefined1  [8])pdVar90;
                          pmStack_168 = pmVar36;
                          FUN_10a0cc2d8(auStack_170,pmVar36 + 2,pdVar90);
                          FUN_10a0cc16c(&pmStack_230,auStack_170);
                          if (pmStack_168 != (mach_header *)0x0) {
                            pdVar90 = &pmStack_168->cpusubtype;
                            do {
                              lVar65 = *(long *)pdVar90;
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = lVar65 + -1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                              pmVar81 = pmStack_168;
                            } while (cVar18 != '\0');
                            goto LAB_10a0bbea0;
                          }
                        }
                        else {
                          pmVar81 = *(mach_header **)(lVar65 + 0x858);
                          pmVar36 = *(mach_header **)(lVar65 + 0x860);
                          if (pmVar36 != (mach_header *)0x0) {
                            pdVar90 = &pmVar36->cpusubtype;
                            do {
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                          }
                          pmVar37 = (mach_header *)0x128;
                          pmStack_220 = pmVar81;
                          pmStack_218 = pmVar36;
                          __Znwm();
                          pmVar35 = pmVar37;
                          func_0x00010a0fda30();
                          FUN_10aa7093c(pmVar37,lVar65,pmVar35,ppuVar48);
                          *(long ******)(pmVar37 + 8) = (long *****)0x0;
                          pmVar37[7].flags = 0;
                          pmVar37[7].reserved = 0;
                          pmVar37[7].ncmds = 0;
                          pmVar37[7].sizeofcmds = 0;
                          pmVar37[7].cpusubtype = 0;
                          pmVar37[7].filetype = 0;
                          pmVar37[8].flags = 0;
                          pmVar37[8].reserved = 0x3f800000;
                          pmVar37[8].ncmds = 0;
                          pmVar37[8].sizeofcmds = 0;
                          pmVar37[8].cpusubtype = 0;
                          pmVar37[8].filetype = 0;
                          pmVar37[9].magic = 0;
                          *(undefined ***)pmVar37 = &PTR_FUN_110c42488;
                          *(undefined ***)&pmVar37->ncmds = &PTR_FUN_110c42538;
                          *(undefined ***)&pmVar37[1].flags = &PTR_DAT_110c42590;
                          *(undefined ***)(pmVar37 + 7) = &PTR_FUN_110c425b0;
                          pmStack_4e8 = pmVar81;
                          auStack_4e0._0_8_ = pmVar36;
                          if (pmVar36 != (mach_header *)0x0) {
                            pdVar90 = &pmVar36->cpusubtype;
                            do {
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                            pdVar90 = &pmVar36->ncmds;
                            do {
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                            do {
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar36);
                          }
                          pmVar35 = (mach_header *)0x30;
                          auStack_280 = (undefined1  [8])pmVar81;
                          pmStack_278 = pmVar36;
                          auStack_170 = (undefined1  [8])pmVar37;
                          __Znwm();
                          pmStack_278 = (mach_header *)0x0;
                          auStack_280 = (undefined1  [8])0x0;
                          *(undefined ***)pmVar35 = &PTR_DAT_110ba1488;
                          pmVar35->cpusubtype = 0;
                          pmVar35->filetype = 0;
                          pmVar35->ncmds = 0;
                          pmVar35->sizeofcmds = 0;
                          *(mach_header **)&pmVar35->flags = pmVar37;
                          *(mach_header **)(pmVar35 + 1) = pmVar81;
                          *(mach_header **)&pmVar35[1].cpusubtype = pmVar36;
                          pmStack_168 = pmVar35;
                          FUN_10a0cc2d8(auStack_170,&pmVar37[1].cpusubtype,pmVar37);
                          FUN_10a0cc16c(&pmStack_230,auStack_170);
                          pmVar81 = pmStack_168;
                          if (pmStack_168 != (mach_header *)0x0) {
                            pdVar90 = &pmStack_168->cpusubtype;
                            do {
                              lVar65 = *(long *)pdVar90;
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = lVar65 + -1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                            if (lVar65 == 0) {
                              (*(code *)(*(long ******)pmStack_168)[2])(pmStack_168);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                            }
                          }
                          if (pmStack_278 != (mach_header *)0x0) {
                            __ZNSt3__119__shared_weak_count14__release_weakEv();
                          }
                          uVar47 = auStack_4e0._0_8_;
                          if ((mach_header *)auStack_4e0._0_8_ != (mach_header *)0x0) {
                            pdVar90 = (dword *)(auStack_4e0._0_8_ + 8);
                            do {
                              lVar65 = *(long *)pdVar90;
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = lVar65 + -1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                            if (lVar65 == 0) {
                              (*(code *)(*(long ******)auStack_4e0._0_8_)[2])(auStack_4e0._0_8_);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(uVar47);
                            }
                          }
                          if ((pmStack_220 != (mach_header *)0x0) &&
                             (pmStack_230 != (mach_header *)0x0)) {
                            auStack_170 = (undefined1  [8])pmStack_230;
                            pmStack_168 = pmStack_228;
                            if (pmStack_228 != (mach_header *)0x0) {
                              pdVar90 = &pmStack_228->cpusubtype;
                              do {
                                cVar18 = '\x01';
                                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                                if (bVar23) {
                                  *(long *)pdVar90 = *(long *)pdVar90 + 1;
                                  cVar18 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar18 != '\0');
                            }
                            FUN_10aa88c30(pmStack_220,auStack_170);
                            pmVar81 = pmStack_168;
                            if (pmStack_168 != (mach_header *)0x0) {
                              pdVar90 = &pmStack_168->cpusubtype;
                              do {
                                lVar65 = *(long *)pdVar90;
                                cVar18 = '\x01';
                                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                                if (bVar23) {
                                  *(long *)pdVar90 = lVar65 + -1;
                                  cVar18 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar18 != '\0');
                              if (lVar65 == 0) {
                                (*(code *)(*(long ******)pmStack_168)[2])(pmStack_168);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                              }
                            }
                          }
                          if (pmStack_218 != (mach_header *)0x0) {
                            pdVar90 = &pmStack_218->cpusubtype;
                            do {
                              lVar65 = *(long *)pdVar90;
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = lVar65 + -1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                              pmVar81 = pmStack_218;
                            } while (cVar18 != '\0');
LAB_10a0bbea0:
                            if (lVar65 == 0) {
                              (*(code *)(*(long ******)pmVar81)[2])(pmVar81);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                            }
                          }
                        }
                        pmVar81 = pmStack_230;
                        func_0x00010a0cbfcc(pmStack_230 + 7,auStack_140);
                        if (auStack_140 != (undefined1  [8])0x0) {
                          uStack_138 = (undefined **)auStack_140;
                          __ZdlPv();
                        }
                        auStack_140 = (undefined1  [8])pmVar81;
                        uStack_138 = (undefined **)pmStack_228;
                        pmStack_228 = (mach_header *)0x0;
                        pmStack_230 = (mach_header *)0x0;
                        ppuVar48 = (undefined **)auStack_140;
                        FUN_10aa78060(pmVar79);
                        pmVar79 = (mach_header *)uStack_138;
                        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                          pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)*(long *****)((long)*uStack_138 + 0x10))(uStack_138);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                          }
                        }
                        if (pmStack_228 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_228->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar79 = pmStack_228;
                          } while (cVar18 != '\0');
                          goto LAB_10a0bbf54;
                        }
                        goto LAB_10a0bbf70;
                      }
                    }
                    else if (uVar77 == 0xb) {
                      plVar100 = (long *)*plVar78;
                      if (-1 < cVar18) {
                        plVar100 = plVar78;
                      }
                      if (*plVar100 == 0x74616c736e617274 &&
                          *(long *)((long)plVar100 + 3) == 0x6e6f6974616c736e) {
                        uVar51._0_4_ = param_3[1].cpusubtype;
                        uVar51._4_4_ = param_3[1].filetype;
                        FUN_10a0cb474(auStack_170,auStack_250,pmStack_248,uVar51);
                        uStack_138 = (undefined **)pmStack_168;
                        auStack_140 = auStack_170;
                        pmStack_168 = (mach_header *)0x0;
                        auStack_170 = (undefined1  [8])0x0;
                        ppuVar48 = (undefined **)auStack_140;
                        FUN_10aa77edc(pmVar79);
                        pmVar79 = (mach_header *)uStack_138;
                        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                          pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)*(long *****)((long)*uStack_138 + 0x10))(uStack_138);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                          }
                        }
                        if (pmStack_168 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_168->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar79 = pmStack_168;
                          } while (cVar18 != '\0');
                          goto LAB_10a0bbf54;
                        }
                        goto LAB_10a0bbf70;
                      }
                    }
                    uVar47 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    FUN_10a0ca0d8(auStack_140,plVar78,&UNK_10f63885c);
                    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              (uVar47,auStack_140);
                    ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    goto LAB_10a0c08b4;
                  }
                  dVar104 = ((mach_header *)((long)auVar59 + 0x20))->magic;
                  uVar77 = (*(long *)&param_3[6].cpusubtype - (long)*(long ******)(param_3 + 6) >> 3
                           ) * 0x51b3bea3677d46cf;
                  if (uVar77 < (ulong)(long)(int)dVar104 || uVar77 - (long)(int)dVar104 == 0)
                  goto LAB_10a0c08b4;
                  iVar89 = *(int *)((long)*(long ******)(param_3 + 6) +
                                   ((long)(int)dVar104 * 0x5e + 9) * 4);
                  pmStack_2a8 = pmStack_298;
                  pmStack_2b0 = pmStack_2a0;
                  if (pmStack_298 != (mach_header *)0x0) {
                    pdVar90 = &pmStack_298->cpusubtype;
                    do {
                      cVar18 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                      if (bVar23) {
                        *(long *)pdVar90 = *(long *)pdVar90 + 1;
                        cVar18 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar18 != '\0');
                  }
                  lVar65 = *(long *)&param_3[0x1c].flags;
                  uVar77 = ((long)*(long ******)(param_3 + 0x1d) - lVar65 >> 3) *
                           -0x5555555555555555;
                  if (uVar77 < (ulong)(long)iVar89 || uVar77 - (long)iVar89 == 0)
                  goto LAB_10a0c08b4;
                  ppuVar48 = (undefined **)
                             (*(long *)((long)auStack_250 + 0x10) - *(long *)((long)auStack_250 + 8)
                             >> 2);
                  FUN_10a0caa68(auStack_140);
                  auVar97 = auStack_140;
                  plVar78 = (long *)(lVar65 + (long)iVar89 * 0x18);
                  uVar77 = ((long)uStack_138 - (long)auStack_140 >> 3) * -0x5555555555555555;
                  do {
                    lVar86._0_4_ = ((mach_header *)auVar94)->cpusubtype;
                    lVar86._4_4_ = ((mach_header *)auVar94)->filetype;
                    lVar7._0_4_ = ((mach_header *)auVar94)->ncmds;
                    lVar7._4_4_ = ((mach_header *)auVar94)->sizeofcmds;
                    if (lVar7 != lVar86) {
                      uVar71 = 0;
                      auVar96 = auVar97;
                      do {
                        if (uVar77 - uVar71 == 0) goto LAB_10a0c08b4;
                        pdVar90 = *(dword **)&((mach_header *)auVar96)->cpusubtype;
                        if (pdVar90 < *(dword **)&((mach_header *)auVar96)->ncmds) {
                          *pdVar90 = ((mach_header *)auVar94)->magic;
                          pdVar90[1] = *(dword *)(lVar86 + uVar71 * 4);
                          pdVar90 = pdVar90 + 2;
                        }
                        else {
                          lVar65 = (long)pdVar90 - (long)*(long ******)auVar96;
                          uVar56 = (lVar65 >> 3) + 1;
                          if (uVar56 >> 0x3d != 0) {
                            FUN_10a0caba8();
                            goto LAB_10a0c08b4;
                          }
                          uVar66 = (long)*(dword **)&((mach_header *)auVar96)->ncmds -
                                   (long)*(long ******)auVar96;
                          uVar72 = (long)uVar66 >> 2;
                          if (uVar72 <= uVar56) {
                            uVar72 = uVar56;
                          }
                          if (0x7ffffffffffffff7 < uVar66) {
                            uVar72 = 0x1fffffffffffffff;
                          }
                          pmVar79 = (mach_header *)auVar96;
                          FUN_10a0cabbc();
                          ppuVar48 = *(undefined ***)auVar96;
                          lVar57 = *(long *)&((mach_header *)auVar96)->cpusubtype;
                          pdVar82 = (dword *)((long)pmVar79 + lVar65);
                          *pdVar82 = ((mach_header *)auVar94)->magic;
                          pdVar82[1] = *(dword *)(lVar86 + uVar71 * 4);
                          pdVar90 = pdVar82 + 2;
                          ppppplVar87 = (long *****)((long)pdVar82 - (lVar57 - (long)ppuVar48));
                          _memcpy(ppppplVar87);
                          ppppplVar91 = *(long ******)auVar96;
                          *(long ******)auVar96 = ppppplVar87;
                          *(dword **)&((mach_header *)auVar96)->cpusubtype = pdVar90;
                          *(dword **)&((mach_header *)auVar96)->ncmds = &pmVar79->magic + uVar72 * 2
                          ;
                          if (ppppplVar91 != (long *****)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(dword **)&((mach_header *)auVar96)->cpusubtype = pdVar90;
                        uVar71 = uVar71 + 1;
                        lVar86 = *(long *)&((mach_header *)auVar94)->cpusubtype;
                        auVar96 = (undefined1  [8])&((mach_header *)auVar96)->flags;
                      } while (uVar71 < (ulong)(*(long *)&((mach_header *)auVar94)->ncmds - lVar86
                                               >> 2));
                    }
                    auVar94 = (undefined1  [8])((long)auVar94 + 0x20);
                  } while (auVar94 != (undefined1  [8])pmVar36);
                  uVar71 = (plVar78[1] - *plVar78 >> 3) * -0x5555555555555555;
                  if (uVar71 <= uVar77) {
                    uVar77 = uVar71;
                  }
                  if (uVar77 != 0) {
                    uVar71 = 0;
                    do {
                      auVar94 = auStack_140;
                      uVar56 = ((long)uStack_138 - (long)auStack_140 >> 3) * -0x5555555555555555;
                      if (uVar56 < uVar71 || uVar56 - uVar71 == 0) goto LAB_10a0c08b4;
                      lVar65 = *(long *)&param_3[1].cpusubtype;
                      if (lVar65 == 0) {
                        pmVar81 = (mach_header *)0x130;
                        __Znwm();
                        pmVar81->cpusubtype = 0;
                        pmVar81->filetype = 0;
                        pmVar81->ncmds = 0;
                        pmVar81->sizeofcmds = 0;
                        pdVar90 = &pmVar81->flags;
                        *(undefined ***)pmVar81 = &PTR_DAT_110ba1388;
                        pmVar79 = pmVar81;
                        func_0x00010a0fda30();
                        FUN_10aa7093c(pdVar90,0,pmVar79,ppuVar48);
                        pmVar81[8].flags = 0;
                        pmVar81[8].reserved = 0;
                        pmVar81[8].ncmds = 0;
                        pmVar81[8].sizeofcmds = 0;
                        pmVar81[9].cpusubtype = 0;
                        pmVar81[9].filetype = 0;
                        *(long ******)(pmVar81 + 9) = (long *****)0x0;
                        pmVar81[8].cpusubtype = 0;
                        pmVar81[8].filetype = 0;
                        *(long ******)(pmVar81 + 8) = (long *****)0x0;
                        *(undefined ***)&pmVar81->flags = &PTR_DAT_110c41c48;
                        *(undefined ***)&pmVar81[1].cpusubtype = &PTR_FUN_110c41cf8;
                        *(undefined ***)&pmVar81[2].ncmds = &PTR_DAT_110c41d50;
                        *(undefined ***)&pmVar81[7].flags = &PTR_FUN_110c41d70;
                        auStack_170 = (undefined1  [8])pdVar90;
                        pmStack_168 = pmVar81;
                        FUN_10a0cb0ac(auStack_170,pmVar81 + 2,pdVar90);
                        FUN_10a0cabf0(&pmStack_230,auStack_170);
                        if (pmStack_168 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_168->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar79 = pmStack_168;
                          } while (cVar18 != '\0');
                          goto LAB_10a0bb790;
                        }
                      }
                      else {
                        pmVar81 = *(mach_header **)(lVar65 + 0x858);
                        pmVar79 = *(mach_header **)(lVar65 + 0x860);
                        if (pmVar79 != (mach_header *)0x0) {
                          pdVar90 = &pmVar79->cpusubtype;
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = *(long *)pdVar90 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                        }
                        pmVar35 = (mach_header *)0x118;
                        pmStack_220 = pmVar81;
                        pmStack_218 = pmVar79;
                        __Znwm();
                        pmVar36 = pmVar35;
                        func_0x00010a0fda30();
                        FUN_10aa7093c(pmVar35,lVar65,pmVar36,ppuVar48);
                        *(long ******)(pmVar35 + 8) = (long *****)0x0;
                        pmVar35[7].flags = 0;
                        pmVar35[7].reserved = 0;
                        pmVar35[7].ncmds = 0;
                        pmVar35[7].sizeofcmds = 0;
                        pmVar35[7].cpusubtype = 0;
                        pmVar35[7].filetype = 0;
                        pmVar35[8].ncmds = 0;
                        pmVar35[8].sizeofcmds = 0;
                        pmVar35[8].cpusubtype = 0;
                        pmVar35[8].filetype = 0;
                        *(undefined ***)pmVar35 = &PTR_DAT_110c41c48;
                        *(undefined ***)&pmVar35->ncmds = &PTR_FUN_110c41cf8;
                        *(undefined ***)&pmVar35[1].flags = &PTR_DAT_110c41d50;
                        *(undefined ***)(pmVar35 + 7) = &PTR_FUN_110c41d70;
                        pmStack_4e8 = pmVar81;
                        auStack_4e0._0_8_ = pmVar79;
                        if (pmVar79 != (mach_header *)0x0) {
                          pdVar90 = &pmVar79->cpusubtype;
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = *(long *)pdVar90 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          pdVar90 = &pmVar79->ncmds;
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = *(long *)pdVar90 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = *(long *)pdVar90 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                        }
                        pmVar36 = (mach_header *)0x30;
                        auStack_280 = (undefined1  [8])pmVar81;
                        pmStack_278 = pmVar79;
                        auStack_170 = (undefined1  [8])pmVar35;
                        __Znwm();
                        pmStack_278 = (mach_header *)0x0;
                        auStack_280 = (undefined1  [8])0x0;
                        *(undefined ***)pmVar36 = &PTR_DAT_110ba1328;
                        pmVar36->cpusubtype = 0;
                        pmVar36->filetype = 0;
                        pmVar36->ncmds = 0;
                        pmVar36->sizeofcmds = 0;
                        *(mach_header **)&pmVar36->flags = pmVar35;
                        *(mach_header **)(pmVar36 + 1) = pmVar81;
                        *(mach_header **)&pmVar36[1].cpusubtype = pmVar79;
                        pmStack_168 = pmVar36;
                        FUN_10a0cb0ac(auStack_170,&pmVar35[1].cpusubtype,pmVar35);
                        FUN_10a0cabf0(&pmStack_230,auStack_170);
                        pmVar79 = pmStack_168;
                        if (pmStack_168 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_168->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmStack_168)[2])(pmStack_168);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                          }
                        }
                        if (pmStack_278 != (mach_header *)0x0) {
                          __ZNSt3__119__shared_weak_count14__release_weakEv();
                        }
                        uVar47 = auStack_4e0._0_8_;
                        if ((mach_header *)auStack_4e0._0_8_ != (mach_header *)0x0) {
                          pdVar90 = (dword *)(auStack_4e0._0_8_ + 8);
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)auStack_4e0._0_8_)[2])(auStack_4e0._0_8_);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(uVar47);
                          }
                        }
                        if ((pmStack_220 != (mach_header *)0x0) &&
                           (pmStack_230 != (mach_header *)0x0)) {
                          auStack_170 = (undefined1  [8])pmStack_230;
                          pmStack_168 = pmStack_228;
                          if (pmStack_228 != (mach_header *)0x0) {
                            pdVar90 = &pmStack_228->cpusubtype;
                            do {
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                          }
                          FUN_10aa88c30(pmStack_220,auStack_170);
                          pmVar79 = pmStack_168;
                          if (pmStack_168 != (mach_header *)0x0) {
                            pdVar90 = &pmStack_168->cpusubtype;
                            do {
                              lVar65 = *(long *)pdVar90;
                              cVar18 = '\x01';
                              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                              if (bVar23) {
                                *(long *)pdVar90 = lVar65 + -1;
                                cVar18 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar18 != '\0');
                            if (lVar65 == 0) {
                              (*(code *)(*(long ******)pmStack_168)[2])(pmStack_168);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                            }
                          }
                        }
                        if (pmStack_218 != (mach_header *)0x0) {
                          pdVar90 = &pmStack_218->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar90;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                            if (bVar23) {
                              *(long *)pdVar90 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar79 = pmStack_218;
                          } while (cVar18 != '\0');
LAB_10a0bb790:
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmVar79)[2])(pmVar79);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                          }
                        }
                      }
                      pmVar79 = pmStack_230;
                      FUN_10a0ca9fc(pmStack_230 + 7,(dword *)auVar94 + uVar71 * 6);
                      uVar56 = (plVar78[1] - *plVar78 >> 3) * -0x5555555555555555;
                      if (uVar56 < uVar71 || uVar56 - uVar71 == 0) goto LAB_10a0c08b4;
                      puVar58 = (undefined8 *)(*plVar78 + uVar71 * 0x18);
                      if (*(char *)((long)puVar58 + 0x17) < '\0') {
                        func_0x000107c3192c(auStack_170,*puVar58,puVar58[1]);
                      }
                      else {
                        pmStack_168 = (mach_header *)puVar58[1];
                        auStack_170 = (undefined1  [8])*puVar58;
                        lStack_160 = puVar58[2];
                      }
                      ppuVar48 = (undefined **)auStack_170;
                      FUN_10aa7834c(pmStack_2b0,ppuVar48,pmVar79);
                      if (lStack_160 < 0) {
                        __ZdlPv(auStack_170);
                      }
                      pmVar79 = pmStack_228;
                      if (pmStack_228 != (mach_header *)0x0) {
                        pdVar90 = &pmStack_228->cpusubtype;
                        do {
                          lVar65 = *(long *)pdVar90;
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = lVar65 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar65 == 0) {
                          (*(code *)(*(long ******)pmStack_228)[2])(pmStack_228);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                        }
                      }
                      uVar71 = uVar71 + 1;
                      pmVar81 = pmStack_2a8;
                    } while (uVar71 != uVar77);
                  }
                  FUN_10a0cab34(auStack_140);
                  if (pmVar81 != (mach_header *)0x0) {
                    pdVar90 = &pmVar81->cpusubtype;
                    do {
                      lVar65 = *(long *)pdVar90;
                      cVar18 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                      if (bVar23) {
                        *(long *)pdVar90 = lVar65 + -1;
                        cVar18 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar18 != '\0');
LAB_10a0bbf8c:
                    if (lVar65 == 0) {
                      (*(code *)(*(long ******)pmVar81)[2])(pmVar81);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                    }
                  }
                }
LAB_10a0bbfa8:
                FUN_10a0cc734(auStack_250);
              }
              lVar67._0_4_ = pmStack_2a0[0xb].ncmds;
              lVar67._4_4_ = pmStack_2a0[0xb].sizeofcmds;
              if (lVar67 != 0) {
                if (*(char *)((long)&param_3->magic + 1) == '\x01') {
                  if (pmStack_298 != (mach_header *)0x0) {
                    pdVar90 = &pmStack_298->cpusubtype;
                    do {
                      cVar18 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                      if (bVar23) {
                        *(long *)pdVar90 = *(long *)pdVar90 + 1;
                        cVar18 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar18 != '\0');
                  }
                  ppppplVar91 = *(long ******)(pmStack_2a0 + 0xb);
                  pmVar81 = pmStack_2a0 + 0xb;
                  pmStack_2d0 = pmStack_2a0;
                  pmVar79 = pmStack_298;
                  while (pmStack_2c8 = pmVar79, ppppplVar91 != (long *****)&pmVar81->cpusubtype) {
                    pmVar79 = (mach_header *)ppppplVar91[7];
                    if (pmVar79 == (mach_header *)0x0) {
LAB_10a0bc0f4:
                      pmStack_168 = (mach_header *)0x0;
                      auStack_170 = (undefined1  [8])0x0;
                    }
                    else {
                      ppuVar48 = &PTR_DAT_110c3f040;
                      ___dynamic_cast(pmVar79,&PTR_DAT_110c3f040,&PTR_DAT_110c3f7e8,0);
                      if (pmVar79 == (mach_header *)0x0) goto LAB_10a0bc0f4;
                      pmVar36 = (mach_header *)ppppplVar91[8];
                      if (pmVar36 != (mach_header *)0x0) {
                        pdVar90 = &pmVar36->cpusubtype;
                        do {
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = *(long *)pdVar90 + 1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                      }
                      uStack_138 = (undefined **)0x0;
                      auStack_140 = (undefined1  [8])0x0;
                      uStack_130 = (code *)0x0;
                      auStack_170 = (undefined1  [8])pmVar79;
                      pmStack_168 = pmVar36;
                      FUN_10a0cc7a4(auStack_140,*(long *)&pmVar79[7].cpusubtype,
                                    *(long *)&pmVar79[7].ncmds,
                                    *(long *)&pmVar79[7].ncmds - *(long *)&pmVar79[7].cpusubtype >>
                                    3);
                      FUN_10a85c03c(&pmStack_4e8,auStack_140);
                      pmVar79[7].ncmds = pmVar79[7].cpusubtype;
                      pmVar79[7].sizeofcmds = pmVar79[7].filetype;
                      *(long ******)(pmVar79 + 8) = (long *****)0x0;
                      pmVar79[8].cpusubtype = 0x7f7fffff;
                      pmVar79[8].sizeofcmds = 0;
                      ppuVar48 = (undefined **)auStack_140;
                      FUN_10a0ca9fc(pmVar79 + 7);
                      if (auStack_140 != (undefined1  [8])0x0) {
                        uStack_138 = (undefined **)auStack_140;
                        __ZdlPv();
                      }
                      if (pmVar36 != (mach_header *)0x0) {
                        pdVar90 = &pmVar36->cpusubtype;
                        do {
                          lVar65 = *(long *)pdVar90;
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = lVar65 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar65 == 0) {
                          (*(code *)(*(long ******)pmVar36)[2])(pmVar36);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar36);
                        }
                      }
                    }
                    pmVar79 = (mach_header *)ppppplVar91[7];
                    if (pmVar79 == (mach_header *)0x0) {
LAB_10a0bc1e0:
                      pmStack_248 = (mach_header *)0x0;
                      auStack_250 = (undefined1  [8])0x0;
                    }
                    else {
                      ppuVar48 = &PTR_DAT_110c3f040;
                      ___dynamic_cast(pmVar79,&PTR_DAT_110c3f040,&PTR_DAT_110c3f8a0,0);
                      if (pmVar79 == (mach_header *)0x0) goto LAB_10a0bc1e0;
                      pmVar36 = (mach_header *)ppppplVar91[8];
                      if (pmVar36 != (mach_header *)0x0) {
                        pdVar90 = &pmVar36->cpusubtype;
                        do {
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = *(long *)pdVar90 + 1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                      }
                      uStack_138 = (undefined **)0x0;
                      auStack_140 = (undefined1  [8])0x0;
                      uStack_130 = (code *)0x0;
                      auStack_250 = (undefined1  [8])pmVar79;
                      pmStack_248 = pmVar36;
                      FUN_10a0cc81c(auStack_140,*(long *)&pmVar79[7].cpusubtype,
                                    *(long *)&pmVar79[7].ncmds,
                                    *(long *)&pmVar79[7].ncmds - *(long *)&pmVar79[7].cpusubtype >>
                                    4);
                      FUN_10a85b5d8(&pmStack_4e8,auStack_140);
                      pmVar79[7].ncmds = pmVar79[7].cpusubtype;
                      pmVar79[7].sizeofcmds = pmVar79[7].filetype;
                      *(long ******)(pmVar79 + 8) = (long *****)0x0;
                      pmVar79[8].cpusubtype = 0x7f7fffff;
                      pmVar79[8].reserved = 0;
                      ppuVar48 = (undefined **)auStack_140;
                      FUN_10a0cb98c(pmVar79 + 7);
                      if (auStack_140 != (undefined1  [8])0x0) {
                        uStack_138 = (undefined **)auStack_140;
                        __ZdlPv();
                      }
                      if (pmVar36 != (mach_header *)0x0) {
                        pdVar90 = &pmVar36->cpusubtype;
                        do {
                          lVar65 = *(long *)pdVar90;
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = lVar65 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar65 == 0) {
                          (*(code *)(*(long ******)pmVar36)[2])(pmVar36);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar36);
                        }
                      }
                    }
                    pmVar79 = (mach_header *)ppppplVar91[7];
                    if (pmVar79 == (mach_header *)0x0) {
LAB_10a0bc2d0:
                      pmStack_278 = (mach_header *)0x0;
                      auStack_280 = (undefined1  [8])0x0;
                    }
                    else {
                      ppuVar48 = &PTR_DAT_110c3f040;
                      ___dynamic_cast(pmVar79,&PTR_DAT_110c3f040,&PTR_DAT_110c3f970,0);
                      if (pmVar79 == (mach_header *)0x0) goto LAB_10a0bc2d0;
                      pmVar36 = (mach_header *)ppppplVar91[8];
                      if (pmVar36 != (mach_header *)0x0) {
                        pdVar90 = &pmVar36->cpusubtype;
                        do {
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = *(long *)pdVar90 + 1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                      }
                      uStack_138 = (undefined **)0x0;
                      auStack_140 = (undefined1  [8])0x0;
                      uStack_130 = (code *)0x0;
                      auStack_280 = (undefined1  [8])pmVar79;
                      pmStack_278 = pmVar36;
                      FUN_10a0cc894(auStack_140,*(long *)&pmVar79[7].cpusubtype,
                                    *(long *)&pmVar79[7].ncmds,
                                    (*(long *)&pmVar79[7].ncmds - *(long *)&pmVar79[7].cpusubtype >>
                                    2) * -0x3333333333333333);
                      FUN_10a85ba34(&pmStack_4e8,auStack_140);
                      pmVar79[7].ncmds = pmVar79[7].cpusubtype;
                      pmVar79[7].sizeofcmds = pmVar79[7].filetype;
                      *(long ******)(pmVar79 + 8) = (long *****)0x0;
                      pmVar79[8].cpusubtype = 0x7f7fffff;
                      pmVar79[9].magic = 0;
                      ppuVar48 = (undefined **)auStack_140;
                      func_0x00010a0cbfcc(pmVar79 + 7);
                      if (auStack_140 != (undefined1  [8])0x0) {
                        uStack_138 = (undefined **)auStack_140;
                        __ZdlPv();
                      }
                      if (pmVar36 != (mach_header *)0x0) {
                        pdVar90 = &pmVar36->cpusubtype;
                        do {
                          lVar65 = *(long *)pdVar90;
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                          if (bVar23) {
                            *(long *)pdVar90 = lVar65 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar65 == 0) {
                          (*(code *)(*(long ******)pmVar36)[2])(pmVar36);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar36);
                        }
                      }
                    }
                    ppppplVar87 = (long *****)ppppplVar91[1];
                    ppppplVar30 = ppppplVar91;
                    pmVar79 = pmStack_2c8;
                    if ((long *****)ppppplVar91[1] == (long *****)0x0) {
                      do {
                        ppppplVar91 = (long *****)ppppplVar30[2];
                        bVar23 = (long *****)*ppppplVar91 != ppppplVar30;
                        ppppplVar30 = ppppplVar91;
                      } while (bVar23);
                    }
                    else {
                      do {
                        ppppplVar91 = ppppplVar87;
                        ppppplVar87 = (long *****)*ppppplVar91;
                      } while ((long *****)*ppppplVar91 != (long *****)0x0);
                    }
                  }
                  if (pmVar79 != (mach_header *)0x0) {
                    pdVar90 = &pmVar79->cpusubtype;
                    do {
                      lVar65 = *(long *)pdVar90;
                      cVar18 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                      if (bVar23) {
                        *(long *)pdVar90 = lVar65 + -1;
                        cVar18 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar18 != '\0');
                    if (lVar65 == 0) {
                      (*(code *)(*(long ******)pmVar79)[2])(pmVar79);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                    }
                  }
                }
                pmVar79 = (mach_header *)&pmStack_260;
                pmVar81 = (mach_header *)&pmStack_260;
                if (pmStack_260 != (mach_header *)0x0) {
                  pmVar36 = pmStack_260;
                  do {
                    while (pmVar35 = pmVar36, pmVar79 = pmVar35,
                          (int)((mach_header *)((long)auVar59 + 0x20))->magic <
                          (int)pmVar35[1].magic) {
                      pmVar36 = *(mach_header **)pmVar35;
                      pmVar81 = pmVar35;
                      if (*(mach_header **)pmVar35 == (mach_header *)0x0) goto LAB_10a0bc398;
                    }
                    if ((int)((mach_header *)((long)auVar59 + 0x20))->magic <= (int)pmVar35[1].magic
                       ) goto LAB_10a0bc3f4;
                    pmVar36 = *(mach_header **)&pmVar35->cpusubtype;
                  } while (*(mach_header **)&pmVar35->cpusubtype != (mach_header *)0x0);
                  pmVar81 = (mach_header *)&pmVar35->cpusubtype;
                }
LAB_10a0bc398:
                pmVar35 = (mach_header *)0x40;
                __Znwm();
                pmVar35[1].magic = ((mach_header *)((long)auVar59 + 0x20))->magic;
                pmVar35[1].ncmds = 0;
                pmVar35[1].sizeofcmds = 0;
                pmVar35[1].flags = 0;
                pmVar35[1].reserved = 0;
                pmVar35[1].cpusubtype = 0;
                pmVar35[1].filetype = 0;
                *(long ******)pmVar35 = (long *****)0x0;
                pmVar35->cpusubtype = 0;
                pmVar35->filetype = 0;
                *(mach_header **)&pmVar35->ncmds = pmVar79;
                *(mach_header **)pmVar81 = pmVar35;
                ppuVar48 = (undefined **)pmVar35;
                if (*(mach_header **)auStack_268 != (mach_header *)0x0) {
                  ppuVar48 = *(undefined ***)pmVar81;
                  auStack_268 = (undefined1  [8])*(mach_header **)auStack_268;
                }
                func_0x000107c2b058(pmStack_260);
                uStack_258 = uStack_258 + 1;
LAB_10a0bc3f4:
                cVar18 = *(char *)((long)&pmVar63->sizeofcmds + 3);
                pmStack_168 = (mach_header *)(long)cVar18;
                if ((long)pmStack_168 < 0) {
                  pmStack_168 = *(mach_header **)&pmVar63->cpusubtype;
                  if (pmStack_168 == (mach_header *)0x0) goto LAB_10a0bc420;
                  auStack_170 = (undefined1  [8])*(mach_header **)pmVar63;
                }
                else {
                  auStack_170 = (undefined1  [8])pmVar63;
                  if (cVar18 == '\0') {
LAB_10a0bc420:
                    pmStack_168 = (mach_header *)0x9;
                    auStack_170 = (undefined1  [8])&DAT_10f63897a;
                  }
                }
                uVar77 = *(ulong *)&pmVar35[1].ncmds;
                if (uVar77 < *(ulong *)&pmVar35[1].flags) {
                  ppuVar48 = (undefined **)pmStack_2a0;
                  FUN_10a0cc90c(uVar77,pmStack_2a0,pmStack_298,auStack_170);
                  lVar65 = uVar77 + 0x28;
                  *(long *)&pmVar35[1].ncmds = lVar65;
                }
                else {
                  pdVar90 = &pmVar35[1].cpusubtype;
                  lVar65 = uVar77 - *(long *)pdVar90;
                  uVar77 = (lVar65 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar77) {
                    FUN_10a0cca40();
                    goto LAB_10a0c08b4;
                  }
                  lVar57 = (long)(*(ulong *)&pmVar35[1].flags - *(long *)pdVar90) >> 3;
                  uVar71 = lVar57 * -0x6666666666666666;
                  if (uVar71 < uVar77 || uVar71 - uVar77 == 0) {
                    uVar71 = uVar77;
                  }
                  if (0x333333333333332 < (ulong)(lVar57 * -0x3333333333333333)) {
                    uVar71 = 0x666666666666666;
                  }
                  pmStack_120 = (mach_header *)pdVar90;
                  if (uVar71 == 0) {
                    uVar71 = 0;
                    ppuVar48 = (undefined **)0x0;
                  }
                  else {
                    FUN_10a0cca54();
                  }
                  lVar65 = uVar71 + lVar65;
                  lVar57 = uVar71 + (long)ppuVar48 * 0x28;
                  ppuVar48 = (undefined **)pmStack_2a0;
                  auStack_140 = (undefined1  [8])uVar71;
                  uStack_138 = (undefined **)lVar65;
                  uStack_130 = (code *)lVar65;
                  uStack_128 = (mach_header *)lVar57;
                  FUN_10a0cc90c(lVar65,pmStack_2a0,pmStack_298,auStack_170);
                  uStack_130 = (code *)(lVar65 + 0x28);
                  pmVar79 = *(mach_header **)&pmVar35[1].cpusubtype;
                  puVar26 = *(undefined1 **)&pmVar35[1].ncmds;
                  puVar58 = (undefined8 *)(lVar65 + ((long)pmVar79 - (long)puVar26));
                  pmVar81 = pmVar79;
                  puVar68 = puVar58;
                  lVar65 = (long)uStack_130;
                  if ((long)pmVar79 - (long)puVar26 != 0) {
                    do {
                      ppppplVar91 = *(long ******)pmVar81;
                      puVar68[1] = *(undefined8 *)&pmVar81->cpusubtype;
                      *puVar68 = ppppplVar91;
                      *(long ******)pmVar81 = (long *****)0x0;
                      pmVar81->cpusubtype = 0;
                      pmVar81->filetype = 0;
                      uVar80 = *(undefined8 *)&pmVar81->flags;
                      uVar47 = *(undefined8 *)&pmVar81->ncmds;
                      puVar68[4] = *(long ******)(pmVar81 + 1);
                      puVar68[3] = uVar80;
                      puVar68[2] = uVar47;
                      pmVar81->flags = 0;
                      pmVar81->reserved = 0;
                      *(long ******)(pmVar81 + 1) = (long *****)0x0;
                      pmVar81->ncmds = 0;
                      pmVar81->sizeofcmds = 0;
                      pmVar36 = pmVar81 + 1;
                      pmVar81 = (mach_header *)&pmVar36->cpusubtype;
                      puVar68 = puVar68 + 5;
                    } while (&pmVar36->cpusubtype != (dword *)puVar26);
                    do {
                      func_0x00010a0cca98(pmVar79);
                      pmVar79 = (mach_header *)&pmVar79[1].cpusubtype;
                    } while (pmVar79 != (mach_header *)puVar26);
                    pmVar79 = *(mach_header **)pdVar90;
                    lVar57 = (long)uStack_128;
                    lVar65 = (long)uStack_130;
                  }
                  *(undefined8 **)&pmVar35[1].cpusubtype = puVar58;
                  pmVar35[1].ncmds = (int)lVar65;
                  pmVar35[1].sizeofcmds = (int)((ulong)lVar65 >> 0x20);
                  uStack_128 = *(mach_header **)&pmVar35[1].flags;
                  pmVar35[1].flags = (int)lVar57;
                  pmVar35[1].reserved = (int)((ulong)lVar57 >> 0x20);
                  auStack_140 = (undefined1  [8])pmVar79;
                  uStack_138 = (undefined **)pmVar79;
                  uStack_130 = (code *)pmVar79;
                  func_0x00010a0ccac8(auStack_140);
                }
                pmVar35[1].ncmds = (int)lVar65;
                pmVar35[1].sizeofcmds = (int)((ulong)lVar65 >> 0x20);
              }
              pmVar79 = pmStack_298;
              if (pmStack_298 != (mach_header *)0x0) {
                pdVar90 = &pmStack_298->cpusubtype;
                do {
                  lVar65 = *(long *)pdVar90;
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                  if (bVar23) {
                    *(long *)pdVar90 = lVar65 + -1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
                if (lVar65 == 0) {
                  (*(code *)(*(long ******)pmStack_298)[2])(pmStack_298);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                }
              }
              pmVar79 = *(mach_header **)&((mach_header *)auVar59)->cpusubtype;
              pmVar81 = (mach_header *)auVar59;
              if (*(mach_header **)&((mach_header *)auVar59)->cpusubtype == (mach_header *)0x0) {
                do {
                  auVar59 = *(undefined1 (*) [8])&pmVar81->ncmds;
                  bVar23 = *(mach_header **)auVar59 != pmVar81;
                  pmVar81 = (mach_header *)auVar59;
                } while (bVar23);
              }
              else {
                do {
                  auVar59 = (undefined1  [8])pmVar79;
                  pmVar79 = *(mach_header **)auVar59;
                } while (*(mach_header **)auVar59 != (mach_header *)0x0);
              }
            }
          }
          ppppplVar91 = (long *****)(long)*(char *)((long)&pmVar63[7].filetype + 3);
          if ((long)ppppplVar91 < 0) {
            ppppplVar91 = *(long ******)(pmVar63 + 7);
          }
          if (ppppplVar91 == (long *****)0x0) {
            puVar26 = auStack_420;
            func_0x00010945a80c(puVar26,&DAT_10f636f1e);
            func_0x000109382360(auStack_140,0,0,0,1);
            FUN_10a0a4bec(puVar26,auStack_140);
            func_0x000109380ffc(&uStack_138,(ulong)auStack_140 & 0xff);
          }
          else {
            puVar26 = auStack_420;
            func_0x00010945a80c(puVar26,&DAT_10f636f1e);
            uStack_1d8 = (mach_header *)0x0;
            func_0x0001094749d8(auStack_140,&pmVar63[6].flags,auStack_1f0,1,0);
            FUN_10a0a4bec(puVar26,auStack_140);
            func_0x000109380ffc(&uStack_138,(ulong)auStack_140 & 0xff);
            if (uStack_1d8 == (mach_header *)auStack_1f0) {
              lVar65 = 0x20;
            }
            else {
              if (uStack_1d8 == (mach_header *)0x0) goto LAB_10a0bc708;
              lVar65 = 0x28;
            }
            (**(code **)((long)*(long ******)uStack_1d8 + lVar65))();
          }
LAB_10a0bc708:
          func_0x00010a0dc510(pmStack_208);
          pmVar63 = (mach_header *)&pmVar63[8].cpusubtype;
        } while (pmVar63 != pmVar42);
      }
      func_0x00010a0dc4d0(pmStack_470);
      pmStack_478 = (mach_header *)auStack_268;
      pmStack_470 = pmStack_260;
      uStack_468 = uStack_258;
      pmVar63 = (mach_header *)&pmStack_470;
      if (uStack_258 != 0) {
        *(mach_header **)&pmStack_260->ncmds = (mach_header *)&pmStack_470;
        pmStack_260 = (mach_header *)0x0;
        uStack_258 = 0;
        pmVar63 = pmStack_478;
        auStack_268 = (undefined1  [8])&pmStack_260;
      }
      pmStack_478 = pmVar63;
      func_0x00010a0dc4d0(pmStack_260);
      goto LAB_10a0bdde0;
    }
    dVar103 = *(double *)&param_3->cpusubtype;
    if (dVar103 != 0.0) {
      if ((35.0 < dVar103) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f636e80,0x22f,&UNK_10f636efb);
      }
      goto LAB_10a0bb0e8;
    }
  }
  else {
    uStack_138 = (undefined **)0x0;
    auStack_140 = (undefined1  [8])0x0;
    uStack_128 = (mach_header *)0x0;
    uStack_130 = (code *)0x0;
    pmStack_120 = (mach_header *)CONCAT44(pmStack_120._4_4_,0x3f800000);
    pmStack_108 = (mach_header *)0x0;
    auStack_110 = (undefined1  [8])0x0;
    dVar103 = 30.0;
    pmStack_118 = (mach_header *)auStack_110;
    if ((char)param_3->ncmds == '\x01') {
      dVar103 = *(double *)&param_3->cpusubtype;
      if (dVar103 == 0.0) {
        uVar47 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
        ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
        goto LAB_10a0c08b4;
      }
      if ((35.0 < dVar103) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f636f28,0x274,&UNK_10f636efb);
      }
    }
    func_0x000109382360(&pmStack_220,0,0,0,2);
    puVar26 = auStack_420;
    func_0x00010945a80c(puVar26,&DAT_10f414fbf);
    uVar17 = *puVar26;
    *puVar26 = pmStack_220._0_1_;
    pmStack_220 = (mach_header *)CONCAT71(pmStack_220._1_7_,uVar17);
    pmVar63 = *(mach_header **)(puVar26 + 8);
    *(mach_header **)(puVar26 + 8) = pmStack_218;
    pmStack_218 = pmVar63;
    func_0x000109380ffc(&pmStack_218);
    pmVar63 = *(mach_header **)&param_3[2].cpusubtype;
    pmVar42 = *(mach_header **)&param_3[2].ncmds;
    if (pmVar63 != pmVar42) {
      do {
        uVar38._0_4_ = param_3[1].cpusubtype;
        uVar38._4_4_ = param_3[1].filetype;
        FUN_10a0a4d14(&pmStack_230,uVar38);
        pmVar79 = pmStack_230;
        if (*(char *)((long)&pmVar63->sizeofcmds + 3) < '\0') {
          uVar8._0_4_ = pmVar63->cpusubtype;
          uVar8._4_4_ = pmVar63->filetype;
          func_0x000107c3192c(auStack_250,*(long ******)pmVar63,uVar8);
        }
        else {
          pmStack_248 = *(mach_header **)&pmVar63->cpusubtype;
          auStack_250 = *(undefined1 (*) [8])pmVar63;
          pmStack_240 = *(mach_header **)&pmVar63->ncmds;
        }
        if (*(char *)((long)&pmVar79[3].filetype + 3) < '\0') {
          uVar39._0_4_ = pmVar79[2].flags;
          uVar39._4_4_ = pmVar79[2].reserved;
          __ZdlPv(uVar39);
        }
        *(mach_header **)(pmVar79 + 3) = pmStack_248;
        pmVar79[2].flags = auStack_250._0_4_;
        pmVar79[2].reserved = auStack_250._4_4_;
        *(mach_header **)&pmVar79[3].cpusubtype = pmStack_240;
        pmStack_240 = (mach_header *)((ulong)pmStack_240 & 0xffffffffffffff);
        auStack_250 = (undefined1  [8])((ulong)auStack_250 & 0xffffffffffffff00);
        pmVar79 = (mach_header *)auStack_140;
        func_0x000107c2b05c(pmVar79,pmVar63);
        pmVar81 = (mach_header *)uStack_138;
        if ((mach_header *)uStack_138 != (mach_header *)0x0) {
          puVar26 = (undefined1 *)((long)&((mach_header *)((long)uStack_138 + -0x20))->reserved + 3)
          ;
          if (((ulong)uStack_138 & (ulong)puVar26) == 0) {
            unaff_x22 = (undefined1  [8])((ulong)puVar26 & (ulong)pmVar79);
          }
          else {
            unaff_x22 = (undefined1  [8])pmVar79;
            if (uStack_138 <= pmVar79) {
              uVar77 = 0;
              if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                uVar77 = (ulong)pmVar79 / (ulong)uStack_138;
              }
              unaff_x22 = (undefined1  [8])((long)pmVar79 - uVar77 * (long)uStack_138);
            }
          }
          if (*(long **)((dword *)auStack_140 + (long)unaff_x22 * 2) != (long *)0x0) {
            for (plVar78 = (long *)**(long **)((dword *)auStack_140 + (long)unaff_x22 * 2);
                plVar78 != (long *)0x0; plVar78 = (long *)*plVar78) {
              pmVar36 = (mach_header *)plVar78[1];
              if (pmVar36 == pmVar79) {
                puVar40 = auStack_140;
                func_0x000107c2b068(puVar40,plVar78 + 2,pmVar63);
                if (((ulong)puVar40 & 1) != 0) {
                  func_0x00010a0dd924(plVar78 + 5,&pmStack_230);
                  goto LAB_10a0bcc6c;
                }
              }
              else {
                if (((ulong)pmVar81 & (ulong)puVar26) == 0) {
                  pmVar36 = (mach_header *)((ulong)pmVar36 & (ulong)puVar26);
                }
                else if (pmVar81 <= pmVar36) {
                  uVar77 = 0;
                  if (pmVar81 != (mach_header *)0x0) {
                    uVar77 = (ulong)pmVar36 / (ulong)pmVar81;
                  }
                  pmVar36 = (mach_header *)((long)pmVar36 - uVar77 * (long)pmVar81);
                }
                if ((undefined1  [8])pmVar36 != unaff_x22) break;
              }
            }
          }
        }
        pmVar36 = (mach_header *)0x38;
        __Znwm();
        uStack_1e8 = (undefined **)auStack_140;
        uStack_1e0._0_4_ = 0;
        uStack_1e0._4_4_ = 0;
        *(long ******)pmVar36 = (long *****)0x0;
        *(mach_header **)&pmVar36->cpusubtype = pmVar79;
        auStack_1f0 = (undefined1  [8])pmVar36;
        if (*(char *)((long)&pmVar63->sizeofcmds + 3) < '\0') {
          uVar9._0_4_ = pmVar63->cpusubtype;
          uVar9._4_4_ = pmVar63->filetype;
          func_0x000107c3192c(&pmVar36->ncmds,*(long ******)pmVar63,uVar9);
        }
        else {
          dVar106 = pmVar63->cpusubtype;
          dVar107 = pmVar63->filetype;
          dVar108 = pmVar63->magic;
          dVar20 = pmVar63->cputype;
          dVar104 = pmVar63->sizeofcmds;
          pmVar36[1].magic = pmVar63->ncmds;
          pmVar36[1].cputype = dVar104;
          pmVar36->flags = dVar106;
          pmVar36->reserved = dVar107;
          pmVar36->ncmds = dVar108;
          pmVar36->sizeofcmds = dVar20;
        }
        *(mach_header **)&pmVar36[1].ncmds = pmStack_228;
        *(mach_header **)&pmVar36[1].cpusubtype = pmStack_230;
        if (pmStack_228 != (mach_header *)0x0) {
          pdVar90 = &pmStack_228->cpusubtype;
          do {
            cVar18 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
        }
        uStack_1e0 = (mach_header *)CONCAT71(uStack_1e0._1_7_,1);
        fVar105 = (float)(undefined1 *)((long)&uStack_128->magic + 1);
        if ((pmVar81 == (mach_header *)0x0) || (pmStack_120._0_4_ * (float)pmVar81 < fVar105)) {
          uVar77 = 1;
          if ((mach_header *)0x2 < pmVar81) {
            uVar77 = (ulong)(((ulong)pmVar81 & (ulong)((long)&pmVar81[-1].reserved + 3)) != 0);
          }
          pmVar81 = (mach_header *)(uVar77 | (long)pmVar81 << 1);
          pmVar35 = (mach_header *)(long)(fVar105 / pmStack_120._0_4_);
          if (pmVar81 <= pmVar35) {
            pmVar81 = pmVar35;
          }
          puVar26 = (undefined1 *)((long)&pmVar81[-1].reserved + 3);
          if (puVar26 == (undefined1 *)0x0) {
            pmVar81 = (mach_header *)0x2;
          }
          else if (((ulong)pmVar81 & (ulong)puVar26) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pmVar35 = (mach_header *)uStack_138;
          if (uStack_138 < pmVar81) {
LAB_10a0bca80:
            if ((ulong)pmVar81 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a0c08b4;
            }
            pmVar35 = (mach_header *)((long)pmVar81 << 3);
            __Znwm();
            bVar23 = auStack_140 != (undefined1  [8])0x0;
            auStack_140 = (undefined1  [8])pmVar35;
            if (bVar23) {
              __ZdlPv();
            }
            pmVar35 = (mach_header *)0x0;
            do {
              *(undefined8 *)((dword *)auStack_140 + (long)pmVar35 * 2) = 0;
              pmVar35 = (mach_header *)((long)&pmVar35->magic + 1);
            } while (pmVar81 != pmVar35);
            uStack_138 = (undefined **)pmVar81;
            if ((mach_header *)uStack_130 != (mach_header *)0x0) {
              pmVar35 = *(mach_header **)&((mach_header *)uStack_130)->cpusubtype;
              puVar26 = (undefined1 *)((long)&pmVar81[-1].reserved + 3);
              if (((ulong)pmVar81 & (ulong)puVar26) == 0) {
                pmVar35 = (mach_header *)((ulong)pmVar35 & (ulong)puVar26);
              }
              else if (pmVar81 <= pmVar35) {
                uVar77 = 0;
                if (pmVar81 != (mach_header *)0x0) {
                  uVar77 = (ulong)pmVar35 / (ulong)pmVar81;
                }
                pmVar35 = (mach_header *)((long)pmVar35 - uVar77 * (long)pmVar81);
              }
              *(undefined8 **)((dword *)auStack_140 + (long)pmVar35 * 2) = &uStack_130;
              pmVar37 = *(mach_header **)uStack_130;
              pmVar93 = (mach_header *)uStack_130;
              while (pmVar37 != (mach_header *)0x0) {
                pmVar74 = *(mach_header **)&pmVar37->cpusubtype;
                if (((ulong)pmVar81 & (ulong)puVar26) == 0) {
                  pmVar74 = (mach_header *)((ulong)pmVar74 & (ulong)puVar26);
                }
                else if (pmVar81 <= pmVar74) {
                  uVar77 = 0;
                  if (pmVar81 != (mach_header *)0x0) {
                    uVar77 = (ulong)pmVar74 / (ulong)pmVar81;
                  }
                  pmVar74 = (mach_header *)((long)pmVar74 - uVar77 * (long)pmVar81);
                }
                pmVar73 = pmVar37;
                if (pmVar74 != pmVar35) {
                  if (*(long *)((dword *)auStack_140 + (long)pmVar74 * 2) == 0) {
                    *(mach_header **)((dword *)auStack_140 + (long)pmVar74 * 2) = pmVar93;
                    pmVar35 = pmVar74;
                  }
                  else {
                    dVar104 = pmVar37->cputype;
                    pmVar93->magic = pmVar37->magic;
                    pmVar93->cputype = dVar104;
                    *(long ******)pmVar37 =
                         (long *****)**(undefined8 **)((dword *)auStack_140 + (long)pmVar74 * 2);
                    **(undefined8 **)((dword *)auStack_140 + (long)pmVar74 * 2) = pmVar37;
                    pmVar73 = pmVar93;
                  }
                }
                pmVar93 = pmVar73;
                pmVar37 = *(mach_header **)pmVar73;
              }
            }
          }
          else if (pmVar81 < uStack_138) {
            pmVar37 = (mach_header *)(long)((float)uStack_128 / pmStack_120._0_4_);
            if ((uStack_138 < (mach_header *)0x3) ||
               (((ulong)uStack_138 &
                (ulong)((long)&((mach_header *)((long)uStack_138 + -0x20))->reserved + 3)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((mach_header *)0x1 < pmVar37) {
              pmVar37 = (mach_header *)
                        (1L << (-LZCOUNT((undefined1 *)((long)&pmVar37[-1].reserved + 3)) & 0x3fU));
            }
            auVar59 = auStack_140;
            if (pmVar81 <= pmVar37) {
              pmVar81 = pmVar37;
            }
            if (pmVar81 < pmVar35) {
              if (pmVar81 != (mach_header *)0x0) goto LAB_10a0bca80;
              auStack_140 = (undefined1  [8])0x0;
              if (auVar59 != (undefined1  [8])0x0) {
                __ZdlPv();
              }
              uStack_138 = (undefined **)0x0;
            }
          }
          puVar26 = (undefined1 *)((long)&((mach_header *)((long)uStack_138 + -0x20))->reserved + 3)
          ;
          pmVar81 = (mach_header *)uStack_138;
          if (((ulong)uStack_138 & (ulong)puVar26) == 0) {
            unaff_x22 = (undefined1  [8])((ulong)puVar26 & (ulong)pmVar79);
          }
          else {
            unaff_x22 = (undefined1  [8])pmVar79;
            if (uStack_138 <= pmVar79) {
              uVar77 = 0;
              if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                uVar77 = (ulong)pmVar79 / (ulong)uStack_138;
              }
              unaff_x22 = (undefined1  [8])((long)pmVar79 - uVar77 * (long)uStack_138);
            }
          }
        }
        puVar58 = *(undefined8 **)((dword *)auStack_140 + (long)unaff_x22 * 2);
        if (puVar58 == (undefined8 *)0x0) {
          *(code **)pmVar36 = uStack_130;
          *(undefined8 **)((dword *)auStack_140 + (long)unaff_x22 * 2) = &uStack_130;
          uStack_130 = (code *)pmVar36;
          if (*(long ******)pmVar36 != (long *****)0x0) {
            pmVar79 = (mach_header *)(*(long ******)pmVar36)[1];
            puVar26 = (undefined1 *)((long)&pmVar81[-1].reserved + 3);
            if (((ulong)pmVar81 & (ulong)puVar26) == 0) {
              pmVar79 = (mach_header *)((ulong)pmVar79 & (ulong)puVar26);
            }
            else if (pmVar81 <= pmVar79) {
              uVar77 = 0;
              if (pmVar81 != (mach_header *)0x0) {
                uVar77 = (ulong)pmVar79 / (ulong)pmVar81;
              }
              pmVar79 = (mach_header *)((long)pmVar79 - uVar77 * (long)pmVar81);
            }
            *(mach_header **)((dword *)auStack_140 + (long)pmVar79 * 2) = pmVar36;
          }
        }
        else {
          *(long ******)pmVar36 = (long *****)*puVar58;
          *puVar58 = pmVar36;
        }
        uStack_128 = (mach_header *)((long)&uStack_128->magic + 1);
LAB_10a0bcc6c:
        pmStack_260 = (mach_header *)0x0;
        uStack_258 = 0;
        ppppplVar91 = *(long ******)(pmVar63 + 1);
        auStack_268 = (undefined1  [8])&pmStack_260;
        if (*(long ******)&pmVar63->flags != ppppplVar91) {
          piVar27 = (int *)((long)*(long ******)&pmVar63->flags + 4);
          do {
            if (*piVar27 != -1) {
              puVar26 = auStack_268;
              FUN_10a0dc550(puVar26,*piVar27,piVar27);
              FUN_10a0a294c(puVar26 + 0x28,piVar27 + -1);
            }
            ppppplVar87 = (long *****)(piVar27 + 0x43);
            piVar27 = piVar27 + 0x44;
            auVar59 = auStack_268;
          } while (ppppplVar87 != ppppplVar91);
          while (auVar59 != (undefined1  [8])&pmStack_260) {
            pmVar36 = (mach_header *)0x108;
            __Znwm();
            pdVar82 = &pmVar36->cpusubtype;
            pmVar36->cpusubtype = 0;
            pmVar36->filetype = 0;
            pmVar36->ncmds = 0;
            pmVar36->sizeofcmds = 0;
            *(undefined ***)pmVar36 = &PTR_FUN_110ba1ca8;
            pdVar90 = &pmVar36->flags;
            *(undefined ***)pdVar90 = &PTR_DAT_110c3df10;
            *(undefined1 *)&pmVar36[1].magic = 0;
            pmVar36[1].ncmds = 0;
            pmVar36[1].sizeofcmds = 0;
            pmVar36[1].flags = 0;
            pmVar36[1].reserved = 0;
            *(undefined ***)&pmVar36[1].cpusubtype = &PTR_DAT_110c3df68;
            pmVar36[2].cpusubtype = 0;
            pmVar36[2].filetype = 0;
            *(long ******)(pmVar36 + 2) = (long *****)0x0;
            pmVar36[2].flags = 0;
            pmVar36[2].reserved = 0;
            pmVar36[2].ncmds = 0;
            pmVar36[2].sizeofcmds = 0;
            pmVar36[3].cpusubtype = 0;
            pmVar36[3].filetype = 0;
            *(long ******)(pmVar36 + 3) = (long *****)0x0;
            pmVar36[3].flags = 0;
            pmVar36[3].reserved = 0;
            pmVar36[3].ncmds = 0;
            pmVar36[3].sizeofcmds = 0;
            pmVar36[4].cpusubtype = 0;
            pmVar36[4].filetype = 0;
            *(long ******)(pmVar36 + 4) = (long *****)0x0;
            pmVar36[4].flags = 0;
            pmVar36[4].reserved = 0;
            pmVar36[4].ncmds = 0;
            pmVar36[4].sizeofcmds = 0;
            pmVar36[5].cpusubtype = 0;
            pmVar36[5].filetype = 0;
            *(long ******)(pmVar36 + 5) = (long *****)0x0;
            pmVar36[5].ncmds = 0x3f800000;
            *(long ******)(pmVar36 + 6) = (long *****)0x0;
            pmVar36[5].flags = 0;
            pmVar36[5].reserved = 0;
            pmVar36[6].ncmds = 0;
            pmVar36[6].sizeofcmds = 0;
            pmVar36[6].cpusubtype = 0;
            pmVar36[6].filetype = 0;
            pmVar36[6].flags = 0x3f800000;
            pmVar36[7].cpusubtype = 0;
            pmVar36[7].filetype = 0;
            *(long ******)(pmVar36 + 7) = (long *****)0x0;
            pmVar36[7].flags = 0;
            pmVar36[7].reserved = 0;
            pmVar36[7].ncmds = 0;
            pmVar36[7].sizeofcmds = 0;
            pmVar36[8].magic = 0x3f800000;
            pmVar79 = ((mach_header **)((long)auVar59 + 0x20))[1];
            pmVar81 = ((mach_header **)((long)auVar59 + 0x20))[2];
            if (pmVar79 != pmVar81) {
              do {
                dVar104 = pmVar79->magic;
                uVar77 = (*(long *)&pmVar63[1].flags - *(long *)&pmVar63[1].ncmds >> 5) *
                         0x6db6db6db6db6db7;
                if (uVar77 < (ulong)(long)(int)dVar104 || uVar77 - (long)(int)dVar104 == 0)
                goto LAB_10a0c08b4;
                pdVar99 = &pmVar79->cpusubtype;
                FUN_10a0a2b44(1.0 / dVar103,auStack_280,param_3,
                              *(long *)&pmVar63[1].ncmds + (long)(int)dVar104 * 0xe0,pdVar99);
                pmVar35 = pmStack_278;
                auVar94 = auStack_280;
                if (auStack_280 != (undefined1  [8])pmStack_278) {
                  lVar69 = (long)*(char *)((long)&pmVar79->reserved + 3);
                  pdVar49 = pdVar99;
                  if (lVar69 < 0) {
                    lVar69._0_4_ = pmVar79->ncmds;
                    lVar69._4_4_ = pmVar79->sizeofcmds;
                    pdVar49 = *(dword **)&pmVar79->cpusubtype;
                  }
                  if (((lVar69 != 7) ||
                      (*pdVar49 != 0x67696577 || *(int *)((long)pdVar49 + 3) != 0x73746867)) ||
                     ((param_3->flags & 0x100) == 0)) {
                    do {
                      cVar18 = '\x01';
                      bVar23 = (bool)ExclusiveMonitorPass(pdVar82,0x10);
                      if (bVar23) {
                        *(long *)pdVar82 = *(long *)pdVar82 + 1;
                        cVar18 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar18 != '\0');
                    bVar53 = *(byte *)((long)&pmVar79->reserved + 3);
                    uVar77._0_4_ = pmVar79->ncmds;
                    uVar77._4_4_ = pmVar79->sizeofcmds;
                    if (-1 < (char)bVar53) {
                      uVar77 = (ulong)bVar53;
                    }
                    pmStack_2a0 = (mach_header *)pdVar90;
                    pmStack_298 = pmVar36;
                    if (uVar77 == 5) {
                      pdVar49 = *(dword **)pdVar99;
                      if (-1 < (char)bVar53) {
                        pdVar49 = pdVar99;
                      }
                      if (*pdVar49 == 0x6c616373 && (char)pdVar49[1] == 'e') {
                        FUN_10a0ccbfc(auStack_1f0,auStack_280,pmStack_278);
                        FUN_10aa7e3c0(pdVar90,auStack_1f0);
                        if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
                          pdVar99 = &((mach_header *)uStack_1e8)->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar99;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar35 = (mach_header *)uStack_1e8;
                          } while (cVar18 != '\0');
LAB_10a0bd47c:
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmVar35)[2])(pmVar35);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar35);
                          }
                        }
LAB_10a0bd498:
                        if (pmStack_298 == (mach_header *)0x0) goto LAB_10a0bd4fc;
                        pdVar99 = &pmStack_298->cpusubtype;
                        do {
                          lVar65 = *(long *)pdVar99;
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                          if (bVar23) {
                            *(long *)pdVar99 = lVar65 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                          pmVar35 = pmStack_298;
                        } while (cVar18 != '\0');
                        goto LAB_10a0bd4e0;
                      }
                    }
                    else if (uVar77 == 8) {
                      pdVar49 = *(dword **)pdVar99;
                      if (-1 < (char)bVar53) {
                        pdVar49 = pdVar99;
                      }
                      if (*(long *)pdVar49 == 0x6e6f697461746f72) {
                        uStack_1e8 = (undefined **)0x0;
                        auStack_1f0 = (undefined1  [8])0x0;
                        uStack_1e0 = (mach_header *)0x0;
                        do {
                          pdVar99 = *(dword **)&((mach_header *)auVar94)->cpusubtype;
                          if ((ulong)(*(long *)&((mach_header *)auVar94)->ncmds - (long)pdVar99) <
                              0xd) goto LAB_10a0c08b4;
                          dVar108 = *pdVar99;
                          dVar106 = pdVar99[1];
                          dVar107 = pdVar99[2];
                          dVar104 = pdVar99[3];
                          if (uStack_1e8 < uStack_1e0) {
                            ((mach_header *)uStack_1e8)->magic = ((mach_header *)auVar94)->magic;
                            ((mach_header *)uStack_1e8)->cputype = dVar108;
                            ((mach_header *)uStack_1e8)->cpusubtype = dVar106;
                            ((mach_header *)uStack_1e8)->filetype = dVar107;
                            ((mach_header *)uStack_1e8)->ncmds = dVar104;
                            pmVar37 = (mach_header *)&((mach_header *)uStack_1e8)->sizeofcmds;
                          }
                          else {
                            lVar65 = (long)uStack_1e8 - (long)auStack_1f0;
                            uVar77 = (lVar65 >> 2) * -0x3333333333333333 + 1;
                            if (0xccccccccccccccc < uVar77) {
                              FUN_10a0cc118();
                              goto LAB_10a0c08b4;
                            }
                            lVar57 = (long)uStack_1e0 - (long)auStack_1f0 >> 2;
                            uVar71 = lVar57 * -0x6666666666666666;
                            if (uVar71 < uVar77 || uVar71 - uVar77 == 0) {
                              uVar71 = uVar77;
                            }
                            if (0x666666666666665 < (ulong)(lVar57 * -0x3333333333333333)) {
                              uVar71 = 0xccccccccccccccc;
                            }
                            puVar26 = auStack_1f0;
                            FUN_10a0cc12c();
                            auVar97 = auStack_1f0;
                            lVar57 = (long)uStack_1e8 - (long)auStack_1f0;
                            pdVar99 = (dword *)(puVar26 + lVar65);
                            *pdVar99 = ((mach_header *)auVar94)->magic;
                            pdVar99[1] = dVar108;
                            pdVar99[2] = dVar106;
                            pdVar99[3] = dVar107;
                            pdVar99[4] = dVar104;
                            pmVar37 = (mach_header *)(pdVar99 + 5);
                            pmVar93 = (mach_header *)((long)pdVar99 - lVar57);
                            _memcpy(pmVar93,auVar97);
                            bVar23 = auStack_1f0 != (undefined1  [8])0x0;
                            auStack_1f0 = (undefined1  [8])pmVar93;
                            uStack_1e0 = (mach_header *)(puVar26 + uVar71 * 0x14);
                            if (bVar23) {
                              uStack_1e8 = (undefined **)pmVar37;
                              __ZdlPv();
                            }
                          }
                          auVar94 = (undefined1  [8])((long)auVar94 + 0x20);
                          uStack_1e8 = (undefined **)pmVar37;
                        } while (auVar94 != (undefined1  [8])pmVar35);
                        pmVar35 = (mach_header *)0x88;
                        __Znwm();
                        pmVar35->cpusubtype = 0;
                        pmVar35->filetype = 0;
                        pmVar35->ncmds = 0;
                        pmVar35->sizeofcmds = 0;
                        *(undefined ***)pmVar35 = &PTR_FUN_110ba1df8;
                        pmVar35[1].cpusubtype = 0;
                        pmVar35[1].filetype = 0;
                        *(long ******)(pmVar35 + 1) = (long *****)0x0;
                        pmVar35[1].flags = 0;
                        pmVar35[1].reserved = 0;
                        pmVar35[1].ncmds = 0;
                        pmVar35[1].sizeofcmds = 0;
                        pmVar35[2].cpusubtype = 0;
                        pmVar35[2].filetype = 0;
                        *(long ******)(pmVar35 + 2) = (long *****)0x0;
                        pmVar35[2].ncmds = 0;
                        pmVar35[2].sizeofcmds = 0x3f800000;
                        pmVar35[2].flags = 0;
                        *(undefined1 *)&pmVar35[3].cpusubtype = 0;
                        pmVar35[3].flags = 0;
                        pmVar35[3].reserved = 0;
                        *(long ******)(pmVar35 + 4) = (long *****)0x0;
                        auStack_210 = (undefined1  [8])&pmVar35->flags;
                        *(undefined ***)auStack_210 = &PTR_FUN_110c3e758;
                        *(undefined ***)(pmVar35 + 3) = &PTR_FUN_110c3e7c0;
                        *(undefined ***)&pmVar35[3].ncmds = &PTR_FUN_110c3e830;
                        pmStack_208 = pmVar35;
                        func_0x00010a0cbfcc(auStack_210,auStack_1f0);
                        if (auStack_1f0 != (undefined1  [8])0x0) {
                          uStack_1e8 = (undefined **)auStack_1f0;
                          __ZdlPv();
                        }
                        FUN_10aa7e258(pdVar90,auStack_210);
                        if (pmStack_208 != (mach_header *)0x0) {
                          pdVar99 = &pmStack_208->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar99;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar35 = pmStack_208;
                          } while (cVar18 != '\0');
                          goto LAB_10a0bd47c;
                        }
                        goto LAB_10a0bd498;
                      }
                    }
                    else if (uVar77 == 0xb) {
                      pdVar49 = *(dword **)pdVar99;
                      if (-1 < (char)bVar53) {
                        pdVar49 = pdVar99;
                      }
                      if (*(long *)pdVar49 == 0x74616c736e617274 &&
                          *(long *)((long)pdVar49 + 3) == 0x6e6f6974616c736e) {
                        FUN_10a0ccbfc(auStack_1f0,auStack_280,pmStack_278);
                        FUN_10aa7e118(pdVar90,auStack_1f0);
                        if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
                          pdVar99 = &((mach_header *)uStack_1e8)->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar99;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                            pmVar35 = (mach_header *)uStack_1e8;
                          } while (cVar18 != '\0');
                          goto LAB_10a0bd47c;
                        }
                        goto LAB_10a0bd498;
                      }
                    }
                    uVar47 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    FUN_10a0ca0d8(auStack_1f0,pdVar99,&UNK_10f63885c);
                    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              (uVar47,auStack_1f0);
                    ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    goto LAB_10a0c08b4;
                  }
                  iVar89 = *(int *)((long)auVar59 + 0x20);
                  uVar77 = (*(long *)&param_3[6].cpusubtype - (long)*(long ******)(param_3 + 6) >> 3
                           ) * 0x51b3bea3677d46cf;
                  if (uVar77 < (ulong)(long)iVar89 || uVar77 - (long)iVar89 == 0)
                  goto LAB_10a0c08b4;
                  iVar89 = *(int *)((long)*(long ******)(param_3 + 6) +
                                   ((long)iVar89 * 0x5e + 9) * 4);
                  do {
                    cVar18 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(pdVar82,0x10);
                    if (bVar23) {
                      *(long *)pdVar82 = *(long *)pdVar82 + 1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
                  lVar65 = *(long *)&param_3[0x1c].flags;
                  uVar77 = ((long)*(long ******)(param_3 + 0x1d) - lVar65 >> 3) *
                           -0x5555555555555555;
                  pmStack_290 = (mach_header *)pdVar90;
                  pmStack_288 = pmVar36;
                  if (uVar77 < (ulong)(long)iVar89 || uVar77 - (long)iVar89 == 0)
                  goto LAB_10a0c08b4;
                  FUN_10a0caa68(auStack_1f0,
                                *(long *)((long)auStack_280 + 0x10) -
                                *(long *)((long)auStack_280 + 8) >> 2);
                  pmVar37 = (mach_header *)uStack_1e8;
                  unaff_x22 = auStack_1f0;
                  plVar78 = (long *)(lVar65 + (long)iVar89 * 0x18);
                  lVar65 = (long)uStack_1e8 - (long)auStack_1f0;
                  do {
                    lVar92._0_4_ = ((mach_header *)auVar94)->cpusubtype;
                    lVar92._4_4_ = ((mach_header *)auVar94)->filetype;
                    lVar10._0_4_ = ((mach_header *)auVar94)->ncmds;
                    lVar10._4_4_ = ((mach_header *)auVar94)->sizeofcmds;
                    if (lVar10 != lVar92) {
                      uVar77 = 0;
                      auVar97 = unaff_x22;
                      do {
                        if ((lVar65 >> 3) * -0x5555555555555555 - uVar77 == 0) goto LAB_10a0c08b4;
                        pdVar99 = *(dword **)&((mach_header *)auVar97)->cpusubtype;
                        if (pdVar99 < *(dword **)&((mach_header *)auVar97)->ncmds) {
                          *pdVar99 = ((mach_header *)auVar94)->magic;
                          pdVar99[1] = *(dword *)(lVar92 + uVar77 * 4);
                          pdVar99 = pdVar99 + 2;
                        }
                        else {
                          lVar57 = (long)pdVar99 - (long)*(long ******)auVar97;
                          uVar71 = (lVar57 >> 3) + 1;
                          if (uVar71 >> 0x3d != 0) {
                            FUN_10a0caba8();
                            goto LAB_10a0c08b4;
                          }
                          uVar72 = (long)*(dword **)&((mach_header *)auVar97)->ncmds -
                                   (long)*(long ******)auVar97;
                          uVar56 = (long)uVar72 >> 2;
                          if (uVar56 <= uVar71) {
                            uVar56 = uVar71;
                          }
                          if (0x7ffffffffffffff7 < uVar72) {
                            uVar56 = 0x1fffffffffffffff;
                          }
                          pmVar93 = (mach_header *)auVar97;
                          FUN_10a0cabbc();
                          ppppplVar91 = *(long ******)auVar97;
                          lVar70 = *(long *)&((mach_header *)auVar97)->cpusubtype;
                          pdVar49 = (dword *)((long)pmVar93 + lVar57);
                          *pdVar49 = ((mach_header *)auVar94)->magic;
                          pdVar49[1] = *(dword *)(lVar92 + uVar77 * 4);
                          pdVar99 = pdVar49 + 2;
                          ppppplVar87 = (long *****)((long)pdVar49 - (lVar70 - (long)ppppplVar91));
                          _memcpy(ppppplVar87,ppppplVar91);
                          ppppplVar91 = *(long ******)auVar97;
                          *(long ******)auVar97 = ppppplVar87;
                          *(dword **)&((mach_header *)auVar97)->cpusubtype = pdVar99;
                          *(dword **)&((mach_header *)auVar97)->ncmds = &pmVar93->magic + uVar56 * 2
                          ;
                          if (ppppplVar91 != (long *****)0x0) {
                            __ZdlPv();
                          }
                        }
                        *(dword **)&((mach_header *)auVar97)->cpusubtype = pdVar99;
                        uVar77 = uVar77 + 1;
                        lVar92 = *(long *)&((mach_header *)auVar94)->cpusubtype;
                        auVar97 = (undefined1  [8])&((mach_header *)auVar97)->flags;
                      } while (uVar77 < (ulong)(*(long *)&((mach_header *)auVar94)->ncmds - lVar92
                                               >> 2));
                    }
                    auVar94 = (undefined1  [8])((long)auVar94 + 0x20);
                  } while (auVar94 != (undefined1  [8])pmVar35);
                  if ((undefined1  [8])pmVar37 == unaff_x22) {
                    FUN_10a0cab34(auStack_1f0);
                    pmVar35 = pmVar36;
                  }
                  else {
                    uVar77 = 0;
                    do {
                      pmVar35 = (mach_header *)0x78;
                      __Znwm();
                      pdVar99 = &pmVar35->cpusubtype;
                      pmVar35->cpusubtype = 0;
                      pmVar35->filetype = 0;
                      pmVar35->ncmds = 0;
                      pmVar35->sizeofcmds = 0;
                      pdVar49 = &pmVar35->flags;
                      *(undefined ***)pdVar49 = &PTR_FUN_110c3f428;
                      *(undefined ***)pmVar35 = &PTR_FUN_110ba1e48;
                      pmVar35[1].cpusubtype = 0;
                      pmVar35[1].filetype = 0;
                      *(long ******)(pmVar35 + 1) = (long *****)0x0;
                      pmVar35[1].flags = 0;
                      pmVar35[1].reserved = 0;
                      pmVar35[1].ncmds = 0;
                      pmVar35[1].sizeofcmds = 0;
                      pmVar35[2].cpusubtype = 0;
                      pmVar35[2].filetype = 0;
                      *(long ******)(pmVar35 + 2) = (long *****)0x0;
                      pmVar35[2].flags = 0;
                      pmVar35[2].reserved = 0;
                      pmVar35[2].ncmds = 0;
                      pmVar35[2].sizeofcmds = 0;
                      pmVar35[3].cpusubtype = 0;
                      pmVar35[3].filetype = 0;
                      pmVar35[3].ncmds = 0;
                      pmVar35[3].sizeofcmds = 0;
                      *(undefined ***)&pmVar35[2].ncmds = &PTR_FUN_110c3f490;
                      *(undefined ***)(pmVar35 + 3) = &PTR_FUN_110c3f500;
                      FUN_10a0ca9fc(pdVar49,&((mach_header *)unaff_x22)->magic + uVar77 * 6);
                      lVar65 = *plVar78;
                      uVar71 = (plVar78[1] - lVar65 >> 3) * -0x5555555555555555;
                      if (uVar71 < uVar77 || uVar71 - uVar77 == 0) goto LAB_10a0c08b4;
                      puVar58 = (undefined8 *)(lVar65 + uVar77 * 0x18);
                      if (*(char *)((long)puVar58 + 0x17) < '\0') {
                        func_0x000107c3192c(auStack_210,*puVar58,puVar58[1]);
                      }
                      else {
                        pmStack_208 = (mach_header *)puVar58[1];
                        auStack_210 = (undefined1  [8])*puVar58;
                        uStack_200 = puVar58[2];
                      }
                      do {
                        cVar18 = '\x01';
                        bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                        if (bVar23) {
                          *(long *)pdVar99 = *(long *)pdVar99 + 1;
                          cVar18 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar18 != '\0');
                      pmStack_4e8 = (mach_header *)pdVar49;
                      auStack_4e0._0_8_ = pmVar35;
                      FUN_10aa7e670(pmStack_290,auStack_210,&pmStack_4e8);
                      uVar47 = auStack_4e0._0_8_;
                      if ((mach_header *)auStack_4e0._0_8_ != (mach_header *)0x0) {
                        pdVar49 = (dword *)(auStack_4e0._0_8_ + 8);
                        do {
                          lVar65 = *(long *)pdVar49;
                          cVar18 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(pdVar49,0x10);
                          if (bVar23) {
                            *(long *)pdVar49 = lVar65 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar65 == 0) {
                          (*(code *)(*(long ******)auStack_4e0._0_8_)[2])(auStack_4e0._0_8_);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(uVar47);
                        }
                      }
                      if ((long)uStack_200 < 0) {
                        __ZdlPv(auStack_210);
                      }
                      do {
                        lVar65 = *(long *)pdVar99;
                        cVar18 = '\x01';
                        bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                        if (bVar23) {
                          *(long *)pdVar99 = lVar65 + -1;
                          cVar18 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar18 != '\0');
                      if (lVar65 == 0) {
                        (*(code *)(*(long ******)pmVar35)[2])(pmVar35);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar35);
                      }
                      unaff_x22 = auStack_1f0;
                      pmVar35 = pmStack_288;
                      uVar77 = uVar77 + 1;
                    } while (uVar77 < (ulong)(((long)uStack_1e8 - (long)auStack_1f0 >> 3) *
                                             -0x5555555555555555));
                    FUN_10a0cab34(auStack_1f0);
                    if (pmVar35 == (mach_header *)0x0) goto LAB_10a0bd4fc;
                  }
                  pdVar99 = &pmVar35->cpusubtype;
                  do {
                    lVar65 = *(long *)pdVar99;
                    cVar18 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                    if (bVar23) {
                      *(long *)pdVar99 = lVar65 + -1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
LAB_10a0bd4e0:
                  if (lVar65 == 0) {
                    (*(code *)(*(long ******)pmVar35)[2])(pmVar35);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar35);
                  }
                }
LAB_10a0bd4fc:
                FUN_10a0cc734(auStack_280);
                pmVar79 = (mach_header *)&pmVar79[8].ncmds;
              } while (pmVar79 != pmVar81);
              lVar60._0_4_ = pmVar36[6].ncmds;
              lVar60._4_4_ = pmVar36[6].sizeofcmds;
              if (lVar60 != 0) {
                if (*(char *)((long)&param_3->magic + 1) == '\x01') {
                  do {
                    cVar18 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(pdVar82,0x10);
                    if (bVar23) {
                      *(long *)pdVar82 = *(long *)pdVar82 + 1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
                  plVar78 = *(long **)&pmVar36[6].cpusubtype;
                  pmStack_2b0 = (mach_header *)pdVar90;
                  pmStack_2a8 = pmVar36;
                  if (plVar78 != (long *)0x0) {
                    do {
                      pmVar79 = (mach_header *)plVar78[6];
                      if ((pmVar79 == (mach_header *)0x0) ||
                         (___dynamic_cast(pmVar79,&PTR_DAT_110c41a40,&PTR_DAT_110c3f548,0x38),
                         pmVar79 == (mach_header *)0x0)) {
                        pmStack_208 = (mach_header *)0x0;
                        auStack_210 = (undefined1  [8])0x0;
                      }
                      else {
                        pmVar81 = (mach_header *)plVar78[7];
                        if (pmVar81 != (mach_header *)0x0) {
                          pdVar99 = &pmVar81->cpusubtype;
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = *(long *)pdVar99 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                        }
                        uStack_1e0 = (mach_header *)0x0;
                        uStack_1e8 = (undefined **)0x0;
                        auStack_1f0 = (undefined1  [8])0x0;
                        auStack_210 = (undefined1  [8])pmVar79;
                        pmStack_208 = pmVar81;
                        FUN_10a0cc7a4(auStack_1f0,*(long *)&pmVar79->cpusubtype,
                                      *(long *)&pmVar79->ncmds,
                                      *(long *)&pmVar79->ncmds - *(long *)&pmVar79->cpusubtype >> 3)
                        ;
                        FUN_10a85c03c(&pmStack_2c0,auStack_1f0);
                        pmVar79->ncmds = pmVar79->cpusubtype;
                        pmVar79->sizeofcmds = pmVar79->filetype;
                        *(long ******)(pmVar79 + 1) = (long *****)0x0;
                        pmVar79[1].cpusubtype = 0x7f7fffff;
                        pmVar79[1].sizeofcmds = 0;
                        FUN_10a0ca9fc(pmVar79,auStack_1f0);
                        if (auStack_1f0 != (undefined1  [8])0x0) {
                          uStack_1e8 = (undefined **)auStack_1f0;
                          __ZdlPv();
                        }
                        if (pmVar81 != (mach_header *)0x0) {
                          pdVar99 = &pmVar81->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar99;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmVar81)[2])(pmVar81);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                          }
                        }
                      }
                      pmVar79 = (mach_header *)plVar78[6];
                      if ((pmVar79 == (mach_header *)0x0) ||
                         (___dynamic_cast(pmVar79,&PTR_DAT_110c41a40,&PTR_DAT_110c3f320,0x40),
                         pmVar79 == (mach_header *)0x0)) {
                        pmStack_278 = (mach_header *)0x0;
                        auStack_280 = (undefined1  [8])0x0;
                      }
                      else {
                        pmVar81 = (mach_header *)plVar78[7];
                        if (pmVar81 != (mach_header *)0x0) {
                          pdVar99 = &pmVar81->cpusubtype;
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = *(long *)pdVar99 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                        }
                        uStack_1e0 = (mach_header *)0x0;
                        uStack_1e8 = (undefined **)0x0;
                        auStack_1f0 = (undefined1  [8])0x0;
                        auStack_280 = (undefined1  [8])pmVar79;
                        pmStack_278 = pmVar81;
                        FUN_10a0cc81c(auStack_1f0,*(long *)&pmVar79->cpusubtype,
                                      *(long *)&pmVar79->ncmds,
                                      *(long *)&pmVar79->ncmds - *(long *)&pmVar79->cpusubtype >> 4)
                        ;
                        FUN_10a85b5d8(&pmStack_2c0,auStack_1f0);
                        pmVar79->ncmds = pmVar79->cpusubtype;
                        pmVar79->sizeofcmds = pmVar79->filetype;
                        *(long ******)(pmVar79 + 1) = (long *****)0x0;
                        pmVar79[1].cpusubtype = 0x7f7fffff;
                        pmVar79[1].reserved = 0;
                        FUN_10a0cb98c(pmVar79,auStack_1f0);
                        if (auStack_1f0 != (undefined1  [8])0x0) {
                          uStack_1e8 = (undefined **)auStack_1f0;
                          __ZdlPv();
                        }
                        if (pmVar81 != (mach_header *)0x0) {
                          pdVar99 = &pmVar81->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar99;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmVar81)[2])(pmVar81);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                          }
                        }
                      }
                      pmVar79 = (mach_header *)plVar78[6];
                      if ((pmVar79 == (mach_header *)0x0) ||
                         (___dynamic_cast(pmVar79,&PTR_DAT_110c41a40,&PTR_DAT_110c3f3a8,0x48),
                         pmVar79 == (mach_header *)0x0)) {
                        pmStack_4e8 = (mach_header *)0x0;
                        auStack_4e0._0_8_ = (mach_header *)0x0;
                      }
                      else {
                        pmVar81 = (mach_header *)plVar78[7];
                        if (pmVar81 != (mach_header *)0x0) {
                          pdVar99 = &pmVar81->cpusubtype;
                          do {
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = *(long *)pdVar99 + 1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                        }
                        uStack_1e0 = (mach_header *)0x0;
                        uStack_1e8 = (undefined **)0x0;
                        auStack_1f0 = (undefined1  [8])0x0;
                        pmStack_4e8 = pmVar79;
                        auStack_4e0._0_8_ = pmVar81;
                        FUN_10a0cc894(auStack_1f0,*(long *)&pmVar79->cpusubtype,
                                      *(long *)&pmVar79->ncmds,
                                      (*(long *)&pmVar79->ncmds - *(long *)&pmVar79->cpusubtype >> 2
                                      ) * -0x3333333333333333);
                        FUN_10a85ba34(&pmStack_2c0,auStack_1f0);
                        pmVar79->ncmds = pmVar79->cpusubtype;
                        pmVar79->sizeofcmds = pmVar79->filetype;
                        *(long ******)(pmVar79 + 1) = (long *****)0x0;
                        pmVar79[1].cpusubtype = 0x7f7fffff;
                        pmVar79[2].magic = 0;
                        func_0x00010a0cbfcc(pmVar79,auStack_1f0);
                        if (auStack_1f0 != (undefined1  [8])0x0) {
                          uStack_1e8 = (undefined **)auStack_1f0;
                          __ZdlPv();
                        }
                        if (pmVar81 != (mach_header *)0x0) {
                          pdVar99 = &pmVar81->cpusubtype;
                          do {
                            lVar65 = *(long *)pdVar99;
                            cVar18 = '\x01';
                            bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                            if (bVar23) {
                              *(long *)pdVar99 = lVar65 + -1;
                              cVar18 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar18 != '\0');
                          if (lVar65 == 0) {
                            (*(code *)(*(long ******)pmVar81)[2])(pmVar81);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar81);
                          }
                        }
                      }
                      plVar78 = (long *)*plVar78;
                    } while (plVar78 != (long *)0x0);
                    if (pmStack_2a8 == (mach_header *)0x0) goto LAB_10a0bd864;
                  }
                  pmVar79 = pmStack_2a8;
                  pdVar99 = &pmStack_2a8->cpusubtype;
                  do {
                    lVar65 = *(long *)pdVar99;
                    cVar18 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(pdVar99,0x10);
                    if (bVar23) {
                      *(long *)pdVar99 = lVar65 + -1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
                  if (lVar65 == 0) {
                    (*(code *)(*(long ******)pmStack_2a8)[2])(pmStack_2a8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
                  }
                }
LAB_10a0bd864:
                pmVar79 = (mach_header *)auStack_110;
                pmVar81 = (mach_header *)auStack_110;
                if (auStack_110 != (undefined1  [8])0x0) {
                  auVar94 = auStack_110;
                  do {
                    while (pmVar79 = (mach_header *)auVar94,
                          *(int *)((long)auVar59 + 0x20) < (int)pmVar79[1].magic) {
                      auVar94 = (undefined1  [8])*(mach_header **)pmVar79;
                      pmVar81 = pmVar79;
                      if (*(mach_header **)pmVar79 == (mach_header *)0x0) goto LAB_10a0bd8b0;
                    }
                    if (*(int *)((long)auVar59 + 0x20) <= (int)pmVar79[1].magic) goto LAB_10a0bd910;
                    auVar94 = (undefined1  [8])*(mach_header **)&pmVar79->cpusubtype;
                  } while (*(mach_header **)&pmVar79->cpusubtype != (mach_header *)0x0);
                  pmVar81 = (mach_header *)&pmVar79->cpusubtype;
                }
LAB_10a0bd8b0:
                pmVar35 = (mach_header *)0x40;
                __Znwm();
                pmVar35[1].magic = *(dword *)((long)auVar59 + 0x20);
                pmVar35[1].ncmds = 0;
                pmVar35[1].sizeofcmds = 0;
                pmVar35[1].flags = 0;
                pmVar35[1].reserved = 0;
                pmVar35[1].cpusubtype = 0;
                pmVar35[1].filetype = 0;
                *(long ******)pmVar35 = (long *****)0x0;
                pmVar35->cpusubtype = 0;
                pmVar35->filetype = 0;
                *(mach_header **)&pmVar35->ncmds = pmVar79;
                *(mach_header **)pmVar81 = pmVar35;
                pmVar79 = pmVar35;
                if (*(mach_header **)pmStack_118 != (mach_header *)0x0) {
                  pmVar79 = *(mach_header **)pmVar81;
                  pmStack_118 = *(mach_header **)pmStack_118;
                }
                func_0x000107c2b058(auStack_110,pmVar79);
                pmStack_108 = (mach_header *)((long)&pmStack_108->magic + 1);
                pmVar79 = pmVar35;
LAB_10a0bd910:
                cVar18 = *(char *)((long)&pmVar63->sizeofcmds + 3);
                pmStack_208 = (mach_header *)(long)cVar18;
                if ((long)pmStack_208 < 0) {
                  pmStack_208 = *(mach_header **)&pmVar63->cpusubtype;
                  if (pmStack_208 == (mach_header *)0x0) goto LAB_10a0bd958;
                  auStack_210 = (undefined1  [8])*(mach_header **)pmVar63;
                }
                else {
                  auStack_210 = (undefined1  [8])pmVar63;
                  if (cVar18 == '\0') {
LAB_10a0bd958:
                    pmStack_208 = (mach_header *)0x9;
                    auStack_210 = (undefined1  [8])&DAT_10f63897a;
                  }
                }
                uVar77 = *(ulong *)&pmVar79[1].ncmds;
                if (uVar77 < *(ulong *)&pmVar79[1].flags) {
                  FUN_10a0ccf98(uVar77,pdVar90,pmVar36,auStack_210);
                  lVar65 = uVar77 + 0x28;
                  *(long *)&pmVar79[1].ncmds = lVar65;
                }
                else {
                  pdVar99 = &pmVar79[1].cpusubtype;
                  lVar65 = uVar77 - *(long *)pdVar99;
                  uVar77 = (lVar65 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar77) {
                    FUN_10a0cd0cc();
                    goto LAB_10a0c08b4;
                  }
                  lVar57 = (long)(*(ulong *)&pmVar79[1].flags - *(long *)pdVar99) >> 3;
                  uVar71 = lVar57 * -0x6666666666666666;
                  if (uVar71 < uVar77 || uVar71 - uVar77 == 0) {
                    uVar71 = uVar77;
                  }
                  if (0x333333333333332 < (ulong)(lVar57 * -0x3333333333333333)) {
                    uVar71 = 0x666666666666666;
                  }
                  pdStack_1d0 = pdVar99;
                  if (uVar71 == 0) {
                    uVar71 = 0;
                    pdVar49 = (dword *)0x0;
                  }
                  else {
                    pdVar49 = pdVar90;
                    func_0x00010a0cd0e0();
                  }
                  lVar65 = uVar71 + lVar65;
                  lVar57 = uVar71 + (long)pdVar49 * 0x28;
                  auStack_1f0 = (undefined1  [8])uVar71;
                  uStack_1e8 = (undefined **)lVar65;
                  uStack_1e0 = (mach_header *)lVar65;
                  uStack_1d8 = (mach_header *)lVar57;
                  FUN_10a0ccf98(lVar65,pdVar90,pmVar36,auStack_210);
                  uStack_1e0 = (mach_header *)(lVar65 + 0x28);
                  pmVar81 = *(mach_header **)&pmVar79[1].cpusubtype;
                  puVar26 = *(undefined1 **)&pmVar79[1].ncmds;
                  unaff_x22 = (undefined1  [8])(lVar65 + ((long)pmVar81 - (long)puVar26));
                  pmVar35 = pmVar81;
                  pmVar37 = (mach_header *)unaff_x22;
                  lVar65 = (long)uStack_1e0;
                  if ((long)pmVar81 - (long)puVar26 != 0) {
                    do {
                      dVar104 = pmVar35->filetype;
                      dVar106 = pmVar35->magic;
                      dVar107 = pmVar35->cputype;
                      pmVar37->cpusubtype = pmVar35->cpusubtype;
                      pmVar37->filetype = dVar104;
                      pmVar37->magic = dVar106;
                      pmVar37->cputype = dVar107;
                      *(long ******)pmVar35 = (long *****)0x0;
                      pmVar35->cpusubtype = 0;
                      pmVar35->filetype = 0;
                      dVar106 = pmVar35->flags;
                      dVar107 = pmVar35->reserved;
                      dVar108 = pmVar35->ncmds;
                      dVar20 = pmVar35->sizeofcmds;
                      dVar104 = pmVar35[1].cputype;
                      pmVar37[1].magic = pmVar35[1].magic;
                      pmVar37[1].cputype = dVar104;
                      pmVar37->flags = dVar106;
                      pmVar37->reserved = dVar107;
                      pmVar37->ncmds = dVar108;
                      pmVar37->sizeofcmds = dVar20;
                      pmVar35->flags = 0;
                      pmVar35->reserved = 0;
                      *(long ******)(pmVar35 + 1) = (long *****)0x0;
                      pmVar35->ncmds = 0;
                      pmVar35->sizeofcmds = 0;
                      pmVar93 = pmVar35 + 1;
                      pmVar35 = (mach_header *)&pmVar93->cpusubtype;
                      pmVar37 = (mach_header *)&pmVar37[1].cpusubtype;
                    } while (&pmVar93->cpusubtype != (dword *)puVar26);
                    do {
                      func_0x00010a0cd124(pmVar81);
                      pmVar81 = (mach_header *)&pmVar81[1].cpusubtype;
                    } while (pmVar81 != (mach_header *)puVar26);
                    pmVar81 = *(mach_header **)pdVar99;
                    lVar65 = (long)uStack_1e0;
                    lVar57 = (long)uStack_1d8;
                  }
                  *(undefined1 (*) [8])&pmVar79[1].cpusubtype = unaff_x22;
                  pmVar79[1].ncmds = (int)lVar65;
                  pmVar79[1].sizeofcmds = (int)((ulong)lVar65 >> 0x20);
                  uStack_1d8 = *(mach_header **)&pmVar79[1].flags;
                  pmVar79[1].flags = (int)lVar57;
                  pmVar79[1].reserved = (int)((ulong)lVar57 >> 0x20);
                  auStack_1f0 = (undefined1  [8])pmVar81;
                  uStack_1e8 = (undefined **)pmVar81;
                  uStack_1e0 = pmVar81;
                  func_0x00010a0cd154(auStack_1f0);
                }
                pmVar79[1].ncmds = (int)lVar65;
                pmVar79[1].sizeofcmds = (int)((ulong)lVar65 >> 0x20);
              }
            }
            do {
              lVar65 = *(long *)pdVar82;
              cVar18 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar82,0x10);
              if (bVar23) {
                *(long *)pdVar82 = lVar65 + -1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if (lVar65 == 0) {
              (*(code *)(*(long ******)pmVar36)[2])(pmVar36);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar36);
            }
            pmVar79 = *(mach_header **)&((mach_header *)auVar59)->cpusubtype;
            pmVar81 = (mach_header *)auVar59;
            if (*(mach_header **)&((mach_header *)auVar59)->cpusubtype == (mach_header *)0x0) {
              do {
                auVar59 = *(undefined1 (*) [8])&pmVar81->ncmds;
                bVar23 = *(mach_header **)auVar59 != pmVar81;
                pmVar81 = (mach_header *)auVar59;
              } while (bVar23);
            }
            else {
              do {
                auVar59 = (undefined1  [8])pmVar79;
                pmVar79 = *(mach_header **)auVar59;
              } while (*(mach_header **)auVar59 != (mach_header *)0x0);
            }
          }
        }
        ppppplVar91 = (long *****)(long)*(char *)((long)&pmVar63[7].filetype + 3);
        if ((long)ppppplVar91 < 0) {
          ppppplVar91 = *(long ******)(pmVar63 + 7);
        }
        if (ppppplVar91 == (long *****)0x0) {
          puVar26 = auStack_420;
          func_0x00010945a80c(puVar26,&DAT_10f636f1e);
          func_0x000109382360(auStack_1f0,0,0,0,1);
          FUN_10a0a4bec(puVar26,auStack_1f0);
          func_0x000109380ffc(&uStack_1e8,(ulong)auStack_1f0 & 0xff);
        }
        else {
          puVar26 = auStack_420;
          func_0x00010945a80c(puVar26,&DAT_10f636f1e);
          plStack_158 = (long *)0x0;
          func_0x0001094749d8(auStack_1f0,&pmVar63[6].flags,auStack_170,1,0);
          FUN_10a0a4bec(puVar26,auStack_1f0);
          func_0x000109380ffc(&uStack_1e8,(ulong)auStack_1f0 & 0xff);
          if (plStack_158 == (long *)auStack_170) {
            lVar65 = 0x20;
          }
          else {
            if (plStack_158 == (long *)0x0) goto LAB_10a0bdc1c;
            lVar65 = 0x28;
          }
          (**(code **)(*plStack_158 + lVar65))();
        }
LAB_10a0bdc1c:
        func_0x00010a0dc510(pmStack_260);
        pmVar79 = pmStack_228;
        if (pmStack_228 != (mach_header *)0x0) {
          pdVar90 = &pmStack_228->cpusubtype;
          do {
            lVar65 = *(long *)pdVar90;
            cVar18 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = lVar65 + -1;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          if (lVar65 == 0) {
            (*(code *)(*(long ******)pmStack_228)[2])(pmStack_228);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar79);
          }
        }
        pmVar63 = (mach_header *)&pmVar63[8].cpusubtype;
      } while (pmVar63 != pmVar42);
    }
    if (pmStack_448 != (mach_header *)0x0) {
      func_0x00010a0cd280(pmStack_450);
      pmStack_450 = (mach_header *)0x0;
      if (pmStack_458 != (mach_header *)0x0) {
        pmVar63 = (mach_header *)0x0;
        do {
          *(undefined8 *)(&pmStack_460->magic + (long)pmVar63 * 2) = 0;
          pmVar63 = (mach_header *)((long)&pmVar63->magic + 1);
        } while (pmStack_458 != pmVar63);
      }
      pmStack_448 = (mach_header *)0x0;
    }
    auVar59 = auStack_140;
    pmVar63 = pmStack_460;
    auStack_140 = (undefined1  [8])0x0;
    pmStack_460 = (mach_header *)auVar59;
    if (pmVar63 != (mach_header *)0x0) {
      __ZdlPv();
    }
    pmStack_458 = (mach_header *)uStack_138;
    uStack_138 = (undefined **)0x0;
    pmStack_450 = (mach_header *)uStack_130;
    pmStack_448 = uStack_128;
    uStack_440 = pmStack_120._0_4_;
    if (uStack_128 != (mach_header *)0x0) {
      pmVar63 = *(mach_header **)&((mach_header *)uStack_130)->cpusubtype;
      puVar26 = (undefined1 *)((long)&pmStack_458[-1].reserved + 3);
      if (((ulong)pmStack_458 & (ulong)puVar26) == 0) {
        pmVar63 = (mach_header *)((ulong)pmVar63 & (ulong)puVar26);
      }
      else if (pmStack_458 <= pmVar63) {
        uVar77 = 0;
        if (pmStack_458 != (mach_header *)0x0) {
          uVar77 = (ulong)pmVar63 / (ulong)pmStack_458;
        }
        pmVar63 = (mach_header *)((long)pmVar63 - uVar77 * (long)pmStack_458);
      }
      *(mach_header ***)(&pmStack_460->magic + (long)pmVar63 * 2) = &pmStack_450;
      uStack_130 = (code *)0x0;
      uStack_128 = (mach_header *)0x0;
    }
    func_0x00010a0cd1a0(pmStack_430);
    pmStack_438 = pmStack_118;
    pmStack_430 = (mach_header *)auStack_110;
    pmStack_428 = pmStack_108;
    pmVar63 = (mach_header *)&pmStack_430;
    if (pmStack_108 != (mach_header *)0x0) {
      *(mach_header **)((long)auStack_110 + 0x10) = (mach_header *)&pmStack_430;
      auStack_110 = (undefined1  [8])0x0;
      pmStack_108 = (mach_header *)0x0;
      pmVar63 = pmStack_438;
      pmStack_118 = (mach_header *)auStack_110;
    }
    pmStack_438 = pmVar63;
    func_0x00010a0cd1a0(auStack_110);
    func_0x00010a0cd280(uStack_130);
    auVar59 = auStack_140;
    auStack_140 = (undefined1  [8])0x0;
    if (auVar59 != (undefined1  [8])0x0) {
      __ZdlPv();
    }
LAB_10a0bdde0:
    if (param_6 != (float *)0x0) {
      *param_6 = 0.3846154;
    }
    plStack_178 = (long *)0x0;
    FUN_109fc89b4(&pmStack_230,&param_3[0x1b].cpusubtype,alStack_190,1,0);
    if (plStack_178 == alStack_190) {
      lVar65 = 0x20;
LAB_10a0bde2c:
      (**(code **)(*plStack_178 + lVar65))();
    }
    else if (plStack_178 != (long *)0x0) {
      lVar65 = 0x28;
      goto LAB_10a0bde2c;
    }
    auStack_170 = (undefined1  [8])&pmStack_230;
    func_0x0001094a830c(auStack_140,auStack_170);
    func_0x0001094a838c(auStack_1f0,auStack_170);
    while( true ) {
      puVar26 = auStack_140;
      func_0x000109379420(puVar26,auStack_1f0);
      if ((int)puVar26 != 0) break;
      puVar26 = auStack_140;
      func_0x00010937b950(puVar26);
      func_0x000109381b20(auStack_510,puVar26);
      puVar26 = auStack_140;
      func_0x0001094a8400(puVar26);
      puVar40 = auStack_420;
      func_0x0001095b7584(puVar40,puVar26);
      uVar17 = *puVar40;
      *puVar40 = auStack_510[0];
      uVar47 = *(undefined8 *)(puVar40 + 8);
      auStack_510[0] = uVar17;
      *(undefined8 *)(puVar40 + 8) = uStack_508;
      uStack_508 = uVar47;
      func_0x000109380ffc(&uStack_508);
      func_0x000109386b30(auStack_140);
      pmStack_120 = (mach_header *)((long)&pmStack_120->magic + 1);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(uStack_1a8);
    }
    if (cStack_1a9 < '\0') {
      __ZdlPv(plStack_1c0);
    }
    if (lStack_e8 < 0) {
      __ZdlPv(_dStack_f8);
    }
    if ((long)pdStack_100 < 0) {
      __ZdlPv(auStack_110);
    }
    FUN_10a0c32e4(auStack_140,auStack_420,0xffffffff,0x20,0,0);
    if ((long)pmStack_360 < 0) {
      __ZdlPv(pmStack_370);
    }
    pmStack_368 = (mach_header *)uStack_138;
    pmStack_370 = (mach_header *)auStack_140;
    pmStack_360 = (mach_header *)uStack_130;
    if (param_6 != (float *)0x0) {
      *param_6 = 0.46153846;
    }
    lVar57 = *(long *)(param_2 + 0x18);
    pcVar50 = "";
    func_0x000107c2b054(auStack_140,"");
    lVar65 = lVar57;
    FUN_10a3dd220(lVar57);
    func_0x00010a0fda30();
    FUN_10a3dd268(lVar57,lVar65,pcVar50,auStack_140);
    if ((long)uStack_130 < 0) {
      __ZdlPv(auStack_140);
    }
    __ZNSt3__19to_stringEi(auStack_1f0,iRam00000001137e9538);
    puVar58 = (undefined8 *)auStack_1f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar58,0,&UNK_10f637580,0xb);
    uStack_138 = (undefined **)puVar58[1];
    auStack_140 = (undefined1  [8])*puVar58;
    uStack_130 = (code *)puVar58[2];
    puVar58[1] = 0;
    puVar58[2] = 0;
    *puVar58 = 0;
    pmStack_168 = (mach_header *)uStack_138;
    auStack_170 = auStack_140;
    if (-1 < (long)uStack_130) {
      pmStack_168 = (mach_header *)((ulong)uStack_130 >> 0x38);
      auStack_170 = (undefined1  [8])auStack_140;
    }
    FUN_10a0c34a4(lVar57,auStack_170);
    if ((long)uStack_130 < 0) {
      __ZdlPv(auStack_140);
    }
    if ((long)uStack_1e0 < 0) {
      __ZdlPv(auStack_1f0);
    }
    iRam00000001137e9538 = iRam00000001137e9538 + 1;
    uVar80 = *(undefined8 *)(param_2 + 0x18);
    pcVar50 = "";
    func_0x000107c2b054(auStack_140,"");
    uVar47 = uVar80;
    FUN_10a3dd220(uVar80);
    func_0x00010a0fda30();
    FUN_10a3dd268(uVar80,uVar47,pcVar50,auStack_140);
    if ((long)uStack_130 < 0) {
      __ZdlPv(auStack_140);
    }
    FUN_10a0c3500(uVar80,lVar57);
    auStack_140 = (undefined1  [8])&UNK_10f63758c;
    uStack_138 = (undefined **)0x6;
    FUN_10a0c34a4(uVar80,auStack_140);
    if (param_6 != (float *)0x0) {
      *param_6 = 0.53846157;
    }
    puVar58 = *(undefined8 **)&param_3[10].ncmds;
    puVar68 = *(undefined8 **)&param_3[10].flags;
    if (puVar58 != puVar68) {
      iVar89 = 0;
      lVar65 = (long)puVar68 - (long)puVar58;
      fVar105 = 0.0;
      uVar47 = NEON_fmov(0x3f800000,4);
      do {
        if (*(char *)((long)puVar58 + 0x17) < '\0') {
          if (puVar58[1] == 0) goto LAB_10a0be19c;
          func_0x000107c3192c(auStack_280,*puVar58);
        }
        else if (*(char *)((long)puVar58 + 0x17) == '\0') {
LAB_10a0be19c:
          __ZNSt3__19to_stringEi(auStack_140,iVar89);
          puVar41 = (undefined8 *)auStack_140;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar41,0,&UNK_10f637593,5);
          pmStack_278 = (mach_header *)puVar41[1];
          auStack_280 = (undefined1  [8])*puVar41;
          uStack_270 = puVar41[2];
          puVar41[1] = 0;
          puVar41[2] = 0;
          *puVar41 = 0;
          if ((long)uStack_130 < 0) {
            __ZdlPv(auStack_140);
          }
          iVar89 = iVar89 + 1;
        }
        else {
          pmStack_278 = (mach_header *)puVar58[1];
          auStack_280 = (undefined1  [8])*puVar58;
          uStack_270 = puVar58[2];
        }
        lVar64 = *(long *)(param_2 + 0x18);
        pcVar50 = "";
        func_0x000107c2b054(auStack_140,"");
        lVar70 = lVar64;
        FUN_10a3dd220(lVar64);
        func_0x00010a0fda30();
        FUN_10a3dd268(lVar64,lVar70,pcVar50,auStack_140);
        if ((long)uStack_130 < 0) {
          __ZdlPv(auStack_140);
        }
        FUN_10a0c3500(lVar64,uVar80);
        uStack_138 = (undefined **)pmStack_278;
        auStack_140 = auStack_280;
        if (-1 < (long)uStack_270) {
          uStack_138 = (undefined **)(uStack_270 >> 0x38);
          auStack_140 = (undefined1  [8])auStack_280;
        }
        FUN_10a0c34a4(lVar64,auStack_140);
        auStack_4e0._0_8_ = (mach_header *)0x0;
        auStack_4e0._8_8_ = 0;
        puVar11 = (undefined4 *)puVar58[4];
        pmStack_4e8 = (mach_header *)auStack_4e0;
        for (puVar83 = (undefined4 *)puVar58[3]; puVar83 != puVar11; puVar83 = puVar83 + 1) {
          FUN_10a0c35a0(lVar64,*puVar83,apmStack_4c0,param_3,&lStack_408,&pmStack_4e8);
        }
        if ((param_3->reserved & 0x100) == 0) {
          if (*(int *)(*(long *)(*(long *)&param_3[1].cpusubtype + 0xa20) + 0x18) < 0x14a ||
              pmStack_448 != (mach_header *)0x0) {
            puVar26 = auStack_1f0;
            pcVar50 = "";
            func_0x000107c2b054(puVar26,"");
            uVar84 = *(undefined8 *)(lVar64 + 0x120);
            func_0x00010a0fda30();
            FUN_10a0d7500(auStack_210,uVar84,puVar26,pcVar50);
            auVar59 = auStack_1f0;
            pmVar63 = (mach_header *)uStack_1e8;
            if (-1 < (long)uStack_1e0) {
              auVar59 = (undefined1  [8])auStack_1f0;
              pmVar63 = (mach_header *)((ulong)uStack_1e0 >> 0x38);
            }
            func_0x000107c2c4d8(&((mach_header *)((long)auStack_210 + 0x140))->ncmds,auVar59,pmVar63
                               );
            pmStack_168 = pmStack_208;
            auStack_170 = auStack_210;
            if (pmStack_208 != (mach_header *)0x0) {
              pdVar90 = &pmStack_208->cpusubtype;
              do {
                cVar18 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar23) {
                  *(long *)pdVar90 = *(long *)pdVar90 + 1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
            }
            pmStack_118 = (mach_header *)0x0;
            pmStack_120 = (mach_header *)0x0;
            pmStack_108 = (mach_header *)0x0;
            auStack_110 = (undefined1  [8])0x0;
            uStack_128 = (mach_header *)0x0;
            uStack_130 = (code *)0x0;
            auStack_140 = (undefined1  [8])FUN_10a0d4f18;
            uStack_138 = &PTR_DAT_110950c70;
            FUN_10a3e4814(lVar64,auStack_170,auStack_140);
            (*(code *)*uStack_138)(&uStack_138);
            pmVar63 = pmStack_168;
            if (pmStack_168 != (mach_header *)0x0) {
              pdVar90 = &pmStack_168->cpusubtype;
              do {
                lVar70 = *(long *)pdVar90;
                cVar18 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar23) {
                  *(long *)pdVar90 = lVar70 + -1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              if (lVar70 == 0) {
                (*(code *)(*(long ******)pmStack_168)[2])(pmStack_168);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
              }
            }
            if ((long)uStack_1e0 < 0) {
              __ZdlPv(auStack_1f0);
            }
            pmVar63 = pmStack_208;
            if (pmStack_208 != (mach_header *)0x0) {
              pdVar90 = &pmStack_208->cpusubtype;
              do {
                lVar70 = *(long *)pdVar90;
                cVar18 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar23) {
                  *(long *)pdVar90 = lVar70 + -1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              if (lVar70 == 0) {
                (*(code *)(*(long ******)pmStack_208)[2])(pmStack_208);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
              }
            }
            for (lVar70 = *(long *)(lVar64 + 0x158); lVar70 != lVar64 + 0x150;
                lVar70 = *(long *)(lVar70 + 8)) {
              if (*(long *)(lVar70 + 0x10) != 0) {
                plVar78 = (long *)(*(long *)(lVar70 + 0x10) + 0xb0);
                (**(code **)(*plVar78 + 0x18))(plVar78,0x6ea58d5d8483316c);
                if (plVar78 != (long *)0x0) goto LAB_10a0be640;
              }
            }
            plVar78 = (long *)0x0;
LAB_10a0be640:
            fVar101 = (float)*(double *)&param_3->cpusubtype;
            pmVar63 = pmStack_450;
            if ((char)param_3->ncmds == '\0') {
              fVar101 = 30.0;
            }
            for (; pmVar63 != (mach_header *)0x0; pmVar63 = *(mach_header **)pmVar63) {
              pmVar42 = (mach_header *)0x90;
              __Znwm();
              pmVar42->cpusubtype = 0;
              pmVar42->filetype = 0;
              pmVar42->ncmds = 0;
              pmVar42->sizeofcmds = 0;
              *(undefined ***)pmVar42 = &PTR_FUN_110ba1ef8;
              *(long ******)(pmVar42 + 1) = (long *****)0x0;
              pmVar42[1].cpusubtype = 0;
              pmVar42[1].filetype = 0;
              *(undefined1 *)&pmVar42[1].flags = 0;
              auStack_140 = (undefined1  [8])&pmVar42->flags;
              *(undefined ***)auStack_140 = &PTR_FUN_110c6a310;
              *(undefined ***)&pmVar42[1].ncmds = &PTR_FUN_110c6a378;
              uVar84 = 0;
              pmVar42[2].flags = 0;
              pmVar42[2].reserved = 0;
              pmVar42[2].ncmds = 0;
              pmVar42[2].sizeofcmds = 0;
              *(long ******)(pmVar42 + 3) = (long *****)0x0;
              pmVar42[2].cpusubtype = 0;
              pmVar42[2].filetype = 0;
              *(long ******)(pmVar42 + 2) = (long *****)0x0;
              pmVar42[3].cpusubtype = (int)uVar47;
              pmVar42[3].filetype = (int)((ulong)uVar47 >> 0x20);
              *(undefined1 *)&pmVar42[3].ncmds = 1;
              pmVar42[4].cputype = 0;
              pmVar42[3].sizeofcmds = 0;
              pmVar42[3].flags = 0;
              *(undefined8 *)((long)&pmVar42[3].flags + 2) = 0;
              pmVar42[4].cpusubtype = 1;
              pmVar42[4].filetype = 0;
              uStack_138 = (undefined **)pmVar42;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (pmVar42 + 2,&pmVar63->ncmds);
              auVar59 = auStack_140;
              puVar61 = *(uint **)&pmVar63[1].cpusubtype;
              plVar100 = *(long **)(puVar61 + 0x3e);
              if (plVar100 == (long *)0x0) {
                fVar109 = 0.0;
              }
              else {
                fVar109 = 0.0;
                do {
                  FUN_10aa71198(plVar100[6]);
                  fVar21 = (float)uVar84;
                  if ((float)uVar84 <= fVar109) {
                    fVar21 = fVar109;
                  }
                  fVar109 = fVar21;
                  plVar100 = (long *)*plVar100;
                } while (plVar100 != (long *)0x0);
                puVar61 = *(uint **)&pmVar63[1].cpusubtype;
              }
              ((mach_header *)((long)auVar59 + 0x60))->magic = (dword)fVar109;
              plStack_518 = *(long **)&pmVar63[1].ncmds;
              if (plStack_518 != (long *)0x0) {
                plVar100 = plStack_518 + 1;
                do {
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(plVar100,0x10);
                  if (bVar23) {
                    *plVar100 = *plVar100 + 1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
              }
              puStack_520 = puVar61;
              FUN_10ac9855c((mach_header *)((long)auVar59 + 0x40),&puStack_520);
              plVar100 = plStack_518;
              if (plStack_518 != (long *)0x0) {
                plVar1 = plStack_518 + 1;
                do {
                  lVar70 = *plVar1;
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar23) {
                    *plVar1 = lVar70 + -1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
                if (lVar70 == 0) {
                  (**(code **)(*plStack_518 + 0x10))(plStack_518);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar100);
                }
              }
              *(float *)(*(long *)&pmVar63[1].cpusubtype + 0xe4) = fVar101;
              pmStack_528 = (mach_header *)uStack_138;
              pmStack_530 = (mach_header *)auStack_140;
              if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
                do {
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                  if (bVar23) {
                    *(long *)pdVar90 = *(long *)pdVar90 + 1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
              }
              FUN_10a419588(plVar78,&pmStack_530);
              pmVar42 = pmStack_528;
              if (pmStack_528 != (mach_header *)0x0) {
                pdVar90 = &pmStack_528->cpusubtype;
                do {
                  lVar70 = *(long *)pdVar90;
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                  if (bVar23) {
                    *(long *)pdVar90 = lVar70 + -1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
                if (lVar70 == 0) {
                  (*(code *)(*(long ******)pmStack_528)[2])(pmStack_528);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
                }
              }
              ppppppplVar46 = (long *******)0x38;
              __Znwm();
              *ppppppplVar46 = (long ******)0x0;
              ppppppplVar46[1] = (long ******)0x0;
              if (*(char *)((long)&pmVar63[1].cputype + 3) < '\0') {
                uVar5._0_4_ = pmVar63->ncmds;
                uVar5._4_4_ = pmVar63->sizeofcmds;
                uVar12._0_4_ = pmVar63->flags;
                uVar12._4_4_ = pmVar63->reserved;
                func_0x000107c3192c(ppppppplVar46 + 2,uVar5,uVar12);
              }
              else {
                pppppplVar75 = *(long *******)&pmVar63->flags;
                pppppplVar102 = *(long *******)&pmVar63->ncmds;
                ppppppplVar46[4] = *(long *******)(pmVar63 + 1);
                ppppppplVar46[3] = pppppplVar75;
                ppppppplVar46[2] = pppppplVar102;
              }
              lVar70 = *(long *)&pmVar63[1].ncmds;
              pppppplVar102 = *(long *******)&pmVar63[1].cpusubtype;
              ppppppplVar46[6] = *(long *******)&pmVar63[1].ncmds;
              ppppppplVar46[5] = pppppplVar102;
              if (lVar70 != 0) {
                plVar100 = (long *)(lVar70 + 8);
                do {
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(plVar100,0x10);
                  if (bVar23) {
                    *plVar100 = *plVar100 + 1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
              }
              *ppppppplVar46 = (long ******)ppppppplStack_3a0;
              ppppppplVar46[1] = (long ******)&ppppppplStack_3a0;
              ppppppplStack_3a0[1] = (long ******)ppppppplVar46;
              pmVar42 = (mach_header *)uStack_138;
              lStack_390 = lStack_390 + 1;
              ppppppplStack_3a0 = ppppppplVar46;
              if ((mach_header *)uStack_138 != (mach_header *)0x0) {
                pdVar90 = &((mach_header *)uStack_138)->cpusubtype;
                do {
                  lVar70 = *(long *)pdVar90;
                  cVar18 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                  if (bVar23) {
                    *(long *)pdVar90 = lVar70 + -1;
                    cVar18 = ExclusiveMonitorsStatus();
                  }
                } while (cVar18 != '\0');
                if (lVar70 == 0) {
                  (*(code *)*(long *****)((long)*uStack_138 + 0x10))(uStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
                }
              }
            }
          }
        }
        else {
          puVar26 = auStack_1f0;
          pcVar50 = "";
          func_0x000107c2b054(puVar26,"");
          uVar84 = *(undefined8 *)(lVar64 + 0x120);
          func_0x00010a0fda30();
          FUN_10a0d7244(auStack_210,uVar84,puVar26,pcVar50);
          auVar59 = auStack_1f0;
          pmVar63 = (mach_header *)uStack_1e8;
          if (-1 < (long)uStack_1e0) {
            auVar59 = (undefined1  [8])auStack_1f0;
            pmVar63 = (mach_header *)((ulong)uStack_1e0 >> 0x38);
          }
          func_0x000107c2c4d8(&((mach_header *)((long)auStack_210 + 0x140))->ncmds,auVar59,pmVar63);
          pmStack_168 = pmStack_208;
          auStack_170 = auStack_210;
          if (pmStack_208 != (mach_header *)0x0) {
            pdVar90 = &pmStack_208->cpusubtype;
            do {
              cVar18 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
              if (bVar23) {
                *(long *)pdVar90 = *(long *)pdVar90 + 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
          }
          pmStack_118 = (mach_header *)0x0;
          pmStack_120 = (mach_header *)0x0;
          pmStack_108 = (mach_header *)0x0;
          auStack_110 = (undefined1  [8])0x0;
          uStack_128 = (mach_header *)0x0;
          uStack_130 = (code *)0x0;
          auStack_140 = (undefined1  [8])FUN_10a0d4f18;
          uStack_138 = &PTR_DAT_110950c70;
          FUN_10a3e4814(lVar64,auStack_170,auStack_140);
          (*(code *)*uStack_138)(&uStack_138);
          pmVar63 = pmStack_168;
          if (pmStack_168 != (mach_header *)0x0) {
            pdVar90 = &pmStack_168->cpusubtype;
            do {
              lVar70 = *(long *)pdVar90;
              cVar18 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
              if (bVar23) {
                *(long *)pdVar90 = lVar70 + -1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if (lVar70 == 0) {
              (*(code *)(*(long ******)pmStack_168)[2])(pmStack_168);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
            }
          }
          if ((long)uStack_1e0 < 0) {
            __ZdlPv(auStack_1f0);
          }
          FUN_10a40f184(auStack_210);
          auVar59 = auStack_210;
          *(undefined1 *)&((mach_header *)((long)auStack_210 + 0x1e0))->ncmds = 1;
          FUN_10a40f184(auStack_210);
          if (*(long ******)&((mach_header *)((long)auVar59 + 0x260))->flags ==
              *(long ******)((long)auVar59 + 0x280)) {
            FUN_10a3c762c();
          }
          else {
            ((mach_header *)((long)auStack_210 + 0x1e0))->sizeofcmds = 1;
            FUN_10a410c48(auStack_140);
            pmVar63 = (mach_header *)uStack_138;
            for (auVar59 = auStack_140; auVar59 != (undefined1  [8])pmVar63;
                auVar59 = (undefined1  [8])&((mach_header *)auVar59)->flags) {
              FUN_10a411000(0x3f800000,auStack_210,auVar59);
            }
            auStack_1f0 = (undefined1  [8])auStack_140;
            FUN_10a0426d8(auStack_1f0);
          }
          pmVar63 = pmStack_208;
          if (pmStack_208 != (mach_header *)0x0) {
            pdVar90 = &pmStack_208->cpusubtype;
            do {
              lVar70 = *(long *)pdVar90;
              cVar18 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
              if (bVar23) {
                *(long *)pdVar90 = lVar70 + -1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            if (lVar70 == 0) {
              (*(code *)(*(long ******)pmStack_208)[2])(pmStack_208);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
            }
          }
        }
        plStack_158 = (long *)0x0;
        lStack_160 = 0;
        pmStack_168 = (mach_header *)0x0;
        auStack_170 = (undefined1  [8])0x0;
        dStack_150 = 0x3f800000;
        if (pmStack_4e8 != (mach_header *)auStack_4e0) {
          bVar23 = false;
          pmVar63 = pmStack_4e8;
          do {
            dVar104 = pmVar63[1].magic;
            uVar77 = (*(long *)&param_3[6].cpusubtype - (long)*(long ******)(param_3 + 6) >> 3) *
                     0x51b3bea3677d46cf;
            if (uVar77 < (ulong)(long)(int)dVar104 || uVar77 - (long)(int)dVar104 == 0)
            goto LAB_10a0c08b4;
            iVar25 = *(int *)(*(long ******)(param_3 + 6) + (long)(int)dVar104 * 0x2f + 4);
            uVar43._0_4_ = pmVar63[1].cpusubtype;
            uVar43._4_4_ = pmVar63[1].filetype;
            func_0x00010a0d77bc(auStack_1f0,uVar43);
            FUN_10a0d09b4(auStack_140,*(long *)&pmVar63[1].cpusubtype + 0x168);
            puVar26 = auStack_170;
            auStack_210 = (undefined1  [8])auStack_140;
            FUN_10a0d7904(puVar26,auStack_140,&UNK_10dd5b8f9,auStack_210,auStack_250);
            auVar59 = auStack_1f0;
            if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
              pdVar90 = &((mach_header *)uStack_1e8)->ncmds;
              do {
                cVar18 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar24) {
                  *(long *)pdVar90 = *(long *)pdVar90 + 1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
            }
            lVar70 = *(long *)(puVar26 + 0x38);
            *(undefined ***)(puVar26 + 0x38) = uStack_1e8;
            *(undefined1 (*) [8])(puVar26 + 0x30) = auVar59;
            if (lVar70 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(lVar70);
            }
            if ((long)uStack_130 < 0) {
              __ZdlPv(auStack_140);
            }
            pmVar42 = (mach_header *)uStack_1e8;
            if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
              pdVar90 = &((mach_header *)uStack_1e8)->cpusubtype;
              do {
                lVar70 = *(long *)pdVar90;
                cVar18 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar24) {
                  *(long *)pdVar90 = lVar70 + -1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              if (lVar70 == 0) {
                (*(code *)*(long *****)((long)*uStack_1e8 + 0x10))(uStack_1e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
              }
            }
            pmVar42 = *(mach_header **)&pmVar63->cpusubtype;
            pmVar79 = pmVar63;
            if (*(mach_header **)&pmVar63->cpusubtype == (mach_header *)0x0) {
              do {
                pmVar63 = *(mach_header **)&pmVar79->ncmds;
                bVar24 = *(mach_header **)pmVar63 != pmVar79;
                pmVar79 = pmVar63;
              } while (bVar24);
            }
            else {
              do {
                pmVar63 = pmVar42;
                pmVar42 = *(mach_header **)pmVar63;
              } while (*(mach_header **)pmVar63 != (mach_header *)0x0);
            }
            bVar23 = (bool)(iVar25 != -1 | bVar23);
          } while (pmVar63 != (mach_header *)auStack_4e0);
          if (bVar23) {
            puVar26 = auStack_1f0;
            pcVar50 = "";
            func_0x000107c2b054(puVar26,"");
            uVar84 = *(undefined8 *)(lVar64 + 0x120);
            func_0x00010a0fda30();
            FUN_10a0d7dd4(&pmStack_220,uVar84,puVar26,pcVar50);
            auVar59 = auStack_1f0;
            pmVar63 = (mach_header *)uStack_1e8;
            if (-1 < (long)uStack_1e0) {
              auVar59 = (undefined1  [8])auStack_1f0;
              pmVar63 = (mach_header *)((ulong)uStack_1e0 >> 0x38);
            }
            func_0x000107c2c4d8(&pmStack_220[10].ncmds,auVar59,pmVar63);
            pmStack_208 = pmStack_218;
            auStack_210 = (undefined1  [8])pmStack_220;
            if (pmStack_218 != (mach_header *)0x0) {
              pdVar90 = &pmStack_218->cpusubtype;
              do {
                cVar18 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar23) {
                  *(long *)pdVar90 = *(long *)pdVar90 + 1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
            }
            pmStack_118 = (mach_header *)0x0;
            pmStack_120 = (mach_header *)0x0;
            pmStack_108 = (mach_header *)0x0;
            auStack_110 = (undefined1  [8])0x0;
            uStack_128 = (mach_header *)0x0;
            uStack_130 = (code *)0x0;
            auStack_140 = (undefined1  [8])FUN_10a0d4f18;
            uStack_138 = &PTR_DAT_110950c70;
            FUN_10a3e4814(lVar64,auStack_210,auStack_140);
            (*(code *)*uStack_138)(&uStack_138);
            pmVar63 = pmStack_208;
            if (pmStack_208 != (mach_header *)0x0) {
              pdVar90 = &pmStack_208->cpusubtype;
              do {
                lVar70 = *(long *)pdVar90;
                cVar18 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar23) {
                  *(long *)pdVar90 = lVar70 + -1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              if (lVar70 == 0) {
                (*(code *)(*(long ******)pmStack_208)[2])(pmStack_208);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
              }
            }
            if ((long)uStack_1e0 < 0) {
              __ZdlPv(auStack_1f0);
            }
            pmVar63 = pmStack_4e8;
            pmVar42 = pmStack_218;
            if (&pmStack_220[0xf].ncmds != (dword *)auStack_170) {
              pmStack_220[0x10].ncmds = dStack_150;
              FUN_10a3ba2b0(&pmStack_220[0xf].ncmds,lStack_160,0);
              pmVar63 = pmStack_4e8;
              pmVar42 = pmStack_218;
            }
joined_r0x00010a0beb4c:
            pmStack_218 = pmVar42;
            if (pmVar63 != (mach_header *)auStack_4e0) {
              dVar104 = pmVar63[1].magic;
              uVar77 = (*(long *)&param_3[6].cpusubtype - (long)*(long ******)(param_3 + 6) >> 3) *
                       0x51b3bea3677d46cf;
              if (uVar77 < (ulong)(long)(int)dVar104 || uVar77 - (long)(int)dVar104 == 0)
              goto LAB_10a0c08b4;
              if (*(int *)(*(long ******)(param_3 + 6) + (long)(int)dVar104 * 0x2f + 4) == -1)
              goto LAB_10a0befc8;
              uVar88._0_4_ = pmVar63[1].cpusubtype;
              uVar88._4_4_ = pmVar63[1].filetype;
              pmVar79 = (mach_header *)0x20;
              __Znwm();
              pmVar79->cpusubtype = 0x65522e74;
              pmVar79->filetype = 0x7265646e;
              *(long ******)pmVar79 = (long *****)0x6e656e6f706d6f43;
              *(undefined8 *)((long)&pmVar79->ncmds + 2) = 0x6c61757369566873;
              *(undefined8 *)((long)&pmVar79->cpusubtype + 2) = 0x654d7265646e6552;
              *(undefined1 *)((long)&pmVar79->flags + 2) = 0;
              uStack_1e8 = (undefined **)0x1a;
              auStack_1f0 = (undefined1  [8])pmVar79;
              FUN_10a3e4fd8(auStack_140,uVar88,auStack_1f0);
              pmVar42 = (mach_header *)uStack_138;
              auVar59 = auStack_140;
              auStack_210 = (undefined1  [8])auStack_140;
              FUN_10a0d80a4(auStack_210);
              __ZdlPv(pmVar79);
              if ((undefined1  [8])pmVar42 == auVar59) goto LAB_10a0befc8;
              dVar104 = pmVar63[1].magic;
              uVar77 = (*(long *)&param_3[6].cpusubtype - (long)*(long ******)(param_3 + 6) >> 3) *
                       0x51b3bea3677d46cf;
              if (uVar77 < (ulong)(long)(int)dVar104 || uVar77 - (long)(int)dVar104 == 0)
              goto LAB_10a0c08b4;
              iVar25 = *(int *)(*(long ******)(param_3 + 6) + (long)(int)dVar104 * 0x2f + 4);
              lVar70 = *(long *)&param_3[8].cpusubtype;
              uVar77 = (*(long *)&param_3[8].ncmds - lVar70 >> 3) * -0x1084210842108421;
              if (uVar77 < (ulong)(long)iVar25 || uVar77 - (long)iVar25 == 0) goto LAB_10a0c08b4;
              uVar55 = *(uint *)(lVar70 + ((long)iVar25 * 0x3e + 6) * 4);
              auVar59 = (undefined1  [8])(mach_header *)0x0;
              if (-1 < (int)uVar55) {
                lVar64 = *(long *)&param_3[1].ncmds;
                uVar77 = (*(long *)&param_3[1].flags - lVar64 >> 4) * -0x30c30c30c30c30c3;
                if ((int)uVar55 < (int)uVar77) {
                  if (uVar77 < uVar55 || uVar77 - uVar55 == 0) goto LAB_10a0c08b4;
                  if ((*(int *)(lVar64 + ((ulong)uVar55 * 0x54 + 0xe) * 4) != 0x24 ||
                       *(int *)(lVar64 + ((ulong)uVar55 * 0x54 + 0xb) * 4) != 0x1406) ||
                     (*(ulong *)(lVar64 + ((ulong)uVar55 * 0x54 + 0xc) * 4) <
                      (ulong)(*(long *)(lVar70 + ((long)iVar25 * 0x3e + 10) * 4) -
                              *(long *)(lVar70 + ((long)iVar25 * 0x3e + 8) * 4) >> 2))) {
                    uVar47 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (auStack_1f0,&UNK_10f6395bb,*(long *)&pmVar63[1].cpusubtype + 0x168);
                    FUN_10a012db0(auStack_140,auStack_1f0,&UNK_10f6395cb);
                    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              (uVar47,auStack_140);
                    ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    goto LAB_10a0c08b4;
                  }
                  FUN_10a0c7dfc(auStack_140,&param_3[1].ncmds);
                  auVar59 = auStack_140;
                  if ((ulong)((long)uStack_138 - (long)auStack_140) >> 6 <
                      (ulong)(*(long *)(lVar70 + ((long)iVar25 * 0x3e + 10) * 4) -
                              *(long *)(lVar70 + ((long)iVar25 * 0x3e + 8) * 4) >> 2)) {
                    uVar47 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (auStack_1f0,&UNK_10f6395bb,*(long *)&pmVar63[1].cpusubtype + 0x168);
                    FUN_10a012db0(auStack_140,auStack_1f0,&UNK_10f6395f3);
                    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              (uVar47,auStack_140);
                    ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    goto LAB_10a0c08b4;
                  }
                }
              }
              pmStack_208 = (mach_header *)0x0;
              auStack_210 = (undefined1  [8])0x0;
              uStack_200 = 0;
              lVar64 = *(long *)(lVar70 + ((long)iVar25 * 0x3e + 8) * 4);
              if (*(long *)(lVar70 + ((long)iVar25 * 0x3e + 10) * 4) != lVar64) {
                uVar77 = 0;
LAB_10a0bed1c:
                iVar16 = *(int *)(lVar64 + uVar77 * 4);
                pmVar42 = (mach_header *)auStack_4e0;
                pmVar79 = (mach_header *)auStack_4e0._0_8_;
                if ((mach_header *)auStack_4e0._0_8_ != (mach_header *)0x0) {
                  do {
                    lVar64 = 8;
                    if (iVar16 <= (int)pmVar79[1].magic) {
                      lVar64 = 0;
                      pmVar42 = pmVar79;
                    }
                    pmVar79 = *(mach_header **)((long)&pmVar79->magic + lVar64);
                  } while (pmVar79 != (mach_header *)0x0);
                  if ((pmVar42 != (mach_header *)auStack_4e0) &&
                     (pmVar79 = (mach_header *)auStack_4e0._0_8_, (int)pmVar42[1].magic <= iVar16))
                  {
                    do {
                      if (iVar16 < (int)pmVar79[1].magic) {
                        pmVar79 = *(mach_header **)pmVar79;
                      }
                      else {
                        if (iVar16 <= (int)pmVar79[1].magic) goto LAB_10a0bed88;
                        pmVar79 = *(mach_header **)&pmVar79->cpusubtype;
                      }
                      if (pmVar79 == (mach_header *)0x0) {
                        FUN_109ffdddc("map::at:  key not found");
                        goto LAB_10a0c08b4;
                      }
                    } while( true );
                  }
                }
                uVar47 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (auStack_250,&UNK_10f6395bb,*(long *)&pmVar63[1].cpusubtype + 0x168);
                FUN_10a012db0(auStack_1f0,auStack_250,&UNK_10f639619);
                __ZNSt3__19to_stringEi(auStack_268,iVar16);
                pmVar63 = pmStack_260;
                auVar59 = auStack_268;
                if (-1 < (long)uStack_258) {
                  pmVar63 = (mach_header *)(uStack_258 >> 0x38);
                  auVar59 = (undefined1  [8])auStack_268;
                }
                puVar58 = (undefined8 *)auStack_1f0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar58,auVar59,pmVar63);
                uStack_138 = (undefined **)puVar58[1];
                auStack_140 = (undefined1  [8])*puVar58;
                uStack_130 = (code *)puVar58[2];
                puVar58[1] = 0;
                puVar58[2] = 0;
                *puVar58 = 0;
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar47,auStack_140);
                ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0c08b4;
              }
              goto LAB_10a0befac;
            }
            if (pmVar42 != (mach_header *)0x0) {
              pdVar90 = &pmVar42->cpusubtype;
              do {
                lVar70 = *(long *)pdVar90;
                cVar18 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
                if (bVar23) {
                  *(long *)pdVar90 = lVar70 + -1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              if (lVar70 == 0) {
                (*(code *)(*(long ******)pmVar42)[2])(pmVar42);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
              }
            }
          }
        }
        func_0x00010a0d8a6c(auStack_170);
        fVar105 = fVar105 + 1.0;
        if (param_6 != (float *)0x0) {
          *param_6 = (4.0 / (float)(ulong)((lVar65 >> 4) * -0x1111111111111111)) * fVar105 + 7.0;
        }
        func_0x00010a0e31ec(auStack_4e0._0_8_);
        if ((long)uStack_270 < 0) {
          __ZdlPv(auStack_280);
        }
        puVar58 = puVar58 + 0x1e;
      } while (puVar58 != puVar68);
    }
    pmVar63 = pmStack_4a0;
    auVar59 = auStack_4a8;
    if (param_6 != (float *)0x0) {
      *param_6 = 0.84615386;
    }
    for (; auVar59 != (undefined1  [8])pmVar63;
        auVar59 = (undefined1  [8])&((mach_header *)auVar59)->ncmds) {
      FUN_10a03cd44(auStack_1f0,*(long ******)auVar59);
      if (auStack_1f0 == (undefined1  [8])0x0) {
        if (uStack_308._7_1_ == '\x01') {
          ppppplVar91 = *(long ******)auVar59;
          if (*(char *)((long)ppppplVar91 + 0x6f) < '\0') {
            func_0x000107c3192c(auStack_140,ppppplVar91[0xb],ppppplVar91[0xc]);
          }
          else {
            uStack_138 = (undefined **)ppppplVar91[0xc];
            auStack_140 = (undefined1  [8])ppppplVar91[0xb];
            uStack_130 = (code *)ppppplVar91[0xd];
          }
          func_0x000107c2b054(&uStack_128,"");
          ppppppplVar46 = (long *******)0x50;
          __Znwm();
          ppppppplVar46[4] = (long ******)uStack_130;
          ppppppplVar46[3] = (long ******)uStack_138;
          ppppppplVar46[2] = (long ******)auStack_140;
          uStack_130 = (code *)0x0;
          uStack_138 = (undefined **)0x0;
          auStack_140 = (undefined1  [8])0x0;
          ppppppplVar46[6] = (long ******)pmStack_120;
          ppppppplVar46[5] = (long ******)uStack_128;
          ppppppplVar46[7] = (long ******)pmStack_118;
          uStack_128 = (mach_header *)0x0;
          pmStack_120 = (mach_header *)0x0;
          pmStack_118 = (mach_header *)0x0;
          lVar65 = *(long *)&((mach_header *)auVar59)->cpusubtype;
          pppppplVar102 = *(long *******)auVar59;
          ppppppplVar46[9] = *(long *******)&((mach_header *)auVar59)->cpusubtype;
          ppppppplVar46[8] = pppppplVar102;
          if (lVar65 != 0) {
            plVar78 = (long *)(lVar65 + 8);
            do {
              cVar18 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar78,0x10);
              if (bVar23) {
                *plVar78 = *plVar78 + 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
          }
          *ppppppplVar46 = (long ******)ppppppplStack_400;
          ppppppplVar46[1] = (long ******)&ppppppplStack_400;
          ppppppplStack_400[1] = (long ******)ppppppplVar46;
          ppppppplStack_400 = ppppppplVar46;
          goto LAB_10a0bf280;
        }
      }
      else {
        ppppplVar91 = *(long ******)auVar59;
        if (*(char *)((long)ppppplVar91 + 0x6f) < '\0') {
          func_0x000107c3192c(auStack_140,ppppplVar91[0xb],ppppplVar91[0xc]);
        }
        else {
          uStack_138 = (undefined **)ppppplVar91[0xc];
          auStack_140 = (undefined1  [8])ppppplVar91[0xb];
          uStack_130 = (code *)ppppplVar91[0xd];
        }
        if (*(char *)((long)&((mach_header *)((long)auStack_1f0 + 0x80))->filetype + 3) < '\0') {
          uVar6._0_4_ = ((mach_header *)((long)auStack_1f0 + 0x60))->flags;
          uVar6._4_4_ = ((mach_header *)((long)auStack_1f0 + 0x60))->reserved;
          func_0x000107c3192c(&uStack_128,uVar6,*(long ******)((long)auStack_1f0 + 0x80));
        }
        else {
          pmStack_120 = *(mach_header **)((long)auStack_1f0 + 0x80);
          uStack_128 = *(mach_header **)&((mach_header *)((long)auStack_1f0 + 0x60))->flags;
          pmStack_118 = *(mach_header **)&((mach_header *)((long)auStack_1f0 + 0x80))->cpusubtype;
        }
        ppppppplVar46 = (long *******)0x50;
        __Znwm();
        *ppppppplVar46 = (long ******)0x0;
        ppppppplVar46[1] = (long ******)0x0;
        if ((long)uStack_130 < 0) {
          func_0x000107c3192c(ppppppplVar46 + 2,auStack_140,uStack_138);
        }
        else {
          ppppppplVar46[3] = (long ******)uStack_138;
          ppppppplVar46[2] = (long ******)auStack_140;
          ppppppplVar46[4] = (long ******)uStack_130;
        }
        if ((long)pmStack_118 < 0) {
          func_0x000107c3192c(ppppppplVar46 + 5,uStack_128,pmStack_120);
        }
        else {
          ppppppplVar46[6] = (long ******)pmStack_120;
          ppppppplVar46[5] = (long ******)uStack_128;
          ppppppplVar46[7] = (long ******)pmStack_118;
        }
        lVar65 = *(long *)&((mach_header *)auVar59)->cpusubtype;
        pppppplVar102 = *(long *******)auVar59;
        ppppppplVar46[9] = *(long *******)&((mach_header *)auVar59)->cpusubtype;
        ppppppplVar46[8] = pppppplVar102;
        if (lVar65 != 0) {
          plVar78 = (long *)(lVar65 + 8);
          do {
            cVar18 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar78,0x10);
            if (bVar23) {
              *plVar78 = *plVar78 + 1;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
        }
        *ppppppplVar46 = (long ******)ppppppplStack_400;
        ppppppplVar46[1] = (long ******)&ppppppplStack_400;
        ppppppplStack_400[1] = (long ******)ppppppplVar46;
        ppppppplStack_400 = ppppppplVar46;
LAB_10a0bf280:
        lStack_3f0 = lStack_3f0 + 1;
        if ((long)pmStack_118 < 0) {
          __ZdlPv(uStack_128);
        }
        if ((long)uStack_130 < 0) {
          __ZdlPv(auStack_140);
        }
      }
      pmVar42 = (mach_header *)uStack_1e8;
      if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
        pdVar90 = &((mach_header *)uStack_1e8)->cpusubtype;
        do {
          lVar65 = *(long *)pdVar90;
          cVar18 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
          if (bVar23) {
            *(long *)pdVar90 = lVar65 + -1;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if (lVar65 == 0) {
          (*(code *)*(long *****)((long)*uStack_1e8 + 0x10))(uStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
        }
      }
    }
    if ((uStack_308 & 0x100000000000000) != 0) {
      lVar62._0_4_ = param_3[4].ncmds;
      lVar62._4_4_ = param_3[4].sizeofcmds;
      lVar13._0_4_ = param_3[4].flags;
      lVar13._4_4_ = param_3[4].reserved;
      if (lVar62 != lVar13) {
        uVar77 = ((long)*(long ******)(param_3 + 7) - *(long *)&param_3[6].flags >> 5) *
                 0x6db6db6db6db6db7;
        do {
          uVar71 = (ulong)*(uint *)(lVar62 + 0x70);
          if ((-1 < (int)*(uint *)(lVar62 + 0x70)) && (uVar71 <= uVar77 && uVar77 - uVar71 != 0)) {
            if (uVar71 < (ulong)((long)pmStack_4a0 - (long)auStack_4a8 >> 4)) {
              func_0x00010a04a704(&lStack_330,&((mach_header *)auStack_4a8)->magic + uVar71 * 4);
            }
            break;
          }
          lVar62 = lVar62 + 0x628;
        } while (lVar62 != lVar13);
      }
    }
    if (param_6 != (float *)0x0) {
      *param_6 = 0.9230769;
    }
    lStack_408 = lVar57;
    pmVar42 = apmStack_4c0[0];
    pmVar63 = apmStack_4c0[1];
    if ((char)param_3->reserved == '\x01') {
      lVar65 = *(long *)(lVar57 + 0x140);
      func_0x00010a0d8ae0(lVar65);
      auStack_140 = (undefined1  [8])
                    CONCAT44((float)((ulong)*(undefined8 *)(lVar65 + 0x48) >> 0x20) * 100.0,
                             (float)*(undefined8 *)(lVar65 + 0x48) * 100.0);
      uStack_138 = (undefined **)CONCAT44(uStack_138._4_4_,*(float *)(lVar65 + 0x50) * 100.0);
      FUN_10a3e814c(*(undefined8 *)(lVar57 + 0x140),auStack_140);
      pmVar42 = apmStack_4c0[0];
      pmVar63 = apmStack_4c0[1];
    }
    for (; pmVar79 = pmStack_4a0, pmVar42 != pmVar63; pmVar42 = (mach_header *)&pmVar42->flags) {
      ppppplVar87 = *(long ******)&pmVar42->cpusubtype;
      for (ppppplVar91 = *(long ******)pmVar42; ppppplVar91 != ppppplVar87;
          ppppplVar91 = ppppplVar91 + 2) {
        if ((*ppppplVar91 != (long ****)0x0) &&
           (ppplVar45 = (*ppppplVar91)[0x1c], ppplVar45 != (long ***)0x0)) {
          (*(code *)(*ppplVar45)[0x12])();
          pplVar85 = *ppplVar45;
          if (pplVar85 != (long **)0x0) {
            uStack_350 = CONCAT44(uStack_350._4_4_,(int)uStack_350 + 1);
            uVar55 = *(uint *)(pplVar85 + 0x1e);
            iVar89 = 0;
            if (uVar55 != 0) {
              iVar89 = 0;
              if ((ulong)uVar55 != 0) {
                iVar89 = (int)((ulong)((long)pplVar85[3] - (long)pplVar85[2]) / (ulong)uVar55);
              }
            }
            uStack_358._4_4_ = uStack_358._4_4_ + iVar89;
            FUN_10ab4cc0c();
            uStack_358 = CONCAT44(uStack_358._4_4_,(int)uStack_358 + (int)pplVar85);
          }
        }
      }
    }
    uStack_350 = CONCAT44((int)((ulong)((long)pmStack_4a0 - (long)auStack_4a8) >> 4),(int)uStack_350
                         );
    auVar59 = auStack_4a8;
    if ((long)pmStack_4a0 - (long)auStack_4a8 != 0) {
      do {
        ppppplVar91 = *(long ******)auVar59;
        if (ppppplVar91 != (long *****)0x0) {
          FUN_10ab6bacc();
          lStack_348 = lStack_348 + (long)ppppplVar91;
        }
        auVar59 = (undefined1  [8])&((mach_header *)auVar59)->ncmds;
      } while (auVar59 != (undefined1  [8])pmVar79);
    }
    lVar65 = 0x58;
    if (*(char *)((long)&param_3->reserved + 1) == '\0') {
      lVar65 = 0x78;
    }
    lStack_340 = CONCAT44((int)*(undefined8 *)((long)apmStack_4c0 + lVar65),
                          (int)((ulong)((long)pmStack_488 - (long)pmStack_490) >> 4));
    iStack_338 = (int)((ulong)(*(long *)&param_3[6].cpusubtype - (long)*(long ******)(param_3 + 6))
                      >> 3) * 0x677d46cf;
    if (((ulong)ppppplStack_300 & 1) != 0) {
      uVar47 = *(undefined8 *)(param_2 + 0x18);
      FUN_10a2421c8(uVar47);
      ppuVar48 = &PTR___tlv_bootstrap_11340dee8;
      (*(code *)PTR___tlv_bootstrap_11340dee8)(uVar47);
      puVar98 = *ppuVar48;
      *ppuVar48 = extraout_x8;
      for (ppppppplVar46 = ppppppplStack_3c8; (long ********)ppppppplVar46 != &ppppppplStack_3d0;
          ppppppplVar46 = (long *******)ppppppplVar46[1]) {
        if (ppppppplVar46[5][0x1c] != (long *****)0x0) {
          FUN_10a061940(ppppppplVar46[5][0x1c],1);
        }
      }
      *ppuVar48 = puVar98;
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f637370,&UNK_10f637599,0x330,&UNK_10f637725);
    }
    ppppppplVar46 = ppppppplStack_400;
    pppppplVar102 = (long ******)(param_1 + 1);
    *param_1 = lStack_408;
    param_1[1] = (long)pppppplVar102;
    param_1[2] = (long)pppppplVar102;
    param_1[3] = 0;
    if (param_1 == &lStack_408) goto LAB_10a0c08b4;
    if (lStack_3f0 != 0) {
      pppppplVar75 = ppppppplStack_400[1];
      pppppplVar76 = *ppppppplStack_3f8;
      pppppplVar76[1] = (long *****)pppppplVar75;
      *pppppplVar75 = (long *****)pppppplVar76;
      pppppplVar75 = (long ******)param_1[1];
      pppppplVar75[1] = (long *****)ppppppplStack_3f8;
      *ppppppplStack_3f8 = pppppplVar75;
      param_1[1] = (long)ppppppplVar46;
      ppppppplVar46[1] = pppppplVar102;
      param_1[3] = lStack_3f0;
      lStack_3f0 = 0;
    }
    ppppppplVar46 = ppppppplStack_3e8;
    pppppplVar102 = (long ******)(param_1 + 4);
    param_1[4] = (long)pppppplVar102;
    param_1[5] = (long)pppppplVar102;
    param_1[6] = 0;
    if (lStack_3d8 != 0) {
      pppppplVar75 = ppppppplStack_3e8[1];
      pppppplVar76 = *ppppppplStack_3e0;
      pppppplVar76[1] = (long *****)pppppplVar75;
      *pppppplVar75 = (long *****)pppppplVar76;
      pppppplVar75 = (long ******)param_1[4];
      pppppplVar75[1] = (long *****)ppppppplStack_3e0;
      *ppppppplStack_3e0 = pppppplVar75;
      param_1[4] = (long)ppppppplVar46;
      ppppppplVar46[1] = pppppplVar102;
      param_1[6] = lStack_3d8;
      lStack_3d8 = 0;
    }
    ppppppplVar46 = ppppppplStack_3d0;
    pppppplVar102 = (long ******)(param_1 + 7);
    param_1[7] = (long)pppppplVar102;
    param_1[8] = (long)pppppplVar102;
    param_1[9] = 0;
    if (lStack_3c0 != 0) {
      pppppplVar75 = ppppppplStack_3d0[1];
      pppppplVar76 = *ppppppplStack_3c8;
      pppppplVar76[1] = (long *****)pppppplVar75;
      *pppppplVar75 = (long *****)pppppplVar76;
      pppppplVar75 = (long ******)param_1[7];
      pppppplVar75[1] = (long *****)ppppppplStack_3c8;
      *ppppppplStack_3c8 = pppppplVar75;
      param_1[7] = (long)ppppppplVar46;
      ppppppplVar46[1] = pppppplVar102;
      param_1[9] = lStack_3c0;
      lStack_3c0 = 0;
    }
    ppppppplVar46 = ppppppplStack_3b8;
    pppppplVar102 = (long ******)(param_1 + 10);
    param_1[10] = (long)pppppplVar102;
    param_1[0xb] = (long)pppppplVar102;
    param_1[0xc] = 0;
    if (lStack_3a8 != 0) {
      pppppplVar75 = ppppppplStack_3b8[1];
      pppppplVar76 = *ppppppplStack_3b0;
      pppppplVar76[1] = (long *****)pppppplVar75;
      *pppppplVar75 = (long *****)pppppplVar76;
      pppppplVar75 = (long ******)param_1[10];
      pppppplVar75[1] = (long *****)ppppppplStack_3b0;
      *ppppppplStack_3b0 = pppppplVar75;
      param_1[10] = (long)ppppppplVar46;
      ppppppplVar46[1] = pppppplVar102;
      param_1[0xc] = lStack_3a8;
      lStack_3a8 = 0;
    }
    ppppppplVar46 = ppppppplStack_3a0;
    pppppplVar102 = (long ******)(param_1 + 0xd);
    param_1[0xd] = (long)pppppplVar102;
    param_1[0xe] = (long)pppppplVar102;
    param_1[0xf] = 0;
    if (lStack_390 != 0) {
      pppppplVar75 = ppppppplStack_3a0[1];
      pppppplVar76 = *ppppppplStack_398;
      pppppplVar76[1] = (long *****)pppppplVar75;
      *pppppplVar75 = (long *****)pppppplVar76;
      pppppplVar75 = (long ******)param_1[0xd];
      pppppplVar75[1] = (long *****)ppppppplStack_398;
      *ppppppplStack_398 = pppppplVar75;
      param_1[0xd] = (long)ppppppplVar46;
      ppppppplVar46[1] = pppppplVar102;
      param_1[0xf] = lStack_390;
      lStack_390 = 0;
    }
    ppppppplVar46 = ppppppplStack_388;
    pppppplVar102 = (long ******)(param_1 + 0x10);
    param_1[0x10] = (long)pppppplVar102;
    param_1[0x11] = (long)pppppplVar102;
    param_1[0x12] = 0;
    if (lStack_378 != 0) {
      pppppplVar75 = ppppppplStack_388[1];
      pppppplVar76 = *ppppppplStack_380;
      pppppplVar76[1] = (long *****)pppppplVar75;
      *pppppplVar75 = (long *****)pppppplVar76;
      pppppplVar75 = (long ******)param_1[0x10];
      pppppplVar75[1] = (long *****)ppppppplStack_380;
      *ppppppplStack_380 = pppppplVar75;
      param_1[0x10] = (long)ppppppplVar46;
      ppppppplVar46[1] = pppppplVar102;
      param_1[0x12] = lStack_378;
      lStack_378 = 0;
    }
    param_1[0x14] = (long)pmStack_368;
    param_1[0x13] = (long)pmStack_370;
    param_1[0x15] = (long)pmStack_360;
    pmStack_368 = (mach_header *)0x0;
    pmStack_360 = (mach_header *)0x0;
    pmStack_370 = (mach_header *)0x0;
    param_1[0x17] = uStack_350;
    param_1[0x16] = uStack_358;
    param_1[0x19] = lStack_340;
    param_1[0x18] = lStack_348;
    param_1[0x1a] = CONCAT44(uStack_334,iStack_338);
    param_1[0x1c] = (long)plStack_328;
    param_1[0x1b] = lStack_330;
    lStack_330 = 0;
    plStack_328 = (long *)0x0;
    func_0x000109380ffc(&pmStack_228,(ulong)pmStack_230 & 0xff);
    func_0x000109380ffc(apmStack_418,auStack_420[0]);
    func_0x00010a0cd1a0(pmStack_430);
    func_0x00010a0cd280(pmStack_450);
    pmVar63 = pmStack_460;
    pmStack_460 = (mach_header *)0x0;
    if (pmVar63 != (mach_header *)0x0) {
      __ZdlPv();
    }
    func_0x00010a0dc4d0(pmStack_470);
    auStack_140 = (undefined1  [8])&pmStack_490;
    FUN_10a0d4a18(auStack_140);
    auStack_140 = (undefined1  [8])auStack_4a8;
    FUN_10a04a568(auStack_140);
    FUN_10a0d00cc(apmStack_4c0);
    plVar78 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      plVar100 = plStack_328 + 1;
      do {
        lVar65 = *plVar100;
        cVar18 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar100,0x10);
        if (bVar23) {
          *plVar100 = lVar65 + -1;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if (lVar65 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar78);
      }
    }
    if ((long)pmStack_360 < 0) {
      __ZdlPv(pmStack_370);
    }
    FUN_10a0d8d04(&ppppppplStack_388);
    FUN_10a0d8e04(&ppppppplStack_3a0);
    FUN_10a0d8eac(&ppppppplStack_3b8);
    FUN_10a0d8f64(&ppppppplStack_3d0);
    FUN_10a0d900c(&ppppppplStack_3e8);
    FUN_10a0d90b4(&ppppppplStack_400);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  uVar47 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  ___cxa_throw(uVar47,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a0c08b4:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x10a0c08b8);
  (*pcVar22)();
LAB_10a0ba1ac:
  uVar95 = 0;
LAB_10a0ba1b8:
  puVar26 = (undefined1 *)(*(long *)&param_3[7].ncmds + uVar71 * 0x148);
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar2 = *(uint *)(puVar26 + 0x18);
    iVar25 = *(int *)(puVar26 + 0x1c);
    lVar65 = *(long *)&param_3[0x1d].ncmds;
    if (uVar71 < (ulong)(*(long *)&param_3[0x1d].flags - lVar65 >> 5)) {
      pmStack_218 = (mach_header *)0x0;
      pmStack_220 = (mach_header *)0x0;
      pmVar63 = *(mach_header **)(puVar26 + 0x30);
      if (*(char *)(lVar65 + (uVar71 * 8 + 6) * 4) != '\x01') goto LAB_10a0ba400;
      uVar14 = *(undefined4 *)(lVar65 + (uVar71 * 8 + 7) * 4);
      auStack_140 = (undefined1  [8])((ulong)uVar2 << 0x20);
      uStack_138 = (undefined **)(ulong)CONCAT14(1,iVar25);
      pmStack_120 = (mach_header *)0x1;
      uStack_128 = &MACH_HEADER;
      pmStack_118 = (mach_header *)((ulong)pmStack_118 & 0xffffffffffffff00);
      uStack_130 = (code *)CONCAT44(uVar14,uVar14);
      lVar31._0_4_ = param_3[1].cpusubtype;
      lVar31._4_4_ = param_3[1].filetype;
      auStack_110 = (undefined1  [8])pmVar63;
      FUN_10a2421c8();
      plVar78 = *(long **)(lVar31 + 0x228);
      (**(code **)(*plVar78 + 0x20))(plVar78,auStack_140);
      FUN_10a099d88(&pmStack_220,plVar78);
      bVar23 = true;
    }
    else {
      pmVar63 = *(mach_header **)(puVar26 + 0x30);
LAB_10a0ba400:
      pmStack_218 = (mach_header *)0x0;
      pmStack_220 = (mach_header *)0x0;
      uVar54 = *(uint *)(puVar26 + 0x20);
      uVar4 = uVar95 & (uVar55 ^ 1);
      if (uVar4 == 0) {
        pmVar79 = (mach_header *)(long)(int)uVar2;
        pmVar42 = (mach_header *)(long)iVar25;
        if (uVar54 == 4) {
          if (uVar55 != 0 || uVar95 != 0) {
            pmVar36 = (mach_header *)((long)(int)uVar2 * 4);
            uVar56 = (long)pmVar36 * (long)pmVar42;
            pmVar81 = *(mach_header **)(param_2 + 0x30);
            uVar72 = *(long *)(param_2 + 0x38) - (long)pmVar81;
            if (uVar56 < uVar72 || uVar56 - uVar72 == 0) {
              if (uVar56 < uVar72) {
                *(dword **)(param_2 + 0x38) = (dword *)((long)&pmVar81->magic + uVar56);
              }
            }
            else {
              func_0x0001092bf294(param_2 + 0x30,uVar56 - uVar72);
              pmVar81 = *(mach_header **)(param_2 + 0x30);
            }
            auStack_140 = (undefined1  [8])pmVar42;
            uStack_138 = (undefined **)pmVar79;
            uStack_130 = (code *)pmVar36;
            uStack_128 = pmVar63;
            func_0x00010a0dbb94(pmVar36,pmVar81,auStack_140,0x100000002,0x300000000);
            goto LAB_10a0ba900;
          }
          uVar54 = 1;
        }
        else {
          if (uVar54 != 3) goto LAB_10a0ba60c;
          uVar56 = (long)pmVar79 * 4 * (long)pmVar42;
          pmVar81 = *(mach_header **)(param_2 + 0x30);
          uVar72 = *(long *)(param_2 + 0x38) - (long)pmVar81;
          if (uVar56 < uVar72 || uVar56 - uVar72 == 0) {
            if (uVar56 < uVar72) {
              *(dword **)(param_2 + 0x38) = (dword *)((long)&pmVar81->magic + uVar56);
            }
          }
          else {
            func_0x0001092bf294(param_2 + 0x30,uVar56 - uVar72);
            pmVar81 = *(mach_header **)(param_2 + 0x30);
          }
          uStack_130 = (code *)((long)(int)uVar2 * 3);
          if (uVar55 == 0 && uVar95 == 0) {
            uVar47 = 0x100000000;
            uVar80 = 0x300000002;
          }
          else {
            uVar47 = 0x100000002;
            uVar80 = 0x300000000;
          }
          auStack_140 = (undefined1  [8])pmVar42;
          uStack_138 = (undefined **)pmVar79;
          uStack_128 = pmVar63;
          FUN_10a0dba80((long)pmVar79 * 4,pmVar81,auStack_140,uVar47,uVar80,0xff000000);
LAB_10a0ba900:
          pmVar63 = pmVar81;
          uVar54 = 1;
        }
      }
      else {
        iVar16 = uVar2 * iVar25 * 4;
        uVar72 = (ulong)iVar16;
        lVar65 = *(long *)(param_2 + 0x30);
        uVar56 = *(long *)(param_2 + 0x38) - lVar65;
        if (uVar72 < uVar56 || uVar72 - uVar56 == 0) {
          if (uVar72 < uVar56) {
            *(ulong *)(param_2 + 0x38) = lVar65 + uVar72;
          }
        }
        else {
          func_0x0001092bf294(param_2 + 0x30,uVar72 - uVar56);
          lVar65 = *(long *)(param_2 + 0x30);
        }
        _memset(lVar65,0xff,uVar72);
        if (iVar16 != 0) {
          iVar15 = *(int *)(puVar26 + 0x24);
          iVar16 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar16 = iVar15;
          }
          uVar55 = 4;
          do {
            if ((ulong)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30)) <=
                (ulong)(uVar55 - 2)) goto LAB_10a0c08b4;
            *(char *)(*(long *)(param_2 + 0x30) + (ulong)(uVar55 - 2)) = (char)pmVar63->magic;
            pmVar63 = (mach_header *)((long)&pmVar63->magic + (ulong)((iVar16 >> 3) * uVar54));
            uVar56 = (ulong)uVar55;
            uVar55 = uVar55 + 4;
          } while (uVar56 < uVar72);
        }
        pmVar63 = *(mach_header **)(param_2 + 0x30);
LAB_10a0ba60c:
        uVar55 = 7;
        if (uVar54 != 1) {
          uVar55 = 1;
        }
        if (uVar54 != 3) {
          uVar54 = uVar55;
        }
      }
      if (uVar4 != 0) {
        uVar54 = 1;
      }
      FUN_10ab79c98();
      auStack_140 = (undefined1  [8])((ulong)uVar2 << 0x20);
      uStack_138 = (undefined **)CONCAT44(1,iVar25);
      uStack_130 = (code *)(ulong)uVar54;
      uStack_128 = &MACH_HEADER;
      pmStack_120 = (mach_header *)0x0;
      pmStack_118 = (mach_header *)((ulong)pmStack_118 & 0xffffffffffffff00);
      lVar33._0_4_ = param_3[1].cpusubtype;
      lVar33._4_4_ = param_3[1].filetype;
      auStack_110 = (undefined1  [8])pmVar63;
      FUN_10a2421c8();
      plVar78 = *(long **)(lVar33 + 0x228);
      (**(code **)(*plVar78 + 0x20))(plVar78,auStack_140);
      FUN_10a099d88(&pmStack_220,plVar78);
      bVar23 = false;
    }
    uVar56._0_4_ = param_3[1].cpusubtype;
    uVar56._4_4_ = param_3[1].filetype;
    auStack_140 = (undefined1  [8])uVar56;
    FUN_10a0dbc78(&pmStack_230,auStack_1f0,auStack_140,&pmStack_220);
    if (uVar71 < (ulong)(*(long *)&param_3[0x1d].flags - *(long *)&param_3[0x1d].ncmds >> 5)) {
      bVar53 = *(byte *)(*(long *)&param_3[0x1d].ncmds + uVar71 * 0x20 + 0x19);
    }
    else {
      bVar53 = 0;
    }
    if (bVar23 || (bVar53 & 1) != 0) {
      (*(code *)(*(long ******)pmStack_230)[0x12])(auStack_140);
      auStack_1f0._4_4_ =
           (float)uStack_138 + ((float)auStack_140._0_4_ * 0.0 - (float)auStack_140._4_4_);
      auStack_1f0._0_4_ =
           (float)auStack_140._0_4_ + (float)auStack_140._4_4_ * 0.0 + (float)uStack_138 * 0.0;
      uStack_1e8 = (undefined **)
                   CONCAT44(uStack_138._4_4_ + (float)uStack_130 * 0.0 + uStack_130._4_4_ * 0.0,
                            (float)uStack_138 +
                            (float)auStack_140._4_4_ * 0.0 + (float)auStack_140._0_4_ * 0.0);
      uStack_1e0 = (mach_header *)
                   CONCAT44(uStack_130._4_4_ + (float)uStack_130 * 0.0 + uStack_138._4_4_ * 0.0,
                            uStack_130._4_4_ + (uStack_138._4_4_ * 0.0 - (float)uStack_130));
      uStack_1d8 = (mach_header *)
                   CONCAT44(pmStack_120._0_4_ + ((float)uStack_128 * 0.0 - uStack_128._4_4_),
                            (float)uStack_128 + uStack_128._4_4_ * 0.0 + pmStack_120._0_4_ * 0.0);
      pdStack_1d0 = (dword *)CONCAT44(pdStack_1d0._4_4_,
                                      pmStack_120._0_4_ +
                                      uStack_128._4_4_ * 0.0 + (float)uStack_128 * 0.0);
      (*(code *)(*(long ******)pmStack_230)[0x13])(pmStack_230,auStack_1f0);
    }
    FUN_10a0db928(&pmStack_2b0,uVar56,&pmStack_230);
    pmVar63 = pmStack_2b0;
    lVar65 = (long)(char)puVar26[0x7f];
    if (lVar65 < 0) {
      lVar65 = *(long *)(puVar26 + 0x70);
    }
    lVar57 = 0;
    if (lVar65 != 0) {
      lVar57 = 0x68;
    }
    puVar3 = (ulong *)(puVar26 + lVar57);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      func_0x000107c3192c(auStack_140,*puVar3,puVar3[1]);
    }
    else {
      uStack_138 = (undefined **)puVar3[1];
      auStack_140 = (undefined1  [8])*puVar3;
      uStack_130 = (code *)puVar3[2];
    }
    if (*(char *)((long)&pmVar63[3].filetype + 3) < '\0') {
      uVar84._0_4_ = pmVar63[2].flags;
      uVar84._4_4_ = pmVar63[2].reserved;
      __ZdlPv(uVar84);
    }
    pmVar42 = pmStack_228;
    *(undefined ***)(pmVar63 + 3) = uStack_138;
    pmVar63[2].flags = auStack_140._0_4_;
    pmVar63[2].reserved = auStack_140._4_4_;
    pmVar63[3].cpusubtype = (dword)(float)uStack_130;
    pmVar63[3].filetype = (dword)uStack_130._4_4_;
    uStack_130 = (code *)((ulong)uStack_130 & 0xffffffffffffff);
    auStack_140 = (undefined1  [8])((ulong)auStack_140 & 0xffffffffffffff00);
    if (pmStack_228 != (mach_header *)0x0) {
      pdVar90 = &pmStack_228->cpusubtype;
      do {
        lVar65 = *(long *)pdVar90;
        cVar19 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
        if (bVar23) {
          *(long *)pdVar90 = lVar65 + -1;
          cVar19 = ExclusiveMonitorsStatus();
        }
      } while (cVar19 != '\0');
      if (lVar65 == 0) {
        (*(code *)(*(long ******)pmStack_228)[2])(pmStack_228);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar42);
      }
    }
    pmVar63 = pmStack_218;
    if (pmStack_218 != (mach_header *)0x0) {
      pdVar90 = &pmStack_218->cpusubtype;
      do {
        lVar65 = *(long *)pdVar90;
        cVar19 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
        if (bVar23) {
          *(long *)pdVar90 = lVar65 + -1;
          cVar19 = ExclusiveMonitorsStatus();
        }
      } while (cVar19 != '\0');
      if (lVar65 == 0) {
        (*(code *)(*(long ******)pmStack_218)[2])(pmStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
      }
    }
    pmVar63 = pmStack_298;
    pmStack_298 = pmStack_2a8;
    pmStack_2a0 = pmStack_2b0;
    pmStack_2b0 = (mach_header *)0x0;
    pmStack_2a8 = (mach_header *)0x0;
    if (pmVar63 != (mach_header *)0x0) {
      pdVar90 = &pmVar63->cpusubtype;
      do {
        lVar65 = *(long *)pdVar90;
        cVar19 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
        if (bVar23) {
          *(long *)pdVar90 = lVar65 + -1;
          cVar19 = ExclusiveMonitorsStatus();
        }
      } while (cVar19 != '\0');
      if (lVar65 == 0) {
        (*(code *)(*(long ******)pmVar63)[2])(pmVar63);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
      }
    }
    if (pmStack_2a8 != (mach_header *)0x0) {
      pdVar90 = &pmStack_2a8->cpusubtype;
      do {
        lVar65 = *(long *)pdVar90;
        cVar19 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
        if (bVar23) {
          *(long *)pdVar90 = lVar65 + -1;
          cVar19 = ExclusiveMonitorsStatus();
        }
        pmVar63 = pmStack_2a8;
      } while (cVar19 != '\0');
LAB_10a0babe4:
      if (lVar65 == 0) {
        (*(code *)(*(long ******)pmVar63)[2])(pmVar63);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
      }
    }
  }
  else {
    uStack_138 = (undefined **)0x0;
    auStack_140 = (undefined1  [8])0x0;
    uStack_130 = (code *)0x0;
    pmStack_108 = (mach_header *)0x0;
    pdStack_100 = (dword *)0x0;
    auStack_110 = (undefined1  [8])0x0;
    lStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    uStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    dStack_f8 = *(dword *)(puVar26 + 0x48);
    pmStack_120 = *(mach_header **)(puVar26 + 0x20);
    uStack_128 = *(mach_header **)(puVar26 + 0x18);
    iStack_c0 = iVar89;
    if (auStack_140 != puVar26) {
      FUN_10a0cf2cc(auStack_110,*(long *)(puVar26 + 0x30),*(long *)(puVar26 + 0x38),
                    *(long *)(puVar26 + 0x38) - *(long *)(puVar26 + 0x30));
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&plStack_f0,puVar26 + 0x50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_140,puVar26);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_d8,puVar26 + 0x68);
    uVar2 = *(int *)(puVar26 + 0x28) - 0x1400;
    if ((uVar2 < 0xb) && ((0x47fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      pmStack_118 = (mach_header *)
                    CONCAT44(pmStack_118._4_4_,*(undefined4 *)(&UNK_10e495944 + (ulong)uVar2 * 4));
    }
    (**(code **)(**(long **)(param_2 + 0x20) + 0x10))
              (auStack_1f0,*(long **)(param_2 + 0x20),param_3,auStack_140,&pmStack_4e8,uVar55,uVar95
              );
    pmVar42 = (mach_header *)uStack_1e8;
    pmStack_2a0 = (mach_header *)auStack_1f0;
    pmVar63 = pmStack_298;
    uStack_1e8 = (undefined **)0x0;
    auStack_1f0 = (undefined1  [8])0x0;
    pmStack_298 = pmVar42;
    if (pmVar63 != (mach_header *)0x0) {
      pdVar90 = &pmVar63->cpusubtype;
      do {
        lVar65 = *(long *)pdVar90;
        cVar19 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
        if (bVar23) {
          *(long *)pdVar90 = lVar65 + -1;
          cVar19 = ExclusiveMonitorsStatus();
        }
      } while (cVar19 != '\0');
      if (lVar65 == 0) {
        (*(code *)(*(long ******)pmVar63)[2])(pmVar63);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
      }
    }
    pmVar63 = (mach_header *)uStack_1e8;
    if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
      pdVar90 = &((mach_header *)uStack_1e8)->cpusubtype;
      do {
        lVar65 = *(long *)pdVar90;
        cVar19 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
        if (bVar23) {
          *(long *)pdVar90 = lVar65 + -1;
          cVar19 = ExclusiveMonitorsStatus();
        }
      } while (cVar19 != '\0');
      if (lVar65 == 0) {
        (*(code *)*(long *****)((long)*uStack_1e8 + 0x10))(uStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
      }
    }
    if (lStack_c8 < 0) {
      __ZdlPv(uStack_d8);
    }
    if (lStack_e0 < 0) {
      __ZdlPv(plStack_f0);
    }
    if (auStack_110 != (undefined1  [8])0x0) {
      pmStack_108 = (mach_header *)auStack_110;
      __ZdlPv();
    }
    if ((long)uStack_130 < 0) {
      __ZdlPv(auStack_140);
    }
  }
LAB_10a0bac00:
  unaff_x22 = (undefined1  [8])auStack_140;
  FUN_10a069ac8(auStack_280,&pmStack_2a0);
  auStack_1f0 = (undefined1  [8])((ulong)auStack_1f0 & 0xffffffffffffff00);
  uStack_1e8 = (undefined **)0x0;
  cVar19 = *(char *)((long)ppppplVar91 + uVar77 * 0xe0 + 199);
  if (cVar19 < '\0') {
    if (ppppplVar91[uVar77 * 0x1c + 0x17] == (long ****)0x0) goto LAB_10a0bac90;
LAB_10a0bac20:
    plStack_158 = (long *)0x0;
    func_0x0001094749d8(&pmStack_2d0,ppppplVar91 + uVar77 * 0x1c + 0x16,auStack_170,1,0);
    pmVar63 = (mach_header *)uStack_1e8;
    uVar17 = auStack_1f0[0];
    auStack_1f0[0] = pmStack_2d0._0_1_;
    pmStack_2d0 = (mach_header *)CONCAT71(pmStack_2d0._1_7_,uVar17);
    uStack_1e8 = (undefined **)pmStack_2c8;
    pmStack_2c8 = pmVar63;
    func_0x000109380ffc(&pmStack_2c8);
    if (plStack_158 == (long *)auStack_170) {
      lVar65 = 0x20;
    }
    else {
      if (plStack_158 == (long *)0x0) goto joined_r0x00010a0bacd8;
      lVar65 = 0x28;
    }
    (**(code **)(*plStack_158 + lVar65))();
  }
  else {
    if (cVar19 != '\0') goto LAB_10a0bac20;
LAB_10a0bac90:
    func_0x000109382360(&pmStack_2c0,0,0,0,1);
    pmVar63 = (mach_header *)uStack_1e8;
    uVar17 = auStack_1f0[0];
    auStack_1f0[0] = pmStack_2c0._0_1_;
    pmStack_2c0 = (mach_header *)CONCAT71(pmStack_2c0._1_7_,uVar17);
    uStack_1e8 = (undefined **)pmStack_2b8;
    pmStack_2b8 = pmVar63;
    func_0x000109380ffc(&pmStack_2b8);
  }
joined_r0x00010a0bacd8:
  if (iVar89 < 0) goto LAB_10a0bae58;
  lVar65 = *(long *)&param_3[7].ncmds;
  uVar56 = (*(long *)&param_3[7].flags - lVar65 >> 3) * -0x7063e7063e7063e7;
  if ((int)uVar56 <= iVar89) goto LAB_10a0bae58;
  if (uVar56 < uVar71 || uVar56 - uVar71 == 0) goto LAB_10a0c08b4;
  cVar19 = *(char *)(lVar65 + uVar71 * 0x148 + 0x67);
  if (cVar19 < '\0') {
    if (*(long *)(lVar65 + (uVar71 * 0x52 + 0x16) * 4) != 0) goto LAB_10a0bad44;
  }
  else if (cVar19 != '\0') {
LAB_10a0bad44:
    puStack_2d8 = (uint *)0x0;
    uStack_2e0 = 3;
    puVar61 = (uint *)(lVar65 + (uVar71 * 0x52 + 0x14) * 4);
    func_0x00010938229c();
    puVar26 = auStack_1f0;
    puStack_2d8 = puVar61;
    func_0x00010945a80c(puVar26,&DAT_10f637b7c);
    uVar17 = *puVar26;
    *puVar26 = uStack_2e0;
    puVar61 = *(uint **)(puVar26 + 8);
    uStack_2e0 = uVar17;
    *(uint **)(puVar26 + 8) = puStack_2d8;
    puStack_2d8 = puVar61;
    func_0x000109380ffc(&puStack_2d8);
  }
  lVar57 = (long)*(char *)(lVar65 + uVar71 * 0x148 + 0x7f);
  if (lVar57 < 0) {
    lVar57 = *(long *)(lVar65 + (uVar71 * 0x52 + 0x1c) * 4);
  }
  lVar70 = 0;
  if (lVar57 != 0) {
    lVar70 = 0x68;
  }
  puVar58 = (undefined8 *)(lVar65 + lVar70 + uVar71 * 0x148);
  if (*(char *)((long)puVar58 + 0x17) < '\0') {
    func_0x000107c3192c(auStack_140,*puVar58,puVar58[1]);
  }
  else {
    uStack_138 = (undefined **)puVar58[1];
    auStack_140 = (undefined1  [8])*puVar58;
    uStack_130 = (code *)puVar58[2];
  }
  uVar55 = (uint)(char)uStack_130._7_1_;
  pmVar63 = (mach_header *)uStack_138;
  if (-1 < (int)uVar55) {
    pmVar63 = (mach_header *)(ulong)uStack_130._7_1_;
  }
  if (pmVar63 != (mach_header *)0x0) {
    puStack_2e8 = (undefined8 *)0x0;
    uStack_2f0 = 3;
    puVar58 = (undefined8 *)auStack_140;
    func_0x00010938229c();
    puVar26 = auStack_1f0;
    puStack_2e8 = puVar58;
    func_0x00010945a80c(puVar26,&DAT_10f68f148);
    uVar17 = *puVar26;
    *puVar26 = uStack_2f0;
    puVar58 = *(undefined8 **)(puVar26 + 8);
    uStack_2f0 = uVar17;
    *(undefined8 **)(puVar26 + 8) = puStack_2e8;
    puStack_2e8 = puVar58;
    func_0x000109380ffc(&puStack_2e8);
    uVar55 = (uint)uStack_130._7_1_;
  }
  if ((uVar55 >> 7 & 1) != 0) {
    __ZdlPv(auStack_140);
  }
LAB_10a0bae58:
  func_0x00010945a80c(auStack_420,&UNK_10f6372a6);
  func_0x0001095b741c();
  func_0x000109380ffc(&uStack_1e8,(ulong)auStack_1f0 & 0xff);
  pmVar63 = pmStack_298;
  if (pmStack_298 != (mach_header *)0x0) {
    pdVar90 = &pmStack_298->cpusubtype;
    do {
      lVar65 = *(long *)pdVar90;
      cVar19 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
      if (bVar23) {
        *(long *)pdVar90 = lVar65 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar65 == 0) {
      (*(code *)(*(long ******)pmStack_298)[2])(pmStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pmVar63);
    }
  }
  uVar77 = uVar77 + 1;
  ppppplVar91 = *(long ******)&param_3[6].flags;
  uVar71 = ((long)*(long ******)(param_3 + 7) - (long)ppppplVar91 >> 5) * 0x6db6db6db6db6db7;
  if (uVar71 < uVar77 || uVar71 - uVar77 == 0) goto LAB_10a0baf20;
  goto LAB_10a0b9da8;
LAB_10a0bed88:
  uStack_1e8 = (undefined **)0x0;
  auStack_1f0 = (undefined1  [8])0x3f800000;
  uStack_1d8 = (mach_header *)0x0;
  uStack_1e0 = (mach_header *)0x3f80000000000000;
  uStack_1c8._0_4_ = 0x3f800000;
  uStack_1c8._4_4_ = 0;
  pdStack_1d0 = (dword *)0x0;
  lStack_1b8 = 0x3f80000000000000;
  plStack_1c0 = (long *)0x0;
  if (auVar59 != (undefined1  [8])0x0) {
    pmVar42 = (mach_header *)((long)auVar59 + uVar77 * 2 * 0x20);
    uStack_1e8 = *(undefined ***)&pmVar42->cpusubtype;
    auStack_1f0 = *(undefined1 (*) [8])pmVar42;
    uStack_1d8 = *(mach_header **)&pmVar42->flags;
    uStack_1e0 = *(mach_header **)&pmVar42->ncmds;
    uStack_1c8._0_4_ = pmVar42[1].cpusubtype;
    uStack_1c8._4_4_ = pmVar42[1].filetype;
    pdStack_1d0 = *(dword **)(pmVar42 + 1);
    lStack_1b8._0_4_ = pmVar42[1].flags;
    lStack_1b8._4_4_ = pmVar42[1].reserved;
    plStack_1c0 = *(long **)&pmVar42[1].ncmds;
  }
  FUN_10a0d09b4(auStack_140,*(long *)&pmVar79[1].cpusubtype + 0x168);
  pmStack_118 = (mach_header *)uStack_1e8;
  pmStack_120 = (mach_header *)auStack_1f0;
  pmStack_108 = uStack_1d8;
  auStack_110 = (undefined1  [8])uStack_1e0;
  dStack_f8 = (dword)uStack_1c8;
  dStack_f4 = uStack_1c8._4_4_;
  pdStack_100 = pdStack_1d0;
  lStack_e8 = lStack_1b8;
  plStack_f0 = plStack_1c0;
  func_0x00010a0d784c(auStack_210,auStack_140);
  if ((long)uStack_130 < 0) {
    __ZdlPv(auStack_140);
  }
  uVar77 = uVar77 + 1;
  lVar64 = *(long *)(lVar70 + ((long)iVar25 * 0x3e + 8) * 4);
  if ((ulong)(*(long *)(lVar70 + ((long)iVar25 * 0x3e + 10) * 4) - lVar64 >> 2) <= uVar77)
  goto code_r0x00010a0bee20;
  goto LAB_10a0bed1c;
code_r0x00010a0bee20:
  if (auStack_210 != (undefined1  [8])pmStack_208) {
    uVar44._0_4_ = pmVar63[1].cpusubtype;
    uVar44._4_4_ = pmVar63[1].filetype;
    FUN_10a0d78b8(auStack_140,uVar44);
    pmVar42 = (mach_header *)uStack_138;
    for (auVar94 = auStack_140; auVar94 != (undefined1  [8])pmVar42;
        auVar94 = (undefined1  [8])&((mach_header *)auVar94)->cpusubtype) {
      ppplVar45 = (*(long ******)auVar94)[0x4c][0x1c];
      if (ppplVar45 == (long ***)0x0) {
        pplVar85 = (long **)0x0;
      }
      else {
        (*(code *)(*ppplVar45)[0x12])();
        pplVar85 = *ppplVar45;
      }
      uVar55 = *(uint *)(pplVar85 + 0x26);
      if (uVar55 == 0xffffffff) {
LAB_10a0bef3c:
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f637370,&UNK_10f639641,0x17e,&UNK_10f6396c4);
        }
      }
      else {
        uVar77 = ((long)pplVar85[0x20] - (long)pplVar85[0x1f] >> 3) * 0x6db6db6db6db6db7;
        if (uVar77 < uVar55 || uVar77 - uVar55 == 0) {
          FUN_10ab725fc();
          goto LAB_10a0c08b4;
        }
        if (pplVar85[0x1f] == (long *)0x0) goto LAB_10a0bef3c;
        if (pplVar85 + 0xb != (long **)auStack_210) {
          FUN_10a0d8644();
        }
        ppppplVar91 = *(long ******)auVar94;
        uStack_1e8 = (undefined **)pmStack_218;
        auStack_1f0 = (undefined1  [8])pmStack_220;
        if (pmStack_218 != (mach_header *)0x0) {
          pdVar90 = &pmStack_218->ncmds;
          do {
            cVar18 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(pdVar90,0x10);
            if (bVar23) {
              *(long *)pdVar90 = *(long *)pdVar90 + 1;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
        }
        (*(code *)(*ppppplVar91)[0x36])(ppppplVar91,auStack_1f0);
        if ((mach_header *)uStack_1e8 != (mach_header *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (pplVar85[0xe] == pplVar85[0xf]) {
          FUN_10ab4a600(pplVar85);
        }
      }
    }
    if (auStack_140 != (undefined1  [8])0x0) {
      uStack_138 = (undefined **)auStack_140;
      __ZdlPv(auStack_140);
    }
  }
LAB_10a0befac:
  auStack_140 = (undefined1  [8])auStack_210;
  FUN_10a0d89d4(auStack_140);
  if (auVar59 != (undefined1  [8])0x0) {
    __ZdlPv(auVar59);
  }
LAB_10a0befc8:
  pmVar79 = *(mach_header **)&pmVar63->cpusubtype;
  pmVar81 = pmVar63;
  pmVar42 = pmStack_218;
  if (*(mach_header **)&pmVar63->cpusubtype == (mach_header *)0x0) {
    do {
      pmVar63 = *(mach_header **)&pmVar81->ncmds;
      bVar23 = *(mach_header **)pmVar63 != pmVar81;
      pmVar81 = pmVar63;
    } while (bVar23);
  }
  else {
    do {
      pmVar63 = pmVar79;
      pmVar79 = *(mach_header **)pmVar63;
    } while (*(mach_header **)pmVar63 != (mach_header *)0x0);
  }
  goto joined_r0x00010a0beb4c;
}



/* Entry: 10a0c10a4; end: 10a0c10eb;  */

long FUN_10a0c10a4(long param_1)

{
  long lStack_28;
  
  FUN_10a0d48d8(param_1 + 0x3b0);
  lStack_28 = param_1 + 0x398;
  func_0x00010a0d494c(&lStack_28);
  FUN_10a0d41a4(param_1 + 0x30);
  return param_1;
}



/* Entry: 10a0c10ec; end: 10a0c32e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0c2a84) */
/* WARNING: Removing unreachable block (ram,0x00010a0c307c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a0c10ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 ******param_5,long param_6,long *param_7,long *param_8,byte *param_9,
                  long *param_10)

{
  char cVar1;
  undefined8 ******ppppppuVar2;
  double dVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  bool bVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong *puVar22;
  undefined8 *******pppppppuVar23;
  long *plVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  undefined *puVar28;
  undefined *puVar29;
  long *plVar30;
  undefined8 uVar31;
  float *pfVar32;
  undefined8 *extraout_x8;
  long lVar33;
  ulong *unaff_x20;
  undefined **ppuVar34;
  ulong *unaff_x21;
  ulong uVar35;
  undefined8 uVar36;
  int *piVar37;
  ulong *unaff_x22;
  int iVar38;
  undefined8 unaff_x23;
  undefined **ppuVar39;
  ulong uVar40;
  byte bVar41;
  undefined **ppuVar42;
  ulong uVar43;
  undefined **ppuVar44;
  undefined **ppuVar45;
  undefined **unaff_x27;
  undefined8 *unaff_x28;
  undefined **ppuVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined *puVar50;
  float fVar51;
  undefined4 uVar52;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 **ppuStack_690;
  code *pcStack_688;
  long *plStack_678;
  long *plStack_670;
  long *plStack_668;
  long *plStack_660;
  undefined1 auStack_658 [640];
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined **ppuStack_3c8;
  ulong *puStack_3c0;
  undefined8 uStack_3b8;
  ulong *puStack_3b0;
  ulong *puStack_3a8;
  ulong *puStack_3a0;
  long *plStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 *******pppppppuStack_360;
  ulong *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  ulong uStack_318;
  undefined *puStack_310;
  ulong uStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  undefined **ppuStack_2f0;
  float *pfStack_2e8;
  undefined4 uStack_2dc;
  undefined8 ******ppppppuStack_2d8;
  ulong *puStack_2d0;
  ulong *puStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  byte *pbStack_2b0;
  long *plStack_2a8;
  ulong uStack_2a0;
  long *plStack_298;
  undefined8 *******pppppppuStack_290;
  undefined8 ******ppppppuStack_288;
  ulong *puStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long *plStack_258;
  long lStack_250;
  long *plStack_248;
  byte abStack_240 [8];
  long lStack_238;
  ulong *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong *puStack_218;
  ulong uStack_210;
  ulong uStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined2 uStack_1f4;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  undefined1 uStack_1f0;
  undefined5 uStack_1ef;
  undefined1 uStack_1ea;
  byte bStack_1e9;
  undefined8 uStack_1e8;
  float fStack_1d4;
  undefined8 *******pppppppuStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  undefined1 uStack_1c0;
  byte bStack_1b9;
  long alStack_1b0 [3];
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  undefined1 auStack_180 [8];
  undefined8 *apuStack_178 [7];
  float fStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  byte bStack_129;
  undefined8 uStack_128;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined1 uStack_d3;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  undefined7 uStack_b8;
  undefined4 uStack_b1;
  undefined1 uStack_ad;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  uVar52 = (undefined4)((ulong)param_3 >> 0x20);
  fVar51 = (float)param_3;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = (undefined8 *****)0x0;
  param_5[1] = (undefined8 *****)0x0;
  param_5[2] = (undefined8 *****)0x0;
  puVar28 = (undefined *)0x0;
  puVar29 = (undefined *)0x0;
  plVar30 = (long *)0x2;
  ppppppuStack_2d8 = param_5;
  plStack_2c0 = param_10;
  lStack_2b8 = param_6;
  pbStack_2b0 = param_9;
  plStack_2a8 = param_7;
  plStack_298 = param_8;
  func_0x000109382360(abStack_240,0,0,0,2);
  pbVar12 = pbStack_2b0;
  func_0x00010945a80c(pbStack_2b0,&DAT_10f414f99);
  bVar41 = *pbVar12;
  uVar27 = (uint)bVar41;
  *pbVar12 = abStack_240[0];
  lVar33 = *(long *)(pbVar12 + 8);
  *(long *)(pbVar12 + 8) = lStack_238;
  plVar13 = &lStack_238;
  abStack_240[0] = bVar41;
  lStack_238 = lVar33;
  func_0x000109380ffc();
  lVar33 = *plStack_2a8;
  if (lVar33 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar28 = &UNK_10f63799d;
      puVar29 = &UNK_10f6379d7;
      plVar13 = (long *)0x0;
      uVar27 = 1;
      plVar30 = (long *)0x1df;
      func_0x00010ae06f08(0,1,&UNK_10f63799d,&UNK_10f6379d7,0x1df,&UNK_10f637b2e);
    }
  }
  else {
    if (*(undefined8 **)(lVar33 + 0x228) == *(undefined8 **)(lVar33 + 0x230)) {
      uStack_2dc = 0;
    }
    else {
      uStack_2dc = 0;
      if ((*plStack_2c0 != 0) &&
         (plVar13 = (long *)**(undefined8 **)(lVar33 + 0x228), plVar13 != (long *)0x0)) {
        FUN_10a0c7c0c();
        uStack_2dc = SUB84(plVar13,0);
      }
    }
    unaff_x22 = *(ulong **)(lStack_2b8 + 0x90);
    puStack_2c8 = *(ulong **)(lStack_2b8 + 0x98);
    if (unaff_x22 != puStack_2c8) {
      uStack_2a0 = lStack_2b8 + 0x30;
      unaff_x21 = &uStack_210;
      puStack_358 = &uStack_228;
      pppppppuStack_360 = &ppppppuStack_1c8;
      pfStack_2e8 = (float *)((ulong)&uStack_a0 | 4);
      uStack_328 = 0x8000000000000019;
      uStack_330 = 0x17;
      uStack_338 = 0x8000000000000020;
      uStack_340 = 0x1a;
      uStack_348 = 0x8000000000000028;
      uStack_350 = 0x21;
      puStack_2d0 = unaff_x21;
      do {
        plVar13 = (long *)*plStack_2c0;
        if (plVar13 == (long *)0x0) {
          FUN_10ab45900(&lStack_190,*plStack_2a8,1);
          lVar33 = lStack_190;
          if (*(char *)((long)unaff_x22 + 0x17) < '\0') {
            func_0x000107c3192c(&uStack_270,*unaff_x22,unaff_x22[1]);
          }
          else {
            uStack_268 = unaff_x22[1];
            uStack_270 = *unaff_x22;
            uStack_260 = unaff_x22[2];
          }
          if (*(char *)(lVar33 + 0x6f) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar33 + 0x58));
          }
          *(ulong *)(lVar33 + 0x68) = uStack_260;
          *(ulong *)(lVar33 + 0x60) = uStack_268;
          *(ulong *)(lVar33 + 0x58) = uStack_270;
          uStack_260 = uStack_260 & 0xffffffffffffff;
          uStack_270 = uStack_270 & 0xffffffffffffff00;
          if ((*(undefined8 **)(lStack_190 + 0x228) != *(undefined8 **)(lStack_190 + 0x230)) &&
             (unaff_x20 = (ulong *)**(undefined8 **)(lStack_190 + 0x228), unaff_x20 != (ulong *)0x0)
             ) {
            puVar15 = unaff_x20;
            FUN_10a0c7c0c();
            pppppppuStack_290 = (undefined8 *******)CONCAT44(pppppppuStack_290._4_4_,(int)puVar15);
            *unaff_x21 = 0;
            unaff_x21[1] = 0;
            puVar15 = unaff_x20 + 0x40;
            puVar22 = unaff_x20 + 0x41;
            puStack_218 = unaff_x21;
            FUN_10a0da1b8(puVar15,unaff_x20[0x41]);
            unaff_x20[0x40] = (ulong)puStack_218;
            unaff_x20[0x41] = uStack_210;
            unaff_x20[0x42] = uStack_208;
            if (uStack_208 == 0) {
              *puVar15 = (ulong)puVar22;
              uVar35 = uStack_210;
            }
            else {
              *(ulong **)(uStack_210 + 0x10) = puVar22;
              *unaff_x21 = 0;
              unaff_x21[1] = 0;
              uVar35 = 0;
              puStack_218 = unaff_x21;
            }
            puStack_278 = unaff_x20;
            FUN_10a0da1b8(&puStack_218,uVar35);
            if ((int)pppppppuStack_290 == 0) {
              ppuStack_2f0 = &PTR_DAT_110ba1698;
              ppuVar18 = &PTR_DAT_110ba1678;
              ppuVar39 = &PTR_DAT_110ba1638;
              ppuVar42 = &PTR_DAT_110ba1618;
              ppuVar44 = &PTR_DAT_110ba15e8;
              ppuVar45 = &PTR_DAT_110ba15c8;
              unaff_x27 = &PTR_DAT_110ba15a8;
              ppuVar46 = &PTR_DAT_110ba1568;
              ppuVar34 = &PTR_DAT_110ba1548;
            }
            else {
              if ((bRam00000001137e95e0 & 1) == 0) {
                iVar38 = 0x137e95e0;
                ___cxa_guard_acquire();
                if (iVar38 != 0) {
                  fStack_140 = 48.326435;
                  uStack_13c = 0x4c;
                  uStack_13b = 0x45;
                  uStack_13a = 0x5f;
                  uStack_139 = 0x4c;
                  uStack_138._0_2_ = 0x4749;
                  uStack_138._2_1_ = 0x48;
                  uStack_138._3_1_ = 0x54;
                  uStack_138._4_1_ = 0x49;
                  uStack_138._5_1_ = 0x4e;
                  uStack_138._6_1_ = 0x47;
                  uStack_138._7_1_ = 0;
                  bStack_129 = 0xf;
                  uStack_128 = 0;
                  func_0x000107c2b080(&fStack_140);
                  FUN_10a0db864(auStack_120,&UNK_10f639778,0x17);
                  uStack_f0 = 0x53544847;
                  uStack_f8 = 0x494c5f5443455249;
                  uStack_100 = 0x445f454c42414e45;
                  uStack_ec = 0;
                  uStack_e9 = 0x14;
                  uStack_e8 = 0;
                  func_0x000107c2b080(&uStack_100);
                  uStack_e0 = 0x4c42414e45;
                  uStack_db = 0x455f45;
                  uStack_d8 = 0x50414d564e;
                  uStack_d3 = 0;
                  uStack_c9 = 0xd;
                  uStack_c8 = 0;
                  func_0x000107c2b080(&uStack_e0);
                  uStack_b8 = 0x50414d5f454e4f;
                  uStack_b1 = 0x474e4950;
                  _uStack_c0 = 0x545f454c42414e45;
                  uStack_ad = 0;
                  cStack_a9 = '\x13';
                  uStack_a8 = 0;
                  func_0x000107c2b080(&uStack_c0);
                  FUN_10a0d9f14(0x1137e95f0,&fStack_140,5,&fStack_200);
                  lVar33 = 0;
                  do {
                    if ((&cStack_a9)[lVar33] < '\0') {
                      __ZdlPv(*(undefined8 *)((long)&uStack_c0 + lVar33));
                    }
                    lVar33 = lVar33 + -0x20;
                  } while (lVar33 != -0xa0);
                  ___cxa_guard_release(0x1137e95e0);
                }
              }
              FUN_10a0e3500(&puStack_230,0x1137e95f0);
              puVar16 = puStack_278;
              FUN_10a0da1b8(puVar15,puStack_278[0x41]);
              puVar16[0x40] = (ulong)puStack_230;
              puVar16[0x41] = uStack_228;
              puVar16[0x42] = uStack_220;
              if (uStack_220 == 0) {
                *puVar15 = (ulong)puVar22;
                uVar35 = uStack_228;
              }
              else {
                *(ulong **)(uStack_228 + 0x10) = puVar22;
                puStack_230 = puStack_358;
                *puStack_358 = 0;
                puStack_358[1] = 0;
                uVar35 = 0;
              }
              FUN_10a0da1b8(&puStack_230,uVar35);
              ppuStack_2f0 = &PTR_DAT_110ba1688;
              ppuVar18 = &PTR_DAT_110ba1668;
              ppuVar39 = &PTR_DAT_110ba1628;
              ppuVar42 = &PTR_DAT_110ba1608;
              ppuVar44 = &PTR_DAT_110ba15d8;
              ppuVar45 = &PTR_DAT_110ba15b8;
              unaff_x27 = &PTR_DAT_110ba1598;
              ppuVar46 = &PTR_DAT_110ba1558;
              ppuVar34 = &PTR_DAT_110ba1538;
            }
            puVar16 = (ulong *)0x180;
            __Znwm();
            puStack_300 = unaff_x22 + 0xa7;
            puVar22 = unaff_x22 + 0xaa;
            *puVar16 = (ulong)puStack_300;
            puVar16[1] = (ulong)(unaff_x22 + 0x1e);
            puVar29 = ppuVar34[1];
            puVar28 = *ppuVar34;
            puVar16[3] = 0x10;
            puVar16[2] = (ulong)&DAT_10f4151f9;
            puVar16[5] = (ulong)puVar29;
            puVar16[4] = (ulong)puVar28;
            puVar28 = *ppuVar46;
            puVar16[7] = (ulong)ppuVar46[1];
            puVar16[6] = (ulong)puVar28;
            puVar16[9] = 0xf;
            puVar16[8] = (ulong)&DAT_10f6397f3;
            puVar16[0xb] = 0x1d;
            puVar16[10] = (ulong)&DAT_10f639803;
            puVar16[0xc] = (ulong)puStack_300;
            puVar16[0xd] = (ulong)(unaff_x22 + 0x39);
            puVar29 = unaff_x27[1];
            puVar28 = *unaff_x27;
            uStack_308 = 0x18;
            puStack_310 = &DAT_10f638b60;
            puVar16[0xf] = 0x18;
            puVar16[0xe] = (ulong)&DAT_10f638b60;
            puVar16[0x11] = (ulong)puVar29;
            puVar16[0x10] = (ulong)puVar28;
            puVar28 = *ppuVar45;
            puVar50 = ppuVar44[1];
            puVar29 = *ppuVar44;
            puVar16[0x13] = (ulong)ppuVar45[1];
            puVar16[0x12] = (ulong)puVar28;
            puVar16[0x15] = (ulong)puVar50;
            puVar16[0x14] = (ulong)puVar29;
            uStack_318 = 0x2b;
            puStack_320 = &DAT_10f63989b;
            puVar16[0x17] = 0x2b;
            puVar16[0x16] = (ulong)&DAT_10f63989b;
            puVar16[0x18] = (ulong)puVar22;
            puVar16[0x19] = (ulong)(unaff_x22 + 0x6b);
            puVar29 = ppuVar42[1];
            puVar28 = *ppuVar42;
            puVar16[0x1b] = 0xd;
            puVar16[0x1a] = (ulong)&DAT_10f638aee;
            puVar16[0x1d] = (ulong)puVar29;
            puVar16[0x1c] = (ulong)puVar28;
            puVar28 = *ppuVar39;
            puVar16[0x1f] = (ulong)ppuVar39[1];
            puVar16[0x1e] = (ulong)puVar28;
            puVar16[0x21] = 0x10;
            puVar16[0x20] = (ulong)&DAT_10f6398ef;
            puVar16[0x23] = 0x1f;
            puVar16[0x22] = (ulong)&DAT_10f639900;
            puVar16[0x24] = (ulong)puVar22;
            puVar16[0x25] = (ulong)(unaff_x22 + 0x9e);
            puVar29 = ppuVar18[1];
            puVar28 = *ppuVar18;
            puVar16[0x27] = 0xf;
            puVar16[0x26] = (ulong)&DAT_10f4150d4;
            puVar16[0x29] = (ulong)puVar29;
            puVar16[0x28] = (ulong)puVar28;
            puVar28 = *ppuStack_2f0;
            puVar29 = &DAT_10f63994e;
            puVar16[0x2b] = (ulong)ppuStack_2f0[1];
            puVar16[0x2a] = (ulong)puVar28;
            puVar16[0x2d] = 0xf;
            puVar16[0x2c] = (ulong)&DAT_10f63994e;
            fVar47 = 1.12215015e-29;
            fVar48 = 1.4013e-45;
            puVar16[0x2f] = 0x21;
            puVar16[0x2e] = (ulong)&DAT_10f63995e;
            puStack_2f8 = puVar22;
            if (((ulong)pppppppuStack_290 & 1) == 0) {
              puVar17 = (ulong *)0x300;
              __Znwm();
              puVar17[0x30] = (ulong)puVar22;
              puVar17[0x31] = (ulong)(unaff_x22 + 0x85);
              puVar17[0x33] = 0x10;
              puVar17[0x32] = (ulong)&DAT_10f638afc;
              puVar17[0x35] = uStack_308;
              puVar17[0x34] = (ulong)puStack_310;
              puVar29 = &DAT_10f63987d;
              puVar17[0x37] = 0x13;
              puVar17[0x36] = (ulong)&DAT_10f639980;
              puVar17[0x39] = 0x1d;
              puVar17[0x38] = (ulong)&DAT_10f63987d;
              fVar47 = SUB84(puStack_320,0);
              fVar48 = (float)((ulong)puStack_320 >> 0x20);
              puVar17[0x3b] = uStack_318;
              puVar17[0x3a] = (ulong)puStack_320;
              _memcpy();
              __ZdlPv(puVar16);
              puVar22 = puVar17 + 0x3c;
              ppuStack_2f0 = (undefined **)puVar17;
            }
            else {
              puVar22 = puVar16 + 0x30;
              puVar17 = puVar16;
              ppuStack_2f0 = (undefined **)puVar16;
            }
            do {
              uVar35 = puVar17[3];
              if (0x7ffffffffffffff7 < uVar35) {
                func_0x000109ffde50();
                goto LAB_10a0c3050;
              }
              uVar40 = *puVar17;
              uVar43 = puVar17[2];
              if (uVar35 < 0x17) {
                bStack_129 = (byte)uVar35;
                ppuVar18 = (undefined **)&fStack_140;
                if (uVar35 != 0) goto LAB_10a0c18b8;
              }
              else {
                unaff_x27 = (undefined **)0x19;
                if ((uVar35 | 7) != 0x17) {
                  unaff_x27 = (undefined **)((uVar35 | 7) + 1);
                }
                ppuVar18 = unaff_x27;
                __Znwm();
                bStack_129 = (byte)((ulong)unaff_x27 >> 0x38) | 0x80;
                uStack_130 = SUB81(unaff_x27,0);
                uStack_12f = (undefined1)((ulong)unaff_x27 >> 8);
                uStack_12e = (undefined1)((ulong)unaff_x27 >> 0x10);
                uStack_12d = (undefined1)((ulong)unaff_x27 >> 0x18);
                uStack_12c = (undefined1)((ulong)unaff_x27 >> 0x20);
                uStack_12b = (undefined1)((ulong)unaff_x27 >> 0x28);
                uStack_12a = (undefined1)((ulong)unaff_x27 >> 0x30);
                fStack_140 = SUB84(ppuVar18,0);
                uStack_13c = (undefined1)((ulong)ppuVar18 >> 0x20);
                uStack_13b = (undefined1)((ulong)ppuVar18 >> 0x28);
                uStack_13a = (undefined1)((ulong)ppuVar18 >> 0x30);
                uStack_139 = (undefined1)((ulong)ppuVar18 >> 0x38);
                uStack_138._0_2_ = (undefined2)uVar35;
                uStack_138._2_1_ = (undefined1)(uVar35 >> 0x10);
                uStack_138._3_1_ = (undefined1)(uVar35 >> 0x18);
                uStack_138._4_1_ = (undefined1)(uVar35 >> 0x20);
                uStack_138._5_1_ = (undefined1)(uVar35 >> 0x28);
                uStack_138._6_1_ = (undefined1)(uVar35 >> 0x30);
                uStack_138._7_1_ = (undefined1)(uVar35 >> 0x38);
LAB_10a0c18b8:
                _memmove(ppuVar18,uVar43,uVar35);
              }
              *(undefined1 *)((long)ppuVar18 + uVar35) = 0;
              FUN_10a0e3358(uVar40,&fStack_140);
              uVar35 = *puVar17;
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              if (uVar35 + 8 != uVar40) {
                uVar35 = puVar17[3];
                if (0x7ffffffffffffff7 < uVar35) {
                  func_0x000109ffde50();
                  goto LAB_10a0c3050;
                }
                uVar40 = *puVar17;
                uVar43 = puVar17[2];
                if (uVar35 < 0x17) {
                  bStack_129 = (byte)uVar35;
                  puVar19 = (undefined8 *)&fStack_140;
                  if (uVar35 != 0) goto LAB_10a0c195c;
                }
                else {
                  puVar20 = (undefined8 *)0x19;
                  if ((uVar35 | 7) != 0x17) {
                    puVar20 = (undefined8 *)((uVar35 | 7) + 1);
                  }
                  puVar19 = puVar20;
                  __Znwm();
                  bStack_129 = (byte)((ulong)puVar20 >> 0x38) | 0x80;
                  uStack_130 = SUB81(puVar20,0);
                  uStack_12f = (undefined1)((ulong)puVar20 >> 8);
                  uStack_12e = (undefined1)((ulong)puVar20 >> 0x10);
                  uStack_12d = (undefined1)((ulong)puVar20 >> 0x18);
                  uStack_12c = (undefined1)((ulong)puVar20 >> 0x20);
                  uStack_12b = (undefined1)((ulong)puVar20 >> 0x28);
                  uStack_12a = (undefined1)((ulong)puVar20 >> 0x30);
                  fStack_140 = SUB84(puVar19,0);
                  uStack_13c = (undefined1)((ulong)puVar19 >> 0x20);
                  uStack_13b = (undefined1)((ulong)puVar19 >> 0x28);
                  uStack_13a = (undefined1)((ulong)puVar19 >> 0x30);
                  uStack_139 = (undefined1)((ulong)puVar19 >> 0x38);
                  uStack_138._0_2_ = (undefined2)uVar35;
                  uStack_138._2_1_ = (undefined1)(uVar35 >> 0x10);
                  uStack_138._3_1_ = (undefined1)(uVar35 >> 0x18);
                  uStack_138._4_1_ = (undefined1)(uVar35 >> 0x20);
                  uStack_138._5_1_ = (undefined1)(uVar35 >> 0x28);
                  uStack_138._6_1_ = (undefined1)(uVar35 >> 0x30);
                  uStack_138._7_1_ = (undefined1)(uVar35 >> 0x38);
LAB_10a0c195c:
                  _memmove(puVar19,uVar43,uVar35);
                }
                *(undefined1 *)((long)puVar19 + uVar35) = 0;
                FUN_10a0d9464(uVar40,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                uVar35 = uVar40;
                FUN_10a0c6e94();
                FUN_10a0db864(&fStack_200,puVar17[4],puVar17[5]);
                iVar38 = (int)uVar35;
                lVar33 = *plStack_298;
                if ((ulong)(plStack_298[1] - lVar33 >> 4) <= (ulong)(long)iVar38) {
                  FUN_10a0da28c();
                  goto LAB_10a0c3050;
                }
                FUN_10a0d94a0(&fStack_140,uStack_2a0,uVar35);
                plVar30 = (long *)0xd;
                FUN_10a3368d0(puStack_278,&fStack_200,lVar33 + (long)iVar38 * 0x10,&fStack_140,0xd);
                if ((char)bStack_1e9 < '\0') {
                  __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                }
                uVar43 = puVar17[6];
                unaff_x27 = (undefined **)puVar17[7];
                func_0x000107c2b054(&fStack_200,&UNK_10f41520a);
                lVar33 = uVar40 + 0x38;
                func_0x00010a0dc34c(lVar33,&fStack_200);
                if ((char)bStack_1e9 < '\0') {
                  __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                }
                uVar8 = uStack_1f1;
                uVar6 = uStack_1f2;
                uVar4 = uStack_1f4;
                fVar47 = fStack_1f8;
                bVar41 = (byte)unaff_x27;
                uStack_1f2 = (undefined1)((ulong)unaff_x27 >> 0x30);
                uVar7 = uStack_1f2;
                uStack_1f1 = (undefined1)((ulong)unaff_x27 >> 0x38);
                uVar9 = uStack_1f1;
                uStack_1f4 = (undefined2)((ulong)unaff_x27 >> 0x20);
                uVar5 = uStack_1f4;
                fStack_1f8 = SUB84(unaff_x27,0);
                fVar48 = fStack_1f8;
                fStack_1f8 = fVar47;
                uStack_1f4 = uVar4;
                uStack_1f2 = uVar6;
                uStack_1f1 = uVar8;
                if (uVar40 + 0x40 == lVar33) {
                  if ((undefined **)0x7ffffffffffffff7 < unaff_x27) goto LAB_10a0c3020;
                  if (unaff_x27 < (undefined **)0x17) {
                    puVar19 = (undefined8 *)&fStack_200;
                    bStack_1e9 = bVar41;
                    if (unaff_x27 != (undefined **)0x0) goto LAB_10a0c1b60;
                  }
                  else {
                    puVar20 = (undefined8 *)0x19;
                    if (((ulong)unaff_x27 | 7) != 0x17) {
                      puVar20 = (undefined8 *)(((ulong)unaff_x27 | 7) + 1);
                    }
                    puVar19 = puVar20;
                    __Znwm();
                    bStack_1e9 = (byte)((ulong)puVar20 >> 0x38) | 0x80;
                    uStack_1f0 = SUB81(puVar20,0);
                    uStack_1ef = (undefined5)((ulong)puVar20 >> 8);
                    uStack_1ea = (undefined1)((ulong)puVar20 >> 0x30);
                    fStack_200 = SUB84(puVar19,0);
                    fStack_1fc = (float)((ulong)puVar19 >> 0x20);
                    fStack_1f8 = fVar48;
                    uStack_1f4 = uVar5;
                    uStack_1f2 = uVar7;
                    uStack_1f1 = uVar9;
LAB_10a0c1b60:
                    _memmove(puVar19,uVar43,unaff_x27);
                  }
                  *(undefined1 *)((long)puVar19 + (long)unaff_x27) = 0;
                  puVar20 = (undefined8 *)&fStack_200;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (puVar20,&DAT_10f62b058,1);
                  uVar36 = *puVar20;
                  uStack_a0._0_7_ = (undefined7)puVar20[1];
                  uVar31 = *(undefined8 *)((long)puVar20 + 0xf);
                  uStack_a0._7_1_ = (undefined1)uVar31;
                  fStack_98 = (float)((ulong)uVar31 >> 8);
                  uStack_94 = (undefined2)((ulong)uVar31 >> 0x28);
                  uStack_92 = (undefined1)((ulong)uVar31 >> 0x38);
                  bVar41 = *(byte *)((long)puVar20 + 0x17);
                  puVar20[1] = 0;
                  puVar20[2] = 0;
                  *puVar20 = 0;
                }
                else {
                  if ((undefined **)0x7ffffffffffffff7 < unaff_x27) {
LAB_10a0c3020:
                    func_0x000109ffde50();
                    goto LAB_10a0c3050;
                  }
                  if (unaff_x27 < (undefined **)0x17) {
                    puVar19 = (undefined8 *)&fStack_200;
                    bStack_1e9 = bVar41;
                    if (unaff_x27 != (undefined **)0x0) goto LAB_10a0c1abc;
                  }
                  else {
                    puVar20 = (undefined8 *)0x19;
                    if (((ulong)unaff_x27 | 7) != 0x17) {
                      puVar20 = (undefined8 *)(((ulong)unaff_x27 | 7) + 1);
                    }
                    puVar19 = puVar20;
                    __Znwm();
                    bStack_1e9 = (byte)((ulong)puVar20 >> 0x38) | 0x80;
                    uStack_1f0 = SUB81(puVar20,0);
                    uStack_1ef = (undefined5)((ulong)puVar20 >> 8);
                    uStack_1ea = (undefined1)((ulong)puVar20 >> 0x30);
                    fStack_200 = SUB84(puVar19,0);
                    fStack_1fc = (float)((ulong)puVar19 >> 0x20);
                    fStack_1f8 = fVar48;
                    uStack_1f4 = uVar5;
                    uStack_1f2 = uVar7;
                    uStack_1f1 = uVar9;
LAB_10a0c1abc:
                    _memmove(puVar19,uVar43,unaff_x27);
                  }
                  *(undefined1 *)((long)puVar19 + (long)unaff_x27) = 0;
                  __ZNSt3__19to_stringEi(&pppppppuStack_1d0,(int)*(double *)(lVar33 + 0x38));
                  ppppppuVar2 = ppppppuStack_1c8;
                  pppppppuVar23 = pppppppuStack_1d0;
                  if (-1 < (char)bStack_1b9) {
                    ppppppuVar2 = (undefined8 ******)(ulong)bStack_1b9;
                    pppppppuVar23 = &pppppppuStack_1d0;
                  }
                  puVar20 = (undefined8 *)&fStack_200;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (puVar20,pppppppuVar23,ppppppuVar2);
                  uVar36 = *puVar20;
                  uStack_a0._0_7_ = (undefined7)puVar20[1];
                  uVar31 = *(undefined8 *)((long)puVar20 + 0xf);
                  uStack_a0._7_1_ = (undefined1)uVar31;
                  fStack_98 = (float)((ulong)uVar31 >> 8);
                  uStack_94 = (undefined2)((ulong)uVar31 >> 0x28);
                  uStack_92 = (undefined1)((ulong)uVar31 >> 0x38);
                  bVar41 = *(byte *)((long)puVar20 + 0x17);
                  puVar20[1] = 0;
                  puVar20[2] = 0;
                  *puVar20 = 0;
                  if ((char)bStack_1b9 < '\0') {
                    __ZdlPv(pppppppuStack_1d0);
                  }
                }
                if ((char)bStack_1e9 < '\0') {
                  __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                }
                fStack_140 = (float)uVar36;
                uStack_13c = (undefined1)((ulong)uVar36 >> 0x20);
                uStack_13b = (undefined1)((ulong)uVar36 >> 0x28);
                uStack_13a = (undefined1)((ulong)uVar36 >> 0x30);
                uStack_139 = (undefined1)((ulong)uVar36 >> 0x38);
                uStack_138._0_2_ = (undefined2)(undefined7)uStack_a0;
                uStack_138._2_1_ = (undefined1)((uint7)(undefined7)uStack_a0 >> 0x10);
                uStack_138._3_1_ = (undefined1)((uint7)(undefined7)uStack_a0 >> 0x18);
                uStack_138._4_1_ = (undefined1)((uint7)(undefined7)uStack_a0 >> 0x20);
                uStack_138._5_1_ = (undefined1)((uint7)(undefined7)uStack_a0 >> 0x28);
                uStack_138._6_1_ = (undefined1)((uint7)(undefined7)uStack_a0 >> 0x30);
                uStack_138._7_1_ = uStack_a0._7_1_;
                uStack_130 = SUB41(fStack_98,0);
                uStack_12f = (undefined1)((uint)fStack_98 >> 8);
                uStack_12e = (undefined1)((uint)fStack_98 >> 0x10);
                uStack_12d = (undefined1)((uint)fStack_98 >> 0x18);
                uStack_12c = (undefined1)uStack_94;
                uStack_12b = (undefined1)((ushort)uStack_94 >> 8);
                uStack_12a = uStack_92;
                uStack_128 = 0;
                bStack_129 = bVar41;
                func_0x000107c2b080(&fStack_140);
                FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                uVar40 = puVar17[9];
                if (0x7ffffffffffffff7 < uVar40) {
                  func_0x000109ffde50();
                  goto LAB_10a0c3050;
                }
                uVar43 = puVar17[8];
                if (uVar40 < 0x17) {
                  bStack_1e9 = (byte)uVar40;
                  ppuVar18 = (undefined **)&fStack_200;
                  if (uVar40 != 0) goto LAB_10a0c1c54;
                }
                else {
                  unaff_x27 = (undefined **)0x19;
                  if ((uVar40 | 7) != 0x17) {
                    unaff_x27 = (undefined **)((uVar40 | 7) + 1);
                  }
                  ppuVar18 = unaff_x27;
                  __Znwm();
                  bStack_1e9 = (byte)((ulong)unaff_x27 >> 0x38) | 0x80;
                  fStack_1f8 = (float)uVar40;
                  uStack_1f4 = (undefined2)(uVar40 >> 0x20);
                  uStack_1f2 = (undefined1)(uVar40 >> 0x30);
                  uStack_1f1 = (undefined1)(uVar40 >> 0x38);
                  uStack_1f0 = SUB81(unaff_x27,0);
                  uStack_1ef = (undefined5)((ulong)unaff_x27 >> 8);
                  uStack_1ea = (undefined1)((ulong)unaff_x27 >> 0x30);
                  fStack_200 = SUB84(ppuVar18,0);
                  fStack_1fc = (float)((ulong)ppuVar18 >> 0x20);
LAB_10a0c1c54:
                  _memmove(ppuVar18,uVar43,uVar40);
                }
                *(undefined1 *)((long)ppuVar18 + uVar40) = 0;
                uStack_138._0_2_ = SUB42(fStack_1f8,0);
                uStack_138._2_1_ = (undefined1)((uint)fStack_1f8 >> 0x10);
                uStack_138._3_1_ = (undefined1)((uint)fStack_1f8 >> 0x18);
                uStack_138._4_1_ = (undefined1)uStack_1f4;
                uStack_138._5_1_ = (undefined1)((ushort)uStack_1f4 >> 8);
                uStack_138._6_1_ = uStack_1f2;
                uStack_138._7_1_ = uStack_1f1;
                fStack_140 = fStack_200;
                uStack_13c = SUB41(fStack_1fc,0);
                uStack_13b = (undefined1)((uint)fStack_1fc >> 8);
                uStack_13a = (undefined1)((uint)fStack_1fc >> 0x10);
                uStack_139 = (undefined1)((uint)fStack_1fc >> 0x18);
                uStack_130 = uStack_1f0;
                uStack_12f = (undefined1)uStack_1ef;
                uStack_12e = (undefined1)((uint5)uStack_1ef >> 8);
                uStack_12d = (undefined1)((uint5)uStack_1ef >> 0x10);
                uStack_12c = (undefined1)((uint5)uStack_1ef >> 0x18);
                uStack_12b = (undefined1)((uint5)uStack_1ef >> 0x20);
                uStack_12a = uStack_1ea;
                bStack_129 = bStack_1e9;
                uStack_128 = 0;
                fVar47 = fStack_200;
                fVar48 = fStack_1fc;
                func_0x000107c2b080(&fStack_140);
                FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                if (((ulong)pppppppuStack_290 & 1) == 0) {
                  uVar40 = puVar17[1];
                  bStack_129 = 0x15;
                  fVar47 = 1.5152443e+19;
                  fVar48 = 7.871993e+31;
                  uStack_138._0_2_ = 0x7275;
                  uStack_138._2_1_ = 0x65;
                  uStack_138._3_1_ = 0x5f;
                  uStack_138._4_1_ = 0x74;
                  fStack_140 = 1.5152443e+19;
                  uStack_13c = 0x74;
                  uStack_13b = 0x65;
                  uStack_13a = 0x78;
                  uStack_139 = 0x74;
                  uStack_138._5_1_ = 0x72;
                  uStack_138._6_1_ = 0x61;
                  uStack_138._7_1_ = 0x6e;
                  uStack_130 = 0x73;
                  uStack_12f = 0x66;
                  uStack_12e = 0x6f;
                  uStack_12d = 0x72;
                  uStack_12c = 0x6d;
                  uStack_12b = 0;
                  func_0x00010a0dc2d0(uVar40,&fStack_140);
                  if ((char)bStack_129 < '\0') {
                    __ZdlPv(CONCAT17(uStack_139,
                                     CONCAT16(uStack_13a,
                                              CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140))))
                           );
                  }
                  if (puVar17[1] + 8 != uVar40) {
                    FUN_10a0db864(&fStack_140,&UNK_10f6399b7,0x18);
                    FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                    if ((char)bStack_129 < '\0') {
                      __ZdlPv(CONCAT17(uStack_139,
                                       CONCAT16(uStack_13a,
                                                CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140))
                                               )));
                    }
                    FUN_10a0db864(&fStack_140,puVar17[10],puVar17[0xb]);
                    FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                    if ((char)bStack_129 < '\0') {
                      __ZdlPv(CONCAT17(uStack_139,
                                       CONCAT16(uStack_13a,
                                                CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140))
                                               )));
                    }
                    FUN_10a0d95f4(uVar40 + 0x38,puStack_278,puVar17[4],puVar17[5]);
                  }
                }
                if (((puVar17[3] == 0x18) &&
                    (plVar13 = (long *)puVar17[2],
                    (*plVar13 == 0x63696c6c6174656d && plVar13[1] == 0x73656e6867756f52) &&
                    plVar13[2] == 0x6572757478655473)) && (-1 < iVar38)) {
                  uVar40 = (*(long *)(lStack_2b8 + 0xe0) - *(long *)(lStack_2b8 + 0xd8) >> 5) *
                           0x6db6db6db6db6db7;
                  if (iVar38 < (int)uVar40) {
                    if (uVar40 < (uVar35 & 0xffffffff) || uVar40 - (uVar35 & 0xffffffff) == 0)
                    goto LAB_10a0c3050;
                    lVar33 = *(long *)(lStack_2b8 + 0xd8) + (uVar35 & 0xffffffff) * 0xe0;
                    uVar27 = *(uint *)(lVar33 + 0x1c);
                    if ((int)uVar27 < 0) {
                      bStack_129 = 0x12;
                      uStack_130 = 0x73;
                      uStack_12f = 0x75;
                      fVar47 = 1.5152443e+19;
                      fVar48 = 7.871993e+31;
                      uStack_138._0_2_ = 0x7275;
                      uStack_138._2_1_ = 0x65;
                      uStack_138._3_1_ = 0x5f;
                      uStack_138._4_1_ = 0x62;
                      uStack_138._5_1_ = 0x61;
                      uStack_138._6_1_ = 0x73;
                      uStack_138._7_1_ = 0x69;
                      fStack_140 = 1.5152443e+19;
                      uStack_13c = 0x74;
                      uStack_13b = 0x65;
                      uStack_13a = 0x78;
                      uStack_139 = 0x74;
                      uStack_12e = 0;
                      lVar21 = lVar33 + 0x98;
                      func_0x00010a0dc2d0(lVar21,&fStack_140);
                      if ((char)bStack_129 < '\0') {
                        __ZdlPv(CONCAT17(uStack_139,
                                         CONCAT16(uStack_13a,
                                                  CONCAT15(uStack_13b,
                                                           CONCAT14(uStack_13c,fStack_140)))));
                      }
                      if ((lVar33 + 0xa0 != lVar21) &&
                         (piVar37 = (int *)(lVar21 + 0x38), *piVar37 == 7)) {
                        func_0x000107c2b054(&fStack_140,"source");
                        if (*piVar37 == 7) {
                          lVar33 = lVar21 + 0x90;
                          func_0x00010a0dc2d0(lVar33,&fStack_140);
                          bVar11 = lVar21 + 0x98 != lVar33;
                        }
                        else {
                          bVar11 = false;
                        }
                        if ((char)bStack_129 < '\0') {
                          __ZdlPv(CONCAT17(uStack_139,
                                           CONCAT16(uStack_13a,
                                                    CONCAT15(uStack_13b,
                                                             CONCAT14(uStack_13c,fStack_140)))));
                        }
                        if (bVar11) {
                          func_0x000107c2b054(&fStack_140,"source");
                          func_0x00010a0b4efc(piVar37,&fStack_140);
                          if ((char)bStack_129 < '\0') {
                            __ZdlPv(CONCAT17(uStack_139,
                                             CONCAT16(uStack_13a,
                                                      CONCAT15(uStack_13b,
                                                               CONCAT14(uStack_13c,fStack_140)))));
                          }
                          if ((*piVar37 == 2) && (uVar27 = piVar37[1], -1 < (int)uVar27))
                          goto LAB_10a0c1e1c;
                        }
                      }
                    }
                    else {
LAB_10a0c1e1c:
                      uVar35 = *(long *)(lStack_2b8 + 0x3b8) - *(long *)(lStack_2b8 + 0x3b0) >> 5;
                      if ((int)uVar27 < (int)uVar35) {
                        if (uVar35 <= uVar27) goto LAB_10a0c3050;
                        lVar33 = *(long *)(lStack_2b8 + 0x3b0) + (ulong)uVar27 * 0x20;
                        if (((*(byte *)(lVar33 + 0x18) & 1) != 0) ||
                           ((*(byte *)(lVar33 + 0x19) & 1) != 0)) {
                          puVar20 = (undefined8 *)0x28;
                          __Znwm();
                          *(undefined2 *)(puVar20 + 4) = 0x42;
                          puVar29 = (undefined *)0x535f5845545f5353;
                          puVar20[1] = 0x454e4847554f525f;
                          *puVar20 = 0x43494c4c4154454d;
                          puVar20[3] = 0x525f454c5a5a4957;
                          puVar20[2] = 0x535f5845545f5353;
                          fVar47 = (float)uStack_350;
                          fVar48 = (float)((ulong)uStack_350 >> 0x20);
                          uStack_130 = (undefined1)uStack_348;
                          uStack_12f = (undefined1)((ulong)uStack_348 >> 8);
                          uStack_12e = (undefined1)((ulong)uStack_348 >> 0x10);
                          uStack_12d = (undefined1)((ulong)uStack_348 >> 0x18);
                          uStack_12c = (undefined1)((ulong)uStack_348 >> 0x20);
                          uStack_12b = (undefined1)((ulong)uStack_348 >> 0x28);
                          uStack_12a = (undefined1)((ulong)uStack_348 >> 0x30);
                          bStack_129 = (byte)((ulong)uStack_348 >> 0x38);
                          uStack_138._0_2_ = (undefined2)uStack_350;
                          uStack_138._2_1_ = (undefined1)((ulong)uStack_350 >> 0x10);
                          uStack_138._3_1_ = (undefined1)((ulong)uStack_350 >> 0x18);
                          uStack_138._4_1_ = (undefined1)((ulong)uStack_350 >> 0x20);
                          uStack_138._5_1_ = (undefined1)((ulong)uStack_350 >> 0x28);
                          uStack_138._6_1_ = (undefined1)((ulong)uStack_350 >> 0x30);
                          uStack_138._7_1_ = (undefined1)((ulong)uStack_350 >> 0x38);
                          fStack_140 = SUB84(puVar20,0);
                          uStack_13c = (undefined1)((ulong)puVar20 >> 0x20);
                          uStack_13b = (undefined1)((ulong)puVar20 >> 0x28);
                          uStack_13a = (undefined1)((ulong)puVar20 >> 0x30);
                          uStack_139 = (undefined1)((ulong)puVar20 >> 0x38);
                          uStack_128 = 0;
                          func_0x000107c2b080(&fStack_140);
                          FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                          if ((char)bStack_129 < '\0') {
                            __ZdlPv(CONCAT17(uStack_139,
                                             CONCAT16(uStack_13a,
                                                      CONCAT15(uStack_13b,
                                                               CONCAT14(uStack_13c,fStack_140)))));
                          }
                        }
                      }
                    }
                  }
                }
              }
              unaff_x28 = (undefined8 *)&fStack_140;
              puVar17 = puVar17 + 0xc;
            } while (puVar17 != puVar22);
            bStack_129 = '\x0f';
            fStack_140 = 7.1833216e+22;
            uStack_13c = 0x43;
            uStack_13b = 0x6f;
            uStack_13a = 0x6c;
            uStack_139 = 0x6f;
            uStack_138._0_2_ = 0x4672;
            uStack_138._2_1_ = 0x61;
            uStack_138._3_1_ = 99;
            uStack_138._4_1_ = 0x74;
            uStack_138._5_1_ = 0x6f;
            uStack_138._6_1_ = 0x72;
            uStack_138._7_1_ = 0;
            puVar22 = puStack_300;
            FUN_10a0e3358(puStack_300,&fStack_140);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            puVar17 = puStack_278;
            ppuVar18 = ppuStack_2f0;
            puVar16 = puStack_2f8;
            if (unaff_x22 + 0xa8 != puVar22) {
              FUN_10a0c7a78(puVar22[0xb],puVar22[0xc]);
              fStack_200 = (float)(double)CONCAT44(fVar48,fVar47);
              fStack_1fc = (float)(double)puVar29;
              fStack_1f8 = (float)(double)CONCAT44(uVar52,fVar51);
              fVar47 = (float)param_4;
              uStack_1f4 = SUB42(fVar47,0);
              uStack_1f2 = (undefined1)((uint)fVar47 >> 0x10);
              uStack_1f1 = (undefined1)((uint)fVar47 >> 0x18);
              puVar28 = &DAT_10f2db963;
              if ((int)pppppppuStack_290 == 0) {
                puVar28 = &UNK_10f638b40;
              }
              uVar36 = 9;
              if ((int)pppppppuStack_290 == 0) {
                uVar36 = 0xf;
              }
              FUN_10a0db864(&fStack_140,puVar28,uVar36);
              FUN_10a0d9a1c(puVar17,&fStack_140,&fStack_200);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
            }
            puVar28 = &UNK_10f639a5f;
            if ((int)pppppppuStack_290 == 0) {
              puVar28 = &UNK_10f638b50;
            }
            uVar36 = 8;
            if ((int)pppppppuStack_290 == 0) {
              uVar36 = 0xe;
            }
            FUN_10a0db864(&fStack_140,puVar28,uVar36);
            fStack_200 = (float)(double)unaff_x22[0x27];
            FUN_10a0d9bd4(puVar17,&fStack_140,&fStack_200);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            puVar28 = &UNK_10f639a68;
            if ((int)pppppppuStack_290 == 0) {
              puVar28 = &UNK_10f4151e9;
            }
            uVar36 = 9;
            if ((int)pppppppuStack_290 == 0) {
              uVar36 = 0xf;
            }
            FUN_10a0db864(&fStack_140,puVar28,uVar36);
            fVar47 = (float)(double)unaff_x22[0x28];
            uVar49 = 0;
            fStack_200 = fVar47;
            FUN_10a0d9bd4(puVar17,&fStack_140,&fStack_200);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            if (((ulong)pppppppuStack_290 & 1) == 0) {
              bStack_129 = '\r';
              fStack_140 = 4.6893802e+27;
              uStack_13c = 0x61;
              uStack_13b = 0x6c;
              uStack_13a = 0x54;
              uStack_139 = 0x65;
              uStack_138._0_2_ = 0x7478;
              uStack_138._2_1_ = 0x75;
              uStack_138._3_1_ = 0x72;
              uStack_138._4_1_ = 0x65;
              uStack_138._5_1_ = 0;
              puVar22 = puVar16;
              FUN_10a0e3358(puVar16,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              if (unaff_x22 + 0xab != puVar22) {
                uStack_130 = 0x6c;
                uStack_12f = 0x65;
                uStack_138._0_2_ = 0x7478;
                uStack_138._2_1_ = 0x75;
                uStack_138._3_1_ = 0x72;
                uStack_138._4_1_ = 0x65;
                uStack_138._5_1_ = 0x53;
                uStack_138._6_1_ = 99;
                uStack_138._7_1_ = 0x61;
                fStack_140 = 4.6893802e+27;
                uStack_13c = 0x61;
                uStack_13b = 0x6c;
                uStack_13a = 0x54;
                uStack_139 = 0x65;
                uStack_12e = 0;
                bStack_129 = '\x12';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                fStack_200 = (float)(double)unaff_x22[0x5b];
                FUN_10a0d9bd4(puStack_278,&fStack_140,&fStack_200);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
              }
              bStack_129 = '\x10';
              fVar47 = 1.0995829e+27;
              uVar49 = 0x6f697375;
              uStack_138._0_2_ = 0x546e;
              uStack_138._2_1_ = 0x65;
              uStack_138._3_1_ = 0x78;
              uStack_138._4_1_ = 0x74;
              uStack_138._5_1_ = 0x75;
              uStack_138._6_1_ = 0x72;
              uStack_138._7_1_ = 0x65;
              fStack_140 = 1.0995829e+27;
              uStack_13c = 0x75;
              uStack_13b = 0x73;
              uStack_13a = 0x69;
              uStack_139 = 0x6f;
              uStack_130 = 0;
              puVar22 = puVar16;
              FUN_10a0e3358(puVar16,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              puVar17 = puStack_278;
              if (unaff_x22 + 0xab != puVar22) {
                FUN_10a0db864(&fStack_140,&UNK_10f639a8b,0x18);
                fVar47 = (float)(double)unaff_x22[0x75];
                uVar49 = 0;
                fStack_200 = fVar47;
                FUN_10a0d9bd4(puVar17,&fStack_140,&fStack_200);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
              }
            }
            bStack_129 = '\x0e';
            fStack_140 = 1.8494018e+31;
            uStack_13c = 0x73;
            uStack_13b = 0x69;
            uStack_13a = 0x76;
            uStack_139 = 0x65;
            uStack_138._0_2_ = 0x6146;
            uStack_138._2_1_ = 99;
            uStack_138._3_1_ = 0x74;
            uStack_138._4_1_ = 0x6f;
            uStack_138._5_1_ = 0x72;
            uStack_138._6_1_ = 0;
            puVar22 = puVar16;
            FUN_10a0e3358(puVar16,&fStack_140);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            puVar17 = unaff_x22 + 0xab;
            if (puVar17 != puVar22) {
              FUN_10a0c7a78(puVar22[0xb],puVar22[0xc]);
              fStack_200 = (float)(double)CONCAT44(uVar49,fVar47);
              fStack_1fc = (float)(double)puVar29;
              fVar51 = (float)(double)CONCAT44(uVar52,fVar51);
              uVar52 = 0;
              puVar28 = &UNK_10f639aa4;
              if ((int)pppppppuStack_290 == 0) {
                puVar28 = &UNK_10f4150c5;
              }
              uVar36 = 0xd;
              if ((int)pppppppuStack_290 == 0) {
                uVar36 = 0xe;
              }
              fStack_1f8 = fVar51;
              FUN_10a0db864(&fStack_140,puVar28,uVar36);
              FUN_10a0d9d6c(puStack_278,&fStack_140,&fStack_200);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
            }
            if ((int)pppppppuStack_290 != 0) {
              bStack_129 = '\x0f';
              fStack_140 = 1.8494018e+31;
              uStack_13c = 0x73;
              uStack_13b = 0x69;
              uStack_13a = 0x76;
              uStack_139 = 0x65;
              uStack_138._0_2_ = 0x6554;
              uStack_138._2_1_ = 0x78;
              uStack_138._3_1_ = 0x74;
              uStack_138._4_1_ = 0x75;
              uStack_138._5_1_ = 0x72;
              uStack_138._6_1_ = 0x65;
              uStack_138._7_1_ = 0;
              puVar22 = puVar16;
              FUN_10a0e3358(puVar16,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              if (puVar17 != puVar22) {
                uStack_130 = 0x79;
                uStack_12f = 0;
                uStack_138._0_2_ = 0x6e49;
                uStack_138._2_1_ = 0x74;
                uStack_138._3_1_ = 0x65;
                uStack_138._4_1_ = 0x6e;
                uStack_138._5_1_ = 0x73;
                uStack_138._6_1_ = 0x69;
                uStack_138._7_1_ = 0x74;
                fStack_140 = 1.8494018e+31;
                uStack_13c = 0x73;
                uStack_13b = 0x69;
                uStack_13a = 0x76;
                uStack_139 = 0x65;
                bStack_129 = '\x11';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                fStack_200 = 1.0;
                FUN_10a0d9bd4(puStack_278,&fStack_140,&fStack_200);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
              }
            }
            uVar35 = puStack_278[0x4b];
            *(undefined8 *)(uVar35 + 0x30) = 0;
            *(undefined8 *)(uVar35 + 0x28) = 6;
            *(undefined8 *)(uVar35 + 0x40) = 0;
            *(undefined8 *)(uVar35 + 0x38) = 0;
            *(undefined8 *)(uVar35 + 0x50) = 0;
            *(undefined8 *)(uVar35 + 0x48) = 0;
            bStack_129 = '\t';
            fStack_140 = 4.5414688e+24;
            uStack_13c = 0x61;
            uStack_13b = 0x4d;
            uStack_13a = 0x6f;
            uStack_139 = 100;
            uStack_138._0_2_ = 0x65;
            puVar22 = puVar16;
            FUN_10a0e3358(puVar16,&fStack_140);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            if (puVar17 != puVar22) {
              bStack_129 = 9;
              uStack_138._0_2_ = 0x65;
              fStack_140 = 4.5414688e+24;
              uStack_13c = 0x61;
              uStack_13b = 0x4d;
              uStack_13a = 0x6f;
              uStack_139 = 100;
              puVar22 = puVar16;
              FUN_10a0d9464(puVar16,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              lVar33 = lRam00000001137e9558;
              FUN_10a0e341c(lRam00000001137e9558,puVar22 + 1);
              if (lVar33 == 0) {
                FUN_109ffdddc(&UNK_10f639994);
LAB_10a0c3050:
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10a0c3054);
                (*pcVar10)();
              }
              bVar41 = *(byte *)(lVar33 + 0x28);
              uVar35 = puStack_278[0x4b];
              fStack_140 = 1.1483326e-29;
              uStack_13c = 1;
              uStack_13b = 0;
              uStack_13a = 0;
              uStack_139 = 0;
              uStack_138._0_2_ = 0x12;
              uStack_138._2_1_ = 0;
              uStack_138._3_1_ = 0;
              uStack_138._4_1_ = 0;
              uStack_138._5_1_ = 0;
              uStack_138._6_1_ = 0;
              uStack_138._7_1_ = 0;
              if (0x10 < bVar41) {
                FUN_10a0edfc4(&fStack_140);
                goto LAB_10a0c3050;
              }
              lVar33 = (ulong)(uint)bVar41 * 0x30;
              uVar36 = *(undefined8 *)(&UNK_10e4f4698 + lVar33);
              *(undefined8 *)(uVar35 + 0x30) = *(undefined8 *)(&UNK_10e4f46a0 + lVar33);
              *(undefined8 *)(uVar35 + 0x28) = uVar36;
              uVar36 = *(undefined8 *)(&UNK_10e4f46a8 + lVar33);
              *(undefined8 *)(uVar35 + 0x40) = *(undefined8 *)(&UNK_10e4f46b0 + lVar33);
              *(undefined8 *)(uVar35 + 0x38) = uVar36;
              uVar36 = *(undefined8 *)(&UNK_10e4f46b8 + lVar33);
              *(undefined8 *)(uVar35 + 0x50) = *(undefined8 *)(&UNK_10e4f46c0 + lVar33);
              *(undefined8 *)(uVar35 + 0x48) = uVar36;
              if (bVar41 == 8) {
                uStack_130 = 0x6c;
                uStack_12f = 100;
                uStack_138._0_2_ = 0x5474;
                uStack_138._2_1_ = 0x68;
                uStack_138._3_1_ = 0x72;
                uStack_138._4_1_ = 0x65;
                uStack_138._5_1_ = 0x73;
                uStack_138._6_1_ = 0x68;
                uStack_138._7_1_ = 0x6f;
                fStack_140 = 4.5414688e+24;
                uStack_13c = 0x61;
                uStack_13b = 0x54;
                uStack_13a = 0x65;
                uStack_139 = 0x73;
                uStack_12e = 0;
                bStack_129 = '\x12';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                fStack_200 = 0.5;
                FUN_10a0d9bd4(puStack_278,&fStack_140,&fStack_200);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
              }
            }
            bStack_129 = '\v';
            uStack_138._0_2_ = 0x666f;
            uStack_138._2_1_ = 0x66;
            fStack_140 = 4.5414688e+24;
            uStack_13c = 0x61;
            uStack_13b = 0x43;
            uStack_13a = 0x75;
            uStack_139 = 0x74;
            uStack_138._3_1_ = 0;
            puVar22 = puVar16;
            FUN_10a0e3358(puVar16,&fStack_140);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            if (puVar17 != puVar22) {
              uStack_130 = 0x6c;
              uStack_12f = 100;
              uStack_138._0_2_ = 0x5474;
              uStack_138._2_1_ = 0x68;
              uStack_138._3_1_ = 0x72;
              uStack_138._4_1_ = 0x65;
              uStack_138._5_1_ = 0x73;
              uStack_138._6_1_ = 0x68;
              uStack_138._7_1_ = 0x6f;
              fStack_140 = 4.5414688e+24;
              uStack_13c = 0x61;
              uStack_13b = 0x54;
              uStack_13a = 0x65;
              uStack_139 = 0x73;
              uStack_12e = 0;
              bStack_129 = '\x12';
              uStack_128 = 0;
              func_0x000107c2b080(&fStack_140);
              bStack_1e9 = 0xb;
              fStack_200 = 4.5414688e+24;
              fStack_1fc = 7.772701e+31;
              fStack_1f8 = 9.403967e-39;
              puVar22 = puVar16;
              FUN_10a0d9464(puVar16,&fStack_200);
              pppppppuStack_1d0 =
                   (undefined8 *******)CONCAT44(pppppppuStack_1d0._4_4_,(float)(double)puVar22[10]);
              FUN_10a0d9bd4(puStack_278,&fStack_140,&pppppppuStack_1d0);
              if ((char)bStack_1e9 < '\0') {
                __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
              }
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
            }
            bStack_129 = 0xb;
            uStack_138._0_2_ = 0x6564;
            uStack_138._2_1_ = 100;
            unaff_x23 = 0x6953656c62756f64;
            fStack_140 = 1.1318697e+21;
            uStack_13c = 0x6c;
            uStack_13b = 0x65;
            uStack_13a = 0x53;
            uStack_139 = 0x69;
            uStack_138._3_1_ = 0;
            puVar22 = puVar16;
            FUN_10a0e3358(puVar16,&fStack_140);
            if ((char)bStack_129 < '\0') {
              __ZdlPv(CONCAT17(uStack_139,
                               CONCAT16(uStack_13a,
                                        CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
            }
            unaff_x20 = puStack_278;
            unaff_x21 = puStack_2d0;
            if (puVar17 != puVar22) {
              bStack_129 = 0xb;
              uStack_138._0_2_ = 0x6564;
              uStack_138._2_1_ = 100;
              fStack_140 = 1.1318697e+21;
              uStack_13c = 0x6c;
              uStack_13b = 0x65;
              uStack_13a = 0x53;
              uStack_139 = 0x69;
              uStack_138._3_1_ = 0;
              FUN_10a0d9464(puVar16,&fStack_140);
              func_0x00010a3326b8(unaff_x20 + 0x43,(char)*puVar16);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
            }
            func_0x00010a332700((long)unaff_x20 + 0x21a,1);
            func_0x00010a332748((long)unaff_x20 + 0x219,1);
            if (((ulong)pppppppuStack_290 & 1) == 0) {
              bStack_129 = '\x13';
              uStack_130 = 0x6c;
              uStack_12f = 0x69;
              uStack_12e = 0x74;
              uStack_138._0_2_ = 0x6972;
              uStack_138._2_1_ = 0x61;
              uStack_138._3_1_ = 0x6c;
              uStack_138._4_1_ = 0x73;
              uStack_138._5_1_ = 0x5f;
              uStack_138._6_1_ = 0x75;
              uStack_138._7_1_ = 0x6e;
              fStack_140 = 1.5152443e+19;
              uStack_13c = 0x6d;
              uStack_13b = 0x61;
              uStack_13a = 0x74;
              uStack_139 = 0x65;
              uStack_12d = 0;
              puVar22 = unaff_x22 + 0xad;
              func_0x00010a0dc2d0(puVar22,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              puVar16 = unaff_x22 + 0xae;
              if (puVar16 == puVar22) {
                uStack_130 = 0x54;
                uStack_12f = 0x49;
                uStack_12e = 0x4e;
                uStack_12d = 0x47;
                uStack_138._0_2_ = 0x544c;
                uStack_138._2_1_ = 0x46;
                uStack_138._3_1_ = 0x5f;
                uStack_138._4_1_ = 0x4c;
                uStack_138._5_1_ = 0x49;
                uStack_138._6_1_ = 0x47;
                uStack_138._7_1_ = 0x48;
                fStack_140 = 48.326435;
                uStack_13c = 0x4c;
                uStack_13b = 0x45;
                uStack_13a = 0x5f;
                uStack_139 = 0x47;
                uStack_12c = 0;
                bStack_129 = '\x14';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
              }
              puVar20 = (undefined8 *)0x19;
              __Znwm();
              fStack_140 = SUB84(puVar20,0);
              uStack_13c = (undefined1)((ulong)puVar20 >> 0x20);
              uStack_13b = (undefined1)((ulong)puVar20 >> 0x28);
              uStack_13a = (undefined1)((ulong)puVar20 >> 0x30);
              uStack_139 = (undefined1)((ulong)puVar20 >> 0x38);
              uStack_130 = (undefined1)uStack_328;
              uStack_12f = (undefined1)((ulong)uStack_328 >> 8);
              uStack_12e = (undefined1)((ulong)uStack_328 >> 0x10);
              uStack_12d = (undefined1)((ulong)uStack_328 >> 0x18);
              uStack_12c = (undefined1)((ulong)uStack_328 >> 0x20);
              uStack_12b = (undefined1)((ulong)uStack_328 >> 0x28);
              uStack_12a = (undefined1)((ulong)uStack_328 >> 0x30);
              bStack_129 = (byte)((ulong)uStack_328 >> 0x38);
              uStack_138._0_2_ = (undefined2)uStack_330;
              uStack_138._2_1_ = (undefined1)((ulong)uStack_330 >> 0x10);
              uStack_138._3_1_ = (undefined1)((ulong)uStack_330 >> 0x18);
              uStack_138._4_1_ = (undefined1)((ulong)uStack_330 >> 0x20);
              uStack_138._5_1_ = (undefined1)((ulong)uStack_330 >> 0x28);
              uStack_138._6_1_ = (undefined1)((ulong)uStack_330 >> 0x30);
              uStack_138._7_1_ = (undefined1)((ulong)uStack_330 >> 0x38);
              puVar20[1] = 0x6c635f736c616972;
              *puVar20 = 0x6574616d5f52484b;
              *(undefined8 *)((long)puVar20 + 0xf) = 0x74616f637261656c;
              *(undefined1 *)((long)puVar20 + 0x17) = 0;
              puVar22 = unaff_x22 + 0xad;
              func_0x00010a0dc2d0(puVar22,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              if (puVar16 != puVar22) {
                uStack_138._0_2_ = 0x454c;
                uStack_138._2_1_ = 0x41;
                uStack_138._3_1_ = 0x52;
                uStack_138._4_1_ = 0x43;
                uStack_138._5_1_ = 0x4f;
                uStack_138._6_1_ = 0x41;
                uStack_138._7_1_ = 0x54;
                fStack_140 = 48.326435;
                uStack_13c = 0x4c;
                uStack_13b = 0x45;
                uStack_13a = 0x5f;
                uStack_139 = 0x43;
                uStack_130 = 0;
                bStack_129 = '\x10';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                puVar17 = puStack_278;
                FUN_10a0db124(puVar22 + 7,puStack_278,&UNK_10f41526a,0xf);
                uStack_378 = 0x22;
                plStack_370 = plStack_298;
                puStack_380 = &UNK_10f639b2b;
                FUN_10a0db294(uStack_2a0,puVar22 + 7,puVar17,&UNK_10f41527a,0x10,&UNK_10f639b16,0x14
                             );
                FUN_10a0db124(puVar22 + 7,puVar17,&UNK_10f639b4e,0x18);
                uStack_378 = 0x2c;
                plStack_370 = plStack_298;
                puStack_380 = &UNK_10f639b88;
                plVar30 = (long *)0x19;
                FUN_10a0db294(uStack_2a0,puVar22 + 7,puVar17,&UNK_10f41528b,0x19,&UNK_10f639b69,0x1e
                             );
                ppppppuStack_288 = (undefined8 ******)0x546c616d726f4e74;
                pppppppuStack_290 = (undefined8 *******)0x616f637261656c63;
                fStack_1f8 = 4.7399527e+30;
                uStack_1f4 = 0x616d;
                fStack_200 = 2.6450715e+20;
                fStack_1fc = 2.759961e+20;
                unaff_x23 = 0x657275747865546c;
                uStack_1f2 = 0x6c;
                uStack_1f1 = 0x54;
                uStack_1f0 = 0x65;
                uStack_1ef = 0x6572757478;
                uStack_1ea = 0;
                bStack_1e9 = 0x16;
                puVar17 = puVar22 + 7;
                func_0x00010a0b4efc(puVar17,&fStack_200);
                FUN_10a0c9578(&fStack_140,puVar17);
                if ((char)bStack_1e9 < '\0') {
                  __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                }
                if (fStack_140 == 9.80909e-45) {
                  uStack_378 = 0x29;
                  plStack_370 = plStack_298;
                  puStack_380 = &UNK_10f639bd6;
                  plVar30 = (long *)0x16;
                  FUN_10a0db294(uStack_2a0,puVar22 + 7,puStack_278,&UNK_10f4152a5,0x16,
                                &UNK_10f639bba,0x1b);
                  FUN_10a0c9838(&pppppppuStack_1d0,&uStack_e8);
                  func_0x000107c2b054(&fStack_200,"scale");
                  pppppppuVar23 = &pppppppuStack_1d0;
                  FUN_10a0cd368(pppppppuVar23,&fStack_200);
                  if ((char)bStack_1e9 < '\0') {
                    __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                  }
                  fStack_1d4 = 1.0;
                  if ((pppppppuStack_360 != pppppppuVar23) && (*(int *)(pppppppuVar23 + 7) - 1U < 2)
                     ) {
                    if (*(int *)(pppppppuVar23 + 7) == 2) {
                      ppppppuVar2 = (undefined8 ******)(double)*(int *)((long)pppppppuVar23 + 0x3c);
                    }
                    else {
                      ppppppuVar2 = pppppppuVar23[8];
                    }
                    fStack_1d4 = (float)(double)ppppppuVar2;
                  }
                  fStack_98 = SUB84(ppppppuStack_288,0);
                  uStack_94 = (undefined2)((ulong)ppppppuStack_288 >> 0x20);
                  uStack_a0._0_7_ = SUB87(pppppppuStack_290,0);
                  uStack_a0._7_1_ = (undefined1)((ulong)pppppppuStack_290 >> 0x38);
                  uStack_92 = 0x6c;
                  uStack_91 = 0x54;
                  uStack_90 = 0x657275747865;
                  uStack_8a = 0x1600;
                  puVar20 = &uStack_a0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (puVar20,&DAT_10f5a3717,5);
                  uVar36 = *puVar20;
                  uStack_88 = (undefined7)puVar20[1];
                  uStack_81 = (undefined1)*(undefined8 *)((long)puVar20 + 0xf);
                  uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar20 + 0xf) >> 8);
                  bStack_1e9 = *(byte *)((long)puVar20 + 0x17);
                  puVar20[1] = 0;
                  puVar20[2] = 0;
                  *puVar20 = 0;
                  fStack_200 = (float)uVar36;
                  fStack_1fc = (float)((ulong)uVar36 >> 0x20);
                  uStack_1f0 = (undefined1)uStack_80;
                  uStack_1ef = (undefined5)((uint7)uStack_80 >> 8);
                  uStack_1ea = (undefined1)((uint7)uStack_80 >> 0x30);
                  fStack_1f8 = (float)uStack_88;
                  uStack_1f4 = (undefined2)((uint7)uStack_88 >> 0x20);
                  uStack_1f2 = (undefined1)((uint7)uStack_88 >> 0x30);
                  uStack_1f1 = uStack_81;
                  uStack_1e8 = 0;
                  func_0x000107c2b080(&fStack_200);
                  FUN_10a0d9bd4(puStack_278,&fStack_200,&fStack_1d4);
                  if ((char)bStack_1e9 < '\0') {
                    __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                  }
                  func_0x00010a0c9b2c(ppppppuStack_1c8);
                }
                func_0x00010a0c9b7c(&fStack_140);
              }
              puVar20 = (undefined8 *)0x20;
              __Znwm();
              fStack_140 = SUB84(puVar20,0);
              uStack_13c = (undefined1)((ulong)puVar20 >> 0x20);
              uStack_13b = (undefined1)((ulong)puVar20 >> 0x28);
              uStack_13a = (undefined1)((ulong)puVar20 >> 0x30);
              uStack_139 = (undefined1)((ulong)puVar20 >> 0x38);
              uStack_130 = (undefined1)uStack_338;
              uStack_12f = (undefined1)((ulong)uStack_338 >> 8);
              uStack_12e = (undefined1)((ulong)uStack_338 >> 0x10);
              uStack_12d = (undefined1)((ulong)uStack_338 >> 0x18);
              uStack_12c = (undefined1)((ulong)uStack_338 >> 0x20);
              uStack_12b = (undefined1)((ulong)uStack_338 >> 0x28);
              uStack_12a = (undefined1)((ulong)uStack_338 >> 0x30);
              bStack_129 = (byte)((ulong)uStack_338 >> 0x38);
              uStack_138._0_2_ = (undefined2)uStack_340;
              uStack_138._2_1_ = (undefined1)((ulong)uStack_340 >> 0x10);
              uStack_138._3_1_ = (undefined1)((ulong)uStack_340 >> 0x18);
              uStack_138._4_1_ = (undefined1)((ulong)uStack_340 >> 0x20);
              uStack_138._5_1_ = (undefined1)((ulong)uStack_340 >> 0x28);
              uStack_138._6_1_ = (undefined1)((ulong)uStack_340 >> 0x30);
              uStack_138._7_1_ = (undefined1)((ulong)uStack_340 >> 0x38);
              puVar20[1] = 0x72745f736c616972;
              *puVar20 = 0x6574616d5f52484b;
              *(undefined8 *)((long)puVar20 + 0x12) = 0x6e6f697373696d73;
              *(undefined8 *)((long)puVar20 + 10) = 0x6e6172745f736c61;
              *(undefined1 *)((long)puVar20 + 0x1a) = 0;
              puVar22 = unaff_x22 + 0xad;
              func_0x00010a0dc2d0(puVar22,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              if (puVar16 == puVar22) {
                fStack_140 = 7.154045e+22;
                uStack_13c = 0x65;
                uStack_13b = 0x6e;
                uStack_13a = 0x54;
                uStack_139 = 0x65;
                uStack_138._0_2_ = 0x7478;
                uStack_138._2_1_ = 0x75;
                uStack_138._3_1_ = 0x72;
                uStack_138._4_1_ = 0x65;
                uStack_138._5_1_ = 0;
                bStack_129 = '\r';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                FUN_10a3328b8(puStack_278 + 0x3d,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
              }
              else {
                uStack_130 = 0x49;
                uStack_12f = 0x4f;
                uStack_12e = 0x4e;
                uStack_138._0_2_ = 0x4152;
                uStack_138._2_1_ = 0x4e;
                uStack_138._3_1_ = 0x53;
                uStack_138._4_1_ = 0x4d;
                uStack_138._5_1_ = 0x49;
                uStack_138._6_1_ = 0x53;
                uStack_138._7_1_ = 0x53;
                fStack_140 = 48.326435;
                uStack_13c = 0x4c;
                uStack_13b = 0x45;
                uStack_13a = 0x5f;
                uStack_139 = 0x54;
                uStack_12d = 0;
                bStack_129 = '\x13';
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                FUN_10a0db124(puVar22 + 7,puStack_278,&UNK_10f639c34,0x12);
                uStack_378 = 0x25;
                plStack_370 = plStack_298;
                puStack_380 = &UNK_10f639c63;
                plVar30 = (long *)0x13;
                FUN_10a0db294(uStack_2a0,puVar22 + 7,puStack_278,&UNK_10f4152f9,0x13,&UNK_10f639c4b,
                              0x17);
              }
              bStack_129 = 0x13;
              uStack_130 = 0x65;
              uStack_12f = 0x65;
              uStack_12e = 0x6e;
              uStack_138._0_2_ = 0x6972;
              uStack_138._2_1_ = 0x61;
              uStack_138._3_1_ = 0x6c;
              uStack_138._4_1_ = 0x73;
              uStack_138._5_1_ = 0x5f;
              uStack_138._6_1_ = 0x73;
              uStack_138._7_1_ = 0x68;
              fStack_140 = 1.5152443e+19;
              uStack_13c = 0x6d;
              uStack_13b = 0x61;
              uStack_13a = 0x74;
              uStack_139 = 0x65;
              uStack_12d = 0;
              unaff_x20 = unaff_x22 + 0xad;
              func_0x00010a0dc2d0(unaff_x20,&fStack_140);
              if ((char)bStack_129 < '\0') {
                __ZdlPv(CONCAT17(uStack_139,
                                 CONCAT16(uStack_13a,
                                          CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
              }
              unaff_x21 = puStack_2d0;
              if (puVar16 != unaff_x20) {
                uStack_138._0_2_ = 0x4548;
                uStack_138._2_1_ = 0x45;
                uStack_138._3_1_ = 0x4e;
                fStack_140 = 48.326435;
                uStack_13c = 0x4c;
                uStack_13b = 0x45;
                uStack_13a = 0x5f;
                uStack_139 = 0x53;
                uStack_138._4_1_ = 0;
                bStack_129 = 0xc;
                uStack_128 = 0;
                func_0x000107c2b080(&fStack_140);
                FUN_10a047898(puVar15,&fStack_140,&fStack_140);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                unaff_x23 = 0x10;
                bStack_1e9 = 0x10;
                ppppppuStack_288 = (undefined8 ******)0x726f74636146726f;
                pppppppuStack_290 = (undefined8 *******)0x6c6f436e65656873;
                fStack_1f8 = 2.2879382e+20;
                uStack_1f4 = 0x7463;
                uStack_1f2 = 0x6f;
                uStack_1f1 = 0x72;
                fStack_200 = 6.770929e+22;
                fStack_1fc = 1.1570068e+27;
                uStack_1f0 = 0;
                puVar15 = unaff_x20 + 7;
                func_0x00010a0b4efc(puVar15,&fStack_200);
                bStack_1b9 = 0x10;
                ppppppuStack_1c8 = ppppppuStack_288;
                pppppppuStack_1d0 = pppppppuStack_290;
                uStack_1c0 = 0;
                uStack_a0._0_7_ = 0;
                uStack_a0._7_1_ = 0;
                fStack_98 = 0.0;
                fVar47 = fStack_98;
                if (((int)*puVar15 == 5) && (puVar15[9] - puVar15[8] == 0x168)) {
                  iVar38 = 0;
                  do {
                    puVar22 = puVar15;
                    func_0x00010a0b4fbc(puVar15,iVar38);
                    dVar3 = (double)*(int *)((long)puVar22 + 4);
                    if ((int)*puVar22 != 2) {
                      dVar3 = (double)puVar22[1];
                    }
                    pfVar32 = pfStack_2e8;
                    if (iVar38 != 1) {
                      unaff_x21 = puStack_2d0;
                      fVar47 = (float)dVar3;
                      if (iVar38 == 2) break;
                      pfVar32 = (float *)&uStack_a0;
                    }
                    *pfVar32 = (float)dVar3;
                    iVar38 = iVar38 + 1;
                  } while( true );
                }
                fStack_98 = fVar47;
                FUN_10a0d09b4(&fStack_140,&pppppppuStack_1d0);
                FUN_10a0d9d6c(puStack_278,&fStack_140,&uStack_a0);
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT17(uStack_139,
                                   CONCAT16(uStack_13a,
                                            CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))));
                }
                if ((char)bStack_1b9 < '\0') {
                  __ZdlPv(pppppppuStack_1d0);
                }
                if ((char)bStack_1e9 < '\0') {
                  __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
                }
                uStack_378 = 0x24;
                plStack_370 = plStack_298;
                puStack_380 = &UNK_10f639cef;
                FUN_10a0db294(uStack_2a0,unaff_x20 + 7,puStack_278,&UNK_10f639cc6,0x11,
                              &UNK_10f639cd8,0x16);
                FUN_10a0db124(unaff_x20 + 7,puStack_278,&UNK_10f639d14,0x14);
                uStack_378 = 0x28;
                plStack_370 = plStack_298;
                puStack_380 = &UNK_10f639d4a;
                plVar30 = (long *)0x15;
                FUN_10a0db294(uStack_2a0,unaff_x20 + 7,puStack_278,&UNK_10f415364,0x15,
                              &UNK_10f639d2f,0x1a);
              }
            }
            __ZdlPv(ppuVar18);
          }
          FUN_10a0c7c84(ppppppuStack_2d8,&lStack_190);
          FUN_10a044790(auStack_180);
          (*(code *)*apuStack_178[0])(apuStack_178);
          plVar13 = plStack_188;
          if (plStack_188 != (long *)0x0) {
            plVar14 = plStack_188 + 1;
            do {
              lVar33 = *plVar14;
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar11) {
                *plVar14 = lVar33 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar33 == 0) {
              (**(code **)(*plStack_188 + 0x10))(plStack_188);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
        }
        else {
          unaff_x20 = (ulong *)0x18;
          __Znwm();
          *unaff_x20 = (ulong)&PTR_FUN_110ba1768;
          unaff_x20[1] = (ulong)unaff_x22;
          unaff_x20[2] = uStack_2a0;
          plStack_248 = (long *)plStack_2a8[1];
          lStack_250 = *plStack_2a8;
          if (plStack_2a8[1] != 0) {
            plVar30 = (long *)(plStack_2a8[1] + 8);
            do {
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar11) {
                *plVar30 = *plVar30 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          plVar14 = (long *)0x18;
          __Znwm();
          *plVar14 = (long)&PTR_FUN_110ba1768;
          uVar35 = unaff_x20[1];
          plVar14[2] = unaff_x20[2];
          plVar14[1] = uVar35;
          plVar30 = plStack_298;
          plStack_258 = plVar14;
          (**(code **)(*plVar13 + 0x10))
                    (&fStack_140,plVar13,&lStack_250,&plStack_258,uStack_2dc,plStack_298);
          plVar13 = plStack_258;
          unaff_x21 = puStack_2d0;
          plStack_258 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))();
          }
          plVar13 = plStack_248;
          if (plStack_248 != (long *)0x0) {
            plVar14 = plStack_248 + 1;
            do {
              lVar33 = *plVar14;
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar11) {
                *plVar14 = lVar33 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar33 == 0) {
              (**(code **)(*plStack_248 + 0x10))(plStack_248);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          if (CONCAT17(uStack_139,
                       CONCAT16(uStack_13a,CONCAT15(uStack_13b,CONCAT14(uStack_13c,fStack_140)))) !=
              0) {
            FUN_10a0c7c84(ppppppuStack_2d8,&fStack_140);
          }
          plVar13 = (long *)CONCAT17(uStack_138._7_1_,
                                     CONCAT16(uStack_138._6_1_,
                                              CONCAT15(uStack_138._5_1_,
                                                       CONCAT14(uStack_138._4_1_,
                                                                CONCAT13(uStack_138._3_1_,
                                                                         CONCAT12(uStack_138._2_1_,
                                                                                  (undefined2)
                                                                                  uStack_138))))));
          if (plVar13 != (long *)0x0) {
            plVar14 = plVar13 + 1;
            do {
              lVar33 = *plVar14;
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar11) {
                *plVar14 = lVar33 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar33 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          (**(code **)(*unaff_x20 + 8))(unaff_x20);
        }
        if (*(char *)((long)unaff_x22 + 0x60f) < '\0') {
          if (unaff_x22[0xc0] == 0) goto LAB_10a0c1470;
LAB_10a0c13cc:
          pbVar12 = pbStack_2b0;
          func_0x00010945a80c(pbStack_2b0,&DAT_10f414f99);
          plStack_198 = (long *)0x0;
          puVar28 = (undefined *)0x1;
          puVar29 = (undefined *)0x0;
          func_0x0001094749d8(&fStack_140,unaff_x22 + 0xbf,alStack_1b0,1,0);
          FUN_10a0a4bec(pbVar12,&fStack_140);
          uVar27 = (uint)fStack_140 & 0xff;
          func_0x000109380ffc(&uStack_138,fStack_140._0_1_);
          plVar13 = plStack_198;
          if (plStack_198 == alStack_1b0) {
            lVar33 = 0x20;
          }
          else {
            if (plStack_198 == (long *)0x0) goto LAB_10a0c14cc;
            lVar33 = 0x28;
          }
          (**(code **)(*plStack_198 + lVar33))();
        }
        else {
          if (*(char *)((long)unaff_x22 + 0x60f) != '\0') goto LAB_10a0c13cc;
LAB_10a0c1470:
          pbVar12 = pbStack_2b0;
          func_0x00010945a80c(pbStack_2b0,&DAT_10f414f99);
          puVar28 = (undefined *)0x0;
          puVar29 = (undefined *)0x0;
          plVar30 = (long *)0x1;
          func_0x000109382360(&fStack_140,0,0,0,1);
          FUN_10a0a4bec(pbVar12,&fStack_140);
          uVar27 = (uint)fStack_140 & 0xff;
          plVar13 = &uStack_138;
          func_0x000109380ffc(plVar13,fStack_140._0_1_);
        }
LAB_10a0c14cc:
        unaff_x22 = unaff_x22 + 0xc5;
      } while (unaff_x22 != puStack_2c8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_1e9 < '\0') {
    __ZdlPv(CONCAT44(fStack_1fc,fStack_200));
  }
  func_0x00010a0c9b2c(ppppppuStack_1c8);
  func_0x00010a0c9b7c(&fStack_140);
  ppuVar18 = ppuStack_2f0;
  __ZdlPv(ppuStack_2f0);
  func_0x00010a015cb4(&lStack_190);
  pppppppuStack_1d0 = (undefined8 *******)ppppppuStack_2d8;
  FUN_10a0d4a18(&pppppppuStack_1d0);
  plVar14 = plVar13;
  __Unwind_Resume();
  puStack_3c0 = (ulong *)ppuVar18;
  pcStack_388 = FUN_10a0c32e4;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  plVar24 = (long *)0x28;
  puStack_3d0 = unaff_x28;
  ppuStack_3c8 = unaff_x27;
  uStack_3b8 = unaff_x23;
  puStack_3b0 = unaff_x22;
  puStack_3a8 = unaff_x21;
  puStack_3a0 = unaff_x20;
  plStack_398 = plVar13;
  puStack_390 = &stack0xfffffffffffffff0;
  __Znwm();
  plVar13 = plVar24 + 1;
  *plVar13 = 0;
  plVar24[2] = 0;
  plStack_678 = plVar24 + 3;
  *plStack_678 = (long)&PTR_DAT_110b879d8;
  *plVar24 = (long)&PTR_FUN_110b87988;
  plVar24[4] = (long)extraout_x8;
  do {
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = *plVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_670 = plVar24;
  plStack_668 = plStack_678;
  plStack_660 = plVar24;
  func_0x00010946187c(auStack_658,&plStack_668,puVar28,plVar30);
  plVar13 = plStack_660;
  if (plStack_660 != (long *)0x0) {
    plVar30 = plStack_660 + 1;
    do {
      lVar33 = *plVar30;
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar11) {
        *plVar30 = lVar33 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar33 == 0) {
      (**(code **)(*plStack_660 + 0x10))(plStack_660);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = plStack_670;
  if (plStack_670 != (long *)0x0) {
    plVar30 = plStack_670 + 1;
    do {
      lVar33 = *plVar30;
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar11) {
        *plVar30 = lVar33 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar33 == 0) {
      (**(code **)(*plStack_670 + 0x10))(plStack_670);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  func_0x000109460e78(auStack_658,plVar14,~uVar27 >> 0x1f,puVar29,
                      uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU),0);
  puVar25 = auStack_658;
  func_0x000109462ac4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
    ___stack_chk_fail();
    func_0x000109462ac4(auStack_658);
    if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
      __ZdlPv(*extraout_x8);
    }
    puVar26 = puVar25;
    __Unwind_Resume();
    pcStack_688 = FUN_10a0c34a4;
    puStack_6a0 = puVar25;
    ppuStack_690 = &puStack_390;
    FUN_10a0db864(&uStack_6c0,*plVar14,plVar14[1]);
    if ((char)puVar26[0x17f] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar26 + 0x168));
    }
    *(undefined8 *)(puVar26 + 0x170) = uStack_6b8;
    *(undefined8 *)(puVar26 + 0x168) = uStack_6c0;
    *(undefined8 *)(puVar26 + 0x178) = uStack_6b0;
    *(undefined8 *)(puVar26 + 0x180) = uStack_6a8;
    return;
  }
  return;
}



/* Entry: 10a0c32e4; end: 10a0c34a3;  */

void FUN_10a0c32e4(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 *puStack_320;
  undefined8 *puStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined1 auStack_2d8 [640];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = (long *)0x28;
  __Znwm();
  plVar6 = plVar3 + 1;
  *plVar6 = 0;
  plVar3[2] = 0;
  plStack_2f8 = plVar3 + 3;
  *plStack_2f8 = (long)&PTR_DAT_110b879d8;
  *plVar3 = (long)&PTR_FUN_110b87988;
  plVar3[4] = (long)param_1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_2f0 = plVar3;
  plStack_2e8 = plStack_2f8;
  plStack_2e0 = plVar3;
  func_0x00010946187c(auStack_2d8,&plStack_2e8,param_4,param_6);
  plVar3 = plStack_2e0;
  if (plStack_2e0 != (long *)0x0) {
    plVar6 = plStack_2e0 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar3 = plStack_2f0;
  if (plStack_2f0 != (long *)0x0) {
    plVar6 = plStack_2f0 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  func_0x000109460e78(auStack_2d8,param_2,~param_3 >> 0x1f,param_5,
                      param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU),0);
  puVar4 = auStack_2d8;
  func_0x000109462ac4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109462ac4(auStack_2d8);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_308 = FUN_10a0c34a4;
  puStack_320 = puVar4;
  puStack_318 = param_1;
  puStack_310 = &stack0xfffffffffffffff0;
  FUN_10a0db864(&uStack_340,*param_2,param_2[1]);
  if ((char)puVar5[0x17f] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + 0x168));
  }
  *(undefined8 *)(puVar5 + 0x170) = uStack_338;
  *(undefined8 *)(puVar5 + 0x168) = uStack_340;
  *(undefined8 *)(puVar5 + 0x178) = uStack_330;
  *(undefined8 *)(puVar5 + 0x180) = uStack_328;
  return;
}



/* Entry: 10a0c34a4; end: 10a0c34ff;  */

void FUN_10a0c34a4(long param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a0db864(&uStack_40,*param_2,param_2[1]);
  if (*(char *)(param_1 + 0x17f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x168));
  }
  *(undefined8 *)(param_1 + 0x170) = uStack_38;
  *(undefined8 *)(param_1 + 0x168) = uStack_40;
  *(undefined8 *)(param_1 + 0x178) = uStack_30;
  *(undefined8 *)(param_1 + 0x180) = uStack_28;
  return;
}



/* Entry: 10a0c3500; end: 10a0c359f;  */

/* WARNING: Removing unreachable block (ram,0x00010a3e2698) */
/* WARNING: Removing unreachable block (ram,0x00010a3e26ac) */
/* WARNING: Removing unreachable block (ram,0x00010a3e26b8) */
/* WARNING: Removing unreachable block (ram,0x00010a3e2830) */

void FUN_10a0c3500(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long *plStack_60;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  iVar6 = 0x100;
  lVar7 = param_2;
  while ((lVar7 != 0 && (lVar7 = *(long *)(lVar7 + 0x188), lVar7 != 0))) {
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      __ZNSt3__19to_stringEi(auStack_50,0x100);
      FUN_109feb280(&lStack_38,&UNK_10f6393b2,auStack_50);
      FUN_10a0029c0(&lStack_38);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0c3558);
      (*pcVar3)();
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(ushort *)(param_1 + 0x118) >> 8 & 1) == 0) {
    if ((param_2 != 0) && ((*(ushort *)(param_2 + 0x118) >> 8 & 1) != 0)) {
      FUN_10a00946c(&UNK_10f6545cb);
LAB_10a3e2890:
      puVar5 = &UNK_10f6545ff;
      goto LAB_10a3e2898;
    }
    if (*(long *)(param_1 + 0x188) == param_2) {
LAB_10a3e283c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_10a3e2874;
    }
    *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) | 0x80;
    if (param_2 == 0) {
      FUN_10a044790(param_1 + 0x1e8);
LAB_10a3e2778:
      *(ushort *)(param_1 + 0x118) = *(ushort *)(param_1 + 0x118) & 0xff7f;
      *(long *)(param_1 + 0x188) = param_2;
      FUN_10a2e1c34(param_1,3);
      if ((*(ushort *)(param_1 + 0x118) >> 7 & 1) == 0) {
        FUN_10a2e1c34(param_1,3);
        FUN_10a2e1c34(param_1,4);
        bVar1 = *(byte *)(*(long *)(param_1 + 0x140) + 0x2a);
        if (((bVar1 ^ 0xff) & 0x7c) != 0) {
          *(byte *)(*(long *)(param_1 + 0x140) + 0x2a) = bVar1 | 0x7c;
          FUN_10a3e8248();
        }
        if (*(long *)(param_1 + 0x188) == 0) {
          uVar2 = *(ushort *)(param_1 + 0x118);
          *(ushort *)(param_1 + 0x118) = uVar2 & 0xfffd;
          if (((uVar2 & 0x13) == 0) != ((uVar2 & 0x11) == 0)) {
            FUN_10a3e4250(param_1);
          }
        }
        else {
          FUN_10a3e2a80(param_1,(*(ushort *)(*(long *)(param_1 + 0x188) + 0x118) & 0x13) == 0);
        }
      }
      goto LAB_10a3e283c;
    }
    if ((*(ushort *)(param_2 + 0x118) & 0xc) != 0) goto LAB_10a3e2890;
    lVar7 = param_2;
    if (param_2 != param_1) {
      do {
        lVar7 = *(long *)(lVar7 + 0x188);
      } while (lVar7 != param_1 && lVar7 != 0);
      if (lVar7 == 0) {
        plVar4 = (long *)0x18;
        __Znwm();
        plVar4[1] = param_2 + 400;
        plVar4[2] = param_1;
        lVar7 = *(long *)(param_2 + 400);
        *plVar4 = lVar7;
        *(long **)(lVar7 + 8) = plVar4;
        *(long **)(param_2 + 400) = plVar4;
        *(long *)(param_2 + 0x1a0) = *(long *)(param_2 + 0x1a0) + 1;
        uStack_78 = 0x10a3fde24;
        ppuStack_70 = &PTR_DAT_110bd2c30;
        lStack_68 = param_1;
        plStack_60 = plVar4;
        func_0x00010a108320(param_1 + 0x1e8,&uStack_78);
        FUN_10a044790(&uStack_78);
        (*(code *)*ppuStack_70)(&ppuStack_70);
        goto LAB_10a3e2778;
      }
    }
  }
  else {
    FUN_10a00946c(&UNK_10f65459d);
LAB_10a3e2874:
    ___stack_chk_fail();
  }
  puVar5 = &UNK_10f654636;
LAB_10a3e2898:
  FUN_10a00946c(puVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3e28a0);
  (*pcVar3)();
}



/* Entry: 10a0c35a0; end: 10a0c5293;  */

/* WARNING: Removing unreachable block (ram,0x00010a0c4dac) */
/* WARNING: Removing unreachable block (ram,0x00010a0c43e0) */
/* WARNING: Removing unreachable block (ram,0x00010a0c3a8c) */
/* WARNING: Removing unreachable block (ram,0x00010a0c4640) */
/* WARNING: Removing unreachable block (ram,0x00010a0c4a00) */
/* WARNING: Removing unreachable block (ram,0x00010a0c4df4) */
/* WARNING: Removing unreachable block (ram,0x00010a0c4970) */
/* WARNING: Removing unreachable block (ram,0x00010a0c4998) */

void FUN_10a0c35a0(long param_1,uint param_2,long *param_3,long param_4,long param_5,long *param_6,
                  undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  code *pcVar13;
  undefined6 *puVar14;
  undefined8 *puVar15;
  long *****ppppplVar16;
  long *plVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *****ppppplVar24;
  ulong uVar25;
  long *plVar26;
  int *piVar27;
  long *******ppppppplVar28;
  long lVar29;
  undefined4 *puVar30;
  long *******ppppppplVar31;
  long ******pppppplVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  long *****ppppplVar36;
  float fVar37;
  undefined8 uVar38;
  long *******ppppppplVar39;
  double dVar40;
  undefined8 uVar41;
  long ******pppppplVar42;
  long ******pppppplVar43;
  long ******pppppplStack_1b0;
  long *****ppppplStack_1a8;
  long ******pppppplStack_1a0;
  long *****ppppplStack_198;
  long lStack_190;
  long *plStack_188;
  long ******pppppplStack_180;
  long *****ppppplStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long ******pppppplStack_160;
  long *****ppppplStack_158;
  undefined7 uStack_150;
  byte bStack_149;
  long ******pppppplStack_140;
  long *****ppppplStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined6 uStack_107;
  undefined1 uStack_101;
  undefined8 uStack_100;
  long *****ppppplStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long ******pppppplStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined1 uStack_b2;
  undefined4 uStack_b1;
  uint uStack_ad;
  byte bStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
  if ((-1 < (int)param_2) &&
     (uVar19 = (*(long *)(param_4 + 200) - *(long *)(param_4 + 0xc0) >> 3) * 0x51b3bea3677d46cf,
     uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120),
     param_2 <= uVar19 && uVar19 - param_2 != 0)) {
    ppppppplVar28 = *(long ********)(param_4 + 0x28);
    pcVar18 = "";
    func_0x000107c2b054(&uStack_130,"");
    ppppppplVar39 = ppppppplVar28;
    FUN_10a3dd220(ppppppplVar28);
    func_0x00010a0fda30();
    FUN_10a3dd268(ppppppplVar28,ppppppplVar39,pcVar18,&uStack_130);
    uVar19 = (ulong)param_2;
    if (uStack_120._4_4_ < 0) {
      __ZdlPv(CONCAT17(uStack_130._7_1_,(undefined7)uStack_130));
    }
    lVar23 = *(long *)(param_4 + 0xc0);
    uVar20 = (*(long *)(param_4 + 200) - lVar23 >> 3) * 0x51b3bea3677d46cf;
    uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
    uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
    if (uVar20 < uVar19 || uVar20 - uVar19 == 0) goto LAB_10a0c4f6c;
    if (param_1 != 0) {
      FUN_10a0c3500(ppppppplVar28,param_1);
    }
    piVar27 = (int *)(lVar23 + uVar19 * 0x178);
    plVar21 = (long *)(piVar27 + 2);
    lVar23 = (long)*(char *)((long)piVar27 + 0x1f);
    if (lVar23 < 0) {
      lVar23 = *(long *)(piVar27 + 4);
      if (lVar23 != 0) {
        plVar21 = (long *)*plVar21;
        goto LAB_10a0c36b8;
      }
    }
    else if (*(char *)((long)piVar27 + 0x1f) != '\0') {
LAB_10a0c36b8:
      uStack_130._0_7_ = SUB87(plVar21,0);
      uStack_130._7_1_ = (undefined1)((ulong)plVar21 >> 0x38);
      uStack_128._0_4_ = (uint)lVar23;
      uStack_128._4_4_ = (undefined4)((ulong)lVar23 >> 0x20);
      FUN_10a0c34a4(ppppppplVar28,&uStack_130);
    }
    lVar23 = lRam00000001137e9560;
    pppppplVar32 = ppppppplVar28[0x28];
    uVar38 = NEON_fmov(0x3f800000,4);
    uStack_130._0_7_ = (undefined7)uVar38;
    uStack_130._7_1_ = (undefined1)((ulong)uVar38 >> 0x38);
    uStack_128._0_4_ = 0x3f800000;
    uStack_120._4_4_ = 0;
    uStack_118 = 0x3f800000;
    uStack_128._4_4_ = 0;
    uStack_120._0_4_ = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    lVar29 = lRam00000001137e9560;
    func_0x000107c2b0ac(lRam00000001137e9560,3);
    if (lVar29 == 0) {
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a0c4f6c;
    }
    if (*(long *)(lVar29 + 0x18) == *(long *)(piVar27 + 0x1e) - *(long *)(piVar27 + 0x1c) >> 3) {
      FUN_10a0b51b0(&uStack_c0,piVar27 + 0x1c);
      uStack_10c = *(undefined4 *)((undefined8 *)CONCAT26(uStack_ba,uStack_c0) + 1);
      uVar38 = *(undefined8 *)CONCAT26(uStack_ba,uStack_c0);
      uStack_114 = (undefined4)uVar38;
      uStack_110 = (undefined4)((ulong)uVar38 >> 0x20);
      uStack_b8 = uStack_c0;
      uStack_b2 = (undefined1)uStack_ba;
      uStack_b1._0_1_ = (undefined1)((ushort)uStack_ba >> 8);
      __ZdlPv();
      lVar23 = lRam00000001137e9560;
    }
    lVar29 = lVar23;
    func_0x000107c2b0ac(lVar23,4);
    if (lVar29 == 0) {
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a0c4f6c;
    }
    if (*(long *)(lVar29 + 0x18) == *(long *)(piVar27 + 0x12) - *(long *)(piVar27 + 0x10) >> 3) {
      FUN_10a0b51b0(&uStack_c0,piVar27 + 0x10);
      uVar41 = ((undefined8 *)CONCAT26(uStack_ba,uStack_c0))[1];
      uVar38 = *(undefined8 *)CONCAT26(uStack_ba,uStack_c0);
      uStack_120._4_4_ = (int)uVar41;
      uStack_118 = (undefined4)((ulong)uVar41 >> 0x20);
      uStack_128._4_4_ = (undefined4)uVar38;
      uStack_120._0_4_ = (undefined4)((ulong)uVar38 >> 0x20);
      uStack_b8 = uStack_c0;
      uStack_b2 = (undefined1)uStack_ba;
      uStack_b1._0_1_ = (undefined1)((ushort)uStack_ba >> 8);
      __ZdlPv();
      lVar23 = lRam00000001137e9560;
    }
    lVar29 = lVar23;
    func_0x000107c2b0ac(lVar23,3);
    if (lVar29 == 0) {
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a0c4f6c;
    }
    if (*(long *)(lVar29 + 0x18) == *(long *)(piVar27 + 0x18) - *(long *)(piVar27 + 0x16) >> 3) {
      FUN_10a0b51b0(&uStack_c0,piVar27 + 0x16);
      uStack_128._0_4_ = *(uint *)((undefined8 *)CONCAT26(uStack_ba,uStack_c0) + 1);
      uVar38 = *(undefined8 *)CONCAT26(uStack_ba,uStack_c0);
      uStack_130._0_7_ = (undefined7)uVar38;
      uStack_130._7_1_ = (undefined1)((ulong)uVar38 >> 0x38);
      uStack_b8 = uStack_c0;
      uStack_b2 = (undefined1)uStack_ba;
      uStack_b1._0_1_ = (undefined1)((ushort)uStack_ba >> 8);
      __ZdlPv();
      lVar23 = lRam00000001137e9560;
    }
    func_0x000107c2b0ac(lVar23,0x24);
    if (lVar23 == 0) {
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a0c4f6c;
    }
    if (*(long *)(lVar23 + 0x18) == *(long *)(piVar27 + 0x24) - *(long *)(piVar27 + 0x22) >> 3) {
      FUN_10a0b51b0(&uStack_c0,piVar27 + 0x22);
      puVar15 = (undefined8 *)CONCAT26(uStack_ba,uStack_c0);
      uStack_e0 = puVar15[5];
      uStack_e8 = puVar15[4];
      uStack_d0 = puVar15[7];
      pppppplStack_d8 = (long ******)puVar15[6];
      uStack_100 = puVar15[1];
      uVar38 = *puVar15;
      uStack_f0 = puVar15[3];
      ppppplStack_f8 = (long *****)puVar15[2];
      uStack_108 = (undefined1)uVar38;
      uStack_107 = (undefined6)((ulong)uVar38 >> 8);
      uStack_101 = (undefined1)((ulong)uVar38 >> 0x38);
      uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
      uStack_b8 = uStack_c0;
      uStack_b2 = (undefined1)uStack_ba;
      uStack_b1._0_1_ = (undefined1)((ushort)uStack_ba >> 8);
      __ZdlPv();
    }
    if ((char)uStack_c8 == '\x01') {
      ppppppplVar39 = (long *******)&uStack_108;
      func_0x00010a3e8440(pppppplVar32);
    }
    else {
      FUN_10a3e3894(pppppplVar32,&uStack_114);
      FUN_10a3e82bc(pppppplVar32,(long)&uStack_128 + 4);
      ppppppplVar39 = (long *******)&uStack_130;
      FUN_10a3e814c(pppppplVar32);
    }
    uVar2 = piVar27[9];
    uVar19 = (ulong)uVar2;
    if (((-1 < (int)uVar2) &&
        (uVar20 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555,
        uVar19 <= uVar20 && uVar20 - uVar19 != 0)) &&
       (uVar20 = (*(long *)(param_4 + 0xb0) - *(long *)(param_4 + 0xa8) >> 3) * 0xf83e0f83e0f83e1,
       uVar19 <= uVar20 && uVar20 - uVar19 != 0)) {
      plVar21 = (long *)(*param_3 + (ulong)uVar2 * 0x18);
      lVar23 = *plVar21;
      lVar29 = plVar21[1];
      if (lVar29 != lVar23) {
        uVar20 = 0;
        ppppppplVar31 = (long *******)(*(long *)(param_4 + 0xa8) + uVar19 * 0x108);
        iVar3 = *(int *)(ppppppplVar28[0x24][0x144] + 3);
        do {
          if ((ulong)(lVar29 - lVar23 >> 4) <= uVar20) goto LAB_10a0c4f04;
          plVar17 = (long *)(lVar23 + uVar20 * 0x10);
          plStack_168 = (long *)plVar17[1];
          uStack_170 = *plVar17;
          if (plVar17[1] != 0) {
            plVar17 = (long *)(plVar17[1] + 8);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar14 = &uStack_c0;
          pcVar18 = "";
          func_0x000107c2b054(puVar14,"");
          pppppplVar32 = ppppppplVar28[0x24];
          func_0x00010a0fda30();
          FUN_10a0d4c50(&pppppplStack_180,pppppplVar32,puVar14,pcVar18);
          puVar14 = (undefined6 *)CONCAT26(uStack_ba,uStack_c0);
          uVar19 = CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,uStack_b8));
          if (-1 < (char)bStack_a9) {
            puVar14 = &uStack_c0;
            uVar19 = (ulong)bStack_a9;
          }
          func_0x000107c2c4d8(pppppplStack_180 + 0x2a,puVar14,uVar19);
          ppppplStack_158 = ppppplStack_178;
          pppppplStack_160 = pppppplStack_180;
          if ((long ******)ppppplStack_178 != (long ******)0x0) {
            pppppplVar32 = (long ******)(ppppplStack_178 + 1);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar6) {
                *pppppplVar32 = (long *****)((long)*pppppplVar32 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_108 = 0;
          uStack_107 = 0;
          uStack_101 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          ppppplStack_f8 = (long *****)0x0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120._0_4_ = 0;
          uStack_120._4_4_ = 0;
          uStack_130._0_7_ = 0x10a0d4f18;
          uStack_130._7_1_ = 0;
          uStack_128._0_4_ = 0x10950c70;
          uStack_128._4_4_ = 1;
          FUN_10a3e4814(ppppppplVar28,&pppppplStack_160,&uStack_130);
          (**(code **)CONCAT44(uStack_128._4_4_,(uint)uStack_128))(&uStack_128);
          ppppplVar36 = ppppplStack_158;
          if ((long ******)ppppplStack_158 != (long ******)0x0) {
            pppppplVar32 = (long ******)(ppppplStack_158 + 1);
            do {
              ppppplVar24 = *pppppplVar32;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar6) {
                *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppplVar24 == (long *****)0x0) {
              (*(code *)(*ppppplStack_158)[2])(ppppplStack_158);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
            }
          }
          plStack_188 = plStack_168;
          lStack_190 = uStack_170;
          if (plStack_168 != (long *)0x0) {
            plVar17 = plStack_168 + 1;
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_10a0d4a88(pppppplStack_180,&lStack_190);
          plVar17 = plStack_188;
          if (plStack_188 != (long *)0x0) {
            plVar22 = plStack_188 + 1;
            do {
              lVar23 = *plVar22;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *plVar22 = lVar23 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_188 + 0x10))(plStack_188);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          pppppplVar32 = (long ******)(long)*(char *)((long)ppppppplVar31 + 0x17);
          ppppppplVar39 = ppppppplVar31;
          if ((long)pppppplVar32 < 0) {
            pppppplVar32 = ppppppplVar31[1];
            ppppppplVar39 = (long *******)*ppppppplVar31;
          }
          func_0x000107c2c4d8(pppppplStack_180 + 0x2a,ppppppplVar39,pppppplVar32);
          pppppplVar32 = ppppppplVar31[3];
          uVar19 = (long)ppppppplVar31[4] - (long)pppppplVar32 >> 8;
          uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
          uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
          if (uVar19 <= uVar20) goto LAB_10a0c4f6c;
          uVar2 = *(uint *)(pppppplVar32 + uVar20 * 0x20 + 3);
          if (-1 < (int)uVar2) {
            uVar25 = param_3[7] - param_3[6] >> 4;
            if ((int)uVar2 < (int)uVar25) {
              if (uVar25 <= uVar2) {
                FUN_10a0d4f80();
                goto LAB_10a0c4f6c;
              }
              puVar15 = (undefined8 *)(param_3[6] + (ulong)uVar2 * 0x10);
              pppppplVar42 = (long ******)puVar15[1];
              ppppppplVar39 = (long *******)*puVar15;
              if (pppppplVar42 != (long ******)0x0) {
                pppppplVar32 = pppppplVar42 + 1;
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)*pppppplVar32 + 1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                pppppplVar32 = ppppppplVar31[3];
                uVar19 = (long)ppppppplVar31[4] - (long)pppppplVar32 >> 8;
              }
              pppppplStack_140 = (long ******)ppppppplVar39;
              ppppplStack_138 = (long *****)pppppplVar42;
              uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
              uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
              if (uVar19 <= uVar20) goto LAB_10a0c4f6c;
              pppppplVar32 = pppppplVar32 + uVar20 * 0x20;
              pppppplVar43 = pppppplVar32;
              FUN_10a0e3118(pppppplVar32,lRam00000001137e9588 + 0x18);
              if ((ppppppplVar39[0x45] != ppppppplVar39[0x46]) &&
                 (ppppplVar36 = *ppppppplVar39[0x45], ppppplVar36 != (long *****)0x0)) {
                ppppplVar24 = ppppplVar36 + 0x40;
                FUN_10a0e3500(&uStack_c0,ppppplVar24);
                iVar35 = uStack_120._4_4_;
                uVar10 = (undefined4)uStack_120;
                uVar8 = uStack_128._4_4_;
                uVar2 = (uint)uStack_128;
                uStack_128._0_4_ = 0x18;
                uVar7 = (uint)uStack_128;
                uStack_128._4_4_ = 0;
                uVar9 = uStack_128._4_4_;
                uStack_120._0_4_ = 0x20;
                uVar11 = (undefined4)uStack_120;
                uStack_120._4_4_ = -0x80000000;
                iVar12 = uStack_120._4_4_;
                uStack_120._0_4_ = uVar10;
                if (pppppplVar32 + 1 == pppppplVar43) {
                  uStack_130._0_7_ = 0x6c6f4365736162;
                  uStack_130._7_1_ = 0x6f;
                  uStack_128._0_4_ = 0x63614672;
                  uStack_128._4_4_ = 0x726f74;
                  uStack_120._4_4_ = CONCAT13(0xf,(int3)iVar35);
                  uStack_118 = 0;
                  uStack_114 = 0;
                  func_0x000107c2b080(&uStack_130);
                  ppppplVar16 = ppppplVar36;
                  FUN_10a336830(ppppplVar36,&uStack_130);
                  if (uStack_120._4_4_ < 0) {
                    __ZdlPv(CONCAT17(uStack_130._7_1_,(undefined7)uStack_130));
                  }
                  if (((ulong)ppppplVar16 & 1) == 0) {
                    puVar15 = (undefined8 *)0x20;
                    __Znwm();
                    uStack_130._0_7_ = SUB87(puVar15,0);
                    uStack_130._7_1_ = (undefined1)((ulong)puVar15 >> 0x38);
                    puVar15[1] = 0x4f435f5845545245;
                    *puVar15 = 0x565f454c42414e45;
                    puVar15[2] = 0x454e4f4e5f524f4c;
                    *(undefined1 *)(puVar15 + 3) = 0;
                    uStack_128._0_4_ = uVar7;
                    uStack_128._4_4_ = uVar9;
                    uStack_120._0_4_ = uVar11;
                    uStack_120._4_4_ = iVar12;
                    func_0x00010a0e35d4(&uStack_c0,&uStack_130);
                    goto LAB_10a0c3ccc;
                  }
                }
                else {
                  puVar15 = (undefined8 *)0x20;
                  uStack_128._0_4_ = uVar2;
                  uStack_128._4_4_ = uVar8;
                  uStack_120._4_4_ = iVar35;
                  __Znwm();
                  uStack_130._0_7_ = SUB87(puVar15,0);
                  uStack_130._7_1_ = (undefined1)((ulong)puVar15 >> 0x38);
                  puVar15[1] = 0x4f435f5845545245;
                  *puVar15 = 0x565f454c42414e45;
                  puVar15[2] = 0x455341425f524f4c;
                  *(undefined1 *)(puVar15 + 3) = 0;
                  uStack_128._0_4_ = uVar7;
                  uStack_128._4_4_ = uVar9;
                  uStack_120._0_4_ = uVar11;
                  uStack_120._4_4_ = iVar12;
                  func_0x00010a0e35d4(&uStack_c0,&uStack_130);
LAB_10a0c3ccc:
                  if (uStack_120._4_4_ < 0) {
                    __ZdlPv(CONCAT17(uStack_130._7_1_,(undefined7)uStack_130));
                  }
                }
                FUN_10a0e3500(&pppppplStack_160,&uStack_c0);
                FUN_10a0da1b8(ppppplVar24,ppppplVar36[0x41]);
                ppppplVar36[0x40] = (long ****)pppppplStack_160;
                ppppplVar36[0x41] = (long ****)ppppplStack_158;
                ppppplVar36[0x42] = (long ****)CONCAT17(bStack_149,uStack_150);
                if ((long ****)CONCAT17(bStack_149,uStack_150) == (long ****)0x0) {
                  *ppppplVar24 = (long ****)(ppppplVar36 + 0x41);
                }
                else {
                  ppppplStack_158[2] = (long ****)(ppppplVar36 + 0x41);
                  ppppplStack_158 = (long *****)0x0;
                  bStack_149 = 0;
                  uStack_150 = 0;
                  pppppplStack_160 = &ppppplStack_158;
                }
                FUN_10a0da1b8(&pppppplStack_160,ppppplStack_158);
                FUN_10a0da1b8(&uStack_c0,
                              CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,uStack_b8)));
              }
              pppppplStack_1a0 = pppppplStack_140;
              if (pppppplVar42 != (long ******)0x0) {
                pppppplVar32 = pppppplVar42 + 1;
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)*pppppplVar32 + 1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              ppppppplVar39 = &pppppplStack_1a0;
              ppppplStack_198 = (long *****)pppppplVar42;
              FUN_10a0d4b14(pppppplStack_180);
              ppppplVar36 = ppppplStack_198;
              if ((long ******)ppppplStack_198 != (long ******)0x0) {
                pppppplVar32 = (long ******)(ppppplStack_198 + 1);
                do {
                  ppppplVar24 = *pppppplVar32;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppplVar24 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_198)[2])(ppppplStack_198);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                }
              }
              pppppplVar32 = pppppplStack_140;
              plVar17 = (long *)0x38;
              __Znwm();
              *plVar17 = 0;
              plVar17[1] = 0;
              if (*(char *)((long)pppppplVar32 + 0x6f) < '\0') {
                ppppppplVar39 = (long *******)pppppplVar32[0xb];
                func_0x000107c3192c(plVar17 + 2,ppppppplVar39,pppppplVar32[0xc]);
              }
              else {
                pppppplVar43 = (long ******)pppppplVar32[0xc];
                pppppplVar42 = (long ******)pppppplVar32[0xb];
                plVar17[4] = (long)pppppplVar32[0xd];
                plVar17[3] = (long)pppppplVar43;
                plVar17[2] = (long)pppppplVar42;
              }
              ppppplVar36 = ppppplStack_138;
              plVar17[5] = (long)pppppplVar32;
              plVar17[6] = (long)ppppplStack_138;
              if ((long ******)ppppplStack_138 == (long ******)0x0) {
                lVar23 = *(long *)(param_5 + 0x20);
                *plVar17 = lVar23;
                plVar17[1] = param_5 + 0x20;
                *(long **)(lVar23 + 8) = plVar17;
                *(long **)(param_5 + 0x20) = plVar17;
                *(long *)(param_5 + 0x30) = *(long *)(param_5 + 0x30) + 1;
              }
              else {
                pppppplVar32 = (long ******)(ppppplStack_138 + 1);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)*pppppplVar32 + 1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                lVar23 = *(long *)(param_5 + 0x20);
                *plVar17 = lVar23;
                plVar17[1] = param_5 + 0x20;
                *(long **)(lVar23 + 8) = plVar17;
                *(long **)(param_5 + 0x20) = plVar17;
                *(long *)(param_5 + 0x30) = *(long *)(param_5 + 0x30) + 1;
                do {
                  ppppplVar24 = *pppppplVar32;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppplVar24 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_138)[2])(ppppplStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                }
              }
            }
          }
          lVar23 = uStack_170;
          plVar17 = *(long **)(uStack_170 + 0xe0);
          if (plVar17 == (long *)0x0) {
            lVar29 = 0;
          }
          else {
            (**(code **)(*plVar17 + 0x90))();
            lVar29 = *plVar17;
          }
          if (*(long *)(lVar29 + 0x40) != *(long *)(lVar29 + 0x48)) {
            uStack_128._0_4_ = (uint)uStack_128 & 0xffffff00;
            uStack_130._0_7_ = 0x110bd6470;
            uStack_130._7_1_ = 0;
            uStack_118 = 0;
            uStack_114 = 0;
            uStack_120._0_4_ = 0;
            uStack_120._4_4_ = 0;
            uStack_108 = 0;
            uStack_107 = 0;
            uStack_101 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_100 = CONCAT44(uStack_100._4_4_,0x3f800000);
            ppppplStack_f8 = (long *****)(((ulong)ppppplStack_f8 >> 8 & 0xffffff) << 8);
            uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
            uStack_e0 = 0;
            uStack_e8 = 0;
            uStack_d0 = 0;
            pppppplStack_d8 = (long ******)0x0;
            uStack_c8 = 0x3f800000;
            lVar23 = *(long *)(lVar29 + 0x40);
            if (*(long *)(lVar29 + 0x48) != lVar23) {
              lVar33 = 0;
              uVar19 = 0;
              do {
                iVar35 = (int)uVar19;
                if (iVar35 < 0) {
LAB_10a0c3f18:
                  fVar37 = 0.0;
                  if (-1 < iVar35) {
                    pppppplVar32 = ppppppplVar31[6];
                    uVar25 = (long)ppppppplVar31[7] - (long)pppppplVar32 >> 3;
                    if (iVar35 < (int)uVar25) goto LAB_10a0c3f34;
                  }
                }
                else {
                  pppppplVar32 = *(long *******)(piVar27 + 0x28);
                  uVar25 = *(long *)(piVar27 + 0x2a) - (long)pppppplVar32 >> 3;
                  if ((int)uVar25 <= iVar35) goto LAB_10a0c3f18;
LAB_10a0c3f34:
                  if (uVar25 <= (uVar19 & 0x7fffffff)) goto LAB_10a0c4f6c;
                  fVar37 = (float)(double)pppppplVar32[uVar19 & 0x7fffffff];
                }
                FUN_10a428b78(fVar37,&uStack_130,lVar23 + lVar33);
                uVar19 = uVar19 + 1;
                lVar23 = *(long *)(lVar29 + 0x40);
                lVar33 = lVar33 + 0x48;
              } while (uVar19 < (ulong)((*(long *)(lVar29 + 0x48) - lVar23 >> 3) *
                                       -0x71c71c71c71c71c7));
            }
            if (iVar3 < 0xc6) {
              ppppppplVar39 = &pppppplStack_160;
              pcVar18 = "";
              func_0x000107c2b054(ppppppplVar39,"");
              pppppplVar32 = ppppppplVar28[0x24];
              func_0x00010a0fda30();
              FUN_10a0d4f94(&pppppplStack_1b0,pppppplVar32,ppppppplVar39,pcVar18);
              ppppppplVar39 = (long *******)pppppplStack_160;
              pppppplVar32 = (long ******)ppppplStack_158;
              if (-1 < (char)bStack_149) {
                ppppppplVar39 = &pppppplStack_160;
                pppppplVar32 = (long ******)(ulong)bStack_149;
              }
              func_0x000107c2c4d8(pppppplStack_1b0 + 0x2a,ppppppplVar39,pppppplVar32);
              ppppplStack_138 = ppppplStack_1a8;
              pppppplStack_140 = pppppplStack_1b0;
              if ((long ******)ppppplStack_1a8 != (long ******)0x0) {
                pppppplVar32 = (long ******)(ppppplStack_1a8 + 1);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)*pppppplVar32 + 1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_a8 = 0;
              uStack_ad = 0;
              bStack_a9 = 0;
              uStack_c0 = 0x10a0d4f18;
              uStack_ba = 0;
              uStack_b8 = 0x110950c70;
              uStack_b2 = 0;
              uStack_b1 = 0;
              ppppppplVar39 = &pppppplStack_140;
              FUN_10a3e4814(ppppppplVar28,ppppppplVar39,&uStack_c0);
              (**(code **)CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,uStack_b8)))(&uStack_b8)
              ;
              ppppplVar36 = ppppplStack_138;
              if ((long ******)ppppplStack_138 != (long ******)0x0) {
                pppppplVar32 = (long ******)(ppppplStack_138 + 1);
                do {
                  ppppplVar24 = *pppppplVar32;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppplVar24 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_138)[2])(ppppplStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                }
              }
              if ((char)bStack_149 < '\0') {
                __ZdlPv(pppppplStack_160);
              }
              pppppplVar32 = pppppplStack_1b0;
              *(undefined1 *)(pppppplStack_1b0 + 0x3f) = (undefined1)uStack_128;
              if (pppppplStack_1b0 + 0x3e == (long ******)&uStack_130) {
                pppppplStack_1b0[0x45] = ppppplStack_f8;
                *(undefined1 *)(pppppplStack_1b0 + 0x46) = (undefined1)uStack_f0;
              }
              else {
                *(undefined4 *)(pppppplStack_1b0 + 0x44) = (undefined4)uStack_100;
                FUN_10a0d51f8(pppppplStack_1b0 + 0x40,CONCAT44(uStack_10c,uStack_110),0);
                pppppplVar32[0x45] = ppppplStack_f8;
                *(undefined1 *)(pppppplVar32 + 0x46) = (undefined1)uStack_f0;
                *(uint *)(pppppplVar32 + 0x4b) = uStack_c8;
                ppppppplVar39 = (long *******)pppppplStack_d8;
                FUN_10a0d59e4(pppppplVar32 + 0x47,pppppplStack_d8,0);
              }
              ppppplVar36 = ppppplStack_1a8;
              if ((long ******)ppppplStack_1a8 != (long ******)0x0) {
                pppppplVar32 = (long ******)(ppppplStack_1a8 + 1);
                do {
                  ppppplVar24 = *pppppplVar32;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppplVar24 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_1a8)[2])(ppppplStack_1a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                }
              }
            }
            else {
              ppppppplVar39 = (long *******)&uStack_130;
              FUN_10a0d4bb0(pppppplStack_180);
            }
            uStack_130._0_7_ = 0x110bd6470;
            uStack_130._7_1_ = 0;
            func_0x00010a1f9d6c(&uStack_e8);
            FUN_10a44a358(&uStack_120);
            lVar23 = uStack_170;
          }
          plVar17 = (long *)0x38;
          __Znwm();
          *plVar17 = 0;
          plVar17[1] = 0;
          if (*(char *)(lVar23 + 0x6f) < '\0') {
            ppppppplVar39 = *(long ********)(lVar23 + 0x58);
            func_0x000107c3192c(plVar17 + 2,ppppppplVar39,*(undefined8 *)(lVar23 + 0x60));
          }
          else {
            lVar33 = *(long *)(lVar23 + 0x60);
            lVar29 = *(long *)(lVar23 + 0x58);
            plVar17[4] = *(long *)(lVar23 + 0x68);
            plVar17[3] = lVar33;
            plVar17[2] = lVar29;
          }
          ppppplVar36 = ppppplStack_178;
          plVar17[5] = lVar23;
          plVar17[6] = (long)plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar22 = plStack_168 + 1;
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *plVar22 = *plVar22 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar23 = *(long *)(param_5 + 0x38);
          *plVar17 = lVar23;
          plVar17[1] = param_5 + 0x38;
          *(long **)(lVar23 + 8) = plVar17;
          *(long **)(param_5 + 0x38) = plVar17;
          *(long *)(param_5 + 0x48) = *(long *)(param_5 + 0x48) + 1;
          if ((long ******)ppppplStack_178 != (long ******)0x0) {
            pppppplVar32 = (long ******)(ppppplStack_178 + 1);
            do {
              ppppplVar24 = *pppppplVar32;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar6) {
                *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppplVar24 == (long *****)0x0) {
              (*(code *)(*ppppplStack_178)[2])(ppppplStack_178);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
            }
          }
          plVar17 = plStack_168;
          if (plStack_168 != (long *)0x0) {
            plVar22 = plStack_168 + 1;
            do {
              lVar23 = *plVar22;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *plVar22 = lVar23 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_168 + 0x10))(plStack_168);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
          }
          uVar20 = uVar20 + 1;
          lVar23 = *plVar21;
          lVar29 = plVar21[1];
        } while (uVar20 < (ulong)(lVar29 - lVar23 >> 4));
      }
    }
    if (*(char *)(param_4 + 0x1d) == '\x01') {
      plVar17 = param_3 + 10;
      plVar22 = (long *)*plVar17;
      plVar21 = plVar17;
      uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
      uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
      if (plVar22 != (long *)0x0) {
        do {
          lVar23 = 8;
          if ((int)param_2 <= (int)plVar22[4]) {
            lVar23 = 0;
            plVar21 = plVar22;
          }
          plVar22 = *(long **)((long)plVar22 + lVar23);
        } while (plVar22 != (long *)0x0);
        uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
        uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
        if ((plVar21 != plVar17) &&
           (uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128),
           uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120),
           (int)plVar21[4] <= (int)param_2)) {
          pcVar18 = "";
          puVar14 = &uStack_c0;
          func_0x000107c2b054(puVar14,"");
          pppppplVar32 = ppppppplVar28[0x24];
          func_0x00010a0fda30();
          FUN_10a0d61d8(&pppppplStack_140,pppppplVar32,puVar14,pcVar18);
          puVar14 = (undefined6 *)CONCAT26(uStack_ba,uStack_c0);
          uVar19 = CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,uStack_b8));
          if (-1 < (char)bStack_a9) {
            puVar14 = &uStack_c0;
            uVar19 = (ulong)bStack_a9;
          }
          func_0x000107c2c4d8(pppppplStack_140 + 0x2a,puVar14,uVar19);
          ppppplStack_158 = ppppplStack_138;
          pppppplStack_160 = pppppplStack_140;
          if ((long ******)ppppplStack_138 != (long ******)0x0) {
            pppppplVar32 = (long ******)(ppppplStack_138 + 1);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar6) {
                *pppppplVar32 = (long *****)((long)*pppppplVar32 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_108 = 0;
          uStack_107 = 0;
          uStack_101 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          ppppplStack_f8 = (long *****)0x0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120._0_4_ = 0;
          uStack_120._4_4_ = 0;
          uStack_130._0_7_ = 0x10a0d4f18;
          uStack_130._7_1_ = 0;
          uStack_128._0_4_ = 0x10950c70;
          uStack_128._4_4_ = 1;
          ppppppplVar39 = &pppppplStack_160;
          FUN_10a3e4814(ppppppplVar28,ppppppplVar39,&uStack_130);
          (**(code **)CONCAT44(uStack_128._4_4_,(uint)uStack_128))(&uStack_128);
          ppppplVar36 = ppppplStack_158;
          if ((long ******)ppppplStack_158 != (long ******)0x0) {
            pppppplVar32 = (long ******)(ppppplStack_158 + 1);
            do {
              ppppplVar24 = *pppppplVar32;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
              if (bVar6) {
                *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppplVar24 == (long *****)0x0) {
              (*(code *)(*ppppplStack_158)[2])(ppppplStack_158);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
            }
          }
          plVar17 = (long *)*plVar17;
joined_r0x00010a0c43ec:
          if (plVar17 == (long *)0x0) {
LAB_10a0c4418:
            FUN_109ffdddc("map::at:  key not found");
          }
          else {
            while ((int)param_2 < (int)plVar17[4]) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10a0c4418;
            }
            if ((int)plVar17[4] < (int)param_2) goto code_r0x00010a0c4410;
            uStack_c0 = 0;
            uStack_ba = 0;
            uStack_b8 = 0;
            uStack_b2 = 0;
            uStack_b1 = 0;
            uStack_ad = 0;
            bStack_a9 = 0;
            plVar21 = (long *)plVar17[5];
            plVar17 = (long *)plVar17[6];
            lVar23 = (long)plVar17 - (long)plVar21;
            if (lVar23 == 0) goto LAB_10a0c49b0;
            plVar22 = (long *)((lVar23 >> 3) * -0x3333333333333333);
            if (plVar22 < (long *)0x666666666666667) {
              FUN_10a0cca54();
              plVar26 = plVar22 + (long)ppppppplVar39 * 5;
              uStack_c0 = SUB86(plVar22,0);
              uStack_ba = (undefined2)((ulong)plVar22 >> 0x30);
              uStack_b1._1_3_ = SUB83(plVar26,0);
              uStack_ad = (uint)((ulong)plVar26 >> 0x18);
              bStack_a9 = (byte)((ulong)plVar26 >> 0x38);
              do {
                lVar23 = plVar21[1];
                lVar29 = *plVar21;
                plVar22[1] = plVar21[1];
                *plVar22 = lVar29;
                if (lVar23 != 0) {
                  plVar26 = (long *)(lVar23 + 8);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                    if (bVar6) {
                      *plVar26 = *plVar26 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if (*(char *)((long)plVar21 + 0x27) < '\0') {
                  func_0x000107c3192c(plVar22 + 2,plVar21[2],plVar21[3]);
                }
                else {
                  lVar29 = plVar21[3];
                  lVar23 = plVar21[2];
                  plVar22[4] = plVar21[4];
                  plVar22[3] = lVar29;
                  plVar22[2] = lVar23;
                }
                plVar21 = plVar21 + 5;
                plVar22 = plVar22 + 5;
              } while (plVar21 != plVar17);
              uStack_b8 = SUB86(plVar22,0);
              uStack_b2 = (undefined1)((ulong)plVar22 >> 0x30);
              uStack_b1._0_1_ = (undefined1)((ulong)plVar22 >> 0x38);
              plVar21 = (long *)CONCAT26(uStack_ba,uStack_c0);
              if (plVar21 != plVar22) {
                do {
                  ppppplStack_158 = (long *****)plVar21[1];
                  pppppplStack_160 = (long ******)*plVar21;
                  if (plVar21[1] != 0) {
                    plVar17 = (long *)(plVar21[1] + 8);
                    do {
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar6) {
                        *plVar17 = *plVar17 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  plVar17 = plVar21 + 2;
                  uStack_130._0_7_ = SUB87(plVar17,0);
                  uStack_130._7_1_ = (undefined1)((ulong)plVar17 >> 0x38);
                  ppppppplVar39 = (long *******)(pppppplStack_140 + 0x3e);
                  FUN_10a439a9c(ppppppplVar39,plVar17,&UNK_10dd5b8f9,&uStack_130,&uStack_170);
                  FUN_10a40e028(ppppppplVar39 + 7,&pppppplStack_160);
                  ppppplVar36 = ppppplStack_158;
                  if ((long ******)ppppplStack_158 != (long ******)0x0) {
                    pppppplVar32 = (long ******)(ppppplStack_158 + 1);
                    do {
                      ppppplVar24 = *pppppplVar32;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                      if (bVar6) {
                        *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (ppppplVar24 == (long *****)0x0) {
                      (*(code *)(*ppppplStack_158)[2])(ppppplStack_158);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                    }
                  }
                  pppppplVar32 = ppppppplVar28[0x2e];
                  if (-1 < (char)*(byte *)((long)ppppppplVar28 + 0x17f)) {
                    pppppplVar32 = (long ******)(ulong)*(byte *)((long)ppppppplVar28 + 0x17f);
                  }
                  FUN_10a003c90(&uStack_130,(long)pppppplVar32 + 1,&pppppplStack_180);
                  puVar15 = (undefined8 *)CONCAT17(uStack_130._7_1_,(undefined7)uStack_130);
                  if (-1 < uStack_120._4_4_) {
                    puVar15 = &uStack_130;
                  }
                  if (pppppplVar32 != (long ******)0x0) {
                    ppppppplVar39 = (long *******)ppppppplVar28[0x2d];
                    if (-1 < *(char *)((long)ppppppplVar28 + 0x17f)) {
                      ppppppplVar39 = ppppppplVar28 + 0x2d;
                    }
                    _memmove(puVar15,ppppppplVar39,pppppplVar32);
                  }
                  *(undefined2 *)((long)puVar15 + (long)pppppplVar32) = 0x5f;
                  lVar23 = *plVar21;
                  uVar19 = *(ulong *)(lVar23 + 0x60);
                  plVar26 = (long *)*(long *)(lVar23 + 0x58);
                  if (-1 < (char)*(byte *)(lVar23 + 0x6f)) {
                    uVar19 = (ulong)*(byte *)(lVar23 + 0x6f);
                    plVar26 = (long *)(lVar23 + 0x58);
                  }
                  puVar15 = &uStack_130;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (puVar15,plVar26,uVar19);
                  uVar38 = *puVar15;
                  uVar41 = puVar15[1];
                  uStack_170._0_7_ =
                       CONCAT43(*(undefined4 *)((long)puVar15 + 0x13),
                                (int3)*(undefined4 *)(puVar15 + 2));
                  cVar4 = *(char *)((long)puVar15 + 0x17);
                  puVar15[1] = 0;
                  puVar15[2] = 0;
                  *puVar15 = 0;
                  if (uStack_120._4_4_ < 0) {
                    __ZdlPv(CONCAT17(uStack_130._7_1_,(undefined7)uStack_130));
                    if (cVar4 < '\0') goto LAB_10a0c48ac;
LAB_10a0c4884:
                    uStack_130._0_7_ = (undefined7)uVar38;
                    uStack_130._7_1_ = (undefined1)((ulong)uVar38 >> 0x38);
                    uStack_128._0_4_ = (uint)uVar41;
                    uStack_128._4_4_ = (undefined4)((ulong)uVar41 >> 0x20);
                    uStack_120._4_4_ = CONCAT13(cVar4,(int3)((ulong)uStack_170 >> 0x20));
                    uStack_120._0_4_ = (undefined4)uStack_170;
                  }
                  else {
                    if (-1 < cVar4) goto LAB_10a0c4884;
LAB_10a0c48ac:
                    func_0x000107c3192c(&uStack_130,uVar38,uVar41);
                  }
                  if (*(char *)((long)plVar21 + 0x27) < '\0') {
                    func_0x000107c3192c(&uStack_118,plVar21[2],plVar21[3]);
                  }
                  else {
                    lVar23 = plVar21[4];
                    uStack_108 = (undefined1)lVar23;
                    uStack_107 = (undefined6)((ulong)lVar23 >> 8);
                    uStack_101 = (undefined1)((ulong)lVar23 >> 0x38);
                    uStack_110 = (undefined4)plVar21[3];
                    uStack_10c = (undefined4)((ulong)plVar21[3] >> 0x20);
                    uStack_118 = (undefined4)*plVar17;
                    uStack_114 = (undefined4)((ulong)*plVar17 >> 0x20);
                  }
                  plVar17 = (long *)0x50;
                  __Znwm();
                  plVar17[4] = CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
                  plVar17[3] = CONCAT44(uStack_128._4_4_,(uint)uStack_128);
                  plVar17[2] = CONCAT17(uStack_130._7_1_,(undefined7)uStack_130);
                  plVar17[6] = CONCAT44(uStack_10c,uStack_110);
                  plVar17[5] = CONCAT44(uStack_114,uStack_118);
                  plVar17[7] = CONCAT17(uStack_101,CONCAT61(uStack_107,uStack_108));
                  lVar23 = plVar21[1];
                  lVar29 = *plVar21;
                  plVar17[9] = plVar21[1];
                  plVar17[8] = lVar29;
                  if (lVar23 != 0) {
                    plVar26 = (long *)(lVar23 + 8);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                      if (bVar6) {
                        *plVar26 = *plVar26 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  lVar23 = *(long *)(param_5 + 0x50);
                  *plVar17 = lVar23;
                  plVar17[1] = param_5 + 0x50;
                  *(long **)(lVar23 + 8) = plVar17;
                  *(long **)(param_5 + 0x50) = plVar17;
                  *(long *)(param_5 + 0x60) = *(long *)(param_5 + 0x60) + 1;
                  uStack_101 = 0;
                  uStack_107 = 0;
                  uStack_108 = 0;
                  uStack_10c = 0;
                  uStack_110 = 0;
                  uStack_114 = 0;
                  uStack_118 = 0;
                  uStack_120._4_4_ = 0;
                  uStack_120._0_4_ = 0;
                  uStack_128._4_4_ = 0;
                  uStack_128._0_4_ = 0;
                  uStack_130._7_1_ = 0;
                  uStack_130._0_7_ = 0;
                  if (cVar4 < '\0') {
                    uStack_130._0_7_ = 0;
                    uStack_130._7_1_ = 0;
                    uStack_128._0_4_ = 0;
                    uStack_128._4_4_ = 0;
                    uStack_120._0_4_ = 0;
                    uStack_120._4_4_ = 0;
                    uStack_118 = 0;
                    uStack_114 = 0;
                    uStack_110 = 0;
                    uStack_10c = 0;
                    uStack_108 = 0;
                    uStack_107 = 0;
                    uStack_101 = 0;
                    __ZdlPv(uVar38);
                  }
                  plVar21 = plVar21 + 5;
                } while (plVar21 != plVar22);
              }
LAB_10a0c49b0:
              FUN_10a0d64a4(&uStack_c0);
              ppppplVar36 = ppppplStack_138;
              uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
              uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
              if ((long ******)ppppplStack_138 != (long ******)0x0) {
                pppppplVar32 = (long ******)(ppppplStack_138 + 1);
                do {
                  ppppplVar24 = *pppppplVar32;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
                uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
                if (ppppplVar24 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_138)[2])(ppppplStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                  uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
                  uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
                }
              }
              goto LAB_10a0c4a18;
            }
            FUN_10a0cca40();
          }
          goto LAB_10a0c4f6c;
        }
      }
    }
    else {
      plVar17 = param_3 + 0x12;
      plVar21 = (long *)*plVar17;
      uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
      uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
      if (plVar21 != (long *)0x0) {
        plVar34 = param_3 + 0xc;
        plVar22 = plVar17;
        plVar26 = plVar21;
        do {
          lVar23 = 8;
          if ((int)param_2 <= (int)plVar26[4]) {
            lVar23 = 0;
            plVar22 = plVar26;
          }
          plVar26 = *(long **)((long)plVar26 + lVar23);
        } while (plVar26 != (long *)0x0);
        uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128);
        uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
        if ((plVar22 != plVar17) &&
           (uStack_128 = (long *)CONCAT44(uStack_128._4_4_,(uint)uStack_128),
           uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120),
           (int)plVar22[4] <= (int)param_2)) {
          while ((int)param_2 < (int)plVar21[4]) {
            plVar21 = (long *)*plVar21;
joined_r0x00010a0c4484:
            if (plVar21 == (long *)0x0) goto LAB_10a0c449c;
          }
          if ((int)plVar21[4] < (int)param_2) {
            plVar21 = (long *)plVar21[1];
            goto joined_r0x00010a0c4484;
          }
          uStack_130._0_7_ = 0;
          uStack_130._7_1_ = 0;
          uStack_128._0_4_ = 0;
          uStack_128._4_4_ = 0;
          uStack_120._0_4_ = 0;
          uStack_120._4_4_ = 0;
          uStack_120 = (long *******)0x0;
          plVar17 = (long *)plVar21[5];
          plVar21 = (long *)plVar21[6];
          lVar23 = (long)plVar21 - (long)plVar17;
          uStack_128 = (long *)0x0;
          if (lVar23 == 0) goto LAB_10a0c4a08;
          plVar22 = (long *)((lVar23 >> 3) * -0x3333333333333333);
          if ((long *)0x666666666666666 < plVar22) {
            FUN_10a0cd0cc();
            goto LAB_10a0c4f6c;
          }
          FUN_10a0cd0e0();
          uStack_120 = (long *******)(plVar22 + (long)ppppppplVar39 * 5);
          uStack_130._0_7_ = SUB87(plVar22,0);
          uStack_130._7_1_ = (undefined1)((ulong)plVar22 >> 0x38);
          do {
            lVar23 = plVar17[1];
            lVar29 = *plVar17;
            plVar22[1] = plVar17[1];
            *plVar22 = lVar29;
            if (lVar23 != 0) {
              plVar26 = (long *)(lVar23 + 8);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar6) {
                  *plVar26 = *plVar26 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (*(char *)((long)plVar17 + 0x27) < '\0') {
              func_0x000107c3192c(plVar22 + 2,plVar17[2],plVar17[3]);
            }
            else {
              lVar29 = plVar17[3];
              lVar23 = plVar17[2];
              plVar22[4] = plVar17[4];
              plVar22[3] = lVar29;
              plVar22[2] = lVar23;
            }
            plVar17 = plVar17 + 5;
            plVar22 = plVar22 + 5;
          } while (plVar17 != plVar21);
          plVar21 = (long *)CONCAT17(uStack_130._7_1_,(undefined7)uStack_130);
          uStack_128 = plVar22;
          if (plVar21 != plVar22) {
            do {
              if (*(char *)((long)ppppppplVar28 + 0x17f) < '\0') {
                func_0x000107c3192c(&uStack_c0,ppppppplVar28[0x2d],ppppppplVar28[0x2e]);
              }
              else {
                pppppplVar42 = ppppppplVar28[0x2e];
                pppppplVar32 = ppppppplVar28[0x2d];
                uStack_b8 = SUB86(pppppplVar42,0);
                uStack_b2 = (undefined1)((ulong)pppppplVar42 >> 0x30);
                uStack_b1._0_1_ = (undefined1)((ulong)pppppplVar42 >> 0x38);
                uStack_c0 = SUB86(pppppplVar32,0);
                uStack_ba = (undefined2)((ulong)pppppplVar32 >> 0x30);
                pppppplVar32 = ppppppplVar28[0x2f];
                uStack_b1._1_3_ = SUB83(pppppplVar32,0);
                uStack_ad = (uint)((ulong)pppppplVar32 >> 0x18);
                bStack_a9 = (byte)((ulong)pppppplVar32 >> 0x38);
              }
              plVar17 = plVar34;
              FUN_10a0d6564(plVar34,plVar21 + 2);
              if (plVar17 == (long *)0x0) break;
              plVar17 = plVar34;
              FUN_10a0d6564(plVar34,plVar21 + 2);
              lVar23 = plVar17[5];
              ppppplStack_158 = (long *****)plVar21[1];
              pppppplStack_160 = (long ******)*plVar21;
              if (plVar21[1] != 0) {
                plVar17 = (long *)(plVar21[1] + 8);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar6) {
                    *plVar17 = *plVar17 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              FUN_10aa71754(lVar23,ppppppplVar28 + 0x2d,&pppppplStack_160);
              ppppplVar36 = ppppplStack_158;
              if ((long ******)ppppplStack_158 != (long ******)0x0) {
                pppppplVar32 = (long ******)(ppppplStack_158 + 1);
                do {
                  ppppplVar24 = *pppppplVar32;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar32,0x10);
                  if (bVar6) {
                    *pppppplVar32 = (long *****)((long)ppppplVar24 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppplVar24 == (long *****)0x0) {
                  (*(code *)(*ppppplStack_158)[2])(ppppplStack_158);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar36);
                }
              }
              plVar21 = plVar21 + 5;
            } while (plVar21 != plVar22);
          }
LAB_10a0c4a08:
          FUN_10a0cd1e0(&uStack_130);
        }
      }
    }
LAB_10a0c4a18:
    iVar3 = *piVar27;
    if (iVar3 != -1) {
      lVar23 = *(long *)(param_4 + 0x138);
      uVar19 = (*(long *)(param_4 + 0x140) - lVar23 >> 4) * -0x7d05f417d05f417d;
      if (uVar19 < (ulong)(long)iVar3 || uVar19 - (long)iVar3 == 0) goto LAB_10a0c4f6c;
      func_0x000107c2b054(&uStack_130,"");
      FUN_10a0d6648(&uStack_c0,ppppppplVar28,&uStack_130);
      if ((long)uStack_120 < 0) {
        __ZdlPv(CONCAT17(uStack_130._7_1_,(undefined7)uStack_130));
      }
      lVar29 = CONCAT26(uStack_ba,uStack_c0);
      uStack_130._0_7_ = 0x10f63946e;
      uStack_130._7_1_ = 0;
      uStack_128._0_4_ = 0x4f;
      uStack_128._4_4_ = 0;
      if (*(long **)(lVar29 + 0x230) == *(long **)(lVar29 + 0x238)) {
        FUN_10a0edfc4(&uStack_130);
        goto LAB_10a0c4f6c;
      }
      plVar17 = (long *)(lVar23 + (long)iVar3 * 0x2b0);
      lVar23 = **(long **)(lVar29 + 0x230);
      *(undefined8 *)(lVar23 + 0x6c) = 0;
      *(undefined8 *)(lVar23 + 100) = 0;
      *(undefined1 *)(lVar29 + 0x2f0) = 1;
      *(undefined4 *)(lVar29 + 0x2a0) = 0;
      lVar23 = (long)*(char *)((long)plVar17 + 0x17);
      plVar21 = plVar17;
      lVar33 = lVar23;
      if (lVar23 < 0) {
        plVar21 = (long *)*plVar17;
        lVar33 = plVar17[1];
      }
      if ((lVar33 == 0xb) &&
         (*plVar21 == 0x7463657073726570 && *(long *)((long)plVar21 + 3) == 0x6576697463657073)) {
        *(undefined1 *)(lVar29 + 0x2f0) = 1;
        *(undefined1 *)(lVar29 + 0x288) = 0;
        fVar37 = (float)NEON_fminnm((float)(double)plVar17[7],0x40490fdb);
        if (fVar37 <= 0.017453292) {
          fVar37 = 0.017453292;
        }
        FUN_10a42b9d8(fVar37);
        lVar29 = CONCAT26(uStack_ba,uStack_c0);
        fVar37 = (float)NEON_fminnm((float)(double)plVar17[8],0x497423f0);
        if (fVar37 <= 1.0) {
          fVar37 = 1.0;
        }
        if (*(float *)(lVar29 + 0x264) != fVar37) {
          *(undefined1 *)(lVar29 + 0x2f0) = 1;
        }
        *(float *)(lVar29 + 0x264) = fVar37;
        fVar37 = (float)NEON_fminnm((float)(double)plVar17[9],0x497423ee);
        if (fVar37 <= 0.1) {
          fVar37 = 0.1;
        }
        if (*(float *)(lVar29 + 0x260) != fVar37) {
          *(undefined1 *)(lVar29 + 0x2f0) = 1;
        }
        *(float *)(lVar29 + 0x260) = fVar37;
        dVar40 = (double)plVar17[6];
LAB_10a0c4cfc:
        if (*(float *)(lVar29 + 0x26c) != (float)dVar40) {
          *(undefined1 *)(lVar29 + 0x2f0) = 1;
        }
        *(float *)(lVar29 + 0x26c) = (float)dVar40;
      }
      else {
        plVar21 = plVar17;
        if (*(char *)((long)plVar17 + 0x17) < '\0') {
          lVar23 = plVar17[1];
          plVar21 = (long *)*plVar17;
        }
        if ((lVar23 == 0xc) && (*plVar21 == 0x6172676f6874726f && (int)plVar21[1] == 0x63696870)) {
          *(undefined1 *)(lVar29 + 0x2f0) = 1;
          *(undefined1 *)(lVar29 + 0x288) = 1;
          fVar37 = (float)NEON_fminnm((float)(double)plVar17[0x24],0x497423f0);
          if (fVar37 <= 1.0) {
            fVar37 = 1.0;
          }
          if (*(float *)(lVar29 + 0x264) != fVar37) {
            *(undefined1 *)(lVar29 + 0x2f0) = 1;
          }
          *(float *)(lVar29 + 0x264) = fVar37;
          fVar37 = (float)NEON_fminnm((float)(double)plVar17[0x25],0x497423ee);
          if (fVar37 <= 0.1) {
            fVar37 = 0.1;
          }
          if (*(float *)(lVar29 + 0x260) != fVar37) {
            *(undefined1 *)(lVar29 + 0x2f0) = 1;
          }
          *(float *)(lVar29 + 0x260) = fVar37;
          dVar40 = (double)plVar17[0x23];
          fVar37 = (float)NEON_fminnm((float)dVar40,0x457a0000);
          if (fVar37 <= 1.0) {
            fVar37 = 1.0;
          }
          if (*(float *)(lVar29 + 0x270) != fVar37) {
            *(undefined1 *)(lVar29 + 0x2f0) = 1;
          }
          *(float *)(lVar29 + 0x270) = fVar37;
          dVar40 = (double)plVar17[0x22] / dVar40;
          goto LAB_10a0c4cfc;
        }
        FUN_10a3c762c();
        if ((bRam000000011330a9e8 & 1) != 0) {
          if (*(char *)((long)plVar17 + 0x17) < '\0') {
            plVar17 = (long *)*plVar17;
          }
          func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f6393d7,0xcf,&UNK_10f639452,param_7,param_8,
                              plVar17);
        }
      }
      plVar21 = (long *)CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,uStack_b8));
      if (plVar21 != (long *)0x0) {
        plVar17 = plVar21 + 1;
        do {
          lVar23 = *plVar17;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
    }
    uStack_130._0_7_ = SUB87(piVar27,0);
    uStack_130._7_1_ = (undefined1)((ulong)piVar27 >> 0x38);
    uStack_128._0_4_ = (uint)param_4;
    uStack_128._4_4_ = (undefined4)((ulong)param_4 >> 0x20);
    uStack_120 = &pppppplStack_160;
    bStack_a9 = 0x13;
    uStack_b8 = 0x6e75705f7374;
    uStack_b2 = 99;
    uStack_b1 = 0x6c617574;
    uStack_c0 = 0x696c5f52484b;
    uStack_ba = 0x6867;
    uStack_ad = uStack_ad & 0xffffff00;
    puVar15 = &uStack_130;
    pppppplStack_160 = (long ******)ppppppplVar28;
    FUN_10a0d6a84(puVar15,&uStack_c0);
    if (((ulong)puVar15 & 1) == 0) {
      bStack_a9 = 0xe;
      uStack_c0 = 0x696c5f52484b;
      uStack_ba = 0x6867;
      uStack_b8 = 0x6e6d635f7374;
      uStack_b2 = 0;
      FUN_10a0d6a84(&uStack_130,&uStack_c0);
    }
    puVar1 = *(undefined4 **)(piVar27 + 0xc);
    for (puVar30 = *(undefined4 **)(piVar27 + 10); puVar30 != puVar1; puVar30 = puVar30 + 1) {
      FUN_10a0c35a0(ppppppplVar28,*puVar30,param_3,param_4,param_5,param_6);
    }
    plVar21 = param_6 + 1;
    plVar17 = (long *)*plVar21;
    while (plVar22 = plVar21, plVar17 != (long *)0x0) {
      while (plVar21 = plVar17, (int)plVar21[4] <= (int)param_2) {
        if ((int)param_2 <= (int)plVar21[4]) goto LAB_10a0c4ec4;
        plVar17 = (long *)plVar21[1];
        if ((long *)plVar21[1] == (long *)0x0) {
          plVar22 = plVar21 + 1;
          goto LAB_10a0c4e70;
        }
      }
      plVar17 = (long *)*plVar21;
    }
LAB_10a0c4e70:
    plVar17 = (long *)0x30;
    __Znwm();
    *(uint *)(plVar17 + 4) = param_2;
    plVar17[5] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[2] = (long)plVar21;
    *plVar22 = (long)plVar17;
    plVar21 = plVar17;
    if (*(long *)*param_6 != 0) {
      *param_6 = *(long *)*param_6;
      plVar21 = (long *)*plVar22;
    }
    func_0x000107c2b058(param_6[1],plVar21);
    param_6[2] = param_6[2] + 1;
    plVar21 = plVar17;
LAB_10a0c4ec4:
    plVar21[5] = (long)ppppppplVar28;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a0c4f04:
  FUN_10a0d4c3c();
LAB_10a0c4f6c:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a0c4f70);
  (*pcVar13)();
LAB_10a0c449c:
  FUN_109ffdddc("map::at:  key not found");
  goto LAB_10a0c4f6c;
code_r0x00010a0c4410:
  plVar17 = (long *)plVar17[1];
  goto joined_r0x00010a0c43ec;
}



/* Entry: 10a0c5294; end: 10a0c53af;  */

undefined8 * FUN_10a0c5294(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a0c53b0; end: 10a0c57e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0c55d8) */
/* WARNING: Removing unreachable block (ram,0x00010a0c55e8) */

undefined8
FUN_10a0c53b0(ulong param_1,ulong param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             uint param_6,uint param_7)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 ***pppuStack_40;
  ulong uStack_38;
  ulong uStack_30;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_3 == 0) {
      return 0;
    }
    __ZNSt3__19to_stringEi(auStack_b8,param_5);
    puVar3 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f637758,0x26);
    uStack_98 = puVar3[1];
    uStack_a0 = *puVar3;
    lStack_90 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f63777f,10);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    lStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = param_4[1];
    puVar3 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar3 = param_4;
    }
    puVar4 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,puVar3,uVar1);
    uStack_58 = puVar4[1];
    uStack_60 = *puVar4;
    uStack_50 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar3 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f63778a,0x12);
    uStack_38 = puVar3[1];
    pppuStack_40 = (undefined8 ***)*puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = uStack_38;
    ppppuVar2 = (undefined8 ****)pppuStack_40;
    if (-1 < (long)uStack_30) {
      uVar1 = uStack_30 >> 0x38;
      ppppuVar2 = &pppuStack_40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_3,ppppuVar2,uVar1);
  }
  else if (((int)param_6 < 1) || (param_1 == param_6)) {
    if ((int)param_7 < 1) {
      return 1;
    }
    if (param_2 == param_7) {
      return 1;
    }
    if (param_3 == 0) {
      return 0;
    }
    __ZNSt3__19to_stringEi(auStack_b8,param_5);
    puVar3 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f6377bd,0x21);
    uStack_98 = puVar3[1];
    uStack_a0 = *puVar3;
    lStack_90 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f63777f,10);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    lStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = param_4[1];
    puVar3 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar3 = param_4;
    }
    puVar4 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,puVar3,uVar1);
    uStack_58 = puVar4[1];
    uStack_60 = *puVar4;
    uStack_50 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar3 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f63778a,0x12);
    uStack_38 = puVar3[1];
    pppuStack_40 = (undefined8 ***)*puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = uStack_38;
    ppppuVar2 = (undefined8 ****)pppuStack_40;
    if (-1 < (long)uStack_30) {
      uVar1 = uStack_30 >> 0x38;
      ppppuVar2 = &pppuStack_40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_3,ppppuVar2,uVar1);
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    __ZNSt3__19to_stringEi(auStack_b8,param_5);
    puVar3 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f63779d,0x1f);
    uStack_98 = puVar3[1];
    uStack_a0 = *puVar3;
    lStack_90 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f63777f,10);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    lStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = param_4[1];
    puVar3 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar3 = param_4;
    }
    puVar4 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,puVar3,uVar1);
    uStack_58 = puVar4[1];
    uStack_60 = *puVar4;
    uStack_50 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar3 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f63778a,0x12);
    uStack_38 = puVar3[1];
    pppuStack_40 = (undefined8 ***)*puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar1 = uStack_38;
    ppppuVar2 = (undefined8 ****)pppuStack_40;
    if (-1 < (long)uStack_30) {
      uVar1 = uStack_30 >> 0x38;
      ppppuVar2 = &pppuStack_40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_3,ppppuVar2,uVar1);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  return 0;
}



/* Entry: 10a0c57e8; end: 10a0c6b77;  */

undefined8
FUN_10a0c57e8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,int param_8,long param_9)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 ***pppuStack_4c8;
  ulong uStack_4c0;
  byte bStack_4b1;
  undefined8 ***pppuStack_4b0;
  ulong uStack_4a8;
  byte bStack_499;
  undefined8 ***pppuStack_498;
  ulong uStack_490;
  byte bStack_481;
  undefined8 ***pppuStack_480;
  ulong uStack_478;
  byte bStack_469;
  undefined8 **appuStack_468 [2];
  char cStack_451;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  undefined8 ***pppuStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  undefined8 **ppuStack_3d0;
  undefined8 **ppuStack_3c8;
  undefined8 **ppuStack_3c0;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_310;
  undefined2 uStack_302;
  undefined8 ***pppuStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 **ppuStack_220;
  int iStack_218;
  undefined1 auStack_214 [4];
  byte bStack_210;
  undefined1 auStack_208 [64];
  ulong uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_100;
  uint uStack_f8;
  undefined4 uStack_f0;
  long alStack_90 [2];
  byte bStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_302 = 0x100;
  if (param_9 == 0) {
LAB_10a0c5880:
    pppuStack_228 = (undefined8 ****)0x0;
    pppuStack_230 = (undefined8 ****)0x0;
    ppuStack_220 = (undefined8 ***)0x0;
    lVar14 = param_7 + param_8;
    func_0x000107c2b048(&pppuStack_230,param_7,lVar14);
    lVar8 = 0x90;
    __Znwm();
    FUN_10a1b13d8();
    lStack_310 = lVar8;
    if ((undefined8 ****)pppuStack_230 != (undefined8 ****)0x0) {
      pppuStack_228 = pppuStack_230;
      __ZdlPv();
    }
    FUN_10a1b17a8(alStack_90,lStack_310);
    iVar22 = (int)param_2;
    if (bStack_80 < 2) {
      FUN_10a1b1a28(&pppuStack_230,lStack_310);
      func_0x000104c4f944(auStack_208);
      if (2 < (ulong)bStack_210) goto LAB_10a0c6a7c;
      (*(code *)(&PTR_FUN_110ba20e8)[bStack_210])(auStack_214);
      if (bStack_80 == 1) {
        func_0x0001096f2204(&pppuStack_300,alStack_90[0]);
        func_0x0001096f3848(&pppuStack_230,&pppuStack_300);
        pppuVar9 = pppuStack_230;
        if ((undefined8 ****)pppuStack_230 != (undefined8 ****)0x0) {
          _memcpy(&lStack_160,&pppuStack_228,(long)pppuStack_230 << 5);
          uStack_f8 = uStack_1c0;
          uStack_100 = uStack_1c8;
          uStack_f0 = uStack_1b8;
          if ((undefined8 ****)pppuVar9 == (undefined8 ****)0x1) {
            func_0x0001096f2204(&pppuStack_230,alStack_90[0]);
            uVar25 = (ulong)uStack_1bc;
            func_0x0001096f2204(&pppuStack_230,alStack_90[0]);
            FUN_10a0c53b0(uVar25,uStack_1b8,param_3,param_1,param_2,param_5,param_6);
            uVar15 = uStack_100;
            if ((uVar25 & 1) == 0) goto LAB_10a0c5ef0;
            *(uint *)(param_1 + 3) = uStack_1bc;
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_1b8;
            uVar23 = (uint)uStack_100;
            if (uStack_f8 < 0x10000) {
              uVar6 = uVar23 >> 8 & 0xff;
              func_0x0001096f1f84();
            }
            else {
              uVar6 = uStack_f8 >> 0x10;
            }
            *(uint *)(param_1 + 4) = uVar6;
            uVar23 = uVar23 & 0xff;
            if (uVar23 < 8) {
              lVar8 = (uVar15 & 7) * 4;
              uVar16 = *(undefined4 *)(&UNK_10e495970 + lVar8);
              uVar17 = *(undefined4 *)(&UNK_10e495990 + lVar8);
            }
            else {
              uVar17 = 0;
              uVar16 = 0x1401;
            }
            *(undefined4 *)((long)param_1 + 0x24) = uVar17;
            *(undefined4 *)(param_1 + 5) = uVar16;
            if (uVar23 < 8) {
              lVar8 = *(long *)(&UNK_10e4959b0 + (uVar15 & 7) * 8);
            }
            else {
              lVar8 = 0;
            }
            plVar7 = param_1 + 6;
            lVar8 = lVar8 * (long)*(int *)(param_1 + 3) * (long)(int)uVar6;
            uVar15 = (ulong)*(int *)((long)param_1 + 0x1c);
            uVar25 = lVar8 * uVar15;
            uVar18 = param_1[7] - *plVar7;
            if (uVar25 < uVar18 || uVar25 - uVar18 == 0) {
              if (uVar25 < uVar18) {
                param_1[7] = *plVar7 + uVar25;
              }
            }
            else {
              func_0x000107c27d58(plVar7,uVar25 - uVar18);
              uVar15 = (ulong)*(uint *)((long)param_1 + 0x1c);
            }
            lVar24 = lStack_150;
            lVar19 = lStack_160;
            if (iStack_218 == 8) {
              if ((int)uVar15 != 0) {
                lVar20 = 0;
                uVar25 = 0;
                do {
                  if (lVar8 != 0) {
                    lVar1 = 0;
                    if (lVar19 != 0) {
                      lVar1 = lVar19 + (uVar25 & 0xffffffff) * lVar24;
                    }
                    _memmove(lVar20 + *plVar7,lVar1,lVar8);
                    uVar15 = (ulong)*(uint *)((long)param_1 + 0x1c);
                  }
                  uVar25 = uVar25 + 1;
                  lVar20 = lVar20 + lVar8;
                } while (uVar25 < (ulong)(long)(int)uVar15);
              }
            }
            else if ((int)uVar15 != 0) {
              lVar20 = 0;
              uVar25 = 0;
              iVar13 = -1;
              do {
                if (lVar8 != 0) {
                  lVar1 = 0;
                  if (lVar19 != 0) {
                    lVar1 = lVar19 + lVar24 * (ulong)(uint)((int)uVar15 + iVar13);
                  }
                  _memmove(lVar20 + *plVar7,lVar1,lVar8);
                  uVar15 = (ulong)*(uint *)((long)param_1 + 0x1c);
                }
                uVar25 = uVar25 + 1;
                lVar20 = lVar20 + lVar8;
                iVar13 = iVar13 + -1;
              } while (uVar25 < (ulong)(long)(int)uVar15);
            }
            goto LAB_10a0c649c;
          }
        }
        if (param_3 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_3,&UNK_10f637942,0x3c);
        }
        goto LAB_10a0c5ef0;
      }
      uVar15 = (ulong)*(int *)(alStack_90[0] + 0x10);
      FUN_10a0c53b0(uVar15,(long)*(int *)(alStack_90[0] + 0x14),param_3,param_1,param_2,param_5,
                    param_6);
      if ((uVar15 & 1) == 0) goto LAB_10a0c5ef0;
      iVar13 = *(int *)(alStack_90[0] + 0x10);
      plVar7 = param_1 + 6;
      *(int *)(param_1 + 3) = iVar13;
      iVar3 = *(int *)(alStack_90[0] + 0x14);
      *(int *)((long)param_1 + 0x1c) = iVar3;
      iVar2 = *(int *)(alStack_90[0] + 0x20);
      *(int *)(param_1 + 4) = iVar2;
      *(undefined8 *)((long)param_1 + 0x24) = 0x140100000008;
      iVar2 = iVar2 * iVar13;
      uVar25 = (long)iVar3 * (long)iVar2;
      uVar15 = param_1[7] - *plVar7;
      if (uVar25 < uVar15 || uVar25 - uVar15 == 0) {
        if (uVar25 < uVar15) {
          param_1[7] = *plVar7 + uVar25;
        }
      }
      else {
        func_0x000107c27d58(plVar7,uVar25 - uVar15);
      }
      if (iStack_218 == 8) {
        if (uVar25 != 0) {
          _memmove(*plVar7,*(undefined8 *)(alStack_90[0] + 0x28),uVar25);
        }
      }
      else {
        iVar13 = *(int *)((long)param_1 + 0x1c);
        if (iVar13 != 0) {
          lVar19 = 0;
          lVar8 = 0;
          uVar15 = 0;
          lVar24 = (long)iVar2;
          do {
            lVar20 = (lVar19 + iVar13 + -1) * lVar24;
            if ((lVar19 + iVar13) * lVar24 - lVar20 != 0) {
              _memmove(lVar8 + *plVar7,*(long *)(alStack_90[0] + 0x28) + lVar20,lVar24);
              iVar13 = *(int *)((long)param_1 + 0x1c);
            }
            uVar15 = uVar15 + 1;
            lVar8 = lVar8 + lVar24;
            lVar19 = lVar19 + -1;
          } while (uVar15 < (ulong)(long)iVar13);
        }
      }
LAB_10a0c649c:
      if (param_9 != 0) {
        uVar15 = *(long *)(param_9 + 0x3b8) - *(long *)(param_9 + 0x3b0) >> 5;
        if (uVar15 <= (ulong)(long)(iVar22 + 1)) {
          uVar15 = (long)(iVar22 + 1);
        }
        FUN_10a0c6b78(param_9 + 0x3b0,uVar15);
        if ((ulong)(*(long *)(param_9 + 0x3b8) - *(long *)(param_9 + 0x3b0) >> 5) <=
            (ulong)(long)iVar22) goto LAB_10a0c6a7c;
        lVar8 = *(long *)(param_9 + 0x3b0) + (long)iVar22 * 0x20;
        FUN_10a0d918c(lVar8,param_7,lVar14,(long)param_8);
        *(bool *)(lVar8 + 0x19) = iStack_218 == 8;
      }
LAB_10a0c6504:
      uVar21 = 1;
    }
    else {
      uVar15 = (ulong)*(int *)(alStack_90[0] + 8);
      FUN_10a0c53b0(uVar15,(long)*(int *)(alStack_90[0] + 0xc),param_3,param_1,param_2,param_5,
                    param_6);
      if ((uVar15 & 1) != 0) {
        if ((*(int *)(alStack_90[0] + 8) < 0x801) && (*(int *)(alStack_90[0] + 0xc) < 0x801)) {
          FUN_10a1b1a28(&pppuStack_230,lStack_310);
          iVar13 = (int)pppuStack_228;
          func_0x000104c4f944(auStack_208);
          if (2 < (ulong)bStack_210) goto LAB_10a0c6a7c;
          (*(code *)(&PTR_FUN_110ba20e8)[bStack_210])(auStack_214);
          if (1 < iVar13) {
            if (param_3 != 0) {
              __ZNSt3__19to_stringEi(&ppuStack_3d0,param_2);
              FUN_109feb280(&puStack_3b0,&UNK_10f6377df,&ppuStack_3d0);
              FUN_10a012db0(&lStack_390,&puStack_3b0,&UNK_10f63777f);
              uVar15 = param_1[1];
              puVar4 = (undefined8 *)*param_1;
              if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
                uVar15 = (ulong)*(byte *)((long)param_1 + 0x17);
                puVar4 = param_1;
              }
              plVar7 = &lStack_390;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (plVar7,puVar4,uVar15);
              lStack_368 = plVar7[1];
              lStack_370 = *plVar7;
              lStack_360 = plVar7[2];
              plVar7[1] = 0;
              plVar7[2] = 0;
              *plVar7 = 0;
              FUN_10a012db0(&lStack_350,&lStack_370,&UNK_10f6378be);
              FUN_10a1b1a28(&pppuStack_230,lStack_310);
              __ZNSt3__19to_stringEi(&pppuStack_3f0,(ulong)pppuStack_228 & 0xffffffff);
              uVar15 = uStack_3e8;
              ppppuVar12 = (undefined8 ****)pppuStack_3f0;
              if (-1 < (long)uStack_3e0) {
                uVar15 = uStack_3e0 >> 0x38;
                ppppuVar12 = &pppuStack_3f0;
              }
              plVar7 = &lStack_350;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (plVar7,ppppuVar12,uVar15);
              lStack_328 = plVar7[1];
              lStack_330 = *plVar7;
              lStack_320 = plVar7[2];
              plVar7[1] = 0;
              plVar7[2] = 0;
              *plVar7 = 0;
              FUN_10a012db0(&lStack_160,&lStack_330,&UNK_10f6378d3);
              FUN_10a012db0(&pppuStack_300,&lStack_160,&UNK_10f6378fe);
              uVar15 = uStack_2f8;
              ppppuVar12 = (undefined8 ****)pppuStack_300;
              if (-1 < (long)uStack_2f0) {
                uVar15 = uStack_2f0 >> 0x38;
                ppppuVar12 = &pppuStack_300;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_3,ppppuVar12,uVar15);
              if ((long)uStack_2f0 < 0) {
                __ZdlPv(pppuStack_300);
              }
              if (lStack_150 < 0) {
                __ZdlPv(lStack_160);
              }
              if (lStack_320 < 0) {
                __ZdlPv(lStack_330);
              }
              if ((long)uStack_3e0 < 0) {
                __ZdlPv(pppuStack_3f0);
              }
              func_0x000104c4f944(auStack_208);
              if (2 < (ulong)bStack_210) goto LAB_10a0c6a7c;
              (*(code *)(&PTR_FUN_110ba20e8)[bStack_210])(auStack_214);
              if (lStack_340 < 0) {
                __ZdlPv(lStack_350);
              }
              if (lStack_360 < 0) {
                __ZdlPv(lStack_370);
              }
              if (lStack_380 < 0) {
                __ZdlPv(lStack_390);
              }
              if ((long)puStack_3a0 < 0) {
                __ZdlPv(puStack_3b0);
              }
              appuStack_468[0] = ppuStack_3d0;
              if ((long)ppuStack_3c0 < 0) goto LAB_10a0c5e5c;
            }
            goto LAB_10a0c5ef0;
          }
          param_1[3] = *(undefined8 *)(alStack_90[0] + 8);
          uVar15 = (ulong)*(uint *)(alStack_90[0] + 0x10);
          func_0x00010ab79cbc();
          *(uint *)(param_1 + 4) = (uint)(byte)(&UNK_110ae471b)[(uVar15 & 0xffffffff) * 0x20];
          *(undefined8 *)((long)param_1 + 0x24) = 0x140100000008;
          lVar8 = *(long *)(alStack_90[0] + 0x60);
          func_0x000107c2823c(param_1 + 6,lVar8);
          if (lVar8 != 0) {
            _memmove(param_1[6],*(undefined8 *)(alStack_90[0] + 0x58),lVar8);
          }
          if (param_9 != 0) {
            uVar15 = *(long *)(param_9 + 0x3b8) - *(long *)(param_9 + 0x3b0) >> 5;
            if (uVar15 <= (ulong)(long)(iVar22 + 1)) {
              uVar15 = (long)(iVar22 + 1);
            }
            FUN_10a0c6b78(param_9 + 0x3b0,uVar15);
            if ((ulong)(*(long *)(param_9 + 0x3b8) - *(long *)(param_9 + 0x3b0) >> 5) <=
                (ulong)(long)iVar22) goto LAB_10a0c6a7c;
            lVar8 = *(long *)(param_9 + 0x3b0) + (long)iVar22 * 0x20;
            FUN_10a0d918c(lVar8,param_7,lVar14,(long)param_8);
            *(undefined1 *)(lVar8 + 0x18) = 1;
            FUN_10a1b1a28(&pppuStack_230,lStack_310);
            *(bool *)(lVar8 + 0x19) = iStack_218 == 8;
            func_0x000104c4f944(auStack_208);
            if (2 < (ulong)bStack_210) goto LAB_10a0c6a7c;
            (*(code *)(&PTR_FUN_110ba20e8)[bStack_210])(auStack_214);
            uVar16 = *(undefined4 *)(alStack_90[0] + 0x10);
            func_0x00010ab79cbc();
            *(undefined4 *)(lVar8 + 0x1c) = uVar16;
          }
          goto LAB_10a0c6504;
        }
        if (param_3 != 0) {
          __ZNSt3__19to_stringEi(appuStack_468,param_2);
          pppuVar9 = appuStack_468;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppuVar9,0,&UNK_10f6377df,0x20);
          puStack_448 = pppuVar9[1];
          puStack_450 = *pppuVar9;
          puStack_440 = pppuVar9[2];
          pppuVar9[1] = (undefined8 **)0x0;
          pppuVar9[2] = (undefined8 **)0x0;
          *pppuVar9 = (undefined8 **)0x0;
          ppuVar10 = &puStack_450;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppuVar10,&UNK_10f63777f,10);
          lStack_428 = (long)ppuVar10[1];
          lStack_430 = (long)*ppuVar10;
          lStack_420 = (long)ppuVar10[2];
          ppuVar10[1] = (undefined8 *)0x0;
          ppuVar10[2] = (undefined8 *)0x0;
          *ppuVar10 = (undefined8 *)0x0;
          uVar15 = param_1[1];
          puVar4 = (undefined8 *)*param_1;
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uVar15 = (ulong)*(byte *)((long)param_1 + 0x17);
            puVar4 = param_1;
          }
          plVar7 = &lStack_430;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,puVar4,uVar15);
          lStack_408 = plVar7[1];
          lStack_410 = *plVar7;
          lStack_400 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          plVar7 = &lStack_410;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,&UNK_10f637800,0x22);
          uStack_3e8 = plVar7[1];
          pppuStack_3f0 = (undefined8 ***)*plVar7;
          uStack_3e0 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          __ZNSt3__19to_stringEi(&pppuStack_480,0x800);
          ppppuVar12 = (undefined8 ****)pppuStack_480;
          if (-1 < (char)bStack_469) {
            uStack_478 = (ulong)bStack_469;
            ppppuVar12 = &pppuStack_480;
          }
          ppppuVar11 = &pppuStack_3f0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar11,ppppuVar12,uStack_478);
          ppuStack_3c8 = ppppuVar11[1];
          ppuStack_3d0 = *ppppuVar11;
          ppuStack_3c0 = ppppuVar11[2];
          ppppuVar11[1] = (undefined8 ***)0x0;
          ppppuVar11[2] = (undefined8 ***)0x0;
          *ppppuVar11 = (undefined8 ***)0x0;
          pppuVar9 = &ppuStack_3d0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar9,&DAT_10f62b0e2,1);
          puStack_3a8 = pppuVar9[1];
          puStack_3b0 = *pppuVar9;
          puStack_3a0 = pppuVar9[2];
          pppuVar9[1] = (undefined8 **)0x0;
          pppuVar9[2] = (undefined8 **)0x0;
          *pppuVar9 = (undefined8 **)0x0;
          __ZNSt3__19to_stringEi(&pppuStack_498,0x800);
          ppppuVar12 = (undefined8 ****)pppuStack_498;
          if (-1 < (char)bStack_481) {
            uStack_490 = (ulong)bStack_481;
            ppppuVar12 = &pppuStack_498;
          }
          ppuVar10 = &puStack_3b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppuVar10,ppppuVar12,uStack_490);
          lStack_388 = (long)ppuVar10[1];
          lStack_390 = (long)*ppuVar10;
          lStack_380 = (long)ppuVar10[2];
          ppuVar10[1] = (undefined8 *)0x0;
          ppuVar10[2] = (undefined8 *)0x0;
          *ppuVar10 = (undefined8 *)0x0;
          plVar7 = &lStack_390;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,&UNK_10f637825,0x11);
          lStack_368 = plVar7[1];
          lStack_370 = *plVar7;
          lStack_360 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          __ZNSt3__19to_stringEi(&pppuStack_4b0,*(undefined4 *)(alStack_90[0] + 8));
          ppppuVar12 = (undefined8 ****)pppuStack_4b0;
          if (-1 < (char)bStack_499) {
            uStack_4a8 = (ulong)bStack_499;
            ppppuVar12 = &pppuStack_4b0;
          }
          plVar7 = &lStack_370;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,ppppuVar12,uStack_4a8);
          lStack_348 = plVar7[1];
          lStack_350 = *plVar7;
          lStack_340 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          plVar7 = &lStack_350;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,&DAT_10f62b0e2,1);
          lStack_328 = plVar7[1];
          lStack_330 = *plVar7;
          lStack_320 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          __ZNSt3__19to_stringEi(&pppuStack_4c8,*(undefined4 *)(alStack_90[0] + 0xc));
          ppppuVar12 = (undefined8 ****)pppuStack_4c8;
          if (-1 < (char)bStack_4b1) {
            uStack_4c0 = (ulong)bStack_4b1;
            ppppuVar12 = &pppuStack_4c8;
          }
          plVar7 = &lStack_330;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,ppppuVar12,uStack_4c0);
          lStack_158 = plVar7[1];
          lStack_160 = *plVar7;
          lStack_150 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          plVar7 = &lStack_160;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar7,&UNK_10f637837,0x39);
          uStack_2f8 = plVar7[1];
          pppuStack_300 = (undefined8 ***)*plVar7;
          uStack_2f0 = plVar7[2];
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
          ppppuVar12 = &pppuStack_300;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar12,&UNK_10f637871,0x4c);
          pppuStack_228 = ppppuVar12[1];
          pppuStack_230 = *ppppuVar12;
          ppuStack_220 = ppppuVar12[2];
          ppppuVar12[1] = (undefined8 ***)0x0;
          ppppuVar12[2] = (undefined8 ***)0x0;
          *ppppuVar12 = (undefined8 ***)0x0;
          ppppuVar12 = (undefined8 ****)pppuStack_228;
          ppppuVar11 = (undefined8 ****)pppuStack_230;
          if (-1 < (long)ppuStack_220) {
            ppppuVar12 = (undefined8 ****)((ulong)ppuStack_220 >> 0x38);
            ppppuVar11 = &pppuStack_230;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_3,ppppuVar11,ppppuVar12);
          if ((long)ppuStack_220 < 0) {
            __ZdlPv(pppuStack_230);
          }
          if ((long)uStack_2f0 < 0) {
            __ZdlPv(pppuStack_300);
          }
          if (lStack_150 < 0) {
            __ZdlPv(lStack_160);
          }
          if ((char)bStack_4b1 < '\0') {
            __ZdlPv(pppuStack_4c8);
          }
          if (lStack_320 < 0) {
            __ZdlPv(lStack_330);
          }
          if (lStack_340 < 0) {
            __ZdlPv(lStack_350);
          }
          if ((char)bStack_499 < '\0') {
            __ZdlPv(pppuStack_4b0);
          }
          if (lStack_360 < 0) {
            __ZdlPv(lStack_370);
          }
          if (lStack_380 < 0) {
            __ZdlPv(lStack_390);
          }
          if ((char)bStack_481 < '\0') {
            __ZdlPv(pppuStack_498);
          }
          if ((long)puStack_3a0 < 0) {
            __ZdlPv(puStack_3b0);
          }
          if ((long)ppuStack_3c0 < 0) {
            __ZdlPv(ppuStack_3d0);
          }
          if ((char)bStack_469 < '\0') {
            __ZdlPv(pppuStack_480);
          }
          if ((long)uStack_3e0 < 0) {
            __ZdlPv(pppuStack_3f0);
          }
          if (lStack_400 < 0) {
            __ZdlPv(lStack_410);
          }
          if (lStack_420 < 0) {
            __ZdlPv(lStack_430);
          }
          if ((long)puStack_440 < 0) {
            __ZdlPv(puStack_450);
          }
          if (cStack_451 < '\0') {
LAB_10a0c5e5c:
            __ZdlPv(appuStack_468[0]);
          }
        }
      }
LAB_10a0c5ef0:
      uVar21 = 0;
    }
    if (3 < (ulong)bStack_80) goto LAB_10a0c6a7c;
    (*(code *)(&PTR_FUN_110ba20c8)[bStack_80])(alStack_90);
    lVar14 = lStack_310;
    lStack_310 = 0;
    if (lVar14 != 0) {
      func_0x00010a0e32bc(&lStack_310);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar21;
    }
    ___stack_chk_fail();
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)(param_9 + 0x28) + 0x100) + 0x260);
    pppuStack_230 = (undefined8 ***)&UNK_10f653c20;
    pppuStack_228 = (undefined8 ****)0x21;
    if (lVar14 != 0) {
      plVar7 = *(long **)(lVar14 + 0x228);
      (**(code **)(*plVar7 + 0x68))();
      uStack_302 = (undefined2)plVar7[0x12];
      goto LAB_10a0c5880;
    }
  }
  FUN_10a0edfc4(&pppuStack_230);
LAB_10a0c6a7c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0c6a80);
  (*pcVar5)();
}



/* Entry: 10a0c6b78; end: 10a0c6d07;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10a0c6b78(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *extraout_x8;
  undefined8 *puVar11;
  long lVar12;
  ulong unaff_x23;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 *puStack_f0;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 uStack_bf;
  undefined1 uStack_bb;
  char cStack_b9;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined4 uStack_a1;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar11 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar12 = (long)puVar7 - (long)puVar11;
  uVar14 = lVar12 >> 5;
  if (uVar14 < param_2) {
    uVar13 = param_2 - uVar14;
    if ((ulong)(param_1[2] - (long)puVar7 >> 5) < uVar13) {
      puVar5 = param_1;
      if (param_2 >> 0x3b == 0) {
        uVar9 = param_1[2] - (long)puVar11;
        unaff_x23 = (long)uVar9 >> 4;
        if (unaff_x23 <= param_2) {
          unaff_x23 = param_2;
        }
        if (0x7fffffffffffffdf < uVar9) {
          unaff_x23 = 0x7ffffffffffffff;
        }
        if (unaff_x23 >> 0x3b == 0) {
          lVar3 = unaff_x23 << 5;
          __Znwm();
          puVar6 = (undefined8 *)(lVar3 + lVar12);
          puVar4 = puVar6;
          _bzero(puVar6,uVar13 * 0x20);
          puVar10 = puVar6 + uVar14 * -4;
          puVar5 = puVar11;
          if (puVar11 != puVar7) {
            do {
              uVar15 = *puVar5;
              puVar10[1] = puVar5[1];
              *puVar10 = uVar15;
              puVar10[2] = puVar5[2];
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = 0;
              puVar10[3] = puVar5[3];
              puVar5 = puVar5 + 4;
              puVar10 = puVar10 + 4;
            } while (puVar5 != puVar7);
            do {
              puVar4 = (undefined8 *)*puVar11;
              if (puVar4 != (undefined8 *)0x0) {
                puVar11[1] = puVar4;
                __ZdlPv();
              }
              puVar11 = puVar11 + 4;
            } while (puVar11 != puVar7);
            puVar11 = (undefined8 *)*param_1;
          }
          *param_1 = puVar6 + uVar14 * -4;
          param_1[1] = puVar6 + uVar13 * 4;
          param_1[2] = lVar3 + unaff_x23 * 0x20;
          if (puVar11 == (undefined8 *)0x0) {
            return puVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar11);
          return puVar11;
        }
      }
      else {
        FUN_10a0d9178();
      }
      func_0x000109ffded8();
      puVar4 = &uStack_d0;
      pcStack_58 = FUN_10a0c6d08;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      cStack_b9 = '\x10';
      uStack_c8 = 0x72;
      uStack_c7 = 0x74786554;
      uStack_d0._0_1_ = 0x62;
      uStack_d0._1_7_ = 0x6f6c6f43657361;
      uStack_c3 = 0x657275;
      puVar6 = (undefined8 *)(puVar5[1] + 0x538);
      uStack_90 = uVar13;
      uStack_88 = unaff_x23;
      lStack_80 = lVar12;
      puStack_78 = puVar11;
      puStack_70 = puVar7;
      puStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10a0e3358(puVar6,&uStack_d0);
      puVar11 = puVar6;
      if (cStack_b9 < '\0') {
        puVar11 = (undefined8 *)CONCAT71(uStack_d0._1_7_,(undefined1)uStack_d0);
        __ZdlPv();
      }
      if ((undefined8 *)(puVar5[1] + 0x540) == puVar6) {
        *(undefined1 *)extraout_x8 = 0;
        *(undefined1 *)(extraout_x8 + 10) = 0;
      }
      else {
        puVar7 = puVar6 + 7;
        FUN_10a0c6e94();
        iVar2 = (int)puVar6 + 0x38;
        func_0x00010a0c6f04();
        lVar12 = puVar5[1];
        cStack_b9 = '\x15';
        uStack_c8 = 0x75;
        uStack_c7 = 0x745f6572;
        uStack_d0._0_1_ = 0x4b;
        uStack_d0._1_7_ = 0x747865745f5248;
        uStack_c3 = 0x736e6172;
        uStack_bf = 0x6d726f66;
        uStack_bb = 0;
        puVar5 = (undefined8 *)(lVar12 + 0xf0);
        FUN_10a0dc2d0(puVar5,&uStack_d0);
        puVar11 = puVar5;
        if (cStack_b9 < '\0') {
          puVar11 = (undefined8 *)CONCAT71(uStack_d0._1_7_,(undefined1)uStack_d0);
          __ZdlPv();
        }
        bVar1 = (undefined8 *)(lVar12 + 0xf8) == puVar5;
        if (bVar1) {
          uVar8 = 0;
        }
        else {
          FUN_10a0c6f74(&uStack_d0,puVar5 + 7);
          uStack_b0 = CONCAT17(uStack_c8,uStack_d0._1_7_);
          uStack_a8 = (undefined7)CONCAT44(uStack_c3,uStack_c7);
          uStack_a1 = CONCAT31((undefined3)uStack_bf,uStack_c3._3_1_);
          puVar11 = puVar4;
          uVar8 = (undefined1)uStack_d0;
        }
        *extraout_x8 = (int)puVar7;
        extraout_x8[1] = iVar2;
        uVar15 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(extraout_x8 + 2) = uVar15;
        *(undefined1 *)(extraout_x8 + 4) = uVar8;
        *(ulong *)((long)extraout_x8 + 0x19) = CONCAT17((undefined1)uStack_a1,uStack_a8);
        *(undefined8 *)((long)extraout_x8 + 0x11) = uStack_b0;
        extraout_x8[8] = uStack_a1;
        *(bool *)(extraout_x8 + 9) = !bVar1;
        *(undefined1 *)(extraout_x8 + 10) = 1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        return puVar11;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      pcStack_d8 = FUN_10a0c6e94;
      puStack_f0 = puVar7;
      ppuStack_e0 = &puStack_60;
      func_0x000107c2b054(auStack_108,&DAT_10f2c4679);
      puVar7 = puVar11 + 7;
      func_0x00010a0dc34c(puVar7,auStack_108);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      if (puVar11 + 8 == puVar7) {
        puVar11 = (undefined8 *)0xffffffff;
      }
      else {
        puVar11 = (undefined8 *)(ulong)(uint)(int)(double)puVar7[7];
      }
      return puVar11;
    }
    puVar5 = puVar7;
    _bzero(puVar7,uVar13 * 0x20);
    param_1[1] = puVar7 + uVar13 * 4;
  }
  else {
    puVar5 = param_1;
    if (param_2 < uVar14) {
      while (puVar6 = puVar7, puVar6 != puVar11 + param_2 * 4) {
        puVar7 = puVar6 + -4;
        puVar5 = (undefined8 *)*puVar7;
        if (puVar5 != (undefined8 *)0x0) {
          puVar6[-3] = puVar5;
          __ZdlPv();
        }
      }
      param_1[1] = puVar11 + param_2 * 4;
    }
  }
  return puVar5;
}



/* Entry: 10a0c6d08; end: 10a0c6e93;  */

undefined1 * FUN_10a0c6d08(undefined4 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined1 *puStack_a0;
  undefined4 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined1 uStack_6b;
  char cStack_69;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_69 = '\x10';
  uStack_78 = 0x72;
  uStack_77 = 0x74786554;
  uStack_80 = 0x62;
  uStack_7f = 0x6f6c6f43657361;
  uStack_73 = 0x657275;
  puVar5 = (undefined1 *)(*(long *)(param_2 + 8) + 0x538);
  FUN_10a0e3358(puVar5,&uStack_80);
  puVar3 = puVar5;
  if (cStack_69 < '\0') {
    puVar3 = (undefined1 *)CONCAT71(uStack_7f,uStack_80);
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(param_2 + 8) + 0x540) == puVar5) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    unaff_x20 = puVar5 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar5 + 0x38;
    func_0x00010a0c6f04();
    lVar7 = *(long *)(param_2 + 8);
    cStack_69 = '\x15';
    uStack_78 = 0x75;
    uStack_77 = 0x745f6572;
    uStack_80 = 0x4b;
    uStack_7f = 0x747865745f5248;
    uStack_73 = 0x736e6172;
    uStack_6f = 0x6d726f66;
    uStack_6b = 0;
    puVar5 = (undefined1 *)(lVar7 + 0xf0);
    FUN_10a0dc2d0(puVar5,&uStack_80);
    puVar3 = puVar5;
    if (cStack_69 < '\0') {
      puVar3 = (undefined1 *)CONCAT71(uStack_7f,uStack_80);
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar7 + 0xf8) == puVar5;
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_80,puVar5 + 0x38);
      uStack_60 = CONCAT17(uStack_78,uStack_7f);
      uStack_58 = (undefined7)CONCAT44(uStack_73,uStack_77);
      uStack_51 = CONCAT31((undefined3)uStack_6f,uStack_73._3_1_);
      puVar3 = puVar4;
      uVar6 = uStack_80;
    }
    *param_1 = (int)unaff_x20;
    param_1[1] = iVar2;
    uVar8 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 2) = uVar8;
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17((undefined1)uStack_51,uStack_58);
    *(undefined8 *)((long)param_1 + 0x11) = uStack_60;
    param_1[8] = uStack_51;
    *(bool *)(param_1 + 9) = !bVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_88 = FUN_10a0c6e94;
  puStack_a0 = unaff_x20;
  puStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c2b054(auStack_b8,&DAT_10f2c4679);
  puVar5 = puVar3 + 0x38;
  func_0x00010a0dc34c(puVar5,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if (puVar3 + 0x40 == puVar5) {
    puVar5 = (undefined1 *)0xffffffff;
  }
  else {
    puVar5 = (undefined1 *)(ulong)(uint)(int)*(double *)(puVar5 + 0x38);
  }
  return puVar5;
}



/* Entry: 10a0c6e94; end: 10a0c6f73;  */

int FUN_10a0c6e94(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&DAT_10f2c4679);
  lVar2 = param_1 + 0x38;
  func_0x00010a0dc34c(lVar2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (param_1 + 0x40 == lVar2) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)*(double *)(lVar2 + 0x38);
  }
  return iVar1;
}



/* Entry: 10a0c6f74; end: 10a0c71f7;  */

void FUN_10a0c6f74(float *param_1,long param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  int *piStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  int **ppiStack_38;
  
  param_1[2] = 1.0;
  param_1[3] = 1.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  FUN_10a0c9838(&uStack_50,param_2 + 0x58);
  func_0x000107c2b054(&piStack_68,&DAT_10f63975c);
  puVar1 = &uStack_50;
  FUN_10a0cd368(puVar1,&piStack_68);
  if (lStack_58 < 0) {
    __ZdlPv(piStack_68);
  }
  if (auStack_48 != puVar1) {
    piStack_68 = (int *)0x0;
    lStack_60 = 0;
    lStack_58 = 0;
    FUN_10a0c9680(&piStack_68,puVar1[0xf],puVar1[0x10],
                  ((long)(puVar1[0x10] - puVar1[0xf]) >> 3) * -0x1111111111111111);
    if (lStack_60 - (long)piStack_68 == 0xf0) {
      if (*piStack_68 == 2) {
        dVar2 = (double)piStack_68[1];
      }
      else {
        dVar2 = *(double *)(piStack_68 + 2);
      }
      if (piStack_68[0x1e] == 2) {
        dVar3 = (double)piStack_68[0x1f];
      }
      else {
        dVar3 = *(double *)(piStack_68 + 0x20);
      }
      *param_1 = (float)dVar2;
      param_1[1] = (float)dVar3;
    }
    ppiStack_38 = &piStack_68;
    FUN_10a0c97c8(&ppiStack_38);
  }
  func_0x000107c2b054(&piStack_68,"scale");
  puVar1 = &uStack_50;
  FUN_10a0cd368(puVar1,&piStack_68);
  if (lStack_58 < 0) {
    __ZdlPv(piStack_68);
  }
  if (auStack_48 != puVar1) {
    piStack_68 = (int *)0x0;
    lStack_60 = 0;
    lStack_58 = 0;
    FUN_10a0c9680(&piStack_68,puVar1[0xf],puVar1[0x10],
                  ((long)(puVar1[0x10] - puVar1[0xf]) >> 3) * -0x1111111111111111);
    if (lStack_60 - (long)piStack_68 == 0xf0) {
      if (*piStack_68 == 2) {
        dVar2 = (double)piStack_68[1];
      }
      else {
        dVar2 = *(double *)(piStack_68 + 2);
      }
      if (piStack_68[0x1e] == 2) {
        dVar3 = (double)piStack_68[0x1f];
      }
      else {
        dVar3 = *(double *)(piStack_68 + 0x20);
      }
      param_1[2] = (float)dVar2;
      param_1[3] = (float)dVar3;
    }
    ppiStack_38 = &piStack_68;
    FUN_10a0c97c8(&ppiStack_38);
  }
  func_0x000107c2b054(&piStack_68,&DAT_10f2c46ae);
  puVar1 = &uStack_50;
  FUN_10a0cd368(puVar1,&piStack_68);
  if (lStack_58 < 0) {
    __ZdlPv(piStack_68);
  }
  if ((auStack_48 != puVar1) && (*(int *)(puVar1 + 7) - 1U < 2)) {
    if (*(int *)(puVar1 + 7) == 2) {
      dVar2 = (double)*(int *)((long)puVar1 + 0x3c);
    }
    else {
      dVar2 = (double)puVar1[8];
    }
    param_1[4] = (float)((dVar2 / 3.141592653589793) * 180.0);
  }
  func_0x00010a0c9b2c(auStack_48[0]);
  return;
}



/* Entry: 10a0c71f8; end: 10a0c739b;  */

undefined8 FUN_10a0c71f8(int *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  char cStack_69;
  undefined8 uStack_60;
  undefined7 uStack_58;
  int iStack_51;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_2 + 8);
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  uStack_80 = SUB81(puVar4,0);
  uStack_7f = (undefined7)((ulong)puVar4 >> 8);
  uStack_6f = 0;
  uStack_6b = 0;
  uStack_6a = 0;
  cStack_69 = -0x80;
  uStack_78 = 0x18;
  uStack_77 = 0;
  uStack_73 = 0x20000000;
  uVar10 = 0x63696c6c6174656d;
  puVar4[1] = 0x73656e6867756f52;
  *puVar4 = 0x63696c6c6174656d;
  puVar4[2] = 0x6572757478655473;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar5 = (undefined1 *)(lVar9 + 0x538);
  FUN_10a0e3358(puVar5,&uStack_80);
  puVar6 = puVar5;
  if (cStack_69 < '\0') {
    puVar6 = (undefined1 *)CONCAT71(uStack_7f,uStack_80);
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(param_2 + 8) + 0x540) == puVar5) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    iVar2 = (int)puVar5 + 0x38;
    FUN_10a0c6e94();
    iVar3 = (int)puVar5 + 0x38;
    func_0x00010a0c6f04();
    lVar9 = *(long *)(param_2 + 8);
    cStack_69 = '\x15';
    uStack_78 = 0x75;
    uStack_77 = 0x745f6572;
    uStack_80 = 0x4b;
    uStack_7f = 0x747865745f5248;
    uStack_73 = 0x736e6172;
    uStack_6f = 0x6d726f66;
    uStack_6b = 0;
    puVar5 = (undefined1 *)(lVar9 + 0x1c8);
    FUN_10a0dc2d0(puVar5,&uStack_80);
    puVar6 = puVar5;
    if (cStack_69 < '\0') {
      puVar6 = (undefined1 *)CONCAT71(uStack_7f,uStack_80);
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar9 + 0x1d0) == puVar5;
    if (bVar1) {
      uVar8 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_80,puVar5 + 0x38);
      uStack_60 = CONCAT17(uStack_78,uStack_7f);
      uStack_58 = (undefined7)CONCAT44(uStack_73,uStack_77);
      iStack_51 = CONCAT31((undefined3)uStack_6f,uStack_73._3_1_);
      puVar6 = puVar7;
      uVar8 = uStack_80;
    }
    *param_1 = iVar2;
    param_1[1] = iVar3;
    uVar10 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(undefined1 *)(param_1 + 4) = uVar8;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17((undefined1)iStack_51,uStack_58);
    *(undefined8 *)((long)param_1 + 0x11) = uStack_60;
    param_1[8] = iStack_51;
    *(bool *)(param_1 + 9) = !bVar1;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar10 = uStack_60;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar10;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return *(undefined8 *)(*(long *)(puVar6 + 8) + 0x138);
}



/* Entry: 10a0c739c; end: 10a0c73b3;  */

undefined8 FUN_10a0c739c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x138);
}



/* Entry: 10a0c73b4; end: 10a0c73f3;  */

void FUN_10a0c73b4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110ba1700;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10a0c73f4; end: 10a0c759b;  */

undefined1 * FUN_10a0c73f4(undefined4 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined4 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined1 *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_1e0;
  undefined7 uStack_1d8;
  undefined4 uStack_1d1;
  undefined1 uStack_1cd;
  char cStack_1c9;
  undefined1 *puStack_1c0;
  undefined8 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined4 uStack_197;
  undefined4 uStack_193;
  undefined4 uStack_18f;
  undefined1 uStack_18b;
  char cStack_189;
  undefined8 uStack_180;
  undefined7 uStack_178;
  undefined4 uStack_171;
  long lStack_168;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 uStack_110;
  undefined6 uStack_10f;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined4 uStack_107;
  undefined2 uStack_103;
  undefined1 uStack_101;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  char cStack_f9;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined4 uStack_e1;
  long lStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_90;
  undefined4 uStack_8f;
  undefined4 uStack_8b;
  undefined4 uStack_87;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  char cStack_79;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  long lStack_58;
  
  puVar5 = &uStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_79 = '\r';
  uStack_90 = 0x6e;
  uStack_8f = 0x616d726f;
  uStack_8b = 0x7865546c;
  uStack_87 = 0x65727574;
  uStack_83 = 0;
  puVar3 = (undefined1 *)(*(long *)(param_2 + 8) + 0x550);
  FUN_10a0e3358(puVar3,&uStack_90);
  puVar4 = puVar3;
  if (cStack_79 < '\0') {
    puVar4 = (undefined1 *)CONCAT35((undefined3)uStack_8b,CONCAT41(uStack_8f,uStack_90));
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(param_2 + 8) + 0x558) == puVar3) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    unaff_x20 = puVar3 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar3 + 0x38;
    func_0x00010a0c6f04();
    lVar8 = *(long *)(param_2 + 8);
    dVar10 = *(double *)(lVar8 + 0x2d8);
    cStack_79 = '\x15';
    uStack_87 = 0x745f6572;
    uStack_90 = 0x4b;
    uStack_8f = 0x745f5248;
    uStack_8b = 0x75747865;
    uStack_83 = 0x72;
    uStack_82 = 0x6e61;
    uStack_80 = 0x726f6673;
    uStack_7c = 0x6d;
    uStack_7b = 0;
    puVar3 = (undefined1 *)(lVar8 + 0x358);
    FUN_10a0dc2d0(puVar3,&uStack_90);
    puVar4 = puVar3;
    if (cStack_79 < '\0') {
      puVar4 = (undefined1 *)CONCAT35((undefined3)uStack_8b,CONCAT41(uStack_8f,uStack_90));
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar8 + 0x360) == puVar3;
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_90,puVar3 + 0x38);
      uStack_68 = CONCAT25(uStack_82,CONCAT14(uStack_83,uStack_87));
      uStack_70 = CONCAT44(uStack_8b,uStack_8f);
      uStack_61 = uStack_80;
      puVar4 = puVar5;
      uVar7 = uStack_90;
    }
    *param_1 = (int)unaff_x20;
    param_1[1] = iVar2;
    param_1[2] = (float)dVar10;
    param_1[3] = 0x3f800000;
    *(undefined1 *)(param_1 + 4) = uVar7;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17((undefined1)uStack_61,uStack_68);
    *(undefined8 *)((long)param_1 + 0x11) = uStack_70;
    param_1[8] = uStack_61;
    *(bool *)(param_1 + 9) = !bVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar6 = &uStack_110;
  puStack_a0 = &stack0xfffffffffffffff0;
  pcStack_98 = FUN_10a0c759c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_f9 = '\x0f';
  uStack_110 = 0x65;
  uStack_10f = 0x76697373696d;
  uStack_109 = 0x65;
  uStack_108 = 0x54;
  uStack_107 = 0x75747865;
  uStack_103 = 0x6572;
  uStack_101 = 0;
  puVar3 = (undefined1 *)(*(long *)(puVar4 + 8) + 0x550);
  FUN_10a0e3358(puVar3,&uStack_110);
  puVar5 = puVar3;
  if (cStack_f9 < '\0') {
    puVar5 = (undefined1 *)CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(puVar4 + 8) + 0x558) == puVar3) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 10) = 0;
  }
  else {
    unaff_x20 = puVar3 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar3 + 0x38;
    func_0x00010a0c6f04();
    lVar8 = *(long *)(puVar4 + 8);
    cStack_f9 = '\x15';
    uStack_108 = 0x75;
    uStack_107 = 0x745f6572;
    uStack_110 = 0x4b;
    uStack_10f = 0x7865745f5248;
    uStack_109 = 0x74;
    uStack_103 = 0x6172;
    uStack_101 = 0x6e;
    uStack_100 = 0x726f6673;
    uStack_fc = 0x6d;
    uStack_fb = 0;
    puVar3 = (undefined1 *)(lVar8 + 0x4f0);
    FUN_10a0dc2d0(puVar3,&uStack_110);
    puVar5 = puVar3;
    if (cStack_f9 < '\0') {
      puVar5 = (undefined1 *)CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar8 + 0x4f8) == puVar3;
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_110,puVar3 + 0x38);
      uStack_e8 = CONCAT16(uStack_101,CONCAT24(uStack_103,uStack_107));
      uStack_f0 = CONCAT17(uStack_108,CONCAT16(uStack_109,uStack_10f));
      uStack_e1 = uStack_100;
      puVar5 = puVar6;
      uVar7 = uStack_110;
    }
    *extraout_x8 = (int)unaff_x20;
    extraout_x8[1] = iVar2;
    uVar9 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(extraout_x8 + 2) = uVar9;
    *(undefined1 *)(extraout_x8 + 4) = uVar7;
    *(ulong *)((long)extraout_x8 + 0x19) = CONCAT17((undefined1)uStack_e1,uStack_e8);
    *(undefined8 *)((long)extraout_x8 + 0x11) = uStack_f0;
    extraout_x8[8] = uStack_e1;
    *(bool *)(extraout_x8 + 9) = !bVar1;
    *(undefined1 *)(extraout_x8 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar6 = &uStack_1a0;
  ppuStack_120 = &puStack_a0;
  pcStack_118 = FUN_10a0c7730;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_189 = '\x10';
  uStack_198 = 0x6e;
  uStack_197 = 0x74786554;
  uStack_1a0 = 0x6f;
  uStack_19f = 0x6f6973756c6363;
  uStack_193 = 0x657275;
  puVar3 = (undefined1 *)(*(long *)(puVar5 + 8) + 0x550);
  FUN_10a0e3358(puVar3,&uStack_1a0);
  puVar4 = puVar3;
  if (cStack_189 < '\0') {
    puVar4 = (undefined1 *)CONCAT71(uStack_19f,uStack_1a0);
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(puVar5 + 8) + 0x558) == puVar3) {
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 10) = 0;
  }
  else {
    unaff_x20 = puVar3 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar3 + 0x38;
    func_0x00010a0c6f04();
    lVar8 = *(long *)(puVar5 + 8);
    dVar10 = *(double *)(lVar8 + 0x3a8);
    cStack_189 = '\x15';
    uStack_198 = 0x75;
    uStack_197 = 0x745f6572;
    uStack_1a0 = 0x4b;
    uStack_19f = 0x747865745f5248;
    uStack_193 = 0x736e6172;
    uStack_18f = 0x6d726f66;
    uStack_18b = 0;
    puVar3 = (undefined1 *)(lVar8 + 0x428);
    FUN_10a0dc2d0(puVar3,&uStack_1a0);
    puVar4 = puVar3;
    if (cStack_189 < '\0') {
      puVar4 = (undefined1 *)CONCAT71(uStack_19f,uStack_1a0);
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar8 + 0x430) == puVar3;
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_1a0,puVar3 + 0x38);
      uStack_180 = CONCAT17(uStack_198,uStack_19f);
      uStack_178 = (undefined7)CONCAT44(uStack_193,uStack_197);
      uStack_171 = CONCAT31((undefined3)uStack_18f,uStack_193._3_1_);
      puVar4 = puVar6;
      uVar7 = uStack_1a0;
    }
    *extraout_x8_00 = (int)unaff_x20;
    extraout_x8_00[1] = iVar2;
    extraout_x8_00[2] = 0x3f800000;
    extraout_x8_00[3] = (float)dVar10;
    *(undefined1 *)(extraout_x8_00 + 4) = uVar7;
    *(ulong *)((long)extraout_x8_00 + 0x19) = CONCAT17((undefined1)uStack_171,uStack_178);
    *(undefined8 *)((long)extraout_x8_00 + 0x11) = uStack_180;
    extraout_x8_00[8] = uStack_171;
    *(bool *)(extraout_x8_00 + 9) = !bVar1;
    *(undefined1 *)(extraout_x8_00 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_1a8 = FUN_10a0c78d0;
  cStack_1c9 = '\x13';
  uStack_1d8 = 0x755f736c616972;
  uStack_1d1 = 0x74696c6e;
  uStack_1e0 = 0x6574616d5f52484b;
  uStack_1cd = 0;
  lVar8 = *(long *)(puVar4 + 8) + 0x568;
  puStack_1c0 = unaff_x20;
  ppuStack_1b0 = &ppuStack_120;
  FUN_10a0dc2d0(lVar8,&uStack_1e0);
  if (cStack_1c9 < '\0') {
    __ZdlPv(uStack_1e0);
  }
  return (undefined1 *)(ulong)(*(long *)(puVar4 + 8) + 0x570 != lVar8);
}



/* Entry: 10a0c759c; end: 10a0c772f;  */

undefined1 * FUN_10a0c759c(undefined4 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined4 *extraout_x8;
  undefined1 *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_150;
  undefined7 uStack_148;
  undefined4 uStack_141;
  undefined1 uStack_13d;
  char cStack_139;
  undefined1 *puStack_130;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined4 uStack_107;
  undefined4 uStack_103;
  undefined4 uStack_ff;
  undefined1 uStack_fb;
  char cStack_f9;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined4 uStack_e1;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_80;
  undefined6 uStack_7f;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  char cStack_69;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_69 = '\x0f';
  uStack_80 = 0x65;
  uStack_7f = 0x76697373696d;
  uStack_79 = 0x65;
  uStack_78 = 0x54;
  uStack_77 = 0x75747865;
  uStack_73 = 0x6572;
  uStack_71 = 0;
  puVar3 = (undefined1 *)(*(long *)(param_2 + 8) + 0x550);
  FUN_10a0e3358(puVar3,&uStack_80);
  puVar4 = puVar3;
  if (cStack_69 < '\0') {
    puVar4 = (undefined1 *)CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80));
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(param_2 + 8) + 0x558) == puVar3) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    unaff_x20 = puVar3 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar3 + 0x38;
    func_0x00010a0c6f04();
    lVar8 = *(long *)(param_2 + 8);
    cStack_69 = '\x15';
    uStack_78 = 0x75;
    uStack_77 = 0x745f6572;
    uStack_80 = 0x4b;
    uStack_7f = 0x7865745f5248;
    uStack_79 = 0x74;
    uStack_73 = 0x6172;
    uStack_71 = 0x6e;
    uStack_70 = 0x726f6673;
    uStack_6c = 0x6d;
    uStack_6b = 0;
    puVar3 = (undefined1 *)(lVar8 + 0x4f0);
    FUN_10a0dc2d0(puVar3,&uStack_80);
    puVar4 = puVar3;
    if (cStack_69 < '\0') {
      puVar4 = (undefined1 *)CONCAT17(uStack_79,CONCAT61(uStack_7f,uStack_80));
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar8 + 0x4f8) == puVar3;
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_80,puVar3 + 0x38);
      uStack_58 = CONCAT16(uStack_71,CONCAT24(uStack_73,uStack_77));
      uStack_60 = CONCAT17(uStack_78,CONCAT16(uStack_79,uStack_7f));
      uStack_51 = uStack_70;
      puVar4 = puVar5;
      uVar7 = uStack_80;
    }
    *param_1 = (int)unaff_x20;
    param_1[1] = iVar2;
    uVar9 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)(param_1 + 4) = uVar7;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17((undefined1)uStack_51,uStack_58);
    *(undefined8 *)((long)param_1 + 0x11) = uStack_60;
    param_1[8] = uStack_51;
    *(bool *)(param_1 + 9) = !bVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar6 = &uStack_110;
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10a0c7730;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_f9 = '\x10';
  uStack_108 = 0x6e;
  uStack_107 = 0x74786554;
  uStack_110 = 0x6f;
  uStack_10f = 0x6f6973756c6363;
  uStack_103 = 0x657275;
  puVar3 = (undefined1 *)(*(long *)(puVar4 + 8) + 0x550);
  FUN_10a0e3358(puVar3,&uStack_110);
  puVar5 = puVar3;
  if (cStack_f9 < '\0') {
    puVar5 = (undefined1 *)CONCAT71(uStack_10f,uStack_110);
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(puVar4 + 8) + 0x558) == puVar3) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 10) = 0;
  }
  else {
    unaff_x20 = puVar3 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar3 + 0x38;
    func_0x00010a0c6f04();
    lVar8 = *(long *)(puVar4 + 8);
    dVar10 = *(double *)(lVar8 + 0x3a8);
    cStack_f9 = '\x15';
    uStack_108 = 0x75;
    uStack_107 = 0x745f6572;
    uStack_110 = 0x4b;
    uStack_10f = 0x747865745f5248;
    uStack_103 = 0x736e6172;
    uStack_ff = 0x6d726f66;
    uStack_fb = 0;
    puVar3 = (undefined1 *)(lVar8 + 0x428);
    FUN_10a0dc2d0(puVar3,&uStack_110);
    puVar5 = puVar3;
    if (cStack_f9 < '\0') {
      puVar5 = (undefined1 *)CONCAT71(uStack_10f,uStack_110);
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar8 + 0x430) == puVar3;
    if (bVar1) {
      uVar7 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_110,puVar3 + 0x38);
      uStack_f0 = CONCAT17(uStack_108,uStack_10f);
      uStack_e8 = (undefined7)CONCAT44(uStack_103,uStack_107);
      uStack_e1 = CONCAT31((undefined3)uStack_ff,uStack_103._3_1_);
      puVar5 = puVar6;
      uVar7 = uStack_110;
    }
    *extraout_x8 = (int)unaff_x20;
    extraout_x8[1] = iVar2;
    extraout_x8[2] = 0x3f800000;
    extraout_x8[3] = (float)dVar10;
    *(undefined1 *)(extraout_x8 + 4) = uVar7;
    *(ulong *)((long)extraout_x8 + 0x19) = CONCAT17((undefined1)uStack_e1,uStack_e8);
    *(undefined8 *)((long)extraout_x8 + 0x11) = uStack_f0;
    extraout_x8[8] = uStack_e1;
    *(bool *)(extraout_x8 + 9) = !bVar1;
    *(undefined1 *)(extraout_x8 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_10a0c78d0;
  cStack_139 = '\x13';
  uStack_148 = 0x755f736c616972;
  uStack_141 = 0x74696c6e;
  uStack_150 = 0x6574616d5f52484b;
  uStack_13d = 0;
  lVar8 = *(long *)(puVar5 + 8) + 0x568;
  puStack_130 = unaff_x20;
  ppuStack_120 = &puStack_90;
  FUN_10a0dc2d0(lVar8,&uStack_150);
  if (cStack_139 < '\0') {
    __ZdlPv(uStack_150);
  }
  return (undefined1 *)(ulong)(*(long *)(puVar5 + 8) + 0x570 != lVar8);
}



/* Entry: 10a0c7730; end: 10a0c78cf;  */

undefined1 * FUN_10a0c7730(undefined4 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 *unaff_x20;
  long lVar7;
  double dVar8;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined4 uStack_c1;
  undefined1 uStack_bd;
  char cStack_b9;
  undefined1 *puStack_b0;
  undefined4 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined4 uStack_87;
  undefined4 uStack_83;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  char cStack_79;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  long lStack_58;
  
  puVar5 = &uStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_79 = '\x10';
  uStack_88 = 0x6e;
  uStack_87 = 0x74786554;
  uStack_90 = 0x6f;
  uStack_8f = 0x6f6973756c6363;
  uStack_83 = 0x657275;
  puVar3 = (undefined1 *)(*(long *)(param_2 + 8) + 0x550);
  FUN_10a0e3358(puVar3,&uStack_90);
  puVar4 = puVar3;
  if (cStack_79 < '\0') {
    puVar4 = (undefined1 *)CONCAT71(uStack_8f,uStack_90);
    __ZdlPv();
  }
  if ((undefined1 *)(*(long *)(param_2 + 8) + 0x558) == puVar3) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    unaff_x20 = puVar3 + 0x38;
    FUN_10a0c6e94();
    iVar2 = (int)puVar3 + 0x38;
    func_0x00010a0c6f04();
    lVar7 = *(long *)(param_2 + 8);
    dVar8 = *(double *)(lVar7 + 0x3a8);
    cStack_79 = '\x15';
    uStack_88 = 0x75;
    uStack_87 = 0x745f6572;
    uStack_90 = 0x4b;
    uStack_8f = 0x747865745f5248;
    uStack_83 = 0x736e6172;
    uStack_7f = 0x6d726f66;
    uStack_7b = 0;
    puVar3 = (undefined1 *)(lVar7 + 0x428);
    FUN_10a0dc2d0(puVar3,&uStack_90);
    puVar4 = puVar3;
    if (cStack_79 < '\0') {
      puVar4 = (undefined1 *)CONCAT71(uStack_8f,uStack_90);
      __ZdlPv();
    }
    bVar1 = (undefined1 *)(lVar7 + 0x430) == puVar3;
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      FUN_10a0c6f74(&uStack_90,puVar3 + 0x38);
      uStack_70 = CONCAT17(uStack_88,uStack_8f);
      uStack_68 = (undefined7)CONCAT44(uStack_83,uStack_87);
      uStack_61 = CONCAT31((undefined3)uStack_7f,uStack_83._3_1_);
      puVar4 = puVar5;
      uVar6 = uStack_90;
    }
    *param_1 = (int)unaff_x20;
    param_1[1] = iVar2;
    param_1[2] = 0x3f800000;
    param_1[3] = (float)dVar8;
    *(undefined1 *)(param_1 + 4) = uVar6;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17((undefined1)uStack_61,uStack_68);
    *(undefined8 *)((long)param_1 + 0x11) = uStack_70;
    param_1[8] = uStack_61;
    *(bool *)(param_1 + 9) = !bVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_98 = FUN_10a0c78d0;
  cStack_b9 = '\x13';
  uStack_c8 = 0x755f736c616972;
  uStack_c1 = 0x74696c6e;
  uStack_d0 = 0x6574616d5f52484b;
  uStack_bd = 0;
  lVar7 = *(long *)(puVar4 + 8) + 0x568;
  puStack_b0 = unaff_x20;
  puStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10a0dc2d0(lVar7,&uStack_d0);
  if (cStack_b9 < '\0') {
    __ZdlPv(uStack_d0);
  }
  return (undefined1 *)(ulong)(*(long *)(puVar4 + 8) + 0x570 != lVar7);
}



/* Entry: 10a0c78d0; end: 10a0c7a77;  */

bool FUN_10a0c78d0(long param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  undefined1 uStack_2d;
  char cStack_29;
  
  cStack_29 = '\x13';
  uStack_38 = 0x755f736c616972;
  uStack_31 = 0x74696c6e;
  uStack_40 = 0x6574616d5f52484b;
  uStack_2d = 0;
  lVar1 = *(long *)(param_1 + 8) + 0x568;
  FUN_10a0dc2d0(lVar1,&uStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  return *(long *)(param_1 + 8) + 0x570 != lVar1;
}



/* Entry: 10a0c7a78; end: 10a0c7ab3;  */

undefined8 FUN_10a0c7a78(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  
  param_2 = param_2 - (long)param_1;
  if (((param_2 != 0) && (1 < (ulong)(param_2 >> 3))) && (param_2 != 0x10)) {
    return *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0c7ab4);
  (*pcVar1)();
}



/* Entry: 10a0c7ab4; end: 10a0c7bff;  */

float FUN_10a0c7ab4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined6 uStack_30;
  undefined1 uStack_2a;
  char cStack_21;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  cStack_21 = '\x0e';
  uStack_38 = 0x697373696d65;
  uStack_32 = 0x6576;
  uStack_30 = 0x726f74636146;
  uStack_2a = 0;
  lVar1 = *(long *)(param_2 + 8) + 0x550;
  FUN_10a0e3358(lVar1,&uStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(CONCAT26(uStack_32,uStack_38));
  }
  if (*(long *)(param_2 + 8) + 0x558 == lVar1) {
    fVar3 = 0.0;
  }
  else {
    FUN_10a0c7a78(*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
    fVar3 = (float)(double)CONCAT44(uVar4,uVar2);
  }
  return fVar3;
}



/* Entry: 10a0c7c00; end: 10a0c7c0b;  */

undefined8 FUN_10a0c7c00(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
}



/* Entry: 10a0c7c0c; end: 10a0c7c83;  */

uint FUN_10a0c7c0c(undefined8 param_1)

{
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  char cStack_29;
  undefined8 uStack_28;
  
  uStack_40 = 0x6c6f4365736162;
  uStack_39 = 0x6f;
  uStack_38 = 0x726f7463614672;
  uStack_31 = 0;
  cStack_29 = '\x0f';
  uStack_28 = 0;
  func_0x000107c2b080(&uStack_40);
  FUN_10a336830(param_1,&uStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(CONCAT17(uStack_39,uStack_40));
  }
  return (uint)param_1 ^ 1;
}



/* Entry: 10a0c7c84; end: 10a0c7d9b;  */

long * FUN_10a0c7c84(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar10 + 2;
    plVar6 = param_1;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a0d93d0();
      if (*(char *)((long)param_1 + 0x7f) < '\0') {
        __ZdlPv(param_1[0xd]);
      }
      if (*(char *)((long)param_1 + 0x67) < '\0') {
        __ZdlPv(param_1[10]);
      }
      if (param_1[6] != 0) {
        param_1[7] = param_1[6];
        __ZdlPv();
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    plStack_38 = param_1;
    FUN_10a0d93e4();
    puVar3 = (undefined8 *)((long)plVar6 + lVar7);
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar3 + 2;
    lVar7 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar6 + uVar9 * 2);
    plVar6 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a0d9418(plVar6);
  }
  param_1[1] = (long)puVar10;
  return plVar6;
}



/* Entry: 10a0c7d9c; end: 10a0c7dfb;  */

undefined8 * FUN_10a0c7d9c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a0c7dfc; end: 10a0c93fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a0c7dfc(long *param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined3 uVar18;
  undefined5 uVar19;
  undefined7 uVar20;
  undefined1 auVar21 [12];
  unkbyte9 Var22;
  code *pcVar23;
  int *piVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  byte *pbVar38;
  ulong uVar39;
  long *plVar40;
  long lVar41;
  long *plVar42;
  long lVar43;
  uint uVar44;
  ulong uVar45;
  byte *pbVar46;
  int iVar47;
  byte *pbVar48;
  byte *pbVar49;
  long lVar50;
  int iVar51;
  uint uVar52;
  ulong uVar53;
  byte *pbVar54;
  byte *pbVar55;
  byte *unaff_x23;
  ulong uVar56;
  long lVar57;
  ulong uVar58;
  undefined8 *puVar59;
  undefined2 uVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  char cVar77;
  char cVar79;
  char cVar80;
  undefined4 uVar78;
  char cVar81;
  byte bVar82;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  undefined1 auVar85 [16];
  undefined1 auVar93 [16];
  byte bVar112;
  char cVar113;
  byte bVar114;
  char cVar115;
  byte bVar116;
  char cVar117;
  byte bVar118;
  char cVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  char cVar132;
  byte bVar133;
  char cVar134;
  byte bVar135;
  char cVar136;
  byte bVar137;
  char cVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  char cVar151;
  char cVar152;
  char cVar153;
  char cVar154;
  undefined1 auVar155 [16];
  byte *pbStack_25a0;
  long lStack_2598;
  long lStack_2590;
  byte abStack_2580 [256];
  undefined8 uStack_2480;
  undefined8 uStack_2478;
  long lStack_2470;
  undefined8 uStack_2468;
  undefined8 uStack_2460;
  undefined8 uStack_2458;
  undefined8 uStack_2450;
  undefined8 uStack_2448;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  undefined8 uStack_2428;
  undefined8 uStack_2420;
  undefined8 uStack_2418;
  undefined8 uStack_2410;
  undefined8 uStack_2408;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_78;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar96 [16];
  undefined1 auVar83 [12];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar97 [16];
  undefined1 auVar84 [14];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar98 [16];
  undefined1 auVar92 [16];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0xc) == 0) {
    uVar25 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEm(&uStack_480,*(undefined8 *)(param_3 + 0xc));
    FUN_109feb280(&uStack_2480,&UNK_10f637b8a,&uStack_480);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar25,&uStack_2480);
    ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    goto LAB_10a0c92d0;
  }
  uVar44 = *param_3;
  if (uVar44 == 0xffffffff) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f637d3c,&UNK_10f637d6c,0x8b,&UNK_10f637de5);
    }
LAB_10a0c8dfc:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
LAB_10a0c8e04:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
LAB_10a0c8f0c:
    uVar25 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(&uStack_480,unaff_x23);
    FUN_109feb280(&uStack_2480,&UNK_10f637e7b,&uStack_480);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar25,&uStack_2480);
    ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
  }
  else {
    if (-1 < (int)uVar44) {
      lVar57 = *(long *)(param_2 + 0x48);
      uVar37 = (*(long *)(param_2 + 0x50) - lVar57 >> 3) * 0xf83e0f83e0f83e1;
      if ((int)uVar44 < (int)uVar37) {
        if (uVar37 < uVar44 || uVar37 - uVar44 == 0) goto LAB_10a0c92d0;
        func_0x000107c2b054(&uStack_2480,&UNK_10f637e5c);
        lVar57 = lVar57 + (ulong)uVar44 * 0x108;
        lVar41 = lVar57 + 0xb8;
        FUN_10a0dc2d0(lVar41,&uStack_2480);
        if (lStack_2470 < 0) {
          __ZdlPv(uStack_2480);
        }
        if (lVar57 + 0xc0 == lVar41) {
          uVar44 = *(uint *)(lVar57 + 0x18);
          if (-1 < (int)uVar44) {
            lVar41 = *(long *)(param_2 + 0x30);
            uVar37 = (*(long *)(param_2 + 0x38) - lVar41 >> 3) * 0xf83e0f83e0f83e1;
            if ((int)uVar44 < (int)uVar37) {
              if (uVar37 < uVar44 || uVar37 - uVar44 == 0) goto LAB_10a0c92d0;
              uVar35 = param_3[0xe];
              uVar37 = *(ulong *)(lVar57 + 0x30);
              uVar2 = param_3[0xb] - 0x1400;
              uVar34 = (uint)(uVar2 < 0xb) & 0x47fU >> (ulong)(uVar2 & 0x1f);
              if (uVar37 == 0) {
                if (uVar34 == 0) goto LAB_10a0c9114;
                uVar37 = 0xffffffff;
                if ((int)uVar35 < 0x22) {
                  if (uVar35 == 2) {
                    lVar43 = 2;
                  }
                  else {
                    if (uVar35 != 3) {
                      if (uVar35 != 4) goto LAB_10a0c9118;
                      goto LAB_10a0c8cec;
                    }
                    lVar43 = 3;
                  }
                }
                else if ((int)uVar35 < 0x24) {
                  if (uVar35 == 0x22) {
LAB_10a0c8cec:
                    lVar43 = 4;
                  }
                  else {
                    if (uVar35 != 0x23) goto LAB_10a0c9118;
                    lVar43 = 9;
                  }
                }
                else if (uVar35 == 0x24) {
                  lVar43 = 0x10;
                }
                else {
                  if (uVar35 != 0x41) goto LAB_10a0c9118;
                  lVar43 = 1;
                }
                uVar37 = lVar43 * *(long *)(&UNK_10e4959f0 + (ulong)uVar2 * 8);
              }
              else {
                if ((uVar34 == 0) || ((*(ulong *)(&UNK_10e495a48 + (ulong)uVar2 * 8) & uVar37) != 0)
                   ) {
LAB_10a0c9114:
                  uVar37 = 0xffffffff;
LAB_10a0c9118:
                  uVar25 = 0x10;
                  ___cxa_allocate_exception(0x10);
                  __ZNSt3__19to_stringEi(&uStack_480,uVar37);
                  FUN_109feb280(&uStack_2480,&UNK_10f637fd8,&uStack_480);
                  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (uVar25,&uStack_2480);
                  ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                               PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                  goto LAB_10a0c92d0;
                }
                if ((int)uVar37 < 1) goto LAB_10a0c9118;
              }
              unaff_x23 = pbRam00000001137e9568;
              func_0x000107c2b0ac();
              if (unaff_x23 == (byte *)0x0) {
                FUN_109ffdddc(&UNK_10f639994);
                goto LAB_10a0c92d0;
              }
              lVar43 = lRam00000001137e9560;
              func_0x000107c2b0ac(lRam00000001137e9560,uVar35);
              if (lVar43 == 0) {
                FUN_109ffdddc(&UNK_10f639994);
                goto LAB_10a0c92d0;
              }
              if (CARRY8(*(ulong *)(lVar57 + 0x20),*(ulong *)(param_3 + 8))) {
                uVar25 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt13runtime_errorC1EPKc();
                ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0c92d0;
              }
              uVar58 = *(ulong *)(lVar57 + 0x20) + *(ulong *)(param_3 + 8);
              lVar41 = lVar41 + (ulong)uVar44 * 0x108;
              plVar42 = (long *)(lVar41 + 0x18);
              uVar45 = *(long *)(lVar41 + 0x20) - *plVar42;
              if (uVar45 < uVar58) {
                uVar25 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt13runtime_errorC1EPKc();
                ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0c92d0;
              }
              lVar57 = *(long *)(param_3 + 0xc);
              if (lVar57 == 0) goto LAB_10a0c8dfc;
              uVar37 = uVar37 & 0xffffffff;
              auVar155._8_8_ = 0;
              auVar155._0_8_ = uVar37;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = lVar57 - 1U;
              if (SUB168(auVar155 * auVar4,8) != 0) {
                uVar25 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt13runtime_errorC1EPKc();
                ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0c92d0;
              }
              unaff_x23 = (byte *)(*(long *)(lVar43 + 0x18) * *(long *)(unaff_x23 + 0x18));
              uVar39 = (lVar57 - 1U) * uVar37;
              if (CARRY8((ulong)unaff_x23,uVar39)) {
                uVar25 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt13runtime_errorC1EPKc();
                ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0c92d0;
              }
              if ((byte *)(uVar45 - uVar58) < unaff_x23 + uVar39) {
                uVar25 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt13runtime_errorC1EPKc();
                ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                goto LAB_10a0c92d0;
              }
              lVar41 = 0;
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              lVar43 = *plVar42;
              do {
                if (unaff_x23 != (byte *)0x0) {
                  lVar50 = lVar43 + uVar58 + lVar41 * uVar37;
                  pbVar38 = unaff_x23;
                  do {
                    FUN_10a0dc090(param_1,lVar50);
                    lVar50 = lVar50 + 1;
                    pbVar38 = pbVar38 + -1;
                  } while (pbVar38 != (byte *)0x0);
                }
                lVar41 = lVar41 + 1;
              } while (lVar41 != lVar57);
              goto LAB_10a0c8e04;
            }
          }
          uVar25 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(&uStack_480,*(undefined4 *)(lVar57 + 0x18));
          FUN_109feb280(&uStack_2480,&UNK_10f637fb5,&uStack_480);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar25,&uStack_2480);
          ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0c92d0;
        }
        func_0x000107c2b054(&uStack_2480,&DAT_10f637e74);
        piVar24 = (int *)(lVar41 + 0x38);
        func_0x00010a0b4efc(piVar24,&uStack_2480);
        uVar44 = (int)*(double *)(piVar24 + 2);
        if (*piVar24 != 1) {
          uVar44 = piVar24[1];
        }
        unaff_x23 = (byte *)(ulong)uVar44;
        if (lStack_2470 < 0) {
          __ZdlPv(uStack_2480);
        }
        if (-1 < (int)uVar44) {
          lVar57 = *(long *)(param_2 + 0x30);
          uVar37 = (*(long *)(param_2 + 0x38) - lVar57 >> 3) * 0xf83e0f83e0f83e1;
          if ((int)uVar44 < (int)uVar37) {
            if (uVar37 < uVar44 || uVar37 - uVar44 == 0) goto LAB_10a0c92d0;
            func_0x000107c2b054(&uStack_2480,&UNK_10f415091);
            piVar24 = (int *)(lVar41 + 0x38);
            func_0x00010a0b4efc(piVar24,&uStack_2480);
            uVar2 = (int)*(double *)(piVar24 + 2);
            if (*piVar24 != 1) {
              uVar2 = piVar24[1];
            }
            pbVar38 = (byte *)(ulong)uVar2;
            if (lStack_2470 < 0) {
              __ZdlPv(uStack_2480);
            }
            func_0x000107c2b054(&uStack_2480,&UNK_10f637e9e);
            piVar24 = (int *)(lVar41 + 0x38);
            func_0x00010a0b4efc(piVar24,&uStack_2480);
            uVar34 = (int)*(double *)(piVar24 + 2);
            if (*piVar24 != 1) {
              uVar34 = piVar24[1];
            }
            uVar37 = (ulong)uVar34;
            if (lStack_2470 < 0) {
              __ZdlPv(uStack_2480);
            }
            func_0x000107c2b054(&uStack_2480,&DAT_10f415065);
            piVar24 = (int *)(lVar41 + 0x38);
            func_0x00010a0b4efc(piVar24,&uStack_2480);
            uVar35 = (int)*(double *)(piVar24 + 2);
            if (*piVar24 != 1) {
              uVar35 = piVar24[1];
            }
            if (lStack_2470 < 0) {
              __ZdlPv(uStack_2480);
            }
            func_0x000107c2b054(&uStack_2480,&DAT_10f637eac);
            piVar24 = (int *)(lVar41 + 0x38);
            func_0x00010a0b4efc(piVar24,&uStack_2480);
            uVar3 = (int)*(double *)(piVar24 + 2);
            if (*piVar24 != 1) {
              uVar3 = piVar24[1];
            }
            uVar58 = (ulong)uVar3;
            if (lStack_2470 < 0) {
              __ZdlPv(uStack_2480);
            }
            if (((((int)uVar2 < 1) || ((int)uVar34 < 0)) || ((int)uVar35 < 0)) || ((int)uVar3 < 0))
            {
              uVar25 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              goto LAB_10a0c92d0;
            }
            if (*(ulong *)(param_3 + 0xc) != (ulong)uVar3) {
              uVar25 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              goto LAB_10a0c92d0;
            }
            func_0x000107c2b054(&uStack_2480,"mode");
            lVar41 = lVar41 + 0x38;
            func_0x00010a0b4efc(lVar41,&uStack_2480);
            if (lStack_2470 < 0) {
              __ZdlPv(uStack_2480);
            }
            if (CARRY8((ulong)uVar35,*(ulong *)(param_3 + 8))) {
              uVar25 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              goto LAB_10a0c92d0;
            }
            uVar45 = *(ulong *)(param_3 + 8) + (ulong)uVar35;
            lVar57 = lVar57 + (ulong)uVar44 * 0x108;
            lVar43 = *(long *)(lVar57 + 0x18);
            uVar39 = *(long *)(lVar57 + 0x20) - lVar43;
            if ((uVar39 < uVar45) || (uVar39 - uVar45 < uVar37)) {
              uVar25 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              goto LAB_10a0c92d0;
            }
            FUN_10a0dc020(&pbStack_25a0,uVar58 * (long)pbVar38);
            pbVar54 = pbStack_25a0;
            plVar42 = (long *)(lVar41 + 0x10);
            pbVar49 = (byte *)(lVar43 + uVar45);
            cVar77 = *(char *)(lVar41 + 0x27);
            if (cVar77 < '\0') {
              if (*(long *)(lVar41 + 0x18) == 9) {
                plVar40 = (long *)*plVar42;
                goto LAB_10a0c8648;
              }
              if ((*(long *)(lVar41 + 0x18) == 10) &&
                 (*(long *)*plVar42 == 0x5455424952545441 && (short)((long *)*plVar42)[1] == 0x5345)
                 ) goto LAB_10a0c8218;
LAB_10a0c8f70:
              uVar25 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (&uStack_2480,&UNK_10f637f50,plVar42);
              __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        (uVar25,&uStack_2480);
              ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              goto LAB_10a0c92d0;
            }
            plVar40 = plVar42;
            if (cVar77 != '\t') {
              if ((cVar77 != '\n') ||
                 (*plVar42 != 0x5455424952545441 || *(short *)(lVar41 + 0x18) != 0x5345))
              goto LAB_10a0c8f70;
LAB_10a0c8218:
              if ((uVar2 < uVar34) && (*pbVar49 == 0xa0)) {
                unaff_x23 = pbVar49 + 1;
                _memcpy(abStack_2580,pbVar49 + (uVar37 - (long)pbVar38),pbVar38);
                uVar44 = 0;
                if (uVar2 != 0) {
                  uVar44 = 0x2000 / uVar2;
                }
                uVar44 = uVar44 & 0x3ff0;
                if (uVar2 < 0x21) {
                  uVar44 = 0x100;
                }
                if (uVar3 != 0) {
                  uVar45 = 0;
LAB_10a0c827c:
                  pbVar46 = (byte *)0x0;
                  uVar39 = (ulong)uVar44;
                  if (uVar58 <= uVar45 + uVar44) {
                    uVar39 = uVar58 - uVar45;
                  }
                  uVar29 = uVar39 + 0xf;
                  uVar56 = uVar29 & 0xfffffffffffffff0;
                  pbVar55 = (byte *)((uVar29 >> 4) + 3 >> 2);
LAB_10a0c82d0:
                  lVar57 = 0;
                  puVar59 = &uStack_480;
                  pbVar48 = unaff_x23;
LAB_10a0c82e4:
                  unaff_x23 = pbVar48;
                  if (pbVar55 <= pbVar49 + (uVar37 - (long)pbVar48)) {
                    uVar53 = 0;
                    unaff_x23 = pbVar48 + (long)pbVar55;
                    if ((0x3f < uVar29) && ((byte *)0x5f < pbVar49 + (uVar37 - (long)unaff_x23))) {
                      uVar53 = 0;
                      do {
                        FUN_10a0dc164(unaff_x23,(long)puVar59 + uVar53,pbVar48[uVar53 >> 6] & 3);
                        FUN_10a0dc164();
                        FUN_10a0dc164();
                        FUN_10a0dc164();
                        uVar1 = uVar53 + 0x80;
                        uVar53 = uVar53 + 0x40;
                        if (uVar56 < uVar1) break;
                      } while ((byte *)0x5f < pbVar49 + (uVar37 - (long)unaff_x23));
                    }
                    do {
                      if (uVar56 <= uVar53) goto LAB_10a0c83c4;
                      if (pbVar49 + (uVar37 - (long)unaff_x23) < (byte *)0x18) break;
                      FUN_10a0dc164(unaff_x23,(long)puVar59 + uVar53,
                                    pbVar48[uVar53 >> 6] >> (ulong)((uint)(uVar53 >> 3) & 6) & 3);
                      uVar53 = uVar53 + 0x10;
                    } while( true );
                  }
                  goto LAB_10a0c85ec;
                }
LAB_10a0c85cc:
                pbVar46 = pbVar38;
                if (pbVar38 < (byte *)0x21) {
                  pbVar46 = (byte *)0x20;
                }
                iVar36 = 0;
                pbVar54 = pbRam00000001137e9568;
                if (pbVar49 + (uVar37 - (long)unaff_x23) != pbVar46) {
                  iVar36 = -3;
                }
                goto joined_r0x00010a0c8b8c;
              }
              goto LAB_10a0c8c84;
            }
LAB_10a0c8648:
            if (*plVar40 != 0x454c474e41495254 || (char)plVar40[1] != 'S') goto LAB_10a0c8f70;
            if ((uVar3 == (uVar3 / 3) * 3) &&
               ((((uVar2 == 4 || (uVar2 == 2)) && ((ulong)uVar3 / 3 + 0x11 <= uVar37)) &&
                (((*pbVar49 & 0xf0) == 0xe0 && (bVar61 = *pbVar49 & 0xf, bVar61 < 2)))))) {
              uStack_2418 = 0xffffffffffffffff;
              uStack_2420 = 0xffffffffffffffff;
              uStack_2408 = 0xffffffffffffffff;
              uStack_2410 = 0xffffffffffffffff;
              uStack_2438 = 0xffffffffffffffff;
              uStack_2440 = 0xffffffffffffffff;
              uStack_2428 = 0xffffffffffffffff;
              uStack_2430 = 0xffffffffffffffff;
              uStack_2458 = 0xffffffffffffffff;
              uStack_2460 = 0xffffffffffffffff;
              uStack_2448 = 0xffffffffffffffff;
              uStack_2450 = 0xffffffffffffffff;
              uStack_2478 = 0xffffffffffffffff;
              uStack_2480 = 0xffffffffffffffff;
              uStack_2468 = 0xffffffffffffffff;
              lStack_2470 = -1;
              uStack_448 = 0xffffffffffffffff;
              uStack_450 = 0xffffffffffffffff;
              uStack_458 = 0xffffffffffffffff;
              uStack_460 = 0xffffffffffffffff;
              uVar44 = 0xd;
              if (bVar61 != 1) {
                uVar44 = 0xf;
              }
              pbVar46 = pbVar49 + 1 + (ulong)uVar3 / 3;
              pbVar55 = pbVar49 + (uVar37 - 0x10);
              uStack_468 = 0xffffffffffffffff;
              uStack_470 = 0xffffffffffffffff;
              uStack_478 = 0xffffffffffffffff;
              uStack_480 = 0xffffffffffffffff;
              if (uVar3 != 0) {
                iVar36 = 0;
                uVar37 = 0;
                uVar45 = 0;
                uVar39 = 0;
                pbVar49 = pbVar49 + 1;
                iVar26 = 0;
                do {
                  if (pbVar55 < pbVar46) goto LAB_10a0c8c84;
                  bVar61 = *pbVar49;
                  iVar47 = (int)uVar39;
                  iVar33 = (int)uVar45;
                  if (bVar61 < 0xf0) {
                    uVar29 = (ulong)(iVar47 + (bVar61 >> 4 ^ 0xffffffff)) & 0xf;
                    iVar31 = *(int *)(&uStack_2480 + uVar29);
                    iVar28 = *(int *)((long)&uStack_2480 + uVar29 * 8 + 4);
                    uVar34 = bVar61 & 0xf;
                    iVar27 = iVar26;
                    if (uVar34 < uVar44) {
                      iVar33 = *(int *)((long)&uStack_480 +
                                       ((ulong)(iVar33 + ~(uint)bVar61) & 0xf) * 4);
                      if ((bVar61 & 0xf) == 0) {
                        iVar27 = iVar26 + 1;
                        iVar33 = iVar26;
                      }
                      if (uVar2 == 2) {
                        pbVar54 = pbStack_25a0 + uVar37 * 2;
                        *(short *)pbVar54 = (short)iVar31;
                        *(short *)(pbVar54 + 2) = (short)iVar28;
                        *(short *)(pbVar54 + 4) = (short)iVar33;
                      }
                      else {
                        pbVar54 = pbStack_25a0 + uVar37 * 4;
                        *(int *)pbVar54 = iVar31;
                        *(int *)(pbVar54 + 4) = iVar28;
                        *(int *)(pbVar54 + 8) = iVar33;
                      }
                      *(int *)((long)&uStack_480 + uVar45 * 4) = iVar33;
                      if ((bVar61 & 0xf) == 0) {
                        uVar45 = uVar45 + 1;
                      }
                      iVar32 = 1;
                      iVar51 = 2;
                      uVar29 = uVar45;
                    }
                    else {
                      if (uVar34 == 0xf) {
                        uVar34 = (uint)*pbVar46;
                        pbVar54 = pbVar46 + 1;
                        if ((char)*pbVar46 < '\0') {
                          uVar34 = uVar34 & 0x7f;
                          pbVar48 = pbVar46 + 2;
                          uVar35 = 7;
                          do {
                            uVar34 = (pbVar48[-1] & 0x7f) << (ulong)(uVar35 & 0x1f) | uVar34;
                            pbVar54 = pbVar48;
                            if (-1 < (char)pbVar48[-1]) break;
                            pbVar48 = pbVar48 + 1;
                            uVar35 = uVar35 + 7;
                            pbVar54 = pbVar46 + 5;
                          } while (uVar35 != 0x23);
                        }
                        iVar36 = (-(uVar34 & 1) ^ uVar34 >> 1) + iVar36;
                        pbVar46 = pbVar54;
                      }
                      else {
                        iVar36 = iVar36 + uVar34 + (uVar34 ^ 0xfffffffc) + 1;
                      }
                      if (uVar2 == 2) {
                        pbVar54 = pbStack_25a0 + uVar37 * 2;
                        *(short *)pbVar54 = (short)iVar31;
                        *(short *)(pbVar54 + 2) = (short)iVar28;
                        *(short *)(pbVar54 + 4) = (short)iVar36;
                      }
                      else {
                        pbVar54 = pbStack_25a0 + uVar37 * 4;
                        *(int *)pbVar54 = iVar31;
                        *(int *)(pbVar54 + 4) = iVar28;
                        *(int *)(pbVar54 + 8) = iVar36;
                      }
                      *(int *)((long)&uStack_480 + uVar45 * 4) = iVar36;
                      uVar29 = uVar45 + 1;
                      iVar32 = 1;
                      iVar51 = 2;
                      iVar33 = iVar36;
                    }
                  }
                  else if (bVar61 < 0xfe) {
                    bVar61 = pbVar55[(ulong)bVar61 & 0xf];
                    iVar28 = *(int *)((long)&uStack_480 +
                                     ((ulong)(iVar33 - (uint)(bVar61 >> 4)) & 0xf) * 4);
                    iVar31 = iVar26 + 1;
                    if (bVar61 < 0x10) {
                      iVar28 = iVar26 + 1;
                      iVar31 = iVar26 + 2;
                    }
                    iVar33 = *(int *)((long)&uStack_480 + ((ulong)(iVar33 - (uint)bVar61) & 0xf) * 4
                                     );
                    iVar27 = iVar31;
                    if ((bVar61 & 0xf) == 0) {
                      iVar27 = iVar31 + 1;
                      iVar33 = iVar31;
                    }
                    if (uVar2 == 2) {
                      pbVar54 = pbStack_25a0 + uVar37 * 2;
                      *(short *)pbVar54 = (short)iVar26;
                      *(short *)(pbVar54 + 2) = (short)iVar28;
                      *(short *)(pbVar54 + 4) = (short)iVar33;
                    }
                    else {
                      pbVar54 = pbStack_25a0 + uVar37 * 4;
                      *(int *)pbVar54 = iVar26;
                      *(int *)(pbVar54 + 4) = iVar28;
                      *(int *)(pbVar54 + 8) = iVar33;
                    }
                    uVar29 = uVar45 + 2;
                    if (0xf < bVar61) {
                      uVar29 = uVar45 + 1;
                    }
                    *(int *)((long)&uStack_480 + uVar45 * 4) = iVar26;
                    *(int *)((long)&uStack_480 + (uVar45 + 1 & 0xf) * 4) = iVar28;
                    *(int *)((long)&uStack_480 + (uVar29 & 0xf) * 4) = iVar33;
                    if ((bVar61 & 0xf) == 0) {
                      uVar29 = uVar29 + 1;
                    }
                    *(int *)(&uStack_2480 + uVar39) = iVar28;
                    *(int *)((long)&uStack_2480 + uVar39 * 8 + 4) = iVar26;
                    uVar39 = (ulong)(iVar47 + 1) & 0xf;
                    iVar32 = 2;
                    iVar51 = 3;
                    iVar31 = iVar26;
                  }
                  else {
                    pbVar54 = pbVar46 + 1;
                    bVar62 = *pbVar46;
                    iVar31 = 0;
                    if (bVar62 != 0) {
                      iVar31 = iVar26;
                    }
                    iVar26 = iVar31;
                    if (bVar61 == 0xfe) {
                      iVar26 = iVar31 + 1;
                    }
                    uVar34 = (uint)bVar62;
                    uVar35 = (uint)(bVar62 >> 4);
                    if (bVar62 < 0x10) {
                      iVar32 = iVar26 + 1;
                      iVar28 = iVar26;
                    }
                    else {
                      iVar28 = *(int *)((long)&uStack_480 + ((ulong)(iVar33 - uVar35) & 0xf) * 4);
                      iVar32 = iVar26;
                    }
                    if ((bVar62 & 0xf) == 0) {
                      iVar27 = iVar32 + 1;
                      iVar33 = iVar32;
                    }
                    else {
                      unaff_x23 = (byte *)((ulong)(iVar33 - uVar34) & 0xf);
                      iVar33 = *(int *)((long)&uStack_480 + (long)unaff_x23 * 4);
                      iVar27 = iVar32;
                    }
                    if (bVar61 != 0xfe) {
                      uVar30 = (uint)pbVar46[1];
                      if ((char)pbVar46[1] < '\0') {
                        uVar30 = uVar30 & 0x7f;
                        pbVar48 = pbVar46 + 3;
                        uVar52 = 7;
                        do {
                          bVar61 = pbVar48[-1];
                          unaff_x23 = (byte *)(ulong)bVar61;
                          uVar30 = (bVar61 & 0x7f) << (ulong)(uVar52 & 0x1f) | uVar30;
                          pbVar54 = pbVar48;
                          if (-1 < (char)bVar61) break;
                          pbVar48 = pbVar48 + 1;
                          uVar52 = uVar52 + 7;
                          pbVar54 = pbVar46 + 6;
                        } while (uVar52 != 0x23);
                      }
                      else {
                        pbVar54 = pbVar46 + 2;
                      }
                      iVar31 = (-(uVar30 & 1) ^ uVar30 >> 1) + iVar36;
                      iVar36 = iVar31;
                    }
                    pbVar48 = pbVar54;
                    if (uVar35 == 0xf) {
                      pbVar48 = pbVar54 + 1;
                      uVar30 = (uint)*pbVar54;
                      if ((char)*pbVar54 < '\0') {
                        uVar30 = uVar30 & 0x7f;
                        pbVar46 = pbVar54 + 2;
                        uVar52 = 7;
                        do {
                          bVar61 = pbVar46[-1];
                          unaff_x23 = (byte *)(ulong)bVar61;
                          uVar30 = (bVar61 & 0x7f) << (ulong)(uVar52 & 0x1f) | uVar30;
                          pbVar48 = pbVar46;
                          if (-1 < (char)bVar61) break;
                          pbVar46 = pbVar46 + 1;
                          uVar52 = uVar52 + 7;
                          pbVar48 = pbVar54 + 5;
                        } while (uVar52 != 0x23);
                      }
                      iVar36 = (-(uVar30 & 1) ^ uVar30 >> 1) + iVar36;
                      iVar28 = iVar36;
                    }
                    pbVar46 = pbVar48;
                    if ((uVar34 & 0xf) == 0xf) {
                      pbVar46 = pbVar48 + 1;
                      uVar30 = (uint)*pbVar48;
                      if ((char)*pbVar48 < '\0') {
                        uVar30 = uVar30 & 0x7f;
                        pbVar54 = pbVar48 + 2;
                        uVar52 = 7;
                        do {
                          bVar61 = pbVar54[-1];
                          unaff_x23 = (byte *)(ulong)bVar61;
                          uVar30 = (bVar61 & 0x7f) << (ulong)(uVar52 & 0x1f) | uVar30;
                          pbVar46 = pbVar54;
                          if (-1 < (char)bVar61) break;
                          pbVar54 = pbVar54 + 1;
                          uVar52 = uVar52 + 7;
                          pbVar46 = pbVar48 + 5;
                        } while (uVar52 != 0x23);
                      }
                      iVar36 = (-(uVar30 & 1) ^ uVar30 >> 1) + iVar36;
                      iVar33 = iVar36;
                    }
                    if (uVar2 == 2) {
                      pbVar54 = pbStack_25a0 + uVar37 * 2;
                      *(short *)pbVar54 = (short)iVar31;
                      *(short *)(pbVar54 + 2) = (short)iVar28;
                      *(short *)(pbVar54 + 4) = (short)iVar33;
                    }
                    else {
                      pbVar54 = pbStack_25a0 + uVar37 * 4;
                      *(int *)pbVar54 = iVar31;
                      *(int *)(pbVar54 + 4) = iVar28;
                      *(int *)(pbVar54 + 8) = iVar33;
                    }
                    uVar29 = uVar45 + 1;
                    if (uVar34 < 0x10 || uVar35 == 0xf) {
                      uVar29 = uVar45 + 2;
                    }
                    *(int *)((long)&uStack_480 + uVar45 * 4) = iVar31;
                    *(int *)((long)&uStack_480 + (uVar45 + 1 & 0xf) * 4) = iVar28;
                    *(int *)((long)&uStack_480 + (uVar29 & 0xf) * 4) = iVar33;
                    if ((bVar62 & 0xf) == 0 || (uVar34 & 0xf) == 0xf) {
                      uVar29 = uVar29 + 1;
                    }
                    *(int *)(&uStack_2480 + uVar39) = iVar28;
                    *(int *)((long)&uStack_2480 + uVar39 * 8 + 4) = iVar31;
                    uVar39 = (ulong)(iVar47 + 1) & 0xf;
                    iVar32 = 2;
                    iVar51 = 3;
                  }
                  *(int *)(&uStack_2480 + uVar39) = iVar33;
                  *(int *)((long)&uStack_2480 + uVar39 * 8 + 4) = iVar28;
                  uVar45 = (ulong)(uint)(iVar32 + iVar47) & 0xf;
                  *(int *)(&uStack_2480 + uVar45) = iVar31;
                  *(int *)((long)&uStack_2480 + uVar45 * 8 + 4) = iVar33;
                  uVar45 = uVar29 & 0xf;
                  uVar39 = (ulong)(uint)(iVar51 + iVar47) & 0xf;
                  uVar37 = uVar37 + 3;
                  pbVar49 = pbVar49 + 1;
                  iVar26 = iVar27;
                } while (uVar37 < uVar58);
              }
              iVar36 = 0;
              pbVar54 = pbRam00000001137e9568;
              if (pbVar46 != pbVar55) {
                iVar36 = -3;
              }
joined_r0x00010a0c8b8c:
              pbRam00000001137e9568 = pbVar54;
              if (iVar36 == 0) {
                func_0x000107c2b0ac(pbVar54,param_3[0xb]);
                if (pbVar54 == (byte *)0x0) {
                  FUN_109ffdddc(&UNK_10f639994);
                  goto LAB_10a0c92d0;
                }
                lVar57 = lRam00000001137e9560;
                func_0x000107c2b0ac(lRam00000001137e9560,param_3[0xe]);
                if (lVar57 == 0) {
                  FUN_109ffdddc(&UNK_10f639994);
                  goto LAB_10a0c92d0;
                }
                pbVar49 = (byte *)(*(long *)(lVar57 + 0x18) * *(long *)(pbVar54 + 0x18));
                if ((long)pbVar49 - (long)pbVar38 == 0) {
                  param_1[1] = lStack_2598;
                  *param_1 = (long)pbStack_25a0;
                  param_1[2] = lStack_2590;
                }
                else {
                  if (pbVar38 <= pbVar49) {
                    uVar25 = 0x10;
                    ___cxa_allocate_exception(0x10);
                    __ZNSt13runtime_errorC1EPKc();
                    ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    goto LAB_10a0c92d0;
                  }
                  FUN_10a0dc020(param_1,(long)pbVar49 * uVar58);
                  if (uVar3 != 0) {
                    lVar57 = *param_1;
                    pbVar54 = pbStack_25a0;
                    do {
                      _memcpy(lVar57,pbVar54,pbVar49);
                      pbVar54 = pbVar54 + (long)pbVar38;
                      lVar57 = lVar57 + (long)pbVar49;
                      uVar44 = (int)uVar58 - 1;
                      uVar58 = (ulong)uVar44;
                    } while (uVar44 != 0);
                  }
                  if (pbStack_25a0 != (byte *)0x0) {
                    __ZdlPv(pbStack_25a0);
                  }
                }
                goto LAB_10a0c8e04;
              }
            }
LAB_10a0c8c84:
            uVar25 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&uStack_2480,&UNK_10f637f6c,plVar42);
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar25,&uStack_2480);
            ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0c92d0;
          }
        }
        goto LAB_10a0c8f0c;
      }
    }
    uVar25 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(&uStack_480,*param_3);
    FUN_109feb280(&uStack_2480,&UNK_10f637e2d,&uStack_480);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar25,&uStack_2480);
    ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
  }
LAB_10a0c92d0:
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x10a0c92d4);
  (*pcVar23)();
LAB_10a0c83c4:
  if (unaff_x23 == (byte *)0x0) {
LAB_10a0c85ec:
    iVar36 = -2;
    pbVar54 = pbRam00000001137e9568;
    goto joined_r0x00010a0c8b8c;
  }
  lVar57 = lVar57 + 1;
  puVar59 = (undefined8 *)((long)puVar59 + uVar56);
  pbVar48 = unaff_x23;
  if (lVar57 == 4) goto code_r0x00010a0c83e0;
  goto LAB_10a0c82e4;
code_r0x00010a0c83e0:
  if (uVar56 != 0) {
    uVar53 = 0;
    pbVar48 = (byte *)((long)&uStack_2480 + (long)pbVar46);
    uVar78 = *(undefined4 *)(abStack_2580 + (long)pbVar46);
    do {
      uVar10 = *(undefined8 *)((long)&uStack_478 + uVar53);
      bVar70 = (byte)((ulong)uVar10 >> 8);
      bVar71 = (byte)((ulong)uVar10 >> 0x10);
      bVar72 = (byte)((ulong)uVar10 >> 0x18);
      bVar73 = (byte)((ulong)uVar10 >> 0x20);
      bVar74 = (byte)((ulong)uVar10 >> 0x28);
      bVar75 = (byte)((ulong)uVar10 >> 0x30);
      bVar76 = (byte)((ulong)uVar10 >> 0x38);
      uVar25 = *(undefined8 *)((long)&uStack_480 + uVar53);
      bVar62 = (byte)((ulong)uVar25 >> 8);
      bVar63 = (byte)((ulong)uVar25 >> 0x10);
      bVar64 = (byte)((ulong)uVar25 >> 0x18);
      bVar65 = (byte)((ulong)uVar25 >> 0x20);
      bVar66 = (byte)((ulong)uVar25 >> 0x28);
      bVar67 = (byte)((ulong)uVar25 >> 0x30);
      bVar68 = (byte)((ulong)uVar25 >> 0x38);
      pbVar5 = (byte *)((long)&uStack_480 + uVar53 + uVar56);
      pbVar6 = (byte *)((long)&uStack_480 + uVar53 + uVar56 * 2);
      puVar59 = (undefined8 *)((long)&uStack_480 + uVar53 + uVar56 * 3);
      uVar14 = puVar59[1];
      bVar144 = (byte)((ulong)uVar14 >> 8);
      bVar145 = (byte)((ulong)uVar14 >> 0x10);
      bVar146 = (byte)((ulong)uVar14 >> 0x18);
      bVar147 = (byte)((ulong)uVar14 >> 0x20);
      bVar148 = (byte)((ulong)uVar14 >> 0x28);
      bVar149 = (byte)((ulong)uVar14 >> 0x30);
      bVar150 = (byte)((ulong)uVar14 >> 0x38);
      uVar13 = *puVar59;
      bVar133 = (byte)((ulong)uVar13 >> 8);
      bVar135 = (byte)((ulong)uVar13 >> 0x10);
      bVar137 = (byte)((ulong)uVar13 >> 0x18);
      bVar139 = (byte)((ulong)uVar13 >> 0x20);
      bVar140 = (byte)((ulong)uVar13 >> 0x28);
      bVar141 = (byte)((ulong)uVar13 >> 0x30);
      bVar142 = (byte)((ulong)uVar13 >> 0x38);
      bVar61 = (byte)uVar25 >> 1 ^ -((byte)uVar25 & 1);
      bVar62 = bVar62 >> 1 ^ -(bVar62 & 1);
      bVar63 = bVar63 >> 1 ^ -(bVar63 & 1);
      bVar64 = bVar64 >> 1 ^ -(bVar64 & 1);
      bVar65 = bVar65 >> 1 ^ -(bVar65 & 1);
      bVar66 = bVar66 >> 1 ^ -(bVar66 & 1);
      bVar68 = bVar68 >> 1 ^ -(bVar68 & 1);
      bVar69 = (byte)uVar10 >> 1 ^ -((byte)uVar10 & 1);
      bVar70 = bVar70 >> 1 ^ -(bVar70 & 1);
      bVar71 = bVar71 >> 1 ^ -(bVar71 & 1);
      bVar72 = bVar72 >> 1 ^ -(bVar72 & 1);
      bVar73 = bVar73 >> 1 ^ -(bVar73 & 1);
      bVar74 = bVar74 >> 1 ^ -(bVar74 & 1);
      bVar75 = bVar75 >> 1 ^ -(bVar75 & 1);
      bVar76 = bVar76 >> 1 ^ -(bVar76 & 1);
      bVar82 = *pbVar5 >> 1 ^ -(*pbVar5 & 1);
      bVar99 = pbVar5[1] >> 1 ^ -(pbVar5[1] & 1);
      bVar100 = pbVar5[2] >> 1 ^ -(pbVar5[2] & 1);
      bVar101 = pbVar5[3] >> 1 ^ -(pbVar5[3] & 1);
      bVar102 = pbVar5[4] >> 1 ^ -(pbVar5[4] & 1);
      bVar103 = pbVar5[5] >> 1 ^ -(pbVar5[5] & 1);
      bVar104 = pbVar5[7] >> 1 ^ -(pbVar5[7] & 1);
      bVar105 = pbVar5[8] >> 1 ^ -(pbVar5[8] & 1);
      bVar106 = pbVar5[9] >> 1 ^ -(pbVar5[9] & 1);
      bVar107 = pbVar5[10] >> 1 ^ -(pbVar5[10] & 1);
      bVar108 = pbVar5[0xb] >> 1 ^ -(pbVar5[0xb] & 1);
      bVar109 = pbVar5[0xc] >> 1 ^ -(pbVar5[0xc] & 1);
      bVar110 = pbVar5[0xd] >> 1 ^ -(pbVar5[0xd] & 1);
      bVar111 = pbVar5[0xe] >> 1 ^ -(pbVar5[0xe] & 1);
      lVar57 = CONCAT17(bVar111,CONCAT16(bVar110,CONCAT15(bVar109,CONCAT14(bVar108,CONCAT13(bVar107,
                                                  CONCAT12(bVar106,CONCAT11(bVar105,bVar104)))))));
      auVar91[0xf] = pbVar5[0xf] >> 1 ^ -(pbVar5[0xf] & 1);
      Var22 = CONCAT18(auVar91[0xf],lVar57);
      bVar112 = *pbVar6 >> 1 ^ -(*pbVar6 & 1);
      bVar114 = pbVar6[1] >> 1 ^ -(pbVar6[1] & 1);
      bVar116 = pbVar6[2] >> 1 ^ -(pbVar6[2] & 1);
      bVar118 = pbVar6[3] >> 1 ^ -(pbVar6[3] & 1);
      bVar120 = pbVar6[4] >> 1 ^ -(pbVar6[4] & 1);
      bVar121 = pbVar6[5] >> 1 ^ -(pbVar6[5] & 1);
      bVar122 = pbVar6[7] >> 1 ^ -(pbVar6[7] & 1);
      bVar123 = pbVar6[8] >> 1 ^ -(pbVar6[8] & 1);
      bVar124 = pbVar6[9] >> 1 ^ -(pbVar6[9] & 1);
      bVar125 = pbVar6[10] >> 1 ^ -(pbVar6[10] & 1);
      bVar126 = pbVar6[0xb] >> 1 ^ -(pbVar6[0xb] & 1);
      bVar127 = pbVar6[0xc] >> 1 ^ -(pbVar6[0xc] & 1);
      bVar128 = pbVar6[0xd] >> 1 ^ -(pbVar6[0xd] & 1);
      bVar129 = pbVar6[0xe] >> 1 ^ -(pbVar6[0xe] & 1);
      bVar130 = pbVar6[0xf] >> 1 ^ -(pbVar6[0xf] & 1);
      bVar131 = (byte)uVar13 >> 1 ^ -((byte)uVar13 & 1);
      bVar133 = bVar133 >> 1 ^ -(bVar133 & 1);
      bVar135 = bVar135 >> 1 ^ -(bVar135 & 1);
      bVar137 = bVar137 >> 1 ^ -(bVar137 & 1);
      bVar139 = bVar139 >> 1 ^ -(bVar139 & 1);
      bVar140 = bVar140 >> 1 ^ -(bVar140 & 1);
      bVar142 = bVar142 >> 1 ^ -(bVar142 & 1);
      bVar143 = (byte)uVar14 >> 1 ^ -((byte)uVar14 & 1);
      bVar144 = bVar144 >> 1 ^ -(bVar144 & 1);
      bVar145 = bVar145 >> 1 ^ -(bVar145 & 1);
      bVar146 = bVar146 >> 1 ^ -(bVar146 & 1);
      bVar147 = bVar147 >> 1 ^ -(bVar147 & 1);
      bVar148 = bVar148 >> 1 ^ -(bVar148 & 1);
      bVar149 = bVar149 >> 1 ^ -(bVar149 & 1);
      bVar150 = bVar150 >> 1 ^ -(bVar150 & 1);
      auVar85._0_8_ = lVar57 << 0x38;
      auVar85._9_7_ = (undefined7)((unkuint9)Var22 >> 0x10);
      auVar85[8] = bVar120;
      auVar87._11_5_ = (undefined5)((unkuint9)Var22 >> 0x20);
      auVar87._0_10_ = auVar85._0_10_;
      auVar87[10] = bVar121;
      auVar89._13_3_ = (undefined3)((unkuint9)Var22 >> 0x30);
      auVar89._0_12_ = auVar87._0_12_;
      auVar89[0xc] = pbVar6[6] >> 1 ^ -(pbVar6[6] & 1);
      auVar91._0_14_ = auVar89._0_14_;
      auVar91[0xe] = bVar122;
      auVar86._10_6_ = auVar91._10_6_;
      auVar86._0_10_ = CONCAT19(bVar139,CONCAT81(auVar91._8_8_,bVar137) << 0x38);
      auVar88._12_4_ = auVar91._12_4_;
      auVar83._0_11_ = auVar86._0_11_;
      auVar83[0xb] = bVar140;
      auVar88._0_12_ = auVar83;
      auVar90._14_2_ = auVar91._14_2_;
      auVar84._0_13_ = auVar88._0_13_;
      auVar84[0xd] = bVar141 >> 1 ^ -(bVar141 & 1);
      auVar90._0_14_ = auVar84;
      auVar92._0_15_ = auVar90._0_15_;
      auVar92[0xf] = bVar142;
      uVar15 = CONCAT11(bVar82,bVar61);
      uVar18 = CONCAT12(bVar102,CONCAT11(bVar65,bVar101));
      uVar19 = CONCAT14(bVar103,CONCAT13(bVar66,uVar18));
      uVar20 = CONCAT16(pbVar5[6] >> 1 ^ -(pbVar5[6] & 1),
                        CONCAT15(bVar67 >> 1 ^ -(bVar67 & 1),uVar19));
      auVar21._2_10_ = auVar92._6_10_;
      auVar21._0_2_ = (short)((uint5)uVar19 >> 0x18);
      auVar95._0_8_ = auVar21._0_8_ << 0x20;
      auVar95._10_6_ = auVar92._10_6_;
      auVar95._8_2_ = (short)((uint7)uVar20 >> 0x28);
      auVar97._14_2_ = auVar92._14_2_;
      auVar97._0_12_ = auVar95._0_12_;
      auVar97._12_2_ = (short)(CONCAT18(bVar104,CONCAT17(bVar68,uVar20)) >> 0x38);
      auVar93._4_12_ = auVar97._4_12_;
      auVar93._2_2_ = (short)((unkuint10)auVar86._0_10_ >> 0x40);
      auVar93._0_2_ = (short)((uint3)uVar18 >> 8);
      auVar94._8_8_ = auVar97._8_8_;
      auVar94._0_6_ = auVar93._0_6_;
      auVar94._6_2_ = auVar83._10_2_;
      auVar96._12_4_ = auVar97._12_4_;
      auVar96._0_10_ = auVar94._0_10_;
      auVar96._10_2_ = auVar84._12_2_;
      auVar98._0_14_ = auVar96._0_14_;
      auVar98._14_2_ = auVar97._14_2_;
      uVar7 = CONCAT11(bVar105,bVar69);
      uVar60 = (undefined2)(CONCAT12(bVar109,CONCAT11(bVar73,bVar108)) >> 8);
      auVar11[2] = bVar112;
      auVar11._0_2_ = uVar15;
      auVar11[3] = bVar131;
      auVar11[4] = bVar62;
      auVar11[5] = bVar99;
      auVar11[6] = bVar114;
      auVar11[7] = bVar133;
      auVar11[8] = bVar63;
      auVar11[9] = bVar100;
      auVar11[10] = bVar116;
      auVar11[0xb] = bVar135;
      auVar11[0xc] = bVar64;
      auVar11[0xd] = bVar101;
      auVar11[0xe] = bVar118;
      auVar11[0xf] = bVar137;
      auVar12[2] = bVar112;
      auVar12._0_2_ = uVar15;
      auVar12[3] = bVar131;
      auVar12[4] = bVar62;
      auVar12[5] = bVar99;
      auVar12[6] = bVar114;
      auVar12[7] = bVar133;
      auVar12[8] = bVar63;
      auVar12[9] = bVar100;
      auVar12[10] = bVar116;
      auVar12[0xb] = bVar135;
      auVar12[0xc] = bVar64;
      auVar12[0xd] = bVar101;
      auVar12[0xe] = bVar118;
      auVar12[0xf] = bVar137;
      auVar155 = NEON_ext(auVar11,auVar12,8,1);
      cVar77 = bVar61 + (char)uVar78;
      cVar79 = bVar82 + (char)((uint)uVar78 >> 8);
      cVar80 = bVar112 + (char)((uint)uVar78 >> 0x10);
      cVar81 = bVar131 + (char)((uint)uVar78 >> 0x18);
      cVar113 = cVar77 + bVar62;
      cVar115 = cVar79 + bVar99;
      cVar117 = cVar80 + bVar114;
      cVar119 = cVar81 + bVar133;
      cVar132 = cVar113 + auVar155[0];
      cVar134 = cVar115 + auVar155[1];
      cVar136 = cVar117 + auVar155[2];
      cVar138 = cVar119 + auVar155[3];
      cVar151 = cVar132 + bVar64;
      cVar152 = cVar134 + bVar101;
      cVar153 = cVar136 + bVar118;
      cVar154 = cVar138 + bVar137;
      *(uint *)pbVar48 = CONCAT13(cVar81,CONCAT12(cVar80,CONCAT11(cVar79,cVar77)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar119,CONCAT12(cVar117,CONCAT11(cVar115,cVar113)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar138,CONCAT12(cVar136,CONCAT11(cVar134,cVar132)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar154,CONCAT12(cVar153,CONCAT11(cVar152,cVar151)));
      auVar155 = NEON_ext(auVar98,auVar98,8,1);
      cVar151 = cVar151 + bVar65;
      cVar152 = cVar152 + bVar102;
      cVar153 = cVar153 + bVar120;
      cVar154 = cVar154 + bVar139;
      cVar77 = cVar151 + bVar66;
      cVar79 = cVar152 + bVar103;
      cVar80 = cVar153 + bVar121;
      cVar81 = cVar154 + bVar140;
      cVar113 = cVar77 + auVar155[0];
      cVar115 = cVar79 + auVar155[1];
      cVar117 = cVar80 + auVar155[2];
      cVar119 = cVar81 + auVar155[3];
      cVar132 = cVar113 + bVar68;
      cVar134 = cVar115 + bVar104;
      cVar136 = cVar117 + bVar122;
      cVar138 = cVar119 + bVar142;
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar154,CONCAT12(cVar153,CONCAT11(cVar152,cVar151)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar81,CONCAT12(cVar80,CONCAT11(cVar79,cVar77)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar119,CONCAT12(cVar117,CONCAT11(cVar115,cVar113)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar138,CONCAT12(cVar136,CONCAT11(cVar134,cVar132)));
      auVar16[2] = bVar123;
      auVar16._0_2_ = uVar7;
      auVar16[3] = bVar143;
      auVar16[4] = bVar70;
      auVar16[5] = bVar106;
      auVar16[6] = bVar124;
      auVar16[7] = bVar144;
      auVar16[8] = bVar71;
      auVar16[9] = bVar107;
      auVar16[10] = bVar125;
      auVar16[0xb] = bVar145;
      auVar16[0xc] = bVar72;
      auVar16[0xd] = bVar108;
      auVar16[0xe] = bVar126;
      auVar16[0xf] = bVar146;
      auVar17[2] = bVar123;
      auVar17._0_2_ = uVar7;
      auVar17[3] = bVar143;
      auVar17[4] = bVar70;
      auVar17[5] = bVar106;
      auVar17[6] = bVar124;
      auVar17[7] = bVar144;
      auVar17[8] = bVar71;
      auVar17[9] = bVar107;
      auVar17[10] = bVar125;
      auVar17[0xb] = bVar145;
      auVar17[0xc] = bVar72;
      auVar17[0xd] = bVar108;
      auVar17[0xe] = bVar126;
      auVar17[0xf] = bVar146;
      auVar155 = NEON_ext(auVar16,auVar17,8,1);
      cVar132 = cVar132 + bVar69;
      cVar134 = cVar134 + bVar105;
      cVar136 = cVar136 + bVar123;
      cVar138 = cVar138 + bVar143;
      cVar151 = cVar132 + bVar70;
      cVar152 = cVar134 + bVar106;
      cVar153 = cVar136 + bVar124;
      cVar154 = cVar138 + bVar144;
      cVar113 = cVar151 + auVar155[0];
      cVar115 = cVar152 + auVar155[1];
      cVar117 = cVar153 + auVar155[2];
      cVar119 = cVar154 + auVar155[3];
      cVar77 = cVar113 + bVar72;
      cVar79 = cVar115 + bVar108;
      cVar80 = cVar117 + bVar126;
      cVar81 = cVar119 + bVar146;
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar138,CONCAT12(cVar136,CONCAT11(cVar134,cVar132)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar154,CONCAT12(cVar153,CONCAT11(cVar152,cVar151)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar119,CONCAT12(cVar117,CONCAT11(cVar115,cVar113)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar81,CONCAT12(cVar80,CONCAT11(cVar79,cVar77)));
      auVar8[2] = bVar127;
      auVar8._0_2_ = uVar60;
      auVar8[3] = bVar147;
      auVar8[4] = bVar74;
      auVar8[5] = bVar110;
      auVar8[6] = bVar128;
      auVar8[7] = bVar148;
      auVar8[8] = bVar75;
      auVar8[9] = bVar111;
      auVar8[10] = bVar129;
      auVar8[0xb] = bVar149;
      auVar8[0xc] = bVar76;
      auVar8[0xd] = auVar91[0xf];
      auVar8[0xe] = bVar130;
      auVar8[0xf] = bVar150;
      auVar9[2] = bVar127;
      auVar9._0_2_ = uVar60;
      auVar9[3] = bVar147;
      auVar9[4] = bVar74;
      auVar9[5] = bVar110;
      auVar9[6] = bVar128;
      auVar9[7] = bVar148;
      auVar9[8] = bVar75;
      auVar9[9] = bVar111;
      auVar9[10] = bVar129;
      auVar9[0xb] = bVar149;
      auVar9[0xc] = bVar76;
      auVar9[0xd] = auVar91[0xf];
      auVar9[0xe] = bVar130;
      auVar9[0xf] = bVar150;
      auVar155 = NEON_ext(auVar8,auVar9,8,1);
      cVar77 = cVar77 + bVar73;
      cVar79 = cVar79 + bVar109;
      cVar80 = cVar80 + bVar127;
      cVar81 = cVar81 + bVar147;
      cVar113 = cVar77 + bVar74;
      cVar115 = cVar79 + bVar110;
      cVar117 = cVar80 + bVar128;
      cVar119 = cVar81 + bVar148;
      cVar151 = cVar113 + auVar155[0];
      cVar152 = cVar115 + auVar155[1];
      cVar153 = cVar117 + auVar155[2];
      cVar154 = cVar119 + auVar155[3];
      uVar78 = CONCAT13(cVar154 + bVar150,
                        CONCAT12(cVar153 + bVar130,CONCAT11(cVar152 + auVar91[0xf],cVar151 + bVar76)
                                ));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar81,CONCAT12(cVar80,CONCAT11(cVar79,cVar77)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar119,CONCAT12(cVar117,CONCAT11(cVar115,cVar113)));
      pbVar48 = pbVar48 + (long)pbVar38;
      *(uint *)pbVar48 = CONCAT13(cVar154,CONCAT12(cVar153,CONCAT11(cVar152,cVar151)));
      *(undefined4 *)(pbVar48 + (long)pbVar38) = uVar78;
      uVar53 = uVar53 + 0x10;
      pbVar48 = pbVar48 + (long)pbVar38 + (long)pbVar38;
    } while (uVar53 < uVar56);
  }
  pbVar46 = pbVar46 + 4;
  if (pbVar38 <= pbVar46) goto code_r0x00010a0c8588;
  goto LAB_10a0c82d0;
code_r0x00010a0c8588:
  _memcpy(pbVar54 + uVar45 * (long)pbVar38,&uStack_2480,uVar39 * (long)pbVar38);
  _memcpy(abStack_2580,(undefined8 *)((long)&uStack_2480 + (uVar39 - 1) * (long)pbVar38),pbVar38);
  uVar45 = uVar39 + uVar45;
  if (uVar58 <= uVar45) goto LAB_10a0c85cc;
  goto LAB_10a0c827c;
}



/* Entry: 10a0c93fc; end: 10a0c9573;  */

undefined8 * FUN_10a0c93fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  FUN_10a0c9578(param_1 + 4,param_2 + 4);
  FUN_10a0c9838(param_1 + 0x13,param_2 + 0x13);
  FUN_10a0c9838(param_1 + 0x16,param_2 + 0x16);
  if (*(char *)((long)param_2 + 0xdf) < '\0') {
    func_0x000107c3192c(param_1 + 0x19,param_2[0x19],param_2[0x1a]);
  }
  else {
    uVar2 = param_2[0x1a];
    uVar1 = param_2[0x19];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x19] = uVar1;
  }
  if (*(char *)((long)param_2 + 0xf7) < '\0') {
    func_0x000107c3192c(param_1 + 0x1c,param_2[0x1c],param_2[0x1d]);
  }
  else {
    uVar2 = param_2[0x1d];
    uVar1 = param_2[0x1c];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar2;
    param_1[0x1c] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x10f) < '\0') {
    func_0x000107c3192c(param_1 + 0x1f,param_2[0x1f],param_2[0x20]);
  }
  else {
    uVar2 = param_2[0x20];
    uVar1 = param_2[0x1f];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar2;
    param_1[0x1f] = uVar1;
  }
  return param_1;
}



/* Entry: 10a0c9574; end: 10a0c9577;  */

long FUN_10a0c9574(long param_1)

{
  long lStack_28;
  
  func_0x00010a0c9b2c(*(undefined8 *)(param_1 + 0x60));
  lStack_28 = param_1 + 0x40;
  FUN_10a0c97c8(&lStack_28);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10a0c9578; end: 10a0c967f;  */

undefined8 * FUN_10a0c9578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a05151c(param_1 + 5,param_2[5],param_2[6],param_2[6] - param_2[5]);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_10a0c9680(param_1 + 8,param_2[8],param_2[9],
                ((long)(param_2[9] - param_2[8]) >> 3) * -0x1111111111111111);
  FUN_10a0c9838(param_1 + 0xb,param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 10a0c9680; end: 10a0c976f;  */

void FUN_10a0c9680(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (0x222222222222222 < param_4) {
      FUN_10a0c9770();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0c9734);
      (*pcVar1)();
    }
    lVar2 = param_2;
    FUN_10a0c9784();
    *param_1 = param_4;
    param_1[1] = param_4;
    param_1[2] = param_4 + lVar2 * 0x78;
    if (param_2 != param_3) {
      lVar2 = 0;
      do {
        FUN_10a0c9578(param_4 + lVar2,param_2 + lVar2);
        lVar2 = lVar2 + 0x78;
      } while (param_2 + lVar2 != param_3);
      param_4 = param_4 + lVar2;
    }
    param_1[1] = param_4;
  }
  return;
}



/* Entry: 10a0c9770; end: 10a0c9783;  */

void FUN_10a0c9770(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if (plVar1 < (long *)0x222222222222223) {
    __Znwm((long)plVar1 * 0x78);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x78;
        func_0x00010a0c9b7c();
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



/* Entry: 10a0c9784; end: 10a0c97c7;  */

void FUN_10a0c9784(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 < (long *)0x222222222222223) {
    __Znwm((long)param_1 * 0x78);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x78;
        func_0x00010a0c9b7c();
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



/* Entry: 10a0c97c8; end: 10a0c9837;  */

void FUN_10a0c97c8(long *param_1)

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
        lVar1 = lVar1 + -0x78;
        func_0x00010a0c9b7c();
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



/* Entry: 10a0c9838; end: 10a0c99fb;  */

long * FUN_10a0c9838(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plStack_58;
  
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar6;
  plVar7 = (long *)*param_2;
  do {
    if (plVar7 == param_2 + 1) {
      return param_1;
    }
    plVar3 = (long *)param_1[1];
    plVar5 = plVar6;
    if ((long *)*param_1 == plVar6) {
joined_r0x00010a0c98e0:
      plStack_58 = plVar5;
      plVar5 = plVar6;
      plVar4 = plVar6;
      if (plVar3 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        goto LAB_10a0c98ec;
      }
LAB_10a0c9908:
      plStack_58 = plVar4;
      lVar2 = 0xb0;
      __Znwm();
      if (*(char *)((long)plVar7 + 0x37) < '\0') {
        func_0x000107c3192c(lVar2 + 0x20,plVar7[4],plVar7[5]);
      }
      else {
        uVar9 = plVar7[5];
        uVar8 = plVar7[4];
        *(long *)(lVar2 + 0x30) = plVar7[6];
        *(undefined8 *)(lVar2 + 0x28) = uVar9;
        *(undefined8 *)(lVar2 + 0x20) = uVar8;
      }
      FUN_10a0c9578(lVar2 + 0x38,plVar7 + 7);
      FUN_10a0c99fc(param_1,plStack_58,plVar5,lVar2);
    }
    else {
      plVar4 = plVar6;
      if (plVar3 == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar1 = (long *)*plVar5 == plVar4;
          plVar4 = plVar5;
        } while (bVar1);
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)plVar5[1];
        } while ((long *)plVar5[1] != (long *)0x0);
      }
      plVar3 = plVar5 + 4;
      FUN_10a003e3c(plVar3,plVar7 + 4);
      if (((uint)plVar3 >> 7 & 1) != 0) {
        plVar3 = (long *)*plVar6;
        goto joined_r0x00010a0c98e0;
      }
      plVar5 = param_1;
      FUN_10a0c9a50(param_1,&plStack_58,plVar7 + 4);
LAB_10a0c98ec:
      plVar4 = plStack_58;
      if (*plVar5 == 0) goto LAB_10a0c9908;
    }
    plVar3 = (long *)plVar7[1];
    plVar5 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar1 = (long *)*plVar7 != plVar5;
        plVar5 = plVar7;
      } while (bVar1);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a0c99fc; end: 10a0c9a4f;  */

void FUN_10a0c99fc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a0c9a50; end: 10a0c9ad3;  */

long * FUN_10a0c9a50(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a0c9abc;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a0c9abc:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a0c9ad4; end: 10a0c9bdb;  */

void FUN_10a0c9ad4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a0c9b7c(lVar1 + 0x38);
      if (*(char *)(lVar1 + 0x37) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a0c9bdc; end: 10a0c9bef;  */

void FUN_10a0c9bdc(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10f63805b;
  FUN_109ffde64();
  if ((undefined *)0xf0f0f0f0f0f0f0 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        FUN_10a0c9c98(param_3,puVar2);
        puVar2 = puVar2 + 0x110;
        param_3 = param_3 + 0x110;
      } while (puVar2 != param_2);
      do {
        FUN_10a0c9e44(puVar1);
        puVar1 = puVar1 + 0x110;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x110);
  return;
}



/* Entry: 10a0c9bf0; end: 10a0c9c2f;  */

void FUN_10a0c9bf0(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (0xf0f0f0f0f0f0f0 < param_1) {
    func_0x000109ffded8();
    uVar1 = param_1;
    if (param_1 != param_2) {
      do {
        FUN_10a0c9c98(param_3,uVar1);
        uVar1 = uVar1 + 0x110;
        param_3 = param_3 + 0x110;
      } while (uVar1 != param_2);
      do {
        FUN_10a0c9e44(param_1);
        param_1 = param_1 + 0x110;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x110);
  return;
}



/* Entry: 10a0c9c30; end: 10a0c9c97;  */

void FUN_10a0c9c30(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      FUN_10a0c9c98(param_3,lVar1);
      lVar1 = lVar1 + 0x110;
      param_3 = param_3 + 0x110;
    } while (lVar1 != param_2);
    do {
      FUN_10a0c9e44(param_1);
      param_1 = param_1 + 0x110;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a0c9c98; end: 10a0c9d9f;  */

undefined8 * FUN_10a0c9c98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  FUN_10a0c9da0(param_1 + 4,param_2 + 4);
  param_1[0x13] = param_2[0x13];
  plVar1 = param_2 + 0x14;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x14;
  *plVar2 = lVar3;
  lVar4 = param_2[0x15];
  param_1[0x15] = lVar4;
  if (lVar4 == 0) {
    param_1[0x13] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x13] = plVar1;
    *plVar1 = 0;
    param_2[0x15] = 0;
  }
  param_1[0x16] = param_2[0x16];
  plVar1 = param_2 + 0x17;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x17;
  *plVar2 = lVar3;
  lVar4 = param_2[0x18];
  param_1[0x18] = lVar4;
  if (lVar4 == 0) {
    param_1[0x16] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x16] = plVar1;
    *plVar1 = 0;
    param_2[0x18] = 0;
  }
  uVar6 = param_2[0x1a];
  uVar5 = param_2[0x19];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar5;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x19] = 0;
  uVar6 = param_2[0x1d];
  uVar5 = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar6;
  param_1[0x1c] = uVar5;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1c] = 0;
  uVar6 = param_2[0x20];
  uVar5 = param_2[0x1f];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar6;
  param_1[0x1f] = uVar5;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1f] = 0;
  return param_1;
}



/* Entry: 10a0c9da0; end: 10a0c9e43;  */

void FUN_10a0c9da0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  param_1[7] = param_2[7];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[10] = param_2[10];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  param_1[0xb] = param_2[0xb];
  plVar1 = param_2 + 0xc;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0xc;
  *plVar2 = lVar3;
  lVar4 = param_2[0xd];
  param_1[0xd] = lVar4;
  if (lVar4 == 0) {
    param_1[0xb] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0xb] = plVar1;
    *plVar1 = 0;
    param_2[0xd] = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return;
}



/* Entry: 10a0c9e44; end: 10a0c9f07;  */

long FUN_10a0c9e44(long param_1)

{
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  func_0x00010a0c9b2c(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010a0c9b2c(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010a0c9b7c(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a0c9f08; end: 10a0ca013;  */

void FUN_10a0c9f08(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 < 2) {
    uVar5 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
    if (param_4 <= uVar5 && uVar5 - param_4 != 0) {
      plVar4 = (long *)(*param_2 + param_4 * 0x18);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar6 = *plVar4;
      lVar1 = plVar4[1];
      lVar3 = lVar1 - lVar6 >> 2;
      if (lVar3 != 0) {
        FUN_10a0ca600(param_1,lVar3);
        lVar3 = param_1[1];
        lVar1 = lVar1 - lVar6;
        if (lVar1 != 0) {
          _memmove(lVar3,lVar6,lVar1);
        }
        param_1[1] = lVar3 + lVar1;
      }
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_4 = param_4 * param_3;
    lVar6 = param_4 * 0x18;
    while (uVar5 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555,
          param_4 <= uVar5 && uVar5 - param_4 != 0) {
      plVar4 = (long *)(*param_2 + lVar6);
      if (plVar4[1] == *plVar4) break;
      FUN_10a0ca014(param_1);
      lVar6 = lVar6 + 0x18;
      param_4 = param_4 + 1;
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0c9ff8);
  (*pcVar2)();
}



/* Entry: 10a0ca014; end: 10a0ca0d7;  */

void FUN_10a0ca014(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long *extraout_x8;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 uStack_71;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 < (undefined4 *)param_1[2]) {
    puVar10 = puVar4 + 1;
    *puVar4 = *param_2;
  }
  else {
    lVar9 = (long)puVar4 - *param_1;
    uVar1 = (lVar9 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10a001cf8();
      uVar1 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      puVar4 = param_2;
      _strlen();
      FUN_10a003c90(extraout_x8,uVar1 + (long)puVar4,&uStack_71);
      plVar7 = (long *)*extraout_x8;
      if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
        plVar7 = extraout_x8;
      }
      if (uVar1 != 0) {
        plVar2 = (long *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar2 = param_1;
        }
        _memmove(plVar7,plVar2,uVar1);
      }
      if (puVar4 != (undefined4 *)0x0) {
        _memmove((long)plVar7 + uVar1,param_2,puVar4);
      }
      *(undefined1 *)((long)plVar7 + uVar1 + (long)puVar4) = 0;
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    plVar7 = param_1;
    FUN_10a001d0c();
    lVar3 = *param_1;
    puVar4 = (undefined4 *)((long)plVar7 + lVar9);
    lVar8 = (long)puVar4 - (param_1[1] - lVar3);
    puVar10 = puVar4 + 1;
    *puVar4 = *param_2;
    _memcpy(lVar8,lVar3);
    lVar9 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)plVar7 + uVar6 * 4;
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a0ca0d8; end: 10a0ca18f;  */

void FUN_10a0ca0d8(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_41;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  lVar4 = param_3;
  _strlen();
  FUN_10a003c90(param_1,uVar1 + lVar4,&uStack_41);
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  if (uVar1 != 0) {
    plVar3 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar3 = param_2;
    }
    _memmove(plVar2,plVar3,uVar1);
  }
  if (lVar4 != 0) {
    _memmove((long)plVar2 + uVar1,param_3,lVar4);
  }
  *(undefined1 *)((long)plVar2 + uVar1 + lVar4) = 0;
  return;
}



/* Entry: 10a0ca190; end: 10a0ca1a3;  */

void FUN_10a0ca190(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuStack_1b8;
  ulong uStack_1b0;
  byte bStack_1a1;
  undefined8 **ppuStack_1a0;
  ulong uStack_198;
  byte bStack_189;
  undefined8 auStack_188 [3];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  plVar3 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_188,&UNK_10f6387b4,*plVar3 + 8);
    puVar5 = auStack_188;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5," ",1);
    uStack_168 = puVar5[1];
    uStack_170 = *puVar5;
    uStack_160 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar6 = (undefined8 *)plVar3[1];
    uVar1 = puVar6[1];
    puVar5 = (undefined8 *)*puVar6;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
      puVar5 = puVar6;
    }
    puVar6 = &uStack_170;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,puVar5,uVar1);
    uStack_148 = puVar6[1];
    uStack_150 = *puVar6;
    uStack_140 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar5 = &uStack_150;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,&UNK_10f638748,0xb);
    uStack_128 = puVar5[1];
    uStack_130 = *puVar5;
    uStack_120 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar1 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar5 = param_2;
    }
    puVar6 = &uStack_130;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,puVar5,uVar1);
    uStack_108 = puVar6[1];
    uStack_110 = *puVar6;
    uStack_100 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar5 = &uStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,&UNK_10f6387e7,0x12);
    uStack_e8 = puVar5[1];
    uStack_f0 = *puVar5;
    uStack_e0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    __ZNSt3__19to_stringEm(&ppuStack_1a0,*(undefined8 *)plVar3[2]);
    if (-1 < (char)bStack_189) {
      uStack_198 = (ulong)bStack_189;
      ppuStack_1a0 = &ppuStack_1a0;
    }
    puVar5 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,ppuStack_1a0,uStack_198);
    uStack_c8 = puVar5[1];
    uStack_d0 = *puVar5;
    uStack_c0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a012db0(auStack_b8,&uStack_d0,&UNK_10f6387fa);
    __ZNSt3__19to_stringEm(&ppuStack_1b8,*(undefined8 *)plVar3[3]);
    if (-1 < (char)bStack_1a1) {
      uStack_1b0 = (ulong)bStack_1a1;
      ppuStack_1b8 = &ppuStack_1b8;
    }
    puVar5 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,ppuStack_1b8,uStack_1b0);
    uStack_98 = puVar5[1];
    uStack_a0 = *puVar5;
    uStack_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a012db0(auStack_88,&uStack_a0,&DAT_10f62a9de);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar4,auStack_88);
    ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0ca418);
    (*pcVar2)();
  }
  __Znwm((long)param_2 * 0x18);
  return;
}



/* Entry: 10a0ca1a4; end: 10a0ca1e7;  */

void FUN_10a0ca1a4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 auStack_178 [3];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    uVar3 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_178,&UNK_10f6387b4,*param_1 + 8);
    puVar4 = auStack_178;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4," ",1);
    uStack_158 = puVar4[1];
    uStack_160 = *puVar4;
    uStack_150 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar5 = (undefined8 *)param_1[1];
    uVar1 = puVar5[1];
    puVar4 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar4 = puVar5;
    }
    puVar5 = &uStack_160;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puVar4,uVar1);
    uStack_138 = puVar5[1];
    uStack_140 = *puVar5;
    uStack_130 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar4 = &uStack_140;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f638748,0xb);
    uStack_118 = puVar4[1];
    uStack_120 = *puVar4;
    uStack_110 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    puVar5 = &uStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puVar4,uVar1);
    uStack_f8 = puVar5[1];
    uStack_100 = *puVar5;
    uStack_f0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar4 = &uStack_100;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f6387e7,0x12);
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_d0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    __ZNSt3__19to_stringEm(&ppuStack_190,*(undefined8 *)param_1[2]);
    if (-1 < (char)bStack_179) {
      uStack_188 = (ulong)bStack_179;
      ppuStack_190 = &ppuStack_190;
    }
    puVar4 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,ppuStack_190,uStack_188);
    uStack_b8 = puVar4[1];
    uStack_c0 = *puVar4;
    uStack_b0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_10a012db0(auStack_a8,&uStack_c0,&UNK_10f6387fa);
    __ZNSt3__19to_stringEm(&ppuStack_1a8,*(undefined8 *)param_1[3]);
    if (-1 < (char)bStack_191) {
      uStack_1a0 = (ulong)bStack_191;
      ppuStack_1a8 = &ppuStack_1a8;
    }
    puVar4 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,ppuStack_1a8,uStack_1a0);
    uStack_88 = puVar4[1];
    uStack_90 = *puVar4;
    uStack_80 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_10a012db0(auStack_78,&uStack_90,&DAT_10f62a9de);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar3,auStack_78);
    ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0ca418);
    (*pcVar2)();
  }
  __Znwm((long)param_2 * 0x18);
  return;
}



/* Entry: 10a0ca1e8; end: 10a0ca587;  */

void FUN_10a0ca1e8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 **ppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_158,&UNK_10f6387b4,*param_1 + 8);
  puVar4 = auStack_158;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4," ",1);
  uStack_138 = puVar4[1];
  uStack_140 = *puVar4;
  uStack_130 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar5 = (undefined8 *)param_1[1];
  uVar1 = puVar5[1];
  puVar4 = (undefined8 *)*puVar5;
  if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar5 + 0x17);
    puVar4 = puVar5;
  }
  puVar5 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,puVar4,uVar1);
  uStack_118 = puVar5[1];
  uStack_120 = *puVar5;
  uStack_110 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar4 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f638748,0xb);
  uStack_f8 = puVar4[1];
  uStack_100 = *puVar4;
  uStack_f0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  puVar5 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,puVar4,uVar1);
  uStack_d8 = puVar5[1];
  uStack_e0 = *puVar5;
  uStack_d0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar4 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f6387e7,0x12);
  uStack_b8 = puVar4[1];
  uStack_c0 = *puVar4;
  uStack_b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__19to_stringEm(&ppuStack_170,*(undefined8 *)param_1[2]);
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    ppuStack_170 = &ppuStack_170;
  }
  puVar4 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppuStack_170,uStack_168);
  uStack_98 = puVar4[1];
  uStack_a0 = *puVar4;
  uStack_90 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10a012db0(auStack_88,&uStack_a0,&UNK_10f6387fa);
  __ZNSt3__19to_stringEm(&ppuStack_188,*(undefined8 *)param_1[3]);
  if (-1 < (char)bStack_171) {
    uStack_180 = (ulong)bStack_171;
    ppuStack_188 = &ppuStack_188;
  }
  puVar4 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppuStack_188,uStack_180);
  uStack_68 = puVar4[1];
  uStack_70 = *puVar4;
  uStack_60 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10a012db0(auStack_58,&uStack_70,&DAT_10f62a9de);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar3,auStack_58);
  ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0ca418);
  (*pcVar2)();
}



/* Entry: 10a0ca588; end: 10a0ca5ff;  */

void FUN_10a0ca588(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0ca600(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0ca600; end: 10a0ca637;  */

void FUN_10a0ca600(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = param_1;
    FUN_10a001d0c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 4;
    return;
  }
  FUN_10a001cf8();
  puVar2 = (undefined4 *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((ulong)puVar2 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        *param_3 = *puVar3;
        *(undefined8 *)(param_3 + 4) = 0;
        *(undefined8 *)(param_3 + 6) = 0;
        *(undefined8 *)(param_3 + 2) = 0;
        uVar4 = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(param_3 + 2) = uVar4;
        *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar3 + 6);
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        puVar3 = puVar3 + 8;
        param_3 = param_3 + 8;
      } while (puVar3 != param_2);
      do {
        if (*(long *)(puVar2 + 2) != 0) {
          *(long *)(puVar2 + 4) = *(long *)(puVar2 + 2);
          __ZdlPv();
        }
        puVar2 = puVar2 + 8;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 << 5);
  return;
}



/* Entry: 10a0ca638; end: 10a0ca64b;  */

void FUN_10a0ca638(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        *(undefined8 *)(param_3 + 4) = 0;
        *(undefined8 *)(param_3 + 6) = 0;
        *(undefined8 *)(param_3 + 2) = 0;
        uVar3 = *(undefined8 *)(puVar2 + 2);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar2 + 6);
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2 = puVar2 + 8;
        param_3 = param_3 + 8;
      } while (puVar2 != param_2);
      do {
        if (*(long *)(puVar1 + 2) != 0) {
          *(long *)(puVar1 + 4) = *(long *)(puVar1 + 2);
          __ZdlPv();
        }
        puVar1 = puVar1 + 8;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10a0ca64c; end: 10a0ca75f;  */

void FUN_10a0ca64c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if ((ulong)param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        *(undefined8 *)(param_3 + 4) = 0;
        *(undefined8 *)(param_3 + 6) = 0;
        *(undefined8 *)(param_3 + 2) = 0;
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(param_3 + 2) = uVar2;
        *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar1 = puVar1 + 8;
        param_3 = param_3 + 8;
      } while (puVar1 != param_2);
      do {
        if (*(long *)(param_1 + 2) != 0) {
          *(long *)(param_1 + 4) = *(long *)(param_1 + 2);
          __ZdlPv();
        }
        param_1 = param_1 + 8;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 << 5);
  return;
}



/* Entry: 10a0ca760; end: 10a0ca873;  */

long * FUN_10a0ca760(ulong *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    puStack_48 = param_1;
    if (uVar5 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = param_2;
      FUN_10a0ca64c();
    }
    puVar2 = (undefined4 *)(uVar5 + lVar6);
    uVar1 = uVar5 + (long)puVar3 * 0x20;
    *puVar2 = *param_2;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    uStack_68 = uVar5;
    puStack_60 = puVar2;
    puStack_58 = puVar2;
    uStack_50 = uVar1;
    FUN_10a0ca588();
    uVar5 = (long)puVar2 + (*param_1 - param_1[1]);
    func_0x00010a0ca680(*param_1,param_1[1],uVar5);
    uStack_68 = *param_1;
    *param_1 = uVar5;
    param_1[1] = (ulong)(puVar2 + 8);
    uStack_50 = param_1[2];
    param_1[2] = uVar1;
    puStack_60 = (undefined4 *)uStack_68;
    puStack_58 = (undefined4 *)uStack_68;
    func_0x00010a0ca700(&uStack_68);
    return (long *)(puVar2 + 8);
  }
  FUN_10a0ca638();
  func_0x00010a0ca700(&uStack_68);
  __Unwind_Resume();
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return (long *)param_1;
}



/* Entry: 10a0ca874; end: 10a0ca8c3;  */

long FUN_10a0ca874(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0ca8c4; end: 10a0ca8d7;  */

void FUN_10a0ca8c4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        if (*(long *)(lVar4 + -0x18) != 0) {
          *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
          __ZdlPv();
        }
        if (*(long *)(lVar4 + -0x30) != 0) {
          *(long *)(lVar4 + -0x28) = *(long *)(lVar4 + -0x30);
          __ZdlPv();
        }
        if (*(long *)(lVar4 + -0x48) != 0) {
          *(long *)(lVar4 + -0x40) = *(long *)(lVar4 + -0x48);
          __ZdlPv();
        }
        lVar4 = lVar4 + -0x50;
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a0ca8d8; end: 10a0ca967;  */

void FUN_10a0ca8d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        if (*(long *)(lVar3 + -0x18) != 0) {
          *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
          __ZdlPv();
        }
        if (*(long *)(lVar3 + -0x30) != 0) {
          *(long *)(lVar3 + -0x28) = *(long *)(lVar3 + -0x30);
          __ZdlPv();
        }
        if (*(long *)(lVar3 + -0x48) != 0) {
          *(long *)(lVar3 + -0x40) = *(long *)(lVar3 + -0x48);
          __ZdlPv();
        }
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a0ca968; end: 10a0ca9a7;  */

void FUN_10a0ca968(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a0ca9a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0ca9a8; end: 10a0ca9fb;  */

void FUN_10a0ca9a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a0ca9fc; end: 10a0caa67;  */

void FUN_10a0ca9fc(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  if ((long *)(param_1 + 8) != param_2) {
    FUN_10a0cb2bc((long *)(param_1 + 8),*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  }
  if (*(undefined4 **)(param_1 + 8) == *(undefined4 **)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-2];
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10a0caa68; end: 10a0cab1f;  */

long * FUN_10a0caa68(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10a0cab20();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0cab0c);
      (*pcVar1)();
    }
    lVar2 = param_2 * 0x18;
    __Znwm();
    *param_1 = lVar2;
    param_1[2] = lVar2 + param_2 * 0x18;
    _bzero();
    param_1[1] = lVar2 + ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  }
  return param_1;
}



/* Entry: 10a0cab20; end: 10a0cab33;  */

void FUN_10a0cab20(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a0cab34; end: 10a0caba7;  */

void FUN_10a0cab34(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a0caba8; end: 10a0cabbb;  */

void FUN_10a0caba8(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    plVar4 = (long *)0x90;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_FUN_110b9fe30;
    lStack_70 = *param_2;
    plStack_60 = plVar4 + 3;
    plVar4[4] = param_2[1];
    *plStack_60 = lStack_70;
    plVar4[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0x32aaaba7;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    *plVar3 = lStack_70;
    plVar3[1] = (long)plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_68 = plVar4;
    plStack_58 = plVar4;
    func_0x00010a053e8c(plStack_60,&lStack_70);
    plVar3 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_60 != 0) {
      func_0x00010a053ee8(*plStack_60,&plStack_60);
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 10a0cabbc; end: 10a0cabef;  */

void FUN_10a0cabbc(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    plVar3 = (long *)0x90;
    __Znwm();
    plVar4 = plVar3 + 1;
    *plVar4 = 0;
    *plVar3 = (long)&PTR_FUN_110b9fe30;
    lStack_60 = *param_2;
    plStack_50 = plVar3 + 3;
    plVar3[4] = param_2[1];
    *plStack_50 = lStack_60;
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
    *param_1 = lStack_60;
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
    plStack_58 = plVar3;
    plStack_48 = plVar3;
    func_0x00010a053e8c(plStack_50,&lStack_60);
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_50 != 0) {
      func_0x00010a053ee8(*plStack_50,&plStack_50);
    }
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 10a0cabf0; end: 10a0cad53;  */

void FUN_10a0cabf0(long *param_1,long *param_2)

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



/* Entry: 10a0cad54; end: 10a0cadcb;  */

float FUN_10a0cad54(long param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fStack_24;
  
  iVar4 = (int)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  FUN_10a0cadd4(iVar3,&fStack_24);
  lVar1 = *(long *)(param_1 + 8);
  uVar5 = *(long *)(param_1 + 0x10) - lVar1 >> 3;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(long)iVar4 < uVar5)) {
    return fStack_24 * *(float *)(lVar1 + (long)iVar4 * 8 + 4) +
           (1.0 - fStack_24) * *(float *)(lVar1 + (long)iVar3 * 8 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0cadcc);
  (*pcVar2)();
}



/* Entry: 10a0cadcc; end: 10a0cadd3;  */

void FUN_10a0cadcc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0cadd0);
  (*pcVar1)();
}



/* Entry: 10a0cadd4; end: 10a0cae77;  */

void FUN_10a0cadd4(float param_1,long param_2,float *param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (int)((ulong)param_2 >> 0x20);
  iVar3 = (int)param_2;
  FUN_10a0cae78();
  lVar1 = *(long *)(param_2 + 8);
  uVar5 = *(long *)(param_2 + 0x10) - lVar1 >> 3;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(long)iVar4 < uVar5)) {
    fVar6 = *(float *)(lVar1 + (long)iVar3 * 8);
    fVar7 = *(float *)(lVar1 + (long)iVar4 * 8);
    fVar8 = 1.0;
    if (1.1920929e-07 <= ABS(fVar6 - fVar7)) {
      fVar8 = (param_1 - fVar6) / (fVar7 - fVar6);
    }
    fVar6 = 0.0;
    if (0.0 <= fVar8) {
      fVar6 = fVar8;
    }
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    *param_3 = fVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0cae78);
  (*pcVar2)();
}



/* Entry: 10a0cae78; end: 10a0caecb;  */

ulong FUN_10a0cae78(float param_1,undefined *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong uVar10;
  
  puVar4 = &stack0xfffffffffffffff0;
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f63881d);
LAB_10a0caec0:
    param_2 = &UNK_10f63883a;
    unaff_x30 = FUN_10a0caecc;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar4;
  }
  else {
    if ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) < 9) goto LAB_10a0caec0;
    if (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) == 0x10) {
      return 0x100000000;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  iVar5 = *(int *)(param_2 + 0x34);
  if (iVar5 == 0) {
    fVar15 = (float)(ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3);
    _logf();
    iVar5 = (int)fVar15;
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    *(int *)(param_2 + 0x34) = iVar5;
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar9 = (ulong)uVar8;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar9 = (long)(int)uVar8 + 1;
    pfVar6 = *(float **)(param_2 + 8);
    lVar7 = *(long *)(param_2 + 0x10);
    uVar13 = lVar7 - (long)pfVar6 >> 3;
    uVar2 = (int)uVar13 - 1;
    uVar12 = (ulong)uVar2;
    uVar8 = (int)uVar9 + iVar5;
    if ((int)uVar2 <= (int)uVar8) {
      uVar8 = uVar2;
    }
    uVar10 = uVar9;
    if ((int)uVar9 < (int)uVar8) {
      pfVar11 = pfVar6 + uVar9 * 2;
      lVar14 = 0;
      if (uVar9 <= uVar13) {
        lVar14 = uVar13 - uVar9;
      }
      do {
        if (lVar14 == 0) goto LAB_10a0cb0a8;
        uVar10 = uVar9;
        if (param_1 < *pfVar11) break;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        uVar10 = (ulong)uVar8;
        pfVar11 = pfVar11 + 2;
        lVar14 = lVar14 + -1;
      } while (uVar8 != uVar1);
    }
    uVar8 = (uint)uVar10;
    if (uVar8 != uVar2) {
      if (uVar13 <= (ulong)(long)(int)uVar8) goto LAB_10a0cb0a8;
      uVar12 = uVar10;
      if (pfVar6[(long)(int)uVar8 * 2] <= param_1) goto LAB_10a0cb018;
    }
  }
  else {
    uVar2 = uVar8 - iVar5 & ((int)(uVar8 - iVar5) >> 0x1f ^ 0xffffffffU);
    uVar12 = uVar9;
    if ((int)uVar2 < (int)uVar8) {
      pfVar6 = (float *)(*(long *)(param_2 + 8) + uVar9 * 8);
      do {
        if ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar9)
        goto LAB_10a0cb0a8;
        uVar12 = uVar9;
      } while ((param_1 <= *pfVar6) &&
              (uVar9 = uVar9 - 1, uVar12 = (ulong)uVar2, pfVar6 = pfVar6 + -2,
              (long)(ulong)uVar2 < (long)uVar9));
    }
    iVar5 = (int)uVar12;
    if (iVar5 == 0) {
      pfVar6 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar6 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      if ((ulong)(lVar7 - (long)pfVar6 >> 3) <= (ulong)(long)iVar5) goto LAB_10a0cb0a8;
      if (param_1 <= pfVar6[(long)iVar5 * 2]) {
LAB_10a0cb018:
        *(float *)(param_2 + 0x2c) = param_1;
        lVar14 = (lVar7 + -8) - (long)pfVar6;
        pfVar11 = pfVar6;
        if (lVar14 != 0) {
          uVar9 = lVar14 >> 3;
          do {
            uVar13 = uVar9 >> 1;
            uVar12 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
            uVar9 = uVar13;
            if (pfVar11[uVar13 * 2] <= param_1) {
              uVar9 = uVar12;
              pfVar11 = pfVar11 + uVar13 * 2 + 2;
            }
          } while (uVar9 != 0);
        }
        uVar12 = (ulong)((long)pfVar11 - (long)pfVar6) >> 3;
        goto LAB_10a0cb070;
      }
    }
    uVar12 = (ulong)(iVar5 + 1);
  }
LAB_10a0cb070:
  uVar8 = (int)uVar12 - 1;
  if ((ulong)(long)(int)uVar8 < (ulong)(lVar7 - (long)pfVar6 >> 3)) {
    fVar15 = pfVar6[(long)(int)uVar8 * 2];
    *(uint *)(param_2 + 0x24) = uVar8;
    *(float *)(param_2 + 0x28) = fVar15;
    return (ulong)uVar8 | uVar12 << 0x20;
  }
LAB_10a0cb0a8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0cb0ac);
  (*pcVar3)();
}



/* Entry: 10a0caecc; end: 10a0cb0ab;  */

ulong FUN_10a0caecc(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  ulong uVar9;
  
  iVar4 = *(int *)(param_2 + 0x34);
  if (iVar4 == 0) {
    fVar14 = (float)(ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3);
    _logf();
    iVar4 = (int)fVar14;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_2 + 0x34) = iVar4;
  }
  uVar7 = *(uint *)(param_2 + 0x24);
  uVar8 = (ulong)uVar7;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar8 = (long)(int)uVar7 + 1;
    pfVar5 = *(float **)(param_2 + 8);
    lVar6 = *(long *)(param_2 + 0x10);
    uVar12 = lVar6 - (long)pfVar5 >> 3;
    uVar2 = (int)uVar12 - 1;
    uVar11 = (ulong)uVar2;
    uVar7 = (int)uVar8 + iVar4;
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
    uVar9 = uVar8;
    if ((int)uVar8 < (int)uVar7) {
      pfVar10 = pfVar5 + uVar8 * 2;
      lVar13 = 0;
      if (uVar8 <= uVar12) {
        lVar13 = uVar12 - uVar8;
      }
      do {
        if (lVar13 == 0) goto LAB_10a0cb0a8;
        uVar9 = uVar8;
        if (param_1 < *pfVar10) break;
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        uVar9 = (ulong)uVar7;
        pfVar10 = pfVar10 + 2;
        lVar13 = lVar13 + -1;
      } while (uVar7 != uVar1);
    }
    uVar7 = (uint)uVar9;
    if (uVar7 != uVar2) {
      if (uVar12 <= (ulong)(long)(int)uVar7) goto LAB_10a0cb0a8;
      uVar11 = uVar9;
      if (pfVar5[(long)(int)uVar7 * 2] <= param_1) goto LAB_10a0cb018;
    }
  }
  else {
    uVar2 = uVar7 - iVar4 & ((int)(uVar7 - iVar4) >> 0x1f ^ 0xffffffffU);
    uVar11 = uVar8;
    if ((int)uVar2 < (int)uVar7) {
      pfVar5 = (float *)(*(long *)(param_2 + 8) + uVar8 * 8);
      do {
        if ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar8)
        goto LAB_10a0cb0a8;
        uVar11 = uVar8;
      } while ((param_1 <= *pfVar5) &&
              (uVar8 = uVar8 - 1, uVar11 = (ulong)uVar2, pfVar5 = pfVar5 + -2,
              (long)(ulong)uVar2 < (long)uVar8));
    }
    iVar4 = (int)uVar11;
    if (iVar4 == 0) {
      pfVar5 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar5 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
      if ((ulong)(lVar6 - (long)pfVar5 >> 3) <= (ulong)(long)iVar4) goto LAB_10a0cb0a8;
      if (param_1 <= pfVar5[(long)iVar4 * 2]) {
LAB_10a0cb018:
        *(float *)(param_2 + 0x2c) = param_1;
        lVar13 = (lVar6 + -8) - (long)pfVar5;
        pfVar10 = pfVar5;
        if (lVar13 != 0) {
          uVar8 = lVar13 >> 3;
          do {
            uVar12 = uVar8 >> 1;
            uVar11 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
            uVar8 = uVar12;
            if (pfVar10[uVar12 * 2] <= param_1) {
              uVar8 = uVar11;
              pfVar10 = pfVar10 + uVar12 * 2 + 2;
            }
          } while (uVar8 != 0);
        }
        uVar11 = (ulong)((long)pfVar10 - (long)pfVar5) >> 3;
        goto LAB_10a0cb070;
      }
    }
    uVar11 = (ulong)(iVar4 + 1);
  }
LAB_10a0cb070:
  uVar7 = (int)uVar11 - 1;
  if ((ulong)(long)(int)uVar7 < (ulong)(lVar6 - (long)pfVar5 >> 3)) {
    fVar14 = pfVar5[(long)(int)uVar7 * 2];
    *(uint *)(param_2 + 0x24) = uVar7;
    *(float *)(param_2 + 0x28) = fVar14;
    return (ulong)uVar7 | uVar11 << 0x20;
  }
LAB_10a0cb0a8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0cb0ac);
  (*pcVar3)();
}



/* Entry: 10a0cb0ac; end: 10a0cb1cb;  */

void FUN_10a0cb0ac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a0cb1cc; end: 10a0cb20b;  */

void FUN_10a0cb1cc(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0cb20c; end: 10a0cb247;  */

long FUN_10a0cb20c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba1368);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0cb248; end: 10a0cb25b;  */

void FUN_10a0cb248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cb25c; end: 10a0cb27b;  */

void FUN_10a0cb25c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba1388;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cb27c; end: 10a0cb2b7;  */

undefined8 * FUN_10a0cb27c(long param_1)

{
  *(undefined ***)(param_1 + 0xf8) = &PTR____cxa_pure_virtual_110ba1bc8;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}


