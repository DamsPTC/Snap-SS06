/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108228d00; end: 108228dc7;  */

long FUN_108228d00(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 1;
  _calloc(1,0xbd0);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined **)(lVar2 + 8) = &UNK_10f47fb2b;
  (*(code *)PTR_FUN_113254c78)(lVar2 + 0x98);
  *(undefined4 *)(lVar2 + 4) = 0;
  *(undefined4 *)(lVar2 + 0x1b0) = 0;
  iVar1 = 0x13254840;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return lVar2;
  }
  if (PTR_LOOP_113254838 != PTR_DAT_1132548c8) {
    if (PTR_DAT_1132548c8 != (undefined *)0x0) {
      iVar1 = 2;
      (*(code *)PTR_DAT_1132548c8)();
      if (iVar1 != 0) {
        pcRam0000000113826698 = FUN_108229bc4;
        goto LAB_108228da4;
      }
    }
    pcRam0000000113826698 = (code *)0x108229f74;
  }
LAB_108228da4:
  PTR_LOOP_113254838 = PTR_DAT_1132548c8;
  _pthread_mutex_unlock(0x113254840);
  return lVar2;
}



/* Entry: 108228dc8; end: 108228e33;  */

void FUN_108228dc8(long param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_DAT_113254ca0)(param_1 + 0x98);
    _free(*(undefined8 *)(param_1 + 0xbb0));
    *(undefined8 *)(param_1 + 3000) = 0;
    *(undefined8 *)(param_1 + 0xbb0) = 0;
    FUN_108223ad8(*(undefined8 *)(param_1 + 0xb90));
    *(undefined8 *)(param_1 + 0xb90) = 0;
    _free(*(undefined8 *)(param_1 + 0xb48));
    *(undefined8 *)(param_1 + 0xb50) = 0;
    *(undefined8 *)(param_1 + 0xb48) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Entry: 108228e34; end: 108228ee7;  */

undefined8 FUN_108228e34(byte *param_1,ulong param_2,ulong param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != (byte *)0x0) && (9 < param_2)) {
    if ((param_1[3] != 0x9d) || ((param_1[4] != 1 || (param_1[5] != 0x2a)))) {
      return 0;
    }
    uVar3 = 0;
    if (((*param_1 & 0x19) == 0x10) &&
       (((uint)param_1[2] << 0x10 | (uint)param_1[1] << 8 | (uint)*param_1) >> 5 < param_3)) {
      uVar3 = 0;
      uVar1 = (uint)param_1[6] | (param_1[7] & 0x3f) << 8;
      if ((uVar1 != 0) && (uVar2 = (uint)param_1[8] | (param_1[9] & 0x3f) << 8, uVar2 != 0)) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar1;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar2;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* Entry: 108228ee8; end: 10822934f;  */

int FUN_108228ee8(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint3 uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  int *piVar8;
  int *piVar9;
  char cVar10;
  ulong uVar11;
  undefined *puVar12;
  uint3 *puVar13;
  int iVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  *(undefined **)(param_1 + 2) = &UNK_10f47fb2b;
  if (param_2 == (uint *)0x0) {
    *param_1 = 2;
    puVar12 = &UNK_10f47fb2e;
  }
  else {
    uVar11 = *(ulong *)(param_2 + 0x18);
    uVar16 = uVar11 - 3;
    if (uVar11 < 3 || uVar16 == 0) {
      *param_1 = 7;
      puVar12 = &UNK_10f47fb53;
    }
    else {
      puVar13 = *(uint3 **)(param_2 + 0x1a);
      bVar3 = (byte)*puVar13;
      uVar4 = *puVar13;
      *(byte *)(param_1 + 0x11) = bVar3 & 1 ^ 1;
      bVar5 = bVar3 >> 1 & 7;
      *(byte *)((long)param_1 + 0x45) = bVar5;
      bVar6 = bVar3 >> 4 & 1;
      *(byte *)((long)param_1 + 0x46) = bVar6;
      param_1[0x12] = (uint)(uVar4 >> 5);
      if (bVar5 < 4) {
        if (bVar6 == 0) {
          *param_1 = 4;
          puVar12 = &UNK_10f47fb84;
        }
        else {
          pbVar15 = (byte *)((long)puVar13 + 3);
          if ((bVar3 & 1) == 0) {
            if (uVar16 < 7) {
              *param_1 = 7;
              puVar12 = &UNK_10f47fb9b;
            }
            else {
              if (((*pbVar15 == 0x9d) && ((byte)puVar13[1] == 1)) &&
                 (*(byte *)((long)puVar13 + 5) == 0x2a)) {
                uVar1 = (uint)*(byte *)((long)puVar13 + 6) |
                        (*(byte *)((long)puVar13 + 7) & 0x3f) << 8;
                *(short *)(param_1 + 0x13) = (short)uVar1;
                *(byte *)(param_1 + 0x14) = *(byte *)((long)puVar13 + 7) >> 6;
                uVar2 = (uint)(byte)puVar13[2] | (*(byte *)((long)puVar13 + 9) & 0x3f) << 8;
                *(short *)((long)param_1 + 0x4e) = (short)uVar2;
                *(byte *)((long)param_1 + 0x51) = *(byte *)((long)puVar13 + 9) >> 6;
                pbVar15 = (byte *)((long)puVar13 + 10);
                uVar16 = uVar11 - 10;
                param_1[0x66] = uVar1 + 0xf >> 4;
                param_1[0x67] = uVar2 + 0xf >> 4;
                *param_2 = uVar1;
                param_2[1] = uVar2;
                param_2[0x1d] = 0;
                param_2[0x1e] = 0;
                param_2[0x1f] = uVar1;
                param_2[0x20] = 0;
                param_2[0x21] = uVar2;
                param_2[0x22] = 0;
                param_2[0x23] = uVar1;
                param_2[0x24] = uVar2;
                param_2[3] = uVar1;
                param_2[4] = uVar2;
                *(undefined1 *)((long)param_1 + 0x4aa) = 0xff;
                *(undefined2 *)(param_1 + 0x12a) = 0xffff;
                param_1[0x23] = 1;
                param_1[0x24] = 0;
                param_1[0x21] = 0;
                param_1[0x22] = 0;
                param_1[0x25] = 0;
                goto LAB_1082290a8;
              }
              *param_1 = 3;
              puVar12 = &UNK_10f47fbb7;
            }
          }
          else {
LAB_1082290a8:
            if (uVar16 < (uint)(uVar4 >> 5)) {
              *param_1 = 7;
              puVar12 = &UNK_10f47fbc5;
            }
            else {
              FUN_1082521d4(param_1 + 4,pbVar15);
              uVar1 = param_1[0x12];
              if ((char)param_1[0x11] != '\0') {
                piVar8 = param_1 + 4;
                FUN_108252294(piVar8,1);
                *(char *)((long)param_1 + 0x52) = (char)piVar8;
                piVar8 = param_1 + 4;
                FUN_108252294(piVar8,1);
                *(char *)((long)param_1 + 0x53) = (char)piVar8;
              }
              piVar8 = param_1 + 4;
              FUN_108252294(piVar8,1);
              param_1[0x21] = (int)piVar8;
              if ((int)piVar8 == 0) {
                param_1[0x22] = 0;
              }
              else {
                piVar8 = param_1 + 4;
                FUN_108252294(piVar8,1);
                param_1[0x22] = (int)piVar8;
                piVar8 = param_1 + 4;
                FUN_108252294(piVar8,1);
                if ((int)piVar8 != 0) {
                  piVar8 = param_1 + 4;
                  FUN_108252294(piVar8,1);
                  lVar17 = 0;
                  param_1[0x23] = (int)piVar8;
                  do {
                    piVar8 = param_1 + 4;
                    FUN_108252294(piVar8,1);
                    if ((int)piVar8 == 0) {
                      cVar10 = '\0';
                    }
                    else {
                      piVar8 = param_1 + 4;
                      FUN_108252294(piVar8,7);
                      piVar9 = param_1 + 4;
                      FUN_108252294(piVar9,1);
                      cVar10 = -(char)piVar8;
                      if ((int)piVar9 == 0) {
                        cVar10 = (char)piVar8;
                      }
                    }
                    *(char *)((long)param_1 + lVar17 + 0x90) = cVar10;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 4);
                  lVar17 = 0;
                  do {
                    piVar8 = param_1 + 4;
                    FUN_108252294(piVar8,1);
                    if ((int)piVar8 == 0) {
                      cVar10 = '\0';
                    }
                    else {
                      piVar8 = param_1 + 4;
                      FUN_108252294(piVar8,6);
                      piVar9 = param_1 + 4;
                      FUN_108252294(piVar9,1);
                      cVar10 = -(char)piVar8;
                      if ((int)piVar9 == 0) {
                        cVar10 = (char)piVar8;
                      }
                    }
                    *(char *)((long)param_1 + lVar17 + 0x94) = cVar10;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 4);
                }
                if (param_1[0x22] != 0) {
                  lVar17 = 0;
                  do {
                    piVar8 = param_1 + 4;
                    FUN_108252294(piVar8,1);
                    if ((int)piVar8 == 0) {
                      uVar7 = 0xff;
                    }
                    else {
                      piVar8 = param_1 + 4;
                      FUN_108252294(piVar8,8);
                      uVar7 = SUB81(piVar8,0);
                    }
                    *(undefined1 *)((long)param_1 + lVar17 + 0x4a8) = uVar7;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 3);
                }
              }
              if (param_1[0xe] == 0) {
                piVar8 = param_1 + 4;
                FUN_108229350(piVar8,param_1);
                if ((int)piVar8 == 0) {
                  if (*param_1 != 0) {
                    return 0;
                  }
                  *param_1 = 3;
                  puVar12 = &UNK_10f47fbf6;
                }
                else {
                  piVar8 = param_1;
                  FUN_108229490(param_1,pbVar15 + uVar1,uVar16 - uVar1);
                  if ((int)piVar8 == 0) {
                    FUN_108227ae0(param_1);
                    if ((char)param_1[0x11] != '\0') {
                      iVar14 = 1;
                      FUN_108252294(param_1 + 4,1);
                      func_0x000108228afc(param_1 + 4,param_1);
                      goto LAB_1082292c0;
                    }
                    if (*param_1 != 0) {
                      return 0;
                    }
                    *param_1 = 4;
                    puVar12 = &UNK_10f47fc29;
                  }
                  else {
                    if (*param_1 != 0) {
                      return 0;
                    }
                    *param_1 = (int)piVar8;
                    puVar12 = &UNK_10f47fc11;
                  }
                }
              }
              else {
                if (*param_1 != 0) {
                  return 0;
                }
                *param_1 = 3;
                puVar12 = &UNK_10f47fbda;
              }
            }
          }
        }
      }
      else {
        *param_1 = 3;
        puVar12 = &UNK_10f47fb65;
      }
    }
  }
  iVar14 = 0;
  *(undefined **)(param_1 + 2) = puVar12;
LAB_1082292c0:
  param_1[1] = iVar14;
  return iVar14;
}



/* Entry: 108229350; end: 10822948f;  */

bool FUN_108229350(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  FUN_108252294(param_1,1);
  *(int *)(param_2 + 0x54) = (int)lVar5;
  lVar5 = param_1;
  FUN_108252294(param_1,6);
  *(int *)(param_2 + 0x58) = (int)lVar5;
  lVar5 = param_1;
  FUN_108252294(param_1,3);
  *(int *)(param_2 + 0x5c) = (int)lVar5;
  lVar5 = param_1;
  FUN_108252294(param_1,1);
  *(int *)(param_2 + 0x60) = (int)lVar5;
  if (((int)lVar5 != 0) && (lVar5 = param_1, FUN_108252294(param_1,1), (int)lVar5 != 0)) {
    lVar5 = 0;
    do {
      lVar2 = param_1;
      FUN_108252294(param_1,1);
      if ((int)lVar2 != 0) {
        lVar2 = param_1;
        FUN_108252294(param_1,6);
        lVar3 = param_1;
        FUN_108252294(param_1,1);
        iVar1 = -(int)lVar2;
        if ((int)lVar3 == 0) {
          iVar1 = (int)lVar2;
        }
        *(int *)(param_2 + 100 + lVar5) = iVar1;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
    lVar5 = 0;
    do {
      lVar2 = param_1;
      FUN_108252294(param_1,1);
      if ((int)lVar2 != 0) {
        lVar2 = param_1;
        FUN_108252294(param_1,6);
        lVar3 = param_1;
        FUN_108252294(param_1,1);
        iVar1 = -(int)lVar2;
        if ((int)lVar3 == 0) {
          iVar1 = (int)lVar2;
        }
        *(int *)(param_2 + 0x74 + lVar5) = iVar1;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
  }
  uVar4 = 0;
  if ((*(int *)(param_2 + 0x58) != 0) && (uVar4 = 1, *(int *)(param_2 + 0x54) == 0)) {
    uVar4 = 2;
  }
  *(undefined4 *)(param_2 + 0xb68) = uVar4;
  return *(int *)(param_1 + 0x28) == 0;
}



/* Entry: 108229490; end: 108229997;  */

undefined4 FUN_108229490(long param_1,uint3 *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = param_1 + 0x10;
  FUN_108252294(lVar3,2);
  uVar2 = ~(-1 << (ulong)((uint)lVar3 & 0x1f));
  uVar7 = (ulong)uVar2;
  *(uint *)(param_1 + 0x1b0) = uVar2;
  uVar6 = uVar7 + (ulong)uVar2 * 2;
  uVar5 = param_3 - uVar6;
  if (param_3 < uVar6) {
    uVar4 = 7;
  }
  else {
    param_3 = (long)param_2 + param_3;
    uVar6 = (long)param_2 + uVar6;
    if ((uint)lVar3 != 0) {
      lVar3 = param_1 + 0x1b8;
      uVar8 = uVar7;
      if (uVar7 < 2) {
        uVar8 = 1;
      }
      do {
        uVar1 = (ulong)*param_2;
        if (uVar5 <= *param_2) {
          uVar1 = uVar5;
        }
        FUN_1082521d4(lVar3,uVar6,uVar1);
        uVar6 = uVar6 + uVar1;
        uVar5 = uVar5 - uVar1;
        param_2 = (uint3 *)((long)param_2 + 3);
        lVar3 = lVar3 + 0x30;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    FUN_1082521d4(param_1 + uVar7 * 0x30 + 0x1b8,uVar6,uVar5);
    if (uVar6 < param_3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 7;
      if (*(int *)(param_1 + 0x40) != 0) {
        uVar4 = 5;
      }
    }
  }
  return uVar4;
}



/* Entry: 108229998; end: 108229bc3;  */

void FUN_108229998(int *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    if (*param_1 != 0) {
      return;
    }
    *(undefined **)(param_1 + 2) = &UNK_10f47fc3a;
    param_1[0] = 2;
    param_1[1] = 0;
    return;
  }
  if ((param_1[1] == 0) && (piVar2 = param_1, FUN_108228ee8(param_1,param_2), (int)piVar2 == 0)) {
    return;
  }
  piVar2 = param_1;
  FUN_10822530c(param_1,param_2);
  if ((int)piVar2 != 0) goto LAB_1082299e4;
  piVar2 = param_1;
  FUN_108225528(param_1,param_2);
  if ((int)piVar2 == 0) {
LAB_108229b18:
    uVar4 = 0;
  }
  else {
    param_1[0x2d7] = 0;
    if (0 < param_1[0x6b]) {
      uVar4 = 0;
      do {
        uVar5 = param_1[0x6c];
        piVar2 = param_1 + 4;
        FUN_108227d64(piVar2,param_1);
        if ((int)piVar2 == 0) {
          if (*param_1 != 0) goto LAB_108229b18;
          puVar3 = &UNK_10f47fc5f;
LAB_108229b74:
          *(undefined **)(param_1 + 2) = puVar3;
          uVar6 = 7;
LAB_108229b80:
          uVar4 = 0;
          *(undefined8 *)param_1 = uVar6;
          goto LAB_108229b1c;
        }
        if (param_1[0x2d6] < param_1[0x66]) {
          do {
            piVar2 = param_1;
            func_0x000108229594(param_1,param_1 + (ulong)(uVar5 & uVar4) * 0xc + 0x6e);
            if ((int)piVar2 == 0) {
              if (*param_1 != 0) goto LAB_108229b18;
              puVar3 = &UNK_10f47fc88;
              goto LAB_108229b74;
            }
            iVar1 = param_1[0x2d6];
            param_1[0x2d6] = iVar1 + 1;
          } while (iVar1 + 1 < param_1[0x66]);
        }
        *(undefined2 *)(*(long *)(param_1 + 0x2c4) + -2) = 0;
        param_1[0x2c0] = 0;
        param_1[0x2d6] = 0;
        piVar2 = param_1;
        FUN_108224660(param_1,param_2);
        if ((int)piVar2 == 0) {
          if (*param_1 == 0) {
            *(undefined **)(param_1 + 2) = &UNK_10f47fcab;
            uVar6 = 6;
            goto LAB_108229b80;
          }
          goto LAB_108229b18;
        }
        uVar4 = param_1[0x2d7] + 1;
        param_1[0x2d7] = uVar4;
      } while ((int)uVar4 < param_1[0x6b]);
    }
    if (0 < param_1[0x32]) {
      iVar1 = (int)param_1 + 0x98;
      (*(code *)PTR_FUN_113254c88)();
      if (iVar1 == 0) goto LAB_108229b18;
    }
    uVar4 = 1;
  }
LAB_108229b1c:
  if (param_1[0x32] < 1) {
    uVar5 = 1;
  }
  else {
    uVar5 = (int)param_1 + 0x98;
    (*(code *)PTR_FUN_113254c88)();
  }
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2);
  }
  if ((uVar5 & uVar4) != 0) {
    param_1[1] = 0;
    return;
  }
LAB_1082299e4:
  FUN_108228dc8(param_1);
  return;
}



/* Entry: 108229bc4; end: 10822a2d7;  */

ulong FUN_108229bc4(ulong *param_1,long param_2,int param_3,long param_4,ulong param_5,long param_6)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  ushort uVar17;
  
  if ((int)param_5 < 0x10) {
    pbVar15 = (byte *)(*(long *)(param_2 + (long)(int)param_5 * 8) + (long)param_3 * 0xb);
    uVar12 = (uint)param_1[1];
    uVar10 = *(uint *)((long)param_1 + 0xc);
    do {
      uVar6 = (ulong)uVar10;
      bVar1 = *pbVar15;
      if ((int)uVar10 < 0) {
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar6 = *puVar4;
          param_1[2] = (long)puVar4 + 7;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar6 >> 0x20 | uVar6 << 0x20) >> 8 | *param_1 << 0x38;
          uVar6 = (ulong)(uVar10 + 0x38);
          *(uint *)((long)param_1 + 0xc) = uVar10 + 0x38;
        }
        else {
          func_0x00010825222c(param_1);
          uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar10 = uVar12 * bVar1 >> 8;
      uVar5 = *param_1;
      uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f));
      uVar16 = uVar10;
      if (uVar10 < uVar7) {
        uVar5 = uVar5 - ((ulong)(uVar10 + 1) << (uVar6 & 0x3f));
        *param_1 = uVar5;
        uVar16 = uVar12 - (uVar10 + 1);
      }
      if (uVar16 < 0x7f) {
        uVar9 = (ulong)uVar16;
        uVar16 = (uint)(byte)(&UNK_10df10c78)[uVar16];
        uVar12 = (int)uVar6 - (uint)(byte)(&UNK_10df10bf8)[uVar9];
        uVar6 = (ulong)uVar12;
        *(uint *)((long)param_1 + 0xc) = uVar12;
      }
      *(uint *)(param_1 + 1) = uVar16;
      if (uVar7 <= uVar10) {
        return param_5;
      }
      uVar12 = (uint)param_5;
      lVar14 = (long)(int)uVar12;
      lVar13 = param_5 << 0x20;
      while( true ) {
        uVar12 = uVar12 + 1;
        param_5 = (ulong)uVar12;
        bVar1 = pbVar15[1];
        if ((int)uVar6 < 0) {
          puVar4 = (ulong *)param_1[2];
          if (puVar4 < (ulong *)param_1[4]) {
            uVar9 = *puVar4;
            param_1[2] = (long)puVar4 + 7;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar5 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | uVar5 << 0x38;
            *param_1 = uVar5;
            uVar10 = (int)uVar6 + 0x38;
            uVar6 = (ulong)uVar10;
            *(uint *)((long)param_1 + 0xc) = uVar10;
          }
          else {
            func_0x00010825222c(param_1);
            uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar5 = *param_1;
          }
        }
        uVar10 = uVar16 * bVar1 >> 8;
        uVar8 = (uint)(uVar5 >> (uVar6 & 0x3f));
        uVar7 = uVar10;
        if (uVar10 < uVar8) {
          uVar5 = uVar5 - ((ulong)(uVar10 + 1) << (uVar6 & 0x3f));
          *param_1 = uVar5;
          uVar7 = uVar16 - (uVar10 + 1);
        }
        uVar16 = uVar7;
        if (uVar16 < 0x7f) {
          uVar9 = (ulong)uVar16;
          uVar16 = (uint)(byte)(&UNK_10df10c78)[uVar16];
          uVar7 = (int)uVar6 - (uint)(byte)(&UNK_10df10bf8)[uVar9];
          uVar6 = (ulong)uVar7;
          *(uint *)((long)param_1 + 0xc) = uVar7;
        }
        *(uint *)(param_1 + 1) = uVar16;
        if (uVar10 < uVar8) break;
        pbVar15 = *(byte **)(param_2 + 8 + lVar14 * 8);
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x100000000;
        if (lVar14 == 0x10) {
          return 0x10;
        }
      }
      lVar11 = *(long *)(param_2 + (long)(int)uVar12 * 8);
      bVar1 = pbVar15[2];
      uVar12 = *(uint *)((long)param_1 + 0xc);
      uVar6 = (ulong)uVar12;
      if ((int)uVar12 < 0) {
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar6 = *puVar4;
          param_1[2] = (long)puVar4 + 7;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar5 = (uVar6 >> 0x20 | uVar6 << 0x20) >> 8 | uVar5 << 0x38;
          *param_1 = uVar5;
          uVar6 = (ulong)(uVar12 + 0x38);
          *(uint *)((long)param_1 + 0xc) = uVar12 + 0x38;
        }
        else {
          func_0x00010825222c(param_1);
          uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar5 = *param_1;
        }
      }
      uVar12 = uVar16 * bVar1 >> 8;
      uVar7 = (uint)(uVar5 >> (uVar6 & 0x3f));
      uVar10 = uVar12;
      if (uVar12 < uVar7) {
        uVar10 = uVar16 - (uVar12 + 1);
        *param_1 = uVar5 - ((ulong)(uVar12 + 1) << (uVar6 & 0x3f));
      }
      if (uVar10 < 0x7f) {
        uVar5 = (ulong)uVar10;
        uVar10 = (uint)(byte)(&UNK_10df10c78)[uVar10];
        uVar16 = (int)uVar6 - (uint)(byte)(&UNK_10df10bf8)[uVar5];
        uVar6 = (ulong)uVar16;
        *(uint *)((long)param_1 + 0xc) = uVar16;
      }
      uVar16 = (uint)uVar6;
      *(uint *)(param_1 + 1) = uVar10;
      if (uVar12 < uVar7) {
        puVar4 = param_1;
        FUN_10822a2d8(param_1,pbVar15);
        uVar17 = (ushort)puVar4;
        pbVar15 = (byte *)(lVar11 + 0x16);
        uVar16 = *(uint *)((long)param_1 + 0xc);
        uVar6 = (ulong)uVar16;
      }
      else {
        pbVar15 = (byte *)(lVar11 + 0xb);
        uVar17 = 1;
      }
      if ((int)uVar16 < 0) {
        puVar4 = (ulong *)param_1[2];
        if (puVar4 < (ulong *)param_1[4]) {
          uVar6 = *puVar4;
          param_1[2] = (long)puVar4 + 7;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar6 >> 0x20 | uVar6 << 0x20) >> 8 | *param_1 << 0x38;
          uVar6 = (ulong)(uVar16 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar7 = (uint)param_1[1] >> 1;
      iVar2 = uVar7 - (int)(*param_1 >> (uVar6 & 0x3f));
      uVar10 = (int)uVar6 - 1;
      uVar16 = iVar2 >> 0x1f;
      uVar12 = (uint)param_1[1] + uVar16 | 1;
      *(uint *)(param_1 + 1) = uVar12;
      *(uint *)((long)param_1 + 0xc) = uVar10;
      *param_1 = *param_1 - ((ulong)(uVar7 + 1 & uVar16) << (uVar6 & 0x3f));
      uVar3 = (ushort)(iVar2 >> 0x1f);
      *(ushort *)(param_6 + (ulong)(byte)(&UNK_10df0b89b)[lVar13 >> 0x20] * 2) =
           ((uVar17 ^ uVar3) - uVar3) * (short)*(undefined4 *)(param_4 + (ulong)(0 < lVar14) * 4);
    } while (lVar14 < 0xf);
  }
  return 0x10;
}



/* Entry: 10822a2d8; end: 10822a9e7;  */

int FUN_10822a2d8(ulong *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  bVar1 = *(byte *)(param_2 + 3);
  uVar3 = param_1[1];
  uVar15 = *(uint *)((long)param_1 + 0xc);
  uVar11 = (ulong)uVar15;
  if ((int)uVar15 < 0) {
    puVar5 = (ulong *)param_1[2];
    if (puVar5 < (ulong *)param_1[4]) {
      uVar11 = *puVar5;
      param_1[2] = (long)puVar5 + 7;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      *param_1 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | *param_1 << 0x38;
      uVar11 = (ulong)(uVar15 + 0x38);
    }
    else {
      func_0x00010825222c(param_1);
      uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
  }
  uVar15 = (int)uVar3 * (uint)bVar1 >> 8;
  uVar6 = *param_1;
  uVar10 = (uint)(uVar6 >> (uVar11 & 0x3f));
  if (uVar15 < uVar10) {
    iVar7 = (int)uVar3 - uVar15;
    uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
    *param_1 = uVar6;
  }
  else {
    iVar7 = uVar15 + 1;
  }
  uVar8 = (uint)LZCOUNT(iVar7) ^ 0x18;
  uVar13 = (int)uVar11 - uVar8;
  uVar11 = (ulong)uVar13;
  iVar7 = (iVar7 << (ulong)(uVar8 & 0x1f)) + -1;
  *(int *)(param_1 + 1) = iVar7;
  *(uint *)((long)param_1 + 0xc) = uVar13;
  if (uVar15 < uVar10) {
    bVar1 = *(byte *)(param_2 + 6);
    if ((int)uVar13 < 0) {
      puVar5 = (ulong *)param_1[2];
      if (puVar5 < (ulong *)param_1[4]) {
        uVar11 = *puVar5;
        param_1[2] = (long)puVar5 + 7;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
        *param_1 = uVar6;
        uVar11 = (ulong)(uVar13 + 0x38);
      }
      else {
        func_0x00010825222c(param_1);
        uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar6 = *param_1;
      }
    }
    uVar15 = iVar7 * (uint)bVar1 >> 8;
    uVar10 = (uint)(uVar6 >> (uVar11 & 0x3f));
    if (uVar15 < uVar10) {
      iVar7 = iVar7 - uVar15;
      uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
      *param_1 = uVar6;
    }
    else {
      iVar7 = uVar15 + 1;
    }
    uVar8 = (uint)LZCOUNT(iVar7) ^ 0x18;
    uVar13 = (int)uVar11 - uVar8;
    uVar11 = (ulong)uVar13;
    iVar7 = (iVar7 << (ulong)(uVar8 & 0x1f)) + -1;
    *(int *)(param_1 + 1) = iVar7;
    *(uint *)((long)param_1 + 0xc) = uVar13;
    if (uVar15 < uVar10) {
      bVar1 = *(byte *)(param_2 + 8);
      if ((int)uVar13 < 0) {
        puVar5 = (ulong *)param_1[2];
        if (puVar5 < (ulong *)param_1[4]) {
          uVar11 = *puVar5;
          param_1[2] = (long)puVar5 + 7;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
          *param_1 = uVar6;
          uVar11 = (ulong)(uVar13 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar6 = *param_1;
        }
      }
      uVar15 = iVar7 * (uint)bVar1 >> 8;
      uVar10 = (uint)(uVar6 >> (uVar11 & 0x3f));
      if (uVar15 < uVar10) {
        iVar7 = iVar7 - uVar15;
        uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
        *param_1 = uVar6;
      }
      else {
        iVar7 = uVar15 + 1;
      }
      uVar8 = (uint)LZCOUNT(iVar7) ^ 0x18;
      uVar13 = (int)uVar11 - uVar8;
      uVar11 = (ulong)uVar13;
      iVar7 = (iVar7 << (ulong)(uVar8 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar7;
      *(uint *)((long)param_1 + 0xc) = uVar13;
      if (uVar15 < uVar10) {
        param_2 = param_2 + 1;
      }
      bVar1 = *(byte *)(param_2 + 9);
      if ((int)uVar13 < 0) {
        puVar5 = (ulong *)param_1[2];
        if (puVar5 < (ulong *)param_1[4]) {
          uVar11 = *puVar5;
          param_1[2] = (long)puVar5 + 7;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
          *param_1 = uVar6;
          uVar11 = (ulong)(uVar13 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar6 = *param_1;
        }
      }
      uVar8 = iVar7 * (uint)bVar1 >> 8;
      uVar13 = (uint)(uVar6 >> (uVar11 & 0x3f));
      if (uVar8 < uVar13) {
        iVar7 = iVar7 - uVar8;
        uVar6 = uVar6 - ((ulong)(uVar8 + 1) << (uVar11 & 0x3f));
        *param_1 = uVar6;
      }
      else {
        iVar7 = uVar8 + 1;
      }
      uVar14 = (uint)LZCOUNT(iVar7) ^ 0x18;
      uVar2 = (int)uVar11 - uVar14;
      iVar7 = (iVar7 << (ulong)(uVar14 & 0x1f)) + -1;
      uVar14 = 2;
      if (uVar10 <= uVar15) {
        uVar14 = 0;
      }
      *(int *)(param_1 + 1) = iVar7;
      *(uint *)((long)param_1 + 0xc) = uVar2;
      if (uVar8 < uVar13) {
        uVar14 = uVar14 + 1;
      }
      pbVar12 = (&PTR_DAT_110a325f8)[uVar14];
      uVar15 = (uint)*pbVar12;
      if (*pbVar12 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          pbVar12 = pbVar12 + 1;
          uVar11 = (ulong)uVar2;
          if ((int)uVar2 < 0) {
            puVar5 = (ulong *)param_1[2];
            if (puVar5 < (ulong *)param_1[4]) {
              uVar11 = *puVar5;
              param_1[2] = (long)puVar5 + 7;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
              *param_1 = uVar6;
              uVar11 = (ulong)(uVar2 + 0x38);
            }
            else {
              func_0x00010825222c(param_1);
              uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar6 = *param_1;
            }
          }
          uVar15 = iVar7 * uVar15 >> 8;
          uVar8 = (uint)(uVar6 >> (uVar11 & 0x3f));
          if (uVar15 < uVar8) {
            iVar7 = iVar7 - uVar15;
            uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
            *param_1 = uVar6;
          }
          else {
            iVar7 = uVar15 + 1;
          }
          uVar13 = (uint)LZCOUNT(iVar7) ^ 0x18;
          uVar2 = (int)uVar11 - uVar13;
          iVar7 = (iVar7 << (ulong)(uVar13 & 0x1f)) + -1;
          *(int *)(param_1 + 1) = iVar7;
          *(uint *)((long)param_1 + 0xc) = uVar2;
          uVar10 = (uint)(uVar15 < uVar8) | uVar10 << 1;
          uVar15 = (uint)*pbVar12;
        } while (uVar15 != 0);
      }
      return uVar10 + (8 << (ulong)uVar14) + 3;
    }
    bVar1 = *(byte *)(param_2 + 7);
    if ((int)uVar13 < 0) {
      puVar5 = (ulong *)param_1[2];
      if (puVar5 < (ulong *)param_1[4]) {
        uVar11 = *puVar5;
        param_1[2] = (long)puVar5 + 7;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
        *param_1 = uVar6;
        uVar11 = (ulong)(uVar13 + 0x38);
      }
      else {
        func_0x00010825222c(param_1);
        uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar6 = *param_1;
      }
    }
    uVar15 = iVar7 * (uint)bVar1 >> 8;
    uVar10 = (uint)(uVar6 >> (uVar11 & 0x3f));
    if (uVar15 < uVar10) {
      iVar7 = iVar7 - uVar15;
      uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
      *param_1 = uVar6;
    }
    else {
      iVar7 = uVar15 + 1;
    }
    uVar8 = (uint)LZCOUNT(iVar7) ^ 0x18;
    uVar13 = (int)uVar11 - uVar8;
    uVar11 = (ulong)uVar13;
    iVar7 = (iVar7 << (ulong)(uVar8 & 0x1f)) + -1;
    *(int *)(param_1 + 1) = iVar7;
    *(uint *)((long)param_1 + 0xc) = uVar13;
    if (uVar15 < uVar10) {
      if ((int)uVar13 < 0) {
        puVar5 = (ulong *)param_1[2];
        if (puVar5 < (ulong *)param_1[4]) {
          uVar11 = *puVar5;
          param_1[2] = (long)puVar5 + 7;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
          *param_1 = uVar6;
          uVar11 = (ulong)(uVar13 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar6 = *param_1;
        }
      }
      uVar15 = (uint)(iVar7 * 0xa5) >> 8;
      if (uVar15 < (uint)(uVar6 >> (uVar11 & 0x3f))) {
        iVar7 = iVar7 - uVar15;
        uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
        *param_1 = uVar6;
        iVar9 = 9;
      }
      else {
        iVar7 = uVar15 + 1;
        iVar9 = 7;
      }
      uVar15 = (uint)LZCOUNT(iVar7) ^ 0x18;
      uVar10 = (int)uVar11 - uVar15;
      uVar11 = (ulong)uVar10;
      iVar7 = (iVar7 << (ulong)(uVar15 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar7;
      *(uint *)((long)param_1 + 0xc) = uVar10;
      if ((int)uVar10 < 0) {
        puVar5 = (ulong *)param_1[2];
        if (puVar5 < (ulong *)param_1[4]) {
          uVar11 = *puVar5;
          param_1[2] = (long)puVar5 + 7;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
          *param_1 = uVar6;
          uVar11 = (ulong)(uVar10 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar6 = *param_1;
        }
      }
      uVar15 = (uint)(iVar7 * 0x91) >> 8;
      uVar10 = (uint)(uVar6 >> (uVar11 & 0x3f));
      if (uVar15 < uVar10) {
        iVar7 = iVar7 - uVar15;
        *param_1 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
      }
      else {
        iVar7 = uVar15 + 1;
      }
      uVar8 = (uint)LZCOUNT(iVar7) ^ 0x18;
      *(int *)(param_1 + 1) = (iVar7 << (ulong)(uVar8 & 0x1f)) + -1;
      *(uint *)((long)param_1 + 0xc) = (int)uVar11 - uVar8;
      if (uVar10 <= uVar15) {
        return iVar9;
      }
      return iVar9 + 1;
    }
    if ((int)uVar13 < 0) {
      puVar5 = (ulong *)param_1[2];
      if (puVar5 < (ulong *)param_1[4]) {
        uVar11 = *puVar5;
        param_1[2] = (long)puVar5 + 7;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
        *param_1 = uVar6;
        uVar11 = (ulong)(uVar13 + 0x38);
      }
      else {
        func_0x00010825222c(param_1);
        uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar6 = *param_1;
      }
    }
    iVar9 = (int)uVar11;
    uVar15 = (uint)(iVar7 * 0x9f) >> 8;
    if (uVar15 < (uint)(uVar6 >> (uVar11 & 0x3f))) {
      iVar7 = iVar7 - uVar15;
      *param_1 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
      iVar4 = 6;
    }
    else {
      iVar7 = uVar15 + 1;
      iVar4 = 5;
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 4);
    if ((int)uVar13 < 0) {
      puVar5 = (ulong *)param_1[2];
      if (puVar5 < (ulong *)param_1[4]) {
        uVar11 = *puVar5;
        param_1[2] = (long)puVar5 + 7;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
        *param_1 = uVar6;
        uVar11 = (ulong)(uVar13 + 0x38);
      }
      else {
        func_0x00010825222c(param_1);
        uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar6 = *param_1;
      }
    }
    uVar15 = iVar7 * (uint)bVar1 >> 8;
    uVar10 = (uint)(uVar6 >> (uVar11 & 0x3f));
    if (uVar15 < uVar10) {
      iVar7 = iVar7 - uVar15;
      uVar6 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
      *param_1 = uVar6;
    }
    else {
      iVar7 = uVar15 + 1;
    }
    uVar8 = (uint)LZCOUNT(iVar7) ^ 0x18;
    uVar13 = (int)uVar11 - uVar8;
    uVar11 = (ulong)uVar13;
    iVar7 = (iVar7 << (ulong)(uVar8 & 0x1f)) + -1;
    *(int *)(param_1 + 1) = iVar7;
    *(uint *)((long)param_1 + 0xc) = uVar13;
    if (uVar10 <= uVar15) {
      return 2;
    }
    bVar1 = *(byte *)(param_2 + 5);
    if ((int)uVar13 < 0) {
      puVar5 = (ulong *)param_1[2];
      if (puVar5 < (ulong *)param_1[4]) {
        uVar11 = *puVar5;
        param_1[2] = (long)puVar5 + 7;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar6 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar6 << 0x38;
        *param_1 = uVar6;
        uVar11 = (ulong)(uVar13 + 0x38);
      }
      else {
        func_0x00010825222c(param_1);
        uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
        uVar6 = *param_1;
      }
    }
    uVar15 = iVar7 * (uint)bVar1 >> 8;
    iVar9 = (int)uVar11;
    if (uVar15 < (uint)(uVar6 >> (uVar11 & 0x3f))) {
      iVar7 = iVar7 - uVar15;
      *param_1 = uVar6 - ((ulong)(uVar15 + 1) << (uVar11 & 0x3f));
      iVar4 = 4;
    }
    else {
      iVar7 = uVar15 + 1;
      iVar4 = 3;
    }
  }
  uVar15 = (uint)LZCOUNT(iVar7) ^ 0x18;
  *(int *)(param_1 + 1) = (iVar7 << (ulong)(uVar15 & 0x1f)) + -1;
  *(uint *)((long)param_1 + 0xc) = iVar9 - uVar15;
  return iVar4;
}



/* Entry: 10822a9e8; end: 10822ab77;  */

undefined8
FUN_10822a9e8(char *param_1,ulong param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_68;
  char *pcStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar2 = 0;
  if ((param_1 != (char *)0x0) && (4 < param_2)) {
    if ((*param_1 == '/') && ((byte)param_1[4] < 0x20)) {
      uVar3 = 0;
      uStack_68 = 0;
      uVar4 = 0;
      uStack_48 = 0;
      uStack_50 = param_2;
      if (7 < param_2) {
        uStack_50 = 8;
      }
      do {
        uStack_68 = (ulong)(byte)param_1[uVar4] << (uVar3 & 0x3f) | uStack_68;
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 + 8;
      } while (uStack_50 != uVar4);
      puVar1 = &uStack_68;
      pcStack_60 = param_1;
      uStack_58 = param_2;
      func_0x00010822aadc(puVar1,&uStack_34,&uStack_38,&uStack_3c);
      if ((int)puVar1 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = uStack_34;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = uStack_38;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = uStack_3c;
        }
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 10822ab78; end: 10822ae83;  */

long FUN_10822ab78(ulong param_1,int *param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int *piVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar6 = param_2 + 10;
  FUN_10825245c(piVar6,1);
  _bzero(param_3,-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if ((int)piVar6 == 0) {
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    piVar6 = param_2 + 10;
    FUN_10825245c(piVar6,4);
    uVar14 = (int)piVar6 + 4;
    uVar13 = (ulong)uVar14;
    if (0 < (int)uVar14) {
      pbVar15 = &UNK_10df0b8e8;
      do {
        piVar6 = param_2 + 10;
        FUN_10825245c(piVar6,3);
        *(int *)((long)&uStack_c0 + (ulong)*pbVar15 * 4) = (int)piVar6;
        uVar13 = uVar13 - 1;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
    }
    plStack_c8 = &lStack_e8;
    uStack_d8 = 0;
    lVar9 = 0x200;
    _malloc();
    lStack_e8 = lVar9;
    if (lVar9 != 0) {
      uStack_d0 = 0x80;
      plVar7 = &lStack_e8;
      lStack_e0 = lVar9;
      FUN_108252714(plVar7,7,&uStack_c0,0x13);
      if ((int)plVar7 != 0) {
        piVar6 = param_2 + 10;
        FUN_10825245c(piVar6,1);
        iVar12 = (int)param_1;
        uVar13 = param_1;
        if ((int)piVar6 != 0) {
          piVar6 = param_2 + 10;
          FUN_10825245c(piVar6,3);
          piVar8 = param_2 + 10;
          FUN_10825245c(piVar8,(int)piVar6 * 2 + 2);
          uVar14 = (int)piVar8 + 2;
          uVar13 = (ulong)uVar14;
          if (iVar12 < (int)uVar14) goto LAB_10822acfc;
        }
        plVar7 = plStack_c8;
        if (0 < iVar12) {
          iVar17 = 0;
          uVar14 = 8;
          do {
            if ((int)uVar13 == 0) break;
            uVar16 = param_2[0x12];
            if (0x1f < (int)uVar16) {
              FUN_108252384(param_2 + 10);
              uVar16 = param_2[0x12];
            }
            pbVar15 = (byte *)(*plVar7 +
                              (*(ulong *)(param_2 + 10) >> ((ulong)uVar16 & 0x3f) & 0x7f) * 4);
            param_2[0x12] = uVar16 + *pbVar15;
            uVar5 = *(ushort *)(pbVar15 + 2);
            uVar16 = (uint)uVar5;
            if (uVar5 < 0x10) {
              *(uint *)(param_3 + (long)iVar17 * 4) = uVar16;
              iVar17 = iVar17 + 1;
              if (uVar16 != 0) {
                uVar14 = uVar16;
              }
            }
            else {
              bVar4 = (&UNK_10df0b8fe)[uVar16 - 0x10];
              piVar6 = param_2 + 10;
              FUN_10825245c(piVar6,(&UNK_10df0b8fb)[uVar16 - 0x10]);
              iVar1 = (int)piVar6 + (uint)bVar4;
              iVar2 = iVar1 + iVar17;
              if (iVar12 < iVar2) goto LAB_10822acfc;
              uVar3 = uVar14;
              if (uVar16 != 0x10) {
                uVar3 = 0;
              }
              if (0 < iVar1) {
                uVar16 = (int)piVar6 + (uint)bVar4 + 1;
                puVar11 = (uint *)(param_3 + (long)iVar17 * 4);
                do {
                  *puVar11 = uVar3;
                  uVar16 = uVar16 - 1;
                  puVar11 = puVar11 + 1;
                  iVar17 = iVar2;
                } while (1 < uVar16);
              }
            }
            uVar13 = (ulong)((int)uVar13 - 1);
          } while (iVar17 < iVar12);
        }
        func_0x000108252cec(&lStack_e8);
        goto LAB_10822ae08;
      }
    }
LAB_10822acfc:
    func_0x000108252cec(&lStack_e8);
    if ((*param_2 == 5) || (*param_2 == 0)) {
      *param_2 = 3;
    }
  }
  else {
    piVar6 = param_2 + 10;
    FUN_10825245c(piVar6,1);
    piVar8 = param_2 + 10;
    FUN_10825245c(piVar8,1);
    uVar10 = 8;
    if ((int)piVar8 == 0) {
      uVar10 = 1;
    }
    piVar8 = param_2 + 10;
    FUN_10825245c(piVar8,uVar10);
    *(undefined4 *)(param_3 + (long)(int)piVar8 * 4) = 1;
    if ((int)piVar6 == 1) {
      piVar6 = param_2 + 10;
      FUN_10825245c(piVar6,8);
      *(undefined4 *)(param_3 + (long)(int)piVar6 * 4) = 1;
    }
LAB_10822ae08:
    if ((param_2[0x13] == 0) && (FUN_108252714(param_4,8,param_3,param_1), (int)param_4 != 0))
    goto LAB_10822ae48;
  }
  param_4 = 0;
  if (*param_2 == 5 || *param_2 == 0) {
    *param_2 = 3;
  }
LAB_10822ae48:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  lVar9 = 1;
  _calloc(1,400);
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 4) = 2;
    func_0x00010822f518();
  }
  return lVar9;
}



/* Entry: 10822ae84; end: 10822aebf;  */

long FUN_10822ae84(void)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,400);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 4) = 2;
    func_0x00010822f518();
  }
  return lVar1;
}



/* Entry: 10822aec0; end: 10822b0e7;  */

void FUN_10822aec0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10822d184(param_1 + 0x98);
  _free(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x110)) {
    lVar1 = 0;
    puVar2 = (undefined8 *)(param_1 + 0x128);
    do {
      _free(*puVar2);
      *puVar2 = 0;
      lVar1 = lVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (lVar1 < *(int *)(param_1 + 0x110));
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  _free(*(undefined8 *)(param_1 + 0x180));
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10822b0e8; end: 10822ba33;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10822b0e8(ulong param_1,undefined8 param_2,int param_3,int *param_4,long *param_5)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  int *piVar15;
  byte *pbVar16;
  ushort *puVar17;
  char *pcVar18;
  uint *puVar19;
  char *pcVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  long lVar31;
  uint *puVar32;
  uint uVar33;
  int iVar34;
  int *piVar35;
  int *piVar36;
  uint uVar37;
  ulong uVar38;
  int *piVar39;
  uint *puStack_78;
  
  uVar27 = (uint)param_2;
  if (param_3 != 0) {
    piVar35 = param_4 + 10;
    FUN_10825245c(piVar35,1);
    iVar6 = (int)piVar35;
joined_r0x00010822b134:
    if (iVar6 != 0) {
      do {
        iVar6 = param_4[0x44];
        piVar35 = param_4 + 10;
        FUN_10825245c(piVar35,2);
        uVar37 = (uint)piVar35;
        uVar10 = 1 << (ulong)(uVar37 & 0x1f);
        if ((param_4[0x5e] & uVar10) != 0) goto LAB_10822b8e4;
        puVar32 = (uint *)(param_4 + (long)iVar6 * 6 + 0x46);
        param_4[0x5e] = param_4[0x5e] | uVar10;
        *puVar32 = uVar37;
        puVar32[2] = (uint)param_1;
        puVar32[3] = uVar27;
        puVar19 = puVar32 + 4;
        puVar19[0] = 0;
        puVar19[1] = 0;
        param_4[0x44] = param_4[0x44] + 1;
        if (uVar37 < 2) {
          piVar35 = param_4 + 10;
          FUN_10825245c(piVar35,3);
          uVar10 = (int)piVar35 + 2;
          puVar32[1] = uVar10;
          uVar33 = ~(-1 << (ulong)(uVar10 & 0x1f));
          uVar37 = puVar32[2] + uVar33 >> (ulong)(uVar10 & 0x1f);
          FUN_10822b0e8(uVar37,puVar32[3] + uVar33 >> (ulong)(uVar10 & 0x1f),0,param_4,puVar19);
          if (uVar37 == 0) goto LAB_10822b8e4;
        }
        else if (uVar37 == 3) goto LAB_10822b200;
        piVar35 = param_4 + 10;
        FUN_10825245c(piVar35,1);
        if ((int)piVar35 == 0) break;
      } while( true );
    }
  }
  piVar35 = param_4 + 10;
  FUN_10825245c(piVar35,1);
  if ((int)piVar35 == 0) {
    piVar35 = (int *)0x0;
LAB_10822b378:
    puStack_78 = (uint *)0x0;
    iVar6 = (int)param_1;
    if (param_3 != 0) {
      piVar15 = param_4 + 10;
      FUN_10825245c(piVar15,1);
      if ((int)piVar15 == 0) goto LAB_10822b430;
      piVar15 = param_4 + 10;
      FUN_10825245c(piVar15,3);
      uVar10 = (int)piVar15 + 2;
      iVar11 = 1 << (ulong)(uVar10 & 0x1f);
      uVar37 = (iVar6 + iVar11) - 1U >> (ulong)(uVar10 & 0x1f);
      uVar33 = (uVar27 + iVar11) - 1 >> (ulong)(uVar10 & 0x1f);
      uVar28 = uVar37;
      FUN_10822b0e8(uVar37,uVar33,0,param_4,&puStack_78);
      if (uVar28 != 0) {
        uVar37 = uVar37 * uVar33;
        uVar22 = (ulong)uVar37;
        param_4[0x31] = uVar10;
        if ((int)uVar37 < 1) {
          uVar38 = 1;
        }
        else {
          uVar38 = 1;
          puVar19 = puStack_78;
          uVar25 = uVar22;
          do {
            uVar3 = *(ushort *)((long)puVar19 + 1);
            *puVar19 = (uint)uVar3;
            uVar10 = (uint)uVar38;
            if (uVar10 <= uVar3 + 1) {
              uVar10 = uVar3 + 1;
            }
            uVar38 = (ulong)uVar10;
            uVar25 = uVar25 - 1;
            puVar19 = puVar19 + 1;
          } while (uVar25 != 0);
        }
        if ((uint)uVar38 < 0x3e9 && (int)(uint)uVar38 <= (int)(iVar6 * uVar27)) {
          lVar31 = 0;
          uVar25 = uVar38;
          piVar35 = (int *)((ulong)piVar35 & 0xffffffff);
        }
        else {
          lVar31 = uVar38 << 2;
          _malloc();
          if (lVar31 == 0) {
            if ((*param_4 != 5) && (*param_4 != 0)) goto LAB_10822b894;
            lVar31 = 0;
            *param_4 = 1;
            goto LAB_10822b8cc;
          }
          _memset();
          if ((int)uVar37 < 1) {
            uVar25 = 0;
            piVar35 = (int *)((ulong)piVar35 & 0xffffffff);
          }
          else {
            uVar25 = 0;
            piVar35 = (int *)((ulong)piVar35 & 0xffffffff);
            puVar19 = puStack_78;
            do {
              uVar10 = *(uint *)(lVar31 + (ulong)*puVar19 * 4);
              if (uVar10 == 0xffffffff) {
                uVar10 = (uint)uVar25;
                *(uint *)(lVar31 + (ulong)*puVar19 * 4) = uVar10;
                uVar25 = (ulong)(uVar10 + 1);
              }
              *puVar19 = uVar10;
              uVar22 = uVar22 - 1;
              puVar19 = puVar19 + 1;
            } while (uVar22 != 0);
          }
        }
        goto LAB_10822b434;
      }
LAB_10822b894:
      lVar31 = 0;
LAB_10822b8cc:
      _free(lVar31);
      _free(puStack_78);
      func_0x000108252cec(param_4 + 0x3a);
LAB_10822b8e4:
      iVar6 = *param_4;
LAB_10822b8e8:
      if (iVar6 != 0 && iVar6 != 5) goto LAB_10822b904;
      iVar11 = 3;
      goto LAB_10822b8f8;
    }
LAB_10822b430:
    uVar38 = 1;
    lVar31 = 0;
    uVar25 = 1;
LAB_10822b434:
    if (param_4[0x13] != 0) goto LAB_10822b8cc;
    lVar23 = 0;
    uVar10 = (uint)uVar25;
    piVar15 = (int *)0x0;
    if (((int)(uint)uVar38 < (int)uVar10) || (uVar10 != (uint)uVar38 && lVar31 == 0)) {
LAB_10822b8b0:
      _free(piVar15);
      func_0x000108252cec(param_4 + 0x3a);
      if (lVar23 != 0) {
        _free(lVar23);
      }
      goto LAB_10822b8cc;
    }
    uVar33 = (uint)piVar35;
    iVar11 = 1 << (ulong)(uVar33 & 0x1f);
    uVar3 = *(ushort *)(&UNK_10df0b8d0 + (long)(int)uVar33 * 2);
    uVar37 = iVar11 + 0x118;
    if ((int)uVar33 < 1) {
      uVar37 = 0x118;
    }
    piVar9 = (int *)(ulong)uVar37;
    if ((int)uVar37 < 0) {
      piVar15 = (int *)0x0;
    }
    else {
      piVar15 = piVar9;
      _calloc(piVar9,4);
    }
    if (0x1cd8568 < uVar10) {
      lVar23 = 0;
LAB_10822b538:
      if ((*param_4 == 5) || (*param_4 == 0)) {
        *param_4 = 1;
      }
      goto LAB_10822b8b0;
    }
    lVar23 = uVar25 * 0x238;
    _malloc();
    if ((piVar15 == (int *)0x0) || (lVar23 == 0)) goto LAB_10822b538;
    iVar34 = uVar10 * uVar3;
    func_0x000108252c98(iVar34,param_4 + 0x3a);
    if (iVar34 == 0) goto LAB_10822b538;
    uVar22 = 0;
    piVar36 = piVar35;
    do {
      uVar25 = uVar22;
      if ((lVar31 == 0) ||
         (uVar37 = *(uint *)(lVar31 + uVar22 * 4), uVar25 = (ulong)uVar37, uVar37 != 0xffffffff)) {
        plVar14 = (long *)(lVar23 + (long)(int)uVar25 * 0x238);
        piVar36 = piVar9;
        FUN_10822ab78(piVar9,param_4,piVar15,param_4 + 0x3a);
        lVar24 = *(long *)(param_4 + 0x42);
        pbVar16 = *(byte **)(lVar24 + 8);
        *plVar14 = (long)pbVar16;
        if ((int)piVar36 == 0) goto LAB_10822b8b0;
        iVar34 = 0;
        iVar21 = 0;
        uVar30 = 0;
        uVar37 = 1;
        piVar39 = piVar9;
        while( true ) {
          if (uVar37 == 0) {
            uVar33 = (uint)*pbVar16;
          }
          else {
            uVar33 = (uint)*pbVar16;
            if ((uVar30 & 3) == 0) {
              uVar37 = 1;
            }
            else {
              uVar37 = (uint)(*pbVar16 == 0);
            }
          }
          iVar34 = iVar34 + uVar33;
          *(byte **)(lVar24 + 8) = pbVar16 + (long)(int)piVar36 * 4;
          if (uVar30 == 4) break;
          iVar13 = *piVar15;
          if (1 < (int)piVar39) {
            lVar24 = (long)piVar39 + -1;
            iVar12 = iVar13;
            piVar36 = piVar15;
            do {
              piVar36 = piVar36 + 1;
              iVar13 = *piVar36;
              if (*piVar36 <= iVar12) {
                iVar13 = iVar12;
              }
              lVar24 = lVar24 + -1;
              iVar12 = iVar13;
            } while (lVar24 != 0);
          }
          iVar21 = iVar13 + iVar21;
          uVar30 = uVar30 + 1;
          piVar39 = (int *)(ulong)*(ushort *)(&UNK_10df0b8c6 + uVar30 * 2);
          piVar36 = piVar39;
          FUN_10822ab78(piVar39,param_4,piVar15,param_4 + 0x3a);
          lVar24 = *(long *)(param_4 + 0x42);
          pbVar16 = *(byte **)(lVar24 + 8);
          plVar14[uVar30] = (long)pbVar16;
          if ((int)piVar36 == 0) goto LAB_10822b8b0;
        }
        *(uint *)(plVar14 + 5) = uVar37;
        *(undefined4 *)(plVar14 + 6) = 0;
        if (uVar37 != 0) {
          uVar37 = CONCAT22(*(undefined2 *)(plVar14[1] + 2),*(undefined2 *)(plVar14[2] + 2)) |
                   (uint)*(ushort *)(plVar14[3] + 2) << 0x18;
          *(uint *)((long)plVar14 + 0x2c) = uVar37;
          if ((iVar34 == 0) && (*(ushort *)(*plVar14 + 2) < 0x100)) {
            *(uint *)((long)plVar14 + 0x2c) = uVar37 | (uint)*(ushort *)(*plVar14 + 2) << 8;
            plVar14[6] = 1;
            piVar36 = (int *)((ulong)piVar35 & 0xffffffff);
            goto LAB_10822b820;
          }
        }
        *(uint *)((long)plVar14 + 0x34) = (uint)(iVar21 < 6);
        piVar36 = (int *)((ulong)piVar35 & 0xffffffff);
        if (iVar21 < 6) {
          lVar24 = 0;
          puVar17 = (ushort *)(*plVar14 + 2);
          puVar19 = (uint *)(lVar23 + 0x3c + (long)(int)uVar25 * 0x238);
          do {
            bVar2 = (byte)puVar17[-1];
            uVar3 = *puVar17;
            uVar37 = (uint)uVar3;
            if (uVar3 < 0x100) {
              uVar33 = (uint)lVar24 >> (ulong)(bVar2 & 0x1f);
              uVar37 = *(uint *)(plVar14[1] + (ulong)uVar33 * 4);
              uVar33 = uVar33 >> (ulong)(uVar37 & 0x1f);
              uVar28 = *(uint *)(plVar14[2] + (ulong)uVar33 * 4);
              uVar1 = *(uint *)(plVar14[3] + (ulong)(uVar33 >> (ulong)(uVar28 & 0x1f)) * 4);
              uVar33 = (uint)bVar2 + (uVar37 & 0xff) + (uVar28 & 0xff) + (uVar1 & 0xff);
              uVar37 = uVar37 & 0xffff0000 | (uint)uVar3 << 8 | uVar28 >> 0x10 |
                       (uVar1 >> 0x10) << 0x18;
            }
            else {
              uVar33 = bVar2 | 0x100;
            }
            puVar19[-1] = uVar33;
            *puVar19 = uVar37;
            puVar17 = puVar17 + 2;
            lVar24 = lVar24 + 1;
            puVar19 = puVar19 + 2;
          } while (lVar24 != 0x40);
        }
      }
      else {
        lVar24 = 0;
        do {
          bVar5 = false;
          bVar4 = true;
          if (lVar24 == 0) {
            bVar5 = (int)piVar36 < 0;
            bVar4 = (int)piVar36 == 0;
          }
          iVar34 = iVar11;
          if (bVar4 || bVar5) {
            iVar34 = 0;
          }
          iVar34 = iVar34 + (uint)*(ushort *)(&UNK_10df0b8c6 + lVar24);
          FUN_10822ab78(iVar34,param_4,piVar15,0);
          if (iVar34 == 0) goto LAB_10822b8b0;
          lVar24 = lVar24 + 2;
        } while (lVar24 != 10);
      }
LAB_10822b820:
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar38);
    _free(piVar15);
    *(uint **)(param_4 + 0x34) = puStack_78;
    param_4[0x36] = uVar10;
    *(long *)(param_4 + 0x38) = lVar23;
    _free(lVar31);
    if (0 < (int)piVar36) {
      param_4[0x26] = iVar11;
      piVar35 = param_4 + 0x28;
      func_0x0001082524c4(piVar35,piVar36);
      if ((int)piVar35 != 0) goto LAB_10822b97c;
      goto LAB_10822ba24;
    }
    param_4[0x26] = 0;
LAB_10822b97c:
    uVar37 = param_4[0x31];
    param_4[0x21] = iVar6;
    param_4[0x22] = uVar27;
    param_4[0x32] = (iVar6 + (1 << (ulong)(uVar37 & 0x1f))) - 1U >> (ulong)(uVar37 & 0x1f);
    uVar10 = 0xffffffff;
    if (uVar37 != 0) {
      uVar10 = ~(-1 << (ulong)(uVar37 & 0x1f));
    }
    param_4[0x30] = uVar10;
    if (param_3 != 0) {
      lVar31 = 0;
      param_4[1] = 1;
LAB_10822b9c0:
      if (param_5 != (long *)0x0) {
        *param_5 = lVar31;
      }
      param_4[0x24] = 0;
      uVar26 = 1;
      if (param_3 != 0) {
        return 1;
      }
      goto LAB_10822b914;
    }
    if (0x100000000 < (ulong)((long)iVar6 * (long)(int)uVar27)) {
LAB_10822ba24:
      iVar6 = *param_4;
      iVar34 = 1;
      iVar11 = 1;
      goto joined_r0x00010822ba2c;
    }
    lVar31 = (long)iVar6 * (long)(int)uVar27 * 4;
    _malloc();
    if (lVar31 == 0) goto LAB_10822ba24;
    piVar35 = param_4;
    func_0x00010822c07c(param_4,lVar31,param_1,param_2,param_2,0);
    if (((int)piVar35 != 0) && (param_4[0x13] == 0)) goto LAB_10822b9c0;
  }
  else {
    piVar35 = param_4 + 10;
    FUN_10825245c(piVar35,4);
    if ((int)piVar35 - 1U < 0xb) goto LAB_10822b378;
    iVar6 = *param_4;
    iVar34 = 3;
    iVar11 = 3;
joined_r0x00010822ba2c:
    if ((iVar6 == 0) || (iVar11 = iVar34, iVar6 == 5)) {
LAB_10822b8f8:
      lVar31 = 0;
      *param_4 = iVar11;
    }
    else {
LAB_10822b904:
      lVar31 = 0;
    }
  }
  _free(lVar31);
  uVar26 = 0;
LAB_10822b914:
  FUN_10822d184(param_4 + 0x26);
  return uVar26;
LAB_10822b200:
  piVar35 = param_4 + 10;
  FUN_10825245c(piVar35,8);
  iVar6 = (int)piVar35 + 1;
  uVar10 = 2;
  if (iVar6 < 3) {
    uVar10 = 3;
  }
  uVar37 = 1;
  if (iVar6 < 5) {
    uVar37 = uVar10;
  }
  uVar10 = 0;
  if (iVar6 < 0x11) {
    uVar10 = uVar37;
  }
  uVar37 = puVar32[2];
  puVar32[1] = uVar10;
  iVar11 = iVar6;
  FUN_10822b0e8(iVar6,1,0,param_4,puVar19);
  if (iVar11 == 0) goto LAB_10822b8e4;
  puVar29 = (undefined4 *)(4L << (8UL >> ((ulong)puVar32[1] & 0x3f) & 0x3f));
  puVar7 = puVar29;
  _malloc();
  if (puVar7 == (undefined4 *)0x0) {
    iVar6 = *param_4;
    iVar11 = 1;
    if ((iVar6 == 0) || (iVar6 == 5)) goto LAB_10822b8f8;
    goto LAB_10822b8e8;
  }
  puVar8 = *(undefined4 **)puVar19;
  *puVar7 = *puVar8;
  if (iVar6 < 2) {
    uVar33 = 4;
  }
  else {
    uVar33 = iVar6 * 4;
    if ((int)uVar33 < 6) {
      uVar33 = 5;
    }
    lVar31 = (ulong)uVar33 - 4;
    pcVar18 = (char *)(puVar7 + 1);
    pcVar20 = (char *)(puVar8 + 1);
    do {
      *pcVar18 = pcVar18[-4] + *pcVar20;
      lVar31 = lVar31 + -1;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    } while (lVar31 != 0);
  }
  uVar28 = (uint)puVar29;
  if (uVar33 < uVar28) {
    _bzero((long)puVar7 + (ulong)uVar33,(ulong)(uVar28 + ~uVar33) + 1);
  }
  param_1 = (ulong)((uVar37 + (1 << (ulong)uVar10)) - 1 >> (ulong)uVar10);
  _free(puVar8);
  *(undefined4 **)puVar19 = puVar7;
  piVar35 = param_4 + 10;
  FUN_10825245c(piVar35,1);
  iVar6 = (int)piVar35;
  goto joined_r0x00010822b134;
}



/* Entry: 10822ba34; end: 10822bacb;  */

undefined8 FUN_10822ba34(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = param_1[0x21];
  iVar2 = param_1[0x22];
  uVar4 = (ulong)(param_2 & 0xffff) + (long)(int)param_2 * 0x10 + (long)iVar2 * (long)iVar1;
  if (uVar4 < 0x100000001) {
    lVar3 = uVar4 * 4;
    _malloc();
    *(long *)(param_1 + 6) = lVar3;
    if (lVar3 != 0) {
      *(ulong *)(param_1 + 8) =
           lVar3 + (long)iVar2 * (long)iVar1 * 4 + (ulong)(param_2 & 0xffff) * 4;
      return 1;
    }
  }
  else {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  if ((*param_1 == 5) || (*param_1 == 0)) {
    *param_1 = 1;
  }
  return 0;
}



/* Entry: 10822bacc; end: 10822ca9f;  */

undefined8 FUN_10822bacc(long param_1,uint param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  uint *puVar9;
  uint *puVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  uint *puVar25;
  ulong *puVar26;
  int *piVar27;
  uint uVar28;
  long *plVar29;
  uint uVar30;
  uint uVar31;
  ulong *puVar32;
  long *plVar33;
  uint *puVar34;
  ulong *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uStack_64;
  
  piVar27 = *(int **)(param_1 + 0x18);
  if (piVar27[0x23] < (int)param_2) {
    iVar14 = (int)piVar27;
    if ((*(int *)(param_1 + 0xc0) == 0) && (FUN_10822dff4(), *(int *)(param_1 + 0xc0) == 0)) {
      lVar23 = *(long *)(piVar27 + 6);
      iVar3 = piVar27[0x21];
      iVar4 = piVar27[0x22];
      iVar15 = piVar27[0x24];
      uVar31 = 0;
      if (iVar3 != 0) {
        uVar31 = iVar15 / iVar3;
      }
      puVar35 = (ulong *)(lVar23 + (long)iVar15 * 4);
      puVar1 = (ulong *)(lVar23 + (long)(int)(param_2 * iVar3) * 4);
      iVar13 = piVar27[0x26];
      uStack_64 = 0x1000000;
      if (piVar27[0x14] != 0) {
        uStack_64 = uVar31;
      }
      plVar33 = (long *)(piVar27 + 0x28);
      plVar2 = plVar33;
      if (iVar13 < 1) {
        plVar2 = (long *)0x0;
      }
      puVar11 = puVar35;
      if (iVar15 < (int)(param_2 * iVar3)) {
        uVar28 = iVar15 - uVar31 * iVar3;
        uVar38 = piVar27[0x31];
        if (uVar38 == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)(*(long *)(piVar27 + 0x34) +
                           (long)(((int)uVar28 >> (uVar38 & 0x1f)) +
                                 piVar27[0x32] * ((int)uVar31 >> (uVar38 & 0x1f))) * 4);
        }
        uVar38 = piVar27[0x30];
        plVar29 = (long *)(*(long *)(piVar27 + 0x38) + (long)iVar15 * 0x238);
        puVar32 = puVar35;
        do {
          if ((int)uStack_64 <= (int)uVar31) {
            *(undefined8 *)(piVar27 + 0x18) = *(undefined8 *)(piVar27 + 0xc);
            *(undefined8 *)(piVar27 + 0x16) = *(undefined8 *)(piVar27 + 10);
            *(undefined8 *)(piVar27 + 0x1c) = *(undefined8 *)(piVar27 + 0x10);
            *(undefined8 *)(piVar27 + 0x1a) = *(undefined8 *)(piVar27 + 0xe);
            *(undefined8 *)(piVar27 + 0x1e) = *(undefined8 *)(piVar27 + 0x12);
            piVar27[0x20] = (int)((ulong)((long)puVar32 - lVar23) >> 2);
            if (0 < piVar27[0x26]) {
              _memcpy(*(undefined8 *)(piVar27 + 0x2c),*(undefined8 *)(piVar27 + 0x28),
                      4L << ((ulong)(uint)piVar27[0x2f] & 0x3f));
            }
            uStack_64 = uVar31 + 8;
          }
          if ((uVar28 & uVar38) == 0) {
            uVar36 = piVar27[0x31];
            if (uVar36 == 0) {
              iVar15 = 0;
            }
            else {
              iVar15 = *(int *)(*(long *)(piVar27 + 0x34) +
                               (long)(((int)uVar28 >> (uVar36 & 0x1f)) +
                                     piVar27[0x32] * ((int)uVar31 >> (uVar36 & 0x1f))) * 4);
            }
            plVar29 = (long *)(*(long *)(piVar27 + 0x38) + (long)iVar15 * 0x238);
          }
          if ((int)plVar29[6] != 0) {
            uVar36 = *(uint *)((long)plVar29 + 0x2c);
            goto LAB_10822c210;
          }
          if (0x1f < piVar27[0x12]) {
            FUN_108252384(piVar27 + 10);
          }
          puVar11 = puVar32;
          if (*(int *)((long)plVar29 + 0x34) == 0) {
            uVar16 = *(ulong *)(piVar27 + 10);
            uVar36 = piVar27[0x12];
            pbVar21 = (byte *)(*plVar29 + (uVar16 >> ((ulong)uVar36 & 0x3f) & 0xff) * 4);
            bVar5 = *pbVar21;
            if (8 < bVar5) {
              uVar36 = uVar36 + 8;
              pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar36 & 0x3f)) &
                                         (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                  (ulong)*(ushort *)(pbVar21 + 2) * 4;
              bVar5 = *pbVar21;
            }
            piVar27[0x12] = uVar36 + bVar5;
            if (piVar27[0x13] != 0) break;
            uVar36 = (uint)*(ushort *)(pbVar21 + 2);
            lVar19 = *(long *)(piVar27 + 0xe);
            lVar20 = *(long *)(piVar27 + 0x10);
LAB_10822c3a0:
            if ((lVar20 == lVar19) && (0x40 < piVar27[0x12])) break;
            if ((int)uVar36 < 0x100) {
              if ((int)plVar29[5] == 0) {
                uVar18 = piVar27[0x12];
                pbVar21 = (byte *)(plVar29[1] + (uVar16 >> ((ulong)uVar18 & 0x3f) & 0xff) * 4);
                bVar5 = *pbVar21;
                if (8 < bVar5) {
                  uVar18 = uVar18 + 8;
                  pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar18 & 0x3f)) &
                                             (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                      (ulong)*(ushort *)(pbVar21 + 2) * 4;
                  bVar5 = *pbVar21;
                }
                uVar18 = uVar18 + bVar5;
                piVar27[0x12] = uVar18;
                uVar6 = *(ushort *)(pbVar21 + 2);
                if (0x1f < (int)uVar18) {
                  FUN_108252384(piVar27 + 10);
                  uVar16 = *(ulong *)(piVar27 + 10);
                  uVar18 = piVar27[0x12];
                }
                pbVar21 = (byte *)(plVar29[2] + (uVar16 >> ((ulong)uVar18 & 0x3f) & 0xff) * 4);
                bVar5 = *pbVar21;
                if (8 < bVar5) {
                  uVar18 = uVar18 + 8;
                  pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar18 & 0x3f)) &
                                             (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                      (ulong)*(ushort *)(pbVar21 + 2) * 4;
                  bVar5 = *pbVar21;
                }
                uVar18 = uVar18 + bVar5;
                uVar7 = *(ushort *)(pbVar21 + 2);
                pbVar21 = (byte *)(plVar29[3] + (uVar16 >> ((ulong)uVar18 & 0x3f) & 0xff) * 4);
                bVar5 = *pbVar21;
                if (8 < bVar5) {
                  uVar18 = uVar18 + 8;
                  pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar18 & 0x3f)) &
                                             (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                      (ulong)*(ushort *)(pbVar21 + 2) * 4;
                  bVar5 = *pbVar21;
                }
                piVar27[0x12] = uVar18 + bVar5;
                if ((piVar27[0x13] != 0) ||
                   ((*(long *)(piVar27 + 0x10) == *(long *)(piVar27 + 0xe) &&
                    (0x40 < (int)(uVar18 + bVar5))))) break;
                uVar36 = (uint)uVar6 << 0x10 | uVar36 << 8 | (uint)uVar7 |
                         (uint)*(ushort *)(pbVar21 + 2) << 0x18;
              }
              else {
                uVar36 = *(uint *)((long)plVar29 + 0x2c) | uVar36 << 8;
              }
LAB_10822c210:
              *(uint *)puVar32 = uVar36;
              goto LAB_10822c214;
            }
            if (0x117 < uVar36) {
              if ((int)uVar36 < iVar13 + 0x118) {
                lVar19 = *plVar33;
                for (; puVar35 < puVar32; puVar35 = (ulong *)((long)puVar35 + 4)) {
                  *(uint *)(lVar19 + (long)(int)((uint)*puVar35 * 0x1e35a7bd >>
                                                (ulong)(*(uint *)(plVar2 + 1) & 0x1f)) * 4) =
                       (uint)*puVar35;
                }
                uVar36 = *(uint *)(lVar19 + (ulong)uVar36 * 4 + -0x460);
                goto LAB_10822c210;
              }
              goto LAB_10822c8f4;
            }
            uVar18 = uVar36 - 0x100;
            if (3 < uVar18) {
              iVar15 = iVar14 + 0x28;
              FUN_10825245c();
              uVar18 = iVar15 + ((uVar36 & 1 | 2) << (ulong)(uVar36 - 0x102 >> 1 & 0x1f));
              uVar16 = *(ulong *)(piVar27 + 10);
            }
            uVar36 = piVar27[0x12];
            pbVar21 = (byte *)(plVar29[4] + (uVar16 >> ((ulong)uVar36 & 0x3f) & 0xff) * 4);
            bVar5 = *pbVar21;
            if (8 < bVar5) {
              uVar36 = uVar36 + 8;
              pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar36 & 0x3f)) &
                                         (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                  (ulong)*(ushort *)(pbVar21 + 2) * 4;
              bVar5 = *pbVar21;
            }
            piVar27[0x12] = uVar36 + bVar5;
            uVar6 = *(ushort *)(pbVar21 + 2);
            uVar37 = (uint)uVar6;
            if (0x1f < (int)(uVar36 + bVar5)) {
              FUN_108252384(piVar27 + 10);
            }
            if (3 < uVar6) {
              iVar15 = iVar14 + 0x28;
              FUN_10825245c();
              uVar37 = iVar15 + ((uVar6 & 1 | 2) << (ulong)(uVar6 - 2 >> 1 & 0x1f));
            }
            if ((int)(uVar37 + 1) < 0x79) {
              uVar37 = ((uint)((byte)(&UNK_10df0b901)[(int)uVar37] >> 4) * iVar3 -
                       ((byte)(&UNK_10df0b901)[(int)uVar37] & 0xf)) + 8;
              if ((int)uVar37 < 2) {
                uVar37 = 1;
              }
            }
            else {
              uVar37 = uVar37 - 0x77;
            }
            if ((piVar27[0x13] != 0) ||
               ((*(long *)(piVar27 + 0x10) == *(long *)(piVar27 + 0xe) && (0x40 < piVar27[0x12]))))
            break;
            if ((long)puVar32 - lVar23 >> 2 < (long)(ulong)uVar37) goto LAB_10822c8f4;
            uVar36 = uVar18 + 1;
            uVar16 = (ulong)uVar36;
            lVar19 = (long)(int)uVar36;
            if ((lVar23 + (long)(iVar4 * iVar3) * 4) - (long)puVar32 >> 2 < lVar19)
            goto LAB_10822c8f4;
            puVar11 = (ulong *)((long)puVar32 + (long)(int)uVar37 * -4);
            if (((((ulong)puVar32 & 3) == 0) && (3 < (int)uVar36)) && ((int)uVar37 < 3)) {
              if (uVar37 == 1) {
                uVar37 = (uint)*puVar11;
                uVar24 = (ulong)uVar37;
                uVar17 = CONCAT44(uVar37,uVar37);
              }
              else {
                uVar24 = *puVar11;
                uVar17 = uVar24;
              }
              puVar22 = puVar32;
              if (((uint)puVar32 >> 2 & 1) != 0) {
                puVar11 = (ulong *)((long)puVar11 + 4);
                *(uint *)puVar32 = (uint)uVar24;
                uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
                puVar22 = (ulong *)((long)puVar32 + 4);
                uVar16 = (ulong)uVar18;
              }
              uVar24 = uVar16 >> 1;
              puVar26 = puVar22;
              do {
                *puVar26 = uVar17;
                uVar24 = uVar24 - 1;
                puVar26 = puVar26 + 1;
              } while (uVar24 != 0);
              if ((uVar16 & 1) != 0) {
                uVar18 = (uint)uVar16 & 0xfffffffe;
                *(uint *)((long)puVar22 + (ulong)uVar18 * 4) =
                     *(uint *)((long)puVar11 + (ulong)uVar18 * 4);
              }
            }
            else if ((int)uVar37 < (int)uVar36) {
              if (uVar18 < 0x7fffffff) {
                puVar11 = puVar32;
                do {
                  *(uint *)puVar11 = *(uint *)((long)puVar11 + (long)(int)uVar37 * -4);
                  uVar16 = uVar16 - 1;
                  puVar11 = (ulong *)((long)puVar11 + 4);
                } while (uVar16 != 0);
              }
            }
            else {
              _memcpy(puVar32,puVar11,lVar19 << 2);
            }
            for (uVar28 = uVar36 + uVar28; iVar3 <= (int)uVar28; uVar28 = uVar28 - iVar3) {
              uVar36 = uVar31 + 1;
              if (((int)uVar31 < (int)param_2) && ((uVar36 & 0xf) == 0)) {
                (*(code *)0x10822c970)(piVar27,uVar36);
              }
              uVar31 = uVar36;
            }
            if ((uVar28 & uVar38) != 0) {
              uVar36 = piVar27[0x31];
              if (uVar36 == 0) {
                iVar15 = 0;
              }
              else {
                iVar15 = *(int *)(*(long *)(piVar27 + 0x34) +
                                 (long)(((int)uVar28 >> (uVar36 & 0x1f)) +
                                       piVar27[0x32] * ((int)uVar31 >> (uVar36 & 0x1f))) * 4);
              }
              plVar29 = (long *)(*(long *)(piVar27 + 0x38) + (long)iVar15 * 0x238);
            }
            puVar11 = (ulong *)((long)puVar32 + lVar19 * 4);
            if ((0 < iVar13) && (puVar35 < puVar11)) {
              lVar19 = *plVar33;
              puVar32 = puVar35;
              do {
                puVar35 = (ulong *)((long)puVar32 + 4);
                *(uint *)(lVar19 + (long)(int)((uint)*puVar32 * 0x1e35a7bd >>
                                              (ulong)(*(uint *)(plVar2 + 1) & 0x1f)) * 4) =
                     (uint)*puVar32;
                puVar32 = puVar35;
              } while (puVar35 < puVar11);
            }
          }
          else {
            uVar16 = *(ulong *)(piVar27 + 10);
            uVar24 = uVar16 >> ((ulong)(uint)piVar27[0x12] & 0x3f) & 0x3f;
            uVar36 = *(uint *)((long)plVar29 + uVar24 * 8 + 0x3c);
            iVar15 = (int)plVar29[uVar24 + 7] + piVar27[0x12];
            if ((int)plVar29[uVar24 + 7] < 0x100) {
              piVar27[0x12] = iVar15;
              *(uint *)puVar32 = uVar36;
              uVar36 = 0;
            }
            else {
              piVar27[0x12] = iVar15 + -0x100;
            }
            if (piVar27[0x13] != 0) break;
            lVar19 = *(long *)(piVar27 + 0xe);
            lVar20 = *(long *)(piVar27 + 0x10);
            if ((lVar20 == lVar19) && (0x40 < piVar27[0x12])) break;
            if (uVar36 != 0) goto LAB_10822c3a0;
LAB_10822c214:
            puVar11 = (ulong *)((long)puVar32 + 4);
            uVar28 = uVar28 + 1;
            if (iVar3 <= (int)uVar28) {
              uVar36 = uVar31 + 1;
              if (((int)uVar31 < (int)param_2) && ((uVar36 & 0xf) == 0)) {
                (*(code *)0x10822c970)(piVar27,uVar36);
              }
              uVar28 = 0;
              uVar31 = uVar36;
              if ((0 < iVar13) && (puVar35 < puVar11)) {
                lVar19 = *plVar33;
                puVar22 = puVar35;
                do {
                  puVar35 = (ulong *)((long)puVar22 + 4);
                  *(uint *)(lVar19 + (long)(int)((uint)*puVar22 * 0x1e35a7bd >>
                                                (ulong)(*(uint *)(plVar2 + 1) & 0x1f)) * 4) =
                       (uint)*puVar22;
                  bVar8 = puVar22 < puVar32;
                  puVar22 = puVar35;
                } while (bVar8);
                uVar28 = 0;
              }
            }
          }
          puVar32 = puVar11;
        } while (puVar11 < puVar1);
      }
      if (piVar27[0x13] == 0) {
        if (*(long *)(piVar27 + 0x10) == *(long *)(piVar27 + 0xe)) {
          uVar28 = (uint)(0x40 < piVar27[0x12]);
        }
        else {
          uVar28 = 0;
        }
      }
      else {
        uVar28 = 1;
      }
      piVar27[0x13] = uVar28;
      if (((piVar27[0x14] == 0) || (uVar28 == 0)) || (puVar1 <= puVar11)) {
        if ((puVar11 < puVar1 || piVar27[0x14] == 0) && (uVar28 != 0)) {
LAB_10822c8f4:
          if ((*piVar27 != 5) && (*piVar27 != 0)) {
            return 0;
          }
          *piVar27 = 3;
          return 0;
        }
        if ((int)param_2 <= (int)uVar31) {
          uVar31 = param_2;
        }
        (*(code *)0x10822c970)(piVar27,uVar31);
        *piVar27 = 0;
        piVar27[0x24] = (int)((ulong)((long)puVar11 - lVar23) >> 2);
      }
      else {
        *piVar27 = 5;
        *(undefined8 *)(piVar27 + 0xc) = *(undefined8 *)(piVar27 + 0x18);
        *(undefined8 *)(piVar27 + 10) = *(undefined8 *)(piVar27 + 0x16);
        *(undefined8 *)(piVar27 + 0x10) = *(undefined8 *)(piVar27 + 0x1c);
        *(undefined8 *)(piVar27 + 0xe) = *(undefined8 *)(piVar27 + 0x1a);
        *(undefined8 *)(piVar27 + 0x12) = *(undefined8 *)(piVar27 + 0x1e);
        piVar27[0x24] = piVar27[0x20];
        if (0 < piVar27[0x26]) {
          _memcpy(*(undefined8 *)(piVar27 + 0x28),*(undefined8 *)(piVar27 + 0x2c),
                  4L << ((ulong)(uint)piVar27[0x2b] & 0x3f));
        }
      }
      return 1;
    }
    iVar3 = piVar27[0x21];
    iVar4 = piVar27[0x22];
    uVar31 = piVar27[0x24];
    iVar15 = iVar3 * param_2;
    uVar28 = 0;
    if (iVar3 != 0) {
      uVar28 = (int)uVar31 / iVar3;
    }
    if ((int)uVar31 < iVar15) {
      uVar38 = uVar31 - uVar28 * iVar3;
      uVar36 = piVar27[0x31];
      if (uVar36 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(*(long *)(piVar27 + 0x34) +
                         (long)(((int)uVar38 >> (uVar36 & 0x1f)) +
                               piVar27[0x32] * ((int)uVar28 >> (uVar36 & 0x1f))) * 4);
      }
      puVar34 = (uint *)(piVar27 + 0x13);
      if (*puVar34 == 0) {
        lVar23 = *(long *)(piVar27 + 6);
        uVar36 = piVar27[0x30];
        plVar33 = (long *)(*(long *)(piVar27 + 0x38) + (long)iVar13 * 0x238);
        do {
          if ((uVar38 & uVar36) == 0) {
            uVar18 = piVar27[0x31];
            if (uVar18 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(*(long *)(piVar27 + 0x34) +
                               (long)(((int)uVar38 >> (uVar18 & 0x1f)) +
                                     piVar27[0x32] * ((int)uVar28 >> (uVar18 & 0x1f))) * 4);
            }
            plVar33 = (long *)(*(long *)(piVar27 + 0x38) + (long)iVar13 * 0x238);
          }
          uVar18 = piVar27[0x12];
          if (0x1f < (int)uVar18) {
            FUN_108252384(piVar27 + 10);
            uVar18 = piVar27[0x12];
          }
          uVar16 = *(ulong *)(piVar27 + 10);
          pbVar21 = (byte *)(*plVar33 + (uVar16 >> ((ulong)uVar18 & 0x3f) & 0xff) * 4);
          bVar5 = *pbVar21;
          if (8 < bVar5) {
            uVar18 = uVar18 + 8;
            pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar18 & 0x3f)) &
                                       (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                (ulong)*(ushort *)(pbVar21 + 2) * 4;
            bVar5 = *pbVar21;
          }
          uVar18 = uVar18 + bVar5;
          piVar27[0x12] = uVar18;
          uVar6 = *(ushort *)(pbVar21 + 2);
          if (0xff < uVar6) {
            uVar37 = (uint)uVar6;
            if (uVar37 < 0x118) {
              uVar30 = uVar37 - 0x100;
              if (3 < uVar30) {
                iVar13 = iVar14 + 0x28;
                FUN_10825245c();
                uVar30 = iVar13 + ((uVar6 & 1 | 2) << (ulong)(uVar37 - 0x102 >> 1 & 0x1f));
                uVar16 = *(ulong *)(piVar27 + 10);
                uVar18 = piVar27[0x12];
              }
              pbVar21 = (byte *)(plVar33[4] + (uVar16 >> ((ulong)uVar18 & 0x3f) & 0xff) * 4);
              bVar5 = *pbVar21;
              if (8 < bVar5) {
                uVar18 = uVar18 + 8;
                pbVar21 = pbVar21 + (ulong)((uint)(uVar16 >> ((ulong)uVar18 & 0x3f)) &
                                           (-1 << (ulong)(bVar5 - 8 & 0x1f) ^ 0xffffffffU)) * 4 +
                                    (ulong)*(ushort *)(pbVar21 + 2) * 4;
                bVar5 = *pbVar21;
              }
              piVar27[0x12] = uVar18 + bVar5;
              uVar6 = *(ushort *)(pbVar21 + 2);
              uVar37 = (uint)uVar6;
              if (0x1f < (int)(uVar18 + bVar5)) {
                FUN_108252384(piVar27 + 10);
              }
              if (3 < uVar6) {
                iVar13 = iVar14 + 0x28;
                FUN_10825245c();
                uVar37 = iVar13 + ((uVar6 & 1 | 2) << (ulong)(uVar6 - 2 >> 1 & 0x1f));
              }
              if ((int)(uVar37 + 1) < 0x79) {
                uVar37 = ((uint)((byte)(&UNK_10df0b901)[(int)uVar37] >> 4) * iVar3 -
                         ((byte)(&UNK_10df0b901)[(int)uVar37] & 0xf)) + 8;
                if ((int)uVar37 < 2) {
                  uVar37 = 1;
                }
              }
              else {
                uVar37 = uVar37 - 0x77;
              }
              uVar30 = uVar30 + 1;
              uVar16 = (ulong)uVar30;
              if ((int)uVar37 <= (int)uVar31 && (int)uVar30 <= (int)(iVar4 * iVar3 - uVar31)) {
                puVar9 = (uint *)(lVar23 + (ulong)uVar31);
                lVar19 = -(ulong)uVar37;
                puVar10 = (uint *)((long)puVar9 - (ulong)uVar37);
                if ((int)uVar30 < 8) {
LAB_10822be30:
                  if ((int)uVar37 < (int)uVar30) {
                    do {
                      *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + lVar19);
                      uVar16 = uVar16 - 1;
                      puVar9 = (uint *)((long)puVar9 + 1);
                    } while (uVar16 != 0);
                  }
                  else {
                    _memcpy(puVar9,puVar10,(long)(int)uVar30);
                  }
                }
                else {
                  if (uVar37 == 4) {
                    uVar18 = *puVar10;
                  }
                  else if (uVar37 == 2) {
                    uVar18 = CONCAT22((short)*puVar10,(short)*puVar10);
                  }
                  else {
                    if (uVar37 != 1) goto LAB_10822be30;
                    uVar18 = (uint)(byte)*puVar10 * 0x1010101;
                  }
                  uVar37 = uVar30;
                  if (((ulong)puVar9 & 3) != 0) {
                    uVar24 = lVar23 + 1 + (ulong)uVar31;
                    puVar10 = puVar9;
                    do {
                      puVar9 = (uint *)((long)puVar10 + 1);
                      *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar19);
                      uVar18 = uVar18 >> 8 | uVar18 << 0x18;
                      uVar37 = (int)uVar16 - 1;
                      uVar16 = (ulong)uVar37;
                      uVar17 = uVar24 & 3;
                      uVar24 = uVar24 + 1;
                      puVar10 = puVar9;
                    } while (uVar17 != 0);
                    puVar10 = (uint *)((long)puVar9 + lVar19);
                  }
                  uVar12 = (int)uVar37 >> 2;
                  uVar16 = (ulong)uVar12;
                  puVar25 = puVar9;
                  if ((int)uVar12 < 1) {
                    uVar12 = 0;
                  }
                  else {
                    do {
                      *puVar25 = uVar18;
                      uVar16 = uVar16 - 1;
                      puVar25 = puVar25 + 1;
                    } while (uVar16 != 0);
                  }
                  if ((int)(uVar12 * 4) < (int)uVar37) {
                    lVar19 = (ulong)uVar37 + (ulong)uVar12 * -4;
                    puVar10 = puVar10 + uVar12;
                    puVar9 = puVar9 + uVar12;
                    do {
                      *(byte *)puVar9 = (byte)*puVar10;
                      lVar19 = lVar19 + -1;
                      puVar10 = (uint *)((long)puVar10 + 1);
                      puVar9 = (uint *)((long)puVar9 + 1);
                    } while (lVar19 != 0);
                  }
                }
                for (uVar38 = uVar30 + uVar38; iVar3 <= (int)uVar38; uVar38 = uVar38 - iVar3) {
                  uVar18 = uVar28 + 1;
                  if (((int)uVar28 < (int)param_2) && ((uVar18 & 0xf) == 0)) {
                    FUN_10822d1e8(piVar27,uVar18);
                  }
                  uVar28 = uVar18;
                }
                uVar31 = uVar30 + uVar31;
                if (((int)uVar31 < iVar15) && ((uVar38 & uVar36) != 0)) {
                  uVar18 = piVar27[0x31];
                  if (uVar18 == 0) {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = *(int *)(*(long *)(piVar27 + 0x34) +
                                     (long)(((int)uVar38 >> (uVar18 & 0x1f)) +
                                           piVar27[0x32] * ((int)uVar28 >> (uVar18 & 0x1f))) * 4);
                  }
                  plVar33 = (long *)(*(long *)(piVar27 + 0x38) + (long)iVar13 * 0x238);
                }
                goto LAB_10822bf80;
              }
            }
            bVar8 = true;
            goto LAB_10822bb88;
          }
          *(char *)(lVar23 + (int)uVar31) = (char)uVar6;
          uVar31 = uVar31 + 1;
          uVar38 = uVar38 + 1;
          if (iVar3 <= (int)uVar38) {
            uVar18 = uVar28 + 1;
            if (((int)uVar28 < (int)param_2) && ((uVar18 & 0xf) == 0)) {
              FUN_10822d1e8(piVar27,uVar18);
            }
            uVar38 = 0;
            uVar28 = uVar18;
          }
LAB_10822bf80:
          if (*puVar34 != 0) {
            *puVar34 = 1;
            break;
          }
          if (*(long *)(piVar27 + 0x10) == *(long *)(piVar27 + 0xe)) {
            uVar18 = (uint)(0x40 < piVar27[0x12]);
          }
          else {
            uVar18 = 0;
          }
          *puVar34 = uVar18;
          if ((uVar18 != 0) || (iVar15 <= (int)uVar31)) break;
        } while( true );
      }
    }
    if ((int)param_2 <= (int)uVar28) {
      uVar28 = param_2;
    }
    FUN_10822d1e8(piVar27,uVar28);
    bVar8 = false;
LAB_10822bb88:
    if (piVar27[0x13] == 0) {
      if (*(long *)(piVar27 + 0x10) == *(long *)(piVar27 + 0xe)) {
        uVar28 = (uint)(0x40 < piVar27[0x12]);
      }
      else {
        uVar28 = 0;
      }
    }
    else {
      uVar28 = 1;
    }
    piVar27[0x13] = uVar28;
    if ((bVar8) || ((uVar28 != 0 && ((int)uVar31 < iVar4 * iVar3)))) {
      if ((*piVar27 != 5) && (*piVar27 != 0)) {
        return 0;
      }
      iVar14 = 3;
      if (uVar28 != 0) {
        iVar14 = 5;
      }
      *piVar27 = iVar14;
      return 0;
    }
    piVar27[0x24] = uVar31;
  }
  return 1;
}



/* Entry: 10822caa0; end: 10822cbb3;  */

undefined8 FUN_10822caa0(int *param_1,int *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == (int *)0x0) {
      if (*param_1 == 5 || *param_1 == 0) {
        *param_1 = 2;
        return 0;
      }
    }
    else {
      *(int **)(param_1 + 2) = param_2;
      *param_1 = 0;
      piVar3 = param_1 + 10;
      piVar3[0] = 0;
      piVar3[1] = 0;
      uVar5 = *(ulong *)(param_2 + 0x18);
      pbVar2 = *(byte **)(param_2 + 0x1a);
      *(ulong *)(param_1 + 0xe) = uVar5;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      uVar1 = uVar5;
      if (7 < uVar5) {
        uVar1 = 8;
      }
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar5 = 0;
        uVar4 = 0;
        pbVar6 = pbVar2;
        do {
          uVar4 = (ulong)*pbVar6 << (uVar5 & 0x3f) | uVar4;
          uVar5 = uVar5 + 8;
          pbVar6 = pbVar6 + 1;
        } while (uVar1 * 8 - uVar5 != 0);
      }
      *(ulong *)(param_1 + 0x10) = uVar1;
      *(ulong *)(param_1 + 10) = uVar4;
      *(byte **)(param_1 + 0xc) = pbVar2;
      func_0x00010822aadc(piVar3,&iStack_24,&iStack_28,auStack_2c);
      if ((int)piVar3 == 0) {
        if (*param_1 == 5 || *param_1 == 0) {
          *param_1 = 3;
        }
      }
      else {
        param_1[1] = 2;
        *param_2 = iStack_24;
        param_2[1] = iStack_28;
        FUN_10822b0e8(iStack_24,iStack_28,1,param_1,0);
        if (iStack_24 != 0) {
          return 1;
        }
      }
      FUN_10822aec0(param_1);
    }
  }
  return 0;
}



/* Entry: 10822cbb4; end: 10822cd6b;  */

undefined8 FUN_10822cbb4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar9;
  undefined8 *puVar10;
  int iVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar9 = *(undefined4 **)(param_1 + 2);
  puVar10 = *(undefined8 **)(puVar9 + 0xe);
  if (param_1[1] == 0) {
LAB_10822ccec:
    piVar3 = param_1;
    func_0x00010822c07c(param_1,*(undefined8 *)(param_1 + 6),param_1[0x21],param_1[0x22],
                        puVar9[0x21],FUN_10822cd6c);
    if ((int)piVar3 != 0) {
      *(int *)(puVar10 + 4) = param_1[0x25];
      return 1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = *puVar10;
    uVar2 = puVar10[5];
    func_0x00010822dd40(uVar2,puVar9,3);
    if ((int)uVar2 == 0) {
      iVar1 = *param_1;
      iVar8 = 2;
      iVar7 = 2;
    }
    else {
      piVar3 = param_1;
      FUN_10822ba34(param_1,*puVar9);
      if ((int)piVar3 == 0) goto LAB_10822cd44;
      if (puVar9[0x22] == 0) {
LAB_10822cc80:
        uVar6 = **(uint **)(param_1 + 4);
        if (0xfffffffb < uVar6 - 0xb) {
LAB_10822cc94:
          FUN_10822dff4();
          uVar6 = **(uint **)(param_1 + 4);
        }
        if ((10 < uVar6) && (FUN_108230ad8(), *(long *)(*(long *)(param_1 + 4) + 0x28) != 0)) {
          FUN_10822dff4();
        }
        if ((((param_1[0x14] == 0) || (param_1[0x26] < 1)) ||
            (plVar5 = (long *)(param_1 + 0x2c), *plVar5 != 0)) ||
           (func_0x0001082524c4(plVar5,param_1[0x2b]), (int)plVar5 != 0)) {
          param_1[1] = 0;
          goto LAB_10822ccec;
        }
      }
      else {
        uVar4 = (long)(int)puVar9[0x23] * 0x24 + 0x68;
        if ((uVar4 < 0x400000001) && (_malloc(), uVar4 != 0)) {
          *(ulong *)(param_1 + 0x60) = uVar4;
          *(ulong *)(param_1 + 0x62) = uVar4;
          FUN_108253b0c();
          if ((int)uVar4 == 0) goto LAB_10822cd44;
          if (puVar9[0x22] == 0) goto LAB_10822cc80;
          goto LAB_10822cc94;
        }
      }
      iVar1 = *param_1;
      iVar8 = 1;
      iVar7 = 1;
    }
    if ((iVar1 == 0) || (iVar7 = iVar8, iVar1 == 5)) {
      *param_1 = iVar7;
    }
  }
LAB_10822cd44:
  FUN_10822aec0(param_1);
  return 0;
}



/* Entry: 10822cd6c; end: 10822d183;  */

void FUN_10822cd6c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  int iStack_6c;
  
  iVar12 = *(int *)(param_1 + 0x8c);
  if (0 < param_2 - iVar12) {
    lVar14 = *(long *)(param_1 + 0x20);
    piVar10 = *(int **)(param_1 + 8);
    iVar1 = *piVar10;
    FUN_10822d2cc(param_1,iVar12,param_2 - iVar12,
                  *(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x84) * iVar12) * 4);
    iVar2 = *(int *)(param_1 + 0x8c);
    iVar15 = piVar10[0x20];
    iVar12 = piVar10[0x21];
    if (param_2 <= piVar10[0x21]) {
      iVar12 = param_2;
    }
    iVar17 = iVar15;
    if (iVar15 <= iVar2) {
      iVar17 = iVar2;
    }
    iVar6 = iVar12 - iVar17;
    if (iVar6 != 0 && iVar17 <= iVar12) {
      iVar1 = iVar1 * 4;
      iVar12 = (iVar15 - iVar2) * iVar1;
      if (iVar15 - iVar2 == 0 || iVar15 < iVar2) {
        iVar12 = 0;
      }
      lVar14 = lVar14 + iVar12 + (long)piVar10[0x1e] * 4;
      iVar12 = piVar10[0x1f] - piVar10[0x1e];
      piVar10[2] = iVar17 - iVar15;
      piVar10[3] = iVar12;
      piVar10[4] = iVar6;
      puVar8 = *(uint **)(param_1 + 0x10);
      uVar13 = *puVar8;
      if (uVar13 < 0xb) {
        uVar4 = puVar8[6];
        lVar7 = *(long *)(puVar8 + 4) + (long)(int)uVar4 * (long)*(int *)(param_1 + 0x94);
        if (piVar10[0x22] == 0) {
          uVar9 = iVar6 + 1;
          do {
            FUN_10822f388(lVar14,iVar12,uVar13,lVar7);
            lVar14 = lVar14 + iVar1;
            lVar7 = lVar7 + (int)uVar4;
            uVar9 = uVar9 - 1;
            iStack_6c = iVar6;
          } while (1 < uVar9);
        }
        else {
          iVar12 = 0;
          iStack_6c = 0;
          do {
            lVar19 = lVar14 + (long)iVar1 * (long)iVar12;
            iVar17 = iVar6 - iVar12;
            lVar16 = *(long *)(param_1 + 0x188);
            iVar2 = *(int *)(lVar16 + 0x20);
            iVar15 = 0;
            if (iVar2 != 0) {
              iVar15 = (*(int *)(lVar16 + 0x18) + iVar2 + -1) / iVar2;
            }
            if (iVar17 <= iVar15) {
              iVar15 = iVar17;
            }
            if (0 < iVar15) {
              uVar3 = *(undefined4 *)(lVar16 + 0x2c);
              lVar16 = lVar19;
              do {
                (*pcRam0000000113869aa0)(lVar16,uVar3,0);
                lVar16 = lVar16 + iVar1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              lVar16 = *(long *)(param_1 + 0x188);
            }
            FUN_108253c64(lVar16,iVar17,lVar19,iVar1);
            lVar19 = *(long *)(param_1 + 0x188);
            if (*(int *)(lVar19 + 0x40) < *(int *)(lVar19 + 0x38)) {
              iVar15 = 0;
              uVar18 = *(undefined8 *)(lVar19 + 0x48);
              uVar3 = *(undefined4 *)(lVar19 + 0x34);
              lVar11 = lVar7 + (long)(int)uVar4 * (long)iStack_6c;
              do {
                if (0 < *(int *)(lVar19 + 0x18)) break;
                FUN_10822fed4(lVar19);
                (*pcRam0000000113869aa0)(uVar18,uVar3,1);
                FUN_10822f388(uVar18,uVar3,uVar13,lVar11);
                lVar11 = lVar11 + (int)uVar4;
                iVar15 = iVar15 + 1;
              } while (*(int *)(lVar19 + 0x40) < *(int *)(lVar19 + 0x38));
            }
            else {
              iVar15 = 0;
            }
            iVar12 = (int)lVar16 + iVar12;
            iStack_6c = iVar15 + iStack_6c;
          } while (iVar12 < iVar6);
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iStack_6c;
      }
      else {
        iVar15 = *(int *)(param_1 + 0x94);
        if (piVar10[0x22] == 0) {
          uVar13 = iVar6 + 1;
          do {
            FUN_10822d374(lVar14,iVar12,iVar15,*(undefined8 *)(param_1 + 0x10));
            lVar14 = lVar14 + iVar1;
            iVar15 = iVar15 + 1;
            uVar13 = uVar13 - 1;
          } while (1 < uVar13);
        }
        else {
          iVar12 = 0;
          do {
            iVar5 = iVar6 - iVar12;
            lVar7 = *(long *)(param_1 + 0x188);
            iVar17 = *(int *)(lVar7 + 0x20);
            iVar2 = 0;
            if (iVar17 != 0) {
              iVar2 = (*(int *)(lVar7 + 0x18) + iVar17 + -1) / iVar17;
            }
            if (iVar5 <= iVar2) {
              iVar2 = iVar5;
            }
            if (0 < iVar2) {
              uVar3 = *(undefined4 *)(lVar7 + 0x2c);
              lVar7 = lVar14;
              iVar17 = iVar2;
              do {
                (*pcRam0000000113869aa0)(lVar7,uVar3,0);
                lVar7 = lVar7 + iVar1;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
              lVar7 = *(long *)(param_1 + 0x188);
            }
            FUN_108253c64(lVar7,iVar5,lVar14,iVar1);
            lVar16 = *(long *)(param_1 + 0x188);
            if (*(int *)(lVar16 + 0x40) < *(int *)(lVar16 + 0x38)) {
              iVar17 = 0;
              uVar18 = *(undefined8 *)(lVar16 + 0x48);
              uVar3 = *(undefined4 *)(lVar16 + 0x34);
              do {
                if (0 < *(int *)(lVar16 + 0x18)) break;
                FUN_10822fed4(lVar16);
                (*pcRam0000000113869aa0)(uVar18,uVar3,1);
                FUN_10822d374(uVar18,uVar3,iVar15 + iVar17,*(undefined8 *)(param_1 + 0x10));
                iVar17 = iVar17 + 1;
              } while (*(int *)(lVar16 + 0x40) < *(int *)(lVar16 + 0x38));
            }
            else {
              iVar17 = 0;
            }
            iVar12 = (int)lVar7 + iVar12;
            lVar14 = lVar14 + (long)iVar1 * (long)iVar2;
            iVar15 = iVar17 + iVar15;
          } while (iVar12 < iVar6);
        }
        *(int *)(param_1 + 0x94) = iVar15;
      }
    }
  }
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}



/* Entry: 10822d184; end: 10822d1e7;  */

void FUN_10822d184(undefined8 *param_1)

{
  _free(param_1[7]);
  func_0x000108252cec(param_1 + 10);
  if (param_1[9] != 0) {
    _free();
  }
  _free(param_1[1]);
  param_1[1] = 0;
  _free(param_1[3]);
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10822d1e8; end: 10822d2cb;  */

void FUN_10822d1e8(long param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  piVar5 = *(int **)(param_1 + 8);
  lVar9 = *(long *)(piVar5 + 0xe);
  piVar2 = piVar5 + 0x20;
  if (1 < *(uint *)(lVar9 + 0xc)) {
    piVar2 = (int *)(param_1 + 0x8c);
  }
  if (iVar3 <= *piVar2) {
    iVar3 = *piVar2;
  }
  iVar6 = (int)param_2;
  iVar10 = iVar6 - iVar3;
  if (iVar10 != 0 && iVar3 <= iVar6) {
    lVar7 = (long)*piVar5;
    lVar8 = *(long *)(lVar9 + 200) + (long)*piVar5 * (long)iVar3;
    func_0x00010822ed44(param_1 + 0x118,iVar3,param_2,
                        *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x84) * (long)iVar3,
                        lVar8);
    if (*(int *)(lVar9 + 0xc) != 0) {
      lVar4 = *(long *)(lVar9 + 0xd0);
      do {
        (**(code **)((ulong)*(uint *)(lVar9 + 0xc) * 8 + 0x113869c30))(lVar4,lVar8,lVar8,lVar7);
        lVar1 = lVar8 + lVar7;
        iVar10 = iVar10 + -1;
        lVar4 = lVar8;
        lVar8 = lVar1;
      } while (iVar10 != 0);
      *(long *)(lVar9 + 0xd0) = lVar1 - lVar7;
    }
  }
  *(int *)(param_1 + 0x94) = iVar6;
  *(int *)(param_1 + 0x8c) = iVar6;
  return;
}



/* Entry: 10822d2cc; end: 10822d373;  */

void FUN_10822d2cc(long param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x110);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((int)uVar1 < 1) {
    if (lVar2 != param_4) {
      uVar1 = *(int *)(param_1 + 0x84) * param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (lVar2,param_4,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      return;
    }
  }
  else {
    uVar4 = (ulong)uVar1 + 1;
    lVar3 = param_1 + (ulong)uVar1 * 0x18 + 0x100;
    do {
      FUN_10822ede4(lVar3,param_2,param_3 + (int)param_2,param_4,lVar2);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -0x18;
      param_4 = lVar2;
    } while (1 < uVar4);
  }
  return;
}



/* Entry: 10822d374; end: 10822d42b;  */

void FUN_10822d374(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  (*pcRam0000000113869f10)
            (param_1,*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x30) * (long)(int)param_3
             ,param_2);
  (*pcRam0000000113869f08)
            (param_1,*(long *)(param_4 + 0x18) +
                     (long)*(int *)(param_4 + 0x34) * (long)((int)param_3 >> 1),
             *(long *)(param_4 + 0x20) + (long)*(int *)(param_4 + 0x38) * (long)((int)param_3 >> 1),
             param_2,(param_3 ^ 0xffffffff) & 1);
  if (*(long *)(param_4 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010822d418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113869a80)
              (param_1 + 3,0,param_2,1,
               *(long *)(param_4 + 0x28) + (long)*(int *)(param_4 + 0x3c) * (long)(int)param_3,0);
    return;
  }
  return;
}



/* Entry: 10822d42c; end: 10822d4a3;  */

int FUN_10822d42c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int aiStack_18 [2];
  
  aiStack_18[0] = 0;
  uVar2 = *param_1;
  FUN_10822d4a4(uVar2,param_1[1],0,0,0,aiStack_18,0);
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    if (aiStack_18[0] == 0) {
      return 0;
    }
  }
  else if (iVar1 != 7 || aiStack_18[0] == 0) {
    return iVar1;
  }
  return 4;
}



/* Entry: 10822d4a4; end: 10822d90f;  */

undefined8
FUN_10822d4a4(uint *param_1,ulong param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
             undefined4 *param_7,undefined8 *param_8)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint uStack_68;
  uint uStack_64;
  
  if (param_8 == (undefined8 *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_8 + 2) != 0;
  }
  if (param_1 == (uint *)0x0) {
    return 7;
  }
  uVar6 = param_2 - 0xc;
  if (param_2 < 0xc) {
    return 7;
  }
  uVar11 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar12 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = (uint)(0x52494646 < uVar12);
  if (uVar12 < 0x52494646) {
    uVar11 = 0xffffffff;
  }
  if (uVar11 == 0) {
    if (param_1[2] != 0x50424557) {
      return 3;
    }
    uVar12 = param_1[1];
    uVar9 = (ulong)uVar12;
    if (uVar12 + 9 < 0x15) {
      return 3;
    }
    bVar1 = false;
    if (param_2 - 8 < (ulong)uVar12) {
      bVar1 = bVar2;
    }
    if (uVar6 < 8) {
      return 7;
    }
    if (bVar1) {
      return 7;
    }
    puVar16 = param_1 + 3;
  }
  else {
    uVar9 = 0;
    uVar6 = param_2;
    puVar16 = param_1;
  }
  uVar12 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
  uVar8 = uVar12 >> 0x10 | uVar12 << 0x10;
  uVar12 = (uint)(0x56503858 < uVar8);
  if (uVar8 < 0x56503858) {
    uVar12 = 0xffffffff;
  }
  if (uVar12 == 0) {
    if (puVar16[1] != 10) {
      return 3;
    }
    bVar1 = uVar6 < 0x12;
    uVar6 = uVar6 - 0x12;
    if (bVar1) {
      return 7;
    }
    uVar8 = (uint3)puVar16[3] + 1;
    uVar3 = *(uint3 *)((long)puVar16 + 0xf) + 1;
    if (((ulong)uVar8 * (ulong)uVar3 & 0xffffffff00000000) != 0) {
      return 3;
    }
    if (uVar11 != 0) {
      return 3;
    }
    uVar15 = puVar16[2];
    puVar16 = (uint *)((long)puVar16 + 0x12);
    uVar13 = uVar15 >> 1 & 1;
  }
  else {
    uVar13 = 0;
    uVar15 = 0;
    uVar3 = 0;
    uVar8 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar15 >> 4 & 1;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar13;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  uVar15 = 0;
  if (param_8 == (undefined8 *)0x0) {
    uVar15 = uVar13;
  }
  uStack_68 = uVar3;
  uStack_64 = uVar8;
  if (uVar15 != 0) {
    puVar17 = (uint *)0x0;
    goto LAB_10822d6b8;
  }
  if (uVar6 < 4) {
LAB_10822d6a8:
    puVar17 = (uint *)0x0;
  }
  else {
    uVar14 = uVar9;
    if (uVar12 == 0 && uVar11 == 0) {
LAB_10822d6a0:
      if (7 < uVar6) {
        uVar18 = 0;
        puVar17 = (uint *)0x0;
        uVar7 = 0x16;
        do {
          uVar11 = puVar16[1];
          if (0xfffffff6 < uVar11) {
            return 3;
          }
          uVar15 = uVar11 + 9 & 0xfffffffe;
          uVar7 = (ulong)(uVar15 + (int)uVar7);
          if ((uVar9 != 0) && (uVar9 < uVar7)) {
            return 3;
          }
          if ((*puVar16 == 0x20385056) || (*puVar16 == 0x4c385056)) {
            uVar11 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
            uVar15 = uVar11 >> 0x10 | uVar11 << 0x10;
            uVar11 = (uint)(0x5650384c < uVar15);
            if (uVar15 < 0x5650384c) {
              uVar11 = 0xffffffff;
            }
            goto LAB_10822d7a0;
          }
          if (uVar6 < uVar15) break;
          if (*puVar16 == 0x48504c41) {
            puVar17 = puVar16 + 2;
            uVar18 = (ulong)uVar11;
          }
          uVar6 = uVar6 - uVar15;
          puVar16 = (uint *)((long)puVar16 + (ulong)uVar15);
        } while (7 < uVar6);
        goto LAB_10822d6ac;
      }
      goto LAB_10822d6a8;
    }
    if ((uVar11 != 0) && (uVar12 != 0)) {
      if (*puVar16 == 0x48504c41) goto LAB_10822d6a0;
      uVar14 = 0;
    }
    uVar11 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    uVar15 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (uint)(0x5650384c < uVar15);
    if (uVar15 < 0x5650384c) {
      uVar11 = 0xffffffff;
    }
    if (uVar6 < 8) goto LAB_10822d6a8;
    puVar17 = (uint *)0x0;
    uVar18 = 0;
LAB_10822d7a0:
    uVar15 = (uint)(uVar11 == 0);
    if ((*puVar16 == 0x20385056) || (uVar11 == 0)) {
      uVar7 = (ulong)puVar16[1];
      if ((0xb < uVar14) && (uVar14 - 0xc < uVar7)) {
        return 3;
      }
      uVar6 = uVar6 - 8;
      bVar1 = false;
      if (uVar6 < uVar7) {
        bVar1 = bVar2;
      }
      if (bVar1) goto LAB_10822d6ac;
      puVar16 = puVar16 + 2;
    }
    else {
      uVar7 = uVar6;
      if ((char)*puVar16 == '/') {
        uVar15 = (uint)((byte)puVar16[1] < 0x20);
      }
      else {
        uVar15 = 0;
      }
    }
    if (0xfffffff6 < uVar7) {
      return 3;
    }
    if ((param_7 != (undefined4 *)0x0) && (uVar13 == 0)) {
      uVar10 = 1;
      if (uVar15 != 0) {
        uVar10 = 2;
      }
      *param_7 = uVar10;
    }
    if (uVar15 == 0) {
      if (9 < uVar6) {
        puVar5 = puVar16;
        FUN_108228e34();
        iVar4 = (int)puVar5;
        goto joined_r0x00010822d8b8;
      }
    }
    else if (4 < uVar6) {
      puVar5 = puVar16;
      FUN_10822a9e8(puVar16,uVar6,&uStack_64,&uStack_68,param_5);
      iVar4 = (int)puVar5;
joined_r0x00010822d8b8:
      if (iVar4 == 0) {
        return 3;
      }
      if (uVar12 == 0) {
        if (uVar8 != uStack_64) {
          return 3;
        }
        if (uVar3 != uStack_68) {
          return 3;
        }
      }
      if (param_8 != (undefined8 *)0x0) {
        *param_8 = param_1;
        param_8[1] = param_2;
        param_8[4] = puVar17;
        param_8[5] = uVar18;
        param_8[6] = uVar7;
        param_8[7] = uVar9;
        *(uint *)(param_8 + 8) = uVar15;
        *(undefined4 *)((long)param_8 + 0x44) = 0;
        param_8[2] = 0;
        param_8[3] = (long)puVar16 - (long)param_1;
      }
      goto LAB_10822d6b8;
    }
  }
LAB_10822d6ac:
  if (param_8 != (undefined8 *)0x0) {
    return 7;
  }
  if (uVar12 != 0) {
    return 7;
  }
LAB_10822d6b8:
  if (param_5 != (uint *)0x0) {
    *param_5 = *param_5 | (uint)(puVar17 != (uint *)0x0);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_64;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uStack_68;
    return 0;
  }
  return 0;
}



/* Entry: 10822d910; end: 10822d9b3;  */

long FUN_10822d910(uint param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                  undefined8 param_6)

{
  ulong auStack_110 [3];
  ulong uStack_f8;
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
  undefined1 *puStack_90;
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
  undefined8 uStack_28;
  
  if (param_4 != 0) {
    puStack_90 = (undefined1 *)auStack_110;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_f8 = (ulong)param_5;
    auStack_110[0] = (ulong)param_1;
    auStack_110[1] = 0x100000000;
    auStack_110[2] = param_4;
    uStack_f0 = param_6;
    FUN_10822d9b4(param_2,param_3,&puStack_90);
    if ((int)param_2 != 0) {
      param_4 = 0;
    }
    return param_4;
  }
  return 0;
}



/* Entry: 10822d9b4; end: 10822db9f;  */

uint * FUN_10822d9b4(long param_1,long param_2,ulong *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_108 = 1;
  puVar1 = (uint *)&lStack_118;
  lStack_118 = param_1;
  lStack_110 = param_2;
  FUN_10822d42c();
  if ((int)puVar1 != 0) {
    return puVar1;
  }
  uStack_78 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  lStack_68 = lStack_118 + lStack_100;
  lStack_70 = lStack_110 - lStack_100;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  pcStack_88 = FUN_108226708;
  pcStack_80 = FUN_108226c34;
  uStack_90 = 0x108226690;
  puStack_98 = param_3;
  if (iStack_d8 == 0) {
    FUN_108228d00();
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x1;
    }
    *(undefined8 *)(puVar1 + 0x2e6) = uStack_f8;
    *(undefined8 *)(puVar1 + 0x2e8) = uStack_f0;
    puVar4 = puVar1;
    FUN_108228ee8();
    if ((int)puVar4 == 0) {
LAB_10822db3c:
      puVar4 = (uint *)(ulong)*puVar1;
    }
    else {
      puVar4 = (uint *)(uStack_d0 & 0xffffffff);
      FUN_108223f4c(puVar4,uStack_d0._4_4_,param_3[5],*param_3);
      if ((int)puVar4 == 0) {
        uVar3 = param_3[5];
        if (uVar3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
          if (*(int *)(uVar3 + 0x28) != 0) {
            uVar2 = 2;
            if ((int)uStack_d0 < 0x200) {
              uVar2 = 0;
            }
          }
        }
        puVar1[0x32] = uVar2;
        func_0x000108224544(uVar3,puVar1);
        puVar4 = puVar1;
        FUN_108229998(puVar1,&uStack_d0);
        if ((int)puVar4 == 0) goto LAB_10822db3c;
        puVar4 = (uint *)0x0;
      }
    }
    FUN_108228dc8(puVar1);
    goto LAB_10822db48;
  }
  FUN_10822ae84();
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x1;
  }
  puVar4 = puVar1;
  FUN_10822caa0();
  if ((int)puVar4 == 0) {
LAB_10822db04:
    puVar4 = (uint *)(ulong)*puVar1;
  }
  else {
    puVar4 = (uint *)(uStack_d0 & 0xffffffff);
    FUN_108223f4c(puVar4,uStack_d0._4_4_,param_3[5],*param_3);
    if ((int)puVar4 == 0) {
      puVar4 = puVar1;
      FUN_10822cbb4();
      if ((int)puVar4 == 0) goto LAB_10822db04;
      puVar4 = (uint *)0x0;
    }
  }
  FUN_10822aec0(puVar1);
LAB_10822db48:
  _free(puVar1);
  if ((int)puVar4 == 0) {
    if ((param_3[5] == 0) || (*(int *)(param_3[5] + 0x30) == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)*param_3;
      FUN_108223ea0(puVar4);
    }
  }
  else {
    uVar3 = *param_3;
    if (uVar3 != 0) {
      if (*(int *)(uVar3 + 0xc) < 1) {
        _free(*(undefined8 *)(uVar3 + 0x70));
      }
      *(undefined8 *)(uVar3 + 0x70) = 0;
    }
  }
  return puVar4;
}



/* Entry: 10822dba0; end: 10822dbe3;  */

/* WARNING: Removing unreachable block (ram,0x00010822d4e0) */
/* WARNING: Removing unreachable block (ram,0x00010822d8f4) */

undefined8 FUN_10822dba0(uint *param_1,ulong param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  uint uStack_68;
  uint uStack_64;
  
  if (((param_1 == (uint *)0x0) || (param_3 == (uint *)0x0)) || ((param_4 & 0xffffff00) != 0x200)) {
    return 2;
  }
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  puVar9 = param_3 + 4;
  param_3[6] = 0;
  param_3[7] = 0;
  puVar9[0] = 0;
  puVar9[1] = 0;
  puVar2 = param_3 + 2;
  if (param_1 == (uint *)0x0) {
    return 7;
  }
  uVar6 = param_2 - 0xc;
  if (param_2 < 0xc) {
    return 7;
  }
  uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar11 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar10 = (uint)(0x52494646 < uVar11);
  if (uVar11 < 0x52494646) {
    uVar10 = 0xffffffff;
  }
  if (uVar10 == 0) {
    if (param_1[2] != 0x50424557) {
      return 3;
    }
    uVar8 = (ulong)param_1[1];
    if (param_1[1] + 9 < 0x15) {
      return 3;
    }
    if (uVar6 < 8) {
      return 7;
    }
    param_1 = param_1 + 3;
  }
  else {
    uVar8 = 0;
    uVar6 = param_2;
  }
  uVar11 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar7 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = (uint)(0x56503858 < uVar7);
  if (uVar7 < 0x56503858) {
    uVar11 = 0xffffffff;
  }
  if (uVar11 == 0) {
    if (param_1[1] != 10) {
      return 3;
    }
    bVar3 = uVar6 < 0x12;
    uVar6 = uVar6 - 0x12;
    if (bVar3) {
      return 7;
    }
    uVar7 = (uint3)param_1[3] + 1;
    uVar4 = *(uint3 *)((long)param_1 + 0xf) + 1;
    if (((ulong)uVar7 * (ulong)uVar4 & 0xffffffff00000000) != 0) {
      return 3;
    }
    if (uVar10 != 0) {
      return 3;
    }
    uVar14 = param_1[2];
    param_1 = (uint *)((long)param_1 + 0x12);
    uVar12 = uVar14 >> 1 & 1;
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    uVar4 = 0;
    uVar7 = 0;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar14 >> 4 & 1;
  }
  if (param_3 + 3 != (uint *)0x0) {
    param_3[3] = uVar12;
  }
  if (puVar9 != (uint *)0x0) {
    *puVar9 = 0;
  }
  uStack_68 = uVar4;
  uStack_64 = uVar7;
  if (uVar12 != 0) {
    puVar15 = (uint *)0x0;
    goto LAB_10822d6b8;
  }
  if (uVar6 < 4) {
LAB_10822d6a8:
    puVar15 = (uint *)0x0;
  }
  else {
    if (uVar11 == 0 && uVar10 == 0) {
LAB_10822d6a0:
      if (7 < uVar6) {
        puVar15 = (uint *)0x0;
        uVar13 = 0x16;
        do {
          if (0xfffffff6 < param_1[1]) {
            return 3;
          }
          uVar10 = param_1[1] + 9 & 0xfffffffe;
          uVar13 = (ulong)(uVar10 + (int)uVar13);
          if ((uVar8 != 0) && (uVar8 < uVar13)) {
            return 3;
          }
          if ((*param_1 == 0x20385056) || (*param_1 == 0x4c385056)) {
            uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
            uVar14 = uVar10 >> 0x10 | uVar10 << 0x10;
            uVar10 = (uint)(0x5650384c < uVar14);
            if (uVar14 < 0x5650384c) {
              uVar10 = 0xffffffff;
            }
            goto LAB_10822d7a0;
          }
          if (uVar6 < uVar10) break;
          if (*param_1 == 0x48504c41) {
            puVar15 = param_1 + 2;
          }
          uVar6 = uVar6 - uVar10;
          param_1 = (uint *)((long)param_1 + (ulong)uVar10);
        } while (7 < uVar6);
        goto LAB_10822d6ac;
      }
      goto LAB_10822d6a8;
    }
    if ((uVar10 != 0) && (uVar11 != 0)) {
      if (*param_1 == 0x48504c41) goto LAB_10822d6a0;
      uVar8 = 0;
    }
    uVar10 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar14 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (uint)(0x5650384c < uVar14);
    if (uVar14 < 0x5650384c) {
      uVar10 = 0xffffffff;
    }
    if (uVar6 < 8) goto LAB_10822d6a8;
    puVar15 = (uint *)0x0;
LAB_10822d7a0:
    bVar3 = uVar10 == 0;
    if ((*param_1 == 0x20385056) || (uVar10 == 0)) {
      puVar1 = param_1 + 1;
      if ((0xb < uVar8) && (uVar8 - 0xc < (ulong)*puVar1)) {
        return 3;
      }
      uVar6 = uVar6 - 8;
      param_1 = param_1 + 2;
      uVar8 = (ulong)*puVar1;
    }
    else {
      uVar8 = uVar6;
      if ((char)*param_1 == '/') {
        bVar3 = (byte)param_1[1] < 0x20;
      }
      else {
        bVar3 = false;
      }
    }
    if (0xfffffff6 < uVar8) {
      return 3;
    }
    if (puVar9 != (uint *)0x0) {
      uVar10 = 1;
      if (bVar3) {
        uVar10 = 2;
      }
      *puVar9 = uVar10;
    }
    if (bVar3) {
      if (4 < uVar6) {
        FUN_10822a9e8(param_1,uVar6,&uStack_64,&uStack_68,puVar2);
        iVar5 = (int)param_1;
joined_r0x00010822d8b8:
        if (iVar5 == 0) {
          return 3;
        }
        if (uVar11 == 0) {
          if (uVar7 != uStack_64) {
            return 3;
          }
          if (uVar4 != uStack_68) {
            return 3;
          }
        }
        goto LAB_10822d6b8;
      }
    }
    else if (9 < uVar6) {
      FUN_108228e34();
      iVar5 = (int)param_1;
      goto joined_r0x00010822d8b8;
    }
  }
LAB_10822d6ac:
  if (uVar11 != 0) {
    return 7;
  }
LAB_10822d6b8:
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 | (uint)(puVar15 != (uint *)0x0);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_64;
  }
  if (param_3 + 1 != (uint *)0x0) {
    param_3[1] = uStack_68;
    return 0;
  }
  return 0;
}



/* Entry: 10822dbe4; end: 10822df03;  */

int * FUN_10822dbe4(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
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
  int *piStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  piVar3 = (int *)0x2;
  if ((param_1 != (int *)0x0) && (param_3 != (undefined8 *)0x0)) {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    piVar3 = param_1;
    FUN_10822d4a4(param_1,param_2,param_3,(long)param_3 + 4,param_3 + 1,(long)param_3 + 0xc,
                  param_3 + 2,0);
    uVar2 = (uint)piVar3;
    if (uVar2 == 0) {
      uStack_80 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      puStack_88 = param_3 + 0x14;
      piVar3 = (int *)(param_3 + 5);
      if (((1 < *(int *)((long)param_3 + 0x34)) && (iStack_128 = *piVar3, iStack_128 - 7U < 4)) &&
         (*(int *)(param_3 + 1) != 0)) {
        uStack_118 = 0;
        iStack_11c = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_124 = (undefined4)*param_3;
        uStack_120 = (undefined4)((ulong)*param_3 >> 0x20);
        piStack_b0 = &iStack_128;
        FUN_10822d9b4(param_1,param_2,&piStack_b0);
        if ((int)param_1 == 0) {
          param_1 = &iStack_128;
          FUN_1082241e0(param_1,piVar3);
        }
        if (0 < iStack_11c) {
          return param_1;
        }
        _free(uStack_b8);
        return param_1;
      }
      piStack_b0 = piVar3;
      FUN_10822d9b4(param_1,param_2,&piStack_b0);
      piVar3 = param_1;
    }
    else {
      uVar1 = 3;
      if (uVar2 != 7) {
        uVar1 = uVar2;
      }
      piVar3 = (int *)(ulong)uVar1;
    }
  }
  return piVar3;
}



/* Entry: 10822df04; end: 10822dff3;  */

void FUN_10822df04(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      uVar4 = *param_1;
      uVar1 = uVar4 >> 0x18;
      if (uVar1 < 0xff) {
        if (uVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = 0xff000000 / uVar1;
          }
          uVar1 = uVar1 * 0x10101;
          if (param_3 != 0) {
            uVar1 = uVar2;
          }
          uVar4 = uVar4 & 0xff000000 | uVar1 * (uVar4 & 0xff) + 0x800000 >> 0x18 |
                  (uVar1 * (uVar4 >> 8 & 0xff) + 0x800000 >> 0x18) << 8 |
                  (uVar1 * (uVar4 >> 0x10 & 0xff) + 0x800000 >> 0x18) << 0x10;
        }
        *param_1 = uVar4;
      }
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10822dff4; end: 10822e103;  */

void FUN_10822dff4(void)

{
  int iVar1;
  
  iVar1 = 0x13254888;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_113254880 != PTR_DAT_1132548c8) {
    pcRam0000000113869aa0 = FUN_10822df04;
    uRam0000000113869aa8 = 0x10822df90;
    pcRam0000000113869a68 = FUN_10822e104;
    uRam0000000113869ab0 = 0x10822e198;
    uRam0000000113869a98 = 0x10822e1dc;
    uRam0000000113869a90 = 0x10822e200;
    uRam0000000113869a58 = 0x10822e234;
    pcRam0000000113869a60 = FUN_108231c04;
    uRam0000000113869a70 = 0x108231d64;
    uRam0000000113869a78 = 0x108231e40;
    uRam0000000113869a80 = 0x108231ed8;
    uRam0000000113869a88 = 0x108231fb0;
  }
  PTR_LOOP_113254880 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254888);
  return;
}



/* Entry: 10822e104; end: 10822e267;  */

void FUN_10822e104(long param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (0 < (int)param_3) {
    pbVar5 = (byte *)(param_1 + 1);
    do {
      pbVar6 = pbVar5;
      uVar7 = (ulong)param_2;
      if (0 < (int)param_2) {
        do {
          bVar3 = pbVar6[-1];
          bVar2 = *pbVar6;
          iVar4 = (bVar2 & 0xf) * 0x1111;
          pbVar6[-1] = (byte)(iVar4 * (bVar3 & 0xf0 | (uint)(bVar3 >> 4)) >> 0x10) & 0xf0 |
                       (byte)(iVar4 * (bVar3 & 0xfffff00f | (bVar3 & 0xf) << 4) >> 0x14);
          *pbVar6 = (byte)(iVar4 * (bVar2 & 0xf0 | (uint)(bVar2 >> 4)) >> 0x10) & 0xf0 | bVar2 & 0xf
          ;
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 2;
        } while (uVar7 != 0);
      }
      pbVar5 = pbVar5 + param_4;
      bVar1 = 1 < param_3;
      param_3 = param_3 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 10822e268; end: 10822e33b;  */

void FUN_10822e268(void)

{
  int iVar1;
  
  iVar1 = 0x132548d8;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_1132548d0 != PTR_DAT_1132548c8) {
    pcRam0000000113869be0 = FUN_10822e33c;
    uRam0000000113869bd8 = 0x10822e384;
    pcRam0000000113869b68 = FUN_10822e41c;
    uRam0000000113869b78 = 0x10822e490;
    uRam0000000113869b88 = 0x10822e57c;
    uRam0000000113869b90 = 0x10822e668;
    uRam0000000113869b98 = 0x10822e754;
    uRam0000000113869ab8 = 0x10822e7f0;
    func_0x000108232018();
  }
  PTR_LOOP_1132548d0 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132548d8);
  return;
}



/* Entry: 10822e33c; end: 10822e41b;  */

void FUN_10822e33c(long param_1,long param_2)

{
  (*pcRam0000000113869bc0)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010822e380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000113869bc0)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}



/* Entry: 10822e41c; end: 10822e85b;  */

void FUN_10822e41c(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((long)param_1 + 0x5f);
  iVar1 = *(byte *)((long)param_1 + 0x1f) + 2;
  *param_1 = ((uint)*(byte *)((long)param_1 + -0x21) + (uint)*(byte *)((long)param_1 + -1) * 2 +
              iVar1 >> 2) * 0x1010101;
  iVar2 = *(byte *)((long)param_1 + 0x3f) + 2;
  param_1[8] = ((uint)*(byte *)((long)param_1 + -1) + (uint)*(byte *)((long)param_1 + 0x1f) * 2 +
                iVar2 >> 2) * 0x1010101;
  param_1[0x10] = (iVar1 + (uint)*(byte *)((long)param_1 + 0x3f) * 2 + (uint)bVar3 >> 2) * 0x1010101
  ;
  param_1[0x18] = (iVar2 + (uint)bVar3 + (uint)bVar3 * 2 >> 2) * 0x1010101;
  return;
}



/* Entry: 10822e85c; end: 10822e903;  */

void FUN_10822e85c(void)

{
  int iVar1;
  
  iVar1 = 0x13254920;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_113254918 != PTR_DAT_1132548c8) {
    pcRam0000000113869c30 = FUN_10822e904;
    uRam0000000113869c38 = 0x1082341d0;
    uRam0000000113869c40 = 0x108234298;
    uRam0000000113869c48 = 0x10822e920;
    uRam0000000113869c10 = 0;
    pcRam0000000113869c18 = FUN_108234314;
    uRam0000000113869c20 = 0x1082343b0;
    uRam0000000113869c28 = 0x10823443c;
  }
  PTR_LOOP_113254918 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254920);
  return;
}



/* Entry: 10822e904; end: 10822ede3;  */

void FUN_10822e904(undefined8 param_1,long param_2,long param_3,int param_4)

{
  if (param_3 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_3,param_2,(long)param_4);
    return;
  }
  return;
}



/* Entry: 10822ede4; end: 10822f27b;  */

void FUN_10822ede4(int *param_1,ulong param_2,uint param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  uint *puStack_70;
  undefined2 uStack_64;
  undefined1 uStack_62;
  
  uVar2 = param_1[2];
  lVar13 = (long)(int)uVar2;
  iVar1 = *param_1;
  uVar9 = (uint)param_2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      puVar4 = param_5;
      if (uVar9 == 0) {
        uVar5 = *param_4 - 0x1000000;
        *param_5 = uVar5;
        if (1 < (int)uVar2) {
          uVar12 = (ulong)(uVar2 - 1);
          puVar4 = param_4;
          puVar14 = param_5;
          do {
            puVar14 = puVar14 + 1;
            puVar4 = puVar4 + 1;
            uVar5 = (*puVar4 & 0xff00ff00) + (uVar5 & 0xff00ff00) & 0xff00ff00 |
                    (*puVar4 & 0xff00ff) + (uVar5 & 0xff00ff) & 0xff00ff;
            *puVar14 = uVar5;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        param_4 = param_4 + lVar13;
        param_2 = 1;
        puVar4 = param_5 + lVar13;
      }
      if ((int)param_2 < (int)param_3) {
        uVar5 = param_1[1];
        iVar1 = 1 << (ulong)(uVar5 & 0x1f);
        uVar6 = (iVar1 - 1U) + uVar2 >> (ulong)(uVar5 & 0x1f);
        puStack_70 = (uint *)(*(long *)(param_1 + 4) +
                             (long)(int)(uVar6 * ((int)param_2 >> (uVar5 & 0x1f))) * 4);
        do {
          *puVar4 = (*param_4 & 0xff00ff00) + (puVar4[-lVar13] & 0xff00ff00) & 0xff00ff00 |
                    (*param_4 & 0xff00ff) + (puVar4[-lVar13] & 0xff00ff) & 0xff00ff;
          if (1 < (int)uVar2) {
            puVar14 = puStack_70;
            uVar5 = 1;
            do {
              uVar7 = (uVar5 & -iVar1) + iVar1;
              uVar3 = uVar7;
              if ((int)uVar2 <= (int)uVar7) {
                uVar3 = uVar2;
              }
              (**(code **)(((ulong)(*puVar14 >> 8) & 0xf) * 8 + 0x113869d10))
                        (param_4 + (int)uVar5,puVar4 + ((int)uVar5 - lVar13),uVar3 - uVar5);
              puVar14 = puVar14 + 1;
              uVar5 = uVar3;
            } while ((int)uVar7 < (int)uVar2);
          }
          param_4 = param_4 + lVar13;
          puVar4 = puVar4 + lVar13;
          uVar5 = (int)param_2 + 1;
          param_2 = (ulong)uVar5;
          uVar7 = uVar6;
          if ((uVar5 & iVar1 - 1U) != 0) {
            uVar7 = 0;
          }
          puStack_70 = puStack_70 + (int)uVar7;
        } while (uVar5 != param_3);
      }
      if (param_1[3] != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_5 + -lVar13,param_5 + (int)(uVar2 * (param_3 + ~uVar9)),lVar13 << 2);
        return;
      }
    }
    else if ((iVar1 == 1) && ((int)uVar9 < (int)param_3)) {
      uVar6 = param_1[1];
      uVar7 = 1 << (ulong)(uVar6 & 0x1f);
      uVar5 = uVar2 & -uVar7;
      uVar3 = (uVar7 - 1) + uVar2 >> (ulong)(uVar6 & 0x1f);
      puVar8 = (undefined4 *)
               (*(long *)(param_1 + 4) + (long)(int)(uVar3 * ((int)uVar9 >> (uVar6 & 0x1f))) * 4);
      iVar1 = uVar2 - uVar5;
      uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
      do {
        puVar11 = puVar8;
        puVar4 = param_4;
        if (0 < (int)uVar5) {
          puVar10 = puVar8;
          do {
            puVar11 = puVar10 + 1;
            uStack_64 = (undefined2)*puVar10;
            uStack_62 = (undefined1)((uint)*puVar10 >> 0x10);
            (*pcRam0000000113869e10)(&uStack_64,puVar4,(ulong)uVar7,param_5);
            puVar4 = (uint *)((long)puVar4 + uVar12);
            param_5 = (uint *)((long)param_5 + uVar12);
            puVar10 = puVar11;
          } while (puVar4 < param_4 + (int)uVar5);
        }
        puVar14 = param_4 + lVar13;
        param_4 = puVar4;
        if (puVar4 < puVar14) {
          uStack_64 = (undefined2)*puVar11;
          uStack_62 = (undefined1)((uint)*puVar11 >> 0x10);
          (*pcRam0000000113869e10)(&uStack_64,puVar4,iVar1,param_5);
          param_4 = puVar4 + iVar1;
          param_5 = param_5 + iVar1;
        }
        uVar2 = (int)param_2 + 1;
        param_2 = (ulong)uVar2;
        uVar9 = uVar3;
        if ((uVar2 & uVar7 - 1) != 0) {
          uVar9 = 0;
        }
        puVar8 = puVar8 + (int)uVar9;
      } while (uVar2 != param_3);
    }
  }
  else {
    if (iVar1 == 3) {
      if ((param_4 == param_5) && (uVar5 = param_1[1], 0 < (int)uVar5)) {
        uVar5 = ((uVar2 + (1 << (ulong)(uVar5 & 0x1f))) - 1 >> (ulong)(uVar5 & 0x1f)) *
                (param_3 - uVar9);
        param_4 = param_5 + ((long)(int)(uVar2 * (param_3 - uVar9)) - (long)(int)uVar5);
        _memmove(param_4,param_5,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
      }
      uVar2 = param_1[1];
      uVar5 = param_1[2];
      lVar13 = *(long *)(param_1 + 4);
      if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010822f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000113869c80)(param_4,lVar13,param_5,param_2,param_3);
        return;
      }
      if ((int)uVar9 < (int)param_3) {
        uVar9 = 8 >> (ulong)(uVar2 & 0x1f);
        do {
          if (0 < (int)uVar5) {
            uVar6 = 0;
            uVar7 = 0;
            puVar4 = param_5;
            do {
              if ((uVar6 & ~(-1 << (ulong)(uVar2 & 0x1f))) == 0) {
                uVar7 = (uint)*(byte *)((long)param_4 + 1);
                param_4 = param_4 + 1;
              }
              param_5 = puVar4 + 1;
              *puVar4 = *(uint *)(lVar13 + (ulong)(uVar7 & ~(-1 << (ulong)(uVar9 & 0x1f))) * 4);
              uVar7 = uVar7 >> (ulong)(uVar9 & 0x1f);
              uVar6 = uVar6 + 1;
              puVar4 = param_5;
            } while (uVar5 != uVar6);
          }
          uVar6 = (int)param_2 + 1;
          param_2 = (ulong)uVar6;
        } while (uVar6 != param_3);
      }
      return;
    }
    if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010822efc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000113869c50)(param_4,uVar2 * (param_3 - uVar9),param_5);
      return;
    }
  }
  return;
}



/* Entry: 10822f27c; end: 10822f387;  */

void FUN_10822f27c(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if ((int)param_2 < (int)(uint)param_3) {
      uVar3 = 8 >> (ulong)(uVar1 & 0x1f);
      do {
        if (0 < (int)uVar2) {
          uVar6 = 0;
          uVar7 = 0;
          puVar5 = param_5;
          do {
            if ((uVar6 & ~(-1 << (ulong)(uVar1 & 0x1f))) == 0) {
              uVar7 = (uint)*(byte *)(param_4 + 1);
              param_4 = param_4 + 4;
            }
            param_5 = puVar5 + 1;
            *puVar5 = *(undefined4 *)(lVar4 + (ulong)(uVar7 & ~(-1 << (ulong)(uVar3 & 0x1f))) * 4);
            uVar7 = uVar7 >> (ulong)(uVar3 & 0x1f);
            uVar6 = uVar6 + 1;
            puVar5 = param_5;
          } while (uVar2 != uVar6);
        }
        uVar6 = (int)param_2 + 1;
        param_2 = (ulong)uVar6;
      } while (uVar6 != (uint)param_3);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010822f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000113869c80)(param_4,lVar4,param_5,param_2,param_3);
  return;
}



/* Entry: 10822f388; end: 10822f713;  */

void FUN_10822f388(uint *param_1,ulong param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar5;
  int iVar6;
  uint *puVar3;
  
  iVar6 = (int)param_2;
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = pcRam0000000113869c60;
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = pcRam0000000113869c70;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = pcRam0000000113869c58;
    break;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_4,param_1,
               -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
    return;
  case 4:
    if (iVar6 < 1) {
      return;
    }
    puVar2 = param_1;
    do {
      puVar5 = puVar2 + 1;
      uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
      *param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar2 = puVar5;
      param_4 = param_4 + 1;
    } while (puVar5 < param_1 + iVar6);
    return;
  case 5:
    UNRECOVERED_JUMPTABLE = pcRam0000000113869c78;
    break;
  case 6:
    UNRECOVERED_JUMPTABLE = pcRam0000000113869c68;
    break;
  case 7:
    (*pcRam0000000113869c70)(param_1,param_2,param_4);
    goto code_r0x00010822f4f0;
  case 8:
    _memcpy(param_4,param_1,
            -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
code_r0x00010822f4f0:
    uVar4 = 0;
code_r0x00010822f500:
                    /* WARNING: Could not recover jumptable at 0x00010822f514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113869a60)(param_4,uVar4,param_2,1,0);
    return;
  case 9:
    if (0 < iVar6) {
      puVar2 = param_1;
      puVar5 = param_4;
      do {
        puVar3 = puVar2 + 1;
        uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
        *puVar5 = uVar1 >> 0x10 | uVar1 << 0x10;
        puVar2 = puVar3;
        puVar5 = puVar5 + 1;
      } while (puVar3 < param_1 + iVar6);
    }
    uVar4 = 1;
    goto code_r0x00010822f500;
  case 10:
    (*pcRam0000000113869c78)(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010822f4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113869a68)(param_4,param_2,1,0);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010822f4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_4);
  return;
}



/* Entry: 10822f714; end: 10822fb47;  */

void FUN_10822f714(int *param_1,undefined8 param_2,uint param_3,int *param_4)

{
  ulong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      *param_4 = *param_1 + -0x1000000;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 10822fb48; end: 10822fceb;  */

void FUN_10822fb48(uint *param_1,long param_2,uint param_3,long param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_3) {
    puVar2 = (uint *)(param_4 + -4);
    uVar3 = (ulong)param_3;
    do {
      puVar1 = puVar2;
      func_0x00010822eaa4(puVar2,param_2);
      puVar2 = puVar2 + 1;
      *puVar2 = (*param_1 & 0xff00ff00) + ((uint)puVar1 & 0xff00ff00) & 0xff00ff00 |
                (*param_1 & 0xff00ff) + ((uint)puVar1 & 0xff00ff) & 0xff00ff;
      param_2 = param_2 + 4;
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10822fcec; end: 10822fd73;  */

void FUN_10822fcec(long param_1,long param_2,undefined4 *param_3,int param_4,int param_5,int param_6
                  )

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_4 < param_5) {
    do {
      puVar2 = param_3;
      iVar3 = param_6;
      if (0 < param_6) {
        do {
          lVar1 = param_1 + 4;
          puVar2 = param_3 + 1;
          *param_3 = *(undefined4 *)(param_2 + (ulong)*(byte *)(param_1 + 1) * 4);
          iVar3 = iVar3 + -1;
          param_1 = lVar1;
          param_3 = puVar2;
        } while (iVar3 != 0);
      }
      param_4 = param_4 + 1;
      param_3 = puVar2;
    } while (param_4 != param_5);
  }
  return;
}



/* Entry: 10822fd74; end: 10822fe2b;  */

void FUN_10822fd74(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar11 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar12 = 0;
    iVar6 = *(int *)(param_1 + 0x34) * uVar2;
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x2c);
    lVar13 = *(long *)(param_1 + 0x60);
    uVar14 = uVar11;
    do {
      uVar7 = (uint)*(byte *)(param_2 + uVar12);
      uVar15 = uVar12 + uVar11;
      uVar16 = uVar7;
      if (1 < iVar4) {
        uVar16 = (uint)*(byte *)(param_2 + uVar15);
      }
      *(uint *)(lVar13 + uVar12 * 4) = iVar3 * (uint)*(byte *)(param_2 + uVar12);
      if ((int)uVar15 < iVar6) {
        piVar8 = (int *)(lVar13 + uVar14 * 4);
        iVar5 = *(int *)(param_1 + 0x28);
        uVar9 = uVar14;
        iVar10 = iVar3;
        do {
          iVar10 = iVar10 - iVar5;
          uVar17 = uVar16;
          if (iVar10 < 0) {
            uVar7 = (int)uVar15 + uVar2;
            uVar15 = (ulong)uVar7;
            uVar17 = (uint)*(byte *)(param_2 + (int)uVar7);
            iVar10 = iVar10 + iVar3;
            uVar7 = uVar16;
          }
          *piVar8 = uVar17 * iVar3 + (uVar7 - uVar17) * iVar10;
          uVar1 = (int)uVar9 + uVar2;
          uVar9 = (ulong)uVar1;
          piVar8 = piVar8 + uVar11;
          uVar16 = uVar17;
        } while ((int)uVar1 < iVar6);
      }
      uVar12 = uVar12 + 1;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (uVar12 != uVar11);
  }
  return;
}



/* Entry: 10822fe2c; end: 10822fed3;  */

void FUN_10822fe2c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar9 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    uVar10 = 0;
    iVar5 = *(int *)(param_1 + 0x34) * uVar3;
    do {
      if ((int)uVar10 < iVar5) {
        iVar11 = 0;
        uVar14 = 0;
        iVar1 = *(int *)(param_1 + 0x24);
        iVar2 = *(int *)(param_1 + 0x28);
        lVar12 = *(long *)(param_1 + 0x60);
        uVar4 = *(uint *)(param_1 + 0xc);
        uVar6 = uVar10;
        uVar15 = uVar10;
        do {
          uVar13 = (uint)uVar14;
          iVar11 = iVar11 + iVar1;
          if (iVar11 < 1) {
            uVar7 = 0;
          }
          else {
            pbVar8 = (byte *)(param_2 + (int)uVar6);
            do {
              iVar11 = iVar11 - iVar2;
              uVar7 = (uint)*pbVar8;
              uVar13 = (int)uVar14 + (uint)*pbVar8;
              uVar14 = (ulong)uVar13;
              uVar6 = (ulong)((int)uVar6 + uVar3);
              pbVar8 = pbVar8 + uVar9;
            } while (0 < iVar11);
          }
          *(uint *)(lVar12 + uVar15 * 4) = uVar13 * iVar2 + uVar7 * iVar11;
          uVar14 = (ulong)uVar4 * (ulong)-(uVar7 * iVar11) + 0x80000000 >> 0x20;
          uVar15 = uVar15 + uVar9;
        } while ((int)uVar15 < iVar5);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  return;
}



/* Entry: 10822fed4; end: 10822ffa3;  */

void FUN_10822fed4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      if (0 < *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8)) {
        lVar2 = 0;
        lVar3 = *(long *)(param_1 + 0x58);
        do {
          *(char *)(*(long *)(param_1 + 0x48) + lVar2) = (char)*(undefined4 *)(lVar3 + lVar2 * 4);
          lVar3 = *(long *)(param_1 + 0x58);
          *(undefined4 *)(lVar3 + lVar2 * 4) = 0;
          lVar2 = lVar2 + 1;
        } while (lVar2 < (long)*(int *)(param_1 + 0x34) * (long)*(int *)(param_1 + 8));
      }
      goto LAB_10822ff24;
    }
    puVar1 = (undefined8 *)0x113869e20;
  }
  else {
    puVar1 = (undefined8 *)0x113869e18;
  }
  (*(code *)*puVar1)(param_1);
LAB_10822ff24:
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}



/* Entry: 10822ffa4; end: 1082300db;  */

void FUN_10822ffa4(void)

{
  int iVar1;
  
  iVar1 = 0x132549b0;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_1132549a8 != PTR_DAT_1132548c8) {
    pcRam0000000113869e28 = FUN_10822fd74;
    pcRam0000000113869e30 = FUN_10822fe2c;
    uRam0000000113869e18 = 0x108235284;
    uRam0000000113869e20 = 0x108235420;
  }
  PTR_LOOP_1132549a8 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132549b0);
  return;
}



/* Entry: 1082300dc; end: 1082305bf;  */

void FUN_1082300dc(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  if (0 < (int)param_5) {
    uVar9 = (ulong)param_5;
    puVar10 = (undefined1 *)(param_4 + 3);
    do {
      bVar5 = *param_2;
      bVar6 = *param_3;
      uVar7 = (uint)*param_1 * 0x4a85;
      uVar1 = ((uint)bVar6 * 0x6625 >> 8) + (uVar7 >> 8);
      uVar2 = uVar1 - 0x379a;
      uVar3 = 0;
      if (0x3799 < uVar1) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 6);
      if (0x3fff < uVar2) {
        uVar4 = uVar3;
      }
      puVar10[-3] = uVar4;
      iVar8 = (uVar7 >> 8) - (((uint)bVar5 * 0x1913 >> 8) + ((uint)bVar6 * 0x3408 >> 8));
      uVar1 = iVar8 + 0x2204;
      uVar3 = 0;
      if (-0x2205 < iVar8) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar1 >> 6);
      if (0x3fff < uVar1) {
        uVar4 = uVar3;
      }
      puVar10[-2] = uVar4;
      uVar1 = ((uint)bVar5 * 0x811a >> 8) + (uVar7 >> 8);
      uVar2 = uVar1 - 0x4515;
      uVar3 = 0;
      if (0x4514 < uVar1) {
        uVar3 = 0xff;
      }
      uVar4 = (char)(uVar2 >> 6);
      if (0x3fff < uVar2) {
        uVar4 = uVar3;
      }
      puVar10[-1] = uVar4;
      *puVar10 = 0xff;
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      puVar10 = puVar10 + 4;
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 1082305c0; end: 1082307f7;  */

void FUN_1082305c0(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  byte bVar10;
  
  if (0 < (int)param_5) {
    uVar8 = (ulong)param_5;
    pbVar9 = (byte *)(param_4 + 1);
    do {
      uVar5 = (uint)*param_1 * 0x4a85;
      uVar1 = ((uint)*param_3 * 0x6625 >> 8) + (uVar5 >> 8);
      uVar2 = uVar1 - 0x379a;
      bVar10 = 0;
      if (0x3799 < uVar1) {
        bVar10 = 0xf0;
      }
      iVar6 = (uVar5 >> 8) - (((uint)*param_2 * 0x1913 >> 8) + ((uint)*param_3 * 0x3408 >> 8));
      uVar1 = iVar6 + 0x2204;
      bVar7 = 0;
      if (-0x2205 < iVar6) {
        bVar7 = 0xf;
      }
      bVar3 = (byte)(uVar1 >> 10);
      if (0x3fff < uVar1) {
        bVar3 = bVar7;
      }
      uVar1 = ((uint)*param_2 * 0x811a >> 8) + (uVar5 >> 8);
      uVar5 = uVar1 - 0x4515;
      bVar7 = 0;
      if (0x4514 < uVar1) {
        bVar7 = 0xf0;
      }
      bVar4 = (byte)(uVar2 >> 6) & 0xf0;
      if (0x3fff < uVar2) {
        bVar4 = bVar10;
      }
      pbVar9[-1] = bVar4 | bVar3;
      bVar10 = (byte)(uVar5 >> 6);
      if (0x3fff < uVar5) {
        bVar10 = bVar7;
      }
      *pbVar9 = bVar10 | 0xf;
      uVar8 = uVar8 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      pbVar9 = pbVar9 + 2;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 1082307f8; end: 108230947;  */

void FUN_1082307f8(void)

{
  int iVar1;
  
  iVar1 = 0x132549f8;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_1132549f0 != PTR_DAT_1132548c8) {
    uRam0000000113869ea0 = 0x1082302d4;
    pcRam0000000113869ea8 = FUN_1082300dc;
    uRam0000000113869eb0 = 0x1082303cc;
    uRam0000000113869eb8 = 0x1082301d8;
    uRam0000000113869ec0 = 0x1082304c4;
    pcRam0000000113869ec8 = FUN_1082305c0;
    uRam0000000113869ed0 = 0x1082306d8;
    pcRam0000000113869ed8 = FUN_1082300dc;
    uRam0000000113869ee0 = 0x1082301d8;
    uRam0000000113869ee8 = 0x1082304c4;
    pcRam0000000113869ef0 = FUN_1082305c0;
  }
  PTR_LOOP_1132549f0 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132549f8);
  return;
}



/* Entry: 108230948; end: 108230ad7;  */

void FUN_108230948(long param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar8 = (int)param_4 >> 1;
  uVar9 = (ulong)uVar8;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  else {
    puVar10 = (uint *)(param_1 + 4);
    pbVar11 = param_2;
    pbVar12 = param_3;
    do {
      uVar4 = puVar10[-1];
      uVar7 = *puVar10;
      iVar1 = (uVar7 >> 0xf & 0x1fe) + (uVar4 >> 0xf & 0x1fe);
      iVar2 = (uVar7 >> 7 & 0x1fe) + (uVar4 >> 7 & 0x1fe);
      iVar3 = (uVar7 & 0xff) * 2 + (uVar4 & 0xff) * 2;
      uVar4 = iVar2 * -0x4a89 + iVar1 * -0x25f7 + iVar3 * 0x7080 + 0x2020000U >> 0x12;
      uVar7 = iVar2 * -0x5e34 + iVar1 * 0x7080 + iVar3 * -0x124c + 0x2020000U >> 0x12;
      if (param_5 == 0) {
        *pbVar11 = (byte)(uVar4 + *pbVar11 + 1 >> 1);
        uVar7 = uVar7 + *pbVar12 + 1 >> 1;
      }
      else {
        *pbVar11 = (byte)uVar4;
      }
      *pbVar12 = (byte)uVar7;
      puVar10 = puVar10 + 2;
      pbVar11 = pbVar11 + 1;
      uVar9 = uVar9 - 1;
      pbVar12 = pbVar12 + 1;
    } while (uVar9 != 0);
  }
  if ((param_4 & 1) != 0) {
    uVar5 = *(uint *)(param_1 + (ulong)(uVar8 << 1) * 4);
    uVar4 = uVar5 >> 0xe & 0x3fc;
    uVar7 = uVar5 >> 6 & 0x3fc;
    uVar6 = uVar7 * -0x4a89 + uVar4 * -0x25f7 + (uVar5 & 0xff) * 0x1c200 + 0x2020000 >> 0x12;
    uVar4 = uVar7 * -0x5e34 + uVar4 * 0x7080 + (uVar5 & 0xff) * -0x4930 + 0x2020000 >> 0x12;
    if (param_5 != 0) {
      param_2[uVar8] = (byte)uVar6;
      param_3[uVar8] = (byte)uVar4;
      return;
    }
    param_2[uVar8] = (byte)(uVar6 + param_2[uVar8] + 1 >> 1);
    param_3[uVar8] = (byte)(uVar4 + param_3[uVar8] + 1 >> 1);
    return;
  }
  return;
}



/* Entry: 108230ad8; end: 108230b77;  */

void FUN_108230ad8(void)

{
  int iVar1;
  
  iVar1 = 0x13254ad0;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_113254ac8 != PTR_DAT_1132548c8) {
    pcRam0000000113869f20 = FUN_108238c9c;
    uRam0000000113869f18 = 0x108238d78;
    uRam0000000113869f10 = 0x108238e58;
    uRam0000000113869f08 = 0x108238f3c;
    uRam0000000113869f28 = 0x108239028;
  }
  PTR_LOOP_113254ac8 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254ad0);
  return;
}



/* Entry: 108230b78; end: 1082316db;  */

void FUN_108230b78(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  
  puVar14 = param_4;
  if ((param_5 & 0xfffffffe) != 0) {
    puVar14 = param_4 + (int)((param_5 & 0xfffffffe) * 3);
    pbVar12 = param_2;
    pbVar13 = param_3;
    do {
      param_2 = pbVar12 + 1;
      bVar6 = *pbVar12;
      param_3 = pbVar13 + 1;
      bVar7 = *pbVar13;
      uVar8 = (uint)*param_1 * 0x4a85;
      uVar9 = (uint)bVar7 * 0x6625;
      uVar1 = (uVar9 >> 8) + (uVar8 >> 8);
      uVar2 = uVar1 - 0x379a;
      uVar15 = 0xff;
      uVar4 = 0;
      if (0x3799 < uVar1) {
        uVar4 = 0xff;
      }
      uVar5 = (char)(uVar2 >> 6);
      if (0x3fff < uVar2) {
        uVar5 = uVar4;
      }
      *param_4 = uVar5;
      iVar3 = ((uint)bVar7 * 0x3408 >> 8) + ((uint)bVar6 * 0x1913 >> 8);
      iVar11 = (uVar8 >> 8) - iVar3;
      uVar1 = iVar11 + 0x2204;
      uVar4 = 0;
      if (-0x2205 < iVar11) {
        uVar4 = uVar15;
      }
      uVar5 = (char)(uVar1 >> 6);
      if (0x3fff < uVar1) {
        uVar5 = uVar4;
      }
      param_4[1] = uVar5;
      uVar10 = (uint)bVar6 * 0x811a;
      uVar1 = (uVar10 >> 8) + (uVar8 >> 8);
      uVar2 = uVar1 - 0x4515;
      uVar4 = 0;
      if (0x4514 < uVar1) {
        uVar4 = uVar15;
      }
      uVar5 = (char)(uVar2 >> 6);
      if (0x3fff < uVar2) {
        uVar5 = uVar4;
      }
      param_4[2] = uVar5;
      uVar8 = (uint)param_1[1] * 0x4a85 >> 8;
      uVar1 = uVar8 + (uVar9 >> 8);
      uVar2 = uVar1 - 0x379a;
      uVar4 = 0;
      if (0x3799 < uVar1) {
        uVar4 = uVar15;
      }
      uVar15 = (char)(uVar2 >> 6);
      if (0x3fff < uVar2) {
        uVar15 = uVar4;
      }
      param_4[3] = uVar15;
      iVar3 = uVar8 - iVar3;
      uVar1 = iVar3 + 0x2204;
      uVar4 = 0;
      if (-0x2205 < iVar3) {
        uVar4 = 0xff;
      }
      uVar15 = (char)(uVar1 >> 6);
      if (0x3fff < uVar1) {
        uVar15 = uVar4;
      }
      param_4[4] = uVar15;
      uVar8 = uVar8 + (uVar10 >> 8);
      uVar1 = uVar8 - 0x4515;
      uVar4 = 0;
      if (0x4514 < uVar8) {
        uVar4 = 0xff;
      }
      uVar15 = (char)(uVar1 >> 6);
      if (0x3fff < uVar1) {
        uVar15 = uVar4;
      }
      param_4[5] = uVar15;
      param_1 = param_1 + 2;
      param_4 = param_4 + 6;
      pbVar12 = param_2;
      pbVar13 = param_3;
    } while (param_4 != puVar14);
  }
  if ((param_5 & 1) != 0) {
    bVar6 = *param_2;
    bVar7 = *param_3;
    uVar8 = (uint)*param_1 * 0x4a85;
    uVar1 = ((uint)bVar7 * 0x6625 >> 8) + (uVar8 >> 8);
    uVar2 = uVar1 - 0x379a;
    uVar4 = 0;
    if (0x3799 < uVar1) {
      uVar4 = 0xff;
    }
    uVar15 = (char)(uVar2 >> 6);
    if (0x3fff < uVar2) {
      uVar15 = uVar4;
    }
    *puVar14 = uVar15;
    iVar3 = (uVar8 >> 8) - (((uint)bVar6 * 0x1913 >> 8) + ((uint)bVar7 * 0x3408 >> 8));
    uVar1 = iVar3 + 0x2204;
    uVar4 = 0;
    if (-0x2205 < iVar3) {
      uVar4 = 0xff;
    }
    uVar15 = (char)(uVar1 >> 6);
    if (0x3fff < uVar1) {
      uVar15 = uVar4;
    }
    puVar14[1] = uVar15;
    uVar1 = ((uint)bVar6 * 0x811a >> 8) + (uVar8 >> 8);
    uVar2 = uVar1 - 0x4515;
    uVar4 = 0;
    if (0x4514 < uVar1) {
      uVar4 = 0xff;
    }
    uVar15 = (char)(uVar2 >> 6);
    if (0x3fff < uVar2) {
      uVar15 = uVar4;
    }
    puVar14[2] = uVar15;
  }
  return;
}



/* Entry: 1082316dc; end: 108231963;  */

void FUN_1082316dc(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  
  pbVar12 = param_4;
  if ((param_5 & 0x7ffffffe) != 0) {
    pbVar12 = param_4 + (int)((param_5 & 0x7ffffffe) << 1);
    pbVar10 = param_2;
    pbVar11 = param_3;
    do {
      param_2 = pbVar10 + 1;
      param_3 = pbVar11 + 1;
      uVar6 = (uint)*param_1 * 0x4a85;
      uVar7 = (uint)*pbVar11 * 0x6625;
      uVar1 = (uVar7 >> 8) + (uVar6 >> 8);
      uVar2 = uVar1 - 0x379a;
      bVar14 = 0;
      if (0x3799 < uVar1) {
        bVar14 = 0xf0;
      }
      iVar3 = ((uint)*pbVar11 * 0x3408 >> 8) + ((uint)*pbVar10 * 0x1913 >> 8);
      iVar9 = (uVar6 >> 8) - iVar3;
      uVar1 = iVar9 + 0x2204;
      bVar13 = 0;
      if (-0x2205 < iVar9) {
        bVar13 = 0xf;
      }
      bVar4 = (byte)(uVar1 >> 10);
      if (0x3fff < uVar1) {
        bVar4 = bVar13;
      }
      uVar8 = (uint)*pbVar10 * 0x811a;
      uVar1 = (uVar8 >> 8) + (uVar6 >> 8);
      uVar6 = uVar1 - 0x4515;
      bVar13 = 0;
      if (0x4514 < uVar1) {
        bVar13 = 0xf0;
      }
      bVar5 = (byte)(uVar2 >> 6) & 0xf0;
      if (0x3fff < uVar2) {
        bVar5 = bVar14;
      }
      *param_4 = bVar5 | bVar4;
      bVar14 = (byte)(uVar6 >> 6);
      if (0x3fff < uVar6) {
        bVar14 = bVar13;
      }
      param_4[1] = bVar14 | 0xf;
      uVar6 = (uint)param_1[1] * 0x4a85 >> 8;
      uVar1 = uVar6 + (uVar7 >> 8);
      uVar2 = uVar1 - 0x379a;
      bVar14 = 0;
      if (0x3799 < uVar1) {
        bVar14 = 0xf0;
      }
      iVar3 = uVar6 - iVar3;
      uVar1 = iVar3 + 0x2204;
      bVar13 = 0;
      if (-0x2205 < iVar3) {
        bVar13 = 0xf;
      }
      bVar4 = (byte)(uVar1 >> 10);
      if (0x3fff < uVar1) {
        bVar4 = bVar13;
      }
      uVar6 = uVar6 + (uVar8 >> 8);
      uVar1 = uVar6 - 0x4515;
      bVar13 = 0;
      if (0x4514 < uVar6) {
        bVar13 = 0xf0;
      }
      bVar5 = (byte)(uVar2 >> 6) & 0xf0;
      if (0x3fff < uVar2) {
        bVar5 = bVar14;
      }
      param_4[2] = bVar5 | bVar4;
      bVar14 = (byte)(uVar1 >> 6);
      if (0x3fff < uVar1) {
        bVar14 = bVar13;
      }
      param_4[3] = bVar14 | 0xf;
      param_1 = param_1 + 2;
      param_4 = param_4 + 4;
      pbVar10 = param_2;
      pbVar11 = param_3;
    } while (param_4 != pbVar12);
  }
  if ((param_5 & 1) != 0) {
    uVar6 = (uint)*param_1 * 0x4a85;
    uVar1 = ((uint)*param_3 * 0x6625 >> 8) + (uVar6 >> 8);
    uVar2 = uVar1 - 0x379a;
    bVar14 = 0;
    if (0x3799 < uVar1) {
      bVar14 = 0xf0;
    }
    iVar3 = (uVar6 >> 8) - (((uint)*param_2 * 0x1913 >> 8) + ((uint)*param_3 * 0x3408 >> 8));
    uVar1 = iVar3 + 0x2204;
    bVar13 = 0;
    if (-0x2205 < iVar3) {
      bVar13 = 0xf;
    }
    bVar4 = (byte)(uVar1 >> 10);
    if (0x3fff < uVar1) {
      bVar4 = bVar13;
    }
    uVar1 = ((uint)*param_2 * 0x811a >> 8) + (uVar6 >> 8);
    uVar6 = uVar1 - 0x4515;
    bVar13 = 0;
    if (0x4514 < uVar1) {
      bVar13 = 0xf0;
    }
    bVar5 = (byte)(uVar2 >> 6) & 0xf0;
    if (0x3fff < uVar2) {
      bVar5 = bVar14;
    }
    *pbVar12 = bVar5 | bVar4;
    bVar14 = (byte)(uVar6 >> 6);
    if (0x3fff < uVar6) {
      bVar14 = bVar13;
    }
    pbVar12[1] = bVar14 | 0xf;
  }
  return;
}



/* Entry: 108231964; end: 108231c03;  */

void FUN_108231964(byte *param_1,byte *param_2,byte *param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  
  pbVar11 = param_4;
  if ((param_5 & 0x7ffffffe) != 0) {
    pbVar11 = param_4 + (int)((param_5 & 0x7ffffffe) << 1);
    pbVar9 = param_2;
    pbVar10 = param_3;
    do {
      param_2 = pbVar9 + 1;
      param_3 = pbVar10 + 1;
      uVar6 = (uint)*param_1 * 0x4a85;
      uVar13 = (uint)*pbVar10 * 0x6625;
      uVar1 = (uVar13 >> 8) + (uVar6 >> 8);
      uVar2 = uVar1 - 0x379a;
      bVar14 = 0;
      if (0x3799 < uVar1) {
        bVar14 = 0xf8;
      }
      iVar3 = ((uint)*pbVar10 * 0x3408 >> 8) + ((uint)*pbVar9 * 0x1913 >> 8);
      iVar8 = (uVar6 >> 8) - iVar3;
      uVar1 = iVar8 + 0x2204;
      uVar7 = 0;
      if (-0x2205 < iVar8) {
        uVar7 = 0xff;
      }
      uVar5 = uVar1 >> 6;
      if (0x3fff < uVar1) {
        uVar5 = uVar7;
      }
      uVar7 = (uint)*pbVar9 * 0x811a;
      uVar1 = (uVar7 >> 8) + (uVar6 >> 8);
      uVar6 = uVar1 - 0x4515;
      bVar12 = 0;
      if (0x4514 < uVar1) {
        bVar12 = 0x1f;
      }
      bVar4 = (byte)(uVar6 >> 9);
      if (0x3fff < uVar6) {
        bVar4 = bVar12;
      }
      bVar12 = (byte)(uVar2 >> 6) & 0xf8;
      if (0x3fff < uVar2) {
        bVar12 = bVar14;
      }
      *param_4 = bVar12 | (byte)(uVar5 >> 5);
      param_4[1] = (byte)((uVar5 & 0x1c) << 3) | bVar4;
      uVar6 = (uint)param_1[1] * 0x4a85 >> 8;
      uVar1 = uVar6 + (uVar13 >> 8);
      uVar2 = uVar1 - 0x379a;
      bVar14 = 0;
      if (0x3799 < uVar1) {
        bVar14 = 0xf8;
      }
      iVar3 = uVar6 - iVar3;
      uVar1 = iVar3 + 0x2204;
      uVar13 = 0;
      if (-0x2205 < iVar3) {
        uVar13 = 0xff;
      }
      uVar5 = uVar1 >> 6;
      if (0x3fff < uVar1) {
        uVar5 = uVar13;
      }
      uVar6 = uVar6 + (uVar7 >> 8);
      uVar1 = uVar6 - 0x4515;
      bVar12 = 0;
      if (0x4514 < uVar6) {
        bVar12 = 0x1f;
      }
      bVar4 = (byte)(uVar1 >> 9);
      if (0x3fff < uVar1) {
        bVar4 = bVar12;
      }
      bVar12 = (byte)(uVar2 >> 6) & 0xf8;
      if (0x3fff < uVar2) {
        bVar12 = bVar14;
      }
      param_4[2] = bVar12 | (byte)(uVar5 >> 5);
      param_4[3] = (byte)((uVar5 & 0x1c) << 3) | bVar4;
      param_1 = param_1 + 2;
      param_4 = param_4 + 4;
      pbVar9 = param_2;
      pbVar10 = param_3;
    } while (param_4 != pbVar11);
  }
  if ((param_5 & 1) != 0) {
    uVar6 = (uint)*param_1 * 0x4a85;
    uVar1 = ((uint)*param_3 * 0x6625 >> 8) + (uVar6 >> 8);
    uVar2 = uVar1 - 0x379a;
    bVar14 = 0;
    if (0x3799 < uVar1) {
      bVar14 = 0xf8;
    }
    iVar3 = (uVar6 >> 8) - (((uint)*param_2 * 0x1913 >> 8) + ((uint)*param_3 * 0x3408 >> 8));
    uVar1 = iVar3 + 0x2204;
    uVar13 = 0;
    if (-0x2205 < iVar3) {
      uVar13 = 0xff;
    }
    uVar7 = uVar1 >> 6;
    if (0x3fff < uVar1) {
      uVar7 = uVar13;
    }
    uVar1 = ((uint)*param_2 * 0x811a >> 8) + (uVar6 >> 8);
    uVar6 = uVar1 - 0x4515;
    bVar12 = 0;
    if (0x4514 < uVar1) {
      bVar12 = 0x1f;
    }
    bVar4 = (byte)(uVar6 >> 9);
    if (0x3fff < uVar6) {
      bVar4 = bVar12;
    }
    bVar12 = (byte)(uVar2 >> 6) & 0xf8;
    if (0x3fff < uVar2) {
      bVar12 = bVar14;
    }
    *pbVar11 = bVar12 | (byte)(uVar7 >> 5);
    pbVar11[1] = (byte)((uVar7 & 0x1c) << 3) | bVar4;
  }
  return;
}



/* Entry: 108231c04; end: 1082321fb;  */

void FUN_108231c04(undefined1 *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  short sVar17;
  undefined1 auVar22 [12];
  undefined1 auVar25 [16];
  short sVar26;
  undefined1 auVar31 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  short sVar36;
  undefined1 auVar41 [12];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined4 uVar18;
  undefined6 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined4 uVar27;
  undefined6 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [12];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined4 uVar37;
  undefined6 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [12];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  
  if (0 < param_4) {
    bVar4 = param_2 != 0;
    lVar2 = 0;
    if (!bVar4) {
      lVar2 = 3;
    }
    do {
      uVar7 = param_3 & 0xfffffff8;
      if (param_2 == 0) {
        if ((int)param_3 < 8) goto LAB_108231c8c;
        lVar8 = 8;
        puVar5 = param_1;
        do {
          uVar9 = puVar5[3];
          uVar10 = puVar5[7];
          uVar11 = puVar5[0xb];
          uVar12 = puVar5[0xf];
          uVar13 = puVar5[0x13];
          uVar14 = puVar5[0x17];
          uVar15 = puVar5[0x1b];
          uVar16 = puVar5[0x1f];
          auVar25 = NEON_umull(CONCAT17(puVar5[0x1d],
                                        CONCAT16(puVar5[0x19],
                                                 CONCAT15(puVar5[0x15],
                                                          CONCAT14(puVar5[0x11],
                                                                   CONCAT13(puVar5[0xd],
                                                                            CONCAT12(puVar5[9],
                                                                                     CONCAT11(puVar5
                                                  [5],puVar5[1]))))))),
                               CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))),1);
          auVar35 = NEON_umull(CONCAT17(puVar5[0x1e],
                                        CONCAT16(puVar5[0x1a],
                                                 CONCAT15(puVar5[0x16],
                                                          CONCAT14(puVar5[0x12],
                                                                   CONCAT13(puVar5[0xe],
                                                                            CONCAT12(puVar5[10],
                                                                                     CONCAT11(puVar5
                                                  [6],puVar5[2]))))))),
                               CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))),1);
          auVar46 = NEON_umull(CONCAT17(puVar5[0x1c],
                                        CONCAT16(puVar5[0x18],
                                                 CONCAT15(puVar5[0x14],
                                                          CONCAT14(puVar5[0x10],
                                                                   CONCAT13(puVar5[0xc],
                                                                            CONCAT12(puVar5[8],
                                                                                     CONCAT11(puVar5
                                                  [4],*puVar5))))))),
                               CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))),1);
          sVar17 = CONCAT11(~auVar25[1],~auVar25[0]);
          uVar18 = CONCAT13(~auVar25[3],CONCAT12(~auVar25[2],sVar17));
          uVar19 = CONCAT15(~auVar25[5],CONCAT14(~auVar25[4],uVar18));
          uVar20 = CONCAT17(~auVar25[7],CONCAT16(~auVar25[6],uVar19));
          auVar22._0_10_ = CONCAT19(~auVar25[9],CONCAT18(~auVar25[8],uVar20));
          auVar22[10] = ~auVar25[10];
          auVar22[0xb] = ~auVar25[0xb];
          auVar24[0xc] = ~auVar25[0xc];
          auVar24._0_12_ = auVar22;
          auVar24[0xd] = ~auVar25[0xd];
          auVar34[0xe] = ~auVar25[0xe];
          auVar34._0_14_ = auVar24;
          auVar34[0xf] = ~auVar25[0xf];
          sVar26 = CONCAT11(~auVar35[1],~auVar35[0]);
          uVar27 = CONCAT13(~auVar35[3],CONCAT12(~auVar35[2],sVar26));
          uVar28 = CONCAT15(~auVar35[5],CONCAT14(~auVar35[4],uVar27));
          uVar29 = CONCAT17(~auVar35[7],CONCAT16(~auVar35[6],uVar28));
          auVar31._0_10_ = CONCAT19(~auVar35[9],CONCAT18(~auVar35[8],uVar29));
          auVar31[10] = ~auVar35[10];
          auVar31[0xb] = ~auVar35[0xb];
          auVar33[0xc] = ~auVar35[0xc];
          auVar33._0_12_ = auVar31;
          auVar33[0xd] = ~auVar35[0xd];
          auVar44[0xe] = ~auVar35[0xe];
          auVar44._0_14_ = auVar33;
          auVar44[0xf] = ~auVar35[0xf];
          sVar36 = CONCAT11(~auVar46[1],~auVar46[0]);
          uVar37 = CONCAT13(~auVar46[3],CONCAT12(~auVar46[2],sVar36));
          uVar38 = CONCAT15(~auVar46[5],CONCAT14(~auVar46[4],uVar37));
          uVar39 = CONCAT17(~auVar46[7],CONCAT16(~auVar46[6],uVar38));
          auVar41._0_10_ = CONCAT19(~auVar46[9],CONCAT18(~auVar46[8],uVar39));
          auVar41[10] = ~auVar46[10];
          auVar41[0xb] = ~auVar46[0xb];
          auVar43[0xc] = ~auVar46[0xc];
          auVar43._0_12_ = auVar41;
          auVar43[0xd] = ~auVar46[0xd];
          auVar47[0xe] = ~auVar46[0xe];
          auVar47._0_14_ = auVar43;
          auVar47[0xf] = ~auVar46[0xf];
          *puVar5 = (char)((ushort)((auVar46._0_2_ >> 8) - sVar36) >> 8);
          puVar5[1] = (char)((ushort)((auVar25._0_2_ >> 8) - sVar17) >> 8);
          puVar5[2] = (char)((ushort)((auVar35._0_2_ >> 8) - sVar26) >> 8);
          puVar5[3] = uVar9;
          puVar5[4] = (char)((ushort)((auVar46._2_2_ >> 8) - (short)((uint)uVar37 >> 0x10)) >> 8);
          puVar5[5] = (char)((ushort)((auVar25._2_2_ >> 8) - (short)((uint)uVar18 >> 0x10)) >> 8);
          puVar5[6] = (char)((ushort)((auVar35._2_2_ >> 8) - (short)((uint)uVar27 >> 0x10)) >> 8);
          puVar5[7] = uVar10;
          puVar5[8] = (char)((ushort)((auVar46._4_2_ >> 8) - (short)((uint6)uVar38 >> 0x20)) >> 8);
          puVar5[9] = (char)((ushort)((auVar25._4_2_ >> 8) - (short)((uint6)uVar19 >> 0x20)) >> 8);
          puVar5[10] = (char)((ushort)((auVar35._4_2_ >> 8) - (short)((uint6)uVar28 >> 0x20)) >> 8);
          puVar5[0xb] = uVar11;
          puVar5[0xc] = (char)((ushort)((auVar46._6_2_ >> 8) - (short)((ulong)uVar39 >> 0x30)) >> 8)
          ;
          puVar5[0xd] = (char)((ushort)((auVar25._6_2_ >> 8) - (short)((ulong)uVar20 >> 0x30)) >> 8)
          ;
          puVar5[0xe] = (char)((ushort)((auVar35._6_2_ >> 8) - (short)((ulong)uVar29 >> 0x30)) >> 8)
          ;
          puVar5[0xf] = uVar12;
          puVar5[0x10] = (char)((ushort)((auVar46._8_2_ >> 8) -
                                        (short)((unkuint10)auVar41._0_10_ >> 0x40)) >> 8);
          puVar5[0x11] = (char)((ushort)((auVar25._8_2_ >> 8) -
                                        (short)((unkuint10)auVar22._0_10_ >> 0x40)) >> 8);
          puVar5[0x12] = (char)((ushort)((auVar35._8_2_ >> 8) -
                                        (short)((unkuint10)auVar31._0_10_ >> 0x40)) >> 8);
          puVar5[0x13] = uVar13;
          puVar5[0x14] = (char)((ushort)((auVar46._10_2_ >> 8) - auVar41._10_2_) >> 8);
          puVar5[0x15] = (char)((ushort)((auVar25._10_2_ >> 8) - auVar22._10_2_) >> 8);
          puVar5[0x16] = (char)((ushort)((auVar35._10_2_ >> 8) - auVar31._10_2_) >> 8);
          puVar5[0x17] = uVar14;
          puVar5[0x18] = (char)((ushort)((auVar46._12_2_ >> 8) - auVar43._12_2_) >> 8);
          puVar5[0x19] = (char)((ushort)((auVar25._12_2_ >> 8) - auVar24._12_2_) >> 8);
          puVar5[0x1a] = (char)((ushort)((auVar35._12_2_ >> 8) - auVar33._12_2_) >> 8);
          puVar5[0x1b] = uVar15;
          puVar5[0x1c] = (char)((ushort)((auVar46._14_2_ >> 8) - auVar47._14_2_) >> 8);
          puVar5[0x1d] = (char)((ushort)((auVar25._14_2_ >> 8) - auVar34._14_2_) >> 8);
          puVar5[0x1e] = (char)((ushort)((auVar35._14_2_ >> 8) - auVar44._14_2_) >> 8);
          puVar5[0x1f] = uVar16;
          puVar5 = puVar5 + 0x20;
          lVar8 = lVar8 + 8;
        } while (lVar8 <= (int)param_3);
      }
      else if ((int)param_3 < 8) {
LAB_108231c8c:
        uVar7 = 0;
      }
      else {
        lVar8 = 8;
        puVar5 = param_1;
        do {
          uVar9 = *puVar5;
          uVar10 = puVar5[4];
          uVar11 = puVar5[8];
          uVar12 = puVar5[0xc];
          uVar13 = puVar5[0x10];
          uVar14 = puVar5[0x14];
          uVar15 = puVar5[0x18];
          uVar16 = puVar5[0x1c];
          auVar25 = NEON_umull(CONCAT17(puVar5[0x1d],
                                        CONCAT16(puVar5[0x19],
                                                 CONCAT15(puVar5[0x15],
                                                          CONCAT14(puVar5[0x11],
                                                                   CONCAT13(puVar5[0xd],
                                                                            CONCAT12(puVar5[9],
                                                                                     CONCAT11(puVar5
                                                  [5],puVar5[1]))))))),
                               CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))),1);
          auVar34 = NEON_umull(CONCAT17(puVar5[0x1e],
                                        CONCAT16(puVar5[0x1a],
                                                 CONCAT15(puVar5[0x16],
                                                          CONCAT14(puVar5[0x12],
                                                                   CONCAT13(puVar5[0xe],
                                                                            CONCAT12(puVar5[10],
                                                                                     CONCAT11(puVar5
                                                  [6],puVar5[2]))))))),
                               CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))),1);
          auVar44 = NEON_umull(CONCAT17(puVar5[0x1f],
                                        CONCAT16(puVar5[0x1b],
                                                 CONCAT15(puVar5[0x17],
                                                          CONCAT14(puVar5[0x13],
                                                                   CONCAT13(puVar5[0xf],
                                                                            CONCAT12(puVar5[0xb],
                                                                                     CONCAT11(puVar5
                                                  [7],puVar5[3]))))))),
                               CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,
                                                  CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,
                                                  uVar9))))))),1);
          sVar17 = CONCAT11(~auVar25[1],~auVar25[0]);
          uVar18 = CONCAT13(~auVar25[3],CONCAT12(~auVar25[2],sVar17));
          uVar19 = CONCAT15(~auVar25[5],CONCAT14(~auVar25[4],uVar18));
          uVar20 = CONCAT17(~auVar25[7],CONCAT16(~auVar25[6],uVar19));
          auVar21._0_10_ = CONCAT19(~auVar25[9],CONCAT18(~auVar25[8],uVar20));
          auVar21[10] = ~auVar25[10];
          auVar21[0xb] = ~auVar25[0xb];
          auVar23[0xc] = ~auVar25[0xc];
          auVar23._0_12_ = auVar21;
          auVar23[0xd] = ~auVar25[0xd];
          auVar35[0xe] = ~auVar25[0xe];
          auVar35._0_14_ = auVar23;
          auVar35[0xf] = ~auVar25[0xf];
          sVar26 = CONCAT11(~auVar34[1],~auVar34[0]);
          uVar27 = CONCAT13(~auVar34[3],CONCAT12(~auVar34[2],sVar26));
          uVar28 = CONCAT15(~auVar34[5],CONCAT14(~auVar34[4],uVar27));
          uVar29 = CONCAT17(~auVar34[7],CONCAT16(~auVar34[6],uVar28));
          auVar30._0_10_ = CONCAT19(~auVar34[9],CONCAT18(~auVar34[8],uVar29));
          auVar30[10] = ~auVar34[10];
          auVar30[0xb] = ~auVar34[0xb];
          auVar32[0xc] = ~auVar34[0xc];
          auVar32._0_12_ = auVar30;
          auVar32[0xd] = ~auVar34[0xd];
          auVar46[0xe] = ~auVar34[0xe];
          auVar46._0_14_ = auVar32;
          auVar46[0xf] = ~auVar34[0xf];
          sVar36 = CONCAT11(~auVar44[1],~auVar44[0]);
          uVar37 = CONCAT13(~auVar44[3],CONCAT12(~auVar44[2],sVar36));
          uVar38 = CONCAT15(~auVar44[5],CONCAT14(~auVar44[4],uVar37));
          uVar39 = CONCAT17(~auVar44[7],CONCAT16(~auVar44[6],uVar38));
          auVar40._0_10_ = CONCAT19(~auVar44[9],CONCAT18(~auVar44[8],uVar39));
          auVar40[10] = ~auVar44[10];
          auVar40[0xb] = ~auVar44[0xb];
          auVar42[0xc] = ~auVar44[0xc];
          auVar42._0_12_ = auVar40;
          auVar42[0xd] = ~auVar44[0xd];
          auVar45[0xe] = ~auVar44[0xe];
          auVar45._0_14_ = auVar42;
          auVar45[0xf] = ~auVar44[0xf];
          *puVar5 = uVar9;
          puVar5[1] = (char)((ushort)((auVar25._0_2_ >> 8) - sVar17) >> 8);
          puVar5[2] = (char)((ushort)((auVar34._0_2_ >> 8) - sVar26) >> 8);
          puVar5[3] = (char)((ushort)((auVar44._0_2_ >> 8) - sVar36) >> 8);
          puVar5[4] = uVar10;
          puVar5[5] = (char)((ushort)((auVar25._2_2_ >> 8) - (short)((uint)uVar18 >> 0x10)) >> 8);
          puVar5[6] = (char)((ushort)((auVar34._2_2_ >> 8) - (short)((uint)uVar27 >> 0x10)) >> 8);
          puVar5[7] = (char)((ushort)((auVar44._2_2_ >> 8) - (short)((uint)uVar37 >> 0x10)) >> 8);
          puVar5[8] = uVar11;
          puVar5[9] = (char)((ushort)((auVar25._4_2_ >> 8) - (short)((uint6)uVar19 >> 0x20)) >> 8);
          puVar5[10] = (char)((ushort)((auVar34._4_2_ >> 8) - (short)((uint6)uVar28 >> 0x20)) >> 8);
          puVar5[0xb] = (char)((ushort)((auVar44._4_2_ >> 8) - (short)((uint6)uVar38 >> 0x20)) >> 8)
          ;
          puVar5[0xc] = uVar12;
          puVar5[0xd] = (char)((ushort)((auVar25._6_2_ >> 8) - (short)((ulong)uVar20 >> 0x30)) >> 8)
          ;
          puVar5[0xe] = (char)((ushort)((auVar34._6_2_ >> 8) - (short)((ulong)uVar29 >> 0x30)) >> 8)
          ;
          puVar5[0xf] = (char)((ushort)((auVar44._6_2_ >> 8) - (short)((ulong)uVar39 >> 0x30)) >> 8)
          ;
          puVar5[0x10] = uVar13;
          puVar5[0x11] = (char)((ushort)((auVar25._8_2_ >> 8) -
                                        (short)((unkuint10)auVar21._0_10_ >> 0x40)) >> 8);
          puVar5[0x12] = (char)((ushort)((auVar34._8_2_ >> 8) -
                                        (short)((unkuint10)auVar30._0_10_ >> 0x40)) >> 8);
          puVar5[0x13] = (char)((ushort)((auVar44._8_2_ >> 8) -
                                        (short)((unkuint10)auVar40._0_10_ >> 0x40)) >> 8);
          puVar5[0x14] = uVar14;
          puVar5[0x15] = (char)((ushort)((auVar25._10_2_ >> 8) - auVar21._10_2_) >> 8);
          puVar5[0x16] = (char)((ushort)((auVar34._10_2_ >> 8) - auVar30._10_2_) >> 8);
          puVar5[0x17] = (char)((ushort)((auVar44._10_2_ >> 8) - auVar40._10_2_) >> 8);
          puVar5[0x18] = uVar15;
          puVar5[0x19] = (char)((ushort)((auVar25._12_2_ >> 8) - auVar23._12_2_) >> 8);
          puVar5[0x1a] = (char)((ushort)((auVar34._12_2_ >> 8) - auVar32._12_2_) >> 8);
          puVar5[0x1b] = (char)((ushort)((auVar44._12_2_ >> 8) - auVar42._12_2_) >> 8);
          puVar5[0x1c] = uVar16;
          puVar5[0x1d] = (char)((ushort)((auVar25._14_2_ >> 8) - auVar35._14_2_) >> 8);
          puVar5[0x1e] = (char)((ushort)((auVar34._14_2_ >> 8) - auVar46._14_2_) >> 8);
          puVar5[0x1f] = (char)((ushort)((auVar44._14_2_ >> 8) - auVar45._14_2_) >> 8);
          puVar5 = puVar5 + 0x20;
          lVar8 = lVar8 + 8;
        } while (lVar8 <= (int)param_3);
      }
      if ((int)uVar7 < (int)param_3) {
        uVar6 = uVar7 << 2;
        do {
          if ((byte)param_1[(ulong)uVar6 + lVar2] != 0xff) {
            iVar3 = (uint)(byte)param_1[(ulong)uVar6 + lVar2] * 0x8081;
            param_1[(ulong)uVar6 + (ulong)bVar4] =
                 (char)(iVar3 * (uint)(byte)param_1[(ulong)uVar6 + (ulong)bVar4] >> 0x17);
            lVar8 = (long)(int)uVar6 + (ulong)bVar4;
            param_1[lVar8 + 1] = (char)(iVar3 * (uint)(byte)param_1[lVar8 + 1] >> 0x17);
            param_1[lVar8 + 2] = (char)(iVar3 * (uint)(byte)param_1[lVar8 + 2] >> 0x17);
          }
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 + 4;
        } while ((int)uVar7 < (int)param_3);
      }
      param_1 = param_1 + param_5;
      bVar1 = 1 < param_4;
      param_4 = param_4 + -1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1082321fc; end: 10823224f;  */

/* WARNING: Possible PIC construction at 0x000108232220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108232224) */
/* WARNING: Removing unreachable block (ram,0x000108232240) */
/* WARNING: Removing unreachable block (ram,0x000108232228) */

void FUN_1082321fc(undefined1 (*param_1) [16],undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined4 uVar31;
  undefined4 uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  short sVar46;
  short sVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar29 [16];
  undefined1 auVar13 [16];
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  undefined1 auVar14 [16];
  undefined1 auVar20 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar27 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  auVar37 = *param_1;
  auVar56 = param_1[1];
  uVar36 = NEON_sqadd(auVar37._0_8_,auVar56._0_8_,2);
  sVar52 = auVar56._8_2_;
  sVar53 = auVar56._10_2_;
  sVar54 = auVar56._12_2_;
  sVar55 = auVar56._14_2_;
  auVar11._0_8_ = NEON_sqsub(auVar37._0_8_,auVar56._0_8_,2);
  auVar32._8_2_ = 0x4e7b;
  auVar32._0_8_ = 0x4e7b4e7b4e7b4e7b;
  auVar32._10_2_ = 0x4e7b;
  auVar32._12_2_ = 0x4e7b;
  auVar32._14_2_ = 0x4e7b;
  auVar56._8_2_ = sVar52;
  auVar56._0_8_ = auVar37._8_8_;
  auVar56._10_2_ = sVar53;
  auVar56._12_2_ = sVar54;
  auVar56._14_2_ = sVar55;
  auVar56 = NEON_sqdmulh(auVar56,auVar32,2);
  auVar59._8_2_ = sVar52;
  auVar59._0_8_ = auVar37._8_8_;
  auVar59._10_2_ = sVar53;
  auVar59._12_2_ = sVar54;
  auVar59._14_2_ = sVar55;
  auVar3._8_2_ = 0x4546;
  auVar3._0_8_ = 0x4546454645464546;
  auVar3._10_2_ = 0x4546;
  auVar3._12_2_ = 0x4546;
  auVar3._14_2_ = 0x4546;
  auVar59 = NEON_sqdmulh(auVar59,auVar3,2);
  sVar46 = auVar37._8_2_ + (auVar56._0_2_ >> 1);
  sVar47 = auVar37._10_2_ + (auVar56._2_2_ >> 1);
  sVar48 = auVar37._12_2_ + (auVar56._4_2_ >> 1);
  sVar50 = auVar37._14_2_ + (auVar56._6_2_ >> 1);
  sVar52 = sVar52 + (auVar56._8_2_ >> 1);
  sVar53 = sVar53 + (auVar56._10_2_ >> 1);
  sVar54 = sVar54 + (auVar56._12_2_ >> 1);
  sVar55 = sVar55 + (auVar56._14_2_ >> 1);
  auVar37._2_2_ = sVar47;
  auVar37._0_2_ = sVar46;
  auVar37._4_2_ = sVar48;
  auVar37._6_2_ = sVar50;
  auVar37._8_2_ = sVar52;
  auVar37._10_2_ = sVar53;
  auVar37._12_2_ = sVar54;
  auVar37._14_2_ = sVar55;
  auVar44._2_2_ = sVar47;
  auVar44._0_2_ = sVar46;
  auVar44._4_2_ = sVar48;
  auVar44._6_2_ = sVar50;
  auVar44._8_2_ = sVar52;
  auVar44._10_2_ = sVar53;
  auVar44._12_2_ = sVar54;
  auVar44._14_2_ = sVar55;
  auVar56 = NEON_ext(auVar37,auVar44,8,1);
  auVar57._0_8_ = NEON_sqsub(auVar59._0_8_,auVar56._0_8_,2);
  auVar56 = NEON_ext(auVar59,auVar59,8,1);
  uVar10 = NEON_sqadd(CONCAT26(sVar50,CONCAT24(sVar48,CONCAT22(sVar47,sVar46))),auVar56._0_8_,2);
  auVar60._8_8_ = auVar11._0_8_;
  auVar60._0_8_ = uVar36;
  auVar57._8_8_ = uVar10;
  auVar11._8_8_ = uVar36;
  auVar6._8_8_ = auVar57._0_8_;
  auVar6._0_8_ = uVar10;
  auVar37 = NEON_sqadd(auVar60,auVar6,2);
  auVar56 = NEON_sqsub(auVar11,auVar57,2);
  auVar12._0_8_ = auVar56._6_8_ << 0x30;
  auVar12._10_6_ = auVar56._10_6_;
  auVar12._8_2_ = auVar37._12_2_;
  sVar46 = auVar37._14_2_;
  auVar14._14_2_ = auVar56._14_2_;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_2_ = sVar46;
  sVar47 = auVar56._10_2_;
  auVar13._0_10_ = CONCAT82(auVar14._8_8_,sVar47) << 0x30;
  auVar13._12_4_ = auVar14._12_4_;
  auVar13._10_2_ = auVar56._12_2_;
  auVar15._0_14_ = auVar13._0_14_;
  auVar15._14_2_ = auVar14._14_2_;
  auVar7._2_10_ = auVar37._6_10_;
  auVar7._0_2_ = auVar56._0_2_;
  auVar40._0_8_ = auVar7._0_8_ << 0x20;
  auVar40._10_6_ = auVar37._10_6_;
  auVar40._8_2_ = auVar37._2_2_;
  auVar42._0_12_ = auVar40._0_12_;
  auVar42._12_2_ = auVar56._2_2_;
  auVar42._14_2_ = sVar46;
  auVar38._4_12_ = auVar42._4_12_;
  auVar38._2_2_ = auVar37._8_2_;
  auVar38._0_2_ = auVar37._0_2_;
  auVar39._8_8_ = auVar42._8_8_;
  auVar39._0_8_ = CONCAT26(auVar56._8_2_,auVar38._0_6_);
  auVar41._12_4_ = auVar42._12_4_;
  auVar41._0_10_ = auVar39._0_10_;
  auVar41._10_2_ = auVar37._10_2_;
  auVar43._0_14_ = auVar41._0_14_;
  auVar43._14_2_ = sVar47;
  auVar8._2_10_ = auVar15._6_10_;
  auVar8._0_2_ = auVar56._4_2_;
  auVar18._0_8_ = auVar8._0_8_ << 0x20;
  auVar18._10_6_ = auVar15._10_6_;
  auVar18._8_2_ = auVar37._6_2_;
  auVar20._0_12_ = auVar18._0_12_;
  auVar20._12_2_ = auVar56._6_2_;
  auVar20._14_2_ = auVar14._14_2_;
  auVar16._4_12_ = auVar20._4_12_;
  auVar16._2_2_ = auVar37._12_2_;
  auVar16._0_2_ = auVar37._4_2_;
  auVar17._8_8_ = auVar20._8_8_;
  auVar17._0_8_ = CONCAT26(auVar56._12_2_,auVar16._0_6_);
  auVar19._12_4_ = auVar20._12_4_;
  auVar19._0_10_ = auVar17._0_10_;
  auVar19._10_2_ = sVar46;
  auVar21._0_14_ = auVar19._0_14_;
  auVar21._14_2_ = auVar14._14_2_;
  uVar10 = NEON_sqadd(auVar39._0_8_,auVar17._0_8_,2);
  auVar58._0_8_ = NEON_sqsub(auVar39._0_8_,auVar17._0_8_,2);
  auVar22._8_8_ = auVar21._8_8_;
  auVar22._0_8_ = auVar43._8_8_;
  auVar59 = NEON_sqdmulh(auVar22,auVar32,2);
  auVar4._8_2_ = 0x4546;
  auVar4._0_8_ = 0x4546454645464546;
  auVar4._10_2_ = 0x4546;
  auVar4._12_2_ = 0x4546;
  auVar4._14_2_ = 0x4546;
  auVar44 = NEON_sqdmulh(auVar22,auVar4,2);
  auVar23._0_8_ =
       CONCAT26(sVar47 + (auVar59._6_2_ >> 1),
                CONCAT24(auVar56._2_2_ + (auVar59._4_2_ >> 1),
                         CONCAT22(auVar37._10_2_ + (auVar59._2_2_ >> 1),
                                  auVar37._2_2_ + (auVar59._0_2_ >> 1))));
  auVar23._8_2_ = auVar37._6_2_ + (auVar59._8_2_ >> 1);
  auVar23._10_2_ = sVar46 + (auVar59._10_2_ >> 1);
  auVar23._12_2_ = auVar56._6_2_ + (auVar59._12_2_ >> 1);
  auVar23._14_2_ = auVar14._14_2_ + (auVar59._14_2_ >> 1);
  auVar56 = NEON_ext(auVar23,auVar23,8,1);
  auVar33._0_8_ = NEON_sqsub(auVar44._0_8_,auVar56._0_8_,2);
  auVar56 = NEON_ext(auVar44,auVar44,8,1);
  uVar36 = NEON_sqadd(auVar23._0_8_,auVar56._0_8_,2);
  auVar45._8_8_ = auVar58._0_8_;
  auVar45._0_8_ = uVar10;
  auVar5._8_2_ = (short)auVar33._0_8_;
  auVar5._0_8_ = uVar36;
  auVar5._10_2_ = (short)((ulong)auVar33._0_8_ >> 0x10);
  auVar5._12_2_ = (short)((ulong)auVar33._0_8_ >> 0x20);
  auVar5._14_2_ = (short)((ulong)auVar33._0_8_ >> 0x30);
  auVar59 = NEON_sqadd(auVar45,auVar5,2);
  auVar33._8_8_ = uVar36;
  auVar58._8_8_ = uVar10;
  auVar56 = NEON_sqsub(auVar58,auVar33,2);
  auVar24._0_8_ = auVar56._6_8_ << 0x30;
  sVar46 = auVar59._12_2_;
  auVar24._10_6_ = auVar56._10_6_;
  auVar24._8_2_ = sVar46;
  auVar26._14_2_ = auVar56._14_2_;
  auVar26._0_12_ = auVar24._0_12_;
  auVar26._12_2_ = auVar59._14_2_;
  auVar25._0_10_ = CONCAT82(auVar26._8_8_,auVar56._10_2_) << 0x30;
  sVar47 = auVar56._12_2_;
  auVar25._12_4_ = auVar26._12_4_;
  auVar25._10_2_ = sVar47;
  auVar27._0_14_ = auVar25._0_14_;
  auVar27._14_2_ = auVar26._14_2_;
  auVar9._2_10_ = auVar27._6_10_;
  auVar9._0_2_ = auVar56._4_2_;
  auVar29._0_8_ = auVar9._0_8_ << 0x20;
  auVar29._10_6_ = auVar27._10_6_;
  auVar29._8_2_ = auVar59._6_2_;
  auVar30._0_12_ = auVar29._0_12_;
  auVar30._12_2_ = auVar56._6_2_;
  auVar30._14_2_ = auVar26._14_2_;
  auVar28._4_12_ = auVar30._4_12_;
  auVar28._2_2_ = sVar46;
  auVar28._0_2_ = auVar59._4_2_;
  uVar31 = *param_2;
  uVar35 = param_2[8];
  uVar2 = param_2[0x10];
  uVar49 = (ushort)param_2[0x18];
  uVar51 = (ushort)((uint)param_2[0x18] >> 0x10);
  auVar34._0_8_ =
       CONCAT26((ushort)(byte)((uint)uVar31 >> 0x18) + (auVar56._8_2_ >> 3),
                CONCAT24((ushort)(byte)((uint)uVar31 >> 0x10) + (auVar56._0_2_ >> 3),
                         CONCAT22((ushort)(byte)((uint)uVar31 >> 8) + (auVar59._8_2_ >> 3),
                                  (ushort)(byte)uVar31 + (auVar59._0_2_ >> 3))));
  auVar34._8_2_ = (ushort)(byte)uVar35 + (auVar59._2_2_ >> 3);
  auVar34._10_2_ = (ushort)(byte)((uint)uVar35 >> 8) + (auVar59._10_2_ >> 3);
  auVar34._12_2_ = (ushort)(byte)((uint)uVar35 >> 0x10) + (auVar56._2_2_ >> 3);
  auVar34._14_2_ = (ushort)(byte)((uint)uVar35 >> 0x18) + (auVar56._10_2_ >> 3);
  uVar10 = NEON_sqxtun(CONCAT26(sVar47,auVar28._0_6_),auVar34,2);
  auVar1._2_2_ = (ushort)(byte)((uint)uVar2 >> 8) + (sVar46 >> 3);
  auVar1._0_2_ = (ushort)(byte)uVar2 + (auVar59._4_2_ >> 3);
  auVar1._4_2_ = (ushort)(byte)((uint)uVar2 >> 0x10) + (auVar56._4_2_ >> 3);
  auVar1._6_2_ = (ushort)(byte)((uint)uVar2 >> 0x18) + (sVar47 >> 3);
  auVar1._8_2_ = (uVar49 & 0xff) + (auVar59._6_2_ >> 3);
  auVar1._10_2_ = (uVar49 >> 8) + (auVar59._14_2_ >> 3);
  auVar1._12_2_ = (uVar51 & 0xff) + (auVar56._6_2_ >> 3);
  auVar1._14_2_ = (uVar51 >> 8) + (auVar26._14_2_ >> 3);
  uVar36 = NEON_sqxtun(auVar34._0_8_,auVar1,2);
  *param_2 = (int)uVar10;
  param_2[8] = (int)((ulong)uVar10 >> 0x20);
  param_2[0x10] = (int)uVar36;
  param_2[0x18] = (int)((ulong)uVar36 >> 0x20);
  return;
}



/* Entry: 108232250; end: 108232453;  */

void FUN_108232250(undefined2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  short sVar13;
  short sVar14;
  ushort uVar15;
  short sVar16;
  ushort uVar17;
  short sVar18;
  ushort uVar19;
  ushort uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar3 = *param_1;
  uVar9 = (undefined2)((uint)((short)param_1[4] * 0x8a8c) >> 0x10);
  uVar8 = (undefined2)((uint)((short)param_1[4] * 0x14e7b) >> 0x10);
  sVar13 = param_1[1];
  uVar2 = sVar13 * 0x8a8c;
  uVar1 = (int)sVar13 + (sVar13 * 0x4e7b >> 0x10);
  auVar11._0_8_ =
       NEON_sqadd(CONCAT26(uVar3,CONCAT24(uVar3,CONCAT22(uVar3,uVar3))),
                  CONCAT44(-(uVar2 >> 0x10),uVar2 & 0xffff0000 | uVar1 & 0xffff) & 0xffffffffffff |
                  (ulong)-uVar1 << 0x30,2);
  auVar21._2_2_ = uVar8;
  auVar21._0_2_ = uVar8;
  auVar21._4_2_ = uVar8;
  auVar21._6_2_ = uVar8;
  auVar21._10_2_ = uVar9;
  auVar21._8_2_ = uVar9;
  auVar21._12_2_ = uVar9;
  auVar21._14_2_ = uVar9;
  auVar11._8_8_ = auVar11._0_8_;
  auVar22 = NEON_sqadd(auVar11,auVar21,2);
  auVar12._2_2_ = uVar9;
  auVar12._0_2_ = uVar9;
  auVar12._4_2_ = uVar9;
  auVar12._6_2_ = uVar9;
  auVar12._8_2_ = uVar8;
  auVar12._10_2_ = uVar8;
  auVar12._12_2_ = uVar8;
  auVar12._14_2_ = uVar8;
  auVar12 = NEON_sqsub(auVar11,auVar12,2);
  uVar5 = *param_2;
  uVar15 = (ushort)param_2[8];
  uVar17 = (ushort)((uint)param_2[8] >> 0x10);
  uVar7 = param_2[0x10];
  uVar19 = (ushort)param_2[0x18];
  uVar20 = (ushort)((uint)param_2[0x18] >> 0x10);
  sVar13 = (ushort)(byte)uVar5 + (auVar22._0_2_ >> 3);
  sVar14 = (ushort)(byte)((uint)uVar5 >> 8) + (auVar22._2_2_ >> 3);
  sVar16 = (ushort)(byte)((uint)uVar5 >> 0x10) + (auVar22._4_2_ >> 3);
  sVar18 = (ushort)(byte)((uint)uVar5 >> 0x18) + (auVar22._6_2_ >> 3);
  auVar4._2_2_ = sVar14;
  auVar4._0_2_ = sVar13;
  auVar4._4_2_ = sVar16;
  auVar4._6_2_ = sVar18;
  auVar4._8_2_ = (uVar15 & 0xff) + (auVar22._8_2_ >> 3);
  auVar4._10_2_ = (uVar15 >> 8) + (auVar22._10_2_ >> 3);
  auVar4._12_2_ = (uVar17 & 0xff) + (auVar22._12_2_ >> 3);
  auVar4._14_2_ = (uVar17 >> 8) + (auVar22._14_2_ >> 3);
  uVar10 = NEON_sqxtun(auVar12._0_8_,auVar4,2);
  auVar22._2_2_ = (ushort)(byte)((uint)uVar7 >> 8) + (auVar12._2_2_ >> 3);
  auVar22._0_2_ = (ushort)(byte)uVar7 + (auVar12._0_2_ >> 3);
  auVar22._4_2_ = (ushort)(byte)((uint)uVar7 >> 0x10) + (auVar12._4_2_ >> 3);
  auVar22._6_2_ = (ushort)(byte)((uint)uVar7 >> 0x18) + (auVar12._6_2_ >> 3);
  auVar22._8_2_ = (uVar19 & 0xff) + (auVar12._8_2_ >> 3);
  auVar22._10_2_ = (uVar19 >> 8) + (auVar12._10_2_ >> 3);
  auVar22._12_2_ = (uVar20 & 0xff) + (auVar12._12_2_ >> 3);
  auVar22._14_2_ = (uVar20 >> 8) + (auVar12._14_2_ >> 3);
  uVar6 = NEON_sqxtun(CONCAT26(sVar18,CONCAT24(sVar16,CONCAT22(sVar14,sVar13))),auVar22,2);
  *param_2 = (int)uVar10;
  param_2[8] = (int)((ulong)uVar10 >> 0x20);
  param_2[0x10] = (int)uVar6;
  param_2[0x18] = (int)((ulong)uVar6 >> 0x20);
  return;
}



/* Entry: 108232454; end: 108232567;  */

void FUN_108232454(undefined1 (*param_1) [16],int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  
  pauVar2 = (undefined1 (*) [16])((long)param_1 + (long)param_2 * -2);
  pauVar4 = (undefined1 (*) [16])((long)pauVar2 - (long)param_2);
  pauVar1 = (undefined1 (*) [16])(*param_1 + (long)param_2 * 2);
  pauVar3 = (undefined1 (*) [16])((long)pauVar1 - (long)param_2);
  auVar5 = NEON_uabd(*(undefined1 (*) [16])((long)pauVar2 + (long)param_2 * -2),*pauVar4,1);
  auVar7 = NEON_uabd(*pauVar4,*pauVar2,1);
  auVar8 = NEON_uabd(*pauVar2,*(undefined1 (*) [16])(*pauVar2 + param_2),1);
  auVar6 = NEON_uabd(*(undefined1 (*) [16])(*pauVar1 + param_2),*pauVar1,1);
  auVar9 = NEON_uabd(*pauVar1,*pauVar3,1);
  auVar10 = NEON_uabd(*pauVar3,*param_1,1);
  auVar5 = NEON_umax(auVar5,auVar7,1);
  auVar6 = NEON_umax(auVar8,auVar6,1);
  auVar7 = NEON_umax(auVar9,auVar10,1);
  auVar5 = NEON_umax(auVar5,auVar6,1);
  NEON_umax(auVar5,auVar7,1);
  auVar5 = NEON_uabd(*(undefined1 (*) [16])(*pauVar2 + param_2),*param_1,1);
  auVar6 = NEON_uabd(*pauVar2,*pauVar3,1);
  auVar5 = NEON_uqadd(auVar5,auVar5,1);
  auVar7[0] = auVar6[0] >> 1;
  auVar7[1] = auVar6[1] >> 1;
  auVar7[2] = auVar6[2] >> 1;
  auVar7[3] = auVar6[3] >> 1;
  auVar7[4] = auVar6[4] >> 1;
  auVar7[5] = auVar6[5] >> 1;
  auVar7[6] = auVar6[6] >> 1;
  auVar7[7] = auVar6[7] >> 1;
  auVar7[8] = auVar6[8] >> 1;
  auVar7[9] = auVar6[9] >> 1;
  auVar7[10] = auVar6[10] >> 1;
  auVar7[0xb] = auVar6[0xb] >> 1;
  auVar7[0xc] = auVar6[0xc] >> 1;
  auVar7[0xd] = auVar6[0xd] >> 1;
  auVar7[0xe] = auVar6[0xe] >> 1;
  auVar7[0xf] = auVar6[0xf] >> 1;
  NEON_uqadd(auVar5,auVar7,1);
  NEON_umax(auVar8,auVar10,1);
  func_0x0001082340e4(&uStack_50,&uStack_60,&uStack_70,&uStack_80,&uStack_90,&uStack_a0);
  *(undefined8 *)(*pauVar4 + 8) = uStack_48;
  *(undefined8 *)*pauVar4 = uStack_50;
  *(undefined8 *)(*pauVar2 + 8) = uStack_58;
  *(undefined8 *)*pauVar2 = uStack_60;
  ((undefined8 *)((long)param_1 - (long)param_2))[1] = uStack_68;
  *(undefined8 *)((long)param_1 - (long)param_2) = uStack_70;
  *(undefined8 *)(*param_1 + 8) = uStack_78;
  *(undefined8 *)*param_1 = uStack_80;
  *(undefined8 *)(*pauVar3 + 8) = uStack_88;
  *(undefined8 *)*pauVar3 = uStack_90;
  *(undefined8 *)(*pauVar1 + 8) = uStack_98;
  *(undefined8 *)*pauVar1 = uStack_a0;
  return;
}



/* Entry: 108232568; end: 1082326d3;  */

void FUN_108232568(undefined1 (*param_1) [16],uint param_2,byte param_3,byte param_4,byte param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  unkbyte9 *pVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uVar21;
  bool bVar22;
  ulong uVar23;
  ulong *puVar24;
  int iVar25;
  byte bVar26;
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
  byte bVar43;
  undefined1 auVar27 [16];
  byte bVar44;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar45;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 auVar46 [16];
  byte bVar62;
  undefined1 auVar47 [16];
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined1 auVar107 [16];
  
  puVar1 = (undefined8 *)(*param_1 + (long)(int)param_2 * 2);
  uVar23 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  auVar27 = *param_1;
  auVar46 = *(undefined1 (*) [16])((long)puVar1 - (long)(int)param_2);
  uVar10 = puVar1[1];
  bVar71 = (byte)uVar10;
  bVar72 = (byte)((ulong)uVar10 >> 8);
  bVar73 = (byte)((ulong)uVar10 >> 0x10);
  bVar74 = (byte)((ulong)uVar10 >> 0x18);
  bVar75 = (byte)((ulong)uVar10 >> 0x20);
  bVar76 = (byte)((ulong)uVar10 >> 0x28);
  bVar77 = (byte)((ulong)uVar10 >> 0x30);
  bVar78 = (byte)((ulong)uVar10 >> 0x38);
  uVar10 = *puVar1;
  auVar79 = *(undefined1 (*) [16])((long)puVar1 + (long)(int)param_2);
  puVar24 = (ulong *)(*param_1 + (long)(int)param_2 * 4);
  iVar25 = -3;
  uVar63 = (char)uVar10;
  uVar64 = (char)((ulong)uVar10 >> 8);
  uVar65 = (char)((ulong)uVar10 >> 0x10);
  uVar66 = (char)((ulong)uVar10 >> 0x18);
  uVar67 = (char)((ulong)uVar10 >> 0x20);
  uVar68 = (char)((ulong)uVar10 >> 0x28);
  uVar69 = (char)((ulong)uVar10 >> 0x30);
  uVar70 = (char)((ulong)uVar10 >> 0x38);
  do {
    puVar2 = (ulong *)((long)puVar24 + (uVar23 - (long)(int)param_2));
    uVar16 = puVar2[1];
    bVar83 = (byte)(uVar16 >> 8);
    bVar84 = (byte)(uVar16 >> 0x10);
    bVar85 = (byte)(uVar16 >> 0x18);
    bVar86 = (byte)(uVar16 >> 0x20);
    bVar87 = (byte)(uVar16 >> 0x28);
    bVar88 = (byte)(uVar16 >> 0x30);
    bVar89 = (byte)(uVar16 >> 0x38);
    auVar5[1] = uVar64;
    auVar5[0] = uVar63;
    auVar5[2] = uVar65;
    auVar5[3] = uVar66;
    auVar5[4] = uVar67;
    auVar5[5] = uVar68;
    auVar5[6] = uVar69;
    auVar5[7] = uVar70;
    auVar5[8] = bVar71;
    auVar5[9] = bVar72;
    auVar5[10] = bVar73;
    auVar5[0xb] = bVar74;
    auVar5[0xc] = bVar75;
    auVar5[0xd] = bVar76;
    auVar5[0xe] = bVar77;
    auVar5[0xf] = bVar78;
    auVar90 = NEON_uabd(auVar46,auVar5,1);
    auVar6[1] = uVar64;
    auVar6[0] = uVar63;
    auVar6[2] = uVar65;
    auVar6[3] = uVar66;
    auVar6[4] = uVar67;
    auVar6[5] = uVar68;
    auVar6[6] = uVar69;
    auVar6[7] = uVar70;
    auVar6[8] = bVar71;
    auVar6[9] = bVar72;
    auVar6[10] = bVar73;
    auVar6[0xb] = bVar74;
    auVar6[0xc] = bVar75;
    auVar6[0xd] = bVar76;
    auVar6[0xe] = bVar77;
    auVar6[0xf] = bVar78;
    auVar93 = NEON_uabd(auVar6,auVar79,1);
    auVar7[1] = uVar64;
    auVar7[0] = uVar63;
    auVar7[2] = uVar65;
    auVar7[3] = uVar66;
    auVar7[4] = uVar67;
    auVar7[5] = uVar68;
    auVar7[6] = uVar69;
    auVar7[7] = uVar70;
    auVar7[8] = bVar71;
    auVar7[9] = bVar72;
    auVar7[10] = bVar73;
    auVar7[0xb] = bVar74;
    auVar7[0xc] = bVar75;
    auVar7[0xd] = bVar76;
    auVar7[0xe] = bVar77;
    auVar7[0xf] = bVar78;
    auVar11[9] = bVar83;
    auVar11._0_9_ = *(unkbyte9 *)puVar2;
    auVar11[10] = bVar84;
    auVar11[0xb] = bVar85;
    auVar11[0xc] = bVar86;
    auVar11[0xd] = bVar87;
    auVar11[0xe] = bVar88;
    auVar11[0xf] = bVar89;
    auVar96 = NEON_uabd(auVar7,auVar11,1);
    bVar99 = bVar71 ^ 0x80;
    bVar100 = bVar72 ^ 0x80;
    bVar101 = bVar73 ^ 0x80;
    bVar102 = bVar74 ^ 0x80;
    bVar103 = bVar75 ^ 0x80;
    bVar104 = bVar76 ^ 0x80;
    bVar105 = bVar77 ^ 0x80;
    bVar106 = bVar78 ^ 0x80;
    pVar3 = (unkbyte9 *)((long)puVar24 + uVar23);
    uVar10 = *(undefined8 *)((long)pVar3 + 8);
    bVar71 = (byte)uVar10;
    bVar72 = (byte)((ulong)uVar10 >> 8);
    bVar73 = (byte)((ulong)uVar10 >> 0x10);
    bVar74 = (byte)((ulong)uVar10 >> 0x18);
    bVar75 = (byte)((ulong)uVar10 >> 0x20);
    bVar76 = (byte)((ulong)uVar10 >> 0x28);
    bVar77 = (byte)((ulong)uVar10 >> 0x30);
    bVar78 = (byte)((ulong)uVar10 >> 0x38);
    uVar10 = *(undefined8 *)pVar3;
    uVar21 = puVar24[1];
    bVar45 = (byte)(uVar21 >> 8);
    bVar48 = (byte)(uVar21 >> 0x10);
    bVar49 = (byte)(uVar21 >> 0x18);
    bVar50 = (byte)(uVar21 >> 0x20);
    bVar51 = (byte)(uVar21 >> 0x28);
    bVar52 = (byte)(uVar21 >> 0x30);
    bVar53 = (byte)(uVar21 >> 0x38);
    auVar19[9] = bVar45;
    auVar19._0_9_ = *(unkbyte9 *)puVar24;
    auVar19[10] = bVar48;
    auVar19[0xb] = bVar49;
    auVar19[0xc] = bVar50;
    auVar19[0xd] = bVar51;
    auVar19[0xe] = bVar52;
    auVar19[0xf] = bVar53;
    auVar107 = NEON_uabd(auVar79,auVar19,1);
    auVar80._0_8_ = auVar79._0_8_ ^ 0x8080808080808080;
    auVar80[8] = auVar79[8] ^ 0x80;
    auVar80[9] = auVar79[9] ^ 0x80;
    auVar80[10] = auVar79[10] ^ 0x80;
    auVar80[0xb] = auVar79[0xb] ^ 0x80;
    auVar80[0xc] = auVar79[0xc] ^ 0x80;
    auVar80[0xd] = auVar79[0xd] ^ 0x80;
    auVar80[0xe] = auVar79[0xe] ^ 0x80;
    auVar80[0xf] = auVar79[0xf] ^ 0x80;
    pauVar4 = (undefined1 (*) [16])((long)puVar24 + (long)(int)param_2 + (long)(int)param_2 * 2);
    auVar79 = *pauVar4;
    auVar27 = NEON_uabd(auVar27,auVar46,1);
    auVar8[9] = bVar72;
    auVar8._0_9_ = *pVar3;
    auVar8[10] = bVar73;
    auVar8[0xb] = bVar74;
    auVar8[0xc] = bVar75;
    auVar8[0xd] = bVar76;
    auVar8[0xe] = bVar77;
    auVar8[0xf] = bVar78;
    auVar46 = NEON_uabd(*pauVar4,auVar8,1);
    auVar27 = NEON_umax(auVar27,auVar90,1);
    auVar9[9] = bVar72;
    auVar9._0_9_ = *pVar3;
    auVar9[10] = bVar73;
    auVar9[0xb] = bVar74;
    auVar9[0xc] = bVar75;
    auVar9[0xd] = bVar76;
    auVar9[0xe] = bVar77;
    auVar9[0xf] = bVar78;
    auVar12[9] = bVar83;
    auVar12._0_9_ = *(unkbyte9 *)puVar2;
    auVar12[10] = bVar84;
    auVar12[0xb] = bVar85;
    auVar12[0xc] = bVar86;
    auVar12[0xd] = bVar87;
    auVar12[0xe] = bVar88;
    auVar12[0xf] = bVar89;
    auVar90 = NEON_uabd(auVar9,auVar12,1);
    auVar46 = NEON_umax(auVar93,auVar46,1);
    auVar27 = NEON_umax(auVar27,auVar46,1);
    auVar13[9] = bVar83;
    auVar13._0_9_ = *(unkbyte9 *)puVar2;
    auVar13[10] = bVar84;
    auVar13[0xb] = bVar85;
    auVar13[0xc] = bVar86;
    auVar13[0xd] = bVar87;
    auVar13[0xe] = bVar88;
    auVar13[0xf] = bVar89;
    auVar20[9] = bVar45;
    auVar20._0_9_ = *(unkbyte9 *)puVar24;
    auVar20[10] = bVar48;
    auVar20[0xb] = bVar49;
    auVar20[0xc] = bVar50;
    auVar20[0xd] = bVar51;
    auVar20[0xe] = bVar52;
    auVar20[0xf] = bVar53;
    auVar46 = NEON_uabd(auVar13,auVar20,1);
    auVar90 = NEON_umax(auVar90,auVar46,1);
    auVar27 = NEON_umax(auVar27,auVar90,1);
    auVar90 = NEON_uqadd(auVar107,auVar107,1);
    auVar97[0] = auVar96[0] >> 1;
    auVar97[1] = auVar96[1] >> 1;
    auVar97[2] = auVar96[2] >> 1;
    auVar97[3] = auVar96[3] >> 1;
    auVar97[4] = auVar96[4] >> 1;
    auVar97[5] = auVar96[5] >> 1;
    auVar97[6] = auVar96[6] >> 1;
    auVar97[7] = auVar96[7] >> 1;
    auVar97[8] = auVar96[8] >> 1;
    auVar97[9] = auVar96[9] >> 1;
    auVar97[10] = auVar96[10] >> 1;
    auVar97[0xb] = auVar96[0xb] >> 1;
    auVar97[0xc] = auVar96[0xc] >> 1;
    auVar97[0xd] = auVar96[0xd] >> 1;
    auVar97[0xe] = auVar96[0xe] >> 1;
    auVar97[0xf] = auVar96[0xf] >> 1;
    auVar90 = NEON_uqadd(auVar90,auVar97,1);
    bVar26 = -(auVar27[0] <= param_4) & -(auVar90[0] <= param_3);
    bVar30 = -(auVar27[1] <= param_4) & -(auVar90[1] <= param_3);
    bVar31 = -(auVar27[2] <= param_4) & -(auVar90[2] <= param_3);
    bVar32 = -(auVar27[3] <= param_4) & -(auVar90[3] <= param_3);
    bVar33 = -(auVar27[4] <= param_4) & -(auVar90[4] <= param_3);
    bVar34 = -(auVar27[5] <= param_4) & -(auVar90[5] <= param_3);
    bVar35 = -(auVar27[6] <= param_4) & -(auVar90[6] <= param_3);
    bVar36 = -(auVar27[7] <= param_4) & -(auVar90[7] <= param_3);
    bVar37 = -(auVar27[8] <= param_4) & -(auVar90[8] <= param_3);
    bVar38 = -(auVar27[9] <= param_4) & -(auVar90[9] <= param_3);
    bVar39 = -(auVar27[10] <= param_4) & -(auVar90[10] <= param_3);
    bVar40 = -(auVar27[0xb] <= param_4) & -(auVar90[0xb] <= param_3);
    bVar41 = -(auVar27[0xc] <= param_4) & -(auVar90[0xc] <= param_3);
    bVar42 = -(auVar27[0xd] <= param_4) & -(auVar90[0xd] <= param_3);
    bVar43 = -(auVar27[0xe] <= param_4) & -(auVar90[0xe] <= param_3);
    bVar44 = -(auVar27[0xf] <= param_4) & -(auVar90[0xf] <= param_3);
    auVar27 = NEON_umax(auVar93,auVar46,1);
    auVar91._0_8_ = *puVar24 ^ 0x8080808080808080;
    auVar91[8] = (byte)uVar21 ^ 0x80;
    auVar91[9] = bVar45 ^ 0x80;
    auVar91[10] = bVar48 ^ 0x80;
    auVar91[0xb] = bVar49 ^ 0x80;
    auVar91[0xc] = bVar50 ^ 0x80;
    auVar91[0xd] = bVar51 ^ 0x80;
    auVar91[0xe] = bVar52 ^ 0x80;
    auVar91[0xf] = bVar53 ^ 0x80;
    bVar82 = (byte)uVar16 ^ 0x80;
    bVar45 = -(param_5 < auVar27[0]) & bVar26;
    bVar48 = -(param_5 < auVar27[1]) & bVar30;
    bVar49 = -(param_5 < auVar27[2]) & bVar31;
    bVar50 = -(param_5 < auVar27[3]) & bVar32;
    bVar51 = -(param_5 < auVar27[4]) & bVar33;
    bVar52 = -(param_5 < auVar27[5]) & bVar34;
    bVar53 = -(param_5 < auVar27[6]) & bVar35;
    bVar54 = -(param_5 < auVar27[7]) & bVar36;
    bVar55 = -(param_5 < auVar27[8]) & bVar37;
    bVar56 = -(param_5 < auVar27[9]) & bVar38;
    bVar57 = -(param_5 < auVar27[10]) & bVar39;
    bVar58 = -(param_5 < auVar27[0xb]) & bVar40;
    bVar59 = -(param_5 < auVar27[0xc]) & bVar41;
    bVar60 = -(param_5 < auVar27[0xd]) & bVar42;
    bVar61 = -(param_5 < auVar27[0xe]) & bVar43;
    bVar62 = -(param_5 < auVar27[0xf]) & bVar44;
    auVar27 = NEON_sqsub(auVar91,auVar80,1);
    auVar14[8] = bVar82;
    auVar14._0_8_ = *puVar2 ^ 0x8080808080808080;
    auVar14[9] = bVar83 ^ 0x80;
    auVar14[10] = bVar84 ^ 0x80;
    auVar14[0xb] = bVar85 ^ 0x80;
    auVar14[0xc] = bVar86 ^ 0x80;
    auVar14[0xd] = bVar87 ^ 0x80;
    auVar14[0xe] = bVar88 ^ 0x80;
    auVar14[0xf] = bVar89 ^ 0x80;
    auVar17[8] = bVar99;
    auVar17._0_8_ =
         CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,CONCAT13(uVar66,CONCAT12(
                                                  uVar65,CONCAT11(uVar64,uVar63))))))) ^
         0x8080808080808080;
    auVar17[9] = bVar100;
    auVar17[10] = bVar101;
    auVar17[0xb] = bVar102;
    auVar17[0xc] = bVar103;
    auVar17[0xd] = bVar104;
    auVar17[0xe] = bVar105;
    auVar17[0xf] = bVar106;
    auVar46 = NEON_sqsub(auVar17,auVar14,1);
    auVar46 = NEON_sqadd(auVar46,auVar27,1);
    auVar46 = NEON_sqadd(auVar27,auVar46,1);
    auVar27 = NEON_sqadd(auVar27,auVar46,1);
    auVar94[0] = bVar45 & auVar27[0];
    auVar94[1] = bVar48 & auVar27[1];
    auVar94[2] = bVar49 & auVar27[2];
    auVar94[3] = bVar50 & auVar27[3];
    auVar94[4] = bVar51 & auVar27[4];
    auVar94[5] = bVar52 & auVar27[5];
    auVar94[6] = bVar53 & auVar27[6];
    auVar94[7] = bVar54 & auVar27[7];
    auVar94[8] = bVar55 & auVar27[8];
    auVar94[9] = bVar56 & auVar27[9];
    auVar94[10] = bVar57 & auVar27[10];
    auVar94[0xb] = bVar58 & auVar27[0xb];
    auVar94[0xc] = bVar59 & auVar27[0xc];
    auVar94[0xd] = bVar60 & auVar27[0xd];
    auVar94[0xe] = bVar61 & auVar27[0xe];
    auVar94[0xf] = bVar62 & auVar27[0xf];
    auVar90[8] = 3;
    auVar90._0_8_ = 0x303030303030303;
    auVar90[9] = 3;
    auVar90[10] = 3;
    auVar90[0xb] = 3;
    auVar90[0xc] = 3;
    auVar90[0xd] = 3;
    auVar90[0xe] = 3;
    auVar90[0xf] = 3;
    auVar46 = NEON_sqadd(auVar94,auVar90,1);
    auVar96[8] = 4;
    auVar96._0_8_ = 0x404040404040404;
    auVar96[9] = 4;
    auVar96[10] = 4;
    auVar96[0xb] = 4;
    auVar96[0xc] = 4;
    auVar96[0xd] = 4;
    auVar96[0xe] = 4;
    auVar96[0xf] = 4;
    auVar27 = NEON_sqadd(auVar94,auVar96,1);
    auVar98[0] = auVar46[0] >> 3;
    auVar98[1] = auVar46[1] >> 3;
    auVar98[2] = auVar46[2] >> 3;
    auVar98[3] = auVar46[3] >> 3;
    auVar98[4] = auVar46[4] >> 3;
    auVar98[5] = auVar46[5] >> 3;
    auVar98[6] = auVar46[6] >> 3;
    auVar98[7] = auVar46[7] >> 3;
    auVar98[8] = auVar46[8] >> 3;
    auVar98[9] = auVar46[9] >> 3;
    auVar98[10] = auVar46[10] >> 3;
    auVar98[0xb] = auVar46[0xb] >> 3;
    auVar98[0xc] = auVar46[0xc] >> 3;
    auVar98[0xd] = auVar46[0xd] >> 3;
    auVar98[0xe] = auVar46[0xe] >> 3;
    auVar98[0xf] = auVar46[0xf] >> 3;
    auVar95[0] = auVar27[0] >> 3;
    auVar95[1] = auVar27[1] >> 3;
    auVar95[2] = auVar27[2] >> 3;
    auVar95[3] = auVar27[3] >> 3;
    auVar95[4] = auVar27[4] >> 3;
    auVar95[5] = auVar27[5] >> 3;
    auVar95[6] = auVar27[6] >> 3;
    auVar95[7] = auVar27[7] >> 3;
    auVar95[8] = auVar27[8] >> 3;
    auVar95[9] = auVar27[9] >> 3;
    auVar95[10] = auVar27[10] >> 3;
    auVar95[0xb] = auVar27[0xb] >> 3;
    auVar95[0xc] = auVar27[0xc] >> 3;
    auVar95[0xd] = auVar27[0xd] >> 3;
    auVar95[0xe] = auVar27[0xe] >> 3;
    auVar95[0xf] = auVar27[0xf] >> 3;
    auVar90 = NEON_sqadd(auVar80,auVar98,1);
    auVar96 = NEON_sqsub(auVar91,auVar95,1);
    auVar27 = NEON_sqsub(auVar96,auVar90,1);
    auVar46 = NEON_sqadd(auVar27,auVar27,1);
    auVar27 = NEON_sqadd(auVar27,auVar46,1);
    auVar28[0] = (bVar26 ^ bVar45) & auVar27[0];
    auVar28[1] = (bVar30 ^ bVar48) & auVar27[1];
    auVar28[2] = (bVar31 ^ bVar49) & auVar27[2];
    auVar28[3] = (bVar32 ^ bVar50) & auVar27[3];
    auVar28[4] = (bVar33 ^ bVar51) & auVar27[4];
    auVar28[5] = (bVar34 ^ bVar52) & auVar27[5];
    auVar28[6] = (bVar35 ^ bVar53) & auVar27[6];
    auVar28[7] = (bVar36 ^ bVar54) & auVar27[7];
    auVar28[8] = (bVar37 ^ bVar55) & auVar27[8];
    auVar28[9] = (bVar38 ^ bVar56) & auVar27[9];
    auVar28[10] = (bVar39 ^ bVar57) & auVar27[10];
    auVar28[0xb] = (bVar40 ^ bVar58) & auVar27[0xb];
    auVar28[0xc] = (bVar41 ^ bVar59) & auVar27[0xc];
    auVar28[0xd] = (bVar42 ^ bVar60) & auVar27[0xd];
    auVar28[0xe] = (bVar43 ^ bVar61) & auVar27[0xe];
    auVar28[0xf] = (bVar44 ^ bVar62) & auVar27[0xf];
    auVar107[8] = 4;
    auVar107._0_8_ = 0x404040404040404;
    auVar107[9] = 4;
    auVar107[10] = 4;
    auVar107[0xb] = 4;
    auVar107[0xc] = 4;
    auVar107[0xd] = 4;
    auVar107[0xe] = 4;
    auVar107[0xf] = 4;
    auVar46 = NEON_sqadd(auVar28,auVar107,1);
    auVar93[8] = 3;
    auVar93._0_8_ = 0x303030303030303;
    auVar93[9] = 3;
    auVar93[10] = 3;
    auVar93[0xb] = 3;
    auVar93[0xc] = 3;
    auVar93[0xd] = 3;
    auVar93[0xe] = 3;
    auVar93[0xf] = 3;
    auVar27 = NEON_sqadd(auVar28,auVar93,1);
    auVar47[0] = auVar46[0] >> 3;
    auVar47[1] = auVar46[1] >> 3;
    auVar47[2] = auVar46[2] >> 3;
    auVar47[3] = auVar46[3] >> 3;
    auVar47[4] = auVar46[4] >> 3;
    auVar47[5] = auVar46[5] >> 3;
    auVar47[6] = auVar46[6] >> 3;
    auVar47[7] = auVar46[7] >> 3;
    auVar47[8] = auVar46[8] >> 3;
    auVar47[9] = auVar46[9] >> 3;
    auVar47[10] = auVar46[10] >> 3;
    auVar47[0xb] = auVar46[0xb] >> 3;
    auVar47[0xc] = auVar46[0xc] >> 3;
    auVar47[0xd] = auVar46[0xd] >> 3;
    auVar47[0xe] = auVar46[0xe] >> 3;
    auVar47[0xf] = auVar46[0xf] >> 3;
    auVar29[0] = auVar27[0] >> 3;
    auVar29[1] = auVar27[1] >> 3;
    auVar29[2] = auVar27[2] >> 3;
    auVar29[3] = auVar27[3] >> 3;
    auVar29[4] = auVar27[4] >> 3;
    auVar29[5] = auVar27[5] >> 3;
    auVar29[6] = auVar27[6] >> 3;
    auVar29[7] = auVar27[7] >> 3;
    auVar29[8] = auVar27[8] >> 3;
    auVar29[9] = auVar27[9] >> 3;
    auVar29[10] = auVar27[10] >> 3;
    auVar29[0xb] = auVar27[0xb] >> 3;
    auVar29[0xc] = auVar27[0xc] >> 3;
    auVar29[0xd] = auVar27[0xd] >> 3;
    auVar29[0xe] = auVar27[0xe] >> 3;
    auVar29[0xf] = auVar27[0xf] >> 3;
    auVar93 = NEON_srshr(auVar47,1,1);
    auVar27 = NEON_sqadd(auVar90,auVar29,1);
    auVar81._0_8_ = auVar27._0_8_ ^ 0x8080808080808080;
    auVar81[8] = auVar27[8] ^ 0x80;
    auVar81[9] = auVar27[9] ^ 0x80;
    auVar81[10] = auVar27[10] ^ 0x80;
    auVar81[0xb] = auVar27[0xb] ^ 0x80;
    auVar81[0xc] = auVar27[0xc] ^ 0x80;
    auVar81[0xd] = auVar27[0xd] ^ 0x80;
    auVar81[0xe] = auVar27[0xe] ^ 0x80;
    auVar81[0xf] = auVar27[0xf] ^ 0x80;
    auVar46 = NEON_sqsub(auVar96,auVar47,1);
    auVar27._0_8_ = auVar46._0_8_ ^ 0x8080808080808080;
    auVar27[8] = auVar46[8] ^ 0x80;
    auVar27[9] = auVar46[9] ^ 0x80;
    auVar27[10] = auVar46[10] ^ 0x80;
    auVar27[0xb] = auVar46[0xb] ^ 0x80;
    auVar27[0xc] = auVar46[0xc] ^ 0x80;
    auVar27[0xd] = auVar46[0xd] ^ 0x80;
    auVar27[0xe] = auVar46[0xe] ^ 0x80;
    auVar27[0xf] = auVar46[0xf] ^ 0x80;
    auVar18[8] = bVar99;
    auVar18._0_8_ =
         CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,CONCAT13(uVar66,CONCAT12(
                                                  uVar65,CONCAT11(uVar64,uVar63))))))) ^
         0x8080808080808080;
    auVar18[9] = bVar100;
    auVar18[10] = bVar101;
    auVar18[0xb] = bVar102;
    auVar18[0xc] = bVar103;
    auVar18[0xd] = bVar104;
    auVar18[0xe] = bVar105;
    auVar18[0xf] = bVar106;
    auVar46 = NEON_sqadd(auVar18,auVar93,1);
    auVar92._0_8_ = auVar46._0_8_ ^ 0x8080808080808080;
    auVar92[8] = auVar46[8] ^ 0x80;
    auVar92[9] = auVar46[9] ^ 0x80;
    auVar92[10] = auVar46[10] ^ 0x80;
    auVar92[0xb] = auVar46[0xb] ^ 0x80;
    auVar92[0xc] = auVar46[0xc] ^ 0x80;
    auVar92[0xd] = auVar46[0xd] ^ 0x80;
    auVar92[0xe] = auVar46[0xe] ^ 0x80;
    auVar92[0xf] = auVar46[0xf] ^ 0x80;
    auVar15[8] = bVar82;
    auVar15._0_8_ = *puVar2 ^ 0x8080808080808080;
    auVar15[9] = bVar83 ^ 0x80;
    auVar15[10] = bVar84 ^ 0x80;
    auVar15[0xb] = bVar85 ^ 0x80;
    auVar15[0xc] = bVar86 ^ 0x80;
    auVar15[0xd] = bVar87 ^ 0x80;
    auVar15[0xe] = bVar88 ^ 0x80;
    auVar15[0xf] = bVar89 ^ 0x80;
    auVar90 = NEON_sqsub(auVar15,auVar93,1);
    auVar46._0_8_ = auVar90._0_8_ ^ 0x8080808080808080;
    auVar46[8] = auVar90[8] ^ 0x80;
    auVar46[9] = auVar90[9] ^ 0x80;
    auVar46[10] = auVar90[10] ^ 0x80;
    auVar46[0xb] = auVar90[0xb] ^ 0x80;
    auVar46[0xc] = auVar90[0xc] ^ 0x80;
    auVar46[0xd] = auVar90[0xd] ^ 0x80;
    auVar46[0xe] = auVar90[0xe] ^ 0x80;
    auVar46[0xf] = auVar90[0xf] ^ 0x80;
    puVar2 = (ulong *)((long)puVar24 + (long)(int)param_2 * -2);
    puVar2[1] = auVar92._8_8_;
    *puVar2 = auVar92._0_8_;
    ((ulong *)((long)puVar24 - (long)(int)param_2))[1] = auVar81._8_8_;
    *(ulong *)((long)puVar24 - (long)(int)param_2) = auVar81._0_8_;
    puVar24[1] = auVar27._8_8_;
    *puVar24 = auVar27._0_8_;
    puVar2 = (ulong *)((long)puVar24 + (long)(int)param_2);
    puVar2[1] = auVar46._8_8_;
    *puVar2 = auVar46._0_8_;
    puVar24 = (ulong *)((long)puVar24 +
                       (-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2));
    bVar22 = iVar25 != -1;
    iVar25 = iVar25 + 1;
    uVar63 = (char)uVar10;
    uVar64 = (char)((ulong)uVar10 >> 8);
    uVar65 = (char)((ulong)uVar10 >> 0x10);
    uVar66 = (char)((ulong)uVar10 >> 0x18);
    uVar67 = (char)((ulong)uVar10 >> 0x20);
    uVar68 = (char)((ulong)uVar10 >> 0x28);
    uVar69 = (char)((ulong)uVar10 >> 0x30);
    uVar70 = (char)((ulong)uVar10 >> 0x38);
  } while (bVar22);
  return;
}



/* Entry: 1082326d4; end: 108232a97;  */

void FUN_1082326d4(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  ulong uVar43;
  long lVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined1 auVar74 [16];
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
  
  puVar39 = param_1 + -4;
  uVar43 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  iVar35 = (int)param_2;
  puVar38 = puVar39 + iVar35;
  puVar42 = puVar39 + (long)iVar35 * 2;
  auVar74[0] = *puVar39;
  uVar45 = param_1[-2];
  auVar53[0] = param_1[-1];
  puVar36 = puVar39 + uVar43;
  auVar74[1] = *puVar38;
  uVar46 = puVar38[2];
  auVar53[1] = puVar38[3];
  auVar74[2] = *puVar42;
  uVar47 = puVar42[2];
  auVar53[2] = puVar42[3];
  lVar1 = (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar35
  ;
  puVar7 = puVar39 + lVar1;
  auVar74[3] = *puVar7;
  uVar48 = puVar7[2];
  auVar53[3] = puVar7[3];
  puVar2 = puVar39 + (long)iVar35 * 4;
  lVar3 = (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar35
  ;
  puVar8 = puVar39 + lVar3;
  auVar74[4] = *puVar2;
  uVar49 = puVar2[2];
  auVar53[4] = puVar2[3];
  puVar9 = puVar39 + lVar1 * 2;
  auVar74[5] = *puVar8;
  uVar50 = puVar8[2];
  auVar53[5] = puVar8[3];
  auVar74[6] = *puVar9;
  uVar51 = puVar9[2];
  auVar53[6] = puVar9[3];
  lVar44 = uVar43 - (long)iVar35;
  puVar39 = puVar39 + lVar44;
  auVar74[7] = *puVar39;
  uVar52 = puVar39[2];
  auVar53[7] = puVar39[3];
  puVar40 = puVar36 + lVar44;
  puVar4 = puVar36 + iVar35;
  auVar74[9] = *puVar4;
  auVar74[8] = *puVar36;
  auVar53[9] = puVar4[3];
  auVar53[8] = puVar36[3];
  puVar5 = puVar36 + (long)iVar35 * 2;
  auVar74[10] = *puVar5;
  auVar53[10] = puVar5[3];
  puVar10 = puVar36 + lVar1;
  auVar74[0xb] = *puVar10;
  auVar53[0xb] = puVar10[3];
  puVar6 = puVar36 + (long)iVar35 * 4;
  auVar74[0xc] = *puVar6;
  auVar53[0xc] = puVar6[3];
  puVar11 = puVar36 + lVar3;
  auVar74[0xd] = *puVar11;
  auVar53[0xd] = puVar11[3];
  puVar12 = puVar36 + lVar1 * 2;
  auVar74[0xe] = *puVar12;
  auVar53[0xe] = puVar12[3];
  auVar74[0xf] = *puVar40;
  uVar71 = CONCAT17(puVar40[1],
                    CONCAT16(puVar12[1],
                             CONCAT15(puVar11[1],
                                      CONCAT14(puVar6[1],
                                               CONCAT13(puVar10[1],
                                                        CONCAT12(puVar5[1],
                                                                 CONCAT11(puVar4[1],puVar36[1]))))))
                   );
  uVar73 = CONCAT17(puVar40[2],
                    CONCAT16(puVar12[2],
                             CONCAT15(puVar11[2],
                                      CONCAT14(puVar6[2],
                                               CONCAT13(puVar10[2],
                                                        CONCAT12(puVar5[2],
                                                                 CONCAT11(puVar4[2],puVar36[2]))))))
                   );
  auVar53[0xf] = puVar40[3];
  auVar54[0] = *param_1;
  uVar55 = param_1[1];
  puVar37 = param_1 + uVar43;
  puVar4 = param_1 + iVar35;
  auVar54[1] = *puVar4;
  uVar56 = puVar4[1];
  puVar5 = param_1 + (long)iVar35 * 2;
  auVar54[2] = *puVar5;
  uVar57 = puVar5[1];
  puVar36 = param_1 + lVar1;
  auVar54[3] = *puVar36;
  uVar58 = puVar36[1];
  puVar6 = param_1 + (long)iVar35 * 4;
  auVar54[4] = *puVar6;
  uVar59 = puVar6[1];
  puVar40 = param_1 + lVar3;
  auVar54[5] = *puVar40;
  uVar60 = puVar40[1];
  puVar13 = param_1 + lVar1 * 2;
  auVar54[6] = *puVar13;
  uVar61 = puVar13[1];
  puVar14 = param_1 + lVar44;
  auVar54[7] = *puVar14;
  uVar62 = puVar14[1];
  puVar41 = puVar37 + lVar44;
  puVar10 = puVar37 + iVar35;
  auVar54[9] = *puVar10;
  auVar54[8] = *puVar37;
  puVar11 = puVar37 + (long)iVar35 * 2;
  auVar54[10] = *puVar11;
  puVar15 = puVar37 + lVar1;
  auVar54[0xb] = *puVar15;
  puVar12 = puVar37 + (long)iVar35 * 4;
  auVar54[0xc] = *puVar12;
  puVar16 = puVar37 + lVar3;
  auVar54[0xd] = *puVar16;
  puVar17 = puVar37 + lVar1 * 2;
  auVar54[0xe] = *puVar17;
  auVar54[0xf] = *puVar41;
  uVar64 = CONCAT17(puVar41[1],
                    CONCAT16(puVar17[1],
                             CONCAT15(puVar16[1],
                                      CONCAT14(puVar12[1],
                                               CONCAT13(puVar15[1],
                                                        CONCAT12(puVar11[1],
                                                                 CONCAT11(puVar10[1],puVar37[1])))))
                            ));
  uVar66 = CONCAT17(puVar41[2],
                    CONCAT16(puVar17[2],
                             CONCAT15(puVar16[2],
                                      CONCAT14(puVar12[2],
                                               CONCAT13(puVar15[2],
                                                        CONCAT12(puVar11[2],
                                                                 CONCAT11(puVar10[2],puVar37[2])))))
                            ));
  auVar63[1] = puVar38[1];
  auVar63[0] = param_1[-3];
  auVar63[2] = puVar42[1];
  auVar63[3] = puVar7[1];
  auVar63[4] = puVar2[1];
  auVar63[5] = puVar8[1];
  auVar63[6] = puVar9[1];
  auVar63[7] = puVar39[1];
  auVar63._8_8_ = uVar71;
  auVar63 = NEON_uabd(auVar74,auVar63,1);
  auVar65[1] = puVar38[1];
  auVar65[0] = param_1[-3];
  auVar65[2] = puVar42[1];
  auVar65[3] = puVar7[1];
  auVar65[4] = puVar2[1];
  auVar65[5] = puVar8[1];
  auVar65[6] = puVar9[1];
  auVar65[7] = puVar39[1];
  auVar65._8_8_ = uVar71;
  auVar67[1] = uVar46;
  auVar67[0] = uVar45;
  auVar67[2] = uVar47;
  auVar67[3] = uVar48;
  auVar67[4] = uVar49;
  auVar67[5] = uVar50;
  auVar67[6] = uVar51;
  auVar67[7] = uVar52;
  auVar67._8_8_ = uVar73;
  auVar65 = NEON_uabd(auVar65,auVar67,1);
  auVar68[1] = uVar46;
  auVar68[0] = uVar45;
  auVar68[2] = uVar47;
  auVar68[3] = uVar48;
  auVar68[4] = uVar49;
  auVar68[5] = uVar50;
  auVar68[6] = uVar51;
  auVar68[7] = uVar52;
  auVar68._8_8_ = uVar73;
  auVar67 = NEON_uabd(auVar68,auVar53,1);
  auVar20[1] = puVar4[2];
  auVar20[0] = param_1[2];
  auVar20[2] = puVar5[2];
  auVar20[3] = puVar36[2];
  auVar20[4] = puVar6[2];
  auVar20[5] = puVar40[2];
  auVar20[6] = puVar13[2];
  auVar20[7] = puVar14[2];
  auVar20._8_8_ = uVar66;
  auVar22[1] = puVar4[3];
  auVar22[0] = param_1[3];
  auVar22[2] = puVar5[3];
  auVar22[3] = puVar36[3];
  auVar22[4] = puVar6[3];
  auVar22[5] = puVar40[3];
  auVar22[6] = puVar13[3];
  auVar22[7] = puVar14[3];
  auVar22[8] = puVar37[3];
  auVar22[9] = puVar10[3];
  auVar22[10] = puVar11[3];
  auVar22[0xb] = puVar15[3];
  auVar22[0xc] = puVar12[3];
  auVar22[0xd] = puVar16[3];
  auVar22[0xe] = puVar17[3];
  auVar22[0xf] = puVar41[3];
  auVar68 = NEON_uabd(auVar22,auVar20,1);
  auVar72[1] = uVar56;
  auVar72[0] = uVar55;
  auVar72[2] = uVar57;
  auVar72[3] = uVar58;
  auVar72[4] = uVar59;
  auVar72[5] = uVar60;
  auVar72[6] = uVar61;
  auVar72[7] = uVar62;
  auVar72._8_8_ = uVar64;
  auVar21[1] = puVar4[2];
  auVar21[0] = param_1[2];
  auVar21[2] = puVar5[2];
  auVar21[3] = puVar36[2];
  auVar21[4] = puVar6[2];
  auVar21[5] = puVar40[2];
  auVar21[6] = puVar13[2];
  auVar21[7] = puVar14[2];
  auVar21._8_8_ = uVar66;
  auVar70 = NEON_uabd(auVar21,auVar72,1);
  auVar18[1] = uVar56;
  auVar18[0] = uVar55;
  auVar18[2] = uVar57;
  auVar18[3] = uVar58;
  auVar18[4] = uVar59;
  auVar18[5] = uVar60;
  auVar18[6] = uVar61;
  auVar18[7] = uVar62;
  auVar18._8_8_ = uVar64;
  auVar72 = NEON_uabd(auVar18,auVar54,1);
  auVar63 = NEON_umax(auVar63,auVar65,1);
  auVar65 = NEON_umax(auVar67,auVar68,1);
  auVar68 = NEON_umax(auVar70,auVar72,1);
  auVar63 = NEON_umax(auVar63,auVar65,1);
  NEON_umax(auVar63,auVar68,1);
  auVar63 = NEON_uabd(auVar53,auVar54,1);
  auVar70[1] = uVar46;
  auVar70[0] = uVar45;
  auVar70[2] = uVar47;
  auVar70[3] = uVar48;
  auVar70[4] = uVar49;
  auVar70[5] = uVar50;
  auVar70[6] = uVar51;
  auVar70[7] = uVar52;
  auVar70._8_8_ = uVar73;
  auVar19[1] = uVar56;
  auVar19[0] = uVar55;
  auVar19[2] = uVar57;
  auVar19[3] = uVar58;
  auVar19[4] = uVar59;
  auVar19[5] = uVar60;
  auVar19[6] = uVar61;
  auVar19[7] = uVar62;
  auVar19._8_8_ = uVar64;
  auVar65 = NEON_uabd(auVar70,auVar19,1);
  auVar63 = NEON_uqadd(auVar63,auVar63,1);
  auVar69[0] = auVar65[0] >> 1;
  auVar69[1] = auVar65[1] >> 1;
  auVar69[2] = auVar65[2] >> 1;
  auVar69[3] = auVar65[3] >> 1;
  auVar69[4] = auVar65[4] >> 1;
  auVar69[5] = auVar65[5] >> 1;
  auVar69[6] = auVar65[6] >> 1;
  auVar69[7] = auVar65[7] >> 1;
  auVar69[8] = auVar65[8] >> 1;
  auVar69[9] = auVar65[9] >> 1;
  auVar69[10] = auVar65[10] >> 1;
  auVar69[0xb] = auVar65[0xb] >> 1;
  auVar69[0xc] = auVar65[0xc] >> 1;
  auVar69[0xd] = auVar65[0xd] >> 1;
  auVar69[0xe] = auVar65[0xe] >> 1;
  auVar69[0xf] = auVar65[0xf] >> 1;
  NEON_uqadd(auVar63,auVar69,1);
  NEON_umax(auVar67,auVar72,1);
  func_0x0001082340e4(&uStack_50,&uStack_60,&uStack_70,&uStack_80,&uStack_90,&uStack_a0);
  auVar34._8_8_ = uStack_48;
  auVar34._0_8_ = uStack_50;
  auVar33._8_8_ = uStack_48;
  auVar33._0_8_ = uStack_50;
  auVar32._8_8_ = uStack_58;
  auVar32._0_8_ = uStack_60;
  auVar31._8_8_ = uStack_58;
  auVar31._0_8_ = uStack_60;
  puVar38 = param_1 + -3;
  *puVar38 = (char)uStack_50;
  param_1[-2] = (char)uStack_60;
  puVar42 = puVar38 + uVar43;
  puVar38[iVar35] = (char)((ulong)uStack_50 >> 8);
  (puVar38 + iVar35)[1] = (char)((ulong)uStack_60 >> 8);
  puVar38[(long)iVar35 * 2] = (char)((ulong)uStack_50 >> 0x10);
  (puVar38 + (long)iVar35 * 2)[1] = (char)((ulong)uStack_60 >> 0x10);
  puVar38[lVar1] = (char)((ulong)uStack_50 >> 0x18);
  (puVar38 + lVar1)[1] = (char)((ulong)uStack_60 >> 0x18);
  puVar38[(long)iVar35 * 4] = (char)((ulong)uStack_50 >> 0x20);
  (puVar38 + (long)iVar35 * 4)[1] = (char)((ulong)uStack_60 >> 0x20);
  puVar38[lVar3] = (char)((ulong)uStack_50 >> 0x28);
  (puVar38 + lVar3)[1] = (char)((ulong)uStack_60 >> 0x28);
  auVar63 = NEON_ext(auVar33,auVar34,8,1);
  auVar65 = NEON_ext(auVar31,auVar32,8,1);
  puVar38[lVar1 * 2] = (char)((ulong)uStack_50 >> 0x30);
  (puVar38 + lVar1 * 2)[1] = (char)((ulong)uStack_60 >> 0x30);
  puVar38[lVar44] = (char)((ulong)uStack_50 >> 0x38);
  (puVar38 + lVar44)[1] = (char)((ulong)uStack_60 >> 0x38);
  *puVar42 = auVar63[0];
  puVar42[1] = auVar65[0];
  puVar42[iVar35] = auVar63[1];
  (puVar42 + iVar35)[1] = auVar65[1];
  puVar42[(long)iVar35 * 2] = auVar63[2];
  (puVar42 + (long)iVar35 * 2)[1] = auVar65[2];
  puVar42[lVar1] = auVar63[3];
  (puVar42 + lVar1)[1] = auVar65[3];
  puVar42[(long)iVar35 * 4] = auVar63[4];
  (puVar42 + (long)iVar35 * 4)[1] = auVar65[4];
  puVar42[lVar3] = auVar63[5];
  (puVar42 + lVar3)[1] = auVar65[5];
  puVar42[lVar1 * 2] = auVar63[6];
  (puVar42 + lVar1 * 2)[1] = auVar65[6];
  puVar42[lVar44] = auVar63[7];
  (puVar42 + lVar44)[1] = auVar65[7];
  auVar28._8_8_ = uStack_78;
  auVar28._0_8_ = uStack_80;
  auVar27._8_8_ = uStack_78;
  auVar27._0_8_ = uStack_80;
  auVar30._8_8_ = uStack_68;
  auVar30._0_8_ = uStack_70;
  auVar29._8_8_ = uStack_68;
  auVar29._0_8_ = uStack_70;
  puVar38 = param_1 + -1;
  *puVar38 = (char)uStack_70;
  *param_1 = (char)uStack_80;
  puVar42 = puVar38 + uVar43;
  puVar38[iVar35] = (char)((ulong)uStack_70 >> 8);
  (puVar38 + iVar35)[1] = (char)((ulong)uStack_80 >> 8);
  puVar38[(long)iVar35 * 2] = (char)((ulong)uStack_70 >> 0x10);
  (puVar38 + (long)iVar35 * 2)[1] = (char)((ulong)uStack_80 >> 0x10);
  puVar38[lVar1] = (char)((ulong)uStack_70 >> 0x18);
  (puVar38 + lVar1)[1] = (char)((ulong)uStack_80 >> 0x18);
  puVar38[(long)iVar35 * 4] = (char)((ulong)uStack_70 >> 0x20);
  (puVar38 + (long)iVar35 * 4)[1] = (char)((ulong)uStack_80 >> 0x20);
  puVar38[lVar3] = (char)((ulong)uStack_70 >> 0x28);
  (puVar38 + lVar3)[1] = (char)((ulong)uStack_80 >> 0x28);
  auVar63 = NEON_ext(auVar29,auVar30,8,1);
  auVar65 = NEON_ext(auVar27,auVar28,8,1);
  puVar38[lVar1 * 2] = (char)((ulong)uStack_70 >> 0x30);
  (puVar38 + lVar1 * 2)[1] = (char)((ulong)uStack_80 >> 0x30);
  puVar38[lVar44] = (char)((ulong)uStack_70 >> 0x38);
  (puVar38 + lVar44)[1] = (char)((ulong)uStack_80 >> 0x38);
  *puVar42 = auVar63[0];
  puVar42[1] = auVar65[0];
  puVar42[iVar35] = auVar63[1];
  (puVar42 + iVar35)[1] = auVar65[1];
  puVar42[(long)iVar35 * 2] = auVar63[2];
  (puVar42 + (long)iVar35 * 2)[1] = auVar65[2];
  puVar42[lVar1] = auVar63[3];
  (puVar42 + lVar1)[1] = auVar65[3];
  puVar42[(long)iVar35 * 4] = auVar63[4];
  (puVar42 + (long)iVar35 * 4)[1] = auVar65[4];
  puVar42[lVar3] = auVar63[5];
  (puVar42 + lVar3)[1] = auVar65[5];
  puVar42[lVar1 * 2] = auVar63[6];
  (puVar42 + lVar1 * 2)[1] = auVar65[6];
  puVar42[lVar44] = auVar63[7];
  (puVar42 + lVar44)[1] = auVar65[7];
  auVar24._8_8_ = uStack_98;
  auVar24._0_8_ = uStack_a0;
  auVar23._8_8_ = uStack_98;
  auVar23._0_8_ = uStack_a0;
  auVar26._8_8_ = uStack_88;
  auVar26._0_8_ = uStack_90;
  auVar25._8_8_ = uStack_88;
  auVar25._0_8_ = uStack_90;
  puVar38 = param_1 + 1;
  *puVar38 = (char)uStack_90;
  param_1[2] = (char)uStack_a0;
  puVar42 = puVar38 + uVar43;
  puVar38[iVar35] = (char)((ulong)uStack_90 >> 8);
  (puVar38 + iVar35)[1] = (char)((ulong)uStack_a0 >> 8);
  puVar38[(long)iVar35 * 2] = (char)((ulong)uStack_90 >> 0x10);
  (puVar38 + (long)iVar35 * 2)[1] = (char)((ulong)uStack_a0 >> 0x10);
  puVar38[lVar1] = (char)((ulong)uStack_90 >> 0x18);
  (puVar38 + lVar1)[1] = (char)((ulong)uStack_a0 >> 0x18);
  puVar38[(long)iVar35 * 4] = (char)((ulong)uStack_90 >> 0x20);
  (puVar38 + (long)iVar35 * 4)[1] = (char)((ulong)uStack_a0 >> 0x20);
  puVar38[lVar3] = (char)((ulong)uStack_90 >> 0x28);
  (puVar38 + lVar3)[1] = (char)((ulong)uStack_a0 >> 0x28);
  auVar63 = NEON_ext(auVar25,auVar26,8,1);
  auVar65 = NEON_ext(auVar23,auVar24,8,1);
  puVar38[lVar1 * 2] = (char)((ulong)uStack_90 >> 0x30);
  (puVar38 + lVar1 * 2)[1] = (char)((ulong)uStack_a0 >> 0x30);
  puVar38[lVar44] = (char)((ulong)uStack_90 >> 0x38);
  (puVar38 + lVar44)[1] = (char)((ulong)uStack_a0 >> 0x38);
  *puVar42 = auVar63[0];
  puVar42[1] = auVar65[0];
  puVar42[iVar35] = auVar63[1];
  (puVar42 + iVar35)[1] = auVar65[1];
  puVar42[(long)iVar35 * 2] = auVar63[2];
  (puVar42 + (long)iVar35 * 2)[1] = auVar65[2];
  puVar42[lVar1] = auVar63[3];
  (puVar42 + lVar1)[1] = auVar65[3];
  puVar42[(long)iVar35 * 4] = auVar63[4];
  (puVar42 + (long)iVar35 * 4)[1] = auVar65[4];
  puVar42[lVar3] = auVar63[5];
  (puVar42 + lVar3)[1] = auVar65[5];
  puVar42[lVar1 * 2] = auVar63[6];
  (puVar42 + lVar1 * 2)[1] = auVar65[6];
  puVar42[lVar44] = auVar63[7];
  (puVar42 + lVar44)[1] = auVar65[7];
  return;
}



/* Entry: 108232a98; end: 108232ebf;  */

void FUN_108232a98(undefined1 *param_1,int param_2,byte param_3,byte param_4,byte param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 *puVar33;
  long lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar47 [16];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  undefined1 auVar103 [16];
  byte bVar112;
  undefined1 auVar104 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  
  lVar32 = 0;
  iVar10 = param_2 * 8;
  auVar99[0] = param_1[2];
  auVar114[0] = param_1[3];
  puVar1 = param_1 + param_2;
  auVar98[1] = *puVar1;
  auVar98[0] = *param_1;
  auVar103[1] = puVar1[1];
  auVar103[0] = param_1[1];
  auVar99[1] = puVar1[2];
  auVar114[1] = puVar1[3];
  iVar11 = param_2 << 1;
  puVar2 = param_1 + iVar11;
  auVar98[2] = *puVar2;
  auVar103[2] = puVar2[1];
  auVar99[2] = puVar2[2];
  auVar114[2] = puVar2[3];
  iVar22 = param_2 * 3;
  puVar3 = param_1 + iVar22;
  auVar98[3] = *puVar3;
  auVar103[3] = puVar3[1];
  auVar99[3] = puVar3[2];
  auVar114[3] = puVar3[3];
  iVar12 = param_2 << 2;
  puVar4 = param_1 + iVar12;
  auVar98[4] = *puVar4;
  auVar103[4] = puVar4[1];
  auVar99[4] = puVar4[2];
  auVar114[4] = puVar4[3];
  iVar23 = param_2 * 5;
  puVar5 = param_1 + iVar23;
  auVar98[5] = *puVar5;
  auVar103[5] = puVar5[1];
  auVar99[5] = puVar5[2];
  auVar114[5] = puVar5[3];
  iVar13 = param_2 * 6;
  puVar6 = param_1 + iVar13;
  auVar98[6] = *puVar6;
  auVar103[6] = puVar6[1];
  auVar99[6] = puVar6[2];
  auVar114[6] = puVar6[3];
  iVar24 = param_2 * 7;
  puVar7 = param_1 + iVar24;
  auVar98[7] = *puVar7;
  auVar103[7] = puVar7[1];
  auVar99[7] = puVar7[2];
  auVar114[7] = puVar7[3];
  puVar8 = param_1 + iVar10;
  puVar33 = puVar8 + iVar24;
  puVar9 = puVar8 + param_2;
  auVar98[9] = *puVar9;
  auVar98[8] = *puVar8;
  auVar103[9] = puVar9[1];
  auVar103[8] = puVar8[1];
  auVar99[9] = puVar9[2];
  auVar99[8] = puVar8[2];
  auVar114[9] = puVar9[3];
  auVar114[8] = puVar8[3];
  puVar9 = puVar8 + iVar11;
  auVar98[10] = *puVar9;
  auVar103[10] = puVar9[1];
  auVar99[10] = puVar9[2];
  auVar114[10] = puVar9[3];
  puVar9 = puVar8 + iVar22;
  auVar98[0xb] = *puVar9;
  auVar103[0xb] = puVar9[1];
  auVar99[0xb] = puVar9[2];
  auVar114[0xb] = puVar9[3];
  puVar9 = puVar8 + iVar12;
  auVar98[0xc] = *puVar9;
  auVar103[0xc] = puVar9[1];
  auVar99[0xc] = puVar9[2];
  auVar114[0xc] = puVar9[3];
  puVar9 = puVar8 + iVar23;
  auVar98[0xd] = *puVar9;
  auVar103[0xd] = puVar9[1];
  auVar99[0xd] = puVar9[2];
  auVar114[0xd] = puVar9[3];
  puVar9 = puVar8 + iVar13;
  auVar98[0xe] = *puVar9;
  auVar103[0xe] = puVar9[1];
  auVar99[0xe] = puVar9[2];
  auVar114[0xe] = puVar9[3];
  auVar98[0xf] = *puVar33;
  auVar103[0xf] = puVar33[1];
  auVar99[0xf] = puVar33[2];
  auVar114[0xf] = puVar33[3];
  lVar34 = (long)iVar10;
  do {
    uVar66 = param_1[lVar32 + 4];
    uVar74 = param_1[lVar32 + 5];
    uVar82 = param_1[lVar32 + 6];
    uVar90 = param_1[lVar32 + 7];
    uVar67 = puVar1[lVar32 + 4];
    uVar75 = puVar1[lVar32 + 5];
    uVar83 = puVar1[lVar32 + 6];
    uVar91 = puVar1[lVar32 + 7];
    uVar68 = puVar2[lVar32 + 4];
    uVar76 = puVar2[lVar32 + 5];
    uVar84 = puVar2[lVar32 + 6];
    uVar92 = puVar2[lVar32 + 7];
    uVar69 = puVar3[lVar32 + 4];
    uVar77 = puVar3[lVar32 + 5];
    uVar85 = puVar3[lVar32 + 6];
    uVar93 = puVar3[lVar32 + 7];
    uVar70 = puVar4[lVar32 + 4];
    uVar78 = puVar4[lVar32 + 5];
    uVar86 = puVar4[lVar32 + 6];
    uVar94 = puVar4[lVar32 + 7];
    uVar71 = puVar5[lVar32 + 4];
    uVar79 = puVar5[lVar32 + 5];
    uVar87 = puVar5[lVar32 + 6];
    uVar95 = puVar5[lVar32 + 7];
    uVar72 = puVar6[lVar32 + 4];
    uVar80 = puVar6[lVar32 + 5];
    uVar88 = puVar6[lVar32 + 6];
    uVar96 = puVar6[lVar32 + 7];
    uVar73 = puVar7[lVar32 + 4];
    uVar81 = puVar7[lVar32 + 5];
    uVar89 = puVar7[lVar32 + 6];
    uVar97 = puVar7[lVar32 + 7];
    lVar25 = lVar32 + (long)param_2 + (long)iVar10;
    bVar48 = puVar8[lVar32 + 4];
    bVar56 = puVar8[lVar32 + 5];
    bVar49 = param_1[lVar25 + 4];
    bVar57 = param_1[lVar25 + 5];
    lVar31 = lVar32 + lVar34 + iVar11;
    lVar30 = lVar32 + lVar34 + iVar22;
    bVar50 = param_1[lVar31 + 4];
    bVar58 = param_1[lVar31 + 5];
    bVar51 = param_1[lVar30 + 4];
    bVar59 = param_1[lVar30 + 5];
    lVar29 = lVar32 + lVar34 + iVar12;
    lVar28 = lVar32 + lVar34 + iVar23;
    bVar52 = param_1[lVar29 + 4];
    bVar60 = param_1[lVar29 + 5];
    bVar53 = param_1[lVar28 + 4];
    bVar61 = param_1[lVar28 + 5];
    lVar27 = lVar32 + lVar34 + iVar13;
    lVar26 = lVar32 + lVar34 + iVar24;
    bVar54 = param_1[lVar27 + 4];
    bVar62 = param_1[lVar27 + 5];
    bVar55 = param_1[lVar26 + 4];
    bVar63 = param_1[lVar26 + 5];
    uVar64 = CONCAT17(param_1[lVar26 + 6],
                      CONCAT16(param_1[lVar27 + 6],
                               CONCAT15(param_1[lVar28 + 6],
                                        CONCAT14(param_1[lVar29 + 6],
                                                 CONCAT13(param_1[lVar30 + 6],
                                                          CONCAT12(param_1[lVar31 + 6],
                                                                   CONCAT11(param_1[lVar25 + 6],
                                                                            puVar8[lVar32 + 6]))))))
                     );
    uVar65 = CONCAT17(param_1[lVar26 + 7],
                      CONCAT16(param_1[lVar27 + 7],
                               CONCAT15(param_1[lVar28 + 7],
                                        CONCAT14(param_1[lVar29 + 7],
                                                 CONCAT13(param_1[lVar30 + 7],
                                                          CONCAT12(param_1[lVar31 + 7],
                                                                   CONCAT11(param_1[lVar25 + 7],
                                                                            puVar8[lVar32 + 7]))))))
                     );
    auVar118 = NEON_uabd(auVar98,auVar103,1);
    auVar98 = NEON_uabd(auVar103,auVar99,1);
    auVar103 = NEON_uabd(auVar99,auVar114,1);
    auVar19[1] = uVar83;
    auVar19[0] = uVar82;
    auVar19[2] = uVar84;
    auVar19[3] = uVar85;
    auVar19[4] = uVar86;
    auVar19[5] = uVar87;
    auVar19[6] = uVar88;
    auVar19[7] = uVar89;
    auVar19._8_8_ = uVar64;
    auVar21[1] = uVar91;
    auVar21[0] = uVar90;
    auVar21[2] = uVar92;
    auVar21[3] = uVar93;
    auVar21[4] = uVar94;
    auVar21[5] = uVar95;
    auVar21[6] = uVar96;
    auVar21[7] = uVar97;
    auVar21._8_8_ = uVar65;
    auVar113 = NEON_uabd(auVar21,auVar19,1);
    auVar16[1] = uVar75;
    auVar16[0] = uVar74;
    auVar16[2] = uVar76;
    auVar16[3] = uVar77;
    auVar16[4] = uVar78;
    auVar16[5] = uVar79;
    auVar16[6] = uVar80;
    auVar16[7] = uVar81;
    auVar16[8] = bVar56;
    auVar16[9] = bVar57;
    auVar16[10] = bVar58;
    auVar16[0xb] = bVar59;
    auVar16[0xc] = bVar60;
    auVar16[0xd] = bVar61;
    auVar16[0xe] = bVar62;
    auVar16[0xf] = bVar63;
    auVar20[1] = uVar83;
    auVar20[0] = uVar82;
    auVar20[2] = uVar84;
    auVar20[3] = uVar85;
    auVar20[4] = uVar86;
    auVar20[5] = uVar87;
    auVar20[6] = uVar88;
    auVar20[7] = uVar89;
    auVar20._8_8_ = uVar64;
    auVar116 = NEON_uabd(auVar20,auVar16,1);
    auVar14[1] = uVar67;
    auVar14[0] = uVar66;
    auVar14[2] = uVar68;
    auVar14[3] = uVar69;
    auVar14[4] = uVar70;
    auVar14[5] = uVar71;
    auVar14[6] = uVar72;
    auVar14[7] = uVar73;
    auVar14[8] = bVar48;
    auVar14[9] = bVar49;
    auVar14[10] = bVar50;
    auVar14[0xb] = bVar51;
    auVar14[0xc] = bVar52;
    auVar14[0xd] = bVar53;
    auVar14[0xe] = bVar54;
    auVar14[0xf] = bVar55;
    auVar17[1] = uVar75;
    auVar17[0] = uVar74;
    auVar17[2] = uVar76;
    auVar17[3] = uVar77;
    auVar17[4] = uVar78;
    auVar17[5] = uVar79;
    auVar17[6] = uVar80;
    auVar17[7] = uVar81;
    auVar17[8] = bVar56;
    auVar17[9] = bVar57;
    auVar17[10] = bVar58;
    auVar17[0xb] = bVar59;
    auVar17[0xc] = bVar60;
    auVar17[0xd] = bVar61;
    auVar17[0xe] = bVar62;
    auVar17[0xf] = bVar63;
    auVar120 = NEON_uabd(auVar17,auVar14,1);
    auVar98 = NEON_umax(auVar118,auVar98,1);
    auVar113 = NEON_umax(auVar103,auVar113,1);
    auVar116 = NEON_umax(auVar116,auVar120,1);
    auVar98 = NEON_umax(auVar98,auVar113,1);
    auVar15[1] = uVar67;
    auVar15[0] = uVar66;
    auVar15[2] = uVar68;
    auVar15[3] = uVar69;
    auVar15[4] = uVar70;
    auVar15[5] = uVar71;
    auVar15[6] = uVar72;
    auVar15[7] = uVar73;
    auVar15[8] = bVar48;
    auVar15[9] = bVar49;
    auVar15[10] = bVar50;
    auVar15[0xb] = bVar51;
    auVar15[0xc] = bVar52;
    auVar15[0xd] = bVar53;
    auVar15[0xe] = bVar54;
    auVar15[0xf] = bVar55;
    auVar113 = NEON_uabd(auVar114,auVar15,1);
    auVar98 = NEON_umax(auVar98,auVar116,1);
    auVar18[1] = uVar75;
    auVar18[0] = uVar74;
    auVar18[2] = uVar76;
    auVar18[3] = uVar77;
    auVar18[4] = uVar78;
    auVar18[5] = uVar79;
    auVar18[6] = uVar80;
    auVar18[7] = uVar81;
    auVar18[8] = bVar56;
    auVar18[9] = bVar57;
    auVar18[10] = bVar58;
    auVar18[0xb] = bVar59;
    auVar18[0xc] = bVar60;
    auVar18[0xd] = bVar61;
    auVar18[0xe] = bVar62;
    auVar18[0xf] = bVar63;
    auVar116 = NEON_uabd(auVar99,auVar18,1);
    auVar113 = NEON_uqadd(auVar113,auVar113,1);
    auVar117[0] = auVar116[0] >> 1;
    auVar117[1] = auVar116[1] >> 1;
    auVar117[2] = auVar116[2] >> 1;
    auVar117[3] = auVar116[3] >> 1;
    auVar117[4] = auVar116[4] >> 1;
    auVar117[5] = auVar116[5] >> 1;
    auVar117[6] = auVar116[6] >> 1;
    auVar117[7] = auVar116[7] >> 1;
    auVar117[8] = auVar116[8] >> 1;
    auVar117[9] = auVar116[9] >> 1;
    auVar117[10] = auVar116[10] >> 1;
    auVar117[0xb] = auVar116[0xb] >> 1;
    auVar117[0xc] = auVar116[0xc] >> 1;
    auVar117[0xd] = auVar116[0xd] >> 1;
    auVar117[0xe] = auVar116[0xe] >> 1;
    auVar117[0xf] = auVar116[0xf] >> 1;
    auVar113 = NEON_uqadd(auVar113,auVar117,1);
    auVar103 = NEON_umax(auVar103,auVar120,1);
    auVar119._0_8_ = auVar99._0_8_ ^ 0x8080808080808080;
    auVar119[8] = auVar99[8] ^ 0x80;
    auVar119[9] = auVar99[9] ^ 0x80;
    auVar119[10] = auVar99[10] ^ 0x80;
    auVar119[0xb] = auVar99[0xb] ^ 0x80;
    auVar119[0xc] = auVar99[0xc] ^ 0x80;
    auVar119[0xd] = auVar99[0xd] ^ 0x80;
    auVar119[0xe] = auVar99[0xe] ^ 0x80;
    auVar119[0xf] = auVar99[0xf] ^ 0x80;
    auVar35._0_8_ = auVar114._0_8_ ^ 0x8080808080808080;
    auVar35[8] = auVar114[8] ^ 0x80;
    auVar35[9] = auVar114[9] ^ 0x80;
    auVar35[10] = auVar114[10] ^ 0x80;
    auVar35[0xb] = auVar114[0xb] ^ 0x80;
    auVar35[0xc] = auVar114[0xc] ^ 0x80;
    auVar35[0xd] = auVar114[0xd] ^ 0x80;
    auVar35[0xe] = auVar114[0xe] ^ 0x80;
    auVar35[0xf] = auVar114[0xf] ^ 0x80;
    auVar36._0_8_ =
         CONCAT17(uVar73,CONCAT16(uVar72,CONCAT15(uVar71,CONCAT14(uVar70,CONCAT13(uVar69,CONCAT12(
                                                  uVar68,CONCAT11(uVar67,uVar66))))))) ^
         0x8080808080808080;
    auVar36[8] = bVar48 ^ 0x80;
    auVar36[9] = bVar49 ^ 0x80;
    auVar36[10] = bVar50 ^ 0x80;
    auVar36[0xb] = bVar51 ^ 0x80;
    auVar36[0xc] = bVar52 ^ 0x80;
    auVar36[0xd] = bVar53 ^ 0x80;
    auVar36[0xe] = bVar54 ^ 0x80;
    auVar36[0xf] = bVar55 ^ 0x80;
    bVar48 = -(auVar98[0] <= param_4) & -(auVar113[0] <= param_3);
    bVar49 = -(auVar98[1] <= param_4) & -(auVar113[1] <= param_3);
    bVar50 = -(auVar98[2] <= param_4) & -(auVar113[2] <= param_3);
    bVar51 = -(auVar98[3] <= param_4) & -(auVar113[3] <= param_3);
    bVar52 = -(auVar98[4] <= param_4) & -(auVar113[4] <= param_3);
    bVar53 = -(auVar98[5] <= param_4) & -(auVar113[5] <= param_3);
    bVar54 = -(auVar98[6] <= param_4) & -(auVar113[6] <= param_3);
    bVar55 = -(auVar98[7] <= param_4) & -(auVar113[7] <= param_3);
    bVar39 = -(auVar98[8] <= param_4) & -(auVar113[8] <= param_3);
    bVar40 = -(auVar98[9] <= param_4) & -(auVar113[9] <= param_3);
    bVar41 = -(auVar98[10] <= param_4) & -(auVar113[10] <= param_3);
    bVar42 = -(auVar98[0xb] <= param_4) & -(auVar113[0xb] <= param_3);
    bVar43 = -(auVar98[0xc] <= param_4) & -(auVar113[0xc] <= param_3);
    bVar44 = -(auVar98[0xd] <= param_4) & -(auVar113[0xd] <= param_3);
    bVar45 = -(auVar98[0xe] <= param_4) & -(auVar113[0xe] <= param_3);
    bVar46 = -(auVar98[0xf] <= param_4) & -(auVar113[0xf] <= param_3);
    auVar47._0_8_ =
         CONCAT17(uVar81,CONCAT16(uVar80,CONCAT15(uVar79,CONCAT14(uVar78,CONCAT13(uVar77,CONCAT12(
                                                  uVar76,CONCAT11(uVar75,uVar74))))))) ^
         0x8080808080808080;
    auVar47[8] = bVar56 ^ 0x80;
    auVar47[9] = bVar57 ^ 0x80;
    auVar47[10] = bVar58 ^ 0x80;
    auVar47[0xb] = bVar59 ^ 0x80;
    auVar47[0xc] = bVar60 ^ 0x80;
    auVar47[0xd] = bVar61 ^ 0x80;
    auVar47[0xe] = bVar62 ^ 0x80;
    auVar47[0xf] = bVar63 ^ 0x80;
    auVar99 = NEON_sqsub(auVar36,auVar35,1);
    auVar114 = NEON_sqsub(auVar119,auVar47,1);
    auVar114 = NEON_sqadd(auVar114,auVar99,1);
    auVar114 = NEON_sqadd(auVar99,auVar114,1);
    bVar56 = -(param_5 < auVar103[0]) & bVar48;
    bVar57 = -(param_5 < auVar103[1]) & bVar49;
    bVar58 = -(param_5 < auVar103[2]) & bVar50;
    bVar59 = -(param_5 < auVar103[3]) & bVar51;
    bVar60 = -(param_5 < auVar103[4]) & bVar52;
    bVar61 = -(param_5 < auVar103[5]) & bVar53;
    bVar62 = -(param_5 < auVar103[6]) & bVar54;
    bVar63 = -(param_5 < auVar103[7]) & bVar55;
    bVar105 = -(param_5 < auVar103[8]) & bVar39;
    bVar106 = -(param_5 < auVar103[9]) & bVar40;
    bVar107 = -(param_5 < auVar103[10]) & bVar41;
    bVar108 = -(param_5 < auVar103[0xb]) & bVar42;
    bVar109 = -(param_5 < auVar103[0xc]) & bVar43;
    bVar110 = -(param_5 < auVar103[0xd]) & bVar44;
    bVar111 = -(param_5 < auVar103[0xe]) & bVar45;
    bVar112 = -(param_5 < auVar103[0xf]) & bVar46;
    auVar99 = NEON_sqadd(auVar99,auVar114,1);
    auVar100[0] = bVar56 & auVar99[0];
    auVar100[1] = bVar57 & auVar99[1];
    auVar100[2] = bVar58 & auVar99[2];
    auVar100[3] = bVar59 & auVar99[3];
    auVar100[4] = bVar60 & auVar99[4];
    auVar100[5] = bVar61 & auVar99[5];
    auVar100[6] = bVar62 & auVar99[6];
    auVar100[7] = bVar63 & auVar99[7];
    auVar100[8] = bVar105 & auVar99[8];
    auVar100[9] = bVar106 & auVar99[9];
    auVar100[10] = bVar107 & auVar99[10];
    auVar100[0xb] = bVar108 & auVar99[0xb];
    auVar100[0xc] = bVar109 & auVar99[0xc];
    auVar100[0xd] = bVar110 & auVar99[0xd];
    auVar100[0xe] = bVar111 & auVar99[0xe];
    auVar100[0xf] = bVar112 & auVar99[0xf];
    auVar113[8] = 3;
    auVar113._0_8_ = 0x303030303030303;
    auVar113[9] = 3;
    auVar113[10] = 3;
    auVar113[0xb] = 3;
    auVar113[0xc] = 3;
    auVar113[0xd] = 3;
    auVar113[0xe] = 3;
    auVar113[0xf] = 3;
    auVar114 = NEON_sqadd(auVar100,auVar113,1);
    auVar118[8] = 4;
    auVar118._0_8_ = 0x404040404040404;
    auVar118[9] = 4;
    auVar118[10] = 4;
    auVar118[0xb] = 4;
    auVar118[0xc] = 4;
    auVar118[0xd] = 4;
    auVar118[0xe] = 4;
    auVar118[0xf] = 4;
    auVar99 = NEON_sqadd(auVar100,auVar118,1);
    auVar115[0] = auVar114[0] >> 3;
    auVar115[1] = auVar114[1] >> 3;
    auVar115[2] = auVar114[2] >> 3;
    auVar115[3] = auVar114[3] >> 3;
    auVar115[4] = auVar114[4] >> 3;
    auVar115[5] = auVar114[5] >> 3;
    auVar115[6] = auVar114[6] >> 3;
    auVar115[7] = auVar114[7] >> 3;
    auVar115[8] = auVar114[8] >> 3;
    auVar115[9] = auVar114[9] >> 3;
    auVar115[10] = auVar114[10] >> 3;
    auVar115[0xb] = auVar114[0xb] >> 3;
    auVar115[0xc] = auVar114[0xc] >> 3;
    auVar115[0xd] = auVar114[0xd] >> 3;
    auVar115[0xe] = auVar114[0xe] >> 3;
    auVar115[0xf] = auVar114[0xf] >> 3;
    auVar101[0] = auVar99[0] >> 3;
    auVar101[1] = auVar99[1] >> 3;
    auVar101[2] = auVar99[2] >> 3;
    auVar101[3] = auVar99[3] >> 3;
    auVar101[4] = auVar99[4] >> 3;
    auVar101[5] = auVar99[5] >> 3;
    auVar101[6] = auVar99[6] >> 3;
    auVar101[7] = auVar99[7] >> 3;
    auVar101[8] = auVar99[8] >> 3;
    auVar101[9] = auVar99[9] >> 3;
    auVar101[10] = auVar99[10] >> 3;
    auVar101[0xb] = auVar99[0xb] >> 3;
    auVar101[0xc] = auVar99[0xc] >> 3;
    auVar101[0xd] = auVar99[0xd] >> 3;
    auVar101[0xe] = auVar99[0xe] >> 3;
    auVar101[0xf] = auVar99[0xf] >> 3;
    auVar99 = NEON_sqadd(auVar35,auVar115,1);
    auVar114 = NEON_sqsub(auVar36,auVar101,1);
    auVar98 = NEON_sqsub(auVar114,auVar99,1);
    auVar103 = NEON_sqadd(auVar98,auVar98,1);
    auVar98 = NEON_sqadd(auVar98,auVar103,1);
    auVar37[0] = (bVar48 ^ bVar56) & auVar98[0];
    auVar37[1] = (bVar49 ^ bVar57) & auVar98[1];
    auVar37[2] = (bVar50 ^ bVar58) & auVar98[2];
    auVar37[3] = (bVar51 ^ bVar59) & auVar98[3];
    auVar37[4] = (bVar52 ^ bVar60) & auVar98[4];
    auVar37[5] = (bVar53 ^ bVar61) & auVar98[5];
    auVar37[6] = (bVar54 ^ bVar62) & auVar98[6];
    auVar37[7] = (bVar55 ^ bVar63) & auVar98[7];
    auVar37[8] = (bVar39 ^ bVar105) & auVar98[8];
    auVar37[9] = (bVar40 ^ bVar106) & auVar98[9];
    auVar37[10] = (bVar41 ^ bVar107) & auVar98[10];
    auVar37[0xb] = (bVar42 ^ bVar108) & auVar98[0xb];
    auVar37[0xc] = (bVar43 ^ bVar109) & auVar98[0xc];
    auVar37[0xd] = (bVar44 ^ bVar110) & auVar98[0xd];
    auVar37[0xe] = (bVar45 ^ bVar111) & auVar98[0xe];
    auVar37[0xf] = (bVar46 ^ bVar112) & auVar98[0xf];
    auVar120[8] = 4;
    auVar120._0_8_ = 0x404040404040404;
    auVar120[9] = 4;
    auVar120[10] = 4;
    auVar120[0xb] = 4;
    auVar120[0xc] = 4;
    auVar120[0xd] = 4;
    auVar120[0xe] = 4;
    auVar120[0xf] = 4;
    auVar103 = NEON_sqadd(auVar37,auVar120,1);
    auVar116[8] = 3;
    auVar116._0_8_ = 0x303030303030303;
    auVar116[9] = 3;
    auVar116[10] = 3;
    auVar116[0xb] = 3;
    auVar116[0xc] = 3;
    auVar116[0xd] = 3;
    auVar116[0xe] = 3;
    auVar116[0xf] = 3;
    auVar98 = NEON_sqadd(auVar37,auVar116,1);
    auVar121[0] = auVar103[0] >> 3;
    auVar121[1] = auVar103[1] >> 3;
    auVar121[2] = auVar103[2] >> 3;
    auVar121[3] = auVar103[3] >> 3;
    auVar121[4] = auVar103[4] >> 3;
    auVar121[5] = auVar103[5] >> 3;
    auVar121[6] = auVar103[6] >> 3;
    auVar121[7] = auVar103[7] >> 3;
    auVar121[8] = auVar103[8] >> 3;
    auVar121[9] = auVar103[9] >> 3;
    auVar121[10] = auVar103[10] >> 3;
    auVar121[0xb] = auVar103[0xb] >> 3;
    auVar121[0xc] = auVar103[0xc] >> 3;
    auVar121[0xd] = auVar103[0xd] >> 3;
    auVar121[0xe] = auVar103[0xe] >> 3;
    auVar121[0xf] = auVar103[0xf] >> 3;
    auVar38[0] = auVar98[0] >> 3;
    auVar38[1] = auVar98[1] >> 3;
    auVar38[2] = auVar98[2] >> 3;
    auVar38[3] = auVar98[3] >> 3;
    auVar38[4] = auVar98[4] >> 3;
    auVar38[5] = auVar98[5] >> 3;
    auVar38[6] = auVar98[6] >> 3;
    auVar38[7] = auVar98[7] >> 3;
    auVar38[8] = auVar98[8] >> 3;
    auVar38[9] = auVar98[9] >> 3;
    auVar38[10] = auVar98[10] >> 3;
    auVar38[0xb] = auVar98[0xb] >> 3;
    auVar38[0xc] = auVar98[0xc] >> 3;
    auVar38[0xd] = auVar98[0xd] >> 3;
    auVar38[0xe] = auVar98[0xe] >> 3;
    auVar38[0xf] = auVar98[0xf] >> 3;
    auVar103 = NEON_srshr(auVar121,1,1);
    auVar99 = NEON_sqadd(auVar99,auVar38,1);
    auVar104._0_8_ = auVar99._0_8_ ^ 0x8080808080808080;
    auVar104[8] = auVar99[8] ^ 0x80;
    auVar104[9] = auVar99[9] ^ 0x80;
    auVar104[10] = auVar99[10] ^ 0x80;
    auVar104[0xb] = auVar99[0xb] ^ 0x80;
    auVar104[0xc] = auVar99[0xc] ^ 0x80;
    auVar104[0xd] = auVar99[0xd] ^ 0x80;
    auVar104[0xe] = auVar99[0xe] ^ 0x80;
    auVar104[0xf] = auVar99[0xf] ^ 0x80;
    auVar99 = NEON_sqsub(auVar114,auVar121,1);
    auVar98._0_8_ = auVar99._0_8_ ^ 0x8080808080808080;
    auVar98[8] = auVar99[8] ^ 0x80;
    auVar98[9] = auVar99[9] ^ 0x80;
    auVar98[10] = auVar99[10] ^ 0x80;
    auVar98[0xb] = auVar99[0xb] ^ 0x80;
    auVar98[0xc] = auVar99[0xc] ^ 0x80;
    auVar98[0xd] = auVar99[0xd] ^ 0x80;
    auVar98[0xe] = auVar99[0xe] ^ 0x80;
    auVar98[0xf] = auVar99[0xf] ^ 0x80;
    auVar99 = NEON_sqadd(auVar119,auVar103,1);
    auVar102._0_8_ = auVar99._0_8_ ^ 0x8080808080808080;
    auVar102[8] = auVar99[8] ^ 0x80;
    auVar102[9] = auVar99[9] ^ 0x80;
    auVar102[10] = auVar99[10] ^ 0x80;
    auVar102[0xb] = auVar99[0xb] ^ 0x80;
    auVar102[0xc] = auVar99[0xc] ^ 0x80;
    auVar102[0xd] = auVar99[0xd] ^ 0x80;
    auVar102[0xe] = auVar99[0xe] ^ 0x80;
    auVar102[0xf] = auVar99[0xf] ^ 0x80;
    auVar99 = NEON_sqsub(auVar47,auVar103,1);
    auVar103._0_8_ = auVar99._0_8_ ^ 0x8080808080808080;
    auVar103[8] = auVar99[8] ^ 0x80;
    auVar103[9] = auVar99[9] ^ 0x80;
    auVar103[10] = auVar99[10] ^ 0x80;
    auVar103[0xb] = auVar99[0xb] ^ 0x80;
    auVar103[0xc] = auVar99[0xc] ^ 0x80;
    auVar103[0xd] = auVar99[0xd] ^ 0x80;
    auVar103[0xe] = auVar99[0xe] ^ 0x80;
    auVar103[0xf] = auVar99[0xf] ^ 0x80;
    param_1[lVar32 + 2] = (char)auVar102._0_8_;
    param_1[lVar32 + 3] = (char)auVar104._0_8_;
    param_1[lVar32 + 4] = (char)auVar98._0_8_;
    param_1[lVar32 + 5] = (char)auVar103._0_8_;
    puVar1[lVar32 + 2] = (char)(auVar102._0_8_ >> 8);
    puVar1[lVar32 + 3] = (char)(auVar104._0_8_ >> 8);
    puVar1[lVar32 + 4] = (char)(auVar98._0_8_ >> 8);
    puVar1[lVar32 + 5] = (char)(auVar103._0_8_ >> 8);
    puVar2[lVar32 + 2] = (char)(auVar102._0_8_ >> 0x10);
    puVar2[lVar32 + 3] = (char)(auVar104._0_8_ >> 0x10);
    puVar2[lVar32 + 4] = (char)(auVar98._0_8_ >> 0x10);
    puVar2[lVar32 + 5] = (char)(auVar103._0_8_ >> 0x10);
    puVar3[lVar32 + 2] = (char)(auVar102._0_8_ >> 0x18);
    puVar3[lVar32 + 3] = (char)(auVar104._0_8_ >> 0x18);
    puVar3[lVar32 + 4] = (char)(auVar98._0_8_ >> 0x18);
    puVar3[lVar32 + 5] = (char)(auVar103._0_8_ >> 0x18);
    puVar4[lVar32 + 2] = (char)(auVar102._0_8_ >> 0x20);
    puVar4[lVar32 + 3] = (char)(auVar104._0_8_ >> 0x20);
    puVar4[lVar32 + 4] = (char)(auVar98._0_8_ >> 0x20);
    puVar4[lVar32 + 5] = (char)(auVar103._0_8_ >> 0x20);
    puVar5[lVar32 + 2] = (char)(auVar102._0_8_ >> 0x28);
    puVar5[lVar32 + 3] = (char)(auVar104._0_8_ >> 0x28);
    puVar5[lVar32 + 4] = (char)(auVar98._0_8_ >> 0x28);
    puVar5[lVar32 + 5] = (char)(auVar103._0_8_ >> 0x28);
    puVar6[lVar32 + 2] = (char)(auVar102._0_8_ >> 0x30);
    puVar6[lVar32 + 3] = (char)(auVar104._0_8_ >> 0x30);
    puVar6[lVar32 + 4] = (char)(auVar98._0_8_ >> 0x30);
    puVar6[lVar32 + 5] = (char)(auVar103._0_8_ >> 0x30);
    puVar7[lVar32 + 2] = (char)(auVar102._0_8_ >> 0x38);
    puVar7[lVar32 + 3] = (char)(auVar104._0_8_ >> 0x38);
    puVar7[lVar32 + 4] = (char)(auVar98._0_8_ >> 0x38);
    puVar7[lVar32 + 5] = (char)(auVar103._0_8_ >> 0x38);
    auVar99 = NEON_ext(auVar102,auVar102,8,1);
    auVar114 = NEON_ext(auVar104,auVar104,8,1);
    auVar113 = NEON_ext(auVar98,auVar98,8,1);
    auVar116 = NEON_ext(auVar103,auVar103,8,1);
    puVar8[lVar32 + 2] = auVar99[0];
    puVar8[lVar32 + 3] = auVar114[0];
    puVar8[lVar32 + 4] = auVar113[0];
    puVar8[lVar32 + 5] = auVar116[0];
    param_1[lVar25 + 2] = auVar99[1];
    param_1[lVar25 + 3] = auVar114[1];
    param_1[lVar25 + 4] = auVar113[1];
    param_1[lVar25 + 5] = auVar116[1];
    param_1[lVar31 + 2] = auVar99[2];
    param_1[lVar31 + 3] = auVar114[2];
    param_1[lVar31 + 4] = auVar113[2];
    param_1[lVar31 + 5] = auVar116[2];
    param_1[lVar30 + 2] = auVar99[3];
    param_1[lVar30 + 3] = auVar114[3];
    param_1[lVar30 + 4] = auVar113[3];
    param_1[lVar30 + 5] = auVar116[3];
    param_1[lVar29 + 2] = auVar99[4];
    param_1[lVar29 + 3] = auVar114[4];
    param_1[lVar29 + 4] = auVar113[4];
    param_1[lVar29 + 5] = auVar116[4];
    param_1[lVar28 + 2] = auVar99[5];
    param_1[lVar28 + 3] = auVar114[5];
    param_1[lVar28 + 4] = auVar113[5];
    param_1[lVar28 + 5] = auVar116[5];
    param_1[lVar27 + 2] = auVar99[6];
    param_1[lVar27 + 3] = auVar114[6];
    param_1[lVar27 + 4] = auVar113[6];
    param_1[lVar27 + 5] = auVar116[6];
    param_1[lVar26 + 2] = auVar99[7];
    param_1[lVar26 + 3] = auVar114[7];
    param_1[lVar26 + 4] = auVar113[7];
    param_1[lVar26 + 5] = auVar116[7];
    lVar32 = lVar32 + 4;
    auVar99[1] = uVar83;
    auVar99[0] = uVar82;
    auVar99[2] = uVar84;
    auVar99[3] = uVar85;
    auVar99[4] = uVar86;
    auVar99[5] = uVar87;
    auVar99[6] = uVar88;
    auVar99[7] = uVar89;
    auVar99._8_8_ = uVar64;
    auVar114[1] = uVar91;
    auVar114[0] = uVar90;
    auVar114[2] = uVar92;
    auVar114[3] = uVar93;
    auVar114[4] = uVar94;
    auVar114[5] = uVar95;
    auVar114[6] = uVar96;
    auVar114[7] = uVar97;
    auVar114._8_8_ = uVar65;
  } while ((int)lVar32 != 0xc);
  return;
}



/* Entry: 108232ec0; end: 10823307f;  */

void FUN_108232ec0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  iVar16 = (int)param_3;
  auVar26._0_8_ = *(undefined8 *)((long)param_1 - (long)(iVar16 << 2));
  auVar26._8_8_ = *(undefined8 *)((long)param_2 - (long)(iVar16 << 2));
  lVar1 = (-(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1) + (long)iVar16
  ;
  auVar19._0_8_ = *(undefined8 *)((long)param_1 - lVar1);
  auVar19._8_8_ = *(undefined8 *)((long)param_2 - lVar1);
  puVar18 = (undefined8 *)((long)param_1 + (long)iVar16 * -2);
  uVar20 = *puVar18;
  puVar17 = (undefined8 *)((long)param_2 + (long)iVar16 * -2);
  uVar21 = *puVar17;
  uVar22 = *(undefined8 *)((long)param_1 - (long)iVar16);
  uVar23 = *(undefined8 *)((long)param_2 - (long)iVar16);
  uVar24 = *(undefined8 *)((long)param_1 + (long)iVar16);
  uVar25 = *(undefined8 *)((long)param_2 + (long)iVar16);
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar16 * 2);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar16 * 2);
  auVar28._0_8_ = *(undefined8 *)((long)param_1 + lVar1);
  auVar28._8_8_ = *(undefined8 *)((long)param_2 + lVar1);
  auVar27 = NEON_uabd(auVar26,auVar19,1);
  auVar30._8_8_ = uVar21;
  auVar30._0_8_ = uVar20;
  auVar30 = NEON_uabd(auVar19,auVar30,1);
  auVar29._8_8_ = uVar21;
  auVar29._0_8_ = uVar20;
  auVar32._8_8_ = uVar23;
  auVar32._0_8_ = uVar22;
  auVar32 = NEON_uabd(auVar29,auVar32,1);
  auVar8._8_8_ = *puVar3;
  auVar8._0_8_ = *puVar2;
  auVar29 = NEON_uabd(auVar28,auVar8,1);
  auVar5._8_8_ = uVar25;
  auVar5._0_8_ = uVar24;
  auVar9._8_8_ = *puVar3;
  auVar9._0_8_ = *puVar2;
  auVar33 = NEON_uabd(auVar9,auVar5,1);
  auVar34._8_8_ = *param_2;
  auVar34._0_8_ = *param_1;
  auVar6._8_8_ = uVar25;
  auVar6._0_8_ = uVar24;
  auVar34 = NEON_uabd(auVar6,auVar34,1);
  auVar30 = NEON_umax(auVar27,auVar30,1);
  auVar29 = NEON_umax(auVar32,auVar29,1);
  auVar27 = NEON_umax(auVar33,auVar34,1);
  auVar30 = NEON_umax(auVar30,auVar29,1);
  NEON_umax(auVar30,auVar27,1);
  auVar33._8_8_ = uVar23;
  auVar33._0_8_ = uVar22;
  auVar4._8_8_ = *param_2;
  auVar4._0_8_ = *param_1;
  auVar30 = NEON_uabd(auVar33,auVar4,1);
  auVar27._8_8_ = uVar21;
  auVar27._0_8_ = uVar20;
  auVar7._8_8_ = uVar25;
  auVar7._0_8_ = uVar24;
  auVar29 = NEON_uabd(auVar27,auVar7,1);
  auVar30 = NEON_uqadd(auVar30,auVar30,1);
  auVar31[0] = auVar29[0] >> 1;
  auVar31[1] = auVar29[1] >> 1;
  auVar31[2] = auVar29[2] >> 1;
  auVar31[3] = auVar29[3] >> 1;
  auVar31[4] = auVar29[4] >> 1;
  auVar31[5] = auVar29[5] >> 1;
  auVar31[6] = auVar29[6] >> 1;
  auVar31[7] = auVar29[7] >> 1;
  auVar31[8] = auVar29[8] >> 1;
  auVar31[9] = auVar29[9] >> 1;
  auVar31[10] = auVar29[10] >> 1;
  auVar31[0xb] = auVar29[0xb] >> 1;
  auVar31[0xc] = auVar29[0xc] >> 1;
  auVar31[0xd] = auVar29[0xd] >> 1;
  auVar31[0xe] = auVar29[0xe] >> 1;
  auVar31[0xf] = auVar29[0xf] >> 1;
  NEON_uqadd(auVar30,auVar31,1);
  NEON_umax(auVar32,auVar34,1);
  func_0x0001082340e4(auStack_70,&uStack_80,auStack_90,&uStack_a0,auStack_b0,&uStack_c0);
  auVar15._8_8_ = uStack_78;
  auVar15._0_8_ = uStack_80;
  auVar14._8_8_ = uStack_78;
  auVar14._0_8_ = uStack_80;
  *(long *)((long)puVar18 - (long)iVar16) = auStack_70._0_8_;
  *puVar18 = uStack_80;
  auVar30 = NEON_ext(auStack_70,auStack_70,8,1);
  *(long *)((long)puVar17 - (long)iVar16) = auVar30._0_8_;
  auVar30 = NEON_ext(auVar14,auVar15,8,1);
  *puVar17 = auVar30._0_8_;
  auVar13._8_8_ = uStack_98;
  auVar13._0_8_ = uStack_a0;
  auVar12._8_8_ = uStack_98;
  auVar12._0_8_ = uStack_a0;
  *(undefined8 *)((long)param_1 - (long)iVar16) = auStack_90._0_8_;
  *param_1 = uStack_a0;
  auVar30 = NEON_ext(auStack_90,auStack_90,8,1);
  *(undefined8 *)((long)param_2 - (long)iVar16) = auVar30._0_8_;
  auVar30 = NEON_ext(auVar12,auVar13,8,1);
  *param_2 = auVar30._0_8_;
  auVar11._8_8_ = uStack_b8;
  auVar11._0_8_ = uStack_c0;
  auVar10._8_8_ = uStack_b8;
  auVar10._0_8_ = uStack_c0;
  *(long *)((long)puVar2 - (long)iVar16) = auStack_b0._0_8_;
  *puVar2 = uStack_c0;
  auVar30 = NEON_ext(auStack_b0,auStack_b0,8,1);
  *(long *)((long)puVar3 - (long)iVar16) = auVar30._0_8_;
  auVar30 = NEON_ext(auVar10,auVar11,8,1);
  *puVar3 = auVar30._0_8_;
  return;
}



/* Entry: 108233080; end: 10823323b;  */

void FUN_108233080(undefined8 *param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5,
                  byte param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar31;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar51;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  puVar1 = (ulong *)((long)param_1 + (long)(int)param_3 * 4);
  puVar2 = (undefined8 *)((long)param_2 + (long)(int)param_3 * 4);
  auVar78._0_8_ = *param_1;
  auVar78._8_8_ = *param_2;
  uVar8 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  lVar3 = uVar8 + (long)(int)param_3;
  auVar32._0_8_ = *(undefined8 *)((long)puVar1 - lVar3);
  auVar32._8_8_ = *(undefined8 *)((long)puVar2 - lVar3);
  auVar9._0_8_ = *(ulong *)((long)puVar1 + (long)(int)param_3 * -2);
  uVar52 = *(undefined8 *)((long)puVar2 + (long)(int)param_3 * -2);
  auVar9._8_8_ = uVar52;
  puVar7 = (ulong *)((long)puVar1 - (long)(int)param_3);
  auVar53._0_8_ = *puVar7;
  puVar6 = (undefined8 *)((long)puVar2 - (long)(int)param_3);
  uVar56 = *puVar6;
  auVar53._8_8_ = uVar56;
  auVar57._0_8_ = *puVar1;
  uVar4 = *puVar2;
  auVar57._8_8_ = uVar4;
  uVar5 = *(ulong *)((long)puVar1 + (long)(int)param_3);
  uVar67 = *(undefined8 *)((long)puVar2 + (long)(int)param_3);
  bVar59 = (byte)uVar67;
  bVar60 = (byte)((ulong)uVar67 >> 8);
  bVar61 = (byte)((ulong)uVar67 >> 0x10);
  bVar62 = (byte)((ulong)uVar67 >> 0x18);
  bVar63 = (byte)((ulong)uVar67 >> 0x20);
  bVar64 = (byte)((ulong)uVar67 >> 0x28);
  bVar65 = (byte)((ulong)uVar67 >> 0x30);
  bVar66 = (byte)((ulong)uVar67 >> 0x38);
  auVar68._0_8_ = *(undefined8 *)((long)puVar1 + uVar8);
  auVar68._8_8_ = *(undefined8 *)((long)puVar2 + uVar8);
  auVar70._0_8_ = *(undefined8 *)((long)puVar1 + lVar3);
  auVar70._8_8_ = *(undefined8 *)((long)puVar2 + lVar3);
  auVar11 = NEON_uabd(auVar78,auVar32,1);
  auVar33 = NEON_uabd(auVar32,auVar9,1);
  auVar76 = NEON_uabd(auVar9,auVar53,1);
  auVar71 = NEON_uabd(auVar70,auVar68,1);
  auVar12[8] = bVar59;
  auVar12._0_8_ = uVar5;
  auVar12[9] = bVar60;
  auVar12[10] = bVar61;
  auVar12[0xb] = bVar62;
  auVar12[0xc] = bVar63;
  auVar12[0xd] = bVar64;
  auVar12[0xe] = bVar65;
  auVar12[0xf] = bVar66;
  auVar69 = NEON_uabd(auVar68,auVar12,1);
  auVar34[8] = bVar59;
  auVar34._0_8_ = uVar5;
  auVar34[9] = bVar60;
  auVar34[10] = bVar61;
  auVar34[0xb] = bVar62;
  auVar34[0xc] = bVar63;
  auVar34[0xd] = bVar64;
  auVar34[0xe] = bVar65;
  auVar34[0xf] = bVar66;
  auVar78 = NEON_uabd(auVar34,auVar57,1);
  auVar12 = NEON_umax(auVar11,auVar33,1);
  auVar34 = NEON_umax(auVar76,auVar71,1);
  auVar11 = NEON_umax(auVar69,auVar78,1);
  auVar12 = NEON_umax(auVar12,auVar34,1);
  auVar12 = NEON_umax(auVar12,auVar11,1);
  auVar34 = NEON_uabd(auVar53,auVar57,1);
  auVar11[8] = bVar59;
  auVar11._0_8_ = uVar5;
  auVar11[9] = bVar60;
  auVar11[10] = bVar61;
  auVar11[0xb] = bVar62;
  auVar11[0xc] = bVar63;
  auVar11[0xd] = bVar64;
  auVar11[0xe] = bVar65;
  auVar11[0xf] = bVar66;
  auVar11 = NEON_uabd(auVar9,auVar11,1);
  auVar34 = NEON_uqadd(auVar34,auVar34,1);
  auVar72[0] = auVar11[0] >> 1;
  auVar72[1] = auVar11[1] >> 1;
  auVar72[2] = auVar11[2] >> 1;
  auVar72[3] = auVar11[3] >> 1;
  auVar72[4] = auVar11[4] >> 1;
  auVar72[5] = auVar11[5] >> 1;
  auVar72[6] = auVar11[6] >> 1;
  auVar72[7] = auVar11[7] >> 1;
  auVar72[8] = auVar11[8] >> 1;
  auVar72[9] = auVar11[9] >> 1;
  auVar72[10] = auVar11[10] >> 1;
  auVar72[0xb] = auVar11[0xb] >> 1;
  auVar72[0xc] = auVar11[0xc] >> 1;
  auVar72[0xd] = auVar11[0xd] >> 1;
  auVar72[0xe] = auVar11[0xe] >> 1;
  auVar72[0xf] = auVar11[0xf] >> 1;
  auVar34 = NEON_uqadd(auVar34,auVar72,1);
  bVar10 = -(auVar12[0] <= param_5) & -(auVar34[0] <= param_4);
  bVar16 = -(auVar12[1] <= param_5) & -(auVar34[1] <= param_4);
  bVar17 = -(auVar12[2] <= param_5) & -(auVar34[2] <= param_4);
  bVar18 = -(auVar12[3] <= param_5) & -(auVar34[3] <= param_4);
  bVar19 = -(auVar12[4] <= param_5) & -(auVar34[4] <= param_4);
  bVar20 = -(auVar12[5] <= param_5) & -(auVar34[5] <= param_4);
  bVar21 = -(auVar12[6] <= param_5) & -(auVar34[6] <= param_4);
  bVar22 = -(auVar12[7] <= param_5) & -(auVar34[7] <= param_4);
  bVar23 = -(auVar12[8] <= param_5) & -(auVar34[8] <= param_4);
  bVar24 = -(auVar12[9] <= param_5) & -(auVar34[9] <= param_4);
  bVar25 = -(auVar12[10] <= param_5) & -(auVar34[10] <= param_4);
  bVar26 = -(auVar12[0xb] <= param_5) & -(auVar34[0xb] <= param_4);
  bVar27 = -(auVar12[0xc] <= param_5) & -(auVar34[0xc] <= param_4);
  bVar28 = -(auVar12[0xd] <= param_5) & -(auVar34[0xd] <= param_4);
  bVar29 = -(auVar12[0xe] <= param_5) & -(auVar34[0xe] <= param_4);
  bVar30 = -(auVar12[0xf] <= param_5) & -(auVar34[0xf] <= param_4);
  auVar12 = NEON_umax(auVar76,auVar78,1);
  auVar71._0_8_ = auVar9._0_8_ ^ 0x8080808080808080;
  auVar71[8] = (byte)uVar52 ^ 0x80;
  auVar71[9] = (byte)((ulong)uVar52 >> 8) ^ 0x80;
  auVar71[10] = (byte)((ulong)uVar52 >> 0x10) ^ 0x80;
  auVar71[0xb] = (byte)((ulong)uVar52 >> 0x18) ^ 0x80;
  auVar71[0xc] = (byte)((ulong)uVar52 >> 0x20) ^ 0x80;
  auVar71[0xd] = (byte)((ulong)uVar52 >> 0x28) ^ 0x80;
  auVar71[0xe] = (byte)((ulong)uVar52 >> 0x30) ^ 0x80;
  auVar71[0xf] = (byte)((ulong)uVar52 >> 0x38) ^ 0x80;
  auVar54._0_8_ = auVar53._0_8_ ^ 0x8080808080808080;
  auVar54[8] = (byte)uVar56 ^ 0x80;
  auVar54[9] = (byte)((ulong)uVar56 >> 8) ^ 0x80;
  auVar54[10] = (byte)((ulong)uVar56 >> 0x10) ^ 0x80;
  auVar54[0xb] = (byte)((ulong)uVar56 >> 0x18) ^ 0x80;
  auVar54[0xc] = (byte)((ulong)uVar56 >> 0x20) ^ 0x80;
  auVar54[0xd] = (byte)((ulong)uVar56 >> 0x28) ^ 0x80;
  auVar54[0xe] = (byte)((ulong)uVar56 >> 0x30) ^ 0x80;
  auVar54[0xf] = (byte)((ulong)uVar56 >> 0x38) ^ 0x80;
  auVar58._0_8_ = auVar57._0_8_ ^ 0x8080808080808080;
  auVar58[8] = (byte)uVar4 ^ 0x80;
  auVar58[9] = (byte)((ulong)uVar4 >> 8) ^ 0x80;
  auVar58[10] = (byte)((ulong)uVar4 >> 0x10) ^ 0x80;
  auVar58[0xb] = (byte)((ulong)uVar4 >> 0x18) ^ 0x80;
  auVar58[0xc] = (byte)((ulong)uVar4 >> 0x20) ^ 0x80;
  auVar58[0xd] = (byte)((ulong)uVar4 >> 0x28) ^ 0x80;
  auVar58[0xe] = (byte)((ulong)uVar4 >> 0x30) ^ 0x80;
  auVar58[0xf] = (byte)((ulong)uVar4 >> 0x38) ^ 0x80;
  bVar31 = -(param_6 < auVar12[0]) & bVar10;
  bVar37 = -(param_6 < auVar12[1]) & bVar16;
  bVar38 = -(param_6 < auVar12[2]) & bVar17;
  bVar39 = -(param_6 < auVar12[3]) & bVar18;
  bVar40 = -(param_6 < auVar12[4]) & bVar19;
  bVar41 = -(param_6 < auVar12[5]) & bVar20;
  bVar42 = -(param_6 < auVar12[6]) & bVar21;
  bVar43 = -(param_6 < auVar12[7]) & bVar22;
  bVar44 = -(param_6 < auVar12[8]) & bVar23;
  bVar45 = -(param_6 < auVar12[9]) & bVar24;
  bVar46 = -(param_6 < auVar12[10]) & bVar25;
  bVar47 = -(param_6 < auVar12[0xb]) & bVar26;
  bVar48 = -(param_6 < auVar12[0xc]) & bVar27;
  bVar49 = -(param_6 < auVar12[0xd]) & bVar28;
  bVar50 = -(param_6 < auVar12[0xe]) & bVar29;
  bVar51 = -(param_6 < auVar12[0xf]) & bVar30;
  auVar12 = NEON_sqsub(auVar58,auVar54,1);
  auVar33[8] = bVar59 ^ 0x80;
  auVar33._0_8_ = uVar5 ^ 0x8080808080808080;
  auVar33[9] = bVar60 ^ 0x80;
  auVar33[10] = bVar61 ^ 0x80;
  auVar33[0xb] = bVar62 ^ 0x80;
  auVar33[0xc] = bVar63 ^ 0x80;
  auVar33[0xd] = bVar64 ^ 0x80;
  auVar33[0xe] = bVar65 ^ 0x80;
  auVar33[0xf] = bVar66 ^ 0x80;
  auVar34 = NEON_sqsub(auVar71,auVar33,1);
  auVar34 = NEON_sqadd(auVar34,auVar12,1);
  auVar34 = NEON_sqadd(auVar12,auVar34,1);
  auVar12 = NEON_sqadd(auVar12,auVar34,1);
  auVar73[0] = bVar31 & auVar12[0];
  auVar73[1] = bVar37 & auVar12[1];
  auVar73[2] = bVar38 & auVar12[2];
  auVar73[3] = bVar39 & auVar12[3];
  auVar73[4] = bVar40 & auVar12[4];
  auVar73[5] = bVar41 & auVar12[5];
  auVar73[6] = bVar42 & auVar12[6];
  auVar73[7] = bVar43 & auVar12[7];
  auVar73[8] = bVar44 & auVar12[8];
  auVar73[9] = bVar45 & auVar12[9];
  auVar73[10] = bVar46 & auVar12[10];
  auVar73[0xb] = bVar47 & auVar12[0xb];
  auVar73[0xc] = bVar48 & auVar12[0xc];
  auVar73[0xd] = bVar49 & auVar12[0xd];
  auVar73[0xe] = bVar50 & auVar12[0xe];
  auVar73[0xf] = bVar51 & auVar12[0xf];
  auVar75[8] = 3;
  auVar75._0_8_ = 0x303030303030303;
  auVar75[9] = 3;
  auVar75[10] = 3;
  auVar75[0xb] = 3;
  auVar75[0xc] = 3;
  auVar75[0xd] = 3;
  auVar75[0xe] = 3;
  auVar75[0xf] = 3;
  auVar34 = NEON_sqadd(auVar73,auVar75,1);
  auVar79[8] = 4;
  auVar79._0_8_ = 0x404040404040404;
  auVar79[9] = 4;
  auVar79[10] = 4;
  auVar79[0xb] = 4;
  auVar79[0xc] = 4;
  auVar79[0xd] = 4;
  auVar79[0xe] = 4;
  auVar79[0xf] = 4;
  auVar12 = NEON_sqadd(auVar73,auVar79,1);
  auVar77[0] = auVar34[0] >> 3;
  auVar77[1] = auVar34[1] >> 3;
  auVar77[2] = auVar34[2] >> 3;
  auVar77[3] = auVar34[3] >> 3;
  auVar77[4] = auVar34[4] >> 3;
  auVar77[5] = auVar34[5] >> 3;
  auVar77[6] = auVar34[6] >> 3;
  auVar77[7] = auVar34[7] >> 3;
  auVar77[8] = auVar34[8] >> 3;
  auVar77[9] = auVar34[9] >> 3;
  auVar77[10] = auVar34[10] >> 3;
  auVar77[0xb] = auVar34[0xb] >> 3;
  auVar77[0xc] = auVar34[0xc] >> 3;
  auVar77[0xd] = auVar34[0xd] >> 3;
  auVar77[0xe] = auVar34[0xe] >> 3;
  auVar77[0xf] = auVar34[0xf] >> 3;
  auVar74[0] = auVar12[0] >> 3;
  auVar74[1] = auVar12[1] >> 3;
  auVar74[2] = auVar12[2] >> 3;
  auVar74[3] = auVar12[3] >> 3;
  auVar74[4] = auVar12[4] >> 3;
  auVar74[5] = auVar12[5] >> 3;
  auVar74[6] = auVar12[6] >> 3;
  auVar74[7] = auVar12[7] >> 3;
  auVar74[8] = auVar12[8] >> 3;
  auVar74[9] = auVar12[9] >> 3;
  auVar74[10] = auVar12[10] >> 3;
  auVar74[0xb] = auVar12[0xb] >> 3;
  auVar74[0xc] = auVar12[0xc] >> 3;
  auVar74[0xd] = auVar12[0xd] >> 3;
  auVar74[0xe] = auVar12[0xe] >> 3;
  auVar74[0xf] = auVar12[0xf] >> 3;
  auVar11 = NEON_sqadd(auVar54,auVar77,1);
  auVar33 = NEON_sqsub(auVar58,auVar74,1);
  auVar12 = NEON_sqsub(auVar33,auVar11,1);
  auVar34 = NEON_sqadd(auVar12,auVar12,1);
  auVar12 = NEON_sqadd(auVar12,auVar34,1);
  auVar13[0] = (bVar10 ^ bVar31) & auVar12[0];
  auVar13[1] = (bVar16 ^ bVar37) & auVar12[1];
  auVar13[2] = (bVar17 ^ bVar38) & auVar12[2];
  auVar13[3] = (bVar18 ^ bVar39) & auVar12[3];
  auVar13[4] = (bVar19 ^ bVar40) & auVar12[4];
  auVar13[5] = (bVar20 ^ bVar41) & auVar12[5];
  auVar13[6] = (bVar21 ^ bVar42) & auVar12[6];
  auVar13[7] = (bVar22 ^ bVar43) & auVar12[7];
  auVar13[8] = (bVar23 ^ bVar44) & auVar12[8];
  auVar13[9] = (bVar24 ^ bVar45) & auVar12[9];
  auVar13[10] = (bVar25 ^ bVar46) & auVar12[10];
  auVar13[0xb] = (bVar26 ^ bVar47) & auVar12[0xb];
  auVar13[0xc] = (bVar27 ^ bVar48) & auVar12[0xc];
  auVar13[0xd] = (bVar28 ^ bVar49) & auVar12[0xd];
  auVar13[0xe] = (bVar29 ^ bVar50) & auVar12[0xe];
  auVar13[0xf] = (bVar30 ^ bVar51) & auVar12[0xf];
  auVar34 = NEON_sqadd(auVar13,auVar79,1);
  auVar12 = NEON_sqadd(auVar13,auVar75,1);
  auVar35[0] = auVar34[0] >> 3;
  auVar35[1] = auVar34[1] >> 3;
  auVar35[2] = auVar34[2] >> 3;
  auVar35[3] = auVar34[3] >> 3;
  auVar35[4] = auVar34[4] >> 3;
  auVar35[5] = auVar34[5] >> 3;
  auVar35[6] = auVar34[6] >> 3;
  auVar35[7] = auVar34[7] >> 3;
  auVar35[8] = auVar34[8] >> 3;
  auVar35[9] = auVar34[9] >> 3;
  auVar35[10] = auVar34[10] >> 3;
  auVar35[0xb] = auVar34[0xb] >> 3;
  auVar35[0xc] = auVar34[0xc] >> 3;
  auVar35[0xd] = auVar34[0xd] >> 3;
  auVar35[0xe] = auVar34[0xe] >> 3;
  auVar35[0xf] = auVar34[0xf] >> 3;
  auVar14[0] = auVar12[0] >> 3;
  auVar14[1] = auVar12[1] >> 3;
  auVar14[2] = auVar12[2] >> 3;
  auVar14[3] = auVar12[3] >> 3;
  auVar14[4] = auVar12[4] >> 3;
  auVar14[5] = auVar12[5] >> 3;
  auVar14[6] = auVar12[6] >> 3;
  auVar14[7] = auVar12[7] >> 3;
  auVar14[8] = auVar12[8] >> 3;
  auVar14[9] = auVar12[9] >> 3;
  auVar14[10] = auVar12[10] >> 3;
  auVar14[0xb] = auVar12[0xb] >> 3;
  auVar14[0xc] = auVar12[0xc] >> 3;
  auVar14[0xd] = auVar12[0xd] >> 3;
  auVar14[0xe] = auVar12[0xe] >> 3;
  auVar14[0xf] = auVar12[0xf] >> 3;
  auVar34 = NEON_srshr(auVar35,1,1);
  auVar12 = NEON_sqadd(auVar11,auVar14,1);
  auVar15._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar15[8] = auVar12[8] ^ 0x80;
  auVar15[9] = auVar12[9] ^ 0x80;
  auVar15[10] = auVar12[10] ^ 0x80;
  auVar15[0xb] = auVar12[0xb] ^ 0x80;
  auVar15[0xc] = auVar12[0xc] ^ 0x80;
  auVar15[0xd] = auVar12[0xd] ^ 0x80;
  auVar15[0xe] = auVar12[0xe] ^ 0x80;
  auVar15[0xf] = auVar12[0xf] ^ 0x80;
  auVar12 = NEON_sqsub(auVar33,auVar35,1);
  auVar36._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar36[8] = auVar12[8] ^ 0x80;
  auVar36[9] = auVar12[9] ^ 0x80;
  auVar36[10] = auVar12[10] ^ 0x80;
  auVar36[0xb] = auVar12[0xb] ^ 0x80;
  auVar36[0xc] = auVar12[0xc] ^ 0x80;
  auVar36[0xd] = auVar12[0xd] ^ 0x80;
  auVar36[0xe] = auVar12[0xe] ^ 0x80;
  auVar36[0xf] = auVar12[0xf] ^ 0x80;
  auVar12 = NEON_sqadd(auVar71,auVar34,1);
  auVar76._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar76[8] = auVar12[8] ^ 0x80;
  auVar76[9] = auVar12[9] ^ 0x80;
  auVar76[10] = auVar12[10] ^ 0x80;
  auVar76[0xb] = auVar12[0xb] ^ 0x80;
  auVar76[0xc] = auVar12[0xc] ^ 0x80;
  auVar76[0xd] = auVar12[0xd] ^ 0x80;
  auVar76[0xe] = auVar12[0xe] ^ 0x80;
  auVar76[0xf] = auVar12[0xf] ^ 0x80;
  auVar69[8] = bVar59 ^ 0x80;
  auVar69._0_8_ = uVar5 ^ 0x8080808080808080;
  auVar69[9] = bVar60 ^ 0x80;
  auVar69[10] = bVar61 ^ 0x80;
  auVar69[0xb] = bVar62 ^ 0x80;
  auVar69[0xc] = bVar63 ^ 0x80;
  auVar69[0xd] = bVar64 ^ 0x80;
  auVar69[0xe] = bVar65 ^ 0x80;
  auVar69[0xf] = bVar66 ^ 0x80;
  auVar12 = NEON_sqsub(auVar69,auVar34,1);
  *(ulong *)((long)puVar7 - (long)(int)param_3) = auVar76._0_8_;
  *puVar7 = auVar15._0_8_;
  auVar55._0_8_ = auVar12._0_8_ ^ 0x8080808080808080;
  auVar55[8] = auVar12[8] ^ 0x80;
  auVar55[9] = auVar12[9] ^ 0x80;
  auVar55[10] = auVar12[10] ^ 0x80;
  auVar55[0xb] = auVar12[0xb] ^ 0x80;
  auVar55[0xc] = auVar12[0xc] ^ 0x80;
  auVar55[0xd] = auVar12[0xd] ^ 0x80;
  auVar55[0xe] = auVar12[0xe] ^ 0x80;
  auVar55[0xf] = auVar12[0xf] ^ 0x80;
  auVar12 = NEON_ext(auVar76,auVar76,8,1);
  *(long *)((long)puVar6 - (long)(int)param_3) = auVar12._0_8_;
  auVar12 = NEON_ext(auVar15,auVar15,8,1);
  *puVar1 = auVar36._0_8_;
  *(ulong *)((long)puVar1 + (long)(int)param_3) = auVar55._0_8_;
  *puVar6 = auVar12._0_8_;
  auVar12 = NEON_ext(auVar36,auVar36,8,1);
  *puVar2 = auVar12._0_8_;
  auVar12 = NEON_ext(auVar55,auVar55,8,1);
  *(long *)((long)puVar2 + (long)(int)param_3) = auVar12._0_8_;
  return;
}



/* Entry: 10823323c; end: 1082334b7;  */

void FUN_10823323c(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined4 uVar28;
  undefined1 uVar29;
  undefined1 auVar34 [16];
  undefined1 auVar43 [16];
  undefined1 auVar49 [16];
  undefined8 uVar53;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar71 [16];
  undefined8 uVar75;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar94 [16];
  undefined1 auVar100 [16];
  undefined8 uVar104;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar122 [16];
  undefined8 uVar126;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar144 [16];
  undefined1 auVar148 [16];
  undefined8 uVar149;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar167 [16];
  undefined8 uVar171;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar190 [16];
  undefined1 auVar196 [16];
  undefined1 auVar200 [16];
  undefined8 uVar201;
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined2 uVar210;
  undefined8 uVar212;
  undefined1 auVar220 [16];
  undefined1 auVar226 [16];
  undefined1 in_q17 [16];
  undefined1 auVar228 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 in_q18 [16];
  undefined1 auVar237 [16];
  undefined1 auVar243 [16];
  undefined1 in_q19 [16];
  undefined1 auVar245 [16];
  undefined1 auVar251 [16];
  undefined1 in_q20 [16];
  undefined1 auVar252 [16];
  undefined1 auVar256 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auVar33 [16];
  undefined1 auVar50 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar31 [12];
  undefined1 auVar30 [12];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar52 [16];
  undefined1 auVar32 [14];
  undefined1 auVar48 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar72 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar73 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar54 [12];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar55 [14];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar101 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar102 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar77 [12];
  undefined1 auVar76 [12];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar103 [16];
  undefined1 auVar78 [14];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar99 [16];
  undefined1 auVar93 [16];
  undefined1 auVar110 [16];
  undefined1 auVar109 [16];
  undefined1 auVar123 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar124 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar105 [12];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar125 [16];
  undefined1 auVar106 [14];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  undefined1 auVar121 [16];
  undefined1 auVar132 [16];
  undefined1 auVar131 [16];
  undefined1 auVar145 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar146 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar127 [12];
  undefined1 auVar140 [16];
  undefined1 auVar139 [16];
  undefined1 auVar147 [16];
  undefined1 auVar128 [14];
  undefined1 auVar142 [16];
  undefined1 auVar141 [16];
  undefined1 auVar143 [16];
  undefined1 auVar155 [16];
  undefined1 auVar154 [16];
  undefined1 auVar168 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar169 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar150 [12];
  undefined1 auVar163 [16];
  undefined1 auVar162 [16];
  undefined1 auVar170 [16];
  undefined1 auVar151 [14];
  undefined1 auVar165 [16];
  undefined1 auVar164 [16];
  undefined1 auVar166 [16];
  undefined1 auVar178 [16];
  undefined1 auVar177 [16];
  undefined1 auVar197 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar192 [16];
  undefined1 auVar191 [16];
  undefined1 auVar198 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar173 [12];
  undefined1 auVar172 [12];
  undefined1 auVar186 [16];
  undefined1 auVar185 [16];
  undefined1 auVar194 [16];
  undefined1 auVar193 [16];
  undefined1 auVar199 [16];
  undefined1 auVar174 [14];
  undefined1 auVar188 [16];
  undefined1 auVar187 [16];
  undefined1 auVar195 [16];
  undefined1 auVar189 [16];
  undefined1 auVar206 [16];
  undefined1 auVar205 [16];
  undefined1 auVar202 [12];
  undefined1 auVar208 [16];
  undefined1 auVar207 [16];
  undefined1 auVar209 [16];
  undefined1 auVar218 [15];
  undefined6 uVar211;
  undefined8 uVar213;
  undefined1 auVar222 [16];
  undefined1 auVar221 [16];
  unkbyte10 Var214;
  undefined1 auVar216 [12];
  undefined1 auVar215 [12];
  undefined1 auVar224 [16];
  undefined1 auVar223 [16];
  undefined1 auVar217 [14];
  undefined1 auVar219 [16];
  undefined1 auVar225 [16];
  undefined1 auVar230 [16];
  undefined1 auVar229 [16];
  undefined1 auVar227 [12];
  undefined1 auVar232 [16];
  undefined1 auVar231 [16];
  undefined1 auVar233 [16];
  undefined1 auVar239 [16];
  undefined1 auVar238 [16];
  undefined1 auVar236 [12];
  undefined1 auVar241 [16];
  undefined1 auVar240 [16];
  undefined1 auVar242 [16];
  undefined1 auVar247 [16];
  undefined1 auVar246 [16];
  undefined1 auVar244 [12];
  undefined1 auVar249 [16];
  undefined1 auVar248 [16];
  undefined1 auVar250 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  
  puVar24 = (undefined8 *)(param_1 + -4);
  auVar234._0_8_ = *puVar24;
  puVar25 = (undefined8 *)(param_2 + -4);
  uVar53 = *puVar25;
  auVar234._8_8_ = uVar53;
  iVar23 = (int)param_3;
  auVar56._0_8_ = *(undefined8 *)((long)puVar24 + (long)iVar23);
  uVar75 = *(undefined8 *)((long)puVar25 + (long)iVar23);
  auVar56._8_8_ = uVar75;
  uVar26 = -(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1;
  auVar79._0_8_ = *(undefined8 *)((long)puVar24 + uVar26);
  uVar104 = *(undefined8 *)((long)puVar25 + uVar26);
  auVar79._8_8_ = uVar104;
  lVar27 = uVar26 + (long)iVar23;
  auVar107._0_8_ = *(undefined8 *)((long)puVar24 + lVar27);
  uVar126 = *(undefined8 *)((long)puVar25 + lVar27);
  auVar107._8_8_ = uVar126;
  uVar26 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  auVar129._0_8_ = *(undefined8 *)((long)puVar24 + uVar26);
  uVar149 = *(undefined8 *)((long)puVar25 + uVar26);
  auVar129._8_8_ = uVar149;
  auVar152._0_8_ = *(undefined8 *)((long)puVar24 + uVar26 + (long)iVar23);
  uVar171 = *(undefined8 *)((long)puVar25 + uVar26 + (long)iVar23);
  auVar152._8_8_ = uVar171;
  auVar175._0_8_ = *(undefined8 *)((long)puVar24 + lVar27 * 2);
  uVar201 = *(undefined8 *)((long)puVar25 + lVar27 * 2);
  auVar175._8_8_ = uVar201;
  lVar27 = (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3) -
           (long)iVar23;
  auVar203._0_8_ = *(undefined8 *)((long)puVar24 + lVar27);
  uVar212 = *(undefined8 *)((long)puVar25 + lVar27);
  auVar203._8_8_ = uVar212;
  auVar218._0_4_ = ((uint)((ulong)auVar234._0_8_ >> 0x10) & 0xff) << 0x10;
  auVar218[4] = (char)((ulong)auVar234._0_8_ >> 0x20);
  uVar1 = (undefined1)((ulong)uVar212 >> 0x38);
  auVar218[5] = 0;
  auVar218[6] = (char)((ulong)auVar234._0_8_ >> 0x30);
  auVar218[7] = uVar1;
  auVar218[8] = (char)uVar53;
  auVar218[9] = 0;
  auVar218[10] = (char)((ulong)uVar53 >> 0x10);
  auVar218[0xb] = 0;
  auVar218[0xc] = (char)((ulong)uVar53 >> 0x20);
  uVar29 = (undefined1)((ulong)uVar53 >> 0x30);
  auVar218[0xd] = 0;
  auVar218[0xe] = uVar29;
  uVar210 = CONCAT11((char)auVar56._0_8_,(char)auVar234._0_8_);
  auVar2._2_13_ = auVar218._2_13_;
  auVar2._0_2_ = uVar210;
  uVar28 = CONCAT13((char)((ulong)auVar56._0_8_ >> 0x10),auVar2._0_3_);
  auVar3._4_11_ = auVar218._4_11_;
  auVar3._0_4_ = uVar28;
  uVar211 = CONCAT15((char)((ulong)auVar56._0_8_ >> 0x20),auVar3._0_5_);
  auVar4._6_9_ = auVar218._6_9_;
  auVar4._0_6_ = uVar211;
  uVar213 = CONCAT17((char)((ulong)auVar56._0_8_ >> 0x30),auVar4._0_7_);
  auVar5._8_7_ = auVar218._8_7_;
  auVar5._0_8_ = uVar213;
  Var214 = CONCAT19((char)uVar75,auVar5._0_9_);
  auVar6._10_5_ = auVar218._10_5_;
  auVar6._0_10_ = Var214;
  auVar215._0_11_ = auVar6._0_11_;
  auVar215[0xb] = (char)((ulong)uVar75 >> 0x10);
  auVar7._12_3_ = auVar218._12_3_;
  auVar7._0_12_ = auVar215;
  auVar217._0_13_ = auVar7._0_13_;
  auVar217[0xd] = (char)((ulong)uVar75 >> 0x20);
  auVar219[0xe] = uVar29;
  auVar219._0_14_ = auVar217;
  auVar219[0xf] = (char)((ulong)uVar75 >> 0x30);
  auVar8._1_13_ = auVar234._3_13_;
  auVar8[0] = (char)((ulong)auVar234._0_8_ >> 0x18);
  auVar34._0_4_ = auVar8._0_4_ << 0x10;
  auVar34._5_11_ = auVar234._5_11_;
  auVar34[4] = (char)((ulong)auVar234._0_8_ >> 0x28);
  auVar36._7_9_ = auVar234._7_9_;
  auVar36._0_6_ = auVar34._0_6_;
  auVar36[6] = (char)((ulong)auVar234._0_8_ >> 0x38);
  auVar38._9_7_ = (undefined7)((ulong)uVar53 >> 8);
  auVar38._0_8_ = auVar36._0_8_;
  auVar38[8] = (char)((ulong)uVar53 >> 8);
  auVar40._11_5_ = (undefined5)((ulong)uVar53 >> 0x18);
  auVar40._0_10_ = auVar38._0_10_;
  auVar40[10] = (char)((ulong)uVar53 >> 0x18);
  auVar42._13_3_ = (undefined3)((ulong)uVar53 >> 0x28);
  auVar42._0_12_ = auVar40._0_12_;
  auVar42[0xc] = (char)((ulong)uVar53 >> 0x28);
  uVar29 = (undefined1)((ulong)uVar53 >> 0x38);
  auVar256._0_14_ = auVar42._0_14_;
  auVar256[0xe] = uVar29;
  auVar256[0xf] = uVar29;
  auVar243._2_14_ = auVar256._2_14_;
  auVar243._0_2_ = CONCAT11((char)((ulong)auVar56._0_8_ >> 8),(char)((ulong)auVar234._0_8_ >> 8));
  auVar33._4_12_ = auVar256._4_12_;
  auVar33._0_4_ = CONCAT13((char)((ulong)auVar56._0_8_ >> 0x18),auVar243._0_3_);
  auVar35._6_10_ = auVar256._6_10_;
  auVar35._0_6_ = CONCAT15((char)((ulong)auVar56._0_8_ >> 0x28),auVar33._0_5_);
  auVar37._8_8_ = auVar256._8_8_;
  auVar37._0_8_ = CONCAT17((char)((ulong)auVar56._0_8_ >> 0x38),auVar35._0_7_);
  auVar39._10_6_ = auVar256._10_6_;
  auVar39._0_10_ = CONCAT19((char)((ulong)uVar75 >> 8),auVar37._0_9_);
  auVar41._12_4_ = auVar256._12_4_;
  auVar30._0_11_ = auVar39._0_11_;
  auVar30[0xb] = (char)((ulong)uVar75 >> 0x18);
  auVar41._0_12_ = auVar30;
  auVar148._14_2_ = auVar256._14_2_;
  auVar32._0_13_ = auVar41._0_13_;
  auVar32[0xd] = (char)((ulong)uVar75 >> 0x28);
  auVar148._0_14_ = auVar32;
  uVar29 = (undefined1)((ulong)uVar75 >> 0x38);
  auVar251._0_15_ = auVar148._0_15_;
  auVar251[0xf] = uVar29;
  auVar9._1_13_ = auVar56._3_13_;
  auVar9[0] = (char)((ulong)auVar79._0_8_ >> 0x10);
  auVar59._0_4_ = auVar9._0_4_ << 0x10;
  auVar59._5_11_ = auVar56._5_11_;
  auVar59[4] = (char)((ulong)auVar79._0_8_ >> 0x20);
  auVar61._7_9_ = auVar56._7_9_;
  auVar61._0_6_ = auVar59._0_6_;
  auVar61[6] = (char)((ulong)auVar79._0_8_ >> 0x30);
  auVar63._9_7_ = (undefined7)((ulong)uVar75 >> 8);
  auVar63._0_8_ = auVar61._0_8_;
  auVar63[8] = (char)uVar104;
  auVar65._11_5_ = (undefined5)((ulong)uVar75 >> 0x18);
  auVar65._0_10_ = auVar63._0_10_;
  auVar65[10] = (char)((ulong)uVar104 >> 0x10);
  auVar67._13_3_ = (undefined3)((ulong)uVar75 >> 0x28);
  auVar67._0_12_ = auVar65._0_12_;
  auVar67[0xc] = (char)((ulong)uVar104 >> 0x20);
  auVar69._0_14_ = auVar67._0_14_;
  auVar69[0xe] = (char)((ulong)uVar104 >> 0x30);
  auVar69[0xf] = uVar29;
  auVar57._2_14_ = auVar69._2_14_;
  auVar57._0_2_ = CONCAT11((char)auVar107._0_8_,(char)auVar79._0_8_);
  auVar58._4_12_ = auVar69._4_12_;
  auVar58._0_4_ = CONCAT13((char)((ulong)auVar107._0_8_ >> 0x10),auVar57._0_3_);
  auVar60._6_10_ = auVar69._6_10_;
  auVar60._0_6_ = CONCAT15((char)((ulong)auVar107._0_8_ >> 0x20),auVar58._0_5_);
  auVar62._8_8_ = auVar69._8_8_;
  auVar62._0_8_ = CONCAT17((char)((ulong)auVar107._0_8_ >> 0x30),auVar60._0_7_);
  auVar64._10_6_ = auVar69._10_6_;
  auVar64._0_10_ = CONCAT19((char)uVar126,auVar62._0_9_);
  auVar66._12_4_ = auVar69._12_4_;
  auVar54._0_11_ = auVar64._0_11_;
  auVar54[0xb] = (char)((ulong)uVar126 >> 0x10);
  auVar66._0_12_ = auVar54;
  auVar68._14_2_ = auVar69._14_2_;
  auVar55._0_13_ = auVar66._0_13_;
  auVar55[0xd] = (char)((ulong)uVar126 >> 0x20);
  auVar68._0_14_ = auVar55;
  auVar70._0_15_ = auVar68._0_15_;
  auVar70[0xf] = (char)((ulong)uVar126 >> 0x30);
  auVar10._1_13_ = auVar79._3_13_;
  auVar10[0] = (char)((ulong)auVar79._0_8_ >> 0x18);
  auVar82._0_4_ = auVar10._0_4_ << 0x10;
  auVar82._5_11_ = auVar79._5_11_;
  auVar82[4] = (char)((ulong)auVar79._0_8_ >> 0x28);
  auVar84._7_9_ = auVar79._7_9_;
  auVar84._0_6_ = auVar82._0_6_;
  auVar84[6] = (char)((ulong)auVar79._0_8_ >> 0x38);
  auVar86._9_7_ = (undefined7)((ulong)uVar104 >> 8);
  auVar86._0_8_ = auVar84._0_8_;
  auVar86[8] = (char)((ulong)uVar104 >> 8);
  auVar88._11_5_ = (undefined5)((ulong)uVar104 >> 0x18);
  auVar88._0_10_ = auVar86._0_10_;
  auVar88[10] = (char)((ulong)uVar104 >> 0x18);
  auVar90._13_3_ = (undefined3)((ulong)uVar104 >> 0x28);
  auVar90._0_12_ = auVar88._0_12_;
  auVar90[0xc] = (char)((ulong)uVar104 >> 0x28);
  uVar29 = (undefined1)((ulong)uVar104 >> 0x38);
  auVar92._0_14_ = auVar90._0_14_;
  auVar92[0xe] = uVar29;
  auVar92[0xf] = uVar29;
  auVar80._2_14_ = auVar92._2_14_;
  auVar80._0_2_ = CONCAT11((char)((ulong)auVar107._0_8_ >> 8),(char)((ulong)auVar79._0_8_ >> 8));
  auVar81._4_12_ = auVar92._4_12_;
  auVar81._0_4_ = CONCAT13((char)((ulong)auVar107._0_8_ >> 0x18),auVar80._0_3_);
  auVar83._6_10_ = auVar92._6_10_;
  auVar83._0_6_ = CONCAT15((char)((ulong)auVar107._0_8_ >> 0x28),auVar81._0_5_);
  auVar85._8_8_ = auVar92._8_8_;
  auVar85._0_8_ = CONCAT17((char)((ulong)auVar107._0_8_ >> 0x38),auVar83._0_7_);
  auVar87._10_6_ = auVar92._10_6_;
  auVar87._0_10_ = CONCAT19((char)((ulong)uVar126 >> 8),auVar85._0_9_);
  auVar89._12_4_ = auVar92._12_4_;
  auVar76._0_11_ = auVar87._0_11_;
  auVar76[0xb] = (char)((ulong)uVar126 >> 0x18);
  auVar89._0_12_ = auVar76;
  auVar91._14_2_ = auVar92._14_2_;
  auVar78._0_13_ = auVar89._0_13_;
  auVar78[0xd] = (char)((ulong)uVar126 >> 0x28);
  auVar91._0_14_ = auVar78;
  uVar29 = (undefined1)((ulong)uVar126 >> 0x38);
  auVar93._0_15_ = auVar91._0_15_;
  auVar93[0xf] = uVar29;
  auVar11._1_13_ = auVar107._3_13_;
  auVar11[0] = (char)((ulong)auVar129._0_8_ >> 0x10);
  auVar110._0_4_ = auVar11._0_4_ << 0x10;
  auVar110._5_11_ = auVar107._5_11_;
  auVar110[4] = (char)((ulong)auVar129._0_8_ >> 0x20);
  auVar112._7_9_ = auVar107._7_9_;
  auVar112._0_6_ = auVar110._0_6_;
  auVar112[6] = (char)((ulong)auVar129._0_8_ >> 0x30);
  auVar114._9_7_ = (undefined7)((ulong)uVar126 >> 8);
  auVar114._0_8_ = auVar112._0_8_;
  auVar114[8] = (char)uVar149;
  auVar116._11_5_ = (undefined5)((ulong)uVar126 >> 0x18);
  auVar116._0_10_ = auVar114._0_10_;
  auVar116[10] = (char)((ulong)uVar149 >> 0x10);
  auVar118._13_3_ = (undefined3)((ulong)uVar126 >> 0x28);
  auVar118._0_12_ = auVar116._0_12_;
  auVar118[0xc] = (char)((ulong)uVar149 >> 0x20);
  auVar120._0_14_ = auVar118._0_14_;
  auVar120[0xe] = (char)((ulong)uVar149 >> 0x30);
  auVar120[0xf] = uVar29;
  auVar108._2_14_ = auVar120._2_14_;
  auVar108._0_2_ = CONCAT11((char)auVar152._0_8_,(char)auVar129._0_8_);
  auVar109._4_12_ = auVar120._4_12_;
  auVar109._0_4_ = CONCAT13((char)((ulong)auVar152._0_8_ >> 0x10),auVar108._0_3_);
  auVar111._6_10_ = auVar120._6_10_;
  auVar111._0_6_ = CONCAT15((char)((ulong)auVar152._0_8_ >> 0x20),auVar109._0_5_);
  auVar113._8_8_ = auVar120._8_8_;
  auVar113._0_8_ = CONCAT17((char)((ulong)auVar152._0_8_ >> 0x30),auVar111._0_7_);
  auVar115._10_6_ = auVar120._10_6_;
  auVar115._0_10_ = CONCAT19((char)uVar171,auVar113._0_9_);
  auVar117._12_4_ = auVar120._12_4_;
  auVar105._0_11_ = auVar115._0_11_;
  auVar105[0xb] = (char)((ulong)uVar171 >> 0x10);
  auVar117._0_12_ = auVar105;
  auVar119._14_2_ = auVar120._14_2_;
  auVar106._0_13_ = auVar117._0_13_;
  auVar106[0xd] = (char)((ulong)uVar171 >> 0x20);
  auVar119._0_14_ = auVar106;
  auVar121._0_15_ = auVar119._0_15_;
  auVar121[0xf] = (char)((ulong)uVar171 >> 0x30);
  auVar12._1_13_ = auVar129._3_13_;
  auVar12[0] = (char)((ulong)auVar129._0_8_ >> 0x18);
  auVar132._0_4_ = auVar12._0_4_ << 0x10;
  auVar132._5_11_ = auVar129._5_11_;
  auVar132[4] = (char)((ulong)auVar129._0_8_ >> 0x28);
  auVar134._7_9_ = auVar129._7_9_;
  auVar134._0_6_ = auVar132._0_6_;
  auVar134[6] = (char)((ulong)auVar129._0_8_ >> 0x38);
  auVar136._9_7_ = (undefined7)((ulong)uVar149 >> 8);
  auVar136._0_8_ = auVar134._0_8_;
  auVar136[8] = (char)((ulong)uVar149 >> 8);
  auVar138._11_5_ = (undefined5)((ulong)uVar149 >> 0x18);
  auVar138._0_10_ = auVar136._0_10_;
  auVar138[10] = (char)((ulong)uVar149 >> 0x18);
  auVar140._13_3_ = (undefined3)((ulong)uVar149 >> 0x28);
  auVar140._0_12_ = auVar138._0_12_;
  auVar140[0xc] = (char)((ulong)uVar149 >> 0x28);
  uVar29 = (undefined1)((ulong)uVar149 >> 0x38);
  auVar142._0_14_ = auVar140._0_14_;
  auVar142[0xe] = uVar29;
  auVar142[0xf] = uVar29;
  auVar130._2_14_ = auVar142._2_14_;
  auVar130._0_2_ = CONCAT11((char)((ulong)auVar152._0_8_ >> 8),(char)((ulong)auVar129._0_8_ >> 8));
  auVar131._4_12_ = auVar142._4_12_;
  auVar131._0_4_ = CONCAT13((char)((ulong)auVar152._0_8_ >> 0x18),auVar130._0_3_);
  auVar133._6_10_ = auVar142._6_10_;
  auVar133._0_6_ = CONCAT15((char)((ulong)auVar152._0_8_ >> 0x28),auVar131._0_5_);
  auVar135._8_8_ = auVar142._8_8_;
  auVar135._0_8_ = CONCAT17((char)((ulong)auVar152._0_8_ >> 0x38),auVar133._0_7_);
  auVar137._10_6_ = auVar142._10_6_;
  auVar137._0_10_ = CONCAT19((char)((ulong)uVar171 >> 8),auVar135._0_9_);
  auVar139._12_4_ = auVar142._12_4_;
  auVar127._0_11_ = auVar137._0_11_;
  auVar127[0xb] = (char)((ulong)uVar171 >> 0x18);
  auVar139._0_12_ = auVar127;
  auVar141._14_2_ = auVar142._14_2_;
  auVar128._0_13_ = auVar139._0_13_;
  auVar128[0xd] = (char)((ulong)uVar171 >> 0x28);
  auVar141._0_14_ = auVar128;
  uVar29 = (undefined1)((ulong)uVar171 >> 0x38);
  auVar143._0_15_ = auVar141._0_15_;
  auVar143[0xf] = uVar29;
  auVar13._1_13_ = auVar152._3_13_;
  auVar13[0] = (char)((ulong)auVar175._0_8_ >> 0x10);
  auVar155._0_4_ = auVar13._0_4_ << 0x10;
  auVar155._5_11_ = auVar152._5_11_;
  auVar155[4] = (char)((ulong)auVar175._0_8_ >> 0x20);
  auVar157._7_9_ = auVar152._7_9_;
  auVar157._0_6_ = auVar155._0_6_;
  auVar157[6] = (char)((ulong)auVar175._0_8_ >> 0x30);
  auVar159._9_7_ = (undefined7)((ulong)uVar171 >> 8);
  auVar159._0_8_ = auVar157._0_8_;
  auVar159[8] = (char)uVar201;
  auVar161._11_5_ = (undefined5)((ulong)uVar171 >> 0x18);
  auVar161._0_10_ = auVar159._0_10_;
  auVar161[10] = (char)((ulong)uVar201 >> 0x10);
  auVar163._13_3_ = (undefined3)((ulong)uVar171 >> 0x28);
  auVar163._0_12_ = auVar161._0_12_;
  auVar163[0xc] = (char)((ulong)uVar201 >> 0x20);
  auVar165._0_14_ = auVar163._0_14_;
  auVar165[0xe] = (char)((ulong)uVar201 >> 0x30);
  auVar165[0xf] = uVar29;
  auVar153._2_14_ = auVar165._2_14_;
  auVar153._0_2_ = CONCAT11((char)auVar203._0_8_,(char)auVar175._0_8_);
  auVar154._4_12_ = auVar165._4_12_;
  auVar154._0_4_ = CONCAT13((char)((ulong)auVar203._0_8_ >> 0x10),auVar153._0_3_);
  auVar156._6_10_ = auVar165._6_10_;
  auVar156._0_6_ = CONCAT15((char)((ulong)auVar203._0_8_ >> 0x20),auVar154._0_5_);
  auVar158._8_8_ = auVar165._8_8_;
  auVar158._0_8_ = CONCAT17((char)((ulong)auVar203._0_8_ >> 0x30),auVar156._0_7_);
  auVar160._10_6_ = auVar165._10_6_;
  auVar160._0_10_ = CONCAT19((char)uVar212,auVar158._0_9_);
  auVar162._12_4_ = auVar165._12_4_;
  auVar150._0_11_ = auVar160._0_11_;
  auVar150[0xb] = (char)((ulong)uVar212 >> 0x10);
  auVar162._0_12_ = auVar150;
  auVar164._14_2_ = auVar165._14_2_;
  auVar151._0_13_ = auVar162._0_13_;
  auVar151[0xd] = (char)((ulong)uVar212 >> 0x20);
  auVar164._0_14_ = auVar151;
  auVar166._0_15_ = auVar164._0_15_;
  auVar166[0xf] = (char)((ulong)uVar212 >> 0x30);
  auVar14._1_13_ = auVar175._3_13_;
  auVar14[0] = (char)((ulong)auVar175._0_8_ >> 0x18);
  auVar178._0_4_ = auVar14._0_4_ << 0x10;
  auVar178._5_11_ = auVar175._5_11_;
  auVar178[4] = (char)((ulong)auVar175._0_8_ >> 0x28);
  auVar180._7_9_ = auVar175._7_9_;
  auVar180._0_6_ = auVar178._0_6_;
  auVar180[6] = (char)((ulong)auVar175._0_8_ >> 0x38);
  auVar182._9_7_ = (undefined7)((ulong)uVar201 >> 8);
  auVar182._0_8_ = auVar180._0_8_;
  auVar182[8] = (char)((ulong)uVar201 >> 8);
  auVar184._11_5_ = (undefined5)((ulong)uVar201 >> 0x18);
  auVar184._0_10_ = auVar182._0_10_;
  auVar184[10] = (char)((ulong)uVar201 >> 0x18);
  auVar186._13_3_ = (undefined3)((ulong)uVar201 >> 0x28);
  auVar186._0_12_ = auVar184._0_12_;
  auVar186[0xc] = (char)((ulong)uVar201 >> 0x28);
  uVar29 = (undefined1)((ulong)uVar201 >> 0x38);
  auVar188._0_14_ = auVar186._0_14_;
  auVar188[0xe] = uVar29;
  auVar188[0xf] = uVar29;
  auVar176._2_14_ = auVar188._2_14_;
  auVar176._0_2_ = CONCAT11((char)((ulong)auVar203._0_8_ >> 8),(char)((ulong)auVar175._0_8_ >> 8));
  auVar177._4_12_ = auVar188._4_12_;
  auVar177._0_4_ = CONCAT13((char)((ulong)auVar203._0_8_ >> 0x18),auVar176._0_3_);
  auVar179._6_10_ = auVar188._6_10_;
  auVar179._0_6_ = CONCAT15((char)((ulong)auVar203._0_8_ >> 0x28),auVar177._0_5_);
  auVar181._8_8_ = auVar188._8_8_;
  auVar181._0_8_ = CONCAT17((char)((ulong)auVar203._0_8_ >> 0x38),auVar179._0_7_);
  auVar183._10_6_ = auVar188._10_6_;
  auVar183._0_10_ = CONCAT19((char)((ulong)uVar212 >> 8),auVar181._0_9_);
  auVar185._12_4_ = auVar188._12_4_;
  auVar172._0_11_ = auVar183._0_11_;
  auVar172[0xb] = (char)((ulong)uVar212 >> 0x18);
  auVar185._0_12_ = auVar172;
  auVar187._14_2_ = auVar188._14_2_;
  auVar174._0_13_ = auVar185._0_13_;
  auVar174[0xd] = (char)((ulong)uVar212 >> 0x28);
  auVar187._0_14_ = auVar174;
  auVar189._0_15_ = auVar187._0_15_;
  auVar189[0xf] = uVar1;
  auVar15._2_10_ = auVar203._6_10_;
  auVar15._0_2_ = (short)((uint6)uVar211 >> 0x20);
  auVar206._0_8_ = auVar15._0_8_ << 0x20;
  auVar206._10_6_ = (undefined6)((ulong)uVar212 >> 0x10);
  auVar206._8_2_ = (short)((unkuint10)Var214 >> 0x40);
  auVar208._14_2_ = (undefined2)((ulong)uVar212 >> 0x30);
  auVar208._0_12_ = auVar206._0_12_;
  auVar208._12_2_ = auVar217._12_2_;
  auVar204._4_12_ = auVar208._4_12_;
  auVar204._0_4_ = CONCAT22(auVar57._0_2_,uVar210);
  auVar205._8_8_ = auVar208._8_8_;
  auVar205._0_8_ = CONCAT26((short)((uint6)auVar60._0_6_ >> 0x20),auVar204._0_6_);
  auVar207._12_4_ = auVar208._12_4_;
  auVar202._0_10_ = auVar205._0_10_;
  auVar202._10_2_ = (short)((unkuint10)auVar64._0_10_ >> 0x40);
  auVar207._0_12_ = auVar202;
  auVar209._0_14_ = auVar207._0_14_;
  auVar209._14_2_ = auVar55._12_2_;
  auVar16._2_10_ = auVar219._6_10_;
  auVar16._0_2_ = (short)((ulong)uVar213 >> 0x30);
  auVar222._0_8_ = auVar16._0_8_ << 0x20;
  auVar222._10_6_ = auVar219._10_6_;
  auVar222._8_2_ = auVar215._10_2_;
  auVar224._0_12_ = auVar222._0_12_;
  auVar224._12_2_ = auVar219._14_2_;
  auVar224._14_2_ = auVar219._14_2_;
  auVar220._4_12_ = auVar224._4_12_;
  auVar220._0_4_ = CONCAT22((short)((uint)auVar58._0_4_ >> 0x10),(short)((uint)uVar28 >> 0x10));
  auVar221._8_8_ = auVar224._8_8_;
  auVar221._0_8_ = CONCAT26((short)((ulong)auVar62._0_8_ >> 0x30),auVar220._0_6_);
  auVar223._12_4_ = auVar224._12_4_;
  auVar216._0_10_ = auVar221._0_10_;
  auVar216._10_2_ = auVar54._10_2_;
  auVar223._0_12_ = auVar216;
  auVar225._0_14_ = auVar223._0_14_;
  auVar225._14_2_ = auVar70._14_2_;
  auVar17._2_10_ = in_q17._6_10_;
  auVar17._0_2_ = (short)((uint6)auVar35._0_6_ >> 0x20);
  auVar230._0_8_ = auVar17._0_8_ << 0x20;
  auVar230._10_6_ = in_q17._10_6_;
  auVar230._8_2_ = (short)((unkuint10)auVar39._0_10_ >> 0x40);
  auVar232._14_2_ = in_q17._14_2_;
  auVar232._0_12_ = auVar230._0_12_;
  auVar232._12_2_ = auVar32._12_2_;
  auVar228._4_12_ = auVar232._4_12_;
  auVar228._0_4_ = CONCAT22(auVar80._0_2_,auVar243._0_2_);
  auVar229._8_8_ = auVar232._8_8_;
  auVar229._0_8_ = CONCAT26((short)((uint6)auVar83._0_6_ >> 0x20),auVar228._0_6_);
  auVar231._12_4_ = auVar232._12_4_;
  auVar227._0_10_ = auVar229._0_10_;
  auVar227._10_2_ = (short)((unkuint10)auVar87._0_10_ >> 0x40);
  auVar231._0_12_ = auVar227;
  auVar233._0_14_ = auVar231._0_14_;
  auVar233._14_2_ = auVar78._12_2_;
  auVar18._2_10_ = in_q18._6_10_;
  auVar18._0_2_ = (short)((ulong)auVar37._0_8_ >> 0x30);
  auVar239._0_8_ = auVar18._0_8_ << 0x20;
  auVar239._10_6_ = in_q18._10_6_;
  auVar239._8_2_ = auVar30._10_2_;
  auVar241._14_2_ = in_q18._14_2_;
  auVar241._0_12_ = auVar239._0_12_;
  auVar241._12_2_ = auVar251._14_2_;
  auVar237._4_12_ = auVar241._4_12_;
  auVar237._0_4_ =
       CONCAT22((short)((uint)auVar81._0_4_ >> 0x10),(short)((uint)auVar33._0_4_ >> 0x10));
  auVar238._8_8_ = auVar241._8_8_;
  auVar238._0_8_ = CONCAT26((short)((ulong)auVar85._0_8_ >> 0x30),auVar237._0_6_);
  auVar240._12_4_ = auVar241._12_4_;
  auVar236._0_10_ = auVar238._0_10_;
  auVar236._10_2_ = auVar76._10_2_;
  auVar240._0_12_ = auVar236;
  auVar242._0_14_ = auVar240._0_14_;
  auVar242._14_2_ = auVar93._14_2_;
  auVar19._2_10_ = auVar251._6_10_;
  auVar19._0_2_ = (short)((uint6)auVar111._0_6_ >> 0x20);
  auVar45._0_8_ = auVar19._0_8_ << 0x20;
  auVar45._10_6_ = auVar251._10_6_;
  auVar45._8_2_ = (short)((unkuint10)auVar115._0_10_ >> 0x40);
  auVar47._0_12_ = auVar45._0_12_;
  auVar47._12_2_ = auVar106._12_2_;
  auVar47._14_2_ = auVar251._14_2_;
  auVar43._4_12_ = auVar47._4_12_;
  auVar43._0_4_ = CONCAT22(auVar153._0_2_,auVar108._0_2_);
  auVar44._8_8_ = auVar47._8_8_;
  auVar44._0_8_ = CONCAT26((short)((uint6)auVar156._0_6_ >> 0x20),auVar43._0_6_);
  auVar46._12_4_ = auVar47._12_4_;
  auVar31._0_10_ = auVar44._0_10_;
  auVar31._10_2_ = (short)((unkuint10)auVar160._0_10_ >> 0x40);
  auVar46._0_12_ = auVar31;
  auVar48._0_14_ = auVar46._0_14_;
  auVar48._14_2_ = auVar151._12_2_;
  auVar20._2_10_ = auVar93._6_10_;
  auVar20._0_2_ = (short)((ulong)auVar113._0_8_ >> 0x30);
  auVar96._0_8_ = auVar20._0_8_ << 0x20;
  auVar96._10_6_ = auVar93._10_6_;
  auVar96._8_2_ = auVar105._10_2_;
  auVar98._0_12_ = auVar96._0_12_;
  auVar98._12_2_ = auVar121._14_2_;
  auVar98._14_2_ = auVar93._14_2_;
  auVar94._4_12_ = auVar98._4_12_;
  auVar94._0_4_ =
       CONCAT22((short)((uint)auVar154._0_4_ >> 0x10),(short)((uint)auVar109._0_4_ >> 0x10));
  auVar95._8_8_ = auVar98._8_8_;
  auVar95._0_8_ = CONCAT26((short)((ulong)auVar158._0_8_ >> 0x30),auVar94._0_6_);
  auVar97._12_4_ = auVar98._12_4_;
  auVar77._0_10_ = auVar95._0_10_;
  auVar77._10_2_ = auVar150._10_2_;
  auVar97._0_12_ = auVar77;
  auVar99._0_14_ = auVar97._0_14_;
  auVar99._14_2_ = auVar166._14_2_;
  auVar21._2_10_ = in_q19._6_10_;
  auVar21._0_2_ = (short)((uint6)auVar133._0_6_ >> 0x20);
  auVar247._0_8_ = auVar21._0_8_ << 0x20;
  auVar247._10_6_ = in_q19._10_6_;
  auVar247._8_2_ = (short)((unkuint10)auVar137._0_10_ >> 0x40);
  auVar249._14_2_ = in_q19._14_2_;
  auVar249._0_12_ = auVar247._0_12_;
  auVar249._12_2_ = auVar128._12_2_;
  auVar245._4_12_ = auVar249._4_12_;
  auVar245._0_4_ = CONCAT22(auVar176._0_2_,auVar130._0_2_);
  auVar246._8_8_ = auVar249._8_8_;
  auVar246._0_8_ = CONCAT26((short)((uint6)auVar179._0_6_ >> 0x20),auVar245._0_6_);
  auVar248._12_4_ = auVar249._12_4_;
  auVar244._0_10_ = auVar246._0_10_;
  auVar244._10_2_ = (short)((unkuint10)auVar183._0_10_ >> 0x40);
  auVar248._0_12_ = auVar244;
  auVar250._0_14_ = auVar248._0_14_;
  auVar250._14_2_ = auVar174._12_2_;
  auVar22._2_10_ = auVar189._6_10_;
  auVar22._0_2_ = (short)((ulong)auVar135._0_8_ >> 0x30);
  auVar192._0_8_ = auVar22._0_8_ << 0x20;
  auVar192._10_6_ = auVar189._10_6_;
  auVar192._8_2_ = auVar127._10_2_;
  auVar194._14_2_ = auVar189._14_2_;
  auVar194._0_12_ = auVar192._0_12_;
  auVar194._12_2_ = auVar143._14_2_;
  auVar190._4_12_ = auVar194._4_12_;
  auVar190._0_4_ =
       CONCAT22((short)((uint)auVar177._0_4_ >> 0x10),(short)((uint)auVar131._0_4_ >> 0x10));
  auVar191._8_8_ = auVar194._8_8_;
  auVar191._0_8_ = CONCAT26((short)((ulong)auVar181._0_8_ >> 0x30),auVar190._0_6_);
  auVar193._12_4_ = auVar194._12_4_;
  auVar173._0_10_ = auVar191._0_10_;
  auVar173._10_2_ = auVar172._10_2_;
  auVar193._0_12_ = auVar173;
  auVar195._0_14_ = auVar193._0_14_;
  auVar195._14_2_ = auVar194._14_2_;
  auVar252._4_12_ = in_q20._4_12_;
  auVar252._0_4_ = auVar204._0_4_;
  auVar254._12_4_ = in_q20._12_4_;
  auVar254._0_8_ = auVar252._0_8_;
  auVar254._8_4_ = auVar202._8_4_;
  auVar253._8_8_ = auVar254._8_8_;
  auVar253._4_4_ = auVar43._0_4_;
  auVar253._0_4_ = auVar204._0_4_;
  auVar255._0_12_ = auVar253._0_12_;
  auVar255._12_4_ = auVar31._8_4_;
  uVar28 = (undefined4)((ulong)auVar205._0_8_ >> 0x20);
  auVar122._4_12_ = auVar121._4_12_;
  auVar122._0_4_ = uVar28;
  auVar124._12_4_ = auVar121._12_4_;
  auVar124._0_8_ = auVar122._0_8_;
  auVar124._8_4_ = auVar209._12_4_;
  auVar123._8_8_ = auVar124._8_8_;
  auVar123._4_4_ = (int)((ulong)auVar44._0_8_ >> 0x20);
  auVar123._0_4_ = uVar28;
  auVar125._0_12_ = auVar123._0_12_;
  auVar125._12_4_ = auVar48._12_4_;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = auVar220._0_4_;
  auVar73._12_4_ = auVar70._12_4_;
  auVar73._0_8_ = auVar71._0_8_;
  auVar73._8_4_ = auVar216._8_4_;
  auVar72._8_8_ = auVar73._8_8_;
  auVar72._4_4_ = auVar94._0_4_;
  auVar72._0_4_ = auVar220._0_4_;
  auVar74._0_12_ = auVar72._0_12_;
  auVar74._12_4_ = auVar77._8_4_;
  uVar28 = (undefined4)((ulong)auVar221._0_8_ >> 0x20);
  auVar167._4_12_ = auVar166._4_12_;
  auVar167._0_4_ = uVar28;
  auVar169._12_4_ = auVar166._12_4_;
  auVar169._0_8_ = auVar167._0_8_;
  auVar169._8_4_ = auVar225._12_4_;
  auVar168._8_8_ = auVar169._8_8_;
  auVar168._4_4_ = (int)((ulong)auVar95._0_8_ >> 0x20);
  auVar168._0_4_ = uVar28;
  auVar170._0_12_ = auVar168._0_12_;
  auVar170._12_4_ = auVar99._12_4_;
  auVar49._4_12_ = auVar48._4_12_;
  auVar49._0_4_ = auVar228._0_4_;
  auVar51._0_8_ = auVar49._0_8_;
  auVar51._8_4_ = auVar227._8_4_;
  auVar51._12_4_ = auVar48._12_4_;
  auVar50._8_8_ = auVar51._8_8_;
  auVar50._4_4_ = auVar245._0_4_;
  auVar50._0_4_ = auVar228._0_4_;
  auVar52._0_12_ = auVar50._0_12_;
  auVar52._12_4_ = auVar244._8_4_;
  uVar28 = (undefined4)((ulong)auVar229._0_8_ >> 0x20);
  auVar144._4_12_ = auVar143._4_12_;
  auVar144._0_4_ = uVar28;
  auVar146._12_4_ = auVar143._12_4_;
  auVar146._0_8_ = auVar144._0_8_;
  auVar146._8_4_ = auVar233._12_4_;
  auVar145._8_8_ = auVar146._8_8_;
  auVar145._4_4_ = (int)((ulong)auVar246._0_8_ >> 0x20);
  auVar145._0_4_ = uVar28;
  auVar147._0_12_ = auVar145._0_12_;
  auVar147._12_4_ = auVar250._12_4_;
  auVar100._4_12_ = auVar99._4_12_;
  auVar100._0_4_ = auVar237._0_4_;
  auVar102._0_8_ = auVar100._0_8_;
  auVar102._8_4_ = auVar236._8_4_;
  auVar102._12_4_ = auVar99._12_4_;
  auVar101._8_8_ = auVar102._8_8_;
  auVar101._4_4_ = auVar190._0_4_;
  auVar101._0_4_ = auVar237._0_4_;
  auVar103._0_12_ = auVar101._0_12_;
  auVar103._12_4_ = auVar173._8_4_;
  uVar28 = (undefined4)((ulong)auVar238._0_8_ >> 0x20);
  auVar196._4_12_ = auVar195._4_12_;
  auVar196._0_4_ = uVar28;
  auVar198._12_4_ = auVar195._12_4_;
  auVar198._0_8_ = auVar196._0_8_;
  auVar198._8_4_ = auVar242._12_4_;
  auVar197._8_8_ = auVar198._8_8_;
  auVar197._4_4_ = (int)((ulong)auVar191._0_8_ >> 0x20);
  auVar197._0_4_ = uVar28;
  auVar199._0_12_ = auVar197._0_12_;
  auVar199._12_4_ = auVar198._12_4_;
  auVar226 = NEON_uabd(auVar255,auVar52,1);
  auVar234 = NEON_uabd(auVar52,auVar74,1);
  auVar243 = NEON_uabd(auVar74,auVar103,1);
  auVar200 = NEON_uabd(auVar199,auVar170,1);
  auVar251 = NEON_uabd(auVar170,auVar147,1);
  auVar256 = NEON_uabd(auVar147,auVar125,1);
  auVar226 = NEON_umax(auVar226,auVar234,1);
  auVar200 = NEON_umax(auVar243,auVar200,1);
  auVar234 = NEON_umax(auVar251,auVar256,1);
  auVar200 = NEON_umax(auVar226,auVar200,1);
  NEON_umax(auVar200,auVar234,1);
  auVar200 = NEON_uabd(auVar103,auVar125,1);
  auVar226 = NEON_uabd(auVar74,auVar147,1);
  auVar200 = NEON_uqadd(auVar200,auVar200,1);
  auVar235[0] = auVar226[0] >> 1;
  auVar235[1] = auVar226[1] >> 1;
  auVar235[2] = auVar226[2] >> 1;
  auVar235[3] = auVar226[3] >> 1;
  auVar235[4] = auVar226[4] >> 1;
  auVar235[5] = auVar226[5] >> 1;
  auVar235[6] = auVar226[6] >> 1;
  auVar235[7] = auVar226[7] >> 1;
  auVar235[8] = auVar226[8] >> 1;
  auVar235[9] = auVar226[9] >> 1;
  auVar235[10] = auVar226[10] >> 1;
  auVar235[0xb] = auVar226[0xb] >> 1;
  auVar235[0xc] = auVar226[0xc] >> 1;
  auVar235[0xd] = auVar226[0xd] >> 1;
  auVar235[0xe] = auVar226[0xe] >> 1;
  auVar235[0xf] = auVar226[0xf] >> 1;
  NEON_uqadd(auVar200,auVar235,1);
  NEON_umax(auVar243,auVar256,1);
  func_0x0001082340e4(auStack_40,auStack_50,auStack_60,auStack_70,auStack_80,&uStack_90);
  auVar226._8_8_ = uStack_88;
  auVar226._0_8_ = uStack_90;
  auVar200._8_8_ = uStack_88;
  auVar200._0_8_ = uStack_90;
  auVar234 = NEON_ext(auStack_40,auStack_40,8,1);
  auVar243 = NEON_ext(auStack_50,auStack_50,8,1);
  auVar251 = NEON_ext(auStack_60,auStack_60,8,1);
  auVar256 = NEON_ext(auStack_70,auStack_70,8,1);
  auVar148 = NEON_ext(auStack_80,auStack_80,8,1);
  param_1[-3] = auStack_40[0];
  param_1[-2] = auStack_50[0];
  param_1[-1] = auStack_60[0];
  *param_1 = auStack_70[0];
  param_1[1] = auStack_80[0];
  param_1[2] = (char)uStack_90;
  param_1 = param_1 + iVar23;
  param_1[-3] = auStack_40[1];
  param_1[-2] = auStack_50[1];
  param_1[-1] = auStack_60[1];
  *param_1 = auStack_70[1];
  param_1[1] = auStack_80[1];
  param_1[2] = (char)((ulong)uStack_90 >> 8);
  param_1 = param_1 + iVar23;
  param_1[-3] = auStack_40[2];
  param_1[-2] = auStack_50[2];
  param_1[-1] = auStack_60[2];
  *param_1 = auStack_70[2];
  param_1[1] = auStack_80[2];
  param_1[2] = (char)((ulong)uStack_90 >> 0x10);
  param_1 = param_1 + iVar23;
  param_1[-3] = auStack_40[3];
  param_1[-2] = auStack_50[3];
  param_1[-1] = auStack_60[3];
  *param_1 = auStack_70[3];
  param_1[1] = auStack_80[3];
  param_1[2] = (char)((ulong)uStack_90 >> 0x18);
  param_1 = param_1 + iVar23;
  param_1[-3] = auStack_40[4];
  param_1[-2] = auStack_50[4];
  param_1[-1] = auStack_60[4];
  *param_1 = auStack_70[4];
  param_1[1] = auStack_80[4];
  param_1[2] = (char)((ulong)uStack_90 >> 0x20);
  param_1 = param_1 + iVar23;
  param_1[-3] = auStack_40[5];
  param_1[-2] = auStack_50[5];
  param_1[-1] = auStack_60[5];
  *param_1 = auStack_70[5];
  param_1[1] = auStack_80[5];
  param_1[2] = (char)((ulong)uStack_90 >> 0x28);
  param_1 = param_1 + iVar23;
  param_1[-3] = auStack_40[6];
  param_1[-2] = auStack_50[6];
  param_1[-1] = auStack_60[6];
  *param_1 = auStack_70[6];
  param_1[1] = auStack_80[6];
  param_1[2] = (char)((ulong)uStack_90 >> 0x30);
  param_1 = param_1 + iVar23;
  auVar200 = NEON_ext(auVar200,auVar226,8,1);
  param_1[-3] = auStack_40[7];
  param_1[-2] = auStack_50[7];
  param_1[-1] = auStack_60[7];
  *param_1 = auStack_70[7];
  param_1[1] = auStack_80[7];
  param_1[2] = (char)((ulong)uStack_90 >> 0x38);
  param_2[-3] = auVar234[0];
  param_2[-2] = auVar243[0];
  param_2[-1] = auVar251[0];
  *param_2 = auVar256[0];
  param_2[1] = auVar148[0];
  param_2[2] = auVar200[0];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[1];
  param_2[-2] = auVar243[1];
  param_2[-1] = auVar251[1];
  *param_2 = auVar256[1];
  param_2[1] = auVar148[1];
  param_2[2] = auVar200[1];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[2];
  param_2[-2] = auVar243[2];
  param_2[-1] = auVar251[2];
  *param_2 = auVar256[2];
  param_2[1] = auVar148[2];
  param_2[2] = auVar200[2];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[3];
  param_2[-2] = auVar243[3];
  param_2[-1] = auVar251[3];
  *param_2 = auVar256[3];
  param_2[1] = auVar148[3];
  param_2[2] = auVar200[3];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[4];
  param_2[-2] = auVar243[4];
  param_2[-1] = auVar251[4];
  *param_2 = auVar256[4];
  param_2[1] = auVar148[4];
  param_2[2] = auVar200[4];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[5];
  param_2[-2] = auVar243[5];
  param_2[-1] = auVar251[5];
  *param_2 = auVar256[5];
  param_2[1] = auVar148[5];
  param_2[2] = auVar200[5];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[6];
  param_2[-2] = auVar243[6];
  param_2[-1] = auVar251[6];
  *param_2 = auVar256[6];
  param_2[1] = auVar148[6];
  param_2[2] = auVar200[6];
  param_2 = param_2 + iVar23;
  param_2[-3] = auVar234[7];
  param_2[-2] = auVar243[7];
  param_2[-1] = auVar251[7];
  *param_2 = auVar256[7];
  param_2[1] = auVar148[7];
  param_2[2] = auVar200[7];
  return;
}



/* Entry: 1082334b8; end: 108233a27;  */

void FUN_1082334b8(undefined8 *param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5,
                  byte param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  uint7 uVar17;
  uint7 uVar18;
  uint7 uVar19;
  uint7 uVar20;
  uint7 uVar21;
  uint7 uVar22;
  uint7 uVar23;
  uint7 uVar24;
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  ulong uVar40;
  long lVar41;
  undefined1 *puVar42;
  byte *pbVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined4 uVar56;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
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
  undefined1 auVar96 [16];
  undefined1 auVar102 [16];
  undefined1 auVar108 [16];
  undefined1 auVar112 [16];
  byte bVar130;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  byte bVar131;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  undefined8 uVar132;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar151 [16];
  undefined1 auVar157 [16];
  undefined1 auVar161 [16];
  byte bVar169;
  byte bVar177;
  undefined1 auVar162 [16];
  undefined8 uVar178;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar197 [16];
  undefined1 auVar203 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined8 uVar209;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar228 [16];
  undefined1 auVar234 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined8 uVar241;
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar260 [16];
  undefined1 auVar266 [16];
  undefined8 uVar267;
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar286 [16];
  undefined1 auVar292 [16];
  undefined1 auVar296 [16];
  undefined8 uVar297;
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar315 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined8 uVar321;
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar330 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined8 uVar339;
  undefined1 auVar345 [15];
  undefined1 auVar347 [16];
  undefined1 auVar353 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar95 [16];
  undefined1 auVar109 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar110 [16];
  undefined1 auVar101 [16];
  undefined1 auVar93 [12];
  undefined1 auVar92 [12];
  undefined1 auVar106 [16];
  undefined1 auVar105 [16];
  undefined1 auVar111 [16];
  undefined1 auVar94 [14];
  undefined1 auVar107 [16];
  undefined1 auVar139 [16];
  undefined1 auVar138 [16];
  undefined1 auVar158 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar153 [16];
  undefined1 auVar152 [16];
  undefined1 auVar159 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar134 [12];
  undefined1 auVar133 [12];
  undefined1 auVar147 [16];
  undefined1 auVar146 [16];
  undefined1 auVar155 [16];
  undefined1 auVar154 [16];
  undefined1 auVar160 [16];
  undefined1 auVar135 [14];
  undefined1 auVar149 [16];
  undefined1 auVar148 [16];
  undefined1 auVar156 [16];
  undefined1 auVar150 [16];
  undefined1 auVar185 [16];
  undefined1 auVar184 [16];
  undefined1 auVar204 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar199 [16];
  undefined1 auVar198 [16];
  undefined1 auVar205 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar180 [12];
  undefined1 auVar179 [12];
  undefined1 auVar193 [16];
  undefined1 auVar192 [16];
  undefined1 auVar201 [16];
  undefined1 auVar200 [16];
  undefined1 auVar206 [16];
  undefined1 auVar181 [14];
  undefined1 auVar195 [16];
  undefined1 auVar194 [16];
  undefined1 auVar202 [16];
  undefined1 auVar196 [16];
  undefined1 auVar216 [16];
  undefined1 auVar215 [16];
  undefined1 auVar235 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar230 [16];
  undefined1 auVar229 [16];
  undefined1 auVar236 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar211 [12];
  undefined1 auVar210 [12];
  undefined1 auVar224 [16];
  undefined1 auVar223 [16];
  undefined1 auVar232 [16];
  undefined1 auVar231 [16];
  undefined1 auVar237 [16];
  undefined1 auVar212 [14];
  undefined1 auVar226 [16];
  undefined1 auVar225 [16];
  undefined1 auVar233 [16];
  undefined1 auVar227 [16];
  undefined1 auVar248 [16];
  undefined1 auVar247 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar262 [16];
  undefined1 auVar261 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar243 [12];
  undefined1 auVar242 [12];
  undefined1 auVar256 [16];
  undefined1 auVar255 [16];
  undefined1 auVar264 [16];
  undefined1 auVar263 [16];
  undefined1 auVar244 [14];
  undefined1 auVar258 [16];
  undefined1 auVar257 [16];
  undefined1 auVar265 [16];
  undefined1 auVar259 [16];
  undefined1 auVar274 [16];
  undefined1 auVar273 [16];
  undefined1 auVar293 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar288 [16];
  undefined1 auVar287 [16];
  undefined1 auVar294 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar269 [12];
  undefined1 auVar268 [12];
  undefined1 auVar282 [16];
  undefined1 auVar281 [16];
  undefined1 auVar290 [16];
  undefined1 auVar289 [16];
  undefined1 auVar295 [16];
  undefined1 auVar270 [14];
  undefined1 auVar284 [16];
  undefined1 auVar283 [16];
  undefined1 auVar291 [16];
  undefined1 auVar285 [16];
  undefined1 auVar303 [16];
  undefined1 auVar302 [16];
  undefined1 auVar316 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar317 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar298 [12];
  undefined1 auVar311 [16];
  undefined1 auVar310 [16];
  undefined1 auVar318 [16];
  undefined1 auVar299 [14];
  undefined1 auVar313 [16];
  undefined1 auVar312 [16];
  undefined1 auVar314 [16];
  undefined1 auVar331 [16];
  undefined1 auVar326 [16];
  undefined1 auVar325 [16];
  undefined1 auVar332 [16];
  undefined1 auVar322 [12];
  undefined1 auVar328 [16];
  undefined1 auVar327 [16];
  undefined1 auVar333 [16];
  undefined1 auVar329 [16];
  undefined1 auVar354 [16];
  undefined6 uVar338;
  undefined8 uVar340;
  undefined1 auVar349 [16];
  undefined1 auVar348 [16];
  undefined1 auVar355 [16];
  unkbyte10 Var341;
  undefined1 auVar343 [12];
  undefined1 auVar342 [12];
  undefined1 auVar351 [16];
  undefined1 auVar350 [16];
  undefined1 auVar356 [16];
  undefined1 auVar344 [14];
  undefined1 auVar346 [16];
  undefined1 auVar352 [16];
  
  auVar112._0_8_ = *param_1;
  uVar132 = *param_2;
  auVar112._8_8_ = uVar132;
  auVar136._0_8_ = *(undefined8 *)((long)param_1 + (long)(int)param_3);
  uVar178 = *(undefined8 *)((long)param_2 + (long)(int)param_3);
  auVar136._8_8_ = uVar178;
  uVar40 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
  auVar182._0_8_ = *(undefined8 *)((long)param_1 + uVar40);
  uVar209 = *(undefined8 *)((long)param_2 + uVar40);
  auVar182._8_8_ = uVar209;
  lVar1 = uVar40 + (long)(int)param_3;
  auVar213._0_8_ = *(undefined8 *)((long)param_1 + lVar1);
  uVar241 = *(undefined8 *)((long)param_2 + lVar1);
  auVar213._8_8_ = uVar241;
  uVar40 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
  auVar245._0_8_ = *(undefined8 *)((long)param_1 + uVar40);
  uVar267 = *(undefined8 *)((long)param_2 + uVar40);
  auVar245._8_8_ = uVar267;
  lVar2 = uVar40 + (long)(int)param_3;
  auVar271._0_8_ = *(undefined8 *)((long)param_1 + lVar2);
  uVar297 = *(undefined8 *)((long)param_2 + lVar2);
  auVar271._8_8_ = uVar297;
  auVar300._0_8_ = *(undefined8 *)((long)param_1 + lVar1 * 2);
  uVar321 = *(undefined8 *)((long)param_2 + lVar1 * 2);
  auVar300._8_8_ = uVar321;
  lVar41 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3) -
           (long)(int)param_3;
  auVar323._0_8_ = *(undefined8 *)((long)param_1 + lVar41);
  uVar339 = *(undefined8 *)((long)param_2 + lVar41);
  auVar323._8_8_ = uVar339;
  auVar345._0_4_ = ((uint)((ulong)auVar112._0_8_ >> 0x10) & 0xff) << 0x10;
  uVar52 = (undefined1)((ulong)auVar112._0_8_ >> 0x20);
  auVar345[4] = uVar52;
  uVar10 = (undefined1)((ulong)uVar339 >> 0x38);
  auVar345[5] = 0;
  auVar345[6] = (char)((ulong)auVar112._0_8_ >> 0x30);
  auVar345[7] = uVar10;
  auVar345[8] = (char)uVar132;
  bVar131 = (byte)((ulong)uVar132 >> 0x10);
  auVar345[9] = 0;
  auVar345[10] = bVar131;
  bVar170 = (byte)((ulong)uVar132 >> 0x20);
  auVar345[0xb] = 0;
  auVar345[0xc] = bVar170;
  uVar44 = (undefined1)((ulong)uVar132 >> 0x30);
  auVar345[0xd] = 0;
  auVar345[0xe] = uVar44;
  uVar47 = CONCAT11((char)auVar136._0_8_,(char)auVar112._0_8_);
  auVar11._2_13_ = auVar345._2_13_;
  auVar11._0_2_ = uVar47;
  uVar56 = CONCAT13((char)((ulong)auVar136._0_8_ >> 0x10),auVar11._0_3_);
  auVar12._4_11_ = auVar345._4_11_;
  auVar12._0_4_ = uVar56;
  uVar67 = (undefined1)((ulong)auVar136._0_8_ >> 0x20);
  uVar338 = CONCAT15(uVar67,auVar12._0_5_);
  auVar13._6_9_ = auVar345._6_9_;
  auVar13._0_6_ = uVar338;
  uVar340 = CONCAT17((char)((ulong)auVar136._0_8_ >> 0x30),auVar13._0_7_);
  auVar14._8_7_ = auVar345._8_7_;
  auVar14._0_8_ = uVar340;
  Var341 = CONCAT19((char)uVar178,auVar14._0_9_);
  auVar15._10_5_ = auVar345._10_5_;
  auVar15._0_10_ = Var341;
  bVar75 = (byte)((ulong)uVar178 >> 0x10);
  auVar342._0_11_ = auVar15._0_11_;
  auVar342[0xb] = bVar75;
  auVar16._12_3_ = auVar345._12_3_;
  auVar16._0_12_ = auVar342;
  bVar83 = (byte)((ulong)uVar178 >> 0x20);
  auVar344._0_13_ = auVar16._0_13_;
  auVar344[0xd] = bVar83;
  auVar346[0xe] = uVar44;
  auVar346._0_14_ = auVar344;
  auVar346[0xf] = (char)((ulong)uVar178 >> 0x30);
  auVar25._1_13_ = auVar112._3_13_;
  auVar25[0] = (char)((ulong)auVar112._0_8_ >> 0x18);
  auVar96._0_4_ = auVar25._0_4_ << 0x10;
  uVar57 = (undefined1)((ulong)auVar112._0_8_ >> 0x28);
  auVar96._5_11_ = auVar112._5_11_;
  auVar96[4] = uVar57;
  auVar98._7_9_ = auVar112._7_9_;
  auVar98._0_6_ = auVar96._0_6_;
  auVar98[6] = (char)((ulong)auVar112._0_8_ >> 0x38);
  auVar100._9_7_ = (undefined7)((ulong)uVar132 >> 8);
  auVar100._0_8_ = auVar98._0_8_;
  auVar100[8] = (char)((ulong)uVar132 >> 8);
  bVar166 = (byte)((ulong)uVar132 >> 0x18);
  auVar337._11_5_ = (undefined5)((ulong)uVar132 >> 0x18);
  auVar337._0_10_ = auVar100._0_10_;
  auVar337[10] = bVar166;
  bVar174 = (byte)((ulong)uVar132 >> 0x28);
  auVar361._13_3_ = (undefined3)((ulong)uVar132 >> 0x28);
  auVar361._0_12_ = auVar337._0_12_;
  auVar361[0xc] = bVar174;
  uVar44 = (undefined1)((ulong)uVar132 >> 0x38);
  auVar319._0_14_ = auVar361._0_14_;
  auVar319[0xe] = uVar44;
  auVar319[0xf] = uVar44;
  auVar161._2_14_ = auVar319._2_14_;
  auVar161._0_2_ = CONCAT11((char)((ulong)auVar136._0_8_ >> 8),(char)((ulong)auVar112._0_8_ >> 8));
  auVar95._4_12_ = auVar319._4_12_;
  auVar95._0_4_ = CONCAT13((char)((ulong)auVar136._0_8_ >> 0x18),auVar161._0_3_);
  uVar71 = (undefined1)((ulong)auVar136._0_8_ >> 0x28);
  auVar97._6_10_ = auVar319._6_10_;
  auVar97._0_6_ = CONCAT15(uVar71,auVar95._0_5_);
  auVar99._8_8_ = auVar319._8_8_;
  auVar99._0_8_ = CONCAT17((char)((ulong)auVar136._0_8_ >> 0x38),auVar97._0_7_);
  auVar101._10_6_ = auVar319._10_6_;
  auVar101._0_10_ = CONCAT19((char)((ulong)uVar178 >> 8),auVar99._0_9_);
  bVar79 = (byte)((ulong)uVar178 >> 0x18);
  auVar336._12_4_ = auVar319._12_4_;
  auVar92._0_11_ = auVar101._0_11_;
  auVar92[0xb] = bVar79;
  auVar336._0_12_ = auVar92;
  bVar87 = (byte)((ulong)uVar178 >> 0x28);
  auVar359._14_2_ = auVar319._14_2_;
  auVar94._0_13_ = auVar336._0_13_;
  auVar94[0xd] = bVar87;
  auVar359._0_14_ = auVar94;
  uVar45 = (undefined1)((ulong)uVar178 >> 0x38);
  auVar238._0_15_ = auVar359._0_15_;
  auVar238[0xf] = uVar45;
  uVar44 = (undefined1)((ulong)auVar182._0_8_ >> 0x10);
  auVar26._1_13_ = auVar136._3_13_;
  auVar26[0] = uVar44;
  auVar139._0_4_ = auVar26._0_4_ << 0x10;
  uVar53 = (undefined1)((ulong)auVar182._0_8_ >> 0x20);
  auVar139._5_11_ = auVar136._5_11_;
  auVar139[4] = uVar53;
  auVar141._7_9_ = auVar136._7_9_;
  auVar141._0_6_ = auVar139._0_6_;
  auVar141[6] = (char)((ulong)auVar182._0_8_ >> 0x30);
  auVar143._9_7_ = (undefined7)((ulong)uVar178 >> 8);
  auVar143._0_8_ = auVar141._0_8_;
  auVar143[8] = (char)uVar209;
  bVar163 = (byte)((ulong)uVar209 >> 0x10);
  auVar145._11_5_ = (undefined5)((ulong)uVar178 >> 0x18);
  auVar145._0_10_ = auVar143._0_10_;
  auVar145[10] = bVar163;
  bVar171 = (byte)((ulong)uVar209 >> 0x20);
  auVar147._13_3_ = (undefined3)((ulong)uVar178 >> 0x28);
  auVar147._0_12_ = auVar145._0_12_;
  auVar147[0xc] = bVar171;
  auVar149._0_14_ = auVar147._0_14_;
  auVar149[0xe] = (char)((ulong)uVar209 >> 0x30);
  auVar149[0xf] = uVar45;
  auVar137._2_14_ = auVar149._2_14_;
  auVar137._0_2_ = CONCAT11((char)auVar213._0_8_,(char)auVar182._0_8_);
  uVar62 = (undefined1)((ulong)auVar213._0_8_ >> 0x10);
  auVar138._4_12_ = auVar149._4_12_;
  auVar138._0_4_ = CONCAT13(uVar62,auVar137._0_3_);
  uVar68 = (undefined1)((ulong)auVar213._0_8_ >> 0x20);
  auVar140._6_10_ = auVar149._6_10_;
  auVar140._0_6_ = CONCAT15(uVar68,auVar138._0_5_);
  auVar142._8_8_ = auVar149._8_8_;
  auVar142._0_8_ = CONCAT17((char)((ulong)auVar213._0_8_ >> 0x30),auVar140._0_7_);
  auVar144._10_6_ = auVar149._10_6_;
  auVar144._0_10_ = CONCAT19((char)uVar241,auVar142._0_9_);
  bVar76 = (byte)((ulong)uVar241 >> 0x10);
  auVar146._12_4_ = auVar149._12_4_;
  auVar133._0_11_ = auVar144._0_11_;
  auVar133[0xb] = bVar76;
  auVar146._0_12_ = auVar133;
  bVar84 = (byte)((ulong)uVar241 >> 0x20);
  auVar148._14_2_ = auVar149._14_2_;
  auVar135._0_13_ = auVar146._0_13_;
  auVar135[0xd] = bVar84;
  auVar148._0_14_ = auVar135;
  auVar150._0_15_ = auVar148._0_15_;
  auVar150[0xf] = (char)((ulong)uVar241 >> 0x30);
  uVar49 = (undefined1)((ulong)auVar182._0_8_ >> 0x18);
  auVar27._1_13_ = auVar182._3_13_;
  auVar27[0] = uVar49;
  auVar185._0_4_ = auVar27._0_4_ << 0x10;
  uVar58 = (undefined1)((ulong)auVar182._0_8_ >> 0x28);
  auVar185._5_11_ = auVar182._5_11_;
  auVar185[4] = uVar58;
  auVar187._7_9_ = auVar182._7_9_;
  auVar187._0_6_ = auVar185._0_6_;
  auVar187[6] = (char)((ulong)auVar182._0_8_ >> 0x38);
  auVar189._9_7_ = (undefined7)((ulong)uVar209 >> 8);
  auVar189._0_8_ = auVar187._0_8_;
  auVar189[8] = (char)((ulong)uVar209 >> 8);
  bVar167 = (byte)((ulong)uVar209 >> 0x18);
  auVar191._11_5_ = (undefined5)((ulong)uVar209 >> 0x18);
  auVar191._0_10_ = auVar189._0_10_;
  auVar191[10] = bVar167;
  bVar175 = (byte)((ulong)uVar209 >> 0x28);
  auVar193._13_3_ = (undefined3)((ulong)uVar209 >> 0x28);
  auVar193._0_12_ = auVar191._0_12_;
  auVar193[0xc] = bVar175;
  uVar45 = (undefined1)((ulong)uVar209 >> 0x38);
  auVar195._0_14_ = auVar193._0_14_;
  auVar195[0xe] = uVar45;
  auVar195[0xf] = uVar45;
  auVar183._2_14_ = auVar195._2_14_;
  auVar183._0_2_ = CONCAT11((char)((ulong)auVar213._0_8_ >> 8),(char)((ulong)auVar182._0_8_ >> 8));
  uVar65 = (undefined1)((ulong)auVar213._0_8_ >> 0x18);
  auVar184._4_12_ = auVar195._4_12_;
  auVar184._0_4_ = CONCAT13(uVar65,auVar183._0_3_);
  uVar72 = (undefined1)((ulong)auVar213._0_8_ >> 0x28);
  auVar186._6_10_ = auVar195._6_10_;
  auVar186._0_6_ = CONCAT15(uVar72,auVar184._0_5_);
  auVar188._8_8_ = auVar195._8_8_;
  auVar188._0_8_ = CONCAT17((char)((ulong)auVar213._0_8_ >> 0x38),auVar186._0_7_);
  auVar190._10_6_ = auVar195._10_6_;
  auVar190._0_10_ = CONCAT19((char)((ulong)uVar241 >> 8),auVar188._0_9_);
  bVar80 = (byte)((ulong)uVar241 >> 0x18);
  auVar192._12_4_ = auVar195._12_4_;
  auVar179._0_11_ = auVar190._0_11_;
  auVar179[0xb] = bVar80;
  auVar192._0_12_ = auVar179;
  bVar88 = (byte)((ulong)uVar241 >> 0x28);
  auVar194._14_2_ = auVar195._14_2_;
  auVar181._0_13_ = auVar192._0_13_;
  auVar181[0xd] = bVar88;
  auVar194._0_14_ = auVar181;
  uVar46 = (undefined1)((ulong)uVar241 >> 0x38);
  auVar196._0_15_ = auVar194._0_15_;
  auVar196[0xf] = uVar46;
  uVar45 = (undefined1)((ulong)auVar245._0_8_ >> 0x10);
  auVar28._1_13_ = auVar213._3_13_;
  auVar28[0] = uVar45;
  auVar216._0_4_ = auVar28._0_4_ << 0x10;
  uVar54 = (undefined1)((ulong)auVar245._0_8_ >> 0x20);
  auVar216._5_11_ = auVar213._5_11_;
  auVar216[4] = uVar54;
  auVar218._7_9_ = auVar213._7_9_;
  auVar218._0_6_ = auVar216._0_6_;
  auVar218[6] = (char)((ulong)auVar245._0_8_ >> 0x30);
  auVar220._9_7_ = (undefined7)((ulong)uVar241 >> 8);
  auVar220._0_8_ = auVar218._0_8_;
  auVar220[8] = (char)uVar267;
  bVar164 = (byte)((ulong)uVar267 >> 0x10);
  auVar222._11_5_ = (undefined5)((ulong)uVar241 >> 0x18);
  auVar222._0_10_ = auVar220._0_10_;
  auVar222[10] = bVar164;
  bVar172 = (byte)((ulong)uVar267 >> 0x20);
  auVar224._13_3_ = (undefined3)((ulong)uVar241 >> 0x28);
  auVar224._0_12_ = auVar222._0_12_;
  auVar224[0xc] = bVar172;
  auVar226._0_14_ = auVar224._0_14_;
  auVar226[0xe] = (char)((ulong)uVar267 >> 0x30);
  auVar226[0xf] = uVar46;
  auVar214._2_14_ = auVar226._2_14_;
  auVar214._0_2_ = CONCAT11((char)auVar271._0_8_,(char)auVar245._0_8_);
  uVar63 = (undefined1)((ulong)auVar271._0_8_ >> 0x10);
  auVar215._4_12_ = auVar226._4_12_;
  auVar215._0_4_ = CONCAT13(uVar63,auVar214._0_3_);
  uVar69 = (undefined1)((ulong)auVar271._0_8_ >> 0x20);
  auVar217._6_10_ = auVar226._6_10_;
  auVar217._0_6_ = CONCAT15(uVar69,auVar215._0_5_);
  auVar219._8_8_ = auVar226._8_8_;
  auVar219._0_8_ = CONCAT17((char)((ulong)auVar271._0_8_ >> 0x30),auVar217._0_7_);
  auVar221._10_6_ = auVar226._10_6_;
  auVar221._0_10_ = CONCAT19((char)uVar297,auVar219._0_9_);
  bVar77 = (byte)((ulong)uVar297 >> 0x10);
  auVar223._12_4_ = auVar226._12_4_;
  auVar210._0_11_ = auVar221._0_11_;
  auVar210[0xb] = bVar77;
  auVar223._0_12_ = auVar210;
  bVar85 = (byte)((ulong)uVar297 >> 0x20);
  auVar225._14_2_ = auVar226._14_2_;
  auVar212._0_13_ = auVar223._0_13_;
  auVar212[0xd] = bVar85;
  auVar225._0_14_ = auVar212;
  auVar227._0_15_ = auVar225._0_15_;
  auVar227[0xf] = (char)((ulong)uVar297 >> 0x30);
  uVar50 = (undefined1)((ulong)auVar245._0_8_ >> 0x18);
  auVar29._1_13_ = auVar245._3_13_;
  auVar29[0] = uVar50;
  auVar248._0_4_ = auVar29._0_4_ << 0x10;
  uVar59 = (undefined1)((ulong)auVar245._0_8_ >> 0x28);
  auVar248._5_11_ = auVar245._5_11_;
  auVar248[4] = uVar59;
  auVar250._7_9_ = auVar245._7_9_;
  auVar250._0_6_ = auVar248._0_6_;
  auVar250[6] = (char)((ulong)auVar245._0_8_ >> 0x38);
  auVar252._9_7_ = (undefined7)((ulong)uVar267 >> 8);
  auVar252._0_8_ = auVar250._0_8_;
  auVar252[8] = (char)((ulong)uVar267 >> 8);
  bVar168 = (byte)((ulong)uVar267 >> 0x18);
  auVar254._11_5_ = (undefined5)((ulong)uVar267 >> 0x18);
  auVar254._0_10_ = auVar252._0_10_;
  auVar254[10] = bVar168;
  bVar176 = (byte)((ulong)uVar267 >> 0x28);
  auVar256._13_3_ = (undefined3)((ulong)uVar267 >> 0x28);
  auVar256._0_12_ = auVar254._0_12_;
  auVar256[0xc] = bVar176;
  uVar46 = (undefined1)((ulong)uVar267 >> 0x38);
  auVar258._0_14_ = auVar256._0_14_;
  auVar258[0xe] = uVar46;
  auVar258[0xf] = uVar46;
  auVar246._2_14_ = auVar258._2_14_;
  auVar246._0_2_ = CONCAT11((char)((ulong)auVar271._0_8_ >> 8),(char)((ulong)auVar245._0_8_ >> 8));
  uVar66 = (undefined1)((ulong)auVar271._0_8_ >> 0x18);
  auVar247._4_12_ = auVar258._4_12_;
  auVar247._0_4_ = CONCAT13(uVar66,auVar246._0_3_);
  uVar73 = (undefined1)((ulong)auVar271._0_8_ >> 0x28);
  auVar249._6_10_ = auVar258._6_10_;
  auVar249._0_6_ = CONCAT15(uVar73,auVar247._0_5_);
  auVar251._8_8_ = auVar258._8_8_;
  auVar251._0_8_ = CONCAT17((char)((ulong)auVar271._0_8_ >> 0x38),auVar249._0_7_);
  auVar253._10_6_ = auVar258._10_6_;
  auVar253._0_10_ = CONCAT19((char)((ulong)uVar297 >> 8),auVar251._0_9_);
  bVar81 = (byte)((ulong)uVar297 >> 0x18);
  auVar255._12_4_ = auVar258._12_4_;
  auVar242._0_11_ = auVar253._0_11_;
  auVar242[0xb] = bVar81;
  auVar255._0_12_ = auVar242;
  bVar89 = (byte)((ulong)uVar297 >> 0x28);
  auVar257._14_2_ = auVar258._14_2_;
  auVar244._0_13_ = auVar255._0_13_;
  auVar244[0xd] = bVar89;
  auVar257._0_14_ = auVar244;
  uVar51 = (undefined1)((ulong)uVar297 >> 0x38);
  auVar259._0_15_ = auVar257._0_15_;
  auVar259[0xf] = uVar51;
  uVar46 = (undefined1)((ulong)auVar300._0_8_ >> 0x10);
  auVar30._1_13_ = auVar271._3_13_;
  auVar30[0] = uVar46;
  auVar274._0_4_ = auVar30._0_4_ << 0x10;
  uVar55 = (undefined1)((ulong)auVar300._0_8_ >> 0x20);
  auVar274._5_11_ = auVar271._5_11_;
  auVar274[4] = uVar55;
  auVar276._7_9_ = auVar271._7_9_;
  auVar276._0_6_ = auVar274._0_6_;
  auVar276[6] = (char)((ulong)auVar300._0_8_ >> 0x30);
  auVar278._9_7_ = (undefined7)((ulong)uVar297 >> 8);
  auVar278._0_8_ = auVar276._0_8_;
  auVar278[8] = (char)uVar321;
  bVar165 = (byte)((ulong)uVar321 >> 0x10);
  auVar280._11_5_ = (undefined5)((ulong)uVar297 >> 0x18);
  auVar280._0_10_ = auVar278._0_10_;
  auVar280[10] = bVar165;
  bVar173 = (byte)((ulong)uVar321 >> 0x20);
  auVar282._13_3_ = (undefined3)((ulong)uVar297 >> 0x28);
  auVar282._0_12_ = auVar280._0_12_;
  auVar282[0xc] = bVar173;
  auVar284._0_14_ = auVar282._0_14_;
  auVar284[0xe] = (char)((ulong)uVar321 >> 0x30);
  auVar284[0xf] = uVar51;
  auVar272._2_14_ = auVar284._2_14_;
  auVar272._0_2_ = CONCAT11((char)auVar323._0_8_,(char)auVar300._0_8_);
  uVar64 = (undefined1)((ulong)auVar323._0_8_ >> 0x10);
  auVar273._4_12_ = auVar284._4_12_;
  auVar273._0_4_ = CONCAT13(uVar64,auVar272._0_3_);
  uVar70 = (undefined1)((ulong)auVar323._0_8_ >> 0x20);
  auVar275._6_10_ = auVar284._6_10_;
  auVar275._0_6_ = CONCAT15(uVar70,auVar273._0_5_);
  auVar277._8_8_ = auVar284._8_8_;
  auVar277._0_8_ = CONCAT17((char)((ulong)auVar323._0_8_ >> 0x30),auVar275._0_7_);
  auVar279._10_6_ = auVar284._10_6_;
  auVar279._0_10_ = CONCAT19((char)uVar339,auVar277._0_9_);
  bVar78 = (byte)((ulong)uVar339 >> 0x10);
  auVar281._12_4_ = auVar284._12_4_;
  auVar268._0_11_ = auVar279._0_11_;
  auVar268[0xb] = bVar78;
  auVar281._0_12_ = auVar268;
  bVar86 = (byte)((ulong)uVar339 >> 0x20);
  auVar283._14_2_ = auVar284._14_2_;
  auVar270._0_13_ = auVar281._0_13_;
  auVar270[0xd] = bVar86;
  auVar283._0_14_ = auVar270;
  auVar285._0_15_ = auVar283._0_15_;
  auVar285[0xf] = (char)((ulong)uVar339 >> 0x30);
  uVar51 = (undefined1)((ulong)auVar300._0_8_ >> 0x18);
  auVar31._1_13_ = auVar300._3_13_;
  auVar31[0] = uVar51;
  auVar303._0_4_ = auVar31._0_4_ << 0x10;
  uVar60 = (undefined1)((ulong)auVar300._0_8_ >> 0x28);
  auVar303._5_11_ = auVar300._5_11_;
  auVar303[4] = uVar60;
  auVar305._7_9_ = auVar300._7_9_;
  auVar305._0_6_ = auVar303._0_6_;
  auVar305[6] = (char)((ulong)auVar300._0_8_ >> 0x38);
  auVar307._9_7_ = (undefined7)((ulong)uVar321 >> 8);
  auVar307._0_8_ = auVar305._0_8_;
  auVar307[8] = (char)((ulong)uVar321 >> 8);
  bVar169 = (byte)((ulong)uVar321 >> 0x18);
  auVar309._11_5_ = (undefined5)((ulong)uVar321 >> 0x18);
  auVar309._0_10_ = auVar307._0_10_;
  auVar309[10] = bVar169;
  bVar177 = (byte)((ulong)uVar321 >> 0x28);
  auVar311._13_3_ = (undefined3)((ulong)uVar321 >> 0x28);
  auVar311._0_12_ = auVar309._0_12_;
  auVar311[0xc] = bVar177;
  uVar61 = (undefined1)((ulong)uVar321 >> 0x38);
  auVar313._0_14_ = auVar311._0_14_;
  auVar313[0xe] = uVar61;
  auVar313[0xf] = uVar61;
  auVar301._2_14_ = auVar313._2_14_;
  auVar301._0_2_ = CONCAT11((char)((ulong)auVar323._0_8_ >> 8),(char)((ulong)auVar300._0_8_ >> 8));
  uVar61 = (undefined1)((ulong)auVar323._0_8_ >> 0x18);
  auVar302._4_12_ = auVar313._4_12_;
  auVar302._0_4_ = CONCAT13(uVar61,auVar301._0_3_);
  uVar74 = (undefined1)((ulong)auVar323._0_8_ >> 0x28);
  auVar304._6_10_ = auVar313._6_10_;
  auVar304._0_6_ = CONCAT15(uVar74,auVar302._0_5_);
  auVar306._8_8_ = auVar313._8_8_;
  auVar306._0_8_ = CONCAT17((char)((ulong)auVar323._0_8_ >> 0x38),auVar304._0_7_);
  auVar308._10_6_ = auVar313._10_6_;
  auVar308._0_10_ = CONCAT19((char)((ulong)uVar339 >> 8),auVar306._0_9_);
  bVar82 = (byte)((ulong)uVar339 >> 0x18);
  auVar310._12_4_ = auVar313._12_4_;
  auVar298._0_11_ = auVar308._0_11_;
  auVar298[0xb] = bVar82;
  auVar310._0_12_ = auVar298;
  bVar90 = (byte)((ulong)uVar339 >> 0x28);
  auVar312._14_2_ = auVar313._14_2_;
  auVar299._0_13_ = auVar310._0_13_;
  auVar299[0xd] = bVar90;
  auVar312._0_14_ = auVar299;
  auVar314._0_15_ = auVar312._0_15_;
  auVar314[0xf] = uVar10;
  auVar32._2_10_ = auVar323._6_10_;
  auVar32._0_2_ = (short)((uint6)uVar338 >> 0x20);
  auVar326._0_8_ = auVar32._0_8_ << 0x20;
  auVar326._10_6_ = (undefined6)((ulong)uVar339 >> 0x10);
  auVar326._8_2_ = (short)((unkuint10)Var341 >> 0x40);
  auVar328._14_2_ = (undefined2)((ulong)uVar339 >> 0x30);
  auVar328._0_12_ = auVar326._0_12_;
  auVar328._12_2_ = auVar344._12_2_;
  auVar324._4_12_ = auVar328._4_12_;
  auVar324._0_4_ = CONCAT22(auVar137._0_2_,uVar47);
  auVar325._8_8_ = auVar328._8_8_;
  auVar325._0_8_ = CONCAT26((short)((uint6)auVar140._0_6_ >> 0x20),auVar324._0_6_);
  auVar327._12_4_ = auVar328._12_4_;
  auVar322._0_10_ = auVar325._0_10_;
  auVar322._10_2_ = (short)((unkuint10)auVar144._0_10_ >> 0x40);
  auVar327._0_12_ = auVar322;
  auVar329._0_14_ = auVar327._0_14_;
  auVar329._14_2_ = auVar135._12_2_;
  uVar47 = (undefined2)((uint)uVar56 >> 0x10);
  auVar33._2_10_ = auVar150._6_10_;
  auVar33._0_2_ = (short)((ulong)uVar340 >> 0x30);
  auVar153._0_8_ = auVar33._0_8_ << 0x20;
  auVar153._10_6_ = auVar150._10_6_;
  auVar153._8_2_ = auVar342._10_2_;
  auVar155._14_2_ = auVar150._14_2_;
  auVar155._0_12_ = auVar153._0_12_;
  auVar155._12_2_ = auVar346._14_2_;
  auVar151._4_12_ = auVar155._4_12_;
  auVar151._0_4_ = CONCAT22((short)((uint)auVar138._0_4_ >> 0x10),uVar47);
  auVar152._8_8_ = auVar155._8_8_;
  auVar152._0_8_ = CONCAT26((short)((ulong)auVar142._0_8_ >> 0x30),auVar151._0_6_);
  auVar154._12_4_ = auVar155._12_4_;
  auVar134._0_10_ = auVar152._0_10_;
  auVar134._10_2_ = auVar133._10_2_;
  auVar154._0_12_ = auVar134;
  auVar156._0_14_ = auVar154._0_14_;
  auVar156._14_2_ = auVar155._14_2_;
  auVar34._2_10_ = auVar346._6_10_;
  auVar34._0_2_ = (short)((uint6)auVar97._0_6_ >> 0x20);
  auVar349._0_8_ = auVar34._0_8_ << 0x20;
  auVar349._10_6_ = auVar346._10_6_;
  auVar349._8_2_ = (short)((unkuint10)auVar101._0_10_ >> 0x40);
  auVar351._0_12_ = auVar349._0_12_;
  auVar351._12_2_ = auVar94._12_2_;
  auVar351._14_2_ = auVar346._14_2_;
  auVar347._4_12_ = auVar351._4_12_;
  auVar347._0_4_ = CONCAT22(auVar183._0_2_,auVar161._0_2_);
  auVar348._8_8_ = auVar351._8_8_;
  auVar348._0_8_ = CONCAT26((short)((uint6)auVar186._0_6_ >> 0x20),auVar347._0_6_);
  auVar350._12_4_ = auVar351._12_4_;
  auVar343._0_10_ = auVar348._0_10_;
  auVar343._10_2_ = (short)((unkuint10)auVar190._0_10_ >> 0x40);
  auVar350._0_12_ = auVar343;
  auVar352._0_14_ = auVar350._0_14_;
  auVar352._14_2_ = auVar181._12_2_;
  uVar48 = (undefined2)((uint)auVar95._0_4_ >> 0x10);
  auVar35._2_10_ = auVar238._6_10_;
  auVar35._0_2_ = (short)((ulong)auVar99._0_8_ >> 0x30);
  auVar104._0_8_ = auVar35._0_8_ << 0x20;
  auVar104._10_6_ = auVar238._10_6_;
  auVar104._8_2_ = auVar92._10_2_;
  auVar106._0_12_ = auVar104._0_12_;
  auVar106._12_2_ = auVar238._14_2_;
  auVar106._14_2_ = auVar238._14_2_;
  auVar102._4_12_ = auVar106._4_12_;
  auVar102._0_4_ = CONCAT22((short)((uint)auVar184._0_4_ >> 0x10),uVar48);
  auVar103._8_8_ = auVar106._8_8_;
  auVar103._0_8_ = CONCAT26((short)((ulong)auVar188._0_8_ >> 0x30),auVar102._0_6_);
  auVar105._12_4_ = auVar106._12_4_;
  auVar93._0_10_ = auVar103._0_10_;
  auVar93._10_2_ = auVar179._10_2_;
  auVar105._0_12_ = auVar93;
  auVar107._0_14_ = auVar105._0_14_;
  auVar107._14_2_ = auVar196._14_2_;
  auVar36._2_10_ = auVar196._6_10_;
  auVar36._0_2_ = (short)((uint6)auVar217._0_6_ >> 0x20);
  auVar199._0_8_ = auVar36._0_8_ << 0x20;
  auVar199._10_6_ = auVar196._10_6_;
  auVar199._8_2_ = (short)((unkuint10)auVar221._0_10_ >> 0x40);
  auVar201._0_12_ = auVar199._0_12_;
  auVar201._12_2_ = auVar212._12_2_;
  auVar201._14_2_ = auVar196._14_2_;
  auVar197._4_12_ = auVar201._4_12_;
  auVar197._0_4_ = CONCAT22(auVar272._0_2_,auVar214._0_2_);
  auVar198._8_8_ = auVar201._8_8_;
  auVar198._0_8_ = CONCAT26((short)((uint6)auVar275._0_6_ >> 0x20),auVar197._0_6_);
  auVar200._12_4_ = auVar201._12_4_;
  auVar180._0_10_ = auVar198._0_10_;
  auVar180._10_2_ = (short)((unkuint10)auVar279._0_10_ >> 0x40);
  auVar200._0_12_ = auVar180;
  auVar202._0_14_ = auVar200._0_14_;
  auVar202._14_2_ = auVar270._12_2_;
  auVar37._2_10_ = auVar227._6_10_;
  auVar37._0_2_ = (short)((ulong)auVar219._0_8_ >> 0x30);
  auVar230._0_8_ = auVar37._0_8_ << 0x20;
  auVar230._10_6_ = auVar227._10_6_;
  auVar230._8_2_ = auVar210._10_2_;
  auVar232._0_12_ = auVar230._0_12_;
  auVar232._12_2_ = auVar227._14_2_;
  auVar232._14_2_ = auVar227._14_2_;
  auVar228._4_12_ = auVar232._4_12_;
  auVar228._0_4_ =
       CONCAT22((short)((uint)auVar273._0_4_ >> 0x10),(short)((uint)auVar215._0_4_ >> 0x10));
  auVar229._8_8_ = auVar232._8_8_;
  auVar229._0_8_ = CONCAT26((short)((ulong)auVar277._0_8_ >> 0x30),auVar228._0_6_);
  auVar231._12_4_ = auVar232._12_4_;
  auVar211._0_10_ = auVar229._0_10_;
  auVar211._10_2_ = auVar268._10_2_;
  auVar231._0_12_ = auVar211;
  auVar233._0_14_ = auVar231._0_14_;
  auVar233._14_2_ = auVar285._14_2_;
  auVar38._2_10_ = auVar285._6_10_;
  auVar38._0_2_ = (short)((uint6)auVar249._0_6_ >> 0x20);
  auVar288._0_8_ = auVar38._0_8_ << 0x20;
  auVar288._10_6_ = auVar285._10_6_;
  auVar288._8_2_ = (short)((unkuint10)auVar253._0_10_ >> 0x40);
  auVar290._0_12_ = auVar288._0_12_;
  auVar290._12_2_ = auVar244._12_2_;
  auVar290._14_2_ = auVar285._14_2_;
  auVar286._4_12_ = auVar290._4_12_;
  auVar286._0_4_ = CONCAT22(auVar301._0_2_,auVar246._0_2_);
  auVar287._8_8_ = auVar290._8_8_;
  auVar287._0_8_ = CONCAT26((short)((uint6)auVar304._0_6_ >> 0x20),auVar286._0_6_);
  auVar289._12_4_ = auVar290._12_4_;
  auVar269._0_10_ = auVar287._0_10_;
  auVar269._10_2_ = (short)((unkuint10)auVar308._0_10_ >> 0x40);
  auVar289._0_12_ = auVar269;
  auVar291._0_14_ = auVar289._0_14_;
  auVar291._14_2_ = auVar299._12_2_;
  auVar39._2_10_ = auVar259._6_10_;
  auVar39._0_2_ = (short)((ulong)auVar251._0_8_ >> 0x30);
  auVar262._0_8_ = auVar39._0_8_ << 0x20;
  auVar262._10_6_ = auVar259._10_6_;
  auVar262._8_2_ = auVar242._10_2_;
  auVar264._0_12_ = auVar262._0_12_;
  auVar264._12_2_ = auVar259._14_2_;
  auVar264._14_2_ = auVar259._14_2_;
  auVar260._4_12_ = auVar264._4_12_;
  auVar260._0_4_ =
       CONCAT22((short)((uint)auVar302._0_4_ >> 0x10),(short)((uint)auVar247._0_4_ >> 0x10));
  auVar261._8_8_ = auVar264._8_8_;
  auVar261._0_8_ = CONCAT26((short)((ulong)auVar306._0_8_ >> 0x30),auVar260._0_6_);
  auVar263._12_4_ = auVar264._12_4_;
  auVar243._0_10_ = auVar261._0_10_;
  auVar243._10_2_ = auVar298._10_2_;
  auVar263._0_12_ = auVar243;
  auVar265._0_14_ = auVar263._0_14_;
  auVar265._14_2_ = auVar314._14_2_;
  auVar315._4_12_ = auVar314._4_12_;
  auVar315._0_4_ = auVar324._0_4_;
  auVar317._12_4_ = auVar314._12_4_;
  auVar317._0_8_ = auVar315._0_8_;
  auVar317._8_4_ = auVar322._8_4_;
  auVar316._8_8_ = auVar317._8_8_;
  auVar316._4_4_ = auVar197._0_4_;
  auVar316._0_4_ = auVar324._0_4_;
  auVar318._0_12_ = auVar316._0_12_;
  auVar318._12_4_ = auVar180._8_4_;
  uVar56 = (undefined4)((ulong)auVar325._0_8_ >> 0x20);
  auVar203._4_12_ = auVar202._4_12_;
  auVar203._0_4_ = uVar56;
  auVar205._12_4_ = auVar202._12_4_;
  auVar205._0_8_ = auVar203._0_8_;
  auVar205._8_4_ = auVar329._12_4_;
  auVar204._8_8_ = auVar205._8_8_;
  auVar204._4_4_ = (int)((ulong)auVar198._0_8_ >> 0x20);
  auVar204._0_4_ = uVar56;
  auVar206._0_12_ = auVar204._0_12_;
  auVar206._12_4_ = auVar205._12_4_;
  auVar330._4_12_ = auVar329._4_12_;
  auVar330._0_4_ = auVar151._0_4_;
  auVar332._0_8_ = auVar330._0_8_;
  auVar332._8_4_ = auVar134._8_4_;
  auVar332._12_4_ = auVar329._12_4_;
  auVar331._8_8_ = auVar332._8_8_;
  auVar331._4_4_ = auVar228._0_4_;
  auVar331._0_4_ = auVar151._0_4_;
  auVar333._0_12_ = auVar331._0_12_;
  auVar333._12_4_ = auVar211._8_4_;
  uVar56 = (undefined4)((ulong)auVar152._0_8_ >> 0x20);
  auVar157._4_12_ = auVar156._4_12_;
  auVar157._0_4_ = uVar56;
  auVar159._0_8_ = auVar157._0_8_;
  auVar159._8_4_ = auVar156._12_4_;
  auVar159._12_4_ = auVar156._12_4_;
  auVar158._8_8_ = auVar159._8_8_;
  auVar158._4_4_ = (int)((ulong)auVar229._0_8_ >> 0x20);
  auVar158._0_4_ = uVar56;
  auVar160._0_12_ = auVar158._0_12_;
  auVar160._12_4_ = auVar233._12_4_;
  auVar234._4_12_ = auVar233._4_12_;
  auVar234._0_4_ = auVar347._0_4_;
  auVar236._0_8_ = auVar234._0_8_;
  auVar236._8_4_ = auVar343._8_4_;
  auVar236._12_4_ = auVar233._12_4_;
  auVar235._8_8_ = auVar236._8_8_;
  auVar235._4_4_ = auVar286._0_4_;
  auVar235._0_4_ = auVar347._0_4_;
  auVar237._0_12_ = auVar235._0_12_;
  auVar237._12_4_ = auVar269._8_4_;
  uVar56 = (undefined4)((ulong)auVar348._0_8_ >> 0x20);
  auVar292._4_12_ = auVar291._4_12_;
  auVar292._0_4_ = uVar56;
  auVar294._12_4_ = auVar291._12_4_;
  auVar294._0_8_ = auVar292._0_8_;
  auVar294._8_4_ = auVar352._12_4_;
  auVar293._8_8_ = auVar294._8_8_;
  auVar293._4_4_ = (int)((ulong)auVar287._0_8_ >> 0x20);
  auVar293._0_4_ = uVar56;
  auVar295._0_12_ = auVar293._0_12_;
  auVar295._12_4_ = auVar294._12_4_;
  auVar353._4_12_ = auVar352._4_12_;
  auVar353._0_4_ = auVar102._0_4_;
  auVar355._0_8_ = auVar353._0_8_;
  auVar355._8_4_ = auVar93._8_4_;
  auVar355._12_4_ = auVar352._12_4_;
  auVar354._8_8_ = auVar355._8_8_;
  auVar354._4_4_ = auVar260._0_4_;
  auVar354._0_4_ = auVar102._0_4_;
  auVar356._0_12_ = auVar354._0_12_;
  auVar356._12_4_ = auVar243._8_4_;
  uVar56 = (undefined4)((ulong)auVar103._0_8_ >> 0x20);
  auVar108._4_12_ = auVar107._4_12_;
  auVar108._0_4_ = uVar56;
  auVar110._0_8_ = auVar108._0_8_;
  auVar110._8_4_ = auVar107._12_4_;
  auVar110._12_4_ = auVar107._12_4_;
  auVar109._8_8_ = auVar110._8_8_;
  auVar109._4_4_ = (int)((ulong)auVar261._0_8_ >> 0x20);
  auVar109._0_4_ = uVar56;
  auVar111._0_12_ = auVar109._0_12_;
  auVar111._12_4_ = auVar265._12_4_;
  auVar319 = NEON_uabd(auVar318,auVar237,1);
  auVar238 = NEON_uabd(auVar237,auVar333,1);
  auVar359 = NEON_uabd(auVar333,auVar356,1);
  auVar112 = NEON_uabd(auVar111,auVar160,1);
  auVar161 = NEON_uabd(auVar160,auVar295,1);
  auVar361 = NEON_uabd(auVar295,auVar206,1);
  auVar238 = NEON_umax(auVar319,auVar238,1);
  auVar112 = NEON_umax(auVar359,auVar112,1);
  auVar161 = NEON_umax(auVar161,auVar361,1);
  auVar112 = NEON_umax(auVar238,auVar112,1);
  auVar112 = NEON_umax(auVar112,auVar161,1);
  auVar161 = NEON_uabd(auVar356,auVar206,1);
  auVar238 = NEON_uabd(auVar333,auVar295,1);
  auVar161 = NEON_uqadd(auVar161,auVar161,1);
  auVar266[0] = auVar238[0] >> 1;
  auVar266[1] = auVar238[1] >> 1;
  auVar266[2] = auVar238[2] >> 1;
  auVar266[3] = auVar238[3] >> 1;
  auVar266[4] = auVar238[4] >> 1;
  auVar266[5] = auVar238[5] >> 1;
  auVar266[6] = auVar238[6] >> 1;
  auVar266[7] = auVar238[7] >> 1;
  auVar266[8] = auVar238[8] >> 1;
  auVar266[9] = auVar238[9] >> 1;
  auVar266[10] = auVar238[10] >> 1;
  auVar266[0xb] = auVar238[0xb] >> 1;
  auVar266[0xc] = auVar238[0xc] >> 1;
  auVar266[0xd] = auVar238[0xd] >> 1;
  auVar266[0xe] = auVar238[0xe] >> 1;
  auVar266[0xf] = auVar238[0xf] >> 1;
  auVar161 = NEON_uqadd(auVar161,auVar266,1);
  bVar91 = -(auVar112[0] <= param_5) & -(auVar161[0] <= param_4);
  bVar116 = -(auVar112[1] <= param_5) & -(auVar161[1] <= param_4);
  bVar117 = -(auVar112[2] <= param_5) & -(auVar161[2] <= param_4);
  bVar118 = -(auVar112[3] <= param_5) & -(auVar161[3] <= param_4);
  bVar119 = -(auVar112[4] <= param_5) & -(auVar161[4] <= param_4);
  bVar120 = -(auVar112[5] <= param_5) & -(auVar161[5] <= param_4);
  bVar121 = -(auVar112[6] <= param_5) & -(auVar161[6] <= param_4);
  bVar122 = -(auVar112[7] <= param_5) & -(auVar161[7] <= param_4);
  bVar123 = -(auVar112[8] <= param_5) & -(auVar161[8] <= param_4);
  bVar124 = -(auVar112[9] <= param_5) & -(auVar161[9] <= param_4);
  bVar125 = -(auVar112[10] <= param_5) & -(auVar161[10] <= param_4);
  bVar126 = -(auVar112[0xb] <= param_5) & -(auVar161[0xb] <= param_4);
  bVar127 = -(auVar112[0xc] <= param_5) & -(auVar161[0xc] <= param_4);
  bVar128 = -(auVar112[0xd] <= param_5) & -(auVar161[0xd] <= param_4);
  bVar129 = -(auVar112[0xe] <= param_5) & -(auVar161[0xe] <= param_4);
  bVar130 = -(auVar112[0xf] <= param_5) & -(auVar161[0xf] <= param_4);
  auVar112 = NEON_umax(auVar359,auVar361,1);
  auVar320._0_8_ =
       CONCAT17(uVar64,CONCAT16(uVar46,CONCAT15(uVar63,CONCAT14(uVar45,CONCAT13(uVar62,CONCAT12(
                                                  uVar44,uVar47)))))) ^ 0x8080808080808080;
  auVar320[8] = bVar131 ^ 0x80;
  auVar320[9] = bVar75 ^ 0x80;
  auVar320[10] = bVar163 ^ 0x80;
  auVar320[0xb] = bVar76 ^ 0x80;
  auVar320[0xc] = bVar164 ^ 0x80;
  auVar320[0xd] = bVar77 ^ 0x80;
  auVar320[0xe] = bVar165 ^ 0x80;
  auVar320[0xf] = bVar78 ^ 0x80;
  auVar239._0_8_ =
       CONCAT17(uVar61,CONCAT16(uVar51,CONCAT15(uVar66,CONCAT14(uVar50,CONCAT13(uVar65,CONCAT12(
                                                  uVar49,uVar48)))))) ^ 0x8080808080808080;
  auVar239[8] = bVar166 ^ 0x80;
  auVar239[9] = bVar79 ^ 0x80;
  auVar239[10] = bVar167 ^ 0x80;
  auVar239[0xb] = bVar80 ^ 0x80;
  auVar239[0xc] = bVar168 ^ 0x80;
  auVar239[0xd] = bVar81 ^ 0x80;
  auVar239[0xe] = bVar169 ^ 0x80;
  auVar239[0xf] = bVar82 ^ 0x80;
  auVar207._0_8_ =
       CONCAT17(uVar70,CONCAT16(uVar55,CONCAT15(uVar69,CONCAT14(uVar54,CONCAT13(uVar68,CONCAT12(
                                                  uVar53,CONCAT11(uVar67,uVar52))))))) ^
       0x8080808080808080;
  auVar207[8] = bVar170 ^ 0x80;
  auVar207[9] = bVar83 ^ 0x80;
  auVar207[10] = bVar171 ^ 0x80;
  auVar207[0xb] = bVar84 ^ 0x80;
  auVar207[0xc] = bVar172 ^ 0x80;
  auVar207[0xd] = bVar85 ^ 0x80;
  auVar207[0xe] = bVar173 ^ 0x80;
  auVar207[0xf] = bVar86 ^ 0x80;
  auVar296._0_8_ =
       CONCAT17(uVar74,CONCAT16(uVar60,CONCAT15(uVar73,CONCAT14(uVar59,CONCAT13(uVar72,CONCAT12(
                                                  uVar58,CONCAT11(uVar71,uVar57))))))) ^
       0x8080808080808080;
  auVar296[8] = bVar174 ^ 0x80;
  auVar296[9] = bVar87 ^ 0x80;
  auVar296[10] = bVar175 ^ 0x80;
  auVar296[0xb] = bVar88 ^ 0x80;
  auVar296[0xc] = bVar176 ^ 0x80;
  auVar296[0xd] = bVar89 ^ 0x80;
  auVar296[0xe] = bVar177 ^ 0x80;
  auVar296[0xf] = bVar90 ^ 0x80;
  bVar131 = -(param_6 < auVar112[0]) & bVar91;
  bVar163 = -(param_6 < auVar112[1]) & bVar116;
  bVar164 = -(param_6 < auVar112[2]) & bVar117;
  bVar165 = -(param_6 < auVar112[3]) & bVar118;
  bVar166 = -(param_6 < auVar112[4]) & bVar119;
  bVar167 = -(param_6 < auVar112[5]) & bVar120;
  bVar168 = -(param_6 < auVar112[6]) & bVar121;
  bVar169 = -(param_6 < auVar112[7]) & bVar122;
  bVar170 = -(param_6 < auVar112[8]) & bVar123;
  bVar171 = -(param_6 < auVar112[9]) & bVar124;
  bVar172 = -(param_6 < auVar112[10]) & bVar125;
  bVar173 = -(param_6 < auVar112[0xb]) & bVar126;
  bVar174 = -(param_6 < auVar112[0xc]) & bVar127;
  bVar175 = -(param_6 < auVar112[0xd]) & bVar128;
  bVar176 = -(param_6 < auVar112[0xe]) & bVar129;
  bVar177 = -(param_6 < auVar112[0xf]) & bVar130;
  auVar112 = NEON_sqsub(auVar207,auVar239,1);
  auVar161 = NEON_sqsub(auVar320,auVar296,1);
  auVar161 = NEON_sqadd(auVar161,auVar112,1);
  auVar161 = NEON_sqadd(auVar112,auVar161,1);
  auVar112 = NEON_sqadd(auVar112,auVar161,1);
  auVar334[0] = bVar131 & auVar112[0];
  auVar334[1] = bVar163 & auVar112[1];
  auVar334[2] = bVar164 & auVar112[2];
  auVar334[3] = bVar165 & auVar112[3];
  auVar334[4] = bVar166 & auVar112[4];
  auVar334[5] = bVar167 & auVar112[5];
  auVar334[6] = bVar168 & auVar112[6];
  auVar334[7] = bVar169 & auVar112[7];
  auVar334[8] = bVar170 & auVar112[8];
  auVar334[9] = bVar171 & auVar112[9];
  auVar334[10] = bVar172 & auVar112[10];
  auVar334[0xb] = bVar173 & auVar112[0xb];
  auVar334[0xc] = bVar174 & auVar112[0xc];
  auVar334[0xd] = bVar175 & auVar112[0xd];
  auVar334[0xe] = bVar176 & auVar112[0xe];
  auVar334[0xf] = bVar177 & auVar112[0xf];
  auVar357[8] = 3;
  auVar357._0_8_ = 0x303030303030303;
  auVar357[9] = 3;
  auVar357[10] = 3;
  auVar357[0xb] = 3;
  auVar357[0xc] = 3;
  auVar357[0xd] = 3;
  auVar357[0xe] = 3;
  auVar357[0xf] = 3;
  auVar161 = NEON_sqadd(auVar334,auVar357,1);
  auVar362[8] = 4;
  auVar362._0_8_ = 0x404040404040404;
  auVar362[9] = 4;
  auVar362[10] = 4;
  auVar362[0xb] = 4;
  auVar362[0xc] = 4;
  auVar362[0xd] = 4;
  auVar362[0xe] = 4;
  auVar362[0xf] = 4;
  auVar112 = NEON_sqadd(auVar334,auVar362,1);
  auVar360[0] = auVar161[0] >> 3;
  auVar360[1] = auVar161[1] >> 3;
  auVar360[2] = auVar161[2] >> 3;
  auVar360[3] = auVar161[3] >> 3;
  auVar360[4] = auVar161[4] >> 3;
  auVar360[5] = auVar161[5] >> 3;
  auVar360[6] = auVar161[6] >> 3;
  auVar360[7] = auVar161[7] >> 3;
  auVar360[8] = auVar161[8] >> 3;
  auVar360[9] = auVar161[9] >> 3;
  auVar360[10] = auVar161[10] >> 3;
  auVar360[0xb] = auVar161[0xb] >> 3;
  auVar360[0xc] = auVar161[0xc] >> 3;
  auVar360[0xd] = auVar161[0xd] >> 3;
  auVar360[0xe] = auVar161[0xe] >> 3;
  auVar360[0xf] = auVar161[0xf] >> 3;
  auVar335[0] = auVar112[0] >> 3;
  auVar335[1] = auVar112[1] >> 3;
  auVar335[2] = auVar112[2] >> 3;
  auVar335[3] = auVar112[3] >> 3;
  auVar335[4] = auVar112[4] >> 3;
  auVar335[5] = auVar112[5] >> 3;
  auVar335[6] = auVar112[6] >> 3;
  auVar335[7] = auVar112[7] >> 3;
  auVar335[8] = auVar112[8] >> 3;
  auVar335[9] = auVar112[9] >> 3;
  auVar335[10] = auVar112[10] >> 3;
  auVar335[0xb] = auVar112[0xb] >> 3;
  auVar335[0xc] = auVar112[0xc] >> 3;
  auVar335[0xd] = auVar112[0xd] >> 3;
  auVar335[0xe] = auVar112[0xe] >> 3;
  auVar335[0xf] = auVar112[0xf] >> 3;
  auVar238 = NEON_sqadd(auVar239,auVar360,1);
  auVar319 = NEON_sqsub(auVar207,auVar335,1);
  auVar112 = NEON_sqsub(auVar319,auVar238,1);
  auVar161 = NEON_sqadd(auVar112,auVar112,1);
  auVar112 = NEON_sqadd(auVar112,auVar161,1);
  auVar113[0] = (bVar91 ^ bVar131) & auVar112[0];
  auVar113[1] = (bVar116 ^ bVar163) & auVar112[1];
  auVar113[2] = (bVar117 ^ bVar164) & auVar112[2];
  auVar113[3] = (bVar118 ^ bVar165) & auVar112[3];
  auVar113[4] = (bVar119 ^ bVar166) & auVar112[4];
  auVar113[5] = (bVar120 ^ bVar167) & auVar112[5];
  auVar113[6] = (bVar121 ^ bVar168) & auVar112[6];
  auVar113[7] = (bVar122 ^ bVar169) & auVar112[7];
  auVar113[8] = (bVar123 ^ bVar170) & auVar112[8];
  auVar113[9] = (bVar124 ^ bVar171) & auVar112[9];
  auVar113[10] = (bVar125 ^ bVar172) & auVar112[10];
  auVar113[0xb] = (bVar126 ^ bVar173) & auVar112[0xb];
  auVar113[0xc] = (bVar127 ^ bVar174) & auVar112[0xc];
  auVar113[0xd] = (bVar128 ^ bVar175) & auVar112[0xd];
  auVar113[0xe] = (bVar129 ^ bVar176) & auVar112[0xe];
  auVar113[0xf] = (bVar130 ^ bVar177) & auVar112[0xf];
  auVar161 = NEON_sqadd(auVar113,auVar362,1);
  auVar112 = NEON_sqadd(auVar113,auVar357,1);
  auVar358[0] = auVar161[0] >> 3;
  auVar358[1] = auVar161[1] >> 3;
  auVar358[2] = auVar161[2] >> 3;
  auVar358[3] = auVar161[3] >> 3;
  auVar358[4] = auVar161[4] >> 3;
  auVar358[5] = auVar161[5] >> 3;
  auVar358[6] = auVar161[6] >> 3;
  auVar358[7] = auVar161[7] >> 3;
  auVar358[8] = auVar161[8] >> 3;
  auVar358[9] = auVar161[9] >> 3;
  auVar358[10] = auVar161[10] >> 3;
  auVar358[0xb] = auVar161[0xb] >> 3;
  auVar358[0xc] = auVar161[0xc] >> 3;
  auVar358[0xd] = auVar161[0xd] >> 3;
  auVar358[0xe] = auVar161[0xe] >> 3;
  auVar358[0xf] = auVar161[0xf] >> 3;
  auVar114[0] = auVar112[0] >> 3;
  auVar114[1] = auVar112[1] >> 3;
  auVar114[2] = auVar112[2] >> 3;
  auVar114[3] = auVar112[3] >> 3;
  auVar114[4] = auVar112[4] >> 3;
  auVar114[5] = auVar112[5] >> 3;
  auVar114[6] = auVar112[6] >> 3;
  auVar114[7] = auVar112[7] >> 3;
  auVar114[8] = auVar112[8] >> 3;
  auVar114[9] = auVar112[9] >> 3;
  auVar114[10] = auVar112[10] >> 3;
  auVar114[0xb] = auVar112[0xb] >> 3;
  auVar114[0xc] = auVar112[0xc] >> 3;
  auVar114[0xd] = auVar112[0xd] >> 3;
  auVar114[0xe] = auVar112[0xe] >> 3;
  auVar114[0xf] = auVar112[0xf] >> 3;
  auVar161 = NEON_srshr(auVar358,1,1);
  auVar112 = NEON_sqadd(auVar238,auVar114,1);
  uVar18 = auVar112._0_7_ ^ 0x80808080;
  uVar17 = auVar112._0_7_ ^ 0x808080808080;
  auVar162._0_8_ = auVar112._0_8_ ^ 0x8080808080808080;
  auVar162[8] = auVar112[8] ^ 0x80;
  auVar162[9] = auVar112[9] ^ 0x80;
  auVar162[10] = auVar112[10] ^ 0x80;
  auVar162[0xb] = auVar112[0xb] ^ 0x80;
  auVar162[0xc] = auVar112[0xc] ^ 0x80;
  auVar162[0xd] = auVar112[0xd] ^ 0x80;
  auVar162[0xe] = auVar112[0xe] ^ 0x80;
  auVar162[0xf] = auVar112[0xf] ^ 0x80;
  auVar336 = NEON_sqsub(auVar319,auVar358,1);
  uVar20 = auVar336._0_7_ ^ 0x80808080;
  uVar19 = auVar336._0_7_ ^ 0x808080808080;
  auVar208._0_8_ = auVar336._0_8_ ^ 0x8080808080808080;
  auVar208[8] = auVar336[8] ^ 0x80;
  auVar208[9] = auVar336[9] ^ 0x80;
  auVar208[10] = auVar336[10] ^ 0x80;
  auVar208[0xb] = auVar336[0xb] ^ 0x80;
  auVar208[0xc] = auVar336[0xc] ^ 0x80;
  auVar208[0xd] = auVar336[0xd] ^ 0x80;
  auVar208[0xe] = auVar336[0xe] ^ 0x80;
  auVar208[0xf] = auVar336[0xf] ^ 0x80;
  auVar359 = NEON_sqadd(auVar320,auVar161,1);
  uVar22 = auVar359._0_7_ ^ 0x80808080;
  uVar21 = auVar359._0_7_ ^ 0x808080808080;
  auVar115._0_8_ = auVar359._0_8_ ^ 0x8080808080808080;
  auVar115[8] = auVar359[8] ^ 0x80;
  auVar115[9] = auVar359[9] ^ 0x80;
  auVar115[10] = auVar359[10] ^ 0x80;
  auVar115[0xb] = auVar359[0xb] ^ 0x80;
  auVar115[0xc] = auVar359[0xc] ^ 0x80;
  auVar115[0xd] = auVar359[0xd] ^ 0x80;
  auVar115[0xe] = auVar359[0xe] ^ 0x80;
  auVar115[0xf] = auVar359[0xf] ^ 0x80;
  auVar238 = NEON_sqsub(auVar296,auVar161,1);
  uVar24 = auVar238._0_7_ ^ 0x80808080;
  uVar23 = auVar238._0_7_ ^ 0x808080808080;
  auVar240._0_8_ = auVar238._0_8_ ^ 0x8080808080808080;
  auVar240[8] = auVar238[8] ^ 0x80;
  auVar240[9] = auVar238[9] ^ 0x80;
  auVar240[10] = auVar238[10] ^ 0x80;
  auVar240[0xb] = auVar238[0xb] ^ 0x80;
  auVar240[0xc] = auVar238[0xc] ^ 0x80;
  auVar240[0xd] = auVar238[0xd] ^ 0x80;
  auVar240[0xe] = auVar238[0xe] ^ 0x80;
  auVar240[0xf] = auVar238[0xf] ^ 0x80;
  puVar42 = (undefined1 *)((long)param_1 + 2);
  puVar3 = puVar42 + (int)param_3;
  puVar4 = puVar42 + (long)(int)param_3 * 2;
  puVar6 = puVar42 + lVar1;
  puVar5 = puVar42 + (long)(int)param_3 * 4;
  *puVar42 = (char)uVar22;
  *(char *)((long)param_1 + 3) = (char)uVar18;
  *(char *)((long)param_1 + 4) = (char)uVar20;
  *(char *)((long)param_1 + 5) = (char)uVar24;
  pbVar43 = puVar42 + lVar41;
  *puVar3 = (char)(uVar22 >> 8);
  puVar3[1] = (char)(uVar18 >> 8);
  puVar3[2] = (char)(uVar20 >> 8);
  puVar3[3] = (char)(uVar24 >> 8);
  *puVar4 = (char)(uVar22 >> 0x10);
  puVar4[1] = (char)(uVar18 >> 0x10);
  puVar4[2] = (char)(uVar20 >> 0x10);
  puVar4[3] = (char)(uVar24 >> 0x10);
  puVar3 = puVar42 + lVar2;
  pbVar7 = puVar42 + lVar1 * 2;
  *puVar6 = (char)(uVar22 >> 0x18);
  puVar6[1] = (char)(uVar18 >> 0x18);
  puVar6[2] = (char)(uVar20 >> 0x18);
  puVar6[3] = (char)(uVar24 >> 0x18);
  auVar161 = NEON_ext(auVar115,auVar115,8,1);
  auVar319 = NEON_ext(auVar162,auVar162,8,1);
  auVar361 = NEON_ext(auVar208,auVar208,8,1);
  auVar337 = NEON_ext(auVar240,auVar240,8,1);
  *puVar5 = (char)(uVar21 >> 0x20);
  puVar5[1] = (char)(uVar17 >> 0x20);
  puVar5[2] = (char)(uVar19 >> 0x20);
  puVar5[3] = (char)(uVar23 >> 0x20);
  *puVar3 = (char)(uVar21 >> 0x28);
  puVar3[1] = (char)(uVar17 >> 0x28);
  puVar3[2] = (char)(uVar19 >> 0x28);
  puVar3[3] = (char)(uVar23 >> 0x28);
  *pbVar7 = auVar359[6] ^ 0x80;
  pbVar7[1] = auVar112[6] ^ 0x80;
  pbVar7[2] = auVar336[6] ^ 0x80;
  pbVar7[3] = auVar238[6] ^ 0x80;
  puVar42 = (undefined1 *)((long)param_2 + 2);
  puVar3 = puVar42 + (int)param_3;
  puVar4 = puVar42 + (long)(int)param_3 * 2;
  puVar6 = puVar42 + lVar1;
  puVar5 = puVar42 + (long)(int)param_3 * 4;
  puVar8 = puVar42 + lVar2;
  puVar9 = puVar42 + lVar1 * 2;
  *puVar42 = auVar161[0];
  *(char *)((long)param_2 + 3) = auVar319[0];
  *(char *)((long)param_2 + 4) = auVar361[0];
  *(char *)((long)param_2 + 5) = auVar337[0];
  puVar42 = puVar42 + lVar41;
  *pbVar43 = auVar359[7] ^ 0x80;
  pbVar43[1] = auVar112[7] ^ 0x80;
  pbVar43[2] = auVar336[7] ^ 0x80;
  pbVar43[3] = auVar238[7] ^ 0x80;
  *puVar3 = auVar161[1];
  puVar3[1] = auVar319[1];
  puVar3[2] = auVar361[1];
  puVar3[3] = auVar337[1];
  *puVar4 = auVar161[2];
  puVar4[1] = auVar319[2];
  puVar4[2] = auVar361[2];
  puVar4[3] = auVar337[2];
  *puVar6 = auVar161[3];
  puVar6[1] = auVar319[3];
  puVar6[2] = auVar361[3];
  puVar6[3] = auVar337[3];
  *puVar5 = auVar161[4];
  puVar5[1] = auVar319[4];
  puVar5[2] = auVar361[4];
  puVar5[3] = auVar337[4];
  *puVar8 = auVar161[5];
  puVar8[1] = auVar319[5];
  puVar8[2] = auVar361[5];
  puVar8[3] = auVar337[5];
  *puVar9 = auVar161[6];
  puVar9[1] = auVar319[6];
  puVar9[2] = auVar361[6];
  puVar9[3] = auVar337[6];
  *puVar42 = auVar161[7];
  puVar42[1] = auVar319[7];
  puVar42[2] = auVar361[7];
  puVar42[3] = auVar337[7];
  return;
}



/* Entry: 108233a28; end: 108233a73;  */

void FUN_108233a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = -3;
  do {
    param_1 = param_1 + 4;
    func_0x0001082337b4(param_1,param_2,param_3);
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + 1;
  } while (bVar1);
  return;
}



/* Entry: 108233a74; end: 108234313;  */

void FUN_108233a74(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar18 = *(undefined8 *)(param_1 + -8);
  sVar2 = (ushort)(byte)uVar18 + (ushort)(byte)((ulong)uVar18 >> 8);
  sVar4 = (ushort)(byte)((ulong)uVar18 >> 0x10) + (ushort)(byte)((ulong)uVar18 >> 0x18);
  sVar6 = (ushort)(byte)((ulong)uVar18 >> 0x20) + (ushort)(byte)((ulong)uVar18 >> 0x28);
  sVar7 = (ushort)(byte)((ulong)uVar18 >> 0x30) + (ushort)(byte)((ulong)uVar18 >> 0x38);
  uVar18 = *(undefined8 *)((long)param_1 + -1);
  uVar19 = *(undefined8 *)((long)param_1 + 0x1f);
  uVar20 = *(undefined8 *)((long)param_1 + 0x3f);
  uVar21 = *(undefined8 *)((long)param_1 + 0x5f);
  uVar8 = CONCAT12((char)((ulong)uVar18 >> 8),(short)uVar18) & 0xff00ff;
  uVar9 = CONCAT12((char)((ulong)uVar19 >> 8),(short)uVar19) & 0xff00ff;
  uVar10 = CONCAT12((char)((ulong)uVar20 >> 8),(short)uVar20) & 0xff00ff;
  uVar11 = CONCAT12((char)((ulong)uVar21 >> 8),(short)uVar21) & 0xff00ff;
  sVar3 = sVar2 + sVar4 + (short)uVar8 + (short)uVar9 + (short)uVar10 + (short)uVar11;
  sVar5 = sVar6 + sVar7 + (ushort)(byte)(uVar8 >> 0x10) + (ushort)(byte)(uVar9 >> 0x10) +
          (ushort)(byte)(uVar10 >> 0x10) + (ushort)(byte)(uVar11 >> 0x10);
  uVar12 = (undefined1)sVar5;
  uVar13 = (undefined1)((ushort)sVar5 >> 8);
  sVar2 = sVar2 + sVar4 + (ushort)(byte)((ulong)uVar18 >> 0x10) +
          (ushort)(byte)((ulong)uVar19 >> 0x10) + (ushort)(byte)((ulong)uVar20 >> 0x10) +
          (ushort)(byte)((ulong)uVar21 >> 0x10);
  uVar14 = (undefined1)sVar2;
  uVar15 = (undefined1)((ushort)sVar2 >> 8);
  sVar2 = sVar6 + sVar7 + (ushort)(byte)((ulong)uVar18 >> 0x18) +
          (ushort)(byte)((ulong)uVar19 >> 0x18) + (ushort)(byte)((ulong)uVar20 >> 0x18) +
          (ushort)(byte)((ulong)uVar21 >> 0x18);
  uVar16 = (undefined1)sVar2;
  uVar17 = (undefined1)((ushort)sVar2 >> 8);
  auVar1[2] = uVar12;
  auVar1._0_2_ = sVar3;
  auVar1[3] = uVar13;
  auVar1[4] = uVar14;
  auVar1[5] = uVar15;
  auVar1[6] = uVar16;
  auVar1[7] = uVar17;
  auVar1._8_2_ = (ushort)(byte)((ulong)uVar18 >> 0x20) + (ushort)(byte)((ulong)uVar19 >> 0x20) +
                 (ushort)(byte)((ulong)uVar20 >> 0x20) + (ushort)(byte)((ulong)uVar21 >> 0x20);
  auVar1._10_2_ =
       (ushort)(byte)((ulong)uVar18 >> 0x28) + (ushort)(byte)((ulong)uVar19 >> 0x28) +
       (ushort)(byte)((ulong)uVar20 >> 0x28) + (ushort)(byte)((ulong)uVar21 >> 0x28);
  auVar1._12_2_ =
       (ushort)(byte)((ulong)uVar18 >> 0x30) + (ushort)(byte)((ulong)uVar19 >> 0x30) +
       (ushort)(byte)((ulong)uVar20 >> 0x30) + (ushort)(byte)((ulong)uVar21 >> 0x30);
  auVar1._14_2_ =
       (ushort)(byte)((ulong)uVar18 >> 0x38) + (ushort)(byte)((ulong)uVar19 >> 0x38) +
       (ushort)(byte)((ulong)uVar20 >> 0x38) + (ushort)(byte)((ulong)uVar21 >> 0x38);
  uVar18 = NEON_rshrn(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,sVar3)))))),auVar1,3,2);
  uVar12 = (undefined1)uVar18;
  *param_1 = CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11(uVar12,uVar12)));
  param_1[8] = CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11(uVar12,uVar12)));
  param_1[0x10] = CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11(uVar12,uVar12)));
  param_1[0x18] = CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11(uVar12,uVar12)));
  return;
}



/* Entry: 108234314; end: 10823459b;  */

void FUN_108234314(char *param_1,int param_2,int param_3,int param_4,char *param_5)

{
  char *pcVar1;
  
  *param_5 = *param_1;
  FUN_10823459c(param_1 + 1,param_1,param_5 + 1,param_2 + -1);
  if (1 < param_3) {
    param_3 = param_3 + -1;
    do {
      pcVar1 = param_1 + param_4;
      param_5 = param_5 + param_4;
      *param_5 = *pcVar1 - *param_1;
      FUN_10823459c(pcVar1 + 1,pcVar1,param_5 + 1,param_2 + -1);
      param_3 = param_3 + -1;
      param_1 = pcVar1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10823459c; end: 108235597;  */

void FUN_10823459c(long param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((int)param_4 < 0x10) {
    uVar5 = 0;
  }
  else {
    lVar2 = 0;
    do {
      uVar8 = ((undefined8 *)(param_1 + lVar2))[1];
      uVar7 = *(undefined8 *)(param_1 + lVar2);
      uVar10 = ((undefined8 *)(param_2 + lVar2))[1];
      uVar9 = *(undefined8 *)(param_2 + lVar2);
      ((undefined8 *)(param_3 + lVar2))[1] =
           CONCAT17((char)((ulong)uVar8 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                    CONCAT16((char)((ulong)uVar8 >> 0x30) - (char)((ulong)uVar10 >> 0x30),
                             CONCAT15((char)((ulong)uVar8 >> 0x28) - (char)((ulong)uVar10 >> 0x28),
                                      CONCAT14((char)((ulong)uVar8 >> 0x20) -
                                               (char)((ulong)uVar10 >> 0x20),
                                               CONCAT13((char)((ulong)uVar8 >> 0x18) -
                                                        (char)((ulong)uVar10 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar8 >> 0x10) -
                                                                 (char)((ulong)uVar10 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar8 >> 8)
                                                                          - (char)((ulong)uVar10 >>
                                                                                  8),
                                                                          (char)uVar8 - (char)uVar10
                                                                         )))))));
      *(undefined8 *)(param_3 + lVar2) =
           CONCAT17((char)((ulong)uVar7 >> 0x38) - (char)((ulong)uVar9 >> 0x38),
                    CONCAT16((char)((ulong)uVar7 >> 0x30) - (char)((ulong)uVar9 >> 0x30),
                             CONCAT15((char)((ulong)uVar7 >> 0x28) - (char)((ulong)uVar9 >> 0x28),
                                      CONCAT14((char)((ulong)uVar7 >> 0x20) -
                                               (char)((ulong)uVar9 >> 0x20),
                                               CONCAT13((char)((ulong)uVar7 >> 0x18) -
                                                        (char)((ulong)uVar9 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar7 >> 0x10) -
                                                                 (char)((ulong)uVar9 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar7 >> 8)
                                                                          - (char)((ulong)uVar9 >> 8
                                                                                  ),
                                                                          (char)uVar7 - (char)uVar9)
                                                                ))))));
      uVar1 = lVar2 + 0x20;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 <= param_4);
    uVar5 = param_4 & 0x7ffffff0;
  }
  if ((int)uVar5 < (int)param_4) {
    lVar2 = (ulong)param_4 - (ulong)uVar5;
    pcVar3 = (char *)(param_3 + (ulong)uVar5);
    pcVar4 = (char *)(param_2 + (ulong)uVar5);
    pcVar6 = (char *)(param_1 + (ulong)uVar5);
    do {
      *pcVar3 = *pcVar6 - *pcVar4;
      lVar2 = lVar2 + -1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 108238c9c; end: 108239173;  */

void FUN_108238c9c(byte *param_1,undefined8 *param_2,uint param_3)

{
  uint3 uVar1;
  short sVar2;
  undefined8 uVar3;
  short sVar4;
  byte *pbVar5;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  undefined1 *puVar29;
  undefined8 *puVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar40;
  byte bVar41;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  
  if ((int)param_3 < 8) {
    uVar27 = 0;
  }
  else {
    uVar28 = 8;
    puVar30 = param_2;
    do {
      bVar31 = *param_1;
      pbVar5 = param_1 + 1;
      pbVar6 = param_1 + 2;
      pbVar7 = param_1 + 3;
      pbVar8 = param_1 + 4;
      bVar40 = param_1[5];
      pbVar9 = param_1 + 6;
      pbVar10 = param_1 + 7;
      bVar41 = param_1[8];
      pbVar11 = param_1 + 9;
      pbVar12 = param_1 + 10;
      pbVar13 = param_1 + 0xb;
      pbVar14 = param_1 + 0xc;
      pbVar15 = param_1 + 0xd;
      pbVar16 = param_1 + 0xe;
      pbVar17 = param_1 + 0xf;
      pbVar18 = param_1 + 0x10;
      pbVar19 = param_1 + 0x11;
      pbVar20 = param_1 + 0x12;
      pbVar21 = param_1 + 0x13;
      pbVar22 = param_1 + 0x14;
      pbVar23 = param_1 + 0x15;
      pbVar24 = param_1 + 0x16;
      pbVar25 = param_1 + 0x17;
      param_1 = param_1 + 0x18;
      uVar1 = CONCAT12(*pbVar9,CONCAT11(*pbVar7,bVar31));
      auVar38 = NEON_umull((ulong)CONCAT16(*pbVar12,(uint6)CONCAT14(*pbVar10,(uint)CONCAT12(*pbVar8,
                                                  (ushort)*pbVar5))),0x8123812381238123,2);
      auVar39._0_4_ =
           auVar38._0_4_ + (uVar1 & 0xff) * 0x41c7 +
           (CONCAT12(bVar41,CONCAT11(bVar40,*pbVar6)) & 0xff) * 0x1914;
      auVar39._4_4_ = auVar38._4_4_ + ((uVar1 & 0xff00) >> 8) * 0x41c7 + (uint)bVar40 * 0x1914;
      auVar39._8_4_ = auVar38._8_4_ + (uint)*pbVar9 * 0x41c7 + (uint)bVar41 * 0x1914;
      auVar39._12_4_ = auVar38._12_4_ + (uint)*pbVar11 * 0x41c7 + (uint)*pbVar13 * 0x1914;
      uVar3 = NEON_raddhn((ulong)CONCAT16(*pbVar13,(uint6)CONCAT14(bVar41,(uint)CONCAT12(bVar40,(
                                                  ushort)*pbVar6))),auVar39,ZEXT216(0),4);
      sVar2 = (short)uVar3 + 0x10;
      sVar4 = (short)((ulong)uVar3 >> 0x10) + 0x10;
      uVar32 = (undefined1)sVar4;
      uVar33 = (undefined1)((ushort)sVar4 >> 8);
      sVar4 = (short)((ulong)uVar3 >> 0x20) + 0x10;
      uVar34 = (undefined1)sVar4;
      uVar35 = (undefined1)((ushort)sVar4 >> 8);
      sVar4 = (short)((ulong)uVar3 >> 0x30) + 0x10;
      uVar36 = (undefined1)sVar4;
      uVar37 = (undefined1)((ushort)sVar4 >> 8);
      auVar38[2] = uVar32;
      auVar38._0_2_ = sVar2;
      auVar38[3] = uVar33;
      auVar38[4] = uVar34;
      auVar38[5] = uVar35;
      auVar38[6] = uVar36;
      auVar38[7] = uVar37;
      auVar38._8_2_ =
           (short)((CONCAT12(*pbVar18,(ushort)*pbVar15) & 0xffff) * 0x8123 +
                   (CONCAT12(*pbVar17,(ushort)*pbVar14) & 0xffff) * 0x41c7 +
                   (CONCAT12(*pbVar19,(ushort)*pbVar16) & 0xffff) * 0x1914 + 0x8000 >> 0x10) + 0x10;
      auVar38._10_2_ =
           (short)((uint)*pbVar18 * 0x8123 + (uint)*pbVar17 * 0x41c7 + (uint)*pbVar19 * 0x1914 +
                   0x8000 >> 0x10) + 0x10;
      auVar38._12_2_ =
           (short)((uint)*pbVar21 * 0x8123 + (uint)*pbVar20 * 0x41c7 + (uint)*pbVar22 * 0x1914 +
                   0x8000 >> 0x10) + 0x10;
      auVar38._14_2_ =
           (short)((uint)*pbVar24 * 0x8123 + (uint)*pbVar23 * 0x41c7 + (uint)*pbVar25 * 0x1914 +
                   0x8000 >> 0x10) + 0x10;
      uVar3 = NEON_uqxtn(CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,sVar2)))))),auVar38,2);
      *puVar30 = uVar3;
      uVar28 = uVar28 + 8;
      puVar30 = puVar30 + 1;
    } while (uVar28 <= param_3);
    uVar27 = param_3 & 0x7ffffff8;
  }
  if ((int)uVar27 < (int)param_3) {
    lVar26 = (ulong)param_3 - (ulong)uVar27;
    puVar29 = (undefined1 *)((long)param_2 + (ulong)uVar27);
    do {
      *puVar29 = (char)((uint)param_1[1] * 0x8123 + (uint)*param_1 * 0x41c7 +
                        (uint)param_1[2] * 0x1914 + 0x108000 >> 0x10);
      param_1 = param_1 + 3;
      lVar26 = lVar26 + -1;
      puVar29 = puVar29 + 1;
    } while (lVar26 != 0);
  }
  return;
}



/* Entry: 108239174; end: 108239227;  */

void FUN_108239174(void)

{
  int iVar1;
  
  iVar1 = 0x13254b18;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_113254b10 != PTR_DAT_1132548c8) {
    pcRam0000000113869f98 = FUN_108239228;
    uRam0000000113869fa0 = 0x10823937c;
    if (PTR_DAT_1132548c8 != (undefined *)0x0) {
      iVar1 = 6;
      (*(code *)PTR_DAT_1132548c8)();
      if (iVar1 != 0) {
        uRam0000000113869fa0 = 0x10823b0b4;
        pcRam0000000113869f98 = FUN_10823b0ec;
      }
    }
  }
  PTR_LOOP_113254b10 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254b18);
  return;
}



/* Entry: 108239228; end: 1082393ab;  */

uint FUN_108239228(int param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  
  uVar4 = *param_2;
  bVar2 = *(byte *)(*(long *)(param_2 + 6) +
                    (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5) +
                    (long)(int)uVar4 + (long)param_1 * 0xb);
  if (param_1 == 0) {
    uVar5 = (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~(uint)bVar2 & 0xff) * 2);
  }
  else {
    uVar5 = 0;
  }
  uVar7 = param_2[1];
  if ((int)uVar7 < 0) {
    return (uint)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar2 * 2);
  }
  uVar10 = (ulong)(int)uVar4;
  lVar6 = *(long *)(*(long *)(param_2 + 10) + (long)(int)uVar4 * 0x18 + (long)param_1 * 8);
  if ((int)uVar4 < (int)uVar7) {
    lVar8 = uVar7 - uVar10;
    lVar9 = *(long *)(param_2 + 10) + (long)(int)uVar4 * 0x18;
    psVar11 = (short *)(*(long *)(param_2 + 2) + uVar10 * 2);
    do {
      lVar9 = lVar9 + 0x18;
      sVar3 = *psVar11;
      uVar4 = -(int)sVar3;
      if (-1 < sVar3) {
        uVar4 = (uint)sVar3;
      }
      uVar1 = uVar4;
      if (0x42 < uVar4) {
        uVar1 = 0x43;
      }
      uVar5 = uVar5 + *(ushort *)(&UNK_10df0b9b8 + (ulong)uVar4 * 2) +
              (uint)*(ushort *)(lVar6 + (ulong)uVar1 * 2);
      if (1 < uVar4) {
        uVar4 = 2;
      }
      lVar6 = *(long *)(lVar9 + (ulong)uVar4 * 8);
      lVar8 = lVar8 + -1;
      uVar10 = (ulong)uVar7;
      psVar11 = psVar11 + 1;
      uVar4 = uVar7;
    } while (lVar8 != 0);
  }
  sVar3 = *(short *)(*(long *)(param_2 + 2) + uVar10 * 2);
  uVar7 = -(int)sVar3;
  if (-1 < sVar3) {
    uVar7 = (uint)sVar3;
  }
  uVar1 = uVar7;
  if (0x42 < uVar7) {
    uVar1 = 0x43;
  }
  uVar5 = uVar5 + *(ushort *)(&UNK_10df0b9b8 + (ulong)uVar7 * 2) +
          (uint)*(ushort *)(lVar6 + (ulong)uVar1 * 2);
  if (uVar4 < 0xf) {
    lVar6 = 0xb;
    if ((uVar7 & 0xffff) != 1) {
      lVar6 = 0x16;
    }
    uVar5 = uVar5 + *(ushort *)
                     (&UNK_10df0c9ca +
                     (ulong)*(byte *)(*(long *)(param_2 + 6) +
                                      (ulong)(byte)(&UNK_10df0c9b9)[uVar4] * 0x21 + lVar6) * 2);
  }
  return uVar5;
}



/* Entry: 1082393ac; end: 10823958b;  */

void FUN_1082393ac(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  iVar2 = 0x13254b60;
  _pthread_mutex_lock();
  if (iVar2 != 0) {
    return;
  }
  if (PTR_LOOP_113254b58 != PTR_DAT_1132548c8) {
    FUN_10822e268();
    if (iRam00000001138266a0 == 0) {
      uVar3 = 0xffffff01;
      lVar4 = 0x2fe;
      puVar5 = (undefined1 *)0x1138266a4;
      do {
        uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar1) {
          uVar1 = 0xff;
        }
        *puVar5 = (char)uVar1;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
      iRam00000001138266a0 = 1;
    }
    pcRam0000000113869ff8 = FUN_10823958c;
    pcRam0000000113869fc0 = FUN_1082395d4;
    uRam000000011386a010 = 0x108239988;
    uRam0000000113869fb8 = 0x1082399d4;
    uRam0000000113869fb0 = 0x1082399f0;
    pcRam000000011386a008 = FUN_10823b2a0;
    pcRam0000000113869ff0 = FUN_10823b2fc;
    uRam000000011386a000 = 0x10823b444;
    uRam000000011386a040 = 0x10823b530;
    pcRam000000011386a038 = FUN_10823b614;
    pcRam0000000113869fa8 = FUN_10823b68c;
    pcRam000000011386a018 = FUN_10823b7d4;
    uRam000000011386a020 = 0x10823b810;
    uRam000000011386a030 = 0x10823b84c;
    uRam000000011386a028 = 0x10823b880;
    uRam0000000113869fd0 = 0x10823b8d8;
    uRam0000000113869fc8 = 0x10823b9c8;
    uRam0000000113869fe0 = 0x10823bc24;
    pcRam0000000113869fd8 = FUN_10823bcf8;
    uRam0000000113869fe8 = 0x10823bc24;
  }
  PTR_LOOP_113254b58 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254b60);
  return;
}



/* Entry: 10823958c; end: 1082395d3;  */

void FUN_10823958c(long param_1,long param_2,long param_3)

{
  (*pcRam0000000113869ff0)();
                    /* WARNING: Could not recover jumptable at 0x0001082395d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000113869ff0)(param_1 + 4,param_2 + 4,param_3 + 0x20);
  return;
}



/* Entry: 1082395d4; end: 108239a0b;  */

void FUN_1082395d4(long param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      uVar6 = 0x80;
    }
    else {
      lVar5 = 0;
      iVar3 = 0;
      do {
        iVar3 = iVar3 + (uint)*(byte *)(param_2 + lVar5);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      uVar6 = (ulong)(iVar3 * 2 + 8U >> 4);
    }
  }
  else {
    lVar5 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + (uint)*(byte *)((long)param_3 + lVar5);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    if (param_2 == 0) {
      iVar3 = iVar3 * 2;
    }
    else {
      lVar5 = 0;
      do {
        iVar3 = iVar3 + (uint)*(byte *)(param_2 + lVar5);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
    }
    uVar6 = (ulong)(uint)(iVar3 + 8 >> 4);
  }
  lVar5 = 0;
  do {
    *(ulong *)(param_1 + 0x400 + lVar5) = (uVar6 & 0xff) * 0x101010101010101;
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x100);
  lVar5 = 0;
  if (param_3 == (undefined8 *)0x0) {
    do {
      *(undefined8 *)(param_1 + 0x500 + lVar5) = 0x7f7f7f7f7f7f7f7f;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
  }
  else {
    uVar8 = *param_3;
    do {
      *(undefined8 *)(param_1 + 0x500 + lVar5) = uVar8;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
  }
  plVar4 = (long *)(param_1 + 0x510);
  lVar5 = 0;
  if (param_2 == 0) {
    do {
      *(undefined8 *)((long)plVar4 + lVar5) = 0x8181818181818181;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
    lVar5 = 0;
    if (param_3 == (undefined8 *)0x0) {
      do {
        *(undefined8 *)(param_1 + 0x410 + lVar5) = 0x8181818181818181;
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != 0x100);
      lVar5 = 0;
      puVar7 = (undefined8 *)0x0;
      uVar6 = 0x80;
      goto LAB_108239804;
    }
    uVar8 = *param_3;
    do {
      *(undefined8 *)(param_1 + 0x410 + lVar5) = uVar8;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
    lVar5 = 0;
  }
  else {
    do {
      *plVar4 = (ulong)*(byte *)(param_2 + lVar5) * 0x101010101010101;
      lVar5 = lVar5 + 1;
      plVar4 = plVar4 + 4;
    } while (lVar5 != 8);
    plVar4 = (long *)(param_1 + 0x410);
    lVar5 = 0;
    if (param_3 == (undefined8 *)0x0) {
      do {
        *plVar4 = (ulong)*(byte *)(param_2 + lVar5) * 0x101010101010101;
        lVar5 = lVar5 + 1;
        plVar4 = plVar4 + 4;
      } while (lVar5 != 8);
      lVar9 = 0;
      iVar3 = 0;
      lVar5 = param_2 + 0x10;
      do {
        iVar3 = iVar3 + (uint)*(byte *)(lVar5 + lVar9);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      puVar7 = (undefined8 *)0x0;
      uVar6 = (ulong)(iVar3 * 2 + 8U >> 4);
      goto LAB_108239804;
    }
    bVar2 = *(byte *)(param_2 + -1);
    do {
      lVar9 = 0;
      bVar1 = *(byte *)(param_2 + lVar5);
      do {
        *(undefined1 *)((long)plVar4 + lVar9) =
             *(undefined1 *)
              ((0x1138267a3 - (ulong)bVar2) + (ulong)bVar1 + (ulong)*(byte *)((long)param_3 + lVar9)
              );
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      plVar4 = plVar4 + 4;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    lVar5 = param_2 + 0x10;
  }
  lVar9 = 0;
  iVar3 = 0;
  puVar7 = param_3 + 1;
  do {
    iVar3 = iVar3 + (uint)*(byte *)((long)puVar7 + lVar9);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 8);
  if (param_2 == 0) {
    iVar3 = iVar3 * 2;
  }
  else {
    lVar9 = 0;
    do {
      iVar3 = iVar3 + (uint)*(byte *)(lVar5 + lVar9);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 8);
  }
  uVar6 = (ulong)(uint)(iVar3 + 8 >> 4);
LAB_108239804:
  lVar9 = 0;
  do {
    *(ulong *)(param_1 + 0x408 + lVar9) = (uVar6 & 0xff) * 0x101010101010101;
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x100);
  lVar9 = 0;
  if (param_3 == (undefined8 *)0x0) {
    do {
      *(undefined8 *)(param_1 + 0x508 + lVar9) = 0x7f7f7f7f7f7f7f7f;
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != 0x100);
  }
  else {
    uVar8 = *puVar7;
    do {
      *(undefined8 *)(param_1 + 0x508 + lVar9) = uVar8;
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != 0x100);
  }
  if (param_2 == 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(param_1 + 0x518 + lVar5) = 0x8181818181818181;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x100);
    if (param_3 == (undefined8 *)0x0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(param_1 + 0x418 + lVar5) = 0x8181818181818181;
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != 0x100);
    }
    else {
      lVar5 = 0;
      uVar8 = *puVar7;
      do {
        *(undefined8 *)(param_1 + 0x418 + lVar5) = uVar8;
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != 0x100);
    }
  }
  else {
    lVar9 = 0;
    plVar4 = (long *)(param_1 + 0x518);
    do {
      *plVar4 = (ulong)*(byte *)(lVar5 + lVar9) * 0x101010101010101;
      lVar9 = lVar9 + 1;
      plVar4 = plVar4 + 4;
    } while (lVar9 != 8);
    plVar4 = (long *)(param_1 + 0x418);
    if (param_3 == (undefined8 *)0x0) {
      lVar9 = 0;
      do {
        *plVar4 = (ulong)*(byte *)(lVar5 + lVar9) * 0x101010101010101;
        lVar9 = lVar9 + 1;
        plVar4 = plVar4 + 4;
      } while (lVar9 != 8);
    }
    else {
      lVar9 = 0;
      bVar2 = *(byte *)(param_2 + 0xf);
      do {
        lVar10 = 0;
        bVar1 = *(byte *)(lVar5 + lVar9);
        do {
          *(undefined1 *)((long)plVar4 + lVar10) =
               *(undefined1 *)
                ((0x1138267a3 - (ulong)bVar2) + (ulong)bVar1 +
                (ulong)*(byte *)((long)puVar7 + lVar10));
          lVar10 = lVar10 + 1;
        } while (lVar10 != 8);
        plVar4 = plVar4 + 4;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
    }
  }
  return;
}



/* Entry: 108239a0c; end: 108239b0f;  */

void FUN_108239a0c(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  param_3[1] = 0;
  param_3[2] = 0xffff00000000;
  if ((int)param_2 < 1) {
    uVar4 = 0;
    lVar5 = 0;
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
    iVar7 = 0;
    uVar4 = 0;
    uVar8 = 0;
    do {
      uVar2 = *(uint *)(param_1 + uVar8 * 4);
      if (uVar2 != 0) {
        uVar1 = uVar2 + (int)uVar4;
        uVar4 = (ulong)uVar1;
        *(int *)((long)param_3 + 0x14) = (int)uVar8;
        iVar7 = iVar7 + 1;
        *(uint *)(param_3 + 1) = uVar1;
        *(int *)((long)param_3 + 0xc) = iVar7;
        if (uVar2 < 0x100) {
          uVar3 = *(ulong *)(&UNK_10df0d038 + (ulong)uVar2 * 8);
        }
        else {
          uVar3 = (ulong)uVar2;
          (*pcRam000000011386a088)();
        }
        lVar5 = uVar3 + lVar5;
        if ((uint)uVar6 < uVar2) {
          *(uint *)(param_3 + 2) = uVar2;
          uVar6 = (ulong)uVar2;
        }
      }
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
    if (0xff < (uint)uVar4) {
      (*pcRam000000011386a088)();
      goto LAB_108239aec;
    }
  }
  uVar4 = *(ulong *)(&UNK_10df0d038 + uVar4 * 8);
LAB_108239aec:
  *param_3 = uVar4 - lVar5;
  return;
}



/* Entry: 108239b10; end: 108239cd7;  */

void FUN_108239b10(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  
  if (0 < (int)param_3) {
    cVar2 = *param_1;
    cVar3 = param_1[1];
    uVar6 = (ulong)param_3;
    cVar4 = param_1[2];
    do {
      uVar1 = *param_2;
      iVar5 = (int)(uVar1 << 0x10) >> 0x18;
      *param_2 = uVar1 & 0xff000000 |
                 uVar1 & 0xff00 | ((uVar1 >> 0x10) - ((uint)(iVar5 * cVar2) >> 5) & 0xff) << 0x10 |
                 uVar1 - (((uint)(iVar5 * cVar3) >> 5) +
                         ((uint)(((int)(uVar1 << 8) >> 0x18) * (int)cVar4) >> 5)) & 0xff;
      uVar6 = uVar6 - 1;
      param_2 = param_2 + 1;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 108239cd8; end: 108239eeb;  */

void FUN_108239cd8(void)

{
  int iVar1;
  
  iVar1 = 0x13254ba8;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_113254ba0 != PTR_DAT_1132548c8) {
    func_0x00010822f518();
    uRam000000011386a060 = 0x108239bd4;
    uRam000000011386a068 = 0x108239b70;
    pcRam000000011386a080 = FUN_108239eec;
    pcRam000000011386a088 = FUN_108239f74;
    pcRam000000011386a078 = FUN_108239ffc;
    pcRam000000011386a070 = FUN_10823a040;
    pcRam000000011386a1a0 = FUN_10823a184;
    pcRam000000011386a098 = FUN_10823a234;
    uRam000000011386a090 = 0x10823a48c;
    pcRam000000011386a048 = FUN_10823a6fc;
    uRam000000011386a050 = 0x10823a724;
    uRam000000011386a1b8 = 0x10823a74c;
    uRam000000011386a058 = 0x108239c48;
    uRam000000011386a0a0 = 0x10823a78c;
    uRam000000011386a0a8 = 0x10823a7b4;
    uRam000000011386a0b0 = 0x10823a804;
    uRam000000011386a0b8 = 0x10823a854;
    uRam000000011386a0c0 = 0x10823a8a8;
    uRam000000011386a0c8 = 0x10823a8fc;
    uRam000000011386a0d0 = 0x10823a97c;
    uRam000000011386a0d8 = 0x10823a9e8;
    uRam000000011386a0e0 = 0x10823aa50;
    uRam000000011386a0e8 = 0x10823aab8;
    uRam000000011386a0f0 = 0x10823ab24;
    pcRam000000011386a0f8 = FUN_10823abb0;
    uRam000000011386a100 = 0x10823ac3c;
    uRam000000011386a108 = 0x10823acc8;
    uRam000000011386a110 = 0x10823a78c;
    uRam000000011386a118 = 0x10823a78c;
    uRam000000011386a120 = 0x10823a78c;
    uRam000000011386a128 = 0x10823a7b4;
    uRam000000011386a130 = 0x10823a804;
    uRam000000011386a138 = 0x10823a854;
    uRam000000011386a140 = 0x10823a8a8;
    uRam000000011386a148 = 0x10823a8fc;
    uRam000000011386a150 = 0x10823a97c;
    uRam000000011386a158 = 0x10823a9e8;
    uRam000000011386a160 = 0x10823aa50;
    uRam000000011386a168 = 0x10823aab8;
    uRam000000011386a170 = 0x10823ab24;
    pcRam000000011386a178 = FUN_10823abb0;
    uRam000000011386a180 = 0x10823ac3c;
    uRam000000011386a188 = 0x10823acc8;
    uRam000000011386a190 = 0x10823a78c;
    uRam000000011386a198 = 0x10823a78c;
    uRam000000011386a1a8 = 0x10823be50;
    uRam000000011386a1b0 = 0x10823becc;
  }
  PTR_LOOP_113254ba0 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254ba8);
  return;
}



/* Entry: 108239eec; end: 108239f73;  */

int FUN_108239eec(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  if ((param_1 & 0xffff0000) == 0) {
    uVar2 = ((uint)LZCOUNT(param_1) ^ 0x1f) - 7;
    iVar1 = *(int *)(&UNK_10df0cc38 + (ulong)(param_1 >> (ulong)(uVar2 & 0x1f)) * 4) +
            uVar2 * 0x800000;
    iVar3 = 0;
    if ((ulong)param_1 != 0) {
      iVar3 = (int)(((ulong)(param_1 >> 1) +
                    (ulong)(param_1 & (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU)) * 0xb8aa3b) /
                   (ulong)param_1);
    }
    if (0xfff < param_1) {
      iVar1 = iVar1 + iVar3;
    }
    return iVar1;
  }
  dVar4 = (double)param_1;
  _log(dVar4);
  return (int)(dVar4 * 12102203.161561485 + 0.5);
}



/* Entry: 108239f74; end: 108239ffb;  */

long FUN_108239f74(uint param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  if ((param_1 & 0xffff0000) == 0) {
    uVar1 = ((uint)LZCOUNT(param_1) ^ 0x1f) - 7;
    return ((ulong)*(uint *)(&UNK_10df0cc38 + (ulong)(param_1 >> (ulong)(uVar1 & 0x1f)) * 4) +
           (long)(int)uVar1 * 0x800000) * (ulong)param_1 +
           (ulong)(param_1 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) * 0xb8aa3b;
  }
  dVar2 = (double)param_1;
  dVar3 = dVar2 * 12102203.161561485;
  _log();
  return (long)(dVar2 * dVar3 + 0.5);
}



/* Entry: 108239ffc; end: 10823a03f;  */

int FUN_108239ffc(long param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10);
  if (7 < (int)param_2) {
    piVar2 = (int *)(param_1 + 0x1c);
    uVar3 = 2;
    do {
      iVar1 = iVar1 + (*piVar2 + piVar2[-1]) * (int)uVar3;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while ((param_2 >> 1) - 1 != uVar3);
  }
  return iVar1;
}



/* Entry: 10823a040; end: 10823a183;  */

long FUN_10823a040(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = 0;
  lVar7 = 0;
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = *(uint *)(param_1 + lVar8);
    uVar6 = (ulong)uVar1;
    uVar2 = *(uint *)(param_2 + lVar8);
    uVar5 = (ulong)uVar2;
    if (uVar1 == 0) {
      if (uVar2 != 0) {
        if (uVar2 < 0x100) {
          uVar5 = *(ulong *)(&UNK_10df0d038 + uVar5 * 8);
        }
        else {
          (*pcRam000000011386a088)(uVar5);
        }
        uVar3 = (ulong)(uVar2 + (int)uVar3);
        lVar7 = uVar5 + lVar7;
      }
    }
    else {
      if (uVar1 < 0x100) {
        uVar6 = *(ulong *)(&UNK_10df0d038 + uVar6 * 8);
      }
      else {
        (*pcRam000000011386a088)(uVar6);
      }
      uVar2 = uVar2 + uVar1;
      uVar5 = (ulong)uVar2;
      if (uVar2 < 0x100) {
        uVar5 = *(ulong *)(&UNK_10df0d038 + (ulong)uVar2 * 8);
      }
      else {
        (*pcRam000000011386a088)(uVar5);
      }
      uVar4 = (ulong)(uVar1 + (int)uVar4);
      uVar3 = (ulong)(uVar2 + (int)uVar3);
      lVar7 = uVar6 + lVar7 + uVar5;
    }
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x400);
  if ((uint)uVar4 < 0x100) {
    uVar4 = *(ulong *)(&UNK_10df0d038 + uVar4 * 8);
  }
  else {
    (*pcRam000000011386a088)(uVar4);
  }
  if ((uint)uVar3 < 0x100) {
    uVar3 = *(ulong *)(&UNK_10df0d038 + uVar3 * 8);
  }
  else {
    (*pcRam000000011386a088)(uVar3);
  }
  return (uVar4 - lVar7) + uVar3;
}



/* Entry: 10823a184; end: 10823a233;  */

long FUN_10823a184(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = 0;
    uVar5 = (ulong)param_2;
    do {
      uVar1 = *param_1;
      uVar3 = (ulong)uVar1;
      if (uVar1 != 0) {
        if (uVar1 < 0x100) {
          uVar3 = *(ulong *)(&UNK_10df0d038 + uVar3 * 8);
        }
        else {
          (*pcRam000000011386a088)(uVar3);
        }
        uVar2 = (ulong)(uVar1 + (int)uVar2);
        lVar4 = uVar3 + lVar4;
      }
      uVar5 = uVar5 - 1;
      param_1 = param_1 + 1;
    } while (uVar5 != 0);
    if (0xff < (uint)uVar2) {
      (*pcRam000000011386a088)(uVar2);
      goto LAB_10823a218;
    }
  }
  uVar2 = *(ulong *)(&UNK_10df0d038 + uVar2 * 8);
LAB_10823a218:
  return uVar2 - lVar4;
}



/* Entry: 10823a234; end: 10823a6fb;  */

void FUN_10823a234(uint *param_1,uint param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  uVar10 = (ulong)*param_1;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_3[1] = 0;
  param_3[2] = 0xffff00000000;
  if ((int)param_2 < 2) {
    uVar7 = 0;
    lVar4 = 0;
    iVar5 = 0;
    uVar12 = 0;
    iVar13 = 0;
    param_2 = 1;
  }
  else {
    uVar8 = 0;
    lVar4 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar6 = 1;
    do {
      uVar7 = param_1[uVar6];
      uVar9 = (uint)uVar10;
      if (uVar7 != uVar9) {
        iVar13 = (int)uVar14;
        iVar5 = (int)uVar6 - iVar13;
        if (uVar9 != 0) {
          uVar2 = (int)uVar12 + iVar5 * uVar9;
          uVar11 = uVar6 + (uVar11 & 0xffffffff) + (ulong)(uint)-iVar13;
          *(uint *)(param_3 + 1) = uVar2;
          *(int *)((long)param_3 + 0xc) = (int)uVar11;
          *(int *)((long)param_3 + 0x14) = iVar13;
          if (uVar9 < 0x100) {
            uVar14 = *(ulong *)(&UNK_10df0d038 + uVar10 * 8);
          }
          else {
            uVar14 = uVar10;
            (*pcRam000000011386a088)();
          }
          uVar12 = (ulong)uVar2;
          lVar4 = lVar4 + uVar14 * (uVar6 - (long)iVar13);
          *param_3 = lVar4;
          if ((uint)uVar8 < uVar9) {
            *(uint *)(param_3 + 2) = uVar9;
            uVar8 = uVar10;
          }
        }
        uVar10 = (ulong)(uVar9 != 0);
        iVar1 = *(int *)((long)param_4 + uVar10 * 4);
        if (3 < iVar5) {
          iVar1 = iVar1 + 1;
        }
        *(int *)((long)param_4 + uVar10 * 4) = iVar1;
        lVar3 = uVar10 * 8 + 8;
        *(int *)((long)param_4 + (ulong)(3 < iVar5) * 4 + lVar3) =
             (int)uVar6 + (*(int *)((long)param_4 + (ulong)(3 < iVar5) * 4 + lVar3) - iVar13);
        uVar10 = (ulong)uVar7;
        uVar14 = uVar6;
      }
      uVar7 = (uint)uVar8;
      iVar5 = (int)uVar11;
      iVar13 = (int)uVar14;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  iVar1 = param_2 - iVar13;
  uVar9 = (uint)uVar10;
  if (uVar9 != 0) {
    uVar2 = (int)uVar12 + iVar1 * uVar9;
    uVar12 = (ulong)uVar2;
    *(uint *)(param_3 + 1) = uVar2;
    *(int *)((long)param_3 + 0xc) = iVar1 + iVar5;
    *(int *)((long)param_3 + 0x14) = iVar13;
    if (uVar9 < 0x100) {
      uVar10 = *(ulong *)(&UNK_10df0d038 + uVar10 * 8);
    }
    else {
      (*pcRam000000011386a088)();
    }
    lVar4 = lVar4 + uVar10 * (long)iVar1;
    if (uVar7 < uVar9) {
      *(uint *)(param_3 + 2) = uVar9;
    }
  }
  uVar10 = (ulong)(uVar9 != 0);
  iVar5 = *(int *)((long)param_4 + uVar10 * 4);
  if (3 < iVar1) {
    iVar5 = iVar5 + 1;
  }
  *(int *)((long)param_4 + uVar10 * 4) = iVar5;
  lVar3 = (ulong)(3 < iVar1) * 4 + uVar10 * 8;
  *(int *)((long)param_4 + lVar3 + 8) = *(int *)((long)param_4 + lVar3 + 8) + iVar1;
  if ((uint)uVar12 < 0x100) {
    uVar12 = *(ulong *)(&UNK_10df0d038 + uVar12 * 8);
  }
  else {
    (*pcRam000000011386a088)();
  }
  *param_3 = uVar12 - lVar4;
  return;
}



/* Entry: 10823a6fc; end: 10823abaf;  */

void FUN_10823a6fc(int *param_1,int *param_2,int *param_3,uint param_4)

{
  ulong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    do {
      *param_3 = *param_2 + *param_1;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 10823abb0; end: 10823ad53;  */

void FUN_10823abb0(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_3) {
    puVar2 = (uint *)(param_1 + -4);
    uVar3 = (ulong)param_3;
    do {
      puVar1 = puVar2;
      func_0x00010822eaa4(puVar2,param_2);
      puVar2 = puVar2 + 1;
      *param_4 = (*puVar2 | 0xff0000) - ((uint)puVar1 & 0xff00ff00) & 0xff00ff00 |
                 (*puVar2 | 0xff00) - ((uint)puVar1 & 0xff00ff) & 0xff00ff;
      param_2 = param_2 + 4;
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10823ad54; end: 10823add3;  */

void FUN_10823ad54(void)

{
  int iVar1;
  
  iVar1 = 0x13254bf0;
  _pthread_mutex_lock();
  if (iVar1 != 0) {
    return;
  }
  if (PTR_LOOP_113254be8 != PTR_DAT_1132548c8) {
    pcRam000000011386a1d0 = FUN_10823add4;
    pcRam000000011386a1c8 = FUN_10823af98;
    uRam000000011386a1c0 = 0x10823b07c;
  }
  PTR_LOOP_113254be8 = PTR_DAT_1132548c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x113254bf0);
  return;
}



/* Entry: 10823add4; end: 10823af97;  */

double FUN_10823add4(long param_1,int param_2,long param_3,int param_4,uint param_5,uint param_6,
                    int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  double dVar23;
  
  uVar1 = param_6;
  if ((int)param_6 < 4) {
    uVar1 = 3;
  }
  lVar22 = (ulong)uVar1 - 3;
  uVar2 = param_6 + 3;
  if ((int)(param_8 - 1U) <= (int)(param_6 + 3)) {
    uVar2 = param_8 - 1U;
  }
  iVar21 = (int)lVar22;
  if ((int)uVar2 < iVar21) {
    uVar16 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar11 = 0;
    uVar20 = 0;
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar17 = 0;
    uVar19 = 0;
    uVar9 = 0;
    iVar3 = param_5 + 3;
    if (param_7 + -1 <= (int)(param_5 + 3)) {
      iVar3 = param_7 + -1;
    }
    uVar4 = param_5;
    if ((int)param_5 < 4) {
      uVar4 = 3;
    }
    param_3 = param_3 + (long)iVar21 * (long)param_4;
    param_1 = param_1 + lVar22 * param_2;
    uVar11 = (ulong)uVar1 - 3;
    do {
      if ((int)(uVar4 - 3) <= iVar3) {
        lVar22 = (ulong)uVar4 - 3;
        iVar21 = (iVar3 - uVar4) + 4;
        do {
          iVar6 = *(int *)(&UNK_10df0de38 + (long)(int)(((int)lVar22 - param_5) + 3) * 4) *
                  *(int *)(&UNK_10df0de38 + (long)(int)(((int)uVar11 - param_6) + 3) * 4);
          bVar5 = *(byte *)(param_3 + lVar22);
          uVar9 = iVar6 + uVar9;
          iVar7 = iVar6 * (uint)*(byte *)(param_1 + lVar22);
          uVar19 = iVar7 + uVar19;
          iVar6 = iVar6 * (uint)bVar5;
          uVar17 = iVar6 + uVar17;
          uVar12 = uVar12 + iVar7 * (uint)*(byte *)(param_1 + lVar22);
          uVar14 = uVar14 + iVar7 * (uint)bVar5;
          uVar10 = uVar10 + iVar6 * (uint)bVar5;
          lVar22 = lVar22 + 1;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      bVar8 = uVar11 < uVar2;
      uVar11 = uVar11 + 1;
    } while (bVar8);
    uVar20 = (ulong)uVar19;
    uVar16 = (ulong)uVar17;
    uVar15 = (ulong)uVar14;
    uVar13 = (ulong)uVar12;
    uVar11 = (ulong)uVar10;
  }
  iVar21 = uVar9 * uVar9;
  uVar18 = uVar16 * uVar16 + uVar20 * uVar20;
  dVar23 = 1.0;
  if ((uint)(iVar21 * 0x40) <= uVar18) {
    uVar15 = uVar15 * uVar9 - uVar20 * uVar16;
    dVar23 = (double)(((ulong)(uint)(iVar21 * 0x3c) +
                       (uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU)) * 2 >> 8) *
                     ((ulong)(uint)(iVar21 * 0x14) + uVar20 * uVar16 * 2)) /
             (double)((((uVar11 + uVar13) * (ulong)uVar9 - uVar18) + (ulong)(uint)(iVar21 * 0x3c) >>
                      8) * (uVar18 + (uint)(iVar21 * 0x14)));
  }
  return dVar23;
}



/* Entry: 10823af98; end: 10823b0eb;  */

double FUN_10823af98(long param_1,int param_2,long param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  
  lVar9 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar5 = 0;
  do {
    lVar11 = 0;
    do {
      bVar1 = *(byte *)(param_3 + lVar11);
      iVar2 = *(int *)(&UNK_10df0de38 + lVar11 * 4) * *(int *)(&UNK_10df0de38 + lVar9 * 4) *
              (uint)*(byte *)(param_1 + lVar11);
      uVar6 = iVar2 + uVar6;
      iVar3 = *(int *)(&UNK_10df0de38 + lVar11 * 4) * *(int *)(&UNK_10df0de38 + lVar9 * 4) *
              (uint)bVar1;
      uVar7 = iVar3 + uVar7;
      uVar4 = uVar4 + iVar2 * (uint)*(byte *)(param_1 + lVar11);
      uVar8 = (ulong)((int)uVar8 + iVar2 * (uint)bVar1);
      uVar5 = (ulong)((int)uVar5 + iVar3 * (uint)bVar1);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 7);
    lVar9 = lVar9 + 1;
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  } while (lVar9 != 7);
  uVar10 = (ulong)uVar7 * (ulong)uVar7 + (ulong)uVar6 * (ulong)uVar6;
  dVar12 = 1.0;
  if (0x3fffff < uVar10) {
    uVar8 = uVar8 * 0x100 - (ulong)uVar7 * (ulong)uVar6;
    dVar12 = (double)(((uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU)) * 2 + 0x3c0000 >> 8) *
                     ((ulong)uVar7 * (ulong)uVar6 * 2 + 0x140000)) /
             (double)((((uVar5 + uVar4) * 0x100 - uVar10) + 0x3c0000 >> 8) * (uVar10 + 0x140000));
  }
  return dVar12;
}



/* Entry: 10823b0ec; end: 10823b29f;  */

void FUN_10823b0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  uint *param_5,ulong param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined2 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  ushort *puVar20;
  byte *pbVar21;
  short sVar22;
  short sVar23;
  undefined2 uVar24;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar53;
  undefined1 auVar52 [16];
  undefined8 in_register_00005048;
  undefined1 auVar55 [16];
  undefined8 uVar54;
  undefined1 auVar56 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar69;
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar43 [16];
  undefined1 auVar27 [16];
  undefined1 auVar33 [16];
  undefined1 auVar39 [16];
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar29 [16];
  undefined1 auVar35 [16];
  undefined1 auVar41 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_5;
  puVar1 = param_5 + 6;
  bVar3 = *(byte *)(*(long *)puVar1 +
                    (-(ulong)(uVar15 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar15 << 5) +
                    (long)(int)uVar15 + (long)param_4 * 0xb);
  if (param_4 == 0) {
    uVar12 = (uint)*(ushort *)(&UNK_10df0c9ca + ((ulong)~(uint)bVar3 & 0xff) * 2);
  }
  else {
    uVar12 = 0;
  }
  uVar2 = param_5[1];
  if ((int)uVar2 < 0) {
    uVar11 = (ulong)*(ushort *)(&UNK_10df0c9ca + (ulong)bVar3 * 2);
  }
  else {
    uVar17 = (ulong)(int)uVar15;
    lVar13 = *(long *)(*(long *)(param_5 + 10) + (long)(int)uVar15 * 0x18 + (long)param_4 * 8);
    puVar14 = *(undefined2 **)(param_5 + 2);
    uVar24 = MP_INT_ABS(*puVar14);
    uVar45 = MP_INT_ABS(puVar14[1]);
    uVar46 = MP_INT_ABS(puVar14[2]);
    uVar47 = MP_INT_ABS(puVar14[3]);
    auVar71._0_8_ = CONCAT26(uVar47,CONCAT24(uVar46,CONCAT22(uVar45,uVar24)));
    auVar71._8_2_ = MP_INT_ABS(puVar14[4]);
    auVar71._10_2_ = MP_INT_ABS(puVar14[5]);
    auVar71._12_2_ = MP_INT_ABS(puVar14[6]);
    auVar71._14_2_ = MP_INT_ABS(puVar14[7]);
    uVar24 = MP_INT_ABS(puVar14[8]);
    uVar45 = MP_INT_ABS(puVar14[9]);
    uVar46 = MP_INT_ABS(puVar14[10]);
    uVar47 = MP_INT_ABS(puVar14[0xb]);
    auVar50._0_8_ = CONCAT26(uVar47,CONCAT24(uVar46,CONCAT22(uVar45,uVar24)));
    auVar50._8_2_ = MP_INT_ABS(puVar14[0xc]);
    auVar50._10_2_ = MP_INT_ABS(puVar14[0xd]);
    auVar50._12_2_ = MP_INT_ABS(puVar14[0xe]);
    auVar50._14_2_ = MP_INT_ABS(puVar14[0xf]);
    auVar55._0_8_ = NEON_uqxtn(param_3,auVar71,2);
    auVar55._8_8_ = in_register_00005048;
    auVar55 = NEON_uqxtn2(auVar55,auVar50,2);
    auVar65[8] = 2;
    auVar65._0_8_ = 0x202020202020202;
    auVar65[9] = 2;
    auVar65[10] = 2;
    auVar65[0xb] = 2;
    auVar65[0xc] = 2;
    auVar65[0xd] = 2;
    auVar65[0xe] = 2;
    auVar65[0xf] = 2;
    auVar65 = NEON_umin(auVar55,auVar65,1);
    auVar70[8] = 0x43;
    auVar70._0_8_ = 0x4343434343434343;
    auVar70[9] = 0x43;
    auVar70[10] = 0x43;
    auVar70[0xb] = 0x43;
    auVar70[0xc] = 0x43;
    auVar70[0xd] = 0x43;
    auVar70[0xe] = 0x43;
    auVar70[0xf] = 0x43;
    auVar55 = NEON_umin(auVar55,auVar70,1);
    uStack_48 = auVar50._8_8_;
    uStack_50 = auVar50._0_8_;
    uStack_38 = auVar65._8_8_;
    uStack_40 = auVar65._0_8_;
    uStack_28 = auVar55._8_8_;
    uStack_30 = auVar55._0_8_;
    uStack_58 = auVar71._8_8_;
    uStack_60 = auVar71._0_8_;
    if ((int)uVar15 < (int)uVar2) {
      lVar16 = uVar2 - uVar17;
      lVar19 = *(long *)(param_5 + 10) + (long)(int)uVar15 * 0x18;
      pbVar18 = (byte *)((long)&uStack_40 + uVar17);
      puVar20 = (ushort *)((long)&uStack_60 + uVar17 * 2);
      pbVar21 = (byte *)((long)&uStack_30 + uVar17);
      do {
        lVar19 = lVar19 + 0x18;
        param_5 = (uint *)(ulong)*pbVar21;
        param_6 = (ulong)*(ushort *)(&UNK_10df0b9b8 + (ulong)*puVar20 * 2);
        uVar12 = uVar12 + *(ushort *)(&UNK_10df0b9b8 + (ulong)*puVar20 * 2) +
                 (uint)*(ushort *)(lVar13 + (long)param_5 * 2);
        lVar13 = *(long *)(lVar19 + (ulong)*pbVar18 * 8);
        lVar16 = lVar16 + -1;
        uVar17 = (ulong)uVar2;
        pbVar18 = pbVar18 + 1;
        puVar20 = puVar20 + 1;
        pbVar21 = pbVar21 + 1;
        uVar15 = uVar2;
      } while (lVar16 != 0);
    }
    uVar12 = uVar12 + *(ushort *)
                       (&UNK_10df0b9b8 + (ulong)*(ushort *)((long)&uStack_60 + uVar17 * 2) * 2) +
             (uint)*(ushort *)(lVar13 + (ulong)*(byte *)((long)&uStack_30 + uVar17) * 2);
    uVar11 = (ulong)uVar12;
    if (uVar15 < 0xf) {
      uVar11 = (ulong)(uVar12 + *(ushort *)
                                 (&UNK_10df0c9ca +
                                 (ulong)*(byte *)(*(long *)puVar1 +
                                                  (ulong)(byte)(&UNK_10df0c9b9)[uVar15] * 0x21 +
                                                 (ulong)*(byte *)((long)&uStack_40 + uVar17) * 0xb)
                                 * 2));
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    ___stack_chk_fail();
    FUN_10823bd40(*(undefined8 *)param_5,*(undefined8 *)(param_5 + 4));
    if (param_7 == 0) {
      return;
    }
    auVar71 = *(undefined1 (*) [16])(param_5 + 8);
    auVar50 = *(undefined1 (*) [16])(param_5 + 0xc);
    uVar54 = NEON_sqadd(auVar71._0_8_,auVar50._0_8_,2);
    auVar66._8_8_ = auVar50._8_8_;
    auVar66._0_8_ = auVar71._8_8_;
    auVar25._0_8_ = NEON_sqsub(auVar71._0_8_,auVar50._0_8_,2);
    auVar49._8_2_ = 0x4e7b;
    auVar49._0_8_ = 0x4e7b4e7b4e7b4e7b;
    auVar49._10_2_ = 0x4e7b;
    auVar49._12_2_ = 0x4e7b;
    auVar49._14_2_ = 0x4e7b;
    auVar55 = NEON_sqdmulh(auVar66,auVar49,2);
    auVar4._8_2_ = 0x4546;
    auVar4._0_8_ = 0x4546454645464546;
    auVar4._10_2_ = 0x4546;
    auVar4._12_2_ = 0x4546;
    auVar4._14_2_ = 0x4546;
    auVar65 = NEON_sqdmulh(auVar66,auVar4,2);
    auVar67._0_8_ =
         CONCAT26(auVar71._14_2_ + (auVar55._6_2_ >> 1),
                  CONCAT24(auVar71._12_2_ + (auVar55._4_2_ >> 1),
                           CONCAT22(auVar71._10_2_ + (auVar55._2_2_ >> 1),
                                    auVar71._8_2_ + (auVar55._0_2_ >> 1))));
    auVar67._8_2_ = auVar50._8_2_ + (auVar55._8_2_ >> 1);
    auVar67._10_2_ = auVar50._10_2_ + (auVar55._10_2_ >> 1);
    auVar67._12_2_ = auVar50._12_2_ + (auVar55._12_2_ >> 1);
    auVar67._14_2_ = auVar50._14_2_ + (auVar55._14_2_ >> 1);
    auVar71 = NEON_ext(auVar67,auVar67,8,1);
    auVar72._0_8_ = NEON_sqsub(auVar65._0_8_,auVar71._0_8_,2);
    auVar71 = NEON_ext(auVar65,auVar65,8,1);
    uVar64 = NEON_sqadd(auVar67._0_8_,auVar71._0_8_,2);
    auVar74._8_8_ = auVar25._0_8_;
    auVar74._0_8_ = uVar54;
    auVar72._8_8_ = uVar64;
    auVar25._8_8_ = uVar54;
    auVar7._8_8_ = auVar72._0_8_;
    auVar7._0_8_ = uVar64;
    auVar55 = NEON_sqadd(auVar74,auVar7,2);
    auVar71 = NEON_sqsub(auVar25,auVar72,2);
    auVar26._0_8_ = auVar71._6_8_ << 0x30;
    auVar26._10_6_ = auVar71._10_6_;
    auVar26._8_2_ = auVar55._12_2_;
    sVar22 = auVar55._14_2_;
    auVar28._14_2_ = auVar71._14_2_;
    auVar28._0_12_ = auVar26._0_12_;
    auVar28._12_2_ = sVar22;
    sVar23 = auVar71._10_2_;
    auVar27._0_10_ = CONCAT82(auVar28._8_8_,sVar23) << 0x30;
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._10_2_ = auVar71._12_2_;
    auVar29._0_14_ = auVar27._0_14_;
    auVar29._14_2_ = auVar28._14_2_;
    auVar8._2_10_ = auVar55._6_10_;
    auVar8._0_2_ = auVar71._0_2_;
    auVar58._0_8_ = auVar8._0_8_ << 0x20;
    auVar58._10_6_ = auVar55._10_6_;
    auVar58._8_2_ = auVar55._2_2_;
    auVar60._0_12_ = auVar58._0_12_;
    auVar60._12_2_ = auVar71._2_2_;
    auVar60._14_2_ = sVar22;
    auVar56._4_12_ = auVar60._4_12_;
    auVar56._2_2_ = auVar55._8_2_;
    auVar56._0_2_ = auVar55._0_2_;
    auVar57._8_8_ = auVar60._8_8_;
    auVar57._0_8_ = CONCAT26(auVar71._8_2_,auVar56._0_6_);
    auVar59._12_4_ = auVar60._12_4_;
    auVar59._0_10_ = auVar57._0_10_;
    auVar59._10_2_ = auVar55._10_2_;
    auVar61._0_14_ = auVar59._0_14_;
    auVar61._14_2_ = sVar23;
    auVar9._2_10_ = auVar29._6_10_;
    auVar9._0_2_ = auVar71._4_2_;
    auVar32._0_8_ = auVar9._0_8_ << 0x20;
    auVar32._10_6_ = auVar29._10_6_;
    auVar32._8_2_ = auVar55._6_2_;
    auVar34._0_12_ = auVar32._0_12_;
    auVar34._12_2_ = auVar71._6_2_;
    auVar34._14_2_ = auVar28._14_2_;
    auVar30._4_12_ = auVar34._4_12_;
    auVar30._2_2_ = auVar55._12_2_;
    auVar30._0_2_ = auVar55._4_2_;
    auVar31._8_8_ = auVar34._8_8_;
    auVar31._0_8_ = CONCAT26(auVar71._12_2_,auVar30._0_6_);
    auVar33._12_4_ = auVar34._12_4_;
    auVar33._0_10_ = auVar31._0_10_;
    auVar33._10_2_ = sVar22;
    auVar35._0_14_ = auVar33._0_14_;
    auVar35._14_2_ = auVar28._14_2_;
    uVar64 = NEON_sqadd(auVar57._0_8_,auVar31._0_8_,2);
    auVar73._0_8_ = NEON_sqsub(auVar57._0_8_,auVar31._0_8_,2);
    auVar36._8_8_ = auVar35._8_8_;
    auVar36._0_8_ = auVar61._8_8_;
    auVar50 = NEON_sqdmulh(auVar36,auVar49,2);
    auVar5._8_2_ = 0x4546;
    auVar5._0_8_ = 0x4546454645464546;
    auVar5._10_2_ = 0x4546;
    auVar5._12_2_ = 0x4546;
    auVar5._14_2_ = 0x4546;
    auVar65 = NEON_sqdmulh(auVar36,auVar5,2);
    auVar37._0_8_ =
         CONCAT26(sVar23 + (auVar50._6_2_ >> 1),
                  CONCAT24(auVar71._2_2_ + (auVar50._4_2_ >> 1),
                           CONCAT22(auVar55._10_2_ + (auVar50._2_2_ >> 1),
                                    auVar55._2_2_ + (auVar50._0_2_ >> 1))));
    auVar37._8_2_ = auVar55._6_2_ + (auVar50._8_2_ >> 1);
    auVar37._10_2_ = sVar22 + (auVar50._10_2_ >> 1);
    auVar37._12_2_ = auVar71._6_2_ + (auVar50._12_2_ >> 1);
    auVar37._14_2_ = auVar28._14_2_ + (auVar50._14_2_ >> 1);
    auVar71 = NEON_ext(auVar37,auVar37,8,1);
    auVar51._0_8_ = NEON_sqsub(auVar65._0_8_,auVar71._0_8_,2);
    auVar71 = NEON_ext(auVar65,auVar65,8,1);
    uVar54 = NEON_sqadd(auVar37._0_8_,auVar71._0_8_,2);
    auVar62._8_8_ = auVar73._0_8_;
    auVar62._0_8_ = uVar64;
    auVar6._8_2_ = (short)auVar51._0_8_;
    auVar6._0_8_ = uVar54;
    auVar6._10_2_ = (short)((ulong)auVar51._0_8_ >> 0x10);
    auVar6._12_2_ = (short)((ulong)auVar51._0_8_ >> 0x20);
    auVar6._14_2_ = (short)((ulong)auVar51._0_8_ >> 0x30);
    auVar50 = NEON_sqadd(auVar62,auVar6,2);
    auVar51._8_8_ = uVar54;
    auVar73._8_8_ = uVar64;
    auVar71 = NEON_sqsub(auVar73,auVar51,2);
    auVar38._0_8_ = auVar71._6_8_ << 0x30;
    sVar22 = auVar50._12_2_;
    auVar38._10_6_ = auVar71._10_6_;
    auVar38._8_2_ = sVar22;
    auVar40._14_2_ = auVar71._14_2_;
    auVar40._0_12_ = auVar38._0_12_;
    auVar40._12_2_ = auVar50._14_2_;
    auVar39._0_10_ = CONCAT82(auVar40._8_8_,auVar71._10_2_) << 0x30;
    sVar23 = auVar71._12_2_;
    auVar39._12_4_ = auVar40._12_4_;
    auVar39._10_2_ = sVar23;
    auVar41._0_14_ = auVar39._0_14_;
    auVar41._14_2_ = auVar40._14_2_;
    auVar10._2_10_ = auVar41._6_10_;
    auVar10._0_2_ = auVar71._4_2_;
    auVar43._0_8_ = auVar10._0_8_ << 0x20;
    auVar43._10_6_ = auVar41._10_6_;
    auVar43._8_2_ = auVar50._6_2_;
    auVar44._0_12_ = auVar43._0_12_;
    auVar44._12_2_ = auVar71._6_2_;
    auVar44._14_2_ = auVar40._14_2_;
    auVar42._4_12_ = auVar44._4_12_;
    auVar42._2_2_ = sVar22;
    auVar42._0_2_ = auVar50._4_2_;
    uVar48 = *(undefined4 *)(uVar11 + 4);
    uVar53 = *(undefined4 *)(uVar11 + 0x24);
    uVar63 = *(undefined4 *)(uVar11 + 0x44);
    uVar69 = *(undefined4 *)(uVar11 + 100);
    auVar52._0_8_ =
         CONCAT26((ushort)(byte)((uint)uVar48 >> 0x18) + (auVar71._8_2_ >> 3),
                  CONCAT24((ushort)(byte)((uint)uVar48 >> 0x10) + (auVar71._0_2_ >> 3),
                           CONCAT22((ushort)(byte)((uint)uVar48 >> 8) + (auVar50._8_2_ >> 3),
                                    (ushort)(byte)uVar48 + (auVar50._0_2_ >> 3))));
    auVar52._8_2_ = (ushort)(byte)uVar53 + (auVar50._2_2_ >> 3);
    auVar52._10_2_ = (ushort)(byte)((uint)uVar53 >> 8) + (auVar50._10_2_ >> 3);
    auVar52._12_2_ = (ushort)(byte)((uint)uVar53 >> 0x10) + (auVar71._2_2_ >> 3);
    auVar52._14_2_ = (ushort)(byte)((uint)uVar53 >> 0x18) + (auVar71._10_2_ >> 3);
    auVar68._0_2_ = (ushort)(byte)uVar63 + (auVar50._4_2_ >> 3);
    auVar68._2_2_ = (ushort)(byte)((uint)uVar63 >> 8) + (sVar22 >> 3);
    auVar68._4_2_ = (ushort)(byte)((uint)uVar63 >> 0x10) + (auVar71._4_2_ >> 3);
    auVar68._6_2_ = (ushort)(byte)((uint)uVar63 >> 0x18) + (sVar23 >> 3);
    auVar68._8_2_ = (ushort)(byte)uVar69 + (auVar50._6_2_ >> 3);
    auVar68._10_2_ = (ushort)(byte)((uint)uVar69 >> 8) + (auVar50._14_2_ >> 3);
    auVar68._12_2_ = (ushort)(byte)((uint)uVar69 >> 0x10) + (auVar71._6_2_ >> 3);
    auVar68._14_2_ = (ushort)(byte)((uint)uVar69 >> 0x18) + (auVar40._14_2_ >> 3);
    uVar54 = NEON_sqxtun(CONCAT26(sVar23,auVar42._0_6_),auVar52,2);
    uVar64 = NEON_sqxtun(auVar52._0_8_,auVar68,2);
    *(int *)(param_6 + 4) = (int)uVar54;
    *(int *)(param_6 + 0x24) = (int)((ulong)uVar54 >> 0x20);
    *(int *)(param_6 + 0x44) = (int)uVar64;
    *(int *)(param_6 + 100) = (int)((ulong)uVar64 >> 0x20);
    return;
  }
  return;
}



/* Entry: 10823b2a0; end: 10823b2fb;  */

void FUN_10823b2a0(long param_1,undefined8 *param_2,long param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined4 uVar31;
  undefined4 uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  short sVar46;
  short sVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar29 [16];
  undefined1 auVar13 [16];
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  undefined1 auVar14 [16];
  undefined1 auVar20 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar27 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  FUN_10823bd40(*param_2,param_2[2],param_1,param_3);
  if (param_4 != 0) {
    auVar37 = *(undefined1 (*) [16])(param_2 + 4);
    auVar56 = *(undefined1 (*) [16])(param_2 + 6);
    uVar36 = NEON_sqadd(auVar37._0_8_,auVar56._0_8_,2);
    sVar52 = auVar56._8_2_;
    sVar53 = auVar56._10_2_;
    sVar54 = auVar56._12_2_;
    sVar55 = auVar56._14_2_;
    auVar11._0_8_ = NEON_sqsub(auVar37._0_8_,auVar56._0_8_,2);
    auVar32._8_2_ = 0x4e7b;
    auVar32._0_8_ = 0x4e7b4e7b4e7b4e7b;
    auVar32._10_2_ = 0x4e7b;
    auVar32._12_2_ = 0x4e7b;
    auVar32._14_2_ = 0x4e7b;
    auVar56._8_2_ = sVar52;
    auVar56._0_8_ = auVar37._8_8_;
    auVar56._10_2_ = sVar53;
    auVar56._12_2_ = sVar54;
    auVar56._14_2_ = sVar55;
    auVar56 = NEON_sqdmulh(auVar56,auVar32,2);
    auVar59._8_2_ = sVar52;
    auVar59._0_8_ = auVar37._8_8_;
    auVar59._10_2_ = sVar53;
    auVar59._12_2_ = sVar54;
    auVar59._14_2_ = sVar55;
    auVar3._8_2_ = 0x4546;
    auVar3._0_8_ = 0x4546454645464546;
    auVar3._10_2_ = 0x4546;
    auVar3._12_2_ = 0x4546;
    auVar3._14_2_ = 0x4546;
    auVar59 = NEON_sqdmulh(auVar59,auVar3,2);
    sVar46 = auVar37._8_2_ + (auVar56._0_2_ >> 1);
    sVar47 = auVar37._10_2_ + (auVar56._2_2_ >> 1);
    sVar48 = auVar37._12_2_ + (auVar56._4_2_ >> 1);
    sVar50 = auVar37._14_2_ + (auVar56._6_2_ >> 1);
    sVar52 = sVar52 + (auVar56._8_2_ >> 1);
    sVar53 = sVar53 + (auVar56._10_2_ >> 1);
    sVar54 = sVar54 + (auVar56._12_2_ >> 1);
    sVar55 = sVar55 + (auVar56._14_2_ >> 1);
    auVar37._2_2_ = sVar47;
    auVar37._0_2_ = sVar46;
    auVar37._4_2_ = sVar48;
    auVar37._6_2_ = sVar50;
    auVar37._8_2_ = sVar52;
    auVar37._10_2_ = sVar53;
    auVar37._12_2_ = sVar54;
    auVar37._14_2_ = sVar55;
    auVar44._2_2_ = sVar47;
    auVar44._0_2_ = sVar46;
    auVar44._4_2_ = sVar48;
    auVar44._6_2_ = sVar50;
    auVar44._8_2_ = sVar52;
    auVar44._10_2_ = sVar53;
    auVar44._12_2_ = sVar54;
    auVar44._14_2_ = sVar55;
    auVar56 = NEON_ext(auVar37,auVar44,8,1);
    auVar57._0_8_ = NEON_sqsub(auVar59._0_8_,auVar56._0_8_,2);
    auVar56 = NEON_ext(auVar59,auVar59,8,1);
    uVar10 = NEON_sqadd(CONCAT26(sVar50,CONCAT24(sVar48,CONCAT22(sVar47,sVar46))),auVar56._0_8_,2);
    auVar60._8_8_ = auVar11._0_8_;
    auVar60._0_8_ = uVar36;
    auVar57._8_8_ = uVar10;
    auVar11._8_8_ = uVar36;
    auVar6._8_8_ = auVar57._0_8_;
    auVar6._0_8_ = uVar10;
    auVar37 = NEON_sqadd(auVar60,auVar6,2);
    auVar56 = NEON_sqsub(auVar11,auVar57,2);
    auVar12._0_8_ = auVar56._6_8_ << 0x30;
    auVar12._10_6_ = auVar56._10_6_;
    auVar12._8_2_ = auVar37._12_2_;
    sVar46 = auVar37._14_2_;
    auVar14._14_2_ = auVar56._14_2_;
    auVar14._0_12_ = auVar12._0_12_;
    auVar14._12_2_ = sVar46;
    sVar47 = auVar56._10_2_;
    auVar13._0_10_ = CONCAT82(auVar14._8_8_,sVar47) << 0x30;
    auVar13._12_4_ = auVar14._12_4_;
    auVar13._10_2_ = auVar56._12_2_;
    auVar15._0_14_ = auVar13._0_14_;
    auVar15._14_2_ = auVar14._14_2_;
    auVar7._2_10_ = auVar37._6_10_;
    auVar7._0_2_ = auVar56._0_2_;
    auVar40._0_8_ = auVar7._0_8_ << 0x20;
    auVar40._10_6_ = auVar37._10_6_;
    auVar40._8_2_ = auVar37._2_2_;
    auVar42._0_12_ = auVar40._0_12_;
    auVar42._12_2_ = auVar56._2_2_;
    auVar42._14_2_ = sVar46;
    auVar38._4_12_ = auVar42._4_12_;
    auVar38._2_2_ = auVar37._8_2_;
    auVar38._0_2_ = auVar37._0_2_;
    auVar39._8_8_ = auVar42._8_8_;
    auVar39._0_8_ = CONCAT26(auVar56._8_2_,auVar38._0_6_);
    auVar41._12_4_ = auVar42._12_4_;
    auVar41._0_10_ = auVar39._0_10_;
    auVar41._10_2_ = auVar37._10_2_;
    auVar43._0_14_ = auVar41._0_14_;
    auVar43._14_2_ = sVar47;
    auVar8._2_10_ = auVar15._6_10_;
    auVar8._0_2_ = auVar56._4_2_;
    auVar18._0_8_ = auVar8._0_8_ << 0x20;
    auVar18._10_6_ = auVar15._10_6_;
    auVar18._8_2_ = auVar37._6_2_;
    auVar20._0_12_ = auVar18._0_12_;
    auVar20._12_2_ = auVar56._6_2_;
    auVar20._14_2_ = auVar14._14_2_;
    auVar16._4_12_ = auVar20._4_12_;
    auVar16._2_2_ = auVar37._12_2_;
    auVar16._0_2_ = auVar37._4_2_;
    auVar17._8_8_ = auVar20._8_8_;
    auVar17._0_8_ = CONCAT26(auVar56._12_2_,auVar16._0_6_);
    auVar19._12_4_ = auVar20._12_4_;
    auVar19._0_10_ = auVar17._0_10_;
    auVar19._10_2_ = sVar46;
    auVar21._0_14_ = auVar19._0_14_;
    auVar21._14_2_ = auVar14._14_2_;
    uVar10 = NEON_sqadd(auVar39._0_8_,auVar17._0_8_,2);
    auVar58._0_8_ = NEON_sqsub(auVar39._0_8_,auVar17._0_8_,2);
    auVar22._8_8_ = auVar21._8_8_;
    auVar22._0_8_ = auVar43._8_8_;
    auVar59 = NEON_sqdmulh(auVar22,auVar32,2);
    auVar4._8_2_ = 0x4546;
    auVar4._0_8_ = 0x4546454645464546;
    auVar4._10_2_ = 0x4546;
    auVar4._12_2_ = 0x4546;
    auVar4._14_2_ = 0x4546;
    auVar44 = NEON_sqdmulh(auVar22,auVar4,2);
    auVar23._0_8_ =
         CONCAT26(sVar47 + (auVar59._6_2_ >> 1),
                  CONCAT24(auVar56._2_2_ + (auVar59._4_2_ >> 1),
                           CONCAT22(auVar37._10_2_ + (auVar59._2_2_ >> 1),
                                    auVar37._2_2_ + (auVar59._0_2_ >> 1))));
    auVar23._8_2_ = auVar37._6_2_ + (auVar59._8_2_ >> 1);
    auVar23._10_2_ = sVar46 + (auVar59._10_2_ >> 1);
    auVar23._12_2_ = auVar56._6_2_ + (auVar59._12_2_ >> 1);
    auVar23._14_2_ = auVar14._14_2_ + (auVar59._14_2_ >> 1);
    auVar56 = NEON_ext(auVar23,auVar23,8,1);
    auVar33._0_8_ = NEON_sqsub(auVar44._0_8_,auVar56._0_8_,2);
    auVar56 = NEON_ext(auVar44,auVar44,8,1);
    uVar36 = NEON_sqadd(auVar23._0_8_,auVar56._0_8_,2);
    auVar45._8_8_ = auVar58._0_8_;
    auVar45._0_8_ = uVar10;
    auVar5._8_2_ = (short)auVar33._0_8_;
    auVar5._0_8_ = uVar36;
    auVar5._10_2_ = (short)((ulong)auVar33._0_8_ >> 0x10);
    auVar5._12_2_ = (short)((ulong)auVar33._0_8_ >> 0x20);
    auVar5._14_2_ = (short)((ulong)auVar33._0_8_ >> 0x30);
    auVar59 = NEON_sqadd(auVar45,auVar5,2);
    auVar33._8_8_ = uVar36;
    auVar58._8_8_ = uVar10;
    auVar56 = NEON_sqsub(auVar58,auVar33,2);
    auVar24._0_8_ = auVar56._6_8_ << 0x30;
    sVar46 = auVar59._12_2_;
    auVar24._10_6_ = auVar56._10_6_;
    auVar24._8_2_ = sVar46;
    auVar26._14_2_ = auVar56._14_2_;
    auVar26._0_12_ = auVar24._0_12_;
    auVar26._12_2_ = auVar59._14_2_;
    auVar25._0_10_ = CONCAT82(auVar26._8_8_,auVar56._10_2_) << 0x30;
    sVar47 = auVar56._12_2_;
    auVar25._12_4_ = auVar26._12_4_;
    auVar25._10_2_ = sVar47;
    auVar27._0_14_ = auVar25._0_14_;
    auVar27._14_2_ = auVar26._14_2_;
    auVar9._2_10_ = auVar27._6_10_;
    auVar9._0_2_ = auVar56._4_2_;
    auVar29._0_8_ = auVar9._0_8_ << 0x20;
    auVar29._10_6_ = auVar27._10_6_;
    auVar29._8_2_ = auVar59._6_2_;
    auVar30._0_12_ = auVar29._0_12_;
    auVar30._12_2_ = auVar56._6_2_;
    auVar30._14_2_ = auVar26._14_2_;
    auVar28._4_12_ = auVar30._4_12_;
    auVar28._2_2_ = sVar46;
    auVar28._0_2_ = auVar59._4_2_;
    uVar31 = *(undefined4 *)(param_1 + 4);
    uVar35 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    uVar49 = (ushort)*(undefined4 *)(param_1 + 100);
    uVar51 = (ushort)((uint)*(undefined4 *)(param_1 + 100) >> 0x10);
    auVar34._0_8_ =
         CONCAT26((ushort)(byte)((uint)uVar31 >> 0x18) + (auVar56._8_2_ >> 3),
                  CONCAT24((ushort)(byte)((uint)uVar31 >> 0x10) + (auVar56._0_2_ >> 3),
                           CONCAT22((ushort)(byte)((uint)uVar31 >> 8) + (auVar59._8_2_ >> 3),
                                    (ushort)(byte)uVar31 + (auVar59._0_2_ >> 3))));
    auVar34._8_2_ = (ushort)(byte)uVar35 + (auVar59._2_2_ >> 3);
    auVar34._10_2_ = (ushort)(byte)((uint)uVar35 >> 8) + (auVar59._10_2_ >> 3);
    auVar34._12_2_ = (ushort)(byte)((uint)uVar35 >> 0x10) + (auVar56._2_2_ >> 3);
    auVar34._14_2_ = (ushort)(byte)((uint)uVar35 >> 0x18) + (auVar56._10_2_ >> 3);
    uVar10 = NEON_sqxtun(CONCAT26(sVar47,auVar28._0_6_),auVar34,2);
    auVar1._2_2_ = (ushort)(byte)((uint)uVar2 >> 8) + (sVar46 >> 3);
    auVar1._0_2_ = (ushort)(byte)uVar2 + (auVar59._4_2_ >> 3);
    auVar1._4_2_ = (ushort)(byte)((uint)uVar2 >> 0x10) + (auVar56._4_2_ >> 3);
    auVar1._6_2_ = (ushort)(byte)((uint)uVar2 >> 0x18) + (sVar47 >> 3);
    auVar1._8_2_ = (uVar49 & 0xff) + (auVar59._6_2_ >> 3);
    auVar1._10_2_ = (uVar49 >> 8) + (auVar59._14_2_ >> 3);
    auVar1._12_2_ = (uVar51 & 0xff) + (auVar56._6_2_ >> 3);
    auVar1._14_2_ = (uVar51 >> 8) + (auVar26._14_2_ >> 3);
    uVar36 = NEON_sqxtun(auVar34._0_8_,auVar1,2);
    *(int *)(param_3 + 4) = (int)uVar10;
    *(int *)(param_3 + 0x24) = (int)((ulong)uVar10 >> 0x20);
    *(int *)(param_3 + 0x44) = (int)uVar36;
    *(int *)(param_3 + 100) = (int)((ulong)uVar36 >> 0x20);
    return;
  }
  return;
}



/* Entry: 10823b2fc; end: 10823b613;  */

void FUN_10823b2fc(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  undefined4 uVar37;
  undefined4 uVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  
  uVar2 = *param_1;
  uVar5 = param_1[8];
  uVar37 = *param_2;
  uVar41 = param_2[8];
  sVar15 = (ushort)(byte)uVar2 - (ushort)(byte)uVar37;
  sVar3 = (ushort)(byte)((uint)uVar2 >> 8) - (ushort)(byte)((uint)uVar37 >> 8);
  uVar23 = (undefined1)((ushort)sVar3 >> 8);
  sVar4 = (ushort)(byte)((uint)uVar2 >> 0x10) - (ushort)(byte)((uint)uVar37 >> 0x10);
  uVar24 = (undefined1)((ushort)sVar4 >> 8);
  sVar6 = (ushort)(byte)((uint)uVar2 >> 0x18) - (ushort)(byte)((uint)uVar37 >> 0x18);
  uVar25 = (undefined1)((ushort)sVar6 >> 8);
  sVar26 = ((ushort)uVar5 & 0xff) - ((ushort)uVar41 & 0xff);
  sVar27 = (ushort)(byte)((uint)uVar5 >> 8) - (ushort)(byte)((uint)uVar41 >> 8);
  sVar28 = (ushort)(byte)((uint)uVar5 >> 0x10) - (ushort)(byte)((uint)uVar41 >> 0x10);
  sVar29 = (ushort)(byte)((uint)uVar5 >> 0x18) - (ushort)(byte)((uint)uVar41 >> 0x18);
  uVar2 = param_1[0x10];
  uVar5 = param_1[0x18];
  uVar37 = param_2[0x10];
  uVar41 = param_2[0x18];
  sVar9 = (ushort)(byte)uVar2 - (ushort)(byte)uVar37;
  sVar10 = (ushort)(byte)((uint)uVar2 >> 8) - (ushort)(byte)((uint)uVar37 >> 8);
  uVar30 = (undefined1)((ushort)sVar10 >> 8);
  sVar12 = (ushort)(byte)((uint)uVar2 >> 0x10) - (ushort)(byte)((uint)uVar37 >> 0x10);
  uVar31 = (undefined1)((ushort)sVar12 >> 8);
  sVar13 = (ushort)(byte)((uint)uVar2 >> 0x18) - (ushort)(byte)((uint)uVar37 >> 0x18);
  uVar32 = (undefined1)((ushort)sVar13 >> 8);
  sVar33 = ((ushort)uVar5 & 0xff) - (ushort)(byte)uVar41;
  sVar34 = (ushort)(byte)((uint)uVar5 >> 8) - (ushort)(byte)((uint)uVar41 >> 8);
  sVar35 = (ushort)(byte)((uint)uVar5 >> 0x10) - (ushort)(byte)((uint)uVar41 >> 0x10);
  sVar36 = (ushort)(byte)((uint)uVar5 >> 0x18) - (ushort)(byte)((uint)uVar41 >> 0x18);
  auVar38[2] = (char)sVar3;
  auVar38._0_2_ = sVar15;
  auVar38[3] = uVar23;
  auVar38[4] = (char)sVar4;
  auVar38[5] = uVar24;
  auVar38[6] = (char)sVar6;
  auVar38[7] = uVar25;
  auVar38._8_2_ = sVar26;
  auVar38._10_2_ = sVar27;
  auVar38._12_2_ = sVar28;
  auVar38._14_2_ = sVar29;
  auVar39[2] = (char)sVar3;
  auVar39._0_2_ = sVar15;
  auVar39[3] = uVar23;
  auVar39[4] = (char)sVar4;
  auVar39[5] = uVar24;
  auVar39[6] = (char)sVar6;
  auVar39[7] = uVar25;
  auVar39._8_2_ = sVar26;
  auVar39._10_2_ = sVar27;
  auVar39._12_2_ = sVar28;
  auVar39._14_2_ = sVar29;
  auVar38 = NEON_ext(auVar38,auVar39,8,1);
  auVar7[2] = (char)sVar10;
  auVar7._0_2_ = sVar9;
  auVar7[3] = uVar30;
  auVar7[4] = (char)sVar12;
  auVar7[5] = uVar31;
  auVar7[6] = (char)sVar13;
  auVar7[7] = uVar32;
  auVar7._8_2_ = sVar33;
  auVar7._10_2_ = sVar34;
  auVar7._12_2_ = sVar35;
  auVar7._14_2_ = sVar36;
  auVar8[2] = (char)sVar10;
  auVar8._0_2_ = sVar9;
  auVar8[3] = uVar30;
  auVar8[4] = (char)sVar12;
  auVar8[5] = uVar31;
  auVar8[6] = (char)sVar13;
  auVar8[7] = uVar32;
  auVar8._8_2_ = sVar33;
  auVar8._10_2_ = sVar34;
  auVar8._12_2_ = sVar35;
  auVar8._14_2_ = sVar36;
  auVar39 = NEON_ext(auVar7,auVar8,8,1);
  sVar42 = (short)(CONCAT13(auVar38[3],CONCAT12(auVar38[2],sVar3)) >> 0x10);
  sVar43 = (short)(CONCAT13(auVar39[3],CONCAT12(auVar39[2],sVar10)) >> 0x10);
  sVar26 = (short)(CONCAT13(auVar38[7],CONCAT12(auVar38[6],sVar6)) >> 0x10);
  sVar11 = auVar38._0_2_ - sVar26;
  sVar27 = (short)(CONCAT13(auVar39[7],CONCAT12(auVar39[6],sVar13)) >> 0x10);
  sVar14 = auVar39._0_2_ - sVar27;
  sVar28 = (sVar15 + sVar6) * 8;
  sVar33 = (auVar38._0_2_ + sVar26) * 8;
  uVar23 = (undefined1)((ushort)sVar33 >> 8);
  sVar35 = (sVar9 + sVar13) * 8;
  uVar24 = (undefined1)((ushort)sVar35 >> 8);
  sVar36 = (auVar39._0_2_ + sVar27) * 8;
  uVar25 = (undefined1)((ushort)sVar36 >> 8);
  sVar26 = (sVar3 + sVar4) * 8;
  sVar27 = (sVar42 + auVar38._4_2_) * 8;
  sVar29 = (sVar10 + sVar12) * 8;
  sVar34 = (sVar43 + auVar39._4_2_) * 8;
  auVar40[2] = (char)sVar33;
  auVar40._0_2_ = sVar28;
  auVar40[3] = uVar23;
  auVar40[4] = (char)sVar35;
  auVar40[5] = uVar24;
  auVar40[6] = (char)sVar36;
  auVar40[7] = uVar25;
  auVar40._8_2_ = sVar26;
  auVar40._10_2_ = sVar27;
  auVar40._12_2_ = sVar29;
  auVar40._14_2_ = sVar34;
  auVar1[2] = (char)sVar33;
  auVar1._0_2_ = sVar28;
  auVar1[3] = uVar23;
  auVar1[4] = (char)sVar35;
  auVar1[5] = uVar24;
  auVar1[6] = (char)sVar36;
  auVar1[7] = uVar25;
  auVar1._8_2_ = sVar26;
  auVar1._10_2_ = sVar27;
  auVar1._12_2_ = sVar29;
  auVar1._14_2_ = sVar34;
  auVar40 = NEON_ext(auVar40,auVar1,8,1);
  sVar29 = sVar28 + auVar40._0_2_;
  sVar45 = sVar33 + auVar40._2_2_;
  sVar46 = sVar35 + auVar40._4_2_;
  sVar47 = sVar36 + auVar40._6_2_;
  sVar28 = sVar28 - auVar40._0_2_;
  sVar33 = sVar33 - auVar40._2_2_;
  sVar35 = sVar35 - auVar40._4_2_;
  sVar36 = sVar36 - auVar40._6_2_;
  sVar42 = sVar42 - auVar38._4_2_;
  sVar43 = sVar43 - auVar39._4_2_;
  uVar16 = (uint)(sVar42 * 0x8a9 + 0x714 + sVar11 * 0x14e8) >> 9;
  uVar20 = (uint)(sVar43 * 0x8a9 + 0x714 + sVar14 * 0x14e8) >> 9;
  sVar34 = (short)((uint)((short)(sVar3 - sVar4) * 0x8a9 + 0x714 + (short)(sVar15 - sVar6) * 0x14e8)
                  >> 9);
  uVar17 = sVar11 * 0x8a9 + sVar42 * -0x14e8 + 0x3a9U >> 9;
  uVar21 = sVar14 * 0x8a9 + sVar43 * -0x14e8 + 0x3a9U >> 9;
  sVar15 = (short)((short)(sVar15 - sVar6) * 0x8a9 + (short)(sVar3 - sVar4) * -0x14e8 + 0x3a9U >> 9)
  ;
  sVar42 = (short)((short)(sVar9 - sVar13) * 0x8a9 + (short)(sVar10 - sVar12) * -0x14e8 + 0x3a9U >>
                  9);
  sVar3 = (short)((uint)((short)(sVar10 - sVar12) * 0x8a9 + 0x714 + (short)(sVar9 - sVar13) * 0x14e8
                        ) >> 9);
  sVar43 = (short)(CONCAT13((char)(uVar16 >> 8),CONCAT12((char)uVar16,sVar45)) >> 0x10);
  sVar44 = (short)(CONCAT13((char)(uVar17 >> 8),CONCAT12((char)uVar17,sVar33)) >> 0x10);
  sVar26 = (short)(CONCAT13((char)(uVar20 >> 8),CONCAT12((char)uVar20,sVar47)) >> 0x10);
  sVar27 = (short)(CONCAT13((char)(uVar21 >> 8),CONCAT12((char)uVar21,sVar36)) >> 0x10);
  sVar4 = sVar29 + sVar47 + 7;
  sVar9 = sVar34 + sVar26 + 7;
  sVar11 = sVar28 + sVar36 + 7;
  sVar13 = sVar15 + sVar27 + 7;
  sVar48 = sVar45 + sVar46;
  sVar49 = sVar43 + sVar3;
  sVar50 = sVar33 + sVar35;
  sVar51 = sVar44 + sVar42;
  sVar6 = sVar4 - sVar48;
  sVar10 = sVar9 - sVar49;
  sVar12 = sVar11 - sVar50;
  sVar14 = sVar13 - sVar51;
  sVar29 = sVar29 - sVar47;
  sVar34 = sVar34 - sVar26;
  sVar28 = sVar28 - sVar36;
  sVar15 = sVar15 - sVar27;
  sVar45 = sVar45 - sVar46;
  sVar43 = sVar43 - sVar3;
  sVar33 = sVar33 - sVar35;
  sVar44 = sVar44 - sVar42;
  sVar26 = (short)((uint)(sVar43 * 0x8a9 + 0x12ee0 + sVar34 * 0x14e8) >> 0x10) -
           (ushort)(sVar34 == 0);
  sVar27 = (short)((uint)(sVar33 * 0x8a9 + 0x12ee0 + sVar28 * 0x14e8) >> 0x10) -
           (ushort)(sVar28 == 0);
  sVar3 = (short)((uint)(sVar44 * 0x8a9 + 0x12ee0 + sVar15 * 0x14e8) >> 0x10) -
          (ushort)(sVar15 == 0);
  *param_3 = CONCAT26((short)(sVar13 + sVar51) >> 4,
                      CONCAT24((short)(sVar11 + sVar50) >> 4,
                               CONCAT22((short)(sVar9 + sVar49) >> 4,(short)(sVar4 + sVar48) >> 4)))
  ;
  param_3[1] = CONCAT17((char)((ushort)sVar3 >> 8),
                        CONCAT16((char)sVar3,
                                 CONCAT15((char)((ushort)sVar27 >> 8),
                                          CONCAT14((char)sVar27,
                                                   CONCAT13((char)((ushort)sVar26 >> 8),
                                                            CONCAT12((char)sVar26,
                                                                     (short)((uint)(sVar45 * 0x8a9 +
                                                                                    0x12ee0 +
                                                                                   sVar29 * 0x14e8)
                                                                            >> 0x10) -
                                                                     (ushort)(sVar29 == 0)))))));
  iVar18 = sVar34 * 0x8a9 + sVar43 * -0x14e8 + 51000;
  iVar19 = sVar28 * 0x8a9 + sVar33 * -0x14e8 + 51000;
  iVar22 = sVar15 * 0x8a9 + sVar44 * -0x14e8 + 51000;
  param_3[2] = CONCAT17((char)(sVar14 >> 0xc),
                        CONCAT16((char)(sVar14 >> 4),
                                 CONCAT15((char)(sVar12 >> 0xc),
                                          CONCAT14((char)(sVar12 >> 4),
                                                   CONCAT13((char)(sVar10 >> 0xc),
                                                            CONCAT12((char)(sVar10 >> 4),
                                                                     CONCAT11((char)(sVar6 >> 0xc),
                                                                              (char)(sVar6 >> 4)))))
                                         )));
  param_3[3] = CONCAT17((char)((uint)iVar22 >> 0x18),
                        CONCAT16((char)((uint)iVar22 >> 0x10),
                                 CONCAT15((char)((uint)iVar19 >> 0x18),
                                          CONCAT14((char)((uint)iVar19 >> 0x10),
                                                   CONCAT13((char)((uint)iVar18 >> 0x18),
                                                            CONCAT12((char)((uint)iVar18 >> 0x10),
                                                                     (short)((uint)(sVar29 * 0x8a9 +
                                                                                    sVar45 * -0x14e8
                                                                                   + 51000) >> 0x10)
                                                                    ))))));
  return;
}



/* Entry: 10823b614; end: 10823b68b;  */

int FUN_10823b614(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    uVar5 = 0;
    do {
      lVar2 = param_1 + uVar5;
      func_0x00010823b530(lVar2,param_2 + uVar5,param_3);
      iVar3 = (int)lVar2 + iVar3;
      bVar1 = uVar5 < 0xc;
      uVar5 = uVar5 + 4;
    } while (bVar1);
    param_2 = param_2 + 0x80;
    param_1 = param_1 + 0x80;
    bVar1 = uVar4 < 0x180;
    uVar4 = uVar4 + 0x80;
  } while (bVar1);
  return iVar3;
}



/* Entry: 10823b68c; end: 10823b7d3;  */

ulong FUN_10823b68c(ulong param_1,long param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar19;
  undefined1 auVar8 [16];
  int iVar18;
  undefined1 auVar9 [16];
  ushort uVar20;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  undefined1 auVar21 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int aiStack_f0 [34];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_f0[0x1a] = 0;
  aiStack_f0[0x1b] = 0;
  aiStack_f0[0x18] = 0;
  aiStack_f0[0x19] = 0;
  aiStack_f0[0x1e] = 0;
  aiStack_f0[0x1f] = 0;
  aiStack_f0[0x1c] = 0;
  aiStack_f0[0x1d] = 0;
  aiStack_f0[0x12] = 0;
  aiStack_f0[0x13] = 0;
  aiStack_f0[0x10] = 0;
  aiStack_f0[0x11] = 0;
  aiStack_f0[0x16] = 0;
  aiStack_f0[0x17] = 0;
  aiStack_f0[0x14] = 0;
  aiStack_f0[0x15] = 0;
  aiStack_f0[10] = 0;
  aiStack_f0[0xb] = 0;
  aiStack_f0[8] = 0;
  aiStack_f0[9] = 0;
  aiStack_f0[0xe] = 0;
  aiStack_f0[0xf] = 0;
  aiStack_f0[0xc] = 0;
  aiStack_f0[0xd] = 0;
  aiStack_f0[2] = 0;
  aiStack_f0[3] = 0;
  aiStack_f0[0] = 0;
  aiStack_f0[1] = 0;
  aiStack_f0[6] = 0;
  aiStack_f0[7] = 0;
  aiStack_f0[4] = 0;
  aiStack_f0[5] = 0;
  uVar3 = param_1;
  lVar4 = param_2;
  if (param_3 < param_4) {
    lVar6 = (long)param_3;
    do {
      uVar3 = param_1 + (long)*(int *)(&UNK_10df0cbcc + lVar6 * 4);
      lVar4 = param_2 + *(int *)(&UNK_10df0cbcc + lVar6 * 4);
      FUN_10823b2fc(uVar3,lVar4,&uStack_110);
      lVar5 = 0;
      uVar7 = MP_INT_ABS((undefined2)uStack_110);
      uVar10 = MP_INT_ABS(uStack_110._2_2_);
      uVar11 = MP_INT_ABS(uStack_110._4_2_);
      uVar13 = MP_INT_ABS(uStack_110._6_2_);
      uVar14 = MP_INT_ABS((undefined2)uStack_108);
      uVar16 = MP_INT_ABS(uStack_108._2_2_);
      uVar17 = MP_INT_ABS(uStack_108._4_2_);
      uVar19 = MP_INT_ABS(uStack_108._6_2_);
      uVar20 = MP_INT_ABS((undefined2)uStack_100);
      uVar22 = MP_INT_ABS(uStack_100._2_2_);
      uVar23 = MP_INT_ABS(uStack_100._4_2_);
      uVar24 = MP_INT_ABS(uStack_100._6_2_);
      uVar25 = MP_INT_ABS((undefined2)uStack_f8);
      uVar26 = MP_INT_ABS(uStack_f8._2_2_);
      uVar27 = MP_INT_ABS(uStack_f8._4_2_);
      uVar28 = MP_INT_ABS(uStack_f8._6_2_);
      auVar8._0_2_ = uVar7 >> 3;
      auVar8._2_2_ = uVar10 >> 3;
      auVar8._4_2_ = uVar11 >> 3;
      auVar8._6_2_ = uVar13 >> 3;
      auVar8._8_2_ = uVar14 >> 3;
      auVar8._10_2_ = uVar16 >> 3;
      auVar8._12_2_ = uVar17 >> 3;
      auVar8._14_2_ = uVar19 >> 3;
      auVar21._0_2_ = uVar20 >> 3;
      auVar21._2_2_ = uVar22 >> 3;
      auVar21._4_2_ = uVar23 >> 3;
      auVar21._6_2_ = uVar24 >> 3;
      auVar21._8_2_ = uVar25 >> 3;
      auVar21._10_2_ = uVar26 >> 3;
      auVar21._12_2_ = uVar27 >> 3;
      auVar21._14_2_ = uVar28 >> 3;
      auVar29._8_2_ = 0x1f;
      auVar29._0_8_ = 0x1f001f001f001f;
      auVar29._10_2_ = 0x1f;
      auVar29._12_2_ = 0x1f;
      auVar29._14_2_ = 0x1f;
      auVar8 = NEON_umin(auVar8,auVar29,2);
      auVar21 = NEON_umin(auVar21,auVar29,2);
      uStack_108 = auVar8._8_8_;
      uStack_110 = auVar8._0_8_;
      uStack_f8 = auVar21._8_8_;
      uStack_100 = auVar21._0_8_;
      do {
        aiStack_f0[*(short *)((long)&uStack_110 + lVar5)] =
             aiStack_f0[*(short *)((long)&uStack_110 + lVar5)] + 1;
        lVar5 = lVar5 + 2;
      } while (lVar5 != 0x20);
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_4);
  }
  lVar6 = 0;
  iVar12 = 1;
  iVar15 = 0;
  do {
    iVar1 = aiStack_f0[lVar6];
    iVar18 = iVar1;
    if (iVar1 <= iVar15) {
      iVar18 = iVar15;
    }
    iVar2 = (int)lVar6;
    if (iVar1 < 1) {
      iVar18 = iVar15;
      iVar2 = iVar12;
    }
    iVar12 = iVar2;
    lVar6 = lVar6 + 1;
    iVar15 = iVar18;
  } while (lVar6 != 0x20);
  *param_5 = iVar18;
  param_5[1] = iVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar6 = 0;
    auVar9 = ZEXT216(0);
    do {
      auVar8 = NEON_uabd(*(undefined1 (*) [16])(uVar3 + lVar6),*(undefined1 (*) [16])(lVar4 + lVar6)
                         ,1);
      auVar21 = NEON_umull(auVar8._0_8_,auVar8._0_8_,1);
      iVar12 = auVar9._4_4_;
      iVar15 = auVar9._8_4_;
      iVar18 = auVar9._12_4_;
      auVar9._0_4_ = auVar9._0_4_ + (uint)auVar21._0_2_ + (uint)auVar21._2_2_ +
                     (uint)(ushort)((ushort)auVar8[8] * (ushort)auVar8[8]) +
                     (uint)(ushort)((ushort)auVar8[9] * (ushort)auVar8[9]);
      auVar9._4_4_ = iVar12 + (uint)auVar21._4_2_ + (uint)auVar21._6_2_ +
                     (uint)(ushort)((ushort)auVar8[10] * (ushort)auVar8[10]) +
                     (uint)(ushort)((ushort)auVar8[0xb] * (ushort)auVar8[0xb]);
      auVar9._8_4_ = iVar15 + (uint)auVar21._8_2_ + (uint)auVar21._10_2_ +
                     (uint)(ushort)((ushort)auVar8[0xc] * (ushort)auVar8[0xc]) +
                     (uint)(ushort)((ushort)auVar8[0xd] * (ushort)auVar8[0xd]);
      auVar9._12_4_ =
           iVar18 + (uint)auVar21._12_2_ + (uint)auVar21._14_2_ +
           (uint)(ushort)((ushort)auVar8[0xe] * (ushort)auVar8[0xe]) +
           (uint)(ushort)((ushort)auVar8[0xf] * (ushort)auVar8[0xf]);
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0x200);
    return (ulong)(uint)(auVar9._0_4_ + auVar9._4_4_ + auVar9._8_4_ + auVar9._12_4_);
  }
  return uVar3;
}



/* Entry: 10823b7d4; end: 10823bcf7;  */

int FUN_10823b7d4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar1 = 0;
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    auVar6 = NEON_uabd(*(undefined1 (*) [16])(param_1 + lVar1),
                       *(undefined1 (*) [16])(param_2 + lVar1),1);
    auVar7 = NEON_umull(auVar6._0_8_,auVar6._0_8_,1);
    iVar2 = iVar2 + (uint)auVar7._0_2_ + (uint)auVar7._2_2_ +
            (uint)(ushort)((ushort)auVar6[8] * (ushort)auVar6[8]) +
            (uint)(ushort)((ushort)auVar6[9] * (ushort)auVar6[9]);
    iVar3 = iVar3 + (uint)auVar7._4_2_ + (uint)auVar7._6_2_ +
            (uint)(ushort)((ushort)auVar6[10] * (ushort)auVar6[10]) +
            (uint)(ushort)((ushort)auVar6[0xb] * (ushort)auVar6[0xb]);
    iVar4 = iVar4 + (uint)auVar7._8_2_ + (uint)auVar7._10_2_ +
            (uint)(ushort)((ushort)auVar6[0xc] * (ushort)auVar6[0xc]) +
            (uint)(ushort)((ushort)auVar6[0xd] * (ushort)auVar6[0xd]);
    iVar5 = iVar5 + (uint)auVar7._12_2_ + (uint)auVar7._14_2_ +
            (uint)(ushort)((ushort)auVar6[0xe] * (ushort)auVar6[0xe]) +
            (uint)(ushort)((ushort)auVar6[0xf] * (ushort)auVar6[0xf]);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x200);
  return iVar2 + iVar3 + iVar4 + iVar5;
}



/* Entry: 10823bcf8; end: 10823bd3f;  */

uint FUN_10823bcf8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010823bc24();
  param_1 = param_1 + 0x20;
  func_0x00010823bc24(param_1,param_2 + 0x20,param_3);
  return (uint)lVar1 | (int)param_1 << 1;
}



/* Entry: 10823bd40; end: 10823bf93;  */

void FUN_10823bd40(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined1 in_q0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined4 uVar31;
  undefined4 uVar35;
  undefined1 in_q1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  short sVar46;
  short sVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar29 [16];
  undefined1 auVar13 [16];
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  undefined1 auVar14 [16];
  undefined1 auVar20 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar27 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar36 = NEON_sqadd(in_q0._0_8_,in_q1._0_8_,2);
  sVar52 = in_q1._8_2_;
  sVar53 = in_q1._10_2_;
  sVar54 = in_q1._12_2_;
  sVar55 = in_q1._14_2_;
  auVar11._0_8_ = NEON_sqsub(in_q0._0_8_,in_q1._0_8_,2);
  auVar32._8_2_ = 0x4e7b;
  auVar32._0_8_ = 0x4e7b4e7b4e7b4e7b;
  auVar32._10_2_ = 0x4e7b;
  auVar32._12_2_ = 0x4e7b;
  auVar32._14_2_ = 0x4e7b;
  auVar56._8_2_ = sVar52;
  auVar56._0_8_ = in_q0._8_8_;
  auVar56._10_2_ = sVar53;
  auVar56._12_2_ = sVar54;
  auVar56._14_2_ = sVar55;
  auVar56 = NEON_sqdmulh(auVar56,auVar32,2);
  auVar59._8_2_ = sVar52;
  auVar59._0_8_ = in_q0._8_8_;
  auVar59._10_2_ = sVar53;
  auVar59._12_2_ = sVar54;
  auVar59._14_2_ = sVar55;
  auVar3._8_2_ = 0x4546;
  auVar3._0_8_ = 0x4546454645464546;
  auVar3._10_2_ = 0x4546;
  auVar3._12_2_ = 0x4546;
  auVar3._14_2_ = 0x4546;
  auVar59 = NEON_sqdmulh(auVar59,auVar3,2);
  sVar46 = in_q0._8_2_ + (auVar56._0_2_ >> 1);
  sVar47 = in_q0._10_2_ + (auVar56._2_2_ >> 1);
  sVar48 = in_q0._12_2_ + (auVar56._4_2_ >> 1);
  sVar50 = in_q0._14_2_ + (auVar56._6_2_ >> 1);
  sVar52 = sVar52 + (auVar56._8_2_ >> 1);
  sVar53 = sVar53 + (auVar56._10_2_ >> 1);
  sVar54 = sVar54 + (auVar56._12_2_ >> 1);
  sVar55 = sVar55 + (auVar56._14_2_ >> 1);
  auVar37._2_2_ = sVar47;
  auVar37._0_2_ = sVar46;
  auVar37._4_2_ = sVar48;
  auVar37._6_2_ = sVar50;
  auVar37._8_2_ = sVar52;
  auVar37._10_2_ = sVar53;
  auVar37._12_2_ = sVar54;
  auVar37._14_2_ = sVar55;
  auVar44._2_2_ = sVar47;
  auVar44._0_2_ = sVar46;
  auVar44._4_2_ = sVar48;
  auVar44._6_2_ = sVar50;
  auVar44._8_2_ = sVar52;
  auVar44._10_2_ = sVar53;
  auVar44._12_2_ = sVar54;
  auVar44._14_2_ = sVar55;
  auVar56 = NEON_ext(auVar37,auVar44,8,1);
  auVar57._0_8_ = NEON_sqsub(auVar59._0_8_,auVar56._0_8_,2);
  auVar56 = NEON_ext(auVar59,auVar59,8,1);
  uVar10 = NEON_sqadd(CONCAT26(sVar50,CONCAT24(sVar48,CONCAT22(sVar47,sVar46))),auVar56._0_8_,2);
  auVar60._8_8_ = auVar11._0_8_;
  auVar60._0_8_ = uVar36;
  auVar57._8_8_ = uVar10;
  auVar11._8_8_ = uVar36;
  auVar6._8_8_ = auVar57._0_8_;
  auVar6._0_8_ = uVar10;
  auVar37 = NEON_sqadd(auVar60,auVar6,2);
  auVar56 = NEON_sqsub(auVar11,auVar57,2);
  auVar12._0_8_ = auVar56._6_8_ << 0x30;
  auVar12._10_6_ = auVar56._10_6_;
  auVar12._8_2_ = auVar37._12_2_;
  sVar46 = auVar37._14_2_;
  auVar14._14_2_ = auVar56._14_2_;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_2_ = sVar46;
  sVar47 = auVar56._10_2_;
  auVar13._0_10_ = CONCAT82(auVar14._8_8_,sVar47) << 0x30;
  auVar13._12_4_ = auVar14._12_4_;
  auVar13._10_2_ = auVar56._12_2_;
  auVar15._0_14_ = auVar13._0_14_;
  auVar15._14_2_ = auVar14._14_2_;
  auVar7._2_10_ = auVar37._6_10_;
  auVar7._0_2_ = auVar56._0_2_;
  auVar40._0_8_ = auVar7._0_8_ << 0x20;
  auVar40._10_6_ = auVar37._10_6_;
  auVar40._8_2_ = auVar37._2_2_;
  auVar42._0_12_ = auVar40._0_12_;
  auVar42._12_2_ = auVar56._2_2_;
  auVar42._14_2_ = sVar46;
  auVar38._4_12_ = auVar42._4_12_;
  auVar38._2_2_ = auVar37._8_2_;
  auVar38._0_2_ = auVar37._0_2_;
  auVar39._8_8_ = auVar42._8_8_;
  auVar39._0_8_ = CONCAT26(auVar56._8_2_,auVar38._0_6_);
  auVar41._12_4_ = auVar42._12_4_;
  auVar41._0_10_ = auVar39._0_10_;
  auVar41._10_2_ = auVar37._10_2_;
  auVar43._0_14_ = auVar41._0_14_;
  auVar43._14_2_ = sVar47;
  auVar8._2_10_ = auVar15._6_10_;
  auVar8._0_2_ = auVar56._4_2_;
  auVar18._0_8_ = auVar8._0_8_ << 0x20;
  auVar18._10_6_ = auVar15._10_6_;
  auVar18._8_2_ = auVar37._6_2_;
  auVar20._0_12_ = auVar18._0_12_;
  auVar20._12_2_ = auVar56._6_2_;
  auVar20._14_2_ = auVar14._14_2_;
  auVar16._4_12_ = auVar20._4_12_;
  auVar16._2_2_ = auVar37._12_2_;
  auVar16._0_2_ = auVar37._4_2_;
  auVar17._8_8_ = auVar20._8_8_;
  auVar17._0_8_ = CONCAT26(auVar56._12_2_,auVar16._0_6_);
  auVar19._12_4_ = auVar20._12_4_;
  auVar19._0_10_ = auVar17._0_10_;
  auVar19._10_2_ = sVar46;
  auVar21._0_14_ = auVar19._0_14_;
  auVar21._14_2_ = auVar14._14_2_;
  uVar10 = NEON_sqadd(auVar39._0_8_,auVar17._0_8_,2);
  auVar58._0_8_ = NEON_sqsub(auVar39._0_8_,auVar17._0_8_,2);
  auVar22._8_8_ = auVar21._8_8_;
  auVar22._0_8_ = auVar43._8_8_;
  auVar59 = NEON_sqdmulh(auVar22,auVar32,2);
  auVar4._8_2_ = 0x4546;
  auVar4._0_8_ = 0x4546454645464546;
  auVar4._10_2_ = 0x4546;
  auVar4._12_2_ = 0x4546;
  auVar4._14_2_ = 0x4546;
  auVar44 = NEON_sqdmulh(auVar22,auVar4,2);
  auVar23._0_8_ =
       CONCAT26(sVar47 + (auVar59._6_2_ >> 1),
                CONCAT24(auVar56._2_2_ + (auVar59._4_2_ >> 1),
                         CONCAT22(auVar37._10_2_ + (auVar59._2_2_ >> 1),
                                  auVar37._2_2_ + (auVar59._0_2_ >> 1))));
  auVar23._8_2_ = auVar37._6_2_ + (auVar59._8_2_ >> 1);
  auVar23._10_2_ = sVar46 + (auVar59._10_2_ >> 1);
  auVar23._12_2_ = auVar56._6_2_ + (auVar59._12_2_ >> 1);
  auVar23._14_2_ = auVar14._14_2_ + (auVar59._14_2_ >> 1);
  auVar56 = NEON_ext(auVar23,auVar23,8,1);
  auVar33._0_8_ = NEON_sqsub(auVar44._0_8_,auVar56._0_8_,2);
  auVar56 = NEON_ext(auVar44,auVar44,8,1);
  uVar36 = NEON_sqadd(auVar23._0_8_,auVar56._0_8_,2);
  auVar45._8_8_ = auVar58._0_8_;
  auVar45._0_8_ = uVar10;
  auVar5._8_2_ = (short)auVar33._0_8_;
  auVar5._0_8_ = uVar36;
  auVar5._10_2_ = (short)((ulong)auVar33._0_8_ >> 0x10);
  auVar5._12_2_ = (short)((ulong)auVar33._0_8_ >> 0x20);
  auVar5._14_2_ = (short)((ulong)auVar33._0_8_ >> 0x30);
  auVar59 = NEON_sqadd(auVar45,auVar5,2);
  auVar33._8_8_ = uVar36;
  auVar58._8_8_ = uVar10;
  auVar56 = NEON_sqsub(auVar58,auVar33,2);
  auVar24._0_8_ = auVar56._6_8_ << 0x30;
  sVar46 = auVar59._12_2_;
  auVar24._10_6_ = auVar56._10_6_;
  auVar24._8_2_ = sVar46;
  auVar26._14_2_ = auVar56._14_2_;
  auVar26._0_12_ = auVar24._0_12_;
  auVar26._12_2_ = auVar59._14_2_;
  auVar25._0_10_ = CONCAT82(auVar26._8_8_,auVar56._10_2_) << 0x30;
  sVar47 = auVar56._12_2_;
  auVar25._12_4_ = auVar26._12_4_;
  auVar25._10_2_ = sVar47;
  auVar27._0_14_ = auVar25._0_14_;
  auVar27._14_2_ = auVar26._14_2_;
  auVar9._2_10_ = auVar27._6_10_;
  auVar9._0_2_ = auVar56._4_2_;
  auVar29._0_8_ = auVar9._0_8_ << 0x20;
  auVar29._10_6_ = auVar27._10_6_;
  auVar29._8_2_ = auVar59._6_2_;
  auVar30._0_12_ = auVar29._0_12_;
  auVar30._12_2_ = auVar56._6_2_;
  auVar30._14_2_ = auVar26._14_2_;
  auVar28._4_12_ = auVar30._4_12_;
  auVar28._2_2_ = sVar46;
  auVar28._0_2_ = auVar59._4_2_;
  uVar31 = *param_1;
  uVar35 = param_1[8];
  uVar2 = param_1[0x10];
  uVar49 = (ushort)param_1[0x18];
  uVar51 = (ushort)((uint)param_1[0x18] >> 0x10);
  auVar34._0_8_ =
       CONCAT26((ushort)(byte)((uint)uVar31 >> 0x18) + (auVar56._8_2_ >> 3),
                CONCAT24((ushort)(byte)((uint)uVar31 >> 0x10) + (auVar56._0_2_ >> 3),
                         CONCAT22((ushort)(byte)((uint)uVar31 >> 8) + (auVar59._8_2_ >> 3),
                                  (ushort)(byte)uVar31 + (auVar59._0_2_ >> 3))));
  auVar34._8_2_ = (ushort)(byte)uVar35 + (auVar59._2_2_ >> 3);
  auVar34._10_2_ = (ushort)(byte)((uint)uVar35 >> 8) + (auVar59._10_2_ >> 3);
  auVar34._12_2_ = (ushort)(byte)((uint)uVar35 >> 0x10) + (auVar56._2_2_ >> 3);
  auVar34._14_2_ = (ushort)(byte)((uint)uVar35 >> 0x18) + (auVar56._10_2_ >> 3);
  uVar10 = NEON_sqxtun(CONCAT26(sVar47,auVar28._0_6_),auVar34,2);
  auVar1._2_2_ = (ushort)(byte)((uint)uVar2 >> 8) + (sVar46 >> 3);
  auVar1._0_2_ = (ushort)(byte)uVar2 + (auVar59._4_2_ >> 3);
  auVar1._4_2_ = (ushort)(byte)((uint)uVar2 >> 0x10) + (auVar56._4_2_ >> 3);
  auVar1._6_2_ = (ushort)(byte)((uint)uVar2 >> 0x18) + (sVar47 >> 3);
  auVar1._8_2_ = (uVar49 & 0xff) + (auVar59._6_2_ >> 3);
  auVar1._10_2_ = (uVar49 >> 8) + (auVar59._14_2_ >> 3);
  auVar1._12_2_ = (uVar51 & 0xff) + (auVar56._6_2_ >> 3);
  auVar1._14_2_ = (uVar51 >> 8) + (auVar26._14_2_ >> 3);
  uVar36 = NEON_sqxtun(auVar34._0_8_,auVar1,2);
  *param_2 = (int)uVar10;
  param_2[8] = (int)((ulong)uVar10 >> 0x20);
  param_2[0x10] = (int)uVar36;
  param_2[0x18] = (int)((ulong)uVar36 >> 0x20);
  return;
}



/* Entry: 10823bf94; end: 10823bffb;  */

void FUN_10823bf94(long param_1)

{
  undefined4 uVar1;
  
  FUN_10822dff4();
  uVar1 = (undefined4)*(undefined8 *)(param_1 + 8);
  FUN_1082462f4();
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (0 < *(int *)(param_1 + 0x5c50)) {
    (*(code *)PTR_FUN_113254c78)(param_1 + 0x230);
    *(long *)(param_1 + 0x248) = param_1;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(code **)(param_1 + 0x240) = FUN_10823bffc;
  }
  return;
}



/* Entry: 10823bffc; end: 10823c52b;  */

long * FUN_10823bffc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  byte *pbVar16;
  long *unaff_x19;
  undefined8 unaff_x20;
  byte *unaff_x21;
  byte *pbVar17;
  undefined8 *puVar18;
  ulong unaff_x22;
  ulong unaff_x23;
  byte *unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long lVar19;
  ulong unaff_x27;
  byte *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  int iVar20;
  uint uVar21;
  int iVar23;
  undefined8 uVar22;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined8 uVar38;
  
  do {
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar19 = *param_1;
    lVar4 = param_1[1];
    uVar5 = *(uint *)(lVar19 + 8);
    pbVar17 = (byte *)(ulong)uVar5;
    uVar7 = *(uint *)(lVar19 + 0x30);
    unaff_x22 = (ulong)uVar7;
    iVar20 = *(int *)(lVar19 + 0x34);
    uVar21 = 5;
    if (iVar20 == 1) {
      uVar21 = 6;
    }
    uVar6 = *(uint *)(lVar19 + 0x38);
    unaff_x27 = (ulong)uVar6;
    uVar2 = *(uint *)(lVar4 + 8);
    uVar3 = *(uint *)(lVar4 + 0xc);
    unaff_x23 = (ulong)uVar3;
    lVar19 = (long)(int)uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
    unaff_x24 = (byte *)(ulong)((int)uVar6 < 100);
    if ((uVar6 < 0x65) && (uVar7 < 2)) {
      unaff_x25 = (undefined1 *)(long)(int)(uVar3 * uVar2);
      uVar1 = 0;
      if (iVar20 != 0 && uVar7 != 0) {
        uVar1 = uVar21;
      }
      unaff_x28 = (byte *)(ulong)uVar1;
      if (((int)(uVar3 * uVar2) < 0) ||
         (puVar8 = unaff_x25, _malloc(), unaff_x19 = param_1, puVar8 == (undefined1 *)0x0)) {
        if (*(int *)(lVar4 + 0x88) == 0) {
          uVar12 = 1;
          goto LAB_10823c078;
        }
        goto LAB_10823c4ec;
      }
      *(uint *)((long)register0x00000008 + -0x298) = uVar1;
      *(undefined1 **)((long)register0x00000008 + -0x2b0) = unaff_x25;
      *(uint *)((long)register0x00000008 + -0x290) = (uint)((int)uVar6 < 100);
      *(uint *)((long)register0x00000008 + -0x28c) = uVar5;
      *(undefined1 **)((long)register0x00000008 + -0x2a0) = puVar8;
      if (0 < (int)uVar3) {
        iVar20 = *(int *)(lVar4 + 0x38);
        unaff_x25 = *(undefined1 **)(lVar4 + 0x30);
        pbVar17 = (byte *)(ulong)(uVar3 + 1);
        unaff_x28 = *(byte **)((long)register0x00000008 + -0x2a0);
        do {
          _memcpy(unaff_x28,unaff_x25,lVar19);
          unaff_x25 = unaff_x25 + iVar20;
          unaff_x28 = unaff_x28 + lVar19;
          uVar21 = (int)pbVar17 - 1;
          pbVar17 = (byte *)(ulong)uVar21;
        } while (1 < uVar21);
      }
      unaff_x24 = *(byte **)((long)register0x00000008 + -0x2a0);
      if ((int)uVar6 < 100) {
        iVar20 = uVar6 * 8 + -0x220;
        if (uVar6 < 0x47) {
          iVar20 = (uVar6 * 0xcd >> 10 & 0x3f) + 2;
        }
        pbVar9 = unaff_x24;
        FUN_108254ff4(unaff_x24,lVar19,unaff_x23,iVar20,
                      (undefined1 *)((long)register0x00000008 + -0x288));
        unaff_x21 = unaff_x24;
        if ((int)pbVar9 != 0) goto LAB_10823c138;
LAB_10823c4e8:
        _free(unaff_x21);
        goto LAB_10823c4ec;
      }
LAB_10823c138:
      unaff_x28 = (byte *)(ulong)uVar2;
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x280);
      FUN_10822e85c();
      unaff_x27 = *(ulong *)(lVar4 + 0x80);
      if (*(int *)((long)register0x00000008 + -0x298) == 6) {
        iVar20 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar25 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
        *(undefined8 *)((long)register0x00000008 + -200) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        if (0 < (int)uVar3) {
          uVar13 = 0;
          pbVar17 = unaff_x24;
          do {
            pbVar16 = pbVar17;
            pbVar9 = unaff_x28;
            if (0 < (int)uVar2) {
              do {
                *(undefined1 *)((long)register0x00000008 + ((ulong)*pbVar16 - 0x180)) = 1;
                pbVar9 = pbVar9 + -1;
                pbVar16 = pbVar16 + 1;
              } while (pbVar9 != (byte *)0x0);
            }
            uVar13 = uVar13 + 1;
            pbVar17 = pbVar17 + lVar19;
          } while (uVar13 != unaff_x23);
        }
        lVar14 = 0;
        iVar26 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar29 = 0;
        iVar30 = 0;
        iVar31 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        do {
          uVar38 = ((undefined8 *)((long)register0x00000008 + lVar14 + -0x180))[1];
          uVar22 = *(undefined8 *)((long)register0x00000008 + lVar14 + -0x180);
          iVar34 = iVar34 + (uint)(-((char)((ulong)uVar38 >> 0x20) != '\0') & 1);
          iVar35 = iVar35 + (uint)(-((char)((ulong)uVar38 >> 0x28) != '\0') & 1);
          iVar36 = iVar36 + (uint)(-((char)((ulong)uVar38 >> 0x30) != '\0') & 1);
          iVar37 = iVar37 + (uint)(-((char)((ulong)uVar38 >> 0x38) != '\0') & 1);
          iVar30 = iVar30 + (uint)(-((char)uVar38 != '\0') & 1);
          iVar31 = iVar31 + (uint)(-((char)((ulong)uVar38 >> 8) != '\0') & 1);
          iVar32 = iVar32 + (uint)(-((char)((ulong)uVar38 >> 0x10) != '\0') & 1);
          iVar33 = iVar33 + (uint)(-((char)((ulong)uVar38 >> 0x18) != '\0') & 1);
          iVar26 = iVar26 + (uint)(-((char)((ulong)uVar22 >> 0x20) != '\0') & 1);
          iVar27 = iVar27 + (uint)(-((char)((ulong)uVar22 >> 0x28) != '\0') & 1);
          iVar28 = iVar28 + (uint)(-((char)((ulong)uVar22 >> 0x30) != '\0') & 1);
          iVar29 = iVar29 + (uint)(-((char)((ulong)uVar22 >> 0x38) != '\0') & 1);
          iVar20 = iVar20 + (uint)(-((char)uVar22 != '\0') & 1);
          iVar23 = iVar23 + (uint)(-((char)((ulong)uVar22 >> 8) != '\0') & 1);
          iVar24 = iVar24 + (uint)(-((char)((ulong)uVar22 >> 0x10) != '\0') & 1);
          iVar25 = iVar25 + (uint)(-((char)((ulong)uVar22 >> 0x18) != '\0') & 1);
          lVar14 = lVar14 + 0x10;
        } while (lVar14 != 0x100);
        uVar21 = iVar20 + iVar30 + iVar26 + iVar34 + iVar23 + iVar31 + iVar27 + iVar35 +
                 iVar24 + iVar32 + iVar28 + iVar36 + iVar25 + iVar33 + iVar29 + iVar37;
        if (uVar21 < 0x11) {
          uVar7 = 0;
        }
        else {
          pbVar17 = unaff_x24;
          FUN_108252520(unaff_x24,lVar19,unaff_x23,unaff_x28);
          uVar7 = (uint)pbVar17;
        }
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0xffffffff;
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0xfffffff800000000;
        *(undefined8 *)((long)register0x00000008 + -0x278) = 0xfe;
        uVar21 = 1 << (ulong)(uVar7 & 0x1f) |
                 (uint)(3 < *(int *)((long)register0x00000008 + -0x28c) || 0xc0 < uVar21);
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x2a8) =
             (undefined1 *)((long)register0x00000008 + -0x278);
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x250) = 0;
        if (uVar21 != 1) goto LAB_10823c38c;
LAB_10823c330:
        *(undefined1 **)((long)register0x00000008 + -0x2c0) =
             (undefined1 *)((long)register0x00000008 + -0x280);
        unaff_x28 = unaff_x24;
        FUN_10823c6c4(unaff_x24,lVar19,unaff_x23,unaff_x22,0,
                      *(undefined4 *)((long)register0x00000008 + -0x290),
                      *(undefined4 *)((long)register0x00000008 + -0x28c),0);
        unaff_x26 = lVar19;
        if ((int)unaff_x28 != 0) goto LAB_10823c360;
LAB_10823c474:
        puVar18 = *(undefined8 **)((long)register0x00000008 + -0x2a8);
        _free(puVar18[2]);
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        puVar18[1] = 0;
        *puVar18 = 0;
        lVar19 = unaff_x26;
LAB_10823c48c:
        unaff_x26 = lVar19;
        unaff_x22 = 1;
        unaff_x21 = (byte *)0x0;
        unaff_x23 = 0;
        if (*(int *)(lVar4 + 0x88) == 0) {
          *(undefined4 *)(lVar4 + 0x88) = 1;
        }
      }
      else {
        if (*(int *)((long)register0x00000008 + -0x298) == 0) {
          *(undefined8 *)((long)register0x00000008 + -0x280) = 0xffffffff;
          *(undefined1 **)((long)register0x00000008 + -0x2a8) =
               (undefined1 *)((long)register0x00000008 + -0x278);
          *(undefined8 *)((long)register0x00000008 + -0x270) = 0xfffffff800000000;
          *(undefined8 *)((long)register0x00000008 + -0x278) = 0xfe;
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          *(undefined8 *)((long)register0x00000008 + -600) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
          *(undefined4 *)((long)register0x00000008 + -0x250) = 0;
          goto LAB_10823c330;
        }
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0xffffffff;
        *(undefined1 **)((long)register0x00000008 + -0x2a8) =
             (undefined1 *)((long)register0x00000008 + -0x278);
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0xfffffff800000000;
        *(undefined8 *)((long)register0x00000008 + -0x278) = 0xfe;
        *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x250) = 0;
        uVar21 = 0xf;
LAB_10823c38c:
        unaff_x26 = *(long *)((long)register0x00000008 + -0x2b0);
        _malloc();
        if (unaff_x26 == 0) goto LAB_10823c48c;
        *(byte **)((long)register0x00000008 + -0x298) = unaff_x28;
        *(ulong *)((long)register0x00000008 + -0x2b0) = unaff_x27;
        iVar20 = 0;
        do {
          if ((uVar21 & 1) == 0) {
            unaff_x28 = (byte *)0x1;
          }
          else {
            *(undefined1 **)((long)register0x00000008 + -0x2c0) =
                 (undefined1 *)((long)register0x00000008 + -0x180);
            unaff_x28 = unaff_x24;
            FUN_10823c6c4(unaff_x24,*(undefined8 *)((long)register0x00000008 + -0x298),unaff_x23,
                          unaff_x22,iVar20,*(undefined4 *)((long)register0x00000008 + -0x290),
                          *(undefined4 *)((long)register0x00000008 + -0x28c),unaff_x26);
            if (((int)unaff_x28 == 0) ||
               (*(ulong *)((long)register0x00000008 + -0x280) <=
                *(ulong *)((long)register0x00000008 + -0x180))) {
              _free(*(undefined8 *)((long)register0x00000008 + -0x168));
            }
            else {
              _free(*(undefined8 *)((long)register0x00000008 + -0x268));
              *(undefined8 *)((long)register0x00000008 + -0x1b8) =
                   *(undefined8 *)((long)register0x00000008 + -0xb8);
              *(undefined8 *)((long)register0x00000008 + -0x1c0) =
                   *(undefined8 *)((long)register0x00000008 + -0xc0);
              *(undefined8 *)((long)register0x00000008 + -0x1a8) =
                   *(undefined8 *)((long)register0x00000008 + -0xa8);
              *(undefined8 *)((long)register0x00000008 + -0x1b0) =
                   *(undefined8 *)((long)register0x00000008 + -0xb0);
              *(undefined8 *)((long)register0x00000008 + -0x198) =
                   *(undefined8 *)((long)register0x00000008 + -0x98);
              *(undefined8 *)((long)register0x00000008 + -0x1a0) =
                   *(undefined8 *)((long)register0x00000008 + -0xa0);
              *(undefined8 *)((long)register0x00000008 + -400) =
                   *(undefined8 *)((long)register0x00000008 + -0x90);
              *(undefined8 *)((long)register0x00000008 + -0x1f8) =
                   *(undefined8 *)((long)register0x00000008 + -0xf8);
              *(undefined8 *)((long)register0x00000008 + -0x200) =
                   *(undefined8 *)((long)register0x00000008 + -0x100);
              *(undefined8 *)((long)register0x00000008 + -0x1e8) =
                   *(undefined8 *)((long)register0x00000008 + -0xe8);
              *(undefined8 *)((long)register0x00000008 + -0x1f0) =
                   *(undefined8 *)((long)register0x00000008 + -0xf0);
              *(undefined8 *)((long)register0x00000008 + -0x1d8) =
                   *(undefined8 *)((long)register0x00000008 + -0xd8);
              *(undefined8 *)((long)register0x00000008 + -0x1e0) =
                   *(undefined8 *)((long)register0x00000008 + -0xe0);
              *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                   *(undefined8 *)((long)register0x00000008 + -200);
              *(undefined8 *)((long)register0x00000008 + -0x1d0) =
                   *(undefined8 *)((long)register0x00000008 + -0xd0);
              *(undefined8 *)((long)register0x00000008 + -0x238) =
                   *(undefined8 *)((long)register0x00000008 + -0x138);
              *(undefined8 *)((long)register0x00000008 + -0x240) =
                   *(undefined8 *)((long)register0x00000008 + -0x140);
              *(undefined8 *)((long)register0x00000008 + -0x228) =
                   *(undefined8 *)((long)register0x00000008 + -0x128);
              *(undefined8 *)((long)register0x00000008 + -0x230) =
                   *(undefined8 *)((long)register0x00000008 + -0x130);
              *(undefined8 *)((long)register0x00000008 + -0x218) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0x220) =
                   *(undefined8 *)((long)register0x00000008 + -0x120);
              *(undefined8 *)((long)register0x00000008 + -0x208) =
                   *(undefined8 *)((long)register0x00000008 + -0x108);
              *(undefined8 *)((long)register0x00000008 + -0x210) =
                   *(undefined8 *)((long)register0x00000008 + -0x110);
              *(undefined8 *)((long)register0x00000008 + -0x278) =
                   *(undefined8 *)((long)register0x00000008 + -0x178);
              *(undefined8 *)((long)register0x00000008 + -0x280) =
                   *(undefined8 *)((long)register0x00000008 + -0x180);
              *(undefined8 *)((long)register0x00000008 + -0x268) =
                   *(undefined8 *)((long)register0x00000008 + -0x168);
              *(undefined8 *)((long)register0x00000008 + -0x270) =
                   *(undefined8 *)((long)register0x00000008 + -0x170);
              *(undefined8 *)((long)register0x00000008 + -600) =
                   *(undefined8 *)((long)register0x00000008 + -0x158);
              *(undefined8 *)((long)register0x00000008 + -0x260) =
                   *(undefined8 *)((long)register0x00000008 + -0x160);
              *(undefined8 *)((long)register0x00000008 + -0x248) =
                   *(undefined8 *)((long)register0x00000008 + -0x148);
              *(undefined8 *)((long)register0x00000008 + -0x250) =
                   *(undefined8 *)((long)register0x00000008 + -0x150);
            }
          }
          if (uVar21 < 2) break;
          iVar20 = iVar20 + 1;
          uVar21 = uVar21 >> 1;
        } while ((int)unaff_x28 != 0);
        _free(unaff_x26);
        unaff_x27 = *(ulong *)((long)register0x00000008 + -0x2b0);
        if ((int)unaff_x28 == 0) goto LAB_10823c474;
LAB_10823c360:
        if (unaff_x27 != 0) {
          *(undefined4 *)(unaff_x27 + 0xb4) = *(undefined4 *)((long)register0x00000008 + -0x194);
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x1b4);
          *(undefined8 *)(unaff_x27 + 0x9c) = *(undefined8 *)((long)register0x00000008 + -0x1ac);
          *(undefined8 *)(unaff_x27 + 0x94) = uVar22;
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x1a4);
          *(undefined8 *)(unaff_x27 + 0xac) = *(undefined8 *)((long)register0x00000008 + -0x19c);
          *(undefined8 *)(unaff_x27 + 0xa4) = uVar22;
        }
        unaff_x22 = 0;
        unaff_x21 = *(byte **)(*(long *)((long)register0x00000008 + -0x2a8) + 0x10);
        unaff_x23 = *(ulong *)(*(long *)((long)register0x00000008 + -0x2a8) + 0x18);
      }
      piVar15 = *(int **)(lVar4 + 0x80);
      if (piVar15 != (int *)0x0) {
        *piVar15 = *piVar15 + (int)unaff_x23;
        param_1[0xb7e] = *(long *)((long)register0x00000008 + -0x288);
      }
      _free(unaff_x24);
      pbVar17 = unaff_x21;
      lVar19 = unaff_x26;
      if ((int)unaff_x22 != 0) goto LAB_10823c4ec;
      if (unaff_x23 >> 0x20 != 0) goto LAB_10823c4e8;
      *(int *)(param_1 + 0x45) = (int)unaff_x23;
      param_1[0x44] = (long)unaff_x21;
      plVar10 = (long *)0x1;
    }
    else {
      if (*(int *)(lVar4 + 0x88) == 0) {
        uVar12 = 4;
LAB_10823c078:
        *(undefined4 *)(lVar4 + 0x88) = uVar12;
      }
LAB_10823c4ec:
      plVar10 = (long *)0x0;
      param_1 = unaff_x19;
      unaff_x21 = pbVar17;
      unaff_x26 = lVar19;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return plVar10;
    }
    ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x2e0) = lVar4;
    *(long **)((long)register0x00000008 + -0x2d8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x2d0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x2c8) = FUN_10823c52c;
    if (*(int *)((long)plVar10 + 0x21c) == 0) goto LAB_10823c578;
    if (0 < (int)plVar10[0xb8a]) {
      iVar20 = (int)plVar10 + 0x230;
      (*(code *)PTR_FUN_113254c80)();
      if (iVar20 == 0) {
        if (*(int *)(plVar10[1] + 0x88) == 0) {
          plVar11 = (long *)0x0;
          *(undefined4 *)(plVar10[1] + 0x88) = 1;
        }
        else {
          plVar11 = (long *)0x0;
        }
      }
      else {
        (*(code *)PTR_FUN_113254c90)(plVar10 + 0x46);
LAB_10823c578:
        plVar11 = (long *)0x1;
      }
      return plVar11;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x2d0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x2c8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x2e0);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x2d8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2c0);
    param_1 = plVar10;
  } while( true );
}


