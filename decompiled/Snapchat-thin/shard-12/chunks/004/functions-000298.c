/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109107388; end: 1091073d3;  */

void FUN_109107388(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [32];
  undefined8 uStack_30;
  
  func_0x000109108698(param_1,&DAT_10f551c1f,param_3,auStack_50);
  if (param_1 == 0) {
    func_0x0001091085f0(uStack_30);
    FUN_1091073d4();
  }
  return;
}



/* Entry: 1091073d4; end: 1091075ff;  */

undefined4 FUN_1091073d4(long param_1,long param_2)

{
  undefined1 in_CY;
  bool bVar1;
  char *extraout_x8;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  long extraout_x9;
  long lVar5;
  char *pcStack_48;
  long lStack_40;
  
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x00010910855c();
  if ((bool)in_CY) {
    pcStack_48 = extraout_x8 + 1;
    lVar2 = extraout_x9 + -1;
    bVar1 = *extraout_x8 == '\0';
  }
  else {
    bVar1 = false;
    lVar2 = -1;
  }
  func_0x0001091086a8(lVar2);
  pcVar3 = *(char **)(param_1 + 0x28);
  if ((((pcVar3 == (char *)0x0) || (*pcVar3 != 'm')) || (pcVar3[1] != 'i')) || (pcVar3[2] != 'n')) {
    if (!bVar1) {
      return 0x17;
    }
  }
  else {
    uVar4 = 0x17;
    if (pcVar3[3] == 'f') {
      uVar4 = 0;
    }
    if (!(bool)(pcVar3[3] != 'f' & bVar1)) {
      return uVar4;
    }
  }
  func_0x000109108580();
  FUN_1091069cc(&pcStack_48,lVar5 + 0xb0);
  lVar2 = 0;
  if (0xc < lStack_40 + 1U) {
    lVar2 = 0xc;
  }
  *(char **)(lVar5 + 0xb8) = pcStack_48 + lVar2;
  return 0;
}



/* Entry: 109107600; end: 10910761b;  */

undefined8 FUN_109107600(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x68);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x5c) = 1;
  }
  return 0;
}



/* Entry: 10910761c; end: 10910823b;  */

void FUN_10910761c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  ulong uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  long *plVar25;
  long *plVar26;
  char **ppcVar27;
  int extraout_w8;
  int extraout_w8_00;
  int *piVar28;
  long lVar29;
  long extraout_x8;
  long extraout_x8_00;
  char *extraout_x8_01;
  char *extraout_x8_02;
  char *extraout_x8_03;
  long lVar30;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  ulong uVar31;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 extraout_x9_03;
  long lVar32;
  long extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 uVar33;
  undefined8 extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x13;
  char *pcVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  char **ppcVar39;
  uint uVar40;
  int iVar41;
  uint uStack_198;
  undefined1 uStack_168;
  undefined1 uStack_167;
  byte bStack_166;
  undefined1 uStack_165;
  uint uStack_164;
  long lStack_160;
  long lStack_148;
  char *pcStack_138;
  ulong uStack_130;
  char *pcStack_128;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  char *pcStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  char *pcStack_b8;
  long lStack_b0;
  undefined8 uStack_98;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lVar36 = *(long *)(param_2 + 0x10);
  pcVar34 = *(char **)(param_1 + 0x20);
  lVar37 = *(long *)(param_1 + 8);
  if (1 < lVar37 + 1U) {
    pcStack_138 = pcVar34 + 1;
    cVar3 = *pcVar34;
    uStack_130 = lVar37 - 1;
    pcStack_128 = pcVar34;
    func_0x0001091067dc(&pcStack_138);
    if (cVar3 == '\0') {
      ppcVar39 = &pcStack_138;
      func_0x000109106814();
      if (uStack_130 != 0xffffffffffffffff) {
        *(char **)(param_1 + 0x20) = pcVar34 + 8;
        *(long *)(param_1 + 8) = lVar37 + -8;
        lVar37 = *(long *)(lVar36 + 0x68);
        if (lVar37 != 0) {
          iVar41 = 0;
          *(int *)(lVar37 + 0x2c) = (int)ppcVar39;
          *(undefined1 *)(lVar37 + 0x26) = 0;
          *(undefined1 *)(*(long *)(lVar36 + 0x68) + 0x27) = 0;
          *(undefined1 *)(*(long *)(lVar36 + 0x68) + 0x28) = 0;
          *(undefined1 *)(*(long *)(lVar36 + 0x68) + 0x29) = 0;
          while ((uVar7 = uStack_130, pcVar34 = pcStack_138, iVar41 != (int)ppcVar39 &&
                 (1 < uStack_130 + 1))) {
            pcVar22 = pcStack_138;
            func_0x0001091086f0(pcStack_138,uStack_130,&uStack_168);
            uVar6 = uStack_165;
            bVar5 = bStack_166;
            uVar4 = uStack_167;
            uVar9 = uStack_168;
            iVar17 = (int)pcVar22;
            if (iVar17 != 0) {
              return;
            }
            *(undefined1 *)(*(long *)(lVar36 + 0x68) + 0x26) = uStack_168;
            *(undefined1 *)(*(long *)(lVar36 + 0x68) + 0x27) = uStack_167;
            uVar35 = (ulong)bStack_166;
            *(byte *)(*(long *)(lVar36 + 0x68) + 0x28) = bStack_166;
            *(undefined1 *)(*(long *)(lVar36 + 0x68) + 0x29) = uStack_165;
            piVar28 = *(int **)(lVar36 + 0x68);
            iVar41 = iVar41 + 1;
            if (*piVar28 == 0 || *piVar28 == iVar41) {
              cVar3 = *(char *)((long)piVar28 + 0x22);
              if (cVar3 == 'm') {
                if (((*(char *)((long)piVar28 + 0x23) == 'e') && ((char)piVar28[9] == 't')) &&
                   (bVar8 = 0x60 < *(byte *)((long)piVar28 + 0x25),
                   *(byte *)((long)piVar28 + 0x25) == 0x61)) {
                  func_0x000109108630();
                  uVar14 = (undefined2)iVar17;
                  if (bVar8) {
                    pcStack_b8 = (char *)(extraout_x9 + 6);
                    lVar37 = extraout_x8 + -6;
                  }
                  else {
                    lVar37 = -1;
                  }
                  func_0x00010910868c(lVar37);
                  if (*(long *)(uVar35 + 0x68) != 0) {
                    *(undefined2 *)(*(long *)(uVar35 + 0x68) + 0x60) = uVar14;
                  }
                }
              }
              else if (cVar3 == 's') {
                if (*(char *)((long)piVar28 + 0x23) == 'u') {
                  if (((char)piVar28[9] == 'b') &&
                     (uVar9 = 0x73 < *(byte *)((long)piVar28 + 0x25),
                     *(byte *)((long)piVar28 + 0x25) == 0x74)) {
                    func_0x000109108630();
                    uVar14 = (undefined2)iVar17;
                    if ((bool)uVar9) {
                      pcStack_b8 = (char *)(extraout_x9_00 + 6);
                      lVar37 = extraout_x8_00 + -6;
                    }
                    else {
                      lVar37 = -1;
                    }
                    func_0x00010910868c(lVar37);
                    *(undefined2 *)(*(long *)(uVar35 + 0x68) + 0x60) = uVar14;
                    *(char **)(*(long *)(uVar35 + 0x68) + 0x68) = pcStack_b8;
                    do {
                      do {
                        func_0x000109108608();
                      } while (!(bool)uVar9);
                    } while (*extraout_x8_01 != '\0');
                    *(char **)(*(long *)(uVar35 + 0x68) + 0x70) = extraout_x8_01 + 1;
                    pcStack_b8 = extraout_x8_01 + 1;
                    do {
                      do {
                        func_0x000109108608();
                      } while (!(bool)uVar9);
                    } while (*extraout_x8_02 != '\0');
                    *(char **)(*(long *)(uVar35 + 0x68) + 0x78) = extraout_x8_02 + 1;
                    pcStack_b8 = extraout_x8_02 + 1;
                    lStack_b0 = extraout_x10 + -1;
                    do {
                      do {
                        func_0x000109108608();
                      } while (!(bool)uVar9);
                    } while (*extraout_x8_03 != '\0');
                  }
                }
                else if (((*(char *)((long)piVar28 + 0x23) == 'o') && ((char)piVar28[9] == 'u')) &&
                        (*(char *)((long)piVar28 + 0x25) == 'n')) {
                  lVar37 = *(long *)(param_2 + 0x10);
                  lStack_78 = lStack_148;
                  lStack_88 = lStack_148;
                  if (lStack_160 + 1U < 7) {
                    uStack_80 = 0xffffffffffffffff;
                  }
                  else {
                    lStack_88 = lStack_148 + 6;
                    uStack_80 = lStack_160 - 6;
                  }
                  func_0x0001091085dc();
                  pcVar23 = pcVar22;
                  func_0x0001091085dc();
                  pcVar24 = pcVar23;
                  func_0x0001091085dc();
                  func_0x0001091085cc();
                  func_0x0001091085dc();
                  uVar18 = (uint)pcVar24;
                  func_0x0001091085dc();
                  uVar19 = (uint)pcVar24;
                  func_0x0001091085dc();
                  func_0x0001091085dc();
                  func_0x0001091085cc();
                  uVar20 = (uint)pcVar24;
                  uVar40 = (uint)pcVar23;
                  uVar9 = 1 < uVar40;
                  if (uVar40 == 2) {
                    func_0x000109108670();
                    if ((bool)uVar9) {
                      func_0x0001091086d0();
                      uStack_80 = extraout_x8_07;
                    }
                    else {
                      uStack_80 = 0xffffffffffffffff;
                    }
                    plVar25 = &lStack_88;
                    func_0x00010910685c();
                    plVar26 = plVar25;
                    func_0x0001091085cc();
                    uVar18 = (uint)plVar26;
                    uVar19 = uVar18;
                    func_0x000109108670();
                    if ((bool)uVar9) {
                      func_0x0001091086d0();
                      uStack_80 = extraout_x8_08;
                    }
                    else {
                      uStack_80 = 0xffffffffffffffff;
                    }
                    func_0x0001091085cc();
                    uVar20 = uVar19;
                    func_0x0001091085cc();
                    func_0x000109108670();
                    lVar29 = lStack_88;
                    if (((bool)uVar9) && (lVar29 = lStack_88 + 4, 4 < extraout_x8_09 - 3U)) {
                      lStack_88 = lStack_88 + 8;
                      uStack_80 = extraout_x8_09 - 8;
                    }
                    else {
                      lStack_88 = lVar29;
                      uStack_80 = 0xffffffffffffffff;
                    }
                    uVar38 = (uint)(double)plVar25;
                  }
                  else {
                    uVar38 = (uint)((ulong)pcVar24 >> 0x10) & 0xffff;
                    if (uVar40 == 1) {
                      func_0x0001091085cc();
                      func_0x0001091085cc();
                      func_0x0001091085cc();
                      func_0x0001091085cc();
                      if (uVar18 == 0) goto LAB_1091081f4;
                      uVar19 = 0;
                      if (uVar18 != 0) {
                        uVar19 = uVar20 / uVar18;
                      }
                      uVar19 = uVar19 << 3;
                      uVar20 = 2;
                    }
                    else {
                      uVar20 = 0;
                    }
                  }
                  if (*(long *)(lVar37 + 0x68) != 0) {
                    *(short *)(*(long *)(lVar37 + 0x68) + 0x60) = (short)pcVar22;
                    *(short *)(*(long *)(lVar37 + 0x68) + 0xa8) = (short)uVar18;
                    *(uint *)(*(long *)(lVar37 + 0x68) + 0xac) = uVar38;
                    *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x68) = 0;
                    *(long *)(*(long *)(lVar37 + 0x68) + 0x70) = lStack_88;
                    *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x62) = 0;
                    *(undefined1 *)(*(long *)(lVar37 + 0x68) + 99) = 0;
                    *(undefined1 *)(*(long *)(lVar37 + 0x68) + 100) = 0;
                    *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x65) = 0;
                    *(short *)(*(long *)(lVar37 + 0x68) + 0xb4) = (short)pcVar23;
                    *(uint *)(*(long *)(lVar37 + 0x68) + 0xb0) = uVar20;
                    *(short *)(*(long *)(lVar37 + 0x68) + 0xaa) = (short)uVar19;
                    *(long *)(*(long *)(lVar37 + 0x68) + 0xa0) = lStack_88;
                    uVar35 = 0;
                    if (uStack_80 != 0xffffffffffffffff) {
                      uVar35 = uStack_80;
                    }
                    *(ulong *)(*(long *)(lVar37 + 0x68) + 0x98) = uVar35;
                    bVar8 = true;
                    lVar29 = lStack_88;
                    uVar35 = uStack_80;
                    while ((uVar35 - 1 < 0xfffffffffffffffe &&
                           (lVar30 = lVar29, func_0x0001091086f0(lVar29,uVar35,&pcStack_b8),
                           (int)lVar30 == 0))) {
                      func_0x0001091086bc();
                      if ((extraout_w11_00 == 0x77) &&
                         (((extraout_w10_00 == 0x61 && (extraout_w9_00 == 0x76)) &&
                          (extraout_w8_00 == 0x65)))) {
                        ppcVar27 = &pcStack_b8;
                        func_0x000109108698(ppcVar27,&UNK_10f551c5d);
                        if ((int)ppcVar27 == 0) {
                          if (uStack_118 == 2) {
                            cVar3 = pcStack_100[1];
                          }
                          else {
                            if (uStack_118 != 1) goto LAB_109108098;
                            cVar3 = *pcStack_100;
                          }
                          if (cVar3 != '\0') {
                            *(uint *)(*(long *)(lVar37 + 0x68) + 0xb0) =
                                 *(uint *)(*(long *)(lVar37 + 0x68) + 0xb0) & 0xfffd;
                          }
                        }
LAB_109108098:
                        ppcVar27 = &pcStack_b8;
                        func_0x000109108698(ppcVar27,&UNK_10f551c62);
                        if ((int)ppcVar27 != 0) break;
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x62) = 0x65;
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 99) = 0x73;
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 100) = 100;
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x65) = 0x73;
                        lVar30 = *(long *)(lVar37 + 0x68);
                        lVar32 = lStack_e8;
                        uVar33 = uStack_d0;
LAB_1091080ec:
                        bVar8 = false;
                        *(long *)(lVar30 + 0x68) = lVar32;
                        *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x70) = uVar33;
                      }
                      else if ((((extraout_w11_00 == 0x73) && (extraout_w10_00 == 0x69)) &&
                               (extraout_w9_00 == 0x6e)) && (extraout_w8_00 == 0x66)) {
                        func_0x0001091085a4(*(undefined8 *)(lVar37 + 0x68));
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x78) =
                             *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x26);
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x79) =
                             *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x27);
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x7a) =
                             *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x28);
                        *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x7b) =
                             *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x29);
                      }
                      else if (bVar8) {
                        *(char *)(*(long *)(lVar37 + 0x68) + 0x62) = (char)extraout_w11_00;
                        *(char *)(*(long *)(lVar37 + 0x68) + 99) = (char)extraout_w10_00;
                        *(char *)(*(long *)(lVar37 + 0x68) + 100) = (char)extraout_w9_00;
                        *(char *)(*(long *)(lVar37 + 0x68) + 0x65) = (char)extraout_w8_00;
                        func_0x0001091086e4(*(undefined8 *)(lVar37 + 0x68));
                        lVar30 = extraout_x8_10;
                        lVar32 = extraout_x9_04;
                        uVar33 = extraout_x10_03;
                        goto LAB_1091080ec;
                      }
                      uVar31 = lStack_b0 + ((ulong)pcStack_b8 >> 0x20);
                      bVar10 = uVar31 <= uVar35;
                      uVar35 = uVar35 - uVar31;
                      uVar2 = 0;
                      if (bVar10) {
                        uVar2 = uVar31;
                      }
                      lVar29 = lVar29 + uVar2;
                      if (!bVar10) {
                        uVar35 = 0xffffffffffffffff;
                      }
                    }
                  }
                  goto LAB_1091081f4;
                }
              }
              else if (((cVar3 == 'v') && (*(char *)((long)piVar28 + 0x23) == 'i')) &&
                      (((char)piVar28[9] == 'd' && (*(char *)((long)piVar28 + 0x25) == 'e')))) {
                lVar37 = *(long *)(param_2 + 0x10);
                lStack_110 = lStack_148;
                lStack_120 = lStack_148;
                if (lStack_160 + 1U < 7) {
                  lVar29 = -1;
                }
                else {
                  lStack_120 = lStack_148 + 6;
                  lVar29 = lStack_160 + -6;
                }
                func_0x0001091085e4(lVar29);
                if (uStack_118 + 1 < 0x11) {
                  lVar29 = -1;
                }
                else {
                  lStack_120 = lStack_120 + 0x10;
                  lVar29 = uStack_118 - 0x10;
                }
                uVar15 = (short)iVar17;
                func_0x0001091085e4(lVar29);
                uVar14 = SUB82(&lStack_120,0);
                func_0x000109106790();
                if (uStack_118 + 1 < 0xf) {
                  uStack_198 = 0xff;
                  uVar35 = 0xffffffffffffffff;
                }
                else if (uStack_118 == 0xe) {
                  uStack_198 = 0xff;
                  uVar35 = 0xffffffffffffffff;
                  lStack_120 = lStack_120 + 0xe;
                }
                else {
                  uStack_198 = (uint)*(byte *)(lStack_120 + 0xe);
                  lStack_120 = lStack_120 + 0xf;
                  uVar35 = uStack_118 - 0xf;
                }
                lVar29 = lStack_120;
                if (uVar35 + 1 < 0x20) {
                  lVar30 = -1;
                }
                else {
                  lStack_120 = lStack_120 + 0x1f;
                  lVar30 = uVar35 - 0x1f;
                }
                uVar16 = uVar14;
                func_0x0001091085e4(lVar30);
                if (uStack_118 + 1 < 3) {
                  uVar31 = 0xffffffffffffffff;
                }
                else {
                  lStack_120 = lStack_120 + 2;
                  uVar31 = uStack_118 - 2;
                }
                lVar30 = lStack_120;
                uStack_118 = uVar31;
                if (*(long *)(lVar37 + 0x68) != 0) {
                  *(short *)(*(long *)(lVar37 + 0x68) + 0x60) = (short)iVar17;
                  *(undefined2 *)(*(long *)(lVar37 + 0x68) + 0xa8) = uVar15;
                  *(undefined2 *)(*(long *)(lVar37 + 0x68) + 0xaa) = uVar14;
                  *(undefined2 *)(*(long *)(lVar37 + 0x68) + 0xac) = uVar16;
                  *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x68) = 0;
                  *(long *)(*(long *)(lVar37 + 0x68) + 0x70) = lStack_120;
                  *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x62) = 0;
                  *(undefined1 *)(*(long *)(lVar37 + 0x68) + 99) = 0;
                  *(undefined1 *)(*(long *)(lVar37 + 0x68) + 100) = 0;
                  *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x65) = 0;
                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xdc) = 0;
                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xe0) = 0;
                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xe4) = 0;
                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xe8) = 0;
                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xec) = 0;
                  *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x100) = 0;
                  *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0xf8) = 0;
                  *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x110) = 0;
                  *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x108) = 0;
                  if (0x1e < uStack_198) {
                    uStack_198 = 0x1f;
                  }
                  uVar2 = uVar35;
                  if (uStack_198 <= uVar35) {
                    uVar2 = (ulong)uStack_198;
                  }
                  uVar1 = 0;
                  if (uVar35 != 0xffffffffffffffff) {
                    uVar1 = uVar2;
                  }
                  _memcpy(*(long *)(lVar37 + 0x68) + 0xbc,lVar29);
                  bVar8 = false;
                  *(undefined1 *)(*(long *)(lVar37 + 0x68) + uVar1 + 0xbc) = 0;
                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xb0) = 0;
                  *(long *)(*(long *)(lVar37 + 0x68) + 0xa0) = lVar30;
                  uVar35 = 0;
                  if (uVar31 != 0xffffffffffffffff) {
                    uVar35 = uVar31;
                  }
                  *(ulong *)(*(long *)(lVar37 + 0x68) + 0x98) = uVar35;
                  while ((uVar31 - 1 < 0xfffffffffffffffe &&
                         (lVar29 = lVar30, func_0x0001091086f0(lVar30,uVar31,&pcStack_b8),
                         (int)lVar29 == 0))) {
                    func_0x0001091086bc();
                    if ((extraout_w11 == 0x73) &&
                       (((extraout_w10 == 0x69 && (extraout_w9 == 0x6e)) && (extraout_w8 == 0x66))))
                    {
                      func_0x0001091085a4(*(undefined8 *)(lVar37 + 0x68));
                      *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x78) =
                           *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x26);
                      *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x79) =
                           *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x27);
                      *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x7a) =
                           *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x28);
                      *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x7b) =
                           *(undefined1 *)(*(long *)(lVar37 + 0x68) + 0x29);
                    }
                    else if ((((extraout_w11 != 99) || (extraout_w10 != 0x6c)) ||
                             (extraout_w9 != 0x61)) || (extraout_w8 != 0x70)) {
                      if (((extraout_w11 == 0x70) && (extraout_w10 == 0x61)) &&
                         ((extraout_w9 == 0x73 && (extraout_w8 == 0x70)))) {
                        lStack_e8 = lStack_b0;
                        uStack_e0 = uStack_98;
                        uStack_f0 = uStack_98;
                        *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xb0) = 1;
                        uVar21 = SUB84(&uStack_f0,0);
                        func_0x000109106814();
                        *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xb4) = uVar21;
                        uVar21 = SUB84(&uStack_f0,0);
                        func_0x000109106814();
                        *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xb8) = uVar21;
                      }
                      else if ((((extraout_w11 == 100) && (extraout_w10 == 0x76)) &&
                               (extraout_w9 == 99)) && (extraout_w8 == 0x43)) {
                        func_0x0001091086e4(*(undefined8 *)(lVar37 + 0x68));
                        *(undefined8 *)(extraout_x8_04 + 0xf8) = extraout_x9_01;
                        *(undefined8 *)(*(long *)(extraout_x11 + 0x68) + 0x100) = extraout_x10_00;
                        *(undefined4 *)(*(long *)(extraout_x11 + 0x68) + 0xe4) = 1;
                        *(undefined1 *)(*(long *)(extraout_x11 + 0x68) + 0x118) = uVar9;
                        *(undefined1 *)(*(long *)(extraout_x11 + 0x68) + 0x119) = uVar4;
                        *(byte *)(*(long *)(extraout_x11 + 0x68) + 0x11a) = bVar5;
                        *(undefined1 *)(*(long *)(extraout_x11 + 0x68) + 0x11b) = uVar6;
                      }
                      else {
                        bVar10 = extraout_w11 != 0x61;
                        bVar11 = extraout_w10 != 0x76;
                        bVar12 = extraout_w9 != 99;
                        if ((bVar12 || (bVar10 || bVar11)) || (extraout_w8 != 0x45)) {
                          bVar13 = extraout_w11 != 0x68;
                          if (((bVar13 || extraout_w10 != 0x76) || extraout_w9 != 99) ||
                             (extraout_w8 != 0x45)) {
                            if (((bVar12 || (bVar11 || bVar10 && bVar13)) || (extraout_w8 != 0x43))
                               && ((extraout_w9 != 0x31 || (bVar10 || bVar11) ||
                                   (extraout_w8 != 0x43)))) {
                              if (!bVar8) {
                                *(char *)(*(long *)(lVar37 + 0x68) + 0x62) = (char)extraout_w11;
                                *(char *)(*(long *)(lVar37 + 0x68) + 99) = (char)extraout_w10;
                                *(char *)(*(long *)(lVar37 + 0x68) + 100) = (char)extraout_w9;
                                *(char *)(*(long *)(lVar37 + 0x68) + 0x65) = (char)extraout_w8;
                                func_0x0001091086e4(*(undefined8 *)(lVar37 + 0x68));
                                *(undefined8 *)(extraout_x8_06 + 0x68) = extraout_x9_03;
                                *(undefined8 *)(*(long *)(extraout_x13 + 0x68) + 0x70) =
                                     extraout_x10_02;
                              }
                              bVar8 = true;
                            }
                            else {
                              *(char *)(*(long *)(lVar37 + 0x68) + 0x62) = (char)extraout_w11;
                              *(char *)(*(long *)(lVar37 + 0x68) + 99) = (char)extraout_w10;
                              *(char *)(*(long *)(lVar37 + 0x68) + 100) = (char)extraout_w9;
                              *(char *)(*(long *)(lVar37 + 0x68) + 0x65) = (char)extraout_w8;
                              *(long *)(*(long *)(lVar37 + 0x68) + 0x68) = lStack_b0;
                              *(undefined8 *)(*(long *)(lVar37 + 0x68) + 0x70) = uStack_98;
                              if (extraout_w8 != 0x43 || (bVar12 || (bVar10 || bVar11))) {
                                if (extraout_w8 != 0x43 ||
                                    ((bVar13 || extraout_w10 != 0x76) || extraout_w9 != 99)) {
                                  bVar8 = true;
                                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xf0) = 1;
                                }
                                else {
                                  bVar8 = true;
                                  *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xe0) = 1;
                                }
                              }
                              else {
                                bVar8 = true;
                                *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xdc) = 1;
                              }
                            }
                            goto LAB_109107d60;
                          }
                          *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xec) = 1;
                        }
                        else {
                          *(undefined4 *)(*(long *)(lVar37 + 0x68) + 0xe8) = 1;
                        }
                        func_0x0001091086e4(*(undefined8 *)(lVar37 + 0x68));
                        *(undefined8 *)(extraout_x8_05 + 0x108) = extraout_x9_02;
                        *(undefined8 *)(*(long *)(extraout_x11_00 + 0x68) + 0x110) = extraout_x10_01
                        ;
                      }
                    }
LAB_109107d60:
                    uVar35 = lStack_b0 + ((ulong)pcStack_b8 >> 0x20);
                    bVar10 = uVar35 <= uVar31;
                    uVar31 = uVar31 - uVar35;
                    uVar2 = 0;
                    if (bVar10) {
                      uVar2 = uVar35;
                    }
                    lVar30 = lVar30 + uVar2;
                    if (!bVar10) {
                      uVar31 = 0xffffffffffffffff;
                    }
                  }
                }
LAB_1091081f4:
                ppcVar39 = (char **)((ulong)ppcVar39 & 0xffffffff);
              }
            }
            uVar35 = lStack_160 + (ulong)uStack_164;
            uStack_130 = uVar7 - uVar35;
            if (uVar7 < uVar35 || uVar7 == 0xffffffffffffffff) {
              uStack_130 = 0xffffffffffffffff;
            }
            else {
              pcStack_138 = pcVar34 + uVar35;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10910823c; end: 109108383;  */

void FUN_10910823c(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x68);
  *(undefined8 *)(lVar2 + 0x128) = 0;
  *(undefined8 *)(lVar2 + 0x130) = 0;
  *(undefined8 *)(lVar2 + 0x138) = 0;
  func_0x0001091085f0(*(undefined8 *)(param_1 + 0x20));
  FUN_109108a10();
  *(undefined4 *)param_3 = 0xff;
  if (*(char *)(lVar2 + 0x120) == 'p') {
    if (*(char *)(lVar2 + 0x121) != 'i') {
      return;
    }
    if (*(char *)(lVar2 + 0x122) != 'f') {
      return;
    }
    if (*(char *)(lVar2 + 0x123) != 'f') {
      return;
    }
    uVar1 = *(uint *)(lVar2 + 0x124) & 0xfffffffe;
  }
  else {
    if (*(char *)(lVar2 + 0x120) != 'c') {
      return;
    }
    if (*(char *)(lVar2 + 0x121) != 'e') {
      return;
    }
    if (*(char *)(lVar2 + 0x122) != 'n') {
      return;
    }
    if (*(char *)(lVar2 + 0x123) != 'c') {
      return;
    }
    uVar1 = *(uint *)(lVar2 + 0x124);
  }
  if (uVar1 == 0x10000) {
    uVar4 = *(undefined8 *)(lVar2 + 0x130);
    uVar3 = *(undefined8 *)(lVar2 + 0x128);
    param_3[2] = *(undefined8 *)(lVar2 + 0x138);
    param_3[1] = uVar4;
    *param_3 = uVar3;
  }
  return;
}



/* Entry: 109108384; end: 109108447;  */

void FUN_109108384(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int aiStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar2 + 0x60) = 0;
  uStack_38 = uStack_48;
  while( true ) {
    if (0xfffffffffffffffd < lStack_40 - 1U) {
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar2 + 0x3c);
      return;
    }
    puVar1 = &uStack_48;
    FUN_109108994(puVar1,param_1,aiStack_78);
    if ((int)puVar1 != 0) break;
    uStack_a8 = uStack_70;
    uStack_98 = uStack_60;
    uStack_a0 = uStack_68;
    uStack_88 = uStack_50;
    uStack_90 = uStack_58;
    FUN_10910887c(auStack_b0,param_2);
    if (aiStack_78[0] == 0x6174656d) {
      *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar2 + 200);
      *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0xc0);
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0xd8);
      *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar2 + 0xd0);
      *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar2 + 0xe8);
      *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar2 + 0xe0);
      *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0xf8);
      *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0xf0);
    }
  }
  return;
}



/* Entry: 109108448; end: 10910852b;  */

undefined8 FUN_109108448(ulong param_1,long param_2)

{
  char cVar1;
  undefined1 in_CY;
  undefined8 uVar2;
  char *extraout_x8;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010910855c();
  if ((bool)in_CY) {
    cVar1 = *extraout_x8;
    func_0x000109108594(extraout_x8 + 1);
    if (cVar1 == '\0') {
      func_0x000109108580();
      func_0x000109108580();
      func_0x000109108580();
      *(int *)(lVar4 + 0x5c) = (int)param_1;
      uVar3 = param_1;
      func_0x000109108580();
      uVar3 = uVar3 & 0xffffffff;
    }
    else {
      if (cVar1 != '\x01') goto LAB_109108464;
      func_0x0001091085d4();
      func_0x0001091085d4();
      func_0x000109108580();
      *(int *)(lVar4 + 0x5c) = (int)param_1;
      uVar3 = param_1;
      func_0x0001091085d4();
    }
    uVar2 = 0;
    *(ulong *)(lVar4 + 0x60) = uVar3;
    *(int *)(lVar4 + 0x38) = (int)param_1;
  }
  else {
LAB_109108464:
    uVar2 = 0x17;
  }
  return uVar2;
}



/* Entry: 10910852c; end: 1091086fb;  */

undefined4 FUN_10910852c(long param_1)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 8) + 1U < 2) {
    return 0x17;
  }
  uVar1 = 0;
  if (**(char **)(param_1 + 0x20) != '\0') {
    uVar1 = 0x17;
  }
  return uVar1;
}



/* Entry: 1091086fc; end: 10910887b;  */

undefined4 FUN_1091086fc(long param_1,long *param_2,int param_3,char *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_4 == (char *)0x0) {
    return 1;
  }
  param_4[0x18] = '\0';
  param_4[0x19] = '\0';
  param_4[0x1a] = '\0';
  param_4[0x1b] = '\0';
  param_4[0x1c] = '\0';
  param_4[0x1d] = '\0';
  param_4[0x1e] = '\0';
  param_4[0x1f] = '\0';
  param_4[0x10] = '\0';
  param_4[0x11] = '\0';
  param_4[0x12] = '\0';
  param_4[0x13] = '\0';
  param_4[0x14] = '\0';
  param_4[0x15] = '\0';
  param_4[0x16] = '\0';
  param_4[0x17] = '\0';
  param_4[0x28] = '\0';
  param_4[0x29] = '\0';
  param_4[0x2a] = '\0';
  param_4[0x2b] = '\0';
  param_4[0x2c] = '\0';
  param_4[0x2d] = '\0';
  param_4[0x2e] = '\0';
  param_4[0x2f] = '\0';
  param_4[0x20] = '\0';
  param_4[0x21] = '\0';
  param_4[0x22] = '\0';
  param_4[0x23] = '\0';
  param_4[0x24] = '\0';
  param_4[0x25] = '\0';
  param_4[0x26] = '\0';
  param_4[0x27] = '\0';
  param_4[8] = '\0';
  param_4[9] = '\0';
  param_4[10] = '\0';
  param_4[0xb] = '\0';
  param_4[0xc] = '\0';
  param_4[0xd] = '\0';
  param_4[0xe] = '\0';
  param_4[0xf] = '\0';
  param_4[0] = '\0';
  param_4[1] = '\0';
  param_4[2] = '\0';
  param_4[3] = '\0';
  param_4[4] = '\0';
  param_4[5] = '\0';
  param_4[6] = '\0';
  param_4[7] = '\0';
  param_4[4] = '\b';
  param_4[5] = '\0';
  param_4[6] = '\0';
  param_4[7] = '\0';
  *(long **)(param_4 + 8) = param_2;
  if (param_2 < (long *)0x8) {
LAB_109108750:
    uVar3 = 2;
  }
  else {
    plVar1 = &lStack_48;
    lStack_48 = param_1;
    plStack_40 = param_2;
    lStack_38 = param_1;
    func_0x000109106814();
    *(ulong *)(param_4 + 8) = (ulong)plVar1 & 0xffffffff;
    if ((int)plVar1 == 0) {
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 1;
      *(long **)(param_4 + 8) = param_2;
    }
    else if ((int)plVar1 == 1) {
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 2;
      param_4[4] = '\x10';
      param_4[5] = '\0';
      param_4[6] = '\0';
      param_4[7] = '\0';
      if (param_2 < (long *)0x10) {
        *(long **)(param_4 + 8) = param_2;
        goto LAB_109108750;
      }
    }
    FUN_1091069cc(&lStack_48,param_4);
    plVar1 = *(long **)(param_4 + 8);
    if (plVar1 == (long *)0x1) {
      plVar1 = &lStack_48;
      func_0x00010910685c();
      *(long **)(param_4 + 8) = plVar1;
    }
    if ((((*param_4 == 'u') && (param_4[1] == 'u')) && (param_4[2] == 'i')) && (param_4[3] == 'd'))
    {
      *(long *)(param_4 + 0x18) = lStack_48;
      if (0x10 < (long)plStack_40 + 1U) {
        lStack_48 = lStack_48 + 0x10;
      }
      uVar2 = *(int *)(param_4 + 4) + 0x10;
      *(uint *)(param_4 + 4) = uVar2;
    }
    else {
      param_4[0x18] = '\0';
      param_4[0x19] = '\0';
      param_4[0x1a] = '\0';
      param_4[0x1b] = '\0';
      param_4[0x1c] = '\0';
      param_4[0x1d] = '\0';
      param_4[0x1e] = '\0';
      param_4[0x1f] = '\0';
      uVar2 = *(uint *)(param_4 + 4);
    }
    if (plVar1 < (long *)(ulong)uVar2) {
      uVar3 = 5;
    }
    else {
      *(ulong *)(param_4 + 8) = (long)plVar1 - (ulong)uVar2;
      *(long *)(param_4 + 0x20) = lStack_48;
      uVar3 = 2;
      if (plVar1 <= param_2 || param_3 == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



/* Entry: 10910887c; end: 109108993;  */

undefined8 FUN_10910887c(char *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(uint *)(param_2 + 0x1c) <= *(uint *)(param_2 + 0x18)) {
    return 0x1a;
  }
  iVar5 = *(uint *)(param_2 + 0x18) + 1;
  *(int *)(param_2 + 0x18) = iVar5;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = 8;
  }
  puVar7 = *(undefined8 **)(param_2 + lVar1);
  do {
    pcVar6 = (code *)puVar7[1];
    if (pcVar6 == (code *)0x0) {
      uVar3 = 0x10;
LAB_109108970:
      *(int *)(param_2 + 0x18) = iVar5 + -1;
      return uVar3;
    }
    if (lVar4 == 0) {
      pcVar2 = (char *)*puVar7;
      if ((((*param_1 == *pcVar2) && (param_1[1] == pcVar2[1])) && (param_1[2] == pcVar2[2])) &&
         (param_1[3] == pcVar2[3])) goto LAB_109108944;
    }
    else {
      lVar1 = lVar4;
      _memcmp(lVar4,*puVar7,0x10);
      if ((int)lVar1 == 0) {
LAB_109108944:
        uStack_68 = *(undefined8 *)(param_1 + 8);
        uStack_70 = *(undefined8 *)param_1;
        uStack_58 = *(undefined8 *)(param_1 + 0x18);
        uStack_60 = *(undefined8 *)(param_1 + 0x10);
        uStack_48 = *(undefined8 *)(param_1 + 0x28);
        uStack_50 = *(undefined8 *)(param_1 + 0x20);
        (*pcVar6)(&uStack_70,param_2);
        uVar3 = 0;
        iVar5 = *(int *)(param_2 + 0x18);
        if (iVar5 == 0) {
          return 0;
        }
        goto LAB_109108970;
      }
    }
    puVar7 = puVar7 + 2;
  } while( true );
}



/* Entry: 109108994; end: 109108a0f;  */

void FUN_109108994(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x0001091086f0(uVar1,param_1[1]);
  if ((((int)uVar1 == 0) &&
      (*(undefined8 *)(param_3 + 0x28) = param_2, (ulong)*(uint *)(param_3 + 4) <= (ulong)param_1[1]
      )) && (func_0x0001091068f4(param_1), *(ulong *)(param_3 + 8) <= (ulong)param_1[1])) {
    func_0x0001091068f4(param_1);
  }
  return;
}



/* Entry: 109108a10; end: 109108a93;  */

void FUN_109108a10(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_30 = *(long *)(param_1 + 8);
  uStack_28 = uStack_38;
  while( true ) {
    if (0xfffffffffffffffd < lStack_30 - 1U) {
      return;
    }
    puVar1 = &uStack_38;
    FUN_109108994(puVar1,param_1,&uStack_68);
    if ((int)puVar1 != 0) break;
    uStack_98 = uStack_60;
    uStack_a0 = uStack_68;
    uStack_88 = uStack_50;
    uStack_90 = uStack_58;
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    FUN_10910887c(&uStack_a0,param_2);
  }
  return;
}



/* Entry: 109108a94; end: 109108b87;  */

undefined8 FUN_109108a94(long param_1,char *param_2,int param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar6 = *(ulong *)(param_1 + 8);
  while( true ) {
    if (0xfffffffffffffffd < uVar6 - 1) {
      return 0x10;
    }
    lVar2 = lVar5;
    func_0x0001091086f0(lVar5,uVar6,param_4);
    if ((int)lVar2 != 0) {
      return 0xd;
    }
    *(long *)(param_4 + 0x28) = param_1;
    uVar3 = (ulong)*(uint *)(param_4 + 4);
    uVar1 = uVar6 - uVar3;
    if (uVar6 < uVar3) {
      return 0xe;
    }
    uVar4 = *(ulong *)(param_4 + 8);
    uVar6 = uVar1 - uVar4;
    if (uVar1 < uVar4) break;
    if ((((*param_4 == *param_2) && (param_4[1] == param_2[1])) && (param_4[2] == param_2[2])) &&
       (param_4[3] == param_2[3])) {
      if (param_3 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
    }
    lVar5 = lVar5 + uVar3 + uVar4;
  }
  return 0xf;
}



/* Entry: 109108b88; end: 10910916b;  */

undefined8 FUN_109108b88(byte *param_1,ulong param_2,int param_3,byte *param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  int extraout_w8;
  int iVar8;
  int extraout_w9;
  uint uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  int iVar12;
  byte bStack_98;
  int iStack_94;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_4 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_2 < 4) {
    return 0xfffffffe;
  }
  param_4[0x38] = 0;
  param_4[0x39] = 0;
  param_4[0x3a] = 0;
  param_4[0x3b] = 0;
  param_4[0x3c] = 0;
  param_4[0x3d] = 0;
  param_4[0x3e] = 0;
  param_4[0x3f] = 0;
  param_4[0x30] = 0;
  param_4[0x31] = 0;
  param_4[0x32] = 0;
  param_4[0x33] = 0;
  param_4[0x34] = 0;
  param_4[0x35] = 0;
  param_4[0x36] = 0;
  param_4[0x37] = 0;
  param_4[0x48] = 0;
  param_4[0x49] = 0;
  param_4[0x4a] = 0;
  param_4[0x4b] = 0;
  param_4[0x4c] = 0;
  param_4[0x4d] = 0;
  param_4[0x4e] = 0;
  param_4[0x4f] = 0;
  param_4[0x40] = 0;
  param_4[0x41] = 0;
  param_4[0x42] = 0;
  param_4[0x43] = 0;
  param_4[0x44] = 0;
  param_4[0x45] = 0;
  param_4[0x46] = 0;
  param_4[0x47] = 0;
  param_4[0x18] = 0;
  param_4[0x19] = 0;
  param_4[0x1a] = 0;
  param_4[0x1b] = 0;
  param_4[0x1c] = 0;
  param_4[0x1d] = 0;
  param_4[0x1e] = 0;
  param_4[0x1f] = 0;
  param_4[0x10] = 0;
  param_4[0x11] = 0;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  param_4[0x14] = 0;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x28] = 0;
  param_4[0x29] = 0;
  param_4[0x2a] = 0;
  param_4[0x2b] = 0;
  param_4[0x2c] = 0;
  param_4[0x2d] = 0;
  param_4[0x2e] = 0;
  param_4[0x2f] = 0;
  param_4[0x20] = 0;
  param_4[0x21] = 0;
  param_4[0x22] = 0;
  param_4[0x23] = 0;
  param_4[0x24] = 0;
  param_4[0x25] = 0;
  param_4[0x26] = 0;
  param_4[0x27] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  pbVar11 = param_1;
  if (param_3 != 0) {
    pbVar11 = param_1 + 1;
    if ((*param_1 & 0x1f) != 7) {
      return 0xfffffffd;
    }
    param_2 = param_2 - 1;
  }
  uVar5 = param_2;
  _malloc();
  if (uVar5 == 0) {
    return 0xfffffffc;
  }
  FUN_10910916c(pbVar11,param_2,uVar5,auStack_88);
  iVar4 = (int)pbVar11;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = uVar5;
  func_0x000109109b00();
  FUN_1091091e0();
  if (iVar4 == 0) {
    *param_4 = bStack_98;
    func_0x000109109b00();
    FUN_1091091e0();
    if (iVar4 == 0) {
      param_4[1] = bStack_98;
      func_0x000109109b00();
      func_0x000109109b50();
      if (iVar4 == 0) {
        func_0x000109109b00();
        FUN_1091091e0();
        if (iVar4 == 0) {
          param_4[2] = bStack_98;
          puVar6 = &uStack_90;
          func_0x000109109244(puVar6,param_4 + 4);
          if ((int)puVar6 == 0) {
            param_4[8] = 1;
            param_4[9] = 0;
            param_4[10] = 0;
            bVar2 = *param_4;
            uVar9 = bVar2 - 0x53;
            if ((((uVar9 < 0x39) && ((1L << ((ulong)uVar9 & 0x3f) & 0x198208808020009U) != 0)) ||
                (bVar2 == 0xf4)) || (bVar2 == 0x2c)) {
              func_0x000109109a54();
              if ((((int)puVar6 == 0) &&
                  ((param_4[8] = bStack_98, bStack_98 != 3 ||
                   (func_0x000109109a9c(), (int)puVar6 == 0)))) &&
                 (func_0x000109109a54(), (int)puVar6 == 0)) {
                param_4[9] = bStack_98;
                func_0x000109109a54();
                if ((int)puVar6 == 0) {
                  param_4[10] = bStack_98;
                  func_0x000109109a9c();
                  if (((int)puVar6 == 0) && (func_0x000109109a24(), (int)puVar6 == 0)) {
                    if (iStack_94 != 0) {
                      uVar9 = 0;
                      uVar7 = 0xc;
                      if (bStack_98 != 3) {
                        uVar7 = 8;
                      }
                      for (; uVar9 != uVar7; uVar9 = uVar9 + 1) {
                        func_0x000109109a24();
                        if ((int)puVar6 != 0) goto LAB_109108de8;
                        if (iStack_94 != 0) {
                          iVar4 = 0x10;
                          if (5 < uVar9) {
                            iVar4 = 0x40;
                          }
                          iVar12 = 8;
                          iVar8 = 8;
                          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                            bVar1 = iVar8 != 0;
                            iVar8 = 0;
                            if (bVar1) {
                              func_0x000109109adc();
                              if ((int)puVar6 != 0) goto LAB_109108de8;
                              iVar8 = (iStack_64 + iVar12 + 0x100) % 0x100;
                              if (iVar8 != 0) {
                                iVar12 = iVar8;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_109108dd0;
                  }
                }
              }
            }
            else {
LAB_109108dd0:
              puVar6 = &uStack_90;
              func_0x000109109244(puVar6,param_4 + 0xc);
              if ((int)puVar6 == 0) {
                func_0x000109109a54();
                iVar4 = (int)puVar6;
                if (iVar4 == 0) {
                  param_4[0x10] = bStack_98;
                  if (bStack_98 == 1) {
                    func_0x000109109a9c();
                    if (((((int)puVar6 == 0) && (func_0x000109109adc(), (int)puVar6 == 0)) &&
                        (func_0x000109109adc(), (int)puVar6 == 0)) &&
                       (func_0x000109109a60(), (int)puVar6 == 0)) {
                      iVar4 = iStack_68 + 1;
                      do {
                        iVar4 = iVar4 + -1;
                        if (iVar4 == 0) goto LAB_109108e34;
                        func_0x000109109adc();
                      } while ((int)puVar6 == 0);
                    }
                  }
                  else if ((bStack_98 != 0) || (func_0x000109109b70(), iVar4 == 0)) {
LAB_109108e34:
                    puVar6 = &uStack_90;
                    func_0x000109109244(puVar6,param_4 + 0x18);
                    iVar4 = (int)puVar6;
                    if ((iVar4 == 0) && (func_0x000109109a9c(), iVar4 == 0)) {
                      param_4[0x1c] = bStack_98;
                      func_0x000109109b58();
                      if (((iVar4 == 0) && (func_0x000109109b64(), iVar4 == 0)) &&
                         (func_0x000109109a24(), iVar4 == 0)) {
                        param_4[0x28] = (byte)iStack_94;
                        if ((byte)iStack_94 == 0) {
                          func_0x000109109a24();
                          if (iVar4 != 0) goto LAB_109108de8;
                          param_4[0x29] = 0;
                        }
                        iVar4 = 0;
                        func_0x000109109a24();
                        if (iVar4 == 0) {
                          param_4[0x2a] = (byte)iStack_94;
                          func_0x000109109a24();
                          if (iVar4 == 0) {
                            param_4[0x2b] = (byte)iStack_94;
                            if ((byte)iStack_94 == 0) {
LAB_109108edc:
                              iVar4 = 0;
                              func_0x000109109a24();
                              if (iVar4 == 0) {
                                param_4[0x3c] = (byte)iStack_94;
                                if (((byte)iStack_94 != 0) && (func_0x000109109a34(), iVar4 == 0)) {
                                  if (iStack_64 == 0) {
LAB_109108ffc:
                                    iVar4 = 0;
                                    func_0x000109109a34();
                                    if ((iVar4 == 0) &&
                                       ((iStack_64 == 0 || (func_0x000109109a44(), iVar4 == 0)))) {
                                      iVar4 = 0;
                                      func_0x000109109a34();
                                      if (iVar4 == 0) {
                                        if (iStack_64 != 0) {
                                          func_0x000109109af4();
                                          FUN_1091091e0();
                                          if ((((iVar4 != 0) || (func_0x000109109a44(), iVar4 != 0))
                                              || (func_0x000109109a34(), iVar4 != 0)) ||
                                             ((iStack_64 != 0 &&
                                              (((func_0x000109109acc(), iVar4 != 0 ||
                                                (func_0x000109109acc(), iVar4 != 0)) ||
                                               (func_0x000109109acc(), iVar4 != 0))))))
                                          goto LAB_109108ef8;
                                        }
                                        iVar4 = 0;
                                        func_0x000109109a34();
                                        if ((iVar4 == 0) &&
                                           ((iStack_64 == 0 ||
                                            ((func_0x000109109a60(), iVar4 == 0 &&
                                             (func_0x000109109a60(), iVar4 == 0)))))) {
                                          iVar4 = 0;
                                          func_0x000109109a34();
                                          if (iVar4 == 0) {
                                            if (iStack_64 == 0) {
LAB_1091090b4:
                                              iVar4 = 0;
                                              func_0x000109109a8c();
                                              if (iVar4 == 0) {
                                                if (iStack_6c != 0) {
                                                  iVar4 = (int)&uStack_90;
                                                  FUN_109109978();
                                                  if (iVar4 != 0) goto LAB_109108ef8;
                                                }
                                                puVar6 = &uStack_90;
                                                FUN_1091091e0(puVar6,1,&iStack_70);
                                                if ((int)puVar6 == 0) {
                                                  if (iStack_70 == 0) {
                                                    if (iStack_6c != 0) goto LAB_109109100;
LAB_109109108:
                                                    iVar4 = 0;
                                                    func_0x000109109a44();
                                                    if (((((iVar4 == 0) &&
                                                          (func_0x000109109a34(), iVar4 == 0)) &&
                                                         (param_4[0x3d] = (byte)iStack_64,
                                                         iStack_64 != 0)) &&
                                                        ((func_0x000109109a44(), iVar4 == 0 &&
                                                         (func_0x000109109a60(), iVar4 == 0)))) &&
                                                       ((func_0x000109109a60(), iVar4 == 0 &&
                                                        ((func_0x000109109a60(), iVar4 == 0 &&
                                                         (func_0x000109109a60(), iVar4 == 0)))))) {
                                                      puVar6 = &uStack_90;
                                                      func_0x000109109244(puVar6,param_4 + 0x40);
                                                      if ((int)puVar6 == 0) {
                                                        func_0x000109109244(&uStack_90,
                                                                            param_4 + 0x44);
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = (int)&uStack_90;
                                                    FUN_109109978();
                                                    if (iVar4 == 0) {
LAB_109109100:
                                                      iVar4 = 0;
                                                      func_0x000109109a44();
                                                      if (iVar4 == 0) goto LAB_109109108;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              func_0x000109109af4();
                                              func_0x000109109b0c();
                                              if (iVar4 == 0) {
                                                func_0x000109109af4();
                                                func_0x000109109b0c();
                                                if ((iVar4 == 0) &&
                                                   (func_0x000109109a44(), iVar4 == 0))
                                                goto LAB_1091090b4;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    func_0x000109109a7c();
                                    if (iVar4 == 0) {
                                      if (iStack_6c != 0xff) goto LAB_109108ffc;
                                      func_0x000109109af4();
                                      func_0x000109109b40();
                                      if (iVar4 == 0) {
                                        func_0x000109109af4();
                                        func_0x000109109b40();
                                        if (iVar4 == 0) goto LAB_109108ffc;
                                      }
                                    }
                                  }
                                }
LAB_109108ef8:
                                if (param_4[8] == 0) {
                                  bVar2 = param_4[0x28];
                                  iVar4 = bVar2 - 2;
                                  iVar8 = 1;
                                }
                                else {
                                  func_0x000109109b14();
                                  bVar2 = param_4[0x28];
                                  iVar4 = (bVar2 - 2) * extraout_w9;
                                  iVar8 = extraout_w8;
                                }
                                iVar12 = *(int *)(param_4 + 0x20) * 0x10 + 0x10;
                                iVar3 = (*(int *)(param_4 + 0x24) * 0x10 + 0x10) * (2 - (uint)bVar2)
                                ;
                                *(int *)(param_4 + 0x48) = iVar12;
                                *(int *)(param_4 + 0x4c) = iVar3;
                                if (param_4[0x2b] == 0) {
                                  uVar10 = 0;
                                }
                                else {
                                  uVar10 = 0;
                                  *(int *)(param_4 + 0x48) =
                                       iVar12 - (*(int *)(param_4 + 0x30) + *(int *)(param_4 + 0x2c)
                                                ) * iVar8;
                                  *(int *)(param_4 + 0x4c) =
                                       iVar3 + (*(int *)(param_4 + 0x38) + *(int *)(param_4 + 0x34))
                                               * iVar4;
                                }
                                goto LAB_109108dec;
                              }
                            }
                            else {
                              puVar6 = &uStack_90;
                              func_0x000109109244(puVar6,param_4 + 0x2c);
                              if ((int)puVar6 == 0) {
                                puVar6 = &uStack_90;
                                func_0x000109109244(puVar6,param_4 + 0x30);
                                if ((int)puVar6 == 0) {
                                  puVar6 = &uStack_90;
                                  func_0x000109109244(puVar6,param_4 + 0x34);
                                  if ((int)puVar6 == 0) {
                                    puVar6 = &uStack_90;
                                    func_0x000109109244(puVar6,param_4 + 0x38);
                                    if ((int)puVar6 == 0) goto LAB_109108edc;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_109108de8:
  uVar10 = 0xfffffffc;
LAB_109108dec:
  _free(uVar5);
  return uVar10;
}



/* Entry: 10910916c; end: 1091091df;  */

void FUN_10910916c(long param_1,ulong param_2,long param_3,long *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  
  uVar3 = 0;
  lVar4 = 0;
LAB_109109174:
  do {
    if (param_2 <= uVar3) {
      *param_4 = lVar4;
      return;
    }
    pcVar1 = (char *)(param_1 + uVar3);
    cVar5 = *pcVar1;
    if ((uVar3 + 2 < param_2) && (cVar5 == '\0')) {
      if ((pcVar1[1] == '\0') && (*(char *)(param_1 + uVar3 + 2) == '\x03')) {
        puVar2 = (undefined1 *)(param_3 + lVar4);
        *puVar2 = 0;
        lVar4 = lVar4 + 2;
        puVar2[1] = pcVar1[1];
        uVar3 = uVar3 + 3;
        goto LAB_109109174;
      }
      cVar5 = '\0';
    }
    uVar3 = uVar3 + 1;
    *(char *)(param_3 + lVar4) = cVar5;
    lVar4 = lVar4 + 1;
  } while( true );
}



/* Entry: 1091091e0; end: 1091092d7;  */

undefined8 FUN_1091091e0(undefined8 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  byte bStack_31;
  
  if (0x20 < param_2) {
    return 0xfffffffd;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 == 0) {
      *param_3 = uVar1;
      return 0;
    }
    func_0x000109109b7c();
    if ((int)param_1 != 0) break;
    uVar1 = (uint)bStack_31 | uVar1 << 1;
    param_2 = param_2 - 1;
  }
  return 0xfffffffc;
}



/* Entry: 1091092d8; end: 10910932b;  */

void FUN_1091092d8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uStack_24;
  
  func_0x000109109244(param_1,&uStack_24);
  if ((int)param_1 == 0) {
    uVar1 = uStack_24 + 1 >> 1;
    if ((uStack_24 & 1) == 0) {
      uVar1 = -(uStack_24 >> 1);
    }
    *param_2 = uVar1;
  }
  return;
}



/* Entry: 10910932c; end: 10910938b;  */

undefined8 FUN_10910932c(long param_1,ulong param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int extraout_w8;
  int iVar8;
  int extraout_w9;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  byte bStack_98;
  int iStack_94;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_3 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_2 < 7) {
    return 0xfffffffe;
  }
  if ((*(byte *)(param_1 + 5) & 0x1f) == 0) {
    return 0xfffffffd;
  }
  if (param_2 == 7) {
    return 0xfffffffe;
  }
  uVar9 = (ulong)((uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8
                 );
  if (param_2 < uVar9 + 8) {
    return 0xfffffffe;
  }
  if ((byte *)(param_1 + 8) == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_3 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (uVar9 < 4) {
    return 0xfffffffe;
  }
  param_3[0x38] = 0;
  param_3[0x39] = 0;
  param_3[0x3a] = 0;
  param_3[0x3b] = 0;
  param_3[0x3c] = 0;
  param_3[0x3d] = 0;
  param_3[0x3e] = 0;
  param_3[0x3f] = 0;
  param_3[0x30] = 0;
  param_3[0x31] = 0;
  param_3[0x32] = 0;
  param_3[0x33] = 0;
  param_3[0x34] = 0;
  param_3[0x35] = 0;
  param_3[0x36] = 0;
  param_3[0x37] = 0;
  param_3[0x48] = 0;
  param_3[0x49] = 0;
  param_3[0x4a] = 0;
  param_3[0x4b] = 0;
  param_3[0x4c] = 0;
  param_3[0x4d] = 0;
  param_3[0x4e] = 0;
  param_3[0x4f] = 0;
  param_3[0x40] = 0;
  param_3[0x41] = 0;
  param_3[0x42] = 0;
  param_3[0x43] = 0;
  param_3[0x44] = 0;
  param_3[0x45] = 0;
  param_3[0x46] = 0;
  param_3[0x47] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  param_3[0x1e] = 0;
  param_3[0x1f] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  param_3[0x2d] = 0;
  param_3[0x2e] = 0;
  param_3[0x2f] = 0;
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  param_3[0x26] = 0;
  param_3[0x27] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  lVar12 = param_1 + 9;
  if ((*(byte *)(param_1 + 8) & 0x1f) != 7) {
    return 0xfffffffd;
  }
  lVar5 = uVar9 - 1;
  _malloc();
  if (lVar5 == 0) {
    return 0xfffffffc;
  }
  FUN_10910916c(lVar12,uVar9 - 1,lVar5,auStack_88);
  iVar4 = (int)lVar12;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_90 = lVar5;
  func_0x000109109b00();
  FUN_1091091e0();
  if (iVar4 == 0) {
    *param_3 = bStack_98;
    func_0x000109109b00();
    FUN_1091091e0();
    if (iVar4 == 0) {
      param_3[1] = bStack_98;
      func_0x000109109b00();
      func_0x000109109b50();
      if (iVar4 == 0) {
        func_0x000109109b00();
        FUN_1091091e0();
        if (iVar4 == 0) {
          param_3[2] = bStack_98;
          plVar6 = &lStack_90;
          func_0x000109109244(plVar6,param_3 + 4);
          if ((int)plVar6 == 0) {
            param_3[8] = 1;
            param_3[9] = 0;
            param_3[10] = 0;
            bVar2 = *param_3;
            uVar10 = bVar2 - 0x53;
            if ((((uVar10 < 0x39) && ((1L << ((ulong)uVar10 & 0x3f) & 0x198208808020009U) != 0)) ||
                (bVar2 == 0xf4)) || (bVar2 == 0x2c)) {
              func_0x000109109a54();
              if ((((int)plVar6 == 0) &&
                  ((param_3[8] = bStack_98, bStack_98 != 3 ||
                   (func_0x000109109a9c(), (int)plVar6 == 0)))) &&
                 (func_0x000109109a54(), (int)plVar6 == 0)) {
                param_3[9] = bStack_98;
                func_0x000109109a54();
                if ((int)plVar6 == 0) {
                  param_3[10] = bStack_98;
                  func_0x000109109a9c();
                  if (((int)plVar6 == 0) && (func_0x000109109a24(), (int)plVar6 == 0)) {
                    if (iStack_94 != 0) {
                      uVar10 = 0;
                      uVar7 = 0xc;
                      if (bStack_98 != 3) {
                        uVar7 = 8;
                      }
                      for (; uVar10 != uVar7; uVar10 = uVar10 + 1) {
                        func_0x000109109a24();
                        if ((int)plVar6 != 0) goto LAB_109108de8;
                        if (iStack_94 != 0) {
                          iVar4 = 0x10;
                          if (5 < uVar10) {
                            iVar4 = 0x40;
                          }
                          iVar13 = 8;
                          iVar8 = 8;
                          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                            bVar1 = iVar8 != 0;
                            iVar8 = 0;
                            if (bVar1) {
                              func_0x000109109adc();
                              if ((int)plVar6 != 0) goto LAB_109108de8;
                              iVar8 = (iStack_64 + iVar13 + 0x100) % 0x100;
                              if (iVar8 != 0) {
                                iVar13 = iVar8;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_109108dd0;
                  }
                }
              }
            }
            else {
LAB_109108dd0:
              plVar6 = &lStack_90;
              func_0x000109109244(plVar6,param_3 + 0xc);
              if ((int)plVar6 == 0) {
                func_0x000109109a54();
                iVar4 = (int)plVar6;
                if (iVar4 == 0) {
                  param_3[0x10] = bStack_98;
                  if (bStack_98 == 1) {
                    func_0x000109109a9c();
                    if (((((int)plVar6 == 0) && (func_0x000109109adc(), (int)plVar6 == 0)) &&
                        (func_0x000109109adc(), (int)plVar6 == 0)) &&
                       (func_0x000109109a60(), (int)plVar6 == 0)) {
                      iVar4 = iStack_68 + 1;
                      do {
                        iVar4 = iVar4 + -1;
                        if (iVar4 == 0) goto LAB_109108e34;
                        func_0x000109109adc();
                      } while ((int)plVar6 == 0);
                    }
                  }
                  else if ((bStack_98 != 0) || (func_0x000109109b70(), iVar4 == 0)) {
LAB_109108e34:
                    plVar6 = &lStack_90;
                    func_0x000109109244(plVar6,param_3 + 0x18);
                    iVar4 = (int)plVar6;
                    if ((iVar4 == 0) && (func_0x000109109a9c(), iVar4 == 0)) {
                      param_3[0x1c] = bStack_98;
                      func_0x000109109b58();
                      if (((iVar4 == 0) && (func_0x000109109b64(), iVar4 == 0)) &&
                         (func_0x000109109a24(), iVar4 == 0)) {
                        param_3[0x28] = (byte)iStack_94;
                        if ((byte)iStack_94 == 0) {
                          func_0x000109109a24();
                          if (iVar4 != 0) goto LAB_109108de8;
                          param_3[0x29] = 0;
                        }
                        iVar4 = 0;
                        func_0x000109109a24();
                        if (iVar4 == 0) {
                          param_3[0x2a] = (byte)iStack_94;
                          func_0x000109109a24();
                          if (iVar4 == 0) {
                            param_3[0x2b] = (byte)iStack_94;
                            if ((byte)iStack_94 == 0) {
LAB_109108edc:
                              iVar4 = 0;
                              func_0x000109109a24();
                              if (iVar4 == 0) {
                                param_3[0x3c] = (byte)iStack_94;
                                if (((byte)iStack_94 != 0) && (func_0x000109109a34(), iVar4 == 0)) {
                                  if (iStack_64 == 0) {
LAB_109108ffc:
                                    iVar4 = 0;
                                    func_0x000109109a34();
                                    if ((iVar4 == 0) &&
                                       ((iStack_64 == 0 || (func_0x000109109a44(), iVar4 == 0)))) {
                                      iVar4 = 0;
                                      func_0x000109109a34();
                                      if (iVar4 == 0) {
                                        if (iStack_64 != 0) {
                                          func_0x000109109af4();
                                          FUN_1091091e0();
                                          if ((((iVar4 != 0) || (func_0x000109109a44(), iVar4 != 0))
                                              || (func_0x000109109a34(), iVar4 != 0)) ||
                                             ((iStack_64 != 0 &&
                                              (((func_0x000109109acc(), iVar4 != 0 ||
                                                (func_0x000109109acc(), iVar4 != 0)) ||
                                               (func_0x000109109acc(), iVar4 != 0))))))
                                          goto LAB_109108ef8;
                                        }
                                        iVar4 = 0;
                                        func_0x000109109a34();
                                        if ((iVar4 == 0) &&
                                           ((iStack_64 == 0 ||
                                            ((func_0x000109109a60(), iVar4 == 0 &&
                                             (func_0x000109109a60(), iVar4 == 0)))))) {
                                          iVar4 = 0;
                                          func_0x000109109a34();
                                          if (iVar4 == 0) {
                                            if (iStack_64 == 0) {
LAB_1091090b4:
                                              iVar4 = 0;
                                              func_0x000109109a8c();
                                              if (iVar4 == 0) {
                                                if (iStack_6c != 0) {
                                                  iVar4 = (int)&lStack_90;
                                                  FUN_109109978();
                                                  if (iVar4 != 0) goto LAB_109108ef8;
                                                }
                                                plVar6 = &lStack_90;
                                                FUN_1091091e0(plVar6,1,&iStack_70);
                                                if ((int)plVar6 == 0) {
                                                  if (iStack_70 == 0) {
                                                    if (iStack_6c != 0) goto LAB_109109100;
LAB_109109108:
                                                    iVar4 = 0;
                                                    func_0x000109109a44();
                                                    if (((((iVar4 == 0) &&
                                                          (func_0x000109109a34(), iVar4 == 0)) &&
                                                         (param_3[0x3d] = (byte)iStack_64,
                                                         iStack_64 != 0)) &&
                                                        ((func_0x000109109a44(), iVar4 == 0 &&
                                                         (func_0x000109109a60(), iVar4 == 0)))) &&
                                                       ((func_0x000109109a60(), iVar4 == 0 &&
                                                        ((func_0x000109109a60(), iVar4 == 0 &&
                                                         (func_0x000109109a60(), iVar4 == 0)))))) {
                                                      plVar6 = &lStack_90;
                                                      func_0x000109109244(plVar6,param_3 + 0x40);
                                                      if ((int)plVar6 == 0) {
                                                        func_0x000109109244(&lStack_90,
                                                                            param_3 + 0x44);
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = (int)&lStack_90;
                                                    FUN_109109978();
                                                    if (iVar4 == 0) {
LAB_109109100:
                                                      iVar4 = 0;
                                                      func_0x000109109a44();
                                                      if (iVar4 == 0) goto LAB_109109108;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              func_0x000109109af4();
                                              func_0x000109109b0c();
                                              if (iVar4 == 0) {
                                                func_0x000109109af4();
                                                func_0x000109109b0c();
                                                if ((iVar4 == 0) &&
                                                   (func_0x000109109a44(), iVar4 == 0))
                                                goto LAB_1091090b4;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    func_0x000109109a7c();
                                    if (iVar4 == 0) {
                                      if (iStack_6c != 0xff) goto LAB_109108ffc;
                                      func_0x000109109af4();
                                      func_0x000109109b40();
                                      if (iVar4 == 0) {
                                        func_0x000109109af4();
                                        func_0x000109109b40();
                                        if (iVar4 == 0) goto LAB_109108ffc;
                                      }
                                    }
                                  }
                                }
LAB_109108ef8:
                                if (param_3[8] == 0) {
                                  bVar2 = param_3[0x28];
                                  iVar4 = bVar2 - 2;
                                  iVar8 = 1;
                                }
                                else {
                                  func_0x000109109b14();
                                  bVar2 = param_3[0x28];
                                  iVar4 = (bVar2 - 2) * extraout_w9;
                                  iVar8 = extraout_w8;
                                }
                                iVar13 = *(int *)(param_3 + 0x20) * 0x10 + 0x10;
                                iVar3 = (*(int *)(param_3 + 0x24) * 0x10 + 0x10) * (2 - (uint)bVar2)
                                ;
                                *(int *)(param_3 + 0x48) = iVar13;
                                *(int *)(param_3 + 0x4c) = iVar3;
                                if (param_3[0x2b] == 0) {
                                  uVar11 = 0;
                                }
                                else {
                                  uVar11 = 0;
                                  *(int *)(param_3 + 0x48) =
                                       iVar13 - (*(int *)(param_3 + 0x30) + *(int *)(param_3 + 0x2c)
                                                ) * iVar8;
                                  *(int *)(param_3 + 0x4c) =
                                       iVar3 + (*(int *)(param_3 + 0x38) + *(int *)(param_3 + 0x34))
                                               * iVar4;
                                }
                                goto LAB_109108dec;
                              }
                            }
                            else {
                              plVar6 = &lStack_90;
                              func_0x000109109244(plVar6,param_3 + 0x2c);
                              if ((int)plVar6 == 0) {
                                plVar6 = &lStack_90;
                                func_0x000109109244(plVar6,param_3 + 0x30);
                                if ((int)plVar6 == 0) {
                                  plVar6 = &lStack_90;
                                  func_0x000109109244(plVar6,param_3 + 0x34);
                                  if ((int)plVar6 == 0) {
                                    plVar6 = &lStack_90;
                                    func_0x000109109244(plVar6,param_3 + 0x38);
                                    if ((int)plVar6 == 0) goto LAB_109108edc;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_109108de8:
  uVar11 = 0xfffffffc;
LAB_109108dec:
  _free(lVar5);
  return uVar11;
}



/* Entry: 10910938c; end: 1091093cb;  */

undefined8 FUN_10910938c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_70 [64];
  undefined4 uStack_30;
  
  if (param_3 != (undefined4 *)0x0) {
    FUN_10910932c(param_1,param_2,auStack_70);
    if ((int)param_1 == 0) {
      *param_3 = uStack_30;
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 1091093cc; end: 1091098a3;  */

ulong FUN_1091093cc(undefined8 *******param_1,undefined1 *param_2,undefined8 *******param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  int extraout_w8;
  int extraout_w9;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *******unaff_x19;
  undefined8 *******unaff_x20;
  ulong uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulong uVar16;
  uint uStack_98;
  char cStack_94;
  undefined8 ******ppppppuStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined4 uStack_6c;
  char acStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = 0xffffffff;
  uVar4 = (undefined1)uStack_98;
  pppppppuVar6 = unaff_x19;
  if ((param_1 != (undefined8 *******)0x0) &&
     (unaff_x20 = param_3, param_3 != (undefined8 *******)0x0)) {
    if (param_2 < (undefined1 *)0x17) {
LAB_109109410:
      uVar12 = 0xfffffffe;
      pppppppuVar6 = unaff_x19;
    }
    else {
      puVar10 = (undefined1 *)0x17;
      for (uVar15 = 0; uVar15 != *(byte *)((long)param_1 + 0x16); uVar15 = uVar15 + 1) {
        puVar11 = puVar10 + 3;
        if (param_2 < puVar11) goto LAB_109109410;
        uVar3 = *(ushort *)((byte *)((long)param_1 + (long)puVar10) + 1);
        iVar5 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) + 1;
        while (iVar5 = iVar5 + -1, iVar5 != 0) {
          puVar1 = puVar11 + 2;
          if (param_2 < puVar1) goto LAB_109109410;
          unaff_x19 = (undefined8 *******)
                      (ulong)((uint)(*(ushort *)((long)param_1 + (long)puVar11) >> 8) |
                             (*(ushort *)((long)param_1 + (long)puVar11) & 0xff00ff) << 8);
          puVar11 = (undefined1 *)((long)unaff_x19 + (long)puVar1);
          if (param_2 < puVar11) goto LAB_109109410;
          if ((*(byte *)((long)param_1 + (long)puVar10) & 0x3f) == 0x21) {
            if (unaff_x19 < (undefined8 *******)0x4) goto LAB_109109410;
            pbVar2 = (byte *)((long)param_1 + (long)puVar1);
            param_1 = param_3;
            _bzero(param_3,0xa0);
            pbVar13 = pbVar2 + 2;
            if ((*pbVar2 & 0x7e) != 0x42) goto LAB_1091095dc;
            pppppppuVar6 = (undefined8 *******)((long)unaff_x19 + -2);
            _malloc();
            if (pppppppuVar6 != (undefined8 *******)0x0) {
              FUN_10910916c(pbVar13,(undefined8 *******)((long)unaff_x19 + -2),pppppppuVar6,
                            auStack_88);
              iVar5 = (int)pbVar13;
              uStack_80 = 0;
              uStack_78 = 0;
              ppppppuStack_90 = pppppppuVar6;
              func_0x000109109b00();
              func_0x0001091091e0();
              if (iVar5 != 0) goto LAB_1091095cc;
              *(undefined1 *)param_3 = uVar4;
              func_0x000109109b00();
              func_0x0001091091e0();
              if (iVar5 != 0) goto LAB_1091095cc;
              uVar12 = (ulong)uStack_98;
              *(undefined1 *)((long)param_3 + 1) = uVar4;
              func_0x000109109a24();
              if (iVar5 != 0) goto LAB_1091095cc;
              *(char *)((long)param_3 + 2) = cStack_94;
              func_0x000109109ae8();
              func_0x000109109b50();
              if (iVar5 != 0) goto LAB_1091095cc;
              *(char *)((long)param_3 + 3) = (char)uStack_6c;
              func_0x000109109a8c();
              if (iVar5 != 0) goto LAB_1091095cc;
              *(char *)((long)param_3 + 4) = (char)uStack_6c;
              func_0x000109109ae8();
              func_0x0001091091e0();
              if (iVar5 != 0) goto LAB_1091095cc;
              *(char *)((long)param_3 + 5) = (char)uStack_6c;
              param_1 = &ppppppuStack_90;
              func_0x000109109b0c();
              if ((int)param_1 != 0) goto LAB_1091095cc;
              func_0x000109109abc();
              if ((int)param_1 != 0) goto LAB_1091095cc;
              func_0x000109109ae8();
              func_0x000109109b40();
              if ((int)param_1 != 0) goto LAB_1091095cc;
              func_0x000109109a7c();
              if ((int)param_1 == 0) goto LAB_1091095f0;
              goto LAB_1091095cc;
            }
            uVar12 = 0xfffffffc;
            param_1 = pppppppuVar6;
            pppppppuVar6 = unaff_x19;
            goto LAB_109109414;
          }
        }
        puVar10 = puVar11;
      }
LAB_1091095dc:
      uVar12 = 0xfffffffd;
      pppppppuVar6 = unaff_x19;
    }
  }
LAB_109109414:
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return uVar12;
    }
    ___stack_chk_fail();
    param_3 = unaff_x20;
LAB_1091095f0:
    uVar12 = uVar12 & 0xff;
    *(char *)((long)param_3 + 0xc) = (char)uStack_6c;
    acStack_68[0] = '\0';
    acStack_68[1] = '\0';
    acStack_68[2] = '\0';
    acStack_68[3] = '\0';
    acStack_68[4] = '\0';
    acStack_68[5] = '\0';
    acStack_68[6] = '\0';
    acStack_68[7] = '\0';
    acStack_68[8] = '\0';
    acStack_68[9] = '\0';
    acStack_68[10] = '\0';
    acStack_68[0xb] = '\0';
    acStack_68[0xc] = '\0';
    acStack_68[0xd] = '\0';
    acStack_68[0xe] = '\0';
    acStack_68[0xf] = '\0';
    for (uVar16 = 0; uVar12 != uVar16; uVar16 = uVar16 + 1) {
      func_0x000109109a8c();
      if ((int)param_1 != 0) goto LAB_1091095cc;
      acStack_68[uVar16 + 8] = (char)uStack_6c;
      func_0x000109109a8c();
      if ((int)param_1 != 0) goto LAB_1091095cc;
      acStack_68[uVar16] = (char)uStack_6c;
    }
    if ((int)uVar12 == 0) {
LAB_109109660:
      for (uVar16 = 0; iVar5 = (int)param_1, uVar12 != uVar16; uVar16 = uVar16 + 1) {
        if (acStack_68[uVar16 + 8] != '\0') {
          func_0x000109109a7c();
          if ((((int)param_1 != 0) || (func_0x000109109abc(), (int)param_1 != 0)) ||
             (func_0x000109109abc(), (int)param_1 != 0)) goto LAB_1091095cc;
          func_0x000109109ae8();
          func_0x000109109b40();
          if ((int)param_1 != 0) goto LAB_1091095cc;
        }
        if ((acStack_68[uVar16] != '\0') && (func_0x000109109a7c(), (int)param_1 != 0))
        goto LAB_1091095cc;
      }
      func_0x000109109a54();
      if (iVar5 == 0) {
        *(undefined1 *)((long)param_3 + 0xd) = uVar4;
        func_0x000109109a54();
        if (iVar5 == 0) {
          *(undefined1 *)((long)param_3 + 0xe) = uVar4;
          if ((uStack_98 & 0xff) == 3) {
            func_0x000109109a24();
            if (iVar5 != 0) goto LAB_1091095cc;
            *(char *)((long)param_3 + 0xf) = cStack_94;
          }
          pppppppuVar7 = &ppppppuStack_90;
          func_0x000109109244(pppppppuVar7,param_3 + 2);
          iVar5 = (int)pppppppuVar7;
          if (((iVar5 == 0) && (func_0x000109109b70(), iVar5 == 0)) &&
             (func_0x000109109a24(), iVar5 == 0)) {
            *(char *)(param_3 + 3) = cStack_94;
            if (cStack_94 == '\0') {
LAB_109109750:
              iVar5 = 0;
              func_0x000109109a54();
              if (iVar5 == 0) {
                *(undefined1 *)((long)param_3 + 0x2c) = uVar4;
                func_0x000109109a54();
                if (iVar5 == 0) {
                  *(undefined1 *)((long)param_3 + 0x2d) = uVar4;
                  func_0x000109109a54();
                  if (iVar5 == 0) {
                    *(undefined1 *)((long)param_3 + 0x2e) = uVar4;
                    func_0x000109109a24();
                    if (iVar5 == 0) {
                      *(char *)((long)param_3 + 0x2f) = cStack_94;
                      if (cStack_94 == '\0') {
                        uVar12 = (ulong)*(byte *)((long)param_3 + 1);
                      }
                      else {
                        uVar12 = 0;
                      }
                      pppppppuVar7 = param_3 + 0xe;
                      uVar16 = uVar12 - 1;
                      puVar14 = (undefined4 *)((long)pppppppuVar7 + uVar12 * 4);
LAB_1091097b8:
                      uVar12 = (ulong)*(byte *)((long)param_3 + 1);
                      uVar16 = uVar16 + 1;
                      if (uVar12 < uVar16) {
                        pppppppuVar8 = pppppppuVar7;
                        uVar16 = uVar12;
                        if (*(char *)((long)param_3 + 0x2f) == '\0') {
                          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                            *(undefined4 *)(pppppppuVar8 + -8) =
                                 *(undefined4 *)((long)param_3 + uVar12 * 4 + 0x30);
                            *(undefined4 *)(pppppppuVar8 + -4) =
                                 *(undefined4 *)((long)param_3 + uVar12 * 4 + 0x50);
                            *(undefined4 *)pppppppuVar8 =
                                 *(undefined4 *)((long)pppppppuVar7 + uVar12 * 4);
                            pppppppuVar8 = (undefined8 *******)((long)pppppppuVar8 + 4);
                          }
                        }
                        *(undefined4 *)(param_3 + 0x13) =
                             *(undefined4 *)((long)param_3 + uVar12 * 4 + 0x50);
                        *(int *)((long)param_3 + 0x9c) =
                             *(int *)((long)param_3 + uVar12 * 4 + 0x30) + 1;
                        if (*(char *)((long)param_3 + 0xe) == '\0') {
                          iVar5 = 1;
                          iVar9 = 1;
                        }
                        else {
                          func_0x000109109b14();
                          iVar5 = extraout_w8;
                          iVar9 = extraout_w9;
                        }
                        *(int *)(param_3 + 0x12) = *(int *)(param_3 + 2);
                        *(int *)((long)param_3 + 0x94) = *(int *)((long)param_3 + 0x14);
                        if (*(char *)(param_3 + 3) == '\0') {
                          uVar12 = 0;
                        }
                        else {
                          uVar12 = 0;
                          *(int *)(param_3 + 0x12) =
                               *(int *)(param_3 + 2) -
                               (*(int *)(param_3 + 4) + *(int *)((long)param_3 + 0x1c)) * iVar5;
                          *(int *)((long)param_3 + 0x94) =
                               *(int *)((long)param_3 + 0x14) -
                               (*(int *)(param_3 + 5) + *(int *)((long)param_3 + 0x24)) * iVar9;
                        }
                        goto LAB_1091095d0;
                      }
                      pppppppuVar8 = &ppppppuStack_90;
                      func_0x000109109244(pppppppuVar8,puVar14 + -0x10);
                      if ((int)pppppppuVar8 == 0) {
                        pppppppuVar8 = &ppppppuStack_90;
                        func_0x000109109244(pppppppuVar8,puVar14 + -8);
                        if ((int)pppppppuVar8 == 0) break;
                      }
                    }
                  }
                }
              }
            }
            else {
              pppppppuVar7 = &ppppppuStack_90;
              func_0x000109109244(pppppppuVar7,(undefined1 *)((long)param_3 + 0x1c));
              iVar5 = (int)pppppppuVar7;
              if (((iVar5 == 0) && (func_0x000109109b58(), iVar5 == 0)) &&
                 (func_0x000109109b64(), iVar5 == 0)) {
                pppppppuVar7 = &ppppppuStack_90;
                func_0x000109109244(pppppppuVar7,param_3 + 5);
                if ((int)pppppppuVar7 == 0) goto LAB_109109750;
              }
            }
          }
        }
      }
    }
    else {
      uVar15 = (int)uVar12 - 1;
      do {
        uVar15 = uVar15 + 1;
        if (7 < uVar15) goto LAB_109109660;
        func_0x000109109ae8();
        func_0x000109109b50();
      } while ((int)param_1 == 0);
    }
LAB_1091095cc:
    uVar12 = 0xfffffffc;
LAB_1091095d0:
    param_1 = pppppppuVar6;
    _free();
    unaff_x20 = param_3;
  } while( true );
  pppppppuVar8 = &ppppppuStack_90;
  func_0x000109109244(pppppppuVar8,puVar14);
  puVar14 = puVar14 + 1;
  if ((int)pppppppuVar8 != 0) goto LAB_1091095cc;
  goto LAB_1091097b8;
}



/* Entry: 1091098a4; end: 1091098e3;  */

undefined8 FUN_1091098a4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c0 [152];
  undefined4 uStack_28;
  
  if (param_3 != (undefined4 *)0x0) {
    FUN_1091093cc(param_1,param_2,auStack_c0);
    if ((int)param_1 == 0) {
      *param_3 = uStack_28;
    }
    return param_1;
  }
  return 0xffffffff;
}



/* Entry: 1091098e4; end: 109109977;  */

undefined8
FUN_1091098e4(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [64];
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  if (param_5 != (undefined4 *)0x0) {
    if (param_3 == 0) {
      if (param_4 == 0) {
        *param_5 = 0;
        return 0xfffffffd;
      }
      if (param_5 != (undefined4 *)0x0) {
        FUN_1091093cc(param_1,param_2,auStack_c0);
        if ((int)param_1 == 0) {
          *param_5 = uStack_28;
        }
        return param_1;
      }
    }
    else if (param_5 != (undefined4 *)0x0) {
      FUN_10910932c(param_1,param_2,auStack_70);
      if ((int)param_1 == 0) {
        *param_5 = uStack_30;
      }
      return param_1;
    }
  }
  return 0xffffffff;
}



/* Entry: 109109978; end: 109109a23;  */

undefined4 FUN_109109978(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_38 [4];
  uint uStack_34;
  
  uVar2 = param_1;
  func_0x000109109244(param_1,&uStack_34);
  if ((((int)uVar2 == 0) && (func_0x000109109b30(), (int)uVar2 == 0)) &&
     (func_0x000109109b30(), (int)uVar2 == 0)) {
    uVar3 = 0xffffffff;
    while( true ) {
      iVar1 = (int)uVar2;
      uVar3 = uVar3 + 1;
      if (uStack_34 < uVar3) break;
      func_0x000109109b88();
      if (iVar1 != 0) {
        return 0xfffffffc;
      }
      func_0x000109109b88();
      if (iVar1 != 0) {
        return 0xfffffffc;
      }
      uVar2 = param_1;
      func_0x0001091091e0(param_1,1,auStack_38);
      if ((int)uVar2 != 0) {
        return 0xfffffffc;
      }
    }
    func_0x000109109a6c();
    if ((iVar1 == 0) && (func_0x000109109a6c(), iVar1 == 0)) {
      func_0x000109109a6c();
      if (iVar1 != 0) {
        return 0xfffffffc;
      }
      func_0x000109109a6c();
      if (iVar1 != 0) {
        return 0xfffffffc;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}



/* Entry: 109109a24; end: 109109b9b;  */

/* WARNING: Removing unreachable block (ram,0x0001091091e8) */

undefined8 FUN_109109a24(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &stack0x00000010;
  iVar2 = 1;
  do {
    func_0x000109109b7c();
    if ((int)puVar1 != 0) {
      return 0xfffffffc;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}



/* Entry: 109109b9c; end: 10910a087;  */

void FUN_109109b9c(ulong param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uStack_50;
  byte bStack_4a;
  byte bStack_49;
  int iStack_48;
  uint uStack_44;
  
  uVar4 = 1;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if ((*(char *)(param_1 + 0x10) == 'm') &&
       (((*(char *)(param_1 + 0x11) == 'o' && (*(char *)(param_1 + 0x12) == 'o')) &&
        (*(char *)(param_1 + 0x13) == 'f')))) {
      if ((*(int *)(param_1 + 0x538) == 0) &&
         (*(int *)(param_1 + 0x560) == *(int *)(param_1 + 0x4e4))) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(param_2 + 0x19) = uVar6;
      while (*(int *)(param_1 + 0x560) == 0) {
        if (*(uint *)(param_1 + 0x4d8) <= *(int *)(param_1 + 0x538) + 1U) {
          return;
        }
        uVar4 = param_1;
        FUN_10910a53c();
        if ((int)uVar4 != 0) {
          return;
        }
        if ((*(byte *)(param_1 + 0x4e0) & 1) != 0) {
          *(long *)(param_1 + 0x558) = *(long *)(param_1 + 0x4c0) + (long)*(int *)(param_1 + 0x4e8);
        }
        uVar4 = param_1;
        func_0x00010910a660();
        if ((int)uVar4 != 0) {
          return;
        }
      }
      *param_2 = *(long *)(param_1 + 0x568);
      uVar7 = *(uint *)(param_1 + 0x4e0);
      if ((uVar7 >> 8 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x4b8) >> 3 & 1) == 0) {
          return;
        }
        uVar9 = (ulong)*(uint *)(param_1 + 0x4cc);
      }
      else {
        func_0x00010910adfc();
        uVar7 = *(uint *)(param_1 + 0x4e0);
        uVar9 = uVar4;
      }
      if ((uVar7 >> 9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x4b8) >> 4 & 1) == 0) {
          return;
        }
        uVar4 = (ulong)*(uint *)(param_1 + 0x4d0);
        *(uint *)(param_2 + 4) = *(uint *)(param_1 + 0x4d0);
      }
      else {
        func_0x00010910adfc();
        *(int *)(param_2 + 4) = (int)uVar4;
        uVar7 = *(uint *)(param_1 + 0x4e0);
      }
      lVar8 = *(long *)(param_1 + 0x558);
      param_2[3] = lVar8;
      *(ulong *)(param_1 + 0x558) = lVar8 + (uVar4 & 0xffffffff);
      if ((uVar7 >> 10 & 1) == 0) {
        if (((uVar7 >> 2 & 1) == 0) || (*(int *)(param_1 + 0x560) != *(int *)(param_1 + 0x4e4))) {
          if (((*(byte *)(param_1 + 0x4b8) >> 5 & 1) == 0) && (*(int *)(param_1 + 0x488) != 0)) {
            return;
          }
          uVar4 = (ulong)*(uint *)(param_1 + 0x4d4);
        }
        else {
          uVar4 = (ulong)*(uint *)(param_1 + 0x4ec);
        }
      }
      else {
        func_0x00010910adfc();
      }
      *(int *)(param_2 + 2) = (int)uVar4;
      if (*(long *)(param_1 + 0x1a8) != 0) {
        uVar4 = param_1 + 0x1a8;
        FUN_109106128(uVar4,&uStack_44);
        if ((int)uVar4 != 0) {
          return;
        }
        *(uint *)(param_2 + 2) =
             *(uint *)(param_2 + 2) & 0xf0000000 |
             *(uint *)(param_2 + 2) & 0xfffff | (uStack_44 & 0xff) << 0x14;
      }
      if (*(long *)(param_1 + 0x1e8) != 0) {
        uVar4 = param_1 + 0x1e8;
        func_0x0001091063c4(uVar4,&uStack_44);
        if ((int)uVar4 != 0) {
          return;
        }
        *(uint *)(param_2 + 2) =
             *(uint *)(param_2 + 2) & 0xfff00000 |
             *(uint *)(param_2 + 2) & 0x1ffff | (uStack_44 & 7) << 0x11;
      }
      if (*(long *)(param_1 + 0x1c8) != 0) {
        uVar4 = param_1 + 0x1c8;
        FUN_1091061bc(uVar4,&uStack_44);
        if ((int)uVar4 != 0) {
          return;
        }
        *(undefined2 *)(param_2 + 2) = (undefined2)uStack_44;
      }
      iVar3 = (int)uVar4;
      if ((*(byte *)(param_1 + 0x4e1) >> 3 & 1) == 0) {
        lVar8 = *param_2;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x4dc);
        lVar8 = *param_2;
        func_0x00010910adfc();
        iVar3 = (int)uVar4;
        if (cVar2 == '\0') {
          lVar8 = lVar8 + (uVar4 & 0xffffffff);
        }
        else {
          lVar8 = lVar8 + iVar3;
        }
      }
      param_2[1] = lVar8;
      if ((*(byte *)(param_1 + 0x4b8) >> 1 & 1) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x4c8);
      }
      *(undefined4 *)((long)param_2 + 0x24) = uVar6;
      if (*(long *)(param_1 + 0x4f0) == 0) {
        *(undefined2 *)(param_2 + 0x18) = 0;
      }
      else {
        lVar8 = param_1 + 0x4f0;
        func_0x000109106258(lVar8,param_2 + 0x18,(long)param_2 + 0xc1);
        if ((int)lVar8 != 0) {
          return;
        }
        iVar3 = 0;
      }
      if (*(long *)(param_1 + 0x510) == 0) {
        *(undefined2 *)(param_2 + 0x14) = 0;
        param_2[0x15] = 0;
      }
      else {
        lVar8 = param_1 + 0x510;
        FUN_1091062c0(lVar8,param_2 + 0x12,*(undefined1 *)(param_1 + 0x458),param_2 + 0x14,
                      param_2 + 0x15);
        if ((int)lVar8 != 0) {
          return;
        }
        iVar3 = 0;
      }
      func_0x00010910ae30();
      FUN_109105e90();
      if (iVar3 != 0) {
        if (iVar3 == 0x14) {
LAB_10910a078:
          param_2[0x16] = 0;
          param_2[0x17] = 0;
          return;
        }
        if (iVar3 != 0x13) {
          return;
        }
        param_2[0x16] = 0;
        param_2[0x17] = 0;
      }
      func_0x00010910ae18();
      if ((iVar3 == 0) && (func_0x00010910ae24(), iVar3 == 0)) {
        *(ulong *)(param_1 + 0x568) = *(long *)(param_1 + 0x568) + (uVar9 & 0xffffffff);
        *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + -1;
        *(undefined4 *)((long)param_2 + 0xc4) = 1;
      }
    }
    else {
      lVar8 = param_1 + 0xc0;
      FUN_1091058a4(lVar8,param_2,&uStack_44);
      if ((int)lVar8 == 0) {
        if (*(long *)(param_1 + 0x108) == 0) {
          lVar8 = *param_2;
        }
        else {
          lVar8 = param_1 + 0x108;
          func_0x000109105690(lVar8,&iStack_48);
          if ((int)lVar8 != 0) {
            return;
          }
          lVar8 = *param_2 + (long)iStack_48;
        }
        param_2[1] = lVar8;
        lVar8 = param_1 + 0x150;
        FUN_1091059b4(lVar8,param_2 + 4);
        if ((int)lVar8 == 0) {
          lVar8 = param_1 + 0x178;
          func_0x000109105d84(lVar8,&iStack_48);
          if ((int)lVar8 == 0) {
            if (*(long *)(param_1 + 0x1a8) == 0) {
              bStack_49 = 0x10;
              if (iStack_48 != 0) {
                bStack_49 = 0x20;
              }
            }
            else {
              lVar8 = param_1 + 0x1a8;
              FUN_109106128(lVar8,&bStack_49);
              if ((int)lVar8 != 0) {
                return;
              }
            }
            if (*(long *)(param_1 + 0x1c8) == 0) {
              uStack_50 = uStack_50 & 0xffff0000;
            }
            else {
              lVar8 = param_1 + 0x1c8;
              FUN_1091061bc(lVar8,&uStack_50);
              if ((int)lVar8 != 0) {
                return;
              }
            }
            uVar7 = 0;
            if (*(long *)(param_1 + 0x1e8) != 0) {
              lVar8 = param_1 + 0x1e8;
              func_0x0001091063c4(lVar8,&bStack_4a);
              if ((int)lVar8 != 0) {
                return;
              }
              uVar7 = (uint)bStack_4a << 0x11;
            }
            uVar7 = uVar7 | (uint)bStack_49 << 0x14;
            uVar1 = uVar7 | 0x10000;
            if (iStack_48 != 0) {
              uVar1 = uVar7;
            }
            *(uint *)(param_2 + 2) = uVar1 | uStack_50 & 0xffff;
            lVar8 = param_1 + 0x50;
            FUN_109105af4(lVar8,&iStack_48,(long)param_2 + 0x24,&uStack_50);
            if ((int)lVar8 == 0) {
              *(undefined4 *)((long)param_2 + 0xc4) = *(undefined4 *)(param_1 + 0x74);
              if (uStack_50 == 0) {
                lVar8 = param_1 + 0x88;
                FUN_109105c54(lVar8,param_2 + 3);
                if ((int)lVar8 == 0) {
                  uVar4 = 0;
                  lVar10 = param_1 + 0x368;
                  puVar5 = (undefined8 *)(param_1 + 0x410);
                  do {
                    iVar3 = (int)lVar8;
                    if (*(byte *)(param_1 + 0x409) <= uVar4) {
                      lVar8 = param_2[3];
                      goto LAB_109109e08;
                    }
                    lVar8 = lVar10;
                    func_0x0001091065f4(lVar10,*puVar5);
                    uVar4 = uVar4 + 1;
                    lVar10 = lVar10 + 0x28;
                    puVar5 = puVar5 + 1;
                  } while ((int)lVar8 == 0);
                }
              }
              else {
                lVar8 = *(long *)(param_1 + 0xb0) + (ulong)*(uint *)(param_1 + 0xb8);
                param_2[3] = lVar8;
                iVar3 = 0;
LAB_109109e08:
                *(long *)(param_1 + 0xb0) = lVar8;
                *(int *)(param_1 + 0xb8) = (int)param_2[4];
                func_0x00010910ae30();
                FUN_109105e90();
                if (iVar3 != 0) {
                  if (iVar3 == 0x14) goto LAB_10910a078;
                  if (iVar3 != 0x13) {
                    return;
                  }
                  param_2[0x16] = 0;
                  param_2[0x17] = 0;
                }
                func_0x00010910ae18();
                if (iVar3 == 0) {
                  *(long *)(param_1 + 0x568) = *param_2;
                  func_0x00010910ae24();
                  if (iVar3 == 0) {
                    *(undefined2 *)(param_2 + 0x18) = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10910a088; end: 10910a257;  */

undefined8 FUN_10910a088(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  
  uVar12 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + 0x408);
    uVar4 = (ulong)bVar1;
    if (uVar4 <= uVar12) {
      if (*(long *)(param_1 + 0x438) != 0) {
        if (2 < bVar1) {
          return 0x17;
        }
        puVar13 = (undefined4 *)(param_2 + 0x30 + uVar4 * 0x18);
        *puVar13 = 0x70696666;
        *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_1 + 0x430);
        lVar8 = 0x458;
        if ((*(uint *)(param_1 + 0x44c) & 1) != 0) {
          lVar8 = 0x470;
        }
        bVar3 = *(byte *)(param_1 + lVar8);
        uVar10 = (uint)bVar3;
        if ((*(uint *)(param_1 + 0x44c) >> 1 & 1) != 0) {
          iVar2 = -0x80;
          func_0x000109106790();
          uVar10 = (uint)bVar3 + iVar2 * 6 + 2;
          bVar3 = (byte)uVar10;
          uVar10 = uVar10 & 0xff;
        }
        *(byte *)(puVar13 + 4) = bVar3;
        func_0x0001091068f4(param_1 + 0x430,uVar10);
        uVar4 = (ulong)(bVar1 + 1) & 0xff;
      }
      puVar6 = (undefined1 *)(param_2 + uVar4 * 0x18 + 0x40);
      for (; uVar4 < 4; uVar4 = uVar4 + 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 0x18;
      }
      return 0;
    }
    lVar11 = param_1 + 0x2c8 + uVar12 * 0x28;
    puVar13 = (undefined4 *)(param_2 + 0x30 + uVar12 * 0x18);
    *puVar13 = *(undefined4 *)(lVar11 + 0x18);
    lVar8 = lVar11;
    func_0x000109106598(lVar11,puVar13 + 4);
    if ((int)lVar8 != 0) break;
    uVar4 = (ulong)*(byte *)(puVar13 + 4);
    if (uVar4 != 0) {
      uVar7 = (ulong)*(byte *)(param_1 + 0x409);
      pbVar5 = (byte *)(param_1 + 0x408);
      piVar9 = (int *)(param_1 + 900);
      do {
        if (uVar7 == 0) {
          return 0x17;
        }
        iVar2 = *piVar9;
        pbVar5 = pbVar5 + 8;
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 10;
      } while (iVar2 != *(int *)(lVar11 + 0x18));
      lVar8 = *(long *)pbVar5;
      *(long *)(puVar13 + 2) = lVar8;
      *(ulong *)pbVar5 = lVar8 + uVar4;
    }
    uVar12 = uVar12 + 1;
  }
  return 1;
}



/* Entry: 10910a258; end: 10910a53b;  */

void FUN_10910a258(long param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x48);
  if (((*(char *)(param_1 + 0x10) == 'm') && (*(char *)(param_1 + 0x11) == 'o')) &&
     (*(char *)(param_1 + 0x12) == 'o')) {
    if (*(char *)(param_1 + 0x13) == 'f') {
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      _free(*(undefined8 *)(param_1 + 0x1a0));
      func_0x00010910ae0c();
      *(undefined2 *)(param_1 + 0x408) = 0;
      lVar2 = param_1;
      FUN_10910a53c(param_1,0);
      if ((int)lVar2 == 0) {
        if ((*(uint *)(param_1 + 0x4b8) & 1) == 0) {
          if (((*(uint *)(param_1 + 0x4b8) >> 0x11 & 1) == 0) && (*(int *)(param_1 + 0x4a4) != 0)) {
            return;
          }
          lVar2 = *(long *)(param_1 + 0x40);
          *(long *)(param_1 + 0x4c0) = lVar2;
        }
        else {
          lVar2 = *(long *)(param_1 + 0x4c0);
        }
        *(long *)(param_1 + 0x558) = lVar2;
        if ((*(byte *)(param_1 + 0x4e0) & 1) != 0) {
          *(long *)(param_1 + 0x558) = lVar2 + *(int *)(param_1 + 0x4e8);
        }
        if ((*(int *)(param_1 + 0x4e8) == 0) && (*(int *)(param_1 + 0x4a4) == 0)) {
          *(long *)(param_1 + 0x558) = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x18) + 0x10;
        }
        if (*(int *)(param_1 + 0x4a8) != 0) {
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x4b0);
          *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x4b0);
        }
        func_0x00010910a660();
      }
    }
    else if (*(char *)(param_1 + 0x13) == 'v') {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x1a0);
      _free();
      func_0x00010910ae0c();
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x494) = 0;
      *(undefined8 *)(param_1 + 0x48c) = 0;
      *(undefined4 *)(param_1 + 0x488) = 0;
      *(undefined2 *)(param_1 + 0x408) = 0;
      func_0x00010910ada4();
      FUN_109108a10();
      if ((((iVar1 == 0) && (*(long *)(param_1 + 0xc0) != 0)) && (*(long *)(param_1 + 0x150) != 0))
         && ((*(long *)(param_1 + 0x50) != 0 && (*(long *)(param_1 + 0x88) != 0)))) {
        if (*(long *)(param_1 + 0x178) == 0) {
          *(undefined4 *)(param_1 + 0x19c) = 0;
        }
        if (((*(long *)(param_1 + 0x210) == 0) && (*(int *)(param_1 + 8) != 0)) &&
           (*(int *)(param_1 + 4) != 0)) {
          *(long *)(param_1 + 0x210) = 0;
        }
      }
    }
  }
  return;
}



/* Entry: 10910a53c; end: 10910a6e7;  */

void FUN_10910a53c(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_80;
  ppuStack_50 = &PTR_DAT_110adca40;
  ppuStack_48 = &PTR_DAT_110adcae0;
  uStack_38 = 0x8000000000;
  lStack_40 = param_1;
  _bzero((int *)(param_1 + 0x4a0),0x98);
  *(undefined4 *)(param_1 + 0x538) = param_2;
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  FUN_109108a10(&uStack_80,&ppuStack_50);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  if (iVar1 < 1) {
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x488) == 0) goto LAB_10910a600;
  uVar3 = *(uint *)(param_1 + 0x4b8);
  if ((uVar3 >> 1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x48c);
    uVar2 = uVar3 | 2;
    *(uint *)(param_1 + 0x4b8) = uVar2;
    if ((uVar3 & 8) != 0) goto LAB_10910a5e8;
LAB_10910a634:
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x490);
    uVar3 = uVar2 | 8;
    *(uint *)(param_1 + 0x4b8) = uVar3;
    if ((uVar2 & 0x10) != 0) goto LAB_10910a5ec;
LAB_10910a648:
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x494);
    *(uint *)(param_1 + 0x4b8) = uVar3 | 0x10;
    uVar2 = uVar3 & 0x20;
    uVar3 = uVar3 | 0x10;
  }
  else {
    uVar2 = uVar3;
    if ((uVar3 >> 3 & 1) == 0) goto LAB_10910a634;
LAB_10910a5e8:
    uVar3 = uVar2;
    if ((uVar2 >> 4 & 1) == 0) goto LAB_10910a648;
LAB_10910a5ec:
    uVar2 = uVar3 >> 5 & 1;
  }
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x498);
    *(uint *)(param_1 + 0x4b8) = uVar3 | 0x20;
  }
LAB_10910a600:
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x4e4);
  return;
}



/* Entry: 10910a6e8; end: 10910a853;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10910a6e8(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  char **ppcVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  char *pcStack_a0;
  long lStack_98;
  char *pcStack_90;
  undefined1 auStack_70 [8];
  long lStack_68;
  char *pcStack_50;
  
  ppcVar3 = &pcStack_a0;
  ppcVar5 = &pcStack_a0;
  lVar7 = *(long *)(param_2 + 0x10);
  FUN_109108a94(param_1,&UNK_10f551cb7,0,auStack_70);
  if ((int)param_1 != 0) {
    return;
  }
  piVar8 = *(int **)(param_2 + 0x10);
  pcStack_90 = pcStack_50;
  pcStack_a0 = pcStack_50;
  if (lStack_68 + 1U < 2) {
    bVar1 = false;
    lStack_98 = -1;
  }
  else {
    pcStack_a0 = pcStack_50 + 1;
    lStack_98 = lStack_68 + -1;
    bVar1 = *pcStack_50 == '\0';
  }
  func_0x0001091067dc();
  puVar4 = (undefined1 *)ppcVar3;
  func_0x00010910adcc();
  if (!bVar1) {
    return;
  }
  if ((int)puVar4 == *piVar8) {
    piVar8[0x128] = piVar8[0x128] + 1;
    piVar8[0x136] = 0;
    uVar6 = (uint)ppcVar3;
    piVar8[0x12e] = uVar6;
    if (((ulong)ppcVar3 & 1) != 0) {
      func_0x00010910685c();
      *(char ***)(piVar8 + 0x130) = ppcVar5;
      puVar4 = (undefined1 *)ppcVar5;
    }
    iVar2 = (int)puVar4;
    if ((uVar6 >> 1 & 1) != 0) {
      func_0x00010910adcc();
      piVar8[0x132] = iVar2;
    }
    if ((uVar6 >> 3 & 1) != 0) {
      func_0x00010910adcc();
      piVar8[0x133] = iVar2;
    }
    if ((uVar6 >> 4 & 1) != 0) {
      func_0x00010910adcc();
      piVar8[0x134] = iVar2;
    }
    if ((uVar6 >> 5 & 1) != 0) {
      func_0x00010910adcc();
      piVar8[0x135] = iVar2;
    }
    *(undefined4 *)(lVar7 + 0x4a8) = 0;
    func_0x00010910ada4();
    FUN_109108a10();
    return;
  }
  if (piVar8[0x128] == 0) {
    piVar8[0x129] = piVar8[0x129] + 1;
  }
  if (*(int *)(lVar7 + 0x4a0) != 0) {
    return;
  }
  *(int *)(lVar7 + 0x4a4) = *(int *)(lVar7 + 0x4a4) + 1;
  return;
}



/* Entry: 10910a854; end: 10910a8c7;  */

undefined8 FUN_10910a854(ulong param_1)

{
  char cVar1;
  undefined1 in_CY;
  char **ppcVar2;
  char *extraout_x8;
  long extraout_x9;
  long unaff_x19;
  char *pcStack_38;
  long lStack_30;
  
  func_0x00010910add4();
  if ((bool)in_CY) {
    pcStack_38 = extraout_x8 + 1;
    cVar1 = *extraout_x8;
    lStack_30 = extraout_x9 + -1;
    func_0x00010910adf4();
    *(undefined4 *)(unaff_x19 + 0x4a8) = 1;
    if (cVar1 == '\x01') {
      ppcVar2 = &pcStack_38;
      func_0x00010910685c();
      goto LAB_10910a888;
    }
  }
  else {
    lStack_30 = -1;
    func_0x00010910adf4();
    *(undefined4 *)(unaff_x19 + 0x4a8) = 1;
  }
  func_0x00010910adbc();
  ppcVar2 = (char **)(param_1 & 0xffffffff);
LAB_10910a888:
  *(char ***)(unaff_x19 + 0x4b0) = ppcVar2;
  return 0;
}



/* Entry: 10910a8c8; end: 10910a98b;  */

undefined8 FUN_10910a8c8(ulong param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x10);
  pbVar5 = *(byte **)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 + 1U < 2) {
    *(undefined1 *)(lVar7 + 0x4dc) = 0xff;
  }
  else {
    bVar2 = *pbVar5;
    *(byte *)(lVar7 + 0x4dc) = bVar2;
    if (bVar2 < 2) {
      iVar1 = *(int *)(lVar7 + 0x4d8);
      if (iVar1 == *(int *)(lVar7 + 0x538)) {
        func_0x00010910adf4();
        uVar3 = (uint)param_1;
        *(uint *)(lVar7 + 0x4e0) = uVar3;
        uVar4 = uVar3;
        func_0x00010910adbc();
        *(uint *)(lVar7 + 0x4e4) = uVar4;
        if ((param_1 & 1) != 0) {
          func_0x00010910adbc();
          *(uint *)(lVar7 + 0x4e8) = uVar4;
        }
        if ((uVar3 >> 2 & 1) != 0) {
          func_0x00010910adbc();
          *(uint *)(lVar7 + 0x4ec) = uVar4;
        }
        *(long *)(lVar7 + 0x548) = lVar6 + -1;
        *(byte **)(lVar7 + 0x540) = pbVar5 + 1;
        *(byte **)(lVar7 + 0x550) = pbVar5;
      }
      *(int *)(lVar7 + 0x4d8) = iVar1 + 1;
      return 0;
    }
  }
  return 0x17;
}



/* Entry: 10910a98c; end: 10910a99f;  */

undefined8 * FUN_10910a98c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 extraout_w8;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(lVar3 + 0x290);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1 == 0) {
      puVar2 = (undefined8 *)0x0;
      *puVar1 = 0;
    }
    else {
      FUN_109106660();
      *(char *)(lVar3 + 0x2a8) = (char)puVar1;
      if (((uint)puVar1 < 2) && (func_0x0001091066a8(), (int)puVar1 == 0)) {
        func_0x000109106698();
        func_0x0001091066e8();
        *(undefined4 *)(lVar3 + 0x2c0) = 0;
        *(undefined4 *)(lVar3 + 0x2ac) = 0;
        *(undefined4 *)(lVar3 + 0x2b0) = extraout_w8;
        *(undefined4 *)(lVar3 + 0x2b4) = 0;
        *(undefined2 *)(lVar3 + 0x2b8) = 0;
        puVar2 = puVar1;
      }
      else {
        puVar2 = (undefined8 *)0x17;
      }
    }
    return puVar2;
  }
  return (undefined8 *)0x1;
}



/* Entry: 10910a9a0; end: 10910a9df;  */

void FUN_10910a9a0(undefined8 param_1,undefined8 param_2)

{
  FUN_10910ad88();
  func_0x00010910aa0c(param_1,param_2,0);
  return;
}



/* Entry: 10910a9e0; end: 10910aa6b;  */

void FUN_10910a9e0(long param_1,long param_2)

{
  int iVar1;
  int extraout_w8;
  undefined4 extraout_w8_00;
  long unaff_x19;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10) + 0x1e8;
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    func_0x000109106660();
    func_0x0001091066a8();
    func_0x0001091066f4();
    if ((iVar1 == 0) && (extraout_w8 == 0)) {
      func_0x000109106698();
      func_0x0001091066e8();
      *(undefined4 *)(unaff_x19 + 0x18) = extraout_w8_00;
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    }
  }
  return;
}



/* Entry: 10910aa6c; end: 10910abb3;  */

undefined8 * FUN_10910aa6c(undefined8 param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_3d0 [8];
  undefined8 uStack_3c8;
  long lStack_3b0;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [104];
  undefined1 *puStack_2d8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  int iStack_170;
  long lStack_38;
  
  puVar1 = &uStack_370;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = *(int **)(param_2 + 0x10);
  puVar3 = &UNK_10f551d11;
  FUN_109108a94(param_1,&UNK_10f551d11,0,&uStack_1a8);
  if ((int)param_1 == 0) {
    puStack_2d8 = auStack_178;
    *(undefined1 **)(param_2 + 0x10) = auStack_340;
    uStack_368 = uStack_1a0;
    uStack_370 = uStack_1a8;
    uStack_358 = uStack_190;
    uStack_360 = uStack_198;
    uStack_348 = uStack_180;
    uStack_350 = uStack_188;
    puVar3 = param_2;
    FUN_109106a90();
    *(int **)(param_2 + 0x10) = piVar4;
    if ((int)puVar1 == 0) {
      if (iStack_170 == *piVar4) {
        func_0x00010910ada4();
        FUN_109108a10();
        puVar3 = param_2;
      }
      else {
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  else {
    puVar1 = (undefined8 *)0x17;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (*(ulong *)((long)puVar1 + 8) < 0x39) {
    lVar5 = *(long *)(puVar3 + 0x10);
    _memcpy(lVar5 + 600,*(undefined8 *)((long)puVar1 + 0x20));
    uStack_3c8 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = (undefined1 *)(lVar5 + 0x210);
    lStack_3b0 = lVar5 + 600;
    FUN_109105e20(puVar2,auStack_3d0,*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 4));
    return (undefined8 *)puVar2;
  }
  return (undefined8 *)(undefined1 *)0x17;
}



/* Entry: 10910abb4; end: 10910aca3;  */

void FUN_10910abb4(long param_1,long param_2)

{
  uint uVar1;
  int extraout_w8;
  uint uVar2;
  long unaff_x19;
  
  uVar1 = (int)*(undefined8 *)(param_2 + 0x10) + 0x50;
  func_0x0001091066b0();
  if ((unaff_x19 != 0) && (param_1 != 0)) {
    func_0x000109106660();
    uVar2 = uVar1;
    func_0x0001091066a8();
    func_0x0001091066f4();
    if ((uVar1 == 0) && (extraout_w8 == 0)) {
      func_0x000109106698();
      *(uint *)(unaff_x19 + 0x18) = uVar2;
      if (uVar2 < 0x10001) {
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        else {
          func_0x000109106698();
        }
        *(uint *)(unaff_x19 + 0x2c) = uVar2;
        *(undefined4 *)(unaff_x19 + 0x30) = 0;
        *(uint *)(unaff_x19 + 0x20) = uVar2 - 1;
        *(undefined4 *)(unaff_x19 + 0x24) = 0;
        *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      }
      else {
        *(undefined4 *)(unaff_x19 + 0x18) = 0;
      }
    }
  }
  return;
}



/* Entry: 10910aca4; end: 10910ace3;  */

void FUN_10910aca4(undefined8 param_1,undefined8 param_2)

{
  FUN_10910ad88();
  func_0x00010910aa0c(param_1,param_2,1);
  return;
}



/* Entry: 10910ace4; end: 10910ad87;  */

undefined8 FUN_10910ace4(int param_1)

{
  undefined1 in_CY;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char *extraout_x8;
  int *unaff_x19;
  
  func_0x00010910add4();
  if ((bool)in_CY) {
    bVar1 = *extraout_x8 == '\0';
  }
  else {
    bVar1 = false;
  }
  func_0x00010910adf4();
  uVar3 = 0x17;
  iVar2 = 0x17;
  if ((bVar1) && (param_1 == 0)) {
    func_0x00010910adbc();
    if (iVar2 == *unaff_x19) {
      unaff_x19[0x122] = 1;
      func_0x00010910adbc();
      unaff_x19[0x123] = iVar2;
      func_0x00010910adbc();
      unaff_x19[0x124] = iVar2;
      func_0x00010910adbc();
      unaff_x19[0x125] = iVar2;
      func_0x00010910adbc();
      uVar3 = 0;
      unaff_x19[0x126] = iVar2;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 10910ad88; end: 10910ae53;  */

void FUN_10910ad88(void)

{
  return;
}



/* Entry: 10910ae54; end: 10910ae77;  */

void FUN_10910ae54(long param_1)

{
  code *extraout_x9;
  
  FUN_10910af04(param_1,param_1);
  (*extraout_x9)();
  if (param_1 != 0) {
    func_0x00010910af18();
  }
  return;
}



/* Entry: 10910ae78; end: 10910af03;  */

ulong FUN_10910ae78(ulong param_1)

{
  ulong uVar1;
  code *extraout_x9;
  
  uVar1 = param_1;
  FUN_10910af04();
  (*extraout_x9)();
  if (uVar1 != 0) {
    func_0x00010910af18();
    _bzero(uVar1,param_1 & 0xffffffff);
  }
  return uVar1;
}



/* Entry: 10910af04; end: 10910af2b;  */

undefined8 FUN_10910af04(void)

{
  return uRam00000001132c2218;
}



/* Entry: 10910af2c; end: 10910b017;  */

undefined8 FUN_10910af2c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    piVar1 = (int *)0x48;
    FUN_10910ae78();
    if (piVar1 == (int *)0x0) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0;
      *piVar1 = *piVar1 + 1;
      piVar1[0xc] = 0x132c2228;
      piVar1[0xd] = 1;
      piVar1[0xe] = 0x132c2228;
      piVar1[0xf] = 1;
      iRam00000001132c2228 = iRam00000001132c2228 + 2;
      piVar1[2] = -1;
      piVar1[3] = -1;
      piVar1[4] = -1;
      piVar1[5] = -1;
      piVar1[10] = 1;
      piVar1[0xb] = 1;
      piVar1[8] = 0x32;
      piVar1[9] = 100;
      piVar1[6] = 0;
      piVar1[7] = -1;
      *param_1 = piVar1;
    }
    return uVar2;
  }
  return 0xfffffffc;
}



/* Entry: 10910b018; end: 10910b047;  */

undefined8 FUN_10910b018(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (((param_1 != 0) && (uVar1 = *(ulong *)(param_1 + 8), uVar1 != 0xffffffffffffffff)) &&
     (uVar2 = *(ulong *)(param_1 + 0x10),
     (uVar2 != 0xffffffffffffffff && uVar1 <= uVar2) &&
     (uVar2 == 0xffffffffffffffff || uVar2 != uVar1))) {
    return 1;
  }
  return 0;
}



/* Entry: 10910b048; end: 10910b0bb;  */

void FUN_10910b048(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00010910b650();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    for (lVar1 = 0; lVar1 != 5; lVar1 = lVar1 + 1) {
      func_0x00010910b65c();
      if ((int)param_1 == 0) {
        *(int *)(unaff_x19 + 0x28) = (int)lVar1;
        if ((*(uint *)(unaff_x19 + 4) >> 4 & 1) != 0) {
          return;
        }
        *(uint *)(unaff_x19 + 4) = *(uint *)(unaff_x19 + 4) | 0x10;
        return;
      }
    }
  }
  return;
}



/* Entry: 10910b0bc; end: 10910b2e7;  */

void FUN_10910b0bc(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  long unaff_x19;
  char *pcStack_30;
  
  func_0x00010910b650();
  if ((unaff_x19 != 0) && (param_2 != (byte *)0x0)) {
    iVar3 = 0;
    pbVar2 = param_2;
    while( true ) {
      bVar1 = *pbVar2;
      if (bVar1 == 0) break;
      if (bVar1 - 0x3a < 0xfffffff6) {
        if ((bVar1 | 8) != 0x2d) {
          return;
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      pbVar2 = pbVar2 + 1;
    }
    if (iVar3 != 0) {
      pbVar2 = param_2 + 1;
      _strchr(pbVar2,0x2d);
      if ((pbVar2 == (byte *)0x0) &&
         ((func_0x00010910b638(), pbVar2 == (byte *)0x0 || ((pbVar2[1] == 0 && (*param_2 != 0x2d))))
         )) {
        func_0x00010910b628();
        if (*pcStack_30 == '%') {
          if (100 < (long)pbVar2) {
            return;
          }
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar4;
        *(int *)(unaff_x19 + 0x1c) = (int)pbVar2;
        if ((*(uint *)(unaff_x19 + 4) >> 3 & 1) == 0) {
          *(uint *)(unaff_x19 + 4) = *(uint *)(unaff_x19 + 4) | 8;
        }
      }
    }
  }
  return;
}



/* Entry: 10910b2e8; end: 10910b35f;  */

void FUN_10910b2e8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00010910b650();
  if ((unaff_x19 != 0) && (param_2 != 0)) {
    for (lVar1 = 0; lVar1 != 2; lVar1 = lVar1 + 1) {
      func_0x00010910b65c();
      if ((int)param_1 == 0) {
        *(int *)(unaff_x19 + 0x18) = (int)lVar1 + 1;
        if ((*(uint *)(unaff_x19 + 4) & 1) != 0) {
          return;
        }
        *(uint *)(unaff_x19 + 4) = *(uint *)(unaff_x19 + 4) | 1;
        return;
      }
    }
  }
  return;
}



/* Entry: 10910b360; end: 10910b3ef;  */

undefined8 FUN_10910b360(undefined8 param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  
  uVar2 = 0xfffffffc;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar5 = 6;
    ppuVar1 = &PTR_DAT_110adcc88;
    while (ppuVar4 = ppuVar1, lVar5 = lVar5 + -1, lVar5 != 0) {
      lVar3 = param_2;
      _strcmp(param_2,*ppuVar4);
      ppuVar1 = ppuVar4 + 2;
      if ((int)lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010910b3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)ppuVar4[1])(param_1,param_3);
        return param_1;
      }
    }
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}



/* Entry: 10910b3f0; end: 10910b54b;  */

undefined8 FUN_10910b3f0(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined4 uStack_74;
  long lStack_70;
  int iStack_64;
  
  iStack_64 = 0;
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  if (param_3 == (long *)0x0) {
    return 0xfffffffc;
  }
  lVar8 = *param_3;
  lVar7 = *(long *)(lVar8 + 0x10);
  lVar9 = lVar7;
  _strchr(lVar7,0xd);
  if (lVar9 == 0) {
    iVar10 = *(int *)(lVar8 + 8);
    lVar9 = lVar7;
    _strchr(lVar7,10);
    if (lVar9 == 0) goto LAB_10910b45c;
  }
  iVar10 = (int)lVar9 - (int)lVar7;
LAB_10910b45c:
  iVar1 = (int)lVar9;
  if (param_1 == 0) {
    iVar2 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  func_0x00010910b668();
  iVar1 = iVar1 + iVar2;
  while( true ) {
    if (iVar10 <= iStack_64) {
      if (param_1 != 0) {
        *(int *)(param_1 + 0xc) = iVar1;
      }
      return 0;
    }
    plVar4 = param_3;
    FUN_10910e948(param_3,&lStack_70,&iStack_64);
    iVar2 = (int)plVar4;
    if (iVar2 != 0) break;
    func_0x00010910b668();
    if (lStack_70 == 0) {
      lVar9 = 0;
      uVar5 = 0;
    }
    else {
      lVar9 = *(long *)(lStack_70 + 0x10);
      uVar5 = (ulong)*(uint *)(lStack_70 + 8);
    }
    lVar7 = lVar9;
    FUN_10910ead4(lVar9,lVar9 + uVar5);
    lVar8 = param_2;
    FUN_10910b54c(param_2,lVar9);
    iVar3 = (int)lVar8;
    if ((((param_1 != 0) && (iVar3 != 0)) && (func_0x00010910c2d4(), iVar3 != 0)) &&
       (*(code **)(param_1 + 0x18) != (code *)0x0)) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20),uVar6,iVar1,uStack_74);
    }
    iVar1 = iVar2 + iVar1 + (int)lVar7;
    FUN_10910e1a8(&lStack_70);
  }
  return 0xfffffffd;
}



/* Entry: 10910b54c; end: 10910b627;  */

long FUN_10910b54c(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *unaff_x20;
  byte *pbVar4;
  int iVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar2 = 0xfffffffc;
  if ((param_1 != 0) && (unaff_x20 = param_2, param_2 != (byte *)0x0)) {
    pbVar4 = param_2;
    _strchr(param_2,0x3a);
    lVar2 = 0xfffffff0;
    if ((pbVar4 != (byte *)0x0) &&
       (((pbVar4 != param_2 && (pbVar4 = pbVar4 + 1, *pbVar4 != 0)) &&
        (iVar5 = (int)pbVar4 + ~(uint)param_2, iVar5 < 0x20)))) {
      ___memcpy_chk(&uStack_70,param_2,(long)iVar5,0x20);
      *(undefined1 *)((long)&uStack_70 + (long)iVar5) = 0;
      FUN_10910b360(param_1,&uStack_70,pbVar4);
      lVar2 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar2;
  }
  ___stack_chk_fail();
  lVar2 = 0;
  iVar5 = 0;
  lVar3 = 1;
  while( true ) {
    bVar1 = *unaff_x20;
    if (bVar1 == 0) break;
    if (bVar1 - 0x3a < 0xfffffff6) {
      if (((lVar3 != 1) || (iVar5 != 0)) || (bVar1 != 0x2d)) break;
      iVar5 = 0;
      lVar3 = -1;
    }
    else {
      lVar2 = (ulong)bVar1 + lVar2 * 10 + -0x30;
      iVar5 = iVar5 + 1;
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return lVar3 * lVar2;
}



/* Entry: 10910b628; end: 10910b67f;  */

long FUN_10910b628(void)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  byte *unaff_x20;
  
  lVar2 = 0;
  iVar3 = 0;
  lVar4 = 1;
  while( true ) {
    bVar1 = *unaff_x20;
    if (bVar1 == 0) break;
    if (bVar1 - 0x3a < 0xfffffff6) {
      if (((lVar4 != 1) || (iVar3 != 0)) || (bVar1 != 0x2d)) break;
      iVar3 = 0;
      lVar4 = -1;
    }
    else {
      lVar2 = (ulong)bVar1 + lVar2 * 10 + -0x30;
      iVar3 = iVar3 + 1;
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return lVar4 * lVar2;
}



/* Entry: 10910b680; end: 10910b6c3;  */

undefined8 FUN_10910b680(long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)0x20;
  FUN_10910ae78();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0;
    *puVar1 = param_2;
    *param_1 = (long)puVar1;
  }
  return uVar2;
}



/* Entry: 10910b6c4; end: 10910b7cb;  */

undefined8 FUN_10910b6c4(long *param_1,undefined4 *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  if (param_1 == (long *)0x0) {
    return 0xfffffffc;
  }
  lVar3 = *param_1;
  if ((lVar3 == 0) || (*(int *)(lVar3 + 8) != 1)) {
    uVar4 = 4;
    plVar2 = param_1;
    func_0x00010910c280(param_1,&UNK_10f551d40);
    if ((int)plVar2 == 0) {
      plVar2 = param_1;
      func_0x00010910e53c(param_1,&UNK_10f551d45,2);
      if ((int)plVar2 == 0) {
        func_0x00010910c280(param_1,&DAT_10f551d3b);
        if ((int)param_1 == 0) {
          return 0xfffffff9;
        }
        uVar4 = 7;
      }
      else {
        uVar4 = 5;
      }
    }
  }
  else {
    cVar1 = **(char **)(lVar3 + 0x10);
    if (cVar1 == 'b') {
      uVar4 = 2;
    }
    else if (cVar1 == 'c') {
      uVar4 = 0;
    }
    else if (cVar1 == 'v') {
      uVar4 = 6;
    }
    else if (cVar1 == 'u') {
      uVar4 = 3;
    }
    else {
      if (cVar1 != 'i') {
        return 0;
      }
      uVar4 = 1;
    }
  }
  *param_2 = uVar4;
  return 0;
}



/* Entry: 10910b7cc; end: 10910c23f;  */

/* WARNING: Switch with 1 destination removed at 0x00010910b900 */

void FUN_10910b7cc(undefined8 param_1,long param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int **ppiVar7;
  undefined8 uVar8;
  int ***pppiVar9;
  long *plVar10;
  long lVar11;
  int *extraout_x8;
  int *extraout_x8_00;
  int *extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  int *piVar12;
  int **ppiVar13;
  char *pcVar14;
  uint uVar15;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  int iStack_a4;
  int **ppiStack_a0;
  long lStack_98;
  int *piStack_90;
  int *piStack_88;
  int *piStack_80;
  int *piStack_78;
  long lStack_70;
  int *piStack_68;
  
  if ((((param_2 != 0) && (param_3 != (long *)0x0)) && (*param_3 != 0)) &&
     (pcVar14 = *(char **)(*param_3 + 0x10), pcVar14 != (char *)0x0)) {
    iVar6 = (int)param_2 + 0x40;
    FUN_10910c8b0();
    if (iVar6 == 0) {
      lStack_c0 = *(long *)(param_2 + 0x40);
      ppiStack_a0 = (int **)0x0;
      lStack_98 = 0;
      FUN_10910e75c(&lStack_b0);
      ppiVar7 = (int **)0x0;
LAB_10910b85c:
      cVar4 = *pcVar14;
      if (ppiVar7 != (int **)0x0) {
        iVar6 = *(int *)ppiVar7;
        if (iVar6 == 3) {
          lVar11 = 0x10;
LAB_10910b8a4:
          FUN_10910e1a8((long)ppiVar7 + lVar11);
        }
        else {
          if (iVar6 == 1) {
LAB_10910b898:
            lVar11 = 8;
            goto LAB_10910b8a4;
          }
          if (iVar6 == 0) {
            piStack_88 = ppiVar7[3];
            piStack_90 = ppiVar7[2];
            FUN_10910e7ac(&piStack_90);
            FUN_10910e1a8(&piStack_88);
            goto LAB_10910b898;
          }
        }
        func_0x00010910aebc(ppiVar7);
        ppiStack_a0 = (int **)0x0;
      }
      if (cVar4 != '\0') {
        piStack_80 = (int *)0x0;
        FUN_10910e00c(10,&piStack_68);
        FUN_10910e00c(10,&lStack_70);
        ppiVar7 = &piStack_78;
        FUN_10910e75c();
        uVar15 = 0;
code_r0x00010910b8e4:
        ppiVar13 = (int **)0xffffffff;
code_r0x00010910b8e8:
        piVar1 = piStack_68;
        if ((int)ppiVar13 != -1) {
          if (*pcVar14 == '>') {
            pcVar14 = pcVar14 + 1;
          }
          if ((int)ppiVar13 == 0) {
            uVar5 = uVar15 == 1;
            if (1 < uVar15) {
              uVar5 = uVar15 - 2 == 4;
              if (uVar15 - 2 < 4) {
                ppiVar7 = &piStack_68;
                func_0x00010910e53c(ppiVar7,&DAT_10f2ef733,1);
                if ((int)ppiVar7 == 0) {
                  ppiVar7 = &piStack_68;
                  func_0x00010910c280(ppiVar7,&DAT_10f551d3b);
                  if ((int)ppiVar7 == 0) {
                    FUN_10910e1a8(&lStack_70);
                    lStack_70 = 0x1132c2228;
                    iRam00000001132c2228 = iRam00000001132c2228 + 1;
                  }
                }
                lVar11 = lStack_70;
                piVar1 = piStack_78;
                pppiVar9 = &ppiStack_a0;
                FUN_10910b680(pppiVar9,0);
                if ((int)pppiVar9 == 0) {
                  func_0x00010910c2ac();
                  piVar12 = (int *)(extraout_x9_00 + 0x228);
                  if (!(bool)uVar5) {
                    piVar12 = extraout_x8_00;
                  }
                    /* WARNING (jumptable): Read-only address (ram,0x000100000007) is written */
                  ppiVar13[1] = piVar12;
                  func_0x00010910c288();
                  if (piVar1 != (int *)0x0) {
                    *piVar1 = *piVar1 + 1;
                  }
                  lVar2 = 0x1132c2228;
                  if (lVar11 != 0) {
                    lVar2 = lVar11;
                  }
                  func_0x00010910c288(lVar2);
                    /* WARNING (jumptable): Read-only address (ram,0x00010000000f) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x000100000017) is written */
                  ppiVar13[2] = piVar1;
                  ppiVar13[3] = extraout_x8_01;
                  goto LAB_10910bfa4;
                }
              }
              else if (uVar15 == 6) {
                pppiVar9 = &ppiStack_a0;
                FUN_10910b680(pppiVar9,1);
                if ((int)pppiVar9 == 0) {
                  piVar12 = (int *)0x1132c2228;
                  if (piVar1 != (int *)0x0) {
                    piVar12 = piVar1;
                  }
                  ppiStack_a0[1] = piVar12;
                  ppiVar13 = ppiStack_a0;
                  goto LAB_10910bef0;
                }
              }
              else {
                if (piStack_68 == (int *)0x0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(piStack_68 + 4);
                }
                FUN_10910d564(uVar8,0,&piStack_80);
                piVar1 = piStack_80;
                pppiVar9 = &ppiStack_a0;
                FUN_10910b680(pppiVar9,2);
                if ((int)pppiVar9 == 0) {
                  ppiStack_a0[2] = piVar1;
                  ppiVar13 = ppiStack_a0;
                  goto LAB_10910bfa4;
                }
              }
              goto LAB_10910bea8;
            }
            pppiVar9 = &ppiStack_a0;
            FUN_10910b680(pppiVar9,3);
            if ((int)pppiVar9 != 0) goto LAB_10910bea8;
            func_0x00010910c2ac();
            piVar1 = (int *)(extraout_x9 + 0x228);
            if (!(bool)uVar5) {
              piVar1 = extraout_x8;
            }
                    /* WARNING (jumptable): Read-only address (ram,0x00010000000f) is written */
            ppiVar13[2] = piVar1;
LAB_10910bef0:
            func_0x00010910c288();
LAB_10910bfa4:
            FUN_10910e7ac(&piStack_78);
            FUN_10910e1a8(&piStack_68);
            iVar6 = (int)&lStack_70;
            FUN_10910e1a8();
            iVar3 = *(int *)ppiVar13;
            ppiVar7 = ppiStack_a0;
            if (iVar3 != 1) {
              if ((lStack_c0 == 0) || (lStack_98 != 0)) goto LAB_10910b85c;
              if (iVar3 == 0) {
                func_0x00010910c298();
                if (iVar6 == 0) {
                  plVar10 = &lStack_98;
                  if ((int)piStack_90 == 7) {
                    func_0x00010910c83c(plVar10,lStack_c0,ppiVar13[2],ppiVar13 + 3);
                    iVar6 = (int)plVar10;
                  }
                  else {
                    func_0x00010910c7a0(plVar10,lStack_c0,(ulong)piStack_90 & 0xffffffff,ppiVar13[2]
                                        ,ppiVar13 + 3);
                    iVar6 = (int)plVar10;
                  }
                }
                else {
                  func_0x00010910c298();
                }
              }
              else if (iVar3 == 2) {
                plVar10 = &lStack_98;
                func_0x00010910c8f8(plVar10,lStack_c0,ppiVar13[2]);
                iVar6 = (int)plVar10;
              }
              else {
                if (iVar3 != 3) goto LAB_10910b85c;
                plVar10 = &lStack_98;
                FUN_10910c934(plVar10,lStack_c0,ppiVar13 + 2);
                iVar6 = (int)plVar10;
              }
              lVar11 = lStack_98;
              ppiVar7 = ppiStack_a0;
              if (iVar6 != 0) goto LAB_10910b85c;
              if ((*(int *)(lStack_98 + 0x10) != 5) || (*(int *)(lStack_c0 + 0x10) == 4)) {
                func_0x00010910c980(lStack_c0,lStack_98);
                lVar2 = lStack_b0;
                uVar15 = *(uint *)(lVar11 + 0x10);
                if (-1 < (int)uVar15) {
                  if (uVar15 == 7) {
                    func_0x00010910e830(lStack_b0,*(long *)(lVar11 + 0x18) + 8);
                  }
                  else {
LAB_10910c1b4:
                    if (*(int *)(lStack_b0 + 8) != 0) {
                      FUN_10910e1a8(*(long *)(lVar11 + 0x18) + 8);
                      piVar12 = *(int **)(*(long *)(lVar2 + 0x10) + (ulong)*(uint *)(lVar2 + 8) * 8
                                         + -8);
                      piVar1 = (int *)0x1132c2228;
                      if (piVar12 != (int *)0x0) {
                        piVar1 = piVar12;
                      }
                      *(int **)(*(long *)(lVar11 + 0x18) + 8) = piVar1;
                      *piVar1 = *piVar1 + 1;
                    }
                  }
                  FUN_10910c668(&lStack_98);
                  lStack_c0 = lVar11;
                  ppiVar7 = ppiStack_a0;
                  goto LAB_10910b85c;
                }
                if ((uVar15 & 0x7ffffffe) != 0x100) goto LAB_10910c1b4;
              }
              FUN_10910c668(&lStack_98);
              ppiVar7 = ppiStack_a0;
              goto LAB_10910b85c;
            }
            if (*(int *)(lStack_c0 + 0x10) == 8) goto LAB_10910b85c;
            ppiVar13 = ppiVar13 + 1;
            FUN_10910b6c4(ppiVar13,&iStack_a4);
            ppiVar7 = ppiStack_a0;
            if ((int)ppiVar13 == -7) goto LAB_10910b85c;
            iVar6 = *(int *)(lStack_c0 + 0x10);
            if (iVar6 != iStack_a4) {
              if (iVar6 == 5 && iStack_a4 == 4) {
                lStack_c0 = *(long *)(lStack_c0 + 8);
              }
              goto LAB_10910b85c;
            }
            lStack_c0 = *(long *)(lStack_c0 + 8);
            if (iVar6 != 7) goto LAB_10910b85c;
            FUN_10910e8e4(lStack_b0,&lStack_b8);
            plVar10 = &lStack_b8;
          }
          else {
LAB_10910bea8:
            FUN_10910e7ac(&piStack_78);
            FUN_10910e1a8(&piStack_68);
            plVar10 = &lStack_70;
          }
          FUN_10910e1a8(plVar10);
          ppiVar7 = ppiStack_a0;
          goto LAB_10910b85c;
        }
        if (uVar15 == 0) {
          do {
            cVar4 = *pcVar14;
            if (cVar4 == '&') {
              uVar15 = 1;
            }
            else if (cVar4 == '<') {
              if ((piStack_68 != (int *)0x0) && (piStack_68[2] != 0)) {
                uVar15 = 0;
                ppiVar13 = (int **)0x0;
                goto code_r0x00010910b8e8;
              }
              uVar15 = 2;
            }
            else {
              if (cVar4 == '\0') {
                ppiVar13 = (int **)0x0;
                uVar15 = 0;
                goto code_r0x00010910b8e8;
              }
              func_0x00010910c258();
              if ((int)ppiVar7 != 0) goto code_r0x00010910bd80;
              uVar15 = 0;
            }
            pcVar14 = pcVar14 + 1;
            if (uVar15 != 0) break;
          } while( true );
        }
        goto code_r0x00010910b8e4;
      }
      FUN_10910e7ac(&lStack_b0);
    }
  }
  return;
code_r0x00010910bd80:
  func_0x00010910c240();
  uVar15 = 0;
  ppiVar13 = ppiVar7;
  goto code_r0x00010910b8e8;
}



/* Entry: 10910c240; end: 10910c667;  */

undefined8 * FUN_10910c240(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *unaff_x23;
  long in_stack_00000058;
  
  uVar2 = *unaff_x23;
  puVar4 = &stack0x00000058;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
    FUN_10910e1d4();
    if (((int)puVar3 == 0) && (FUN_10910e3f8(puVar4,1), puVar3 = puVar4, (int)puVar4 == 0)) {
      uVar1 = *(uint *)(in_stack_00000058 + 8);
      *(uint *)(in_stack_00000058 + 8) = uVar1 + 1;
      *(undefined1 *)(*(long *)(in_stack_00000058 + 0x10) + (ulong)uVar1) = uVar2;
      *(undefined1 *)(*(long *)(in_stack_00000058 + 0x10) + (ulong)*(uint *)(in_stack_00000058 + 8))
           = 0;
    }
    return puVar3;
  }
  return (undefined8 *)0xfffffffc;
}



/* Entry: 10910c668; end: 10910c8af;  */

void FUN_10910c668(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_1 != (undefined8 *)0x0) && (piVar2 = (int *)*param_1, piVar2 != (int *)0x0)) {
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      if (piVar2[4] == 0x80000100) {
        FUN_10910e1a8(piVar2 + 6);
      }
      else if (((uint)piVar2[4] < 9) && (*(long *)(piVar2 + 6) != 0)) {
        FUN_10910e7ac(*(long *)(piVar2 + 6) + 0x10);
        FUN_10910e1a8(*(long *)(piVar2 + 6) + 8);
        FUN_10910e1a8(*(undefined8 *)(piVar2 + 6));
        lVar3 = 0;
        for (uVar4 = 0; uVar4 < *(uint *)(*(long *)(piVar2 + 6) + 0x1c); uVar4 = uVar4 + 1) {
          FUN_10910c668(*(long *)(*(long *)(piVar2 + 6) + 0x20) + lVar3);
          lVar3 = lVar3 + 8;
        }
        func_0x00010910aebc();
        func_0x00010910aebc(*(undefined8 *)(piVar2 + 6));
      }
      func_0x00010910aebc(piVar2);
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10910c8b0; end: 10910c933;  */

undefined8 FUN_10910c8b0(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x00010910ca6c();
  func_0x00010910c7a0();
  if ((int)param_1 == 0) {
    FUN_10910e1a8(auStack_28);
  }
  return param_1;
}



/* Entry: 10910c934; end: 10910ca5f;  */

long * FUN_10910c934(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010910c73c(param_1,0x80000100,param_2);
  if ((int)plVar1 == 0) {
    FUN_10910e258(*param_1 + 0x18,param_3);
  }
  return plVar1;
}



/* Entry: 10910ca60; end: 10910ca8f;  */

void FUN_10910ca60(void)

{
  return;
}



/* Entry: 10910ca90; end: 10910cb2f;  */

undefined8 FUN_10910ca90(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xfffffffc;
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != (long *)0x0)) {
    lVar3 = 0x2968;
    FUN_10910ae78();
    if (lVar3 == 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      lVar1 = lVar3 + 0x40;
      _bzero(lVar1,0x2800);
      uVar2 = 0;
      *(long *)(lVar3 + 0x2840) = lVar1;
      *(long *)(lVar3 + 0x38) = lVar1;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(undefined4 *)(lVar3 + 0x2848) = 0x100;
      *(long *)(lVar3 + 0x10) = param_1;
      *(long *)(lVar3 + 0x18) = param_2;
      *(undefined8 *)(lVar3 + 8) = 0x100000001;
      *(undefined8 *)(lVar3 + 0x20) = param_3;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      *param_4 = lVar3;
    }
  }
  return uVar2;
}



/* Entry: 10910cb30; end: 10910cbf3;  */

void FUN_10910cb30(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x2840);
  for (uVar2 = *(ulong *)(param_1 + 0x38); uVar1 <= uVar2; uVar2 = uVar2 - 0x28) {
    if (*(int *)(uVar2 + 0xc) == 4) {
      FUN_10910e1a8(uVar2 + 0x20);
    }
    else if (*(int *)(uVar2 + 0xc) == 3) {
      func_0x00010910afb8(uVar2 + 0x20);
    }
    *(undefined8 *)(uVar2 + 8) = 0;
    *(undefined8 *)(uVar2 + 0x14) = 0;
    *(undefined8 *)(uVar2 + 0x20) = 0;
    uVar1 = *(ulong *)(param_1 + 0x2840);
    if (uVar1 < uVar2) {
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -0x28;
    }
  }
  uVar2 = param_1 + 0x40;
  if (uVar1 != uVar2) {
    _bzero(uVar2,0x2800);
    *(ulong *)(param_1 + 0x2840) = uVar2;
    *(undefined4 *)(param_1 + 0x2848) = 0x100;
    if ((uVar1 != 0) && (iRam00000001132c2200 != 0)) {
      (*(code *)PTR_DAT_1132c2210)(uRam00000001132c2218,uVar1);
      iRam00000001132c2200 = iRam00000001132c2200 + -1;
    }
    return;
  }
  return;
}



/* Entry: 10910cbf4; end: 10910cfdb;  */

long FUN_10910cbf4(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_42;
  
  lVar3 = 0;
  uStack_42 = 0;
  uStack_48 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 1;
    iVar2 = *(int *)(param_1 + 0x30);
    do {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          lVar3 = param_1;
          FUN_10910cfdc(param_1,&uStack_42,&uStack_48,0,*(undefined4 *)(param_1 + 0x28));
        }
        break;
      }
      piVar1 = *(int **)(param_1 + 0x38);
      iVar2 = *piVar1;
      if (iVar2 == 5) {
        if (piVar1 == *(int **)(param_1 + 0x2840)) {
          return 0xfffffff2;
        }
        piVar1 = piVar1 + -10;
        iVar2 = *piVar1;
        *(int **)(param_1 + 0x38) = piVar1;
        *(undefined4 *)(param_1 + 0x284c) = 1;
      }
      if (iVar2 != 6) break;
      if (piVar1[3] == 0) {
        FUN_10910af2c(piVar1 + 8);
        piVar1 = *(int **)(param_1 + 0x38);
        piVar1[3] = 3;
      }
      if ((*(int *)(param_1 + 0x284c) == 0) ||
         (lVar4 = *(long *)(piVar1 + 8), piVar1[10] != 5 || lVar4 == 0)) {
        return 0xfffffff2;
      }
      uStack_50 = *(undefined8 *)(piVar1 + 0x12);
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      lVar3 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(lVar3 + 0x34) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      lVar3 = param_1;
      func_0x00010910cd58(param_1,lVar4,&uStack_50);
      if ((*(int *)(lVar4 + 4) < -0x40000000) &&
         ((*(long *)(param_1 + 0x18) == 0 || (lVar4 = lVar3, func_0x00010910dedc(), (int)lVar4 < 0))
         )) {
        return 0xfffffffe;
      }
      iVar2 = 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    } while (*(int *)(param_1 + 0x30) == 1);
    FUN_10910cb30(param_1);
  }
  return lVar3;
}



/* Entry: 10910cfdc; end: 10910d333;  */

long FUN_10910cfdc(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int extraout_w8;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  
  if (((*(int *)(param_1 + 0x30) - 1U < 2) &&
      (lVar6 = *(long *)(param_1 + 0x38), *(int *)(lVar6 + 0xc) == 3)) &&
     (lVar8 = *(long *)(lVar6 + 0x20), lVar8 != 0)) {
    lStack_68 = CONCAT44(lStack_68._4_4_,*param_3);
    *(undefined4 *)(lVar6 + 0xc) = 3;
    lVar6 = *(long *)(param_1 + 0x2858);
    bVar3 = false;
    lStack_70 = lVar8;
    if (lVar6 != 0) {
      bVar3 = *(char *)(*(long *)(lVar6 + 0x10) + (ulong)(*(int *)(lVar6 + 8) - 1)) == '\n';
    }
    while (bVar3) {
LAB_10910d0d4:
      lVar6 = param_1;
      func_0x00010910c558(param_1,param_2,&lStack_68,param_4,param_5);
      if ((int)lVar6 == 2) {
        *(undefined4 *)(param_1 + 0x2864) = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        lVar6 = *(long *)(param_1 + 0x2858);
        uVar2 = *(int *)(lVar6 + 8) - 1;
        *(uint *)(lVar6 + 8) = uVar2;
        *(undefined1 *)(*(long *)(lVar6 + 0x10) + (ulong)uVar2) = 0;
        if (*(int *)(*(long *)(param_1 + 0x2858) + 8) == 0) {
          func_0x00010910defc();
          lVar6 = 0;
          iVar4 = 1;
        }
        else {
          iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x2858) + 0x10);
          FUN_10910d790();
          if (iVar4 == 0) {
            FUN_10910d36c(param_1,0,0,5,0,0,*(undefined4 *)(param_1 + 8),
                          *(undefined4 *)(param_1 + 0xc));
            piVar1 = (int *)0x1132c2228;
            if (*(int **)(param_1 + 0x2858) != (int *)0x0) {
              piVar1 = *(int **)(param_1 + 0x2858);
            }
            *(int **)(*(long *)(param_1 + 0x38) + 0x20) = piVar1;
            *piVar1 = *piVar1 + 1;
            func_0x00010910defc();
            lVar6 = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x38) + 0xc) = 4;
            func_0x00010910df28();
            iVar4 = extraout_w8;
          }
          else {
            if ((*(long *)(lVar8 + 0x38) == 0) || (*(int *)(*(long *)(lVar8 + 0x38) + 8) == 0)) {
LAB_10910d154:
              FUN_10910e5a0(lVar8 + 0x38,param_1 + 0x2858);
              func_0x00010910defc();
              goto LAB_10910d164;
            }
            lVar6 = lVar8 + 0x38;
            FUN_10910e4d8(lVar6,10);
            if ((int)lVar6 == 0) goto LAB_10910d154;
LAB_10910d1c0:
            iVar4 = 0;
            lVar6 = 0xfffffffd;
          }
        }
        goto LAB_10910d23c;
      }
      bVar3 = true;
LAB_10910d170:
      if ((uint)param_4 <= (uint)lStack_68) {
        iVar4 = 0;
        lVar6 = 0;
LAB_10910d23c:
        *param_3 = (uint)lStack_68;
        if ((((int)param_5 == 0) && ((uint)param_4 <= (uint)lStack_68)) &&
           ((int)lVar6 == 0 && iVar4 == 0)) {
          return 0xffffffff;
        }
        if ((int)lVar6 != 0) {
          return lVar6;
        }
        if (*(int *)(param_1 + 0x30) == 2) {
          func_0x00010910afb8(&lStack_70);
          lVar6 = 0;
        }
        else {
          lVar6 = param_1;
          FUN_10910b7cc(param_1,lVar8,lVar8 + 0x38,*(undefined4 *)(param_1 + 0x28));
          lVar5 = lVar8;
          lStack_68 = lVar8;
          FUN_10910b018();
          if ((int)lVar5 == 0) {
            func_0x00010910afb8(&lStack_68);
          }
          else {
            (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x20),lVar8);
          }
        }
        puVar7 = *(undefined4 **)(param_1 + 0x38);
        puVar7[3] = 0;
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        lVar8 = *(long *)(param_1 + 0x38);
        if (*(int *)(lVar8 + 0x34) == 0) {
          *(undefined4 *)(lVar8 + 0x28) = 0;
          func_0x00010910df28();
        }
        else {
          func_0x00010910af2c(lVar8 + 0x20);
          puVar7 = *(undefined4 **)(param_1 + 0x38);
          puVar7[3] = 3;
          *puVar7 = 6;
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
        return lVar6;
      }
    }
    lVar6 = param_1 + 0x2858;
    FUN_10910e284(lVar6,param_2,&lStack_68,param_4,param_1 + 0x2850,param_5);
    iVar4 = (int)lVar6;
    if (iVar4 == 0) {
LAB_10910d164:
      bVar3 = false;
      goto LAB_10910d170;
    }
    if (iVar4 < 0) {
LAB_10910d1b0:
      if ((*(long *)(param_1 + 0x18) != 0) && (func_0x00010910de64(), -1 < iVar4))
      goto LAB_10910d1c0;
    }
    else {
      lVar6 = param_1 + 0x2858;
      FUN_10910e4d8(lVar6,10);
      iVar4 = (int)lVar6;
      if (iVar4 != 0) goto LAB_10910d1b0;
      lVar6 = param_1 + 0x2858;
      FUN_10910e6d8(lVar6,&UNK_10dfb6636,1,&UNK_10dfb6638,3);
      if ((int)lVar6 == 0) goto LAB_10910d0d4;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar5 = lVar6, func_0x00010910de64(), -1 < (int)lVar5)) {
        iVar4 = 0;
        goto LAB_10910d23c;
      }
    }
    lVar6 = 0xfffffffe;
  }
  else {
    lVar6 = 0xfffffff2;
  }
  return lVar6;
}



/* Entry: 10910d334; end: 10910d36b;  */

void FUN_10910d334(long param_1)

{
  if (param_1 != 0) {
    FUN_10910cb30();
    FUN_10910e1a8(param_1 + 0x2858);
    if ((param_1 != 0) && (iRam00000001132c2200 != 0)) {
      (*(code *)PTR_DAT_1132c2210)(uRam00000001132c2218,param_1);
      iRam00000001132c2200 = iRam00000001132c2200 + -1;
    }
    return;
  }
  return;
}



/* Entry: 10910d36c; end: 10910d487;  */

undefined4
FUN_10910d36c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x2848) <= (int)((lVar4 - *(long *)(param_1 + 0x2840)) / 0x28) + 1U) {
    uVar1 = (ulong)(*(uint *)(param_1 + 0x2848) * 0x50);
    FUN_10910ae78();
    if (uVar1 == 0) {
      if (*(code **)(param_1 + 0x18) == (code *)0x0) {
        return 0xfffffffe;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (**(code **)(param_1 + 0x18))
                (uVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
      if (-1 < (int)uVar3) {
        return 0xfffffffd;
      }
      return 0xfffffffe;
    }
    _memcpy();
    lVar2 = *(long *)(param_1 + 0x2840);
    *(ulong *)(param_1 + 0x2840) = uVar1;
    lVar4 = uVar1 + (*(long *)(param_1 + 0x38) - lVar2);
    *(long *)(param_1 + 0x38) = lVar4;
    if (lVar2 != param_1 + 0x40) {
      func_0x00010910aebc();
      lVar4 = *(long *)(param_1 + 0x38);
    }
  }
  *(undefined4 *)(lVar4 + 0x28) = param_4;
  *(undefined4 **)(param_1 + 0x38) = (undefined4 *)(lVar4 + 0x28);
  *(undefined4 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x30) = param_2;
  *(undefined4 *)(lVar4 + 0x34) = param_6;
  *(undefined4 *)(lVar4 + 0x38) = param_3;
  *(undefined4 *)(lVar4 + 0x3c) = param_7;
  *(undefined4 *)(lVar4 + 0x40) = param_8;
  *(undefined8 *)(lVar4 + 0x48) = param_5;
  return 0;
}



/* Entry: 10910d488; end: 10910d563;  */

undefined4 FUN_10910d488(long param_1,long *param_2,long param_3,int *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iStack_44;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x10);
  }
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  lVar3 = lVar3 + *param_4;
  FUN_10910d564(lVar3,&iStack_44,param_2);
  if ((int)lVar3 == 0) {
    pcVar4 = *(code **)(param_1 + 0x18);
    if (*param_2 == -1) {
      if (pcVar4 == (code *)0x0) {
        return 0xfffffffe;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*pcVar4)(uVar2,uVar5,uVar1,8);
      if ((int)uVar2 < 0) {
        return 0xfffffffe;
      }
      return 0xfffffff1;
    }
    if (pcVar4 != (code *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      (*pcVar4)(uVar2,uVar5,uVar1,7);
      if (-1 < (int)uVar2) goto LAB_10910d4d8;
    }
    uVar5 = 0xfffffff1;
  }
  else {
LAB_10910d4d8:
    uVar5 = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iStack_44;
    *param_4 = *param_4 + iStack_44;
  }
  return uVar5;
}



/* Entry: 10910d564; end: 10910d78f;  */

bool FUN_10910d564(byte *param_1,int *param_2,undefined8 *param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iStack_5c;
  
  if (*param_1 - 0x3a < 0xfffffff6) {
    iVar8 = 0;
    goto LAB_10910d6c0;
  }
  pbVar6 = param_1;
  func_0x00010910de58();
  pbVar3 = param_1 + 1;
  iVar8 = iStack_5c;
  if (((*param_1 == 0) || (*param_1 != 0x3a)) ||
     (iVar8 = iStack_5c + 1, *pbVar3 - 0x3a < 0xfffffff6)) goto LAB_10910d6c0;
  pbVar7 = pbVar6;
  func_0x00010910de58();
  bVar1 = iStack_5c != 2;
  iVar8 = iStack_5c + iVar8;
  bVar4 = *pbVar3;
  pbVar2 = pbVar7;
  if (iStack_5c == 2 && (long)pbVar6 < 0x3c) {
    if (bVar4 == 0x3a) {
LAB_10910d63c:
      pbVar3 = param_1 + 2;
      iVar8 = iVar8 + 1;
      bVar4 = *pbVar3;
      pbVar5 = pbVar6;
      if (bVar4 - 0x3a < 0xfffffff6) {
        bVar1 = true;
        pbVar2 = (byte *)0x0;
        pbVar6 = pbVar7;
      }
      else {
        func_0x00010910de58();
        bVar1 = iStack_5c != 2;
        iVar8 = iStack_5c + iVar8;
        bVar4 = *pbVar3;
        pbVar6 = pbVar7;
      }
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    pbVar3 = pbVar3 + 1;
    pbVar7 = pbVar2;
    if (bVar4 != 0x2e) goto LAB_10910d6c0;
  }
  else {
    pbVar3 = param_1 + 2;
    if (bVar4 != 0x2e) {
      if (bVar4 != 0x3a) goto LAB_10910d6c0;
      goto LAB_10910d63c;
    }
    pbVar5 = (byte *)0x0;
    bVar1 = true;
  }
  if (0xfffffff5 < *pbVar3 - 0x3a) {
    pbVar3 = pbVar7;
    func_0x00010910de58();
    if (iStack_5c != 3) {
      bVar1 = true;
    }
    if (999 < (long)pbVar3) {
      pbVar7 = pbVar7 + (ulong)pbVar3 / 1000;
      pbVar3 = (byte *)((ulong)pbVar3 % 1000);
      bVar1 = true;
    }
    if (0x3b < (long)pbVar7) {
      pbVar6 = pbVar6 + (ulong)pbVar7 / 0x3c;
      pbVar7 = (byte *)((ulong)pbVar7 % 0x3c);
      bVar1 = true;
    }
    if (0x3b < (long)pbVar6) {
      pbVar5 = pbVar5 + (ulong)pbVar6 / 0x3c;
      pbVar6 = (byte *)((ulong)pbVar6 % 0x3c);
      bVar1 = true;
    }
    *param_3 = pbVar3 + (long)pbVar5 * 3600000 + (long)pbVar6 * 60000 + (long)pbVar7 * 1000;
    if (param_2 != (int *)0x0) {
      *param_2 = iVar8 + iStack_5c + 1;
    }
    return !bVar1;
  }
LAB_10910d6c0:
  *param_3 = 0xffffffffffffffff;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  return false;
}



/* Entry: 10910d790; end: 10910d7eb;  */

undefined8 FUN_10910d790(short *param_1,uint param_2)

{
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    do {
      if (param_2 < 3) {
        return 0xfffffff3;
      }
      if ((char)*param_1 == '-') {
        if (*(short *)((long)param_1 + 1) == 0x3e2d) {
          return 0;
        }
      }
      else if ((char)*param_1 == '\0') {
        return 0xfffffff3;
      }
      param_2 = param_2 - 1;
      param_1 = (short *)((long)param_1 + 1);
    } while( true );
  }
  return 0xfffffffc;
}



/* Entry: 10910d7ec; end: 10910ddc3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10910d7ec(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  undefined4 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  
  uStack_7c = 0;
  piVar12 = param_1;
LAB_10910d838:
  while( true ) {
    uVar13 = (uint)param_3;
    if (uVar13 <= uStack_7c) {
      return;
    }
    iVar5 = param_1[0xc];
    if (iVar5 == 2) break;
    if (iVar5 == 1) {
      func_0x00010910de98();
      iVar5 = (int)piVar12;
      goto joined_r0x00010910dcb8;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      uStack_8c = 0;
      iVar2 = param_1[10];
      uStack_64 = uStack_7c;
LAB_10910d868:
      if (uVar13 <= uStack_64) goto LAB_10910dd08;
      iVar1 = param_1[2];
      piVar8 = *(int **)(param_1 + 0xe);
      iVar11 = *piVar8;
      iVar7 = 1;
      if (iVar11 == 5) {
        if (piVar8[1] == 0) {
          piVar12 = piVar8 + 8;
          FUN_10910e284(piVar12,param_2,&uStack_64,param_3,0,iVar2);
          if ((int)piVar12 != 0) {
            if (-1 < (int)piVar12) {
              piVar12 = (int *)(*(long *)(param_1 + 0xe) + 0x20);
              FUN_10910e6d8(piVar12,&UNK_10dfb6636,1,&UNK_10dfb6638,3);
              uStack_8c = (uint)piVar12;
              if (uStack_8c == 0) {
                uStack_8c = 0;
                *(undefined4 *)(*(long *)(param_1 + 0xe) + 4) = 1;
                goto LAB_10910d8f4;
              }
              iVar5 = (int)*(long *)(param_1 + 0xe) + 0x20;
              FUN_10910e1a8();
              func_0x00010910dec0();
              if (extraout_x8_02 == 0) {
                return;
              }
              func_0x00010910de34();
              if (iVar5 < 0) {
                return;
              }
              goto LAB_10910dd08;
            }
            iVar5 = (int)*(long *)(param_1 + 0xe) + 0x20;
            FUN_10910e1a8();
            func_0x00010910dec0();
            if (extraout_x8_01 == 0) {
              return;
            }
            func_0x00010910de34();
            if (iVar5 < 0) {
              return;
            }
            goto LAB_10910dd14;
          }
          piVar8 = *(int **)(param_1 + 0xe);
          if (piVar8[1] != 0) goto LAB_10910d8f4;
        }
        else {
LAB_10910d8f4:
          func_0x00010910df14();
          func_0x00010910c558();
          piVar8 = *(int **)(param_1 + 0xe);
          if ((int)piVar12 == 2) {
            *(int **)(param_1 + 0xe) = piVar8 + -10;
            param_1[0xa13] = 1;
            goto LAB_10910d868;
          }
        }
        iVar11 = *piVar8;
      }
      if (((iVar11 != 6) || (param_1[0xa13] == 0)) || (piVar8[10] != 5)) {
        func_0x00010910df14();
        func_0x00010910c31c();
        iVar5 = (int)piVar12;
        bVar4 = iVar5 == -1;
        if (bVar4) {
          iVar5 = -2;
        }
        if ((iVar2 == 0) && (bVar4)) {
          if (uStack_64 == uVar13) goto LAB_10910dd08;
          iVar5 = -1;
        }
      }
      puVar9 = *(undefined4 **)(param_1 + 0xe);
code_r0x00010910d970:
      switch(*puVar9) {
      case 0:
        goto code_r0x00010910daac;
      case 1:
        if (iVar5 != 2) {
          if (iVar5 == 3) {
            param_1[0xa13] = 0;
            func_0x00010910deec();
            goto code_r0x00010910db6c;
          }
          if (*(code **)(param_1 + 6) == (code *)0x0) {
            return;
          }
          uVar6 = *(undefined8 *)(param_1 + 8);
          (**(code **)(param_1 + 6))(uVar6,param_1[2],puVar9[-4],1);
          iVar5 = (int)uVar6;
          goto code_r0x00010910dd74;
        }
        func_0x00010910de74();
        *extraout_x8_00 = 4;
        break;
      case 2:
        if (iVar5 != 2) {
          uVar10 = (ulong)uStack_64;
          while ((uVar10 < (param_3 & 0xffffffff) &&
                 (*(char *)(param_2 + uVar10) != '\n' && *(char *)(param_2 + uVar10) != '\r'))) {
            uVar10 = uVar10 + 1;
            uStack_64 = (uint)uVar10;
          }
          goto LAB_10910d868;
        }
        func_0x00010910de74();
        break;
      case 3:
        if (iVar5 != 2) goto code_r0x00010910d9a0;
code_r0x00010910daf4:
        puVar9[8] = puVar9[8] + 1;
        goto LAB_10910db78;
      case 4:
        if ((param_1[0xa13] != 0) && (puVar9[10] == 3)) {
          if ((uint)puVar9[0x12] < 2) {
            if (*(code **)(param_1 + 6) == (code *)0x0) {
              return;
            }
            piVar12 = *(int **)(param_1 + 8);
            (**(code **)(param_1 + 6))(piVar12,param_1[2],1,2);
            if ((int)piVar12 < 0) {
              return;
            }
            puVar9 = *(undefined4 **)(param_1 + 0xe);
          }
          puVar9[10] = 0;
          *(undefined8 *)(puVar9 + 0x12) = 0;
        }
        if (iVar5 == 2) goto LAB_10910db78;
        uStack_78 = 0;
        uStack_70 = 0;
        piVar12 = (int *)&uStack_70;
        FUN_10910af2c();
        uStack_8c = (uint)piVar12;
        if (uStack_8c == 0) {
          piVar12 = (int *)&uStack_78;
          func_0x00010910e068(piVar12,param_1 + 0xa1a,param_1[0xa19]);
          uStack_8c = (uint)piVar12;
          if (uStack_8c == 0) {
            param_1[0xa13] = 0;
            piVar12 = param_1;
            func_0x00010910df0c(param_1,iVar5,*(int *)(*(long *)(param_1 + 0xe) + 0x10) + 1,6,
                                uStack_70,3,iVar1);
            if ((int)piVar12 != -3) {
              param_1[0xa13] = 0;
              func_0x00010910deec(*(undefined8 *)(param_1 + 0xe));
              func_0x00010910df0c();
              if ((int)piVar12 != -3) {
                uStack_8c = 0;
                *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20) = uStack_78;
                goto LAB_10910db78;
              }
            }
            uStack_8c = 0;
            uStack_90 = 0xfffffffd;
            goto code_r0x00010910db0c;
          }
          if ((uStack_8c == 0xfffffffd) &&
             ((*(long *)(param_1 + 6) == 0 || (func_0x00010910de34(), (int)piVar12 < 0))))
          goto code_r0x00010910dbd0;
          piVar12 = (int *)&uStack_70;
          func_0x00010910afb8();
        }
        else if ((uStack_8c == 0xfffffffd) &&
                ((*(long *)(param_1 + 6) == 0 || (func_0x00010910de34(), (int)piVar12 < 0)))) {
code_r0x00010910dbd0:
          uStack_90 = 0xfffffffe;
          uStack_8c = 0xfffffffd;
code_r0x00010910db0c:
          iVar7 = 1;
          uVar3 = uStack_90;
          goto code_r0x00010910dbc4;
        }
code_r0x00010910dbc0:
        iVar7 = 8;
        uVar3 = uStack_90;
        goto code_r0x00010910dbc4;
      default:
        goto LAB_10910db78;
      case 6:
        goto code_r0x00010910da54;
      case 7:
        if (iVar5 == 2) {
          *puVar9 = 0xc;
          goto code_r0x00010910daf4;
        }
code_r0x00010910d9a0:
        func_0x00010910de74();
        param_1[0xa13] = 1;
        puVar9 = extraout_x8;
        goto code_r0x00010910d970;
      }
      param_1[0xa13] = 0;
      piVar12 = param_1;
      goto code_r0x00010910db6c;
    }
  }
  func_0x00010910de98();
  iVar5 = (int)piVar12;
joined_r0x00010910dcb8:
  if (iVar5 != 0) {
    return;
  }
  goto LAB_10910d838;
code_r0x00010910da54:
  if ((param_1[0xa13] == 0) || (puVar9[10] != 5)) {
    uStack_90 = 0xfffffff2;
    goto code_r0x00010910db0c;
  }
  uStack_70 = *(undefined8 *)(puVar9 + 0x12);
  puVar9[0xd] = 0;
  *(undefined8 *)(puVar9 + 0x12) = 0;
  if (*(long *)(puVar9 + 8) != 0) {
    piVar12 = param_1;
    func_0x00010910cd58(param_1,*(long *)(puVar9 + 8),&uStack_70);
    uStack_8c = (uint)piVar12;
    param_1[2] = param_1[2] + 1;
    if (param_1[0xc] != 0) goto code_r0x00010910dbc0;
    param_1[0xa13] = 0;
    goto LAB_10910db78;
  }
  if (*(code **)(param_1 + 6) == (code *)0x0) {
    uStack_90 = 0xfffffffe;
    goto code_r0x00010910db0c;
  }
  piVar12 = *(int **)(param_1 + 8);
  (**(code **)(param_1 + 6))(piVar12,param_1[2],param_1[3],0xfffffffe);
  bVar4 = ((ulong)piVar12 & 0x80000000) == 0;
  if (bVar4) {
    iVar7 = 8;
  }
  uVar3 = 0xfffffffe;
  if (bVar4) {
    uStack_8c = 0xfffffffe;
    uVar3 = uStack_90;
  }
code_r0x00010910dbc4:
  uStack_90 = uVar3;
  if (iVar7 == 2) goto LAB_10910d868;
  if (iVar7 == 8) goto LAB_10910dd08;
  piVar12 = (int *)(ulong)uStack_90;
  goto code_r0x00010910dd2c;
LAB_10910dd08:
  piVar12 = (int *)(ulong)uStack_8c;
  if (uStack_8c == 0xfffffffd) {
LAB_10910dd14:
    FUN_10910cb30(param_1);
    piVar12 = (int *)0xfffffffd;
  }
LAB_10910dd20:
  uStack_7c = uStack_64;
code_r0x00010910dd2c:
  iVar5 = (int)piVar12;
  goto joined_r0x00010910dcb8;
code_r0x00010910daac:
  if (iVar5 != -1) {
    if (iVar5 != 1) {
      if (*(code **)(param_1 + 6) == (code *)0x0) {
        return;
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      (**(code **)(param_1 + 6))(uVar6,1,1,1);
      iVar5 = (int)uVar6;
code_r0x00010910dd74:
      piVar12 = (int *)0xfffffffe;
      if (iVar5 < 0) {
        return;
      }
      goto LAB_10910dd20;
    }
    param_1[0xa13] = 0;
    func_0x00010910deec();
code_r0x00010910db6c:
    func_0x00010910df0c();
    if ((int)piVar12 == -3) {
      return;
    }
  }
LAB_10910db78:
  param_1[0xa19] = 0;
  goto LAB_10910d868;
}



/* Entry: 10910ddc4; end: 10910df3b;  */

long FUN_10910ddc4(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  
  lVar2 = 0;
  iVar3 = 0;
  pbVar4 = (byte *)*param_1;
  lVar5 = 1;
  while( true ) {
    bVar1 = *pbVar4;
    if (bVar1 == 0) break;
    if (bVar1 - 0x3a < 0xfffffff6) {
      if (((lVar5 != 1) || (iVar3 != 0)) || (bVar1 != 0x2d)) break;
      iVar3 = 0;
      lVar5 = -1;
    }
    else {
      lVar2 = (ulong)bVar1 + lVar2 * 10 + -0x30;
      iVar3 = iVar3 + 1;
    }
    pbVar4 = pbVar4 + 1;
  }
  *param_1 = pbVar4;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  return lVar5 * lVar2;
}



/* Entry: 10910df3c; end: 10910dfdb;  */

char * FUN_10910df3c(char *param_1,ulong param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_4 - 1U < param_2) {
    if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memchr_11034c648)(param_1,(long)*param_3);
      return param_1;
    }
    pcVar2 = param_1 + (param_2 - param_4);
    for (; param_1 <= pcVar2; param_1 = param_1 + 1) {
      if ((*param_1 == *param_3) &&
         (pcVar1 = param_1, _memcmp(param_1,param_3,param_4), (int)pcVar1 == 0)) {
        return param_1;
      }
    }
  }
  return (char *)0x0;
}



/* Entry: 10910dfdc; end: 10910e00b;  */

bool FUN_10910dfdc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0x1132c2228 || lVar1 == 0) {
    return true;
  }
  return *(int *)(lVar1 + 8) == 0;
}



/* Entry: 10910e00c; end: 10910e0e7;  */

undefined8 FUN_10910e00c(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined4 *)(ulong)(param_1 + 0x20);
    FUN_10910ae54();
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0;
      *puVar1 = 1;
      puVar1[1] = param_1;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *(undefined4 **)(puVar1 + 4) = puVar1 + 6;
      *param_2 = puVar1;
    }
    return uVar2;
  }
  return 0xfffffffc;
}



/* Entry: 10910e0e8; end: 10910e1a7;  */

void FUN_10910e0e8(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    lVar4 = *param_1;
    if (lVar4 == 0) {
      lVar4 = 0x1132c2228;
      *param_1 = 0x1132c2228;
      iRam00000001132c2228 = iRam00000001132c2228 + 1;
    }
    if (param_3 < 0) {
      lVar3 = param_2;
      _strlen();
      param_3 = (int)lVar3;
    }
    if ((param_3 != 0) &&
       (plVar2 = param_1, FUN_10910e3f8(param_1,*(int *)(lVar4 + 8) + param_3), (int)plVar2 == 0)) {
      _memcpy(*(long *)(*param_1 + 0x10) + (ulong)*(uint *)(*param_1 + 8),param_2,(long)param_3);
      lVar4 = *param_1;
      uVar1 = *(int *)(lVar4 + 8) + param_3;
      *(uint *)(lVar4 + 8) = uVar1;
      *(undefined1 *)(*(long *)(lVar4 + 0x10) + (ulong)uVar1) = 0;
    }
  }
  return;
}



/* Entry: 10910e1a8; end: 10910e1d3;  */

void FUN_10910e1a8(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    piVar2 = (int *)*param_1;
    *param_1 = 0;
    if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 == 0)) {
      if ((piVar2 != (int *)0x0) && (iRam00000001132c2200 != 0)) {
        (*(code *)PTR_DAT_1132c2210)(uRam00000001132c2218,piVar2);
        iRam00000001132c2200 = iRam00000001132c2200 + -1;
      }
      return;
    }
  }
  return;
}



/* Entry: 10910e1d4; end: 10910e257;  */

undefined8 FUN_10910e1d4(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    piVar3 = (int *)*param_1;
    if (*piVar3 != 1) {
      puVar2 = (undefined4 *)(ulong)(piVar3[1] + 0x20);
      FUN_10910ae54();
      *puVar2 = 1;
      *(undefined4 **)(puVar2 + 4) = puVar2 + 6;
      iVar1 = piVar3[2];
      *(undefined8 *)(puVar2 + 1) = *(undefined8 *)(piVar3 + 1);
      _memcpy(puVar2 + 6,*(undefined8 *)(piVar3 + 4),iVar1);
      *param_1 = puVar2;
      iVar1 = *piVar3;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        func_0x00010910aebc(piVar3);
      }
    }
    return 0;
  }
  return 0xfffffffc;
}



/* Entry: 10910e258; end: 10910e283;  */

void FUN_10910e258(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((param_2 == (undefined8 *)0x0) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) {
      piVar1 = (int *)0x1132c2228;
    }
    *param_1 = piVar1;
    *piVar1 = *piVar1 + 1;
  }
  return;
}



/* Entry: 10910e284; end: 10910e3f7;  */

uint FUN_10910e284(long *param_1,long param_2,uint *param_3,int param_4,int *param_5,int param_6)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == (long *)0x0) {
LAB_10910e3ac:
    uVar5 = 0xffffffff;
  }
  else {
    uVar3 = *param_3;
    lVar6 = *param_1;
    if (lVar6 == 0) {
      iVar7 = 0x100;
      FUN_10910e00c(0x100,param_1);
      if (iVar7 != 0) goto LAB_10910e3ac;
      lVar6 = *param_1;
    }
    if (param_4 < 0) {
      lVar8 = param_2;
      _strlen();
      param_4 = (int)lVar8;
    }
    lVar9 = 0;
    for (lVar8 = 0;
        (pcVar2 = (char *)(param_2 + (ulong)uVar3 + lVar8), pcVar2 < (char *)(param_2 + param_4) &&
        (*pcVar2 != '\n' && *pcVar2 != '\r')); lVar8 = lVar8 + 1) {
      lVar9 = lVar9 + 0x100000000;
    }
    bVar1 = param_6 != 0 || pcVar2 < (char *)(param_2 + param_4);
    uVar5 = (uint)bVar1;
    iVar7 = (int)lVar8;
    *param_3 = *param_3 + iVar7;
    if (*(uint *)(lVar6 + 4) <= *(int *)(lVar6 + 8) + iVar7 + 1U) {
      if ((param_5 == (int *)0x0) || (*(uint *)(lVar6 + 4) < 0x10000)) {
        plVar4 = param_1;
        FUN_10910e3f8(param_1,lVar8 + 1);
        uVar5 = (uint)bVar1;
        if ((int)plVar4 == -3) {
          uVar5 = 0xffffffff;
        }
        lVar6 = *param_1;
      }
      else {
        *param_5 = *param_5 + 1;
      }
    }
    if (((iVar7 != 0) && (-1 < (int)uVar5)) && (*(uint *)(lVar6 + 8) + iVar7 < *(uint *)(lVar6 + 4))
       ) {
      _memcpy(*(long *)(lVar6 + 0x10) + (ulong)*(uint *)(lVar6 + 8),param_2 + (ulong)uVar3,
              lVar9 >> 0x20);
      uVar3 = *(int *)(lVar6 + 8) + iVar7;
      *(uint *)(lVar6 + 8) = uVar3;
      *(undefined1 *)(*(long *)(lVar6 + 0x10) + (ulong)uVar3) = 0;
    }
  }
  return uVar5;
}



/* Entry: 10910e3f8; end: 10910e4d7;  */

undefined8 FUN_10910e3f8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  piVar7 = (int *)*param_1;
  if ((uint)piVar7[1] < (uint)(piVar7[2] + param_2)) {
    uVar1 = piVar7[2] + param_2 + 0x20;
    if (uVar1 < 0x1000) {
      uVar3 = 0x1000;
      do {
        uVar5 = uVar3;
        uVar3 = uVar5 >> 1;
      } while (uVar1 < (uint)uVar3);
      uVar6 = (uint)uVar5;
      uVar1 = 0x40;
      if (0x7f < uVar6) {
        uVar1 = uVar6 & 0x1ffe;
      }
      puVar8 = (undefined4 *)(ulong)uVar1;
    }
    else {
      puVar8 = (undefined4 *)0x1000;
      do {
        uVar6 = (int)puVar8 << 1;
        puVar8 = (undefined4 *)(ulong)uVar6;
      } while (uVar6 < uVar1);
    }
    puVar4 = puVar8;
    FUN_10910ae54();
    if (puVar4 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
    *puVar4 = 1;
    puVar4[1] = (int)puVar8 + -0x20;
    uVar1 = piVar7[2];
    puVar4[2] = uVar1;
    puVar8 = puVar4 + 6;
    *(undefined4 **)(puVar4 + 4) = puVar8;
    _memcpy(puVar8,*(undefined8 *)(piVar7 + 4),(ulong)uVar1);
    *(undefined1 *)((long)puVar8 + (ulong)uVar1) = 0;
    *param_1 = puVar4;
    iVar2 = *piVar7;
    *piVar7 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      func_0x00010910aebc(piVar7);
    }
  }
  return 0;
}



/* Entry: 10910e4d8; end: 10910e59f;  */

long * FUN_10910e4d8(long *param_1,undefined1 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    plVar2 = param_1;
    FUN_10910e1d4();
    if (((int)plVar2 == 0) && (plVar2 = param_1, FUN_10910e3f8(param_1,1), (int)plVar2 == 0)) {
      lVar3 = *param_1;
      uVar1 = *(uint *)(lVar3 + 8);
      *(uint *)(lVar3 + 8) = uVar1 + 1;
      *(undefined1 *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1) = param_2;
      *(undefined1 *)(*(long *)(*param_1 + 0x10) + (ulong)*(uint *)(*param_1 + 8)) = 0;
    }
    return plVar2;
  }
  return (long *)0xfffffffc;
}



/* Entry: 10910e5a0; end: 10910e5bb;  */

long * FUN_10910e5a0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar4 = *(long *)(*param_2 + 0x10);
    iVar5 = *(int *)(*param_2 + 8);
    plVar2 = (long *)0xfffffffc;
    if ((param_1 != (long *)0x0) && (lVar4 != 0)) {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        lVar6 = 0x1132c2228;
        *param_1 = 0x1132c2228;
        iRam00000001132c2228 = iRam00000001132c2228 + 1;
      }
      if (iVar5 < 0) {
        lVar3 = lVar4;
        _strlen();
        iVar5 = (int)lVar3;
      }
      if (iVar5 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_1;
        FUN_10910e3f8(param_1,*(int *)(lVar6 + 8) + iVar5);
        if ((int)plVar2 == 0) {
          _memcpy(*(long *)(*param_1 + 0x10) + (ulong)*(uint *)(*param_1 + 8),lVar4,(long)iVar5);
          plVar2 = (long *)0x0;
          lVar4 = *param_1;
          uVar1 = *(int *)(lVar4 + 8) + iVar5;
          *(uint *)(lVar4 + 8) = uVar1;
          *(undefined1 *)(*(long *)(lVar4 + 0x10) + (ulong)uVar1) = 0;
        }
      }
    }
    return plVar2;
  }
  return (long *)0xfffffffc;
}



/* Entry: 10910e5bc; end: 10910e6d7;  */

void FUN_10910e5bc(long *param_1,long param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (((param_1 != (long *)0x0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_3 < 0) {
      lVar4 = param_2;
      _strlen();
      param_3 = (int)lVar4;
    }
    if ((int)param_5 < 0) {
      param_5 = param_4;
      _strlen();
    }
    lVar7 = *(long *)(*param_1 + 0x10);
    lVar6 = (long)param_3;
    lVar4 = lVar7;
    FUN_10910df3c(lVar7,*(undefined4 *)(*param_1 + 8),param_2,lVar6);
    if ((lVar4 != 0) && (plVar3 = param_1, FUN_10910e3f8(param_1,param_5), (int)plVar3 == 0)) {
      lVar2 = *(long *)(*param_1 + 0x10) + (lVar4 - lVar7);
      iVar5 = (int)param_5;
      lVar8 = lVar6;
      if (param_3 != iVar5) {
        lVar8 = (long)iVar5;
        _memmove(lVar2 + iVar5,lVar2 + lVar6,(ulong)*(uint *)(*param_1 + 8) + ~(lVar4 - lVar7));
      }
      _memcpy(lVar2,param_4,lVar8);
      lVar4 = *param_1;
      uVar1 = (*(int *)(lVar4 + 8) - param_3) + iVar5;
      *(uint *)(lVar4 + 8) = uVar1;
      *(undefined1 *)(*(long *)(lVar4 + 0x10) + (ulong)uVar1) = 0;
    }
  }
  return;
}



/* Entry: 10910e6d8; end: 10910e75b;  */

void FUN_10910e6d8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  lVar1 = 0xfffffffc;
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if ((int)param_3 < 0) {
      lVar1 = param_2;
      _strlen(param_2);
      param_3 = lVar1;
    }
    if ((int)param_5 < 0) {
      func_0x00010910eb88();
      param_5 = lVar1;
    }
    do {
      lVar1 = param_1;
      FUN_10910e5bc(param_1,param_2,param_3,param_4,param_5);
    } while ((int)lVar1 == 1);
  }
  return;
}



/* Entry: 10910e75c; end: 10910e7ab;  */

undefined8 FUN_10910e75c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    piVar1 = (int *)0x18;
    FUN_10910ae78();
    if (piVar1 == (int *)0x0) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      *piVar1 = *piVar1 + 1;
      *param_1 = piVar1;
    }
    return uVar2;
  }
  return 0xfffffffc;
}



/* Entry: 10910e7ac; end: 10910e8e3;  */

void FUN_10910e7ac(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (piVar3 = (int *)*param_1, piVar3 != (int *)0x0)) {
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      lVar2 = *(long *)(piVar3 + 4);
      if (lVar2 != 0) {
        lVar4 = 0;
        for (uVar5 = 0; uVar5 < (uint)piVar3[2]; uVar5 = uVar5 + 1) {
          FUN_10910e1a8(lVar2 + lVar4);
          lVar2 = *(long *)(piVar3 + 4);
          lVar4 = lVar4 + 8;
        }
        func_0x00010910aebc();
      }
      func_0x00010910aebc(piVar3);
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10910e8e4; end: 10910e947;  */

undefined8 FUN_10910e8e4(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 8) - 1;
      *(uint *)(param_1 + 8) = uVar1;
      FUN_10910e258(param_2,*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8);
      FUN_10910e1a8(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 8);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 10910e948; end: 10910e9fb;  */

void FUN_10910e948(long *param_1,undefined8 *param_2,int *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if (((param_1 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (int *)0x0)) {
    *param_2 = 0x1132c2228;
    func_0x00010910eb6c(0xfffffffc);
    iVar3 = *param_3;
    while( true ) {
      lVar4 = *param_1;
      if (lVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(lVar4 + 8);
      }
      if (((iVar5 <= iVar3) ||
          (bVar1 = *(byte *)(*(long *)(lVar4 + 0x10) + (long)iVar3),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100003600U) != 0)) ||
         (puVar2 = param_2, FUN_10910e4d8(param_2,(int)(char)bVar1), (int)puVar2 != 0)) break;
      iVar3 = *param_3 + 1;
      *param_3 = iVar3;
    }
  }
  return;
}



/* Entry: 10910e9fc; end: 10910ead3;  */

int FUN_10910e9fc(long *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_2 != (uint *)0x0)) {
    uVar4 = (ulong)*param_2;
    if (((int)*param_2 < 0) || (lVar3 = *param_1, lVar3 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      while (((uint)uVar4 < *(uint *)(lVar3 + 8) &&
             (bVar1 = *(byte *)(*(long *)(lVar3 + 0x10) + uVar4),
             bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100003600U) != 0))) {
        uVar4 = uVar4 + 1;
        *param_2 = (uint)uVar4;
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}



/* Entry: 10910ead4; end: 10910eb47;  */

int FUN_10910ead4(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     ((param_2 != (char *)0x0 && (param_2 < param_1)))) {
    iVar2 = 0;
  }
  else {
    if (param_2 == (char *)0x0) {
      param_2 = param_1;
      func_0x00010910eb88();
      param_2 = param_1 + (long)param_2;
    }
    iVar2 = 0;
    while ((param_1 < param_2 && (pcVar1 = param_1, func_0x00010910ea6c(), 0 < (int)pcVar1))) {
      param_1 = param_1 + ((ulong)pcVar1 & 0xffffffff);
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



/* Entry: 10910eb48; end: 10910eb8f;  */

void FUN_10910eb48(void)

{
  return;
}



/* Entry: 10910eb90; end: 10910ebef;  */

void FUN_10910eb90(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (1 < param_3 - 1U) {
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10910ebf0; end: 10910ec6b; -[SCAsset initWithAVAsset:] */

undefined1 * FUN_10910ebf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127006c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    _objc_release(uVar2);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10910ec6c; end: 10910eceb; -[SCAsset initWithLanguageToSubtitleAsset:] */

undefined1 * FUN_10910ec6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127006c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10910ecec; end: 10910ed97; -[SCAsset initWithAVAsset:mediaDataProvider:] */

undefined1 *
FUN_10910ecec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127006c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10910ed98; end: 10910ee17; -[SCAsset _setup] */

void FUN_10910ed98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x10) = 5;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  return;
}



/* Entry: 10910ee18; end: 10910ee3f; -[SCAsset nativeAsset] */

void FUN_10910ee18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10910ee40; end: 10910ee67; -[SCAsset languageToSubtitleAsset] */

void FUN_10910ee40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10910ee68; end: 10910ee6f; -[SCAsset mediaContextType] */

undefined8 FUN_10910ee68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10910ee70; end: 10910ee97; -[SCAsset lazyDataProvider] */

void FUN_10910ee70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10910ee98; end: 10910ef6b; -[SCAsset setViewLocation:] */

void FUN_10910ee98(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 != 0) {
    func_0x00010c13b360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar5 = uVar4;
    func_0x000107c318f8(uVar4,PTR_DAT_1126a5bd0);
    uVar3 = uVar4;
    if ((int)uVar5 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010c222620(uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


