/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108dacd1c; end: 108daddfb;  */

undefined4 FUN_108dacd1c(long param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  bool bVar17;
  byte *pbVar18;
  byte *pbVar19;
  int *piVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  uint uVar27;
  long *plVar28;
  int *piVar29;
  ulong uVar30;
  undefined8 *puVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  code *pcVar35;
  byte bVar36;
  int iVar37;
  int iVar38;
  uint *puVar39;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  byte *pbStack_78;
  long lStack_70;
  undefined8 **ppuStack_68;
  
  uVar24 = *(uint *)(param_2 + 4);
  if ((uVar24 >> 2 & 1) != 0) {
    return 1;
  }
  puVar26 = *(undefined8 **)(param_1 + 0x28);
  plVar28 = (long *)*puVar26;
  *(uint *)(param_2 + 4) = uVar24 | 4;
  bVar36 = *param_2;
  if (bVar36 < 0x77) {
    if (bVar36 != 0x14) {
      if (bVar36 == 0x1b) {
        uVar15 = *(undefined8 *)(param_2 + 8);
        lVar13 = 0;
        ppuStack_68 = (undefined8 **)0x0;
        goto LAB_108daced8;
      }
      if (bVar36 != 0x4b) goto LAB_108dace84;
    }
LAB_108dacdb4:
    if ((uVar24 >> 0xb & 1) != 0) {
      iVar37 = *(int *)(puVar26 + 5);
      uVar6 = *(ushort *)(puVar26 + 6);
      if ((uVar6 >> 2 & 1) != 0) {
        func_0x000108d6a85c(plVar28,&UNK_10f519530);
        uVar6 = *(ushort *)(puVar26 + 6);
      }
      if ((uVar6 >> 4 & 1) != 0) {
        func_0x000108d6a85c(plVar28,&UNK_10f519503);
      }
      func_0x000108daa3c0(param_1,*(undefined8 *)(param_2 + 0x20));
      if (iVar37 != *(int *)(puVar26 + 5)) {
        *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x20;
      }
    }
LAB_108dace84:
    uVar9 = 2;
    if ((*(int *)((long)plVar28 + 0x4c) == 0) && (uVar9 = 0, *(char *)(*plVar28 + 0x51) != '\0')) {
      uVar9 = 2;
    }
    return uVar9;
  }
  if (0x86 < bVar36) {
    if (bVar36 != 0x87) {
      if (bVar36 != 0x99) goto LAB_108dace84;
      piVar29 = *(int **)(param_2 + 0x20);
      if (piVar29 == (int *)0x0) {
        iVar37 = 0;
      }
      else {
        iVar37 = *piVar29;
      }
      uVar3 = *(undefined1 *)(*plVar28 + 0x4e);
      if ((*(ushort *)(puVar26 + 6) >> 4 & 1) != 0) {
        func_0x000108d6a85c(plVar28,&UNK_10f519503);
      }
      lVar13 = *(long *)(param_2 + 8);
      if (lVar13 == 0) {
        uVar24 = 0;
      }
      else {
        lVar33 = lVar13;
        _strlen();
        uVar24 = (uint)lVar33 & 0x3fffffff;
      }
      lVar33 = *plVar28;
      FUN_108d6e688(lVar33,lVar13,uVar24,iVar37,uVar3,0);
      if (lVar33 == 0) {
        lVar33 = *plVar28;
        FUN_108d6e688(lVar33,lVar13,uVar24,0xfffffffe,uVar3,0);
        if (lVar33 == 0) {
          if (*(char *)(*plVar28 + 0xa1) != '\0') goto LAB_108dad0b8;
          puVar14 = &UNK_10f51941a;
        }
        else {
          puVar14 = &UNK_10f519431;
        }
      }
      else {
        lVar13 = *(long *)(lVar33 + 0x18);
        if ((*(ushort *)(lVar33 + 2) >> 10 & 1) != 0) {
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x41000;
          if (iVar37 == 2) {
            iVar37 = (int)*(undefined8 *)(*(long *)(piVar29 + 2) + 0x20);
            FUN_108daddfc();
            *(int *)(param_2 + 0x2c) = iVar37;
            if (iVar37 < 0) {
              func_0x000108d6a85c(plVar28,&UNK_10f51938c);
              *(int *)((long)puVar26 + 0x2c) = *(int *)((long)puVar26 + 0x2c) + 1;
            }
          }
          else {
            uVar9 = 0x800000;
            if (**(char **)(lVar33 + 0x30) != 'u') {
              uVar9 = 0x7800000;
            }
            *(undefined4 *)(param_2 + 0x2c) = uVar9;
          }
        }
        plVar10 = plVar28;
        FUN_108dabcbc(plVar28,0x1f,0,*(undefined8 *)(lVar33 + 0x30),0);
        if ((int)plVar10 != 0) {
          if ((int)plVar10 == 1) {
            func_0x000108d6a85c(plVar28,&UNK_10f5193d3);
            *(int *)((long)puVar26 + 0x2c) = *(int *)((long)puVar26 + 0x2c) + 1;
          }
          *param_2 = 0x65;
          return 1;
        }
        if ((*(ushort *)(lVar33 + 2) >> 0xb & 1) != 0) {
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x80000;
        }
        if (lVar13 != 0) goto LAB_108dad0b8;
        if ((*(ushort *)(puVar26 + 6) & 1) != 0) {
          *(ushort *)(puVar26 + 6) = *(ushort *)(puVar26 + 6) & 0xfffe;
          func_0x000108daa51c(param_1,piVar29);
          *param_2 = 0x9b;
          param_2[0x36] = 0;
          puVar31 = puVar26;
          while( true ) {
            puStack_a0 = (undefined8 *)puVar31[1];
            lStack_70 = 0;
            pbStack_78 = (byte *)0x0;
            lStack_80 = 0;
            uStack_88 = 0;
            uStack_98 = (int *)0x0;
            pcStack_90 = FUN_108dae2b0;
            ppuStack_68 = &puStack_a0;
            func_0x000108daa51c(&pcStack_90,*(undefined8 *)(param_2 + 0x20));
            if ((0 < (int)uStack_98) || (uStack_98._4_4_ == 0)) break;
            param_2[0x36] = param_2[0x36] + 1;
            puVar31 = (undefined8 *)puVar31[4];
            if (puVar31 == (undefined8 *)0x0) {
LAB_108dad194:
              *(ushort *)(puVar26 + 6) = *(ushort *)(puVar26 + 6) | 1;
              return 1;
            }
          }
          *(ushort *)(puVar31 + 6) = *(ushort *)(puVar31 + 6) | *(ushort *)(lVar33 + 2) & 0x1000 | 2
          ;
          goto LAB_108dad194;
        }
        puVar14 = &UNK_10f5193f6;
      }
      func_0x000108d6a85c(plVar28,puVar14);
      *(int *)((long)puVar26 + 0x2c) = *(int *)((long)puVar26 + 0x2c) + 1;
LAB_108dad0b8:
      func_0x000108daa51c(param_1,piVar29);
      return 1;
    }
    uVar6 = *(ushort *)(puVar26 + 6);
    if ((uVar6 >> 2 & 1) != 0) {
      func_0x000108d6a85c(plVar28,&UNK_10f519530);
      uVar6 = *(ushort *)(puVar26 + 6);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      func_0x000108d6a85c(plVar28,&UNK_10f519503);
    }
    goto LAB_108dace84;
  }
  if (bVar36 == 0x77) goto LAB_108dacdb4;
  if (bVar36 != 0x7a) goto LAB_108dace84;
  pbVar18 = *(byte **)(param_2 + 0x18);
  if (*pbVar18 == 0x1b) {
    lVar13 = 0;
    pbVar19 = pbVar18;
    pbVar18 = param_2;
  }
  else {
    lVar13 = *(long *)(*(long *)(param_2 + 0x10) + 8);
    pbVar19 = *(byte **)(pbVar18 + 0x18);
  }
  uVar15 = *(undefined8 *)(pbVar19 + 8);
  ppuStack_68 = *(undefined8 ***)(*(long *)(pbVar18 + 0x10) + 8);
LAB_108daced8:
  lVar33 = *plVar28;
  param_2[0x2c] = 0xff;
  param_2[0x2d] = 0xff;
  param_2[0x2e] = 0xff;
  param_2[0x2f] = 0xff;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  if (lVar13 == 0) {
LAB_108dad5d0:
    lStack_80 = 0;
LAB_108dad5d4:
    if (puVar26 != (undefined8 *)0x0) goto LAB_108dad5e0;
    piVar29 = (int *)0x0;
    bVar36 = 0x9a;
    if (ppuStack_68 != (undefined8 **)0x0) {
      bVar8 = false;
      puVar31 = (undefined8 *)0x0;
      goto joined_r0x000108dadb24;
    }
LAB_108dadbc0:
    if ((param_2[4] >> 6 & 1) != 0) {
      *param_2 = 0x61;
      param_2[0x40] = 0;
      param_2[0x41] = 0;
      param_2[0x42] = 0;
      param_2[0x43] = 0;
      param_2[0x44] = 0;
      param_2[0x45] = 0;
      param_2[0x46] = 0;
      param_2[0x47] = 0;
      return 1;
    }
    puVar31 = (undefined8 *)0x0;
    if (lVar13 == 0) {
LAB_108dadbf8:
      puVar14 = &UNK_10f3b24d8;
    }
    else {
LAB_108dadbd8:
      puVar14 = &UNK_10f5194b1;
    }
  }
  else {
    if ((*(ushort *)(puVar26 + 6) & 0x14) == 0) {
      uVar30 = (ulong)*(uint *)(lVar33 + 0x28);
      if (0 < (int)*(uint *)(lVar33 + 0x28)) {
        puVar31 = *(undefined8 **)(lVar33 + 0x20);
        do {
          uVar11 = *puVar31;
          FUN_108d5e044(uVar11,lVar13);
          if ((int)uVar11 == 0) {
            lStack_80 = puVar31[3];
            goto LAB_108dad5d4;
          }
          puVar31 = puVar31 + 4;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
        goto LAB_108dad5d0;
      }
    }
    else {
      lVar13 = 0;
    }
    lStack_80 = 0;
LAB_108dad5e0:
    iVar23 = 0;
    bVar7 = false;
    piVar29 = (int *)0x0;
    iVar37 = 0;
    bVar8 = ppuStack_68 == (undefined8 **)0x0;
    puVar31 = puVar26;
    pbStack_78 = param_2;
    lStack_70 = lVar13;
    do {
      piVar20 = (int *)puVar31[1];
      if (piVar20 == (int *)0x0) {
        iVar32 = 0;
      }
      else {
        iVar34 = *piVar20;
        if (iVar34 < 1) {
          iVar32 = 0;
          param_2 = pbStack_78;
        }
        else {
          iVar38 = 0;
          iVar32 = 0;
          piVar20 = piVar20 + 2;
          uStack_88 = CONCAT44(iVar34,(undefined4)uStack_88);
          lVar21 = lStack_70;
          puStack_a0 = puVar31;
          do {
            pcVar35 = *(code **)(piVar20 + 8);
            puVar31 = *(undefined8 **)(piVar20 + 10);
            if ((puVar31 == (undefined8 *)0x0) || ((*(ushort *)((long)puVar31 + 10) >> 9 & 1) == 0))
            {
LAB_108dad6f0:
              if ((lVar21 == 0) || (*(long *)(pcVar35 + 0x68) == lStack_80)) {
                if (ppuStack_68 != (undefined8 **)0x0) {
                  lVar12 = *(long *)(piVar20 + 6);
                  if (lVar12 == 0) {
                    lVar12 = *(long *)pcVar35;
                  }
                  FUN_108d5e044(lVar12,ppuStack_68);
                  if ((int)lVar12 != 0) goto LAB_108dad7ec;
                }
                iVar1 = iVar23 + 1;
                piVar2 = piVar20;
                if (iVar23 != 0) {
                  piVar2 = piVar29;
                }
                sVar5 = *(short *)(pcVar35 + 0x3e);
                piVar29 = piVar2;
                iVar23 = iVar1;
                if (0 < sVar5) {
                  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,iVar1);
                  iVar23 = 0;
                  puVar31 = *(undefined8 **)(pcVar35 + 8);
                  uStack_98 = piVar2;
                  do {
                    uVar11 = *puVar31;
                    FUN_108d5e044(uVar11,uVar15);
                    if ((int)uVar11 == 0) {
                      if (iVar32 != 1) {
LAB_108dad7c4:
                        iVar32 = iVar32 + 1;
                        if (iVar23 == *(short *)(pcVar35 + 0x3c)) {
                          iVar23 = -1;
                        }
                        *(short *)(pbStack_78 + 0x30) = (short)iVar23;
                        piVar29 = piVar20;
                        break;
                      }
                      if ((*(byte *)(piVar20 + 0xf) >> 2 & 1) == 0) {
                        puVar22 = *(undefined8 **)(piVar20 + 0x14);
                        if ((puVar22 == (undefined8 *)0x0) ||
                           (uVar30 = (ulong)*(uint *)(puVar22 + 1), (int)*(uint *)(puVar22 + 1) < 1)
                           ) goto LAB_108dad7c4;
                        puVar22 = (undefined8 *)*puVar22;
                        while( true ) {
                          uVar11 = *puVar22;
                          FUN_108d5e044(uVar11,uVar15);
                          if ((int)uVar11 == 0) break;
                          uVar30 = uVar30 - 1;
                          puVar22 = puVar22 + 2;
                          if (uVar30 == 0) goto LAB_108dad7c4;
                        }
                      }
                    }
                    iVar23 = iVar23 + 1;
                    puVar31 = puVar31 + 6;
                    piVar29 = uStack_98;
                  } while (iVar23 != sVar5);
                  lVar21 = lStack_70;
                  iVar34 = uStack_88._4_4_;
                  iVar23 = (int)pcStack_90;
                }
              }
            }
            else {
              uVar24 = *(uint *)*puVar31;
              if ((int)uVar24 < 1) {
                bVar17 = false;
              }
              else {
                uVar30 = 0;
                bVar17 = false;
                puVar31 = (undefined8 *)(*(long *)((uint *)*puVar31 + 2) + 0x10);
                pcStack_90 = pcVar35;
                do {
                  uVar11 = *puVar31;
                  FUN_108dade70(uVar11,uVar15,ppuStack_68,lStack_70);
                  if ((int)uVar11 != 0) {
                    iVar32 = iVar32 + 1;
                    *(short *)(pbStack_78 + 0x30) = (short)uVar30;
                    bVar17 = true;
                    iVar23 = 2;
                    piVar29 = piVar20;
                  }
                  uVar30 = uVar30 + 1;
                  puVar31 = puVar31 + 4;
                } while (uVar24 != uVar30);
                lVar21 = lStack_70;
                pcVar35 = pcStack_90;
                iVar34 = uStack_88._4_4_;
              }
              if ((ppuStack_68 != (undefined8 **)0x0) && (!bVar17)) goto LAB_108dad6f0;
            }
LAB_108dad7ec:
            iVar38 = iVar38 + 1;
            piVar20 = piVar20 + 0x1c;
            puVar31 = puStack_a0;
            param_2 = pbStack_78;
          } while (iVar38 != iVar34);
        }
        puStack_a0 = puVar31;
        pbStack_78 = param_2;
        if (piVar29 != (int *)0x0) {
          *(int *)(param_2 + 0x2c) = piVar29[0x10];
          lVar21 = *(long *)(piVar29 + 8);
          *(long *)(param_2 + 0x40) = lVar21;
          if ((*(byte *)(piVar29 + 0xf) >> 3 & 1) != 0) {
            *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x100000;
          }
          lStack_80 = *(long *)(lVar21 + 0x68);
        }
      }
      if (iVar23 != 0 || (lVar13 != 0 || bVar8)) {
LAB_108dad9d4:
        if (((iVar32 == 0) && (iVar23 == 1)) && (piVar29 != (int *)0x0)) {
          uVar11 = uVar15;
          FUN_108d70180();
          if (((int)uVar11 == 0) || ((*(byte *)(*(long *)(piVar29 + 8) + 0x46) >> 5 & 1) != 0)) {
            iVar23 = 1;
            goto LAB_108dada00;
          }
          param_2[0x30] = 0xff;
          param_2[0x31] = 0xff;
          param_2[1] = 0x44;
          bVar36 = 0x9a;
          if (bVar7) {
            bVar36 = 0x3e;
          }
          goto LAB_108dadc6c;
        }
LAB_108dada00:
        if (((iVar32 != 0) || (ppuStack_68 != (undefined8 **)0x0)) ||
           (puVar39 = (uint *)puVar31[2], puVar39 == (uint *)0x0)) goto LAB_108dada74;
        uVar24 = *puVar39;
        if (0 < (int)uVar24) {
          uVar30 = 0;
          plVar10 = (long *)(*(long *)(puVar39 + 2) + 8);
          do {
            lVar21 = *plVar10;
            if ((lVar21 != 0) &&
               (FUN_108d5e044(lVar21,uVar15), param_2 = pbStack_78, (int)lVar21 == 0)) {
              if (((*(ushort *)(puVar31 + 6) & 1) == 0) &&
                 ((*(byte *)(plVar10[-1] + 4) >> 1 & 1) != 0)) {
                func_0x000108d6a85c(plVar28,&UNK_10f51946d);
                return 2;
              }
              FUN_108dadf90(plVar28,puVar39,uVar30,pbStack_78,"",iVar37);
              bVar36 = *param_2;
              if (bVar36 != 0x18) goto LAB_108dadccc;
              goto LAB_108daddb8;
            }
            uVar30 = uVar30 + 1;
            plVar10 = plVar10 + 4;
            param_2 = pbStack_78;
          } while (uVar24 != uVar30);
        }
      }
      else {
        lVar21 = plVar28[0x39];
        if (lVar21 != 0) {
          cVar4 = *(char *)((long)plVar28 + 0x1e4);
          if (cVar4 == 'm') {
LAB_108dad8b0:
            iVar34 = 0xf519469;
            FUN_108d5e044(&DAT_10f519469,ppuStack_68);
            iVar23 = 0;
            if (iVar34 != 0) goto LAB_108dada74;
            bVar17 = true;
            uVar9 = 0;
          }
          else {
            iVar23 = 0xf300e1f;
            FUN_108d5e044(&DAT_10f300e1f,ppuStack_68);
            if (iVar23 != 0) {
              if (cVar4 == 'l') goto LAB_108dad8a8;
              goto LAB_108dad8b0;
            }
            bVar17 = false;
            uVar9 = 1;
          }
          *(undefined4 *)(param_2 + 0x2c) = uVar9;
          lStack_80 = *(long *)(lVar21 + 0x68);
          sVar5 = *(short *)(lVar21 + 0x3e);
          uVar24 = (uint)sVar5;
          uVar25 = (uint)sVar5;
          puStack_a0 = puVar31;
          if (sVar5 < 1) {
            uVar27 = 0;
LAB_108dad948:
            uVar24 = uVar27;
            if ((int)uVar25 <= (int)uVar27) goto LAB_108dad950;
          }
          else {
            uVar27 = 0;
            puVar31 = *(undefined8 **)(lVar21 + 8);
            do {
              uVar11 = *puVar31;
              FUN_108d5e044(uVar11,uVar15);
              if ((int)uVar11 == 0) {
                if ((int)*(short *)(lVar21 + 0x3c) == uVar27) {
                  uVar27 = 0xffffffff;
                }
                goto LAB_108dad948;
              }
              uVar27 = uVar27 + 1;
              puVar31 = puVar31 + 6;
            } while (uVar25 != uVar27);
LAB_108dad950:
            uVar11 = uVar15;
            FUN_108d70180();
            if (((int)uVar11 != 0) && ((*(byte *)(lVar21 + 0x46) & 0x20) == 0)) {
              uVar24 = 0xffffffff;
            }
          }
          if ((int)uVar24 < (int)uVar25) {
            if ((int)uVar24 < 0) {
              param_2[1] = 0x44;
            }
            else {
              uVar25 = 1 << (ulong)(uVar24 & 0x1f);
              if (0x1f < uVar24) {
                uVar25 = 0xffffffff;
              }
              if (bVar17) {
                *(uint *)((long)plVar28 + 0x1dc) = *(uint *)((long)plVar28 + 0x1dc) | uVar25;
              }
              else {
                *(uint *)(plVar28 + 0x3c) = *(uint *)(plVar28 + 0x3c) | uVar25;
              }
            }
            iVar32 = iVar32 + 1;
            *(short *)(param_2 + 0x30) = (short)uVar24;
            *(long *)(param_2 + 0x40) = lVar21;
            bVar7 = true;
          }
          iVar23 = 1;
          puVar31 = puStack_a0;
          goto LAB_108dad9d4;
        }
LAB_108dad8a8:
        iVar23 = 0;
LAB_108dada74:
        if (iVar32 != 0) {
          bVar36 = 0x9a;
          if (bVar7) {
            bVar36 = 0x3e;
          }
          lVar13 = lStack_70;
          if (iVar32 != 1) goto joined_r0x000108dadb24;
LAB_108dadc6c:
          bVar8 = true;
          goto LAB_108dadc78;
        }
      }
      puVar22 = puVar31 + 4;
      iVar37 = iVar37 + 1;
      puVar31 = (undefined8 *)*puVar22;
    } while ((undefined8 *)*puVar22 != (undefined8 *)0x0);
    bVar36 = 0x9a;
    if (bVar7) {
      bVar36 = 0x3e;
    }
    lVar13 = lStack_70;
    if (ppuStack_68 == (undefined8 **)0x0) goto LAB_108dadbc0;
    puVar31 = (undefined8 *)0x0;
    bVar8 = false;
joined_r0x000108dadb24:
    if (lVar13 != 0) goto LAB_108dadbd8;
    if (bVar8) goto LAB_108dadbf8;
    puVar14 = &UNK_10f518d67;
  }
  func_0x000108d6a85c(plVar28,puVar14);
  bVar8 = false;
  *(undefined1 *)((long)plVar28 + 0x1d) = 1;
  *(int *)((long)puVar26 + 0x2c) = *(int *)((long)puVar26 + 0x2c) + 1;
LAB_108dadc78:
  uVar6 = *(ushort *)(param_2 + 0x30);
  if ((-1 < (short)uVar6) && (piVar29 != (int *)0x0)) {
    uVar24 = (uint)(short)uVar6;
    if (0x3e < uVar6) {
      uVar24 = 0x3f;
    }
    *(ulong *)(piVar29 + 0x16) = *(ulong *)(piVar29 + 0x16) | 1L << ((ulong)uVar24 & 0x3f);
  }
  func_0x000108d93df0(lVar33,*(undefined8 *)(param_2 + 0x10));
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  func_0x000108d93df0(lVar33,*(undefined8 *)(param_2 + 0x18));
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *param_2 = bVar36;
  if (!bVar8) {
    return 2;
  }
LAB_108dadccc:
  if ((lStack_80 != 0) && (lVar13 = *plVar28, *(long *)(lVar13 + 0x180) != 0)) {
    uVar24 = *(uint *)(lVar13 + 0x28);
    if ((int)uVar24 < 1) {
      uVar30 = 0;
    }
    else {
      uVar16 = 0;
      plVar10 = (long *)(*(long *)(lVar13 + 0x20) + 0x18);
      do {
        uVar30 = uVar16;
        if (*plVar10 == lStack_80) break;
        uVar16 = uVar16 + 1;
        uVar30 = (ulong)uVar24;
        plVar10 = plVar10 + 4;
      } while (uVar24 != uVar16);
      if ((int)uVar30 < 0) goto LAB_108daddb8;
    }
    if (bVar36 == 0x3e) {
      puVar39 = (uint *)(plVar28 + 0x39);
LAB_108dadd44:
      puVar22 = *(undefined8 **)puVar39;
      if (puVar22 != (undefined8 *)0x0) {
        lVar13 = (long)*(short *)(param_2 + 0x30);
        if ((*(short *)(param_2 + 0x30) < 0) &&
           (lVar13 = (long)*(short *)((long)puVar22 + 0x3c), lVar13 < 0)) {
          puVar14 = &UNK_10f5194be;
        }
        else {
          puVar14 = *(undefined **)(puVar22[1] + (long)(int)lVar13 * 0x30);
        }
        FUN_108dae1cc(plVar28,*puVar22,puVar14,uVar30);
        if ((int)plVar28 == 2) {
          *param_2 = 0x65;
        }
      }
    }
    else {
      puVar39 = (uint *)puVar31[1] + 10;
      uVar24 = *(uint *)puVar31[1];
      uVar16 = (ulong)uVar24;
      if (0 < (int)uVar24) {
        do {
          if (*(uint *)(param_2 + 0x2c) == puVar39[8]) goto LAB_108dadd44;
          puVar39 = puVar39 + 0x1c;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
  }
LAB_108daddb8:
  for (; *(int *)(puVar26 + 5) = *(int *)(puVar26 + 5) + 1, puVar26 != puVar31;
      puVar26 = (undefined8 *)puVar26[4]) {
  }
  return 1;
}



/* Entry: 108daddfc; end: 108dade6f;  */

int FUN_108daddfc(char *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  double dStack_28;
  
  if (*param_1 == -0x7b) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      lVar1 = lVar3;
      _strlen(lVar3);
      uVar2 = (uint)lVar1 & 0x3fffffff;
    }
    FUN_108d82a1c(lVar3,&dStack_28,uVar2,1);
    if (dStack_28 <= 1.0) {
      return (int)(dStack_28 * 134217728.0);
    }
  }
  return -1;
}



/* Entry: 108dade70; end: 108dadf8f;  */

undefined8 FUN_108dade70(long param_1,long param_2,byte *param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  char cVar9;
  long lVar10;
  
  for (lVar10 = 0; (*(char *)(param_1 + lVar10) != '\0' && (*(char *)(param_1 + lVar10) != '.'));
      lVar10 = lVar10 + 1) {
  }
  if ((param_4 == 0) ||
     ((lVar3 = param_1, func_0x000108d5ea34(param_1,param_4,lVar10), (int)lVar3 == 0 &&
      (*(char *)(param_4 + lVar10) == '\0')))) {
    pbVar6 = (byte *)(param_1 + lVar10);
    uVar5 = 1;
    for (pbVar4 = pbVar6 + 2; (pbVar4[-1] != 0 && (pbVar4[-1] != 0x2e)); pbVar4 = pbVar4 + 1) {
      uVar5 = uVar5 + 1;
    }
    if (param_3 != (byte *)0x0) {
      pbVar7 = param_3;
      uVar8 = uVar5;
      if (uVar5 != 1) {
        do {
          pbVar6 = pbVar6 + 1;
          if ((ulong)*pbVar6 == 0) {
            cVar1 = (&UNK_10dfa05fd)[*pbVar7];
            cVar9 = '\0';
LAB_108dadf4c:
            if (cVar9 != cVar1) {
              return 0;
            }
            break;
          }
          cVar9 = (&UNK_10dfa05fd)[*pbVar6];
          cVar1 = (&UNK_10dfa05fd)[*pbVar7];
          if (cVar9 != cVar1) goto LAB_108dadf4c;
          uVar2 = (int)uVar8 - 1;
          pbVar7 = pbVar7 + 1;
          uVar8 = (ulong)uVar2;
        } while (1 < uVar2);
      }
      if (param_3[uVar5 - 1] != 0) {
        return 0;
      }
    }
    if ((param_2 == 0) || (FUN_108d5e044(pbVar4,param_2), (int)pbVar4 == 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 108dadf90; end: 108dae14b;  */

void FUN_108dadf90(long *param_1,long param_2,ulong param_3,long *param_4,char *param_5,uint param_6
                  )

{
  int iVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  pcVar6 = *(char **)(*(long *)(param_2 + 8) +
                     (-(param_3 >> 0x1f & 1) & 0xffffffe000000000 | (param_3 & 0xffffffff) << 5));
  lVar5 = *param_1;
  plVar3 = (long *)lVar5;
  FUN_108daa624(lVar5,pcVar6,0,0);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3;
    if ((*pcVar6 != -0x66) && (*param_5 != 'G')) {
      if (0 < (int)param_6) {
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        pcStack_90 = FUN_108dae1a8;
        uStack_68 = (ulong)param_6;
        FUN_108daa320(&pcStack_90,plVar3);
      }
      plVar4 = param_1;
      func_0x000108d99b04(param_1,0x18,plVar3,0,0);
      if (plVar4 == (long *)0x0) {
        return;
      }
      *(uint *)((long)plVar4 + 4) = *(uint *)((long)plVar4 + 4) | 0x1000;
      lVar7 = *(long *)(param_2 + 8) + (long)(int)param_3 * 0x20;
      uVar2 = *(ushort *)(lVar7 + 0x1e);
      if (uVar2 == 0) {
        iVar1 = (int)param_1[0x3f] + 1;
        *(int *)(param_1 + 0x3f) = iVar1;
        *(short *)(lVar7 + 0x1e) = (short)iVar1;
        uVar2 = *(ushort *)(*(long *)(param_2 + 8) + (long)(int)param_3 * 0x20 + 0x1e);
      }
      *(uint *)((long)plVar4 + 0x2c) = (uint)uVar2;
    }
    if ((char)*param_4 == '_') {
      FUN_108dae14c(param_1,plVar4,param_4[1]);
      plVar4 = param_1;
    }
    *(uint *)((long)param_4 + 4) = *(uint *)((long)param_4 + 4) | 0x8000;
    func_0x000108d93df0(lVar5,param_4);
    lVar7 = *plVar4;
    param_4[1] = plVar4[1];
    *param_4 = lVar7;
    lVar8 = plVar4[3];
    lVar7 = plVar4[2];
    lVar10 = plVar4[5];
    lVar9 = plVar4[4];
    lVar12 = plVar4[7];
    lVar11 = plVar4[6];
    param_4[8] = plVar4[8];
    param_4[5] = lVar10;
    param_4[4] = lVar9;
    param_4[7] = lVar12;
    param_4[6] = lVar11;
    param_4[3] = lVar8;
    param_4[2] = lVar7;
    if (((*(byte *)((long)param_4 + 5) >> 2 & 1) == 0) && (param_4[1] != 0)) {
      lVar7 = lVar5;
      FUN_108d68d58();
      param_4[1] = lVar7;
      *(uint *)((long)param_4 + 4) = *(uint *)((long)param_4 + 4) | 0x10000;
    }
    func_0x000108d60660(lVar5,plVar4);
  }
  return;
}



/* Entry: 108dae14c; end: 108dae1a7;  */

void FUN_108dae14c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_30;
  uint uStack_28;
  
  lStack_30 = param_3;
  if (param_3 == 0) {
    uStack_28 = 0;
  }
  else {
    _strlen();
    uStack_28 = (uint)param_3 & 0x3fffffff;
  }
  FUN_108da0288(param_1,param_2,&lStack_30,0);
  return;
}



/* Entry: 108dae1a8; end: 108dae1cb;  */

undefined8 FUN_108dae1a8(long param_1,char *param_2)

{
  if (*param_2 == -0x65) {
    param_2[0x36] = param_2[0x36] + *(char *)(param_1 + 0x28);
  }
  return 0;
}



/* Entry: 108dae1cc; end: 108dae2af;  */

ulong FUN_108dae1cc(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = *(ulong *)(lVar4 + 0x188);
  (**(code **)(lVar4 + 0x180))
            (uVar1,0x14,param_2,param_3,
             *(undefined8 *)
              (*(long *)(lVar4 + 0x20) +
              (-(param_4 >> 0x1f & 1) & 0xffffffe000000000 | (param_4 & 0xffffffff) << 5)),
             param_1[0x46]);
  if ((int)uVar1 == 1) {
    if (((int)param_4 == 0) && (*(int *)(lVar4 + 0x28) < 3)) {
      puVar2 = &UNK_10f5194e5;
    }
    else {
      puVar2 = &UNK_10f5194c4;
    }
    func_0x000108d6a85c(param_1,puVar2);
    uVar3 = 0x17;
  }
  else {
    if ((uVar1 & 0xfffffffd) == 0) {
      return uVar1;
    }
    func_0x000108d6a85c(param_1,&UNK_10f519156);
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 3) = uVar3;
  return uVar1;
}



/* Entry: 108dae2b0; end: 108dae317;  */

undefined8 FUN_108dae2b0(long param_1,char *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  
  if ((*param_2 == -100) || (*param_2 == -0x66)) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    puVar3 = (uint *)*puVar1;
    if (puVar3 != (uint *)0x0) {
      uVar2 = (ulong)*puVar3;
      if (0 < (int)*puVar3) {
        puVar3 = puVar3 + 0x12;
        do {
          if (*(uint *)(param_2 + 0x2c) == *puVar3) {
            *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
            return 0;
          }
          uVar2 = uVar2 - 1;
          puVar3 = puVar3 + 0x1c;
        } while (uVar2 != 0);
      }
    }
    *(int *)((long)puVar1 + 0xc) = *(int *)((long)puVar1 + 0xc) + 1;
  }
  return 0;
}



/* Entry: 108dae318; end: 108dae44b;  */

void FUN_108dae318(long *param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    lVar2 = *param_1;
    if ((*(char *)(lVar2 + 0x51) == '\0') &&
       (uVar1 = *(ushort *)(param_2 + 10), (uVar1 >> 5 & 1) == 0)) {
      uStack_50 = 0;
      pcStack_60 = (code *)0x0;
      pcStack_70 = FUN_108dae968;
      uStack_48 = 0;
      plStack_58 = param_1;
      if (*(char *)((long)param_1 + 0x22) != '\0') {
        pcStack_68 = FUN_108dae970;
        func_0x000108daa3c0(&pcStack_70,param_2);
        uVar1 = *(ushort *)(param_2 + 10);
      }
      pcStack_68 = FUN_108daeb10;
      if ((uVar1 >> 8 & 1) == 0) {
        pcStack_60 = FUN_108daf78c;
      }
      func_0x000108daa3c0(&pcStack_70,param_2);
      if ((*(int *)((long)param_1 + 0x4c) == 0) && (*(char *)(lVar2 + 0x51) == '\0')) {
        pcStack_70 = FUN_108dacd1c;
        pcStack_68 = (code *)0x108dad1a4;
        pcStack_60 = (code *)0x0;
        uStack_50 = 0;
        plStack_58 = param_1;
        uStack_48 = param_3;
        func_0x000108daa3c0(&pcStack_70,param_2);
        if ((*(int *)((long)param_1 + 0x4c) == 0) && (*(char *)(lVar2 + 0x51) == '\0')) {
          pcStack_68 = (code *)0x0;
          uStack_50 = 0;
          pcStack_60 = FUN_108db0500;
          pcStack_70 = FUN_108dae968;
          uStack_48 = 0;
          plStack_58 = param_1;
          func_0x000108daa3c0(&pcStack_70,param_2);
        }
      }
    }
  }
  return;
}



/* Entry: 108dae44c; end: 108dae967;  */

undefined8 FUN_108dae44c(undefined8 *param_1,undefined8 *param_2,int *param_3,char *param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  int iStack_64;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  plVar6 = (long *)*param_1;
  if (0 < *param_3) {
    iVar14 = 0;
    plVar15 = *(long **)(param_3 + 2);
    do {
      lVar10 = *plVar15;
      lVar12 = lVar10;
      if (lVar10 == 0) {
        lVar12 = 0;
      }
      else {
        do {
          if ((*(uint *)(lVar12 + 4) >> 0xc & 1) == 0) break;
          if ((*(uint *)(lVar12 + 4) >> 0x12 & 1) == 0) {
            plVar7 = (long *)(lVar12 + 0x10);
          }
          else {
            plVar7 = *(long **)(*(long *)(lVar12 + 0x20) + 8);
          }
          lVar12 = *plVar7;
        } while (lVar12 != 0);
      }
      if (*param_4 == 'G') {
LAB_108dae500:
        func_0x000108dab090(lVar12,&iStack_64);
        if ((int)lVar12 != 0) {
          if (iStack_64 - 0x10000U < 0xffff0001) {
            func_0x000108d6a85c(plVar6,&UNK_10f5197cb);
            return 1;
          }
          goto LAB_108dae520;
        }
        *(undefined2 *)((long)plVar15 + 0x1c) = 0;
        puVar11 = param_1;
        func_0x000108dacc04(param_1,lVar10);
        if ((int)puVar11 != 0) {
          return 1;
        }
        piVar9 = (int *)*param_2;
        iVar13 = *piVar9;
        if (0 < iVar13) {
          lVar8 = 0;
          lVar12 = 0;
          do {
            lVar4 = lVar10;
            FUN_108daa04c(lVar10,*(undefined8 *)(*(long *)(piVar9 + 2) + lVar8),0xffffffff);
            if ((int)lVar4 == 0) {
              *(short *)((long)plVar15 + 0x1c) = (short)lVar12 + 1;
              piVar9 = (int *)*param_2;
              iVar13 = *piVar9;
            }
            lVar12 = lVar12 + 1;
            lVar8 = lVar8 + 0x20;
          } while (lVar12 < iVar13);
        }
      }
      else {
        uVar3 = *param_2;
        FUN_108db082c(uVar3,lVar12);
        iStack_64 = (int)uVar3;
        if (iStack_64 < 1) goto LAB_108dae500;
LAB_108dae520:
        *(short *)((long)plVar15 + 0x1c) = (short)iStack_64;
      }
      iVar14 = iVar14 + 1;
      plVar15 = plVar15 + 4;
    } while (iVar14 < *param_3);
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (*(char *)(*plVar6 + 0x51) == '\0') {
    iVar14 = *param_3;
    if (*(int *)(*plVar6 + 0x70) < iVar14) {
      puVar5 = &UNK_10f519803;
LAB_108db090c:
      func_0x000108d6a85c(plVar6,puVar5);
      return 1;
    }
    if (0 < iVar14) {
      piVar9 = (int *)*param_2;
      puVar11 = *(undefined8 **)(param_3 + 2);
      iVar13 = 1;
      do {
        uVar2 = *(ushort *)((long)puVar11 + 0x1c);
        if (uVar2 != 0) {
          if (*piVar9 < (int)(uint)uVar2) {
            puVar5 = &UNK_10f5197cb;
            goto LAB_108db090c;
          }
          FUN_108dadf90(plVar6,piVar9,uVar2 - 1,*puVar11,param_4,0);
          iVar14 = *param_3;
        }
        puVar11 = puVar11 + 4;
        bVar1 = iVar13 < iVar14;
        iVar13 = iVar13 + 1;
      } while (bVar1);
    }
  }
  return 0;
}



/* Entry: 108dae968; end: 108dae96f;  */

undefined8 FUN_108dae968(void)

{
  return 0;
}



/* Entry: 108dae970; end: 108daeb0f;  */

undefined8 FUN_108dae970(long param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar11 = param_2 + 0x14;
  if (*(long *)puVar11 != 0) {
    puVar6 = *(uint **)(param_2 + 0x12);
    puVar7 = param_2;
    puVar1 = puVar6;
    while (puVar1 != (uint *)0x0) {
      if (((char)puVar7[2] != 'w') && ((char)puVar7[2] != 't')) {
        plVar8 = (long *)(*(long *)(puVar6 + 2) + (ulong)*puVar6 * 0x20);
        iVar5 = *puVar6 + 1;
        do {
          plVar8 = plVar8 + -4;
          iVar5 = iVar5 + -1;
          if (iVar5 < 1) {
            return 0;
          }
        } while ((*(byte *)(*plVar8 + 5) & 1) == 0);
        puVar9 = *(undefined8 **)(param_1 + 0x18);
        puVar10 = (undefined8 *)*puVar9;
        puVar2 = puVar10;
        FUN_108d6a6fc(puVar10,0x78);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[0xe] = 0;
          puVar2[0xb] = 0;
          puVar2[10] = 0;
          puVar2[0xd] = 0;
          puVar2[0xc] = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          puVar3 = puVar9;
          FUN_108d9ca60(puVar9,0,0,0,&uStack_60,puVar2,0,0);
          if (puVar3 != (undefined8 *)0x0) {
            uVar12 = *(undefined8 *)(param_2 + 2);
            uVar4 = *(undefined8 *)param_2;
            uVar14 = *(undefined8 *)(param_2 + 6);
            uVar13 = *(undefined8 *)(param_2 + 4);
            uVar15 = *(undefined8 *)(param_2 + 8);
            uVar17 = *(undefined8 *)(param_2 + 0xe);
            uVar16 = *(undefined8 *)(param_2 + 0xc);
            puVar2[5] = *(undefined8 *)(param_2 + 10);
            puVar2[4] = uVar15;
            puVar2[7] = uVar17;
            puVar2[6] = uVar16;
            puVar2[1] = uVar12;
            *puVar2 = uVar4;
            puVar2[3] = uVar14;
            puVar2[2] = uVar13;
            uVar12 = *(undefined8 *)(param_2 + 0x12);
            uVar4 = *(undefined8 *)(param_2 + 0x10);
            uVar14 = *(undefined8 *)(param_2 + 0x16);
            uVar13 = *(undefined8 *)(param_2 + 0x14);
            uVar16 = *(undefined8 *)(param_2 + 0x1a);
            uVar15 = *(undefined8 *)(param_2 + 0x18);
            puVar2[0xe] = *(undefined8 *)(param_2 + 0x1c);
            puVar2[0xb] = uVar14;
            puVar2[10] = uVar13;
            puVar2[0xd] = uVar16;
            puVar2[0xc] = uVar15;
            puVar2[9] = uVar12;
            puVar2[8] = uVar4;
            *(undefined8 **)(param_2 + 10) = puVar3;
            uStack_50 = 0;
            uStack_48 = 0;
            FUN_108db0138(puVar10,0x74,&uStack_50,0);
            uVar4 = *puVar9;
            FUN_108d9ccd4(uVar4,0,puVar10);
            *(undefined8 *)param_2 = uVar4;
            *(undefined1 *)(param_2 + 2) = 0x77;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            puVar2[8] = 0;
            puVar2[9] = 0;
            puVar2[7] = 0;
            param_2[0x1c] = 0;
            param_2[0x1d] = 0;
            puVar11[0] = 0;
            puVar11[1] = 0;
            param_2[0x16] = 0;
            param_2[0x17] = 0;
            *(ushort *)((long)param_2 + 10) = *(ushort *)((long)param_2 + 10) & 0xffbf | 0x2000;
            *(undefined8 **)(puVar2[10] + 0x58) = puVar2;
            puVar2[0xc] = 0;
            puVar2[0xd] = 0;
            return 0;
          }
        }
        return 2;
      }
      puVar7 = *(uint **)(puVar7 + 0x14);
      puVar1 = puVar7;
    }
  }
  return 0;
}



/* Entry: 108daeb10; end: 108daf78b;  */

undefined8 FUN_108daeb10(long param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  int *piVar10;
  undefined *puVar11;
  char *pcVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  uint *puVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
  long *plVar29;
  byte *pbVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  int *piVar34;
  long lVar35;
  int *piVar36;
  long lVar37;
  uint *puVar38;
  long lVar39;
  long *plVar40;
  undefined8 uVar41;
  short sVar42;
  long lStack_a0;
  uint uStack_98;
  char *pcStack_78;
  uint uStack_70;
  
  plVar23 = *(long **)(param_1 + 0x18);
  plVar29 = (long *)*plVar23;
  uVar3 = *(ushort *)((long)param_2 + 10);
  *(ushort *)((long)param_2 + 10) = uVar3 | 0x10;
  if (*(char *)((long)plVar29 + 0x51) == '\0') {
    piVar18 = (int *)param_2[5];
    if (piVar18 == (int *)0x0 || (uVar3 & 0x10) != 0) {
      return 1;
    }
    puVar14 = (uint *)*param_2;
    puVar19 = param_2;
    if (*(code **)(param_1 + 0x10) == FUN_108daf78c) {
      do {
        puVar28 = puVar19;
        puVar19 = (undefined8 *)puVar28[0xb];
      } while (puVar19 != (undefined8 *)0x0);
      lVar15 = puVar28[0xe];
      if (lVar15 != 0) {
        *(long *)(lVar15 + 8) = plVar23[0x50];
        plVar23[0x50] = lVar15;
        *(undefined1 *)((long)plVar23 + 0x1f1) = 0;
      }
    }
    FUN_108daf7b0(plVar23,piVar18);
    iVar13 = *piVar18;
    if (0 < iVar13) {
      iVar22 = 0;
      piVar34 = piVar18 + 2;
      do {
        if ((*(byte *)((long)piVar34 + 0x3d) >> 3 & 1) == 0) {
          plVar33 = *(long **)(param_1 + 0x18);
          if (*(long *)(piVar34 + 8) != 0) {
            do {
              puVar19 = param_2;
              param_2 = (undefined8 *)puVar19[0xb];
            } while (param_2 != (undefined8 *)0x0);
            lVar15 = puVar19[0xe];
            if (lVar15 != 0) {
              plVar33[0x50] = *(long *)(lVar15 + 8);
            }
            return 1;
          }
          if (*(long *)(piVar34 + 2) == 0) {
            puVar38 = (uint *)plVar33[0x50];
            lVar15 = *(long *)(piVar34 + 4);
            if (puVar38 != (uint *)0x0 && lVar15 != 0) {
              puVar19 = (undefined8 *)*plVar33;
              do {
                uVar25 = (ulong)*puVar38;
                if (0 < (int)*puVar38) {
                  puVar24 = puVar38 + 10;
LAB_108daec4c:
                  lVar35 = lVar15;
                  FUN_108d5e044(lVar15,*(undefined8 *)(puVar24 + -6));
                  if ((int)lVar35 != 0) goto code_r0x000108daec60;
                  puVar11 = *(undefined **)puVar24;
                  if (puVar11 != (undefined *)0x0) goto LAB_108daf744;
                  puVar28 = puVar19;
                  FUN_108d6a6fc(puVar19,0x78);
                  if (puVar28 == (undefined8 *)0x0) goto LAB_108daf27c;
                  puVar28[0xe] = 0;
                  puVar28[0xb] = 0;
                  puVar28[10] = 0;
                  puVar28[0xd] = 0;
                  puVar28[0xc] = 0;
                  puVar28[7] = 0;
                  puVar28[6] = 0;
                  puVar28[9] = 0;
                  puVar28[8] = 0;
                  puVar28[3] = 0;
                  puVar28[2] = 0;
                  puVar28[5] = 0;
                  puVar28[4] = 0;
                  puVar28[1] = 0;
                  *puVar28 = 0;
                  *(undefined8 **)(piVar34 + 8) = puVar28;
                  *(undefined2 *)(puVar28 + 8) = 1;
                  puVar5 = puVar19;
                  FUN_108d68d58(puVar19,*(undefined8 *)(puVar24 + -6));
                  *puVar28 = puVar5;
                  *(undefined2 *)((long)puVar28 + 0x3c) = 0xffff;
                  *(undefined2 *)((long)puVar28 + 0x42) = 200;
                  *(byte *)((long)puVar28 + 0x46) = *(byte *)((long)puVar28 + 0x46) | 2;
                  puVar5 = puVar19;
                  FUN_108daa8c8(puVar19,*(undefined8 *)(puVar24 + -2),0);
                  *(undefined8 **)(piVar34 + 10) = puVar5;
                  if (*(char *)((long)puVar19 + 0x51) != '\0') {
                    return 2;
                  }
                  bVar1 = *(byte *)(puVar5 + 1);
                  if (bVar1 - 0x73 < 2) {
                    uVar17 = *(uint *)puVar5[5];
                    uVar25 = (ulong)uVar17;
                    if (0 < (int)uVar17) {
                      pbVar30 = (byte *)((long)puVar5[5] + 0x45);
                      do {
                        if (((*(long *)(pbVar30 + -0x35) == 0) &&
                            (lVar15 = *(long *)(pbVar30 + -0x2d), lVar15 != 0)) &&
                           (FUN_108d5e044(lVar15,*(undefined8 *)(puVar24 + -6)), (int)lVar15 == 0))
                        {
                          *(undefined8 **)(pbVar30 + -0x1d) = puVar28;
                          *pbVar30 = *pbVar30 | 8;
                          *(short *)(puVar28 + 8) = *(short *)(puVar28 + 8) + 1;
                          *(ushort *)((long)puVar5 + 10) = *(ushort *)((long)puVar5 + 10) | 0x800;
                        }
                        pbVar30 = pbVar30 + 0x70;
                        uVar25 = uVar25 - 1;
                      } while (uVar25 != 0);
                    }
                    if (2 < *(ushort *)(puVar28 + 8)) {
LAB_108daf730:
                      puVar11 = &UNK_10f51963c;
                      goto LAB_108daf744;
                    }
                    *(undefined **)puVar24 = &UNK_10f519667;
                    lVar15 = plVar33[0x50];
                    plVar33[0x50] = (long)puVar38;
                    puVar19 = (undefined8 *)puVar5[10];
                  }
                  else {
                    if (2 < *(ushort *)(puVar28 + 8)) goto LAB_108daf730;
                    *(undefined **)puVar24 = &UNK_10f519667;
                    lVar15 = plVar33[0x50];
                    plVar33[0x50] = (long)puVar38;
                    puVar19 = puVar5;
                  }
                  func_0x000108daa3c0(param_1,puVar19);
                  puVar19 = puVar5;
                  do {
                    puVar20 = puVar19;
                    puVar19 = (undefined8 *)puVar20[10];
                  } while (puVar19 != (undefined8 *)0x0);
                  piVar16 = (int *)*puVar20;
                  piVar10 = *(int **)(puVar24 + -4);
                  piVar36 = piVar16;
                  if (((piVar10 != (int *)0x0) && (piVar36 = piVar10, piVar16 != (int *)0x0)) &&
                     (*piVar16 != *piVar10)) {
                    func_0x000108d6a85c(plVar33,&UNK_10f51967e);
                    plVar33[0x50] = lVar15;
                    return 2;
                  }
                  FUN_108daf830(*plVar33,piVar36,(long)puVar28 + 0x3e,puVar28 + 1);
                  if (bVar1 - 0x73 < 2) {
                    puVar11 = &UNK_10f5196c6;
                    if ((*(ushort *)((long)puVar5 + 10) & 0x800) != 0) {
                      puVar11 = &UNK_10f5196a4;
                    }
                    *(undefined **)puVar24 = puVar11;
                    func_0x000108daa3c0(param_1,puVar5);
                  }
                  puVar24[0] = 0;
                  puVar24[1] = 0;
                  plVar33[0x50] = lVar15;
                  if (*(long *)(piVar34 + 8) == 0) break;
                  goto LAB_108daef94;
                }
LAB_108daec6c:
                puVar38 = *(uint **)(puVar38 + 2);
              } while (puVar38 != (uint *)0x0);
            }
          }
          if (*(long *)(piVar34 + 4) == 0) {
            puVar19 = *(undefined8 **)(piVar34 + 10);
            lVar15 = param_1;
            func_0x000108daa3c0(param_1,puVar19);
            if ((int)lVar15 != 0) {
              return 2;
            }
            plVar33 = plVar29;
            FUN_108d6a6fc(plVar29,0x78);
            if (plVar33 == (long *)0x0) goto LAB_108daf27c;
            plVar33[0xe] = 0;
            plVar33[0xb] = 0;
            plVar33[10] = 0;
            plVar33[0xd] = 0;
            plVar33[0xc] = 0;
            plVar33[7] = 0;
            plVar33[6] = 0;
            plVar33[9] = 0;
            plVar33[8] = 0;
            plVar33[3] = 0;
            plVar33[2] = 0;
            plVar33[5] = 0;
            plVar33[4] = 0;
            plVar33[1] = 0;
            *plVar33 = 0;
            *(long **)(piVar34 + 8) = plVar33;
            *(undefined2 *)(plVar33 + 8) = 1;
            plVar27 = plVar29;
            FUN_108d6a8e0(plVar29,&UNK_10f5195ba);
            *plVar33 = (long)plVar27;
            do {
              puVar28 = puVar19;
              puVar19 = (undefined8 *)puVar28[10];
            } while (puVar19 != (undefined8 *)0x0);
            FUN_108daf830(*plVar23,*puVar28,(long)plVar33 + 0x3e,plVar33 + 1);
            *(undefined2 *)((long)plVar33 + 0x3c) = 0xffff;
            *(undefined2 *)((long)plVar33 + 0x42) = 200;
            *(byte *)((long)plVar33 + 0x46) = *(byte *)((long)plVar33 + 0x46) | 2;
          }
          else {
            plVar33 = plVar23;
            FUN_108dafaec(plVar23,0,piVar34);
            *(long **)(piVar34 + 8) = plVar33;
            if (plVar33 == (long *)0x0) {
              return 2;
            }
            if ((short)plVar33[8] == -1) {
              func_0x000108d6a85c(plVar23,&UNK_10f5195c7);
LAB_108daf27c:
              piVar34[8] = 0;
              piVar34[9] = 0;
              return 2;
            }
            *(short *)(plVar33 + 8) = (short)plVar33[8] + 1;
            if ((plVar33[3] != 0) || ((*(byte *)((long)plVar33 + 0x46) >> 4 & 1) != 0)) {
              plVar27 = plVar23;
              FUN_108dafb54(plVar23,plVar33);
              if ((int)plVar27 != 0) {
                return 2;
              }
              plVar27 = plVar29;
              FUN_108daa8c8(plVar29,plVar33[3],0);
              *(long **)(piVar34 + 10) = plVar27;
              func_0x000108daa3c0(param_1,plVar27);
            }
          }
LAB_108daef94:
          plVar33 = plVar23;
          FUN_108dafd3c(plVar23,piVar34);
          if ((int)plVar33 != 0) {
            return 2;
          }
          iVar13 = *piVar18;
        }
        iVar22 = iVar22 + 1;
        piVar34 = piVar34 + 0x1c;
      } while (iVar22 < iVar13);
    }
    if (*(char *)((long)plVar29 + 0x51) == '\0') {
      piVar34 = (int *)param_2[5];
      if (1 < *piVar34) {
        lVar15 = 0;
        piVar36 = piVar34 + 0x1e;
        piVar10 = piVar34 + 2;
        do {
          lVar35 = *(long *)(piVar36 + 8);
          if (*(long *)(piVar10 + 8) != 0 && lVar35 != 0) {
            bVar1 = *(byte *)(piVar36 + 0xf);
            plVar33 = plVar23;
            if ((bVar1 >> 2 & 1) != 0) {
              if ((*(long *)(piVar36 + 0x12) != 0) || (*(long *)(piVar36 + 0x14) != 0)) {
                puVar11 = &UNK_10f519722;
LAB_108daf744:
                func_0x000108d6a85c(plVar33,puVar11);
                return 2;
              }
              sVar42 = *(short *)(lVar35 + 0x3e);
              if (0 < sVar42) {
                lVar31 = 0;
                do {
                  lVar39 = 0;
                  uVar41 = *(undefined8 *)(*(long *)(lVar35 + 8) + lVar31 * 0x30);
                  lVar26 = 0x28;
                  do {
                    uVar6 = *(undefined8 *)((long)piVar34 + lVar26);
                    FUN_108db0028(uVar6,uVar41);
                    if (-1 < (int)uVar6) {
                      FUN_108dafe30(plVar23,piVar34,lVar39,uVar6,(int)lVar15 + 1,lVar31,
                                    bVar1 >> 5 & 1,param_2 + 6);
                      sVar42 = *(short *)(lVar35 + 0x3e);
                      break;
                    }
                    lVar39 = lVar39 + 1;
                    lVar26 = lVar26 + 0x70;
                  } while (lVar15 + 1 != lVar39);
                  lVar31 = lVar31 + 1;
                } while (lVar31 < sVar42);
              }
            }
            lVar31 = *(long *)(piVar36 + 0x12);
            if (lVar31 != 0) {
              if (*(long *)(piVar36 + 0x14) != 0) {
                puVar11 = &UNK_10f519754;
                goto LAB_108daf744;
              }
              if ((bVar1 >> 5 & 1) != 0) {
                FUN_108dafee8(lVar31,piVar36[0x10]);
                lVar31 = *(long *)(piVar36 + 0x12);
              }
              lVar39 = *plVar23;
              FUN_108daff30(lVar39,param_2[6],lVar31);
              param_2[6] = lVar39;
              piVar36[0x12] = 0;
              piVar36[0x13] = 0;
            }
            plVar27 = *(long **)(piVar36 + 0x14);
            if ((plVar27 != (long *)0x0) && (0 < (int)plVar27[1])) {
              lVar31 = 0;
              do {
                uVar41 = *(undefined8 *)(*plVar27 + lVar31 * 0x10);
                lVar39 = lVar35;
                FUN_108db0028(lVar35,uVar41);
                if ((int)lVar39 < 0) {
LAB_108daf250:
                  puVar11 = &UNK_10f51978b;
                  goto LAB_108daf744;
                }
                lVar26 = 0;
                lVar37 = 0x28;
                while( true ) {
                  uVar6 = *(undefined8 *)((long)piVar34 + lVar37);
                  FUN_108db0028(uVar6,uVar41);
                  if (-1 < (int)uVar6) break;
                  lVar26 = lVar26 + 1;
                  lVar37 = lVar37 + 0x70;
                  if (lVar15 + 1 == lVar26) goto LAB_108daf250;
                }
                FUN_108dafe30(plVar23,piVar34,lVar26,uVar6,(int)lVar15 + 1,lVar39,bVar1 >> 5 & 1,
                              param_2 + 6);
                lVar31 = lVar31 + 1;
              } while (lVar31 < (int)plVar27[1]);
            }
          }
          lVar15 = lVar15 + 1;
          piVar36 = piVar36 + 0x1c;
          piVar10 = piVar10 + 0x1c;
        } while (lVar15 < (long)*piVar34 + -1);
      }
      uVar25 = (ulong)*puVar14;
      if (0 < (int)*puVar14) {
        puVar28 = *(undefined8 **)(puVar14 + 2);
        puVar19 = puVar28;
        do {
          cVar2 = *(char *)*puVar19;
          if (cVar2 == 'z') {
            cVar2 = **(char **)((char *)*puVar19 + 0x18);
          }
          if (cVar2 == 't') {
            lVar15 = 0;
            uStack_98 = *(uint *)(*plVar23 + 0x2c) & 0x60;
            piVar34 = (int *)0x0;
            goto LAB_108daf2ac;
          }
          uVar25 = uVar25 - 1;
          puVar19 = puVar19 + 4;
        } while (uVar25 != 0);
      }
      piVar36 = (int *)*param_2;
      goto LAB_108daf6fc;
    }
  }
  return 2;
code_r0x000108daec60:
  puVar24 = puVar24 + 8;
  uVar25 = uVar25 - 1;
  if (uVar25 == 0) goto LAB_108daec6c;
  goto LAB_108daec4c;
LAB_108daf2ac:
  do {
    puVar19 = puVar28 + lVar15 * 4;
    pcVar12 = (char *)*puVar19;
    if (*pcVar12 == 't') {
      lVar35 = 0;
LAB_108daf31c:
      iVar13 = *piVar18;
      piVar36 = piVar34;
      if (0 < iVar13) {
        lVar31 = 0;
        bVar4 = false;
        piVar36 = piVar18 + 2;
        do {
          lStack_a0 = *(long *)(piVar36 + 6);
          plVar33 = *(long **)(piVar36 + 8);
          if (lStack_a0 == 0) {
            lStack_a0 = *plVar33;
          }
          if (*(char *)((long)plVar29 + 0x51) != '\0') break;
          plVar27 = *(long **)(piVar36 + 10);
          if ((plVar27 == (long *)0x0) || ((*(ushort *)((long)plVar27 + 10) >> 9 & 1) == 0)) {
            if ((lVar35 == 0) ||
               (lVar39 = lVar35, FUN_108d5e044(lVar35,lStack_a0), (int)lVar39 == 0)) {
              if (plVar33[0xd] == 0) {
LAB_108daf3f0:
                plVar27 = (long *)0x0;
                pcVar12 = "*";
              }
              else {
                uVar17 = *(uint *)(plVar29 + 5);
                uVar25 = (ulong)uVar17;
                if ((int)uVar17 < 1) {
                  uVar25 = 0;
                }
                else {
                  uVar21 = 0;
                  plVar27 = (long *)(plVar29[4] + 0x18);
                  do {
                    if (*plVar27 == plVar33[0xd]) {
                      uVar25 = uVar21 & 0xffffffff;
                      uVar17 = (uint)uVar21;
                      break;
                    }
                    uVar21 = uVar21 + 1;
                    plVar27 = plVar27 + 4;
                  } while (uVar25 != uVar21);
                  if ((int)uVar17 < 0) goto LAB_108daf3f0;
                }
                plVar27 = (long *)0x0;
                pcVar12 = *(char **)(plVar29[4] + uVar25 * 0x20);
              }
              goto LAB_108daf3fc;
            }
          }
          else {
            pcVar12 = (char *)0x0;
LAB_108daf3fc:
            sVar42 = *(short *)((long)plVar33 + 0x3e);
            if (0 < sVar42) {
              lVar39 = 0;
              do {
                lVar26 = plVar33[1];
                plVar40 = *(long **)(lVar26 + lVar39 * 0x30);
                piVar10 = piVar34;
                if (plVar27 == (long *)0x0 || lVar35 == 0) {
LAB_108daf46c:
                  if ((*(byte *)(lVar26 + lVar39 * 0x30 + 0x2b) >> 1 & 1) == 0) {
                    if (lVar35 == 0 && lVar31 != 0) {
                      piVar16 = piVar18 + 10;
                      lVar26 = lVar31;
                      if ((*(byte *)(piVar36 + 0xf) >> 2 & 1) != 0) {
                        do {
                          uVar41 = *(undefined8 *)piVar16;
                          FUN_108db0028(uVar41,plVar40);
                          if (-1 < (int)uVar41) goto LAB_108daf664;
                          lVar26 = lVar26 + -1;
                          piVar16 = piVar16 + 0x1c;
                        } while (lVar26 != 0);
                      }
                      uVar41 = *(undefined8 *)(piVar36 + 0x14);
                      func_0x000108dafdd0(uVar41,plVar40);
                      if ((int)uVar41 < 0) goto LAB_108daf4b8;
                    }
                    else {
LAB_108daf4b8:
                      plVar7 = plVar29;
                      FUN_108d9ce48(plVar29,0x1b,plVar40);
                      if ((uStack_98 == 0x20) || (1 < *piVar18)) {
                        plVar32 = plVar29;
                        FUN_108d9ce48(plVar29,0x1b,lStack_a0);
                        plVar8 = plVar23;
                        func_0x000108d99b04(plVar23,0x7a,plVar32,plVar7,0);
                        plVar7 = plVar8;
                        if (pcVar12 != (char *)0x0) {
                          pcVar9 = pcVar12;
                          pcStack_78 = pcVar12;
                          _strlen();
                          uStack_70 = (uint)pcVar9 & 0x3fffffff;
                          plVar32 = plVar29;
                          FUN_108db0138(plVar29,0x1b,&pcStack_78,0);
                          plVar7 = plVar23;
                          func_0x000108d99b04(plVar23,0x7a,plVar32,plVar8,0);
                        }
                        if (uStack_98 != 0x20) goto LAB_108daf594;
                        plVar32 = plVar29;
                        FUN_108d6a8e0(plVar29,&UNK_10f518dd3);
                        plVar40 = plVar32;
                      }
                      else {
LAB_108daf594:
                        plVar32 = (long *)0x0;
                      }
                      piVar10 = (int *)*plVar23;
                      FUN_108d9ccd4(piVar10,piVar34,plVar7);
                      if (plVar40 == (long *)0x0) {
                        uVar25 = 0;
                      }
                      else {
                        plVar7 = plVar40;
                        _strlen(plVar40);
                        uVar25 = (ulong)plVar7 & 0x3fffffff;
                      }
                      if (piVar10 != (int *)0x0) {
                        lVar37 = *(long *)(piVar10 + 2);
                        iVar13 = *piVar10;
                        lVar26 = *plVar23;
                        FUN_108d95eb4(lVar26,plVar40,uVar25);
                        *(long *)(lVar37 + (long)iVar13 * 0x20 + -0x18) = lVar26;
                        if ((*(ushort *)((long)param_2 + 10) >> 9 & 1) != 0) {
                          lVar26 = *(long *)(piVar10 + 2);
                          iVar13 = *piVar10;
                          plVar40 = plVar29;
                          if (plVar27 == (long *)0x0) {
                            FUN_108d6a8e0(plVar29,&UNK_10f5195ee);
                          }
                          else {
                            FUN_108d68d58(plVar29,*(undefined8 *)
                                                   (*(long *)(*plVar27 + 8) + lVar39 * 0x20 + 0x10))
                            ;
                          }
                          lVar26 = lVar26 + (long)iVar13 * 0x20;
                          *(long **)(lVar26 + -0x10) = plVar40;
                          *(byte *)(lVar26 + -7) = *(byte *)(lVar26 + -7) | 2;
                        }
                      }
                      func_0x000108d60660(plVar29,plVar32);
                      sVar42 = *(short *)((long)plVar33 + 0x3e);
                    }
LAB_108daf664:
                    bVar4 = true;
                  }
                }
                else {
                  uVar41 = *(undefined8 *)(*(long *)(*plVar27 + 8) + lVar39 * 0x20 + 0x10);
                  FUN_108dade70(uVar41,0,lVar35,0);
                  if ((int)uVar41 != 0) goto LAB_108daf46c;
                }
                lVar39 = lVar39 + 1;
                piVar34 = piVar10;
              } while (lVar39 < sVar42);
              iVar13 = *piVar18;
            }
          }
          lVar31 = lVar31 + 1;
          piVar36 = piVar36 + 0x1c;
        } while (lVar31 < iVar13);
        piVar36 = piVar34;
        if (bVar4) goto LAB_108daf6d0;
      }
      if (lVar35 == 0) {
        puVar11 = &UNK_10f519609;
      }
      else {
        puVar11 = &UNK_10f5195f7;
      }
      func_0x000108d6a85c(plVar23,puVar11);
    }
    else {
      if ((*pcVar12 == 'z') && (**(char **)(pcVar12 + 0x18) == 't')) {
        lVar35 = *(long *)(*(long *)(pcVar12 + 0x10) + 8);
        goto LAB_108daf31c;
      }
      piVar36 = (int *)*plVar23;
      FUN_108d9ccd4(piVar36,piVar34);
      if (piVar36 != (int *)0x0) {
        lVar35 = *(long *)(piVar36 + 2) + (long)*piVar36 * 0x20;
        uVar41 = puVar19[1];
        *(undefined8 *)(lVar35 + -0x10) = puVar19[2];
        *(undefined8 *)(lVar35 + -0x18) = uVar41;
        puVar19[1] = 0;
        puVar19[2] = 0;
      }
      *puVar19 = 0;
    }
LAB_108daf6d0:
    lVar15 = lVar15 + 1;
    piVar34 = piVar36;
  } while (lVar15 < (int)*puVar14);
  FUN_108d93e84(plVar29,puVar14);
  *param_2 = piVar36;
LAB_108daf6fc:
  if ((piVar36 != (int *)0x0) && ((int)plVar29[0xe] < *piVar36)) {
    func_0x000108d6a85c(plVar23,&UNK_10f51961d);
  }
  return 0;
}



/* Entry: 108daf78c; end: 108daf7af;  */

void FUN_108daf78c(long param_1,long param_2)

{
  long lVar1;
  
  do {
    lVar1 = param_2;
    param_2 = *(long *)(lVar1 + 0x58);
  } while (param_2 != 0);
  lVar1 = *(long *)(lVar1 + 0x70);
  if (lVar1 != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x280) = *(undefined8 *)(lVar1 + 8);
  }
  return;
}



/* Entry: 108daf7b0; end: 108daf82f;  */

void FUN_108daf7b0(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_2 != (int *)0x0) && (iVar2 = *param_2, 0 < iVar2)) {
    iVar3 = 0;
    piVar4 = param_2 + 0x12;
    do {
      if (-1 < *piVar4) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar1 + 1;
      *piVar4 = iVar1;
      if (*(long *)(piVar4 + -6) != 0) {
        FUN_108daf7b0(param_1,*(undefined8 *)(*(long *)(piVar4 + -6) + 0x28));
        iVar2 = *param_2;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x1c;
    } while (iVar3 < iVar2);
  }
  return;
}



/* Entry: 108daf830; end: 108dafaeb;  */

void FUN_108daf830(long *param_1,int *param_2,undefined2 *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  if (param_2 == (int *)0x0) {
    plVar9 = (long *)0x0;
    uVar10 = 0;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    iVar12 = *param_2;
    lVar13 = (long)iVar12;
    plVar9 = param_1;
    FUN_108d68fc8(param_1,lVar13 * 0x30);
    *param_3 = (short)iVar12;
    *param_4 = (long)plVar9;
    if (iVar12 < 1) {
      uVar10 = 0;
    }
    else {
      lVar15 = 0;
      plVar8 = plVar9;
      do {
        pcVar5 = *(char **)(*(long *)(param_2 + 2) + lVar15 * 0x20);
        while ((pcVar5 != (char *)0x0 && ((*(uint *)(pcVar5 + 4) >> 0xc & 1) != 0))) {
          if ((*(uint *)(pcVar5 + 4) >> 0x12 & 1) == 0) {
            pcVar5 = pcVar5 + 0x10;
          }
          else {
            pcVar5 = *(char **)(*(long *)(pcVar5 + 0x20) + 8);
          }
          pcVar5 = *(char **)pcVar5;
        }
        plVar14 = param_1;
        if (*(long *)(*(long *)(param_2 + 2) + lVar15 * 0x20 + 8) == 0) {
          for (; *pcVar5 == 'z'; pcVar5 = *(char **)(pcVar5 + 0x18)) {
          }
          FUN_108d6a8e0(param_1,&UNK_10f517517);
        }
        else {
          FUN_108d68d58();
        }
        if (*(char *)((long)param_1 + 0x51) != '\0') {
          func_0x000108d60660(param_1,plVar14);
          lVar13 = lVar15;
          break;
        }
        if (plVar14 == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          plVar3 = plVar14;
          _strlen();
          uVar11 = (ulong)((uint)plVar3 & 0x3fffffff);
        }
        if (lVar15 != 0) {
          iVar12 = 0;
          plVar3 = plVar14;
          do {
            lVar4 = plVar9[(long)iVar12 * 6];
            FUN_108d5e044(lVar4,plVar3);
            plVar14 = plVar3;
            if ((int)lVar4 == 0) {
              uVar10 = (uint)uVar11;
              uVar6 = uVar11;
              uVar2 = (ulong)(uVar10 - 1);
              do {
                uVar7 = uVar2;
                if ((int)uVar6 < 3) {
                  if ((int)uVar10 < 1) goto LAB_108daf9f0;
                  break;
                }
                lVar4 = uVar6 - 1;
                uVar6 = uVar6 - 1;
                uVar2 = uVar7 - 1;
              } while (0xfffffffffffffff5 < (ulong)*(byte *)((long)plVar3 + lVar4) - 0x3a);
              uVar1 = (uint)uVar7;
              if (*(char *)((long)plVar3 + uVar7) != ':') {
                uVar1 = uVar10;
              }
              uVar11 = (ulong)uVar1;
LAB_108daf9f0:
              *(undefined1 *)((long)plVar3 + uVar11) = 0;
              plVar14 = param_1;
              FUN_108d6a8e0(param_1,&UNK_10f5196ec);
              func_0x000108d60660(param_1,plVar3);
              if (plVar14 == (long *)0x0) {
                plVar14 = (long *)0x0;
                break;
              }
              iVar12 = -1;
            }
            iVar12 = iVar12 + 1;
            plVar3 = plVar14;
          } while (iVar12 < lVar15);
        }
        *plVar8 = (long)plVar14;
        lVar15 = lVar15 + 1;
        plVar8 = plVar8 + 6;
      } while (lVar15 != lVar13);
      uVar10 = (uint)lVar13;
    }
  }
  if (*(char *)((long)param_1 + 0x51) != '\0') {
    if (uVar10 != 0) {
      uVar11 = (ulong)uVar10;
      plVar8 = plVar9;
      do {
        func_0x000108d60660(param_1,*plVar8);
        uVar11 = uVar11 - 1;
        plVar8 = plVar8 + 6;
      } while (uVar11 != 0);
    }
    func_0x000108d60660(param_1,plVar9);
    *param_4 = 0;
    *param_3 = 0;
  }
  return;
}



/* Entry: 108dafaec; end: 108dafb53;  */

void FUN_108dafaec(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*param_3 == 0) {
    plVar2 = param_3 + 1;
  }
  else {
    uVar1 = *(uint *)(*param_1 + 0x28);
    lVar6 = *(long *)(*param_1 + 0x20);
    if ((int)uVar1 < 1) {
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      plVar2 = (long *)(lVar6 + 0x18);
      do {
        uVar8 = uVar7;
        if (*plVar2 == *param_3) break;
        uVar7 = uVar7 + 1;
        uVar8 = (ulong)uVar1;
        plVar2 = plVar2 + 4;
      } while (uVar1 != uVar7);
    }
    plVar2 = (long *)(lVar6 + (long)(int)uVar8 * 0x20);
  }
  lVar5 = *plVar2;
  lVar6 = param_3[2];
  plVar2 = param_1;
  FUN_108d9605c();
  if ((int)plVar2 == 0) {
    lVar3 = *param_1;
    func_0x000108d700dc(lVar3,lVar6,lVar5);
    if (lVar3 == 0) {
      if (lVar5 == 0) {
        puVar4 = &UNK_10f3b24d8;
      }
      else {
        puVar4 = &UNK_10f518d67;
      }
      func_0x000108d6a85c(param_1,puVar4);
      *(undefined1 *)((long)param_1 + 0x1d) = 1;
    }
  }
  return;
}



/* Entry: 108dafb54; end: 108dafd3b;  */

bool FUN_108dafb54(long *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined1 auStack_54 [4];
  
  lVar7 = *param_1;
  uVar5 = (uint)*(byte *)(param_2 + 0x46);
  if ((*(byte *)(param_2 + 0x46) >> 4 & 1) != 0) {
    for (plVar6 = *(long **)(param_2 + 0x58); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[5]) {
      if (*plVar6 == lVar7) goto LAB_108dafb84;
    }
    lVar3 = lVar7 + 0x1a8;
    func_0x000108d93668(lVar3,**(undefined8 **)(param_2 + 0x50),auStack_54);
    if ((lVar3 == 0) || (plVar6 = *(long **)(lVar3 + 0x10), plVar6 == (long *)0x0)) {
      puVar4 = &UNK_10f518c45;
      goto LAB_108dafc30;
    }
    uStack_60 = 0;
    lVar3 = lVar7;
    FUN_108d95344(lVar7,param_2,plVar6,*(undefined8 *)(*plVar6 + 0x10),&uStack_60);
    uVar8 = uStack_60;
    if ((int)lVar3 != 0) {
      func_0x000108d6a85c(param_1,&UNK_10f517517);
      func_0x000108d60660(lVar7,uVar8);
      return true;
    }
    func_0x000108d60660(lVar7,uStack_60);
    uVar5 = (uint)*(byte *)(param_2 + 0x46);
  }
LAB_108dafb84:
  if (((uVar5 >> 4 & 1) != 0) || (0 < *(short *)(param_2 + 0x3e))) {
    return false;
  }
  if (-1 < *(short *)(param_2 + 0x3e)) {
    lVar3 = lVar7;
    FUN_108daa8c8(lVar7,*(undefined8 *)(param_2 + 0x18),0);
    if (lVar3 == 0) {
      return true;
    }
    uVar1 = *(undefined1 *)(lVar7 + 0x152);
    lVar2 = param_1[10];
    FUN_108daf7b0(param_1,*(undefined8 *)(lVar3 + 0x28));
    *(undefined2 *)(param_2 + 0x3e) = 0xffff;
    *(undefined1 *)(lVar7 + 0x152) = 0;
    uVar8 = *(undefined8 *)(lVar7 + 0x180);
    *(undefined8 *)(lVar7 + 0x180) = 0;
    plVar6 = param_1;
    FUN_108dac548(param_1,lVar3);
    *(undefined8 *)(lVar7 + 0x180) = uVar8;
    *(undefined1 *)(lVar7 + 0x152) = uVar1;
    *(int *)(param_1 + 10) = (int)lVar2;
    if (plVar6 == (long *)0x0) {
      *(undefined2 *)(param_2 + 0x3e) = 0;
    }
    else {
      *(undefined2 *)(param_2 + 0x3e) = *(undefined2 *)((long)plVar6 + 0x3e);
      *(long *)(param_2 + 8) = plVar6[1];
      *(undefined2 *)((long)plVar6 + 0x3e) = 0;
      plVar6[1] = 0;
      FUN_108d62864(lVar7,plVar6);
      *(ushort *)(*(long *)(param_2 + 0x68) + 0x72) =
           *(ushort *)(*(long *)(param_2 + 0x68) + 0x72) | 2;
    }
    func_0x000108d93f18(lVar7,lVar3,1);
    return plVar6 == (long *)0x0;
  }
  puVar4 = &UNK_10f5196f2;
LAB_108dafc30:
  func_0x000108d6a85c(param_1,puVar4);
  return true;
}



/* Entry: 108dafd3c; end: 108dafe2f;  */

undefined8 FUN_108dafd3c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_2 + 0x60);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    for (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x20) + 0x10); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[5]) {
      uVar1 = *puVar3;
      FUN_108d5e044(uVar1,lVar2);
      if ((int)uVar1 == 0) {
        *(undefined8 **)(param_2 + 0x68) = puVar3;
        return uVar1;
      }
    }
    func_0x000108d6a85c(param_1,&UNK_10f519710);
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar1;
}



/* Entry: 108dafe30; end: 108dafee7;  */

void FUN_108dafe30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3;
  func_0x000108db0084(lVar3);
  lVar2 = lVar3;
  func_0x000108db0084(lVar3,param_2,param_5,param_6);
  func_0x000108d99b04(param_1,0x4f,lVar1,lVar2,0);
  if ((param_7 != 0) && (param_1 != (long *)0x0)) {
    *(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) | 1;
    *(short *)((long)param_1 + 0x34) = (short)*(undefined4 *)(lVar2 + 0x2c);
  }
  FUN_108daff30(lVar3,*param_8);
  *param_8 = lVar3;
  return;
}



/* Entry: 108dafee8; end: 108daff2f;  */

void FUN_108dafee8(long param_1,undefined8 param_2)

{
  for (; param_1 != 0; param_1 = *(long *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(short *)(param_1 + 0x34) = (short)param_2;
    FUN_108dafee8(*(undefined8 *)(param_1 + 0x10),param_2);
  }
  return;
}



/* Entry: 108daff30; end: 108db0027;  */

/* WARNING: Removing unreachable block (ram,0x000108db0204) */
/* WARNING: Removing unreachable block (ram,0x000108db020c) */
/* WARNING: Removing unreachable block (ram,0x000108db0230) */
/* WARNING: Removing unreachable block (ram,0x000108db0234) */
/* WARNING: Removing unreachable block (ram,0x000108db0238) */
/* WARNING: Removing unreachable block (ram,0x000108db0248) */
/* WARNING: Removing unreachable block (ram,0x000108db01f8) */

undefined8 * FUN_108daff30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uStack_44;
  
  puVar1 = param_3;
  if ((param_2 != (undefined8 *)0x0) && (puVar1 = param_2, param_3 != (undefined8 *)0x0)) {
    FUN_108dabc34();
    if (((int)puVar1 != 0) || (puVar1 = param_3, FUN_108dabc34(), (int)puVar1 != 0)) {
      func_0x000108d93df0(param_1,param_2);
      func_0x000108d93df0(param_1,param_3);
      uStack_44 = 0;
      iVar2 = 0xf62b058;
      FUN_108d934c8(&DAT_10f62b058,&uStack_44);
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = 0;
      }
      FUN_108d68fc8(param_1,(long)iVar2 + 0x48);
      if (param_1 != (undefined8 *)0x0) {
        *(undefined1 *)param_1 = 0x84;
        *(undefined2 *)((long)param_1 + 0x32) = 0xffff;
        if (iVar2 == 0) {
          *(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) | 0x400;
          *(undefined4 *)(param_1 + 1) = uStack_44;
        }
        else {
          param_1[1] = param_1 + 9;
          _memcpy(param_1 + 9,&DAT_10f62b058);
          *(undefined1 *)((long)param_1 + 0x49) = 0;
        }
        *(undefined4 *)(param_1 + 5) = 1;
      }
      return param_1;
    }
    puVar1 = param_1;
    FUN_108d6a6fc(param_1,0x48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[8] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *(undefined1 *)puVar1 = 0x48;
      *(undefined2 *)((long)puVar1 + 0x32) = 0xffff;
      *(undefined4 *)(puVar1 + 5) = 1;
    }
    FUN_108db0278(param_1,puVar1,param_2,param_3);
  }
  return puVar1;
}



/* Entry: 108db0028; end: 108db0137;  */

long FUN_108db0028(long param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  sVar1 = *(short *)(param_1 + 0x3e);
  if (0 < (long)sVar1) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 8);
    do {
      uVar2 = *puVar4;
      FUN_108d5e044(uVar2,param_2);
      if ((int)uVar2 == 0) {
        return lVar3;
      }
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 6;
    } while (sVar1 != lVar3);
  }
  return 0xffffffff;
}



/* Entry: 108db0138; end: 108db0277;  */

undefined1 * FUN_108db0138(undefined1 *param_1,int param_2,long *param_3,int param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uStack_44;
  
  uStack_44 = 0;
  if ((param_3 == (long *)0x0) ||
     (((param_2 == 0x84 && (lVar4 = *param_3, lVar4 != 0)) &&
      (FUN_108d934c8(lVar4,&uStack_44), (int)lVar4 != 0)))) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)param_3[1] + 1;
  }
  FUN_108d68fc8(param_1,(long)iVar6 + 0x48);
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    *(undefined2 *)(param_1 + 0x32) = 0xffff;
    if (param_3 != (long *)0x0) {
      if (iVar6 == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
        *(undefined4 *)(param_1 + 8) = uStack_44;
      }
      else {
        puVar1 = param_1 + 0x48;
        *(undefined1 **)(param_1 + 8) = puVar1;
        if ((int)param_3[1] == 0) {
          uVar5 = 0;
        }
        else {
          _memcpy(puVar1,*param_3);
          uVar5 = (ulong)*(uint *)(param_3 + 1);
        }
        puVar1[uVar5] = 0;
        if (((param_4 != 0) && (2 < iVar6)) &&
           ((bVar2 = *(byte *)*param_3, uVar3 = bVar2 - 0x22,
            uVar3 < 0x3f && (1L << ((ulong)uVar3 & 0x3f) & 0x4200000000000021U) != 0 &&
            (FUN_108dabd84(puVar1), bVar2 == 0x22)))) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return param_1;
}



/* Entry: 108db0278; end: 108db04b7;  */

/* WARNING: Possible PIC construction at 0x000108db02e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108db02e8) */
/* WARNING: Removing unreachable block (ram,0x000108d93e28) */
/* WARNING: Removing unreachable block (ram,0x000108d93e30) */
/* WARNING: Removing unreachable block (ram,0x000108d93e40) */
/* WARNING: Removing unreachable block (ram,0x000108d93e54) */
/* WARNING: Removing unreachable block (ram,0x000108d93e4c) */

void FUN_108db0278(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar12;
  long alStack_50 [5];
  int iStack_24;
  undefined1 *puVar4;
  
  if (param_2 != 0) {
    if (param_4 != (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0x18) = param_4;
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | *(uint *)((long)param_4 + 4) & 0x200100;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0x10) = param_3;
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | *(uint *)((long)param_3 + 4) & 0x200100;
    }
    iStack_24 = 0;
    if ((*(long *)(param_2 + 0x10) != 0) &&
       (iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x28), 0 < iVar1)) {
      iStack_24 = iVar1;
    }
    iVar1 = iStack_24;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (iVar1 = *(int *)(*(long *)(param_2 + 0x18) + 0x28), iVar1 <= iStack_24)) {
      iVar1 = iStack_24;
    }
    iStack_24 = iVar1;
    puVar8 = *(uint **)(param_2 + 0x20);
    if ((*(uint *)(param_2 + 4) >> 0xb & 1) == 0) {
      if (puVar8 != (uint *)0x0) {
        uVar9 = (ulong)*puVar8;
        if ((int)*puVar8 < 1) {
          uVar5 = 0;
        }
        else {
          uVar11 = 0;
          plVar10 = *(long **)(puVar8 + 2);
          do {
            iVar1 = iStack_24;
            if ((*plVar10 != 0) && (iVar1 = *(int *)(*plVar10 + 0x28), iVar1 <= iStack_24)) {
              iVar1 = iStack_24;
            }
            iStack_24 = iVar1;
            uVar11 = uVar11 + 1;
            plVar10 = plVar10 + 4;
          } while (uVar11 < uVar9);
          uVar5 = 0;
          plVar10 = *(long **)(puVar8 + 2);
          do {
            if (*plVar10 != 0) {
              uVar5 = *(uint *)(*plVar10 + 4) | uVar5;
            }
            uVar9 = uVar9 - 1;
            plVar10 = plVar10 + 4;
          } while (uVar9 != 0);
          uVar5 = uVar5 & 0x200100;
        }
        *(uint *)(param_2 + 4) = uVar5 | *(uint *)(param_2 + 4);
      }
    }
    else {
      func_0x000108db03f8(puVar8,&iStack_24);
    }
    *(int *)(param_2 + 0x28) = iStack_24 + 1;
    return;
  }
  uVar12 = 0x108db02e8;
  puVar2 = &stack0xffffffffffffffe0;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar7 = param_3;
    puVar4 = puVar2;
    *(long *)(puVar4 + -0x20) = param_1;
    *(undefined8 **)(puVar4 + -0x18) = param_4;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined8 *)(puVar4 + -8) = uVar12;
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((*(byte *)((long)puVar7 + 5) >> 6 & 1) != 0) break;
    func_0x000108d93df0(param_1,puVar7[2]);
    uVar12 = 0x108d93e28;
    puVar2 = puVar4 + -0x20;
    param_3 = (undefined8 *)puVar7[3];
    param_4 = puVar7;
    puVar3 = puVar4;
  }
  if (*(char *)((long)puVar7 + 5) < '\0') {
    return;
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      if ((puVar7 < *(undefined8 **)(param_1 + 0x170)) ||
         (*(undefined8 **)(param_1 + 0x178) <= puVar7)) {
        (*pcRam0000000113297950)();
        uVar5 = (uint)puVar7;
      }
      else {
        uVar5 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar5;
      return;
    }
    if ((*(undefined8 **)(param_1 + 0x170) <= puVar7) &&
       (puVar7 < *(undefined8 **)(param_1 + 0x178))) {
      *puVar7 = *(undefined8 *)(param_1 + 0x168);
      *(undefined8 **)(param_1 + 0x168) = puVar7;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar6 = puVar7;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar6;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar7);
    puVar7 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar7);
  return;
}



/* Entry: 108db04b8; end: 108db04ff;  */

void FUN_108db04b8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (0 < iVar2) {
      lVar3 = 0;
      plVar4 = *(long **)(param_1 + 2);
      do {
        if ((*plVar4 != 0) && (iVar1 = *(int *)(*plVar4 + 0x28), *param_2 < iVar1)) {
          *param_2 = iVar1;
          iVar2 = *param_1;
        }
        lVar3 = lVar3 + 1;
        plVar4 = plVar4 + 4;
      } while (lVar3 < iVar2);
    }
  }
  return;
}



/* Entry: 108db0500; end: 108db058b;  */

void FUN_108db0500(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if ((*(ushort *)(param_2 + 10) >> 5 & 1) == 0) {
    *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) | 0x20;
    piVar6 = *(int **)(param_2 + 0x28);
    iVar2 = *piVar6;
    if (0 < iVar2) {
      iVar7 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      piVar8 = piVar6 + 2;
      do {
        lVar1 = *(long *)(piVar8 + 8);
        if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x46) >> 1 & 1) != 0)) &&
           (lVar4 = *(long *)(piVar8 + 10), *(long *)(piVar8 + 10) != 0)) {
          do {
            lVar3 = lVar4;
            lVar4 = *(long *)(lVar3 + 0x50);
          } while (lVar4 != 0);
          FUN_108db058c(uVar5,lVar1,lVar3);
          iVar2 = *piVar6;
        }
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 0x1c;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



/* Entry: 108db058c; end: 108db06b7;  */

void FUN_108db058c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *param_1;
  if (*(char *)(lVar8 + 0x51) == '\0') {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a0 = 0;
    lStack_98 = param_3[5];
    if (*(short *)(param_2 + 0x3e) < 1) {
      sVar3 = 0;
    }
    else {
      lVar11 = 0;
      sVar3 = 0;
      pbVar9 = (byte *)(*(long *)(param_2 + 8) + 0x2a);
      puVar12 = *(undefined8 **)(*param_3 + 8);
      do {
        uVar10 = *puVar12;
        if (*(long *)(pbVar9 + -0x12) == 0) {
          puVar4 = &uStack_a0;
          FUN_108db06b8(&uStack_a0,uVar10,pbVar9);
          lVar5 = lVar8;
          FUN_108d68d58(lVar8,puVar4);
          *(long *)(pbVar9 + -0x12) = lVar5;
        }
        bVar2 = *pbVar9;
        uVar6 = uVar10;
        FUN_108daaf34();
        iVar1 = 0x41;
        if ((int)uVar6 != 0) {
          iVar1 = (int)uVar6;
        }
        pbVar9[-1] = (byte)iVar1;
        plVar7 = param_1;
        FUN_108da85d0(param_1,uVar10);
        if ((plVar7 != (long *)0x0) && (*(long *)(pbVar9 + -10) == 0)) {
          lVar5 = lVar8;
          FUN_108d68d58(lVar8,*plVar7);
          *(long *)(pbVar9 + -10) = lVar5;
        }
        sVar3 = sVar3 + (ushort)bVar2;
        lVar11 = lVar11 + 1;
        pbVar9 = pbVar9 + 0x30;
        puVar12 = puVar12 + 4;
      } while (lVar11 < *(short *)(param_2 + 0x3e));
      sVar3 = sVar3 * 4;
    }
    FUN_108d93a54();
    *(short *)(param_2 + 0x44) = sVar3;
  }
  return;
}



/* Entry: 108db06b8; end: 108db082b;  */

void FUN_108db06b8(undefined8 *param_1,char *param_2,undefined1 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *puStack_40;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  if (param_2 == (char *)0x0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  cVar2 = *param_2;
  if (cVar2 == 'w') {
    uVar3 = **(undefined8 **)(**(long **)(param_2 + 0x20) + 8);
    lStack_58 = (*(long **)(param_2 + 0x20))[5];
    uStack_60 = *param_1;
    puStack_40 = param_1;
  }
  else {
    if ((cVar2 != -100) && (cVar2 != -0x66)) goto joined_r0x000108db0824;
    puVar6 = (undefined8 *)0x0;
    uVar4 = (uint)*(short *)(param_2 + 0x30);
    do {
      puVar9 = (uint *)param_1[1] + 0x12;
      uVar1 = *(uint *)param_1[1];
      uVar7 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        do {
          if (*puVar9 == *(uint *)(param_2 + 0x2c)) {
            lVar8 = *(long *)(puVar9 + -8);
            puVar6 = *(undefined8 **)(puVar9 + -6);
            goto joined_r0x000108db0744;
          }
          puVar9 = puVar9 + 0x1c;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lVar8 = 0;
      param_1 = (undefined8 *)param_1[4];
joined_r0x000108db0744:
    } while ((param_1 != (undefined8 *)0x0) && (lVar8 == 0));
    if (lVar8 == 0) goto joined_r0x000108db0824;
    iVar5 = (int)*(short *)(param_2 + 0x30);
    if (puVar6 == (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x68) != 0) {
        if (iVar5 < 0) {
          uVar4 = (uint)*(short *)(lVar8 + 0x3c);
        }
        if (-1 < (int)uVar4) {
          uStack_21 = *(undefined1 *)(*(long *)(lVar8 + 8) + (ulong)uVar4 * 0x30 + 0x2a);
        }
      }
      goto joined_r0x000108db0824;
    }
    if ((iVar5 < 0) || (*(int *)*puVar6 <= iVar5)) goto joined_r0x000108db0824;
    uVar3 = *(undefined8 *)(*(long *)((int *)*puVar6 + 2) + (ulong)uVar4 * 0x20);
    lStack_58 = puVar6[5];
    uStack_60 = *param_1;
    puStack_40 = param_1;
  }
  FUN_108db06b8(&uStack_60,uVar3,&uStack_21);
joined_r0x000108db0824:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uStack_21;
  }
  return;
}



/* Entry: 108db082c; end: 108db09a3;  */

int FUN_108db082c(uint *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((*param_2 == '\x1b') && (uVar4 = (ulong)*param_1, 0 < (int)*param_1)) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    iVar2 = 1;
    plVar5 = (long *)(*(long *)(param_1 + 2) + 8);
    do {
      lVar1 = *plVar5;
      if ((lVar1 != 0) && (FUN_108d5e044(lVar1,uVar3), (int)lVar1 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 4;
    } while (uVar4 != 0);
  }
  return 0;
}



/* Entry: 108db09a4; end: 108db0adf;  */

void FUN_108db09a4(long param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  
  uVar1 = *param_2;
  bVar2 = *param_3;
  uVar12 = (ulong)bVar2;
  if (bVar2 == 0) {
    bVar13 = false;
    lVar11 = 0;
LAB_108db0a2c:
    pbVar6 = param_3;
    FUN_108d95db0(param_3,lVar11);
    if (((!bVar13) && ((int)lVar11 != 0)) && ((int)pbVar6 == 0x1b)) {
      bVar13 = false;
      uVar8 = uVar1;
      goto joined_r0x000108db0a50;
    }
  }
  else {
    uVar9 = uVar12;
    lVar10 = 0;
    do {
      bVar4 = ((&UNK_10dfa0749)[uVar9] & 6) == 0;
      bVar5 = (int)uVar9 != 0x5f;
      bVar13 = bVar4 && bVar5;
      lVar11 = lVar10;
      if (bVar4 && bVar5) break;
      lVar11 = lVar10 + 1;
      lVar3 = lVar10 + 1;
      uVar9 = (ulong)param_3[lVar3];
      lVar10 = lVar11;
    } while (param_3[lVar3] != 0);
    if (uVar12 - 0x3a < 0xfffffffffffffff6) goto LAB_108db0a2c;
  }
  uVar8 = uVar1 + 1;
  *(undefined1 *)(param_1 + (int)uVar1) = 0x22;
  bVar2 = *param_3;
  uVar12 = (ulong)bVar2;
  bVar13 = true;
joined_r0x000108db0a50:
  if (bVar2 != 0) {
    uVar9 = (ulong)uVar8;
    do {
      iVar7 = (int)uVar9;
      uVar9 = (long)iVar7 + 1;
      *(char *)(param_1 + iVar7) = (char)uVar12;
      if (*param_3 == 0x22) {
        *(undefined1 *)(param_1 + uVar9) = 0x22;
        uVar9 = (ulong)(iVar7 + 2);
      }
      uVar8 = (uint)uVar9;
      bVar2 = param_3[1];
      uVar12 = (ulong)bVar2;
      param_3 = param_3 + 1;
    } while (bVar2 != 0);
  }
  if (bVar13) {
    *(undefined1 *)(param_1 + (int)uVar8) = 0x22;
    uVar8 = uVar8 + 1;
  }
  *(undefined1 *)(param_1 + (int)uVar8) = 0;
  *param_2 = uVar8;
  return;
}



/* Entry: 108db0ae0; end: 108db0b4b;  */

undefined8 * FUN_108db0ae0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_108dafaec(param_1,0,param_2 + 8);
  FUN_108d62864(*param_1,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 **)(param_2 + 0x28) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(short *)(puVar1 + 8) = *(short *)(puVar1 + 8) + 1;
  }
  FUN_108dafd3c(param_1,param_2 + 8);
  if ((int)param_1 != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



/* Entry: 108db0b4c; end: 108db0ccb;  */

undefined8 FUN_108db0b4c(undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (0 < *param_2) {
    iVar5 = 0;
    uVar3 = param_1[3];
    piVar6 = param_2 + 0xc;
    do {
      if (*(int *)(param_1 + 2) == 0) {
        lVar4 = *(long *)(piVar6 + -8);
        if ((lVar4 != 0) && (lVar1 = lVar4, FUN_108d5e044(lVar4,uVar3), (int)lVar1 != 0)) {
          func_0x000108d6a85c(*param_1,&UNK_10f519b01);
          return 1;
        }
        func_0x000108d60660(*(undefined8 *)*param_1,lVar4);
        *(undefined8 *)(piVar6 + -10) = param_1[1];
        piVar6[-8] = 0;
        piVar6[-7] = 0;
      }
      puVar2 = param_1;
      FUN_108db114c(param_1,*(undefined8 *)piVar6);
      if (((int)puVar2 != 0) ||
         (puVar2 = param_1, FUN_108db120c(param_1,*(undefined8 *)(piVar6 + 8)), (int)puVar2 != 0)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x1c;
    } while (iVar5 < *param_2);
  }
  return 0;
}



/* Entry: 108db0ccc; end: 108db114b;  */

void FUN_108db0ccc(long *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined2 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  undefined4 uStack_64;
  
  puVar16 = (undefined8 *)param_2[3];
  iVar1 = (int)param_1[10];
  *(int *)(param_1 + 10) = iVar1 + 2;
  lVar11 = *param_1;
  if (param_2[6] == 0) {
    uVar18 = 0xfff0bdc0;
  }
  else {
    uVar10 = *(uint *)(lVar11 + 0x28);
    if ((int)uVar10 < 1) {
      uVar18 = 0;
    }
    else {
      uVar15 = 0;
      plVar7 = (long *)(*(long *)(lVar11 + 0x20) + 0x18);
      do {
        uVar18 = uVar15;
        if (*plVar7 == param_2[6]) break;
        uVar15 = uVar15 + 1;
        plVar7 = plVar7 + 4;
        uVar18 = (ulong)uVar10;
      } while (uVar10 != uVar15);
    }
  }
  plVar7 = param_1;
  FUN_108dabcbc(param_1,0x1b,*param_2,0,
                *(undefined8 *)
                 (*(long *)(lVar11 + 0x20) +
                 (-(uVar18 >> 0x1f & 1) & 0xffffffe000000000 | (uVar18 & 0xffffffff) << 5)));
  if ((int)plVar7 == 0) {
    func_0x000108da6790(param_1,uVar18,*(undefined4 *)(puVar16 + 7),1,*puVar16);
    plVar7 = param_1;
    FUN_108d70f98();
    if (plVar7 != (long *)0x0) {
      uVar10 = param_3;
      if ((int)param_3 < 0) {
        uVar10 = *(uint *)(param_2 + 10);
      }
      plVar8 = param_1;
      FUN_108da68a8(param_1,param_2);
      iVar2 = (int)param_1[10];
      *(int *)(param_1 + 10) = iVar2 + 1;
      uVar6 = *(undefined2 *)((long)param_2 + 0x56);
      if (plVar8 != (long *)0x0) {
        *(int *)plVar8 = (int)*plVar8 + 1;
      }
      plVar9 = plVar7;
      FUN_108d71098(plVar7,0x3a,iVar2,0,uVar6);
      FUN_108d6aaec(plVar7,plVar9,plVar8,0xfffffffa);
      func_0x000108da66a0(param_1,iVar1,uVar18,puVar16,0x36);
      plVar9 = plVar7;
      FUN_108d71098(plVar7,0x6c,iVar1,0,0);
      if (*(char *)((long)param_1 + 0x1f) == '\0') {
        iVar3 = *(int *)((long)param_1 + 0x54) + 1;
        *(int *)((long)param_1 + 0x54) = iVar3;
      }
      else {
        bVar5 = *(char *)((long)param_1 + 0x1f) - 1;
        *(byte *)((long)param_1 + 0x1f) = bVar5;
        iVar3 = *(int *)((long)param_1 + (ulong)bVar5 * 4 + 0x24);
      }
      FUN_108db1340(param_1,param_2,iVar1,iVar3,0,&uStack_64,0,0);
      FUN_108d71098(plVar7,0x6d,iVar2,iVar3,0);
      FUN_108db14f4(param_1,uStack_64);
      FUN_108d71098(plVar7,9,iVar1,(uint)plVar9 + 1,0);
      uVar4 = *(uint *)((long)plVar7 + 0x3c);
      if ((uint)plVar9 < uVar4) {
        *(uint *)(plVar7[1] + ((ulong)plVar9 & 0xffffffff) * 0x18 + 8) = uVar4;
      }
      *(uint *)(plVar7[6] + 100) = uVar4 - 1;
      if ((int)param_3 < 0) {
        FUN_108d71098(plVar7,0x76,uVar10,uVar18,0);
      }
      plVar9 = plVar7;
      FUN_108d71098(plVar7,0x37,iVar1 + 1,uVar10,uVar18);
      FUN_108d6aaec(plVar7,plVar9,plVar8,0xfffffffa);
      if (plVar7[1] != 0) {
        uVar12 = 5;
        if (0x7fffffff < param_3) {
          uVar12 = 1;
        }
        *(undefined1 *)(plVar7[1] + (long)*(int *)((long)plVar7 + 0x3c) * 0x18 + -0x15) = uVar12;
      }
      plVar9 = plVar7;
      FUN_108d71098(plVar7,0x6a,iVar2,0,0);
      iVar14 = *(int *)((long)plVar7 + 0x3c);
      iVar17 = iVar14;
      if ((plVar8 != (long *)0x0) && (*(char *)((long)param_2 + 0x5a) != '\0')) {
        FUN_108d71098(plVar7,0x10,0,iVar14 + 3,0);
        iVar17 = *(int *)((long)plVar7 + 0x3c);
        uVar6 = *(undefined2 *)((long)param_2 + 0x56);
        plVar8 = plVar7;
        FUN_108d71098(plVar7,99,iVar2,iVar14 + 3,iVar3);
        FUN_108d6aaec(plVar7,plVar8,uVar6,0xfffffff2);
        FUN_108db152c(param_1,2,param_2);
      }
      FUN_108d71098(plVar7,100,iVar2,iVar3,iVar1 + 1);
      FUN_108d71098(plVar7,0x69,iVar1 + 1,0,0xffffffff);
      FUN_108d71098(plVar7,0x6e,iVar1 + 1,iVar3,0);
      if (plVar7[1] != 0) {
        *(undefined1 *)(plVar7[1] + (long)*(int *)((long)plVar7 + 0x3c) * 0x18 + -0x15) = 0x10;
      }
      if (iVar3 != 0) {
        bVar5 = *(byte *)((long)param_1 + 0x1f);
        if (bVar5 < 8) {
          puVar13 = (undefined1 *)((long)param_1 + 0x8e);
          iVar14 = 10;
          do {
            if (*(int *)(puVar13 + 6) == iVar3) {
              *puVar13 = 1;
              goto LAB_108db10a4;
            }
            puVar13 = puVar13 + 0x14;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          *(byte *)((long)param_1 + 0x1f) = bVar5 + 1;
          *(int *)((long)param_1 + (ulong)bVar5 * 4 + 0x24) = iVar3;
        }
      }
LAB_108db10a4:
      FUN_108d71098(plVar7,5,iVar2,iVar17,0);
      uVar10 = *(uint *)((long)plVar7 + 0x3c);
      if ((uint)plVar9 < uVar10) {
        *(uint *)(plVar7[1] + ((ulong)plVar9 & 0xffffffff) * 0x18 + 8) = uVar10;
      }
      *(uint *)(plVar7[6] + 100) = uVar10 - 1;
      FUN_108d71098(plVar7,0x3d,iVar1,0,0);
      FUN_108d71098(plVar7,0x3d,iVar1 + 1,0,0);
      FUN_108d71098(plVar7,0x3d,iVar2,0,0);
    }
  }
  return;
}



/* Entry: 108db114c; end: 108db120b;  */

undefined8 FUN_108db114c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  while (((((uVar1 = param_1, func_0x000108db12cc(param_1,*param_2), (int)uVar1 == 0 &&
            (uVar1 = param_1, FUN_108db0b4c(param_1,param_2[5]), (int)uVar1 == 0)) &&
           (uVar1 = param_1, func_0x000108db120c(param_1,param_2[6]), (int)uVar1 == 0)) &&
          ((uVar1 = param_1, func_0x000108db12cc(param_1,param_2[7]), (int)uVar1 == 0 &&
           (uVar1 = param_1, func_0x000108db120c(param_1,param_2[8]), (int)uVar1 == 0)))) &&
         ((uVar1 = param_1, func_0x000108db12cc(param_1,param_2[9]), (int)uVar1 == 0 &&
          ((uVar1 = param_1, func_0x000108db120c(param_1,param_2[0xc]), (int)uVar1 == 0 &&
           (uVar1 = param_1, func_0x000108db120c(param_1,param_2[0xd]), (int)uVar1 == 0))))))) {
    param_2 = (undefined8 *)param_2[10];
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 108db120c; end: 108db133f;  */

undefined8 FUN_108db120c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    if (*param_2 == -0x79) {
      if (*(char *)(*(long *)*param_1 + 0xa1) == '\0') {
        func_0x000108d6a85c((long *)*param_1,&UNK_10f519b2f);
        return 1;
      }
      *param_2 = 'e';
    }
    if ((*(uint *)(param_2 + 4) >> 0xe & 1) != 0) break;
    if ((*(uint *)(param_2 + 4) >> 0xb & 1) == 0) {
      puVar2 = param_1;
      func_0x000108db12cc();
      iVar1 = (int)puVar2;
    }
    else {
      puVar2 = param_1;
      FUN_108db114c(param_1,*(undefined8 *)(param_2 + 0x20));
      iVar1 = (int)puVar2;
    }
    if ((iVar1 != 0) ||
       (puVar2 = param_1, FUN_108db120c(param_1,*(undefined8 *)(param_2 + 0x18)), (int)puVar2 != 0))
    {
      return 1;
    }
    param_2 = *(char **)(param_2 + 0x10);
    if (param_2 == (char *)0x0) {
      return 0;
    }
  }
  return 0;
}



/* Entry: 108db1340; end: 108db14f3;  */

int FUN_108db1340(long param_1,long param_2,undefined8 param_3,int param_4,int param_5,
                 undefined4 *param_6,long param_7,int param_8)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  if (param_6 != (undefined4 *)0x0) {
    if (*(long *)(param_2 + 0x48) == 0) {
      *param_6 = 0;
    }
    else {
      uVar4 = (undefined4)*(undefined8 *)(lVar7 + 0x30);
      FUN_108da84a4();
      *param_6 = uVar4;
      *(int *)(param_1 + 0x6c) = (int)param_3;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_108da95f4(param_1,*(undefined8 *)(param_2 + 0x48),*param_6,0x10);
    }
  }
  if ((param_5 == 0) || ((*(byte *)(param_2 + 0x5b) >> 3 & 1) == 0)) {
    lVar5 = 0x58;
  }
  else {
    lVar5 = 0x56;
  }
  uVar2 = *(ushort *)(param_2 + lVar5);
  uVar10 = (ulong)uVar2;
  uVar9 = (uint)uVar2;
  if (*(int *)(param_1 + 0x44) < (int)uVar9) {
    iVar6 = *(int *)(param_1 + 0x54) + 1;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)uVar2;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - uVar9;
    *(uint *)(param_1 + 0x48) = iVar6 + uVar9;
  }
  if ((param_7 != 0) && ((iVar6 != param_8 || (*(long *)(param_7 + 0x48) != 0)))) {
    param_7 = 0;
  }
  if (uVar2 != 0) {
    lVar5 = 0;
    iVar1 = iVar6;
    do {
      if (param_7 == 0) {
        sVar3 = *(short *)(*(long *)(param_2 + 8) + lVar5);
LAB_108db1460:
        FUN_108da9a60(lVar7,uVar8,param_3,(int)sVar3,iVar1);
        FUN_108da6380(lVar7,0x27);
      }
      else {
        sVar3 = *(short *)(*(long *)(param_2 + 8) + lVar5);
        if (*(short *)(*(long *)(param_7 + 8) + lVar5) != sVar3) goto LAB_108db1460;
      }
      lVar5 = lVar5 + 2;
      iVar1 = iVar1 + 1;
    } while (uVar10 << 1 != lVar5);
  }
  if (param_4 != 0) {
    FUN_108d71098(lVar7,0x31,iVar6,uVar10);
  }
  FUN_108da8510(param_1,iVar6,uVar10);
  if (*(int *)(param_1 + 0x44) < (int)(uint)uVar2) {
    *(uint *)(param_1 + 0x44) = (uint)uVar2;
    *(int *)(param_1 + 0x48) = iVar6;
  }
  return iVar6;
}



/* Entry: 108db14f4; end: 108db152b;  */

void FUN_108db14f4(long param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(lVar3 + 0x30);
    if (((int)param_2 < 0) && (lVar7 = *(long *)(lVar5 + 0x80), lVar7 != 0)) {
      *(undefined4 *)(lVar7 + (ulong)~param_2 * 4) = *(undefined4 *)(lVar3 + 0x3c);
    }
    *(int *)(lVar5 + 100) = *(int *)(lVar3 + 0x3c) + -1;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    pcVar4 = (char *)(param_1 + 0x8e);
    iVar6 = 10;
    do {
      iVar1 = *(int *)(pcVar4 + 6);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x70) < *(int *)(pcVar4 + 2))) {
        if (*pcVar4 != '\0') {
          bVar2 = *(byte *)(param_1 + 0x1f);
          if (bVar2 < 8) {
            *(byte *)(param_1 + 0x1f) = bVar2 + 1;
            *(int *)(param_1 + 0x24 + (ulong)bVar2 * 4) = iVar1;
          }
          *pcVar4 = '\0';
        }
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
      }
      pcVar4 = pcVar4 + 0x14;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  return;
}



/* Entry: 108db152c; end: 108db169b;  */

void FUN_108db152c(undefined8 *param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  puVar5 = *(undefined8 **)(param_3 + 0x18);
  uStack_88 = *param_1;
  uStack_80 = 0;
  lStack_78 = 0;
  iStack_70 = 0;
  iStack_6c = 0;
  uStack_68 = 200;
  uStack_64 = 0;
  if (*(short *)(param_3 + 0x56) != 0) {
    uVar6 = 0;
    do {
      uVar4 = *(undefined8 *)
               (puVar5[1] + (long)(int)*(short *)(*(long *)(param_3 + 8) + uVar6 * 2) * 0x30);
      if (uVar6 != 0) {
        if (iStack_70 + 2 < iStack_6c) {
          *(undefined2 *)(lStack_78 + iStack_70) = 0x202c;
          iStack_70 = iStack_70 + 2;
        }
        else {
          FUN_108d71a6c(&uStack_88,&DAT_10f68f19e,2);
        }
      }
      func_0x000108d71a2c(&uStack_88,*puVar5);
      if (iStack_70 + 1 < iStack_6c) {
        *(undefined1 *)(lStack_78 + iStack_70) = 0x2e;
        iStack_70 = iStack_70 + 1;
      }
      else {
        FUN_108d71a6c(&uStack_88,&DAT_10f62a9de,1);
      }
      func_0x000108d71a2c(&uStack_88,uVar4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_3 + 0x56));
  }
  puVar5 = &uStack_88;
  FUN_108d64afc(puVar5);
  uVar3 = 0x613;
  if ((*(byte *)(param_3 + 0x5b) & 3) != 2) {
    uVar3 = 0x813;
  }
  puVar1 = param_1;
  FUN_108d70f98();
  if (param_2 == 2) {
    if ((undefined8 *)param_1[0x38] != (undefined8 *)0x0) {
      param_1 = (undefined8 *)param_1[0x38];
    }
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  puVar2 = puVar1;
  FUN_108d71098(puVar1,0x18,uVar3,param_2,0);
  FUN_108d6aaec(puVar1,puVar2,puVar5,0xffffffff);
  if (puVar1[1] != 0) {
    *(undefined1 *)(puVar1[1] + (long)*(int *)((long)puVar1 + 0x3c) * 0x18 + -0x15) = 2;
  }
  return;
}



/* Entry: 108db169c; end: 108db1727;  */

void FUN_108db169c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *param_1;
  iVar5 = *(int *)(lVar4 + 0x28);
  if (0 < iVar5) {
    lVar6 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x20) + lVar6);
      if ((puVar1[1] != 0) &&
         ((param_2 == 0 || (lVar2 = param_2, FUN_108d5e044(param_2,*puVar1), (int)lVar2 == 0)))) {
        func_0x000108dab6e4(param_1,lVar3);
        iVar5 = *(int *)(lVar4 + 0x28);
      }
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar3 < iVar5);
  }
  return;
}



/* Entry: 108db1728; end: 108db1807;  */

void FUN_108db1728(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_d4 [4];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = *(undefined8 **)
            (*(long *)(*param_1 + 0x20) +
            (-(param_2 >> 0x1f & 1) & 0xffffffe000000000 | (param_2 & 0xffffffff) << 5));
  puVar10 = (undefined8 *)0x1;
  do {
    puStack_90 = puVar10;
    func_0x000108d64bd8(0x18,auStack_70,&UNK_10f519c80);
    lVar1 = *param_1;
    puVar5 = auStack_70;
    puVar6 = puVar7;
    func_0x000108d700dc(lVar1,puVar5);
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      plVar2 = param_1;
      puVar5 = &UNK_10f519c8e;
      puStack_90 = puVar7;
      puStack_88 = auStack_70;
      uStack_80 = param_3;
      uStack_78 = param_4;
      FUN_108dac88c(param_1,&UNK_10f519c8e);
    }
    uVar8 = (int)puVar10 + 1;
    puVar10 = (undefined8 *)(ulong)uVar8;
  } while (uVar8 != 5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puStack_d0 = &UNK_10f519c8e;
  puStack_c8 = &UNK_10f519c80;
  pcStack_98 = FUN_108db1808;
  lVar1 = *plVar2;
  if ((((*(byte *)(lVar1 + 0x2e) >> 3 & 1) != 0) && ((*(byte *)((long)puVar6 + 0x46) >> 4 & 1) == 0)
      ) && (puVar6[3] == 0)) {
    plVar3 = plVar2;
    puStack_c0 = puVar7;
    plStack_b8 = param_1;
    uStack_b0 = param_3;
    uStack_a8 = param_4;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_108d70f98();
    lVar9 = puVar6[0xd] + 0x50;
    func_0x000108d93668(lVar9,*puVar6,auStack_d4);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) {
      for (lVar9 = puVar6[4]; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        if ((*(char *)(lVar9 + 0x2c) != '\0') || ((*(byte *)(lVar1 + 0x2f) & 1) != 0)) {
          lVar9 = plVar3[6];
          FUN_108da84a4();
          FUN_108d71098(plVar3,0x87,1,lVar9,0);
          goto LAB_108db18d8;
        }
      }
    }
    else {
      lVar9 = 0;
LAB_108db18d8:
      *(undefined1 *)((long)plVar2 + 0x1e6) = 1;
      lVar4 = lVar1;
      FUN_108daac5c(lVar1,puVar5,0);
      func_0x000108d9d16c(plVar2,lVar4,0);
      *(undefined1 *)((long)plVar2 + 0x1e6) = 0;
      if ((*(byte *)(lVar1 + 0x2f) & 1) == 0) {
        FUN_108d71098(plVar3,0x87,0,*(int *)((long)plVar3 + 0x3c) + 2,0);
        FUN_108da99ac(plVar2,0x313,2,0,0xfffffffe,4);
      }
      uVar8 = (uint)lVar9;
      if (uVar8 != 0) {
        lVar1 = plVar3[6];
        if (((int)uVar8 < 0) && (lVar9 = *(long *)(lVar1 + 0x80), lVar9 != 0)) {
          *(undefined4 *)(lVar9 + (ulong)~uVar8 * 4) = *(undefined4 *)((long)plVar3 + 0x3c);
        }
        *(int *)(lVar1 + 100) = *(int *)((long)plVar3 + 0x3c) + -1;
      }
    }
  }
  return;
}



/* Entry: 108db1808; end: 108db1973;  */

void FUN_108db1808(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_44 [4];
  
  lVar3 = *param_1;
  if ((((*(byte *)(lVar3 + 0x2e) >> 3 & 1) != 0) &&
      ((*(byte *)((long)param_3 + 0x46) >> 4 & 1) == 0)) && (param_3[3] == 0)) {
    plVar1 = param_1;
    FUN_108d70f98();
    lVar5 = param_3[0xd] + 0x50;
    func_0x000108d93668(lVar5,*param_3,auStack_44);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
      for (lVar5 = param_3[4]; lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if ((*(char *)(lVar5 + 0x2c) != '\0') || ((*(byte *)(lVar3 + 0x2f) & 1) != 0)) {
          lVar5 = plVar1[6];
          FUN_108da84a4();
          FUN_108d71098(plVar1,0x87,1,lVar5,0);
          goto LAB_108db18d8;
        }
      }
    }
    else {
      lVar5 = 0;
LAB_108db18d8:
      *(undefined1 *)((long)param_1 + 0x1e6) = 1;
      lVar2 = lVar3;
      FUN_108daac5c(lVar3,param_2,0);
      func_0x000108d9d16c(param_1,lVar2,0);
      *(undefined1 *)((long)param_1 + 0x1e6) = 0;
      if ((*(byte *)(lVar3 + 0x2f) & 1) == 0) {
        FUN_108d71098(plVar1,0x87,0,*(int *)((long)plVar1 + 0x3c) + 2,0);
        FUN_108da99ac(param_1,0x313,2,0,0xfffffffe,4);
      }
      uVar4 = (uint)lVar5;
      if (uVar4 != 0) {
        lVar3 = plVar1[6];
        if (((int)uVar4 < 0) && (lVar5 = *(long *)(lVar3 + 0x80), lVar5 != 0)) {
          *(undefined4 *)(lVar5 + (ulong)~uVar4 * 4) = *(undefined4 *)((long)plVar1 + 0x3c);
        }
        *(int *)(lVar3 + 100) = *(int *)((long)plVar1 + 0x3c) + -1;
      }
    }
  }
  return;
}



/* Entry: 108db1974; end: 108db1c4f;  */

void FUN_108db1974(long *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 uVar16;
  
  lVar13 = *param_1;
  uVar9 = (uint)param_3;
  plVar7 = param_1;
  FUN_108d70f98();
  plVar14 = param_1;
  if ((long *)param_1[0x38] != (long *)0x0) {
    plVar14 = (long *)param_1[0x38];
  }
  func_0x000108dab6e4(param_1,param_3);
  *(uint *)(plVar14 + 0x2d) = *(uint *)(plVar14 + 0x2d) | 1 << (ulong)(uVar9 & 0x1f);
  *(byte *)(plVar14 + 4) = *(byte *)(plVar14 + 4) | 1;
  if ((*(byte *)((long)param_2 + 0x46) >> 4 & 1) != 0) {
    FUN_108d71098(plVar7,0x92,0,0,0);
  }
  lVar8 = *(long *)(*(long *)(*param_1 + 0x20) + 0x38);
  FUN_108db1c50(lVar8,*(undefined1 *)((long)param_1 + 0x1e6),param_2);
  for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x40)) {
    func_0x000108db1ce8(param_1,lVar8);
  }
  if ((*(byte *)((long)param_2 + 0x46) >> 3 & 1) != 0) {
    FUN_108dac88c(param_1,&UNK_10f519cac);
  }
  FUN_108dac88c(param_1,&UNK_10f519cd9);
  bVar6 = *(byte *)((long)param_2 + 0x46);
  if (param_4 == 0 && (bVar6 & 0x10) == 0) {
    iVar3 = *(int *)(param_2 + 7);
    iVar15 = 0;
    while( true ) {
      iVar1 = iVar3;
      if (iVar15 <= iVar3 && iVar15 != 0) {
        iVar1 = 0;
      }
      for (lVar8 = param_2[2]; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x28)) {
        iVar4 = *(int *)(lVar8 + 0x50);
        iVar2 = iVar4;
        if (iVar4 <= iVar1) {
          iVar2 = iVar1;
        }
        if (iVar15 <= iVar4 && iVar15 != 0) {
          iVar2 = iVar1;
        }
        iVar1 = iVar2;
      }
      if (iVar1 == 0) break;
      if (param_2[0xd] == 0) {
        uVar11 = 0xfff0bdc0;
      }
      else {
        uVar5 = *(uint *)(*param_1 + 0x28);
        if ((int)uVar5 < 1) {
          uVar11 = 0;
        }
        else {
          uVar10 = 0;
          plVar14 = (long *)(*(long *)(*param_1 + 0x20) + 0x18);
          do {
            uVar11 = uVar10;
            if (*plVar14 == param_2[0xd]) break;
            uVar10 = uVar10 + 1;
            uVar11 = (ulong)uVar5;
            plVar14 = plVar14 + 4;
          } while (uVar5 != uVar10);
        }
      }
      FUN_108db1eec(param_1,iVar1,uVar11);
      iVar15 = iVar1;
    }
    bVar6 = *(byte *)((long)param_2 + 0x46);
  }
  if ((bVar6 & 0x10) != 0) {
    uVar16 = *param_2;
    plVar14 = plVar7;
    FUN_108d71098(plVar7,0x94,param_3,0,0);
    FUN_108d6aaec(plVar7,plVar14,uVar16,0);
  }
  uVar16 = *param_2;
  plVar14 = plVar7;
  FUN_108d71098(plVar7,0x7c,param_3,0,0);
  FUN_108d6aaec(plVar7,plVar14,uVar16,0);
  func_0x000108dac9bc(param_1,param_3);
  lVar8 = *(long *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar9 * 0x20 + 0x18);
  uVar12 = *(ushort *)(lVar8 + 0x72);
  if ((uVar12 >> 1 & 1) != 0) {
    plVar14 = *(long **)(lVar8 + 0x10);
    if (plVar14 != (long *)0x0) {
      do {
        lVar8 = plVar14[2];
        if (*(long *)(lVar8 + 0x18) != 0) {
          FUN_108d961ec(lVar13,lVar8);
          *(undefined8 *)(lVar8 + 8) = 0;
          *(undefined2 *)(lVar8 + 0x3e) = 0;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      lVar8 = *(long *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar9 * 0x20 + 0x18);
      uVar12 = *(ushort *)(lVar8 + 0x72);
    }
    *(ushort *)(lVar8 + 0x72) = uVar12 & 0xfffd;
  }
  return;
}



/* Entry: 108db1c50; end: 108db1eeb;  */

long FUN_108db1c50(long param_1,char param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == '\0') {
    lVar2 = param_3[0xd];
    if ((param_1 != lVar2) && (plVar4 = *(long **)(param_1 + 0x40), plVar4 != (long *)0x0)) {
      lVar3 = 0;
      do {
        lVar5 = plVar4[2];
        if (*(long *)(lVar5 + 0x30) == lVar2) {
          uVar1 = *(undefined8 *)(lVar5 + 8);
          FUN_108d5e044(uVar1,*param_3);
          if ((int)uVar1 == 0) {
            if (lVar3 == 0) {
              lVar3 = param_3[0xc];
            }
            *(long *)(lVar5 + 0x40) = lVar3;
            lVar3 = lVar5;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar2 = param_3[0xc];
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 108db1eec; end: 108db2003;  */

void FUN_108db1eec(long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  
  FUN_108d70f98();
  if (*(char *)(param_1 + 0x1f) == '\0') {
    iVar2 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar2;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar3;
    iVar2 = *(int *)(param_1 + (ulong)bVar3 * 4 + 0x24);
  }
  FUN_108d71098();
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1c0);
  }
  *(undefined1 *)(lVar1 + 0x21) = 1;
  FUN_108dac88c(param_1,&UNK_10f519d11);
  if (iVar2 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1f);
    if (bVar3 < 8) {
      puVar4 = (undefined1 *)(param_1 + 0x8e);
      iVar5 = 10;
      do {
        if (*(int *)(puVar4 + 6) == iVar2) {
          *puVar4 = 1;
          return;
        }
        puVar4 = puVar4 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(byte *)(param_1 + 0x1f) = bVar3 + 1;
      *(int *)(param_1 + (ulong)bVar3 * 4 + 0x24) = iVar2;
    }
  }
  return;
}



/* Entry: 108db2004; end: 108db3057;  */

undefined8 FUN_108db2004(long *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  short *psVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar16 = *param_1;
  if ((*(ushort *)(lVar16 + 0x4c) & 1) == 0) {
    lVar20 = param_1[0x46];
    piVar18 = (int *)param_2[5];
    iVar1 = piVar18[(long)param_3 * 0x1c + 0x12];
    puVar17 = *(undefined8 **)(piVar18 + (long)param_3 * 0x1c + 0xc);
    if (param_5 != 0) {
      if (param_4 != 0) {
        return 0;
      }
      if (1 < *piVar18) {
        return 0;
      }
      if ((param_2[6] != 0) && ((*(byte *)(param_2[6] + 6) >> 5 & 1) != 0)) {
        return 0;
      }
      puVar12 = (uint *)*param_2;
      if ((puVar12 != (uint *)0x0) && (uVar8 = (ulong)*puVar12, 0 < (int)*puVar12)) {
        uVar10 = 0;
        plVar13 = *(long **)(puVar12 + 2);
        do {
          if (*plVar13 != 0) {
            uVar10 = *(uint *)(*plVar13 + 4) | uVar10;
          }
          uVar8 = uVar8 - 1;
          plVar13 = plVar13 + 4;
        } while (uVar8 != 0);
        if ((uVar10 >> 0x15 & 1) != 0) {
          return 0;
        }
      }
      puVar12 = (uint *)param_2[9];
      if ((puVar12 != (uint *)0x0) && (uVar8 = (ulong)*puVar12, 0 < (int)*puVar12)) {
        uVar10 = 0;
        plVar13 = *(long **)(puVar12 + 2);
        do {
          if (*plVar13 != 0) {
            uVar10 = *(uint *)(*plVar13 + 4) | uVar10;
          }
          uVar8 = uVar8 - 1;
          plVar13 = plVar13 + 4;
        } while (uVar8 != 0);
        if ((uVar10 >> 0x15 & 1) != 0) {
          return 0;
        }
      }
    }
    lVar14 = puVar17[0xc];
    if (((((lVar14 == 0) || (param_2[0xc] == 0)) && (puVar17[0xd] == 0)) &&
        ((uVar2 = *(ushort *)((long)param_2 + 10), lVar14 == 0 || (uVar2 & 0x40) == 0 &&
         (*(int *)puVar17[5] != 0)))) && (uVar3 = *(ushort *)((long)puVar17 + 10), (uVar3 & 1) == 0)
       ) {
      if (lVar14 != 0) {
        if (param_4 != 0) {
          return 0;
        }
        if (1 < *piVar18) {
          return 0;
        }
      }
      if ((param_5 == 0) || ((uVar2 & 1) == 0)) {
        puVar12 = (uint *)param_2[9];
        if (((puVar12 == (uint *)0x0) || (puVar17[9] == 0)) && ((param_4 == 0 || (puVar17[9] == 0)))
           ) {
          if (lVar14 == 0) {
            if ((uVar3 & 0x1800) != 0) {
              return 0;
            }
          }
          else if (((uVar3 & 0x1800) != 0 || (uVar2 & 1) != 0) || param_2[6] != 0) {
            return 0;
          }
          if ((((uVar2 >> 0xb & 1) == 0) || (puVar17[10] == 0)) &&
             ((*(byte *)(piVar18 + (long)param_3 * 0x1c + 0x11) >> 5 & 1) == 0)) {
            if (puVar17[10] == 0) {
LAB_108db2284:
              param_1[0x46] = *(long *)(piVar18 + (long)param_3 * 0x1c + 6);
              FUN_108dabcbc(param_1,0x15,0,0,0);
              param_1[0x46] = lVar20;
              lVar20 = puVar17[10];
              if (lVar20 != 0) {
                uVar23 = param_2[0xd];
                uVar22 = param_2[0xc];
                uVar6 = param_2[9];
                lVar14 = param_2[10];
                do {
                  param_2[5] = 0;
                  param_2[9] = 0;
                  param_2[10] = 0;
                  param_2[0xc] = 0;
                  param_2[0xd] = 0;
                  lVar11 = lVar16;
                  FUN_108daa8c8(lVar16,param_2,0);
                  param_2[0xd] = uVar23;
                  param_2[0xc] = uVar22;
                  param_2[9] = uVar6;
                  param_2[5] = piVar18;
                  *(undefined1 *)(param_2 + 1) = 0x74;
                  if (lVar11 != 0) {
                    *(long *)(lVar11 + 0x50) = lVar14;
                    if (lVar14 != 0) {
                      *(long *)(lVar14 + 0x58) = lVar11;
                    }
                    *(undefined8 **)(lVar11 + 0x58) = param_2;
                    lVar14 = lVar11;
                  }
                  param_2[10] = lVar14;
                  if (*(char *)(lVar16 + 0x51) != '\0') {
                    return 1;
                  }
                  lVar20 = *(long *)(lVar20 + 0x50);
                } while (lVar20 != 0);
              }
              puVar17 = *(undefined8 **)(piVar18 + (long)param_3 * 0x1c + 0xc);
              func_0x000108d60660(lVar16,*(undefined8 *)(piVar18 + (long)param_3 * 0x1c + 4));
              func_0x000108d60660(lVar16,*(undefined8 *)(piVar18 + (long)param_3 * 0x1c + 6));
              func_0x000108d60660(lVar16,*(undefined8 *)(piVar18 + (long)param_3 * 0x1c + 8));
              (piVar18 + (long)param_3 * 0x1c + 0xc)[0] = 0;
              (piVar18 + (long)param_3 * 0x1c + 0xc)[1] = 0;
              (piVar18 + (long)param_3 * 0x1c + 6)[0] = 0;
              (piVar18 + (long)param_3 * 0x1c + 6)[1] = 0;
              (piVar18 + (long)param_3 * 0x1c + 8)[0] = 0;
              (piVar18 + (long)param_3 * 0x1c + 8)[1] = 0;
              (piVar18 + (long)param_3 * 0x1c + 4)[0] = 0;
              (piVar18 + (long)param_3 * 0x1c + 4)[1] = 0;
              lVar20 = *(long *)(piVar18 + (long)param_3 * 0x1c + 10);
              if (lVar20 != 0) {
                iVar7 = *(ushort *)(lVar20 + 0x40) - 1;
                if (iVar7 == 0) {
                  if ((long *)param_1[0x38] != (long *)0x0) {
                    param_1 = (long *)param_1[0x38];
                  }
                  *(long *)(lVar20 + 0x70) = param_1[0x4e];
                  param_1[0x4e] = lVar20;
                }
                else {
                  *(short *)(lVar20 + 0x40) = (short)iVar7;
                }
                (piVar18 + (long)param_3 * 0x1c + 10)[0] = 0;
                (piVar18 + (long)param_3 * 0x1c + 10)[1] = 0;
              }
              puVar19 = puVar17;
              do {
                puVar12 = (uint *)puVar19[5];
                uVar10 = *puVar12;
                uVar8 = (ulong)uVar10;
                lVar20 = param_2[5];
                if (lVar20 == 0) {
                  lVar20 = lVar16;
                  FUN_108d9cf10(lVar16,0,0,0);
                  param_2[5] = lVar20;
                  if (lVar20 == 0) break;
                  uVar4 = 0;
                }
                else {
                  uVar4 = (undefined1)piVar18[(long)param_3 * 0x1c + 0x11];
                }
                if ((int)uVar10 < 2) {
                  lVar14 = lVar20;
                  if (uVar10 == 1) goto LAB_108db2440;
                }
                else {
                  lVar14 = lVar16;
                  FUN_108db62c4(lVar16,lVar20,uVar10 - 1,param_3 + 1);
                  param_2[5] = lVar14;
                  if (*(char *)(lVar16 + 0x51) != '\0') break;
LAB_108db2440:
                  puVar21 = (undefined8 *)(lVar14 + (long)param_3 * 0x70 + 0x58);
                  puVar12 = puVar12 + 2;
                  do {
                    func_0x000108d94124(lVar16,*puVar21);
                    uVar22 = *(undefined8 *)(puVar12 + 2);
                    uVar6 = *(undefined8 *)puVar12;
                    uVar23 = *(undefined8 *)(puVar12 + 4);
                    uVar25 = *(undefined8 *)(puVar12 + 10);
                    uVar24 = *(undefined8 *)(puVar12 + 8);
                    puVar21[-7] = *(undefined8 *)(puVar12 + 6);
                    puVar21[-8] = uVar23;
                    puVar21[-5] = uVar25;
                    puVar21[-6] = uVar24;
                    puVar21[-9] = uVar22;
                    puVar21[-10] = uVar6;
                    uVar22 = *(undefined8 *)(puVar12 + 0xe);
                    uVar6 = *(undefined8 *)(puVar12 + 0xc);
                    uVar24 = *(undefined8 *)(puVar12 + 0x12);
                    uVar23 = *(undefined8 *)(puVar12 + 0x10);
                    uVar25 = *(undefined8 *)(puVar12 + 0x14);
                    uVar27 = *(undefined8 *)(puVar12 + 0x1a);
                    uVar26 = *(undefined8 *)(puVar12 + 0x18);
                    puVar21[1] = *(undefined8 *)(puVar12 + 0x16);
                    *puVar21 = uVar25;
                    puVar21[3] = uVar27;
                    puVar21[2] = uVar26;
                    puVar21[-3] = uVar22;
                    puVar21[-4] = uVar6;
                    puVar21[-1] = uVar24;
                    puVar21[-2] = uVar23;
                    puVar12[10] = 0;
                    puVar12[0xb] = 0;
                    puVar12[8] = 0;
                    puVar12[9] = 0;
                    puVar12[0xe] = 0;
                    puVar12[0xf] = 0;
                    puVar12[0xc] = 0;
                    puVar12[0xd] = 0;
                    puVar12[0x12] = 0;
                    puVar12[0x13] = 0;
                    puVar12[0x10] = 0;
                    puVar12[0x11] = 0;
                    puVar12[0x16] = 0;
                    puVar12[0x17] = 0;
                    puVar12[0x14] = 0;
                    puVar12[0x15] = 0;
                    puVar12[0x1a] = 0;
                    puVar12[0x1b] = 0;
                    puVar12[0x18] = 0;
                    puVar12[0x19] = 0;
                    puVar12[2] = 0;
                    puVar12[3] = 0;
                    puVar12[0] = 0;
                    puVar12[1] = 0;
                    puVar12[6] = 0;
                    puVar12[7] = 0;
                    puVar12[4] = 0;
                    puVar12[5] = 0;
                    puVar21 = puVar21 + 0xe;
                    uVar8 = uVar8 - 1;
                    puVar12 = puVar12 + 0x1c;
                  } while (uVar8 != 0);
                }
                *(undefined1 *)(lVar14 + (long)param_3 * 0x70 + 0x44) = uVar4;
                piVar15 = (int *)*param_2;
                iVar7 = *piVar15;
                if (0 < iVar7) {
                  lVar14 = 0;
                  lVar20 = 0;
                  lVar11 = *(long *)(piVar15 + 2);
                  do {
                    if (*(long *)(lVar11 + lVar14 + 8) == 0) {
                      lVar5 = lVar16;
                      FUN_108d68d58(lVar16,*(undefined8 *)(lVar11 + lVar14 + 0x10));
                      FUN_108dabd84();
                      lVar11 = *(long *)(piVar15 + 2);
                      *(long *)(lVar11 + lVar14 + 8) = lVar5;
                      iVar7 = *piVar15;
                    }
                    lVar20 = lVar20 + 1;
                    lVar14 = lVar14 + 0x20;
                  } while (lVar20 < iVar7);
                  piVar15 = (int *)*param_2;
                }
                func_0x000108db6458(lVar16,piVar15,iVar1,*puVar19);
                if (param_4 != 0) {
                  func_0x000108db6458(lVar16,param_2[7],iVar1,*puVar19);
                  lVar20 = lVar16;
                  FUN_108db64dc(lVar16,param_2[8],iVar1,*puVar19);
                  param_2[8] = lVar20;
                }
                piVar15 = (int *)puVar19[9];
                if (piVar15 == (int *)0x0) {
                  if (param_2[9] != 0) {
                    func_0x000108db6458(lVar16,param_2[9],iVar1,*puVar19);
                  }
                }
                else {
                  if (0 < *piVar15) {
                    lVar20 = 0;
                    lVar14 = 0x1c;
                    do {
                      *(undefined2 *)(*(long *)(piVar15 + 2) + lVar14) = 0;
                      lVar20 = lVar20 + 1;
                      lVar14 = lVar14 + 0x20;
                    } while (lVar20 < *piVar15);
                  }
                  param_2[9] = piVar15;
                  puVar19[9] = 0;
                }
                if (puVar19[6] == 0) {
                  lVar20 = 0;
                }
                else {
                  lVar20 = lVar16;
                  FUN_108daa624(lVar16,puVar19[6],0,0);
                }
                uVar6 = param_2[6];
                if (param_5 == 0) {
                  lVar14 = lVar16;
                  FUN_108db64dc(lVar16,uVar6,iVar1,*puVar19);
                  param_2[6] = lVar14;
                  lVar11 = lVar16;
                  FUN_108daff30(lVar16,lVar14,lVar20);
                  param_2[6] = lVar11;
                }
                else {
                  param_2[8] = uVar6;
                  param_2[6] = lVar20;
                  lVar20 = lVar16;
                  FUN_108db64dc(lVar16,uVar6,iVar1,*puVar19);
                  param_2[8] = lVar20;
                  lVar14 = lVar16;
                  FUN_108daa624(lVar16,puVar19[8],0,0);
                  lVar11 = lVar16;
                  FUN_108daff30(lVar16,lVar20,lVar14);
                  param_2[8] = lVar11;
                  lVar20 = lVar16;
                  func_0x000108daaabc(lVar16,puVar19[7],0);
                  param_2[7] = lVar20;
                }
                *(ushort *)((long)param_2 + 10) =
                     *(ushort *)((long)param_2 + 10) | *(ushort *)((long)puVar19 + 10) & 1;
                if (puVar19[0xc] != 0) {
                  param_2[0xc] = puVar19[0xc];
                  puVar19[0xc] = 0;
                }
                param_2 = (undefined8 *)param_2[10];
                puVar19 = (undefined8 *)puVar19[10];
              } while (param_2 != (undefined8 *)0x0);
              func_0x000108d93f18(lVar16,puVar17,1);
              return 1;
            }
            if (param_4 != 0) {
              return 0;
            }
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (puVar17[9] != 0) {
              return 0;
            }
            puVar19 = puVar17;
            if (*piVar18 == 1) {
              do {
                if (puVar19 == (undefined8 *)0x0) {
                  if ((puVar12 != (uint *)0x0) && (uVar8 = (ulong)*puVar12, 0 < (int)*puVar12)) {
                    psVar9 = (short *)(*(long *)(puVar12 + 2) + 0x1c);
                    do {
                      if (*psVar9 == 0) {
                        return 0;
                      }
                      uVar8 = uVar8 - 1;
                      psVar9 = psVar9 + 0x10;
                    } while (uVar8 != 0);
                  }
                  goto LAB_108db2284;
                }
              } while ((((*(ushort *)((long)puVar19 + 10) & 5) == 0) &&
                       (((undefined8 *)puVar19[10] == (undefined8 *)0x0 ||
                        (*(char *)(puVar19 + 1) == 't')))) &&
                      ((0 < *(int *)puVar19[5] &&
                       (piVar15 = (int *)*puVar19, puVar19 = (undefined8 *)puVar19[10],
                       *(int *)*puVar17 == *piVar15))));
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 108db3058; end: 108db310b;  */

long FUN_108db3058(long *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *param_1;
  uVar1 = *param_2;
  lVar2 = lVar4;
  FUN_108da69a4(lVar4,uVar1 - param_3,param_4 + 1);
  if ((int)param_3 < (int)uVar1 && lVar2 != 0) {
    lVar6 = 0;
    puVar5 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)param_3 * 0x20);
    do {
      plVar3 = param_1;
      FUN_108da85d0(param_1,*puVar5);
      if (plVar3 == (long *)0x0) {
        plVar3 = *(long **)(lVar4 + 0x10);
      }
      *(long **)(lVar2 + 0x20 + lVar6 * 8) = plVar3;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + lVar6) = *(undefined1 *)(puVar5 + 3);
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + 1;
    } while ((ulong)uVar1 - (ulong)param_3 != lVar6);
  }
  return lVar2;
}



/* Entry: 108db310c; end: 108db3323;  */

void FUN_108db310c(ulong param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uStack_44;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    return;
  }
  FUN_108db5354();
  if (*(long *)(param_2 + 0x60) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_2 + 0xc) = iVar1;
  uVar4 = param_1;
  FUN_108d70f98();
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  func_0x000108dab090(uVar5,&uStack_44);
  if ((int)uVar5 == 0) {
    FUN_108da6628(param_1,*(undefined8 *)(param_2 + 0x60),iVar1);
    FUN_108d71098(uVar4,0x26,iVar1,0,0);
    uVar5 = 0x2e;
    iVar7 = iVar1;
  }
  else {
    uVar8 = (ulong)uStack_44;
    FUN_108d71098(uVar4,0x19,uVar8,iVar1,0);
    if (uStack_44 != 0) {
      if ((-1 < (int)uStack_44) && (uVar8 < *(ulong *)(param_2 + 0x20))) {
        *(ulong *)(param_2 + 0x20) = uVar8;
      }
      goto LAB_108db31fc;
    }
    uVar5 = 0x10;
    iVar7 = 0;
  }
  FUN_108d71098(uVar4,uVar5,iVar7,param_3,0);
LAB_108db31fc:
  lVar6 = *(long *)(param_2 + 0x68);
  if (lVar6 != 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar7 = iVar2 + 1;
    *(int *)(param_2 + 0x10) = iVar7;
    iVar2 = iVar2 + 2;
    *(int *)(param_1 + 0x54) = iVar2;
    FUN_108da6628(param_1,lVar6,iVar7);
    FUN_108d71098(uVar4,0x26,iVar7,0,0);
    uVar8 = uVar4;
    FUN_108d71098(uVar4,0x89,iVar7,0,0);
    FUN_108d71098(uVar4,0x19,0,iVar7,0);
    uVar3 = *(uint *)(uVar4 + 0x3c);
    if ((uint)uVar8 < uVar3) {
      *(uint *)(*(long *)(uVar4 + 8) + (uVar8 & 0xffffffff) * 0x18 + 8) = uVar3;
    }
    *(uint *)(*(long *)(uVar4 + 0x30) + 100) = uVar3 - 1;
    FUN_108d71098(uVar4,0x59,iVar1,iVar7,iVar2);
    uVar8 = uVar4;
    FUN_108d71098(uVar4,0x89,iVar1,0,0);
    FUN_108d71098(uVar4,0x19,0xffffffff,iVar2,0);
    uVar3 = *(uint *)(uVar4 + 0x3c);
    if ((uint)uVar8 < uVar3) {
      *(uint *)(*(long *)(uVar4 + 8) + (uVar8 & 0xffffffff) * 0x18 + 8) = uVar3;
    }
    *(uint *)(*(long *)(uVar4 + 0x30) + 100) = uVar3 - 1;
  }
  return;
}



/* Entry: 108db3324; end: 108db523b;  */

long * FUN_108db3324(undefined8 *param_1,uint *param_2,undefined8 param_3,int *param_4,uint *param_5
                    ,uint param_6,int param_7)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long **pplVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  byte bVar13;
  undefined2 uVar14;
  ushort uVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  ushort *puVar21;
  long *plVar22;
  byte bVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  int *piVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  int *piVar35;
  long *plStack_c0;
  long *plStack_b8;
  int *piStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar32 = param_1[2];
  plVar27 = (long *)*param_1;
  uStack_a0 = 0;
  if (param_4 == (int *)0x0) {
    piVar30 = (int *)0x0;
  }
  else {
    piVar30 = (int *)0x0;
    if (*param_4 < 0x40) {
      piVar30 = param_4;
    }
  }
  if ((*(ushort *)((long)plVar27 + 0x4c) & 0x20) != 0) {
    param_6 = param_6 & 0x1bff;
  }
  uVar12 = *param_2;
  piStack_b0 = piVar30;
  if (0x40 < (int)uVar12) {
    func_0x000108d6a85c(param_1,&UNK_10f519f1d);
    return (long *)0x0;
  }
  if ((param_6 & 0x40) != 0) {
    uVar12 = 1;
  }
  lVar25 = (long)(int)(uVar12 * 0x58 + 0x340);
  plVar7 = plVar27;
  FUN_108d68fc8(plVar27,lVar25 + 0x60);
  if (*(char *)((long)plVar27 + 0x51) != '\0') {
    func_0x000108d60660(plVar27,plVar7);
    return (long *)0x0;
  }
  *(undefined8 *)((long)plVar7 + 0x4c) = 0xffffffffffffffff;
  *(char *)((long)plVar7 + 0x39) = (char)uVar12;
  *plVar7 = (long)param_1;
  plVar7[1] = (long)param_2;
  plVar7[2] = (long)piVar30;
  plVar7[3] = (long)param_5;
  uVar16 = (undefined4)*(undefined8 *)(lVar32 + 0x30);
  FUN_108da84a4();
  *(undefined4 *)(plVar7 + 8) = uVar16;
  *(undefined4 *)((long)plVar7 + 0x44) = uVar16;
  *(short *)((long)plVar7 + 0x32) = (short)param_6;
  *(undefined4 *)(plVar7 + 9) = *(undefined4 *)(param_1 + 0x3b);
  piVar35 = (int *)((long)plVar7 + 0x54);
  *piVar35 = 0;
  plVar1 = plVar7 + 0x2b;
  lStack_a8 = (long)plVar7 + lVar25;
  *(long *)(lStack_a8 + 0x38) = lStack_a8 + 0x48;
  *(undefined2 *)(lStack_a8 + 0x2c) = 0;
  *(undefined2 *)(lStack_a8 + 0x30) = 3;
  *(undefined4 *)(lStack_a8 + 0x28) = 0;
  plVar7[0x2b] = (long)plVar7;
  plVar7[0x2c] = 0;
  *(undefined8 *)((long)plVar7 + 0x16c) = 0x800000000;
  plVar7[0x2f] = (long)(plVar7 + 0x30);
  plStack_c0 = plVar7;
  plStack_b8 = plVar1;
  FUN_108db7bc4(plVar1,param_3,0x48);
  if (0 < *(int *)((long)plVar7 + 0x16c)) {
    lVar26 = 0;
    lVar25 = 0;
    plVar22 = plVar1;
    do {
      if (uVar12 == 0) {
LAB_108db3500:
        FUN_108da95f4(param_1,*(undefined8 *)(plVar22[4] + lVar26),
                      *(undefined4 *)((long)plVar7 + 0x44),0x10);
        *(ushort *)(plStack_b8[4] + lVar26 + 0x1c) = *(ushort *)(plStack_b8[4] + lVar26 + 0x1c) | 4;
      }
      else {
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0x200000000;
        pcStack_98 = FUN_108daa264;
        uStack_90 = 0x108daa314;
        FUN_108daa320(&pcStack_98,*(undefined8 *)(plVar22[4] + lVar26));
        plVar22 = plStack_b8;
        if (uStack_78._4_1_ != '\0') goto LAB_108db3500;
      }
      lVar25 = lVar25 + 1;
      lVar26 = lVar26 + 0x38;
      plVar22 = plStack_b8;
    } while (lVar25 < *(int *)((long)plStack_b8 + 0x14));
  }
  if (uVar12 == 0) {
    if (piVar30 != (int *)0x0) {
      *(char *)((long)plVar7 + 0x34) = (char)*piVar30;
    }
    if ((param_6 >> 10 & 1) != 0) {
      *(undefined1 *)(plVar7 + 7) = 1;
    }
  }
  if (0 < (int)*param_2) {
    lVar25 = 0;
    lVar26 = 0x48;
    do {
      uVar16 = *(undefined4 *)((long)param_2 + lVar26);
      iVar6 = *piVar35;
      *piVar35 = iVar6 + 1;
      *(undefined4 *)((long)plVar7 + (long)iVar6 * 4 + 0x58) = uVar16;
      lVar25 = lVar25 + 1;
      lVar26 = lVar26 + 0x70;
    } while (lVar25 < (int)*param_2);
  }
  if (0 < *(int *)((long)plVar7 + 0x16c)) {
    uVar24 = *(int *)((long)plVar7 + 0x16c) + 1;
    do {
      FUN_108dbac88(plVar1,uVar24 - 2);
      uVar24 = uVar24 - 1;
    } while (1 < uVar24);
  }
  if (*(char *)((long)plVar27 + 0x51) != '\0') goto LAB_108db35ec;
  if ((param_6 >> 10 & 1) != 0) {
    if (*param_2 == 1) {
      uVar24 = param_2[0x12];
      lVar25 = *(long *)(param_2 + 10);
      if (0 < (int)*param_5) {
        uVar17 = 0;
        do {
          pcVar20 = *(char **)(*(long *)(param_5 + 2) + uVar17 * 0x20);
          while ((*(uint *)(pcVar20 + 4) >> 0xc & 1) != 0) {
            if ((*(uint *)(pcVar20 + 4) >> 0x12 & 1) == 0) {
              pcVar20 = pcVar20 + 0x10;
            }
            else {
              pcVar20 = *(char **)(*(long *)(pcVar20 + 0x20) + 8);
            }
            pcVar20 = *(char **)pcVar20;
          }
          if (((*pcVar20 == -0x66) && (*(uint *)(pcVar20 + 0x2c) == uVar24)) &&
             (*(short *)(pcVar20 + 0x30) < 0)) goto LAB_108db381c;
          uVar17 = uVar17 + 1;
        } while (uVar17 != *param_5);
      }
      for (lVar26 = *(long *)(lVar25 + 0x10); lVar26 != 0; lVar26 = *(long *)(lVar26 + 0x28)) {
        if (*(char *)(lVar26 + 0x5a) != '\0') {
          if (*(short *)(lVar26 + 0x56) != 0) {
            uVar17 = 0;
LAB_108db36dc:
            sVar5 = *(short *)(*(long *)(lVar26 + 8) + uVar17 * 2);
            plVar22 = plVar1;
            FUN_108dbc2f8(plVar1,uVar24,(long)sVar5,0xffffffffffffffff,2,lVar26);
            if (plVar22 != (long *)0x0) goto LAB_108db3704;
            if (0 < (int)*param_5) {
              lVar28 = 0;
              uVar33 = *(undefined8 *)(*(long *)(lVar26 + 0x40) + uVar17 * 8);
              do {
                pcVar20 = *(char **)(*(long *)(param_5 + 2) + lVar28 * 0x20);
                uVar2 = *(uint *)(pcVar20 + 4);
                while ((uVar2 >> 0xc & 1) != 0) {
                  if ((uVar2 >> 0x12 & 1) == 0) {
                    pcVar20 = pcVar20 + 0x10;
                  }
                  else {
                    pcVar20 = *(char **)(*(long *)(pcVar20 + 0x20) + 8);
                  }
                  pcVar20 = *(char **)pcVar20;
                  uVar2 = *(uint *)(pcVar20 + 4);
                }
                if (((*pcVar20 == -0x66) &&
                    (*(short *)(pcVar20 + 0x30) == *(short *)(*(long *)(lVar26 + 8) + uVar17 * 2)))
                   && ((*(uint *)(pcVar20 + 0x2c) == uVar24 &&
                       (puVar34 = param_1, FUN_108da85d0(), puVar34 != (undefined8 *)0x0)))) {
                  uVar8 = *puVar34;
                  FUN_108d5e044(uVar8,uVar33);
                  if ((int)uVar8 == 0) goto LAB_108db37cc;
                }
                lVar28 = lVar28 + 1;
                if ((int)*param_5 <= lVar28) break;
              } while( true );
            }
            goto LAB_108db37ec;
          }
          uVar17 = 0;
LAB_108db37ec:
          if ((uint)uVar17 == (uint)*(ushort *)(lVar26 + 0x56)) goto LAB_108db381c;
        }
      }
    }
    if (piVar30 == (int *)0x0) {
      *(ushort *)((long)plVar7 + 0x32) = *(ushort *)((long)plVar7 + 0x32) | 0x200;
      plVar7[2] = (long)param_5;
    }
  }
LAB_108db3824:
  lVar25 = lStack_a8;
  plVar22 = plStack_c0;
  if ((uVar12 == 1) && ((*(ushort *)((long)plStack_c0 + 0x32) >> 5 & 1) == 0)) {
    lVar26 = plStack_c0[1];
    lVar28 = *(long *)(lVar26 + 0x28);
    if (((*(byte *)(lVar28 + 0x46) >> 4 & 1) != 0) || (*(long *)(lVar26 + 0x68) != 0))
    goto LAB_108db385c;
    iVar6 = *(int *)(lVar26 + 0x48);
    *(undefined4 *)(lStack_a8 + 0x28) = 0;
    *(undefined2 *)(lStack_a8 + 0x2e) = 0;
    plVar10 = plStack_c0 + 0x2b;
    FUN_108dbc2f8(plVar10,iVar6,0xffffffff,0,2,0);
    if (plVar10 == (long *)0x0) {
      lVar28 = *(long *)(lVar28 + 0x10);
      if (lVar28 != 0) {
LAB_108db3a50:
        if (((*(char *)(lVar28 + 0x5a) == '\0') || (*(long *)(lVar28 + 0x48) != 0)) ||
           (3 < *(ushort *)(lVar28 + 0x56))) goto LAB_108db3ac4;
        uVar15 = 0;
        if (*(ushort *)(lVar28 + 0x56) != 0) {
          uVar17 = 0;
          do {
            plVar10 = plVar22 + 0x2b;
            FUN_108dbc2f8(plVar10,iVar6,(long)*(short *)(*(long *)(lVar28 + 8) + uVar17 * 2),0,2,
                          lVar28);
            uVar15 = *(ushort *)(lVar28 + 0x56);
            if (plVar10 == (long *)0x0) break;
            *(long **)(*(long *)(lVar25 + 0x38) + uVar17 * 8) = plVar10;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar15);
          if (uVar17 != uVar15) goto LAB_108db3ac4;
        }
        *(undefined4 *)(lVar25 + 0x28) = 0x1201;
        if ((*(byte *)(lVar28 + 0x5b) >> 5 & 1) != 0) goto LAB_108db412c;
        uVar17 = (ulong)*(ushort *)(lVar28 + 0x58);
        if (uVar17 == 0) {
          uVar29 = 0xffffffffffffffff;
        }
        else {
          uVar29 = 0;
          uVar19 = uVar17 + 1;
          puVar21 = (ushort *)(*(long *)(lVar28 + 8) + uVar17 * 2);
          do {
            puVar21 = puVar21 + -1;
            uVar17 = 1L << ((ulong)*puVar21 & 0x3f);
            if (0x3e < *puVar21) {
              uVar17 = 0;
            }
            uVar29 = uVar17 | uVar29;
            uVar19 = uVar19 - 1;
          } while (1 < uVar19);
          uVar29 = ~uVar29;
        }
        if ((uVar29 & *(ulong *)(lVar26 + 0x60)) == 0) {
LAB_108db412c:
          *(undefined4 *)(lVar25 + 0x28) = 0x1241;
        }
        *(ushort *)(lVar25 + 0x2c) = uVar15;
        *(ushort *)(lVar25 + 0x18) = uVar15;
        uVar14 = 0x27;
        *(long *)(lVar25 + 0x20) = lVar28;
        goto LAB_108db3a3c;
      }
    }
    else {
      *(undefined4 *)(lVar25 + 0x28) = 0x1101;
      **(undefined8 **)(lVar25 + 0x38) = plVar10;
      *(undefined2 *)(lVar25 + 0x2c) = 1;
      *(undefined2 *)(lVar25 + 0x18) = 1;
      uVar14 = 0x21;
LAB_108db3a3c:
      *(undefined2 *)(lVar25 + 0x14) = uVar14;
    }
LAB_108db3acc:
    if (*(int *)(lVar25 + 0x28) == 0) goto LAB_108db385c;
    *(undefined2 *)(lVar25 + 0x16) = 1;
    plVar22[0x71] = lVar25;
    if (0 < (int)*(uint *)((long)plVar22 + 0x54)) {
      uVar17 = 0;
      do {
        if (*(int *)((long)plVar22 + uVar17 * 4 + 0x58) == iVar6) {
          lVar26 = 1L << (uVar17 & 0x3f);
          goto LAB_108db3b24;
        }
        uVar17 = uVar17 + 1;
      } while (*(uint *)((long)plVar22 + 0x54) != uVar17);
    }
    lVar26 = 0;
LAB_108db3b24:
    *(long *)(lVar25 + 8) = lVar26;
    *(int *)((long)plVar22 + 0x344) = iVar6;
    *(undefined2 *)(plVar22 + 6) = 1;
    if ((undefined4 *)plVar22[2] != (undefined4 *)0x0) {
      *(char *)((long)plVar22 + 0x34) = (char)*(undefined4 *)plVar22[2];
    }
    if ((*(ushort *)((long)plVar22 + 0x32) >> 10 & 1) != 0) {
      *(undefined1 *)(plVar22 + 7) = 1;
    }
LAB_108db3b50:
    if (plVar7[2] == 0) goto LAB_108db3b58;
  }
  else {
LAB_108db385c:
    lVar26 = lStack_a8;
    plVar22 = plStack_c0;
    lVar25 = plStack_c0[1];
    lVar28 = *(long *)*plStack_c0;
    bVar23 = *(byte *)((long)plStack_c0 + 0x39);
    *(long *)(lStack_a8 + 0x38) = lStack_a8 + 0x48;
    *(undefined2 *)(lStack_a8 + 0x2c) = 0;
    *(undefined2 *)(lStack_a8 + 0x30) = 3;
    *(undefined4 *)(lStack_a8 + 0x28) = 0;
    if (bVar23 != 0) {
      uVar17 = 0;
      uVar29 = 0;
      uVar24 = 0;
      lVar25 = lVar25 + 8;
      bVar13 = 0;
      do {
        *(char *)(lVar26 + 0x10) = (char)uVar24;
        uVar2 = *(uint *)((long)plVar22 + 0x54);
        if (0 < (int)uVar2) {
          uVar19 = 0;
          do {
            if (*(int *)((long)plVar22 + uVar19 * 4 + 0x58) == *(int *)(lVar25 + 0x40)) {
              lVar18 = 1L << (uVar19 & 0x3f);
              goto LAB_108db38e8;
            }
            uVar19 = uVar19 + 1;
          } while (uVar2 != uVar19);
        }
        lVar18 = 0;
LAB_108db38e8:
        *(long *)(lVar26 + 8) = lVar18;
        bVar3 = *(byte *)(lVar25 + 0x3c);
        if (((bVar3 | bVar13) & 10) != 0) {
          uVar17 = uVar29;
        }
        if ((*(byte *)(*(long *)(lVar25 + 0x20) + 0x46) >> 4 & 1) == 0) {
          pplVar9 = &plStack_c0;
          FUN_108dbcd78(pplVar9,uVar17);
          iVar6 = (int)pplVar9;
        }
        else {
          pplVar9 = &plStack_c0;
          FUN_108dbc698(pplVar9,uVar17);
          iVar6 = (int)pplVar9;
        }
        if (iVar6 != 0) {
LAB_108db39c8:
          FUN_108dbd640(lVar28,lVar26);
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
          goto LAB_108db35ec;
        }
        pplVar9 = &plStack_c0;
        func_0x000108dbd2e4(pplVar9,uVar17);
        if ((int)pplVar9 != 0) goto LAB_108db39c8;
        if (*(char *)(lVar28 + 0x51) != '\0') break;
        uVar29 = *(ulong *)(lVar26 + 8) | uVar29;
        uVar24 = uVar24 + 1;
        lVar25 = lVar25 + 0x70;
        bVar13 = bVar3;
      } while (uVar24 < bVar23);
    }
    FUN_108dbd640(lVar28,lVar26);
    FUN_108db7c60(plVar7,0);
    if (*(char *)((long)plVar27 + 0x51) != '\0') goto LAB_108db35ec;
    if (plVar7[2] != 0) {
      FUN_108db7c60(plVar7,(int)(short)((short)plVar7[6] + 1));
      if (*(char *)((long)plVar27 + 0x51) != '\0') goto LAB_108db35ec;
      goto LAB_108db3b50;
    }
LAB_108db3b58:
    if ((*(byte *)((long)plVar27 + 0x2e) >> 1 & 1) != 0) {
      plVar7[5] = -1;
    }
  }
  if ((*(int *)((long)param_1 + 0x4c) == 0) && (*(char *)((long)plVar27 + 0x51) == '\0')) {
    if ((param_5 != (uint *)0x0) &&
       ((bVar23 = *(byte *)((long)plVar7 + 0x39), 1 < bVar23 &&
        ((*(ushort *)((long)plVar27 + 0x4c) >> 10 & 1) == 0)))) {
      piVar30 = piVar35;
      FUN_108db834c(piVar35,param_5);
      if (piStack_b0 != (int *)0x0) {
        FUN_108db834c();
        piVar30 = (int *)((ulong)piVar35 | (ulong)piVar30);
      }
      do {
        lVar25 = plVar7[(ulong)(bVar23 - 1) * 0xb + 0x71];
        if (((*(byte *)(plVar7[1] + 0x44 + (ulong)*(byte *)(lVar25 + 0x10) * 0x70) >> 3 & 1) == 0)
           || ((((param_6 >> 10 & 1) == 0 && ((*(byte *)(lVar25 + 0x29) >> 4 & 1) == 0)) ||
               ((*(ulong *)(lVar25 + 8) & (ulong)piVar30) != 0)))) break;
        if (0 < *(int *)((long)plStack_b8 + 0x14)) {
          plVar22 = (long *)plStack_b8[4];
          plVar10 = plVar22 + (long)*(int *)((long)plStack_b8 + 0x14) * 7;
          do {
            if (((plVar22[6] & *(ulong *)(lVar25 + 8)) != 0) && ((*(byte *)(*plVar22 + 4) & 1) == 0)
               ) goto LAB_108db3c84;
            plVar22 = plVar22 + 7;
          } while (plVar22 < plVar10);
        }
        bVar23 = bVar23 - 1;
        *(byte *)((long)plVar7 + 0x39) = bVar23;
        uVar12 = uVar12 - 1;
      } while (1 < bVar23);
    }
LAB_108db3c84:
    *(int *)(*plVar7 + 0x1d8) = *(int *)(*plVar7 + 0x1d8) + (int)(short)plVar7[6];
    if ((param_6 >> 2 & 1) != 0) {
      uVar24 = *(uint *)(plVar7[0x71] + 0x28);
      if (((uVar24 >> 0xc & 1) != 0) &&
         (*(undefined1 *)((long)plVar7 + 0x36) = 1,
         (*(byte *)(*(long *)(param_2 + 10) + 0x46) >> 5 & 1) == 0)) {
        *(uint *)(plVar7[0x71] + 0x28) = uVar24 & 0xffffffbf;
      }
    }
    if ((int)uVar12 < 1) {
      *(undefined4 *)((long)plVar7 + 0x3c) = *(undefined4 *)(lVar32 + 0x3c);
      return plVar7;
    }
    uVar24 = 0;
    plVar22 = plVar7 + 0x68;
    uVar16 = 0x35;
    if (param_6 < 0x1000) {
      uVar16 = 0x36;
    }
    do {
      uVar17 = (ulong)*(byte *)((long)plVar22 + 0x2c);
      puVar34 = *(undefined8 **)(param_2 + uVar17 * 0x1c + 10);
      if (puVar34[0xd] == 0) {
        uVar29 = 0xfff0bdc0;
      }
      else {
        uVar2 = *(uint *)(plVar27 + 5);
        if ((int)uVar2 < 1) {
          uVar29 = 0;
        }
        else {
          uVar19 = 0;
          plVar10 = (long *)(plVar27[4] + 0x18);
          do {
            uVar29 = uVar19;
            if (*plVar10 == puVar34[0xd]) break;
            uVar19 = uVar19 + 1;
            plVar10 = plVar10 + 4;
            uVar29 = (ulong)uVar2;
          } while (uVar2 != uVar19);
        }
      }
      lVar25 = plVar22[9];
      if (((*(byte *)((long)puVar34 + 0x46) >> 1 & 1) == 0) && (puVar34[3] == 0)) {
        if ((*(uint *)(lVar25 + 0x28) >> 10 & 1) == 0) {
          if ((*(byte *)((long)puVar34 + 0x46) >> 4 & 1) == 0) {
            if ((*(uint *)(lVar25 + 0x28) & 0x40) == 0 && (param_6 & 0x10) == 0) {
              uVar2 = param_2[uVar17 * 0x1c + 0x12];
              if (*(char *)((long)plVar7 + 0x36) == '\0') {
                uVar33 = 0x36;
              }
              else {
                *(uint *)((long)plVar7 + 0x4c) = uVar2;
                uVar33 = 0x37;
              }
              func_0x000108da66a0(param_1,uVar2,uVar29,puVar34,uVar33);
              if (((*(char *)((long)plVar7 + 0x36) == '\0') &&
                  (*(short *)((long)puVar34 + 0x3e) < 0x40)) &&
                 ((*(byte *)((long)puVar34 + 0x46) >> 5 & 1) == 0)) {
                lVar26 = 0;
                if (*(long *)(param_2 + uVar17 * 0x1c + 0x18) != 0) {
                  lVar26 = 0x40 - LZCOUNT(*(long *)(param_2 + uVar17 * 0x1c + 0x18));
                }
                FUN_108d6aaec(lVar32,*(int *)(lVar32 + 0x3c) + -1,lVar26,0xfffffff2);
              }
            }
            else {
              func_0x000108da6790(param_1,uVar29,*(undefined4 *)(puVar34 + 7),0,*puVar34);
            }
          }
        }
        else {
          for (puVar31 = (undefined8 *)puVar34[0xb];
              (puVar31 != (undefined8 *)0x0 && ((long *)*puVar31 != plVar27));
              puVar31 = (undefined8 *)puVar31[5]) {
          }
          lVar26 = lVar32;
          FUN_108d71098(lVar32,0x95,param_2[uVar17 * 0x1c + 0x12],0,0);
          FUN_108d6aaec(lVar32,lVar26,puVar31,0xfffffff6);
        }
      }
      if ((*(byte *)(lVar25 + 0x29) >> 1 & 1) != 0) {
        lVar26 = *(long *)(lVar25 + 0x20);
        if ((((*(byte *)((long)puVar34 + 0x46) >> 5 & 1) == 0) || ((param_6 >> 6 & 1) == 0)) ||
           ((*(byte *)(lVar26 + 0x5b) & 3) != 2)) {
          iVar6 = param_7;
          if (*(char *)((long)plVar7 + 0x36) == '\0') {
            uVar11 = uVar16;
            if ((param_6 & 0x40) == 0 || param_7 == 0) {
              iVar6 = *(int *)(param_1 + 10);
              *(int *)(param_1 + 10) = iVar6 + 1;
              uVar11 = 0x36;
            }
          }
          else {
            lVar28 = *(long *)(*(long *)(param_2 + uVar17 * 0x1c + 10) + 0x10);
            if (lVar28 != 0 && lVar28 != lVar26) {
              do {
                iVar6 = iVar6 + 1;
                lVar28 = *(long *)(lVar28 + 0x28);
              } while (lVar28 != 0 && lVar28 != lVar26);
            }
            *(int *)(plVar7 + 10) = iVar6;
            uVar11 = 0x37;
          }
          *(int *)(plVar22 + 1) = iVar6;
          FUN_108d71098(lVar32,uVar11,iVar6,*(undefined4 *)(lVar26 + 0x50),uVar29);
          uVar33 = param_1[2];
          puVar34 = param_1;
          FUN_108da68a8(param_1,lVar26);
          FUN_108d6aaec(uVar33,0xffffffff,puVar34,0xfffffffa);
          if ((((*(uint *)(lVar25 + 0x28) & 0xf) != 0 && (*(uint *)(lVar25 + 0x28) & 0x8002) == 0)
              && ((*(ushort *)((long)plVar7 + 0x32) & 1) == 0)) && (*(long *)(lVar32 + 8) != 0)) {
            *(undefined1 *)(*(long *)(lVar32 + 8) + (long)*(int *)(lVar32 + 0x3c) * 0x18 + -0x15) =
                 2;
          }
        }
        else {
          *(undefined4 *)(plVar22 + 1) = *(undefined4 *)((long)plVar22 + 4);
        }
      }
      if (-1 < (int)uVar29) {
        func_0x000108dab6e4(param_1,uVar29);
      }
      uVar24 = uVar24 + 1;
      plVar22 = plVar22 + 0xb;
    } while (uVar24 != uVar12);
    cVar4 = *(char *)((long)plVar27 + 0x51);
    *(undefined4 *)((long)plVar7 + 0x3c) = *(undefined4 *)(lVar32 + 0x3c);
    if (cVar4 == '\0') {
      lVar25 = 0;
      uVar17 = 0;
      plVar22 = (long *)0xffffffffffffffff;
      while (((*(byte *)(*(long *)((long)plVar7 + lVar25 + 0x388) + 0x29) >> 6 & 1) == 0 ||
             (FUN_108db83ac(param_1,plVar1,
                            param_2 + (ulong)*(byte *)((long)plVar7 + lVar25 + 0x36c) * 0x1c + 2,
                            plVar22,(long)plVar7 + lVar25 + 0x340),
             *(char *)((long)plVar27 + 0x51) == '\0'))) {
        func_0x000108db8a5c(param_1,param_2,(long)plVar7 + lVar25 + 0x340,uVar17,
                            *(undefined1 *)((long)plVar7 + lVar25 + 0x36c),param_6);
        *(undefined4 *)((long)plVar7 + lVar25 + 0x360) = *(undefined4 *)(lVar32 + 0x3c);
        plVar10 = plVar7;
        func_0x000108db8fc4(plVar7,uVar17,plVar22);
        *(undefined4 *)(plVar7 + 8) = *(undefined4 *)((long)plVar7 + lVar25 + 0x358);
        uVar17 = uVar17 + 1;
        lVar25 = lVar25 + 0x58;
        plVar22 = plVar10;
        if (uVar12 == uVar17) {
          return plVar7;
        }
      }
    }
  }
LAB_108db35ec:
  *(int *)(param_1 + 0x3b) = (int)plVar7[9];
  FUN_108dbaa34(plVar27,plVar7);
  return (long *)0x0;
LAB_108db37cc:
  if (*(char *)(*(long *)(lVar25 + 8) + (long)(int)sVar5 * 0x30 + 0x28) == '\0') goto LAB_108db37ec;
LAB_108db3704:
  uVar17 = uVar17 + 1;
  if (*(ushort *)(lVar26 + 0x56) <= uVar17) goto LAB_108db37ec;
  goto LAB_108db36dc;
LAB_108db381c:
  *(undefined1 *)(plVar7 + 7) = 1;
  goto LAB_108db3824;
LAB_108db3ac4:
  lVar28 = *(long *)(lVar28 + 0x28);
  if (lVar28 == 0) goto LAB_108db3acc;
  goto LAB_108db3a50;
}



/* Entry: 108db523c; end: 108db52d3;  */

void FUN_108db523c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((param_2 != (int *)0x0) && (0 < *param_2)) {
    iVar1 = 0;
    puVar2 = *(undefined8 **)(param_2 + 2);
    do {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      pcStack_80 = FUN_108dbf720;
      pcStack_78 = FUN_108dbf9d4;
      uStack_58 = param_1;
      FUN_108daa320(&pcStack_80,*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < *param_2);
  }
  return;
}



/* Entry: 108db52d4; end: 108db5353;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */
/* WARNING: Removing unreachable block (ram,0x000108d80cfc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d18) */
/* WARNING: Removing unreachable block (ram,0x000108d80c4c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d80cc4) */
/* WARNING: Removing unreachable block (ram,0x000108d80ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d6c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d78) */
/* WARNING: Removing unreachable block (ram,0x000108d80d84) */
/* WARNING: Removing unreachable block (ram,0x000108d80d90) */
/* WARNING: Removing unreachable block (ram,0x000108d80c54) */
/* WARNING: Removing unreachable block (ram,0x000108d80c60) */
/* WARNING: Removing unreachable block (ram,0x000108d80c68) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc4) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc0) */
/* WARNING: Removing unreachable block (ram,0x000108d6abd0) */
/* WARNING: Removing unreachable block (ram,0x000108d6aba0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c84) */
/* WARNING: Removing unreachable block (ram,0x000108d80c8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c9c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d2c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c74) */
/* WARNING: Removing unreachable block (ram,0x000108d80c7c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d6d618) */
/* WARNING: Removing unreachable block (ram,0x000108d6d660) */
/* WARNING: Removing unreachable block (ram,0x000108d6d61c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d63c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d644) */
/* WARNING: Removing unreachable block (ram,0x000108d6d64c) */
/* WARNING: Removing unreachable block (ram,0x000108d80ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cec) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab68) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab70) */

void FUN_108db52d4(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar7;
  long lVar8;
  long *plVar6;
  
  if (*(char *)((long)param_1 + 0x1f2) != '\x02') {
    return;
  }
  plVar7 = (long *)param_1[2];
  puVar5 = (undefined8 *)*param_1;
  FUN_108d6a8e0(puVar5,&UNK_10f51a0c1);
  plVar6 = plVar7;
  FUN_108d71098(plVar7,0x9d,(int)param_1[0x40],0,0);
  iVar2 = (int)plVar6;
  lVar4 = *plVar7;
  if ((plVar7[1] != 0) && (*(char *)(lVar4 + 0x51) == '\0')) {
    if (iVar2 < 0) {
      iVar2 = *(int *)((long)plVar7 + 0x3c) + -1;
    }
    lVar8 = plVar7[1] + (long)iVar2 * 0x18;
    FUN_108d80c2c(lVar4,(long)*(char *)(lVar8 + 1),*(undefined8 *)(lVar8 + 0x10));
    *(undefined8 *)(lVar8 + 0x10) = 0;
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined1 *)(lVar8 + 1) = 0;
    }
    else {
      *(undefined8 **)(lVar8 + 0x10) = puVar5;
      *(undefined1 *)(lVar8 + 1) = 0xff;
    }
    return;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x328) != 0) {
        if ((puVar5 < *(undefined8 **)(lVar4 + 0x170)) ||
           (*(undefined8 **)(lVar4 + 0x178) <= puVar5)) {
          (*pcRam0000000113297950)();
          uVar1 = (uint)puVar5;
        }
        else {
          uVar1 = (uint)*(ushort *)(lVar4 + 0x150);
        }
        **(int **)(lVar4 + 0x328) = **(int **)(lVar4 + 0x328) + uVar1;
        return;
      }
      if ((*(undefined8 **)(lVar4 + 0x170) <= puVar5) && (puVar5 < *(undefined8 **)(lVar4 + 0x178)))
      {
        *puVar5 = *(undefined8 *)(lVar4 + 0x168);
        *(undefined8 **)(lVar4 + 0x168) = puVar5;
        *(int *)(lVar4 + 0x154) = *(int *)(lVar4 + 0x154) + -1;
        return;
      }
    }
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (puRam0000000113829af0 != (undefined8 *)0x0) {
        (*pcRam0000000113297998)();
      }
      puVar3 = puVar5;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar3;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(puVar5);
      puVar5 = puRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (puRam0000000113829af0 == (undefined8 *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar5);
    return;
  }
  return;
}



/* Entry: 108db5354; end: 108db539f;  */

void FUN_108db5354(long param_1)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(param_1 + 0x8e);
  iVar4 = 10;
  do {
    iVar1 = *(int *)(pcVar3 + 6);
    if (iVar1 != 0) {
      if (*pcVar3 != '\0') {
        bVar2 = *(byte *)(param_1 + 0x1f);
        if (bVar2 < 8) {
          *(byte *)(param_1 + 0x1f) = bVar2 + 1;
          *(int *)(param_1 + 0x24 + (ulong)bVar2 * 4) = iVar1;
        }
        *pcVar3 = '\0';
      }
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
    }
    pcVar3 = pcVar3 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* Entry: 108db53a0; end: 108db53ef;  */

void FUN_108db53a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  
  FUN_108d71098(*(undefined8 *)(param_1 + 0x10),0x20,param_2,param_3,param_4);
  pcVar3 = (char *)(param_1 + 0x8e);
  iVar4 = 10;
  do {
    iVar1 = *(int *)(pcVar3 + 6);
    if ((int)param_2 <= iVar1 && iVar1 < (int)param_4 + (int)param_2) {
      if (*pcVar3 != '\0') {
        bVar2 = *(byte *)(param_1 + 0x1f);
        if (bVar2 < 8) {
          *(byte *)(param_1 + 0x1f) = bVar2 + 1;
          *(int *)(param_1 + 0x24 + (ulong)bVar2 * 4) = iVar1;
        }
        *pcVar3 = '\0';
      }
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
    }
    pcVar3 = pcVar3 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* Entry: 108db53f0; end: 108db56f3;  */

void FUN_108db53f0(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  int iStack_64;
  
  lVar6 = param_1[2];
  *param_2 = 1;
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar15 = 0;
    iStack_64 = 0;
    plVar8 = *(long **)(param_2 + 0x30);
    do {
      piVar12 = *(int **)(*plVar8 + 0x20);
      if (piVar12 == (int *)0x0) {
        iVar9 = 0;
        iVar4 = 0;
      }
      else {
        iVar9 = *piVar12;
        if (*(int *)((long)param_1 + 0x44) < iVar9) {
          iVar4 = *(int *)((long)param_1 + 0x54) + 1;
          *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + iVar9;
        }
        else {
          iVar4 = (int)param_1[9];
          *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - iVar9;
          *(int *)(param_1 + 9) = iVar4 + iVar9;
        }
        FUN_108da8740(param_1,piVar12,iVar4,1);
      }
      if (*(int *)((long)plVar8 + 0x14) < 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar6 + 0x30);
        FUN_108da84a4();
        FUN_108dbf250(param_1,*(undefined4 *)((long)plVar8 + 0x14),uVar3,1,iVar4);
      }
      lVar14 = plVar8[1];
      if ((*(ushort *)(lVar14 + 2) >> 5 & 1) != 0) {
        if (iVar9 < 1) {
LAB_108db5514:
          plVar13 = *(long **)(*param_1 + 0x10);
        }
        else {
          puVar10 = *(undefined8 **)(piVar12 + 2);
          iVar7 = 1;
          do {
            plVar13 = param_1;
            FUN_108da85d0(param_1,*puVar10);
            bVar2 = iVar7 < iVar9;
            puVar10 = puVar10 + 4;
            iVar7 = iVar7 + 1;
          } while (plVar13 == (long *)0x0 && bVar2);
          if (plVar13 == (long *)0x0) goto LAB_108db5514;
        }
        if (iStack_64 == 0) {
          if (*(int *)(param_2 + 0x2c) == 0) {
            iStack_64 = 0;
          }
          else {
            iStack_64 = *(int *)((long)param_1 + 0x54) + 1;
            *(int *)((long)param_1 + 0x54) = iStack_64;
          }
        }
        lVar14 = lVar6;
        FUN_108d71098(lVar6,0x24,iStack_64,0,0);
        FUN_108d6aaec(lVar6,lVar14,plVar13,0xfffffffc);
        lVar14 = plVar8[1];
      }
      lVar5 = lVar6;
      FUN_108d71098(lVar6,10,0,iVar4,(int)plVar8[2]);
      FUN_108d6aaec(lVar6,lVar5,lVar14,0xfffffffb);
      if (*(long *)(lVar6 + 8) != 0) {
        *(char *)(*(long *)(lVar6 + 8) + (long)*(int *)(lVar6 + 0x3c) * 0x18 + -0x15) = (char)iVar9;
      }
      FUN_108da8510(param_1,iVar4,iVar9);
      FUN_108da8510(param_1,iVar4,iVar9);
      if (*(int *)((long)param_1 + 0x44) < iVar9) {
        *(int *)((long)param_1 + 0x44) = iVar9;
        *(int *)(param_1 + 9) = iVar4;
      }
      uVar11 = (uint)uVar3;
      if (uVar11 != 0) {
        lVar14 = *(long *)(lVar6 + 0x30);
        if ((int)uVar11 < 0) {
          lVar5 = *(long *)(lVar14 + 0x80);
          iVar4 = *(int *)(lVar6 + 0x3c);
          if (lVar5 != 0) {
            *(int *)(lVar5 + (ulong)~uVar11 * 4) = iVar4;
          }
        }
        else {
          iVar4 = *(int *)(lVar6 + 0x3c);
        }
        *(int *)(lVar14 + 100) = iVar4 + -1;
        FUN_108db5354(param_1);
      }
      iVar15 = iVar15 + 1;
      plVar8 = plVar8 + 3;
    } while (iVar15 < *(int *)(param_2 + 0x38));
    if (iStack_64 != 0) {
      lVar14 = lVar6;
      FUN_108d71098(lVar6,0x2d,iStack_64,0,0);
      uVar11 = (uint)lVar14;
      goto LAB_108db5658;
    }
  }
  uVar11 = 0;
LAB_108db5658:
  FUN_108db5354(param_1);
  if (0 < *(int *)(param_2 + 0x2c)) {
    iVar15 = 0;
    puVar10 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    do {
      FUN_108da6628(param_1,*puVar10,*(undefined4 *)((long)puVar10 + -4));
      iVar15 = iVar15 + 1;
      puVar10 = puVar10 + 4;
    } while (iVar15 < *(int *)(param_2 + 0x2c));
  }
  *param_2 = 0;
  FUN_108db5354(param_1);
  if (uVar11 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x3c);
    if (uVar11 < uVar1) {
      *(uint *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x18 + 8) = uVar1;
    }
    *(uint *)(*(long *)(lVar6 + 0x30) + 100) = uVar1 - 1;
  }
  return;
}



/* Entry: 108db56f4; end: 108db578f;  */

void FUN_108db56f4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar4 = 0;
    plVar5 = *(long **)(param_2 + 0x30);
    do {
      if (*(undefined4 **)(*plVar5 + 0x20) == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = **(undefined4 **)(*plVar5 + 0x20);
      }
      lVar3 = plVar5[1];
      uVar1 = param_1;
      FUN_108d71098(param_1,0x8e,(int)plVar5[2],uVar2,0);
      FUN_108d6aaec(param_1,uVar1,lVar3,0xfffffffb);
      iVar4 = iVar4 + 1;
      plVar5 = plVar5 + 3;
    } while (iVar4 < *(int *)(param_2 + 0x38));
  }
  return;
}



/* Entry: 108db5790; end: 108db589b;  */

void FUN_108db5790(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x28) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    FUN_108d71098(uVar4,0x1c,0,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    if (0 < *(int *)(param_2 + 0x38)) {
      iVar5 = 0;
      piVar6 = (int *)(*(long *)(param_2 + 0x30) + 0x14);
      do {
        if (-1 < *piVar6) {
          piVar3 = *(int **)(*(long *)(piVar6 + -5) + 0x20);
          if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
            func_0x000108d6a85c(param_1,&UNK_10f51a0d8);
            *piVar6 = -1;
          }
          else {
            lVar1 = param_1;
            FUN_108db3058(param_1,piVar3,0,0);
            uVar2 = uVar4;
            FUN_108d71098(uVar4,0x39,*piVar6,0,0);
            FUN_108d6aaec(uVar4,uVar2,lVar1,0xfffffffa);
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 6;
      } while (iVar5 < *(int *)(param_2 + 0x38));
    }
  }
  return;
}



/* Entry: 108db589c; end: 108db5913;  */

long FUN_108db589c(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  
  if ((((param_1[6] == 0) && (*(int *)*param_1 == 1)) && (piVar1 = (int *)param_1[5], *piVar1 == 1))
     && (((*(long *)(piVar1 + 0xc) == 0 &&
          (lVar2 = *(long *)(piVar1 + 10), (*(byte *)(lVar2 + 0x46) >> 4 & 1) == 0)) &&
         ((pcVar3 = (char *)**(undefined8 **)((int *)*param_1 + 2), *pcVar3 == -0x65 && param_3 != 0
          && ((*(ushort *)(*(long *)(param_2 + 8) + 2) >> 8 & 1) != 0)))))) {
    if ((pcVar3[4] & 0x10U) != 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}



/* Entry: 108db5914; end: 108db5a93;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */
/* WARNING: Removing unreachable block (ram,0x000108d80cfc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d18) */
/* WARNING: Removing unreachable block (ram,0x000108d80c4c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d80cc4) */
/* WARNING: Removing unreachable block (ram,0x000108d80ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d6c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d78) */
/* WARNING: Removing unreachable block (ram,0x000108d80d84) */
/* WARNING: Removing unreachable block (ram,0x000108d80d90) */
/* WARNING: Removing unreachable block (ram,0x000108d80c54) */
/* WARNING: Removing unreachable block (ram,0x000108d80c60) */
/* WARNING: Removing unreachable block (ram,0x000108d80c68) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc4) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc0) */
/* WARNING: Removing unreachable block (ram,0x000108d6abd0) */
/* WARNING: Removing unreachable block (ram,0x000108d6aba0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c84) */
/* WARNING: Removing unreachable block (ram,0x000108d80c8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c9c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d2c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c74) */
/* WARNING: Removing unreachable block (ram,0x000108d80c7c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d6d618) */
/* WARNING: Removing unreachable block (ram,0x000108d6d660) */
/* WARNING: Removing unreachable block (ram,0x000108d6d61c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d63c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d644) */
/* WARNING: Removing unreachable block (ram,0x000108d6d64c) */
/* WARNING: Removing unreachable block (ram,0x000108d80ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cec) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab68) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab70) */

void FUN_108db5914(ulong *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar7;
  long lVar8;
  long *plVar6;
  
  if (*(char *)((long)param_1 + 0x1f2) != '\x02') {
    return;
  }
  if (param_3 == 0) {
    puVar5 = (undefined8 *)*param_1;
  }
  else if ((*(byte *)(param_2 + 0x46) >> 5 & 1) == 0) {
    puVar5 = (undefined8 *)*param_1;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
  }
  FUN_108d6a8e0(puVar5,&UNK_10f51a10b);
  plVar7 = (long *)param_1[2];
  plVar6 = plVar7;
  FUN_108d71098(plVar7,0x9d,(int)param_1[0x40],0,0);
  iVar2 = (int)plVar6;
  lVar4 = *plVar7;
  if ((plVar7[1] != 0) && (*(char *)(lVar4 + 0x51) == '\0')) {
    if (iVar2 < 0) {
      iVar2 = *(int *)((long)plVar7 + 0x3c) + -1;
    }
    lVar8 = plVar7[1] + (long)iVar2 * 0x18;
    FUN_108d80c2c(lVar4,(long)*(char *)(lVar8 + 1),*(undefined8 *)(lVar8 + 0x10));
    *(undefined8 *)(lVar8 + 0x10) = 0;
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined1 *)(lVar8 + 1) = 0;
    }
    else {
      *(undefined8 **)(lVar8 + 0x10) = puVar5;
      *(undefined1 *)(lVar8 + 1) = 0xff;
    }
    return;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x328) != 0) {
        if ((puVar5 < *(undefined8 **)(lVar4 + 0x170)) ||
           (*(undefined8 **)(lVar4 + 0x178) <= puVar5)) {
          (*pcRam0000000113297950)();
          uVar1 = (uint)puVar5;
        }
        else {
          uVar1 = (uint)*(ushort *)(lVar4 + 0x150);
        }
        **(int **)(lVar4 + 0x328) = **(int **)(lVar4 + 0x328) + uVar1;
        return;
      }
      if ((*(undefined8 **)(lVar4 + 0x170) <= puVar5) && (puVar5 < *(undefined8 **)(lVar4 + 0x178)))
      {
        *puVar5 = *(undefined8 *)(lVar4 + 0x168);
        *(undefined8 **)(lVar4 + 0x168) = puVar5;
        *(int *)(lVar4 + 0x154) = *(int *)(lVar4 + 0x154) + -1;
        return;
      }
    }
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (puRam0000000113829af0 != (undefined8 *)0x0) {
        (*pcRam0000000113297998)();
      }
      puVar3 = puVar5;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar3;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(puVar5);
      puVar5 = puRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (puRam0000000113829af0 == (undefined8 *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar5);
    return;
  }
  return;
}



/* Entry: 108db5a94; end: 108db62c3;  */

void FUN_108db5a94(long param_1,long param_2,undefined8 *param_3,int param_4,byte *param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iStack_74;
  
  lVar16 = *(long *)(param_1 + 0x10);
  uVar5 = *(ulong *)(lVar16 + 0x30);
  FUN_108da84a4();
  uVar6 = *(ulong *)(lVar16 + 0x30);
  FUN_108da84a4();
  piVar17 = (int *)*param_3;
  bVar3 = *param_5;
  uVar9 = *(undefined4 *)(param_5 + 4);
  if (*(int *)((long)param_3 + 0x14) != 0) {
    FUN_108d71098(lVar16,0x11,*(undefined4 *)(param_3 + 2),*(int *)((long)param_3 + 0x14),0);
    FUN_108d71098(lVar16,0x10,0,uVar5,0);
    lVar10 = *(long *)(lVar16 + 0x30);
    if (((int)*(uint *)((long)param_3 + 0x14) < 0) &&
       (lVar15 = *(long *)(lVar10 + 0x80), lVar15 != 0)) {
      *(undefined4 *)(lVar15 + (ulong)~*(uint *)((long)param_3 + 0x14) * 4) =
           *(undefined4 *)(lVar16 + 0x3c);
    }
    *(int *)(lVar10 + 100) = *(int *)(lVar16 + 0x3c) + -1;
  }
  iVar12 = *(int *)((long)param_3 + 0xc);
  if ((bVar3 | 4) == 0xd) {
    iVar19 = 0;
    iVar7 = *(int *)(param_5 + 8);
    iVar14 = param_4;
  }
  else {
    cVar4 = *(char *)(param_1 + 0x1f);
    if (cVar4 == '\0') {
      iVar7 = *(int *)(param_1 + 0x54) + 1;
      iVar19 = iVar7;
LAB_108db5bc8:
      iVar7 = iVar7 + 1;
      *(int *)(param_1 + 0x54) = iVar7;
    }
    else {
      *(byte *)(param_1 + 0x1f) = cVar4 - 1U;
      iVar19 = *(int *)(param_1 + 0x24 + (ulong)(byte)(cVar4 - 1U) * 4);
      if (cVar4 == '\x01') {
        iVar7 = *(int *)(param_1 + 0x54);
        goto LAB_108db5bc8;
      }
      *(byte *)(param_1 + 0x1f) = cVar4 - 2U;
      iVar7 = *(int *)(param_1 + 0x24 + (ulong)(byte)(cVar4 - 2U) * 4);
    }
    iVar14 = 1;
  }
  iVar21 = *piVar17;
  iVar1 = *(int *)(param_3 + 1);
  if ((*(byte *)((long)param_3 + 0x1c) & 1) == 0) {
    lVar10 = lVar16;
    FUN_108d71098(lVar16,0x6b,iVar12,uVar5,0);
    iStack_74 = (int)lVar10;
    FUN_108db7620(lVar16,*(undefined4 *)(param_2 + 0x10),uVar6);
    iVar8 = 1;
    iVar18 = iVar12;
  }
  else {
    iVar18 = *(int *)(param_1 + 0x50);
    iVar8 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x50) = iVar18 + 1;
    *(int *)(param_1 + 0x54) = iVar8;
    if (*(int *)((long)param_3 + 0x14) == 0) {
      uVar20 = 0;
    }
    else {
      lVar10 = param_1;
      FUN_108d70f98();
      uVar20 = (uint)lVar10;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      FUN_108d71098();
    }
    FUN_108d71098(lVar16,0x3c,iVar18,iVar8,iVar14 + (iVar21 - iVar1) + 1);
    if (uVar20 != 0) {
      uVar2 = *(uint *)(lVar16 + 0x3c);
      if (uVar20 < uVar2) {
        *(uint *)(*(long *)(lVar16 + 8) + (ulong)uVar20 * 0x18 + 8) = uVar2;
      }
      *(uint *)(*(long *)(lVar16 + 0x30) + 100) = uVar2 - 1;
    }
    lVar10 = lVar16;
    FUN_108d71098(lVar16,0x6a,iVar12,uVar5 & 0xffffffff,0);
    iStack_74 = (int)lVar10;
    FUN_108db7620(lVar16,*(undefined4 *)(param_2 + 0x10),uVar6 & 0xffffffff);
    FUN_108d71098(lVar16,100,iVar12,iVar8,iVar18);
    iVar8 = 0;
  }
  if (0 < iVar14) {
    iVar8 = iVar8 + (iVar21 - iVar1);
    iVar21 = iVar7;
    do {
      FUN_108d71098(lVar16,0x2f,iVar18,iVar8,iVar21);
      iVar21 = iVar21 + 1;
      iVar8 = iVar8 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if (bVar3 < 0xb) {
    if (bVar3 == 9) {
      FUN_108d71098(lVar16,0x23,*(undefined4 *)(param_5 + 8),param_4,0);
      FUN_108da8510(param_1,*(undefined4 *)(param_5 + 8),param_4);
    }
    else {
      if (bVar3 != 10) goto LAB_108db5ee4;
      FUN_108d71098(*(undefined8 *)(param_1 + 0x10),0x20,iVar7,uVar9,1);
      FUN_108da8510(param_1,iVar7,1);
    }
  }
  else if (bVar3 == 0xb) {
    lVar10 = lVar16;
    FUN_108d71098(lVar16,0x31,iVar7,1,iVar19);
    FUN_108d6aaec(lVar16,lVar10,param_5 + 1,1);
    FUN_108da8510(param_1,iVar7,1);
    FUN_108d71098(lVar16,0x6e,uVar9,iVar19,0);
  }
  else if ((bVar3 == 0xe) || (bVar3 == 0xc)) {
    FUN_108d71098(lVar16,0x4a,uVar9,iVar19,0);
    FUN_108d71098(lVar16,0x4b,uVar9,iVar7,iVar19);
    if (*(long *)(lVar16 + 8) != 0) {
      *(undefined1 *)(*(long *)(lVar16 + 8) + (long)*(int *)(lVar16 + 0x3c) * 0x18 + -0x15) = 8;
    }
  }
  else {
LAB_108db5ee4:
    FUN_108d71098(lVar16,0x16,*(undefined4 *)(param_5 + 4),0,0);
  }
  if (iVar19 != 0) {
    bVar3 = *(byte *)(param_1 + 0x1f);
    uVar11 = (ulong)bVar3;
    if (iVar7 != 0) {
      if (7 < bVar3) goto LAB_108db5f54;
      puVar13 = (undefined1 *)(param_1 + 0x8e);
      iVar14 = 10;
      do {
        if (*(int *)(puVar13 + 6) == iVar7) {
          *puVar13 = 1;
          goto LAB_108db5f10;
        }
        puVar13 = puVar13 + 0x14;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      lVar10 = uVar11 * 4;
      uVar11 = (ulong)(bVar3 + 1);
      *(char *)(param_1 + 0x1f) = (char)(bVar3 + 1);
      *(int *)(param_1 + lVar10 + 0x24) = iVar7;
    }
LAB_108db5f10:
    if ((uint)uVar11 < 8) {
      puVar13 = (undefined1 *)(param_1 + 0x8e);
      iVar7 = 10;
      do {
        if (*(int *)(puVar13 + 6) == iVar19) {
          *puVar13 = 1;
          goto LAB_108db5f54;
        }
        puVar13 = puVar13 + 0x14;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      *(char *)(param_1 + 0x1f) = (char)uVar11 + '\x01';
      *(int *)(param_1 + uVar11 * 4 + 0x24) = iVar19;
    }
  }
LAB_108db5f54:
  lVar10 = *(long *)(lVar16 + 0x30);
  if (((int)(uint)uVar6 < 0) && (lVar15 = *(long *)(lVar10 + 0x80), lVar15 != 0)) {
    *(undefined4 *)(lVar15 + (ulong)~(uint)uVar6 * 4) = *(undefined4 *)(lVar16 + 0x3c);
  }
  *(int *)(lVar10 + 100) = *(int *)(lVar16 + 0x3c) + -1;
  uVar9 = 9;
  if ((*(byte *)((long)param_3 + 0x1c) & 1) != 0) {
    uVar9 = 5;
  }
  FUN_108d71098(lVar16,uVar9,iVar12,iStack_74 + 1,0);
  if (*(int *)(param_3 + 2) != 0) {
    FUN_108d71098(lVar16,0x12,*(int *)(param_3 + 2),0,0);
  }
  lVar10 = *(long *)(lVar16 + 0x30);
  if ((int)(uint)uVar5 < 0) {
    lVar15 = *(long *)(lVar10 + 0x80);
    iVar12 = *(int *)(lVar16 + 0x3c);
    if (lVar15 != 0) {
      *(int *)(lVar15 + (ulong)~(uint)uVar5 * 4) = iVar12;
    }
  }
  else {
    iVar12 = *(int *)(lVar16 + 0x3c);
  }
  *(int *)(lVar10 + 100) = iVar12 + -1;
  return;
}



/* Entry: 108db62c4; end: 108db64db;  */

int * FUN_108db62c4(int *param_1,int *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  iVar7 = *param_2;
  if ((uint)param_2[1] < iVar7 + param_3) {
    piVar5 = param_1;
    func_0x000108d711ec(param_1,param_2,(long)(int)((iVar7 + param_3) - 1) * 0x70 + 0x78);
    if (piVar5 == (int *)0x0) {
      return param_2;
    }
    if (((param_1 == (int *)0x0) || (piVar5 < *(int **)(param_1 + 0x5c))) ||
       (*(int **)(param_1 + 0x5e) <= piVar5)) {
      piVar6 = piVar5;
      (*pcRam0000000113297950)();
      uVar4 = (uint)piVar6;
    }
    else {
      uVar4 = (uint)*(ushort *)(param_1 + 0x54);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)(int)uVar4 - 0x78U >> 4;
    piVar5[1] = SUB164(auVar3 * ZEXT816(0x2492492492492493),8) + 1;
    iVar7 = *piVar5;
    param_2 = piVar5;
  }
  if (param_4 < iVar7) {
    lVar9 = (long)iVar7;
    lVar8 = (long)iVar7 * 0x70 + -0x68;
    lVar10 = (lVar9 + (ulong)param_3) * 0x70 + -0x68;
    do {
      lVar9 = lVar9 + -1;
      puVar1 = (undefined8 *)((long)param_2 + lVar10);
      puVar2 = (undefined8 *)((long)param_2 + lVar8);
      uVar12 = puVar2[1];
      uVar11 = *puVar2;
      uVar13 = puVar2[2];
      uVar15 = puVar2[5];
      uVar14 = puVar2[4];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar13;
      puVar1[5] = uVar15;
      puVar1[4] = uVar14;
      puVar1[1] = uVar12;
      *puVar1 = uVar11;
      uVar12 = puVar2[7];
      uVar11 = puVar2[6];
      uVar14 = puVar2[9];
      uVar13 = puVar2[8];
      uVar15 = puVar2[10];
      uVar17 = puVar2[0xd];
      uVar16 = puVar2[0xc];
      puVar1[0xb] = puVar2[0xb];
      puVar1[10] = uVar15;
      puVar1[0xd] = uVar17;
      puVar1[0xc] = uVar16;
      puVar1[7] = uVar12;
      puVar1[6] = uVar11;
      puVar1[9] = uVar14;
      puVar1[8] = uVar13;
      lVar8 = lVar8 + -0x70;
      lVar10 = lVar10 + -0x70;
    } while (param_4 < lVar9);
    iVar7 = *param_2;
  }
  lVar9 = (long)param_4;
  *param_2 = iVar7 + param_3;
  _bzero(param_2 + lVar9 * 0x1c + 2,(ulong)param_3 * 0x70);
  lVar8 = lVar9 * 0x70 + 0x48;
  do {
    *(undefined4 *)((long)param_2 + lVar8) = 0xffffffff;
    lVar9 = lVar9 + 1;
    lVar8 = lVar8 + 0x70;
  } while (lVar9 < (int)(param_4 + param_3));
  return param_2;
}



/* Entry: 108db64dc; end: 108db65d3;  */

char * FUN_108db64dc(char *param_1,char *param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  
  if (param_2 != (char *)0x0) {
    if ((*param_2 == -0x66) && (*(int *)(param_2 + 0x2c) == (int)param_3)) {
      if ((long)*(short *)(param_2 + 0x30) < 0) {
        *param_2 = 'e';
      }
      else {
        pcVar1 = param_1;
        FUN_108daa624(param_1,*(undefined8 *)
                               (*(long *)(param_4 + 8) + (long)*(short *)(param_2 + 0x30) * 0x20),0,
                      0);
        func_0x000108d93df0(param_1,param_2);
        param_2 = pcVar1;
      }
    }
    else {
      pcVar1 = param_1;
      FUN_108db64dc(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      *(char **)(param_2 + 0x10) = pcVar1;
      pcVar1 = param_1;
      FUN_108db64dc(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
      *(char **)(param_2 + 0x18) = pcVar1;
      if (((byte)param_2[5] >> 3 & 1) == 0) {
        func_0x000108db6458(param_1,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
      }
      else {
        FUN_108db65d4(param_1,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
      }
    }
  }
  return param_2;
}



/* Entry: 108db65d4; end: 108db66bf;  */

void FUN_108db65d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    func_0x000108db6458(param_1,*param_2);
    func_0x000108db6458(param_1,param_2[7],param_3,param_4);
    func_0x000108db6458(param_1,param_2[9],param_3,param_4);
    uVar1 = param_1;
    FUN_108db64dc(param_1,param_2[8],param_3,param_4);
    param_2[8] = uVar1;
    uVar1 = param_1;
    FUN_108db64dc(param_1,param_2[6],param_3,param_4);
    param_2[6] = uVar1;
    FUN_108db65d4(param_1,param_2[10],param_3,param_4);
    piVar2 = (int *)param_2[5];
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      uVar3 = *piVar2 + 1;
      piVar2 = piVar2 + 0xc;
      do {
        FUN_108db65d4(param_1,*(undefined8 *)piVar2,param_3,param_4);
        uVar3 = uVar3 - 1;
        piVar2 = piVar2 + 0x1c;
      } while (1 < uVar3);
    }
  }
  return;
}



/* Entry: 108db66c0; end: 108db6727;  */

/* WARNING: Possible PIC construction at 0x000108db6718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108db671c) */

void FUN_108db66c0(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  long lVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *apuStack_20 [2];
  
  if ((*(ushort *)(param_2 + 10) >> 7 & 1) == 0) {
    uVar1 = *(byte *)(param_2 + 8) - 0x74;
    if (uVar1 < 3) {
      apuStack_20[0] = (&PTR_DAT_110ac5300)[(ulong)uVar1 & 0xff];
    }
    else {
      apuStack_20[0] = &DAT_10f519e5f;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar3 = &UNK_10f519e93;
    unaff_x30 = 0x108db671c;
    register0x00000008 = (BADSPACEBASE *)apuStack_20;
  }
  else {
    puVar3 = &UNK_10f519e65;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar4 = *param_1;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x38) = register0x00000008;
  lVar2 = lVar4;
  FUN_108d7169c(lVar4,puVar3,register0x00000008);
  if (*(char *)(lVar4 + 0x54) == '\0') {
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
    func_0x000108d60660(lVar4,param_1[1]);
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 3) = 1;
  }
  else {
    func_0x000108d60660(lVar4,lVar2);
  }
  return;
}



/* Entry: 108db6728; end: 108db6ac7;  */

void FUN_108db6728(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 uStack_78;
  undefined1 uStack_77;
  int iStack_74;
  undefined8 uStack_70;
  int *piStack_68;
  
  puVar17 = (uint *)param_2[5];
  uVar3 = *(undefined4 *)*param_2;
  lVar13 = param_1[2];
  lVar14 = param_2[10];
  puVar5 = param_1;
  FUN_108dabcbc(param_1,0x21,0,0,0);
  if ((int)puVar5 == 0) {
    uVar6 = *(undefined8 *)(lVar13 + 0x30);
    FUN_108da84a4();
    FUN_108db310c(param_1,param_2,uVar6);
    uVar21 = param_2[0xd];
    uVar20 = param_2[0xc];
    iVar10 = *(int *)((long)param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    piVar15 = (int *)param_2[9];
    uVar19 = *puVar17;
    uVar8 = (ulong)uVar19;
    if (0 < (int)uVar19) {
      puVar17 = puVar17 + 0x12;
      do {
        if ((*(byte *)((long)puVar17 + -3) >> 3 & 1) != 0) {
          uVar19 = *puVar17;
          goto LAB_108db67ec;
        }
        puVar17 = puVar17 + 0x1c;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar19 = 0;
LAB_108db67ec:
    iVar4 = *(int *)(param_1 + 10);
    iVar16 = iVar4 + 1;
    *(int *)(param_1 + 10) = iVar16;
    uVar18 = (uint)uVar6;
    if (*(char *)(param_2 + 1) == 's') {
      uStack_78 = 6;
      if (piVar15 != (int *)0x0) {
        uStack_78 = 8;
      }
      *(int *)(param_1 + 10) = iVar4 + 2;
    }
    else {
      iVar16 = 0;
      uStack_78 = 5;
      if (piVar15 != (int *)0x0) {
        uStack_78 = 7;
      }
    }
    uStack_77 = 0;
    uStack_70 = 0;
    iVar1 = *(int *)((long)param_1 + 0x54) + 1;
    *(int *)((long)param_1 + 0x54) = iVar1;
    iStack_74 = iVar4;
    FUN_108d71098(lVar13,0x3c,uVar19,iVar1,uVar3);
    if (piVar15 == (int *)0x0) {
      FUN_108d71098(lVar13,0x39,iVar4,uVar3,0);
    }
    else {
      puVar5 = param_1;
      FUN_108db7510(param_1,param_2);
      lVar12 = lVar13;
      FUN_108d71098(lVar13,0x39,iVar4,*piVar15 + 2,0);
      FUN_108d6aaec(lVar13,lVar12,puVar5,0xfffffffa);
      piStack_68 = piVar15;
    }
    if (iVar16 != 0) {
      lVar12 = lVar13;
      FUN_108d71098(lVar13,0x39,iVar16,0,0);
      *(int *)((long)param_2 + 0x14) = (int)lVar12;
      *(ushort *)((long)param_2 + 10) = *(ushort *)((long)param_2 + 10) | 8;
    }
    param_2[9] = 0;
    *(undefined8 *)(lVar14 + 0x58) = 0;
    puVar5 = param_1;
    FUN_108d9b494(param_1,lVar14,&uStack_78);
    *(undefined8 **)(lVar14 + 0x58) = param_2;
    if ((int)puVar5 == 0) {
      lVar12 = lVar13;
      FUN_108d71098(lVar13,0x6c,iVar4,uVar18,0);
      FUN_108d71098(lVar13,0x68,uVar19,0,0);
      if (piVar15 == (int *)0x0) {
        uVar6 = 0x66;
        iVar7 = 0;
        iVar16 = iVar1;
      }
      else {
        uVar6 = 0x2f;
        iVar16 = *piVar15 + 1;
        iVar7 = iVar1;
      }
      FUN_108d71098(lVar13,uVar6,iVar4,iVar16,iVar7);
      FUN_108d71098(lVar13,0x5f,iVar4,0,0);
      uVar6 = *(undefined8 *)(lVar13 + 0x30);
      FUN_108da84a4();
      FUN_108db7620(lVar13,uVar2,uVar6);
      func_0x000108db4148(param_1,param_2,*param_2,uVar19,0,0,param_3,uVar6,uVar18);
      if (iVar10 != 0) {
        FUN_108d71098(lVar13,0x8c,iVar10,uVar18,0);
      }
      lVar9 = *(long *)(lVar13 + 0x30);
      if (((int)(uint)uVar6 < 0) && (lVar11 = *(long *)(lVar9 + 0x80), lVar11 != 0)) {
        *(undefined4 *)(lVar11 + (ulong)~(uint)uVar6 * 4) = *(undefined4 *)(lVar13 + 0x3c);
      }
      *(int *)(lVar9 + 100) = *(int *)(lVar13 + 0x3c) + -1;
      param_2[10] = 0;
      FUN_108d9b494(param_1,param_2,&uStack_78);
      param_2[10] = lVar14;
      FUN_108d71098(lVar13,0x10,0,lVar12,0);
      lVar14 = *(long *)(lVar13 + 0x30);
      if ((int)uVar18 < 0) {
        lVar12 = *(long *)(lVar14 + 0x80);
        iVar10 = *(int *)(lVar13 + 0x3c);
        if (lVar12 != 0) {
          *(int *)(lVar12 + (ulong)~uVar18 * 4) = iVar10;
        }
      }
      else {
        iVar10 = *(int *)(lVar13 + 0x3c);
      }
      *(int *)(lVar14 + 100) = iVar10 + -1;
    }
    FUN_108d93e84(*param_1,param_2[9]);
    param_2[9] = piVar15;
    param_2[0xd] = uVar21;
    param_2[0xc] = uVar20;
  }
  return;
}



/* Entry: 108db6ac8; end: 108db73cf;  */

bool FUN_108db6ac8(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  long lVar20;
  int *piVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  int iVar32;
  undefined4 uVar33;
  int *piVar34;
  undefined8 *puStack_f8;
  int iStack_ac;
  undefined2 auStack_a8 [2];
  int iStack_a4;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  
  piVar34 = (int *)*param_1;
  uVar26 = param_1[2];
  uVar9 = *(ulong *)(uVar26 + 0x30);
  FUN_108da84a4();
  uVar8 = (uint)*(undefined8 *)(uVar26 + 0x30);
  FUN_108da84a4();
  puVar22 = (uint *)param_2[9];
  puVar3 = (undefined8 *)param_2[10];
  uVar30 = (ulong)*puVar22;
  uVar15 = (uint)*(byte *)(param_2 + 1);
  if ((uVar15 != 0x74) && (*(char *)((long)piVar34 + 0x51) == '\0')) {
    uVar31 = 1;
    do {
      if (*(int *)*param_2 < (int)uVar31) break;
      iVar29 = (int)uVar30;
      if (iVar29 < 1) {
        iVar27 = 0;
LAB_108db7354:
        if (iVar27 == iVar29) goto LAB_108db735c;
      }
      else {
        iVar27 = 0;
        puVar19 = (ushort *)(*(long *)(puVar22 + 2) + 0x1c);
        do {
          if (uVar31 == *puVar19) goto LAB_108db7354;
          iVar27 = iVar27 + 1;
          puVar19 = puVar19 + 0x10;
        } while (iVar29 != iVar27);
LAB_108db735c:
        uStack_90 = 0;
        uStack_88 = uStack_88 & 0xffffffff00000000;
        piVar12 = piVar34;
        FUN_108db0138(piVar34,0x84,&uStack_90,0);
        if (piVar12 == (int *)0x0) {
          return (bool)7;
        }
        piVar12[1] = piVar12[1] | 0x400;
        piVar12[2] = uVar31;
        puVar13 = (uint *)*param_1;
        FUN_108d9ccd4(puVar13,puVar22,piVar12);
        puVar22 = puVar13;
        if (puVar13 != (uint *)0x0) {
          uVar30 = (ulong)(iVar29 + 1);
          *(short *)(*(long *)(puVar13 + 2) + (long)iVar29 * 0x20 + 0x1c) = (short)uVar31;
        }
      }
      uVar31 = uVar31 + 1;
    } while (*(char *)((long)piVar34 + 0x51) == '\0');
  }
  piVar12 = piVar34;
  FUN_108d6a6fc(piVar34,-(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2);
  if (piVar12 == (int *)0x0) {
    puStack_f8 = (undefined8 *)0x0;
  }
  else {
    if (0 < (int)uVar30) {
      uVar23 = uVar30;
      puVar19 = (ushort *)(*(long *)(puVar22 + 2) + 0x1c);
      piVar21 = piVar12;
      do {
        *piVar21 = *puVar19 - 1;
        uVar23 = uVar23 - 1;
        puVar19 = puVar19 + 0x10;
        piVar21 = piVar21 + 1;
      } while (uVar23 != 0);
    }
    puStack_f8 = param_1;
    FUN_108db7510(param_1,param_2);
  }
  param_2[9] = puVar22;
  uVar10 = *param_1;
  func_0x000108daaabc(uVar10,puVar22,0);
  puVar3[9] = uVar10;
  if (uVar15 == 0x74) {
    iVar29 = 0;
    piVar21 = (int *)0x0;
  }
  else {
    uVar31 = *(uint *)*param_2;
    iVar29 = *(int *)((long)param_1 + 0x54) + 1;
    *(uint *)((long)param_1 + 0x54) = iVar29 + uVar31;
    FUN_108d71098(uVar26,0x19,0,iVar29,0);
    piVar21 = piVar34;
    FUN_108da69a4(piVar34,(ulong)uVar31,1);
    if ((piVar21 != (int *)0x0) && (0 < (int)uVar31)) {
      uVar23 = 0;
      do {
        puVar18 = param_1;
        func_0x000108db7498(param_1,param_2,uVar23);
        *(undefined8 **)(piVar21 + uVar23 * 2 + 8) = puVar18;
        *(undefined1 *)(*(long *)(piVar21 + 6) + uVar23) = 0;
        uVar23 = uVar23 + 1;
      } while (uVar31 != uVar23);
    }
  }
  param_2[10] = 0;
  puVar3[0xb] = 0;
  func_0x000108db08ac(param_1,param_2,param_2[9],&DAT_10f3b51d2);
  if (puVar3[10] == 0) {
    func_0x000108db08ac(param_1,puVar3,puVar3[9],&DAT_10f3b51d2);
  }
  uVar31 = (uint)uVar9;
  FUN_108db310c(param_1,param_2,uVar9);
  iVar27 = 0;
  if (uVar15 == 0x74) {
    iVar4 = *(int *)((long)param_2 + 0xc);
    iVar32 = 0;
    if (iVar4 != 0) {
      iVar32 = *(int *)((long)param_1 + 0x54) + 1;
      iVar27 = *(int *)((long)param_1 + 0x54) + 2;
      *(int *)((long)param_1 + 0x54) = iVar27;
      if (*(int *)(param_2 + 2) != 0) {
        iVar4 = *(int *)(param_2 + 2) + 1;
      }
      FUN_108d71098(uVar26,0x21,iVar4,iVar32,0);
      FUN_108d71098(uVar26,0x21,iVar32,iVar27,0);
    }
  }
  else {
    iVar32 = 0;
  }
  func_0x000108d93df0(piVar34,param_2[0xc]);
  param_2[0xc] = 0;
  func_0x000108d93df0(piVar34,param_2[0xd]);
  param_2[0xd] = 0;
  iVar5 = *(int *)((long)param_1 + 0x54);
  iVar4 = iVar5 + 1;
  iVar1 = iVar5 + 2;
  iVar2 = iVar5 + 4;
  *(int *)((long)param_1 + 0x54) = iVar2;
  uStack_90 = CONCAT62(uStack_90._2_6_,0xd);
  uStack_90 = CONCAT44(iVar4,(undefined4)uStack_90);
  uStack_88 = 0;
  auStack_a8[0] = 0xd;
  uStack_a0 = 0;
  uVar23 = uVar26;
  iStack_a4 = iVar1;
  FUN_108d71098(uVar26,0x14,iVar4,0,*(int *)(uVar26 + 0x3c) + 1);
  *(int *)((long)puVar3 + 0xc) = iVar32;
  uVar6 = *(undefined4 *)((long)param_1 + 0x204);
  FUN_108d9b494(param_1,puVar3,&uStack_90);
  FUN_108d71098(uVar26,0x15,iVar4,0,0);
  uVar28 = *(uint *)(uVar26 + 0x3c);
  if ((uint)uVar23 < uVar28) {
    *(uint *)(*(long *)(uVar26 + 8) + (uVar23 & 0xffffffff) * 0x18 + 8) = uVar28;
  }
  *(uint *)(*(long *)(uVar26 + 0x30) + 100) = uVar28 - 1;
  uVar23 = uVar26;
  FUN_108d71098(uVar26,0x14,iVar1,0,uVar28 + 1);
  uVar7 = *(undefined4 *)((long)param_1 + 0x204);
  uVar10 = *(undefined8 *)((long)param_2 + 0xc);
  *(int *)((long)param_2 + 0xc) = iVar27;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_108d9b494(param_1,param_2,auStack_a8);
  *(undefined8 *)((long)param_2 + 0xc) = uVar10;
  FUN_108d71098(uVar26,0x15,iVar1,0,0);
  uVar24 = uVar9 & 0xffffffff;
  puVar18 = param_1;
  FUN_108db76a8(param_1,param_2,&uStack_90,param_3,iVar5 + 3,iVar29,piVar21,uVar24);
  puVar17 = (undefined8 *)0x0;
  puVar14 = puVar18;
  if (uVar15 - 0x73 < 2) {
    puVar17 = param_1;
    FUN_108db76a8(param_1,param_2,auStack_a8,param_3,iVar2,iVar29,piVar21,uVar24);
    puVar14 = (undefined8 *)((ulong)puVar18 & 0xffffffff);
  }
  if ((piVar21 != (int *)0x0) && (iVar29 = *piVar21, *piVar21 = iVar29 + -1, iVar29 + -1 == 0)) {
    func_0x000108d5e198(piVar21);
    puVar14 = (undefined8 *)((ulong)puVar18 & 0xffffffff);
  }
  if (uVar15 - 0x75 < 2) {
    uVar11 = uVar24;
    uVar28 = uVar31;
    if (uVar15 != 0x76) goto LAB_108db6fb8;
    uVar25 = uVar24;
    if ((ulong)puVar3[4] < (ulong)param_2[4]) {
      param_2[4] = puVar3[4];
      uVar25 = uVar9 & 0xffffffff;
      uVar11 = uVar25;
    }
  }
  else {
    uVar11 = uVar26;
    FUN_108d71098(uVar26,0x11,iVar2,puVar17,0);
    uVar9 = uVar26;
    FUN_108d71098(uVar26,0x16,iVar1,uVar24,0);
    uVar28 = (uint)uVar9;
    FUN_108d71098(uVar26,0x10,0,uVar11,0);
    param_2[4] = param_2[4] + puVar3[4];
LAB_108db6fb8:
    uVar25 = uVar26;
    FUN_108d71098(uVar26,0x11,iVar5 + 3,(ulong)puVar18 & 0xffffffff,0);
    FUN_108d71098(uVar26,0x16,iVar4,uVar24,0);
    FUN_108d71098(uVar26,0x10,0,uVar25,0);
    puVar14 = (undefined8 *)((ulong)puVar18 & 0xffffffff);
  }
  uVar9 = uVar26;
  FUN_108d71098(uVar26,0x11,iVar5 + 3,puVar14,0);
  FUN_108d71098(uVar26,0x16,iVar4,uVar11,0);
  FUN_108d71098(uVar26,0x10,0,uVar8,0);
  if (uVar15 == 0x74) {
    uVar33 = *(undefined4 *)(uVar26 + 0x3c);
    uVar24 = uVar9;
  }
  else {
    if (uVar15 == 0x76) {
      iStack_ac = (int)uVar9;
      uVar9 = (ulong)(iStack_ac + 1);
      uVar33 = *(undefined4 *)(uVar26 + 0x3c);
      goto LAB_108db70a0;
    }
    uVar24 = uVar26;
    FUN_108d71098(uVar26,0x16,iVar4,uVar11,0);
    iStack_ac = (int)uVar24;
    FUN_108d71098(uVar26,0x10,0,uVar8,0);
    uVar33 = *(undefined4 *)(uVar26 + 0x3c);
    if (1 < uVar15 - 0x73) goto LAB_108db70a0;
  }
  iStack_ac = (int)uVar24;
  FUN_108d71098(uVar26,0x11,iVar2,(int)puVar17,0);
LAB_108db70a0:
  FUN_108d71098(uVar26,0x16,iVar1,uVar25,0);
  FUN_108d71098(uVar26,0x10,0,uVar8,0);
  uVar15 = *(uint *)(uVar26 + 0x3c);
  if ((uint)uVar23 < uVar15) {
    *(uint *)(*(long *)(uVar26 + 8) + (uVar23 & 0xffffffff) * 0x18 + 8) = uVar15;
  }
  *(uint *)(*(long *)(uVar26 + 0x30) + 100) = uVar15 - 1;
  FUN_108d71098(uVar26,0x16,iVar4,uVar28,0);
  FUN_108d71098(uVar26,0x16,iVar1,uVar25,0);
  lVar16 = *(long *)(uVar26 + 0x30);
  if ((int)uVar8 < 0) {
    lVar20 = *(long *)(lVar16 + 0x80);
    iVar29 = *(int *)(uVar26 + 0x3c);
    if (lVar20 != 0) {
      *(int *)(lVar20 + (ulong)~uVar8 * 4) = iVar29;
    }
  }
  else {
    iVar29 = *(int *)(uVar26 + 0x3c);
  }
  *(int *)(lVar16 + 100) = iVar29 + -1;
  uVar23 = uVar26;
  FUN_108d71098(uVar26,0x29,0,0,0);
  FUN_108d6aaec(uVar26,uVar23,piVar12,0xfffffff1);
  uVar23 = uVar26;
  FUN_108d71098(uVar26,0x2a,uStack_88 & 0xffffffff,uStack_a0 & 0xffffffff,uVar30);
  FUN_108d6aaec(uVar26,uVar23,puStack_f8,0xfffffffa);
  if (*(long *)(uVar26 + 8) != 0) {
    *(undefined1 *)(*(long *)(uVar26 + 8) + (long)*(int *)(uVar26 + 0x3c) * 0x18 + -0x15) = 1;
  }
  FUN_108d71098(uVar26,0x2b,uVar9,iStack_ac,uVar33);
  lVar16 = *(long *)(uVar26 + 0x30);
  if ((int)uVar31 < 0) {
    lVar20 = *(long *)(lVar16 + 0x80);
    iVar29 = *(int *)(uVar26 + 0x3c);
    if (lVar20 != 0) {
      *(int *)(lVar20 + (ulong)~uVar31 * 4) = iVar29;
    }
  }
  else {
    iVar29 = *(int *)(uVar26 + 0x3c);
  }
  *(int *)(lVar16 + 100) = iVar29 + -1;
  puVar18 = puVar3;
  if (*param_3 == '\t') {
    do {
      puVar17 = puVar18;
      puVar18 = (undefined8 *)puVar17[10];
    } while (puVar18 != (undefined8 *)0x0);
    func_0x000108db6010(param_1,0,*puVar17);
  }
  if (param_2[10] != 0) {
    func_0x000108d93f18(piVar34,param_2[10],1);
  }
  param_2[10] = puVar3;
  puVar3[0xb] = param_2;
  FUN_108db73d0(param_1,*(undefined1 *)(param_2 + 1),uVar6,uVar7,0);
  return *(int *)((long)param_1 + 0x4c) != 0;
}



/* Entry: 108db73d0; end: 108db750f;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */
/* WARNING: Removing unreachable block (ram,0x000108d80cfc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d18) */
/* WARNING: Removing unreachable block (ram,0x000108d80c4c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d80cc4) */
/* WARNING: Removing unreachable block (ram,0x000108d80ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d80d6c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d78) */
/* WARNING: Removing unreachable block (ram,0x000108d80d84) */
/* WARNING: Removing unreachable block (ram,0x000108d80d90) */
/* WARNING: Removing unreachable block (ram,0x000108d80c54) */
/* WARNING: Removing unreachable block (ram,0x000108d80c60) */
/* WARNING: Removing unreachable block (ram,0x000108d80c68) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc4) */
/* WARNING: Removing unreachable block (ram,0x000108d6abc0) */
/* WARNING: Removing unreachable block (ram,0x000108d6abd0) */
/* WARNING: Removing unreachable block (ram,0x000108d6aba0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c84) */
/* WARNING: Removing unreachable block (ram,0x000108d80c8c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c9c) */
/* WARNING: Removing unreachable block (ram,0x000108d80d2c) */
/* WARNING: Removing unreachable block (ram,0x000108d80c74) */
/* WARNING: Removing unreachable block (ram,0x000108d80c7c) */
/* WARNING: Removing unreachable block (ram,0x000108d80cdc) */
/* WARNING: Removing unreachable block (ram,0x000108d6d618) */
/* WARNING: Removing unreachable block (ram,0x000108d6d660) */
/* WARNING: Removing unreachable block (ram,0x000108d6d61c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d63c) */
/* WARNING: Removing unreachable block (ram,0x000108d6d644) */
/* WARNING: Removing unreachable block (ram,0x000108d6d64c) */
/* WARNING: Removing unreachable block (ram,0x000108d80ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d80cec) */
/* WARNING: Removing unreachable block (ram,0x000108d80cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab68) */
/* WARNING: Removing unreachable block (ram,0x000108d6ab70) */

void FUN_108db73d0(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar7;
  long lVar8;
  long *plVar6;
  
  if (*(char *)((long)param_1 + 0x1f2) != '\x02') {
    return;
  }
  plVar7 = (long *)param_1[2];
  puVar5 = (undefined8 *)*param_1;
  FUN_108d6a8e0(puVar5,&UNK_10f519ee5);
  plVar6 = plVar7;
  FUN_108d71098(plVar7,0x9d,(int)param_1[0x40],0,0);
  iVar2 = (int)plVar6;
  lVar4 = *plVar7;
  if ((plVar7[1] != 0) && (*(char *)(lVar4 + 0x51) == '\0')) {
    if (iVar2 < 0) {
      iVar2 = *(int *)((long)plVar7 + 0x3c) + -1;
    }
    lVar8 = plVar7[1] + (long)iVar2 * 0x18;
    FUN_108d80c2c(lVar4,(long)*(char *)(lVar8 + 1),*(undefined8 *)(lVar8 + 0x10));
    *(undefined8 *)(lVar8 + 0x10) = 0;
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined1 *)(lVar8 + 1) = 0;
    }
    else {
      *(undefined8 **)(lVar8 + 0x10) = puVar5;
      *(undefined1 *)(lVar8 + 1) = 0xff;
    }
    return;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x328) != 0) {
        if ((puVar5 < *(undefined8 **)(lVar4 + 0x170)) ||
           (*(undefined8 **)(lVar4 + 0x178) <= puVar5)) {
          (*pcRam0000000113297950)();
          uVar1 = (uint)puVar5;
        }
        else {
          uVar1 = (uint)*(ushort *)(lVar4 + 0x150);
        }
        **(int **)(lVar4 + 0x328) = **(int **)(lVar4 + 0x328) + uVar1;
        return;
      }
      if ((*(undefined8 **)(lVar4 + 0x170) <= puVar5) && (puVar5 < *(undefined8 **)(lVar4 + 0x178)))
      {
        *puVar5 = *(undefined8 *)(lVar4 + 0x168);
        *(undefined8 **)(lVar4 + 0x168) = puVar5;
        *(int *)(lVar4 + 0x154) = *(int *)(lVar4 + 0x154) + -1;
        return;
      }
    }
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (puRam0000000113829af0 != (undefined8 *)0x0) {
        (*pcRam0000000113297998)();
      }
      puVar3 = puVar5;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar3;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(puVar5);
      puVar5 = puRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (puRam0000000113829af0 == (undefined8 *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar5);
    return;
  }
  return;
}



/* Entry: 108db7510; end: 108db761f;  */

long FUN_108db7510(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  
  puVar7 = *(uint **)(param_2 + 0x48);
  uVar1 = *puVar7;
  lVar2 = *param_1;
  lVar3 = lVar2;
  FUN_108da69a4(lVar2,uVar1 + 1,1);
  if (0 < (int)uVar1 && lVar3 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(long *)(*(long *)(puVar7 + 2) + lVar8);
      plVar5 = param_1;
      if ((*(byte *)(lVar6 + 5) & 1) == 0) {
        func_0x000108db7498(param_1,param_2,*(ushort *)(*(long *)(puVar7 + 2) + lVar8 + 0x1c) - 1);
        if (plVar5 == (long *)0x0) {
          plVar5 = *(long **)(lVar2 + 0x10);
        }
        plVar4 = param_1;
        FUN_108dae14c(param_1,lVar6,*plVar5);
        lVar6 = *(long *)(puVar7 + 2);
        *(long **)(lVar6 + lVar8) = plVar4;
      }
      else {
        FUN_108da85d0(param_1,lVar6);
        lVar6 = *(long *)(puVar7 + 2);
      }
      *(long **)(lVar3 + 0x20 + uVar9 * 8) = plVar5;
      *(undefined1 *)(*(long *)(lVar3 + 0x18) + uVar9) = *(undefined1 *)(lVar6 + lVar8 + 0x18);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x20;
    } while (uVar1 != uVar9);
  }
  return lVar3;
}



/* Entry: 108db7620; end: 108db76a7;  */

void FUN_108db7620(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar2 = param_1;
    FUN_108d71098(param_1,0x8a,param_2,0,0xffffffff);
    FUN_108d71098(param_1,0x10,0,param_3,0);
    uVar1 = *(uint *)(param_1 + 0x3c);
    if ((uint)uVar2 < uVar1) {
      *(uint *)(*(long *)(param_1 + 8) + (uVar2 & 0xffffffff) * 0x18 + 8) = uVar1;
    }
    *(uint *)(*(long *)(param_1 + 0x30) + 100) = uVar1 - 1;
  }
  return;
}



/* Entry: 108db76a8; end: 108db7bc3;  */

undefined4
FUN_108db76a8(long *param_1,long *param_2,long param_3,byte *param_4,undefined8 param_5,
             undefined8 param_6,int *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  int iVar18;
  
  uVar17 = param_1[2];
  uVar1 = *(undefined4 *)(uVar17 + 0x3c);
  uVar5 = *(undefined8 *)(uVar17 + 0x30);
  FUN_108da84a4();
  iVar18 = (int)param_6;
  if (iVar18 != 0) {
    uVar6 = uVar17;
    FUN_108d71098(uVar17,0x2e,param_6,0,0);
    uVar9 = *(undefined4 *)(param_3 + 8);
    uVar10 = *(undefined4 *)(param_3 + 0xc);
    if (param_7 != (int *)0x0) {
      *param_7 = *param_7 + 1;
    }
    uVar7 = uVar17;
    FUN_108d71098(uVar17,0x2a,uVar9,iVar18 + 1,uVar10);
    FUN_108d6aaec(uVar17,uVar7,param_7,0xfffffffa);
    FUN_108d71098(uVar17,0x2b,(int)uVar7 + 2,uVar5,(int)uVar7 + 2);
    uVar2 = *(uint *)(uVar17 + 0x3c);
    if ((uint)uVar6 < uVar2) {
      *(uint *)(*(long *)(uVar17 + 8) + (uVar6 & 0xffffffff) * 0x18 + 8) = uVar2;
    }
    *(uint *)(*(long *)(uVar17 + 0x30) + 100) = uVar2 - 1;
    FUN_108d71098(uVar17,0x21,*(undefined4 *)(param_3 + 8),iVar18 + 1,*(int *)(param_3 + 0xc) + -1);
    FUN_108d71098(uVar17,0x19,1,param_6,0);
  }
  if (*(char *)(*param_1 + 0x51) != '\0') {
    return 0;
  }
  FUN_108db7620(uVar17,(int)param_2[2],uVar5);
  bVar3 = *param_4;
  if (bVar3 < 0xc) {
    if (bVar3 == 10) {
      uVar9 = *(undefined4 *)(param_3 + 8);
      FUN_108d71098(param_1[2],0x20,uVar9,*(undefined4 *)(param_4 + 4),1);
      uVar10 = 1;
    }
    else {
      if (bVar3 == 0xb) {
        uVar8 = **(undefined8 **)(*param_2 + 8);
        pbVar16 = param_4 + 1;
        FUN_108daaffc(uVar8,(long)(char)*pbVar16);
        *pbVar16 = (byte)uVar8;
        if (*(char *)((long)param_1 + 0x1f) == '\0') {
          iVar18 = *(int *)((long)param_1 + 0x54) + 1;
          *(int *)((long)param_1 + 0x54) = iVar18;
        }
        else {
          bVar3 = *(char *)((long)param_1 + 0x1f) - 1;
          *(byte *)((long)param_1 + 0x1f) = bVar3;
          iVar18 = *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x24);
        }
        uVar6 = uVar17;
        FUN_108d71098(uVar17,0x31,*(undefined4 *)(param_3 + 8),1,iVar18);
        FUN_108d6aaec(uVar17,uVar6,pbVar16,1);
        FUN_108da8510(param_1,*(undefined4 *)(param_3 + 8),1);
        FUN_108d71098(uVar17,0x6e,*(undefined4 *)(param_4 + 4),iVar18,0);
        if (iVar18 != 0) {
          bVar3 = *(byte *)((long)param_1 + 0x1f);
          if (bVar3 < 8) {
            puVar12 = (undefined1 *)((long)param_1 + 0x8e);
            iVar14 = 10;
            do {
              if (*(int *)(puVar12 + 6) == iVar18) goto LAB_108db7ae4;
              puVar12 = puVar12 + 0x14;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            *(byte *)((long)param_1 + 0x1f) = bVar3 + 1;
            *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x24) = iVar18;
          }
        }
        goto LAB_108db7b40;
      }
LAB_108db790c:
      FUN_108d71098(uVar17,0x23,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),0);
      uVar9 = *(undefined4 *)(param_3 + 8);
      uVar10 = *(undefined4 *)(param_3 + 0xc);
    }
    FUN_108da8510(param_1,uVar9,uVar10);
    goto LAB_108db7b40;
  }
  if (bVar3 != 0xe) {
    if (bVar3 == 0xd) {
      iVar18 = *(int *)(param_4 + 8);
      if (iVar18 == 0) {
        iVar14 = *(int *)(param_3 + 0xc);
        if (*(int *)((long)param_1 + 0x44) < iVar14) {
          iVar18 = *(int *)((long)param_1 + 0x54) + 1;
          *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + iVar14;
        }
        else {
          iVar18 = (int)param_1[9];
          *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - iVar14;
          *(int *)(param_1 + 9) = iVar18 + iVar14;
        }
        *(int *)(param_4 + 8) = iVar18;
        *(int *)(param_4 + 0xc) = iVar14;
      }
      uVar9 = *(undefined4 *)(param_3 + 8);
      uVar10 = *(undefined4 *)(param_3 + 0xc);
      FUN_108d71098(param_1[2],0x20,uVar9,iVar18,uVar10);
      FUN_108da8510(param_1,uVar9,uVar10);
      FUN_108d71098(uVar17,0x16,*(undefined4 *)(param_4 + 4),0,0);
      goto LAB_108db7b40;
    }
    if (bVar3 != 0xc) goto LAB_108db790c;
  }
  cVar4 = *(char *)((long)param_1 + 0x1f);
  if (cVar4 == '\0') {
    iVar18 = *(int *)((long)param_1 + 0x54) + 1;
    iVar14 = iVar18;
LAB_108db7944:
    iVar14 = iVar14 + 1;
    *(int *)((long)param_1 + 0x54) = iVar14;
  }
  else {
    *(byte *)((long)param_1 + 0x1f) = cVar4 - 1U;
    iVar18 = *(int *)((long)param_1 + (ulong)(byte)(cVar4 - 1U) * 4 + 0x24);
    if (cVar4 == '\x01') {
      iVar14 = *(int *)((long)param_1 + 0x54);
      goto LAB_108db7944;
    }
    *(byte *)((long)param_1 + 0x1f) = cVar4 - 2U;
    iVar14 = *(int *)((long)param_1 + (ulong)(byte)(cVar4 - 2U) * 4 + 0x24);
  }
  FUN_108d71098(uVar17,0x31,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),iVar18);
  FUN_108d71098(uVar17,0x4a,*(undefined4 *)(param_4 + 4),iVar14,0);
  FUN_108d71098(uVar17,0x4b,*(undefined4 *)(param_4 + 4),iVar18,iVar14);
  if (*(long *)(uVar17 + 8) != 0) {
    *(undefined1 *)(*(long *)(uVar17 + 8) + (long)*(int *)(uVar17 + 0x3c) * 0x18 + -0x15) = 8;
  }
  if (iVar14 != 0) {
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    if (bVar3 < 8) {
      puVar12 = (undefined1 *)((long)param_1 + 0x8e);
      iVar13 = 10;
      do {
        if (*(int *)(puVar12 + 6) == iVar14) {
          *puVar12 = 1;
          goto LAB_108db7aa0;
        }
        puVar12 = puVar12 + 0x14;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar3 + 1;
      *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x24) = iVar14;
    }
  }
LAB_108db7aa0:
  if (iVar18 != 0) {
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    if (bVar3 < 8) {
      puVar12 = (undefined1 *)((long)param_1 + 0x8e);
      iVar14 = 10;
      do {
        if (*(int *)(puVar12 + 6) == iVar18) goto LAB_108db7ae4;
        puVar12 = puVar12 + 0x14;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      *(byte *)((long)param_1 + 0x1f) = bVar3 + 1;
      *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x24) = iVar18;
    }
  }
LAB_108db7b40:
  if (*(int *)((long)param_2 + 0xc) != 0) {
    FUN_108d71098(uVar17,0x8c,*(int *)((long)param_2 + 0xc),param_8,0);
  }
  lVar11 = *(long *)(uVar17 + 0x30);
  if ((int)(uint)uVar5 < 0) {
    lVar15 = *(long *)(lVar11 + 0x80);
    iVar18 = *(int *)(uVar17 + 0x3c);
    if (lVar15 != 0) {
      *(int *)(lVar15 + (ulong)~(uint)uVar5 * 4) = iVar18;
    }
  }
  else {
    iVar18 = *(int *)(uVar17 + 0x3c);
  }
  *(int *)(lVar11 + 100) = iVar18 + -1;
  FUN_108d71098(uVar17,0x12,param_5,0,0);
  return uVar1;
LAB_108db7ae4:
  *puVar12 = 1;
  goto LAB_108db7b40;
}



/* Entry: 108db7bc4; end: 108db7c5f;  */

/* WARNING: Removing unreachable block (ram,0x000108dbac70) */

undefined8 * FUN_108db7bc4(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  ulong uVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar9 = param_1;
  pbVar7 = param_2;
  while( true ) {
    while( true ) {
      if (param_2 == (byte *)0x0) {
        *(char *)(param_1 + 2) = (char)param_3;
        return puVar9;
      }
      if ((*(uint *)(param_2 + 4) >> 0xc & 1) == 0) break;
      if ((*(uint *)(param_2 + 4) >> 0x12 & 1) == 0) {
        param_2 = param_2 + 0x10;
      }
      else {
        param_2 = *(byte **)(*(long *)(param_2 + 0x20) + 8);
      }
      param_2 = *(byte **)param_2;
    }
    *(char *)(param_1 + 2) = (char)param_3;
    if ((uint)*param_2 != (uint)param_3) break;
    puVar9 = param_1;
    FUN_108db7bc4(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
    param_2 = *(byte **)(param_2 + 0x18);
    pbVar7 = param_2;
  }
  uVar2 = *(uint *)((long)param_1 + 0x14);
  if (*(int *)(param_1 + 3) <= (int)uVar2) {
    puVar9 = (undefined8 *)param_1[4];
    lVar8 = **(long **)*param_1;
    lVar3 = lVar8;
    FUN_108d6a6fc(lVar8,(long)*(int *)(param_1 + 3) * 0x70);
    param_1[4] = lVar3;
    if (lVar3 == 0) {
      param_1[4] = puVar9;
      return (undefined8 *)0x0;
    }
    _memcpy();
    if (puVar9 != param_1 + 5) {
      func_0x000108d60660(lVar8,puVar9);
    }
    uVar4 = param_1[4];
    if (((lVar8 == 0) || (uVar4 < *(ulong *)(lVar8 + 0x170))) ||
       (*(ulong *)(lVar8 + 0x178) <= uVar4)) {
      (*pcRam0000000113297950)();
      uVar2 = (uint)uVar4;
    }
    else {
      uVar2 = (uint)*(ushort *)(lVar8 + 0x150);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)(long)(int)uVar2 >> 3;
    iVar6 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    *(int *)(param_1 + 3) = iVar6;
    _bzero(param_1[4] + (long)*(int *)((long)param_1 + 0x14) * 0x38,
           ((long)iVar6 - (long)*(int *)((long)param_1 + 0x14)) * 0x38);
    uVar2 = *(uint *)((long)param_1 + 0x14);
  }
  *(uint *)((long)param_1 + 0x14) = uVar2 + 1;
  puVar9 = (undefined8 *)(param_1[4] + (long)(int)uVar2 * 0x38);
  if (pbVar7 == (byte *)0x0) {
    *(undefined2 *)(puVar9 + 3) = 1;
  }
  else {
    if ((pbVar7[6] >> 2 & 1) == 0) {
      sVar5 = 1;
    }
    else {
      sVar5 = (short)*(undefined4 *)(pbVar7 + 0x2c);
      FUN_108d93a54();
      sVar5 = sVar5 + -0x10e;
    }
    *(short *)(puVar9 + 3) = sVar5;
    do {
      if ((*(uint *)(pbVar7 + 4) >> 0xc & 1) == 0) break;
      if ((*(uint *)(pbVar7 + 4) >> 0x12 & 1) == 0) {
        pbVar7 = pbVar7 + 0x10;
      }
      else {
        pbVar7 = *(byte **)(*(long *)(pbVar7 + 0x20) + 8);
      }
      pbVar7 = *(byte **)pbVar7;
    } while (pbVar7 != (byte *)0x0);
  }
  *puVar9 = pbVar7;
  *(undefined2 *)((long)puVar9 + 0x1c) = 0;
  puVar9[4] = param_1;
  *(undefined4 *)(puVar9 + 1) = 0xffffffff;
  return (undefined8 *)(ulong)uVar2;
}



/* Entry: 108db7c60; end: 108db834b;  */

void FUN_108db7c60(undefined8 *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar14;
  undefined2 uVar15;
  short sVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  short *psVar26;
  short sVar27;
  long lVar28;
  long *plVar29;
  short sVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong *puVar35;
  int iVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong *puVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong *puVar44;
  ulong uVar45;
  ulong *puStack_c8;
  ulong auStack_70 [2];
  
  uVar43 = 0;
  puVar21 = (undefined8 *)*param_1;
  puVar38 = (ulong *)*puVar21;
  bVar2 = *(byte *)((long)param_1 + 0x39);
  uVar42 = (ulong)bVar2;
  uVar18 = 5;
  if (bVar2 != 2) {
    uVar18 = 10;
  }
  uVar7 = bVar2 - 1;
  if (bVar2 == 0 || uVar7 == 0) {
    uVar18 = 1;
  }
  if ((param_2 != 0) && ((uint *)param_1[2] != (uint *)0x0)) {
    uVar43 = (ulong)*(uint *)param_1[2];
  }
  puVar10 = puVar38;
  FUN_108d6a6fc(puVar38,(long)(int)((int)(uVar43 << 1) + uVar18 * 2 * ((uint)bVar2 * 8 + 0x20)));
  if (puVar10 == (ulong *)0x0) {
    return;
  }
  puVar44 = puVar10 + (ulong)uVar18 * 4;
  puVar44[1] = 0;
  *puVar44 = 0;
  puVar44[3] = 0;
  puVar44[2] = 0;
  puStack_c8 = puVar44 + (ulong)uVar18 * 4;
  uVar19 = uVar18 * 2 + 1;
  lVar28 = 0x18;
  do {
    *(ulong **)((long)puVar10 + lVar28) = puStack_c8;
    uVar19 = uVar19 - 1;
    puStack_c8 = puStack_c8 + uVar42;
    lVar28 = lVar28 + 0x20;
  } while (1 < uVar19);
  iVar36 = (int)uVar43;
  if (iVar36 == 0) {
    puStack_c8 = (ulong *)0x0;
    uVar19 = *(uint *)(puVar21 + 0x3b);
    if (0x2f < uVar19) {
      uVar19 = 0x30;
    }
    uVar15 = (undefined2)uVar19;
  }
  else {
    _bzero(puStack_c8,-(uVar43 >> 0x1f) & 0xfffffffe00000000 | uVar43 << 1);
    uVar19 = *(uint *)(puVar21 + 0x3b);
    if (0x2f < uVar19) {
      uVar19 = 0x30;
    }
    uVar15 = (undefined2)uVar19;
    iVar1 = iVar36;
    if (bVar2 != 0) {
      iVar1 = -1;
    }
    *(char *)((long)puVar44 + 0x16) = (char)iVar1;
  }
  *(undefined2 *)(puVar44 + 2) = uVar15;
  if (bVar2 != 0) {
    uVar43 = 0;
    uVar32 = 0;
    uVar40 = 0;
    sVar30 = 0;
    uVar19 = uVar18;
    if (uVar18 < 3) {
      uVar19 = 2;
    }
    puVar22 = puVar10;
    uVar33 = 1;
    do {
      lVar28 = uVar43 << 3;
      puVar39 = puVar22;
      puVar22 = puVar44;
      while (puVar44 = puVar39, (int)uVar33 < 1) {
        uVar33 = 0;
        uVar43 = uVar43 + 1;
        lVar28 = lVar28 + 8;
        puVar39 = puVar22;
        puVar22 = puVar44;
        if (uVar42 == uVar43) goto LAB_108db81c0;
      }
      uVar24 = 0;
      uVar34 = 0;
      puVar39 = puVar22;
      do {
        for (puVar35 = (ulong *)param_1[4]; puVar35 != (ulong *)0x0; puVar35 = (ulong *)puVar35[8])
        {
          cVar5 = *(char *)((long)puVar39 + 0x16);
          uVar20 = (uint)cVar5;
          auStack_70[0] = 0;
          uVar41 = *puVar39;
          if (((*puVar35 & (uVar41 ^ 0xffffffffffffffff)) == 0) &&
             (uVar45 = puVar35[1], (uVar45 & uVar41) == 0)) {
            lVar11 = (long)*(short *)((long)puVar35 + 0x12);
            uVar8 = puVar39[2];
            FUN_108dbdc7c(lVar11,(int)(short)((short)uVar8 + *(short *)((long)puVar35 + 0x14)));
            FUN_108dbdc7c();
            sVar4 = *(short *)((long)puVar35 + 0x16);
            if (cVar5 < '\0') {
              puVar12 = param_1;
              FUN_108dbe53c(param_1,param_1[2],puVar39,*(undefined2 *)((long)param_1 + 0x32),
                            (uint)uVar43 & 0xffff,puVar35,auStack_70);
              uVar20 = (uint)puVar12;
            }
            else {
              auStack_70[0] = puVar39[1];
            }
            lVar13 = lVar11;
            if ((-1 < (int)uVar20) && (iVar36 - uVar20 != 0 && (int)uVar20 <= iVar36)) {
              sVar17 = *(short *)((long)puStack_c8 + (long)(int)uVar20 * 2);
              if (sVar17 == 0) {
                sVar17 = 0;
                if (iVar36 != 0) {
                  sVar17 = (short)((int)((iVar36 - uVar20) * 100) / iVar36);
                }
                FUN_108d93a54();
                if (param_2 < 0xb) {
                  sVar16 = 0;
                }
                else {
                  sVar16 = (short)param_2;
                  FUN_108d93a54();
                  sVar16 = sVar16 + -0x21;
                }
                sVar27 = 0x10;
                if ((*(ushort *)((long)param_1 + 0x32) & 0x400) != 0) {
                  sVar27 = 0x20;
                }
                sVar17 = (short)param_2 + -0x42 + sVar17 + sVar16 + sVar27;
                *(short *)((long)puStack_c8 + (long)(int)uVar20 * 2) = sVar17;
              }
              FUN_108dbdc7c(lVar11,(int)sVar17);
            }
            sVar4 = sVar4 + (short)uVar8;
            uVar31 = (uint)lVar13;
            if (0 < (int)uVar34) {
              puVar37 = puVar44;
              uVar25 = uVar34;
              do {
                if ((*puVar37 == (uVar45 | uVar41)) &&
                   (((*(byte *)((long)puVar37 + 0x16) ^ uVar20) >> 7 & 1) == 0)) {
                  if (((int)*(short *)((long)puVar37 + 0x12) < (int)uVar31) ||
                     (((int)*(short *)((long)puVar37 + 0x12) == uVar31 &&
                      ((short)puVar37[2] <= sVar4)))) goto LAB_108db8110;
                  goto LAB_108db800c;
                }
                puVar37 = puVar37 + 4;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
            uVar25 = uVar34;
            if (((int)uVar34 < (int)uVar18) ||
               (((int)uVar31 <= (int)(short)uVar40 &&
                ((uVar25 = uVar32, (uVar31 & 0xffff) != (uVar40 & 0xffff) ||
                 ((int)lVar11 < (int)sVar30)))))) {
              if ((int)uVar34 < (int)uVar18) {
                uVar34 = uVar34 + 1;
              }
              puVar37 = puVar44 + (long)(int)uVar25 * 4;
LAB_108db800c:
              *puVar37 = puVar35[1] | *puVar39;
              puVar37[1] = auStack_70[0];
              *(short *)(puVar37 + 2) = sVar4;
              *(short *)((long)puVar37 + 0x12) = (short)lVar13;
              *(short *)((long)puVar37 + 0x14) = (short)lVar11;
              *(char *)((long)puVar37 + 0x16) = (char)uVar20;
              _memcpy(puVar37[3],puVar39[3],lVar28);
              *(ulong **)(puVar37[3] + uVar43 * 8) = puVar35;
              if ((int)uVar18 <= (int)uVar34) {
                uVar40 = (uint)*(ushort *)((long)puVar44 + 0x12);
                sVar30 = (short)puVar44[2];
                if (bVar2 < 2) {
                  uVar32 = 0;
                }
                else {
                  uVar20 = 1;
                  psVar26 = (short *)((long)puVar44 + 0x34);
                  uVar31 = 0;
                  do {
                    uVar6 = psVar26[-1];
                    if ((short)uVar40 < (short)uVar6) {
                      uVar32 = uVar20;
                      uVar40 = (int)(short)uVar6;
                      sVar4 = *psVar26;
                    }
                    else {
                      uVar32 = uVar31;
                      sVar4 = sVar30;
                      if (((uint)uVar6 == (uVar40 & 0xffff)) &&
                         (uVar32 = uVar20, sVar4 = *psVar26, *psVar26 <= sVar30)) {
                        uVar32 = uVar31;
                        sVar4 = sVar30;
                      }
                    }
                    sVar30 = sVar4;
                    uVar20 = uVar20 + 1;
                    psVar26 = psVar26 + 0x10;
                    uVar31 = uVar32;
                  } while (uVar19 != uVar20);
                }
              }
            }
          }
LAB_108db8110:
        }
        uVar24 = uVar24 + 1;
        puVar39 = puVar39 + 4;
      } while (uVar24 != uVar33);
      bVar9 = uVar42 - 1 != uVar43;
      uVar43 = uVar43 + 1;
      uVar33 = uVar34;
    } while (bVar9);
    if (uVar34 == 0) {
LAB_108db81c0:
      func_0x000108d6a85c(puVar21,&UNK_10f519f8a);
      goto SUB_108d60660;
    }
    if (1 < (int)uVar34) {
      lVar28 = (ulong)uVar34 - 1;
      puVar39 = puVar44;
      puVar22 = puVar44;
      do {
        puVar44 = puVar22 + 4;
        if (*(short *)((long)puVar39 + 0x12) <= *(short *)((long)puVar22 + 0x32)) {
          puVar44 = puVar39;
        }
        lVar28 = lVar28 + -1;
        puVar39 = puVar44;
        puVar22 = puVar22 + 4;
      } while (lVar28 != 0);
    }
    lVar28 = param_1[1];
    plVar29 = param_1 + 0x71;
    plVar23 = (long *)puVar44[3];
    uVar43 = uVar42;
    do {
      lVar11 = *plVar23;
      *plVar29 = lVar11;
      bVar3 = *(byte *)(lVar11 + 0x10);
      *(byte *)((long)plVar29 + -0x1c) = bVar3;
      *(undefined4 *)((long)plVar29 + -0x44) = *(undefined4 *)(lVar28 + 0x48 + (ulong)bVar3 * 0x70);
      plVar29 = plVar29 + 0xb;
      uVar43 = uVar43 - 1;
      plVar23 = plVar23 + 1;
    } while (uVar43 != 0);
  }
  if (((((*(ushort *)((long)param_1 + 0x32) & 0x600) == 0x400) && (param_2 != 0)) &&
      (*(char *)(param_1 + 7) == '\0')) &&
     (puVar21 = param_1,
     FUN_108dbe53c(param_1,param_1[3],puVar44,0x200,(uint)(uVar42 - 1) & 0xffff,
                   *(undefined8 *)(puVar44[3] + (uVar42 - 1) * 8),auStack_70),
     *(int *)param_1[3] == (int)puVar21)) {
    *(undefined1 *)(param_1 + 7) = 2;
  }
  piVar14 = (int *)param_1[2];
  if (piVar14 != (int *)0x0) {
    bVar3 = *(byte *)((long)puVar44 + 0x16);
    if ((*(ushort *)((long)param_1 + 0x32) >> 9 & 1) == 0) {
      *(byte *)((long)param_1 + 0x34) = bVar3 & ((char)bVar3 >> 7 ^ 0xffU);
      param_1[5] = puVar44[1];
    }
    else if (*piVar14 == (int)(char)bVar3) {
      *(undefined1 *)(param_1 + 7) = 2;
    }
    if ((((*(ushort *)((long)param_1 + 0x32) >> 0xb & 1) != 0) && (bVar2 != 0)) &&
       (*piVar14 == (int)*(char *)((long)param_1 + 0x34))) {
      auStack_70[0] = 0;
      puVar21 = param_1;
      FUN_108dbe53c(param_1,piVar14,puVar44,0,(ulong)uVar7,
                    *(undefined8 *)(puVar44[3] + (ulong)uVar7 * 8),auStack_70);
      if (*(int *)param_1[2] == (int)puVar21) {
        *(undefined1 *)((long)param_1 + 0x35) = 1;
        param_1[5] = auStack_70[0];
      }
    }
  }
  *(short *)(param_1 + 6) = (short)puVar44[2];
SUB_108d60660:
  if (puVar10 == (ulong *)0x0) {
    return;
  }
  if (puVar38 != (ulong *)0x0) {
    if (puVar38[0x65] != 0) {
      if ((puVar10 < (ulong *)puVar38[0x2e]) || ((ulong *)puVar38[0x2f] <= puVar10)) {
        (*pcRam0000000113297950)();
        uVar18 = (uint)puVar10;
      }
      else {
        uVar18 = (uint)(ushort)puVar38[0x2a];
      }
      *(int *)puVar38[0x65] = *(int *)puVar38[0x65] + uVar18;
      return;
    }
    if (((ulong *)puVar38[0x2e] <= puVar10) && (puVar10 < (ulong *)puVar38[0x2f])) {
      *puVar10 = puVar38[0x2d];
      puVar38[0x2d] = (ulong)puVar10;
      *(int *)((long)puVar38 + 0x154) = *(int *)((long)puVar38 + 0x154) + -1;
      return;
    }
  }
  if (puVar10 == (ulong *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (ulong *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar38 = puVar10;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar38;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar10);
    puVar10 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (ulong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar10);
  return;
}



/* Entry: 108db834c; end: 108db83ab;  */

ulong FUN_108db834c(ulong param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((param_2 == (uint *)0x0) || (uVar3 = (ulong)*param_2, (int)*param_2 < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    puVar4 = *(undefined8 **)(param_2 + 2);
    do {
      uVar1 = param_1;
      FUN_108dbc0b8(param_1,*puVar4);
      uVar2 = uVar1 | uVar2;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar3 != 0);
  }
  return uVar2;
}



/* Entry: 108db83ac; end: 108dbaa33;  */

void FUN_108db83ac(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long *plVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint5 uVar33;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar41;
  ulong uVar42;
  ulong uVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong uVar46;
  ulong uVar47;
  long lStack_a8;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uVar14 = param_1[2];
  plVar26 = param_1;
  FUN_108d70f98();
  uVar9 = (uint)plVar26;
  *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + 1;
  FUN_108d71098();
  lVar15 = *(long *)(param_3 + 0x20);
  plVar26 = *(long **)(param_2 + 0x20);
  plVar24 = plVar26 + (long)*(int *)(param_2 + 0x14) * 7;
  plVar29 = *(long **)(param_5 + 0x48);
  if (*(int *)(param_2 + 0x14) < 1) {
    lStack_a8 = 0;
    uVar32 = 0;
    uVar30 = 0xffffffffffffffff;
  }
  else {
    uVar30 = 0;
    bVar5 = false;
    lStack_a8 = 0;
    uVar17 = 0;
    do {
      if (((*plVar29 == 0) && ((*(ushort *)((long)plVar26 + 0x1c) >> 1 & 1) == 0)) &&
         (lVar28 = *plVar26, (*(byte *)(lVar28 + 4) & 1) == 0)) {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_70 = 0x300000000;
        pcStack_90 = FUN_108daa264;
        uStack_88 = 0x108daa314;
        uStack_68 = (ulong)*(uint *)(param_3 + 0x40);
        FUN_108daa320(&pcStack_90,lVar28);
        if (uStack_70._4_1_ != '\0') {
          lVar27 = *param_1;
          lVar10 = lVar27;
          FUN_108daa624(lVar27,lVar28,0,0);
          FUN_108daff30(lVar27,lStack_a8,lVar10);
          lStack_a8 = lVar27;
        }
      }
      plVar11 = plVar26;
      func_0x000108dbdbe4(plVar26,param_3,param_4);
      uVar32 = uVar17;
      if ((int)plVar11 != 0) {
        uVar18 = 0x8000000000000000;
        if ((int)*(uint *)(plVar26 + 2) < 0x40) {
          uVar18 = 1L << ((ulong)*(uint *)(plVar26 + 2) & 0x3f);
        }
        if (!bVar5) {
          FUN_108d64c00(0x11c,&UNK_10f519f9c);
        }
        if ((uVar18 & uVar30) == 0) {
          lVar28 = *param_1;
          uVar32 = uVar17 + 1;
          func_0x000108dbd6a0(lVar28,plVar29,uVar32);
          if ((int)lVar28 != 0) goto LAB_108db8a30;
          *(long **)(plVar29[7] + (long)(int)uVar17 * 8) = plVar26;
          uVar30 = uVar18 | uVar30;
          bVar5 = true;
        }
        else {
          bVar5 = true;
        }
      }
      plVar26 = plVar26 + 7;
      uVar17 = uVar32;
    } while (plVar26 < plVar24);
    uVar30 = ~uVar30 | 0x8000000000000000;
  }
  *(short *)((long)plVar29 + 0x2c) = (short)uVar32;
  *(short *)(plVar29 + 3) = (short)uVar32;
  *(undefined4 *)(plVar29 + 5) = 0x4241;
  uVar30 = *(ulong *)(param_3 + 0x58) & uVar30;
  sVar3 = *(short *)(lVar15 + 0x3e);
  uVar23 = (uint)sVar3;
  uVar17 = uVar23;
  if (0x3e < sVar3) {
    uVar17 = 0x3f;
  }
  if (0 < (int)uVar23) {
    uVar18 = (ulong)(uVar17 + 3) & 0x7c;
    uVar20 = (ulong)uVar17 - 1;
    uVar1 = 0;
    uVar6 = 1;
    uVar37 = 0;
    uVar39 = 0;
    uVar41 = 0;
    uVar7 = 2;
    uVar8 = 3;
    do {
      uVar45 = uVar8;
      uVar42 = uVar7;
      uVar40 = uVar41;
      uVar38 = uVar39;
      uVar36 = uVar37;
      uVar31 = uVar32;
      uVar47 = uVar6;
      uVar46 = uVar1;
      auVar34._0_8_ = -uVar46;
      auVar34._8_8_ = -uVar47;
      auVar35._8_8_ = uVar30;
      auVar35._0_8_ = uVar30;
      auVar35 = NEON_ushl(auVar35,auVar34,8);
      auVar43._0_8_ = -uVar42;
      auVar43._8_8_ = -uVar45;
      auVar44._8_8_ = uVar30;
      auVar44._0_8_ = uVar30;
      auVar44 = NEON_ushl(auVar44,auVar43,8);
      uVar33 = CONCAT14(auVar35[8],(uint)(auVar35[0] & 1)) & 0x1ffffffff;
      uVar32 = (int)uVar33 + uVar31;
      uVar37 = (byte)(uVar33 >> 0x20) + uVar36;
      uVar39 = (auVar44[0] & 1) + uVar38;
      uVar41 = (auVar44[8] & 1) + uVar40;
      uVar18 = uVar18 - 4;
      uVar1 = uVar46 + 4;
      uVar6 = uVar47 + 4;
      uVar7 = uVar42 + 4;
      uVar8 = uVar45 + 4;
    } while (uVar18 != 0);
    uVar32 = (uVar32 ^ (uVar32 ^ uVar31) & -(uint)(uVar20 < uVar46)) +
             (uVar37 ^ (uVar37 ^ uVar36) & -(uint)(uVar20 < uVar47)) +
             (uVar39 ^ (uVar39 ^ uVar38) & -(uint)(uVar20 < uVar42)) +
             (uVar41 ^ (uVar41 ^ uVar40) & -(uint)(uVar20 < uVar45));
  }
  puVar12 = (undefined8 *)*param_1;
  iVar4 = sVar3 + -0x3e;
  if (-1 < (long)*(ulong *)(param_3 + 0x58)) {
    iVar4 = 1;
  }
  func_0x000108db0c3c(puVar12,(int)(short)(uVar32 + iVar4),0,&pcStack_90);
  if (puVar12 != (undefined8 *)0x0) {
    plVar29[4] = (long)puVar12;
    *puVar12 = &UNK_10f519fb6;
    puVar12[3] = lVar15;
    plVar26 = *(long **)(param_2 + 0x20);
    if (plVar26 < plVar24) {
      iVar25 = 0;
      uVar18 = 0;
      do {
        plVar11 = plVar26;
        func_0x000108dbdbe4(plVar26,param_3,param_4);
        if ((int)plVar11 != 0) {
          uVar37 = *(uint *)(plVar26 + 2);
          uVar1 = 0x8000000000000000;
          if ((int)uVar37 < 0x40) {
            uVar1 = 1L << ((ulong)uVar37 & 0x3f);
          }
          if ((uVar1 & uVar18) == 0) {
            lVar28 = *plVar26;
            *(short *)(puVar12[1] + (long)iVar25 * 2) = (short)uVar37;
            plVar11 = param_1;
            FUN_108daaedc(param_1,*(undefined8 *)(lVar28 + 0x10),*(undefined8 *)(lVar28 + 0x18));
            if (plVar11 == (long *)0x0) {
              puVar16 = &UNK_10f51757c;
            }
            else {
              puVar16 = (undefined *)*plVar11;
            }
            uVar18 = uVar1 | uVar18;
            *(undefined **)(puVar12[8] + (long)iVar25 * 8) = puVar16;
            iVar25 = iVar25 + 1;
          }
        }
        plVar26 = plVar26 + 7;
      } while (plVar26 < plVar24);
    }
    else {
      iVar25 = 0;
    }
    if (0 < (int)uVar23) {
      uVar18 = 0;
      do {
        if ((uVar30 >> (uVar18 & 0x3f) & 1) != 0) {
          *(short *)(puVar12[1] + (long)iVar25 * 2) = (short)uVar18;
          *(undefined **)(puVar12[8] + (long)iVar25 * 8) = &UNK_10f51757c;
          iVar25 = iVar25 + 1;
        }
        uVar18 = uVar18 + 1;
      } while (uVar17 != uVar18);
    }
    if ((*(long *)(param_3 + 0x58) < 0) && (0x3f < *(short *)(lVar15 + 0x3e))) {
      lVar27 = 0;
      lVar22 = puVar12[1];
      lVar21 = puVar12[8];
      lVar28 = (long)iVar25;
      lVar10 = (long)iVar25;
      do {
        *(short *)(lVar22 + lVar10 * 2 + lVar27 * 2) = (short)lVar27 + 0x3f;
        *(undefined **)(lVar21 + lVar28 * 8 + lVar27 * 8) = &UNK_10f51757c;
        iVar25 = iVar25 + 1;
        lVar27 = lVar27 + 1;
      } while ((int)lVar27 + 0x3f < (int)*(short *)(lVar15 + 0x3e));
    }
    *(undefined2 *)(puVar12[1] + (long)iVar25 * 2) = 0xffff;
    *(undefined **)(puVar12[8] + (long)iVar25 * 8) = &UNK_10f51757c;
    iVar25 = (int)param_1[10];
    *(int *)(param_1 + 10) = iVar25 + 1;
    *(int *)(param_5 + 8) = iVar25;
    FUN_108d71098(uVar14,0x38,iVar25,uVar32 + iVar4,0);
    lVar15 = param_1[2];
    plVar26 = param_1;
    FUN_108da68a8(param_1,puVar12);
    FUN_108d6aaec(lVar15,0xffffffff,plVar26,0xfffffffa);
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    uVar30 = uVar14;
    FUN_108d71098(uVar14,0x6c,*(undefined4 *)(param_5 + 4),0,0);
    if (lStack_a8 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(uVar14 + 0x30);
      FUN_108da84a4();
      FUN_108da95f4(param_1,lStack_a8,uVar13,0x10);
      *(uint *)(plVar29 + 5) = *(uint *)(plVar29 + 5) | 0x20000;
    }
    if (*(char *)((long)param_1 + 0x1f) == '\0') {
      iVar4 = *(int *)((long)param_1 + 0x54) + 1;
      *(int *)((long)param_1 + 0x54) = iVar4;
    }
    else {
      bVar2 = *(char *)((long)param_1 + 0x1f) - 1;
      *(byte *)((long)param_1 + 0x1f) = bVar2;
      iVar4 = *(int *)((long)param_1 + (ulong)bVar2 * 4 + 0x24);
    }
    FUN_108db1340(param_1,puVar12,*(undefined4 *)(param_5 + 4),iVar4,0,0,0,0);
    FUN_108d71098(uVar14,0x6e,*(undefined4 *)(param_5 + 8),iVar4,0);
    if (*(long *)(uVar14 + 8) != 0) {
      *(undefined1 *)(*(long *)(uVar14 + 8) + (long)*(int *)(uVar14 + 0x3c) * 0x18 + -0x15) = 0x10;
    }
    if (lStack_a8 != 0) {
      lVar15 = *(long *)(uVar14 + 0x30);
      if (((int)(uint)uVar13 < 0) && (lVar28 = *(long *)(lVar15 + 0x80), lVar28 != 0)) {
        *(undefined4 *)(lVar28 + (ulong)~(uint)uVar13 * 4) = *(undefined4 *)(uVar14 + 0x3c);
      }
      *(int *)(lVar15 + 100) = *(int *)(uVar14 + 0x3c) + -1;
    }
    FUN_108d71098(uVar14,9,*(undefined4 *)(param_5 + 4),(uint)uVar30 + 1,0);
    lVar15 = *(long *)(uVar14 + 8);
    uVar32 = *(uint *)(uVar14 + 0x3c);
    if (lVar15 != 0) {
      *(undefined1 *)(lVar15 + (long)(int)uVar32 * 0x18 + -0x15) = 3;
    }
    if ((uint)uVar30 < uVar32) {
      *(uint *)(lVar15 + (uVar30 & 0xffffffff) * 0x18 + 8) = uVar32;
    }
    *(uint *)(*(long *)(uVar14 + 0x30) + 100) = uVar32 - 1;
    if (iVar4 != 0) {
      bVar2 = *(byte *)((long)param_1 + 0x1f);
      if (bVar2 < 8) {
        puVar19 = (undefined1 *)((long)param_1 + 0x8e);
        iVar25 = 10;
        do {
          if (*(int *)(puVar19 + 6) == iVar4) {
            *puVar19 = 1;
            goto LAB_108db89fc;
          }
          puVar19 = puVar19 + 0x14;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        *(byte *)((long)param_1 + 0x1f) = bVar2 + 1;
        *(int *)((long)param_1 + (ulong)bVar2 * 4 + 0x24) = iVar4;
      }
    }
LAB_108db89fc:
    func_0x000108da8568(param_1);
    uVar32 = *(uint *)(uVar14 + 0x3c);
    if (uVar9 < uVar32) {
      *(uint *)(*(long *)(uVar14 + 8) + (ulong)uVar9 * 0x18 + 8) = uVar32;
    }
    *(uint *)(*(long *)(uVar14 + 0x30) + 100) = uVar32 - 1;
  }
LAB_108db8a30:
  func_0x000108d93df0(*param_1,lStack_a8);
  return;
}



/* Entry: 108dbaa34; end: 108dbaad7;  */

/* WARNING: Possible PIC construction at 0x000108dbaa74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108dbaab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108dbaa78) */
/* WARNING: Removing unreachable block (ram,0x000108dbaabc) */

void FUN_108dbaa34(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar4;
  long *unaff_x22;
  long *plVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar5 = unaff_x22;
  if (*(byte *)((long)param_2 + 0x39) != 0) {
    puVar4 = (undefined8 *)0x0;
    plVar5 = param_2 + 0x71;
    do {
      if ((*plVar5 != 0) && ((*(byte *)(*plVar5 + 0x29) >> 3 & 1) != 0)) {
        unaff_x30 = 0x108dbaa78;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar3 = (undefined8 *)plVar5[-1];
        unaff_x19 = param_2;
        unaff_x20 = param_1;
        unaff_x21 = puVar4;
        unaff_x22 = plVar5;
        unaff_x29 = puVar1;
        goto SUB_108d60660;
      }
      puVar4 = (undefined8 *)((long)puVar4 + 1);
      plVar5 = plVar5 + 0xb;
    } while (puVar4 < (undefined8 *)(ulong)(uint)*(byte *)((long)param_2 + 0x39));
  }
  FUN_108dbf118(param_2 + 0x2b);
  puVar4 = (undefined8 *)param_2[4];
  puVar3 = param_2;
  if (puVar4 != (undefined8 *)0x0) {
    param_2[4] = puVar4[8];
    FUN_108dbd640(param_1,puVar4);
    unaff_x30 = 0x108dbaabc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = puVar4;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = puVar4;
    unaff_x22 = plVar5;
    unaff_x29 = puVar1;
  }
SUB_108d60660:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((puVar3 < *(undefined8 **)(param_1 + 0x170)) ||
         (*(undefined8 **)(param_1 + 0x178) <= puVar3)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)puVar3;
      }
      else {
        uVar2 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar2;
      return;
    }
    if ((*(undefined8 **)(param_1 + 0x170) <= puVar3) &&
       (puVar3 < *(undefined8 **)(param_1 + 0x178))) {
      *puVar3 = *(undefined8 *)(param_1 + 0x168);
      *(undefined8 **)(param_1 + 0x168) = puVar3;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar4 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar4;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}



/* Entry: 108dbaad8; end: 108dbac87;  */

int FUN_108dbaad8(undefined8 *param_1,long param_2,ushort param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  ulong uVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  iVar6 = *(int *)((long)param_1 + 0x14);
  if (*(int *)(param_1 + 3) <= iVar6) {
    puVar9 = (undefined8 *)param_1[4];
    lVar8 = **(long **)*param_1;
    lVar3 = lVar8;
    FUN_108d6a6fc(lVar8,(long)*(int *)(param_1 + 3) * 0x70);
    param_1[4] = lVar3;
    if (lVar3 == 0) {
      if ((param_3 & 1) != 0) {
        func_0x000108d93df0(lVar8,param_2);
      }
      param_1[4] = puVar9;
      return 0;
    }
    _memcpy();
    if (puVar9 != param_1 + 5) {
      func_0x000108d60660(lVar8,puVar9);
    }
    uVar4 = param_1[4];
    if (((lVar8 == 0) || (uVar4 < *(ulong *)(lVar8 + 0x170))) ||
       (*(ulong *)(lVar8 + 0x178) <= uVar4)) {
      (*pcRam0000000113297950)();
      uVar2 = (uint)uVar4;
    }
    else {
      uVar2 = (uint)*(ushort *)(lVar8 + 0x150);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)(long)(int)uVar2 >> 3;
    iVar6 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    *(int *)(param_1 + 3) = iVar6;
    _bzero(param_1[4] + (long)*(int *)((long)param_1 + 0x14) * 0x38,
           ((long)iVar6 - (long)*(int *)((long)param_1 + 0x14)) * 0x38);
    iVar6 = *(int *)((long)param_1 + 0x14);
  }
  *(int *)((long)param_1 + 0x14) = iVar6 + 1;
  plVar10 = (long *)(param_1[4] + (long)iVar6 * 0x38);
  if (param_2 == 0) {
    *(undefined2 *)(plVar10 + 3) = 1;
  }
  else {
    if ((*(byte *)(param_2 + 6) >> 2 & 1) == 0) {
      sVar5 = 1;
    }
    else {
      sVar5 = (short)*(undefined4 *)(param_2 + 0x2c);
      FUN_108d93a54();
      sVar5 = sVar5 + -0x10e;
    }
    *(short *)(plVar10 + 3) = sVar5;
    do {
      if ((*(uint *)(param_2 + 4) >> 0xc & 1) == 0) break;
      if ((*(uint *)(param_2 + 4) >> 0x12 & 1) == 0) {
        plVar7 = (long *)(param_2 + 0x10);
      }
      else {
        plVar7 = *(long **)(*(long *)(param_2 + 0x20) + 8);
      }
      param_2 = *plVar7;
    } while (param_2 != 0);
  }
  *plVar10 = param_2;
  *(ushort *)((long)plVar10 + 0x1c) = param_3;
  plVar10[4] = (long)param_1;
  *(undefined4 *)(plVar10 + 1) = 0xffffffff;
  return iVar6;
}



/* Entry: 108dbac88; end: 108dbc0b7;  */

/* WARNING: Possible PIC construction at 0x000108d93e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93e1c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e30) */
/* WARNING: Removing unreachable block (ram,0x000108d93e3c) */
/* WARNING: Removing unreachable block (ram,0x000108d93e40) */
/* WARNING: Removing unreachable block (ram,0x000108d93e54) */
/* WARNING: Removing unreachable block (ram,0x000108d93e4c) */

void FUN_108dbac88(undefined8 *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  undefined2 uVar11;
  ushort uVar12;
  short sVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar22;
  long *plVar23;
  char *pcVar24;
  undefined8 *puVar25;
  ulong uVar26;
  byte bVar27;
  uint uVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  byte *pbVar32;
  int iVar33;
  ulong uVar34;
  ushort uVar35;
  long lVar36;
  ulong uVar37;
  byte *unaff_x19;
  undefined8 *puVar38;
  ulong uVar39;
  byte *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar40;
  undefined8 unaff_x22;
  short sVar41;
  byte *pbVar42;
  long lVar43;
  long lVar44;
  char *pcVar45;
  undefined8 uVar46;
  int iVar47;
  uint uVar48;
  ushort *puVar49;
  int iVar50;
  long *plVar51;
  long lVar52;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_c0;
  undefined *puStack_80;
  undefined4 uStack_78;
  
  puVar29 = (undefined8 *)*param_1;
  plVar51 = (long *)*puVar29;
  pbVar42 = (byte *)*plVar51;
  if (pbVar42[0x51] != 0) {
    return;
  }
  lVar43 = param_1[4];
  puVar38 = (undefined8 *)(lVar43 + (long)param_2 * 0x38);
  pbVar40 = (byte *)*puVar38;
  pcVar45 = *(char **)(pbVar40 + 0x10);
  uVar39 = (long)puVar29 + 0x54;
  FUN_108dbc0b8(uVar39,pcVar45);
  bVar27 = *pbVar40;
  if (bVar27 == 0x4c) {
    uVar26 = 0;
    puVar38[5] = 0;
  }
  else if (bVar27 == 0x4b) {
    uVar26 = (long)puVar29 + 0x54;
    if ((pbVar40[5] >> 3 & 1) == 0) {
      FUN_108db834c();
    }
    else {
      FUN_108dbc180(uVar26,*(undefined8 *)(pbVar40 + 0x20));
    }
    puVar38[5] = uVar26;
  }
  else {
    uVar26 = (long)puVar29 + 0x54;
    FUN_108dbc0b8(uVar26,*(undefined8 *)(pbVar40 + 0x18));
    puVar38[5] = uVar26;
  }
  uVar34 = (long)puVar29 + 0x54;
  FUN_108dbc0b8(uVar34,pbVar40);
  if ((pbVar40[4] & 1) == 0) {
    uVar37 = 0;
  }
  else {
    if (0 < (int)*(uint *)((long)puVar29 + 0x54)) {
      uVar37 = 0;
      do {
        if (*(int *)((long)puVar29 + uVar37 * 4 + 0x58) == (int)*(short *)(pbVar40 + 0x34)) {
          uVar37 = 1L << (uVar37 & 0x3f);
          goto LAB_108dbadd4;
        }
        uVar37 = uVar37 + 1;
      } while (*(uint *)((long)puVar29 + 0x54) != uVar37);
    }
    uVar37 = 0;
LAB_108dbadd4:
    uVar34 = uVar37 | uVar34;
    uVar37 = uVar37 - 1;
  }
  puVar38[6] = uVar34;
  puVar38[1] = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar38 + 0x1a) = 0;
  uVar28 = (uint)bVar27;
  if ((uVar28 - 0x4d < 0xfffffffe) && (4 < uVar28 - 0x4f)) {
    if (uVar28 == 0x47) {
      pbVar18 = pbVar42;
      FUN_108d6a6fc(pbVar42,0x1f0);
      if (pbVar18 == (byte *)0x0) {
        puVar38[2] = 0;
      }
      else {
        pbVar18[0x1d8] = 0;
        pbVar18[0x1d9] = 0;
        pbVar18[0x1da] = 0;
        pbVar18[0x1db] = 0;
        pbVar18[0x1dc] = 0;
        pbVar18[0x1dd] = 0;
        pbVar18[0x1de] = 0;
        pbVar18[0x1df] = 0;
        pbVar18[0x1d0] = 0;
        pbVar18[0x1d1] = 0;
        pbVar18[0x1d2] = 0;
        pbVar18[0x1d3] = 0;
        pbVar18[0x1d4] = 0;
        pbVar18[0x1d5] = 0;
        pbVar18[0x1d6] = 0;
        pbVar18[0x1d7] = 0;
        pbVar18[0x1e8] = 0;
        pbVar18[0x1e9] = 0;
        pbVar18[0x1ea] = 0;
        pbVar18[0x1eb] = 0;
        pbVar18[0x1ec] = 0;
        pbVar18[0x1ed] = 0;
        pbVar18[0x1ee] = 0;
        pbVar18[0x1ef] = 0;
        pbVar18[0x1e0] = 0;
        pbVar18[0x1e1] = 0;
        pbVar18[0x1e2] = 0;
        pbVar18[0x1e3] = 0;
        pbVar18[0x1e4] = 0;
        pbVar18[0x1e5] = 0;
        pbVar18[0x1e6] = 0;
        pbVar18[0x1e7] = 0;
        pbVar18[0x1b8] = 0;
        pbVar18[0x1b9] = 0;
        pbVar18[0x1ba] = 0;
        pbVar18[0x1bb] = 0;
        pbVar18[0x1bc] = 0;
        pbVar18[0x1bd] = 0;
        pbVar18[0x1be] = 0;
        pbVar18[0x1bf] = 0;
        pbVar18[0x1b0] = 0;
        pbVar18[0x1b1] = 0;
        pbVar18[0x1b2] = 0;
        pbVar18[0x1b3] = 0;
        pbVar18[0x1b4] = 0;
        pbVar18[0x1b5] = 0;
        pbVar18[0x1b6] = 0;
        pbVar18[0x1b7] = 0;
        pbVar18[0x1c8] = 0;
        pbVar18[0x1c9] = 0;
        pbVar18[0x1ca] = 0;
        pbVar18[0x1cb] = 0;
        pbVar18[0x1cc] = 0;
        pbVar18[0x1cd] = 0;
        pbVar18[0x1ce] = 0;
        pbVar18[0x1cf] = 0;
        pbVar18[0x1c0] = 0;
        pbVar18[0x1c1] = 0;
        pbVar18[0x1c2] = 0;
        pbVar18[0x1c3] = 0;
        pbVar18[0x1c4] = 0;
        pbVar18[0x1c5] = 0;
        pbVar18[0x1c6] = 0;
        pbVar18[0x1c7] = 0;
        pbVar18[0x198] = 0;
        pbVar18[0x199] = 0;
        pbVar18[0x19a] = 0;
        pbVar18[0x19b] = 0;
        pbVar18[0x19c] = 0;
        pbVar18[0x19d] = 0;
        pbVar18[0x19e] = 0;
        pbVar18[0x19f] = 0;
        pbVar18[400] = 0;
        pbVar18[0x191] = 0;
        pbVar18[0x192] = 0;
        pbVar18[0x193] = 0;
        pbVar18[0x194] = 0;
        pbVar18[0x195] = 0;
        pbVar18[0x196] = 0;
        pbVar18[0x197] = 0;
        pbVar18[0x1a8] = 0;
        pbVar18[0x1a9] = 0;
        pbVar18[0x1aa] = 0;
        pbVar18[0x1ab] = 0;
        pbVar18[0x1ac] = 0;
        pbVar18[0x1ad] = 0;
        pbVar18[0x1ae] = 0;
        pbVar18[0x1af] = 0;
        pbVar18[0x1a0] = 0;
        pbVar18[0x1a1] = 0;
        pbVar18[0x1a2] = 0;
        pbVar18[0x1a3] = 0;
        pbVar18[0x1a4] = 0;
        pbVar18[0x1a5] = 0;
        pbVar18[0x1a6] = 0;
        pbVar18[0x1a7] = 0;
        pbVar18[0x178] = 0;
        pbVar18[0x179] = 0;
        pbVar18[0x17a] = 0;
        pbVar18[0x17b] = 0;
        pbVar18[0x17c] = 0;
        pbVar18[0x17d] = 0;
        pbVar18[0x17e] = 0;
        pbVar18[0x17f] = 0;
        pbVar18[0x170] = 0;
        pbVar18[0x171] = 0;
        pbVar18[0x172] = 0;
        pbVar18[0x173] = 0;
        pbVar18[0x174] = 0;
        pbVar18[0x175] = 0;
        pbVar18[0x176] = 0;
        pbVar18[0x177] = 0;
        pbVar18[0x188] = 0;
        pbVar18[0x189] = 0;
        pbVar18[0x18a] = 0;
        pbVar18[0x18b] = 0;
        pbVar18[0x18c] = 0;
        pbVar18[0x18d] = 0;
        pbVar18[0x18e] = 0;
        pbVar18[399] = 0;
        pbVar18[0x180] = 0;
        pbVar18[0x181] = 0;
        pbVar18[0x182] = 0;
        pbVar18[0x183] = 0;
        pbVar18[0x184] = 0;
        pbVar18[0x185] = 0;
        pbVar18[0x186] = 0;
        pbVar18[0x187] = 0;
        pbVar18[0x158] = 0;
        pbVar18[0x159] = 0;
        pbVar18[0x15a] = 0;
        pbVar18[0x15b] = 0;
        pbVar18[0x15c] = 0;
        pbVar18[0x15d] = 0;
        pbVar18[0x15e] = 0;
        pbVar18[0x15f] = 0;
        pbVar18[0x150] = 0;
        pbVar18[0x151] = 0;
        pbVar18[0x152] = 0;
        pbVar18[0x153] = 0;
        pbVar18[0x154] = 0;
        pbVar18[0x155] = 0;
        pbVar18[0x156] = 0;
        pbVar18[0x157] = 0;
        pbVar18[0x168] = 0;
        pbVar18[0x169] = 0;
        pbVar18[0x16a] = 0;
        pbVar18[0x16b] = 0;
        pbVar18[0x16c] = 0;
        pbVar18[0x16d] = 0;
        pbVar18[0x16e] = 0;
        pbVar18[0x16f] = 0;
        pbVar18[0x160] = 0;
        pbVar18[0x161] = 0;
        pbVar18[0x162] = 0;
        pbVar18[0x163] = 0;
        pbVar18[0x164] = 0;
        pbVar18[0x165] = 0;
        pbVar18[0x166] = 0;
        pbVar18[0x167] = 0;
        pbVar18[0x138] = 0;
        pbVar18[0x139] = 0;
        pbVar18[0x13a] = 0;
        pbVar18[0x13b] = 0;
        pbVar18[0x13c] = 0;
        pbVar18[0x13d] = 0;
        pbVar18[0x13e] = 0;
        pbVar18[0x13f] = 0;
        pbVar18[0x130] = 0;
        pbVar18[0x131] = 0;
        pbVar18[0x132] = 0;
        pbVar18[0x133] = 0;
        pbVar18[0x134] = 0;
        pbVar18[0x135] = 0;
        pbVar18[0x136] = 0;
        pbVar18[0x137] = 0;
        pbVar18[0x148] = 0;
        pbVar18[0x149] = 0;
        pbVar18[0x14a] = 0;
        pbVar18[0x14b] = 0;
        pbVar18[0x14c] = 0;
        pbVar18[0x14d] = 0;
        pbVar18[0x14e] = 0;
        pbVar18[0x14f] = 0;
        pbVar18[0x140] = 0;
        pbVar18[0x141] = 0;
        pbVar18[0x142] = 0;
        pbVar18[0x143] = 0;
        pbVar18[0x144] = 0;
        pbVar18[0x145] = 0;
        pbVar18[0x146] = 0;
        pbVar18[0x147] = 0;
        pbVar18[0x118] = 0;
        pbVar18[0x119] = 0;
        pbVar18[0x11a] = 0;
        pbVar18[0x11b] = 0;
        pbVar18[0x11c] = 0;
        pbVar18[0x11d] = 0;
        pbVar18[0x11e] = 0;
        pbVar18[0x11f] = 0;
        pbVar18[0x110] = 0;
        pbVar18[0x111] = 0;
        pbVar18[0x112] = 0;
        pbVar18[0x113] = 0;
        pbVar18[0x114] = 0;
        pbVar18[0x115] = 0;
        pbVar18[0x116] = 0;
        pbVar18[0x117] = 0;
        pbVar18[0x128] = 0;
        pbVar18[0x129] = 0;
        pbVar18[0x12a] = 0;
        pbVar18[299] = 0;
        pbVar18[300] = 0;
        pbVar18[0x12d] = 0;
        pbVar18[0x12e] = 0;
        pbVar18[0x12f] = 0;
        pbVar18[0x120] = 0;
        pbVar18[0x121] = 0;
        pbVar18[0x122] = 0;
        pbVar18[0x123] = 0;
        pbVar18[0x124] = 0;
        pbVar18[0x125] = 0;
        pbVar18[0x126] = 0;
        pbVar18[0x127] = 0;
        pbVar18[0xf8] = 0;
        pbVar18[0xf9] = 0;
        pbVar18[0xfa] = 0;
        pbVar18[0xfb] = 0;
        pbVar18[0xfc] = 0;
        pbVar18[0xfd] = 0;
        pbVar18[0xfe] = 0;
        pbVar18[0xff] = 0;
        pbVar18[0xf0] = 0;
        pbVar18[0xf1] = 0;
        pbVar18[0xf2] = 0;
        pbVar18[0xf3] = 0;
        pbVar18[0xf4] = 0;
        pbVar18[0xf5] = 0;
        pbVar18[0xf6] = 0;
        pbVar18[0xf7] = 0;
        pbVar18[0x108] = 0;
        pbVar18[0x109] = 0;
        pbVar18[0x10a] = 0;
        pbVar18[0x10b] = 0;
        pbVar18[0x10c] = 0;
        pbVar18[0x10d] = 0;
        pbVar18[0x10e] = 0;
        pbVar18[0x10f] = 0;
        pbVar18[0x100] = 0;
        pbVar18[0x101] = 0;
        pbVar18[0x102] = 0;
        pbVar18[0x103] = 0;
        pbVar18[0x104] = 0;
        pbVar18[0x105] = 0;
        pbVar18[0x106] = 0;
        pbVar18[0x107] = 0;
        pbVar18[0xd8] = 0;
        pbVar18[0xd9] = 0;
        pbVar18[0xda] = 0;
        pbVar18[0xdb] = 0;
        pbVar18[0xdc] = 0;
        pbVar18[0xdd] = 0;
        pbVar18[0xde] = 0;
        pbVar18[0xdf] = 0;
        pbVar18[0xd0] = 0;
        pbVar18[0xd1] = 0;
        pbVar18[0xd2] = 0;
        pbVar18[0xd3] = 0;
        pbVar18[0xd4] = 0;
        pbVar18[0xd5] = 0;
        pbVar18[0xd6] = 0;
        pbVar18[0xd7] = 0;
        pbVar18[0xe8] = 0;
        pbVar18[0xe9] = 0;
        pbVar18[0xea] = 0;
        pbVar18[0xeb] = 0;
        pbVar18[0xec] = 0;
        pbVar18[0xed] = 0;
        pbVar18[0xee] = 0;
        pbVar18[0xef] = 0;
        pbVar18[0xe0] = 0;
        pbVar18[0xe1] = 0;
        pbVar18[0xe2] = 0;
        pbVar18[0xe3] = 0;
        pbVar18[0xe4] = 0;
        pbVar18[0xe5] = 0;
        pbVar18[0xe6] = 0;
        pbVar18[0xe7] = 0;
        pbVar18[0xb8] = 0;
        pbVar18[0xb9] = 0;
        pbVar18[0xba] = 0;
        pbVar18[0xbb] = 0;
        pbVar18[0xbc] = 0;
        pbVar18[0xbd] = 0;
        pbVar18[0xbe] = 0;
        pbVar18[0xbf] = 0;
        pbVar18[0xb0] = 0;
        pbVar18[0xb1] = 0;
        pbVar18[0xb2] = 0;
        pbVar18[0xb3] = 0;
        pbVar18[0xb4] = 0;
        pbVar18[0xb5] = 0;
        pbVar18[0xb6] = 0;
        pbVar18[0xb7] = 0;
        pbVar18[200] = 0;
        pbVar18[0xc9] = 0;
        pbVar18[0xca] = 0;
        pbVar18[0xcb] = 0;
        pbVar18[0xcc] = 0;
        pbVar18[0xcd] = 0;
        pbVar18[0xce] = 0;
        pbVar18[0xcf] = 0;
        pbVar18[0xc0] = 0;
        pbVar18[0xc1] = 0;
        pbVar18[0xc2] = 0;
        pbVar18[0xc3] = 0;
        pbVar18[0xc4] = 0;
        pbVar18[0xc5] = 0;
        pbVar18[0xc6] = 0;
        pbVar18[199] = 0;
        pbVar18[0x98] = 0;
        pbVar18[0x99] = 0;
        pbVar18[0x9a] = 0;
        pbVar18[0x9b] = 0;
        pbVar18[0x9c] = 0;
        pbVar18[0x9d] = 0;
        pbVar18[0x9e] = 0;
        pbVar18[0x9f] = 0;
        pbVar18[0x90] = 0;
        pbVar18[0x91] = 0;
        pbVar18[0x92] = 0;
        pbVar18[0x93] = 0;
        pbVar18[0x94] = 0;
        pbVar18[0x95] = 0;
        pbVar18[0x96] = 0;
        pbVar18[0x97] = 0;
        pbVar18[0xa8] = 0;
        pbVar18[0xa9] = 0;
        pbVar18[0xaa] = 0;
        pbVar18[0xab] = 0;
        pbVar18[0xac] = 0;
        pbVar18[0xad] = 0;
        pbVar18[0xae] = 0;
        pbVar18[0xaf] = 0;
        pbVar18[0xa0] = 0;
        pbVar18[0xa1] = 0;
        pbVar18[0xa2] = 0;
        pbVar18[0xa3] = 0;
        pbVar18[0xa4] = 0;
        pbVar18[0xa5] = 0;
        pbVar18[0xa6] = 0;
        pbVar18[0xa7] = 0;
        pbVar18[0x78] = 0;
        pbVar18[0x79] = 0;
        pbVar18[0x7a] = 0;
        pbVar18[0x7b] = 0;
        pbVar18[0x7c] = 0;
        pbVar18[0x7d] = 0;
        pbVar18[0x7e] = 0;
        pbVar18[0x7f] = 0;
        pbVar18[0x70] = 0;
        pbVar18[0x71] = 0;
        pbVar18[0x72] = 0;
        pbVar18[0x73] = 0;
        pbVar18[0x74] = 0;
        pbVar18[0x75] = 0;
        pbVar18[0x76] = 0;
        pbVar18[0x77] = 0;
        pbVar18[0x88] = 0;
        pbVar18[0x89] = 0;
        pbVar18[0x8a] = 0;
        pbVar18[0x8b] = 0;
        pbVar18[0x8c] = 0;
        pbVar18[0x8d] = 0;
        pbVar18[0x8e] = 0;
        pbVar18[0x8f] = 0;
        pbVar18[0x80] = 0;
        pbVar18[0x81] = 0;
        pbVar18[0x82] = 0;
        pbVar18[0x83] = 0;
        pbVar18[0x84] = 0;
        pbVar18[0x85] = 0;
        pbVar18[0x86] = 0;
        pbVar18[0x87] = 0;
        pbVar18[0x58] = 0;
        pbVar18[0x59] = 0;
        pbVar18[0x5a] = 0;
        pbVar18[0x5b] = 0;
        pbVar18[0x5c] = 0;
        pbVar18[0x5d] = 0;
        pbVar18[0x5e] = 0;
        pbVar18[0x5f] = 0;
        pbVar18[0x50] = 0;
        pbVar18[0x51] = 0;
        pbVar18[0x52] = 0;
        pbVar18[0x53] = 0;
        pbVar18[0x54] = 0;
        pbVar18[0x55] = 0;
        pbVar18[0x56] = 0;
        pbVar18[0x57] = 0;
        pbVar18[0x68] = 0;
        pbVar18[0x69] = 0;
        pbVar18[0x6a] = 0;
        pbVar18[0x6b] = 0;
        pbVar18[0x6c] = 0;
        pbVar18[0x6d] = 0;
        pbVar18[0x6e] = 0;
        pbVar18[0x6f] = 0;
        pbVar18[0x60] = 0;
        pbVar18[0x61] = 0;
        pbVar18[0x62] = 0;
        pbVar18[99] = 0;
        pbVar18[100] = 0;
        pbVar18[0x65] = 0;
        pbVar18[0x66] = 0;
        pbVar18[0x67] = 0;
        pbVar18[0x38] = 0;
        pbVar18[0x39] = 0;
        pbVar18[0x3a] = 0;
        pbVar18[0x3b] = 0;
        pbVar18[0x3c] = 0;
        pbVar18[0x3d] = 0;
        pbVar18[0x3e] = 0;
        pbVar18[0x3f] = 0;
        pbVar18[0x30] = 0;
        pbVar18[0x31] = 0;
        pbVar18[0x32] = 0;
        pbVar18[0x33] = 0;
        pbVar18[0x34] = 0;
        pbVar18[0x35] = 0;
        pbVar18[0x36] = 0;
        pbVar18[0x37] = 0;
        pbVar18[0x48] = 0;
        pbVar18[0x49] = 0;
        pbVar18[0x4a] = 0;
        pbVar18[0x4b] = 0;
        pbVar18[0x4c] = 0;
        pbVar18[0x4d] = 0;
        pbVar18[0x4e] = 0;
        pbVar18[0x4f] = 0;
        pbVar18[0x40] = 0;
        pbVar18[0x41] = 0;
        pbVar18[0x42] = 0;
        pbVar18[0x43] = 0;
        pbVar18[0x44] = 0;
        pbVar18[0x45] = 0;
        pbVar18[0x46] = 0;
        pbVar18[0x47] = 0;
        pbVar18[0x18] = 0;
        pbVar18[0x19] = 0;
        pbVar18[0x1a] = 0;
        pbVar18[0x1b] = 0;
        pbVar18[0x1c] = 0;
        pbVar18[0x1d] = 0;
        pbVar18[0x1e] = 0;
        pbVar18[0x1f] = 0;
        pbVar18[0x10] = 0;
        pbVar18[0x11] = 0;
        pbVar18[0x12] = 0;
        pbVar18[0x13] = 0;
        pbVar18[0x14] = 0;
        pbVar18[0x15] = 0;
        pbVar18[0x16] = 0;
        pbVar18[0x17] = 0;
        pbVar18[0x28] = 0;
        pbVar18[0x29] = 0;
        pbVar18[0x2a] = 0;
        pbVar18[0x2b] = 0;
        pbVar18[0x2c] = 0;
        pbVar18[0x2d] = 0;
        pbVar18[0x2e] = 0;
        pbVar18[0x2f] = 0;
        pbVar18[0x20] = 0;
        pbVar18[0x21] = 0;
        pbVar18[0x22] = 0;
        pbVar18[0x23] = 0;
        pbVar18[0x24] = 0;
        pbVar18[0x25] = 0;
        pbVar18[0x26] = 0;
        pbVar18[0x27] = 0;
        pbVar18[8] = 0;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        pbVar18[0] = 0;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[3] = 0;
        pbVar18[4] = 0;
        pbVar18[5] = 0;
        pbVar18[6] = 0;
        pbVar18[7] = 0;
        puVar38[2] = pbVar18;
        *(ushort *)((long)puVar38 + 0x1c) = *(ushort *)((long)puVar38 + 0x1c) | 0x10;
        *(undefined8 **)pbVar18 = puVar29;
        pbVar18[8] = 0;
        pbVar18[9] = 0;
        pbVar18[10] = 0;
        pbVar18[0xb] = 0;
        pbVar18[0xc] = 0;
        pbVar18[0xd] = 0;
        pbVar18[0xe] = 0;
        pbVar18[0xf] = 0;
        pbVar18[0x14] = 0;
        pbVar18[0x15] = 0;
        pbVar18[0x16] = 0;
        pbVar18[0x17] = 0;
        pbVar18[0x18] = 8;
        pbVar18[0x19] = 0;
        pbVar18[0x1a] = 0;
        pbVar18[0x1b] = 0;
        *(byte **)(pbVar18 + 0x20) = pbVar18 + 0x28;
        FUN_108db7bc4();
        if (0 < *(int *)(pbVar18 + 0x14)) {
          uVar28 = *(int *)(pbVar18 + 0x14) + 1;
          do {
            FUN_108dbac88(pbVar18,uVar28 - 2);
            uVar28 = uVar28 - 1;
          } while (1 < uVar28);
        }
        if (pbVar42[0x51] == 0) {
          iVar47 = *(int *)(pbVar18 + 0x14);
          if (iVar47 < 1) {
            uStack_c0 = 0xffffffffffffffff;
            pbVar18[0x1e8] = 0xff;
            pbVar18[0x1e9] = 0xff;
            pbVar18[0x1ea] = 0xff;
            pbVar18[0x1eb] = 0xff;
            pbVar18[0x1ec] = 0xff;
            pbVar18[0x1ed] = 0xff;
            pbVar18[0x1ee] = 0xff;
            pbVar18[0x1ef] = 0xff;
            *(undefined2 *)((long)puVar38 + 0x1a) = 0x100;
LAB_108dbb794:
            bVar15 = true;
            iVar47 = -1;
            iVar33 = 0;
LAB_108dbb7a4:
            if (0 < *(int *)(pbVar18 + 0x14)) {
              lVar52 = *(long *)(pbVar18 + 0x20);
              puVar49 = (ushort *)(lVar52 + 0x1c);
              iVar50 = *(int *)(pbVar18 + 0x14);
              do {
                *(ushort *)(lVar52 + 0x1c) = *(ushort *)(lVar52 + 0x1c) & 0xffbf;
                iVar4 = *(int *)(lVar52 + 0xc);
                if (iVar4 != iVar47) {
                  if (0 < (int)*(uint *)((long)puVar29 + 0x54)) {
                    uVar39 = 0;
                    do {
                      if (*(int *)((long)puVar29 + uVar39 * 4 + 0x58) == iVar4) {
                        uVar39 = 1L << (uVar39 & 0x3f);
                        goto LAB_108dbb808;
                      }
                      uVar39 = uVar39 + 1;
                    } while (*(uint *)((long)puVar29 + 0x54) != uVar39);
                  }
                  uVar39 = 0;
LAB_108dbb808:
                  if ((uVar39 & uStack_c0) != 0) goto LAB_108dbb82c;
                }
                lVar52 = lVar52 + 0x38;
                puVar49 = puVar49 + 0x1c;
                bVar22 = iVar50 < 2;
                iVar50 = iVar50 + -1;
                if (bVar22) break;
              } while( true );
            }
            goto LAB_108dbb8dc;
          }
          uStack_c0 = 0xffffffffffffffff;
          lVar52 = *(long *)(pbVar18 + 0x20);
          uVar39 = 0xffffffffffffffff;
          do {
            if ((*(ushort *)(lVar52 + 0x1a) & 0xff) == 0) {
              pbVar32 = pbVar42;
              FUN_108d6a6fc(pbVar42,0x1e8);
              if (pbVar32 == (byte *)0x0) {
                uStack_c0 = 0;
              }
              else {
                *(byte **)(lVar52 + 0x10) = pbVar32;
                *(ushort *)(lVar52 + 0x1c) = *(ushort *)(lVar52 + 0x1c) | 0x20;
                *(undefined2 *)(lVar52 + 0x1a) = 0x200;
                *(undefined8 *)pbVar32 = *param_1;
                pbVar32[8] = 0;
                pbVar32[9] = 0;
                pbVar32[10] = 0;
                pbVar32[0xb] = 0;
                pbVar32[0xc] = 0;
                pbVar32[0xd] = 0;
                pbVar32[0xe] = 0;
                pbVar32[0xf] = 0;
                pbVar32[0x14] = 0;
                pbVar32[0x15] = 0;
                pbVar32[0x16] = 0;
                pbVar32[0x17] = 0;
                pbVar32[0x18] = 8;
                pbVar32[0x19] = 0;
                pbVar32[0x1a] = 0;
                pbVar32[0x1b] = 0;
                *(byte **)(pbVar32 + 0x20) = pbVar32 + 0x28;
                FUN_108db7bc4();
                if (0 < *(int *)(pbVar32 + 0x14)) {
                  uVar28 = *(int *)(pbVar32 + 0x14) + 1;
                  do {
                    FUN_108dbac88(pbVar32,uVar28 - 2);
                    uVar28 = uVar28 - 1;
                  } while (1 < uVar28);
                }
                *(undefined8 **)(pbVar32 + 8) = param_1;
                if (pbVar42[0x51] == 0) {
                  uVar26 = 0;
                  if (0 < *(int *)(pbVar32 + 0x14)) {
                    iVar33 = 0;
                    puVar25 = *(undefined8 **)(pbVar32 + 0x20);
                    do {
                      if (*(byte *)*puVar25 - 0x4b < 9 &&
                          (1 << (ulong)(*(byte *)*puVar25 - 0x4b & 0x1f) & 499U) != 0) {
                        if (0 < (int)*(uint *)((long)puVar29 + 0x54)) {
                          uVar34 = 0;
                          do {
                            if (*(int *)((long)puVar29 + uVar34 * 4 + 0x58) ==
                                *(int *)((long)puVar25 + 0xc)) {
                              uVar34 = 1L << (uVar34 & 0x3f);
                              goto LAB_108dbb2fc;
                            }
                            uVar34 = uVar34 + 1;
                          } while (*(uint *)((long)puVar29 + 0x54) != uVar34);
                        }
                        uVar34 = 0;
LAB_108dbb2fc:
                        uVar26 = uVar34 | uVar26;
                      }
                      iVar33 = iVar33 + 1;
                      puVar25 = puVar25 + 7;
                    } while (iVar33 != *(int *)(pbVar32 + 0x14));
                  }
                }
                else {
                  uVar26 = 0;
                }
                uVar39 = uVar26 & uVar39;
                uStack_c0 = 0;
              }
            }
            else {
              uVar35 = *(ushort *)(lVar52 + 0x1c);
              if ((uVar35 >> 3 & 1) == 0) {
                uVar28 = *(uint *)((long)puVar29 + 0x54);
                if ((int)uVar28 < 1) {
                  uVar34 = 0;
                  uVar26 = 0;
                  if ((uVar35 >> 1 & 1) != 0) goto LAB_108dbb320;
                }
                else {
                  uVar26 = 0;
                  do {
                    if (*(int *)((long)puVar29 + uVar26 * 4 + 0x58) == *(int *)(lVar52 + 0xc)) {
                      uVar34 = 1L << (uVar26 & 0x3f);
                      goto LAB_108dbb244;
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar28 != uVar26);
                  uVar34 = 0;
LAB_108dbb244:
                  if ((uVar35 >> 1 & 1) != 0) {
                    uVar26 = 0;
                    do {
                      if (*(int *)((long)puVar29 + uVar26 * 4 + 0x58) ==
                          *(int *)(*(long *)(pbVar18 + 0x20) + (long)*(int *)(lVar52 + 8) * 0x38 +
                                  0xc)) {
                        uVar26 = 1L << (uVar26 & 0x3f);
                        goto LAB_108dbb320;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar28 != uVar26);
                    uVar26 = 0;
LAB_108dbb320:
                    uVar34 = uVar26 | uVar34;
                  }
                }
                uVar39 = uVar34 & uVar39;
                uVar34 = uVar34 & uStack_c0;
                uStack_c0 = 0;
                if ((*(ushort *)(lVar52 + 0x1a) & 2) != 0) {
                  uStack_c0 = uVar34;
                }
              }
            }
            if (iVar47 < 2) break;
            iVar47 = iVar47 + -1;
            lVar52 = lVar52 + 0x38;
          } while (uVar39 != 0);
          *(ulong *)(pbVar18 + 0x1e8) = uVar39;
          if (uVar39 == 0) {
            *(undefined2 *)((long)puVar38 + 0x1a) = 0;
          }
          else {
            iVar47 = *(int *)(pbVar18 + 0x14);
            *(undefined2 *)((long)puVar38 + 0x1a) = 0x100;
            if (iVar47 == 2) {
              lVar52 = 0;
              plVar23 = *(long **)(pbVar18 + 0x20);
LAB_108dbb378:
              if (*(short *)((long)plVar23 + 0x1a) == 0x200) {
                if ((*(int *)(plVar23[2] + 0x14) <= lVar52) ||
                   (lVar30 = *(long *)(plVar23[2] + 0x20), lVar30 == 0)) goto LAB_108dbb784;
                plVar20 = (long *)(lVar30 + lVar52 * 0x38);
              }
              else {
                plVar20 = plVar23;
                if (lVar52 != 0) goto LAB_108dbb784;
              }
              lVar30 = 0;
              lVar52 = lVar52 + 1;
              do {
                if (*(short *)((long)plVar23 + 0x52) == 0x200) {
                  if ((*(int *)(plVar23[9] + 0x14) <= lVar30) ||
                     (lVar36 = *(long *)(plVar23[9] + 0x20),
                     plVar31 = (long *)(lVar36 + lVar30 * 0x38), lVar36 == 0)) goto LAB_108dbb378;
                }
                else {
                  plVar31 = plVar23 + 7;
                  if (lVar30 != 0) goto LAB_108dbb378;
                }
                if (((*(ushort *)((long)plVar20 + 0x1a) & 0x3e) != 0 &&
                     (*(ushort *)((long)plVar31 + 0x1a) & 0x3e) != 0) &&
                   (uVar35 = *(ushort *)((long)plVar31 + 0x1a) | *(ushort *)((long)plVar20 + 0x1a),
                   (uVar35 & 0xffe5) == 0 || (uVar35 & 0xffd9) == 0)) {
                  lVar44 = *plVar20;
                  uVar46 = *(undefined8 *)(lVar44 + 0x10);
                  lVar36 = *plVar31;
                  FUN_108daa04c(uVar46,*(undefined8 *)(lVar36 + 0x10),0xffffffff);
                  if ((int)uVar46 == 0) {
                    uVar46 = *(undefined8 *)(lVar44 + 0x18);
                    FUN_108daa04c(uVar46,*(undefined8 *)(lVar36 + 0x18),0xffffffff);
                    if ((int)uVar46 == 0) {
                      puVar19 = (undefined1 *)**(undefined8 **)*param_1;
                      FUN_108daa624(puVar19,lVar44,0,0);
                      if (puVar19 != (undefined1 *)0x0) {
                        uVar48 = (uint)uVar35;
                        uVar28 = 0x20;
                        if ((uVar35 & 0x18) != 0) {
                          uVar28 = 8;
                        }
                        if ((uVar48 + 0x3f & uVar48) != 0) {
                          uVar48 = uVar28;
                        }
                        iVar47 = 0x4e;
                        do {
                          uVar28 = iVar47 - 0x4e;
                          iVar47 = iVar47 + 1;
                        } while (2 << (ulong)(uVar28 & 0x1f) != uVar48);
                        *puVar19 = (char)iVar47;
                        puVar38 = param_1;
                        FUN_108dbaad8(param_1,puVar19,3);
                        FUN_108dbac88(param_1,puVar38);
                      }
                    }
                  }
                }
                lVar30 = lVar30 + 1;
                plVar23 = *(long **)(pbVar18 + 0x20);
              } while( true );
            }
          }
LAB_108dbb784:
          if (uStack_c0 != 0) goto LAB_108dbb794;
        }
      }
      goto LAB_108dbb538;
    }
    if ((uVar28 == 0x4a) && (*(char *)(param_1 + 2) == 'H')) {
      lVar52 = 0;
      lVar43 = *(long *)(pbVar40 + 0x20);
      bVar15 = true;
      do {
        bVar22 = bVar15;
        uVar9 = (&UNK_10dfa2d95)[lVar52];
        pbVar18 = pbVar42;
        FUN_108daa624(pbVar42,*(undefined8 *)(pbVar40 + 0x10),0,0);
        pbVar32 = pbVar42;
        FUN_108daa624(pbVar42,*(undefined8 *)(*(long *)(lVar43 + 8) + lVar52 * 0x20),0,0);
        plVar23 = plVar51;
        func_0x000108d99b04(plVar51,uVar9,pbVar18,pbVar32,0);
        if (plVar23 != (long *)0x0) {
          *(uint *)((long)plVar23 + 4) = *(uint *)((long)plVar23 + 4) | *(uint *)(pbVar40 + 4) & 1;
          *(undefined2 *)((long)plVar23 + 0x34) = *(undefined2 *)(pbVar40 + 0x34);
        }
        puVar38 = param_1;
        FUN_108dbaad8(param_1,plVar23,3);
        FUN_108dbac88(param_1,puVar38);
        lVar30 = param_1[4];
        lVar52 = lVar30 + (long)(int)puVar38 * 0x38;
        *(int *)(lVar52 + 8) = param_2;
        lVar36 = lVar30 + (long)param_2 * 0x38;
        *(undefined2 *)(lVar52 + 0x18) = *(undefined2 *)(lVar36 + 0x18);
        *(char *)(lVar36 + 0x1e) = *(char *)(lVar36 + 0x1e) + '\x01';
        lVar52 = 1;
        bVar15 = false;
      } while (bVar22);
      puVar38 = (undefined8 *)(lVar30 + (long)param_2 * 0x38);
    }
  }
  else {
    while ((pcVar45 != (char *)0x0 && ((*(uint *)(pcVar45 + 4) >> 0xc & 1) != 0))) {
      if ((*(uint *)(pcVar45 + 4) >> 0x12 & 1) == 0) {
        pcVar45 = pcVar45 + 0x10;
      }
      else {
        pcVar45 = *(char **)(*(long *)(pcVar45 + 0x20) + 8);
      }
      pcVar45 = *(char **)pcVar45;
    }
    pcVar24 = *(char **)(pbVar40 + 0x18);
    while ((pcVar24 != (char *)0x0 && ((*(uint *)(pcVar24 + 4) >> 0xc & 1) != 0))) {
      if ((*(uint *)(pcVar24 + 4) >> 0x12 & 1) == 0) {
        pcVar24 = pcVar24 + 0x10;
      }
      else {
        pcVar24 = *(char **)(*(long *)(pcVar24 + 0x20) + 8);
      }
      pcVar24 = *(char **)pcVar24;
    }
    uVar35 = 0xfff;
    if ((uVar26 & uVar39) != 0) {
      uVar35 = 0x400;
    }
    if (*pcVar45 == -0x66) {
      uVar48 = *(uint *)(pcVar45 + 0x2c);
      *(uint *)((long)puVar38 + 0xc) = uVar48;
      *(int *)(puVar38 + 2) = (int)*(short *)(pcVar45 + 0x30);
      uVar12 = (ushort)(2 << (ulong)(uVar28 - 0x4f & 0x1f));
      if (bVar27 == 0x4c) {
        uVar12 = 0x80;
      }
      uVar1 = 1;
      if (bVar27 != 0x4b) {
        uVar1 = uVar12;
      }
      *(ushort *)((long)puVar38 + 0x1a) = uVar1 & uVar35;
      uVar28 = ~uVar48 >> 0x1f;
    }
    else {
      uVar28 = 0;
    }
    if ((pcVar24 != (char *)0x0) && (*pcVar24 == -0x66)) {
      if (uVar28 == 0) {
        sVar41 = 0;
        puVar25 = puVar38;
        pbVar18 = pbVar40;
      }
      else {
        pbVar18 = pbVar42;
        FUN_108daa624(pbVar42,pbVar40,0,0);
        if (pbVar42[0x51] != 0) {
          while( true ) {
            pbVar40 = pbVar18;
            *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            if (pbVar40 == (byte *)0x0) {
              return;
            }
            if ((pbVar40[5] >> 6 & 1) != 0) break;
            unaff_x30 = 0x108d93e1c;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
            pbVar18 = *(byte **)(pbVar40 + 0x10);
            unaff_x19 = pbVar40;
            unaff_x20 = pbVar42;
          }
          if ((char)pbVar40[5] < '\0') {
            return;
          }
          if (pbVar40 == (byte *)0x0) {
            return;
          }
          if (pbVar42 != (byte *)0x0) {
            if (*(long *)(pbVar42 + 0x328) != 0) {
              *(undefined8 *)((long)register0x00000008 + -0x20) =
                   *(undefined8 *)((long)register0x00000008 + -0x20);
              *(undefined8 *)((long)register0x00000008 + -0x18) =
                   *(undefined8 *)((long)register0x00000008 + -0x18);
              *(undefined8 *)((long)register0x00000008 + -0x10) =
                   *(undefined8 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              if ((pbVar40 < *(byte **)(pbVar42 + 0x170)) ||
                 (*(byte **)(pbVar42 + 0x178) <= pbVar40)) {
                (*pcRam0000000113297950)();
                uVar28 = (uint)pbVar40;
              }
              else {
                uVar28 = (uint)*(ushort *)(pbVar42 + 0x150);
              }
              **(int **)(pbVar42 + 0x328) = **(int **)(pbVar42 + 0x328) + uVar28;
              return;
            }
            if ((*(byte **)(pbVar42 + 0x170) <= pbVar40) && (pbVar40 < *(byte **)(pbVar42 + 0x178)))
            {
              *(undefined8 *)pbVar40 = *(undefined8 *)(pbVar42 + 0x168);
              *(byte **)(pbVar42 + 0x168) = pbVar40;
              *(int *)(pbVar42 + 0x154) = *(int *)(pbVar42 + 0x154) + -1;
              return;
            }
          }
          *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x20) =
               *(undefined8 *)((long)register0x00000008 + -0x20);
          *(undefined8 *)((long)register0x00000008 + -0x18) =
               *(undefined8 *)((long)register0x00000008 + -0x18);
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          if (pbVar40 == (byte *)0x0) {
            return;
          }
          UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
          if (iRam0000000113297910 != 0) {
            if (pbRam0000000113829af0 != (byte *)0x0) {
              (*pcRam0000000113297998)();
            }
            pbVar42 = pbVar40;
            (*pcRam0000000113297950)();
            lRam0000000113829a50 = lRam0000000113829a50 - (int)pbVar42;
            lRam0000000113829a98 = lRam0000000113829a98 + -1;
            (*pcRam0000000113297940)(pbVar40);
            pbVar40 = pbRam0000000113829af0;
            UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
            if (pbRam0000000113829af0 == (byte *)0x0) {
              return;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pbVar40);
          return;
        }
        puVar38 = param_1;
        FUN_108dbaad8(param_1,pbVar18,3);
        if ((int)puVar38 == 0) {
          return;
        }
        lVar43 = param_1[4];
        puVar25 = (undefined8 *)(lVar43 + (long)(int)puVar38 * 0x38);
        *(int *)(puVar25 + 1) = param_2;
        puVar38 = (undefined8 *)(lVar43 + (long)param_2 * 0x38);
        *(undefined2 *)(puVar25 + 3) = *(undefined2 *)(puVar38 + 3);
        *(char *)((long)puVar38 + 0x1e) = *(char *)((long)puVar38 + 0x1e) + '\x01';
        *(ushort *)((long)puVar38 + 0x1c) = *(ushort *)((long)puVar38 + 0x1c) | 8;
        if (*pbVar40 == 0x4f) {
          if (((pbVar40[4] & 1) == 0) && ((*(ushort *)(pbVar42 + 0x4c) >> 9 & 1) == 0)) {
            *(ushort *)((long)puVar38 + 0x1a) = *(ushort *)((long)puVar38 + 0x1a) | 0x400;
            sVar41 = 0x400;
          }
          else {
            sVar41 = 0;
          }
        }
        else {
          sVar41 = 0;
        }
      }
      lVar43 = *(long *)(pbVar18 + 0x10);
      uVar28 = *(uint *)(*(long *)(pbVar18 + 0x18) + 4);
      if (((*(uint *)(lVar43 + 4) ^ uVar28) >> 8 & 1) == 0) {
        if ((uVar28 >> 8 & 1) == 0) {
          plVar23 = plVar51;
          FUN_108da85d0();
          lVar43 = *(long *)(pbVar18 + 0x10);
          if (plVar23 != (long *)0x0) {
            *(uint *)(lVar43 + 4) = *(uint *)(lVar43 + 4) | 0x100;
          }
        }
        else {
          *(uint *)(*(long *)(pbVar18 + 0x18) + 4) = uVar28 & 0xfffffeff;
        }
      }
      lVar52 = *(long *)(pbVar18 + 0x18);
      *(long *)(pbVar18 + 0x10) = lVar52;
      *(long *)(pbVar18 + 0x18) = lVar43;
      if (0x4f < *pbVar18) {
        *pbVar18 = *pbVar18 ^ 2;
      }
      while ((*(uint *)(lVar52 + 4) >> 0xc & 1) != 0) {
        if ((*(uint *)(lVar52 + 4) >> 0x12 & 1) == 0) {
          plVar23 = (long *)(lVar52 + 0x10);
        }
        else {
          plVar23 = *(long **)(*(long *)(lVar52 + 0x20) + 8);
        }
        lVar52 = *plVar23;
      }
      *(undefined4 *)((long)puVar25 + 0xc) = *(undefined4 *)(lVar52 + 0x2c);
      *(int *)(puVar25 + 2) = (int)*(short *)(lVar52 + 0x30);
      puVar25[5] = uVar37 | uVar39;
      puVar25[6] = uVar34;
      bVar27 = *pbVar18;
      sVar13 = (short)(2 << (ulong)(bVar27 - 0x4f & 0x1f));
      if (bVar27 == 0x4c) {
        sVar13 = 0x80;
      }
      sVar2 = 1;
      if (bVar27 != 0x4b) {
        sVar2 = sVar13;
      }
      *(ushort *)((long)puVar25 + 0x1a) = sVar2 + sVar41 & uVar35;
    }
  }
LAB_108dbb66c:
  if (*(char *)(param_1 + 2) != 'H') goto LAB_108dbbb74;
  if (*pbVar40 != 0x99) goto LAB_108dbbca0;
  if ((*(int **)(pbVar40 + 0x20) != (int *)0x0) && (**(int **)(pbVar40 + 0x20) == 2)) {
    lVar43 = *plVar51;
    lVar52 = *(long *)(pbVar40 + 8);
    if (lVar52 == 0) {
      uVar28 = 0;
    }
    else {
      lVar30 = lVar52;
      _strlen(lVar52);
      uVar28 = (uint)lVar30 & 0x3fffffff;
    }
    lVar30 = lVar43;
    FUN_108d6e688(lVar43,lVar52,uVar28,2,1,0);
    if ((lVar30 != 0) && (uVar35 = *(ushort *)(lVar30 + 2), (uVar35 >> 2 & 1) != 0)) {
      lVar52 = *(long *)(pbVar40 + 0x20);
      pcVar45 = *(char **)(*(long *)(lVar52 + 8) + 0x20);
      if (*pcVar45 == -0x66) {
        pcVar24 = *(char **)(lVar30 + 8);
        cVar5 = *pcVar24;
        cVar6 = pcVar24[1];
        cVar7 = pcVar24[2];
        pcVar24 = pcVar45;
        FUN_108daaf34();
        if (((int)pcVar24 == 0x42) && ((*(byte *)(*(long *)(pcVar45 + 0x40) + 0x46) >> 4 & 1) == 0))
        {
          pcVar45 = *(char **)(lVar52 + 8);
          while( true ) {
            pcVar45 = *(char **)pcVar45;
            if ((*(uint *)(pcVar45 + 4) >> 0xc & 1) == 0) break;
            if ((*(uint *)(pcVar45 + 4) >> 0x12 & 1) == 0) {
              pcVar45 = pcVar45 + 0x10;
            }
            else {
              pcVar45 = *(char **)(*(long *)(pcVar45 + 0x20) + 8);
            }
          }
          cVar8 = *pcVar45;
          if (cVar8 == -0x79) {
            lVar30 = plVar51[0x42];
            sVar41 = *(short *)(pcVar45 + 0x30);
            FUN_108dbc278(lVar30,(long)sVar41);
            if ((lVar30 == 0) || ((*(ushort *)(lVar30 + 8) & 0xf) != 2)) {
              lVar52 = 0;
            }
            else {
              lVar52 = lVar30;
              FUN_108d67a14();
            }
            if (sVar41 < 0x21) {
              uVar28 = *(uint *)(plVar51[2] + 0x104) | 1 << (ulong)((int)sVar41 - 1U & 0x1f);
            }
            else {
              uVar28 = 0xffffffff;
            }
            *(uint *)(plVar51[2] + 0x104) = uVar28;
LAB_108dbbafc:
            if (lVar52 != 0) {
              lVar36 = 0;
              do {
                cVar10 = *(char *)(lVar52 + lVar36);
                lVar36 = lVar36 + 1;
              } while (((cVar10 != '\0' && cVar10 != cVar5) && cVar10 != cVar6) && cVar10 != cVar7);
              if ((lVar36 != 1) && (*(char *)(lVar52 + lVar36 + -2) != -1)) {
                if (cVar10 == cVar5) {
                  bVar15 = *(char *)(lVar52 + lVar36) == '\0';
                }
                else {
                  bVar15 = false;
                }
                FUN_108d9ce48(lVar43,0x61);
                if (lVar43 != 0) {
                  *(undefined1 *)(*(long *)(lVar43 + 8) + lVar36 + -1) = 0;
                }
                if (cVar8 == -0x79) {
                  lVar52 = plVar51[2];
                  if (*(short *)(pcVar45 + 0x30) < 0x21) {
                    uVar28 = *(uint *)(lVar52 + 0x104) |
                             1 << (ulong)((int)*(short *)(pcVar45 + 0x30) - 1U & 0x1f);
                  }
                  else {
                    uVar28 = 0xffffffff;
                  }
                  *(uint *)(lVar52 + 0x104) = uVar28;
                  if ((bVar15) && (*(char *)(*(long *)(pcVar45 + 8) + 1) != '\0')) {
                    if (*(char *)((long)plVar51 + 0x1f) == '\0') {
                      iVar47 = *(int *)((long)plVar51 + 0x54) + 1;
                      *(int *)((long)plVar51 + 0x54) = iVar47;
                    }
                    else {
                      bVar27 = *(char *)((long)plVar51 + 0x1f) - 1;
                      *(byte *)((long)plVar51 + 0x1f) = bVar27;
                      iVar47 = *(int *)((long)plVar51 + (ulong)bVar27 * 4 + 0x24);
                    }
                    FUN_108da6d64(plVar51,pcVar45,iVar47);
                    if (*(int *)(lVar52 + 0x3c) != 0) {
                      *(undefined4 *)
                       (*(long *)(lVar52 + 8) + (ulong)(*(int *)(lVar52 + 0x3c) - 1) * 0x18 + 0xc) =
                           0;
                    }
                    if (iVar47 != 0) {
                      bVar27 = *(byte *)((long)plVar51 + 0x1f);
                      if (bVar27 < 8) {
                        puVar19 = (undefined1 *)((long)plVar51 + 0x8e);
                        iVar33 = 10;
                        do {
                          if (*(int *)(puVar19 + 6) == iVar47) {
                            *puVar19 = 1;
                            goto LAB_108dbbe34;
                          }
                          puVar19 = puVar19 + 0x14;
                          iVar33 = iVar33 + -1;
                        } while (iVar33 != 0);
                        *(byte *)((long)plVar51 + 0x1f) = bVar27 + 1;
                        *(int *)((long)plVar51 + (ulong)bVar27 * 4 + 0x24) = iVar47;
                      }
                    }
                  }
                }
LAB_108dbbe34:
                FUN_108d6d618(lVar30);
                uVar46 = *(undefined8 *)(*(long *)(*(long *)(pbVar40 + 0x20) + 8) + 0x20);
                pbVar18 = pbVar42;
                FUN_108daa624(pbVar42,lVar43,0,0);
                if (((uVar35 >> 3 & 1) == 0) && (*(char *)(*plVar51 + 0x51) == '\0')) {
                  *(ushort *)((long)puVar38 + 0x1c) = *(ushort *)((long)puVar38 + 0x1c) | 0x400;
                  pbVar32 = *(byte **)(lVar43 + 8);
                  bVar27 = *pbVar32;
                  if (bVar27 != 0) {
                    lVar52 = 0;
                    do {
                      *pbVar32 = bVar27 & (~(&UNK_10dfa0749)[bVar27] | 0xdf);
                      *(undefined *)(*(long *)(pbVar18 + 8) + lVar52) = (&UNK_10dfa05fd)[bVar27];
                      lVar52 = lVar52 + 1;
                      pbVar32 = (byte *)(lVar52 + *(long *)(lVar43 + 8));
                      bVar27 = *pbVar32;
                    } while (bVar27 != 0);
                  }
                }
                if (pbVar42[0x51] == 0) {
                  uVar39 = *(ulong *)(pbVar18 + 8);
                  if (uVar39 == 0) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = uVar39;
                    _strlen();
                    uVar26 = uVar26 & 0x3fffffff;
                  }
                  bVar27 = *(byte *)(uVar39 + uVar26 + -1);
                  if ((uVar35 >> 3 & 1) == 0) {
                    bVar22 = false;
                    if (bVar27 != 0x40) {
                      bVar22 = bVar15;
                    }
                    bVar15 = bVar22;
                    bVar27 = (&UNK_10dfa05fd)[bVar27];
                  }
                  *(byte *)(uVar39 + uVar26 + -1) = bVar27 + 1;
                }
                puVar3 = &UNK_10f519f39;
                if ((uVar35 & 8) != 0) {
                  puVar3 = &UNK_10f51757c;
                }
                pbVar32 = pbVar42;
                FUN_108daa624(pbVar42,uVar46,0,0);
                uStack_78 = 6;
                plVar23 = plVar51;
                puStack_80 = puVar3;
                FUN_108da0288(plVar51,pbVar32,&puStack_80,0);
                plVar20 = plVar51;
                func_0x000108d99b04(plVar51,0x53,plVar23,lVar43,0);
                if (plVar20 != (long *)0x0) {
                  *(uint *)((long)plVar20 + 4) =
                       *(uint *)((long)plVar20 + 4) | *(uint *)(pbVar40 + 4) & 1;
                  *(undefined2 *)((long)plVar20 + 0x34) = *(undefined2 *)(pbVar40 + 0x34);
                }
                puVar25 = param_1;
                FUN_108dbaad8(param_1,plVar20,0x103);
                FUN_108dbac88(param_1,puVar25);
                pbVar32 = pbVar42;
                FUN_108daa624(pbVar42,uVar46,0,0);
                uStack_78 = 6;
                plVar23 = plVar51;
                puStack_80 = puVar3;
                FUN_108da0288(plVar51,pbVar32,&puStack_80,0);
                plVar20 = plVar51;
                func_0x000108d99b04(plVar51,0x52,plVar23,pbVar18,0);
                if (plVar20 != (long *)0x0) {
                  *(uint *)((long)plVar20 + 4) =
                       *(uint *)((long)plVar20 + 4) | *(uint *)(pbVar40 + 4) & 1;
                  *(undefined2 *)((long)plVar20 + 0x34) = *(undefined2 *)(pbVar40 + 0x34);
                }
                puVar21 = param_1;
                FUN_108dbaad8(param_1,plVar20,0x103);
                FUN_108dbac88(param_1,puVar21);
                lVar43 = param_1[4];
                puVar38 = (undefined8 *)(lVar43 + (long)param_2 * 0x38);
                if (bVar15) {
                  lVar52 = lVar43 + (long)(int)puVar25 * 0x38;
                  *(int *)(lVar52 + 8) = param_2;
                  lVar30 = lVar43 + (long)param_2 * 0x38;
                  uVar11 = *(undefined2 *)(lVar30 + 0x18);
                  *(undefined2 *)(lVar52 + 0x18) = uVar11;
                  cVar5 = *(char *)(lVar30 + 0x1e);
                  lVar43 = lVar43 + (long)(int)puVar21 * 0x38;
                  *(int *)(lVar43 + 8) = param_2;
                  *(undefined2 *)(lVar43 + 0x18) = uVar11;
                  *(char *)(lVar30 + 0x1e) = cVar5 + '\x02';
                }
                goto LAB_108dbbb74;
              }
            }
          }
          else if (cVar8 == 'a') {
            lVar30 = 0;
            lVar52 = *(long *)(pcVar45 + 8);
            goto LAB_108dbbafc;
          }
          FUN_108d6d618();
        }
      }
    }
  }
LAB_108dbbb74:
  if (*pbVar40 == 0x99) {
    uVar46 = *(undefined8 *)(pbVar40 + 8);
    FUN_108d5e044(uVar46,"match");
    if (((int)uVar46 == 0) && (**(int **)(pbVar40 + 0x20) == 2)) {
      puVar25 = *(undefined8 **)(*(int **)(pbVar40 + 0x20) + 2);
      pcVar45 = (char *)puVar25[4];
      if (*pcVar45 == -0x66) {
        uVar46 = *puVar25;
        uVar39 = (long)puVar29 + 0x54;
        FUN_108dbc0b8(uVar39,uVar46);
        uVar26 = (long)puVar29 + 0x54;
        FUN_108dbc0b8(uVar26,pcVar45);
        if ((uVar26 & uVar39) == 0) {
          FUN_108daa624(pbVar42,uVar46,0,0);
          func_0x000108d99b04(plVar51,0x33,0,pbVar42,0);
          puVar29 = param_1;
          FUN_108dbaad8(param_1,plVar51,3);
          lVar43 = param_1[4] + (long)(int)puVar29 * 0x38;
          *(ulong *)(lVar43 + 0x28) = uVar39;
          *(undefined4 *)(lVar43 + 0xc) = *(undefined4 *)(pcVar45 + 0x2c);
          *(int *)(lVar43 + 0x10) = (int)*(short *)(pcVar45 + 0x30);
          *(undefined2 *)(lVar43 + 0x1a) = 0x40;
          lVar52 = param_1[4];
          lVar30 = lVar52 + (long)(int)puVar29 * 0x38;
          *(int *)(lVar30 + 8) = param_2;
          puVar38 = (undefined8 *)(lVar52 + (long)param_2 * 0x38);
          *(undefined2 *)(lVar30 + 0x18) = *(undefined2 *)(puVar38 + 3);
          *(char *)((long)puVar38 + 0x1e) = *(char *)((long)puVar38 + 0x1e) + '\x01';
          *(ushort *)((long)puVar38 + 0x1c) = *(ushort *)((long)puVar38 + 0x1c) | 8;
          *(undefined8 *)(lVar43 + 0x30) = puVar38[6];
        }
      }
    }
  }
LAB_108dbbca0:
  puVar38[5] = puVar38[5] | uVar37;
  return;
LAB_108dbb82c:
  iVar47 = *(int *)(lVar52 + 0x10);
  do {
    if (*(int *)(puVar49 + -8) == iVar4) {
      if (*(int *)(puVar49 + -6) != iVar47) {
        bVar22 = false;
        bVar15 = true;
        goto LAB_108dbb8d0;
      }
      iVar16 = (int)*(undefined8 *)(*(long *)(puVar49 + -0xe) + 0x18);
      FUN_108daaf34();
      iVar17 = (int)*(undefined8 *)(*(long *)(puVar49 + -0xe) + 0x10);
      FUN_108daaf34();
      if (iVar16 != 0 && iVar16 != iVar17) {
        bVar22 = false;
        bVar15 = true;
        goto LAB_108dbb8d0;
      }
      *puVar49 = *puVar49 | 0x40;
    }
    else {
      *puVar49 = *puVar49 & 0xffbf;
    }
    iVar50 = iVar50 + -1;
    puVar49 = puVar49 + 0x1c;
  } while (0 < iVar50);
  bVar15 = false;
  bVar22 = true;
LAB_108dbb8d0:
  bVar14 = iVar33 != 0;
  iVar47 = iVar4;
  iVar33 = iVar33 + 1;
  if (bVar22 || bVar14) goto LAB_108dbb8dc;
  goto LAB_108dbb7a4;
LAB_108dbb8dc:
  if (!bVar15) {
    if (*(int *)(pbVar18 + 0x14) < 1) {
      lVar52 = 0;
      uVar46 = 0;
    }
    else {
      uVar46 = 0;
      plVar23 = *(long **)(pbVar18 + 0x20);
      uVar28 = *(int *)(pbVar18 + 0x14) + 1;
      lVar30 = 0;
      do {
        lVar52 = lVar30;
        if ((*(ushort *)((long)plVar23 + 0x1c) >> 6 & 1) != 0) {
          pbVar18 = pbVar42;
          FUN_108daa624(pbVar42,*(undefined8 *)(*plVar23 + 0x18),0,0);
          lVar52 = *(long *)*puVar29;
          FUN_108d9ccd4(lVar52,lVar30,pbVar18);
          uVar46 = *(undefined8 *)(*plVar23 + 0x10);
        }
        plVar23 = plVar23 + 7;
        uVar28 = uVar28 - 1;
        lVar30 = lVar52;
      } while (1 < uVar28);
    }
    pbVar18 = pbVar42;
    FUN_108daa624(pbVar42,uVar46,0,0);
    plVar23 = plVar51;
    func_0x000108d99b04(plVar51,0x4b,pbVar18,0,0);
    if (plVar23 == (long *)0x0) {
      FUN_108d93e84(pbVar42,lVar52);
    }
    else {
      *(uint *)((long)plVar23 + 4) = *(uint *)((long)plVar23 + 4) | *(uint *)(pbVar40 + 4) & 1;
      *(undefined2 *)((long)plVar23 + 0x34) = *(undefined2 *)(pbVar40 + 0x34);
      plVar23[4] = lVar52;
      puVar38 = param_1;
      FUN_108dbaad8(param_1,plVar23,3);
      FUN_108dbac88(param_1,puVar38);
      lVar43 = param_1[4];
      lVar30 = lVar43 + (long)(int)puVar38 * 0x38;
      *(int *)(lVar30 + 8) = param_2;
      lVar52 = lVar43 + (long)param_2 * 0x38;
      *(undefined2 *)(lVar30 + 0x18) = *(undefined2 *)(lVar52 + 0x18);
      *(char *)(lVar52 + 0x1e) = *(char *)(lVar52 + 0x1e) + '\x01';
    }
    *(undefined2 *)(lVar43 + (long)param_2 * 0x38 + 0x1a) = 0x800;
  }
LAB_108dbb538:
  puVar38 = (undefined8 *)(param_1[4] + (long)param_2 * 0x38);
  goto LAB_108dbb66c;
}



/* Entry: 108dbc0b8; end: 108dbc17f;  */

ulong FUN_108dbc0b8(uint *param_1,char *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == -0x66) {
    if (0 < (int)*param_1) {
      uVar3 = 0;
      do {
        if (param_1[uVar3 + 1] == *(uint *)(param_2 + 0x2c)) {
          return 1L << (uVar3 & 0x3f);
        }
        uVar3 = uVar3 + 1;
      } while (*param_1 != uVar3);
    }
    uVar3 = 0;
  }
  else {
    puVar1 = param_1;
    FUN_108dbc0b8(param_1,*(undefined8 *)(param_2 + 0x18));
    puVar2 = param_1;
    FUN_108dbc0b8(param_1,*(undefined8 *)(param_2 + 0x10));
    if (((byte)param_2[5] >> 3 & 1) == 0) {
      FUN_108db834c(param_1);
    }
    else {
      FUN_108dbc180(param_1,*(undefined8 *)(param_2 + 0x20));
    }
    uVar3 = (ulong)puVar2 | (ulong)puVar1 | (ulong)param_1;
  }
  return uVar3;
}



/* Entry: 108dbc180; end: 108dbc277;  */

ulong FUN_108dbc180(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      puVar7 = (uint *)param_2[5];
      uVar6 = param_1;
      FUN_108db834c(param_1,*param_2);
      uVar1 = param_1;
      FUN_108db834c(param_1,param_2[7]);
      uVar2 = param_1;
      FUN_108db834c(param_1,param_2[9]);
      uVar3 = param_1;
      FUN_108dbc0b8(param_1,param_2[6]);
      uVar4 = param_1;
      FUN_108dbc0b8(param_1,param_2[8]);
      uVar5 = uVar6 | uVar5 | uVar1 | uVar2 | uVar3 | uVar4;
      if ((puVar7 != (uint *)0x0) && (uVar6 = (ulong)*puVar7, 0 < (int)*puVar7)) {
        puVar7 = puVar7 + 0x14;
        do {
          uVar1 = param_1;
          FUN_108dbc180(param_1,*(undefined8 *)(puVar7 + -8));
          uVar2 = param_1;
          FUN_108dbc0b8(param_1,*(undefined8 *)puVar7);
          uVar5 = uVar1 | uVar5 | uVar2;
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 0x1c;
        } while (uVar6 != 0);
      }
      param_2 = (undefined8 *)param_2[10];
    } while (param_2 != (undefined8 *)0x0);
  }
  return uVar5;
}



/* Entry: 108dbc278; end: 108dbc2f7;  */

undefined8 * FUN_108dbc278(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (lVar2 = param_1[0xd] + (long)param_2 * 0x38, (*(ushort *)(lVar2 + -0x30) & 1) == 0)) {
    param_1 = (undefined8 *)*param_1;
    puVar1 = param_1;
    FUN_108d6a6fc(param_1,0x38);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 1;
    puVar1[5] = param_1;
    puVar1[6] = 0;
    FUN_108d67fe4(puVar1,lVar2 + -0x38);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 108dbc2f8; end: 108dbc36f;  */

undefined1 * FUN_108dbc2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_a0 [128];
  
  puVar2 = auStack_a0;
  FUN_108dbc370(auStack_a0,param_1,param_2,param_3);
  puVar1 = (undefined1 *)0x0;
  do {
    if (puVar2 == (undefined1 *)0x0) {
      return puVar1;
    }
    puVar3 = puVar1;
    if ((*(ulong *)(puVar2 + 0x28) & param_4) == 0) {
      if ((*(ulong *)(puVar2 + 0x28) == 0) && ((*(ushort *)(puVar2 + 0x1a) >> 1 & 1) != 0)) {
        return puVar2;
      }
      puVar3 = puVar2;
      if (puVar1 != (undefined1 *)0x0) {
        puVar3 = puVar1;
      }
    }
    puVar2 = auStack_a0;
    FUN_108dbc40c();
    puVar1 = puVar3;
  } while( true );
}



/* Entry: 108dbc370; end: 108dbc40b;  */

long * FUN_108dbc370(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                    undefined4 param_5,long param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  char *pcVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  undefined8 *puVar22;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  if (((int)param_4 < 0) || (param_6 == 0)) {
    uVar10 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 3) =
         *(undefined1 *)(*(long *)(*(long *)(param_6 + 0x18) + 8) + (ulong)param_4 * 0x30 + 0x29);
    if (param_4 == (int)**(short **)(param_6 + 8)) {
      lVar17 = 0;
    }
    else {
      lVar15 = 0;
      do {
        if ((ulong)*(ushort *)(param_6 + 0x58) + 1 == lVar15) {
          return (long *)0x0;
        }
        lVar17 = lVar15 + 1;
        lVar6 = lVar15 + 1;
        lVar15 = lVar17;
      } while (param_4 != (int)(*(short **)(param_6 + 8))[lVar6]);
    }
    uVar10 = *(undefined8 *)(*(long *)(param_6 + 0x40) + lVar17 * 8);
  }
  param_1[2] = uVar10;
  *(undefined4 *)((long)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_3;
  *(uint *)(param_1 + 5) = param_4;
  *(undefined2 *)((long)param_1 + 0x19) = 0x202;
  bVar8 = *(byte *)((long)param_1 + 0x1a);
  bVar12 = *(byte *)((long)param_1 + 0x19);
  if (bVar8 <= bVar12) {
    iVar21 = *(int *)(param_1 + 4);
    piVar1 = (int *)((long)param_1 + 0x24);
    puVar22 = (undefined8 *)param_1[1];
    do {
      if (puVar22 != (undefined8 *)0x0) {
        iVar2 = piVar1[(ulong)bVar8 - 2];
        iVar3 = piVar1[(ulong)bVar8 - 1];
        do {
          if (iVar21 < *(int *)((long)puVar22 + 0x14)) {
            plVar19 = (long *)(puVar22[4] + (long)iVar21 * 0x38);
            do {
              if (((*(int *)((long)plVar19 + 0xc) == iVar2) && ((int)plVar19[2] == iVar3)) &&
                 ((*(byte *)((long)param_1 + 0x1a) < 3 || ((*(byte *)(*plVar19 + 4) & 1) == 0)))) {
                uVar4 = *(ushort *)((long)plVar19 + 0x1a);
                uVar9 = (uint)uVar4;
                if ((uVar4 >> 10 & 1) != 0) {
                  bVar8 = *(byte *)((long)param_1 + 0x19);
                  uVar14 = (ulong)bVar8;
                  if (bVar8 < 0x16) {
                    lVar15 = *(long *)(*plVar19 + 0x18);
                    while ((lVar15 != 0 && ((*(uint *)(lVar15 + 4) >> 0xc & 1) != 0))) {
                      if ((*(uint *)(lVar15 + 4) >> 0x12 & 1) == 0) {
                        plVar20 = (long *)(lVar15 + 0x10);
                      }
                      else {
                        plVar20 = *(long **)(*(long *)(lVar15 + 0x20) + 8);
                      }
                      lVar15 = *plVar20;
                    }
                    uVar13 = (uint)bVar8;
                    if (uVar13 == 0) {
                      uVar16 = 0;
                    }
                    else {
                      uVar18 = 0;
                      uVar16 = (uVar13 - 1 & 0xfffffffe) + 2;
                      do {
                        if ((*(int *)((long)param_1 + uVar18 * 4 + 0x24) == *(int *)(lVar15 + 0x2c))
                           && (*(int *)((long)param_1 + uVar18 * 4 + 0x28) ==
                               (int)*(short *)(lVar15 + 0x30))) {
                          uVar16 = (uint)uVar18;
                          break;
                        }
                        uVar18 = uVar18 + 2;
                      } while (uVar18 < uVar14);
                    }
                    if (uVar16 == uVar13) {
                      piVar1[uVar14] = *(int *)(lVar15 + 0x2c);
                      piVar1[uVar14 + 1] = (int)*(short *)(lVar15 + 0x30);
                      *(byte *)((long)param_1 + 0x19) = bVar8 + 2;
                    }
                  }
                }
                if ((*(uint *)((long)param_1 + 0x1c) & (uint)uVar4) != 0) {
                  if (((uVar4 >> 7 & 1) == 0) && (param_1[2] != 0)) {
                    plVar20 = *(long **)*puVar22;
                    lVar17 = *plVar19;
                    cVar5 = *(char *)(param_1 + 3);
                    lVar15 = lVar17;
                    FUN_108dab5fc();
                    if ((uint)lVar15 == 0x41) {
LAB_108dbc5b8:
                      plVar7 = plVar20;
                      FUN_108daaedc(plVar20,*(undefined8 *)(lVar17 + 0x10),
                                    *(undefined8 *)(lVar17 + 0x18));
                      if (plVar7 == (long *)0x0) {
                        plVar7 = *(long **)(*plVar20 + 0x10);
                      }
                      lVar15 = *plVar7;
                      FUN_108d5e044(lVar15,param_1[2]);
                      if ((int)lVar15 == 0) {
                        uVar9 = (uint)*(ushort *)((long)plVar19 + 0x1a);
                        goto LAB_108dbc5e4;
                      }
                    }
                    else if (((uint)lVar15 & 0xff) == 0x42) {
                      if (cVar5 == 'B') goto LAB_108dbc5b8;
                    }
                    else if ('B' < cVar5) goto LAB_108dbc5b8;
                  }
                  else {
LAB_108dbc5e4:
                    if (((((uVar9 >> 1 & 1) == 0) ||
                         (pcVar11 = *(char **)(*plVar19 + 0x18), *pcVar11 != -0x66)) ||
                        (*(int *)(pcVar11 + 0x2c) != *piVar1)) ||
                       (*(int *)(param_1 + 5) != (int)*(short *)(pcVar11 + 0x30))) {
                      *(int *)(param_1 + 4) = iVar21 + 1;
                      return plVar19;
                    }
                  }
                }
              }
              iVar21 = iVar21 + 1;
              plVar19 = plVar19 + 7;
            } while (iVar21 < *(int *)((long)puVar22 + 0x14));
            puVar22 = (undefined8 *)param_1[1];
          }
          iVar21 = 0;
          puVar22 = (undefined8 *)puVar22[1];
          param_1[1] = puVar22;
        } while (puVar22 != (undefined8 *)0x0);
        bVar8 = *(byte *)((long)param_1 + 0x1a);
        bVar12 = *(byte *)((long)param_1 + 0x19);
      }
      iVar21 = 0;
      puVar22 = (undefined8 *)*param_1;
      param_1[1] = puVar22;
      bVar8 = bVar8 + 2;
      *(byte *)((long)param_1 + 0x1a) = bVar8;
    } while (bVar8 <= bVar12);
  }
  return (long *)0x0;
}



/* Entry: 108dbc40c; end: 108dbc697;  */

long * FUN_108dbc40c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  long *plVar6;
  byte bVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  
  bVar7 = *(byte *)((long)param_1 + 0x1a);
  bVar10 = *(byte *)((long)param_1 + 0x19);
  if (bVar7 <= bVar10) {
    iVar19 = *(int *)(param_1 + 4);
    piVar1 = (int *)((long)param_1 + 0x24);
    puVar20 = (undefined8 *)param_1[1];
    do {
      if (puVar20 != (undefined8 *)0x0) {
        iVar2 = piVar1[(ulong)bVar7 - 2];
        iVar3 = piVar1[(ulong)bVar7 - 1];
        do {
          if (iVar19 < *(int *)((long)puVar20 + 0x14)) {
            plVar16 = (long *)(puVar20[4] + (long)iVar19 * 0x38);
            do {
              if (((*(int *)((long)plVar16 + 0xc) == iVar2) && ((int)plVar16[2] == iVar3)) &&
                 ((*(byte *)((long)param_1 + 0x1a) < 3 || ((*(byte *)(*plVar16 + 4) & 1) == 0)))) {
                uVar4 = *(ushort *)((long)plVar16 + 0x1a);
                uVar8 = (uint)uVar4;
                if ((uVar4 >> 10 & 1) != 0) {
                  bVar7 = *(byte *)((long)param_1 + 0x19);
                  uVar12 = (ulong)bVar7;
                  if (bVar7 < 0x16) {
                    lVar13 = *(long *)(*plVar16 + 0x18);
                    while ((lVar13 != 0 && ((*(uint *)(lVar13 + 4) >> 0xc & 1) != 0))) {
                      if ((*(uint *)(lVar13 + 4) >> 0x12 & 1) == 0) {
                        plVar17 = (long *)(lVar13 + 0x10);
                      }
                      else {
                        plVar17 = *(long **)(*(long *)(lVar13 + 0x20) + 8);
                      }
                      lVar13 = *plVar17;
                    }
                    uVar11 = (uint)bVar7;
                    if (uVar11 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar15 = 0;
                      uVar14 = (uVar11 - 1 & 0xfffffffe) + 2;
                      do {
                        if ((*(int *)((long)param_1 + uVar15 * 4 + 0x24) == *(int *)(lVar13 + 0x2c))
                           && (*(int *)((long)param_1 + uVar15 * 4 + 0x28) ==
                               (int)*(short *)(lVar13 + 0x30))) {
                          uVar14 = (uint)uVar15;
                          break;
                        }
                        uVar15 = uVar15 + 2;
                      } while (uVar15 < uVar12);
                    }
                    if (uVar14 == uVar11) {
                      piVar1[uVar12] = *(int *)(lVar13 + 0x2c);
                      piVar1[uVar12 + 1] = (int)*(short *)(lVar13 + 0x30);
                      *(byte *)((long)param_1 + 0x19) = bVar7 + 2;
                    }
                  }
                }
                if ((*(uint *)((long)param_1 + 0x1c) & (uint)uVar4) != 0) {
                  if (((uVar4 >> 7 & 1) == 0) && (param_1[2] != 0)) {
                    plVar17 = *(long **)*puVar20;
                    lVar18 = *plVar16;
                    cVar5 = *(char *)(param_1 + 3);
                    lVar13 = lVar18;
                    FUN_108dab5fc();
                    if ((uint)lVar13 == 0x41) {
LAB_108dbc5b8:
                      plVar6 = plVar17;
                      FUN_108daaedc(plVar17,*(undefined8 *)(lVar18 + 0x10),
                                    *(undefined8 *)(lVar18 + 0x18));
                      if (plVar6 == (long *)0x0) {
                        plVar6 = *(long **)(*plVar17 + 0x10);
                      }
                      lVar13 = *plVar6;
                      FUN_108d5e044(lVar13,param_1[2]);
                      if ((int)lVar13 == 0) {
                        uVar8 = (uint)*(ushort *)((long)plVar16 + 0x1a);
                        goto LAB_108dbc5e4;
                      }
                    }
                    else if (((uint)lVar13 & 0xff) == 0x42) {
                      if (cVar5 == 'B') goto LAB_108dbc5b8;
                    }
                    else if ('B' < cVar5) goto LAB_108dbc5b8;
                  }
                  else {
LAB_108dbc5e4:
                    if (((((uVar8 >> 1 & 1) == 0) ||
                         (pcVar9 = *(char **)(*plVar16 + 0x18), *pcVar9 != -0x66)) ||
                        (*(int *)(pcVar9 + 0x2c) != *piVar1)) ||
                       (*(int *)(param_1 + 5) != (int)*(short *)(pcVar9 + 0x30))) {
                      *(int *)(param_1 + 4) = iVar19 + 1;
                      return plVar16;
                    }
                  }
                }
              }
              iVar19 = iVar19 + 1;
              plVar16 = plVar16 + 7;
            } while (iVar19 < *(int *)((long)puVar20 + 0x14));
            puVar20 = (undefined8 *)param_1[1];
          }
          iVar19 = 0;
          puVar20 = (undefined8 *)puVar20[1];
          param_1[1] = puVar20;
        } while (puVar20 != (undefined8 *)0x0);
        bVar7 = *(byte *)((long)param_1 + 0x1a);
        bVar10 = *(byte *)((long)param_1 + 0x19);
      }
      iVar19 = 0;
      puVar20 = (undefined8 *)*param_1;
      param_1[1] = puVar20;
      bVar7 = bVar7 + 2;
      *(byte *)((long)param_1 + 0x1a) = bVar7;
    } while (bVar7 <= bVar10);
  }
  return (long *)0x0;
}



/* Entry: 108dbc698; end: 108dbcd77;  */

int FUN_108dbc698(long *param_1,ulong param_2)

{
  bool bVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined2 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  short sVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ushort *puVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  long *plVar26;
  char *pcVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  uint *puVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  double dVar40;
  
  lVar4 = param_1[1];
  plVar3 = *(long **)*param_1;
  puVar32 = (uint *)*plVar3;
  puVar15 = (uint *)param_1[2];
  puVar5 = (ulong *)param_1[3];
  lVar33 = ((long *)*param_1)[1] + (ulong)(byte)puVar5[2] * 0x70;
  iVar18 = *(int *)(lVar4 + 0x14);
  if (iVar18 < 1) {
    uVar34 = 0;
  }
  else {
    uVar34 = 0;
    puVar23 = (ushort *)(*(long *)(lVar4 + 0x20) + 0x1a);
    do {
      if ((*(int *)(puVar23 + -7) == *(int *)(lVar33 + 0x48)) && ((*puVar23 & 0xfb7f) != 0)) {
        uVar34 = uVar34 + 1;
      }
      puVar23 = puVar23 + 0x1c;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  if (puVar15 == (uint *)0x0) {
    uVar36 = 0;
  }
  else {
    uVar39 = *puVar15;
    if ((int)uVar39 < 1) {
      uVar36 = 0;
    }
    else {
      uVar20 = 0;
      puVar24 = *(undefined8 **)(puVar15 + 2);
      do {
        uVar36 = uVar20;
        if ((*(char *)*puVar24 != -0x66) ||
           (*(int *)((char *)*puVar24 + 0x2c) != *(int *)(lVar33 + 0x48))) break;
        uVar20 = uVar20 + 1;
        uVar36 = (ulong)uVar39;
        puVar24 = puVar24 + 4;
      } while (uVar39 != uVar20);
    }
    if ((uint)uVar36 != uVar39) {
      uVar39 = 0;
    }
    uVar36 = (ulong)uVar39;
  }
  lVar19 = *(long *)(lVar33 + 0x28);
  puVar14 = puVar32;
  FUN_108d68fc8(puVar32,(-(uVar36 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3) +
                        (long)(int)uVar34 * 0x14 + 0x50);
  if (puVar14 == (uint *)0x0) {
    func_0x000108d6a85c(plVar3,&DAT_10f517a23);
  }
  else {
    uVar35 = (uint)uVar36;
    puVar2 = puVar14 + 0x14;
    *puVar14 = uVar34;
    puVar14[4] = uVar35;
    *(uint **)(puVar14 + 2) = puVar2;
    *(uint **)(puVar14 + 6) = puVar2 + (long)(int)uVar34 * 3;
    *(uint **)(puVar14 + 8) = puVar2 + (long)(int)uVar34 * 3 + (long)(int)uVar35 * 2;
    uVar39 = *(uint *)(lVar4 + 0x14);
    if (0 < (int)uVar39) {
      uVar28 = 0;
      iVar18 = 0;
      uVar7 = *(uint *)(lVar33 + 0x48);
      puVar31 = (uint *)(*(long *)(lVar4 + 0x20) + 0x10);
      do {
        if ((puVar31[-1] == uVar7) &&
           (uVar8 = *(ushort *)((long)puVar31 + 10), (uVar8 & 0xfb7f) != 0)) {
          puVar16 = puVar2 + (long)iVar18 * 3;
          *puVar16 = *puVar31;
          puVar16[2] = uVar28;
          uVar9 = 2;
          if ((uVar8 & 0xff) != 1) {
            uVar9 = (char)uVar8;
          }
          *(undefined1 *)(puVar16 + 1) = uVar9;
          iVar18 = iVar18 + 1;
        }
        uVar28 = uVar28 + 1;
        puVar31 = puVar31 + 0xe;
      } while (uVar39 != uVar28);
    }
    if (0 < (int)uVar35) {
      plVar21 = *(long **)(puVar15 + 2);
      puVar15 = puVar14 + (long)(int)uVar34 * 3 + 0x15;
      do {
        puVar15[-1] = (int)*(short *)(*plVar21 + 0x30);
        *(char *)puVar15 = (char)plVar21[3];
        plVar21 = plVar21 + 4;
        uVar36 = uVar36 - 1;
        puVar15 = puVar15 + 2;
      } while (uVar36 != 0);
    }
    *puVar5 = 0;
    *(undefined2 *)((long)puVar5 + 0x12) = 0;
    *(undefined4 *)(puVar5 + 5) = 0x400;
    *(undefined2 *)((long)puVar5 + 0x2c) = 0;
    *(undefined1 *)((long)puVar5 + 0x1c) = 0;
    lVar33 = *(long *)(puVar14 + 8);
    uVar34 = *puVar14;
    uVar36 = (ulong)uVar34;
    puVar15 = puVar32;
    func_0x000108dbd6a0(puVar32,puVar5,uVar36);
    if ((int)puVar15 == 0) {
      bVar12 = false;
      bVar10 = false;
      uVar39 = 0;
      do {
        if (((uVar39 & 1) != 0) && (!bVar10)) {
          if (uVar39 == 3) break;
          uVar39 = uVar39 + 1;
        }
        if ((!bVar12) && (1 < (int)uVar39)) break;
        uVar35 = *puVar14;
        if (0 < (int)uVar35) {
          lVar22 = *(long *)(lVar4 + 0x20);
          pbVar25 = (byte *)(*(long *)(puVar14 + 2) + 5);
          uVar28 = uVar35;
          do {
            lVar29 = lVar22 + (long)*(int *)(pbVar25 + 3) * 0x38;
            bVar1 = bVar12;
            bVar11 = bVar10;
            if (uVar39 == 2) {
              bVar12 = (bool)((*(byte *)(lVar29 + 0x1a) ^ 0xff) & 1);
LAB_108dbc9e8:
              *pbVar25 = bVar12;
            }
            else {
              if (uVar39 == 1) {
                bVar12 = *(long *)(lVar29 + 0x28) == 0;
                goto LAB_108dbc9e8;
              }
              if (uVar39 == 0) {
                *pbVar25 = 0;
                if ((*(ushort *)(lVar29 + 0x1a) & 1) != 0) {
                  bVar11 = true;
                }
                if (*(long *)(lVar29 + 0x28) == 0) {
                  bVar11 = true;
                }
                else {
                  bVar1 = true;
                }
                if (*(long *)(lVar29 + 0x28) == 0 && (*(ushort *)(lVar29 + 0x1a) & 1) == 0)
                goto LAB_108dbc9c8;
              }
              else {
LAB_108dbc9c8:
                *pbVar25 = 1;
                bVar1 = bVar12;
                bVar11 = bVar10;
              }
            }
            bVar10 = bVar11;
            bVar12 = bVar1;
            pbVar25 = pbVar25 + 0xc;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        _bzero(lVar33,(long)(int)uVar35 << 3);
        if (puVar14[0xe] != 0) {
          func_0x000108d5e198(*(undefined8 *)(puVar14 + 0xc));
        }
        puVar14[10] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0x10] = 0xa2879f2e;
        puVar14[0x11] = 0x546d42ae;
        puVar14[0x12] = 0x19;
        puVar14[0x13] = 0;
        plVar21 = (long *)(lVar19 + 0x58);
        do {
          plVar26 = (long *)*plVar21;
          plVar21 = plVar26 + 5;
        } while (*plVar26 != *plVar3);
        plVar26 = (long *)plVar26[2];
        plVar21 = plVar26;
        (**(code **)(*plVar26 + 0x18))(plVar26,puVar14);
        if ((int)plVar21 != 0) {
          if ((int)plVar21 == 7) {
            *(undefined1 *)(*plVar3 + 0x51) = 1;
          }
          else {
            func_0x000108d6a85c(plVar3,&UNK_10f517517);
          }
        }
        func_0x000108d5e198(plVar26[2]);
        plVar26[2] = 0;
        uVar35 = *puVar14;
        if (0 < (int)uVar35) {
          lVar29 = 0;
          lVar22 = 0;
          lVar37 = 5;
          do {
            if ((*(char *)(*(long *)(puVar14 + 2) + lVar37) == '\0') &&
               (0 < *(int *)(*(long *)(puVar14 + 8) + lVar29))) {
              func_0x000108d6a85c(plVar3,&UNK_10f519f5c);
              uVar35 = *puVar14;
            }
            lVar22 = lVar22 + 1;
            lVar29 = lVar29 + 8;
            lVar37 = lVar37 + 0xc;
          } while (lVar22 < (int)uVar35);
        }
        iVar18 = *(int *)((long)plVar3 + 0x4c);
        if (iVar18 != 0) goto LAB_108dbcd30;
        lVar22 = *(long *)(puVar14 + 2);
        *puVar5 = param_2;
        if ((int)uVar34 < 1) {
          sVar17 = 0;
          *(undefined2 *)((long)puVar5 + 0x1e) = 0;
        }
        else {
          uVar38 = puVar5[7];
          _bzero(uVar38,uVar36 << 3);
          puVar15 = (uint *)(lVar22 + 8);
          *(undefined2 *)((long)puVar5 + 0x1e) = 0;
          uVar35 = 0xffffffff;
          pcVar27 = (char *)(lVar33 + 4);
          uVar20 = uVar36;
          uVar30 = param_2;
          do {
            uVar28 = *(uint *)(pcVar27 + -4);
            uVar7 = uVar28 - 1;
            if (0 < (int)uVar28) {
              if (((((int)uVar34 < (int)uVar28) || (uVar6 = *puVar15, (int)uVar6 < 0)) ||
                  (*(int *)(lVar4 + 0x14) <= (int)uVar6)) ||
                 (*(long *)(uVar38 + (ulong)uVar7 * 8) != 0)) {
                func_0x000108d6a85c(plVar3,&UNK_10f519f40);
                iVar18 = 1;
                goto LAB_108dbcd30;
              }
              lVar22 = *(long *)(lVar4 + 0x20) + (ulong)uVar6 * 0x38;
              uVar30 = *(ulong *)(lVar22 + 0x28) | uVar30;
              *puVar5 = uVar30;
              *(long *)(uVar38 + (ulong)uVar7 * 8) = lVar22;
              uVar6 = uVar7;
              if ((int)uVar7 <= (int)uVar35) {
                uVar6 = uVar35;
              }
              if ((uVar28 < 0x11) && (*pcVar27 != '\0')) {
                *(ushort *)((long)puVar5 + 0x1e) =
                     *(ushort *)((long)puVar5 + 0x1e) | (ushort)(1 << (ulong)(uVar7 & 0x1f));
              }
              uVar35 = uVar6;
              if ((*(ushort *)(lVar22 + 0x1a) & 1) != 0) {
                if (*pcVar27 == '\0') goto LAB_108dbccfc;
                puVar14[0xf] = 0;
              }
            }
            pcVar27 = pcVar27 + 8;
            puVar15 = puVar15 + 3;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
          sVar17 = (short)uVar35 + 1;
        }
        *(short *)((long)puVar5 + 0x2c) = sVar17;
        *(uint *)(puVar5 + 3) = puVar14[10];
        *(char *)((long)puVar5 + 0x1c) = (char)puVar14[0xe];
        puVar14[0xe] = 0;
        puVar5[4] = *(ulong *)(puVar14 + 0xc);
        uVar9 = 0;
        if (puVar14[0xf] != 0) {
          uVar9 = (undefined1)puVar14[4];
        }
        sVar17 = 0;
        *(undefined1 *)((long)puVar5 + 0x1d) = uVar9;
        *(undefined2 *)((long)puVar5 + 0x12) = 0;
        dVar40 = *(double *)(puVar14 + 0x10);
        if (1.0 < dVar40) {
          if (dVar40 <= 2000000000.0) {
            sVar17 = (short)(long)dVar40;
            FUN_108d93a54();
          }
          else {
            sVar17 = (ushort)((ulong)dVar40 >> 0x34) * 10 + -0x27ec;
          }
        }
        *(short *)((long)puVar5 + 0x14) = sVar17;
        uVar13 = (undefined2)*(undefined8 *)(puVar14 + 0x12);
        FUN_108d93a54();
        *(undefined2 *)((long)puVar5 + 0x16) = uVar13;
        FUN_108dbd730(*param_1,param_1[4],puVar5);
        if (*(char *)((long)puVar5 + 0x1c) != '\0') {
          func_0x000108d5e198(puVar5[4]);
          *(undefined1 *)((long)puVar5 + 0x1c) = 0;
        }
LAB_108dbccfc:
        bVar1 = (int)uVar39 < 3;
        uVar39 = uVar39 + 1;
      } while (bVar1);
      iVar18 = 0;
LAB_108dbcd30:
      if (puVar14[0xe] != 0) {
        func_0x000108d5e198(*(undefined8 *)(puVar14 + 0xc));
      }
      func_0x000108d60660(puVar32,puVar14);
      return iVar18;
    }
    func_0x000108d60660(puVar32,puVar14);
  }
  return 7;
}



/* Entry: 108dbcd78; end: 108dbd63f;  */

void FUN_108dbcd78(long *param_1,ulong param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  uint *puVar15;
  char *pcVar16;
  ulong uVar17;
  short *psVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  char cVar26;
  long lVar27;
  long *plVar28;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined2 *puStack_b8;
  undefined2 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  
  uStack_c6 = 0xffff;
  puVar20 = (ulong *)param_1[3];
  puVar23 = (undefined8 *)*param_1;
  lVar8 = puVar23[1] + (ulong)(byte)puVar20[2] * 0x70;
  lVar11 = *(long *)(lVar8 + 0x28);
  puVar19 = *(undefined8 **)(lVar8 + 0x70);
  puVar21 = puVar19;
  if (puVar19 == (undefined8 *)0x0) {
    if ((*(byte *)(lVar11 + 0x46) >> 5 & 1) == 0) {
      uStack_c0 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_65 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_6a = 1;
      uStack_68 = 1;
      puStack_b8 = &uStack_c6;
      puStack_b0 = &uStack_c4;
      uStack_66 = 5;
      lStack_a8 = lVar11;
      uStack_6c = *(undefined2 *)(lVar11 + 0x44);
      uStack_c4 = *(undefined2 *)(lVar11 + 0x42);
      uStack_c2 = 0;
      if ((*(byte *)(lVar8 + 0x45) & 1) == 0) {
        uStack_98 = *(undefined8 *)(lVar11 + 0x10);
      }
      puVar21 = &uStack_c0;
    }
    else {
      puVar21 = *(undefined8 **)(lVar11 + 0x10);
    }
  }
  lVar27 = param_1[1];
  sVar1 = *(short *)(lVar11 + 0x42);
  lVar24 = (long)sVar1;
  if (lVar24 < 0xb) {
    sVar4 = 0;
  }
  else {
    FUN_108d93a54();
    sVar4 = (short)lVar24 + -0x21;
  }
  if ((((param_1[4] == 0) && ((*(ushort *)((long)puVar23 + 0x32) >> 7 & 1) == 0)) &&
      (puVar19 == (undefined8 *)0x0 && (*(uint *)(*(long *)*puVar23 + 0x2c) & 0x100000) != 0)) &&
     ((((*(byte *)(lVar8 + 0x45) & 5) == 0 &&
       ((*(byte *)(lVar11 + 0x46) & 0x20) == 0 && (*(byte *)(lVar8 + 0x45) & 10) == 0)) &&
      (iVar22 = *(int *)(lVar27 + 0x14), 0 < iVar22)))) {
    uVar17 = *(ulong *)(lVar27 + 0x20);
    sVar1 = sVar4 + sVar1;
    uVar12 = uVar17;
    do {
      uVar13 = uVar12 + 0x38;
      if ((puVar20[1] & *(ulong *)(uVar12 + 0x28)) == 0) {
        uVar7 = uVar12;
        func_0x000108dbdbe4(uVar12,lVar8 + 8,0);
        iVar5 = 0;
        if ((int)uVar7 != 0) {
          *(undefined2 *)(puVar20 + 3) = 1;
          puVar20[4] = 0;
          *(undefined4 *)((long)puVar20 + 0x2c) = 1;
          *(ulong *)puVar20[7] = uVar12;
          *(short *)((long)puVar20 + 0x12) = sVar1 + 4;
          if ((*(long *)(lVar11 + 0x18) == 0) && ((*(byte *)(lVar11 + 0x46) >> 1 & 1) == 0)) {
            *(short *)((long)puVar20 + 0x12) = sVar1 + 0x1c;
          }
          *(undefined2 *)((long)puVar20 + 0x16) = 0x2b;
          uVar7 = (ulong)(uint)(int)sVar4;
          FUN_108dbdc7c((ulong)(uint)(int)sVar4,0x2b);
          *(short *)((long)puVar20 + 0x14) = (short)uVar7;
          *(undefined4 *)(puVar20 + 5) = 0x4000;
          *puVar20 = *(ulong *)(uVar12 + 0x28) | param_2;
          lVar24 = *param_1;
          FUN_108dbd730(lVar24,param_1[4],puVar20);
          iVar5 = (int)lVar24;
        }
      }
      else {
        iVar5 = 0;
      }
    } while ((iVar5 == 0) && (uVar12 = uVar13, uVar13 < uVar17 + (long)iVar22 * 0x38));
  }
  else {
    iVar5 = 0;
  }
  if ((iVar5 == 0) && (puVar21 != (undefined8 *)0x0)) {
    cVar26 = '\x01';
    do {
      lVar24 = puVar21[9];
      if (lVar24 == 0) {
LAB_108dbcf44:
        sVar1 = *(short *)puVar21[2];
        *(undefined2 *)(puVar20 + 3) = 0;
        *(undefined4 *)((long)puVar20 + 0x2c) = 0;
        *(undefined1 *)((long)puVar20 + 0x11) = 0;
        *(undefined2 *)((long)puVar20 + 0x12) = 0;
        *puVar20 = param_2;
        *(short *)((long)puVar20 + 0x16) = sVar1;
        puVar20[4] = (ulong)puVar21;
        if (((*(byte *)((long)puVar21 + 0x5b) >> 2 & 1) == 0) &&
           (puVar15 = *(uint **)(*param_1 + 0x10), puVar15 != (uint *)0x0)) {
          if (0 < (int)*puVar15) {
            uVar12 = 0;
            do {
              pcVar16 = *(char **)(*(long *)(puVar15 + 2) + uVar12 * 0x20);
              while ((*(uint *)(pcVar16 + 4) >> 0xc & 1) != 0) {
                if ((*(uint *)(pcVar16 + 4) >> 0x12 & 1) == 0) {
                  pcVar16 = pcVar16 + 0x10;
                }
                else {
                  pcVar16 = *(char **)(*(long *)(pcVar16 + 0x20) + 8);
                }
                pcVar16 = *(char **)pcVar16;
              }
              if (*pcVar16 != -0x66) break;
              if (*(int *)(pcVar16 + 0x2c) == *(int *)(lVar8 + 0x48)) {
                if (*(short *)(pcVar16 + 0x30) < 0) {
LAB_108dbd0b0:
                  bVar2 = false;
                  goto LAB_108dbd028;
                }
                uVar17 = (ulong)*(ushort *)((long)puVar21 + 0x56);
                if (uVar17 != 0) {
                  psVar18 = (short *)puVar21[1];
                  do {
                    if (*psVar18 == *(short *)(pcVar16 + 0x30)) goto LAB_108dbd0b0;
                    uVar17 = uVar17 - 1;
                    psVar18 = psVar18 + 1;
                  } while (uVar17 != 0);
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != *puVar15);
          }
          bVar2 = true;
        }
        else {
          bVar2 = true;
        }
LAB_108dbd028:
        if (*(int *)(puVar21 + 10) < 1) {
          *(undefined4 *)(puVar20 + 5) = 0x100;
          cVar9 = '\0';
          if (!bVar2) {
            cVar9 = cVar26;
          }
          *(char *)((long)puVar20 + 0x11) = cVar9;
          *(short *)((long)puVar20 + 0x14) = sVar1 + 0x10;
LAB_108dbd184:
          FUN_108dbdd00(lVar27,puVar20,(int)sVar1);
          lVar24 = *param_1;
          FUN_108dbd730(lVar24,param_1[4],puVar20);
          *(short *)((long)puVar20 + 0x16) = sVar1;
          if ((int)lVar24 != 0) {
            return;
          }
        }
        else {
          if ((*(byte *)((long)puVar21 + 0x5b) >> 5 & 1) == 0) {
            uVar12 = (ulong)*(ushort *)(puVar21 + 0xb);
            if (uVar12 == 0) {
              uVar17 = 0xffffffffffffffff;
            }
            else {
              uVar17 = 0;
              uVar13 = uVar12 + 1;
              puVar14 = (ushort *)(puVar21[1] + uVar12 * 2);
              do {
                puVar14 = puVar14 + -1;
                uVar12 = 1L << ((ulong)*puVar14 & 0x3f);
                if (0x3e < *puVar14) {
                  uVar12 = 0;
                }
                uVar17 = uVar12 | uVar17;
                uVar13 = uVar13 - 1;
              } while (1 < uVar13);
              uVar17 = ~uVar17;
            }
            bVar3 = (uVar17 & *(ulong *)(lVar8 + 0x60)) == 0;
            uVar10 = 0x240;
            if (!bVar3) {
              uVar10 = 0x200;
            }
          }
          else {
            bVar3 = true;
            uVar10 = 0x240;
          }
          *(undefined4 *)(puVar20 + 5) = uVar10;
          cVar9 = cVar26;
          if (!bVar2) {
LAB_108dbd14c:
            *(char *)((long)puVar20 + 0x11) = cVar9;
            sVar4 = 0;
            if (*(short *)(lVar11 + 0x44) != 0) {
              sVar4 = (short)((*(short *)((long)puVar21 + 0x54) * 0xf) /
                             (int)*(short *)(lVar11 + 0x44));
            }
            sVar4 = sVar1 + sVar4 + 1;
            if (!bVar3) {
              iVar22 = (int)sVar4;
              FUN_108dbdc7c(iVar22,(int)(short)(sVar1 + 0x10));
              sVar4 = (short)iVar22;
            }
            *(short *)((long)puVar20 + 0x14) = sVar4;
            goto LAB_108dbd184;
          }
          if ((*(byte *)(lVar11 + 0x46) >> 5 & 1) != 0) {
            cVar9 = '\0';
            goto LAB_108dbd14c;
          }
          if (((((bVar3) && ((*(byte *)((long)puVar21 + 0x5b) >> 2 & 1) == 0)) &&
               (*(short *)((long)puVar21 + 0x54) < *(short *)(lVar11 + 0x44))) &&
              (((*(ushort *)((long)puVar23 + 0x32) >> 2 & 1) == 0 && (iRam0000000113297920 != 0))))
             && ((*(ushort *)(*(long *)*puVar23 + 0x4c) >> 6 & 1) == 0)) {
            cVar9 = '\0';
            goto LAB_108dbd14c;
          }
        }
        plVar28 = param_1;
        func_0x000108dbde68(param_1,lVar8 + 8,puVar21,0);
        iVar22 = (int)plVar28;
        if (*(long *)(lVar8 + 0x70) != 0) {
          return;
        }
      }
      else {
        iVar22 = *(int *)(lVar27 + 0x14);
        if (0 < iVar22) {
          iVar5 = *(int *)(lVar8 + 0x48);
          plVar28 = *(long **)(lVar27 + 0x20);
          do {
            lVar25 = *plVar28;
            lVar6 = lVar25;
            FUN_108dbe494(lVar25,lVar24,iVar5);
            if (((int)lVar6 != 0) &&
               (((*(byte *)(lVar25 + 4) & 1) == 0 || (iVar5 == *(short *)(lVar25 + 0x34)))))
            goto LAB_108dbcf44;
            plVar28 = plVar28 + 7;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        iVar22 = 0;
      }
      if (iVar22 != 0) {
        return;
      }
      puVar21 = (undefined8 *)puVar21[5];
      cVar26 = cVar26 + '\x01';
    } while (puVar21 != (undefined8 *)0x0);
  }
  return;
}



/* Entry: 108dbd640; end: 108dbd72f;  */

void FUN_108dbd640(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x38) != param_2 + 0x48) {
    func_0x000108d60660(param_1);
  }
  FUN_108dbdb70(param_1,param_2);
  *(long *)(param_2 + 0x38) = param_2 + 0x48;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 0x30) = 3;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108dbd730; end: 108dbd92f;  */

void FUN_108dbd730(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 == 0) {
    puVar5 = *(undefined8 **)*param_1;
    plVar3 = param_1 + 4;
    lVar7 = *plVar3;
    if (lVar7 != 0 && (*(uint *)(param_3 + 5) & 0x200) != 0) {
      cVar1 = *(char *)(param_3 + 2);
      do {
        if ((*(char *)(lVar7 + 0x10) == cVar1) && ((*(byte *)(lVar7 + 0x29) >> 1 & 1) != 0)) {
          lVar2 = lVar7;
          func_0x000108dbdad0(lVar7,param_3);
          if ((int)lVar2 == 0) {
            puVar6 = param_3;
            func_0x000108dbdad0(param_3,lVar7);
            if ((int)puVar6 == 0) goto LAB_108dbd7f8;
            sVar4 = 1;
          }
          else {
            sVar4 = -1;
          }
          *(undefined2 *)((long)param_3 + 0x14) = *(undefined2 *)(lVar7 + 0x14);
          *(short *)((long)param_3 + 0x16) = *(short *)(lVar7 + 0x16) + sVar4;
        }
LAB_108dbd7f8:
        lVar7 = *(long *)(lVar7 + 0x40);
      } while (lVar7 != 0);
    }
    func_0x000108dbd9f0(plVar3,param_3);
    if (plVar3 != (long *)0x0) {
      puVar6 = (undefined8 *)*plVar3;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = puVar5;
        FUN_108d6a6fc(puVar5,0x60);
        *plVar3 = (long)puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          return;
        }
        *(undefined2 *)((long)puVar6 + 0x2c) = 0;
        *(undefined2 *)(puVar6 + 6) = 3;
        *(undefined4 *)(puVar6 + 5) = 0;
        puVar6[7] = puVar6 + 9;
        puVar6[8] = 0;
      }
      else {
        plVar3 = puVar6 + 8;
        lVar7 = *plVar3;
        while (((lVar7 != 0 && (func_0x000108dbd9f0(plVar3,param_3), plVar3 != (long *)0x0)) &&
               (lVar7 = *plVar3, lVar7 != 0))) {
          *plVar3 = *(long *)(lVar7 + 0x40);
          FUN_108dbd640(puVar5,lVar7);
          func_0x000108d60660(puVar5,lVar7);
          lVar7 = *plVar3;
        }
      }
      FUN_108dbdb70(puVar5,puVar6);
      func_0x000108dbd6a0(puVar5,puVar6,*(undefined2 *)((long)param_3 + 0x2c));
      if ((int)puVar5 == 0) {
        uVar9 = param_3[1];
        uVar8 = *param_3;
        uVar10 = param_3[2];
        uVar12 = param_3[5];
        uVar11 = param_3[4];
        puVar6[3] = param_3[3];
        puVar6[2] = uVar10;
        puVar6[5] = uVar12;
        puVar6[4] = uVar11;
        puVar6[1] = uVar9;
        *puVar6 = uVar8;
        _memcpy(puVar6[7],param_3[7],(ulong)*(ushort *)((long)puVar6 + 0x2c) << 3);
        if ((*(uint *)(param_3 + 5) >> 10 & 1) == 0) {
          if ((*(uint *)(param_3 + 5) >> 0xe & 1) != 0) {
            param_3[4] = 0;
          }
        }
        else {
          *(undefined1 *)((long)param_3 + 0x1c) = 0;
        }
      }
      else {
        puVar6[3] = 0;
        puVar6[4] = 0;
      }
      if ((((*(byte *)((long)puVar6 + 0x29) >> 2 & 1) == 0) && (puVar6[4] != 0)) &&
         (*(int *)(puVar6[4] + 0x50) == 0)) {
        puVar6[4] = 0;
      }
    }
  }
  else {
    FUN_108dbd930(param_2,*param_3,(long)*(short *)((long)param_3 + 0x14),
                  (long)*(short *)((long)param_3 + 0x16));
  }
  return;
}



/* Entry: 108dbd930; end: 108dbdb6f;  */

void FUN_108dbd930(ushort *param_1,ulong param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar3 = (ulong *)(param_1 + 4);
  uVar1 = *param_1;
  uVar5 = (ulong)uVar1;
  puVar4 = puVar3;
  uVar8 = uVar5;
  if (uVar5 != 0) {
    do {
      if ((param_3 <= (short)(ushort)puVar4[1]) && ((param_2 & (*puVar4 ^ 0xffffffffffffffff)) == 0)
         ) goto LAB_108dbd9d4;
      if (((short)(ushort)puVar4[1] <= param_3) && ((*puVar4 & (param_2 ^ 0xffffffffffffffff)) == 0)
         ) {
        return;
      }
      uVar2 = (int)uVar8 - 1;
      puVar4 = puVar4 + 2;
      uVar8 = (ulong)uVar2;
    } while ((uVar2 & 0xffff) != 0);
    if (2 < uVar1) {
      lVar6 = uVar5 - 1;
      puVar7 = (ulong *)(param_1 + 0xc);
      do {
        puVar4 = puVar7;
        if ((short)(ushort)puVar3[1] <= (short)(ushort)puVar7[1]) {
          puVar4 = puVar3;
        }
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -1;
        puVar3 = puVar4;
      } while (lVar6 != 0);
      if ((short)(ushort)puVar4[1] <= param_3) {
        return;
      }
      goto LAB_108dbd9d4;
    }
  }
  *param_1 = uVar1 + 1;
  puVar4 = puVar3 + uVar5 * 2;
  *(ushort *)((long)puVar4 + 10) = (ushort)param_4;
LAB_108dbd9d4:
  *puVar4 = param_2;
  *(ushort *)(puVar4 + 1) = (ushort)param_3;
  if (param_4 < (short)*(ushort *)((long)puVar4 + 10)) {
    *(ushort *)((long)puVar4 + 10) = (ushort)param_4;
  }
  return;
}



/* Entry: 108dbdb70; end: 108dbdc7b;  */

void FUN_108dbdb70(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  if ((uVar1 & 0x4400) != 0) {
    if (((uVar1 >> 10 & 1) == 0) || (*(char *)(param_2 + 0x1c) == '\0')) {
      if ((uVar1 >> 0xe & 1) == 0) {
        return;
      }
      if (*(long *)(param_2 + 0x20) == 0) {
        return;
      }
      func_0x000108d60660(param_1,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
      func_0x000108d60660(param_1,*(undefined8 *)(param_2 + 0x20));
    }
    else {
      func_0x000108d5e198(*(undefined8 *)(param_2 + 0x20));
      *(undefined1 *)(param_2 + 0x1c) = 0;
    }
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return;
}



/* Entry: 108dbdc7c; end: 108dbdcff;  */

int FUN_108dbdc7c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < param_2) {
    iVar1 = param_2;
    if (param_2 <= param_1 + 0x31) {
      if (param_1 + 0x1f < param_2) {
        iVar1 = param_2 + 1;
      }
      else {
        iVar1 = param_2 + (uint)(byte)(&UNK_10dfa2d97)[(long)param_2 - (long)param_1];
      }
    }
  }
  else {
    iVar1 = param_1;
    if (param_1 <= param_2 + 0x31) {
      if (param_2 + 0x1f < param_1) {
        iVar1 = param_1 + 1;
      }
      else {
        iVar1 = param_1 + (uint)(byte)(&UNK_10dfa2d97)[(long)param_1 - (long)param_2];
      }
    }
  }
  return (int)(short)iVar1;
}



/* Entry: 108dbdd00; end: 108dbe493;  */

void FUN_108dbdd00(long param_1,ulong *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  uint uStack_64;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    plVar11 = *(long **)(param_1 + 0x20);
    iVar10 = *(int *)(param_1 + 0x14);
    do {
      if ((*(ushort *)((long)plVar11 + 0x1c) >> 1 & 1) != 0) break;
      uVar2 = uVar9;
      if ((param_2[1] & plVar11[6]) != 0 && (plVar11[6] & ~(uVar4 | uVar3)) == 0) {
        if ((ulong)*(ushort *)((long)param_2 + 0x2c) != 0) {
          lVar7 = (ulong)*(ushort *)((long)param_2 + 0x2c) << 3;
          do {
            plVar8 = *(long **)((param_2[7] - 8) + lVar7);
            if ((plVar8 != (long *)0x0) &&
               ((plVar8 == plVar11 ||
                ((-1 < (int)*(uint *)(plVar8 + 1) &&
                 ((long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(plVar8 + 1) * 0x38) ==
                  plVar11)))))) goto LAB_108dbde20;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        if ((short)plVar11[3] < 1) {
          *(short *)((long)param_2 + 0x16) = *(short *)((long)param_2 + 0x16) + (short)plVar11[3];
        }
        else {
          *(short *)((long)param_2 + 0x16) = *(short *)((long)param_2 + 0x16) + -1;
          if ((*(ushort *)((long)plVar11 + 0x1a) >> 1 & 1) != 0) {
            uVar6 = *(undefined8 *)(*plVar11 + 0x18);
            func_0x000108dab090(uVar6,&uStack_64);
            uVar2 = uStack_64 + 1;
            uStack_64 = 10;
            if (((uint)uVar6 & (uint)(uVar2 < 3)) == 0) {
              uStack_64 = 0x14;
            }
            uVar2 = uStack_64;
            if (uStack_64 <= uVar9) {
              uVar2 = uVar9;
            }
          }
        }
      }
LAB_108dbde20:
      uVar9 = uVar2;
      plVar11 = plVar11 + 7;
      iVar5 = iVar10 + -1;
      bVar1 = 0 < iVar10;
      iVar10 = iVar5;
    } while (iVar5 != 0 && bVar1);
  }
  if ((int)(param_3 - uVar9) < (int)*(short *)((long)param_2 + 0x16)) {
    *(short *)((long)param_2 + 0x16) = (short)(param_3 - uVar9);
  }
  return;
}



/* Entry: 108dbe494; end: 108dbe53b;  */

bool FUN_108dbe494(char *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  while( true ) {
    pcVar1 = param_1;
    FUN_108daa04c(param_1,param_2,param_3);
    if ((int)pcVar1 == 0) {
      return true;
    }
    if (*param_2 != 'G') break;
    pcVar1 = param_1;
    FUN_108dbe494(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
    if ((int)pcVar1 != 0) {
      return true;
    }
    param_2 = *(char **)(param_2 + 0x18);
  }
  if (*param_2 == 'M') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_108daa04c(uVar2,*(undefined8 *)(param_2 + 0x10),param_3);
    if ((int)uVar2 == 0) {
      return *param_1 != 'L' && *param_1 != 'I';
    }
  }
  return false;
}



/* Entry: 108dbe53c; end: 108dbeb6b;  */

int FUN_108dbe53c(long *param_1,ushort *param_2,long param_3,uint param_4,uint param_5,long param_6,
                 ulong *param_7)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uStack_110;
  uint uStack_100;
  uint uStack_f0;
  ulong uStack_c0;
  ulong uStack_b0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *(long *)*param_1;
  if ((param_5 == 0) || ((*(ushort *)(lVar13 + 0x4c) >> 7 & 1) == 0)) {
    uVar2 = *param_2;
    uVar24 = (ulong)uVar2;
    if (uVar2 < 0x40) {
      if (uVar2 != 0) {
        uVar14 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0;
        uVar17 = 0;
        lVar15 = 0;
        uVar11 = ~(-1L << (uVar24 & 0x3f));
        bVar7 = (param_4 & 0x300) != 0;
LAB_108dbe5fc:
        if (uVar14 != 0) {
          uStack_b0 = *(ulong *)(lVar15 + 8) | uStack_b0;
        }
        lVar15 = param_6;
        if (uVar14 < param_5) {
          lVar15 = *(long *)(*(long *)(param_3 + 0x18) + uVar14 * 8);
        }
        if ((*(byte *)(lVar15 + 0x29) >> 2 & 1) == 0) {
          uVar19 = 0;
          iVar1 = *(int *)(param_1[1] + (ulong)*(byte *)(lVar15 + 0x10) * 0x70 + 0x48);
          do {
            uVar18 = 1L << (uVar19 & 0x3f);
            if ((uVar18 & uVar17) == 0) {
              pcVar21 = *(char **)(*(long *)(param_2 + 4) + uVar19 * 0x20);
              while ((*(uint *)(pcVar21 + 4) >> 0xc & 1) != 0) {
                if ((*(uint *)(pcVar21 + 4) >> 0x12 & 1) == 0) {
                  pcVar21 = pcVar21 + 0x10;
                }
                else {
                  pcVar21 = *(char **)(*(long *)(pcVar21 + 0x20) + 8);
                }
                pcVar21 = *(char **)pcVar21;
              }
              if ((*pcVar21 == -0x66) && (*(int *)(pcVar21 + 0x2c) == iVar1)) {
                plVar9 = param_1 + 0x2b;
                FUN_108dbc2f8(plVar9,iVar1,(long)*(short *)(pcVar21 + 0x30),~uStack_b0,0x82,0);
                if (plVar9 != (long *)0x0) {
                  if (((*(ushort *)((long)plVar9 + 0x1a) >> 1 & 1) != 0) &&
                     (-1 < *(short *)(pcVar21 + 0x30))) {
                    puVar10 = (undefined8 *)*param_1;
                    FUN_108da85d0(puVar10,*(undefined8 *)(*(long *)(param_2 + 4) + uVar19 * 0x20));
                    if (puVar10 == (undefined8 *)0x0) {
                      puVar10 = *(undefined8 **)(lVar13 + 0x10);
                    }
                    uVar23 = *puVar10;
                    puVar10 = (undefined8 *)*param_1;
                    FUN_108da85d0(puVar10,*plVar9);
                    if (puVar10 == (undefined8 *)0x0) {
                      puVar10 = *(undefined8 **)(lVar13 + 0x10);
                    }
                    FUN_108d5e044(uVar23,*puVar10);
                    if ((int)uVar23 != 0) goto LAB_108dbe734;
                  }
                  uVar17 = uVar18 | uVar17;
                }
              }
            }
LAB_108dbe734:
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar24);
          if ((*(uint *)(lVar15 + 0x28) >> 0xc & 1) != 0) goto LAB_108dbea34;
          if ((*(uint *)(lVar15 + 0x28) >> 8 & 1) != 0) {
            lVar16 = 0;
            uStack_f0 = 0;
            bVar6 = true;
            uVar19 = 1;
LAB_108dbe79c:
            uVar18 = 0;
            bVar5 = false;
            uStack_110 = 0;
LAB_108dbe7b8:
            if (((*(ushort *)(lVar15 + 0x18) <= uVar18) || (*(short *)(lVar15 + 0x2e) != 0)) ||
               (uVar2 = *(ushort *)(*(long *)(*(long *)(lVar15 + 0x38) + uVar18 * 8) + 0x1a),
               (uVar2 & 0x82) == 0)) {
              if (lVar16 == 0) {
                bVar8 = false;
                uStack_100 = 0;
                uVar22 = 0xffffffff;
              }
              else {
                sVar3 = *(short *)(*(long *)(lVar16 + 8) + uVar18 * 2);
                if (sVar3 == *(short *)(*(long *)(lVar16 + 0x18) + 0x3c)) {
                  sVar3 = -1;
                }
                uVar22 = (uint)sVar3;
                bVar8 = uVar22 < 0x80000000;
                uStack_100 = (uint)*(byte *)(*(long *)(lVar16 + 0x38) + uVar18);
                if ((bVar6) && (-1 < (int)uVar22)) {
                  if (uVar18 < *(ushort *)(lVar15 + 0x18)) {
                    bVar8 = true;
                    bVar6 = true;
                  }
                  else {
                    bVar6 = *(char *)(*(long *)(*(long *)(lVar16 + 0x18) + 8) + (ulong)uVar22 * 0x30
                                     + 0x28) != '\0';
                    bVar8 = true;
                  }
                }
              }
              uVar20 = 0;
              do {
                if ((uVar17 >> (uVar20 & 0x3f) & 1) == 0) {
                  pcVar21 = *(char **)(*(long *)(param_2 + 4) + uVar20 * 0x20);
                  uVar12 = *(uint *)(pcVar21 + 4);
                  while ((uVar12 >> 0xc & 1) != 0) {
                    if ((uVar12 >> 0x12 & 1) == 0) {
                      pcVar21 = pcVar21 + 0x10;
                    }
                    else {
                      pcVar21 = *(char **)(*(long *)(pcVar21 + 0x20) + 8);
                    }
                    pcVar21 = *(char **)pcVar21;
                    uVar12 = *(uint *)(pcVar21 + 4);
                  }
                  bVar4 = bVar7;
                  if (((*pcVar21 == -0x66) && (*(int *)(pcVar21 + 0x2c) == iVar1)) &&
                     (uVar22 == (int)*(short *)(pcVar21 + 0x30))) {
                    if (!bVar8) goto LAB_108dbe950;
                    puVar10 = (undefined8 *)*param_1;
                    FUN_108da85d0();
                    if (puVar10 == (undefined8 *)0x0) {
                      puVar10 = *(undefined8 **)(lVar13 + 0x10);
                    }
                    uVar23 = *puVar10;
                    FUN_108d5e044(uVar23,*(undefined8 *)(*(long *)(lVar16 + 0x40) + uVar18 * 8));
                    if ((int)uVar23 == 0) goto LAB_108dbe950;
                  }
                }
                else {
                  bVar4 = true;
                }
                if ((!bVar4) || (uVar20 = uVar20 + 1, uVar24 <= uVar20)) goto LAB_108dbea04;
              } while( true );
            }
            if ((uVar2 & 0x80) != 0) {
              bVar6 = false;
            }
            goto LAB_108dbe9f4;
          }
          lVar16 = *(long *)(lVar15 + 0x20);
          if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x5b) >> 2 & 1) == 0)) {
            uVar19 = (ulong)*(ushort *)(lVar16 + 0x58);
            bVar8 = *(char *)(lVar16 + 0x5a) != '\0';
            if (uVar19 != 0) {
              uStack_f0 = (uint)*(ushort *)(lVar16 + 0x56);
              bVar6 = bVar8;
              goto LAB_108dbe79c;
            }
            goto LAB_108dbea2c;
          }
          goto LAB_108dbe58c;
        }
        if (*(char *)(lVar15 + 0x1d) != '\0') {
          uVar17 = uVar11;
        }
LAB_108dbeb28:
        if (uVar17 != uVar11) {
          uVar24 = 0xff;
        }
      }
      goto LAB_108dbe590;
    }
  }
LAB_108dbe58c:
  uVar24 = 0;
  goto LAB_108dbe590;
LAB_108dbe950:
  if ((param_4 >> 8 & 1) == 0) {
    if (uStack_110._4_4_ == 0) {
      uVar12 = (uint)*(byte *)(*(long *)(param_2 + 4) + (uVar20 & 0xffffffff) * 0x20 + 0x18);
      uStack_110 = (ulong)(uVar12 ^ uStack_100);
      if (uVar12 != uStack_100) {
        *param_7 = *param_7 | 1L << (uVar14 & 0x3f);
      }
    }
    else if ((uStack_100 ^ (uint)uStack_110) !=
             (uint)*(byte *)(*(long *)(param_2 + 4) + (uVar20 & 0xffffffff) * 0x20 + 0x18)) {
LAB_108dbea04:
      bVar8 = false;
      if (uStack_f0 <= (uint)uVar18 && uVar18 != 0) {
        bVar8 = bVar6;
      }
      goto LAB_108dbea18;
    }
    uStack_110 = CONCAT44(1,(uint)uStack_110);
  }
  if ((int)uVar22 < 0) {
    bVar5 = true;
  }
  uVar17 = 1L << (uVar20 & 0x3f) | uVar17;
LAB_108dbe9f4:
  uVar18 = uVar18 + 1;
  bVar8 = bVar6;
  if (uVar18 == uVar19) goto LAB_108dbea18;
  goto LAB_108dbe7b8;
LAB_108dbea18:
  if (!bVar5) {
LAB_108dbea2c:
    if (!bVar8) {
      if (uVar17 == uVar11) goto LAB_108dbe590;
      goto LAB_108dbeb4c;
    }
  }
LAB_108dbea34:
  lVar16 = 0;
  uVar19 = 0;
  uStack_c0 = *(ulong *)(lVar15 + 8) | uStack_c0;
  do {
    uVar18 = 1L << (uVar19 & 0x3f);
    if ((uVar18 & uVar17) == 0) {
      uVar23 = *(undefined8 *)(*(long *)(param_2 + 4) + lVar16);
      uVar20 = (long)param_1 + 0x54;
      FUN_108dbc0b8(uVar20,uVar23);
      if (uVar20 == 0) {
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0x100000000;
        pcStack_98 = FUN_108daa264;
        uStack_90 = 0x108daa314;
        FUN_108daa320(&pcStack_98,uVar23);
        if (uStack_78._4_1_ == '\0') goto LAB_108dbead8;
      }
      if ((uVar20 & ~uStack_c0) != 0) {
        uVar18 = 0;
      }
      uVar17 = uVar18 | uVar17;
    }
LAB_108dbead8:
    uVar19 = uVar19 + 1;
    lVar16 = lVar16 + 0x20;
  } while (uVar24 != uVar19);
  if ((uVar11 <= uVar17) || (bVar6 = param_5 <= uVar14, uVar14 = uVar14 + 1, bVar6))
  goto LAB_108dbeb28;
  goto LAB_108dbe5fc;
  while (uVar24 = uVar24 - 1, (-1L << (uVar24 & 0x3f) | uVar17) != 0xffffffffffffffff) {
LAB_108dbeb4c:
    if ((long)uVar24 < 2) goto LAB_108dbe58c;
  }
LAB_108dbe590:
  return (int)(char)uVar24;
}



/* Entry: 108dbeb6c; end: 108dbec6f;  */

/* WARNING: Possible PIC construction at 0x000108dbec18: Changing call to branch */

void FUN_108dbeb6c(ulong param_1,int param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong unaff_x19;
  char *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar4 = &stack0xffffffffffffffd0;
  puVar6 = &stack0xfffffffffffffff0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar1 = iVar3 + 5;
    if (iVar1 < *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x18) = iVar1;
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar3);
      *(undefined1 *)(puVar2 + 1) = 0x20;
      *puVar2 = 0x444e4120;
    }
    else {
      func_0x000108d71a6c(param_1,&UNK_10f51a0b3,5);
    }
  }
  func_0x000108d71a2c(param_1,param_3);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar1 = iVar3 + 1;
  if (iVar1 < *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x18) = iVar1;
    *(char *)(*(long *)(param_1 + 0x10) + (long)iVar3) = *param_4;
    iVar3 = *(int *)(param_1 + 0x18);
    iVar1 = iVar3 + 1;
    if (iVar1 < *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x18) = iVar1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)iVar3) = 0x3f;
      return;
    }
    param_4 = "?";
    puVar4 = (undefined1 *)register0x00000008;
    param_3 = unaff_x21;
    puVar6 = unaff_x29;
  }
  else {
    unaff_x30 = 0x108dbec1c;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = param_3;
  *(char **)(puVar4 + -0x20) = unaff_x20;
  *(ulong *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar6;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  uVar5 = param_1;
  func_0x000108d71acc(param_1,1);
  if (0 < (int)uVar5) {
    _memcpy(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18),param_4,uVar5 & 0xffffffff);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)uVar5;
  }
  return;
}



/* Entry: 108dbec70; end: 108dbee43;  */

long * FUN_108dbec70(long *param_1,undefined8 *param_2,long param_3,int param_4,uint param_5,
                    long *param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  
  pcVar10 = (char *)*param_2;
  lVar9 = param_1[2];
  if (*pcVar10 == 'L') {
    uVar3 = 0x1c;
    plVar4 = (long *)0x0;
    plVar5 = param_6;
  }
  else {
    if (*pcVar10 == 'O') {
      FUN_108da6d64(param_1,*(undefined8 *)(pcVar10 + 0x18),param_6);
      param_6 = param_1;
      goto LAB_108dbee18;
    }
    lVar12 = *(long *)(param_3 + 0x48);
    if (((*(byte *)(lVar12 + 0x29) >> 2 & 1) == 0) && (*(long *)(lVar12 + 0x20) != 0)) {
      param_5 = param_5 ^ *(char *)(*(long *)(*(long *)(lVar12 + 0x20) + 0x38) + (long)param_4) !=
                          '\0';
    }
    plVar4 = param_1;
    FUN_108dab1b8(param_1,pcVar10,4,0);
    uVar1 = *(undefined4 *)(pcVar10 + 0x2c);
    uVar11 = (uint)((int)plVar4 == 4);
    uVar7 = 0x6c;
    if (param_5 != uVar11) {
      uVar7 = 0x69;
    }
    FUN_108d71098(lVar9,uVar7,uVar1,0,0);
    *(uint *)(lVar12 + 0x28) = *(uint *)(lVar12 + 0x28) | 0x800;
    iVar8 = *(int *)(param_3 + 0x38);
    if (iVar8 == 0) {
      uVar7 = (undefined4)*(undefined8 *)(lVar9 + 0x30);
      FUN_108da84a4();
      *(undefined4 *)(param_3 + 0x10) = uVar7;
      iVar8 = *(int *)(param_3 + 0x38);
    }
    *(int *)(param_3 + 0x38) = iVar8 + 1;
    lVar12 = *param_1;
    func_0x000108d829d8(lVar12,*(undefined8 *)(param_3 + 0x40),(long)(iVar8 + 1) * 0xc);
    *(long *)(param_3 + 0x40) = lVar12;
    if (lVar12 == 0) {
      *(undefined4 *)(param_3 + 0x38) = 0;
      goto LAB_108dbee18;
    }
    lVar12 = lVar12 + (long)*(int *)(param_3 + 0x38) * 0xc;
    *(undefined4 *)(lVar12 + -0xc) = uVar1;
    if ((int)plVar4 == 1) {
      uVar3 = 0x67;
      plVar4 = param_6;
      plVar5 = (long *)0x0;
    }
    else {
      uVar3 = 0x2f;
      plVar4 = (long *)0x0;
      plVar5 = param_6;
    }
    lVar2 = lVar9;
    FUN_108d71098(lVar9,uVar3,uVar1,plVar4,plVar5);
    *(int *)(lVar12 + -8) = (int)lVar2;
    uVar6 = 6;
    if (param_5 == uVar11) {
      uVar6 = 7;
    }
    *(undefined1 *)(lVar12 + -4) = uVar6;
    uVar3 = 0x4c;
    plVar4 = param_6;
    plVar5 = (long *)0x0;
  }
  FUN_108d71098(lVar9,uVar3,plVar4,plVar5,0);
LAB_108dbee18:
  FUN_108dbee44(param_3,param_2);
  return param_6;
}



/* Entry: 108dbee44; end: 108dbef8b;  */

void FUN_108dbee44(int *param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  
  if (param_2 != (long *)0x0) {
    puVar6 = (ushort *)((long)param_2 + 0x1c);
    uVar2 = *puVar6;
    if ((uVar2 >> 2 & 1) == 0) {
      iVar4 = 0;
      iVar1 = *param_1;
      do {
        if ((iVar1 != 0) && ((*(byte *)(*param_2 + 4) & 1) == 0)) {
          return;
        }
        if ((param_2[6] & *(ulong *)(param_1 + 0x14)) != 0) {
          return;
        }
        uVar5 = 4;
        if ((uVar2 & 0x400) != 0 && iVar4 != 0) {
          uVar5 = 0x200;
        }
        *puVar6 = uVar5 | uVar2;
        if ((int)*(uint *)(param_2 + 1) < 0) {
          return;
        }
        param_2 = (long *)(*(long *)(param_2[4] + 0x20) + (ulong)*(uint *)(param_2 + 1) * 0x38);
        cVar3 = *(char *)((long)param_2 + 0x1e) + -1;
        *(char *)((long)param_2 + 0x1e) = cVar3;
        if (cVar3 != '\0') {
          return;
        }
        puVar6 = (ushort *)((long)param_2 + 0x1c);
        uVar2 = *puVar6;
        iVar4 = iVar4 + -1;
      } while ((uVar2 >> 2 & 1) == 0);
    }
  }
  return;
}



/* Entry: 108dbef8c; end: 108dbf05f;  */

void FUN_108dbef8c(long param_1,ulong param_2,ulong param_3,char *param_4)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (((int)param_3 != 0) && (param_4 != (char *)0x0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    do {
      iVar4 = (int)param_2;
      uVar5 = (uint)param_3;
      if (*param_4 != 'A') {
        if (1 < uVar5) goto LAB_108dbeff4;
        goto LAB_108dbf010;
      }
      param_2 = (ulong)(iVar4 + 1);
      param_4 = param_4 + 1;
      param_3 = (ulong)(uVar5 - 1);
    } while (uVar5 - 1 != 0 && 0 < (int)uVar5);
  }
  return;
  while (iVar6 = (int)param_3, param_3 = (ulong)(iVar6 - 1), 2 < iVar6) {
LAB_108dbeff4:
    if (param_4[(param_3 & 0xffffffff) - 1] != 'A') goto LAB_108dbf014;
  }
LAB_108dbf010:
  param_3 = 1;
LAB_108dbf014:
  FUN_108d71098(uVar7,0x30,param_2,param_3,0);
  FUN_108d6aaec(uVar7,0xffffffff,param_4,param_3);
  pcVar3 = (char *)(param_1 + 0x8e);
  iVar6 = 10;
  do {
    iVar1 = *(int *)(pcVar3 + 6);
    if (iVar4 <= iVar1 && iVar1 < (int)param_3 + iVar4) {
      if (*pcVar3 != '\0') {
        bVar2 = *(byte *)(param_1 + 0x1f);
        if (bVar2 < 8) {
          *(byte *)(param_1 + 0x1f) = bVar2 + 1;
          *(int *)(param_1 + 0x24 + (ulong)bVar2 * 4) = iVar1;
        }
        *pcVar3 = '\0';
      }
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
    }
    pcVar3 = pcVar3 + 0x14;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



/* Entry: 108dbf060; end: 108dbf117;  */

void FUN_108dbf060(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x18);
  lVar6 = *param_1;
  lVar2 = (ulong)*(ushort *)(param_2 + 0x58) + 1;
  FUN_108d60848();
  *(long *)(param_2 + 0x20) = lVar2;
  if (lVar2 == 0) {
    *(undefined1 *)(lVar6 + 0x51) = 1;
  }
  else {
    if (*(short *)(param_2 + 0x58) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        sVar1 = *(short *)(*(long *)(param_2 + 8) + uVar3 * 2);
        if (sVar1 < 0) {
          uVar4 = 0x44;
        }
        else {
          uVar4 = *(undefined1 *)(*(long *)(lVar5 + 8) + (long)(int)sVar1 * 0x30 + 0x29);
        }
        *(undefined1 *)(*(long *)(param_2 + 0x20) + uVar3) = uVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_2 + 0x58));
      lVar2 = *(long *)(param_2 + 0x20);
    }
    *(undefined1 *)(lVar2 + uVar3) = 0;
  }
  return;
}



/* Entry: 108dbf118; end: 108dbf1d7;  */

/* WARNING: Possible PIC construction at 0x000108dbf188: Changing call to branch */

void FUN_108dbf118(undefined8 *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  long unaff_x19;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  ushort *puVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar6 = **(long **)*param_1;
  puVar5 = (undefined8 *)param_1[4];
  if (0 < *(int *)((long)param_1 + 0x14)) {
    uVar3 = *(int *)((long)param_1 + 0x14) + 1;
    puVar7 = (ushort *)((long)puVar5 + 0x1c);
    do {
      uVar2 = *puVar7;
      if ((uVar2 & 1) != 0) {
        func_0x000108d93df0(lVar6,*(undefined8 *)(puVar7 + -0xe));
        uVar2 = *puVar7;
      }
      if ((uVar2 & 0x30) != 0) {
        puVar5 = *(undefined8 **)(puVar7 + -6);
        FUN_108dbf118(puVar5);
        unaff_x30 = 0x108dbf18c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = lVar6;
        unaff_x20 = param_1;
        unaff_x21 = puVar5;
        unaff_x22 = (ulong)uVar3;
        unaff_x29 = puVar1;
        goto SUB_108d60660;
      }
      uVar3 = uVar3 - 1;
      puVar7 = puVar7 + 0x1c;
    } while (1 < uVar3);
    puVar5 = (undefined8 *)param_1[4];
  }
  if (puVar5 == param_1 + 5) {
    return;
  }
SUB_108d60660:
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x328) != 0) {
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((puVar5 < *(undefined8 **)(lVar6 + 0x170)) || (*(undefined8 **)(lVar6 + 0x178) <= puVar5))
      {
        (*pcRam0000000113297950)();
        uVar3 = (uint)puVar5;
      }
      else {
        uVar3 = (uint)*(ushort *)(lVar6 + 0x150);
      }
      **(int **)(lVar6 + 0x328) = **(int **)(lVar6 + 0x328) + uVar3;
      return;
    }
    if ((*(undefined8 **)(lVar6 + 0x170) <= puVar5) && (puVar5 < *(undefined8 **)(lVar6 + 0x178))) {
      *puVar5 = *(undefined8 *)(lVar6 + 0x168);
      *(undefined8 **)(lVar6 + 0x168) = puVar5;
      *(int *)(lVar6 + 0x154) = *(int *)(lVar6 + 0x154) + -1;
      return;
    }
  }
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar4 = puVar5;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar4;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar5);
    puVar5 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar5);
  return;
}



/* Entry: 108dbf1d8; end: 108dbf24f;  */

ulong FUN_108dbf1d8(uint param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((int)param_1 < 10) {
    return 1;
  }
  uVar4 = (param_1 & 0xffff) / 10;
  uVar5 = param_1 + uVar4 * -10;
  lVar1 = 0;
  if ((uVar5 & 0xffff) != 0) {
    lVar1 = ((ulong)uVar5 & 0xffff) - 1;
  }
  lVar2 = ((ulong)uVar5 & 0xffff) - 2;
  if ((uVar5 & 0xffff) < 5) {
    lVar2 = lVar1;
  }
  if (0x1d < param_1) {
    uVar3 = 0x7fffffffffffffff;
    if (param_1 < 0x262) {
      uVar3 = lVar2 + 8U << ((ulong)(uVar4 - 3) & 0x3f);
    }
    return uVar3;
  }
  return lVar2 + 8U >> ((ulong)(3 - uVar4) & 0x3f);
}



/* Entry: 108dbf250; end: 108dbf35b;  */

void FUN_108dbf250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x1f) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54) + 1;
    *(int *)(param_1 + 0x54) = iVar1;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar2;
    iVar1 = *(int *)(param_1 + (ulong)bVar2 * 4 + 0x24);
  }
  uVar3 = uVar6;
  FUN_108d71098(uVar6,0x45,param_2,param_3,param_5);
  FUN_108d6aaec(uVar6,uVar3,(long)(int)param_4,0xfffffff2);
  FUN_108d71098(uVar6,0x31,param_5,param_4,iVar1);
  FUN_108d71098(uVar6,0x6e,param_2,iVar1,0);
  if (iVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x1f);
    if (bVar2 < 8) {
      puVar4 = (undefined1 *)(param_1 + 0x8e);
      iVar5 = 10;
      do {
        if (*(int *)(puVar4 + 6) == iVar1) {
          *puVar4 = 1;
          return;
        }
        puVar4 = puVar4 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(byte *)(param_1 + 0x1f) = bVar2 + 1;
      *(int *)(param_1 + (ulong)bVar2 * 4 + 0x24) = iVar1;
    }
  }
  return;
}


