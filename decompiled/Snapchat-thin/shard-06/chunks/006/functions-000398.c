/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ab8f08; end: 104aba09f;  */

void FUN_104ab8f08(long *param_1,uint *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined8 ******ppppppuVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 *****pppppuVar22;
  char *pcVar23;
  char *pcVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 ***pppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *****pppppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  undefined8 *****pppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  bVar7 = *param_3 == 0;
  uVar21 = param_3[1] & 0xff;
  if (!bVar7) {
    uVar21 = param_3[1];
  }
  if (uVar21 != 0) {
    uVar21 = 0;
    puVar1 = param_2 + 8;
    do {
      lVar19 = (long)param_3 + 9;
      if (!bVar7) {
        lVar19 = param_3[2];
      }
      if (4 < *param_2) {
LAB_104ab9e74:
        FUN_104a6e964("return GRPC_ERROR_NONE",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                      ,0x198);
code_r0x000104ab9e8c:
        FUN_104a6e964("return GRPC_ERROR_CREATE_FROM_STATIC_STRING(\"Should never reach here\")",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                      ,0x15a);
code_r0x000104ab9ea4:
        FUN_104a6e964("return GRPC_ERROR_CREATE_FROM_STATIC_STRING( \"Should never reach here\")",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                      ,0x112);
code_r0x000104ab9ebc:
        FUN_104a6e964("return GRPC_ERROR_CREATE_FROM_STATIC_STRING(\"Should never reach here\")",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                      ,0xab);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104ab9ed8);
        (*pcVar6)();
      }
      bVar5 = *(byte *)(lVar19 + uVar21);
      switch(*param_2) {
      default:
        if (0xfff < *(ulong *)(param_2 + 0x408)) {
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          pppuStack_1d0 = (undefined8 ***)0x0;
          FUN_104ab5920(param_1,2,"HTTP header max line length exceeded",0x24,&ppppuStack_98,
                        &pppuStack_1d0);
          ppppuStack_80 = &pppuStack_1d0;
          goto code_r0x000104ab9090;
        }
        *(byte *)((long)param_2 + *(ulong *)(param_2 + 0x408) + 0x20) = bVar5;
        lVar19 = *(long *)(param_2 + 0x408);
        uVar12 = lVar19 + 1;
        *(ulong *)(param_2 + 0x408) = uVar12;
        if (1 < uVar12) {
          cVar3 = *(char *)((long)param_2 + lVar19 + 0x1f);
          if (cVar3 == '\n') {
            if (*(char *)((long)param_2 + lVar19 + 0x20) != '\r') goto code_r0x000104ab9120;
          }
          else if ((cVar3 != '\r') || (*(char *)((long)param_2 + lVar19 + 0x20) != '\n')) {
code_r0x000104ab9120:
            if (*(char *)((long)param_2 + lVar19 + 0x20) != '\n') goto code_r0x000104ab9180;
            param_2[0x40a] = 1;
            param_2[0x40b] = 0;
          }
          switch(*param_2) {
          case 0:
            if (param_2[1] == 0) {
              if ((char)*puVar1 == 'H') {
                puVar14 = (uint *)((long)puVar1 + uVar12);
                if (((uint *)((long)param_2 + 0x21) == puVar14) ||
                   (*(char *)((long)param_2 + 0x21) != 'T')) {
                  uStack_90 = 0;
                  uStack_88 = 0;
                  ppppuStack_98 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'T\'",0xc,&uStack_b9,&ppppuStack_98);
                  pppppuStack_b8 = &ppppuStack_98;
                }
                else if (((uint *)((long)param_2 + 0x22) == puVar14) ||
                        (*(char *)((long)param_2 + 0x22) != 'T')) {
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  ppppuStack_b0 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'T\'",0xc,&uStack_b9,&ppppuStack_b0);
                  pppppuStack_b8 = &ppppuStack_b0;
                }
                else if (((uint *)((long)param_2 + 0x23) == puVar14) ||
                        (*(char *)((long)param_2 + 0x23) != 'P')) {
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  ppppuStack_d8 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'P\'",0xc,&uStack_b9,&ppppuStack_d8);
                  pppppuStack_b8 = &ppppuStack_d8;
                }
                else if ((param_2 + 9 == puVar14) || ((char)param_2[9] != '/')) {
                  uStack_e8 = 0;
                  uStack_e0 = 0;
                  ppppuStack_f0 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'/\'",0xc,&uStack_b9,&ppppuStack_f0);
                  pppppuStack_b8 = &ppppuStack_f0;
                }
                else if (((uint *)((long)param_2 + 0x25) == puVar14) ||
                        (*(char *)((long)param_2 + 0x25) != '1')) {
                  uStack_100 = 0;
                  uStack_f8 = 0;
                  ppppuStack_108 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'1\'",0xc,&uStack_b9,&ppppuStack_108);
                  pppppuStack_b8 = &ppppuStack_108;
                }
                else if (((uint *)((long)param_2 + 0x26) == puVar14) ||
                        (*(char *)((long)param_2 + 0x26) != '.')) {
                  uStack_118 = 0;
                  uStack_110 = 0;
                  ppppuStack_120 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'.\'",0xc,&uStack_b9,&ppppuStack_120);
                  pppppuStack_b8 = &ppppuStack_120;
                }
                else if (((uint *)((long)param_2 + 0x27) == puVar14) ||
                        (*(byte *)((long)param_2 + 0x27) - 0x32 < 0xfffffffe)) {
                  uStack_130 = 0;
                  uStack_128 = 0;
                  ppppuStack_138 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected HTTP/1.0 or HTTP/1.1",0x1d,&uStack_b9,
                                &ppppuStack_138);
                  pppppuStack_b8 = &ppppuStack_138;
                }
                else if ((param_2 + 10 == puVar14) || ((char)param_2[10] != ' ')) {
                  uStack_148 = 0;
                  uStack_140 = 0;
                  ppppuStack_150 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \' \'",0xc,&uStack_b9,&ppppuStack_150);
                  pppppuStack_b8 = &ppppuStack_150;
                }
                else if (((uint *)((long)param_2 + 0x29) == puVar14) ||
                        (uVar13 = (uint)*(byte *)((long)param_2 + 0x29), uVar13 - 0x3a < 0xfffffff7)
                        ) {
                  uStack_160 = 0;
                  uStack_158 = 0;
                  ppppuStack_168 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected status code",0x14,&uStack_b9,
                                &ppppuStack_168);
                  pppppuStack_b8 = &ppppuStack_168;
                }
                else if (((uint *)((long)param_2 + 0x2a) == puVar14) ||
                        (uVar17 = (uint)*(byte *)((long)param_2 + 0x2a), uVar17 - 0x3a < 0xfffffff6)
                        ) {
                  uStack_178 = 0;
                  uStack_170 = 0;
                  ppppuStack_180 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected status code",0x14,&uStack_b9,
                                &ppppuStack_180);
                  pppppuStack_b8 = &ppppuStack_180;
                }
                else if (((uint *)((long)param_2 + 0x2b) == puVar14) ||
                        (uVar18 = (uint)*(byte *)((long)param_2 + 0x2b), uVar18 - 0x3a < 0xfffffff6)
                        ) {
                  uStack_190 = 0;
                  uStack_188 = 0;
                  pppppuStack_198 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected status code",0x14,&uStack_b9,
                                &pppppuStack_198);
                  pppppuStack_b8 = &pppppuStack_198;
                }
                else {
                  **(int **)(param_2 + 2) = uVar17 * 10 + uVar13 * 100 + (uVar18 - 0x14d0);
                  if ((param_2 + 0xb != puVar14) && ((char)param_2[0xb] == ' ')) {
                    ppppuStack_1b8 = (undefined8 *****)0x0;
                    goto code_r0x000104ab9b40;
                  }
                  uStack_1a8 = 0;
                  uStack_1a0 = 0;
                  ppppuStack_1b0 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected \' \'",0xc,&uStack_b9,&ppppuStack_1b0);
                  pppppuStack_b8 = &ppppuStack_1b0;
                }
              }
              else {
                uStack_78 = 0;
                uStack_70 = 0;
                ppppuStack_80 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'H\'",0xc,&uStack_b9,&ppppuStack_80);
                pppppuStack_b8 = &ppppuStack_80;
              }
              ppppppuVar9 = &pppppuStack_b8;
code_r0x000104ab9b3c:
              func_0x000100482b64(ppppppuVar9);
            }
            else {
              if (param_2[1] != 1) goto code_r0x000104ab9ebc;
              uVar26 = 0;
              do {
                if (uVar12 == uVar26) goto code_r0x000104ab9628;
                pcVar23 = (char *)((long)puVar1 + uVar26);
                uVar26 = uVar26 + 1;
              } while (*pcVar23 != ' ');
              if (uVar12 == uVar26) {
code_r0x000104ab9628:
                uStack_78 = 0;
                uStack_70 = 0;
                ppppuStack_80 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"No method on HTTP request line",0x1e,
                              &ppppuStack_1b0,&ppppuStack_80);
                pppppuStack_198 = &ppppuStack_80;
code_r0x000104ab97c4:
                ppppppuVar9 = &pppppuStack_198;
                goto code_r0x000104ab9b3c;
              }
              uVar12 = uVar26;
              func_0x000100460200();
              _memcpy();
              lVar8 = 0;
              *(undefined1 *)(uVar12 + uVar26 + -1) = 0;
              **(ulong **)(param_2 + 2) = uVar12;
              lVar19 = uVar26 - lVar19;
              do {
                if (lVar19 + lVar8 == 1) goto code_r0x000104ab9798;
                lVar11 = lVar8 + uVar26;
                lVar8 = lVar8 + 1;
              } while (*(char *)((long)puVar1 + lVar11) != ' ');
              if (lVar19 + lVar8 == 1) {
code_r0x000104ab9798:
                uStack_90 = 0;
                uStack_88 = 0;
                ppppuStack_98 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"No path on HTTP request line",0x1c,&ppppuStack_1b0,
                              &ppppuStack_98);
                pppppuStack_198 = &ppppuStack_98;
                goto code_r0x000104ab97c4;
              }
              lVar11 = lVar8;
              func_0x000100460200();
              _memcpy();
              *(undefined1 *)(lVar11 + lVar8 + -1) = 0;
              *(long *)(*(long *)(param_2 + 2) + 8) = lVar11;
              if (*(char *)((long)puVar1 + lVar8 + uVar26) != 'H') {
                uStack_a8 = 0;
                uStack_a0 = 0;
                ppppuStack_b0 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'H\'",0xc,&ppppuStack_1b0,&ppppuStack_b0)
                ;
                pppppuStack_198 = &ppppuStack_b0;
                goto code_r0x000104ab97c4;
              }
              if ((lVar19 + lVar8 == 0) || (*(char *)((long)puVar1 + lVar8 + uVar26 + 1) != 'T')) {
                uStack_d0 = 0;
                uStack_c8 = 0;
                ppppuStack_d8 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'T\'",0xc,&ppppuStack_1b0,&ppppuStack_d8)
                ;
                pppppuStack_198 = &ppppuStack_d8;
                goto code_r0x000104ab97c4;
              }
              if ((lVar19 + lVar8 == -1) || (*(char *)((long)puVar1 + lVar8 + uVar26 + 2) != 'T')) {
                uStack_e8 = 0;
                uStack_e0 = 0;
                ppppuStack_f0 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'T\'",0xc,&ppppuStack_1b0,&ppppuStack_f0)
                ;
                pppppuStack_198 = &ppppuStack_f0;
                goto code_r0x000104ab97c4;
              }
              if ((lVar19 + lVar8 == -2) || (*(char *)((long)puVar1 + lVar8 + uVar26 + 3) != 'P')) {
                uStack_100 = 0;
                uStack_f8 = 0;
                ppppuStack_108 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'P\'",0xc,&ppppuStack_1b0,&ppppuStack_108
                             );
                pppppuStack_198 = &ppppuStack_108;
                goto code_r0x000104ab97c4;
              }
              if ((lVar19 + lVar8 == -3) || (*(char *)((long)puVar1 + lVar8 + uVar26 + 4) != '/')) {
                uStack_118 = 0;
                uStack_110 = 0;
                ppppuStack_120 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"Expected \'/\'",0xc,&ppppuStack_1b0,&ppppuStack_120
                             );
                pppppuStack_198 = &ppppuStack_120;
                goto code_r0x000104ab97c4;
              }
              if (lVar19 + lVar8 == -6) {
                uStack_130 = 0;
                uStack_128 = 0;
                ppppuStack_138 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_1b8,2,"End of line in HTTP version string",0x22,
                              &ppppuStack_1b0,&ppppuStack_138);
                pppppuStack_198 = &ppppuStack_138;
code_r0x000104ab9d1c:
                func_0x000100482b64(&pppppuStack_198);
              }
              else {
                cVar3 = *(char *)((long)puVar1 + lVar8 + uVar26 + 5);
                cVar4 = *(char *)((long)puVar1 + lVar8 + uVar26 + 7);
                if (cVar3 == '2') {
                  if (cVar4 == '0') {
                    uVar10 = 2;
                    goto code_r0x000104ab9ce0;
                  }
                  uStack_160 = 0;
                  uStack_158 = 0;
                  ppppuStack_168 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0",
                                0x2f,&ppppuStack_1b0,&ppppuStack_168);
                  pppppuStack_198 = &ppppuStack_168;
                  goto code_r0x000104ab9d1c;
                }
                if (cVar3 != '1') {
                  uStack_178 = 0;
                  uStack_170 = 0;
                  ppppuStack_180 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_1b8,2,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0",
                                0x2f,&ppppuStack_1b0,&ppppuStack_180);
                  pppppuStack_198 = &ppppuStack_180;
                  goto code_r0x000104ab9d1c;
                }
                if (cVar4 == '0') {
                  uVar10 = 0;
                }
                else {
                  if (cVar4 != '1') {
                    uStack_148 = 0;
                    uStack_140 = 0;
                    ppppuStack_150 = (undefined8 *****)0x0;
                    FUN_104ab5920(&ppppuStack_1b8,2,
                                  "Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0",0x2f,
                                  &ppppuStack_1b0,&ppppuStack_150);
                    pppppuStack_198 = &ppppuStack_150;
                    goto code_r0x000104ab9d1c;
                  }
                  uVar10 = 1;
                }
code_r0x000104ab9ce0:
                *(undefined4 *)(*(long *)(param_2 + 2) + 0x10) = uVar10;
                ppppuStack_1b8 = (undefined8 *****)0x0;
              }
            }
code_r0x000104ab9b40:
            pppppuVar22 = (undefined8 *****)ppppuStack_1b8;
            if ((undefined8 *****)ppppuStack_1b8 == (undefined8 *****)0x0) {
              bVar7 = false;
              *param_2 = 1;
              break;
            }
code_r0x000104ab9b48:
            bVar7 = false;
            goto code_r0x000104ab9b64;
          case 1:
          case 3:
            if (uVar12 == *(ulong *)(param_2 + 0x40a)) {
              if (*param_2 == 1) {
                *param_2 = 2;
                bVar7 = true;
              }
              else {
                bVar7 = false;
                *param_2 = 4;
              }
            }
            else {
              cVar3 = (char)*puVar1;
              if ((cVar3 == '\t') ||
                 (puVar15 = puVar1, lVar8 = lVar19, puVar14 = puVar1, cVar3 == ' ')) {
                uStack_78 = 0;
                uStack_70 = 0;
                ppppuStack_80 = (undefined8 *****)0x0;
                FUN_104ab5920(&ppppuStack_d8,2,"Continued header lines not supported yet",0x28,
                              &ppppuStack_f0,&ppppuStack_80);
                pppppuVar22 = (undefined8 *****)ppppuStack_d8;
                if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
                  ppppuStack_d8 = (undefined8 *****)0x36;
                }
                lVar19 = -0x70;
code_r0x000104ab976c:
                ppppuStack_b0 = (undefined8 ****)(&stack0xfffffffffffffff0 + lVar19);
                func_0x000100482b64(&ppppuStack_b0);
                if (pppppuVar22 == (undefined8 *****)0x0) goto code_r0x000104ab9790;
                func_0x000100460314(0);
                func_0x000100460314(0);
                goto code_r0x000104ab9b48;
              }
              while (cVar3 != ':') {
                if (lVar8 == 0) {
                  uStack_90 = 0;
                  uStack_88 = 0;
                  ppppuStack_98 = (undefined8 *****)0x0;
                  FUN_104ab5920(&ppppuStack_d8,2,"Didn\'t find \':\' in header string",0x20,
                                &ppppuStack_f0,&ppppuStack_98);
                  pppppuVar22 = (undefined8 *****)ppppuStack_d8;
                  if ((undefined8 *****)ppppuStack_d8 != (undefined8 *****)0x0) {
                    ppppuStack_d8 = (undefined8 *****)0x36;
                  }
                  lVar19 = -0x88;
                  goto code_r0x000104ab976c;
                }
                cVar3 = *(char *)((long)puVar14 + 1);
                puVar15 = (uint *)((long)puVar15 + 1);
                lVar8 = lVar8 + -1;
                puVar14 = (uint *)((long)puVar14 + 1);
              }
              pcVar2 = (char *)((long)puVar1 + uVar12);
              lVar8 = (long)puVar15 + (1 - (long)puVar1);
              func_0x000100460200();
              _memcpy();
              *(undefined1 *)((long)puVar15 + (lVar8 - (long)puVar1)) = 0;
              pcVar23 = (char *)((long)puVar14 + 1);
              pcVar24 = pcVar2;
              if (pcVar23 != pcVar2) {
                puVar14 = (uint *)((long)param_2 + lVar19 + 0x20);
                do {
                  if (*pcVar23 != ' ' && *pcVar23 != '\t') {
                    puVar14 = (uint *)(pcVar23 + -1);
                    pcVar24 = pcVar23;
                    break;
                  }
                  pcVar23 = pcVar23 + 1;
                } while (pcVar23 != pcVar2);
              }
              lVar19 = ((long)pcVar2 - (long)pcVar24) - *(ulong *)(param_2 + 0x40a);
              if ((ulong)((long)pcVar2 - (long)pcVar24) < *(ulong *)(param_2 + 0x40a)) {
                func_0x00010bdabfa0();
                goto LAB_104ab9e74;
              }
              if (lVar19 == 0) {
                lVar19 = 0;
              }
              else {
                lVar19 = lVar19 - (ulong)(*(char *)((long)puVar14 + lVar19) == '\r');
              }
              lVar11 = lVar19 + 1;
              func_0x000100460200();
              _memcpy();
              *(undefined1 *)(lVar11 + lVar19) = 0;
              lVar19 = *(long *)(param_2 + 2);
              if (param_2[1] == 0) {
                plVar20 = (long *)(lVar19 + 8);
                plVar25 = (long *)(lVar19 + 0x10);
                lVar16 = lVar8;
                _strcmp(lVar8,&DAT_10f45dbe2);
                if (((int)lVar16 == 0) &&
                   (lVar16 = lVar11, _strcmp(lVar11,&DAT_10f45dbf4), (int)lVar16 == 0)) {
                  *(undefined4 *)(lVar19 + 0x20) = 1;
                }
              }
              else {
                plVar20 = (long *)(lVar19 + 0x18);
                plVar25 = (long *)(lVar19 + 0x20);
              }
              lVar16 = *plVar20;
              lVar19 = *plVar25;
              if (lVar16 == *(long *)(param_2 + 6)) {
                uVar12 = (ulong)(lVar16 * 3) >> 1;
                if ((ulong)(lVar16 * 3) >> 1 < lVar16 + 1U) {
                  uVar12 = lVar16 + 1;
                }
                *(ulong *)(param_2 + 6) = uVar12;
                func_0x0001004689e4(lVar19,uVar12 << 4);
                *plVar25 = lVar19;
                lVar16 = *plVar20;
              }
              bVar7 = false;
              *plVar20 = lVar16 + 1;
              plVar20 = (long *)(lVar19 + lVar16 * 0x10);
              *plVar20 = lVar8;
              plVar20[1] = lVar11;
            }
            break;
          case 2:
          case 4:
            goto code_r0x000104ab9ea4;
          default:
code_r0x000104ab9790:
            bVar7 = false;
          }
          pppppuVar22 = (undefined8 *****)0x0;
          param_2[0x408] = 0;
          param_2[0x409] = 0;
code_r0x000104ab9b64:
          *param_1 = (long)pppppuVar22;
          if (pppppuVar22 != (undefined8 *****)0x0) {
            return;
          }
          goto code_r0x000104ab9440;
        }
        if (uVar12 != 0) goto code_r0x000104ab9120;
code_r0x000104ab9180:
        *param_1 = 0;
        goto code_r0x000104ab9450;
      case 2:
        if (param_2[1] == 1) {
          lVar19 = *(long *)(param_2 + 2);
          plVar20 = (long *)(lVar19 + 0x28);
code_r0x000104ab93e0:
          lVar11 = *plVar20;
          lVar8 = *(long *)(lVar19 + 0x30);
          if (lVar11 == *(long *)(param_2 + 4)) {
            uVar12 = (ulong)(lVar11 * 3) >> 1;
            if (uVar12 < 9) {
              uVar12 = 8;
            }
            *(ulong *)(param_2 + 4) = uVar12;
            func_0x0001004689e4();
            *(long *)(lVar19 + 0x30) = lVar8;
            lVar11 = *plVar20;
          }
          *(byte *)(lVar8 + lVar11) = bVar5;
          *plVar20 = *plVar20 + 1;
          goto code_r0x000104ab9430;
        }
        if (param_2[1] != 0) goto code_r0x000104ab9e8c;
        lVar19 = *(long *)(param_2 + 2);
        puVar14 = (uint *)(lVar19 + 0x20);
        if (3 < *puVar14 - 1) {
code_r0x000104ab93dc:
          plVar20 = (long *)(lVar19 + 0x18);
          goto code_r0x000104ab93e0;
        }
        uVar13 = (uint)bVar5;
        switch(*puVar14) {
        case 1:
          if (uVar13 == 0x3b || uVar13 == 0xd) {
            *puVar14 = 2;
          }
          else {
            if (uVar13 - 0x30 < 10) {
              *(long *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) << 4;
              uVar12 = (ulong)(bVar5 - 0x30);
            }
            else if (uVar13 - 0x61 < 6) {
              *(long *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) << 4;
              uVar12 = (ulong)(uVar13 - 0x57);
            }
            else {
              if (5 < uVar13 - 0x41) {
                uStack_78 = 0;
                uStack_70 = 0;
                ppppuStack_80 = (undefined8 *****)0x0;
                FUN_104ab5920(param_1,2,"Expected chunk size in hexadecimal",0x22,&ppppuStack_f0,
                              &ppppuStack_80);
                ppppuStack_d8 = &ppppuStack_80;
                goto code_r0x000104ab97fc;
              }
              *(long *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) << 4;
              uVar12 = (ulong)(uVar13 - 0x37);
            }
            *(ulong *)(*(long *)(param_2 + 2) + 0x28) =
                 *(long *)(*(long *)(param_2 + 2) + 0x28) + uVar12;
          }
          break;
        case 2:
          if (uVar13 == 10) {
            puVar15 = param_2;
            if (*(long *)(lVar19 + 0x28) != 0) {
              puVar15 = puVar14;
            }
            *puVar15 = 3;
          }
          break;
        case 3:
          if (*(long *)(lVar19 + 0x28) != 0) {
            *(long *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) + -1;
            lVar19 = *(long *)(param_2 + 2);
            goto code_r0x000104ab93dc;
          }
          if (uVar13 != 0xd) {
            uStack_90 = 0;
            uStack_88 = 0;
            ppppuStack_98 = (undefined8 *****)0x0;
            FUN_104ab5920(param_1,2,"Expected \'\\r\\n\' after chunk body",0x20,&ppppuStack_f0,
                          &ppppuStack_98);
            ppppuStack_d8 = &ppppuStack_98;
            goto code_r0x000104ab97fc;
          }
          *puVar14 = 4;
          *(undefined8 *)(*(long *)(param_2 + 2) + 0x28) = 0;
          break;
        case 4:
          if (uVar13 == 10) {
            *puVar14 = 1;
            break;
          }
          uStack_a8 = 0;
          uStack_a0 = 0;
          ppppuStack_b0 = (undefined8 *****)0x0;
          FUN_104ab5920(param_1,2,"Expected \'\\r\\n\' after chunk body",0x20,&ppppuStack_f0,
                        &ppppuStack_b0);
          ppppuStack_d8 = &ppppuStack_b0;
code_r0x000104ab97fc:
          pppppuVar22 = &ppppuStack_d8;
          goto code_r0x000104ab9098;
        }
code_r0x000104ab9430:
        *param_1 = 0;
        break;
      case 4:
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        pppuStack_1e8 = (undefined8 ***)0x0;
        FUN_104ab5920(param_1,2,"Unexpected byte after end",0x19,&ppppuStack_98,&pppuStack_1e8);
        ppppuStack_80 = &pppuStack_1e8;
code_r0x000104ab9090:
        pppppuVar22 = &ppppuStack_80;
code_r0x000104ab9098:
        func_0x000100482b64(pppppuVar22);
      }
      bVar7 = false;
      if (*param_1 != 0) {
        return;
      }
code_r0x000104ab9440:
      if ((param_4 != (long *)0x0) && (bVar7)) {
        *param_4 = uVar21 + 1;
      }
code_r0x000104ab9450:
      uVar21 = uVar21 + 1;
      bVar7 = *param_3 == 0;
      uVar12 = param_3[1] & 0xff;
      if (!bVar7) {
        uVar12 = param_3[1];
      }
    } while (uVar21 < uVar12);
  }
  *param_1 = 0;
  return;
}



/* Entry: 104aba0a0; end: 104aba127;  */

void FUN_104aba0a0(undefined8 *param_1,int *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  if (*param_2 == 2 || *param_2 == 4) {
    *param_1 = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    FUN_104ab5920(2,"Did not finish headers",0x16,&uStack_29,&uStack_48);
    puStack_28 = &uStack_48;
    func_0x000100482b64(&puStack_28);
  }
  return;
}



/* Entry: 104aba128; end: 104aba27f;  */

void FUN_104aba128(long param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  ulong *puVar3;
  int *piVar4;
  bool bVar5;
  ulong uVar6;
  ulong uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_48 = *param_2;
  if ((uStack_48 & 1) != 0) {
    piVar4 = (int *)(uStack_48 - 1);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar5) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar3 = &uStack_48;
  func_0x0001004bd890();
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar1 = (ulong *)(param_1 + 0x58);
  do {
    uVar6 = *puVar1;
    if ((uVar6 & 1) == 0) {
      uStack_50 = 0;
LAB_104aba1b8:
      do {
        if (*puVar1 != uVar6) {
          ClearExclusiveLocal();
          bVar5 = true;
          goto LAB_104aba21c;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = (ulong)puVar3 | 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar5 = false;
      if (uVar6 != 0) {
        uStack_60 = *param_2;
        if ((uStack_60 & 1) != 0) {
          piVar4 = (int *)(uStack_60 - 1);
          do {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar5) {
              *piVar4 = *piVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x0001004bd7e8(&uStack_51,uVar6,&uStack_60);
        if ((uStack_60 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104aba20c;
      }
    }
    else {
      FUN_104ab6ba8(&uStack_50,uVar6 & 0xfffffffffffffffe);
      if (uStack_50 == 0) goto LAB_104aba1b8;
      FUN_104ab6b68(puVar3);
LAB_104aba20c:
      bVar5 = false;
    }
LAB_104aba21c:
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (!bVar5) {
      return;
    }
  } while( true );
}



/* Entry: 104aba280; end: 104aba2b3;  */

undefined8 * FUN_104aba280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c54a8;
  func_0x00010046df8c();
  return param_1;
}



/* Entry: 104aba2b4; end: 104aba2e7;  */

void FUN_104aba2b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c54a8;
  func_0x00010046df8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104aba2e8; end: 104aba347;  */

undefined8 * FUN_104aba2e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c54c8;
  FUN_104abe7d0(param_1 + 1);
  FUN_104abe7d0(param_1 + 2);
  FUN_104abe7d0(param_1 + 3);
  _dispatch_release(param_1[4]);
  *param_1 = &PTR_FUN_1107c54a8;
  func_0x00010046df8c();
  return param_1;
}



/* Entry: 104aba348; end: 104aba34b;  */

undefined8 * FUN_104aba348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c54c8;
  FUN_104abe7d0(param_1 + 1);
  FUN_104abe7d0(param_1 + 2);
  FUN_104abe7d0(param_1 + 3);
  _dispatch_release(param_1[4]);
  *param_1 = &PTR_FUN_1107c54a8;
  func_0x00010046df8c();
  return param_1;
}



/* Entry: 104aba34c; end: 104aba35f;  */

void FUN_104aba34c(void)

{
  FUN_104aba2e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104aba360; end: 104aba467;  */

void FUN_104aba360(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104abe838(param_1 + 8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104abe838(param_1 + 0x10,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  uStack_38 = *param_2;
  if ((uStack_38 & 1) != 0) {
    piVar3 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104abe838(param_1 + 0x18,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aba468; end: 104aba46b;  */

void FUN_104aba468(long *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x10;
  
  *param_1 = 0;
  func_0x000100460dc4(param_1);
  func_0x000100460dc4();
  if (extraout_x10 == 0) {
    *(undefined8 *)(*param_1 + 0x20) = extraout_x8;
    func_0x000100460dc4();
    puVar2 = (undefined8 *)(*param_1 + 0x18);
    uVar1 = extraout_x8_01;
  }
  else {
    **(undefined8 **)(*param_1 + 0x20) = extraout_x8;
    func_0x000100460dc4();
    puVar2 = (undefined8 *)(*param_1 + 0x20);
    uVar1 = extraout_x8_00;
  }
  *puVar2 = uVar1;
  return;
}



/* Entry: 104aba46c; end: 104aba4bb;  */

undefined1  [16] FUN_104aba46c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long alStack_a8 [8];
  long lStack_68;
  
  lVar4 = param_1 + 0xa0;
  func_0x0001005a5e70();
  if ((int)lVar4 != 0) {
    plVar3 = (long *)(param_1 + 0x60);
    do {
      lVar7 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        func_0x00010083746c(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        auVar12._8_8_ = param_2;
        auVar12._0_8_ = param_1;
        return auVar12;
      }
      func_0x00010bdac044();
      lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3 = (long *)0x2;
      uVar6 = param_2;
      func_0x0001004686b8();
      if ((int)plVar3 != 0) {
        plVar3 = alStack_a8;
        func_0x000107c616d0(plVar3,0x40,param_4,&stack0xffffffffffffffe0);
        if ((int)(uint)plVar3 < 0) {
          plVar5 = (long *)0x0;
          plVar3 = (long *)0x0;
        }
        else if ((uint)plVar3 < 0x40) {
          plVar3 = (long *)0x0;
          plVar5 = alStack_a8;
        }
        else {
          plVar3 = (long *)(((ulong)plVar3 & 0xffffffff) + 1);
          func_0x000100460200();
          func_0x000107c616d0();
          plVar5 = plVar3;
        }
        FUN_104a6e9e0(param_1,param_2,2,plVar5);
        func_0x000100460314();
        uVar6 = param_2;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        auVar8._8_8_ = uVar6;
        auVar8._0_8_ = plVar3;
        return auVar8;
      }
      func_0x000107c60e78();
      if (uVar6 >> 0x3d == 0) {
        lVar4 = uVar6 << 3;
        func_0x000107c60e20(lVar4);
        auVar9._8_8_ = uVar6;
        auVar9._0_8_ = lVar4;
        return auVar9;
      }
      FUN_104a7757c();
      lVar4 = plVar3[1];
      lVar7 = plVar3[2];
      while (lVar7 != lVar4) {
        plVar3[2] = lVar7 + -8;
        plVar5 = *(long **)(lVar7 + -8);
        *(undefined8 *)(lVar7 + -8) = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        lVar7 = plVar3[2];
      }
      if (*plVar3 != 0) {
        func_0x000107c60e14();
      }
      auVar10._8_8_ = uVar6;
      auVar10._0_8_ = plVar3;
      return auVar10;
    }
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = lVar4;
  return auVar11;
}



/* Entry: 104aba4bc; end: 104aba51f;  */

void FUN_104aba4bc(long param_1)

{
  ulong uStack_28;
  
  func_0x000100748474();
  uStack_28 = 0;
  func_0x0001004c1168(param_1 + 0x80,&uStack_28,0,0);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aba520; end: 104aba553;  */

undefined1  [16] FUN_104aba520(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long alStack_a8 [8];
  long lStack_68;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00010083746c(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  func_0x00010bdac044();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_a8;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0xffffffffffffffe0);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_a8;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104aba554; end: 104aba55b;  */

undefined1  [16]
FUN_104aba554(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104aba55c; end: 104aba5c3;  */

bool FUN_104aba55c(undefined8 param_1)

{
  bool bVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (iRam0000000113815c08 == 0) {
    uStack_14 = 0;
    _setsockopt(param_1,0x29,0x1b,&uStack_14,4);
    bVar1 = (int)param_1 == 0;
  }
  else {
    uStack_18 = 1;
    _setsockopt(param_1,0x29,0x1b,&uStack_18,4);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 104aba5c4; end: 104aba637;  */

void FUN_104aba5c4(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(*param_1 + 0x28);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aba638; end: 104aba65b;  */

void FUN_104aba638(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104aba640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 104aba65c; end: 104aba6e3;  */

void FUN_104aba65c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  _CFReadStreamClose(*(undefined8 *)(param_1 + 0x10));
  _CFWriteStreamClose(*(undefined8 *)(param_1 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104aba360(uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aba6e4; end: 104aba6f7;  */

/* WARNING: Possible PIC construction at 0x0001005a7ae8: Changing call to branch */

void FUN_104aba6e4(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 8;
  func_0x0001005a5e70();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c607f0(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c607f0(*(undefined8 *)(param_1 + 0x18));
  func_0x0001005a5ea4(*(undefined8 *)(param_1 + 0x20),"",0,0);
  if (*(char *)(param_1 + 0xb7) < '\0') {
    param_1 = *(long *)(param_1 + 0xa0);
  }
  else if (*(char *)(param_1 + 0x9f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104aba6f8; end: 104aba7a7;  */

void FUN_104aba6f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x1f) < '\0')) {
    __ZdlPv(param_1[1]);
  }
  uVar1 = *param_2;
  *param_2 = 0x36;
  uVar4 = *param_1;
  if (uVar1 == uVar4) {
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = uVar1;
    puStack_28 = (undefined *)0x36;
    if ((uVar4 & 1) == 0) goto LAB_104aba768;
    func_0x00010084dad0(uVar4);
  }
  uVar1 = *param_1;
LAB_104aba768:
  if (uVar1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar3 = puStack_28;
  puVar2 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar3,puVar2);
  puVar3 = (undefined *)*param_1;
  if (puStack_30 != puVar3) {
    *param_1 = (ulong)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar3 = puStack_30;
  }
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 104aba7a8; end: 104aba86f;  */

void FUN_104aba7a8(undefined8 param_1,ulong *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uStack_30;
  ulong uStack_28;
  
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104abaa50(&uStack_28,&uStack_30,3,0xe);
  if ((char)*(byte *)(param_3 + 0x9f) < '\0') {
    lVar3 = *(long *)(param_3 + 0x88);
    uVar4 = *(ulong *)(param_3 + 0x90);
  }
  else {
    lVar3 = param_3 + 0x88;
    uVar4 = (ulong)*(byte *)(param_3 + 0x9f);
  }
  func_0x00010084caf8(param_1,&uStack_28,4,lVar3,uVar4);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104aba870; end: 104aba877;  */

undefined1  [16]
FUN_104aba870(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104aba878; end: 104aba94f;  */

void FUN_104aba878(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long in_x4;
  long in_x5;
  int *piVar3;
  long lVar4;
  ulong auStack_58 [4];
  ulong *puStack_38;
  
  auStack_58[1] = 0;
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  FUN_104ab5920();
  puStack_38 = auStack_58 + 1;
  func_0x000100482b64(&puStack_38);
  if (in_x4 != 0) {
    lVar4 = 0;
    do {
      auStack_58[0] = *(ulong *)(in_x5 + lVar4 * 8);
      if (auStack_58[0] != 0) {
        if ((auStack_58[0] & 1) != 0) {
          piVar3 = (int *)(auStack_58[0] - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar2) {
              *piVar3 = *piVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_104ab5af0(param_1,auStack_58);
        if ((auStack_58[0] & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != in_x4);
  }
  return;
}



/* Entry: 104aba950; end: 104aba953;  */

/* WARNING: Removing unreachable block (ram,0x000104ab62b8) */
/* WARNING: Removing unreachable block (ram,0x000104ab6558) */

ulong *** FUN_104aba950(ulong ***param_1,ulong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  char *pcVar8;
  ulong ***pppuVar9;
  ulong ***pppuVar10;
  long lVar11;
  ulong uVar12;
  ulong **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  undefined8 **ppuStack_1e8;
  ulong *puStack_1e0;
  byte bStack_1d1;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  byte bStack_171;
  byte bStack_170;
  undefined7 uStack_16f;
  long lStack_168;
  char cStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong *puStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      pcVar8 = "OK";
      func_0x000107c613d0();
      if ((ulong **)0x7ffffffffffffff7 < pcVar8) {
        func_0x000104a6fa5c(param_1);
        lStack_68 = 1;
        pppuVar9 = (ulong ***)0x2947bdebdbc7a448;
        func_0x00010002b140(0x2947bdebdbc7a448,&stack0xffffffffffffffa4,&stack0xffffffffffffffa8);
        return pppuVar9;
      }
      if (pcVar8 < (ulong **)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)pcVar8;
        pppuVar9 = param_1;
        if ((ulong **)pcVar8 == (ulong **)0x0) goto code_r0x00010002b0b0;
      }
      else {
        uVar12 = ((ulong)pcVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)pcVar8 | 7) != 0x17) {
          uVar12 = (ulong)pcVar8 | 7;
        }
        pppuVar9 = (ulong ***)(uVar12 + 1);
        func_0x000107c60e20();
        param_1[1] = (ulong **)pcVar8;
        param_1[2] = (ulong **)(uVar12 + 1 | 0x8000000000000000);
        *param_1 = (ulong **)pppuVar9;
      }
      func_0x000107c610b8(pppuVar9,"OK",pcVar8);
code_r0x00010002b0b0:
      *(char *)((long)pppuVar9 + (long)pcVar8) = '\0';
      return param_1;
    }
  }
  else {
    ppuStack_140 = (ulong **)0x0;
    ppuStack_138 = (ulong **)0x0;
    puStack_130 = (ulong *)0x0;
    func_0x00010ae770f8();
    func_0x00010ae76fa0(&ppuStack_c8);
    ppuStack_90 = (ulong **)puStack_c0;
    ppuStack_98 = ppuStack_c8;
    if (-1 < (long)puStack_b8) {
      ppuStack_90 = (ulong **)((ulong)puStack_b8 >> 0x38);
      ppuStack_98 = (ulong **)&ppuStack_c8;
    }
    func_0x0001004da258(&ppuStack_140,&ppuStack_98);
    uVar12 = *param_2;
    if ((uVar12 & 1) == 0) {
      if ((uVar12 & 3) == 2) {
        ppuStack_c8 = (undefined8 **)&UNK_10e52c0f3;
        ppuVar13 = (ulong **)0x1b;
        goto LAB_104ab6380;
      }
    }
    else {
      bVar2 = *(byte *)(uVar12 + 0x1e);
      if ((char)bVar2 < '\0') {
        if (*(long *)(uVar12 + 0xf) != 0) {
          ppuStack_c8 = *(undefined8 ***)(uVar12 + 7);
          ppuVar13 = *(ulong ***)(uVar12 + 0xf);
          goto LAB_104ab6380;
        }
      }
      else {
        ppuVar13 = (ulong **)(ulong)bVar2;
        if (bVar2 != 0) {
          ppuStack_c8 = (undefined8 **)(uVar12 + 7);
LAB_104ab6380:
          ppuStack_90 = (ulong **)0x1;
          ppuStack_98 = (ulong **)0x10f20818c;
          puStack_c0 = (ulong *)ppuVar13;
          func_0x00010ae8c94c(&ppuStack_140,&ppuStack_98,&ppuStack_c8);
        }
      }
    }
    puStack_158 = (ulong *)0x0;
    puStack_150 = (ulong *)0x0;
    puStack_148 = (ulong *)0x0;
    bStack_170 = 0;
    cStack_160 = '\0';
    ppuStack_98 = (ulong **)&bStack_170;
    ppuStack_90 = &puStack_158;
    func_0x00010ae77004(param_2,&ppuStack_98,FUN_104ab6bd8);
    if (cStack_160 != '\0') {
      if (((bStack_170 & 1) == 0) || (lStack_168 == 0)) {
        uStack_1a0 = CONCAT71(uStack_16f,bStack_170);
        lStack_198 = lStack_168;
      }
      else {
        piVar1 = (int *)(lStack_168 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_1a0 = 1;
        lStack_198 = lStack_168;
        if (1 < CONCAT71(uStack_16f,bStack_170)) {
          func_0x00010ae6ff78(&uStack_1a0,&bStack_170,8);
        }
      }
      FUN_104ab5f94(&ppuStack_188,&uStack_1a0);
      func_0x00010084d204(&uStack_1a0);
      uStack_1b8 = 0;
      puStack_1b0 = (ulong *)0x0;
      puStack_1a8 = (ulong *)0x0;
      func_0x0001000fc044(&uStack_1b8,(long)ppuStack_180 - (long)ppuStack_188 >> 3);
      ppuVar6 = ppuStack_180;
      if (ppuStack_188 != ppuStack_180) {
        pppuVar16 = (undefined8 ***)ppuStack_188;
        do {
          FUN_104ab6230(&ppuStack_c8,pppuVar16);
          if (puStack_1b0 < puStack_1a8) {
            puStack_1b0[2] = (ulong)puStack_b8;
            puStack_1b0[1] = (ulong)puStack_c0;
            *puStack_1b0 = (ulong)ppuStack_c8;
            puStack_1b0 = puStack_1b0 + 3;
          }
          else {
            lVar14 = (long)((long)puStack_1b0 - uStack_1b8) >> 3;
            uVar12 = lVar14 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar12) {
              FUN_104a9439c(&uStack_1b8);
              goto LAB_104ab6848;
            }
            lVar11 = (long)((long)puStack_1a8 - uStack_1b8) >> 3;
            uVar15 = lVar11 * 0x5555555555555556;
            if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
              uVar15 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            ppuStack_78 = &puStack_1a8;
            if (uVar15 == 0) {
              pppuVar9 = (ulong ***)0x0;
            }
            else {
              pppuVar9 = (ulong ***)&puStack_1a8;
              func_0x0001004d69d4();
            }
            pppuVar10 = pppuVar9 + lVar14;
            ppuStack_80 = (ulong **)(pppuVar9 + uVar15 * 3);
            ppuStack_98 = (ulong **)pppuVar9;
            ppuStack_90 = (ulong **)pppuVar10;
            pppuVar10[2] = (ulong **)puStack_b8;
            pppuVar10[1] = (ulong **)puStack_c0;
            *pppuVar10 = ppuStack_c8;
            puStack_c0 = (ulong *)0x0;
            puStack_b8 = (ulong *)0x0;
            ppuStack_c8 = (undefined8 ***)0x0;
            ppuStack_88 = (ulong **)(pppuVar10 + 3);
            func_0x00010004824c(&uStack_1b8,&ppuStack_98);
            puVar5 = puStack_1b0;
            func_0x0001000482e8(&ppuStack_98);
            puStack_1b0 = puVar5;
          }
          pppuVar16 = pppuVar16 + 1;
        } while (pppuVar16 != (undefined8 ***)ppuVar6);
      }
      ppuStack_98 = (ulong **)0x10f237d8a;
      ppuStack_90 = (ulong **)0xa;
      func_0x0001004d6a18(&ppuStack_1e8,uStack_1b8,puStack_1b0,&DAT_10f68f19e,2);
      puStack_c0 = puStack_1e0;
      ppuStack_c8 = ppuStack_1e8;
      if (-1 < (char)bStack_1d1) {
        puStack_c0 = (ulong *)(ulong)bStack_1d1;
        ppuStack_c8 = &ppuStack_1e8;
      }
      ppuStack_f8 = (undefined8 **)&DAT_10f62a9ea;
      ppuStack_f0 = (undefined8 ***)0x1;
      func_0x000100066c24(&puStack_1d0,&ppuStack_98,&ppuStack_c8,&ppuStack_f8);
      if (puStack_150 < puStack_148) {
        puStack_150[2] = (ulong)puStack_1c0;
        puStack_150[1] = (ulong)puStack_1c8;
        *puStack_150 = (ulong)puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        puStack_150 = puStack_150 + 3;
      }
      else {
        lVar14 = (long)puStack_150 - (long)puStack_158 >> 3;
        uVar12 = lVar14 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_104ab6840;
        ppuVar13 = &puStack_148;
        lVar11 = (long)puStack_148 - (long)puStack_158 >> 3;
        uVar15 = lVar11 * 0x5555555555555556;
        if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
          uVar15 = uVar12;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar15 = 0xaaaaaaaaaaaaaaa;
        }
        ppuStack_108 = ppuVar13;
        if (uVar15 == 0) {
          ppuStack_128 = (ulong **)0x0;
        }
        else {
          func_0x0001004d69d4();
          ppuStack_128 = ppuVar13;
        }
        ppuVar13 = ppuStack_128 + lVar14;
        ppuStack_110 = ppuStack_128 + uVar15 * 3;
        ppuStack_120 = ppuVar13;
        ppuVar13[2] = puStack_1c0;
        ppuVar13[1] = puStack_1c8;
        *ppuVar13 = puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        ppuStack_118 = ppuVar13 + 3;
        func_0x00010004824c(&puStack_158,&ppuStack_128);
        puVar5 = puStack_150;
        func_0x0001000482e8(&ppuStack_128);
        puStack_150 = puVar5;
        if ((long)puStack_1c0 < 0) {
          __ZdlPv(puStack_1d0);
        }
      }
      if ((char)bStack_1d1 < '\0') {
        __ZdlPv(ppuStack_1e8);
      }
      ppuStack_98 = (ulong **)&uStack_1b8;
      func_0x0001004d6bcc(&ppuStack_98);
      ppuStack_98 = (ulong **)&ppuStack_188;
      func_0x000100482b64(&ppuStack_98);
    }
    if (puStack_158 == puStack_150) {
      if ((long)puStack_130 < 0) {
        func_0x000100033dac(param_1,ppuStack_140,ppuStack_138);
      }
      else {
        param_1[1] = ppuStack_138;
        *param_1 = ppuStack_140;
        param_1[2] = (ulong **)puStack_130;
      }
    }
    else {
      ppuStack_90 = ppuStack_138;
      ppuStack_98 = ppuStack_140;
      if (-1 < (long)puStack_130) {
        ppuStack_90 = (ulong **)((ulong)puStack_130 >> 0x38);
        ppuStack_98 = (ulong **)&ppuStack_140;
      }
      ppuStack_c8 = (undefined8 **)&UNK_10f48d5df;
      puStack_c0 = (ulong *)0x2;
      func_0x0001004d6a18(&ppuStack_188,puStack_158,puStack_150,&DAT_10f68f19e,2);
      ppuStack_f0 = ppuStack_180;
      ppuStack_f8 = ppuStack_188;
      if (-1 < (char)bStack_171) {
        ppuStack_f0 = (undefined8 ***)(ulong)bStack_171;
        ppuStack_f8 = &ppuStack_188;
      }
      ppuStack_128 = (undefined8 **)&DAT_10f2da10d;
      ppuStack_120 = (ulong **)0x1;
      func_0x00010ae8c6d8(param_1,&ppuStack_98,&ppuStack_c8,&ppuStack_f8,&ppuStack_128);
      if ((char)bStack_171 < '\0') {
        __ZdlPv(ppuStack_188);
      }
    }
    if (cStack_160 != '\0') {
      func_0x00010084d204(&bStack_170);
    }
    ppuStack_98 = &puStack_158;
    pppuVar9 = &ppuStack_98;
    func_0x0001004d6bcc(pppuVar9);
    if ((long)puStack_130 < 0) {
      pppuVar9 = (ulong ***)ppuStack_140;
      __ZdlPv(ppuStack_140);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return pppuVar9;
    }
  }
  ___stack_chk_fail();
LAB_104ab6840:
  FUN_104a9439c(&puStack_158);
LAB_104ab6848:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104ab684c);
  (*pcVar7)();
}



/* Entry: 104aba954; end: 104abaa4f;  */

void FUN_104aba954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  uVar1 = param_3;
  _strerror(param_3);
  uVar2 = uVar1;
  _strlen();
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  FUN_104ab5920(param_1,2,uVar1,uVar2,param_2,&uStack_60);
  puStack_48 = (undefined1 *)&uStack_60;
  func_0x000100482b64(&puStack_48);
  func_0x00010084cc54(param_1,0,(long)(int)param_3);
  _strerror(param_3);
  uVar1 = param_3;
  _strlen();
  func_0x00010084d274(param_1,2,param_3,uVar1);
  uVar1 = param_4;
  _strlen(param_4);
  func_0x00010084d274(param_1,3,param_4,uVar1);
  return;
}



/* Entry: 104abaa50; end: 104abab1b;  */

void FUN_104abaa50(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uStack_38;
  
  if (*param_2 != 0) goto LAB_104abaad0;
  func_0x00010084cae4(&uStack_38,"",0);
  uVar1 = *param_2;
  if (uStack_38 == uVar1) {
LAB_104abaab8:
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_2 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
      uVar1 = uStack_38;
      goto LAB_104abaab8;
    }
  }
  func_0x00010084cc54(param_2,3,0);
LAB_104abaad0:
  func_0x00010084cc54(param_2,param_3,param_4);
  *param_1 = *param_2;
  *param_2 = 0x36;
  return;
}



/* Entry: 104abab1c; end: 104ababbb;  */

undefined8
FUN_104abab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_104ab6230(auStack_48,param_2);
  func_0x0001004686cc(param_3,param_4,2,&UNK_10f3b24d8);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return 0;
}



/* Entry: 104ababbc; end: 104abac73;  */

void FUN_104ababbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar4 = *param_1;
  if (((*param_4 & 1) == 0) || (uStack_38 = param_4[1], uStack_38 == 0)) {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
  }
  else {
    piVar1 = (int *)(uStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_40 = 1;
    if (1 < *param_4) {
      func_0x00010ae6ff78(&uStack_40,param_4,8);
    }
  }
  func_0x00010084ced4(uVar4,param_2,param_3,&uStack_40);
  func_0x00010084d204(&uStack_40);
  return;
}



/* Entry: 104abac74; end: 104abae0b;  */

void FUN_104abac74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 **param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a1;
  undefined8 **ppuStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  undefined1 auStack_288 [256];
  undefined1 auStack_188 [256];
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_4;
  _CFErrorGetDomain(param_4);
  uVar4 = param_4;
  _CFErrorGetCode();
  _CFErrorCopyDescription(param_4);
  _CFStringGetCString(uVar3,auStack_188,0x100,0x8000100);
  _CFStringGetCString(param_4,auStack_288,0x100,0x8000100);
  puStack_80 = &UNK_1005616c4;
  puStack_78 = auStack_188;
  puStack_70 = &UNK_1005616c4;
  puStack_60 = &UNK_10ae73d0c;
  puStack_50 = &UNK_1005616c4;
  puStack_88 = param_5;
  uStack_68 = uVar4;
  puStack_58 = auStack_288;
  func_0x0001004d4da0(&ppuStack_2a0,"%s (error domain:%s, code:%ld, description:%s)",0x2e,
                      &puStack_88,4);
  _CFRelease(param_4);
  pppuVar5 = (undefined8 ***)ppuStack_2a0;
  if (-1 < (char)bStack_289) {
    uStack_298 = (ulong)bStack_289;
    pppuVar5 = &ppuStack_2a0;
  }
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c0 = 0;
  FUN_104ab5920(param_1,2,pppuVar5,uStack_298,&uStack_2a1,&uStack_2c0);
  pppuVar5 = (undefined8 ***)&puStack_88;
  puStack_88 = &uStack_2c0;
  func_0x000100482b64();
  if ((char)bStack_289 < '\0') {
    pppuVar5 = (undefined8 ***)ppuStack_2a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puStack_88 = &uStack_2c0;
    func_0x000100482b64(&puStack_88);
    if ((char)bStack_289 < '\0') {
      __ZdlPv(ppuStack_2a0);
    }
    __Unwind_Resume(pppuVar5);
    lVar1 = lRam00000001136a1f68 + 0x60;
    func_0x000100460448(lVar1);
    lVar2 = lRam00000001136a1f68;
    *(undefined1 *)(lRam00000001136a1f68 + 0xb0) = 1;
    _CFRunLoopStop(*(undefined8 *)(lVar2 + 0xa8));
    func_0x000100466b80(lVar1);
    FUN_104ab3234(lRam00000001136a1f70);
    if (lRam00000001136a1f70 != 0) {
      func_0x0001004629b0();
      __ZdlPv();
    }
    lVar1 = lRam00000001136a1f68;
    if (lRam00000001136a1f68 == 0) {
      return;
    }
    func_0x0001005a5f48(lRam00000001136a1f68 + 0x60);
    func_0x000100832c44(lVar1 + 0x30);
    func_0x000100832c44(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104abae0c; end: 104abaec7;  */

void FUN_104abae0c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam00000001136a1f68 + 0x60;
  func_0x000100460448(lVar1);
  lVar2 = lRam00000001136a1f68;
  *(undefined1 *)(lRam00000001136a1f68 + 0xb0) = 1;
  _CFRunLoopStop(*(undefined8 *)(lVar2 + 0xa8));
  func_0x000100466b80(lVar1);
  FUN_104ab3234(lRam00000001136a1f70);
  if (lRam00000001136a1f70 != 0) {
    func_0x0001004629b0();
    __ZdlPv();
  }
  lVar1 = lRam00000001136a1f68;
  if (lRam00000001136a1f68 != 0) {
    func_0x0001005a5f48(lRam00000001136a1f68 + 0x60);
    func_0x000100832c44(lVar1 + 0x30);
    func_0x000100832c44(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104abaec8; end: 104abaf73;  */

void FUN_104abaec8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uStack_50;
  undefined1 uStack_41;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != param_1 + 0x40; lVar1 = *(long *)(lVar1 + 8)) {
    *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x30) = 1;
    func_0x000100466b64();
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    uStack_50 = 0;
    func_0x0001004bd7e8(&uStack_41,param_2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = param_2;
  }
  return;
}



/* Entry: 104abaf74; end: 104abafa3;  */

void FUN_104abaf74(long param_1)

{
  FUN_104abafe4(param_1 + 0x40);
  func_0x0001005a5f48(param_1);
  return;
}



/* Entry: 104abafa4; end: 104abafaf;  */

void FUN_104abafa4(void)

{
  return;
}



/* Entry: 104abafb0; end: 104abafe3;  */

undefined8 * FUN_104abafb0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    func_0x000100466b80(*param_1);
  }
  return param_1;
}



/* Entry: 104abafe4; end: 104abb043;  */

void FUN_104abafe4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    lVar2 = *param_1;
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 104abb044; end: 104abb04b;  */

undefined8 FUN_104abb044(void)

{
  return 0;
}



/* Entry: 104abb04c; end: 104abb1bf;  */

undefined4 * FUN_104abb04c(long param_1,long param_2)

{
  uint **ppuVar1;
  undefined4 *puVar2;
  long lVar3;
  uint *puVar4;
  uint *apuStack_e0 [2];
  char cStack_c9;
  undefined1 *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [32];
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_68;
  long lStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined4 *)0xe0;
  func_0x000100460200();
  func_0x000100460318(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = 1;
  *(undefined8 *)(puVar2 + 0x2c) = 0;
  *(undefined8 *)(puVar2 + 0x2e) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x2a) = 0;
  *puVar2 = (int)param_1;
  *(undefined4 **)(puVar2 + 0x1c) = puVar2 + 0x1c;
  *(undefined4 **)(puVar2 + 0x1e) = puVar2 + 0x1c;
  *(undefined8 *)(puVar2 + 0x1a) = 0;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  puVar2[0x16] = 0;
  *(undefined8 *)(puVar2 + 0x26) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    _strlen();
  }
  pcStack_98 = " fd=";
  uStack_90 = 4;
  lStack_68 = param_2;
  lStack_60 = lVar3;
  func_0x00010ae8b9d8(param_1,auStack_b8);
  lStack_c0 = param_1 - (long)auStack_b8;
  puStack_c8 = auStack_b8;
  func_0x000100066c24(apuStack_e0,&lStack_68,&pcStack_98,&puStack_c8);
  puVar4 = puVar2 + 0x30;
  ppuVar1 = (uint **)apuStack_e0[0];
  if (-1 < cStack_c9) {
    ppuVar1 = apuStack_e0;
  }
  FUN_104abe208(puVar4,ppuVar1);
  if (cRam00000001136a1f78 == '\x01') {
    puVar4 = (uint *)0x20;
    func_0x000100460200();
    *(uint **)(puVar2 + 0x36) = puVar4;
    *(undefined4 **)puVar4 = puVar2;
    puVar4[2] = 0;
    puVar4[3] = 0;
    FUN_104abc754();
  }
  if (cStack_c9 < '\0') {
    puVar4 = apuStack_e0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (cStack_c9 < '\0') {
    __ZdlPv(apuStack_e0[0]);
  }
  __Unwind_Resume();
  if ((puVar4[0x16] == 0) && (puVar4[0x15] == 0)) {
    return (undefined4 *)(ulong)*puVar4;
  }
  return (undefined4 *)0xffffffff;
}



/* Entry: 104abb1c0; end: 104abb1df;  */

undefined4 FUN_104abb1c0(undefined4 *param_1)

{
  if ((param_1[0x16] == 0) && (param_1[0x15] == 0)) {
    return *param_1;
  }
  return 0xffffffff;
}



/* Entry: 104abb1e0; end: 104abb307;  */

void FUN_104abb1e0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  *(undefined8 *)(param_1 + 0x2e) = param_2;
  param_1[0x16] = (uint)(param_3 != (undefined4 *)0x0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *param_1;
    param_1[0x16] = 1;
  }
  func_0x000100460448(param_1 + 4);
  FUN_104abc79c(param_1,1);
  lVar1 = *(long *)(param_1 + 0x26);
  if (((lVar1 == 0) && (*(long *)(param_1 + 0x28) == 0)) &&
     (*(undefined8 **)(param_1 + 0x1c) == (undefined8 *)(param_1 + 0x1c))) {
    FUN_104abc7d0(param_1);
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x1c);
    puVar2 = (undefined8 *)*puVar3;
    if (puVar2 != puVar3) {
      do {
        FUN_104abc8bc(&uStack_38,puVar2);
        if ((uStack_38 & 1) != 0) {
          func_0x00010084dad0();
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != puVar3);
      lVar1 = *(long *)(param_1 + 0x26);
    }
    if (lVar1 != 0) {
      FUN_104abc8bc(&uStack_40);
      if ((uStack_40 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x26))
       ) {
      FUN_104abc8bc(&uStack_48);
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  func_0x000100466b80(param_1 + 4);
  FUN_104abc844(param_1);
  return;
}



/* Entry: 104abb308; end: 104abb43f;  */

void FUN_104abb308(undefined4 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar3 = param_1 + 4;
  func_0x000100460448(puVar3);
  if (param_1[0x14] == 0) {
    param_1[0x14] = 1;
    uVar4 = *(ulong *)(param_1 + 0x1a);
    uVar5 = *param_2;
    if (uVar5 != uVar4) {
      if ((uVar5 & 1) != 0) {
        piVar6 = (int *)(uVar5 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar5 = *param_2;
      }
      *(ulong *)(param_1 + 0x1a) = uVar5;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    _shutdown(*param_1,2);
    FUN_104abce90(param_1,param_1 + 0x2a);
    FUN_104abce90(param_1,param_1 + 0x2c);
  }
  func_0x000107c61268();
  if ((int)puVar3 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abb440; end: 104abb497;  */

void FUN_104abb440(undefined8 param_1,undefined8 param_2)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = 4;
  func_0x0001004bd7e8(&uStack_21,param_2,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abb498; end: 104abb507;  */

void FUN_104abb498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000100460448(lVar1);
  FUN_104abce90(param_1,param_1 + 0xa8);
  func_0x000107c61268();
  if ((int)lVar1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abb508; end: 104abb50b;  */

void FUN_104abb508(void)

{
  return;
}



/* Entry: 104abb50c; end: 104abb58f;  */

bool FUN_104abb50c(long param_1)

{
  int iVar1;
  
  func_0x000100460448(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x50);
  func_0x000100466b80(param_1 + 0x10);
  return iVar1 != 0;
}



/* Entry: 104abb590; end: 104abb61b;  */

/* WARNING: Removing unreachable block (ram,0x000104abcbbc) */

void FUN_104abb590(undefined **param_1,undefined ***param_2,ulong param_3)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  bool bVar12;
  int extraout_w8;
  int *piVar13;
  undefined8 *extraout_x8;
  undefined *extraout_x8_00;
  undefined *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x9;
  undefined4 *unaff_x19;
  undefined2 uVar17;
  undefined **ppuVar18;
  ulong unaff_x22;
  undefined2 *puVar19;
  ushort *puVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined **ppuVar23;
  ulong uStack_13b8;
  ulong uStack_13b0;
  ulong uStack_13a8;
  ulong uStack_13a0;
  ulong uStack_1398;
  ulong uStack_1390;
  undefined **ppuStack_1388;
  undefined **ppuStack_1380;
  undefined4 *puStack_1378;
  undefined1 ***pppuStack_1370;
  code *pcStack_1368;
  char *pcStack_1360;
  undefined ***pppuStack_1350;
  undefined8 *puStack_1348;
  uint uStack_133c;
  undefined ***pppuStack_1338;
  ulong uStack_1330;
  undefined4 uStack_1324;
  undefined **ppuStack_1320;
  undefined **ppuStack_1318;
  undefined **ppuStack_1310;
  undefined **ppuStack_1308;
  undefined **ppuStack_1300;
  undefined **ppuStack_12f8;
  undefined **ppuStack_12f0;
  undefined4 *puStack_12e8;
  int iStack_12e0;
  int iStack_12dc;
  undefined *puStack_12d8;
  undefined **ppuStack_12d0;
  undefined **ppuStack_12c8;
  undefined *apuStack_12c0 [480];
  undefined *apuStack_3c0 [96];
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined **in_stack_ffffffffffffff80;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    param_1[0xe] = (undefined *)param_2;
    FUN_104abc91c(&uStack_28,param_1,1,0);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((*(int *)((long)param_1 + 100) == 0) && ((undefined **)param_1[10] == param_1 + 8)) &&
       (*(int *)(param_1 + 0xf) == 0)) {
      *(undefined4 *)((long)param_1 + 100) = 1;
      FUN_104abd198(param_1);
    }
    return;
  }
  func_0x00010bdac1b0();
  FUN_104bd46a0();
  pcStack_38 = FUN_104abb61c;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((undefined **)param_1[10] == param_1 + 8) {
    puVar7 = param_1[0x13];
    while (puVar7 != (undefined *)0x0) {
      puVar14 = *(undefined **)(puVar7 + 8);
      FUN_104abce08(*(undefined8 *)(puVar7 + 0x10));
      func_0x000104ac8cd4(param_1[0x13]);
      func_0x000100460314(param_1[0x13]);
      param_1[0x13] = puVar14;
      puVar7 = puVar14;
    }
    func_0x000100460314(param_1[0x12]);
    func_0x000107c61258();
    if ((int)param_1 == 0) {
      return;
    }
    func_0x000107c2c130();
    func_0x000100460448(param_1 + 2);
    if (*param_2 == (undefined **)0x0) {
      if (*(char *)(param_1 + 10) == '\0') {
        puVar7 = param_1[0xb];
        if (puVar7 == (undefined *)0x0) {
          pcStack_c0 = "self->endpoint_to_destroy_ != nullptr";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                              ,0xc1,2,"assertion failed: %s");
          func_0x000107c60ebc();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6158);
          (*pcVar4)();
        }
        *(undefined **)param_1[0x11] = puVar7;
        param_1[0xb] = (undefined *)0x0;
        if (*(char *)(param_1 + 0x12) != '\0') {
          func_0x0001005a6208(puVar7,param_1[0xe]);
        }
        uStack_b8 = 0;
        func_0x0001005a6218(param_1,&uStack_b8);
        goto code_r0x0001005a60e0;
      }
      FUN_104ab5920(&stack0xffffffffffffff80,2,"tcp handshaker shutdown",0x17,
                    &stack0xffffffffffffff7f,&stack0xffffffffffffff60);
      ppuVar6 = *param_2;
      if (in_stack_ffffffffffffff80 == ppuVar6) {
code_r0x0001005a5fec:
        if (((ulong)ppuVar6 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        *param_2 = in_stack_ffffffffffffff80;
        if (((ulong)ppuVar6 & 1) != 0) {
          func_0x00010084dad0();
          ppuVar6 = (undefined **)0x0;
          goto code_r0x0001005a5fec;
        }
      }
      func_0x000100482b64(&stack0xffffffffffffff88);
    }
    puVar7 = param_1[0xb];
    if (puVar7 != (undefined *)0x0) {
      ppuVar6 = *param_2;
      if (((ulong)ppuVar6 & 1) != 0) {
        piVar13 = (int *)((long)ppuVar6 + -1);
        do {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar12) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104aba5c4(puVar7,&stack0xffffffffffffff58);
      if (((ulong)ppuVar6 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (*(char *)(param_1 + 10) == '\0') {
      puVar7 = param_1[0x11];
      param_1[0xc] = *(undefined **)(puVar7 + 0x10);
      *(undefined8 *)(puVar7 + 0x10) = 0;
      func_0x00010048650c(*(undefined8 *)(puVar7 + 8));
      *(undefined8 *)(param_1[0x11] + 8) = 0;
      *(undefined1 *)(param_1 + 10) = 1;
      ppuVar6 = *param_2;
      if (((ulong)ppuVar6 & 1) != 0) {
        piVar13 = (int *)((long)ppuVar6 + -1);
        do {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar12) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001005a6218(param_1,&stack0xffffffffffffff50);
      if (((ulong)ppuVar6 & 1) != 0) {
        func_0x00010084dad0(ppuVar6);
      }
    }
code_r0x0001005a60e0:
    func_0x000100466b80(param_1 + 2);
    ppuVar6 = param_1 + 1;
    do {
      puVar7 = *ppuVar6;
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar12) {
        *ppuVar6 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 + -1 == (undefined *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    return;
  }
  func_0x00010bdac1e4();
  pcStack_58 = FUN_104abb684;
  pcStack_c0 = *(char **)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined ***)0x0) {
    *param_2 = (undefined **)&puStack_12e8;
  }
  *extraout_x8 = 0;
  iStack_12e0 = 0;
  puStack_12d8 = (undefined *)0x0;
  ppuStack_12d0 = (undefined **)0x0;
  puStack_12e8 = (undefined4 *)param_1[0x13];
  pppuStack_1350 = param_2;
  puStack_1348 = extraout_x8;
  ppuStack_60 = &puStack_40;
  if (puStack_12e8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x18;
    func_0x000100460200();
    puStack_12e8 = puVar8;
    func_0x000104ac8ca4(&ppuStack_12c8);
    ppuVar6 = ppuStack_12c8;
    puVar8 = puStack_12e8;
    if (ppuStack_12c8 != (undefined **)0x0) {
      *puStack_1348 = ppuStack_12c8;
    }
    if (cRam00000001136a1f78 == '\x01') {
      puVar16 = (undefined8 *)0x20;
      func_0x000100460200();
      *(undefined8 **)(puVar8 + 4) = puVar16;
      *puVar16 = 0;
      puVar16[1] = puVar8;
      FUN_104abc754();
      unaff_x19 = puVar8;
    }
    if (ppuVar6 == (undefined **)0x0) goto LAB_104abb6f8;
    ppuStack_12f0 = ppuVar6;
    if (((ulong)ppuVar6 & 1) != 0) {
      piVar13 = (int *)((long)ppuVar6 + -1);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_2 = &ppuStack_12c8;
    ppuStack_12c8 = ppuVar6;
    FUN_104abab1c("pollset_work",param_2,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                  ,0x3ae);
    ppuVar18 = ppuStack_12c8;
    if (((ulong)ppuStack_12c8 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)ppuVar6 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar18 = ppuVar6;
    }
  }
  else {
    param_1[0x13] = *(undefined **)(puStack_12e8 + 2);
LAB_104abb6f8:
    iStack_12dc = 0;
    ppuVar6 = &PTR___tlv_bootstrap_11340d930;
    if (*(int *)(param_1 + 0xc) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340d930)();
      ppuVar21 = (undefined **)0x0;
      ppuVar18 = (undefined **)0x0;
      bVar12 = false;
      unaff_x22 = 0;
      unaff_x19 = (undefined4 *)0x0;
      *ppuVar6 = (undefined *)param_1;
      uVar11 = param_3;
      goto LAB_104abb87c;
    }
    ppuVar18 = (undefined **)0x0;
    unaff_x19 = (undefined4 *)0x0;
    unaff_x22 = 0;
    ppuVar21 = (undefined **)0x0;
    while( true ) {
      bVar12 = true;
      uVar11 = param_3;
      if ((iStack_12e0 != 0) && (ppuVar18 == (undefined **)0x0)) {
        bVar12 = false;
        iStack_12e0 = 0;
        *(undefined4 *)(param_1 + 0xd) = 0;
        uVar11 = 0;
        if ((int)unaff_x22 == 0 && iStack_12dc == 0) {
          uVar11 = param_3;
        }
      }
LAB_104abb87c:
      param_3 = uVar11;
      if (bVar12) break;
      if (*(int *)(param_1 + 0xd) == 0) {
LAB_104abb8a4:
        if ((int)unaff_x19 == 0) {
          ppuStack_12d0 = param_1 + 8;
          puStack_12d8 = param_1[10];
          *(undefined4 ***)(puStack_12d8 + 0x18) = &puStack_12e8;
          param_1[10] = (undefined *)&puStack_12e8;
          ppuVar6 = &PTR___tlv_bootstrap_11340d918;
          (*(code *)PTR___tlv_bootstrap_11340d918)();
          *ppuVar6 = extraout_x8_00;
        }
        uStack_133c = (uint)unaff_x22;
        if (param_3 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0xffffffff;
          if (param_3 != 0x7fffffffffffffff) {
            func_0x000100460dc4();
            puVar7 = *ppuVar6;
            func_0x0001004671a4();
            if (puVar7 == (undefined *)0x8000000000000001) {
LAB_104abb908:
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = 0;
              if ((param_3 != 0x8000000000000000) && (puVar7 != (undefined *)0x8000000000000000)) {
                if ((long)param_3 < 1) {
                  uVar11 = 0;
                  if (-(long)puVar7 < (long)(-0x8000000000000000 - param_3)) goto LAB_104abb914;
                }
                else if ((long)(param_3 ^ 0x7fffffffffffffff) < -(long)puVar7) goto LAB_104abb908;
                uVar3 = param_3 - (long)puVar7;
                uVar11 = 0;
                if ((-1 < (long)uVar3) && (uVar11 = uVar3, uVar3 >> 0x1f != 0)) goto LAB_104abb908;
              }
            }
          }
        }
LAB_104abb914:
        puVar14 = param_1[0x10];
        puVar7 = puVar14 + 2;
        ppuVar6 = apuStack_3c0;
        ppuVar21 = apuStack_12c0;
        if ((undefined *)0x60 < puVar7) {
          ppuVar6 = (undefined **)((long)puVar7 * 0x30);
          func_0x000100460200();
          ppuVar21 = ppuVar6 + (long)puVar7;
          puVar14 = param_1[0x10];
        }
        puVar7 = (undefined *)0x0;
        param_2 = (undefined ***)0x1;
        *(undefined4 *)ppuVar6 = *puStack_12e8;
        *(undefined4 *)((long)ppuVar6 + 4) = 1;
        if (puVar14 != (undefined *)0x0) {
          puVar7 = (undefined *)0x0;
          puVar14 = (undefined *)0x0;
          do {
            lVar9 = *(long *)(param_1[0x12] + (long)puVar14 * 8);
            if (((*(ulong *)(*(long *)(param_1[0x12] + (long)puVar14 * 8) + 8) & 1) == 0) ||
               (*(long *)(lVar9 + 0x60) == 1)) {
              FUN_104abc844();
            }
            else {
              *(long *)(param_1[0x12] + (long)puVar7 * 8) = lVar9;
              puVar10 = *(undefined **)(param_1[0x12] + (long)puVar14 * 8);
              ppuVar21[(long)param_2 * 5 + 4] = puVar10;
              FUN_104abc79c(puVar10,2);
              puVar7 = puVar7 + 1;
              *(undefined4 *)(ppuVar6 + (long)param_2) =
                   **(undefined4 **)(param_1[0x12] + (long)puVar14 * 8);
              *(undefined2 *)((long)(ppuVar6 + (long)param_2) + 6) = 0;
              param_2 = (undefined ***)(ulong)((int)param_2 + 1);
            }
            puVar14 = puVar14 + 1;
          } while (puVar14 < param_1[0x10]);
        }
        uStack_1324 = (undefined4)uVar11;
        param_1[0x10] = puVar7;
        func_0x000100466b80(param_1);
        uVar22 = (uint)param_2;
        pppuStack_1338 = param_2;
        uStack_1330 = param_3;
        ppuStack_1320 = ppuVar21;
        if (1 < uVar22) {
          lVar9 = (long)param_2 + -1;
          puVar19 = (undefined2 *)((long)ppuVar6 + 0xc);
          do {
            ppuVar18 = ppuVar21 + 5;
            puVar14 = ppuVar21[9];
            FUN_104abc79c(puVar14,2);
            puVar7 = puVar14 + 0x10;
            func_0x000100460448(puVar7);
            if (*(int *)(puVar14 + 0x50) == 0) {
              if (*(long *)(puVar14 + 0x98) == 0 && *(long *)(puVar14 + 0xa8) != 1) {
                plVar15 = (long *)(puVar14 + 0xa0);
                *(undefined ***)(puVar14 + 0x98) = ppuVar18;
                if (*plVar15 == 0 && *(long *)(puVar14 + 0xb0) != 1) {
                  uVar17 = 5;
                  goto LAB_104abbae8;
                }
                uVar17 = 1;
              }
              else {
                plVar15 = (long *)(puVar14 + 0xa0);
                if (*plVar15 == 0 && *(long *)(puVar14 + 0xb0) != 1) {
                  uVar17 = 4;
                }
                else {
                  uVar17 = 0;
                  *ppuVar18 = puVar14 + 0x70;
                  puVar16 = *(undefined8 **)(puVar14 + 0x78);
                  ppuVar21[6] = (undefined *)puVar16;
                  *puVar16 = ppuVar18;
                  plVar15 = (long *)(*ppuVar18 + 8);
                }
LAB_104abbae8:
                *plVar15 = (long)ppuVar18;
              }
              ppuVar21[7] = (undefined *)param_1;
              ppuVar21[8] = (undefined *)&puStack_12e8;
              ppuVar21[9] = puVar14;
              func_0x000100466b80(puVar7);
            }
            else {
              ppuVar21[7] = (undefined *)0x0;
              ppuVar21[8] = (undefined *)0x0;
              ppuVar21[9] = (undefined *)0x0;
              func_0x000100466b80(puVar7);
              FUN_104abc844(puVar14);
              uVar17 = 0;
            }
            *puVar19 = uVar17;
            FUN_104abc844(puVar14);
            puVar19 = puVar19 + 4;
            lVar9 = lVar9 + -1;
            ppuVar21 = ppuVar18;
          } while (lVar9 != 0);
        }
        ppuVar18 = ppuVar6;
        (*(code *)PTR__poll_1130a60c0)(ppuVar6,param_2,uStack_1324);
        ppuVar21 = ppuStack_1320;
        param_3 = uStack_1330;
        func_0x000100460dc4(ppuVar18);
        (*ppuVar18)[0x34] = 0;
        if (extraout_w8 < 0) {
          ___error();
          if (*(int *)ppuVar18 != 4) {
            ___error();
            FUN_104aba954(&ppuStack_1300,&ppuStack_12c8,*(undefined4 *)ppuVar18,"poll");
            ppuVar18 = ppuStack_1300;
            if (ppuStack_1300 == (undefined **)0x0) {
              pcStack_1360 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x104abbf08);
              (*pcVar4)();
            }
            ppuStack_1300 = (undefined **)0x36;
            ppuStack_12f8 = ppuVar18;
            param_2 = &ppuStack_12f8;
            FUN_104abd220(puStack_1348);
            if (((ulong)ppuVar18 & 1) != 0) {
              func_0x00010084dad0(ppuVar18);
            }
            ppuVar18 = ppuStack_1300;
            if (((ulong)ppuStack_1300 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_1338 + -1;
            do {
              ppuVar23 = ppuVar21 + 5;
              param_2 = (undefined ***)(ulong)(ppuVar21[9] != (undefined *)0x0);
              ppuVar18 = ppuVar23;
              FUN_104abd3bc(ppuVar23,param_2,param_2);
              lVar9 = lVar9 + -1;
              ppuVar21 = ppuVar23;
            } while (lVar9 != 0);
          }
        }
        else if (extraout_w8 == 0) {
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_1338 + -1;
            do {
              ppuVar21 = ppuVar21 + 5;
              param_2 = (undefined ***)0x0;
              ppuVar18 = ppuVar21;
              FUN_104abd3bc(ppuVar21,0,0);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          if (((ulong)*ppuVar6 & 0x19000000000000) != 0) {
            func_0x000104ac8cb4(&ppuStack_1308,puStack_12e8);
            param_2 = &ppuStack_1308;
            FUN_104abd220(puStack_1348);
            ppuVar18 = ppuStack_1308;
            if (((ulong)ppuStack_1308 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_1338 + -1;
            puVar20 = (ushort *)((long)ppuVar6 + 0xe);
            do {
              ppuVar23 = ppuVar21 + 5;
              if (ppuVar21[9] == (undefined *)0x0) {
                param_2 = (undefined ***)0x0;
                uVar22 = 0;
              }
              else {
                uVar1 = *puVar20;
                if ((uVar1 >> 4 & 1) != 0) {
                  *(undefined8 *)(ppuVar21[9] + 0x60) = 1;
                  uVar1 = *puVar20;
                }
                param_2 = (undefined ***)(ulong)(uVar1 & 0x19);
                uVar22 = uVar1 & 0x1c;
              }
              ppuVar18 = ppuVar23;
              FUN_104abd3bc(ppuVar23,param_2,uVar22);
              puVar20 = puVar20 + 4;
              lVar9 = lVar9 + -1;
              ppuVar21 = ppuVar23;
            } while (lVar9 != 0);
          }
        }
        if (ppuVar6 != apuStack_3c0) {
          func_0x000100460314();
          ppuVar18 = ppuVar6;
        }
        func_0x000100460dc4();
        uVar5 = (uint)*ppuVar18;
        func_0x000100467970();
        uVar22 = uStack_133c;
        ppuVar6 = param_1;
        func_0x000100460448();
        unaff_x22 = (ulong)(uVar22 | uVar5);
        ppuVar18 = (undefined **)*puStack_1348;
        unaff_x19 = (undefined4 *)0x1;
        ppuVar21 = ppuVar18;
      }
      else {
        func_0x000100460dc4();
        ppuVar6 = (undefined **)*ppuVar6;
        func_0x0001004671a4();
        if ((long)param_3 <= (long)ppuVar6) goto LAB_104abb8a4;
        *(undefined4 *)(param_1 + 0xd) = 0;
      }
    }
    ppuVar18 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    *ppuVar18 = (undefined *)0x0;
    if ((int)unaff_x19 != 0) {
      ppuStack_12d0[2] = puStack_12d8;
      *(undefined ***)(puStack_12d8 + 0x18) = ppuStack_12d0;
      ppuVar18 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      *ppuVar18 = (undefined *)0x0;
    }
    *(undefined **)(puStack_12e8 + 2) = param_1[0x13];
    param_1[0x13] = (undefined *)puStack_12e8;
    if (*(int *)(param_1 + 0xc) != 0) {
      if ((undefined **)param_1[10] == param_1 + 8) {
        if ((*(int *)((long)param_1 + 100) == 0) && (*(int *)(param_1 + 0xf) == 0)) {
          *(undefined4 *)((long)param_1 + 100) = 1;
          func_0x000100466b80(param_1);
          ppuVar6 = param_1;
          FUN_104abd198();
          func_0x000100460dc4();
          func_0x000100467970(*ppuVar6);
          ppuVar18 = param_1;
          func_0x000100460448();
        }
      }
      else {
        param_2 = (undefined ***)0x0;
        FUN_104abc91c(&ppuStack_1310,param_1,0,0);
        ppuVar18 = ppuStack_1310;
        if (((ulong)ppuStack_1310 & 1) != 0) {
          func_0x00010084dad0();
          ppuVar18 = ppuStack_1310;
        }
      }
    }
    if (pppuStack_1350 != (undefined ***)0x0) {
      *pppuStack_1350 = (undefined **)0x0;
    }
    ppuStack_1318 = ppuVar21;
    if (((ulong)ppuVar21 & 1) == 0) {
      if (ppuVar21 == (undefined **)0x0) goto LAB_104abb824;
    }
    else {
      piVar13 = (int *)((long)ppuVar21 + -1);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_2 = &ppuStack_12c8;
    ppuStack_12c8 = ppuVar21;
    FUN_104abab1c("pollset_work",param_2,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                  ,0x471);
    ppuVar18 = ppuStack_12c8;
    if (((ulong)ppuStack_12c8 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)ppuVar21 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar18 = ppuVar21;
    }
  }
LAB_104abb824:
  if ((char *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_c0) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(puStack_1348);
  }
  ppuVar6 = ppuVar18;
  __Unwind_Resume();
  uVar11 = 0;
  pcStack_1368 = FUN_104abbf8c;
  *extraout_x8_01 = 0;
  uStack_1390 = unaff_x22;
  ppuStack_1388 = param_1;
  ppuStack_1380 = ppuVar18;
  puStack_1378 = unaff_x19;
  pppuStack_1370 = &ppuStack_60;
  if (param_2 == (undefined ***)0x0) {
    ppuVar21 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if ((undefined **)*ppuVar21 == ppuVar6) goto LAB_104abcb18;
    if (((uint)uVar11 >> 1 & 1) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,0x324,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar4)();
    }
    ppuVar21 = (undefined **)ppuVar6[10];
    if (ppuVar21 != ppuVar6 + 8) {
      puVar7 = ppuVar21[3];
      *(undefined **)(puVar7 + 0x10) = ppuVar21[2];
      *(undefined **)(ppuVar21[2] + 0x18) = puVar7;
      ppuVar21 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar16 = extraout_x8_02;
      if ((undefined8 *)*ppuVar21 == extraout_x8_02) {
        extraout_x8_02[2] = extraout_x9;
        extraout_x8_02[3] = ppuVar6[0xb];
        ppuVar6[0xb] = (undefined *)extraout_x8_02;
        *(undefined8 **)(extraout_x8_02[3] + 0x10) = extraout_x8_02;
        puVar16 = (undefined8 *)ppuVar6[10];
        if (puVar16 == extraout_x9) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          lVar9 = puVar16[3];
          *(undefined8 *)(lVar9 + 0x10) = puVar16[2];
          *(long *)(puVar16[2] + 0x18) = lVar9;
        }
        if (((uVar11 & 1) == 0) && ((undefined8 *)*ppuVar21 == puVar16)) {
          puVar16[2] = extraout_x9;
          puVar16[3] = ppuVar6[0xb];
          ppuVar6[0xb] = (undefined *)puVar16;
          *(undefined8 **)(puVar16[3] + 0x10) = puVar16;
          goto LAB_104abcb18;
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar16[2] = extraout_x9;
      puVar16[3] = ppuVar6[0xb];
      ppuVar6[0xb] = (undefined *)puVar16;
      *(undefined8 **)(puVar16[3] + 0x10) = puVar16;
      func_0x000104ac8cc4(&uStack_13b8,*puVar16);
      FUN_104abcc6c(extraout_x8_01,&uStack_13b8);
      if ((uStack_13b8 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (param_2 != (undefined ***)0x1) {
      ppuVar6 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined ***)*ppuVar6 == param_2) {
        if ((uVar11 & 1) != 0) {
          if (((uint)uVar11 >> 1 & 1) != 0) {
            *(undefined4 *)(param_2 + 1) = 1;
          }
          *(undefined4 *)((long)param_2 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_13b0,*param_2);
          FUN_104abcc6c(extraout_x8_01,&uStack_13b0);
          if ((uStack_13b0 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if (((uint)uVar11 >> 1 & 1) != 0) {
          *(undefined4 *)(param_2 + 1) = 1;
        }
        *(undefined4 *)((long)param_2 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_13a8,*param_2);
        FUN_104abcc6c(extraout_x8_01,&uStack_13a8);
        if ((uStack_13a8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    for (ppuVar21 = (undefined **)ppuVar6[10]; ppuVar21 != ppuVar6 + 8;
        ppuVar21 = (undefined **)ppuVar21[2]) {
      func_0x000104ac8cc4(&uStack_13a0,*ppuVar21);
      FUN_104abcc6c(extraout_x8_01,&uStack_13a0);
      if ((uStack_13a0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(ppuVar6 + 0xd) = 1;
LAB_104abcb18:
  uVar11 = *extraout_x8_01;
  if ((uVar11 & 1) == 0) {
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    piVar13 = (int *)(uVar11 - 1);
    do {
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar12) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar12) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1398 = uVar11;
  FUN_104abab1c("pollset_kick_ext",&uStack_1398,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_1398 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar11 & 1) != 0) {
    func_0x00010084dad0(uVar11);
  }
  return;
}



/* Entry: 104abb61c; end: 104abb683;  */

/* WARNING: Removing unreachable block (ram,0x000104abcbbc) */

void FUN_104abb61c(undefined **param_1,undefined ***param_2,ulong param_3)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  bool bVar12;
  int extraout_w8;
  int *piVar13;
  undefined8 *extraout_x8;
  undefined *extraout_x8_00;
  undefined *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x9;
  undefined4 *unaff_x19;
  undefined2 uVar17;
  undefined **ppuVar18;
  ulong unaff_x22;
  undefined2 *puVar19;
  ushort *puVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined **ppuVar23;
  ulong uStack_1388;
  ulong uStack_1380;
  ulong uStack_1378;
  ulong uStack_1370;
  ulong uStack_1368;
  ulong uStack_1360;
  undefined **ppuStack_1358;
  undefined **ppuStack_1350;
  undefined4 *puStack_1348;
  undefined1 **ppuStack_1340;
  code *pcStack_1338;
  char *pcStack_1330;
  undefined ***pppuStack_1320;
  undefined8 *puStack_1318;
  uint uStack_130c;
  undefined ***pppuStack_1308;
  ulong uStack_1300;
  undefined4 uStack_12f4;
  undefined **ppuStack_12f0;
  undefined **ppuStack_12e8;
  undefined **ppuStack_12e0;
  undefined **ppuStack_12d8;
  undefined **ppuStack_12d0;
  undefined **ppuStack_12c8;
  undefined **ppuStack_12c0;
  undefined4 *puStack_12b8;
  int iStack_12b0;
  int iStack_12ac;
  undefined *puStack_12a8;
  undefined **ppuStack_12a0;
  undefined **ppuStack_1298;
  undefined *apuStack_1290 [480];
  undefined *apuStack_390 [96];
  char *pcStack_90;
  undefined8 uStack_88;
  undefined **in_stack_ffffffffffffffb0;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((undefined **)param_1[10] == param_1 + 8) {
    puVar7 = param_1[0x13];
    while (puVar7 != (undefined *)0x0) {
      puVar14 = *(undefined **)(puVar7 + 8);
      FUN_104abce08(*(undefined8 *)(puVar7 + 0x10));
      func_0x000104ac8cd4(param_1[0x13]);
      func_0x000100460314(param_1[0x13]);
      param_1[0x13] = puVar14;
      puVar7 = puVar14;
    }
    func_0x000100460314(param_1[0x12]);
    func_0x000107c61258();
    if ((int)param_1 == 0) {
      return;
    }
    func_0x000107c2c130();
    func_0x000100460448(param_1 + 2);
    if (*param_2 == (undefined **)0x0) {
      if (*(char *)(param_1 + 10) == '\0') {
        puVar7 = param_1[0xb];
        if (puVar7 == (undefined *)0x0) {
          pcStack_90 = "self->endpoint_to_destroy_ != nullptr";
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                              ,0xc1,2,"assertion failed: %s");
          func_0x000107c60ebc();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6158);
          (*pcVar4)();
        }
        *(undefined **)param_1[0x11] = puVar7;
        param_1[0xb] = (undefined *)0x0;
        if (*(char *)(param_1 + 0x12) != '\0') {
          func_0x0001005a6208(puVar7,param_1[0xe]);
        }
        uStack_88 = 0;
        func_0x0001005a6218(param_1,&uStack_88);
        goto code_r0x0001005a60e0;
      }
      FUN_104ab5920(&stack0xffffffffffffffb0,2,"tcp handshaker shutdown",0x17,
                    &stack0xffffffffffffffaf,&stack0xffffffffffffff90);
      ppuVar6 = *param_2;
      if (in_stack_ffffffffffffffb0 == ppuVar6) {
code_r0x0001005a5fec:
        if (((ulong)ppuVar6 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        *param_2 = in_stack_ffffffffffffffb0;
        if (((ulong)ppuVar6 & 1) != 0) {
          func_0x00010084dad0();
          ppuVar6 = (undefined **)0x0;
          goto code_r0x0001005a5fec;
        }
      }
      func_0x000100482b64(&stack0xffffffffffffffb8);
    }
    puVar7 = param_1[0xb];
    if (puVar7 != (undefined *)0x0) {
      ppuVar6 = *param_2;
      if (((ulong)ppuVar6 & 1) != 0) {
        piVar13 = (int *)((long)ppuVar6 + -1);
        do {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar12) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104aba5c4(puVar7,&stack0xffffffffffffff88);
      if (((ulong)ppuVar6 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (*(char *)(param_1 + 10) == '\0') {
      puVar7 = param_1[0x11];
      param_1[0xc] = *(undefined **)(puVar7 + 0x10);
      *(undefined8 *)(puVar7 + 0x10) = 0;
      func_0x00010048650c(*(undefined8 *)(puVar7 + 8));
      *(undefined8 *)(param_1[0x11] + 8) = 0;
      *(undefined1 *)(param_1 + 10) = 1;
      ppuVar6 = *param_2;
      if (((ulong)ppuVar6 & 1) != 0) {
        piVar13 = (int *)((long)ppuVar6 + -1);
        do {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar12) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001005a6218(param_1,&stack0xffffffffffffff80);
      if (((ulong)ppuVar6 & 1) != 0) {
        func_0x00010084dad0(ppuVar6);
      }
    }
code_r0x0001005a60e0:
    func_0x000100466b80(param_1 + 2);
    ppuVar6 = param_1 + 1;
    do {
      puVar7 = *ppuVar6;
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar12) {
        *ppuVar6 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 + -1 == (undefined *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    return;
  }
  func_0x00010bdac1e4();
  pcStack_28 = FUN_104abb684;
  pcStack_90 = *(char **)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (undefined ***)0x0) {
    *param_2 = (undefined **)&puStack_12b8;
  }
  *extraout_x8 = 0;
  iStack_12b0 = 0;
  puStack_12a8 = (undefined *)0x0;
  ppuStack_12a0 = (undefined **)0x0;
  puStack_12b8 = (undefined4 *)param_1[0x13];
  pppuStack_1320 = param_2;
  puStack_1318 = extraout_x8;
  puStack_30 = &stack0xfffffffffffffff0;
  if (puStack_12b8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x18;
    func_0x000100460200();
    puStack_12b8 = puVar8;
    func_0x000104ac8ca4(&ppuStack_1298);
    ppuVar6 = ppuStack_1298;
    puVar8 = puStack_12b8;
    if (ppuStack_1298 != (undefined **)0x0) {
      *puStack_1318 = ppuStack_1298;
    }
    if (cRam00000001136a1f78 == '\x01') {
      puVar16 = (undefined8 *)0x20;
      func_0x000100460200();
      *(undefined8 **)(puVar8 + 4) = puVar16;
      *puVar16 = 0;
      puVar16[1] = puVar8;
      FUN_104abc754();
      unaff_x19 = puVar8;
    }
    if (ppuVar6 == (undefined **)0x0) goto LAB_104abb6f8;
    ppuStack_12c0 = ppuVar6;
    if (((ulong)ppuVar6 & 1) != 0) {
      piVar13 = (int *)((long)ppuVar6 + -1);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_2 = &ppuStack_1298;
    ppuStack_1298 = ppuVar6;
    FUN_104abab1c("pollset_work",param_2,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                  ,0x3ae);
    ppuVar18 = ppuStack_1298;
    if (((ulong)ppuStack_1298 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)ppuVar6 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar18 = ppuVar6;
    }
  }
  else {
    param_1[0x13] = *(undefined **)(puStack_12b8 + 2);
LAB_104abb6f8:
    iStack_12ac = 0;
    ppuVar6 = &PTR___tlv_bootstrap_11340d930;
    if (*(int *)(param_1 + 0xc) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340d930)();
      ppuVar21 = (undefined **)0x0;
      ppuVar18 = (undefined **)0x0;
      bVar12 = false;
      unaff_x22 = 0;
      unaff_x19 = (undefined4 *)0x0;
      *ppuVar6 = (undefined *)param_1;
      uVar11 = param_3;
      goto LAB_104abb87c;
    }
    ppuVar18 = (undefined **)0x0;
    unaff_x19 = (undefined4 *)0x0;
    unaff_x22 = 0;
    ppuVar21 = (undefined **)0x0;
    while( true ) {
      bVar12 = true;
      uVar11 = param_3;
      if ((iStack_12b0 != 0) && (ppuVar18 == (undefined **)0x0)) {
        bVar12 = false;
        iStack_12b0 = 0;
        *(undefined4 *)(param_1 + 0xd) = 0;
        uVar11 = 0;
        if ((int)unaff_x22 == 0 && iStack_12ac == 0) {
          uVar11 = param_3;
        }
      }
LAB_104abb87c:
      param_3 = uVar11;
      if (bVar12) break;
      if (*(int *)(param_1 + 0xd) == 0) {
LAB_104abb8a4:
        if ((int)unaff_x19 == 0) {
          ppuStack_12a0 = param_1 + 8;
          puStack_12a8 = param_1[10];
          *(undefined4 ***)(puStack_12a8 + 0x18) = &puStack_12b8;
          param_1[10] = (undefined *)&puStack_12b8;
          ppuVar6 = &PTR___tlv_bootstrap_11340d918;
          (*(code *)PTR___tlv_bootstrap_11340d918)();
          *ppuVar6 = extraout_x8_00;
        }
        uStack_130c = (uint)unaff_x22;
        if (param_3 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0xffffffff;
          if (param_3 != 0x7fffffffffffffff) {
            func_0x000100460dc4();
            puVar7 = *ppuVar6;
            func_0x0001004671a4();
            if (puVar7 == (undefined *)0x8000000000000001) {
LAB_104abb908:
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = 0;
              if ((param_3 != 0x8000000000000000) && (puVar7 != (undefined *)0x8000000000000000)) {
                if ((long)param_3 < 1) {
                  uVar11 = 0;
                  if (-(long)puVar7 < (long)(-0x8000000000000000 - param_3)) goto LAB_104abb914;
                }
                else if ((long)(param_3 ^ 0x7fffffffffffffff) < -(long)puVar7) goto LAB_104abb908;
                uVar3 = param_3 - (long)puVar7;
                uVar11 = 0;
                if ((-1 < (long)uVar3) && (uVar11 = uVar3, uVar3 >> 0x1f != 0)) goto LAB_104abb908;
              }
            }
          }
        }
LAB_104abb914:
        puVar14 = param_1[0x10];
        puVar7 = puVar14 + 2;
        ppuVar6 = apuStack_390;
        ppuVar21 = apuStack_1290;
        if ((undefined *)0x60 < puVar7) {
          ppuVar6 = (undefined **)((long)puVar7 * 0x30);
          func_0x000100460200();
          ppuVar21 = ppuVar6 + (long)puVar7;
          puVar14 = param_1[0x10];
        }
        puVar7 = (undefined *)0x0;
        param_2 = (undefined ***)0x1;
        *(undefined4 *)ppuVar6 = *puStack_12b8;
        *(undefined4 *)((long)ppuVar6 + 4) = 1;
        if (puVar14 != (undefined *)0x0) {
          puVar7 = (undefined *)0x0;
          puVar14 = (undefined *)0x0;
          do {
            lVar9 = *(long *)(param_1[0x12] + (long)puVar14 * 8);
            if (((*(ulong *)(*(long *)(param_1[0x12] + (long)puVar14 * 8) + 8) & 1) == 0) ||
               (*(long *)(lVar9 + 0x60) == 1)) {
              FUN_104abc844();
            }
            else {
              *(long *)(param_1[0x12] + (long)puVar7 * 8) = lVar9;
              puVar10 = *(undefined **)(param_1[0x12] + (long)puVar14 * 8);
              ppuVar21[(long)param_2 * 5 + 4] = puVar10;
              FUN_104abc79c(puVar10,2);
              puVar7 = puVar7 + 1;
              *(undefined4 *)(ppuVar6 + (long)param_2) =
                   **(undefined4 **)(param_1[0x12] + (long)puVar14 * 8);
              *(undefined2 *)((long)(ppuVar6 + (long)param_2) + 6) = 0;
              param_2 = (undefined ***)(ulong)((int)param_2 + 1);
            }
            puVar14 = puVar14 + 1;
          } while (puVar14 < param_1[0x10]);
        }
        uStack_12f4 = (undefined4)uVar11;
        param_1[0x10] = puVar7;
        func_0x000100466b80(param_1);
        uVar22 = (uint)param_2;
        pppuStack_1308 = param_2;
        uStack_1300 = param_3;
        ppuStack_12f0 = ppuVar21;
        if (1 < uVar22) {
          lVar9 = (long)param_2 + -1;
          puVar19 = (undefined2 *)((long)ppuVar6 + 0xc);
          do {
            ppuVar18 = ppuVar21 + 5;
            puVar14 = ppuVar21[9];
            FUN_104abc79c(puVar14,2);
            puVar7 = puVar14 + 0x10;
            func_0x000100460448(puVar7);
            if (*(int *)(puVar14 + 0x50) == 0) {
              if (*(long *)(puVar14 + 0x98) == 0 && *(long *)(puVar14 + 0xa8) != 1) {
                plVar15 = (long *)(puVar14 + 0xa0);
                *(undefined ***)(puVar14 + 0x98) = ppuVar18;
                if (*plVar15 == 0 && *(long *)(puVar14 + 0xb0) != 1) {
                  uVar17 = 5;
                  goto LAB_104abbae8;
                }
                uVar17 = 1;
              }
              else {
                plVar15 = (long *)(puVar14 + 0xa0);
                if (*plVar15 == 0 && *(long *)(puVar14 + 0xb0) != 1) {
                  uVar17 = 4;
                }
                else {
                  uVar17 = 0;
                  *ppuVar18 = puVar14 + 0x70;
                  puVar16 = *(undefined8 **)(puVar14 + 0x78);
                  ppuVar21[6] = (undefined *)puVar16;
                  *puVar16 = ppuVar18;
                  plVar15 = (long *)(*ppuVar18 + 8);
                }
LAB_104abbae8:
                *plVar15 = (long)ppuVar18;
              }
              ppuVar21[7] = (undefined *)param_1;
              ppuVar21[8] = (undefined *)&puStack_12b8;
              ppuVar21[9] = puVar14;
              func_0x000100466b80(puVar7);
            }
            else {
              ppuVar21[7] = (undefined *)0x0;
              ppuVar21[8] = (undefined *)0x0;
              ppuVar21[9] = (undefined *)0x0;
              func_0x000100466b80(puVar7);
              FUN_104abc844(puVar14);
              uVar17 = 0;
            }
            *puVar19 = uVar17;
            FUN_104abc844(puVar14);
            puVar19 = puVar19 + 4;
            lVar9 = lVar9 + -1;
            ppuVar21 = ppuVar18;
          } while (lVar9 != 0);
        }
        ppuVar18 = ppuVar6;
        (*(code *)PTR__poll_1130a60c0)(ppuVar6,param_2,uStack_12f4);
        ppuVar21 = ppuStack_12f0;
        param_3 = uStack_1300;
        func_0x000100460dc4(ppuVar18);
        (*ppuVar18)[0x34] = 0;
        if (extraout_w8 < 0) {
          ___error();
          if (*(int *)ppuVar18 != 4) {
            ___error();
            FUN_104aba954(&ppuStack_12d0,&ppuStack_1298,*(undefined4 *)ppuVar18,"poll");
            ppuVar18 = ppuStack_12d0;
            if (ppuStack_12d0 == (undefined **)0x0) {
              pcStack_1330 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x104abbf08);
              (*pcVar4)();
            }
            ppuStack_12d0 = (undefined **)0x36;
            ppuStack_12c8 = ppuVar18;
            param_2 = &ppuStack_12c8;
            FUN_104abd220(puStack_1318);
            if (((ulong)ppuVar18 & 1) != 0) {
              func_0x00010084dad0(ppuVar18);
            }
            ppuVar18 = ppuStack_12d0;
            if (((ulong)ppuStack_12d0 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_1308 + -1;
            do {
              ppuVar23 = ppuVar21 + 5;
              param_2 = (undefined ***)(ulong)(ppuVar21[9] != (undefined *)0x0);
              ppuVar18 = ppuVar23;
              FUN_104abd3bc(ppuVar23,param_2,param_2);
              lVar9 = lVar9 + -1;
              ppuVar21 = ppuVar23;
            } while (lVar9 != 0);
          }
        }
        else if (extraout_w8 == 0) {
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_1308 + -1;
            do {
              ppuVar21 = ppuVar21 + 5;
              param_2 = (undefined ***)0x0;
              ppuVar18 = ppuVar21;
              FUN_104abd3bc(ppuVar21,0,0);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          if (((ulong)*ppuVar6 & 0x19000000000000) != 0) {
            func_0x000104ac8cb4(&ppuStack_12d8,puStack_12b8);
            param_2 = &ppuStack_12d8;
            FUN_104abd220(puStack_1318);
            ppuVar18 = ppuStack_12d8;
            if (((ulong)ppuStack_12d8 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_1308 + -1;
            puVar20 = (ushort *)((long)ppuVar6 + 0xe);
            do {
              ppuVar23 = ppuVar21 + 5;
              if (ppuVar21[9] == (undefined *)0x0) {
                param_2 = (undefined ***)0x0;
                uVar22 = 0;
              }
              else {
                uVar1 = *puVar20;
                if ((uVar1 >> 4 & 1) != 0) {
                  *(undefined8 *)(ppuVar21[9] + 0x60) = 1;
                  uVar1 = *puVar20;
                }
                param_2 = (undefined ***)(ulong)(uVar1 & 0x19);
                uVar22 = uVar1 & 0x1c;
              }
              ppuVar18 = ppuVar23;
              FUN_104abd3bc(ppuVar23,param_2,uVar22);
              puVar20 = puVar20 + 4;
              lVar9 = lVar9 + -1;
              ppuVar21 = ppuVar23;
            } while (lVar9 != 0);
          }
        }
        if (ppuVar6 != apuStack_390) {
          func_0x000100460314();
          ppuVar18 = ppuVar6;
        }
        func_0x000100460dc4();
        uVar5 = (uint)*ppuVar18;
        func_0x000100467970();
        uVar22 = uStack_130c;
        ppuVar6 = param_1;
        func_0x000100460448();
        unaff_x22 = (ulong)(uVar22 | uVar5);
        ppuVar18 = (undefined **)*puStack_1318;
        unaff_x19 = (undefined4 *)0x1;
        ppuVar21 = ppuVar18;
      }
      else {
        func_0x000100460dc4();
        ppuVar6 = (undefined **)*ppuVar6;
        func_0x0001004671a4();
        if ((long)param_3 <= (long)ppuVar6) goto LAB_104abb8a4;
        *(undefined4 *)(param_1 + 0xd) = 0;
      }
    }
    ppuVar18 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    *ppuVar18 = (undefined *)0x0;
    if ((int)unaff_x19 != 0) {
      ppuStack_12a0[2] = puStack_12a8;
      *(undefined ***)(puStack_12a8 + 0x18) = ppuStack_12a0;
      ppuVar18 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      *ppuVar18 = (undefined *)0x0;
    }
    *(undefined **)(puStack_12b8 + 2) = param_1[0x13];
    param_1[0x13] = (undefined *)puStack_12b8;
    if (*(int *)(param_1 + 0xc) != 0) {
      if ((undefined **)param_1[10] == param_1 + 8) {
        if ((*(int *)((long)param_1 + 100) == 0) && (*(int *)(param_1 + 0xf) == 0)) {
          *(undefined4 *)((long)param_1 + 100) = 1;
          func_0x000100466b80(param_1);
          ppuVar6 = param_1;
          FUN_104abd198();
          func_0x000100460dc4();
          func_0x000100467970(*ppuVar6);
          ppuVar18 = param_1;
          func_0x000100460448();
        }
      }
      else {
        param_2 = (undefined ***)0x0;
        FUN_104abc91c(&ppuStack_12e0,param_1,0,0);
        ppuVar18 = ppuStack_12e0;
        if (((ulong)ppuStack_12e0 & 1) != 0) {
          func_0x00010084dad0();
          ppuVar18 = ppuStack_12e0;
        }
      }
    }
    if (pppuStack_1320 != (undefined ***)0x0) {
      *pppuStack_1320 = (undefined **)0x0;
    }
    ppuStack_12e8 = ppuVar21;
    if (((ulong)ppuVar21 & 1) == 0) {
      if (ppuVar21 == (undefined **)0x0) goto LAB_104abb824;
    }
    else {
      piVar13 = (int *)((long)ppuVar21 + -1);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar12) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_2 = &ppuStack_1298;
    ppuStack_1298 = ppuVar21;
    FUN_104abab1c("pollset_work",param_2,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                  ,0x471);
    ppuVar18 = ppuStack_1298;
    if (((ulong)ppuStack_1298 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)ppuVar21 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar18 = ppuVar21;
    }
  }
LAB_104abb824:
  if ((char *)*(long *)PTR____stack_chk_guard_11034bdc0 == pcStack_90) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(puStack_1318);
  }
  ppuVar6 = ppuVar18;
  __Unwind_Resume();
  uVar11 = 0;
  pcStack_1338 = FUN_104abbf8c;
  *extraout_x8_01 = 0;
  uStack_1360 = unaff_x22;
  ppuStack_1358 = param_1;
  ppuStack_1350 = ppuVar18;
  puStack_1348 = unaff_x19;
  ppuStack_1340 = &puStack_30;
  if (param_2 == (undefined ***)0x0) {
    ppuVar21 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if ((undefined **)*ppuVar21 == ppuVar6) goto LAB_104abcb18;
    if (((uint)uVar11 >> 1 & 1) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,0x324,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar4)();
    }
    ppuVar21 = (undefined **)ppuVar6[10];
    if (ppuVar21 != ppuVar6 + 8) {
      puVar7 = ppuVar21[3];
      *(undefined **)(puVar7 + 0x10) = ppuVar21[2];
      *(undefined **)(ppuVar21[2] + 0x18) = puVar7;
      ppuVar21 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar16 = extraout_x8_02;
      if ((undefined8 *)*ppuVar21 == extraout_x8_02) {
        extraout_x8_02[2] = extraout_x9;
        extraout_x8_02[3] = ppuVar6[0xb];
        ppuVar6[0xb] = (undefined *)extraout_x8_02;
        *(undefined8 **)(extraout_x8_02[3] + 0x10) = extraout_x8_02;
        puVar16 = (undefined8 *)ppuVar6[10];
        if (puVar16 == extraout_x9) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          lVar9 = puVar16[3];
          *(undefined8 *)(lVar9 + 0x10) = puVar16[2];
          *(long *)(puVar16[2] + 0x18) = lVar9;
        }
        if (((uVar11 & 1) == 0) && ((undefined8 *)*ppuVar21 == puVar16)) {
          puVar16[2] = extraout_x9;
          puVar16[3] = ppuVar6[0xb];
          ppuVar6[0xb] = (undefined *)puVar16;
          *(undefined8 **)(puVar16[3] + 0x10) = puVar16;
          goto LAB_104abcb18;
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar16[2] = extraout_x9;
      puVar16[3] = ppuVar6[0xb];
      ppuVar6[0xb] = (undefined *)puVar16;
      *(undefined8 **)(puVar16[3] + 0x10) = puVar16;
      func_0x000104ac8cc4(&uStack_1388,*puVar16);
      FUN_104abcc6c(extraout_x8_01,&uStack_1388);
      if ((uStack_1388 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (param_2 != (undefined ***)0x1) {
      ppuVar6 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined ***)*ppuVar6 == param_2) {
        if ((uVar11 & 1) != 0) {
          if (((uint)uVar11 >> 1 & 1) != 0) {
            *(undefined4 *)(param_2 + 1) = 1;
          }
          *(undefined4 *)((long)param_2 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_1380,*param_2);
          FUN_104abcc6c(extraout_x8_01,&uStack_1380);
          if ((uStack_1380 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if (((uint)uVar11 >> 1 & 1) != 0) {
          *(undefined4 *)(param_2 + 1) = 1;
        }
        *(undefined4 *)((long)param_2 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_1378,*param_2);
        FUN_104abcc6c(extraout_x8_01,&uStack_1378);
        if ((uStack_1378 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    for (ppuVar21 = (undefined **)ppuVar6[10]; ppuVar21 != ppuVar6 + 8;
        ppuVar21 = (undefined **)ppuVar21[2]) {
      func_0x000104ac8cc4(&uStack_1370,*ppuVar21);
      FUN_104abcc6c(extraout_x8_01,&uStack_1370);
      if ((uStack_1370 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(ppuVar6 + 0xd) = 1;
LAB_104abcb18:
  uVar11 = *extraout_x8_01;
  if ((uVar11 & 1) == 0) {
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    piVar13 = (int *)(uVar11 - 1);
    do {
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar12) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar12) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1368 = uVar11;
  FUN_104abab1c("pollset_kick_ext",&uStack_1368,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_1368 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar11 & 1) != 0) {
    func_0x00010084dad0(uVar11);
  }
  return;
}



/* Entry: 104abb684; end: 104abbf8b;  */

/* WARNING: Removing unreachable block (ram,0x000104abcbbc) */

void FUN_104abb684(undefined8 *param_1,undefined **param_2,undefined ***param_3,ulong param_4)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  bool bVar12;
  int extraout_w8;
  undefined *extraout_x8;
  undefined *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int *piVar16;
  undefined8 *extraout_x9;
  undefined4 *unaff_x19;
  undefined2 uVar17;
  undefined **ppuVar18;
  ulong unaff_x22;
  undefined2 *puVar19;
  ushort *puVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined **ppuVar23;
  ulong uStack_1368;
  ulong uStack_1360;
  ulong uStack_1358;
  ulong uStack_1350;
  ulong uStack_1348;
  ulong uStack_1340;
  undefined **ppuStack_1338;
  undefined **ppuStack_1330;
  undefined4 *puStack_1328;
  undefined1 *puStack_1320;
  code *pcStack_1318;
  char *pcStack_1310;
  undefined ***pppuStack_1300;
  undefined8 *puStack_12f8;
  uint uStack_12ec;
  undefined ***pppuStack_12e8;
  ulong uStack_12e0;
  undefined4 uStack_12d4;
  undefined **ppuStack_12d0;
  undefined **ppuStack_12c8;
  undefined **ppuStack_12c0;
  undefined **ppuStack_12b8;
  undefined **ppuStack_12b0;
  undefined **ppuStack_12a8;
  undefined **ppuStack_12a0;
  undefined4 *puStack_1298;
  int iStack_1290;
  int iStack_128c;
  undefined *puStack_1288;
  undefined **ppuStack_1280;
  undefined **ppuStack_1278;
  undefined *apuStack_1270 [480];
  undefined *apuStack_370 [96];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != (undefined ***)0x0) {
    *param_3 = (undefined **)&puStack_1298;
  }
  *param_1 = 0;
  iStack_1290 = 0;
  puStack_1288 = (undefined *)0x0;
  ppuStack_1280 = (undefined **)0x0;
  puStack_1298 = (undefined4 *)param_2[0x13];
  pppuStack_1300 = param_3;
  puStack_12f8 = param_1;
  if (puStack_1298 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x18;
    func_0x000100460200();
    puStack_1298 = puVar6;
    func_0x000104ac8ca4(&ppuStack_1278);
    ppuVar7 = ppuStack_1278;
    puVar6 = puStack_1298;
    if (ppuStack_1278 != (undefined **)0x0) {
      *puStack_12f8 = ppuStack_1278;
    }
    if (cRam00000001136a1f78 == '\x01') {
      puVar15 = (undefined8 *)0x20;
      func_0x000100460200();
      *(undefined8 **)(puVar6 + 4) = puVar15;
      *puVar15 = 0;
      puVar15[1] = puVar6;
      FUN_104abc754();
      unaff_x19 = puVar6;
    }
    if (ppuVar7 == (undefined **)0x0) goto LAB_104abb6f8;
    ppuStack_12a0 = ppuVar7;
    if (((ulong)ppuVar7 & 1) != 0) {
      piVar16 = (int *)((long)ppuVar7 + -1);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar12) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar12) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_3 = &ppuStack_1278;
    ppuStack_1278 = ppuVar7;
    FUN_104abab1c("pollset_work",param_3,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                  ,0x3ae);
    ppuVar18 = ppuStack_1278;
    if (((ulong)ppuStack_1278 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)ppuVar7 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar18 = ppuVar7;
    }
  }
  else {
    param_2[0x13] = *(undefined **)(puStack_1298 + 2);
LAB_104abb6f8:
    iStack_128c = 0;
    ppuVar7 = &PTR___tlv_bootstrap_11340d930;
    if (*(int *)(param_2 + 0xc) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340d930)();
      ppuVar21 = (undefined **)0x0;
      ppuVar18 = (undefined **)0x0;
      bVar12 = false;
      unaff_x22 = 0;
      unaff_x19 = (undefined4 *)0x0;
      *ppuVar7 = (undefined *)param_2;
      uVar11 = param_4;
      goto LAB_104abb87c;
    }
    ppuVar18 = (undefined **)0x0;
    unaff_x19 = (undefined4 *)0x0;
    unaff_x22 = 0;
    ppuVar21 = (undefined **)0x0;
    while( true ) {
      bVar12 = true;
      uVar11 = param_4;
      if ((iStack_1290 != 0) && (ppuVar18 == (undefined **)0x0)) {
        bVar12 = false;
        iStack_1290 = 0;
        *(undefined4 *)(param_2 + 0xd) = 0;
        uVar11 = 0;
        if ((int)unaff_x22 == 0 && iStack_128c == 0) {
          uVar11 = param_4;
        }
      }
LAB_104abb87c:
      param_4 = uVar11;
      if (bVar12) break;
      if (*(int *)(param_2 + 0xd) == 0) {
LAB_104abb8a4:
        if ((int)unaff_x19 == 0) {
          ppuStack_1280 = param_2 + 8;
          puStack_1288 = param_2[10];
          *(undefined4 ***)(puStack_1288 + 0x18) = &puStack_1298;
          param_2[10] = (undefined *)&puStack_1298;
          ppuVar7 = &PTR___tlv_bootstrap_11340d918;
          (*(code *)PTR___tlv_bootstrap_11340d918)();
          *ppuVar7 = extraout_x8;
        }
        uStack_12ec = (uint)unaff_x22;
        if (param_4 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0xffffffff;
          if (param_4 != 0x7fffffffffffffff) {
            func_0x000100460dc4();
            puVar8 = *ppuVar7;
            func_0x0001004671a4();
            if (puVar8 == (undefined *)0x8000000000000001) {
LAB_104abb908:
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = 0;
              if ((param_4 != 0x8000000000000000) && (puVar8 != (undefined *)0x8000000000000000)) {
                if ((long)param_4 < 1) {
                  uVar11 = 0;
                  if (-(long)puVar8 < (long)(-0x8000000000000000 - param_4)) goto LAB_104abb914;
                }
                else if ((long)(param_4 ^ 0x7fffffffffffffff) < -(long)puVar8) goto LAB_104abb908;
                uVar3 = param_4 - (long)puVar8;
                uVar11 = 0;
                if ((-1 < (long)uVar3) && (uVar11 = uVar3, uVar3 >> 0x1f != 0)) goto LAB_104abb908;
              }
            }
          }
        }
LAB_104abb914:
        puVar13 = param_2[0x10];
        puVar8 = puVar13 + 2;
        ppuVar7 = apuStack_370;
        ppuVar21 = apuStack_1270;
        if ((undefined *)0x60 < puVar8) {
          ppuVar7 = (undefined **)((long)puVar8 * 0x30);
          func_0x000100460200();
          ppuVar21 = ppuVar7 + (long)puVar8;
          puVar13 = param_2[0x10];
        }
        puVar8 = (undefined *)0x0;
        param_3 = (undefined ***)0x1;
        *(undefined4 *)ppuVar7 = *puStack_1298;
        *(undefined4 *)((long)ppuVar7 + 4) = 1;
        if (puVar13 != (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          puVar13 = (undefined *)0x0;
          do {
            lVar9 = *(long *)(param_2[0x12] + (long)puVar13 * 8);
            if (((*(ulong *)(*(long *)(param_2[0x12] + (long)puVar13 * 8) + 8) & 1) == 0) ||
               (*(long *)(lVar9 + 0x60) == 1)) {
              FUN_104abc844();
            }
            else {
              *(long *)(param_2[0x12] + (long)puVar8 * 8) = lVar9;
              puVar10 = *(undefined **)(param_2[0x12] + (long)puVar13 * 8);
              ppuVar21[(long)param_3 * 5 + 4] = puVar10;
              FUN_104abc79c(puVar10,2);
              puVar8 = puVar8 + 1;
              *(undefined4 *)(ppuVar7 + (long)param_3) =
                   **(undefined4 **)(param_2[0x12] + (long)puVar13 * 8);
              *(undefined2 *)((long)(ppuVar7 + (long)param_3) + 6) = 0;
              param_3 = (undefined ***)(ulong)((int)param_3 + 1);
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 < param_2[0x10]);
        }
        uStack_12d4 = (undefined4)uVar11;
        param_2[0x10] = puVar8;
        func_0x000100466b80(param_2);
        uVar22 = (uint)param_3;
        pppuStack_12e8 = param_3;
        uStack_12e0 = param_4;
        ppuStack_12d0 = ppuVar21;
        if (1 < uVar22) {
          lVar9 = (long)param_3 + -1;
          puVar19 = (undefined2 *)((long)ppuVar7 + 0xc);
          do {
            ppuVar18 = ppuVar21 + 5;
            puVar13 = ppuVar21[9];
            FUN_104abc79c(puVar13,2);
            puVar8 = puVar13 + 0x10;
            func_0x000100460448(puVar8);
            if (*(int *)(puVar13 + 0x50) == 0) {
              if (*(long *)(puVar13 + 0x98) == 0 && *(long *)(puVar13 + 0xa8) != 1) {
                plVar14 = (long *)(puVar13 + 0xa0);
                *(undefined ***)(puVar13 + 0x98) = ppuVar18;
                if (*plVar14 == 0 && *(long *)(puVar13 + 0xb0) != 1) {
                  uVar17 = 5;
                  goto LAB_104abbae8;
                }
                uVar17 = 1;
              }
              else {
                plVar14 = (long *)(puVar13 + 0xa0);
                if (*plVar14 == 0 && *(long *)(puVar13 + 0xb0) != 1) {
                  uVar17 = 4;
                }
                else {
                  uVar17 = 0;
                  *ppuVar18 = puVar13 + 0x70;
                  puVar15 = *(undefined8 **)(puVar13 + 0x78);
                  ppuVar21[6] = (undefined *)puVar15;
                  *puVar15 = ppuVar18;
                  plVar14 = (long *)(*ppuVar18 + 8);
                }
LAB_104abbae8:
                *plVar14 = (long)ppuVar18;
              }
              ppuVar21[7] = (undefined *)param_2;
              ppuVar21[8] = (undefined *)&puStack_1298;
              ppuVar21[9] = puVar13;
              func_0x000100466b80(puVar8);
            }
            else {
              ppuVar21[7] = (undefined *)0x0;
              ppuVar21[8] = (undefined *)0x0;
              ppuVar21[9] = (undefined *)0x0;
              func_0x000100466b80(puVar8);
              FUN_104abc844(puVar13);
              uVar17 = 0;
            }
            *puVar19 = uVar17;
            FUN_104abc844(puVar13);
            puVar19 = puVar19 + 4;
            lVar9 = lVar9 + -1;
            ppuVar21 = ppuVar18;
          } while (lVar9 != 0);
        }
        ppuVar18 = ppuVar7;
        (*(code *)PTR__poll_1130a60c0)(ppuVar7,param_3,uStack_12d4);
        ppuVar21 = ppuStack_12d0;
        param_4 = uStack_12e0;
        func_0x000100460dc4(ppuVar18);
        (*ppuVar18)[0x34] = 0;
        if (extraout_w8 < 0) {
          ___error();
          if (*(int *)ppuVar18 != 4) {
            ___error();
            FUN_104aba954(&ppuStack_12b0,&ppuStack_1278,*(undefined4 *)ppuVar18,"poll");
            ppuVar18 = ppuStack_12b0;
            if (ppuStack_12b0 == (undefined **)0x0) {
              pcStack_1310 = "!GRPC_ERROR_IS_NONE(error)";
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                                  ,0xd5,2,"assertion failed: %s");
              _abort();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x104abbf08);
              (*pcVar4)();
            }
            ppuStack_12b0 = (undefined **)0x36;
            ppuStack_12a8 = ppuVar18;
            param_3 = &ppuStack_12a8;
            FUN_104abd220(puStack_12f8);
            if (((ulong)ppuVar18 & 1) != 0) {
              func_0x00010084dad0(ppuVar18);
            }
            ppuVar18 = ppuStack_12b0;
            if (((ulong)ppuStack_12b0 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_12e8 + -1;
            do {
              ppuVar23 = ppuVar21 + 5;
              param_3 = (undefined ***)(ulong)(ppuVar21[9] != (undefined *)0x0);
              ppuVar18 = ppuVar23;
              FUN_104abd3bc(ppuVar23,param_3,param_3);
              lVar9 = lVar9 + -1;
              ppuVar21 = ppuVar23;
            } while (lVar9 != 0);
          }
        }
        else if (extraout_w8 == 0) {
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_12e8 + -1;
            do {
              ppuVar21 = ppuVar21 + 5;
              param_3 = (undefined ***)0x0;
              ppuVar18 = ppuVar21;
              FUN_104abd3bc(ppuVar21,0,0);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          if (((ulong)*ppuVar7 & 0x19000000000000) != 0) {
            func_0x000104ac8cb4(&ppuStack_12b8,puStack_1298);
            param_3 = &ppuStack_12b8;
            FUN_104abd220(puStack_12f8);
            ppuVar18 = ppuStack_12b8;
            if (((ulong)ppuStack_12b8 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          if (1 < uVar22) {
            lVar9 = (long)pppuStack_12e8 + -1;
            puVar20 = (ushort *)((long)ppuVar7 + 0xe);
            do {
              ppuVar23 = ppuVar21 + 5;
              if (ppuVar21[9] == (undefined *)0x0) {
                param_3 = (undefined ***)0x0;
                uVar22 = 0;
              }
              else {
                uVar1 = *puVar20;
                if ((uVar1 >> 4 & 1) != 0) {
                  *(undefined8 *)(ppuVar21[9] + 0x60) = 1;
                  uVar1 = *puVar20;
                }
                param_3 = (undefined ***)(ulong)(uVar1 & 0x19);
                uVar22 = uVar1 & 0x1c;
              }
              ppuVar18 = ppuVar23;
              FUN_104abd3bc(ppuVar23,param_3,uVar22);
              puVar20 = puVar20 + 4;
              lVar9 = lVar9 + -1;
              ppuVar21 = ppuVar23;
            } while (lVar9 != 0);
          }
        }
        if (ppuVar7 != apuStack_370) {
          func_0x000100460314();
          ppuVar18 = ppuVar7;
        }
        func_0x000100460dc4();
        uVar5 = (uint)*ppuVar18;
        func_0x000100467970();
        uVar22 = uStack_12ec;
        ppuVar7 = param_2;
        func_0x000100460448();
        unaff_x22 = (ulong)(uVar22 | uVar5);
        ppuVar18 = (undefined **)*puStack_12f8;
        unaff_x19 = (undefined4 *)0x1;
        ppuVar21 = ppuVar18;
      }
      else {
        func_0x000100460dc4();
        ppuVar7 = (undefined **)*ppuVar7;
        func_0x0001004671a4();
        if ((long)param_4 <= (long)ppuVar7) goto LAB_104abb8a4;
        *(undefined4 *)(param_2 + 0xd) = 0;
      }
    }
    ppuVar18 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    *ppuVar18 = (undefined *)0x0;
    if ((int)unaff_x19 != 0) {
      ppuStack_1280[2] = puStack_1288;
      *(undefined ***)(puStack_1288 + 0x18) = ppuStack_1280;
      ppuVar18 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      *ppuVar18 = (undefined *)0x0;
    }
    *(undefined **)(puStack_1298 + 2) = param_2[0x13];
    param_2[0x13] = (undefined *)puStack_1298;
    if (*(int *)(param_2 + 0xc) != 0) {
      if ((undefined **)param_2[10] == param_2 + 8) {
        if ((*(int *)((long)param_2 + 100) == 0) && (*(int *)(param_2 + 0xf) == 0)) {
          *(undefined4 *)((long)param_2 + 100) = 1;
          func_0x000100466b80(param_2);
          ppuVar7 = param_2;
          FUN_104abd198();
          func_0x000100460dc4();
          func_0x000100467970(*ppuVar7);
          ppuVar18 = param_2;
          func_0x000100460448();
        }
      }
      else {
        param_3 = (undefined ***)0x0;
        FUN_104abc91c(&ppuStack_12c0,param_2,0,0);
        ppuVar18 = ppuStack_12c0;
        if (((ulong)ppuStack_12c0 & 1) != 0) {
          func_0x00010084dad0();
          ppuVar18 = ppuStack_12c0;
        }
      }
    }
    if (pppuStack_1300 != (undefined ***)0x0) {
      *pppuStack_1300 = (undefined **)0x0;
    }
    ppuStack_12c8 = ppuVar21;
    if (((ulong)ppuVar21 & 1) == 0) {
      if (ppuVar21 == (undefined **)0x0) goto LAB_104abb824;
    }
    else {
      piVar16 = (int *)((long)ppuVar21 + -1);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar12) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar12) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_3 = &ppuStack_1278;
    ppuStack_1278 = ppuVar21;
    FUN_104abab1c("pollset_work",param_3,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                  ,0x471);
    ppuVar18 = ppuStack_1278;
    if (((ulong)ppuStack_1278 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)ppuVar21 & 1) != 0) {
      func_0x00010084dad0();
      ppuVar18 = ppuVar21;
    }
  }
LAB_104abb824:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(puStack_12f8);
  }
  ppuVar7 = ppuVar18;
  __Unwind_Resume();
  uVar11 = 0;
  pcStack_1318 = FUN_104abbf8c;
  *extraout_x8_00 = 0;
  uStack_1340 = unaff_x22;
  ppuStack_1338 = param_2;
  ppuStack_1330 = ppuVar18;
  puStack_1328 = unaff_x19;
  puStack_1320 = &stack0xfffffffffffffff0;
  if (param_3 == (undefined ***)0x0) {
    ppuVar21 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if ((undefined **)*ppuVar21 == ppuVar7) goto LAB_104abcb18;
    if (((uint)uVar11 >> 1 & 1) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,0x324,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar4)();
    }
    ppuVar21 = (undefined **)ppuVar7[10];
    if (ppuVar21 != ppuVar7 + 8) {
      puVar8 = ppuVar21[3];
      *(undefined **)(puVar8 + 0x10) = ppuVar21[2];
      *(undefined **)(ppuVar21[2] + 0x18) = puVar8;
      ppuVar21 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar15 = extraout_x8_01;
      if ((undefined8 *)*ppuVar21 == extraout_x8_01) {
        extraout_x8_01[2] = extraout_x9;
        extraout_x8_01[3] = ppuVar7[0xb];
        ppuVar7[0xb] = (undefined *)extraout_x8_01;
        *(undefined8 **)(extraout_x8_01[3] + 0x10) = extraout_x8_01;
        puVar15 = (undefined8 *)ppuVar7[10];
        if (puVar15 == extraout_x9) {
          puVar15 = (undefined8 *)0x0;
        }
        else {
          lVar9 = puVar15[3];
          *(undefined8 *)(lVar9 + 0x10) = puVar15[2];
          *(long *)(puVar15[2] + 0x18) = lVar9;
        }
        if (((uVar11 & 1) == 0) && ((undefined8 *)*ppuVar21 == puVar15)) {
          puVar15[2] = extraout_x9;
          puVar15[3] = ppuVar7[0xb];
          ppuVar7[0xb] = (undefined *)puVar15;
          *(undefined8 **)(puVar15[3] + 0x10) = puVar15;
          goto LAB_104abcb18;
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar15[2] = extraout_x9;
      puVar15[3] = ppuVar7[0xb];
      ppuVar7[0xb] = (undefined *)puVar15;
      *(undefined8 **)(puVar15[3] + 0x10) = puVar15;
      func_0x000104ac8cc4(&uStack_1368,*puVar15);
      FUN_104abcc6c(extraout_x8_00,&uStack_1368);
      if ((uStack_1368 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (param_3 != (undefined ***)0x1) {
      ppuVar7 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined ***)*ppuVar7 == param_3) {
        if ((uVar11 & 1) != 0) {
          if (((uint)uVar11 >> 1 & 1) != 0) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(undefined4 *)((long)param_3 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_1360,*param_3);
          FUN_104abcc6c(extraout_x8_00,&uStack_1360);
          if ((uStack_1360 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if (((uint)uVar11 >> 1 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = 1;
        }
        *(undefined4 *)((long)param_3 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_1358,*param_3);
        FUN_104abcc6c(extraout_x8_00,&uStack_1358);
        if ((uStack_1358 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    for (ppuVar21 = (undefined **)ppuVar7[10]; ppuVar21 != ppuVar7 + 8;
        ppuVar21 = (undefined **)ppuVar21[2]) {
      func_0x000104ac8cc4(&uStack_1350,*ppuVar21);
      FUN_104abcc6c(extraout_x8_00,&uStack_1350);
      if ((uStack_1350 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(ppuVar7 + 0xd) = 1;
LAB_104abcb18:
  uVar11 = *extraout_x8_00;
  if ((uVar11 & 1) == 0) {
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    piVar16 = (int *)(uVar11 - 1);
    do {
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar12) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar12) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1348 = uVar11;
  FUN_104abab1c("pollset_kick_ext",&uStack_1348,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_1348 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar11 & 1) != 0) {
    func_0x00010084dad0(uVar11);
  }
  return;
}



/* Entry: 104abbf8c; end: 104abbf93;  */

/* WARNING: Removing unreachable block (ram,0x000104abcbbc) */

void FUN_104abbf8c(ulong *param_1,undefined *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *extraout_x8;
  int *piVar8;
  undefined8 *extraout_x9;
  undefined8 *puVar9;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = 0;
  *param_1 = 0;
  if (param_3 == (undefined8 *)0x0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if (*ppuVar5 == param_2) goto LAB_104abcb18;
    if (((uint)uVar6 >> 1 & 1) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,0x324,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar4)();
    }
    puVar7 = *(undefined **)(param_2 + 0x50);
    if (puVar7 != param_2 + 0x40) {
      lVar1 = *(long *)(puVar7 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
      *(long *)(*(long *)(puVar7 + 0x10) + 0x18) = lVar1;
      ppuVar5 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar9 = extraout_x8;
      if ((undefined8 *)*ppuVar5 == extraout_x8) {
        extraout_x8[2] = extraout_x9;
        extraout_x8[3] = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 **)(param_2 + 0x58) = extraout_x8;
        *(undefined8 **)(extraout_x8[3] + 0x10) = extraout_x8;
        puVar9 = *(undefined8 **)(param_2 + 0x50);
        if (puVar9 == extraout_x9) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          lVar1 = puVar9[3];
          *(undefined8 *)(lVar1 + 0x10) = puVar9[2];
          *(long *)(puVar9[2] + 0x18) = lVar1;
        }
        if (((uVar6 & 1) == 0) && ((undefined8 *)*ppuVar5 == puVar9)) {
          puVar9[2] = extraout_x9;
          puVar9[3] = *(undefined8 *)(param_2 + 0x58);
          *(undefined8 **)(param_2 + 0x58) = puVar9;
          *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
          goto LAB_104abcb18;
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar9[2] = extraout_x9;
      puVar9[3] = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 **)(param_2 + 0x58) = puVar9;
      *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
      func_0x000104ac8cc4(&uStack_58,*puVar9);
      FUN_104abcc6c(param_1,&uStack_58);
      if ((uStack_58 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (param_3 != (undefined8 *)0x1) {
      ppuVar5 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined8 *)*ppuVar5 == param_3) {
        if ((uVar6 & 1) != 0) {
          if (((uint)uVar6 >> 1 & 1) != 0) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(undefined4 *)((long)param_3 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_50,*param_3);
          FUN_104abcc6c(param_1,&uStack_50);
          if ((uStack_50 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if (((uint)uVar6 >> 1 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = 1;
        }
        *(undefined4 *)((long)param_3 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_48,*param_3);
        FUN_104abcc6c(param_1,&uStack_48);
        if ((uStack_48 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    for (puVar9 = *(undefined8 **)(param_2 + 0x50); puVar9 != (undefined8 *)(param_2 + 0x40);
        puVar9 = (undefined8 *)puVar9[2]) {
      func_0x000104ac8cc4(&uStack_40,*puVar9);
      FUN_104abcc6c(param_1,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(param_2 + 0x68) = 1;
LAB_104abcb18:
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    if (uVar6 == 0) {
      return;
    }
  }
  else {
    piVar8 = (int *)(uVar6 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = uVar6;
  FUN_104abab1c("pollset_kick_ext",&uStack_38,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar6 & 1) != 0) {
    func_0x00010084dad0(uVar6);
  }
  return;
}



/* Entry: 104abbf94; end: 104abc06b;  */

void FUN_104abbf94(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uStack_28;
  
  func_0x000100460448();
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    plVar4 = *(long **)(param_1 + 0x90);
    lVar2 = lVar3;
    do {
      if (*plVar4 == param_2) goto LAB_104abc050;
      plVar4 = plVar4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar3 == *(long *)(param_1 + 0x88)) {
    uVar1 = lVar3 + 8U;
    if (lVar3 + 8U <= (ulong)(lVar3 * 3) >> 1) {
      uVar1 = (ulong)(lVar3 * 3) >> 1;
    }
    *(ulong *)(param_1 + 0x88) = uVar1;
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x0001004689e4(lVar2,uVar1 << 3);
    *(long *)(param_1 + 0x90) = lVar2;
    lVar3 = *(long *)(param_1 + 0x80);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
  }
  *(long *)(param_1 + 0x80) = lVar3 + 1;
  *(long *)(lVar2 + lVar3 * 8) = param_2;
  FUN_104abc79c(param_2,2);
  FUN_104abc91c(&uStack_28,param_1,0,0);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104abc050:
  func_0x000100466b80(param_1);
  return;
}



/* Entry: 104abc06c; end: 104abc097;  */

undefined8 FUN_104abc06c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  func_0x000100460860(0x88);
  func_0x000100460318();
  return uVar1;
}



/* Entry: 104abc098; end: 104abc28b;  */

/* WARNING: Possible PIC construction at 0x000104abc160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104abc170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104abc164) */
/* WARNING: Removing unreachable block (ram,0x000104abc174) */

void FUN_104abc098(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x0001005a5f48();
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = 0;
    do {
      FUN_104abc844(*(undefined8 *)(*(long *)(param_1 + 0x80) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x50) + uVar2 * 8);
      func_0x000100460448(lVar3);
      iVar1 = *(int *)(lVar3 + 0x78) + -1;
      *(int *)(lVar3 + 0x78) = iVar1;
      if (((*(int *)(lVar3 + 0x60) == 0) || (*(int *)(lVar3 + 100) != 0)) ||
         (*(long *)(lVar3 + 0x50) != lVar3 + 0x40 || iVar1 != 0)) {
        func_0x000100466b80(lVar3);
      }
      else {
        *(undefined4 *)(lVar3 + 100) = 1;
        func_0x000100466b80(lVar3);
        FUN_104abd198(lVar3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 104abc28c; end: 104abc357;  */

/* WARNING: Possible PIC construction at 0x000104abc2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104abc344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104abc2f0) */
/* WARNING: Removing unreachable block (ram,0x000104abc30c) */
/* WARNING: Removing unreachable block (ram,0x000104abc324) */
/* WARNING: Removing unreachable block (ram,0x000104abc334) */
/* WARNING: Removing unreachable block (ram,0x000104abc338) */
/* WARNING: Removing unreachable block (ram,0x000104abc314) */
/* WARNING: Removing unreachable block (ram,0x000104abc348) */
/* WARNING: Removing unreachable block (ram,0x000104abd198) */
/* WARNING: Removing unreachable block (ram,0x000104abd1b4) */
/* WARNING: Removing unreachable block (ram,0x000104abd1b8) */
/* WARNING: Removing unreachable block (ram,0x000104abd1d4) */
/* WARNING: Removing unreachable block (ram,0x000104abd1f4) */
/* WARNING: Removing unreachable block (ram,0x000104abd1f8) */

void FUN_104abc28c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  func_0x000100460448();
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x50);
    plVar3 = plVar2;
    lVar4 = lVar1;
    do {
      if (*plVar3 == param_2) {
        lVar1 = lVar1 + -1;
        *(long *)(param_1 + 0x40) = lVar1;
        *plVar3 = plVar2[lVar1];
        plVar2[lVar1] = param_2;
        break;
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  func_0x000107c61268();
  if ((int)param_1 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 104abc358; end: 104abc43b;  */

void FUN_104abc358(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000100460448();
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == *(long *)(param_1 + 0x60)) {
    uVar2 = lVar3 * 2;
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    *(ulong *)(param_1 + 0x60) = uVar2;
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x0001004689e4(lVar1,uVar2 << 3);
    *(long *)(param_1 + 0x68) = lVar1;
    lVar3 = *(long *)(param_1 + 0x58);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x68);
  }
  *(long *)(param_1 + 0x58) = lVar3 + 1;
  *(undefined8 *)(lVar1 + lVar3 * 8) = param_2;
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      if ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x80) + uVar2 * 8) + 8) & 1) == 0) {
        FUN_104abc844(*(undefined8 *)(*(long *)(param_1 + 0x80) + uVar2 * 8));
      }
      else {
        FUN_104abc4a8(param_2);
        *(undefined8 *)(*(long *)(param_1 + 0x80) + lVar3 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x80) + uVar2 * 8);
        lVar3 = lVar3 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x70));
  }
  *(long *)(param_1 + 0x70) = lVar3;
  func_0x000107c61268();
  if ((int)param_1 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 104abc43c; end: 104abc4a7;  */

void FUN_104abc43c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  func_0x000100460448();
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x68);
    plVar3 = plVar2;
    lVar4 = lVar1;
    do {
      if (*plVar3 == param_2) {
        lVar1 = lVar1 + -1;
        *(long *)(param_1 + 0x58) = lVar1;
        *plVar3 = plVar2[lVar1];
        plVar2[lVar1] = param_2;
        break;
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  func_0x000107c61268();
  if ((int)param_1 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 104abc4a8; end: 104abc627;  */

void FUN_104abc4a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000100460448();
  if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
    uVar2 = *(long *)(param_1 + 0x70) * 2;
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    *(ulong *)(param_1 + 0x78) = uVar2;
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x0001004689e4(uVar1,uVar2 << 3);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
  }
  FUN_104abc79c(param_2,2);
  lVar3 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 0x80) + lVar3 * 8) = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    do {
      FUN_104abbf94(*(undefined8 *)(*(long *)(param_1 + 0x50) + uVar2 * 8),param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x40));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = 0;
    do {
      FUN_104abc4a8(*(undefined8 *)(*(long *)(param_1 + 0x68) + uVar2 * 8),param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x58));
  }
  func_0x000107c61268();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abc628; end: 104abc62f;  */

undefined8 FUN_104abc628(void)

{
  return 0;
}



/* Entry: 104abc630; end: 104abc6a7;  */

bool FUN_104abc630(int param_1)

{
  int iVar1;
  
  func_0x000104ac8c90();
  if (param_1 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                        ,0x579,2,"Skipping poll because of no wakeup fd.");
  }
  else {
    iVar1 = param_1;
    func_0x0001004605bc();
    if (iVar1 != 0) {
      uRam00000001136a1f78 = 1;
      func_0x000100460318(0x1136a1f80);
      func_0x000104a6f7fc(FUN_104abd528);
    }
  }
  return param_1 != 0;
}



/* Entry: 104abc6a8; end: 104abc6bb;  */

void FUN_104abc6a8(void)

{
  return;
}



/* Entry: 104abc6bc; end: 104abc74b;  */

undefined8 FUN_104abc6bc(undefined8 param_1)

{
  int iVar1;
  
  if ((int)param_1 != 0) {
    func_0x000104ac8c90();
    iVar1 = (int)param_1;
    if (iVar1 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,0x579,2,"Skipping poll because of no wakeup fd.");
      param_1 = 0;
    }
    else {
      func_0x0001004605bc();
      if (iVar1 != 0) {
        uRam00000001136a1f78 = 1;
        func_0x000100460318(0x1136a1f80);
        func_0x000104a6f7fc(FUN_104abd528);
      }
      puRam00000001136a1fc8 = PTR__poll_1130a60c0;
      PTR__poll_1130a60c0 = FUN_104abd5c4;
      param_1 = 1;
    }
  }
  return param_1;
}



/* Entry: 104abc74c; end: 104abc753;  */

void FUN_104abc74c(void)

{
  return;
}



/* Entry: 104abc754; end: 104abc79b;  */

void FUN_104abc754(long param_1)

{
  int iVar1;
  
  func_0x000100460448(0x1136a1f80);
  *(long *)(param_1 + 0x10) = lRam00000001136a1fc0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lRam00000001136a1fc0 != 0) {
    *(long *)(lRam00000001136a1fc0 + 0x18) = param_1;
  }
  iVar1 = 0x136a1f80;
  lRam00000001136a1fc0 = param_1;
  func_0x000107c61268();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abc79c; end: 104abc7cf;  */

void FUN_104abc79c(undefined4 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uStack_40;
  undefined1 uStack_31;
  
  plVar1 = (long *)(param_1 + 2);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + (param_2 & 0xffffffff);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (0 < lVar4) {
    return;
  }
  func_0x00010bdac218();
  param_1[0x15] = 1;
  if (param_1[0x16] == 0) {
    _close(*param_1);
  }
  uStack_40 = 0;
  func_0x0001004bd7e8(&uStack_31,*(undefined8 *)(param_1 + 0x2e),&uStack_40);
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abc7d0; end: 104abc843;  */

void FUN_104abc7d0(undefined4 *param_1)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  param_1[0x15] = 1;
  if (param_1[0x16] == 0) {
    _close(*param_1);
  }
  uStack_30 = 0;
  func_0x0001004bd7e8(&uStack_21,*(undefined8 *)(param_1 + 0x2e),&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abc844; end: 104abc8bb;  */

void FUN_104abc844(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined *puVar12;
  undefined8 *extraout_x8_01;
  int *piVar13;
  undefined8 *extraout_x9;
  ulong uVar14;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar11 = *plVar1;
    lVar4 = lVar11 + -2;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    func_0x0001005a5f48(param_1 + 0x10);
    func_0x000104abe260(param_1 + 0xc0);
    FUN_104abce08(*(undefined8 *)(param_1 + 0xd8));
    if ((*(ulong *)(param_1 + 0x68) & 1) != 0) {
      func_0x00010084dad0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  if (2 < lVar11) {
    return;
  }
  func_0x00010bdac24c();
  FUN_104bd46a0();
  puVar6 = *(undefined **)(param_1 + 0x10);
  func_0x000100460448();
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_104abc91c(extraout_x8,*(undefined8 *)(param_1 + 0x10),puVar8,2);
    func_0x000100466b80(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  func_0x00010bdac280();
  func_0x0001004bdf74(extraout_x8);
  __Unwind_Resume();
  uVar10 = (uint)param_3;
  *extraout_x8_00 = 0;
  if (puVar8 == (undefined8 *)0x0) {
    ppuVar7 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if (*ppuVar7 == puVar6) goto LAB_104abcb18;
    if (((uint)param_3 >> 1 & 1) != 0) {
      uVar9 = 0x324;
      goto LAB_104abcbc8;
    }
    puVar12 = *(undefined **)(puVar6 + 0x50);
    if (puVar12 != puVar6 + 0x40) {
      lVar4 = *(long *)(puVar12 + 0x18);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(puVar12 + 0x10);
      *(long *)(*(long *)(puVar12 + 0x10) + 0x18) = lVar4;
      ppuVar7 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar8 = extraout_x8_01;
      if ((undefined8 *)*ppuVar7 == extraout_x8_01) {
        extraout_x8_01[2] = extraout_x9;
        extraout_x8_01[3] = *(undefined8 *)(puVar6 + 0x58);
        *(undefined8 **)(puVar6 + 0x58) = extraout_x8_01;
        *(undefined8 **)(extraout_x8_01[3] + 0x10) = extraout_x8_01;
        puVar8 = *(undefined8 **)(puVar6 + 0x50);
        if (puVar8 == extraout_x9) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          lVar4 = puVar8[3];
          *(undefined8 *)(lVar4 + 0x10) = puVar8[2];
          *(long *)(puVar8[2] + 0x18) = lVar4;
        }
        if (((param_3 & 1) == 0) && ((undefined8 *)*ppuVar7 == puVar8)) {
          puVar8[2] = extraout_x9;
          puVar8[3] = *(undefined8 *)(puVar6 + 0x58);
          *(undefined8 **)(puVar6 + 0x58) = puVar8;
          *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
          goto LAB_104abcb18;
        }
        if (puVar8 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar8[2] = extraout_x9;
      puVar8[3] = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 **)(puVar6 + 0x58) = puVar8;
      *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
      func_0x000104ac8cc4(&uStack_98,*puVar8);
      FUN_104abcc6c(extraout_x8_00,&uStack_98);
      if ((uStack_98 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (puVar8 != (undefined8 *)0x1) {
      ppuVar7 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined8 *)*ppuVar7 == puVar8) {
        if ((uVar10 & 1) != 0) {
          if ((uVar10 >> 1 & 1) != 0) {
            *(undefined4 *)(puVar8 + 1) = 1;
          }
          *(undefined4 *)((long)puVar8 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_90,*puVar8);
          FUN_104abcc6c(extraout_x8_00,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if ((uVar10 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar8 + 1) = 1;
        }
        *(undefined4 *)((long)puVar8 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_88,*puVar8);
        FUN_104abcc6c(extraout_x8_00,&uStack_88);
        if ((uStack_88 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    if ((uVar10 >> 1 & 1) != 0) {
      uVar9 = 0x30a;
LAB_104abcbc8:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,uVar9,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar5)();
    }
    for (puVar8 = *(undefined8 **)(puVar6 + 0x50); puVar8 != (undefined8 *)(puVar6 + 0x40);
        puVar8 = (undefined8 *)puVar8[2]) {
      func_0x000104ac8cc4(&uStack_80,*puVar8);
      FUN_104abcc6c(extraout_x8_00,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(puVar6 + 0x68) = 1;
LAB_104abcb18:
  uVar14 = *extraout_x8_00;
  if ((uVar14 & 1) == 0) {
    if (uVar14 == 0) {
      return;
    }
  }
  else {
    piVar13 = (int *)(uVar14 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_78 = uVar14;
  FUN_104abab1c("pollset_kick_ext",&uStack_78,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_78 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar14 & 1) != 0) {
    func_0x00010084dad0(uVar14);
  }
  return;
}



/* Entry: 104abc8bc; end: 104abc91b;  */

void FUN_104abc8bc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong *extraout_x8;
  undefined *puVar10;
  undefined8 *extraout_x8_00;
  int *piVar11;
  undefined8 *extraout_x9;
  ulong uVar12;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar5 = *(undefined **)(param_2 + 0x10);
  func_0x000100460448();
  puVar7 = *(undefined8 **)(param_2 + 0x18);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_104abc91c(param_1,*(undefined8 *)(param_2 + 0x10),puVar7,2);
    func_0x000100466b80(*(undefined8 *)(param_2 + 0x10));
    return;
  }
  func_0x00010bdac280();
  func_0x0001004bdf74(param_1);
  __Unwind_Resume();
  uVar9 = (uint)param_4;
  *extraout_x8 = 0;
  if (puVar7 == (undefined8 *)0x0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if (*ppuVar6 == puVar5) goto LAB_104abcb18;
    if (((uint)param_4 >> 1 & 1) != 0) {
      uVar8 = 0x324;
      goto LAB_104abcbc8;
    }
    puVar10 = *(undefined **)(puVar5 + 0x50);
    if (puVar10 != puVar5 + 0x40) {
      lVar1 = *(long *)(puVar10 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
      *(long *)(*(long *)(puVar10 + 0x10) + 0x18) = lVar1;
      ppuVar6 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar7 = extraout_x8_00;
      if ((undefined8 *)*ppuVar6 == extraout_x8_00) {
        extraout_x8_00[2] = extraout_x9;
        extraout_x8_00[3] = *(undefined8 *)(puVar5 + 0x58);
        *(undefined8 **)(puVar5 + 0x58) = extraout_x8_00;
        *(undefined8 **)(extraout_x8_00[3] + 0x10) = extraout_x8_00;
        puVar7 = *(undefined8 **)(puVar5 + 0x50);
        if (puVar7 == extraout_x9) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          lVar1 = puVar7[3];
          *(undefined8 *)(lVar1 + 0x10) = puVar7[2];
          *(long *)(puVar7[2] + 0x18) = lVar1;
        }
        if (((param_4 & 1) == 0) && ((undefined8 *)*ppuVar6 == puVar7)) {
          puVar7[2] = extraout_x9;
          puVar7[3] = *(undefined8 *)(puVar5 + 0x58);
          *(undefined8 **)(puVar5 + 0x58) = puVar7;
          *(undefined8 **)(puVar7[3] + 0x10) = puVar7;
          goto LAB_104abcb18;
        }
        if (puVar7 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar7[2] = extraout_x9;
      puVar7[3] = *(undefined8 *)(puVar5 + 0x58);
      *(undefined8 **)(puVar5 + 0x58) = puVar7;
      *(undefined8 **)(puVar7[3] + 0x10) = puVar7;
      func_0x000104ac8cc4(&uStack_78,*puVar7);
      FUN_104abcc6c(extraout_x8,&uStack_78);
      if ((uStack_78 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (puVar7 != (undefined8 *)0x1) {
      ppuVar6 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined8 *)*ppuVar6 == puVar7) {
        if ((uVar9 & 1) != 0) {
          if ((uVar9 >> 1 & 1) != 0) {
            *(undefined4 *)(puVar7 + 1) = 1;
          }
          *(undefined4 *)((long)puVar7 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_70,*puVar7);
          FUN_104abcc6c(extraout_x8,&uStack_70);
          if ((uStack_70 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if ((uVar9 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar7 + 1) = 1;
        }
        *(undefined4 *)((long)puVar7 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_68,*puVar7);
        FUN_104abcc6c(extraout_x8,&uStack_68);
        if ((uStack_68 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    if ((uVar9 >> 1 & 1) != 0) {
      uVar8 = 0x30a;
LAB_104abcbc8:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,uVar8,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar4)();
    }
    for (puVar7 = *(undefined8 **)(puVar5 + 0x50); puVar7 != (undefined8 *)(puVar5 + 0x40);
        puVar7 = (undefined8 *)puVar7[2]) {
      func_0x000104ac8cc4(&uStack_60,*puVar7);
      FUN_104abcc6c(extraout_x8,&uStack_60);
      if ((uStack_60 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(puVar5 + 0x68) = 1;
LAB_104abcb18:
  uVar12 = *extraout_x8;
  if ((uVar12 & 1) == 0) {
    if (uVar12 == 0) {
      return;
    }
  }
  else {
    piVar11 = (int *)(uVar12 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = uVar12;
  FUN_104abab1c("pollset_kick_ext",&uStack_58,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar12 & 1) != 0) {
    func_0x00010084dad0(uVar12);
  }
  return;
}



/* Entry: 104abc91c; end: 104abcc6b;  */

void FUN_104abc91c(ulong *param_1,undefined *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *extraout_x8;
  int *piVar8;
  undefined8 *extraout_x9;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  *param_1 = 0;
  if (param_3 == (undefined8 *)0x0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if (*ppuVar5 == param_2) goto LAB_104abcb18;
    if (((uint)param_4 >> 1 & 1) != 0) {
      uVar6 = 0x324;
      goto LAB_104abcbc8;
    }
    puVar7 = *(undefined **)(param_2 + 0x50);
    if (puVar7 != param_2 + 0x40) {
      lVar1 = *(long *)(puVar7 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
      *(long *)(*(long *)(puVar7 + 0x10) + 0x18) = lVar1;
      ppuVar5 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar10 = extraout_x8;
      if ((undefined8 *)*ppuVar5 == extraout_x8) {
        extraout_x8[2] = extraout_x9;
        extraout_x8[3] = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 **)(param_2 + 0x58) = extraout_x8;
        *(undefined8 **)(extraout_x8[3] + 0x10) = extraout_x8;
        puVar10 = *(undefined8 **)(param_2 + 0x50);
        if (puVar10 == extraout_x9) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          lVar1 = puVar10[3];
          *(undefined8 *)(lVar1 + 0x10) = puVar10[2];
          *(long *)(puVar10[2] + 0x18) = lVar1;
        }
        if (((param_4 & 1) == 0) && ((undefined8 *)*ppuVar5 == puVar10)) {
          puVar10[2] = extraout_x9;
          puVar10[3] = *(undefined8 *)(param_2 + 0x58);
          *(undefined8 **)(param_2 + 0x58) = puVar10;
          *(undefined8 **)(puVar10[3] + 0x10) = puVar10;
          goto LAB_104abcb18;
        }
        if (puVar10 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar10[2] = extraout_x9;
      puVar10[3] = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 **)(param_2 + 0x58) = puVar10;
      *(undefined8 **)(puVar10[3] + 0x10) = puVar10;
      func_0x000104ac8cc4(&uStack_58,*puVar10);
      FUN_104abcc6c(param_1,&uStack_58);
      if ((uStack_58 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (param_3 != (undefined8 *)0x1) {
      ppuVar5 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined8 *)*ppuVar5 == param_3) {
        if ((param_4 & 1) != 0) {
          if (((uint)param_4 >> 1 & 1) != 0) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(undefined4 *)((long)param_3 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_50,*param_3);
          FUN_104abcc6c(param_1,&uStack_50);
          if ((uStack_50 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if (((uint)param_4 >> 1 & 1) != 0) {
          *(undefined4 *)(param_3 + 1) = 1;
        }
        *(undefined4 *)((long)param_3 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_48,*param_3);
        FUN_104abcc6c(param_1,&uStack_48);
        if ((uStack_48 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    if (((uint)param_4 >> 1 & 1) != 0) {
      uVar6 = 0x30a;
LAB_104abcbc8:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,uVar6,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar4)();
    }
    for (puVar10 = *(undefined8 **)(param_2 + 0x50); puVar10 != (undefined8 *)(param_2 + 0x40);
        puVar10 = (undefined8 *)puVar10[2]) {
      func_0x000104ac8cc4(&uStack_40,*puVar10);
      FUN_104abcc6c(param_1,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(param_2 + 0x68) = 1;
LAB_104abcb18:
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    if (uVar9 == 0) {
      return;
    }
  }
  else {
    piVar8 = (int *)(uVar9 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = uVar9;
  FUN_104abab1c("pollset_kick_ext",&uStack_38,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar9 & 1) != 0) {
    func_0x00010084dad0(uVar9);
  }
  return;
}



/* Entry: 104abcc6c; end: 104abce07;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104abcc6c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  if (*param_2 == 0) {
    return;
  }
  auStack_58[0] = *param_1;
  if (auStack_58[0] == 0) {
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    FUN_104ab5920(&uStack_30,2,"Kick Failure",0xc,&uStack_31,auStack_58 + 1);
    uVar3 = *param_1;
    if (uStack_30 == uVar3) {
LAB_104abcce4:
      if ((uVar3 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_1 = uStack_30;
      uStack_30 = 0x36;
      if ((uVar3 & 1) != 0) {
        func_0x00010084dad0();
        uVar3 = uStack_30;
        goto LAB_104abcce4;
      }
    }
    puStack_28 = auStack_58 + 1;
    func_0x000100482b64(&puStack_28);
    auStack_58[0] = *param_1;
  }
  if ((auStack_58[0] & 1) != 0) {
    piVar5 = (int *)(auStack_58[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = *param_2;
  if ((uStack_60 & 1) != 0) {
    piVar5 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001008306c4(&puStack_28,auStack_58,&uStack_60);
  puVar4 = (ulong *)*param_1;
  if (puStack_28 != puVar4) {
    *param_1 = (ulong)puStack_28;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar4 & 1) == 0) goto LAB_104abcd7c;
    func_0x00010084dad0();
    puVar4 = puStack_28;
  }
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104abcd7c:
  if ((uStack_60 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((auStack_58[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abce08; end: 104abce8f;  */

void FUN_104abce08(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (cRam00000001136a1f78 != '\x01') {
    return;
  }
  func_0x000100460448(0x1136a1f80);
  if (lRam00000001136a1fc0 == param_1) {
    lRam00000001136a1fc0 = *(long *)(param_1 + 0x10);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(*(long *)(param_1 + 0x10) + 0x18) = lVar2;
  }
  func_0x000100460314(param_1);
  iVar1 = 0x136a1f80;
  func_0x000107c61268();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abce90; end: 104abcf1f;  */

undefined8 FUN_104abce90(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar1 = 0;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    if (lVar2 == 1) {
      return 0;
    }
    FUN_104abcf20(&uStack_30,param_1);
    func_0x0001004bd7e8(&uStack_21,lVar2,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
    lVar2 = 0;
    uVar1 = 1;
  }
  *param_2 = lVar2;
  return uVar1;
}



/* Entry: 104abcf20; end: 104abcfaf;  */

void FUN_104abcf20(undefined8 *param_1,long param_2)

{
  undefined1 uStack_29;
  ulong uStack_28;
  
  if (*(int *)(param_2 + 0x50) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_104aba878(&uStack_28,2,"FD shutdown",0xb,&uStack_29,1,param_2 + 0x68);
    FUN_104abaa50(param_1,&uStack_28,3,0xe);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104abcfb0; end: 104abd107;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104abcfb0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong *puStack_28;
  
  if ((*(int *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x60) == 0)) {
    if (*param_2 == 1) {
      *param_2 = 0;
      FUN_104abcf20(auStack_68,param_1);
      func_0x0001004bd7e8(&puStack_28,param_3,auStack_68);
      if ((auStack_68[0] & 1) != 0) {
        func_0x00010084dad0();
      }
      FUN_104abd108(param_1);
    }
    else {
      if (*param_2 != 0) {
        func_0x00010bdac2b4();
        FUN_104bd46a0();
        func_0x0001004bdf74(auStack_68);
        __Unwind_Resume();
        pcStack_78 = FUN_104abd108;
        plVar1 = *(long **)(param_1 + 0x70);
        puStack_80 = &stack0xfffffffffffffff0;
        if (plVar1 == (long *)(param_1 + 0x70)) {
          if (*(long *)(param_1 + 0x98) == 0) {
            if (*(long *)(param_1 + 0xa0) != 0) {
              FUN_104abc8bc(&uStack_98);
              if ((uStack_98 & 1) != 0) {
                func_0x00010084dad0();
              }
            }
          }
          else {
            FUN_104abc8bc(&uStack_90,*(long *)(param_1 + 0x98));
            if ((uStack_90 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
        }
        else {
          FUN_104abc8bc(&uStack_88,plVar1);
          if ((uStack_88 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        return;
      }
      *param_2 = param_3;
    }
  }
  else {
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    FUN_104ab5920(&uStack_40,2,"FD shutdown",0xb,&uStack_41,auStack_68 + 1);
    FUN_104abaa50(&uStack_38,&uStack_40,3,0xe);
    func_0x0001004bd7e8(&uStack_29,param_3,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = auStack_68 + 1;
    func_0x000100482b64(&puStack_28);
  }
  return;
}



/* Entry: 104abd108; end: 104abd197;  */

void FUN_104abd108(long param_1)

{
  long *plVar1;
  ulong uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)(param_1 + 0x70)) {
    if (*(long *)(param_1 + 0x98) == 0) {
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_104abc8bc(&uStack_28);
        if ((uStack_28 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
    }
    else {
      FUN_104abc8bc(&uStack_20,*(long *)(param_1 + 0x98));
      if ((uStack_20 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  else {
    FUN_104abc8bc(&uStack_18,plVar1);
    if ((uStack_18 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104abd198; end: 104abd21f;  */

void FUN_104abd198(long param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar1 = 0;
    do {
      FUN_104abc844(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  uStack_30 = 0;
  func_0x0001004bd7e8(&uStack_21,*(undefined8 *)(param_1 + 0x70),&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abd220; end: 104abd3bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104abd220(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  if (*param_2 == 0) {
    return;
  }
  auStack_58[0] = *param_1;
  if (auStack_58[0] == 0) {
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    FUN_104ab5920(&uStack_30,2,"pollset_work",0xc,&uStack_31,auStack_58 + 1);
    uVar3 = *param_1;
    if (uStack_30 == uVar3) {
LAB_104abd298:
      if ((uVar3 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_1 = uStack_30;
      uStack_30 = 0x36;
      if ((uVar3 & 1) != 0) {
        func_0x00010084dad0();
        uVar3 = uStack_30;
        goto LAB_104abd298;
      }
    }
    puStack_28 = auStack_58 + 1;
    func_0x000100482b64(&puStack_28);
    auStack_58[0] = *param_1;
  }
  if ((auStack_58[0] & 1) != 0) {
    piVar5 = (int *)(auStack_58[0] - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = *param_2;
  if ((uStack_60 & 1) != 0) {
    piVar5 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001008306c4(&puStack_28,auStack_58,&uStack_60);
  puVar4 = (ulong *)*param_1;
  if (puStack_28 != puVar4) {
    *param_1 = (ulong)puStack_28;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar4 & 1) == 0) goto LAB_104abd330;
    func_0x00010084dad0();
    puVar4 = puStack_28;
  }
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104abd330:
  if ((uStack_60 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((auStack_58[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abd3bc; end: 104abd527;  */

void FUN_104abd3bc(long *param_1,int param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int *piVar13;
  undefined8 *extraout_x9;
  long lVar14;
  ulong uVar15;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong auStack_78 [3];
  undefined *puStack_60;
  
  lVar14 = param_1[4];
  if (lVar14 == 0) {
    return;
  }
  uVar15 = param_3;
  func_0x000100460448(lVar14 + 0x10);
  if (*(long **)(lVar14 + 0x98) == param_1) {
    bVar4 = param_2 == 0;
    *(undefined8 *)(lVar14 + 0x98) = 0;
    if (*(long **)(lVar14 + 0xa0) == param_1) goto LAB_104abd470;
  }
  else if (*(long **)(lVar14 + 0xa0) == param_1) {
    bVar4 = false;
LAB_104abd470:
    if ((int)param_3 == 0) {
      bVar4 = true;
    }
    *(undefined8 *)(lVar14 + 0xa0) = 0;
  }
  else if (param_1[3] == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    lVar8 = *param_1;
    *(long *)(lVar8 + 8) = param_1[1];
    *(long *)param_1[1] = lVar8;
  }
  if ((param_2 != 0) && (lVar8 = lVar14, FUN_104abce90(lVar14,lVar14 + 0xa8), (int)lVar8 != 0)) {
    bVar4 = true;
  }
  if ((int)param_3 == 0) {
    if (bVar4) goto LAB_104abd4ac;
  }
  else {
    lVar8 = lVar14;
    FUN_104abce90(lVar14,lVar14 + 0xb0);
    if ((int)lVar8 != 0 || bVar4) {
LAB_104abd4ac:
      FUN_104abd108(lVar14);
    }
  }
  if (((((*(ulong *)(lVar14 + 8) & 1) == 0) && (*(long *)(lVar14 + 0x98) == 0)) &&
      (*(long *)(lVar14 + 0xa0) == 0)) &&
     ((*(long **)(lVar14 + 0x70) == (long *)(lVar14 + 0x70) && (*(int *)(lVar14 + 0x54) == 0)))) {
    FUN_104abc7d0(lVar14);
  }
  func_0x000100466b80(lVar14 + 0x10);
  plVar1 = (long *)(lVar14 + 8);
  do {
    lVar12 = *plVar1;
    lVar8 = lVar12 + -2;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    func_0x0001005a5f48(lVar14 + 0x10);
    func_0x000104abe260(lVar14 + 0xc0);
    FUN_104abce08(*(undefined8 *)(lVar14 + 0xd8));
    if ((*(ulong *)(lVar14 + 0x68) & 1) != 0) {
      func_0x00010084dad0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar14);
    return;
  }
  if (2 < lVar12) {
    return;
  }
  func_0x00010bdac24c();
  FUN_104bd46a0();
  puVar5 = *(undefined **)(lVar14 + 0x10);
  func_0x000100460448();
  puVar9 = *(undefined8 **)(lVar14 + 0x18);
  if (puVar9 != (undefined8 *)0x0) {
    FUN_104abc91c(extraout_x8,*(undefined8 *)(lVar14 + 0x10),puVar9,2);
    func_0x000100466b80(*(undefined8 *)(lVar14 + 0x10));
    return;
  }
  func_0x00010bdac280();
  func_0x0001004bdf74(extraout_x8);
  puVar6 = puVar5;
  __Unwind_Resume();
  uVar11 = (uint)uVar15;
  *extraout_x8_00 = 0;
  puStack_60 = puVar5;
  if (puVar9 == (undefined8 *)0x0) {
    ppuVar7 = &PTR___tlv_bootstrap_11340d930;
    (*(code *)PTR___tlv_bootstrap_11340d930)();
    if (*ppuVar7 == puVar6) goto LAB_104abcb18;
    if (((uint)uVar15 >> 1 & 1) != 0) {
      uVar10 = 0x324;
      goto LAB_104abcbc8;
    }
    puVar5 = *(undefined **)(puVar6 + 0x50);
    if (puVar5 != puVar6 + 0x40) {
      lVar14 = *(long *)(puVar5 + 0x18);
      *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(puVar5 + 0x10);
      *(long *)(*(long *)(puVar5 + 0x10) + 0x18) = lVar14;
      ppuVar7 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      puVar9 = extraout_x8_01;
      if ((undefined8 *)*ppuVar7 == extraout_x8_01) {
        extraout_x8_01[2] = extraout_x9;
        extraout_x8_01[3] = *(undefined8 *)(puVar6 + 0x58);
        *(undefined8 **)(puVar6 + 0x58) = extraout_x8_01;
        *(undefined8 **)(extraout_x8_01[3] + 0x10) = extraout_x8_01;
        puVar9 = *(undefined8 **)(puVar6 + 0x50);
        if (puVar9 == extraout_x9) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          lVar14 = puVar9[3];
          *(undefined8 *)(lVar14 + 0x10) = puVar9[2];
          *(long *)(puVar9[2] + 0x18) = lVar14;
        }
        if (((uVar15 & 1) == 0) && ((undefined8 *)*ppuVar7 == puVar9)) {
          puVar9[2] = extraout_x9;
          puVar9[3] = *(undefined8 *)(puVar6 + 0x58);
          *(undefined8 **)(puVar6 + 0x58) = puVar9;
          *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
          goto LAB_104abcb18;
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_104abcb18;
      }
      puVar9[2] = extraout_x9;
      puVar9[3] = *(undefined8 *)(puVar6 + 0x58);
      *(undefined8 **)(puVar6 + 0x58) = puVar9;
      *(undefined8 **)(puVar9[3] + 0x10) = puVar9;
      func_0x000104ac8cc4(&uStack_98,*puVar9);
      FUN_104abcc6c(extraout_x8_00,&uStack_98);
      if ((uStack_98 & 1) != 0) {
        func_0x00010084dad0();
      }
      goto LAB_104abcb18;
    }
  }
  else {
    if (puVar9 != (undefined8 *)0x1) {
      ppuVar7 = &PTR___tlv_bootstrap_11340d918;
      (*(code *)PTR___tlv_bootstrap_11340d918)();
      if ((undefined8 *)*ppuVar7 == puVar9) {
        if ((uVar11 & 1) != 0) {
          if ((uVar11 >> 1 & 1) != 0) {
            *(undefined4 *)(puVar9 + 1) = 1;
          }
          *(undefined4 *)((long)puVar9 + 0xc) = 1;
          func_0x000104ac8cc4(&uStack_90,*puVar9);
          FUN_104abcc6c(extraout_x8_00,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
      }
      else {
        if ((uVar11 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar9 + 1) = 1;
        }
        *(undefined4 *)((long)puVar9 + 0xc) = 1;
        func_0x000104ac8cc4(&uStack_88,*puVar9);
        FUN_104abcc6c(extraout_x8_00,&uStack_88);
        if ((uStack_88 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      goto LAB_104abcb18;
    }
    if ((uVar11 >> 1 & 1) != 0) {
      uVar10 = 0x30a;
LAB_104abcbc8:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                          ,uVar10,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104abcbf4);
      (*pcVar3)();
    }
    for (puVar9 = *(undefined8 **)(puVar6 + 0x50); puVar9 != (undefined8 *)(puVar6 + 0x40);
        puVar9 = (undefined8 *)puVar9[2]) {
      func_0x000104ac8cc4(&uStack_80,*puVar9);
      FUN_104abcc6c(extraout_x8_00,&uStack_80);
      if ((uStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  *(undefined4 *)(puVar6 + 0x68) = 1;
LAB_104abcb18:
  uVar15 = *extraout_x8_00;
  if ((uVar15 & 1) == 0) {
    if (uVar15 == 0) {
      return;
    }
  }
  else {
    piVar13 = (int *)(uVar15 - 1);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  auStack_78[0] = uVar15;
  FUN_104abab1c("pollset_kick_ext",auStack_78,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                ,0x33e);
  if ((auStack_78[0] & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar15 & 1) != 0) {
    func_0x00010084dad0(uVar15);
  }
  return;
}



/* Entry: 104abd528; end: 104abd5c3;  */

void FUN_104abd528(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  func_0x000100460448(0x1136a1f80);
  for (; puRam00000001136a1fc0 != (undefined8 *)0x0;
      puRam00000001136a1fc0 = (undefined8 *)puRam00000001136a1fc0[2]) {
    puVar2 = (undefined4 *)*puRam00000001136a1fc0;
    if (puVar2 == (undefined4 *)0x0) {
      _close(*(undefined4 *)puRam00000001136a1fc0[1]);
      puVar2 = (undefined4 *)puRam00000001136a1fc0[1];
      *puVar2 = 0xffffffff;
      _close(puVar2[1]);
      *(undefined4 *)(puRam00000001136a1fc0[1] + 4) = 0xffffffff;
    }
    else {
      if (puVar2[0x15] == 0) {
        _close(*puVar2);
        puVar2 = (undefined4 *)*puRam00000001136a1fc0;
      }
      *puVar2 = 0xffffffff;
    }
  }
  iVar1 = 0x136a1f80;
  func_0x000107c61268();
  if (iVar1 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104abd5c4; end: 104abd5e3;  */

undefined1  [16] FUN_104abd5c4(undefined8 param_1,ulong param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long alStack_98 [8];
  long lStack_58;
  
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104abd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001136a1fc8)();
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  func_0x00010bdac2d8();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_98;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0xfffffffffffffff0);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_98;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104abd5e4; end: 104abd5eb;  */

undefined1  [16]
FUN_104abd5e4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104abd5ec; end: 104abd61b;  */

void FUN_104abd5ec(void)

{
  func_0x00010045fe6c(0x1130a6120,FUN_104abd96c);
                    /* WARNING: Could not recover jumptable at 0x000104abd618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0xf0))();
  return;
}



/* Entry: 104abd61c; end: 104abd62b;  */

void FUN_104abd61c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abd628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0x100))();
  return;
}



/* Entry: 104abd62c; end: 104abd657;  */

void FUN_104abd62c(void)

{
  FUN_104abde80();
  return;
}



/* Entry: 104abd658; end: 104abd67b;  */

bool FUN_104abd658(void)

{
  if (lRam00000001136a1fd0 != 0) {
    return *(char *)(lRam00000001136a1fd0 + 9) != '\0';
  }
  return false;
}



/* Entry: 104abd67c; end: 104abd6eb;  */

void FUN_104abd67c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(lRam00000001136a1fd0 + 0x10);
  if ((int)param_3 != 0) {
    uVar1 = param_1;
    FUN_104abde80();
    if ((int)uVar1 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = (ulong)(*(char *)(lRam00000001136a1fd0 + 8) != '\0');
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000104abd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



/* Entry: 104abd6ec; end: 104abd70b;  */

void FUN_104abd6ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abd6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0x18))();
  return;
}



/* Entry: 104abd70c; end: 104abd783;  */

void FUN_104abd70c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(lRam00000001136a1fd0 + 0x28);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104abd784; end: 104abd8db;  */

void FUN_104abd784(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0x60))();
  return;
}



/* Entry: 104abd8dc; end: 104abd95b;  */

undefined8 FUN_104abd8dc(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(lRam00000001136a1fd0 + 0x108);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104abd95c; end: 104abd96b;  */

void FUN_104abd95c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104abd968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a1fd0 + 0xf8))();
  return;
}



/* Entry: 104abd96c; end: 104abdb87;  */

void FUN_104abd96c(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  func_0x00010045ffc4(&lStack_68,&PTR_DAT_1130a61b8);
  lVar6 = lStack_68;
  uStack_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  lVar7 = lStack_68;
  _strchr(lStack_68,0x2c);
  while (lVar7 != 0) {
    FUN_104abdb88(lVar6,lVar7,&puStack_70,&uStack_78);
    lVar6 = lVar7 + 1;
    lVar7 = lVar6;
    _strchr(lVar6,0x2c);
  }
  lVar7 = lVar6;
  _strlen(lVar6);
  FUN_104abdb88(lVar6,lVar6 + lVar7,&puStack_70,&uStack_78);
  puVar3 = puStack_70;
  uVar1 = uStack_78;
  puVar2 = puVar3;
  if ((lRam00000001136a1fd0 == 0) && (uStack_78 != 0)) {
    uVar11 = 0;
    do {
      lVar6 = 0;
      uVar9 = puVar3[uVar11];
      do {
        lVar7 = *(long *)(lVar6 + 0x1130a60c8);
        if (lVar7 != 0) {
          uVar10 = *(undefined8 *)(lVar7 + 0xe0);
          uVar5 = uVar9;
          _strcmp(uVar9,"all");
          if (((int)uVar5 == 0) || (uVar5 = uVar9, _strcmp(uVar9,uVar10), (int)uVar5 == 0)) {
            pcVar8 = *(code **)(lVar7 + 0xe8);
            uVar5 = uVar9;
            _strcmp(uVar9,uVar10);
            uVar4 = (uint)((int)uVar5 == 0);
            (*pcVar8)();
            if (uVar4 != 0) {
              lRam00000001136a1fd0 = *(long *)(lVar6 + 0x1130a60c8);
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
                                  ,0x8d,0,"Using polling engine: %s");
              break;
            }
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x58);
      uVar11 = uVar11 + 1;
    } while (lRam00000001136a1fd0 == 0 && uVar11 < uVar1);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    func_0x000100460314(*puVar2);
    puVar2 = puVar2 + 1;
  }
  func_0x000100460314(puVar3);
  lVar6 = lStack_68;
  if (lRam00000001136a1fd0 == 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
                        ,0xbe,2,"No event engine could be initialized from %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x104abdb54);
    (*pcVar8)();
  }
  lStack_68 = 0;
  if (lVar6 != 0) {
    func_0x000100460314();
  }
  return;
}



/* Entry: 104abdb88; end: 104abdc0b;  */

ulong FUN_104abdb88(ulong param_1,ulong param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 <= param_2) {
    lVar4 = *param_4;
    lVar1 = lVar4 + 1;
    lVar2 = (param_2 - param_1) + 1;
    func_0x000100460200();
    _memcpy();
    *(undefined1 *)(lVar2 + (param_2 - param_1)) = 0;
    uVar3 = *param_3;
    func_0x0001004689e4(uVar3,lVar1 * 8);
    *param_3 = uVar3;
    *(long *)(uVar3 + lVar4 * 8) = lVar2;
    *param_4 = lVar1;
    return uVar3;
  }
  func_0x00010bdac328();
  if (lRam00000001136a1fd8 == 0) {
    uVar3 = 0;
    if (uRam00000001136a1fe0 != 0) {
      func_0x00010bdac400();
      return (ulong)(0 < *(long *)(lRam00000001136a1fd8 + 0x18));
    }
  }
  else {
    func_0x0001004626d4(lRam00000001136a1fd8,0);
    func_0x0001004626d4(uRam00000001136a1fe0,0);
    if (lRam00000001136a1fd8 != 0) {
      __ZdlPv();
    }
    uVar3 = uRam00000001136a1fe0;
    if (uRam00000001136a1fe0 != 0) {
      __ZdlPv();
      uVar3 = uRam00000001136a1fe0;
    }
    lRam00000001136a1fd8 = 0;
    uRam00000001136a1fe0 = 0;
  }
  return uVar3;
}



/* Entry: 104abdc0c; end: 104abdc7f;  */

ulong FUN_104abdc0c(void)

{
  ulong uVar1;
  
  if (lRam00000001136a1fd8 == 0) {
    uVar1 = 0;
    if (uRam00000001136a1fe0 != 0) {
      func_0x00010bdac400();
      return (ulong)(0 < *(long *)(lRam00000001136a1fd8 + 0x18));
    }
  }
  else {
    func_0x0001004626d4(lRam00000001136a1fd8,0);
    func_0x0001004626d4(uRam00000001136a1fe0,0);
    if (lRam00000001136a1fd8 != 0) {
      __ZdlPv();
    }
    uVar1 = uRam00000001136a1fe0;
    if (uRam00000001136a1fe0 != 0) {
      __ZdlPv();
      uVar1 = uRam00000001136a1fe0;
    }
    lRam00000001136a1fd8 = 0;
    uRam00000001136a1fe0 = 0;
  }
  return uVar1;
}



/* Entry: 104abdc80; end: 104abdc9b;  */

bool FUN_104abdc80(void)

{
  return 0 < *(long *)(lRam00000001136a1fd8 + 0x18);
}



/* Entry: 104abdc9c; end: 104abdd1b;  */

void FUN_104abdc9c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam00000001136a1fd8;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  func_0x0001004c1264(uVar3,param_1,&uStack_28,1);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  return;
}



/* Entry: 104abdd1c; end: 104abdd9b;  */

void FUN_104abdd1c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam00000001136a1fd8;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  func_0x0001004c1264(uVar3,param_1,&uStack_28,0);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  return;
}



/* Entry: 104abdd9c; end: 104abde1b;  */

void FUN_104abdd9c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam00000001136a1fe0;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  func_0x0001004c1264(uVar3,param_1,&uStack_28,0);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  return;
}



/* Entry: 104abde1c; end: 104abde23;  */

undefined1  [16]
FUN_104abde1c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104abde24; end: 104abde7f;  */

undefined8 FUN_104abde24(undefined8 param_1)

{
  _if_nametoindex();
  if ((int)param_1 == 0) {
    ___error();
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/grpc_if_nametoindex_posix.cc"
                        ,0x23,0,"if_nametoindex failed for name %s. errno %d");
  }
  return param_1;
}



/* Entry: 104abde80; end: 104abdec7;  */

undefined8 FUN_104abde80(void)

{
  return 0;
}



/* Entry: 104abdec8; end: 104abe17b;  */

void FUN_104abdec8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = 1;
  func_0x000100467380();
  uVar3 = 10;
  uVar7 = 3;
  func_0x000104a6f56c(10,3);
  func_0x00010047e648(uVar2,param_2,uVar3,uVar7);
  func_0x000100467380(1);
  FUN_104ac86a0();
  FUN_104abe2b4();
  func_0x000100460448(0x1136a1fe8);
  if (lRam00000001136a2060 != 0x1136a2058) {
    do {
      plVar4 = (long *)0x1;
      func_0x000100467380();
      func_0x00010046778c();
      uVar2 = 1;
      uVar3 = 3;
      func_0x000104a6f56c(1,3);
      func_0x000100466678(plVar4,param_2,uVar2,uVar3);
      puVar6 = param_2;
      if (-1 < (int)plVar4) {
        lVar8 = lRam00000001136a2060;
        if (lRam00000001136a2060 != 0x1136a2058) {
          do {
            plVar4 = (long *)(lVar8 + 8);
            lVar8 = *plVar4;
          } while (*plVar4 != 0x1136a2058);
          param_2 = (undefined8 *)0x71;
          func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                              ,0x71,0,"Waiting for %lu iomgr objects to be destroyed");
        }
        plVar4 = (long *)0x1;
        func_0x000100467380();
        puVar6 = param_2;
      }
      func_0x000100460dc4();
      lVar8 = *plVar4;
      *(undefined8 *)(lVar8 + 0x38) = 0x7fffffffffffffff;
      *(undefined1 *)(lVar8 + 0x34) = 1;
      iVar1 = 0;
      func_0x000100490d7c();
      if (iVar1 == 2) {
        puVar5 = (undefined8 *)0x1136a1fe8;
        func_0x000100466b80();
        func_0x000100460dc4();
        func_0x000100467970(*puVar5);
        FUN_104abe2b4();
        func_0x000100460448(0x1136a1fe8);
        param_2 = puVar6;
      }
      else {
        if (lRam00000001136a2060 == 0x1136a2058) break;
        if (cRam00000001136a2070 != '\0') {
          func_0x00010bdac434();
          for (lVar8 = lRam00000001136a2060; lVar8 != 0x1136a2058; lVar8 = *(long *)(lVar8 + 8)) {
            func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                                ,0x5d,0,"%s OBJECT: %s %p");
          }
          return;
        }
        uVar3 = 0;
        func_0x000100467380(0);
        uVar2 = 100;
        uVar7 = 3;
        func_0x00010047e734(100,3);
        func_0x00010047e648(uVar3,puVar6,uVar2,uVar7);
        iVar1 = 0x136a2028;
        param_2 = (undefined8 *)0x1136a1fe8;
        func_0x000100466590(0x1136a2028,0x1136a1fe8,uVar3,puVar6);
        if (iVar1 != 0) {
          iVar1 = 1;
          func_0x000100467380();
          func_0x000100466678();
          if (0 < iVar1) {
            lVar8 = lRam00000001136a2060;
            if (lRam00000001136a2060 != 0x1136a2058) {
              do {
                plVar4 = (long *)(lVar8 + 8);
                lVar8 = *plVar4;
              } while (*plVar4 != 0x1136a2058);
              func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                                  ,0x90,0,
                                  "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely"
                                 );
              FUN_104abe17c();
            }
            break;
          }
        }
      }
    } while (lRam00000001136a2060 != 0x1136a2058);
  }
  puVar6 = (undefined8 *)0x1136a1fe8;
  func_0x000100466b80();
  func_0x000104ac82b4();
  func_0x000100460dc4();
  func_0x000100467970(*puVar6);
  FUN_104abdc0c();
  func_0x000100460448(0x1136a1fe8);
  func_0x000100466b80(0x1136a1fe8);
  func_0x000104abe2c4();
  func_0x0001005a5f48(0x1136a1fe8);
  puVar6 = (undefined8 *)0x1136a2028;
  func_0x000107c61220();
  if ((int)puVar6 == 0) {
    return;
  }
  func_0x000107c2c144();
  plVar4 = (long *)*puVar6;
  *puVar6 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100832c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x68))(plVar4,&DAT_10f78e59e);
  return;
}



/* Entry: 104abe17c; end: 104abe203;  */

void FUN_104abe17c(void)

{
  long lVar1;
  
  for (lVar1 = lRam00000001136a2060; lVar1 != 0x1136a2058; lVar1 = *(long *)(lVar1 + 8)) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                        ,0x5d,0,"%s OBJECT: %s %p");
  }
  return;
}


