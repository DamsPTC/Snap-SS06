/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074c7704; end: 1074c7717;  */

void FUN_1074c7704(void)

{
  FUN_10747c918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074c7718; end: 1074c771b;  */

void FUN_1074c7718(void)

{
  return;
}



/* Entry: 1074c771c; end: 1074c775b;  */

long * FUN_1074c771c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    func_0x0001074c8f80();
    lVar1 = unaff_x20;
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074c775c; end: 1074c793b;  */

undefined8 * FUN_1074c775c(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001074c8a48();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x20) {
    uVar9 = *unaff_x21;
    uVar11 = unaff_x21[3];
    uVar10 = unaff_x21[2];
    unaff_x19[1] = unaff_x21[1];
    *unaff_x19 = uVar9;
    unaff_x19[3] = uVar11;
    unaff_x19[2] = uVar10;
    if (unaff_x19 != unaff_x21) {
      lVar1 = unaff_x21[4];
      lVar2 = unaff_x21[5];
      uVar5 = lVar2 - lVar1;
      lVar7 = unaff_x19[4];
      if ((ulong)(unaff_x19[6] - lVar7) < uVar5) {
        FUN_1074c793c(unaff_x19 + 4);
        puVar4 = unaff_x19 + 4;
        func_0x0001057f9354(puVar4,(long)uVar5 >> 3);
        func_0x0001057f91bc(unaff_x19 + 4,puVar4);
        lVar6 = unaff_x19[5];
        if (lVar2 != lVar1) {
          func_0x0001074c8dfc(lVar6);
        }
        lVar6 = lVar6 + uVar5;
      }
      else {
        lVar6 = unaff_x19[5];
        uVar8 = lVar6 - lVar7;
        if (uVar8 < uVar5) {
          if (lVar6 != lVar7) {
            _memmove(lVar7,lVar1,uVar8);
            lVar6 = unaff_x19[5];
          }
          lVar2 = lVar2 - (lVar1 + uVar8);
          if (lVar2 != 0) {
            func_0x0001074c8e08();
          }
          lVar6 = lVar6 + lVar2;
        }
        else {
          if (lVar2 != lVar1) {
            func_0x0001074c8dfc(lVar7);
          }
          lVar6 = lVar7 + uVar5;
        }
      }
      unaff_x19[5] = lVar6;
    }
    func_0x0001074c8e28(unaff_x19 + 7,unaff_x21 + 7);
    uVar10 = unaff_x21[0x12];
    uVar9 = unaff_x21[0x11];
    if (unaff_x21[0x12] != 0) {
      do {
        func_0x0001074c8654();
      } while (extraout_w10 != 0);
    }
    uStack_68 = unaff_x19[0x12];
    uStack_70 = unaff_x19[0x11];
    unaff_x19[0x12] = uVar10;
    unaff_x19[0x11] = uVar9;
    FUN_1073f9ec0(&uStack_70);
    uVar10 = unaff_x21[0x14];
    uVar9 = unaff_x21[0x13];
    if (unaff_x21[0x14] != 0) {
      do {
        func_0x0001074c8654();
      } while (extraout_w10_00 != 0);
    }
    uStack_68 = unaff_x19[0x14];
    uStack_70 = unaff_x19[0x13];
    unaff_x19[0x14] = uVar10;
    unaff_x19[0x13] = uVar9;
    func_0x0001073ad47c(&uStack_70);
    unaff_x19[0x15] = unaff_x21[0x15];
    cVar3 = *(char *)(unaff_x19 + 0x1e);
    if (cVar3 == *(char *)(unaff_x21 + 0x1e)) {
      if (cVar3 != '\0') {
        func_0x000107262f3c(unaff_x19 + 0x16,unaff_x21 + 0x16);
        unaff_x19[0x1d] = unaff_x21[0x1d];
      }
    }
    else if (cVar3 == '\0') {
      func_0x0001074c5158(unaff_x19 + 0x16,unaff_x21 + 0x16);
    }
    else {
      func_0x000104c2f714();
      *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x1f) = *(undefined1 *)(unaff_x21 + 0x1f);
    unaff_x19 = unaff_x19 + 0x20;
  }
  return unaff_x19;
}



/* Entry: 1074c793c; end: 1074c7967;  */

void FUN_1074c793c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074c89cc();
  if (param_1 != 0) {
    unaff_x19[1] = param_1;
    __ZdlPv();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 1074c7968; end: 1074c7b4b;  */

void FUN_1074c7968(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001074c9240();
  if (1 < param_4) {
    if (param_4 == 2) {
      puVar3 = param_1;
      func_0x0001074c89fc();
      if ((int)puVar3 != 0) {
        uVar5 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if (param_1 != param_2) {
        lVar16 = 0;
        puVar4 = param_1;
        puVar3 = param_1;
        while (puVar3 = puVar3 + 1, puVar3 != param_2) {
          func_0x0001074c89fc();
          if ((int)puVar4 != 0) {
            uVar5 = *puVar3;
            lVar18 = lVar16;
            do {
              lVar20 = lVar18;
              puVar15 = (undefined8 *)((long)param_1 + lVar20);
              puVar15[1] = *puVar15;
              puVar10 = param_1;
              if (lVar20 == 0) goto LAB_1074c7a34;
              puVar4 = param_3;
              FUN_1074c7b84(param_3,uVar5,puVar15[-1]);
              lVar18 = lVar20 + -8;
            } while (((ulong)puVar4 & 1) != 0);
            puVar10 = (undefined8 *)((long)param_1 + lVar20);
LAB_1074c7a34:
            *puVar10 = uVar5;
          }
          lVar16 = lVar16 + 8;
        }
      }
    }
    else {
      uStack_48 = param_4 >> 1;
      puVar3 = param_1 + uStack_48;
      lVar16 = param_4 - (param_4 >> 1);
      if (param_6 < (long)param_4) {
        FUN_1074c7968();
        func_0x0001074c904c();
        FUN_1074c7968();
        puVar4 = param_1;
        puStack_30 = param_2;
        do {
          puVar15 = puVar3;
          lVar18 = lVar16;
          uVar17 = uStack_48;
          if (lVar16 == 0) {
            return;
          }
          while( true ) {
            if (lVar18 <= param_6 || (long)uVar17 <= param_6) {
              if ((long)uVar17 <= lVar18) {
                lVar16 = -(long)param_5;
                puVar10 = param_5;
                for (puVar3 = puVar4; puVar3 != puVar15; puVar3 = puVar3 + 1) {
                  *puVar10 = *puVar3;
                  lVar16 = lVar16 + -8;
                  puVar10 = puVar10 + 1;
                }
                while( true ) {
                  if (puVar10 == param_5) {
                    return;
                  }
                  if (puVar15 == puStack_30) break;
                  func_0x0001074c89fc();
                  bVar2 = (int)param_1 == 0;
                  puVar3 = puVar15;
                  if (bVar2) {
                    puVar3 = param_5;
                  }
                  lVar18 = 8;
                  if (bVar2) {
                    lVar18 = 0;
                  }
                  puVar15 = (undefined8 *)((long)puVar15 + lVar18);
                  lVar18 = 0;
                  if (bVar2) {
                    lVar18 = 8;
                  }
                  param_5 = (undefined8 *)((long)param_5 + lVar18);
                  *puVar4 = *puVar3;
                  puVar4 = puVar4 + 1;
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(puVar4,param_5,-((long)param_5 + lVar16));
                return;
              }
              for (lVar16 = 0; (undefined8 *)((long)puVar15 + lVar16) != puStack_30;
                  lVar16 = lVar16 + 8) {
                *(undefined8 *)((long)param_5 + lVar16) = *(undefined8 *)((long)puVar15 + lVar16);
              }
              puVar3 = (undefined8 *)((long)param_5 + lVar16);
              while( true ) {
                puStack_30 = puStack_30 + -1;
                if (puVar3 == param_5) {
                  return;
                }
                if (puVar15 == puVar4) break;
                func_0x0001074c89fc();
                puVar10 = puVar3;
                puVar7 = puVar15 + -1;
                puVar22 = puVar15;
                if ((int)param_1 == 0) {
                  puVar10 = puVar3 + -1;
                  puVar7 = puVar15;
                  puVar22 = puVar3;
                }
                puVar15 = puVar7;
                *puStack_30 = puVar22[-1];
                puVar3 = puVar10;
              }
              while (puVar3 != param_5) {
                puVar3 = puVar3 + -1;
                *puStack_30 = *puVar3;
                puStack_30 = puStack_30 + -1;
              }
              return;
            }
            lVar20 = 0;
            lVar21 = -uVar17;
            while( true ) {
              if (lVar21 == 0) {
                return;
              }
              func_0x0001074c89fc();
              if (((ulong)param_1 & 1) != 0) break;
              lVar20 = lVar20 + 8;
              lVar21 = lVar21 + 1;
            }
            param_1 = (undefined8 *)((long)puVar4 + lVar20);
            uVar1 = -lVar18 == lVar21;
            if (-lVar21 < lVar18) {
              lVar16 = lVar18 / 2;
              puVar22 = puVar15 + lVar16;
              uVar17 = (long)puVar15 + (-lVar20 - (long)puVar4) >> 3;
              puVar3 = param_1;
              while (uVar17 != 0) {
                uVar17 = uVar17 >> 1;
                func_0x0001074c89fc();
                func_0x0001074c911c();
                if ((bool)uVar1) {
                  puVar3 = puVar3 + uVar17 + 1;
                  uVar17 = extraout_x8;
                }
              }
              uStack_48 = (long)puVar3 + (-lVar20 - (long)puVar4) >> 3;
            }
            else {
              if (lVar21 == -1) {
                uVar5 = *(undefined8 *)((long)puVar4 + lVar20);
                *(undefined8 *)((long)puVar4 + lVar20) = *puVar15;
                *puVar15 = uVar5;
                return;
              }
              uStack_48 = -lVar21 / 2;
              puVar3 = (undefined8 *)((long)puVar4 + lVar20 + uStack_48 * 8);
              uStack_18 = param_3[1];
              uStack_20 = *param_3;
              uStack_10 = param_3[2];
              uVar1 = 0;
              uVar17 = (long)puStack_30 - (long)puVar15 >> 3;
              puVar10 = puVar15;
              while (puVar22 = puVar10, uVar17 != 0) {
                uVar14 = uVar17 >> 1;
                FUN_1074c7b84(&uStack_20,puVar22[uVar14],*puVar3);
                func_0x0001074c911c();
                uVar17 = extraout_x8_00;
                puVar10 = puVar22 + uVar14 + 1;
                if ((bool)uVar1) {
                  uVar17 = uVar14;
                  puVar10 = puVar22;
                }
              }
              lVar16 = (long)puVar22 - (long)puVar15 >> 3;
            }
            puVar10 = puVar22;
            if ((puVar3 != puVar15) && (puVar10 = puVar3, puVar15 != puVar22)) {
              if (puVar3 + 1 == puVar15) {
                uVar5 = *puVar3;
                func_0x0001074c8e08();
                puVar10 = (undefined8 *)((long)puVar3 + ((long)puVar22 - (long)puVar15));
                *puVar10 = uVar5;
              }
              else if (puVar15 + 1 == puVar22) {
                puVar15 = puVar22 + -1;
                uVar5 = *puVar15;
                puVar10 = (undefined8 *)((long)puVar22 - ((long)puVar15 - (long)puVar3));
                if ((long)puVar15 - (long)puVar3 != 0) {
                  _memmove(puVar10,puVar3,(long)puVar15 - (long)puVar3);
                }
                *puVar3 = uVar5;
              }
              else {
                lVar6 = (long)puVar15 - (long)puVar3;
                lVar9 = lVar6 >> 3;
                lVar19 = (long)puVar22 - (long)puVar15 >> 3;
                puVar7 = puVar15;
                puVar8 = puVar3;
                lVar12 = lVar9;
                if (lVar9 == lVar19) {
                  for (; puVar10 = puVar15, puVar8 != puVar15 && puVar7 != puVar22;
                      puVar8 = puVar8 + 1) {
                    uVar5 = *puVar8;
                    *puVar8 = *puVar7;
                    *puVar7 = uVar5;
                    puVar7 = puVar7 + 1;
                  }
                }
                else {
                  do {
                    lVar11 = lVar19;
                    lVar19 = 0;
                    if (lVar11 != 0) {
                      lVar19 = lVar12 / lVar11;
                    }
                    lVar19 = lVar12 - lVar19 * lVar11;
                    lVar12 = lVar11;
                  } while (lVar19 != 0);
                  puVar10 = puVar3 + lVar11;
                  while (puVar10 != puVar3) {
                    puVar10 = puVar10 + -1;
                    uVar5 = *puVar10;
                    puVar7 = (undefined8 *)(lVar6 + (long)puVar10);
                    puVar8 = puVar10;
                    do {
                      puVar13 = puVar7;
                      *puVar8 = *puVar13;
                      lVar19 = (long)puVar22 - (long)puVar13 >> 3;
                      puVar7 = (undefined8 *)((long)puVar13 + lVar6);
                      if (lVar19 <= lVar9) {
                        puVar7 = puVar3 + (lVar9 - lVar19);
                      }
                      puVar8 = puVar13;
                    } while (puVar7 != puVar10);
                    *puVar13 = uVar5;
                  }
                  puVar10 = (undefined8 *)(((long)puVar22 - (long)puVar15) + (long)puVar3);
                }
              }
            }
            lVar19 = lVar18 - lVar16;
            if ((long)((lVar18 - (uStack_48 + lVar16)) - lVar21) <= (long)(uStack_48 + lVar16))
            break;
            uVar17 = -(uStack_48 + lVar21);
            FUN_1074c7f50(param_1,puVar3,puVar10,param_3,uStack_48,lVar16,param_5,param_6);
            puVar4 = puVar10;
            puVar15 = puVar22;
            lVar18 = lVar19;
            if (lVar19 == 0) {
              return;
            }
          }
          param_1 = puVar10;
          FUN_1074c7f50(puVar10,puVar22,puStack_30,param_3,-(uStack_48 + lVar21),lVar19,param_5,
                        param_6);
          puVar4 = (undefined8 *)((long)puVar4 + lVar20);
          puStack_30 = puVar10;
        } while( true );
      }
      puVar10 = param_1;
      FUN_1074c7d74(param_1,puVar3,param_3,uStack_48);
      puVar3 = param_5 + uStack_48;
      func_0x0001074c904c();
      FUN_1074c7d74();
      puVar4 = param_5 + param_4;
      puVar15 = puVar3;
      while (param_5 != puVar3) {
        if (puVar15 == puVar4) {
          for (; param_5 != puVar3; param_5 = param_5 + 1) {
            *param_1 = *param_5;
            param_1 = param_1 + 1;
          }
          return;
        }
        func_0x0001074c89fc();
        bVar2 = (int)puVar10 == 0;
        puVar22 = puVar15;
        if (bVar2) {
          puVar22 = param_5;
        }
        lVar16 = 0;
        if (bVar2) {
          lVar16 = 8;
        }
        param_5 = (undefined8 *)((long)param_5 + lVar16);
        lVar16 = 8;
        if (bVar2) {
          lVar16 = 0;
        }
        puVar15 = (undefined8 *)((long)puVar15 + lVar16);
        *param_1 = *puVar22;
        param_1 = param_1 + 1;
      }
      for (; puVar15 != puVar4; puVar15 = puVar15 + 1) {
        *param_1 = *puVar15;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



/* Entry: 1074c7b4c; end: 1074c7b63;  */

void FUN_1074c7b4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074c7b64; end: 1074c7b83;  */

void FUN_1074c7b64(void)

{
  func_0x0001074c91a4();
  FUN_1074c7b4c();
  return;
}



/* Entry: 1074c7b84; end: 1074c7d73;  */

byte FUN_1074c7b84(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  float *pfVar6;
  char *pcVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  func_0x0001074c8a48();
  pcVar7 = (char *)*param_1;
  bVar4 = *(byte *)(param_2 + 0xf8) ^ 1;
  if (((bVar4 & 1) == 0) && (*(byte *)(param_3 + 0xf8) == 0)) {
LAB_1074c7bbc:
    bVar4 = 1;
    goto LAB_1074c7d54;
  }
  if ((bVar4 & *(byte *)(param_3 + 0xf8) & 1) != 0) {
LAB_1074c7bcc:
    bVar4 = 0;
    goto LAB_1074c7d54;
  }
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x48) - (uint)(byte)pcVar7[2];
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar3 = (uint)*(byte *)(unaff_x19 + 0x48) - (uint)(byte)pcVar7[2];
  uVar2 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if ((uVar1 < uVar2) || (bVar4 = *(byte *)(param_2 + 0xf8), uVar2 < uVar1)) goto LAB_1074c7d54;
  if (*pcVar7 == '\x01') {
    uVar8 = *(ulong *)(unaff_x20 + 0x78);
    fVar11 = (float)uVar8;
    uVar9 = *(ulong *)(unaff_x19 + 0x78);
  }
  else if (*pcVar7 == '\0') {
    uVar8 = *(ulong *)(unaff_x20 + 0x70);
    fVar11 = (float)uVar8;
    uVar9 = *(ulong *)(unaff_x19 + 0x70);
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    fVar11 = 0.0;
  }
  fVar10 = (float)uVar9;
  if (((uVar8 >> 0x20 & 1) != 0) && ((uVar9 >> 0x20 & 1) != 0)) {
    if (fVar11 < fVar10) goto LAB_1074c7bbc;
    if (fVar11 != fVar10) goto LAB_1074c7bcc;
  }
  if ((pcVar7[1] == '\x01') ||
     ((pcVar7[1] != '\x02' &&
      ((*(char *)(unaff_x20 + 0x6c) != '\x01' || ((*(byte *)(unaff_x19 + 0x6c) & 1) == 0)))))) {
    fVar12 = 0.0;
    if (*(char *)(*(long *)(unaff_x21 + 8) + 0x20) == '\x01') {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      FUN_1074c83ec(lVar5,unaff_x20 + 0x18);
      fVar13 = *(float *)(lVar5 + 4);
      fVar12 = 0.0;
      if (*(char *)(*(long *)(unaff_x21 + 8) + 0x20) == '\x01') {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        FUN_1074c83ec(lVar5,unaff_x19 + 0x18);
        fVar12 = *(float *)(lVar5 + 4);
      }
    }
    else {
      fVar13 = 0.0;
    }
    fVar13 = fVar13 + *(float *)(unaff_x20 + 0x80);
    fVar12 = fVar12 + *(float *)(unaff_x19 + 0x80);
    if (fVar12 < fVar13) {
      bVar4 = *(byte *)(unaff_x20 + 0xf8) ^ 1;
      goto LAB_1074c7d54;
    }
    if (fVar13 < fVar12) {
      bVar4 = *(byte *)(unaff_x20 + 0xf8);
      goto LAB_1074c7d54;
    }
  }
  if ((*(char *)(unaff_x20 + 0x6c) == '\x01') && ((*(byte *)(unaff_x19 + 0x6c) & 1) != 0)) {
    pfVar6 = (float *)(unaff_x20 + 0x68);
    func_0x00010726a954();
    fVar11 = *pfVar6;
    pfVar6 = (float *)(unaff_x19 + 0x68);
    func_0x00010726a954();
    bVar4 = fVar11 < *pfVar6;
  }
  else {
    if ((uVar8 & 0x100000000) == 0) {
      fVar11 = 0.0;
    }
    if ((uVar9 & 0x100000000) == 0) {
      fVar10 = 0.0;
    }
    bVar4 = 0;
    if (!NAN(fVar11) && !NAN(fVar10)) {
      bVar4 = fVar11 < fVar10;
    }
  }
LAB_1074c7d54:
  return bVar4 & 1;
}



/* Entry: 1074c7d74; end: 1074c7f4f;  */

void FUN_1074c7d74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      puVar3 = param_1;
      func_0x0001074c8c84(param_1,param_2[-1],*param_1);
      if ((int)puVar3 == 0) {
        *param_5 = *param_1;
        uVar5 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar5 = *param_1;
      }
      param_5[1] = uVar5;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        lVar6 = 0;
        *param_5 = *param_1;
        puVar3 = param_1;
        puVar7 = param_5;
        while (puVar3 = puVar3 + 1, puVar3 != param_2) {
          func_0x0001074c8c84();
          if ((int)param_1 == 0) {
            puVar7[1] = *puVar3;
          }
          else {
            puVar7[1] = *puVar7;
            for (lVar8 = lVar6; puVar4 = param_5, lVar8 != 0; lVar8 = lVar8 + -8) {
              func_0x0001074c8c84();
              puVar4 = (undefined8 *)((long)param_5 + lVar8);
              if ((int)param_1 == 0) break;
              *(undefined8 *)((long)param_5 + lVar8) = ((undefined8 *)((long)param_5 + lVar8))[-1];
            }
            *puVar4 = *puVar3;
          }
          lVar6 = lVar6 + 8;
          puVar7 = puVar7 + 1;
        }
      }
    }
    else {
      uVar9 = param_4 >> 1;
      puVar3 = param_1 + uVar9;
      FUN_1074c7968(param_1,puVar3,param_3,uVar9,param_5,uVar9);
      lVar6 = param_4 - (param_4 >> 1);
      puVar4 = puVar3;
      FUN_1074c7968(puVar3,param_2,param_3,lVar6,param_5 + uVar9,lVar6);
      puVar7 = puVar3;
      for (; param_1 != puVar3; param_1 = (undefined8 *)((long)param_1 + lVar6)) {
        if (puVar7 == param_2) {
          for (; param_1 != puVar3; param_1 = param_1 + 1) {
            *param_5 = *param_1;
            param_5 = param_5 + 1;
          }
          return;
        }
        func_0x0001074c8c84();
        bVar2 = (int)puVar4 == 0;
        puVar1 = puVar7;
        if (bVar2) {
          puVar1 = param_1;
        }
        lVar6 = 8;
        if (bVar2) {
          lVar6 = 0;
        }
        puVar7 = (undefined8 *)((long)puVar7 + lVar6);
        lVar6 = 0;
        if (bVar2) {
          lVar6 = 8;
        }
        *param_5 = *puVar1;
        param_5 = param_5 + 1;
      }
      for (; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *param_5 = *puVar7;
        param_5 = param_5 + 1;
      }
    }
  }
  return;
}



/* Entry: 1074c7f50; end: 1074c83eb;  */

void FUN_1074c7f50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  undefined1 uVar1;
  bool bVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lStack_a8;
  undefined8 *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar14 = param_1;
  puStack_90 = param_3;
  do {
    puVar15 = param_2;
    lVar5 = param_6;
    if (param_6 == 0) {
      return;
    }
    while( true ) {
      if (lVar5 <= param_8 || param_5 <= param_8) {
        if (param_5 <= lVar5) {
          lVar5 = -(long)param_7;
          puVar17 = param_7;
          for (puVar9 = puVar14; puVar9 != puVar15; puVar9 = puVar9 + 1) {
            *puVar17 = *puVar9;
            lVar5 = lVar5 + -8;
            puVar17 = puVar17 + 1;
          }
          while( true ) {
            if (puVar17 == param_7) {
              return;
            }
            if (puVar15 == puStack_90) break;
            func_0x0001074c89fc();
            bVar2 = (int)param_1 == 0;
            puVar9 = puVar15;
            if (bVar2) {
              puVar9 = param_7;
            }
            lVar19 = 8;
            if (bVar2) {
              lVar19 = 0;
            }
            puVar15 = (undefined8 *)((long)puVar15 + lVar19);
            lVar19 = 0;
            if (bVar2) {
              lVar19 = 8;
            }
            param_7 = (undefined8 *)((long)param_7 + lVar19);
            *puVar14 = *puVar9;
            puVar14 = puVar14 + 1;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(puVar14,param_7,-((long)param_7 + lVar5));
          return;
        }
        for (lVar5 = 0; (undefined8 *)((long)puVar15 + lVar5) != puStack_90; lVar5 = lVar5 + 8) {
          *(undefined8 *)((long)param_7 + lVar5) = *(undefined8 *)((long)puVar15 + lVar5);
        }
        puVar9 = (undefined8 *)((long)param_7 + lVar5);
        while( true ) {
          puStack_90 = puStack_90 + -1;
          if (puVar9 == param_7) {
            return;
          }
          if (puVar15 == puVar14) break;
          func_0x0001074c89fc();
          puVar17 = puVar9;
          puVar6 = puVar15 + -1;
          puVar4 = puVar15;
          if ((int)param_1 == 0) {
            puVar17 = puVar9 + -1;
            puVar6 = puVar15;
            puVar4 = puVar9;
          }
          puVar15 = puVar6;
          *puStack_90 = puVar4[-1];
          puVar9 = puVar17;
        }
        while (puVar9 != param_7) {
          puVar9 = puVar9 + -1;
          *puStack_90 = *puVar9;
          puStack_90 = puStack_90 + -1;
        }
        return;
      }
      lVar19 = 0;
      param_5 = -param_5;
      while( true ) {
        if (param_5 == 0) {
          return;
        }
        func_0x0001074c89fc();
        if (((ulong)param_1 & 1) != 0) break;
        lVar19 = lVar19 + 8;
        param_5 = param_5 + 1;
      }
      param_1 = (undefined8 *)((long)puVar14 + lVar19);
      uVar1 = -lVar5 == param_5;
      if (-param_5 < lVar5) {
        param_6 = lVar5 / 2;
        puVar17 = puVar15 + param_6;
        uVar16 = (long)puVar15 + (-lVar19 - (long)puVar14) >> 3;
        param_2 = param_1;
        while (uVar16 != 0) {
          uVar16 = uVar16 >> 1;
          func_0x0001074c89fc();
          func_0x0001074c911c();
          if ((bool)uVar1) {
            param_2 = param_2 + uVar16 + 1;
            uVar16 = extraout_x8;
          }
        }
        lStack_a8 = (long)param_2 + (-lVar19 - (long)puVar14) >> 3;
      }
      else {
        if (param_5 == -1) {
          uVar8 = *(undefined8 *)((long)puVar14 + lVar19);
          *(undefined8 *)((long)puVar14 + lVar19) = *puVar15;
          *puVar15 = uVar8;
          return;
        }
        lStack_a8 = -param_5 / 2;
        param_2 = (undefined8 *)((long)puVar14 + lVar19 + lStack_a8 * 8);
        uStack_78 = param_4[1];
        uStack_80 = *param_4;
        uStack_70 = param_4[2];
        uVar1 = 0;
        uVar16 = (long)puStack_90 - (long)puVar15 >> 3;
        puVar9 = puVar15;
        while (puVar17 = puVar9, uVar16 != 0) {
          uVar13 = uVar16 >> 1;
          FUN_1074c7b84(&uStack_80,puVar17[uVar13],*param_2);
          func_0x0001074c911c();
          uVar16 = extraout_x8_00;
          puVar9 = puVar17 + uVar13 + 1;
          if ((bool)uVar1) {
            uVar16 = uVar13;
            puVar9 = puVar17;
          }
        }
        param_6 = (long)puVar17 - (long)puVar15 >> 3;
      }
      puVar9 = puVar17;
      if ((param_2 != puVar15) && (puVar9 = param_2, puVar15 != puVar17)) {
        if (param_2 + 1 == puVar15) {
          uVar8 = *param_2;
          func_0x0001074c8e08();
          puVar9 = (undefined8 *)((long)param_2 + ((long)puVar17 - (long)puVar15));
          *puVar9 = uVar8;
        }
        else if (puVar15 + 1 == puVar17) {
          puVar15 = puVar17 + -1;
          uVar8 = *puVar15;
          puVar9 = (undefined8 *)((long)puVar17 - ((long)puVar15 - (long)param_2));
          if ((long)puVar15 - (long)param_2 != 0) {
            _memmove(puVar9,param_2,(long)puVar15 - (long)param_2);
          }
          *param_2 = uVar8;
        }
        else {
          lVar3 = (long)puVar15 - (long)param_2;
          lVar7 = lVar3 >> 3;
          lVar18 = (long)puVar17 - (long)puVar15 >> 3;
          puVar4 = puVar15;
          puVar6 = param_2;
          lVar11 = lVar7;
          if (lVar7 == lVar18) {
            for (; puVar9 = puVar15, puVar6 != puVar15 && puVar4 != puVar17; puVar6 = puVar6 + 1) {
              uVar8 = *puVar6;
              *puVar6 = *puVar4;
              *puVar4 = uVar8;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            do {
              lVar10 = lVar18;
              lVar18 = 0;
              if (lVar10 != 0) {
                lVar18 = lVar11 / lVar10;
              }
              lVar18 = lVar11 - lVar18 * lVar10;
              lVar11 = lVar10;
            } while (lVar18 != 0);
            puVar9 = param_2 + lVar10;
            while (puVar9 != param_2) {
              puVar9 = puVar9 + -1;
              uVar8 = *puVar9;
              puVar4 = (undefined8 *)(lVar3 + (long)puVar9);
              puVar6 = puVar9;
              do {
                puVar12 = puVar4;
                *puVar6 = *puVar12;
                lVar18 = (long)puVar17 - (long)puVar12 >> 3;
                puVar4 = (undefined8 *)((long)puVar12 + lVar3);
                if (lVar18 <= lVar7) {
                  puVar4 = param_2 + (lVar7 - lVar18);
                }
                puVar6 = puVar12;
              } while (puVar4 != puVar9);
              *puVar12 = uVar8;
            }
            puVar9 = (undefined8 *)(((long)puVar17 - (long)puVar15) + (long)param_2);
          }
        }
      }
      lVar18 = lVar5 - param_6;
      if ((lVar5 - (lStack_a8 + param_6)) - param_5 <= lStack_a8 + param_6) break;
      param_5 = -(lStack_a8 + param_5);
      FUN_1074c7f50(param_1,param_2,puVar9,param_4,lStack_a8,param_6,param_7,param_8);
      puVar14 = puVar9;
      puVar15 = puVar17;
      lVar5 = lVar18;
      if (lVar18 == 0) {
        return;
      }
    }
    param_1 = puVar9;
    FUN_1074c7f50(puVar9,puVar17,puStack_90,param_4,-(lStack_a8 + param_5),lVar18,param_7,param_8);
    puVar14 = (undefined8 *)((long)puVar14 + lVar19);
    param_5 = lStack_a8;
    puStack_90 = puVar9;
  } while( true );
}



/* Entry: 1074c83ec; end: 1074c85b7;  */

long * FUN_1074c83ec(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x23;
  
  uVar12 = *param_4;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar12;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar11) < 0;
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar8 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1074c8498;
          uVar8 = plVar10[1];
          if (uVar8 != uVar12) break;
          in_NG = (long)(plVar10[2] - uVar12) < 0;
          if (plVar10[2] == uVar12) goto LAB_1074c8590;
        }
        if ((uVar11 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar11 <= uVar8) {
          uVar3 = 0;
          if (uVar11 != 0) {
            uVar3 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar3 * uVar11;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_1074c8498:
  plVar1 = param_3 + 2;
  plVar10 = param_3;
  func_0x0001074c8cb0();
  *plVar10 = 0;
  plVar10[1] = uVar12;
  plVar10[2] = uVar12;
  plVar10[3] = 0;
  func_0x0001074c8a10();
  if ((uVar11 == 0) || (func_0x0001074c8b48(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    bVar4 = 2 < uVar11;
    bVar5 = uVar11 == 3;
    func_0x0001074c8674(uVar11 << 1);
    uVar2 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar2 = extraout_x9;
    }
    FUN_1074c6414(param_3,uVar2);
    uVar11 = param_3[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *param_3;
  plVar9 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar10 = *plVar1;
    *plVar1 = (long)plVar10;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar6 * uVar11;
      }
      *(long **)(lVar7 + uVar12 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
  }
  func_0x0001074c8d18();
  FUN_1074c6574();
LAB_1074c8590:
  return plVar10 + 3;
}



/* Entry: 1074c85b8; end: 1074c85df;  */

undefined * FUN_1074c85b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_1074c6928();
  if (param_1 != 0) {
    return (undefined *)(param_1 + 0x48);
  }
  puVar1 = &UNK_10f415b88;
  func_0x000104c03f28(&UNK_10f415b88);
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return puVar1;
}



/* Entry: 1074c85e0; end: 1074c9257;  */

void FUN_1074c85e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1074c9258; end: 1074c98e7;  */

undefined8 * FUN_1074c9258(undefined8 *param_1,ulong *param_2,long param_3)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_a78 [56];
  undefined1 auStack_a40 [88];
  undefined1 auStack_9e8 [56];
  undefined1 auStack_9b0 [88];
  undefined1 auStack_958 [56];
  undefined1 auStack_920 [88];
  undefined1 auStack_8c8 [56];
  undefined1 auStack_890 [88];
  undefined1 auStack_838 [56];
  undefined1 auStack_800 [88];
  undefined1 auStack_7a8 [56];
  undefined1 auStack_770 [88];
  undefined1 auStack_718 [56];
  undefined1 auStack_6e0 [88];
  undefined1 auStack_688 [56];
  undefined1 auStack_650 [88];
  undefined1 auStack_5f8 [56];
  undefined1 auStack_5c0 [88];
  undefined1 auStack_568 [56];
  undefined1 auStack_530 [88];
  undefined1 auStack_4d8 [56];
  undefined1 auStack_4a0 [88];
  undefined1 auStack_448 [64];
  undefined1 auStack_408 [96];
  undefined1 auStack_3a8 [72];
  undefined1 auStack_360 [104];
  undefined1 auStack_2f8 [72];
  undefined1 auStack_2b0 [104];
  undefined1 auStack_248 [64];
  undefined1 auStack_208 [96];
  undefined1 auStack_1a8 [72];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_f8 [72];
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_48;
  
  func_0x0001074d3a98();
  func_0x0001074d4af4();
  func_0x0001074d468c();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077adee8();
  FUN_1073e7510(&uStack_b0);
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_1074cfab4();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_1074d0fb4();
  func_0x0001074e3a1c(param_1,&stack0xfffffffffffff578);
  FUN_1073ad37c(&stack0xfffffffffffff578);
  puVar1 = &uStack_160;
  FUN_1074cfab4();
  *param_1 = &PTR_FUN_1109b5068;
  func_0x00010785f1f4();
  param_1[0xc] = puVar1;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  puVar1 = puVar1 + 0x140;
  func_0x00010724e2c8(puVar1,&uStack_b0);
  *(char *)(param_1 + 0xd) = (char)puVar1;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x10);
  func_0x0001073db558(param_1 + 0xf,param_3 + 0x18);
  lVar2 = param_1[3];
  FUN_107438188(auStack_f8,lVar2 + 0xf68);
  func_0x00010743b05c(&uStack_b0,auStack_f8);
  func_0x00010727d614(auStack_4d8,lVar2 + 0xfd8);
  func_0x00010743b0a8(auStack_4a0,auStack_4d8);
  func_0x0001074d4ab4(0x1038,auStack_1a8);
  func_0x00010743b05c(&uStack_160,auStack_1a8);
  func_0x0001074d3fe8(0x10a8,auStack_568);
  func_0x00010743b0a8(auStack_530,auStack_568);
  func_0x0001074d3fe8(0x1108,auStack_5f8);
  func_0x00010743b0a8(auStack_5c0,auStack_5f8);
  func_0x0001074d3fe8(0x1168,auStack_688);
  func_0x00010743b0a8(auStack_650,auStack_688);
  FUN_1073398d4(auStack_248,lVar2 + 0x11c8);
  func_0x000107483538(auStack_208,auStack_248);
  FUN_10748d6fc(auStack_718,lVar2 + 0x1230);
  func_0x00010748d7a0(auStack_6e0,auStack_718);
  func_0x0001074d3fe8(0x1290,auStack_7a8);
  func_0x00010743b0a8(auStack_770,auStack_7a8);
  func_0x0001074d4ab4(0x12f0,auStack_2f8);
  func_0x00010743b05c(auStack_2b0,auStack_2f8);
  func_0x0001074d3fe8(0x1360,auStack_838);
  func_0x00010743b0a8(auStack_800,auStack_838);
  func_0x0001074d4ab4(0x13c0,auStack_3a8);
  func_0x00010743b05c(auStack_360,auStack_3a8);
  func_0x0001074d3fe8(0x1430,auStack_8c8);
  func_0x00010743b0a8(auStack_890,auStack_8c8);
  func_0x0001074d3fe8(0x1490,auStack_958);
  func_0x00010743b0a8(auStack_920,auStack_958);
  func_0x0001074d3fe8(0x14f0,auStack_9e8);
  func_0x00010743b0a8(auStack_9b0,auStack_9e8);
  FUN_1073398d4(auStack_448,lVar2 + 0x1550);
  func_0x000107483538(auStack_408,auStack_448);
  FUN_10748d6fc(auStack_a78,lVar2 + 0x15b8);
  func_0x00010748d7a0(auStack_a40,auStack_a78);
  FUN_1074d0fdc(param_1 + 0x13,&uStack_b0,auStack_4a0,&uStack_160,auStack_530,auStack_5c0,
                auStack_650,auStack_208,auStack_6e0,auStack_770,auStack_2b0,auStack_800,auStack_360,
                auStack_890,auStack_920,auStack_9b0,auStack_408,auStack_a40);
  FUN_10748aa80(auStack_a40);
  FUN_10748aaa4(auStack_a78);
  FUN_107482af4(auStack_408);
  func_0x0001072ca524(auStack_448);
  func_0x000107410c2c(auStack_9b0);
  func_0x000107266a30(auStack_9e8);
  func_0x000107410c2c(auStack_920);
  func_0x000107266a30(auStack_958);
  func_0x000107410c2c(auStack_890);
  func_0x000107266a30(auStack_8c8);
  FUN_1074335c8(auStack_360);
  FUN_107432d98(auStack_3a8);
  func_0x000107410c2c(auStack_800);
  func_0x000107266a30(auStack_838);
  FUN_1074335c8(auStack_2b0);
  FUN_107432d98(auStack_2f8);
  func_0x000107410c2c(auStack_770);
  func_0x000107266a30(auStack_7a8);
  FUN_10748aa80(auStack_6e0);
  FUN_10748aaa4(auStack_718);
  FUN_107482af4(auStack_208);
  func_0x0001072ca524(auStack_248);
  func_0x000107410c2c(auStack_650);
  func_0x000107266a30(auStack_688);
  func_0x0001074d465c();
  func_0x000107266a30(auStack_5f8);
  func_0x000107410c2c(auStack_530);
  func_0x000107266a30(auStack_568);
  FUN_1074335c8(&uStack_160);
  FUN_107432d98(auStack_1a8);
  func_0x000107410c2c(auStack_4a0);
  func_0x000107266a30(auStack_4d8);
  func_0x0001074d4674();
  FUN_107432d98(auStack_f8);
  param_1[0xd8] = 0x418000003f800000;
  param_1[0xed] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  *(undefined8 *)((long)param_1 + 0x709) = 0;
  *(undefined8 *)((long)param_1 + 0x701) = 0;
  *(undefined4 *)(param_1 + 0xed) = 0x3f800000;
  param_1[0xee] = 0xffffffff00000000;
  *(undefined1 *)((long)param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0x3f800000;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0x3f800000;
  func_0x0001074d3a98();
  if (extraout_x8 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10748aaa4(auStack_a78);
  FUN_107482af4(auStack_408);
  func_0x0001072ca524(auStack_448);
  func_0x000107410c2c(auStack_9b0);
  func_0x000107266a30(auStack_9e8);
  do {
    func_0x000107410c2c(auStack_920);
    func_0x000107266a30(auStack_958);
    func_0x000107410c2c(auStack_890);
    func_0x000107266a30(auStack_8c8);
    FUN_1074335c8(auStack_360);
    FUN_107432d98(auStack_3a8);
    func_0x000107410c2c(auStack_800);
    func_0x000107266a30(auStack_838);
    FUN_1074335c8(auStack_2b0);
    FUN_107432d98(auStack_2f8);
    func_0x000107410c2c(auStack_770);
    func_0x000107266a30(auStack_7a8);
    FUN_10748aa80(auStack_6e0);
    FUN_10748aaa4(auStack_718);
    FUN_107482af4(auStack_208);
    func_0x0001072ca524(auStack_248);
    func_0x000107410c2c(auStack_650);
    func_0x000107266a30(auStack_688);
    func_0x0001074d465c();
    func_0x000107266a30(auStack_5f8);
    func_0x000107410c2c(auStack_530);
    func_0x000107266a30(auStack_568);
    FUN_1074335c8(&uStack_160);
    FUN_107432d98(auStack_1a8);
    func_0x000107410c2c(auStack_4a0);
    func_0x000107266a30(auStack_4d8);
    func_0x0001074d4674();
    FUN_107432d98(auStack_f8);
    func_0x0001073db5b8(param_1 + 0xf);
    func_0x0001073ad268(param_1);
    func_0x0001074d3fe0();
  } while( true );
}



/* Entry: 1074c98e8; end: 1074c993f;  */

undefined8 * FUN_1074c98e8(undefined8 *param_1)

{
  func_0x0001074cfc14(param_1 + 0xfa);
  func_0x00010726ea70(param_1 + 0xf5);
  func_0x0001074cfadc(param_1 + 0xe9);
  FUN_1074ae918(param_1 + 0xe6);
  FUN_10748ab6c(param_1 + 0xe3);
  func_0x0001074cfb74(param_1 + 0x13);
  func_0x0001073db5b8(param_1 + 0xf);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074c9940; end: 1074c9943;  */

undefined8 * FUN_1074c9940(undefined8 *param_1)

{
  func_0x0001074cfc14(param_1 + 0xfa);
  func_0x00010726ea70(param_1 + 0xf5);
  func_0x0001074cfadc(param_1 + 0xe9);
  FUN_1074ae918(param_1 + 0xe6);
  FUN_10748ab6c(param_1 + 0xe3);
  func_0x0001074cfb74(param_1 + 0x13);
  func_0x0001073db5b8(param_1 + 0xf);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074c9944; end: 1074c9957;  */

void FUN_1074c9944(void)

{
  FUN_1074c98e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074c9958; end: 1074c9feb;  */

ulong FUN_1074c9958(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar4;
  undefined1 auStack_12c0 [88];
  undefined1 auStack_1268 [88];
  undefined1 auStack_1210 [88];
  undefined1 auStack_11b8 [88];
  undefined1 auStack_1160 [88];
  undefined1 auStack_1108 [88];
  undefined1 auStack_10b0 [88];
  undefined1 auStack_1058 [88];
  undefined1 auStack_1000 [88];
  undefined1 auStack_fa8 [88];
  undefined1 auStack_f50 [88];
  undefined1 auStack_ef8 [88];
  undefined1 auStack_ea0 [88];
  undefined1 auStack_e48 [88];
  undefined1 auStack_df0 [88];
  undefined1 auStack_d98 [88];
  undefined1 auStack_d40 [88];
  undefined1 auStack_ce8 [88];
  undefined1 auStack_c90 [88];
  undefined1 auStack_c38 [88];
  undefined1 auStack_be0 [88];
  undefined1 auStack_b88 [88];
  undefined1 auStack_b30 [104];
  undefined1 auStack_ac8 [88];
  undefined1 auStack_a70 [104];
  undefined1 auStack_a08 [88];
  undefined1 auStack_9b0 [88];
  undefined1 auStack_958 [88];
  undefined1 auStack_900 [96];
  undefined1 auStack_8a0 [88];
  undefined1 auStack_848 [88];
  undefined1 auStack_7f0 [104];
  undefined1 auStack_788 [88];
  undefined1 auStack_730 [104];
  undefined1 auStack_6c8 [88];
  undefined1 auStack_670 [88];
  undefined1 auStack_618 [88];
  undefined1 auStack_5c0 [96];
  undefined1 auStack_560 [88];
  undefined1 auStack_508 [96];
  undefined1 auStack_4a8 [96];
  undefined1 auStack_448 [104];
  undefined1 auStack_3e0 [104];
  undefined1 auStack_378 [104];
  undefined1 auStack_310 [104];
  undefined1 auStack_2a8 [96];
  undefined1 auStack_248 [96];
  undefined1 auStack_1e8 [104];
  undefined1 auStack_180 [104];
  undefined1 auStack_118 [104];
  undefined1 auStack_b0 [104];
  undefined8 uStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001074d3e80();
  func_0x0001074d3a98();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_48 = extraout_x8;
  func_0x000107432c64(auStack_118,unaff_x19 + 0x98);
  func_0x0001074d4584(auStack_b0,lVar4 + 0xf68);
  func_0x000107432f04(auStack_be0,unaff_x19 + 0x100);
  func_0x0001074d3f98(auStack_b88,lVar4 + 0xfd8);
  func_0x000107432c64(auStack_1e8,unaff_x19 + 0x158);
  func_0x0001074d4584(auStack_180,lVar4 + 0x1038);
  func_0x000107432f04(auStack_c90,unaff_x19 + 0x1c0);
  func_0x0001074d3f98(auStack_c38,lVar4 + 0x10a8);
  func_0x000107432f04(auStack_d40,unaff_x19 + 0x218);
  func_0x0001074d3f98(auStack_ce8,lVar4 + 0x1108);
  func_0x000107432f04(auStack_df0,unaff_x19 + 0x270);
  func_0x0001074d3f98(auStack_d98,lVar4 + 0x1168);
  func_0x000107482cec(auStack_2a8,unaff_x19 + 0x2c8);
  FUN_107483670(auStack_248,lVar4 + 0x11c8);
  func_0x00010748ae9c(auStack_ea0,unaff_x19 + 0x328);
  FUN_10748dcbc(auStack_e48,lVar4 + 0x1230);
  func_0x000107432f04(auStack_f50,unaff_x19 + 0x380);
  func_0x0001074d3f98(auStack_ef8,lVar4 + 0x1290);
  func_0x000107432c64(auStack_378,unaff_x19 + 0x3d8);
  func_0x0001074d4584(auStack_310,lVar4 + 0x12f0);
  func_0x000107432f04(auStack_1000,unaff_x19 + 0x440);
  func_0x0001074d3f98(auStack_fa8,lVar4 + 0x1360);
  func_0x000107432c64(auStack_448,unaff_x19 + 0x498);
  func_0x0001074d4584(auStack_3e0,lVar4 + 0x13c0);
  func_0x000107432f04(auStack_10b0,unaff_x19 + 0x500);
  func_0x0001074d3f98(auStack_1058,lVar4 + 0x1430);
  func_0x000107432f04(auStack_1160,unaff_x19 + 0x558);
  func_0x0001074d3f98(auStack_1108,lVar4 + 0x1490);
  func_0x000107432f04(auStack_1210,unaff_x19 + 0x5b0);
  func_0x0001074d3f98(auStack_11b8,lVar4 + 0x14f0);
  func_0x000107482cec(auStack_508,unaff_x19 + 0x608);
  FUN_107483670(auStack_4a8,lVar4 + 0x1550);
  func_0x00010748ae9c(auStack_12c0,unaff_x19 + 0x668);
  FUN_10748dcbc(auStack_1268,lVar4 + 0x15b8);
  FUN_1074d0fdc(auStack_b30,auStack_b0,auStack_b88,auStack_180,auStack_c38,auStack_ce8,auStack_d98,
                auStack_248,auStack_e48,auStack_ef8,auStack_310,auStack_fa8,auStack_3e0,auStack_1058
                ,auStack_1108,auStack_11b8,auStack_4a8,auStack_1268);
  FUN_10748aa80(auStack_1268);
  FUN_10748aa80(auStack_12c0);
  FUN_107482af4(auStack_4a8);
  FUN_107482af4(auStack_508);
  func_0x000107410c2c(auStack_11b8);
  func_0x000107410c2c(auStack_1210);
  func_0x000107410c2c(auStack_1108);
  func_0x000107410c2c(auStack_1160);
  func_0x000107410c2c(auStack_1058);
  func_0x000107410c2c(auStack_10b0);
  FUN_1074335c8(auStack_3e0);
  FUN_1074335c8(auStack_448);
  func_0x000107410c2c(auStack_fa8);
  func_0x000107410c2c(auStack_1000);
  FUN_1074335c8(auStack_310);
  FUN_1074335c8(auStack_378);
  func_0x000107410c2c(auStack_ef8);
  func_0x000107410c2c(auStack_f50);
  FUN_10748aa80(auStack_e48);
  FUN_10748aa80(auStack_ea0);
  func_0x0001074d4a14();
  func_0x0001074d49fc();
  func_0x000107410c2c(auStack_d98);
  func_0x0001074d465c();
  func_0x000107410c2c(auStack_ce8);
  func_0x000107410c2c(auStack_d40);
  func_0x000107410c2c(auStack_c38);
  func_0x000107410c2c(auStack_c90);
  func_0x0001074d4a08();
  func_0x0001074d4a2c();
  func_0x000107410c2c(auStack_b88);
  func_0x000107410c2c(auStack_be0);
  func_0x0001074d4674();
  func_0x0001074d4a20();
  func_0x00010743344c(unaff_x19 + 0x98,auStack_b30);
  func_0x0001074334a8(unaff_x19 + 0x100,auStack_ac8);
  func_0x00010743344c(unaff_x19 + 0x158,auStack_a70);
  func_0x0001074334a8(unaff_x19 + 0x1c0,auStack_a08);
  func_0x0001074334a8(unaff_x19 + 0x218,auStack_9b0);
  func_0x0001074334a8(unaff_x19 + 0x270,auStack_958);
  FUN_107482b94(unaff_x19 + 0x2c8,auStack_900);
  func_0x00010748abfc(unaff_x19 + 0x328,auStack_8a0);
  func_0x0001074334a8(unaff_x19 + 0x380,auStack_848);
  func_0x00010743344c(unaff_x19 + 0x3d8,auStack_7f0);
  func_0x0001074334a8(unaff_x19 + 0x440,auStack_788);
  func_0x00010743344c(unaff_x19 + 0x498,auStack_730);
  func_0x0001074334a8(unaff_x19 + 0x500,auStack_6c8);
  func_0x0001074334a8(unaff_x19 + 0x558,auStack_670);
  func_0x0001074334a8(unaff_x19 + 0x5b0,auStack_618);
  FUN_107482b94(unaff_x19 + 0x608,auStack_5c0);
  func_0x00010748abfc(unaff_x19 + 0x668,auStack_560);
  FUN_1074cfb74(auStack_b30);
  uVar1 = *(long *)(unaff_x19 + 0x18) + 0xa80;
  FUN_1074c9fec();
  *(char *)(unaff_x19 + 0x710) = (char)uVar1;
  func_0x0001074d39e4(uStack_48);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001074d3bc4();
  uVar2 = uVar1;
  FUN_1074d1140();
  uVar3 = uVar1;
  func_0x0001074d115c(uVar1);
  func_0x0001074d1178(uVar1);
  return (ulong)((uint)uVar2 | (uint)uVar3 | (uint)uVar1);
}



/* Entry: 1074c9fec; end: 1074ca023;  */

uint FUN_1074c9fec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_1074d1140();
  uVar2 = param_1;
  func_0x0001074d115c(param_1);
  func_0x0001074d1178(param_1);
  return (uint)uVar1 | (uint)uVar2 | (uint)param_1;
}



/* Entry: 1074ca024; end: 1074ca59b;  */

void FUN_1074ca024(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined1 extraout_w8;
  bool bVar13;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 extraout_w9;
  undefined1 extraout_w10;
  byte extraout_w11;
  long unaff_x19;
  bool bVar14;
  undefined8 *unaff_x20;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 *puStack_b80;
  undefined4 uStack_b78;
  undefined8 *puStack_b48;
  undefined4 uStack_b40;
  undefined8 *puStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined1 auStack_ad8 [56];
  undefined1 auStack_aa0 [56];
  undefined1 auStack_a68 [56];
  undefined1 auStack_a30 [56];
  undefined1 auStack_9f8 [56];
  undefined1 auStack_9c0 [56];
  undefined8 *puStack_988;
  ulong uStack_980;
  undefined8 *puStack_978;
  ulong uStack_970;
  undefined8 uStack_968;
  undefined8 *puStack_930;
  ulong uStack_928;
  undefined8 uStack_920;
  undefined8 *puStack_8e8;
  ulong uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 auStack_8a0 [72];
  undefined8 uStack_858;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_4a8;
  undefined4 uStack_460;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3d7;
  undefined1 uStack_3d6;
  undefined1 uStack_3d5;
  undefined1 uStack_3d4;
  undefined1 uStack_3d3;
  byte bStack_3d2;
  undefined1 uStack_3d1;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  uint uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  float fStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  float fStack_3a4;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  float fStack_394;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_60;
  undefined8 uStack_48;
  
  func_0x0001074d3e80();
  func_0x0001074d3a98();
  uStack_48 = extraout_x8;
  FUN_1073e74c0(&uStack_90,param_5 + 0x18);
  FUN_1074ca62c(&puStack_3d0,unaff_x19 + 0x98,*unaff_x20);
  ppuVar11 = &puStack_3d0;
  FUN_1074ca59c(&plStack_440,&uStack_90);
  FUN_1074cfcfc(&puStack_3d0);
  FUN_1073e7510(&uStack_90);
  plVar1 = plStack_440;
  if (*(char *)(unaff_x19 + 0x710) != '\x01') goto LAB_1074ca2f0;
  iVar7 = (int)*(undefined8 *)(unaff_x19 + 0x18);
  iVar6 = iVar7 + 0xa80;
  FUN_1074d1140();
  if (iVar6 != 0) {
    ppuVar11 = (undefined8 **)&DAT_10f415bdb;
    FUN_1074d19fc(&uStack_3f0,plStack_440 + 0x3b);
    func_0x0001074d48a8();
    puStack_3d0 = (undefined8 *)((ulong)puStack_3d0 & 0xffffffffffffff00);
    uStack_3c0 = uStack_3c0 & 0xffffff00;
    func_0x0001074d4460();
    func_0x0001074d48a0();
    FUN_1074d29b0();
    func_0x0001074d48d0();
    FUN_107433ce0(plStack_440 + 0x3b,&puStack_3d0);
    FUN_1073debc4(&puStack_3d0);
    FUN_1073debc4(&uStack_90);
    func_0x0001074d4888();
    func_0x0001074d4890();
  }
  iVar6 = iVar7 + 0xa80;
  func_0x0001074d115c();
  if (iVar6 != 0) {
    ppuVar11 = (undefined8 **)&DAT_10f415be6;
    FUN_1074d19fc(&uStack_3f0,plStack_440 + 0x4b);
    func_0x0001074d48a8();
    puStack_3d0 = (undefined8 *)((ulong)puStack_3d0 & 0xffffffffffffff00);
    uStack_3c0 = uStack_3c0 & 0xffffff00;
    func_0x0001074d4460();
    func_0x0001074d48a0();
    FUN_1074d29b0();
    func_0x0001074d48d0();
    FUN_107433ce0(plStack_440 + 0x4b,&puStack_3d0);
    FUN_1073debc4(&puStack_3d0);
    FUN_1073debc4(&uStack_90);
    func_0x0001074d4888();
    func_0x0001074d4890();
  }
  iVar7 = iVar7 + 0xa80;
  func_0x0001074d1178();
  if (iVar7 == 0) goto LAB_1074ca2f0;
  puVar8 = (undefined8 *)0xb8;
  __Znwm();
  uStack_3e8 = CONCAT44(uStack_3e8._4_4_,1);
  FUN_1073dd9b0(&puStack_3d0,plStack_440 + 0x54);
  func_0x00010002b838(&uStack_90,&DAT_10f415bf6);
  puVar9 = &uStack_430;
  func_0x0001072c9ff4(puVar9,&uStack_3f0);
  func_0x00010785f1f4();
  uStack_3d7 = 0;
  puVar9 = puVar9 + 0x5c;
  func_0x00010724e2c8(puVar9,&uStack_3d7);
  if (((ulong)puVar9 & 1) == 0) {
    if (iStack_3a0 == 0) {
      uStack_3d6 = 1;
      goto LAB_1074ca1fc;
    }
    uStack_3d6 = *(undefined1 *)(puStack_3d0 + 4);
LAB_1074ca1e4:
    func_0x0001074d4c88();
    uStack_3d5 = extraout_w8;
    uStack_3d4 = extraout_w9;
    uStack_3d3 = extraout_w10;
    bStack_3d2 = extraout_w11;
  }
  else {
    uStack_3d6 = 0;
    if (iStack_3a0 != 0) goto LAB_1074ca1e4;
LAB_1074ca1fc:
    uStack_3d5 = 1;
    uStack_3d4 = 1;
    uStack_3d3 = 1;
    bStack_3d2 = 1;
  }
  bStack_3d2 = bStack_3d2 & 1;
  uStack_3d1 = 0;
  func_0x0001072c9f9c(puVar8,0x13,&uStack_430,&uStack_3d6);
  func_0x0001074d4470();
  *puVar8 = &PTR_FUN_1109b54c8;
  FUN_1073dd9b0(puVar8 + 9,&puStack_3d0);
  func_0x0001072625b4(puVar8 + 0x10,&uStack_90);
  puStack_450 = puVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  func_0x0001074d48c8();
  puVar9 = &uStack_3f0;
  func_0x0001072c9884();
  puStack_3d0 = puVar8;
  func_0x0001074d3ff0();
  *puVar9 = &PTR_FUN_1109b5550;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = puVar8;
  puStack_450 = (undefined8 *)0x0;
  ppuVar11 = (undefined8 **)0x0;
  uStack_3c8 = puVar9;
  func_0x0001072ca4a8(&uStack_430,&puStack_3d0);
  func_0x0001072c9b9c(&puStack_3d0);
  func_0x00010727da4c(&uStack_90,&uStack_430);
  uStack_60 = 1;
  FUN_1073dd9b0(&puStack_3d0,&uStack_90);
  FUN_1073ddf7c(plStack_440 + 0x54,&puStack_3d0);
  func_0x0001074d48c8();
  FUN_1073dd4c4(&uStack_90);
  func_0x0001074d4888();
  FUN_1074d2c70(&puStack_450);
LAB_1074ca2f0:
  uStack_460 = 0;
  uStack_3c8 = (undefined8 *)0x3f80000000000000;
  puStack_3d0 = (undefined8 *)0x0;
  FUN_1073ba8b4(plStack_440 + 4,&puStack_3d0);
  if (param_4 <= 0.0) {
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
    func_0x0001074d48b4(plStack_440 + 0x14);
    bVar14 = 0.0 < param_4;
  }
  else {
    bVar14 = true;
  }
  uStack_3c8 = (undefined8 *)0x3f80000000000000;
  puStack_3d0 = (undefined8 *)0x0;
  FUN_1073ba8b4(plStack_440 + 0x3b,&puStack_3d0);
  bVar3 = param_4 == 0.0;
  if (param_4 <= 0.0) {
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
    func_0x0001074d48b4(plStack_440 + 0x4b);
    bVar3 = param_4 == 0.0;
    bVar13 = !(bool)bVar3 && 0.0 <= param_4;
  }
  else {
    bVar13 = true;
  }
  func_0x0001074d4420(bVar13);
  bVar4 = false;
  if (((bVar3 & bVar14) != 1) ||
     (bVar4 = *(float *)(unaff_x19 + 0x6c0) == 0.0, *(float *)(unaff_x19 + 0x6c0) <= 0.0)) {
    func_0x0001074d4420();
    uVar5 = 0x20;
    if (((bVar4 & extraout_w8_00) == 1) && (uVar5 = 0x24, *(float *)(unaff_x19 + 0x6c4) <= 0.0)) {
      uVar5 = 0x20;
    }
  }
  else {
    uVar5 = 0x24;
  }
  *(undefined1 *)(unaff_x19 + 0x38) = uVar5;
  *(undefined1 *)(plStack_440 + 3) = uVar5;
  uStack_88 = 0x3f80000000000000;
  uStack_90 = 0;
  uVar16 = uStack_460;
  func_0x0001074d48b4(plStack_440 + 4);
  puStack_3d0 = (undefined8 *)CONCAT44((int)param_2,uVar16);
  uStack_3c8 = (undefined8 *)CONCAT44(param_4,param_3);
  uStack_430 = 0;
  uStack_428 = 0;
  FUN_1073ba8b4(plStack_440 + 0x14,&uStack_430);
  uStack_3bc = (undefined4)param_2;
  uStack_3e8 = 0x3f80000000000000;
  uStack_3f0 = 0;
  uStack_3c0 = uVar16;
  uStack_3b8 = param_3;
  fStack_3b4 = param_4;
  FUN_1073ba8b4(plStack_440 + 0x3b,&uStack_3f0);
  uStack_3ac = (undefined4)param_2;
  puStack_450 = (undefined8 *)0x0;
  uStack_448 = 0;
  uStack_3b0 = uStack_460;
  uStack_3a8 = param_3;
  fStack_3a4 = param_4;
  FUN_1073ba8b4(plStack_440 + 0x4b,&puStack_450);
  lVar15 = 0;
  uStack_39c = (undefined4)param_2;
  puVar9 = (undefined8 *)(unaff_x19 + 0x6d0);
  iStack_3a0 = uStack_460;
  uStack_398 = param_3;
  fStack_394 = param_4;
  do {
    uVar5 = lVar15 == 0x40;
    if ((bool)uVar5) {
LAB_1074ca484:
      uVar2 = uStack_438;
      uVar16 = (undefined4)param_2;
      plStack_440 = (long *)0x0;
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_88 = *(undefined8 *)(unaff_x19 + 0x10);
      uStack_90 = *(undefined8 *)(unaff_x19 + 8);
      *(long **)(unaff_x19 + 8) = plVar1;
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
      FUN_1073ad37c(&uStack_90);
      FUN_1074d0fb4(&uStack_430);
      FUN_1074cfab4();
      func_0x0001074d39e4(uStack_48);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        func_0x0001072c9b9c(&puStack_3d0);
        FUN_1074d2c70(&puStack_450);
        FUN_1074cfab4(&plStack_440);
        func_0x0001074d3bc4();
        func_0x0001074d4778();
        func_0x0001074d3a98();
        func_0x0001074d4af4();
        func_0x0001074d468c();
        uStack_7e8 = *(undefined8 *)(unaff_x19 + 0x6d8);
        uStack_7f0 = *puVar9;
        *puVar9 = 0;
        *(undefined8 *)(unaff_x19 + 0x6d8) = 0;
        FUN_1074d192c(&uStack_7e0,ppuVar11);
        puVar8 = &uStack_7e0;
        func_0x0001077adf38(&puStack_3d0,&uStack_7f0);
        FUN_1074cfcfc(&uStack_7e0);
        FUN_1073e7510(&uStack_7f0);
        *plVar1 = (long)&puStack_3d0;
        plVar1[1] = lVar15;
        uStack_7e0 = 0;
        uStack_7d8 = 0;
        FUN_1074cfab4(&uStack_7e0);
        func_0x0001074d39e4(uStack_4a8);
        if (!(bool)uVar5) {
          ___stack_chk_fail();
          puVar12 = puVar8;
          func_0x0001074d3e80();
          func_0x0001074d3a98();
          uVar17 = 0;
          uStack_8d8 = 0x3f80000000000000;
          uStack_8e0 = 0;
          puStack_8e8 = puVar12;
          uStack_858 = extraout_x8_00;
          FUN_1074384fc(auStack_8a0,puVar9,&puStack_8e8,puVar12[2]);
          uStack_8e0 = uStack_8e0 & 0xffffffff00000000;
          puStack_8e8 = puVar8;
          FUN_107438e4c(auStack_9c0,unaff_x19 + 0x738,&puStack_8e8,puVar12[2]);
          uStack_920 = 0;
          uStack_928 = 0;
          puStack_930 = puVar8;
          FUN_1074384fc(&puStack_8e8,unaff_x19 + 0x790,&puStack_930,puVar8[2]);
          uStack_928 = uStack_928 & 0xffffffff00000000;
          puStack_930 = puVar8;
          func_0x0001074d45e4(auStack_9f8,unaff_x19 + 0x7f8);
          uStack_928._0_4_ = 0x3f800000;
          puStack_930 = puVar8;
          func_0x0001074d45e4(auStack_a30,unaff_x19 + 0x850);
          uStack_928 = CONCAT44(uStack_928._4_4_,0x3f800000);
          puStack_930 = puVar8;
          func_0x0001074d45e4(auStack_a68,unaff_x19 + 0x8a8);
          uStack_928 = 0;
          puStack_930 = puVar8;
          FUN_107483b68(unaff_x19 + 0x900,&puStack_930,puVar8[2]);
          uStack_928 = uStack_928 & 0xffffffffffffff00;
          lVar15 = unaff_x19 + 0x960;
          uVar19 = uVar16;
          puStack_930 = puVar8;
          FUN_10748e33c(lVar15,&puStack_930,puVar8[2]);
          uStack_928 = uStack_928 & 0xffffffff00000000;
          puStack_930 = puVar8;
          func_0x0001074d45e4(auStack_aa0,unaff_x19 + 0x9b8);
          uVar18 = 0;
          uStack_968 = 0x3f80000000000000;
          uStack_970 = 0;
          puStack_978 = puVar8;
          FUN_1074384fc(&puStack_930,unaff_x19 + 0xa10,&puStack_978,puVar8[2]);
          uStack_970 = uStack_970 & 0xffffffff00000000;
          puStack_978 = puVar8;
          FUN_107438e4c(auStack_ad8,unaff_x19 + 0xa78,&puStack_978,puVar8[2]);
          uStack_b08 = 0;
          uStack_b00 = 0;
          puStack_b10 = puVar8;
          FUN_1074384fc(&puStack_978,unaff_x19 + 0xad0,&puStack_b10,puVar8[2]);
          uStack_b40 = 0;
          puStack_b48 = puVar8;
          FUN_107438e4c(&puStack_b10,unaff_x19 + 0xb38,&puStack_b48,puVar8[2]);
          uStack_b78 = 0x3f800000;
          puStack_b80 = puVar8;
          FUN_107438e4c(&puStack_b48,unaff_x19 + 0xb90,&puStack_b80,puVar8[2]);
          uStack_980 = CONCAT44(uStack_980._4_4_,0x3f800000);
          puStack_988 = puVar8;
          FUN_107438e4c(&puStack_b80,unaff_x19 + 0xbe8,&puStack_988,puVar8[2]);
          uStack_980 = 0;
          puStack_988 = puVar8;
          FUN_107483b68(unaff_x19 + 0xc40,&puStack_988,puVar8[2]);
          uStack_980 = uStack_980 & 0xffffffffffffff00;
          lVar10 = unaff_x19 + 0xca0;
          puStack_988 = puVar8;
          FUN_10748e33c(lVar10,&puStack_988,puVar8[2]);
          FUN_107433134(ppuVar11,auStack_8a0);
          FUN_1073dd9b0(ppuVar11 + 9,auStack_9c0);
          FUN_107433134(ppuVar11 + 0x10,&puStack_8e8);
          FUN_1073dd9b0(ppuVar11 + 0x19,auStack_9f8);
          FUN_1073dd9b0(ppuVar11 + 0x20,auStack_a30);
          FUN_1073dd9b0(ppuVar11 + 0x27,auStack_a68);
          *(undefined4 *)(ppuVar11 + 0x2e) = uVar17;
          *(undefined4 *)((long)ppuVar11 + 0x174) = uVar16;
          *(char *)(ppuVar11 + 0x2f) = (char)lVar15;
          FUN_1073dd9b0(ppuVar11 + 0x30,auStack_aa0);
          FUN_107433134(ppuVar11 + 0x37,&puStack_930);
          FUN_1073dd9b0(ppuVar11 + 0x40,auStack_ad8);
          FUN_107433134(ppuVar11 + 0x47,&puStack_978);
          FUN_1073dd9b0(ppuVar11 + 0x50,&puStack_b10);
          FUN_1073dd9b0(ppuVar11 + 0x57,&puStack_b48);
          FUN_1073dd9b0(ppuVar11 + 0x5e,&puStack_b80);
          *(undefined4 *)(ppuVar11 + 0x65) = uVar18;
          *(undefined4 *)((long)ppuVar11 + 0x32c) = uVar19;
          *(char *)(ppuVar11 + 0x66) = (char)lVar10;
          FUN_1073dd4c4(&puStack_b80);
          FUN_1073dd4c4(&puStack_b48);
          FUN_1073dd4c4(&puStack_b10);
          FUN_1073debc4(&puStack_978);
          FUN_1073dd4c4(auStack_ad8);
          FUN_1073debc4(&puStack_930);
          FUN_1073dd4c4(auStack_aa0);
          FUN_1073dd4c4(auStack_a68);
          FUN_1073dd4c4(auStack_a30);
          FUN_1073dd4c4(auStack_9f8);
          FUN_1073debc4(&puStack_8e8);
          FUN_1073dd4c4(auStack_9c0);
          FUN_1073debc4(auStack_8a0);
          func_0x0001074d39e4(uStack_858);
          if ((bool)uVar5) {
            return;
          }
          ___stack_chk_fail();
          func_0x0001074d4ca8();
          FUN_1073dd4c4();
          FUN_1073dd4c4(&puStack_b48);
          FUN_1073dd4c4(&puStack_b10);
          FUN_1073debc4(&puStack_978);
          FUN_1073dd4c4(auStack_ad8);
          FUN_1073debc4(&puStack_930);
          FUN_1073dd4c4(auStack_aa0);
          FUN_1073dd4c4(auStack_a68);
          do {
            FUN_1073dd4c4(auStack_a30);
            FUN_1073dd4c4(auStack_9f8);
            FUN_1073debc4(&puStack_8e8);
            FUN_1073dd4c4(auStack_9c0);
            FUN_1073debc4(auStack_8a0);
            func_0x0001074d3bc4();
          } while( true );
        }
      }
      return;
    }
    lVar10 = (long)&puStack_3d0 + lVar15;
    func_0x00010745fd34(lVar10,(long)puVar9 + lVar15);
    if ((int)lVar10 == 0) {
      *(undefined8 **)(unaff_x19 + 0x6d8) = uStack_3c8;
      *puVar9 = puStack_3d0;
      *(ulong *)(unaff_x19 + 0x6e8) = CONCAT44(fStack_3b4,uStack_3b8);
      *(ulong *)(unaff_x19 + 0x6e0) = CONCAT44(uStack_3bc,uStack_3c0);
      param_2 = CONCAT44(uStack_39c,iStack_3a0);
      *(ulong *)(unaff_x19 + 0x6f8) = CONCAT44(fStack_3a4,uStack_3a8);
      *(ulong *)(unaff_x19 + 0x6f0) = CONCAT44(uStack_3ac,uStack_3b0);
      *(ulong *)(unaff_x19 + 0x708) = CONCAT44(fStack_394,uStack_398);
      *(undefined8 *)(unaff_x19 + 0x700) = param_2;
      *(long *)(unaff_x19 + 0x6c8) = *(long *)(unaff_x19 + 0x6c8) + 1;
      goto LAB_1074ca484;
    }
    lVar15 = lVar15 + 0x10;
  } while( true );
}



/* Entry: 1074ca59c; end: 1074ca62b;  */

void FUN_1074ca59c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puStack_720;
  undefined4 uStack_718;
  undefined8 *puStack_6e8;
  undefined4 uStack_6e0;
  undefined8 *puStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 auStack_678 [56];
  undefined1 auStack_640 [56];
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 auStack_560 [56];
  undefined8 *puStack_528;
  ulong uStack_520;
  undefined8 *puStack_518;
  ulong uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined1 auStack_440 [72];
  undefined8 uStack_3f8;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_48;
  
  func_0x0001074d4778();
  func_0x0001074d3a98();
  func_0x0001074d4af4();
  func_0x0001074d468c();
  uStack_388 = unaff_x20[1];
  uStack_390 = *unaff_x20;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  FUN_1074d192c(&uStack_380,param_5);
  puVar3 = &uStack_380;
  func_0x0001077adf38();
  FUN_1074cfcfc(&uStack_380);
  FUN_1073e7510(&uStack_390);
  *unaff_x21 = unaff_x23;
  unaff_x21[1] = unaff_x22;
  uStack_380 = 0;
  uStack_378 = 0;
  FUN_1074cfab4(&uStack_380);
  func_0x0001074d39e4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar3;
  func_0x0001074d3e80();
  func_0x0001074d3a98();
  uVar4 = 0;
  uStack_478 = 0x3f80000000000000;
  uStack_480 = 0;
  puStack_488 = puVar1;
  uStack_3f8 = extraout_x8;
  FUN_1074384fc(auStack_440);
  uStack_480 = uStack_480 & 0xffffffff00000000;
  puStack_488 = puVar3;
  FUN_107438e4c(auStack_560,unaff_x20 + 0xd,&puStack_488,puVar1[2]);
  uStack_4c0 = 0;
  uStack_4c8 = 0;
  puStack_4d0 = puVar3;
  FUN_1074384fc(&puStack_488,unaff_x20 + 0x18,&puStack_4d0,puVar3[2]);
  uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
  puStack_4d0 = puVar3;
  func_0x0001074d45e4(auStack_598,unaff_x20 + 0x25);
  uStack_4c8._0_4_ = 0x3f800000;
  puStack_4d0 = puVar3;
  func_0x0001074d45e4(auStack_5d0,unaff_x20 + 0x30);
  uStack_4c8 = CONCAT44(uStack_4c8._4_4_,0x3f800000);
  puStack_4d0 = puVar3;
  func_0x0001074d45e4(auStack_608,unaff_x20 + 0x3b);
  uStack_4c8 = 0;
  puStack_4d0 = puVar3;
  FUN_107483b68(unaff_x20 + 0x46,&puStack_4d0,puVar3[2]);
  uStack_4c8 = uStack_4c8 & 0xffffffffffffff00;
  puVar1 = unaff_x20 + 0x52;
  uVar6 = param_2;
  puStack_4d0 = puVar3;
  FUN_10748e33c(puVar1,&puStack_4d0,puVar3[2]);
  uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
  puStack_4d0 = puVar3;
  func_0x0001074d45e4(auStack_640,unaff_x20 + 0x5d);
  uVar5 = 0;
  uStack_508 = 0x3f80000000000000;
  uStack_510 = 0;
  puStack_518 = puVar3;
  FUN_1074384fc(&puStack_4d0,unaff_x20 + 0x68,&puStack_518,puVar3[2]);
  uStack_510 = uStack_510 & 0xffffffff00000000;
  puStack_518 = puVar3;
  FUN_107438e4c(auStack_678,unaff_x20 + 0x75,&puStack_518,puVar3[2]);
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  puStack_6b0 = puVar3;
  FUN_1074384fc(&puStack_518,unaff_x20 + 0x80,&puStack_6b0,puVar3[2]);
  uStack_6e0 = 0;
  puStack_6e8 = puVar3;
  FUN_107438e4c(&puStack_6b0,unaff_x20 + 0x8d,&puStack_6e8,puVar3[2]);
  uStack_718 = 0x3f800000;
  puStack_720 = puVar3;
  FUN_107438e4c(&puStack_6e8,unaff_x20 + 0x98,&puStack_720,puVar3[2]);
  uStack_520 = CONCAT44(uStack_520._4_4_,0x3f800000);
  puStack_528 = puVar3;
  FUN_107438e4c(&puStack_720,unaff_x20 + 0xa3,&puStack_528,puVar3[2]);
  uStack_520 = 0;
  puStack_528 = puVar3;
  FUN_107483b68(unaff_x20 + 0xae,&puStack_528,puVar3[2]);
  uStack_520 = uStack_520 & 0xffffffffffffff00;
  puVar2 = unaff_x20 + 0xba;
  puStack_528 = puVar3;
  FUN_10748e33c(puVar2,&puStack_528,puVar3[2]);
  FUN_107433134(param_5,auStack_440);
  FUN_1073dd9b0(param_5 + 0x48,auStack_560);
  FUN_107433134(param_5 + 0x80,&puStack_488);
  FUN_1073dd9b0(param_5 + 200,auStack_598);
  FUN_1073dd9b0(param_5 + 0x100,auStack_5d0);
  FUN_1073dd9b0(param_5 + 0x138,auStack_608);
  *(undefined4 *)(param_5 + 0x170) = uVar4;
  *(undefined4 *)(param_5 + 0x174) = param_2;
  *(char *)(param_5 + 0x178) = (char)puVar1;
  FUN_1073dd9b0(param_5 + 0x180,auStack_640);
  FUN_107433134(param_5 + 0x1b8,&puStack_4d0);
  FUN_1073dd9b0(param_5 + 0x200,auStack_678);
  FUN_107433134(param_5 + 0x238,&puStack_518);
  FUN_1073dd9b0(param_5 + 0x280,&puStack_6b0);
  FUN_1073dd9b0(param_5 + 0x2b8,&puStack_6e8);
  FUN_1073dd9b0(param_5 + 0x2f0,&puStack_720);
  *(undefined4 *)(param_5 + 0x328) = uVar5;
  *(undefined4 *)(param_5 + 0x32c) = uVar6;
  *(char *)(param_5 + 0x330) = (char)puVar2;
  FUN_1073dd4c4(&puStack_720);
  FUN_1073dd4c4(&puStack_6e8);
  FUN_1073dd4c4(&puStack_6b0);
  FUN_1073debc4(&puStack_518);
  FUN_1073dd4c4(auStack_678);
  FUN_1073debc4(&puStack_4d0);
  FUN_1073dd4c4(auStack_640);
  FUN_1073dd4c4(auStack_608);
  FUN_1073dd4c4(auStack_5d0);
  FUN_1073dd4c4(auStack_598);
  FUN_1073debc4(&puStack_488);
  FUN_1073dd4c4(auStack_560);
  FUN_1073debc4(auStack_440);
  func_0x0001074d39e4(uStack_3f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_1073dd4c4();
  FUN_1073dd4c4(&puStack_6e8);
  FUN_1073dd4c4(&puStack_6b0);
  FUN_1073debc4(&puStack_518);
  FUN_1073dd4c4(auStack_678);
  FUN_1073debc4(&puStack_4d0);
  FUN_1073dd4c4(auStack_640);
  FUN_1073dd4c4(auStack_608);
  do {
    FUN_1073dd4c4(auStack_5d0);
    FUN_1073dd4c4(auStack_598);
    FUN_1073debc4(&puStack_488);
    FUN_1073dd4c4(auStack_560);
    FUN_1073debc4(auStack_440);
    func_0x0001074d3bc4();
  } while( true );
}



/* Entry: 1074ca62c; end: 1074caa7f;  */

void FUN_1074ca62c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lStack_390;
  undefined4 uStack_388;
  long lStack_358;
  undefined4 uStack_350;
  long alStack_320 [7];
  undefined1 auStack_2e8 [56];
  undefined1 auStack_2b0 [56];
  undefined1 auStack_278 [56];
  undefined1 auStack_240 [56];
  undefined1 auStack_208 [56];
  undefined1 auStack_1d0 [56];
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  long lStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  
  lVar1 = param_5;
  func_0x0001074d3e80();
  func_0x0001074d3a98();
  uVar3 = 0;
  uStack_e8 = 0x3f80000000000000;
  uStack_f0 = 0;
  lStack_f8 = lVar1;
  uStack_68 = extraout_x8;
  FUN_1074384fc(auStack_b0);
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  lStack_f8 = param_5;
  FUN_107438e4c(auStack_1d0,unaff_x20 + 0x68,&lStack_f8,*(undefined8 *)(lVar1 + 0x10));
  uStack_130 = 0;
  uStack_138 = 0;
  lStack_140 = param_5;
  FUN_1074384fc(&lStack_f8,unaff_x20 + 0xc0,&lStack_140,*(undefined8 *)(param_5 + 0x10));
  uStack_138 = uStack_138 & 0xffffffff00000000;
  lStack_140 = param_5;
  func_0x0001074d45e4(auStack_208,unaff_x20 + 0x128);
  uStack_138._0_4_ = 0x3f800000;
  lStack_140 = param_5;
  func_0x0001074d45e4(auStack_240,unaff_x20 + 0x180);
  uStack_138 = CONCAT44(uStack_138._4_4_,0x3f800000);
  lStack_140 = param_5;
  func_0x0001074d45e4(auStack_278,unaff_x20 + 0x1d8);
  uStack_138 = 0;
  lStack_140 = param_5;
  FUN_107483b68(unaff_x20 + 0x230,&lStack_140,*(undefined8 *)(param_5 + 0x10));
  uStack_138 = uStack_138 & 0xffffffffffffff00;
  lVar1 = unaff_x20 + 0x290;
  uVar5 = param_2;
  lStack_140 = param_5;
  FUN_10748e33c(lVar1,&lStack_140,*(undefined8 *)(param_5 + 0x10));
  uStack_138 = uStack_138 & 0xffffffff00000000;
  lStack_140 = param_5;
  func_0x0001074d45e4(auStack_2b0,unaff_x20 + 0x2e8);
  uVar4 = 0;
  uStack_178 = 0x3f80000000000000;
  uStack_180 = 0;
  lStack_188 = param_5;
  FUN_1074384fc(&lStack_140,unaff_x20 + 0x340,&lStack_188,*(undefined8 *)(param_5 + 0x10));
  uStack_180 = uStack_180 & 0xffffffff00000000;
  lStack_188 = param_5;
  FUN_107438e4c(auStack_2e8,unaff_x20 + 0x3a8,&lStack_188,*(undefined8 *)(param_5 + 0x10));
  alStack_320[1] = 0;
  alStack_320[2] = 0;
  alStack_320[0] = param_5;
  FUN_1074384fc(&lStack_188,unaff_x20 + 0x400,alStack_320,*(undefined8 *)(param_5 + 0x10));
  uStack_350 = 0;
  lStack_358 = param_5;
  FUN_107438e4c(alStack_320,unaff_x20 + 0x468,&lStack_358,*(undefined8 *)(param_5 + 0x10));
  uStack_388 = 0x3f800000;
  lStack_390 = param_5;
  FUN_107438e4c(&lStack_358,unaff_x20 + 0x4c0,&lStack_390,*(undefined8 *)(param_5 + 0x10));
  uStack_190 = CONCAT44(uStack_190._4_4_,0x3f800000);
  lStack_198 = param_5;
  FUN_107438e4c(&lStack_390,unaff_x20 + 0x518,&lStack_198,*(undefined8 *)(param_5 + 0x10));
  uStack_190 = 0;
  lStack_198 = param_5;
  FUN_107483b68(unaff_x20 + 0x570,&lStack_198,*(undefined8 *)(param_5 + 0x10));
  uStack_190 = uStack_190 & 0xffffffffffffff00;
  lVar2 = unaff_x20 + 0x5d0;
  lStack_198 = param_5;
  FUN_10748e33c(lVar2,&lStack_198,*(undefined8 *)(param_5 + 0x10));
  FUN_107433134();
  FUN_1073dd9b0(unaff_x19 + 0x48,auStack_1d0);
  FUN_107433134(unaff_x19 + 0x80,&lStack_f8);
  FUN_1073dd9b0(unaff_x19 + 200,auStack_208);
  FUN_1073dd9b0(unaff_x19 + 0x100,auStack_240);
  FUN_1073dd9b0(unaff_x19 + 0x138,auStack_278);
  *(undefined4 *)(unaff_x19 + 0x170) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x174) = param_2;
  *(char *)(unaff_x19 + 0x178) = (char)lVar1;
  FUN_1073dd9b0(unaff_x19 + 0x180,auStack_2b0);
  FUN_107433134(unaff_x19 + 0x1b8,&lStack_140);
  FUN_1073dd9b0(unaff_x19 + 0x200,auStack_2e8);
  FUN_107433134(unaff_x19 + 0x238,&lStack_188);
  FUN_1073dd9b0(unaff_x19 + 0x280,alStack_320);
  FUN_1073dd9b0(unaff_x19 + 0x2b8,&lStack_358);
  FUN_1073dd9b0(unaff_x19 + 0x2f0,&lStack_390);
  *(undefined4 *)(unaff_x19 + 0x328) = uVar4;
  *(undefined4 *)(unaff_x19 + 0x32c) = uVar5;
  *(char *)(unaff_x19 + 0x330) = (char)lVar2;
  FUN_1073dd4c4(&lStack_390);
  FUN_1073dd4c4(&lStack_358);
  FUN_1073dd4c4(alStack_320);
  FUN_1073debc4(&lStack_188);
  FUN_1073dd4c4(auStack_2e8);
  FUN_1073debc4(&lStack_140);
  FUN_1073dd4c4(auStack_2b0);
  FUN_1073dd4c4(auStack_278);
  FUN_1073dd4c4(auStack_240);
  FUN_1073dd4c4(auStack_208);
  FUN_1073debc4(&lStack_f8);
  FUN_1073dd4c4(auStack_1d0);
  FUN_1073debc4(auStack_b0);
  func_0x0001074d39e4(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_1073dd4c4();
  FUN_1073dd4c4(&lStack_358);
  FUN_1073dd4c4(alStack_320);
  FUN_1073debc4(&lStack_188);
  FUN_1073dd4c4(auStack_2e8);
  FUN_1073debc4(&lStack_140);
  FUN_1073dd4c4(auStack_2b0);
  FUN_1073dd4c4(auStack_278);
  do {
    FUN_1073dd4c4(auStack_240);
    FUN_1073dd4c4(auStack_208);
    FUN_1073debc4(&lStack_f8);
    FUN_1073dd4c4(auStack_1d0);
    FUN_1073debc4(auStack_b0);
    func_0x0001074d3bc4();
  } while( true );
}



/* Entry: 1074caa80; end: 1074cab17;  */

byte FUN_1074caa80(long param_1)

{
  return (((((*(char *)(param_1 + 0x108) != '\0' || *(char *)(param_1 + 0xa0) != '\0') ||
            (*(char *)(param_1 + 0x160) != '\0' || *(char *)(param_1 + 0x1c8) != '\0')) ||
           ((*(char *)(param_1 + 0x220) != '\0' || *(char *)(param_1 + 0x278) != '\0') ||
           *(char *)(param_1 + 0x2d0) != '\0')) ||
          (((*(char *)(param_1 + 0x330) != '\0' || *(char *)(param_1 + 0x388) != '\0') ||
           *(char *)(param_1 + 0x3e0) != '\0') || *(char *)(param_1 + 0x448) != '\0')) ||
         ((((*(char *)(param_1 + 0x4a0) != '\0' || *(char *)(param_1 + 0x508) != '\0') ||
           *(char *)(param_1 + 0x560) != '\0') || *(char *)(param_1 + 0x5b8) != '\0') ||
         *(char *)(param_1 + 0x610) != '\0')) | *(byte *)(param_1 + 0x670) & 1;
}



/* Entry: 1074cab18; end: 1074cad2f;  */

ulong FUN_1074cab18(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_188;
  undefined8 uStack_108;
  uint auStack_b0 [18];
  undefined8 uStack_68;
  
  lVar6 = param_3;
  func_0x0001074d3a98();
  lVar6 = *(long *)(lVar6 + 8);
  uStack_68 = extraout_x8;
  if (*(int *)(lVar6 + 0x60) == 0) {
    fVar10 = *(float *)(lVar6 + 0x2c);
LAB_1074cabd8:
    fVar11 = *(float *)(lVar6 + 0x2c);
LAB_1074cabdc:
    fVar12 = *(float *)(lVar6 + 0x2c);
  }
  else {
    func_0x0001074d417c();
    func_0x0001074d3b84();
    fVar10 = 1.0;
    func_0x0001074d4534();
    func_0x0001074d432c();
    if (*(int *)(lVar6 + 0x60) == 0) goto LAB_1074cabd8;
    func_0x0001074d417c();
    func_0x0001074d3b84();
    fVar11 = 1.0;
    func_0x0001074d4534();
    func_0x0001074d432c();
    if (*(int *)(lVar6 + 0x60) == 0) goto LAB_1074cabdc;
    func_0x0001074d417c();
    func_0x0001074d3b84();
    fVar12 = 0.0;
    func_0x0001074d4534();
    func_0x0001074d432c();
    if (*(int *)(lVar6 + 0x60) != 0) {
      func_0x0001074d417c();
      func_0x0001074d3b84();
      fVar13 = 0.0;
      func_0x0001074d4534();
      func_0x0001074d432c();
      goto LAB_1074cabe4;
    }
  }
  fVar13 = *(float *)(lVar6 + 0x2c);
LAB_1074cabe4:
  FUN_1074cad30(lVar6 + 0x120,param_4);
  puVar4 = (uint *)(lVar6 + 0x2d8);
  uVar7 = param_2;
  FUN_1074cad8c(puVar4,param_4);
  if (fVar10 <= fVar12) {
    fVar10 = fVar12;
  }
  if (fVar11 <= fVar13) {
    fVar11 = fVar13;
  }
  if (0.0 < (float)param_2 && 0.0 < fVar10) {
    bVar1 = 0.0 < *(float *)(param_3 + 0x6c0);
  }
  else {
    bVar1 = false;
  }
  uVar3 = 0.0 < (float)uVar7 && 0.0 < fVar11;
  if ((float)uVar7 <= 0.0 || fVar11 <= 0.0) {
    bVar2 = false;
  }
  else {
    fVar10 = *(float *)(param_3 + 0x6c4);
    uVar7 = (ulong)(uint)fVar10;
    uVar3 = fVar10 == 0.0;
    bVar2 = !(bool)uVar3 && 0.0 <= fVar10;
  }
  if (bVar2 || bVar1) {
    auStack_b0[0] = 0;
    auStack_b0[1] = 0;
    auStack_b0[2] = 0;
    auStack_b0[3] = 0;
    auStack_b0[4] = 0;
    auStack_b0[5] = 0;
    if (bVar1) {
      func_0x0001074d4978();
      func_0x0001074d48bc();
      func_0x0001074d3fd8();
    }
    if (bVar2) {
      func_0x0001074d4978();
      func_0x0001074d48bc();
      func_0x0001074d3fd8();
    }
    FUN_10748f12c(param_1,auStack_b0);
    puVar4 = auStack_b0;
    func_0x0001000e30f4();
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  func_0x0001074d39e4(uStack_68);
  if ((bool)uVar3) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x0001074d432c();
  func_0x0001074d3bc4();
  func_0x0001074d3a84();
  if (puVar4[0xc] == 0) {
    uVar9 = (ulong)*puVar4;
    uVar8 = uVar7;
  }
  else {
    func_0x0001074d46d8();
    func_0x0001074d4938();
    uVar8 = uVar7;
    func_0x0001074d3f34();
    uVar9 = uVar7;
  }
  func_0x0001074d39e4(uStack_108);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001074d3c20();
    func_0x0001074d3bc4();
    func_0x0001074d3a84();
    if (puVar4[0xc] == 0) {
      uVar9 = (ulong)*puVar4;
      uVar7 = uVar8;
    }
    else {
      func_0x0001074d46d8();
      func_0x0001074d4938();
      uVar7 = uVar8;
      func_0x0001074d3f34();
      uVar9 = uVar8;
    }
    func_0x0001074d39e4(uStack_188);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x0001074d3c20();
      func_0x0001074d3bc4();
      FUN_107486f3c(puVar4 + 0x1c6);
      FUN_1074ae96c(puVar4 + 0x1cc);
      if (*(long *)(puVar4 + 0x1d8) != 0) {
        func_0x0001074cfb04(puVar4 + 0x1d2,*(undefined8 *)(puVar4 + 0x1d6));
        puVar4[0x1d6] = 0;
        puVar4[0x1d7] = 0;
        lVar5 = *(long *)(puVar4 + 0x1d4);
        for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
          *(undefined8 *)(*(long *)(puVar4 + 0x1d2) + lVar6 * 8) = 0;
        }
        puVar4[0x1d8] = 0;
        puVar4[0x1d9] = 0;
      }
      puVar4[0x1dd] = 0xffffffff;
      return uVar7;
    }
  }
  return uVar9;
}



/* Entry: 1074cad30; end: 1074cad8b;  */

ulong FUN_1074cad30(ulong param_1,uint *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  if (param_2[0xc] == 0) {
    uVar5 = (ulong)*param_2;
    uVar3 = param_1;
  }
  else {
    func_0x0001074d46d8();
    func_0x0001074d4938();
    uVar3 = param_1;
    func_0x0001074d3f34();
    uVar5 = param_1;
  }
  func_0x0001074d39e4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074d3c20();
    func_0x0001074d3bc4();
    func_0x0001074d3a84();
    if (param_2[0xc] == 0) {
      uVar5 = (ulong)*param_2;
      uVar4 = uVar3;
    }
    else {
      func_0x0001074d46d8();
      func_0x0001074d4938();
      uVar4 = uVar3;
      func_0x0001074d3f34();
      uVar5 = uVar3;
    }
    func_0x0001074d39e4(uStack_b8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001074d3c20();
      func_0x0001074d3bc4();
      FUN_107486f3c(param_2 + 0x1c6);
      FUN_1074ae96c(param_2 + 0x1cc);
      if (*(long *)(param_2 + 0x1d8) != 0) {
        func_0x0001074cfb04(param_2 + 0x1d2,*(undefined8 *)(param_2 + 0x1d6));
        param_2[0x1d6] = 0;
        param_2[0x1d7] = 0;
        lVar2 = *(long *)(param_2 + 0x1d4);
        for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
          *(undefined8 *)(*(long *)(param_2 + 0x1d2) + lVar1 * 8) = 0;
        }
        param_2[0x1d8] = 0;
        param_2[0x1d9] = 0;
      }
      param_2[0x1dd] = 0xffffffff;
      return uVar4;
    }
  }
  return uVar5;
}



/* Entry: 1074cad8c; end: 1074cade7;  */

ulong FUN_1074cad8c(ulong param_1,uint *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  if (param_2[0xc] == 0) {
    uVar4 = (ulong)*param_2;
    uVar3 = param_1;
  }
  else {
    func_0x0001074d46d8();
    func_0x0001074d4938();
    uVar3 = param_1;
    func_0x0001074d3f34();
    uVar4 = param_1;
  }
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d3c20();
  func_0x0001074d3bc4();
  FUN_107486f3c(param_2 + 0x1c6);
  FUN_1074ae96c(param_2 + 0x1cc);
  if (*(long *)(param_2 + 0x1d8) != 0) {
    func_0x0001074cfb04(param_2 + 0x1d2,*(undefined8 *)(param_2 + 0x1d6));
    param_2[0x1d6] = 0;
    param_2[0x1d7] = 0;
    lVar2 = *(long *)(param_2 + 0x1d4);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_2 + 0x1d2) + lVar1 * 8) = 0;
    }
    param_2[0x1d8] = 0;
    param_2[0x1d9] = 0;
  }
  param_2[0x1dd] = 0xffffffff;
  return uVar3;
}



/* Entry: 1074cade8; end: 1074cae57;  */

void FUN_1074cade8(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_107486f3c(param_1 + 0x718);
  FUN_1074ae96c(param_1 + 0x730);
  if (*(long *)(param_1 + 0x760) != 0) {
    func_0x0001074cfb04((long *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x758));
    *(undefined8 *)(param_1 + 0x758) = 0;
    lVar2 = *(long *)(param_1 + 0x750);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x748) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  *(undefined4 *)(param_1 + 0x774) = 0xffffffff;
  return;
}



/* Entry: 1074cae58; end: 1074cb557;  */

long * FUN_1074cae58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long *plVar19;
  undefined1 *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  code *pcVar24;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar25;
  ulong uVar26;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  undefined1 *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 *puVar27;
  code *extraout_x8_08;
  long *plVar28;
  long *plVar29;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  ulong uVar40;
  long lVar41;
  undefined1 *puVar42;
  undefined **ppuVar43;
  float fVar44;
  ulong uVar45;
  double dVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  undefined8 *puStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined *puStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  long alStack_1518 [3];
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined1 auStack_14e8 [24];
  undefined1 auStack_14d0 [56];
  undefined1 auStack_1498 [56];
  undefined1 auStack_1460 [56];
  char cStack_1428;
  undefined *puStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 *puStack_1338;
  long lStack_1328;
  undefined8 auStack_1288 [4];
  undefined8 uStack_1268;
  undefined1 *puStack_11a8;
  undefined8 uStack_10f8;
  long alStack_10e0 [2];
  undefined *puStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 ***pppuStack_1080;
  code *pcStack_1078;
  undefined8 uStack_fe8;
  undefined1 auStack_f40 [824];
  undefined8 uStack_c08;
  long lStack_c00;
  long lStack_bf8;
  long *plStack_bf0;
  undefined **ppuStack_be8;
  long *plStack_be0;
  long *plStack_bd8;
  undefined8 ***pppuStack_bd0;
  code *pcStack_bc8;
  long alStack_bb8 [3];
  undefined1 auStack_ba0 [112];
  undefined1 uStack_b30;
  undefined1 auStack_b28 [56];
  char cStack_af0;
  undefined8 uStack_ae8;
  ulong uStack_ae0;
  ulong uStack_ad8;
  undefined1 *puStack_ad0;
  long *plStack_ac8;
  long *plStack_ac0;
  long *plStack_ab8;
  undefined **ppuStack_ab0;
  undefined1 *puStack_aa8;
  long lStack_aa0;
  long *plStack_a98;
  undefined8 **ppuStack_a90;
  code *pcStack_a88;
  ulong uStack_a80;
  long lStack_a78;
  undefined1 auStack_a70 [24];
  long alStack_a58 [7];
  undefined1 auStack_a20 [56];
  undefined1 auStack_9e8 [56];
  char cStack_9b0;
  long alStack_9a8 [29];
  long *plStack_8c0;
  long lStack_8b0;
  long alStack_818 [28];
  undefined1 *puStack_738;
  undefined8 uStack_688;
  undefined4 uStack_674;
  undefined4 *puStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long *aplStack_658 [7];
  undefined8 *puStack_620;
  code *pcStack_618;
  undefined1 uStack_610;
  undefined8 uStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long alStack_5d8 [2];
  float afStack_5c8 [2];
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long alStack_580 [3];
  long *plStack_568;
  long *plStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long *plStack_480;
  undefined1 auStack_230 [400];
  undefined8 uStack_a0;
  
  func_0x0001074d4cd4();
  lVar25 = param_1;
  uStack_660 = param_3;
  func_0x0001074d3a98();
  uStack_a0 = extraout_x8_00;
  FUN_10745f750(alStack_580,*(undefined8 *)(lVar25 + 0x70));
  uVar45 = (ulong)*(uint *)(param_1 + 0x778);
  func_0x0001077512dc(&plStack_568);
  plStack_480 = alStack_580;
  func_0x000107751334(auStack_230,&plStack_568);
  func_0x000107267da8(&plStack_568);
  plVar39 = (long *)(param_1 + 0x18);
  lVar25 = *plVar39;
  uVar47 = uVar45;
  if (*(int *)(lVar25 + 0x828) == 0) {
    uVar45 = 0;
  }
  else if (*(int *)(lVar25 + 0x828) == 1) {
    uVar45 = (ulong)*(uint *)(lVar25 + 0x7f8);
  }
  else {
    func_0x0001074d3e98();
    func_0x0001074d3acc();
    uVar47 = uVar45;
    func_0x0001074d4048();
    lVar25 = *plVar39;
  }
  if (*(int *)(lVar25 + 0x860) == 0) {
    uVar47 = 0x3d4ccccd;
  }
  else if (*(int *)(lVar25 + 0x860) == 1) {
    uVar47 = (ulong)*(uint *)(lVar25 + 0x830);
  }
  else {
    func_0x0001074d3e98();
    func_0x0001074d3acc();
    func_0x0001074d4048();
    lVar25 = *plVar39;
  }
  if ((*(int *)(lVar25 + 0x7f0) != 0) && (*(int *)(lVar25 + 0x7f0) != 1)) {
    func_0x0001074d3e98();
    func_0x0001074d3acc();
    func_0x0001074d4048();
  }
  FUN_107486f3c(param_1 + 0x718);
  FUN_1074ae96c(param_1 + 0x730);
  FUN_1074d0f04(param_1 + 0x718,0x100);
  FUN_1074d2c98(param_1 + 0x730,0x100);
  afStack_5c8[0] = *(float *)(param_1 + 0x778);
  plStack_5c0 = alStack_580;
  uStack_5b8 = 0x7fffffffffffffff;
  uStack_5a0 = 0;
  uStack_598 = 1;
  uStack_590 = 0;
  uStack_588 = 0;
  fVar44 = afStack_5c8[0];
  FUN_1073e74c0(aplStack_658,plVar39);
  FUN_1074ca62c(&plStack_568,param_1 + 0x98,afStack_5c8);
  FUN_1074ca59c(alStack_5d8,aplStack_658,&plStack_568);
  FUN_1074cfcfc(&plStack_568);
  FUN_1073e7510(aplStack_658);
  lStack_668 = alStack_5d8[0];
  lVar25 = param_1 + 0x78;
  func_0x0001074d4aec(*(undefined8 *)(param_1 + 0x18));
  if (lVar25 == 0) {
    puStack_600 = &UNK_10e52b660;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
  }
  else {
    func_0x0001074d4ad8(&puStack_600);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  lVar25 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar25 + 0x908) == 0) {
    fVar50 = 0.0;
  }
  else if (*(int *)(lVar25 + 0x908) == 1) {
    fVar50 = *(float *)(lVar25 + 0x8d8);
  }
  else {
    fVar50 = fVar44;
    func_0x0001074d3e98();
    func_0x0001074d3acc();
    fVar44 = fVar50;
    func_0x0001074d4048();
    lVar25 = *plVar39;
  }
  fVar51 = 0.0;
  if (*(int *)(lVar25 + 0x8d0) != 0) {
    if (*(int *)(lVar25 + 0x8d0) == 1) {
      fVar51 = *(float *)(lVar25 + 0x8a0);
    }
    else {
      fVar51 = fVar44;
      func_0x0001074d3e98();
      func_0x0001074d3acc();
      func_0x0001074d4048();
    }
  }
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  uVar40 = (ulong)fVar50;
  uVar26 = uVar40;
  if (uVar40 <= (ulong)(long)fVar51) {
    uVar26 = (long)fVar51;
  }
  uVar1 = 0;
  if (uVar40 != 0) {
    uVar1 = uVar26;
  }
  fVar44 = *(float *)(param_1 + 0x778);
  if ((((-1 < *(int *)(param_1 + 0x774)) && ((int)fVar44 < *(int *)(param_1 + 0x774))) &&
      (uVar1 != 0)) && (uVar26 = *(ulong *)(param_1 + 0x760), uVar1 < uVar26)) {
    plVar39 = (long *)(param_1 + 0x758);
    while ((uVar1 < uVar26 &&
           (plVar29 = (long *)*plVar39, plVar28 = plVar29, plVar29 != (long *)0x0))) {
      while (plStack_568 = plVar28, plVar29 = (long *)*plVar29, plVar29 != (long *)0x0) {
        bVar6 = *(uint *)((long)plVar29 + 0x2c) < *(uint *)((long)plStack_568 + 0x2c);
        if (*(byte *)(plStack_568 + 5) != *(byte *)(plVar29 + 5)) {
          bVar6 = *(byte *)(plStack_568 + 5) < *(byte *)(plVar29 + 5);
        }
        plVar28 = plVar29;
        if (!bVar6) {
          plVar28 = plStack_568;
        }
      }
      uVar31 = *(ulong *)(param_1 + 0x750);
      uVar30 = plStack_568[1];
      uVar32 = uVar31 - 1;
      if ((uVar31 & uVar32) == 0) {
        uVar30 = uVar32 & uVar30;
      }
      else if (uVar31 <= uVar30) {
        uVar34 = 0;
        if (uVar31 != 0) {
          uVar34 = uVar30 / uVar31;
        }
        uVar30 = uVar30 - uVar34 * uVar31;
      }
      lVar25 = *plStack_568;
      lVar33 = *(long *)(param_1 + 0x748);
      plVar28 = *(long **)(lVar33 + uVar30 * 8);
      do {
        plVar29 = plVar28;
        plVar28 = (long *)*plVar29;
      } while ((long *)*plVar29 != plStack_568);
      if (plVar29 == plVar39) {
LAB_1074cb1cc:
        if (lVar25 == 0) {
LAB_1074cb200:
          *(undefined8 *)(lVar33 + uVar30 * 8) = 0;
          lVar25 = *plStack_568;
          goto LAB_1074cb208;
        }
        uVar34 = *(ulong *)(lVar25 + 8);
        if ((uVar31 & uVar32) == 0) {
          uVar35 = uVar34 & uVar32;
        }
        else {
          uVar35 = uVar34;
          if (uVar31 <= uVar34) {
            uVar35 = 0;
            if (uVar31 != 0) {
              uVar35 = uVar34 / uVar31;
            }
            uVar35 = uVar34 - uVar35 * uVar31;
          }
        }
        if (uVar35 != uVar30) goto LAB_1074cb200;
LAB_1074cb210:
        if ((uVar31 & uVar32) == 0) {
          uVar34 = uVar34 & uVar32;
        }
        else if (uVar31 <= uVar34) {
          uVar32 = 0;
          if (uVar31 != 0) {
            uVar32 = uVar34 / uVar31;
          }
          uVar34 = uVar34 - uVar32 * uVar31;
        }
        if (uVar34 != uVar30) {
          *(long **)(lVar33 + uVar34 * 8) = plVar29;
          lVar25 = *plStack_568;
        }
      }
      else {
        uVar34 = plVar29[1];
        if ((uVar31 & uVar32) == 0) {
          uVar34 = uVar34 & uVar32;
        }
        else if (uVar31 <= uVar34) {
          uVar35 = 0;
          if (uVar31 != 0) {
            uVar35 = uVar34 / uVar31;
          }
          uVar34 = uVar34 - uVar35 * uVar31;
        }
        if (uVar34 != uVar30) goto LAB_1074cb1cc;
LAB_1074cb208:
        if (lVar25 != 0) {
          uVar34 = *(ulong *)(lVar25 + 8);
          goto LAB_1074cb210;
        }
      }
      *plVar29 = lVar25;
      *plStack_568 = 0;
      *(ulong *)(param_1 + 0x760) = uVar26 - 1;
      uStack_558 = 1;
      uStack_554 = 0;
      plStack_560 = plVar39;
      FUN_1074d2d14(&plStack_568);
      uVar26 = *(ulong *)(param_1 + 0x760);
    }
  }
  lVar25 = param_1 + 0x40;
  *(int *)(param_1 + 0x774) = (int)fVar44;
  puVar42 = (undefined1 *)(param_1 + 0x748);
  uStack_608 = 0;
  plVar28 = (long *)(param_1 + 0x48);
  plVar39 = plVar28;
  uStack_674 = uVar2;
  puStack_670 = extraout_x8;
  while (lVar33 = *plVar39, lVar33 != lVar25) {
    if ((*(ushort *)(*(long *)(lVar33 + 0x10) + 0x74) >> 0xb & 1) != 0) {
      if ((*(char *)(param_1 + 0x68) == '\x01') &&
         ((*(char *)(lVar33 + 0xb8) != '\x01' || (*(long *)(lVar33 + 0xa8) == 0)))) {
        func_0x0001074d4074(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x778));
      }
      aplStack_658[0] = (long *)(lVar33 + 0x10);
      func_0x0001074d4640();
      puStack_620 = &uStack_608;
      uStack_610 = 1;
      pcStack_618 = (code *)uVar40;
      func_0x0001074d4630();
      FUN_1074d2d90(param_1 + 0x718,*(undefined8 *)(param_1 + 0x720),uStack_540,uStack_538);
      FUN_1074d314c(param_1 + 0x730,*(undefined8 *)(param_1 + 0x738),plStack_560,
                    CONCAT44(uStack_554,uStack_558));
      func_0x0001074d48dc();
    }
    plVar39 = (long *)(lVar33 + 8);
  }
  while( true ) {
    lVar33 = *plVar28;
    uVar5 = lVar33 == lVar25;
    if ((bool)uVar5) break;
    if ((*(char *)(param_1 + 0x68) == '\x01') &&
       ((*(char *)(lVar33 + 0xb8) != '\x01' || (*(long *)(lVar33 + 0xa8) == 0)))) {
      func_0x0001074d4074(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x778),
                          *(long *)(lVar33 + 0x10));
    }
    aplStack_658[0] = (long *)(lVar33 + 0x10);
    func_0x0001074d4640();
    uStack_610 = 0;
    puStack_620 = &uStack_608;
    pcStack_618 = (code *)uVar40;
    func_0x0001074d4630();
    FUN_1074d2d90(param_1 + 0x718,*(undefined8 *)(param_1 + 0x720),uStack_540,uStack_538);
    FUN_1074d314c(param_1 + 0x730,*(undefined8 *)(param_1 + 0x738),plStack_560,
                  CONCAT44(uStack_554,uStack_558));
    func_0x0001074d48dc();
    plVar28 = (long *)(lVar33 + 8);
  }
  *puStack_670 = uStack_674;
  func_0x0001074cfecc(puStack_670 + 2,param_1 + 0x730);
  *(undefined1 *)(puStack_670 + 8) = *(undefined1 *)(param_1 + 0x77c);
  plVar39 = (long *)(lStack_668 + 0x20);
  ppuVar15 = &puStack_600;
  puVar22 = auStack_230;
  FUN_1074cb784(puStack_670 + 10,param_1 + 0x718);
  *(undefined1 *)(puStack_670 + 0x10) = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x788);
  uVar49 = *(undefined8 *)(param_1 + 0x7a0);
  uVar48 = *(undefined8 *)(param_1 + 0x798);
  *(undefined8 *)(puStack_670 + 0x14) = *(undefined8 *)(param_1 + 0x790);
  *(undefined8 *)(puStack_670 + 0x12) = uVar14;
  *(undefined8 *)(puStack_670 + 0x18) = uVar49;
  *(undefined8 *)(puStack_670 + 0x16) = uVar48;
  lVar33 = param_1 + 0x7a8;
  func_0x000107270b5c(puStack_670 + 0x1a);
  uVar26 = (ulong)*(uint *)(param_1 + 0x780);
  puStack_670[0x24] = *(uint *)(param_1 + 0x780);
  func_0x00010726e4c8(&puStack_600);
  FUN_1074cfab4(alStack_5d8);
  func_0x000107267da8(auStack_230);
  plVar29 = alStack_580;
  func_0x00010726b264(plVar29);
  func_0x0001074d39e4(uStack_a0);
  if ((bool)uVar5) {
    func_0x0001074d47a8();
    return plVar29;
  }
  ___stack_chk_fail();
  func_0x0001074d4048();
  func_0x00010726e4c8(&puStack_600);
  FUN_1074cfab4(alStack_5d8);
  func_0x000107267da8(auStack_230);
  plVar29 = alStack_580;
  func_0x00010726b264();
  func_0x0001074d3fe0();
  pcVar24 = FUN_1074cb558;
  func_0x0001074d40b4();
  plVar21 = plVar39;
  ppuVar43 = ppuVar15;
  puVar23 = puVar22;
  puStack_620 = (undefined8 *)&stack0xfffffffffffffff0;
  pcStack_618 = pcVar24;
  func_0x0001074d3a98();
  uStack_688 = extraout_x8_01;
  func_0x0001077512dc(alStack_9a8);
  lStack_8b0 = (long)plVar29 + 0xab4;
  puVar18 = (ulong *)alStack_9a8;
  plStack_8c0 = plVar39;
  func_0x000107751334(alStack_818);
  func_0x000107267da8(alStack_9a8);
  if ((*(int *)(lVar33 + 0x1b0) == 0) || ((*(byte *)(lVar33 + 400) >> 1 & 1) != 0)) {
    func_0x0001074d4a68();
    lVar33 = plVar29[0x10];
    uVar40 = uVar26;
    for (lVar9 = plVar29[0xf]; uVar5 = lVar9 == lVar33, !(bool)uVar5; lVar9 = lVar9 + 0x670) {
      uVar40 = uVar26;
      FUN_1074cfde0(lVar9);
    }
  }
  else {
    plVar39 = plVar29 + 0xf;
    plVar29 = (long *)plVar29[0x10];
    plVar28 = alStack_a58;
    puVar42 = auStack_a70;
    for (plVar39 = (long *)*plVar39; uVar5 = plVar39 == plVar29, uVar40 = uVar26, uVar26 = uVar45,
        !(bool)uVar5; plVar39 = plVar39 + 0xce) {
      lVar9 = plVar39[0xcc];
      func_0x0001074d42f0(lVar9);
      (*extraout_x8_02)();
      func_0x00010726236c(auStack_9e8);
      if (cStack_9b0 == '\x01') {
        ppuVar10 = ppuVar15;
        func_0x000107869b38(alStack_9a8,ppuVar15,auStack_9e8);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_a70,alStack_9a8,ppuVar10);
        FUN_1073de9d8(alStack_9a8);
      }
      else {
        func_0x00010786967c();
        func_0x000107277f0c(auStack_a70,lVar9);
      }
      lStack_a78 = plVar39[0xcd];
      uVar45 = plVar39[0xcc];
      uStack_a80 = uVar45;
      if (plVar39[0xcd] != 0) {
        do {
          func_0x0001074d41f4();
        } while (extraout_w10 != 0);
      }
      func_0x000104c2fe00(alStack_a58,puVar22);
      func_0x000104c2fe00(auStack_a20,param_6);
      func_0x0001073c4f74(alStack_9a8,alStack_a58);
      plVar21 = alStack_9a8;
      puVar18 = &uStack_a80;
      func_0x000107751444(alStack_818);
      puStack_738 = puVar42;
      func_0x0001074d4a68();
      func_0x000107267e8c(alStack_9a8);
      func_0x000107267eac(alStack_a58);
      func_0x0001074d4a7c();
      uVar26 = uVar45;
      FUN_1074cfde0(plVar39);
      func_0x00010726b264(auStack_a70);
      func_0x0001074d457c();
    }
  }
  plVar11 = alStack_818;
  func_0x000107267da8();
  func_0x0001074d39e4(uStack_688);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    plVar12 = alStack_818;
    func_0x000107267da8();
    func_0x0001074d3bc4();
    pcStack_a88 = FUN_1074cb784;
    plVar13 = plVar12;
    plVar19 = (long *)puVar18;
    uStack_ae0 = uVar47;
    uStack_ad8 = uVar26;
    puStack_ad0 = puVar42;
    plStack_ac8 = plVar28;
    plStack_ac0 = plVar29;
    plStack_ab8 = plVar39;
    ppuStack_ab0 = ppuVar15;
    puStack_aa8 = puVar22;
    lStack_aa0 = lVar33;
    plStack_a98 = plVar11;
    ppuStack_a90 = &puStack_620;
    func_0x0001074d3a98();
    uStack_ae8 = extraout_x8_03;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[2] = 0;
    puVar20 = (undefined1 *)((plVar19[1] - *plVar19) / 0x98);
    FUN_1074d0f04();
    puVar22 = (undefined1 *)puVar18[1];
    for (puVar42 = (undefined1 *)*puVar18; uVar5 = puVar42 == puVar22, !(bool)uVar5;
        puVar42 = puVar42 + 0x98) {
      uVar14 = *(undefined8 *)(puVar42 + 0x10);
      func_0x0001074d42f0(uVar14);
      (*extraout_x8_04)();
      func_0x00010726236c(auStack_b28);
      if (cStack_af0 == '\x01') {
        ppuVar15 = ppuVar43;
        func_0x000107869b38(auStack_ba0,ppuVar43,auStack_b28);
        func_0x00010786967c();
        FUN_1073dcf84(alStack_bb8,auStack_ba0,ppuVar15);
        FUN_1073de9d8(auStack_ba0);
        uVar47 = uVar40;
      }
      else {
        func_0x00010786967c();
        func_0x000107277f0c(alStack_bb8,uVar14);
        uVar47 = uVar40;
      }
      auStack_ba0[0] = 0;
      uStack_b30 = 0;
      func_0x000107751444(puVar23,puVar42,auStack_ba0);
      *(long **)(puVar23 + 0xe0) = alStack_bb8;
      func_0x000107267e8c(auStack_ba0);
      FUN_1074cad30(plVar21 + 0x20,puVar23);
      puVar20 = puVar23;
      uVar40 = uVar47;
      FUN_1074cad8c(plVar21 + 0x57);
      if ((0.0 < (float)uVar47) || (0.0 < (float)uVar40)) {
        puVar20 = puVar42;
        FUN_1074c683c(plVar12);
      }
      plVar13 = alStack_bb8;
      func_0x00010726b264();
      func_0x0001074d457c();
    }
    func_0x0001074d39e4(uStack_ae8);
    if ((bool)uVar5) {
      return plVar13;
    }
    ___stack_chk_fail();
    plVar28 = plVar12;
    FUN_10748ab6c();
    func_0x0001074d3fe0();
    pcStack_bc8 = FUN_1074cb938;
    plVar29 = alStack_10e0;
    plVar11 = alStack_10e0;
    plVar39 = plVar28;
    lStack_c00 = param_1 + 0x770;
    lStack_bf8 = lVar25;
    plStack_bf0 = plVar21;
    ppuStack_be8 = ppuVar43;
    plStack_be0 = plVar13;
    plStack_bd8 = plVar12;
    pppuStack_bd0 = &ppuStack_a90;
    func_0x0001074d3a98();
    uStack_c08 = extraout_x8_06;
    FUN_1073e74c0(&puStack_10d0,plVar39 + 3);
    FUN_1074ca62c(auStack_f40,plVar28 + 0x13,*(undefined8 *)(puVar20 + 0x38));
    FUN_1074ca59c(alStack_10e0,&puStack_10d0,auStack_f40);
    FUN_1074cfcfc(auStack_f40);
    FUN_1073e7510(&puStack_10d0);
    func_0x0001077512dc((int)plVar28[0xef],&puStack_10d0);
    uStack_fe8 = *(undefined8 *)(puVar20 + 0x30);
    func_0x000107751334(auStack_f40,&puStack_10d0);
    func_0x000107267da8(&puStack_10d0);
    plVar39 = plVar28 + 0xf;
    func_0x0001074d4aec(plVar28[3]);
    if (plVar39 == (long *)0x0) {
      puStack_10d0 = &UNK_10e52b660;
      uStack_10c8 = 0;
      uStack_10c0 = 0;
      uStack_10b8 = 0;
    }
    else {
      func_0x0001074d4ad8(&puStack_10d0);
    }
    *extraout_x8_05 = *(undefined1 *)((long)plVar28 + 0x77c);
    lVar25 = alStack_10e0[0] + 0x20;
    ppuVar15 = &puStack_10d0;
    FUN_1074cb784(extraout_x8_05 + 8,plVar28 + 0xe3,lVar25,ppuVar15,auStack_f40);
    extraout_x8_05[0x20] = 0;
    lVar33 = plVar28[0xf1];
    lVar38 = plVar28[0xf4];
    lVar9 = plVar28[0xf3];
    *(long *)(extraout_x8_05 + 0x30) = plVar28[0xf2];
    *(long *)(extraout_x8_05 + 0x28) = lVar33;
    *(long *)(extraout_x8_05 + 0x40) = lVar38;
    *(long *)(extraout_x8_05 + 0x38) = lVar9;
    func_0x000107270b5c(extraout_x8_05 + 0x48);
    *(int *)(extraout_x8_05 + 0x70) = (int)plVar28[0xf0];
    func_0x00010726e4c8(&puStack_10d0);
    func_0x000107267da8(auStack_f40);
    FUN_1074cfab4(alStack_10e0);
    func_0x0001074d39e4(uStack_c08);
    if ((bool)uVar5) {
      return plVar29;
    }
    ___stack_chk_fail();
    func_0x000107267da8(auStack_f40);
    FUN_1074cfab4();
    func_0x0001074d3bc4();
    pcVar24 = FUN_1074cbaf4;
    func_0x0001074d40b4();
    puVar42 = (undefined1 *)plVar11;
    pppuStack_1080 = &pppuStack_bd0;
    pcStack_1078 = pcVar24;
    func_0x0001074d3a98();
    iVar7 = (int)puVar42;
    uStack_10f8 = extraout_x8_07;
    func_0x00010785f1f4();
    uVar8 = iVar7 + 0x110;
    func_0x00010724e330();
    if (*(char *)((long)plVar11 + 0x68) == '\x01') {
      lVar33 = *(long *)((long)plVar11 + 8) + 0x20;
    }
    else {
      lVar33 = 0;
    }
    plVar39 = alStack_1518;
    func_0x0001078696e8();
    puStack_1540 = &UNK_10e52b660;
    uStack_1538 = 0;
    uStack_1530 = 0;
    uStack_1528 = 0;
    if (*(char *)((long)plVar11 + 0x68) == '\x01') {
      FUN_10745f750(auStack_1288,*(undefined8 *)((long)plVar11 + 0x70));
      func_0x00010726c924(alStack_1518,auStack_1288);
      func_0x00010726b264(auStack_1288);
      puVar42 = (undefined1 *)((long)plVar11 + 0x78);
      func_0x0001074d4aec(*(undefined8 *)((long)plVar11 + 0x18));
      plVar39 = (long *)0x0;
      if (puVar42 != (undefined1 *)0x0) {
        func_0x0001074d4ad8(auStack_1288);
        FUN_1074d0124(&puStack_1420,auStack_1288);
        uVar49 = uStack_1528;
        uVar48 = uStack_1530;
        uVar14 = uStack_1538;
        puVar4 = puStack_1540;
        uStack_1538 = uStack_1418;
        puStack_1540 = puStack_1420;
        uStack_1528 = uStack_1408;
        uStack_1530 = uStack_1410;
        uStack_1418 = uVar14;
        puStack_1420 = puVar4;
        uStack_1408 = uVar49;
        uStack_1410 = uVar48;
        func_0x00010726e4c8(&puStack_1420);
        uStack_1520 = uStack_1268;
        plVar39 = auStack_1288;
        func_0x00010726e4c8();
      }
    }
    puStack_1558 = &uStack_1550;
    uStack_1550 = 0;
    uStack_1548 = 0;
    puVar27 = (undefined8 *)((long)plVar11 + 0x48);
    ppuVar43 = ppuVar15;
    while( true ) {
      puVar42 = (undefined1 *)*puVar27;
      uVar5 = puVar42 == (undefined1 *)((long)plVar11 + 0x40);
      if ((bool)uVar5) break;
      if ((puVar42[0xb8] != '\x01') || (*(long *)(puVar42 + 0xa8) == 0)) {
        lVar9 = *(long *)(puVar42 + 0x10);
        if (*(char *)((long)plVar11 + 0x68) == '\x01') {
          dVar46 = *(double *)(lVar25 + 0x78);
          _log2(dVar46);
          uVar47 = (ulong)(uint)(float)dVar46;
          lVar38 = *(long *)((long)plVar11 + 0x18);
          func_0x0001077512dc(uVar47,&puStack_1420);
          lStack_1328 = lVar9 + 0xab4;
          puStack_1338 = alStack_1518;
          func_0x000107751334(auStack_1288,&puStack_1420);
          func_0x000107267da8(&puStack_1420);
          if ((*(int *)(lVar33 + 0x1b0) == 0) || ((*(byte *)(lVar33 + 400) >> 1 & 1) != 0)) {
            func_0x0001074d4918();
            uVar36 = 0;
            lVar41 = *(long *)(lVar9 + 0x80);
            for (lVar38 = *(long *)(lVar9 + 0x78); lVar38 != lVar41; lVar38 = lVar38 + 0x670) {
              lVar17 = lVar9;
              FUN_1074d01dc(uVar47,lVar9,lVar38);
              uVar36 = uVar36 | (uint)lVar17;
            }
          }
          else {
            uVar36 = 0;
            lVar17 = *(long *)(lVar9 + 0x80);
            for (lVar41 = *(long *)(lVar9 + 0x78); lVar41 != lVar17; lVar41 = lVar41 + 0x670) {
              uVar14 = *(undefined8 *)(lVar41 + 0x660);
              func_0x0001074d42f0(uVar14);
              (*extraout_x8_08)();
              func_0x00010726236c(auStack_1460);
              if (cStack_1428 == '\x01') {
                ppuVar43 = &puStack_1540;
                func_0x000107869b38(&puStack_1420,ppuVar43,auStack_1460);
                func_0x00010786967c();
                FUN_1073dcf84(auStack_14e8,&puStack_1420,ppuVar43);
                FUN_1073de9d8(&puStack_1420);
              }
              else {
                func_0x00010786967c();
                func_0x000107277f0c(auStack_14e8,uVar14);
              }
              uStack_14f8 = *(undefined8 *)(lVar41 + 0x668);
              uVar14 = *(undefined8 *)(lVar41 + 0x660);
              uStack_1500 = uVar14;
              if (*(long *)(lVar41 + 0x668) != 0) {
                do {
                  func_0x0001074d41f4();
                } while (extraout_w10_00 != 0);
              }
              func_0x000104c2fe00(auStack_14d0,lVar38 + 0x40);
              func_0x000104c2fe00(auStack_1498,lVar38 + 0x78);
              func_0x0001073c4f74(&puStack_1420,auStack_14d0);
              func_0x000107751444(auStack_1288,&uStack_1500,&puStack_1420);
              puStack_11a8 = auStack_14e8;
              func_0x0001074d4918();
              func_0x000107267e8c(&puStack_1420);
              func_0x000107267eac(auStack_14d0);
              func_0x000107267e44(&uStack_1500);
              lVar16 = lVar9;
              FUN_1074d01dc(uVar14,lVar9,lVar41);
              uVar36 = uVar36 | (uint)lVar16;
              func_0x00010726b264(auStack_14e8);
              func_0x00010724b3d8(auStack_1460);
            }
            ppuVar43 = (undefined **)((ulong)ppuVar15 & 0xffffffff);
          }
          plVar39 = auStack_1288;
          func_0x000107267da8();
          cVar3 = *(char *)(*(long *)(lVar9 + 0x28) + 0x298);
          plVar28 = *(long **)(*(long *)(lVar9 + 0x28) + 0x778);
          if (*plVar28 == plVar28[1]) {
            bVar6 = false;
          }
          else {
            bVar6 = *(long *)(lVar9 + 0x168) != *(long *)(lVar9 + 0x170);
          }
          uVar37 = 0;
          if ((cVar3 != '\0') || (bVar6)) {
LAB_1074cbe58:
            if ((cVar3 == '\0' & uVar36) == 1) {
              if (*(long *)(lVar9 + 0x480) != *(long *)(lVar9 + 0x488)) {
                plVar39 = (long *)(lVar9 + 0x418);
                FUN_1074d0144();
                uVar37 = uVar37 | (uint)plVar39;
              }
              if (*(long *)(lVar9 + 0x790) != *(long *)(lVar9 + 0x798)) {
                plVar39 = (long *)(lVar9 + 0x728);
                FUN_1074d0144();
                uVar37 = uVar37 | (uint)plVar39;
              }
            }
          }
          else {
            if ((*(byte *)(lVar9 + 0xa60) & 1) != 0) {
LAB_1074cbe34:
              uVar37 = 0;
              goto LAB_1074cbe58;
            }
            if ((uVar36 & 1) != 0) {
              if (*(long *)(lVar9 + 0x168) != *(long *)(lVar9 + 0x170)) {
                plVar39 = (long *)(lVar9 + 0x100);
                FUN_1074d0144();
                uVar37 = (uint)plVar39;
                goto LAB_1074cbe58;
              }
              goto LAB_1074cbe34;
            }
            uVar37 = 0;
          }
          uVar37 = uVar37 | uVar36;
        }
        else {
          uVar37 = 0;
        }
        if ((uVar8 & 0x101) == 0x101) {
          if ((int)ppuVar43 != 0) {
            func_0x0001074d40e8();
            func_0x00010781a1c0();
            if ((int)plVar39 != 0) {
              func_0x0001074d46c8(*(ushort *)(lVar9 + 0x74) & 0xfff7);
            }
          }
          func_0x0001074d40e8();
          func_0x0001078190f0();
        }
        else {
          if ((int)ppuVar43 != 0) {
            func_0x0001074d40e8();
            func_0x000107819704();
            func_0x0001074d46c8(*(ushort *)(lVar9 + 0x74) & 0xfff7);
          }
          func_0x0001074d40e8();
          func_0x0001078187ec();
        }
        if (((uVar37 | (uint)plVar39) & 1) != 0) {
          func_0x0001074d46c8(*(ushort *)(lVar9 + 0x74) & 0xffef);
        }
      }
      puVar27 = (undefined8 *)(puVar42 + 8);
    }
    func_0x00010002c948(&puStack_1558);
    func_0x00010726e4c8(&puStack_1540);
    plVar11 = alStack_1518;
    func_0x00010726b264(plVar11);
    func_0x0001074d39e4(uStack_10f8);
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x00010726e4c8(&puStack_1540);
      plVar39 = alStack_1518;
      func_0x00010726b264();
      func_0x0001074d3bc4();
      plVar29 = (long *)0x0;
      for (plVar28 = plVar39 + 9; plVar28 = (long *)*plVar28, plVar28 != plVar39 + 8;
          plVar28 = plVar28 + 1) {
        plVar29 = (long *)((*(long *)(plVar28[2] + 0x80) - *(long *)(plVar28[2] + 0x78)) / 0x670 +
                          (long)plVar29);
      }
      return plVar29;
    }
  }
  return plVar11;
}



/* Entry: 1074cb558; end: 1074cb783;  */

undefined8 *
FUN_1074cb558(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5,long param_6,
             undefined8 param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  code *pcVar18;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined1 *extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  code *extraout_x8_06;
  long *plVar19;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  undefined **ppuVar27;
  double dVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 in_stack_00000060;
  undefined8 *puStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined *puStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 auStack_e98 [3];
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined1 auStack_e68 [24];
  undefined1 auStack_e50 [56];
  undefined1 auStack_e18 [56];
  undefined1 auStack_de0 [56];
  char cStack_da8;
  undefined *puStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 *puStack_cb8;
  long lStack_ca8;
  undefined8 auStack_c08 [4];
  undefined8 uStack_be8;
  undefined1 *puStack_b28;
  undefined8 uStack_a78;
  long alStack_a60 [2];
  undefined *puStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 ***pppuStack_a00;
  code *pcStack_9f8;
  undefined8 uStack_968;
  undefined1 auStack_8c0 [824];
  undefined8 uStack_588;
  undefined8 **ppuStack_550;
  code *pcStack_548;
  undefined8 auStack_538 [3];
  undefined1 auStack_520 [112];
  undefined1 uStack_4b0;
  undefined1 auStack_4a8 [56];
  char cStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_410;
  code *pcStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [56];
  undefined1 auStack_3a0 [56];
  undefined1 auStack_368 [56];
  char cStack_330;
  long alStack_328 [29];
  long *plStack_240;
  long lStack_230;
  undefined8 auStack_198 [28];
  undefined1 *puStack_b8;
  undefined8 uStack_8;
  
  func_0x0001074d40b4();
  plVar9 = param_4;
  uVar10 = param_5;
  lVar16 = param_6;
  func_0x0001074d3a98();
  uStack_8 = extraout_x8;
  func_0x0001077512dc(alStack_328);
  lStack_230 = param_2 + 0xab4;
  plVar19 = alStack_328;
  plStack_240 = param_4;
  func_0x000107751334(auStack_198);
  func_0x000107267da8(alStack_328);
  if ((*(int *)(param_3 + 0x1b0) == 0) || ((*(byte *)(param_3 + 400) >> 1 & 1) != 0)) {
    func_0x0001074d4a68();
    lVar24 = *(long *)(param_2 + 0x80);
    lVar23 = param_1;
    for (lVar25 = *(long *)(param_2 + 0x78); uVar3 = lVar25 == lVar24, !(bool)uVar3;
        lVar25 = lVar25 + 0x670) {
      lVar23 = param_1;
      FUN_1074cfde0(lVar25);
    }
  }
  else {
    lVar24 = *(long *)(param_2 + 0x80);
    for (lVar25 = *(long *)(param_2 + 0x78); uVar3 = lVar25 == lVar24, lVar23 = param_1,
        !(bool)uVar3; lVar25 = lVar25 + 0x670) {
      uVar7 = *(undefined8 *)(lVar25 + 0x660);
      func_0x0001074d42f0(uVar7);
      (*extraout_x8_00)();
      func_0x00010726236c(auStack_368);
      if (cStack_330 == '\x01') {
        uVar7 = param_5;
        func_0x000107869b38(alStack_328,param_5,auStack_368);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_3f0,alStack_328,uVar7);
        FUN_1073de9d8(alStack_328);
      }
      else {
        func_0x00010786967c();
        func_0x000107277f0c(auStack_3f0,uVar7);
      }
      uStack_3f8 = *(undefined8 *)(lVar25 + 0x668);
      param_1 = *(long *)(lVar25 + 0x660);
      lStack_400 = param_1;
      if (*(long *)(lVar25 + 0x668) != 0) {
        do {
          func_0x0001074d41f4();
        } while (extraout_w10 != 0);
      }
      func_0x000104c2fe00(auStack_3d8,param_6);
      func_0x000104c2fe00(auStack_3a0,param_7);
      func_0x0001073c4f74(alStack_328,auStack_3d8);
      plVar9 = alStack_328;
      plVar19 = &lStack_400;
      func_0x000107751444(auStack_198);
      puStack_b8 = auStack_3f0;
      func_0x0001074d4a68();
      func_0x000107267e8c(alStack_328);
      func_0x000107267eac(auStack_3d8);
      func_0x0001074d4a7c();
      FUN_1074cfde0(lVar25);
      func_0x00010726b264(auStack_3f0);
      func_0x0001074d457c();
    }
  }
  puVar8 = auStack_198;
  func_0x000107267da8();
  func_0x0001074d39e4(uStack_8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar8 = auStack_198;
    func_0x000107267da8();
    func_0x0001074d3bc4();
    pcStack_408 = FUN_1074cb784;
    puVar20 = puVar8;
    plVar14 = plVar19;
    puStack_410 = &stack0x00000060;
    func_0x0001074d3a98();
    uStack_468 = extraout_x8_01;
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    lVar15 = (plVar14[1] - *plVar14) / 0x98;
    FUN_1074d0f04();
    lVar24 = plVar19[1];
    for (lVar25 = *plVar19; uVar3 = lVar25 == lVar24, !(bool)uVar3; lVar25 = lVar25 + 0x98) {
      uVar7 = *(undefined8 *)(lVar25 + 0x10);
      func_0x0001074d42f0(uVar7);
      (*extraout_x8_02)();
      func_0x00010726236c(auStack_4a8);
      if (cStack_470 == '\x01') {
        uVar7 = uVar10;
        func_0x000107869b38(auStack_520,uVar10,auStack_4a8);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_538,auStack_520,uVar7);
        FUN_1073de9d8(auStack_520);
        lVar12 = lVar23;
      }
      else {
        func_0x00010786967c();
        func_0x000107277f0c(auStack_538,uVar7);
        lVar12 = lVar23;
      }
      auStack_520[0] = 0;
      uStack_4b0 = 0;
      func_0x000107751444(lVar16,lVar25,auStack_520);
      *(undefined8 **)(lVar16 + 0xe0) = auStack_538;
      func_0x000107267e8c(auStack_520);
      FUN_1074cad30(plVar9 + 0x20,lVar16);
      lVar15 = lVar16;
      lVar23 = lVar12;
      FUN_1074cad8c(plVar9 + 0x57);
      if ((0.0 < (float)lVar12) || (0.0 < (float)lVar23)) {
        lVar15 = lVar25;
        FUN_1074c683c(puVar8);
      }
      puVar20 = auStack_538;
      func_0x00010726b264();
      func_0x0001074d457c();
    }
    func_0x0001074d39e4(uStack_468);
    if ((bool)uVar3) {
      return puVar20;
    }
    ___stack_chk_fail();
    FUN_10748ab6c();
    func_0x0001074d3fe0();
    pcStack_548 = FUN_1074cb938;
    plVar19 = alStack_a60;
    plVar9 = alStack_a60;
    puVar20 = puVar8;
    ppuStack_550 = &puStack_410;
    func_0x0001074d3a98();
    uStack_588 = extraout_x8_04;
    FUN_1073e74c0(&puStack_a50,puVar20 + 3);
    FUN_1074ca62c(auStack_8c0,puVar8 + 0x13,*(undefined8 *)(lVar15 + 0x38));
    FUN_1074ca59c(alStack_a60,&puStack_a50,auStack_8c0);
    FUN_1074cfcfc(auStack_8c0);
    FUN_1073e7510(&puStack_a50);
    func_0x0001077512dc(*(undefined4 *)(puVar8 + 0xef),&puStack_a50);
    uStack_968 = *(undefined8 *)(lVar15 + 0x30);
    func_0x000107751334(auStack_8c0,&puStack_a50);
    func_0x000107267da8(&puStack_a50);
    puVar20 = puVar8 + 0xf;
    func_0x0001074d4aec(puVar8[3]);
    if (puVar20 == (undefined8 *)0x0) {
      puStack_a50 = &UNK_10e52b660;
      uStack_a48 = 0;
      uStack_a40 = 0;
      uStack_a38 = 0;
    }
    else {
      func_0x0001074d4ad8(&puStack_a50);
    }
    *extraout_x8_03 = *(undefined1 *)((long)puVar8 + 0x77c);
    lVar16 = alStack_a60[0] + 0x20;
    ppuVar17 = &puStack_a50;
    FUN_1074cb784(extraout_x8_03 + 8,puVar8 + 0xe3,lVar16,ppuVar17,auStack_8c0);
    extraout_x8_03[0x20] = 0;
    uVar10 = puVar8[0xf1];
    uVar30 = puVar8[0xf4];
    uVar7 = puVar8[0xf3];
    *(undefined8 *)(extraout_x8_03 + 0x30) = puVar8[0xf2];
    *(undefined8 *)(extraout_x8_03 + 0x28) = uVar10;
    *(undefined8 *)(extraout_x8_03 + 0x40) = uVar30;
    *(undefined8 *)(extraout_x8_03 + 0x38) = uVar7;
    func_0x000107270b5c(extraout_x8_03 + 0x48);
    *(undefined4 *)(extraout_x8_03 + 0x70) = *(undefined4 *)(puVar8 + 0xf0);
    func_0x00010726e4c8(&puStack_a50);
    func_0x000107267da8(auStack_8c0);
    FUN_1074cfab4(alStack_a60);
    func_0x0001074d39e4(uStack_588);
    if ((bool)uVar3) {
      return plVar19;
    }
    ___stack_chk_fail();
    func_0x000107267da8(auStack_8c0);
    FUN_1074cfab4();
    func_0x0001074d3bc4();
    pcVar18 = FUN_1074cbaf4;
    func_0x0001074d40b4();
    puVar26 = (undefined1 *)plVar9;
    pppuStack_a00 = &ppuStack_550;
    pcStack_9f8 = pcVar18;
    func_0x0001074d3a98();
    iVar5 = (int)puVar26;
    uStack_a78 = extraout_x8_05;
    func_0x00010785f1f4();
    uVar6 = iVar5 + 0x110;
    func_0x00010724e330();
    if (*(char *)((long)plVar9 + 0x68) == '\x01') {
      lVar25 = *(long *)((long)plVar9 + 8) + 0x20;
    }
    else {
      lVar25 = 0;
    }
    puVar8 = auStack_e98;
    func_0x0001078696e8();
    puStack_ec0 = &UNK_10e52b660;
    uStack_eb8 = 0;
    uStack_eb0 = 0;
    uStack_ea8 = 0;
    if (*(char *)((long)plVar9 + 0x68) == '\x01') {
      FUN_10745f750(auStack_c08,*(undefined8 *)((long)plVar9 + 0x70));
      func_0x00010726c924(auStack_e98,auStack_c08);
      func_0x00010726b264(auStack_c08);
      puVar26 = (undefined1 *)((long)plVar9 + 0x78);
      func_0x0001074d4aec(*(undefined8 *)((long)plVar9 + 0x18));
      puVar8 = (undefined8 *)0x0;
      if (puVar26 != (undefined1 *)0x0) {
        func_0x0001074d4ad8(auStack_c08);
        FUN_1074d0124(&puStack_da0,auStack_c08);
        uVar30 = uStack_ea8;
        uVar7 = uStack_eb0;
        uVar10 = uStack_eb8;
        puVar2 = puStack_ec0;
        uStack_eb8 = uStack_d98;
        puStack_ec0 = puStack_da0;
        uStack_ea8 = uStack_d88;
        uStack_eb0 = uStack_d90;
        uStack_d98 = uVar10;
        puStack_da0 = puVar2;
        uStack_d88 = uVar30;
        uStack_d90 = uVar7;
        func_0x00010726e4c8(&puStack_da0);
        uStack_ea0 = uStack_be8;
        puVar8 = auStack_c08;
        func_0x00010726e4c8();
      }
    }
    puStack_ed8 = &uStack_ed0;
    uStack_ed0 = 0;
    uStack_ec8 = 0;
    puVar20 = (undefined8 *)((long)plVar9 + 0x48);
    ppuVar27 = ppuVar17;
    while( true ) {
      puVar26 = (undefined1 *)*puVar20;
      uVar3 = puVar26 == (undefined1 *)((long)plVar9 + 0x40);
      if ((bool)uVar3) break;
      if ((puVar26[0xb8] != '\x01') || (*(long *)(puVar26 + 0xa8) == 0)) {
        lVar24 = *(long *)(puVar26 + 0x10);
        if (*(char *)((long)plVar9 + 0x68) == '\x01') {
          dVar28 = *(double *)(lVar16 + 0x78);
          _log2(dVar28);
          uVar29 = (ulong)(uint)(float)dVar28;
          lVar23 = *(long *)((long)plVar9 + 0x18);
          func_0x0001077512dc(uVar29,&puStack_da0);
          lStack_ca8 = lVar24 + 0xab4;
          puStack_cb8 = auStack_e98;
          func_0x000107751334(auStack_c08,&puStack_da0);
          func_0x000107267da8(&puStack_da0);
          if ((*(int *)(lVar25 + 0x1b0) == 0) || ((*(byte *)(lVar25 + 400) >> 1 & 1) != 0)) {
            func_0x0001074d4918();
            uVar21 = 0;
            lVar15 = *(long *)(lVar24 + 0x80);
            for (lVar23 = *(long *)(lVar24 + 0x78); lVar23 != lVar15; lVar23 = lVar23 + 0x670) {
              lVar12 = lVar24;
              FUN_1074d01dc(uVar29,lVar24,lVar23);
              uVar21 = uVar21 | (uint)lVar12;
            }
          }
          else {
            uVar21 = 0;
            lVar12 = *(long *)(lVar24 + 0x80);
            for (lVar15 = *(long *)(lVar24 + 0x78); lVar15 != lVar12; lVar15 = lVar15 + 0x670) {
              uVar10 = *(undefined8 *)(lVar15 + 0x660);
              func_0x0001074d42f0(uVar10);
              (*extraout_x8_06)();
              func_0x00010726236c(auStack_de0);
              if (cStack_da8 == '\x01') {
                ppuVar27 = &puStack_ec0;
                func_0x000107869b38(&puStack_da0,ppuVar27,auStack_de0);
                func_0x00010786967c();
                FUN_1073dcf84(auStack_e68,&puStack_da0,ppuVar27);
                FUN_1073de9d8(&puStack_da0);
              }
              else {
                func_0x00010786967c();
                func_0x000107277f0c(auStack_e68,uVar10);
              }
              uStack_e78 = *(undefined8 *)(lVar15 + 0x668);
              uVar10 = *(undefined8 *)(lVar15 + 0x660);
              uStack_e80 = uVar10;
              if (*(long *)(lVar15 + 0x668) != 0) {
                do {
                  func_0x0001074d41f4();
                } while (extraout_w10_00 != 0);
              }
              func_0x000104c2fe00(auStack_e50,lVar23 + 0x40);
              func_0x000104c2fe00(auStack_e18,lVar23 + 0x78);
              func_0x0001073c4f74(&puStack_da0,auStack_e50);
              func_0x000107751444(auStack_c08,&uStack_e80,&puStack_da0);
              puStack_b28 = auStack_e68;
              func_0x0001074d4918();
              func_0x000107267e8c(&puStack_da0);
              func_0x000107267eac(auStack_e50);
              func_0x000107267e44(&uStack_e80);
              lVar11 = lVar24;
              FUN_1074d01dc(uVar10,lVar24,lVar15);
              uVar21 = uVar21 | (uint)lVar11;
              func_0x00010726b264(auStack_e68);
              func_0x00010724b3d8(auStack_de0);
            }
            ppuVar27 = (undefined **)((ulong)ppuVar17 & 0xffffffff);
          }
          puVar8 = auStack_c08;
          func_0x000107267da8();
          cVar1 = *(char *)(*(long *)(lVar24 + 0x28) + 0x298);
          plVar19 = *(long **)(*(long *)(lVar24 + 0x28) + 0x778);
          if (*plVar19 == plVar19[1]) {
            bVar4 = false;
          }
          else {
            bVar4 = *(long *)(lVar24 + 0x168) != *(long *)(lVar24 + 0x170);
          }
          uVar22 = 0;
          if ((cVar1 != '\0') || (bVar4)) {
LAB_1074cbe58:
            if ((cVar1 == '\0' & uVar21) == 1) {
              if (*(long *)(lVar24 + 0x480) != *(long *)(lVar24 + 0x488)) {
                puVar8 = (undefined8 *)(lVar24 + 0x418);
                FUN_1074d0144();
                uVar22 = uVar22 | (uint)puVar8;
              }
              if (*(long *)(lVar24 + 0x790) != *(long *)(lVar24 + 0x798)) {
                puVar8 = (undefined8 *)(lVar24 + 0x728);
                FUN_1074d0144();
                uVar22 = uVar22 | (uint)puVar8;
              }
            }
          }
          else {
            if ((*(byte *)(lVar24 + 0xa60) & 1) != 0) {
LAB_1074cbe34:
              uVar22 = 0;
              goto LAB_1074cbe58;
            }
            if ((uVar21 & 1) != 0) {
              if (*(long *)(lVar24 + 0x168) != *(long *)(lVar24 + 0x170)) {
                puVar8 = (undefined8 *)(lVar24 + 0x100);
                FUN_1074d0144();
                uVar22 = (uint)puVar8;
                goto LAB_1074cbe58;
              }
              goto LAB_1074cbe34;
            }
            uVar22 = 0;
          }
          uVar22 = uVar22 | uVar21;
        }
        else {
          uVar22 = 0;
        }
        if ((uVar6 & 0x101) == 0x101) {
          if ((int)ppuVar27 != 0) {
            func_0x0001074d40e8();
            func_0x00010781a1c0();
            if ((int)puVar8 != 0) {
              func_0x0001074d46c8(*(ushort *)(lVar24 + 0x74) & 0xfff7);
            }
          }
          func_0x0001074d40e8();
          func_0x0001078190f0();
        }
        else {
          if ((int)ppuVar27 != 0) {
            func_0x0001074d40e8();
            func_0x000107819704();
            func_0x0001074d46c8(*(ushort *)(lVar24 + 0x74) & 0xfff7);
          }
          func_0x0001074d40e8();
          func_0x0001078187ec();
        }
        if (((uVar22 | (uint)puVar8) & 1) != 0) {
          func_0x0001074d46c8(*(ushort *)(lVar24 + 0x74) & 0xffef);
        }
      }
      puVar20 = (undefined8 *)(puVar26 + 8);
    }
    func_0x00010002c948(&puStack_ed8);
    func_0x00010726e4c8(&puStack_ec0);
    puVar8 = auStack_e98;
    func_0x00010726b264(puVar8);
    func_0x0001074d39e4(uStack_a78);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010726e4c8(&puStack_ec0);
      puVar8 = auStack_e98;
      func_0x00010726b264();
      func_0x0001074d3bc4();
      puVar13 = (undefined8 *)0x0;
      for (puVar20 = puVar8 + 9; puVar20 = (undefined8 *)*puVar20, puVar20 != puVar8 + 8;
          puVar20 = puVar20 + 1) {
        puVar13 = (undefined8 *)
                  ((*(long *)(puVar20[2] + 0x80) - *(long *)(puVar20[2] + 0x78)) / 0x670 +
                  (long)puVar13);
      }
      return puVar13;
    }
  }
  return puVar8;
}



/* Entry: 1074cb784; end: 1074cb937;  */

undefined8 *
FUN_1074cb784(undefined8 param_1,undefined8 *param_2,long *param_3,long param_4,undefined8 param_5,
             long param_6)

{
  char cVar1;
  undefined *puVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  code *pcVar15;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  long *plVar16;
  int extraout_w10;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined **ppuVar25;
  double dVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined *puStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 auStack_a98 [3];
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined1 auStack_a68 [24];
  undefined1 auStack_a50 [56];
  undefined1 auStack_a18 [56];
  undefined1 auStack_9e0 [56];
  char cStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 *puStack_8b8;
  long lStack_8a8;
  undefined8 auStack_808 [4];
  undefined8 uStack_7e8;
  undefined1 *puStack_728;
  undefined8 uStack_678;
  long alStack_660 [2];
  undefined *puStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 **ppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_568;
  undefined1 auStack_4c0 [824];
  undefined8 uStack_188;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [112];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [56];
  char cStack_70;
  undefined8 uStack_68;
  
  puVar7 = param_2;
  plVar16 = param_3;
  func_0x0001074d3a98();
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  lVar21 = (plVar16[1] - *plVar16) / 0x98;
  uStack_68 = extraout_x8;
  FUN_1074d0f04();
  lVar23 = param_3[1];
  for (lVar13 = *param_3; uVar3 = lVar13 == lVar23, !(bool)uVar3; lVar13 = lVar13 + 0x98) {
    uVar8 = *(undefined8 *)(lVar13 + 0x10);
    func_0x0001074d42f0(uVar8);
    (*extraout_x8_00)();
    func_0x00010726236c(auStack_a8);
    if (cStack_70 == '\x01') {
      uVar8 = param_5;
      func_0x000107869b38(auStack_120,param_5,auStack_a8);
      func_0x00010786967c();
      FUN_1073dcf84(auStack_138,auStack_120,uVar8);
      FUN_1073de9d8(auStack_120);
      uVar8 = param_1;
    }
    else {
      func_0x00010786967c();
      func_0x000107277f0c(auStack_138,uVar8);
      uVar8 = param_1;
    }
    auStack_120[0] = 0;
    uStack_b0 = 0;
    func_0x000107751444(param_6,lVar13,auStack_120);
    *(undefined8 **)(param_6 + 0xe0) = auStack_138;
    func_0x000107267e8c(auStack_120);
    FUN_1074cad30(param_4 + 0x100,param_6);
    lVar21 = param_6;
    param_1 = uVar8;
    FUN_1074cad8c(param_4 + 0x2b8);
    if ((0.0 < (float)uVar8) || (0.0 < (float)param_1)) {
      lVar21 = lVar13;
      FUN_1074c683c(param_2);
    }
    puVar7 = auStack_138;
    func_0x00010726b264();
    func_0x0001074d457c();
  }
  func_0x0001074d39e4(uStack_68);
  if ((bool)uVar3) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10748ab6c();
  func_0x0001074d3fe0();
  pcStack_148 = FUN_1074cb938;
  plVar16 = alStack_660;
  plVar9 = alStack_660;
  puVar7 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001074d3a98();
  uStack_188 = extraout_x8_02;
  FUN_1073e74c0(&puStack_650,puVar7 + 3);
  FUN_1074ca62c(auStack_4c0,param_2 + 0x13,*(undefined8 *)(lVar21 + 0x38));
  FUN_1074ca59c(alStack_660,&puStack_650,auStack_4c0);
  FUN_1074cfcfc(auStack_4c0);
  FUN_1073e7510(&puStack_650);
  func_0x0001077512dc(*(undefined4 *)(param_2 + 0xef),&puStack_650);
  uStack_568 = *(undefined8 *)(lVar21 + 0x30);
  func_0x000107751334(auStack_4c0,&puStack_650);
  func_0x000107267da8(&puStack_650);
  puVar7 = param_2 + 0xf;
  func_0x0001074d4aec(param_2[3]);
  if (puVar7 == (undefined8 *)0x0) {
    puStack_650 = &UNK_10e52b660;
    uStack_648 = 0;
    uStack_640 = 0;
    uStack_638 = 0;
  }
  else {
    func_0x0001074d4ad8(&puStack_650);
  }
  *extraout_x8_01 = *(undefined1 *)((long)param_2 + 0x77c);
  lVar13 = alStack_660[0] + 0x20;
  ppuVar14 = &puStack_650;
  FUN_1074cb784(extraout_x8_01 + 8,param_2 + 0xe3,lVar13,ppuVar14,auStack_4c0);
  extraout_x8_01[0x20] = 0;
  uVar8 = param_2[0xf1];
  uVar29 = param_2[0xf4];
  uVar28 = param_2[0xf3];
  *(undefined8 *)(extraout_x8_01 + 0x30) = param_2[0xf2];
  *(undefined8 *)(extraout_x8_01 + 0x28) = uVar8;
  *(undefined8 *)(extraout_x8_01 + 0x40) = uVar29;
  *(undefined8 *)(extraout_x8_01 + 0x38) = uVar28;
  func_0x000107270b5c(extraout_x8_01 + 0x48);
  *(undefined4 *)(extraout_x8_01 + 0x70) = *(undefined4 *)(param_2 + 0xf0);
  func_0x00010726e4c8(&puStack_650);
  func_0x000107267da8(auStack_4c0);
  FUN_1074cfab4(alStack_660);
  func_0x0001074d39e4(uStack_188);
  if ((bool)uVar3) {
    return plVar16;
  }
  ___stack_chk_fail();
  func_0x000107267da8(auStack_4c0);
  FUN_1074cfab4();
  func_0x0001074d3bc4();
  pcVar15 = FUN_1074cbaf4;
  func_0x0001074d40b4();
  puVar24 = (undefined1 *)plVar9;
  ppuStack_600 = &puStack_150;
  pcStack_5f8 = pcVar15;
  func_0x0001074d3a98();
  iVar5 = (int)puVar24;
  uStack_678 = extraout_x8_03;
  func_0x00010785f1f4();
  uVar6 = iVar5 + 0x110;
  func_0x00010724e330();
  if (*(char *)((long)plVar9 + 0x68) == '\x01') {
    lVar23 = *(long *)((long)plVar9 + 8) + 0x20;
  }
  else {
    lVar23 = 0;
  }
  puVar7 = auStack_a98;
  func_0x0001078696e8();
  puStack_ac0 = &UNK_10e52b660;
  uStack_ab8 = 0;
  uStack_ab0 = 0;
  uStack_aa8 = 0;
  if (*(char *)((long)plVar9 + 0x68) == '\x01') {
    FUN_10745f750(auStack_808,*(undefined8 *)((long)plVar9 + 0x70));
    func_0x00010726c924(auStack_a98,auStack_808);
    func_0x00010726b264(auStack_808);
    puVar24 = (undefined1 *)((long)plVar9 + 0x78);
    func_0x0001074d4aec(*(undefined8 *)((long)plVar9 + 0x18));
    puVar7 = (undefined8 *)0x0;
    if (puVar24 != (undefined1 *)0x0) {
      func_0x0001074d4ad8(auStack_808);
      FUN_1074d0124(&puStack_9a0,auStack_808);
      uVar29 = uStack_aa8;
      uVar28 = uStack_ab0;
      uVar8 = uStack_ab8;
      puVar2 = puStack_ac0;
      uStack_ab8 = uStack_998;
      puStack_ac0 = puStack_9a0;
      uStack_aa8 = uStack_988;
      uStack_ab0 = uStack_990;
      uStack_998 = uVar8;
      puStack_9a0 = puVar2;
      uStack_988 = uVar29;
      uStack_990 = uVar28;
      func_0x00010726e4c8(&puStack_9a0);
      uStack_aa0 = uStack_7e8;
      puVar7 = auStack_808;
      func_0x00010726e4c8();
    }
  }
  puStack_ad8 = &uStack_ad0;
  uStack_ad0 = 0;
  uStack_ac8 = 0;
  puVar17 = (undefined8 *)((long)plVar9 + 0x48);
  ppuVar25 = ppuVar14;
  do {
    puVar24 = (undefined1 *)*puVar17;
    uVar3 = puVar24 == (undefined1 *)((long)plVar9 + 0x40);
    if ((bool)uVar3) {
      func_0x00010002c948(&puStack_ad8);
      func_0x00010726e4c8(&puStack_ac0);
      puVar7 = auStack_a98;
      func_0x00010726b264(puVar7);
      func_0x0001074d39e4(uStack_678);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        func_0x00010726e4c8(&puStack_ac0);
        puVar7 = auStack_a98;
        func_0x00010726b264();
        func_0x0001074d3bc4();
        puVar12 = (undefined8 *)0x0;
        for (puVar17 = puVar7 + 9; puVar17 = (undefined8 *)*puVar17, puVar17 != puVar7 + 8;
            puVar17 = puVar17 + 1) {
          puVar12 = (undefined8 *)
                    ((*(long *)(puVar17[2] + 0x80) - *(long *)(puVar17[2] + 0x78)) / 0x670 +
                    (long)puVar12);
        }
        return puVar12;
      }
      return puVar7;
    }
    if ((puVar24[0xb8] != '\x01') || (*(long *)(puVar24 + 0xa8) == 0)) {
      lVar21 = *(long *)(puVar24 + 0x10);
      if (*(char *)((long)plVar9 + 0x68) == '\x01') {
        dVar26 = *(double *)(lVar13 + 0x78);
        _log2(dVar26);
        uVar27 = (ulong)(uint)(float)dVar26;
        lVar20 = *(long *)((long)plVar9 + 0x18);
        func_0x0001077512dc(uVar27,&puStack_9a0);
        lStack_8a8 = lVar21 + 0xab4;
        puStack_8b8 = auStack_a98;
        func_0x000107751334(auStack_808,&puStack_9a0);
        func_0x000107267da8(&puStack_9a0);
        if ((*(int *)(lVar23 + 0x1b0) == 0) || ((*(byte *)(lVar23 + 400) >> 1 & 1) != 0)) {
          func_0x0001074d4918();
          uVar18 = 0;
          lVar22 = *(long *)(lVar21 + 0x80);
          for (lVar20 = *(long *)(lVar21 + 0x78); lVar20 != lVar22; lVar20 = lVar20 + 0x670) {
            lVar11 = lVar21;
            FUN_1074d01dc(uVar27,lVar21,lVar20);
            uVar18 = uVar18 | (uint)lVar11;
          }
        }
        else {
          uVar18 = 0;
          lVar11 = *(long *)(lVar21 + 0x80);
          for (lVar22 = *(long *)(lVar21 + 0x78); lVar22 != lVar11; lVar22 = lVar22 + 0x670) {
            uVar8 = *(undefined8 *)(lVar22 + 0x660);
            func_0x0001074d42f0(uVar8);
            (*extraout_x8_04)();
            func_0x00010726236c(auStack_9e0);
            if (cStack_9a8 == '\x01') {
              ppuVar25 = &puStack_ac0;
              func_0x000107869b38(&puStack_9a0,ppuVar25,auStack_9e0);
              func_0x00010786967c();
              FUN_1073dcf84(auStack_a68,&puStack_9a0,ppuVar25);
              FUN_1073de9d8(&puStack_9a0);
            }
            else {
              func_0x00010786967c();
              func_0x000107277f0c(auStack_a68,uVar8);
            }
            uStack_a78 = *(undefined8 *)(lVar22 + 0x668);
            uVar8 = *(undefined8 *)(lVar22 + 0x660);
            uStack_a80 = uVar8;
            if (*(long *)(lVar22 + 0x668) != 0) {
              do {
                func_0x0001074d41f4();
              } while (extraout_w10 != 0);
            }
            func_0x000104c2fe00(auStack_a50,lVar20 + 0x40);
            func_0x000104c2fe00(auStack_a18,lVar20 + 0x78);
            func_0x0001073c4f74(&puStack_9a0,auStack_a50);
            func_0x000107751444(auStack_808,&uStack_a80,&puStack_9a0);
            puStack_728 = auStack_a68;
            func_0x0001074d4918();
            func_0x000107267e8c(&puStack_9a0);
            func_0x000107267eac(auStack_a50);
            func_0x000107267e44(&uStack_a80);
            lVar10 = lVar21;
            FUN_1074d01dc(uVar8,lVar21,lVar22);
            uVar18 = uVar18 | (uint)lVar10;
            func_0x00010726b264(auStack_a68);
            func_0x00010724b3d8(auStack_9e0);
          }
          ppuVar25 = (undefined **)((ulong)ppuVar14 & 0xffffffff);
        }
        puVar7 = auStack_808;
        func_0x000107267da8();
        cVar1 = *(char *)(*(long *)(lVar21 + 0x28) + 0x298);
        plVar16 = *(long **)(*(long *)(lVar21 + 0x28) + 0x778);
        if (*plVar16 == plVar16[1]) {
          bVar4 = false;
        }
        else {
          bVar4 = *(long *)(lVar21 + 0x168) != *(long *)(lVar21 + 0x170);
        }
        uVar19 = 0;
        if ((cVar1 != '\0') || (bVar4)) {
LAB_1074cbe58:
          if ((cVar1 == '\0' & uVar18) == 1) {
            if (*(long *)(lVar21 + 0x480) != *(long *)(lVar21 + 0x488)) {
              puVar7 = (undefined8 *)(lVar21 + 0x418);
              FUN_1074d0144();
              uVar19 = uVar19 | (uint)puVar7;
            }
            if (*(long *)(lVar21 + 0x790) != *(long *)(lVar21 + 0x798)) {
              puVar7 = (undefined8 *)(lVar21 + 0x728);
              FUN_1074d0144();
              uVar19 = uVar19 | (uint)puVar7;
            }
          }
        }
        else {
          if ((*(byte *)(lVar21 + 0xa60) & 1) != 0) {
LAB_1074cbe34:
            uVar19 = 0;
            goto LAB_1074cbe58;
          }
          if ((uVar18 & 1) != 0) {
            if (*(long *)(lVar21 + 0x168) != *(long *)(lVar21 + 0x170)) {
              puVar7 = (undefined8 *)(lVar21 + 0x100);
              FUN_1074d0144();
              uVar19 = (uint)puVar7;
              goto LAB_1074cbe58;
            }
            goto LAB_1074cbe34;
          }
          uVar19 = 0;
        }
        uVar19 = uVar19 | uVar18;
      }
      else {
        uVar19 = 0;
      }
      if ((uVar6 & 0x101) == 0x101) {
        if ((int)ppuVar25 != 0) {
          func_0x0001074d40e8();
          func_0x00010781a1c0();
          if ((int)puVar7 != 0) {
            func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xfff7);
          }
        }
        func_0x0001074d40e8();
        func_0x0001078190f0();
      }
      else {
        if ((int)ppuVar25 != 0) {
          func_0x0001074d40e8();
          func_0x000107819704();
          func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xfff7);
        }
        func_0x0001074d40e8();
        func_0x0001078187ec();
      }
      if (((uVar19 | (uint)puVar7) & 1) != 0) {
        func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xffef);
      }
    }
    puVar17 = (undefined8 *)(puVar24 + 8);
  } while( true );
}



/* Entry: 1074cb938; end: 1074cbaf3;  */

long * FUN_1074cb938(undefined1 *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar15;
  code *extraout_x8_01;
  long *plVar16;
  int extraout_w10;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined **ppuVar25;
  double dVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined1 auStack_958 [24];
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined1 auStack_928 [24];
  undefined1 auStack_910 [56];
  undefined1 auStack_8d8 [56];
  undefined1 auStack_8a0 [56];
  char cStack_868;
  undefined *puStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 *puStack_778;
  long lStack_768;
  undefined1 auStack_6c8 [32];
  undefined8 uStack_6a8;
  undefined1 *puStack_5e8;
  undefined8 uStack_538;
  long alStack_520 [2];
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_428;
  undefined1 auStack_380 [824];
  undefined8 uStack_48;
  undefined1 *puVar9;
  
  plVar16 = alStack_520;
  plVar8 = alStack_520;
  lVar7 = param_2;
  func_0x0001074d3a98();
  uStack_48 = extraout_x8;
  FUN_1073e74c0(&puStack_510,lVar7 + 0x18);
  FUN_1074ca62c(auStack_380,param_2 + 0x98,*(undefined8 *)(param_3 + 0x38));
  FUN_1074ca59c(alStack_520,&puStack_510,auStack_380);
  FUN_1074cfcfc(auStack_380);
  FUN_1073e7510(&puStack_510);
  func_0x0001077512dc(*(undefined4 *)(param_2 + 0x778),&puStack_510);
  uStack_428 = *(undefined8 *)(param_3 + 0x30);
  func_0x000107751334(auStack_380,&puStack_510);
  func_0x000107267da8(&puStack_510);
  lVar7 = param_2 + 0x78;
  func_0x0001074d4aec(*(undefined8 *)(param_2 + 0x18));
  if (lVar7 == 0) {
    puStack_510 = &UNK_10e52b660;
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_4f8 = 0;
  }
  else {
    func_0x0001074d4ad8(&puStack_510);
  }
  *param_1 = *(undefined1 *)(param_2 + 0x77c);
  lVar7 = alStack_520[0] + 0x20;
  ppuVar13 = &puStack_510;
  FUN_1074cb784(param_1 + 8,param_2 + 0x718,lVar7,ppuVar13,auStack_380);
  param_1[0x20] = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x788);
  uVar29 = *(undefined8 *)(param_2 + 0x7a0);
  uVar28 = *(undefined8 *)(param_2 + 0x798);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x790);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  *(undefined8 *)(param_1 + 0x40) = uVar29;
  *(undefined8 *)(param_1 + 0x38) = uVar28;
  func_0x000107270b5c(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x780);
  func_0x00010726e4c8(&puStack_510);
  func_0x000107267da8(auStack_380);
  FUN_1074cfab4(alStack_520);
  func_0x0001074d39e4(uStack_48);
  if ((bool)in_ZR) {
    return plVar16;
  }
  ___stack_chk_fail();
  func_0x000107267da8(auStack_380);
  FUN_1074cfab4();
  func_0x0001074d3bc4();
  pcVar14 = FUN_1074cbaf4;
  func_0x0001074d40b4();
  puVar9 = (undefined1 *)plVar8;
  puStack_4c0 = &stack0xfffffffffffffff0;
  pcStack_4b8 = pcVar14;
  func_0x0001074d3a98();
  iVar5 = (int)puVar9;
  uStack_538 = extraout_x8_00;
  func_0x00010785f1f4();
  uVar6 = iVar5 + 0x110;
  func_0x00010724e330();
  if (*(char *)((long)plVar8 + 0x68) == '\x01') {
    lVar23 = *(long *)((long)plVar8 + 8) + 0x20;
  }
  else {
    lVar23 = 0;
  }
  puVar9 = auStack_958;
  func_0x0001078696e8();
  puStack_980 = &UNK_10e52b660;
  uStack_978 = 0;
  uStack_970 = 0;
  uStack_968 = 0;
  if (*(char *)((long)plVar8 + 0x68) == '\x01') {
    FUN_10745f750(auStack_6c8,*(undefined8 *)((long)plVar8 + 0x70));
    func_0x00010726c924(auStack_958,auStack_6c8);
    func_0x00010726b264(auStack_6c8);
    puVar24 = (undefined1 *)((long)plVar8 + 0x78);
    func_0x0001074d4aec(*(undefined8 *)((long)plVar8 + 0x18));
    puVar9 = (undefined1 *)0x0;
    if (puVar24 != (undefined1 *)0x0) {
      func_0x0001074d4ad8(auStack_6c8);
      FUN_1074d0124(&puStack_860,auStack_6c8);
      uVar29 = uStack_968;
      uVar28 = uStack_970;
      uVar10 = uStack_978;
      puVar2 = puStack_980;
      uStack_978 = uStack_858;
      puStack_980 = puStack_860;
      uStack_968 = uStack_848;
      uStack_970 = uStack_850;
      uStack_858 = uVar10;
      puStack_860 = puVar2;
      uStack_848 = uVar29;
      uStack_850 = uVar28;
      func_0x00010726e4c8(&puStack_860);
      uStack_960 = uStack_6a8;
      puVar9 = auStack_6c8;
      func_0x00010726e4c8();
    }
  }
  puStack_998 = &uStack_990;
  uStack_990 = 0;
  uStack_988 = 0;
  puVar15 = (undefined8 *)((long)plVar8 + 0x48);
  ppuVar25 = ppuVar13;
  do {
    puVar24 = (undefined1 *)*puVar15;
    uVar3 = puVar24 == (undefined1 *)((long)plVar8 + 0x40);
    if ((bool)uVar3) {
      func_0x00010002c948(&puStack_998);
      func_0x00010726e4c8(&puStack_980);
      puVar9 = auStack_958;
      func_0x00010726b264(puVar9);
      func_0x0001074d39e4(uStack_538);
      if ((bool)uVar3) {
        return (long *)puVar9;
      }
      ___stack_chk_fail();
      func_0x00010726e4c8(&puStack_980);
      puVar9 = auStack_958;
      func_0x00010726b264();
      func_0x0001074d3bc4();
      puVar24 = (undefined1 *)0x0;
      puVar15 = (undefined8 *)(puVar9 + 0x48);
      while (puVar17 = (undefined1 *)*puVar15, puVar17 != puVar9 + 0x40) {
        puVar24 = puVar24 + (*(long *)(*(long *)(puVar17 + 0x10) + 0x80) -
                            *(long *)(*(long *)(puVar17 + 0x10) + 0x78)) / 0x670;
        puVar15 = (undefined8 *)(puVar17 + 8);
      }
      return (long *)puVar24;
    }
    if ((puVar24[0xb8] != '\x01') || (*(long *)(puVar24 + 0xa8) == 0)) {
      lVar21 = *(long *)(puVar24 + 0x10);
      if (*(char *)((long)plVar8 + 0x68) == '\x01') {
        dVar26 = *(double *)(lVar7 + 0x78);
        _log2(dVar26);
        uVar27 = (ulong)(uint)(float)dVar26;
        lVar20 = *(long *)((long)plVar8 + 0x18);
        func_0x0001077512dc(uVar27,&puStack_860);
        lStack_768 = lVar21 + 0xab4;
        puStack_778 = auStack_958;
        func_0x000107751334(auStack_6c8,&puStack_860);
        func_0x000107267da8(&puStack_860);
        if ((*(int *)(lVar23 + 0x1b0) == 0) || ((*(byte *)(lVar23 + 400) >> 1 & 1) != 0)) {
          func_0x0001074d4918();
          uVar18 = 0;
          lVar22 = *(long *)(lVar21 + 0x80);
          for (lVar20 = *(long *)(lVar21 + 0x78); lVar20 != lVar22; lVar20 = lVar20 + 0x670) {
            lVar12 = lVar21;
            FUN_1074d01dc(uVar27,lVar21,lVar20);
            uVar18 = uVar18 | (uint)lVar12;
          }
        }
        else {
          uVar18 = 0;
          lVar12 = *(long *)(lVar21 + 0x80);
          for (lVar22 = *(long *)(lVar21 + 0x78); lVar22 != lVar12; lVar22 = lVar22 + 0x670) {
            uVar10 = *(undefined8 *)(lVar22 + 0x660);
            func_0x0001074d42f0(uVar10);
            (*extraout_x8_01)();
            func_0x00010726236c(auStack_8a0);
            if (cStack_868 == '\x01') {
              ppuVar25 = &puStack_980;
              func_0x000107869b38(&puStack_860,ppuVar25,auStack_8a0);
              func_0x00010786967c();
              FUN_1073dcf84(auStack_928,&puStack_860,ppuVar25);
              FUN_1073de9d8(&puStack_860);
            }
            else {
              func_0x00010786967c();
              func_0x000107277f0c(auStack_928,uVar10);
            }
            uStack_938 = *(undefined8 *)(lVar22 + 0x668);
            uVar10 = *(undefined8 *)(lVar22 + 0x660);
            uStack_940 = uVar10;
            if (*(long *)(lVar22 + 0x668) != 0) {
              do {
                func_0x0001074d41f4();
              } while (extraout_w10 != 0);
            }
            func_0x000104c2fe00(auStack_910,lVar20 + 0x40);
            func_0x000104c2fe00(auStack_8d8,lVar20 + 0x78);
            func_0x0001073c4f74(&puStack_860,auStack_910);
            func_0x000107751444(auStack_6c8,&uStack_940,&puStack_860);
            puStack_5e8 = auStack_928;
            func_0x0001074d4918();
            func_0x000107267e8c(&puStack_860);
            func_0x000107267eac(auStack_910);
            func_0x000107267e44(&uStack_940);
            lVar11 = lVar21;
            FUN_1074d01dc(uVar10,lVar21,lVar22);
            uVar18 = uVar18 | (uint)lVar11;
            func_0x00010726b264(auStack_928);
            func_0x00010724b3d8(auStack_8a0);
          }
          ppuVar25 = (undefined **)((ulong)ppuVar13 & 0xffffffff);
        }
        puVar9 = auStack_6c8;
        func_0x000107267da8();
        cVar1 = *(char *)(*(long *)(lVar21 + 0x28) + 0x298);
        plVar16 = *(long **)(*(long *)(lVar21 + 0x28) + 0x778);
        if (*plVar16 == plVar16[1]) {
          bVar4 = false;
        }
        else {
          bVar4 = *(long *)(lVar21 + 0x168) != *(long *)(lVar21 + 0x170);
        }
        uVar19 = 0;
        if ((cVar1 != '\0') || (bVar4)) {
LAB_1074cbe58:
          if ((cVar1 == '\0' & uVar18) == 1) {
            if (*(long *)(lVar21 + 0x480) != *(long *)(lVar21 + 0x488)) {
              puVar9 = (undefined1 *)(lVar21 + 0x418);
              FUN_1074d0144();
              uVar19 = uVar19 | (uint)puVar9;
            }
            if (*(long *)(lVar21 + 0x790) != *(long *)(lVar21 + 0x798)) {
              puVar9 = (undefined1 *)(lVar21 + 0x728);
              FUN_1074d0144();
              uVar19 = uVar19 | (uint)puVar9;
            }
          }
        }
        else {
          if ((*(byte *)(lVar21 + 0xa60) & 1) != 0) {
LAB_1074cbe34:
            uVar19 = 0;
            goto LAB_1074cbe58;
          }
          if ((uVar18 & 1) != 0) {
            if (*(long *)(lVar21 + 0x168) != *(long *)(lVar21 + 0x170)) {
              puVar9 = (undefined1 *)(lVar21 + 0x100);
              FUN_1074d0144();
              uVar19 = (uint)puVar9;
              goto LAB_1074cbe58;
            }
            goto LAB_1074cbe34;
          }
          uVar19 = 0;
        }
        uVar19 = uVar19 | uVar18;
      }
      else {
        uVar19 = 0;
      }
      if ((uVar6 & 0x101) == 0x101) {
        if ((int)ppuVar25 != 0) {
          func_0x0001074d40e8();
          func_0x00010781a1c0();
          if ((int)puVar9 != 0) {
            func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xfff7);
          }
        }
        func_0x0001074d40e8();
        func_0x0001078190f0();
      }
      else {
        if ((int)ppuVar25 != 0) {
          func_0x0001074d40e8();
          func_0x000107819704();
          func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xfff7);
        }
        func_0x0001074d40e8();
        func_0x0001078187ec();
      }
      if (((uVar19 | (uint)puVar9) & 1) != 0) {
        func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xffef);
      }
    }
    puVar15 = (undefined8 *)(puVar24 + 8);
  } while( true );
}



/* Entry: 1074cbaf4; end: 1074cc01b;  */

undefined1 * FUN_1074cbaf4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plVar15;
  int extraout_w10;
  undefined1 *puVar16;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  double dVar26;
  ulong uVar27;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [24];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [56];
  undefined1 auStack_3b8 [56];
  undefined1 auStack_380 [56];
  char cStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 *puStack_258;
  long lStack_248;
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  undefined1 *puStack_c8;
  undefined8 uStack_18;
  undefined8 *puVar17;
  
  func_0x0001074d40b4();
  lVar23 = param_1;
  func_0x0001074d3a98();
  iVar7 = (int)lVar23;
  uStack_18 = extraout_x8;
  func_0x00010785f1f4();
  uVar8 = iVar7 + 0x110;
  func_0x00010724e330();
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar23 = *(long *)(param_1 + 8) + 0x20;
  }
  else {
    lVar23 = 0;
  }
  puVar9 = auStack_438;
  func_0x0001078696e8();
  puStack_460 = &UNK_10e52b660;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_10745f750(auStack_1a8,*(undefined8 *)(param_1 + 0x70));
    func_0x00010726c924(auStack_438,auStack_1a8);
    func_0x00010726b264(auStack_1a8);
    lVar24 = param_1 + 0x78;
    func_0x0001074d4aec(*(undefined8 *)(param_1 + 0x18));
    puVar9 = (undefined1 *)0x0;
    if (lVar24 != 0) {
      func_0x0001074d4ad8(auStack_1a8);
      FUN_1074d0124(&puStack_340,auStack_1a8);
      uVar4 = uStack_448;
      uVar3 = uStack_450;
      uVar10 = uStack_458;
      puVar2 = puStack_460;
      uStack_458 = uStack_338;
      puStack_460 = puStack_340;
      uStack_448 = uStack_328;
      uStack_450 = uStack_330;
      uStack_338 = uVar10;
      puStack_340 = puVar2;
      uStack_328 = uVar4;
      uStack_330 = uVar3;
      func_0x00010726e4c8(&puStack_340);
      uStack_440 = uStack_188;
      puVar9 = auStack_1a8;
      func_0x00010726e4c8();
    }
  }
  puStack_478 = &uStack_470;
  uStack_470 = 0;
  uStack_468 = 0;
  plVar15 = (long *)(param_1 + 0x48);
  uVar25 = param_4;
  do {
    lVar24 = *plVar15;
    uVar5 = lVar24 == param_1 + 0x40;
    if ((bool)uVar5) {
      func_0x00010002c948(&puStack_478);
      func_0x00010726e4c8(&puStack_460);
      puVar9 = auStack_438;
      func_0x00010726b264(puVar9);
      func_0x0001074d39e4(uStack_18);
      if ((bool)uVar5) {
        return puVar9;
      }
      ___stack_chk_fail();
      func_0x00010726e4c8(&puStack_460);
      puVar9 = auStack_438;
      func_0x00010726b264();
      func_0x0001074d3bc4();
      puVar14 = (undefined1 *)0x0;
      puVar17 = (undefined8 *)(puVar9 + 0x48);
      while (puVar16 = (undefined1 *)*puVar17, puVar16 != puVar9 + 0x40) {
        puVar14 = puVar14 + (*(long *)(*(long *)(puVar16 + 0x10) + 0x80) -
                            *(long *)(*(long *)(puVar16 + 0x10) + 0x78)) / 0x670;
        puVar17 = (undefined8 *)(puVar16 + 8);
      }
      return puVar14;
    }
    if ((*(char *)(lVar24 + 0xb8) != '\x01') || (*(long *)(lVar24 + 0xa8) == 0)) {
      lVar21 = *(long *)(lVar24 + 0x10);
      if (*(char *)(param_1 + 0x68) == '\x01') {
        dVar26 = *(double *)(param_3 + 0x78);
        _log2(dVar26);
        uVar27 = (ulong)(uint)(float)dVar26;
        lVar20 = *(long *)(param_1 + 0x18);
        func_0x0001077512dc(uVar27,&puStack_340);
        lStack_248 = lVar21 + 0xab4;
        puStack_258 = auStack_438;
        func_0x000107751334(auStack_1a8,&puStack_340);
        func_0x000107267da8(&puStack_340);
        if ((*(int *)(lVar23 + 0x1b0) == 0) || ((*(byte *)(lVar23 + 400) >> 1 & 1) != 0)) {
          func_0x0001074d4918();
          uVar18 = 0;
          lVar22 = *(long *)(lVar21 + 0x80);
          for (lVar20 = *(long *)(lVar21 + 0x78); lVar20 != lVar22; lVar20 = lVar20 + 0x670) {
            lVar13 = lVar21;
            FUN_1074d01dc(uVar27,lVar21,lVar20);
            uVar18 = uVar18 | (uint)lVar13;
          }
        }
        else {
          uVar18 = 0;
          lVar13 = *(long *)(lVar21 + 0x80);
          for (lVar22 = *(long *)(lVar21 + 0x78); lVar22 != lVar13; lVar22 = lVar22 + 0x670) {
            uVar10 = *(undefined8 *)(lVar22 + 0x660);
            func_0x0001074d42f0(uVar10);
            (*extraout_x8_00)();
            func_0x00010726236c(auStack_380);
            if (cStack_348 == '\x01') {
              ppuVar11 = &puStack_460;
              func_0x000107869b38(&puStack_340,ppuVar11,auStack_380);
              func_0x00010786967c();
              FUN_1073dcf84(auStack_408,&puStack_340,ppuVar11);
              FUN_1073de9d8(&puStack_340);
            }
            else {
              func_0x00010786967c();
              func_0x000107277f0c(auStack_408,uVar10);
            }
            uStack_418 = *(undefined8 *)(lVar22 + 0x668);
            uVar10 = *(undefined8 *)(lVar22 + 0x660);
            uStack_420 = uVar10;
            if (*(long *)(lVar22 + 0x668) != 0) {
              do {
                func_0x0001074d41f4();
              } while (extraout_w10 != 0);
            }
            func_0x000104c2fe00(auStack_3f0,lVar20 + 0x40);
            func_0x000104c2fe00(auStack_3b8,lVar20 + 0x78);
            func_0x0001073c4f74(&puStack_340,auStack_3f0);
            func_0x000107751444(auStack_1a8,&uStack_420,&puStack_340);
            puStack_c8 = auStack_408;
            func_0x0001074d4918();
            func_0x000107267e8c(&puStack_340);
            func_0x000107267eac(auStack_3f0);
            func_0x000107267e44(&uStack_420);
            lVar12 = lVar21;
            FUN_1074d01dc(uVar10,lVar21,lVar22);
            uVar18 = uVar18 | (uint)lVar12;
            func_0x00010726b264(auStack_408);
            func_0x00010724b3d8(auStack_380);
          }
          uVar25 = param_4 & 0xffffffff;
        }
        puVar9 = auStack_1a8;
        func_0x000107267da8();
        cVar1 = *(char *)(*(long *)(lVar21 + 0x28) + 0x298);
        plVar15 = *(long **)(*(long *)(lVar21 + 0x28) + 0x778);
        if (*plVar15 == plVar15[1]) {
          bVar6 = false;
        }
        else {
          bVar6 = *(long *)(lVar21 + 0x168) != *(long *)(lVar21 + 0x170);
        }
        uVar19 = 0;
        if ((cVar1 != '\0') || (bVar6)) {
LAB_1074cbe58:
          if ((cVar1 == '\0' & uVar18) == 1) {
            if (*(long *)(lVar21 + 0x480) != *(long *)(lVar21 + 0x488)) {
              puVar9 = (undefined1 *)(lVar21 + 0x418);
              FUN_1074d0144();
              uVar19 = uVar19 | (uint)puVar9;
            }
            if (*(long *)(lVar21 + 0x790) != *(long *)(lVar21 + 0x798)) {
              puVar9 = (undefined1 *)(lVar21 + 0x728);
              FUN_1074d0144();
              uVar19 = uVar19 | (uint)puVar9;
            }
          }
        }
        else {
          if ((*(byte *)(lVar21 + 0xa60) & 1) != 0) {
LAB_1074cbe34:
            uVar19 = 0;
            goto LAB_1074cbe58;
          }
          if ((uVar18 & 1) != 0) {
            if (*(long *)(lVar21 + 0x168) != *(long *)(lVar21 + 0x170)) {
              puVar9 = (undefined1 *)(lVar21 + 0x100);
              FUN_1074d0144();
              uVar19 = (uint)puVar9;
              goto LAB_1074cbe58;
            }
            goto LAB_1074cbe34;
          }
          uVar19 = 0;
        }
        uVar19 = uVar19 | uVar18;
      }
      else {
        uVar19 = 0;
      }
      if ((uVar8 & 0x101) == 0x101) {
        if ((int)uVar25 != 0) {
          func_0x0001074d40e8();
          func_0x00010781a1c0();
          if ((int)puVar9 != 0) {
            func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xfff7);
          }
        }
        func_0x0001074d40e8();
        func_0x0001078190f0();
      }
      else {
        if ((int)uVar25 != 0) {
          func_0x0001074d40e8();
          func_0x000107819704();
          func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xfff7);
        }
        func_0x0001074d40e8();
        func_0x0001078187ec();
      }
      if (((uVar19 | (uint)puVar9) & 1) != 0) {
        func_0x0001074d46c8(*(ushort *)(lVar21 + 0x74) & 0xffef);
      }
    }
    plVar15 = (long *)(lVar24 + 8);
  } while( true );
}



/* Entry: 1074cc01c; end: 1074cc05b;  */

long FUN_1074cc01c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = 0;
  plVar3 = (long *)(param_1 + 0x48);
  while (lVar2 = *plVar3, lVar2 != param_1 + 0x40) {
    lVar1 = (*(long *)(*(long *)(lVar2 + 0x10) + 0x80) - *(long *)(*(long *)(lVar2 + 0x10) + 0x78))
            / 0x670 + lVar1;
    plVar3 = (long *)(lVar2 + 8);
  }
  return lVar1;
}



/* Entry: 1074cc05c; end: 1074cc89f;  */

void FUN_1074cc05c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar18;
  long *unaff_x24;
  undefined8 *puVar19;
  long *unaff_x26;
  long *plVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined2 *puStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_178 [33];
  undefined8 uStack_70;
  
  func_0x0001074d4778();
  func_0x0001074d3a98();
  uStack_70 = extraout_x8_00;
  func_0x00010002b838(&uStack_308,&UNK_10f415ba9);
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_308 = 0;
  FUN_10743cc34(&uStack_280,&stack0xfffffffffffffd10,1);
  puVar4 = &uStack_280;
  FUN_10743d7bc(auStack_178);
  func_0x000107288cd8(&uStack_280);
  func_0x000107262330(&stack0xfffffffffffffd10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_308);
  uVar3 = SUB81(param_4,0);
  uVar9 = SUB81(param_5,0);
  uVar2 = *(char *)(unaff_x20 + 0x60) == '\x02';
  if ((bool)uVar2) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
  }
  else {
    if ((*(char *)(unaff_x20 + 0xad) == '\x01') && ((*(byte *)(unaff_x20 + 0xb0) >> 6 & 1) != 0)) {
      plVar17 = (long *)(unaff_x21 + 0x7e0);
      plVar10 = *(long **)(unaff_x21 + 0x7e0);
      while (plVar10 != (long *)0x0) {
        if (*(uint *)(plVar10 + 4) < 0xb) {
          *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) + 1;
          plVar10 = (long *)*plVar10;
        }
        else {
          uVar12 = *(ulong *)(unaff_x21 + 0x7d8);
          uVar11 = plVar10[1];
          uVar13 = uVar12 - 1;
          if ((uVar12 & uVar13) == 0) {
            uVar11 = uVar13 & uVar11;
          }
          else if (uVar12 <= uVar11) {
            uVar15 = 0;
            if (uVar12 != 0) {
              uVar15 = uVar11 / uVar12;
            }
            uVar11 = uVar11 - uVar15 * uVar12;
          }
          unaff_x24 = (long *)*plVar10;
          lVar14 = *(long *)(unaff_x21 + 2000);
          plVar20 = *(long **)(lVar14 + uVar11 * 8);
          do {
            plVar7 = plVar20;
            plVar20 = (long *)*plVar7;
          } while ((long *)*plVar7 != plVar10);
          plVar20 = unaff_x24;
          if (plVar7 == plVar17) {
LAB_1074cc1f8:
            if (unaff_x24 == (long *)0x0) {
LAB_1074cc230:
              *(undefined8 *)(lVar14 + uVar11 * 8) = 0;
              plVar20 = (long *)*plVar10;
              goto LAB_1074cc238;
            }
            uVar15 = unaff_x24[1];
            if ((uVar12 & uVar13) == 0) {
              uVar16 = uVar15 & uVar13;
            }
            else {
              uVar16 = uVar15;
              if (uVar12 <= uVar15) {
                uVar16 = 0;
                if (uVar12 != 0) {
                  uVar16 = uVar15 / uVar12;
                }
                uVar16 = uVar15 - uVar16 * uVar12;
              }
            }
            if (uVar16 != uVar11) goto LAB_1074cc230;
LAB_1074cc240:
            if ((uVar12 & uVar13) == 0) {
              uVar15 = uVar15 & uVar13;
            }
            else if (uVar12 <= uVar15) {
              uVar13 = 0;
              if (uVar12 != 0) {
                uVar13 = uVar15 / uVar12;
              }
              uVar15 = uVar15 - uVar13 * uVar12;
            }
            if (uVar15 != uVar11) {
              *(long **)(lVar14 + uVar15 * 8) = plVar7;
              plVar20 = (long *)*plVar10;
            }
          }
          else {
            uVar15 = plVar7[1];
            if ((uVar12 & uVar13) == 0) {
              uVar15 = uVar15 & uVar13;
            }
            else if (uVar12 <= uVar15) {
              uVar16 = 0;
              if (uVar12 != 0) {
                uVar16 = uVar15 / uVar12;
              }
              uVar15 = uVar15 - uVar16 * uVar12;
            }
            if (uVar15 != uVar11) goto LAB_1074cc1f8;
LAB_1074cc238:
            if (plVar20 != (long *)0x0) {
              uVar15 = plVar20[1];
              goto LAB_1074cc240;
            }
          }
          *plVar7 = (long)plVar20;
          *plVar10 = 0;
          *(long *)(unaff_x21 + 0x7e8) = *(long *)(unaff_x21 + 0x7e8) + -1;
          uStack_280._0_2_ = SUB82(plVar10,0);
          uStack_280._2_1_ = (undefined1)((ulong)plVar10 >> 0x10);
          uStack_280._3_1_ = (undefined1)((ulong)plVar10 >> 0x18);
          uStack_280._4_4_ = (undefined4)((ulong)plVar10 >> 0x20);
          plStack_270 = (long *)0x1;
          uStack_278 = plVar17;
          FUN_1074d3988(&uStack_280);
          plVar10 = unaff_x24;
        }
      }
      while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
        *(undefined4 *)(plVar17 + 0x13) = 0;
      }
    }
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    iVar1 = *(int *)(*(long *)(unaff_x21 + 0x18) + 0x780);
    uStack_330 = 0;
    uStack_328 = 0;
    plVar17 = *(long **)(unaff_x20 + 0x18);
    puStack_338 = &uStack_330;
    FUN_1074d5bec();
    uStack_280._4_4_ = 7;
    uStack_278._0_4_ = 0;
    uStack_278._4_4_ = 0;
    plStack_270 = (long *)CONCAT53(plStack_270._3_5_,0x10101);
    param_3 = &uStack_280;
    (**(code **)(*plVar17 + 0x80))(plVar17,&stack0xfffffffffffffd10);
    plVar17 = *(long **)(unaff_x20 + 0x18);
    uStack_280._2_1_ = 1;
    uStack_280._0_2_ = 0x100;
    (**(code **)(*plVar17 + 0x88))(plVar17,&uStack_280);
    puVar4 = (undefined8 *)**(undefined8 **)(unaff_x21 + 0x28);
    puVar5 = (undefined8 *)(*(undefined8 **)(unaff_x21 + 0x28))[1];
    while( true ) {
      uVar3 = SUB81(param_4,0);
      uVar9 = SUB81(param_5,0);
      if (puVar4 == puVar5) break;
      uVar18 = *puVar4;
      param_3 = (undefined8 *)(ulong)*(byte *)(unaff_x20 + 0x60);
      func_0x0001074d461c();
      FUN_1074e3c98();
      if (plVar17 != (long *)0x0) {
        lVar14 = *plVar17;
        puVar6 = (undefined8 *)(lVar14 + 200);
        FUN_10745ac14(puVar6,*(long *)(unaff_x21 + 0x18) + 8);
        uStack_280._0_2_ = SUB82(&puStack_338,0);
        uStack_280._2_1_ = (undefined1)((ulong)&puStack_338 >> 0x10);
        uStack_280._3_1_ = (undefined1)((ulong)&puStack_338 >> 0x18);
        uStack_280._4_4_ = (undefined4)((ulong)&puStack_338 >> 0x20);
        uStack_278._0_4_ = (undefined4)uVar18;
        uStack_278._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
        puStack_260 = puStack_338;
        uVar3 = *(long *)(lVar14 + 0x480) == *(long *)(lVar14 + 0x488);
        uVar2 = 1;
        plStack_270 = plVar17;
        puStack_268 = (undefined2 *)puVar6;
        if ((bool)uVar3) {
LAB_1074cc444:
          func_0x0001074d47e4();
          if (!(bool)uVar2) {
            if (iVar1 != 0) goto LAB_1074cc454;
            if ((*(char *)(unaff_x20 + 0xad) == '\x01') &&
               ((*(byte *)(unaff_x20 + 0xb0) >> 6 & 1) != 0)) {
              func_0x0001074d4238();
              func_0x0001074d47d8(*(undefined8 *)(unaff_x21 + 0x18));
              func_0x0001074d47c0();
              func_0x0001074d460c();
            }
            else {
              func_0x0001074d4838(plVar17);
              func_0x0001074d4308();
              FUN_1074cd474();
            }
          }
        }
        else {
          if (iVar1 == 0) {
            unaff_x24 = (long *)(lVar14 + 0x480);
            uVar2 = *(char *)(unaff_x20 + 0xad) == '\x01';
            if (((bool)uVar2) && ((*(byte *)(unaff_x20 + 0xb0) >> 6 & 1) != 0)) {
              func_0x0001074d4238();
              func_0x0001074d47d8(*(undefined8 *)(unaff_x21 + 0x18));
              func_0x0001074d47c0();
              func_0x0001074d460c();
            }
            else {
              func_0x0001074d4838();
              func_0x0001074d4308();
              FUN_1074cd474();
            }
            goto LAB_1074cc444;
          }
          param_5 = (undefined8 *)0x1;
          FUN_1074cc8a0(&uStack_280,*(long *)(lVar14 + 0x480),*(long *)(lVar14 + 0x488),1);
          func_0x0001074d47e4();
          if (!(bool)uVar3) {
LAB_1074cc454:
            param_5 = (undefined8 *)0x1;
            FUN_1074cc8a0(&uStack_280);
          }
        }
        uVar2 = *(long *)(lVar14 + 0x168) == *(long *)(lVar14 + 0x170);
        if (!(bool)uVar2) {
          if (iVar1 == 0) {
            if ((*(char *)(unaff_x20 + 0xad) == '\x01') &&
               ((*(byte *)(unaff_x20 + 0xb0) >> 6 & 1) != 0)) {
              func_0x0001074d4238();
              uVar2 = false;
              if (*(long *)(lVar14 + 0x480) == *(long *)(lVar14 + 0x488)) {
                uVar2 = *unaff_x26 == *unaff_x24;
              }
              func_0x0001074d47d8(*(undefined8 *)(unaff_x21 + 0x18));
              FUN_1074cdc24();
            }
            else {
              uVar2 = false;
              if (*(long *)(lVar14 + 0x480) == *(long *)(lVar14 + 0x488)) {
                uVar2 = *unaff_x26 == *unaff_x24;
              }
              func_0x0001074d461c();
              FUN_1074ce3a0();
              param_5 = puVar6;
            }
          }
          else {
            if (*(long *)(lVar14 + 0x480) == *(long *)(lVar14 + 0x488)) {
              uVar2 = *unaff_x26 == *unaff_x24;
              param_5 = (undefined8 *)(ulong)!(bool)uVar2;
            }
            else {
              param_5 = (undefined8 *)0x1;
              uVar2 = false;
            }
            FUN_1074cc8a0(&uStack_280,*(long *)(lVar14 + 0x168),*(long *)(lVar14 + 0x170),0);
          }
        }
        if (*(long *)(lVar14 + 0xa38) != 0) {
          func_0x0001074d4c34();
        }
        if (*(long *)(lVar14 + 0xa48) != 0) {
          func_0x0001074d4c34();
        }
        FUN_1074cec24(&stack0xfffffffffffffd10,0);
        if (*(long *)(lVar14 + 0xa40) == 0) {
          param_3 = (undefined8 *)0x0;
        }
        else {
          func_0x0001074d4c34();
          param_3 = (undefined8 *)(ulong)!(bool)uVar2;
        }
        if (*(long *)(lVar14 + 0xa50) == 0) {
          param_4 = (undefined8 *)0x0;
        }
        else {
          func_0x0001074d4c34();
          param_4 = (undefined8 *)(ulong)!(bool)uVar2;
        }
        plVar17 = (long *)&stack0xfffffffffffffd10;
        FUN_1074cec24(plVar17,1);
      }
      puVar4 = puVar4 + 1;
    }
    puVar4 = puStack_338;
    if (iVar1 != 0) {
      while( true ) {
        uVar3 = SUB81(param_4,0);
        uVar9 = SUB81(param_5,0);
        if (puVar4 == &uStack_330) break;
        if (*(char *)((long)puVar4 + 0x44) == '\0') {
          if ((*(char *)(unaff_x20 + 0xad) == '\0') || ((*(byte *)(unaff_x20 + 0xb0) >> 6 & 1) == 0)
             ) {
            uVar18 = puVar4[4];
            uStack_280._0_2_ = (undefined2)uVar18;
            uStack_280._2_1_ = (undefined1)((ulong)uVar18 >> 0x10);
            uStack_280._3_1_ = (undefined1)((ulong)uVar18 >> 0x18);
            uStack_280._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
            uStack_278._0_4_ = 0;
            param_3 = (undefined8 *)puVar4[6];
            param_5 = (undefined8 *)puVar4[7];
            param_4 = &uStack_280;
            FUN_1074ce3a0();
          }
          else {
            FUN_1074cd0b8(unaff_x21 + 2000,puVar4[5]);
            func_0x0001074d4808();
            func_0x0001074d47d8();
            FUN_1074cdc24();
          }
        }
        else if ((*(char *)(unaff_x20 + 0xad) == '\0') ||
                ((*(byte *)(unaff_x20 + 0xb0) >> 6 & 1) == 0)) {
          uVar18 = puVar4[4];
          uStack_280._0_2_ = (undefined2)uVar18;
          uStack_280._2_1_ = (undefined1)((ulong)uVar18 >> 0x10);
          uStack_280._3_1_ = (undefined1)((ulong)uVar18 >> 0x18);
          uStack_280._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
          uStack_278._0_4_ = 0;
          param_3 = *(undefined8 **)puVar4[6];
          param_4 = (undefined8 *)((long *)puVar4[6])[2];
          param_5 = &uStack_280;
          FUN_1074cd474();
        }
        else {
          FUN_1074cd0b8(unaff_x21 + 2000,puVar4[5]);
          func_0x0001074d4808();
          func_0x0001074d47d8();
          FUN_1074cca2c();
        }
        func_0x00010002c7d4();
      }
    }
    uVar2 = 1;
    puVar4 = &uStack_320;
    FUN_10748be74(extraout_x8);
    func_0x0001074d3570(uStack_330);
    func_0x0001072bc5c4(&uStack_320);
  }
  FUN_10743d7e4();
  func_0x0001074d39e4(uStack_70);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d3570(uStack_330);
  func_0x0001072bc5c4(&uStack_320);
  puVar5 = auStack_178;
  FUN_10743d7e4();
  func_0x0001074d3bc4();
LAB_1074cc8d4:
  if (puVar4 == param_3) {
    return;
  }
  plVar20 = (long *)*puVar5;
  uVar18 = puVar5[3];
  plVar10 = (long *)puVar5[4];
  plVar17 = plVar20 + 1;
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  puVar19 = puVar6 + 4;
  *puVar19 = puVar4;
  uVar21 = *(undefined4 *)(puVar4 + 4);
  uVar22 = puVar5[1];
  puVar6[6] = puVar5[2];
  puVar6[5] = uVar22;
  puVar6[7] = uVar18;
  *(undefined4 *)(puVar6 + 8) = uVar21;
  *(undefined1 *)((long)puVar6 + 0x44) = uVar3;
  *(undefined1 *)((long)puVar6 + 0x45) = uVar9;
  if (plVar10 == plVar17) {
LAB_1074cc960:
    plVar7 = plVar10;
    if (plVar10 != (long *)*plVar20) {
      func_0x00010002c810();
      puVar8 = puVar19;
      func_0x0001074d03b8(puVar19,plVar7 + 4);
      if (((ulong)puVar8 & 1) != 0) {
        while (plVar10 = plVar17, plVar7 = (long *)*plVar17, (long *)*plVar17 != (long *)0x0) {
          while (plVar17 = plVar7, puVar8 = puVar19, func_0x0001074d03b8(puVar19,plVar17 + 4),
                (int)puVar8 == 0) {
            plVar7 = (long *)plVar17[1];
            if ((long *)plVar17[1] == (long *)0x0) goto LAB_1074cc9b4;
          }
        }
        goto LAB_1074cc9d0;
      }
    }
    plVar17 = plVar10;
    if (*plVar10 != 0) {
      plVar10 = plVar7 + 1;
      plVar17 = plVar7;
    }
  }
  else {
    plVar7 = plVar10 + 4;
    func_0x0001074d03b8(plVar7,puVar19);
    if (((ulong)plVar7 & 1) == 0) goto LAB_1074cc960;
    while (plVar10 = plVar17, plVar7 = (long *)*plVar17, (long *)*plVar17 != (long *)0x0) {
      while( true ) {
        plVar17 = plVar7;
        plVar10 = plVar17 + 4;
        func_0x0001074d03b8(plVar10,puVar19);
        if ((int)plVar10 == 0) break;
        plVar7 = (long *)plVar17[1];
        if ((long *)plVar17[1] == (long *)0x0) goto LAB_1074cc9b4;
      }
    }
  }
  goto LAB_1074cc9d0;
LAB_1074cc9b4:
  plVar10 = plVar17 + 1;
LAB_1074cc9d0:
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = plVar17;
  *plVar10 = (long)puVar6;
  if (*(long *)*plVar20 != 0) {
    *plVar20 = *(long *)*plVar20;
  }
  func_0x00010002c5b0(plVar20[1],puVar6);
  plVar20[2] = plVar20[2] + 1;
  puVar5[4] = puVar6;
  puVar4 = puVar4 + 5;
  goto LAB_1074cc8d4;
}



/* Entry: 1074cc8a0; end: 1074cca2b;  */

void FUN_1074cc8a0(undefined8 *param_1,long param_2,long param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
LAB_1074cc8d4:
  if (param_2 == param_3) {
    return;
  }
  plVar8 = (long *)*param_1;
  uVar1 = param_1[3];
  plVar5 = (long *)param_1[4];
  plVar6 = plVar8 + 1;
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  plVar7 = puVar2 + 4;
  *plVar7 = param_2;
  uVar9 = *(undefined4 *)(param_2 + 0x20);
  uVar10 = param_1[1];
  puVar2[6] = param_1[2];
  puVar2[5] = uVar10;
  puVar2[7] = uVar1;
  *(undefined4 *)(puVar2 + 8) = uVar9;
  *(undefined1 *)((long)puVar2 + 0x44) = param_4;
  *(undefined1 *)((long)puVar2 + 0x45) = param_5;
  if (plVar5 == plVar6) {
LAB_1074cc960:
    plVar3 = plVar5;
    if (plVar5 != (long *)*plVar8) {
      func_0x00010002c810();
      plVar4 = plVar7;
      func_0x0001074d03b8(plVar7,plVar3 + 4);
      if (((ulong)plVar4 & 1) != 0) {
        while (plVar5 = plVar6, plVar3 = (long *)*plVar6, (long *)*plVar6 != (long *)0x0) {
          while (plVar6 = plVar3, plVar5 = plVar7, func_0x0001074d03b8(plVar7,plVar6 + 4),
                (int)plVar5 == 0) {
            plVar3 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) goto LAB_1074cc9b4;
          }
        }
        goto LAB_1074cc9d0;
      }
    }
    plVar6 = plVar5;
    if (*plVar5 != 0) {
      plVar5 = plVar3 + 1;
      plVar6 = plVar3;
    }
  }
  else {
    plVar3 = plVar5 + 4;
    func_0x0001074d03b8(plVar3,plVar7);
    if (((ulong)plVar3 & 1) == 0) goto LAB_1074cc960;
    while (plVar5 = plVar6, plVar3 = (long *)*plVar6, (long *)*plVar6 != (long *)0x0) {
      while( true ) {
        plVar6 = plVar3;
        plVar5 = plVar6 + 4;
        func_0x0001074d03b8(plVar5,plVar7);
        if ((int)plVar5 == 0) break;
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_1074cc9b4;
      }
    }
  }
  goto LAB_1074cc9d0;
LAB_1074cc9b4:
  plVar5 = plVar6 + 1;
LAB_1074cc9d0:
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar6;
  *plVar5 = (long)puVar2;
  if (*(long *)*plVar8 != 0) {
    *plVar8 = *(long *)*plVar8;
  }
  func_0x00010002c5b0(plVar8[1],puVar2);
  plVar8[2] = plVar8[2] + 1;
  param_1[4] = puVar2;
  param_2 = param_2 + 0x28;
  goto LAB_1074cc8d4;
}



/* Entry: 1074cca2c; end: 1074cd0b7;  */

long * FUN_1074cca2c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                    byte *param_6,undefined8 param_7,undefined8 *param_8)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  byte *pbVar15;
  uint uVar16;
  float extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar17;
  undefined1 uVar18;
  long extraout_x9;
  undefined8 extraout_x9_00;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  byte *pbVar26;
  long *plVar27;
  ushort uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined8 in_stack_00000060;
  char cStack0000000000000070;
  byte bStack0000000000000071;
  undefined8 *in_stack_00000078;
  long *plStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  ulong uStack_670;
  long *plStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  byte *pbStack_640;
  long *plStack_638;
  undefined8 *puStack_630;
  code *pcStack_628;
  undefined1 uStack_620;
  ulong uStack_610;
  byte *pbStack_608;
  undefined8 *puStack_600;
  uint uStack_5f4;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 auStack_5d4 [44];
  undefined1 auStack_474 [284];
  undefined8 uStack_358;
  undefined4 uStack_350;
  long alStack_348 [2];
  ulong uStack_338;
  ulong uStack_330;
  byte abStack_328 [64];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [56];
  undefined1 uStack_260;
  undefined1 uStack_258;
  undefined1 uStack_220;
  undefined1 auStack_218 [16];
  undefined1 uStack_208;
  undefined1 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [56];
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined4 uStack_60;
  undefined8 uStack_10;
  
  func_0x0001074d40b4();
  lVar21 = param_4;
  pbStack_608 = param_6;
  uStack_5f0 = param_7;
  func_0x0001074d3a98();
  uVar34 = *(ulong *)(lVar21 + 0x28);
  uVar31 = param_5 + 0x20;
  uVar19 = uVar34;
  lStack_5e8 = param_5;
  uStack_10 = extraout_x8;
  FUN_1074d0444();
  puVar7 = (undefined8 *)(param_4 + 0xe8);
  uStack_338 = uVar31;
  uStack_330 = uVar19;
  FUN_1074d04ec(puVar7,param_2);
  if (*(char *)(uVar34 + 0x298) == '\0') {
    uStack_5f4 = 0;
  }
  else {
    uStack_5f4 = (uint)(*(char *)(uVar34 + 0x178) == '\0');
  }
  uVar36 = 0;
  if (((*(ushort *)(param_4 + 0x74) >> 10 & 1) == 0) &&
     (uVar36 = 0x3f800000, *(char *)(uVar34 + 0x2e9) == '\0')) {
    uVar36 = *(undefined4 *)((long)param_8 + 0x1bc);
  }
  plVar33 = (long *)(ulong)bStack0000000000000071;
  if ((*(ushort *)(param_4 + 0x74) >> 8 & 1) == 0) {
    pbVar26 = (byte *)0x0;
  }
  else {
    pbVar26 = (byte *)(ulong)(*(char *)(uVar34 + 0x1b8) != '\0');
  }
  plStack_5e0 = *(long **)(*(long *)(*(long *)(param_3 + 0x220) + 8) + 0x20);
  uVar4 = bStack0000000000000071 == 0;
  uVar16 = 5;
  if ((bool)uVar4) {
    uVar16 = 1;
  }
  puStack_188 = puVar7 + 0x14;
  uVar8 = param_8[0x12];
  uStack_190 = (byte *)CONCAT44(uStack_190._4_4_,0x27);
  dVar35 = (double)(ulong)*(uint *)(param_8 + 0xf);
  uStack_180 = (undefined8 *)CONCAT44(*(uint *)(param_8 + 0xf),uVar16);
  uVar2 = (ulong)uStack_178 >> 0x30;
  uVar1 = (uint)uStack_178;
  uStack_178._0_6_ = CONCAT24(0x501,uVar1 & 0xff000000);
  uStack_178 = (byte *)CONCAT26((short)uVar2,(undefined6)uStack_178);
  uStack_164 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_170 = 1;
  uStack_15c = 0x1010101;
  uStack_158 = 0xf01;
  pbVar15 = (byte *)(param_4 + (ulong)uVar16 * 0x10 + 0xb48);
  uStack_610 = uVar19;
  puStack_600 = param_1;
  FUN_1073ca29c(alStack_348,uVar8,pbVar15,&uStack_190);
  iVar6 = (int)uVar8;
  puVar30 = &uStack_358;
  puVar29 = &uStack_358;
  if (alStack_348[0] != 0) {
    func_0x0001074d3adc();
    (*extraout_x8_00)();
    uVar4 = 0;
    if (iVar6 == 2) {
      func_0x0001074d3c9c(param_8[5]);
      dVar35 = (double)(ulong)(uint)(float)dVar35;
      FUN_1074d0524(dVar35,param_8[3],alStack_348[0],uStack_5f0,lStack_5e8 + 0x20,puVar7 + 0x17);
      uVar14 = (undefined4)alStack_348[0];
      func_0x0001074d3c9c(param_8[5]);
      uVar8 = *(undefined8 *)(param_4 + 0x410);
      FUN_1074d0604((float)dVar35);
      uStack_620 = 0;
      uStack_358 = uVar8;
      uStack_350 = uVar14;
      FUN_1074d0630(uVar36,auStack_474,pbVar26,&uStack_338,(long)plStack_5e0 + 4,uStack_5f4,param_3,
                    param_8[5],0);
      if ((uVar31 & 0xff) == 0) {
        func_0x0001074d4a48();
        func_0x0001074d48ec();
        func_0x0001074d4478();
      }
      dVar35 = (double)(ulong)*(uint *)(param_8 + 0xf);
      uStack_620 = 0;
      func_0x0001074d45b4(auStack_5d4,auStack_474,&uStack_358);
      if (bStack0000000000000071 != 0) {
        func_0x0001074d3e40(*(undefined8 *)(*(long *)param_8[3] + 0x90));
      }
      func_0x0001074d3d2c(*(undefined4 *)(uVar34 + 0x1b0));
      plVar33 = plStack_5e0;
      puVar7 = puStack_600;
      if ((extraout_x9 == 0) || (dVar35 = (double)(ulong)(uint)extraout_w8, extraout_w8 == 1.0)) {
        uVar28 = *(ushort *)(param_4 + 0x74);
      }
      else {
        uVar28 = 1;
      }
      if ((uVar31 & 0xff00) == 0) {
        uVar4 = 3;
        bVar5 = true;
      }
      else {
        FUN_1074163dc(param_8[5]);
        bVar5 = dVar35 == 0.0;
        uVar4 = 3;
        if ((bool)bVar5) {
          uVar4 = 0;
        }
      }
      pbVar26 = uStack_190;
      if ((((_cStack0000000000000070 & 1) == 0) &&
          (lVar21 = param_8[5], (*(byte *)(lVar21 + 0x5c) & 1) == 0)) &&
         ((*(byte *)(lVar21 + 0x5d) & 1) == 0)) {
        uVar18 = 3;
        if (((*(byte *)(lVar21 + 0x5e) & 1) == 0) &&
           (bVar5 = ((*(byte *)(lVar21 + 0x5f) | uVar28) & 1) == 0, uVar18 = 3, (bool)bVar5)) {
          uVar18 = uVar4;
        }
      }
      else {
        uVar18 = 3;
      }
      uStack_190._5_3_ = SUB83(pbVar26,5);
      uStack_190._0_5_ = (uint5)CONCAT11(uVar18,uVar18);
      func_0x0001074d43f4(param_8[3]);
      func_0x0001074d454c();
      func_0x0001074d4030(param_8[3]);
      pbVar15 = (byte *)0x0;
      (*extraout_x8_01)();
      if (cStack0000000000000070 == '\0') {
        puVar30 = (undefined8 *)*puVar7;
        if (puVar30 == (undefined8 *)0x0) {
          func_0x0001074d4204(*param_8);
          func_0x0001074d40ac(auStack_1c8);
          func_0x0001074d4738();
          func_0x0001074d4290();
          puVar30 = puVar7;
          func_0x000107308dac(puVar7,&uStack_190);
          func_0x0001074d4aac();
          func_0x0001074d4c9c();
          if (puVar30 != (undefined8 *)0x0) {
            func_0x0001074d3aa8();
          }
          puVar30 = (undefined8 *)*puVar7;
        }
        if ((*(byte *)(puVar7 + 0xe) & 1) == 0) {
          (**(code **)(*(long *)puVar30[1] + 0x20))((long *)puVar30[1],auStack_5d4,*puVar30);
        }
        func_0x0001074d3f58(*(undefined8 *)(*(long *)param_8[3] + 0x90));
        lVar21 = param_4 + 0x6c0;
        func_0x000107459d08(lVar21);
        func_0x0001074d4a50();
        lVar11 = param_4 + 0x560;
        func_0x000107459cf8(lVar11);
        lVar12 = param_4 + 0x610;
        func_0x000107459cf8(lVar12);
        pbVar15 = pbStack_608;
        FUN_1074d09b4(param_8,pbStack_608,0,lVar21,lVar11,lVar12);
        *(undefined1 *)(puVar7 + 0xe) = 1;
      }
      else {
        pbVar26 = (byte *)(puVar7 + 2);
        if (*(long *)pbVar26 == 0) {
          func_0x0001074d4204(*param_8);
          func_0x0001074d40ac(auStack_1c8);
          func_0x0001074d4738();
          func_0x0001074d4290();
          pbVar15 = (byte *)&uStack_190;
          pbVar9 = pbVar26;
          func_0x000107308dac();
          func_0x0001074d4aac();
          func_0x0001074d4c9c();
          if (pbVar9 != (byte *)0x0) {
            func_0x0001074d3aa8();
          }
        }
        pbVar9 = (byte *)(puVar7 + 4);
        if (*(long *)pbVar9 == 0) {
          func_0x0001074d4204(*param_8);
          func_0x0001074d40ac(auStack_1c8);
          func_0x0001074d4738();
          func_0x0001074d4290();
          pbVar15 = (byte *)&uStack_190;
          pbVar10 = pbVar9;
          func_0x000107308dac();
          func_0x0001074d4aac();
          func_0x0001074d4c9c();
          if (pbVar10 != (byte *)0x0) {
            func_0x0001074d3aa8();
          }
        }
        uVar19 = uStack_610;
        abStack_328[0] = *(byte *)((long)puVar7 + 0x71) ^ 1;
        uStack_190 = abStack_328;
        puStack_188 = auStack_5d4;
        uStack_178 = pbStack_608;
        uStack_170 = (undefined4)param_4;
        uStack_16c = (undefined4)((ulong)param_4 >> 0x20);
        uStack_180 = param_8;
        if ((uStack_610 >> 0x28 & 1) != 0) {
          FUN_1074d093c(0x3f800000,&uStack_190);
          pbVar15 = pbVar26;
        }
        if ((uVar19 >> 0x30 & 1) != 0) {
          FUN_1074d093c(0,&uStack_190);
          pbVar15 = pbVar9;
        }
        *(undefined1 *)((long)puVar7 + 0x71) = 1;
      }
      FUN_1074cf488(&uStack_190,lStack_5e8 + 0x20);
      func_0x0001074d42e4(uStack_60);
      uVar8 = extraout_x9_00;
      if (!(bool)bVar5) {
        uVar8 = 0;
      }
      func_0x0001074d3d18(uVar8);
      puVar30 = (undefined8 *)(ulong)bVar5;
      param_8 = *(undefined8 **)(param_4 + 0x78);
      puVar7 = *(undefined8 **)(param_4 + 0x80);
      pbVar26 = abStack_328;
      func_0x0001074d4728();
      for (; uVar4 = param_8 == puVar7, !(bool)uVar4; param_8 = param_8 + 0xce) {
        if ((bVar5 != 0) && ((*(byte *)(param_8 + 6) & 6) != 0)) {
          func_0x0001074d42f0(param_8[0x58]);
          (*extraout_x8_02)();
          func_0x00010726236c(abStack_328);
          func_0x0001074d4a90(auStack_1c8,abStack_328);
          func_0x00010724b3d8(abStack_328);
          FUN_10748ee94(abStack_328,auStack_1c8);
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          func_0x000104c2f64c(auStack_2d0);
          func_0x000104c2f64c(auStack_298);
          uStack_260 = SUB81(plVar33,0);
          uStack_258 = 0;
          uStack_220 = 0;
          FUN_1074d0b14(auStack_218,param_8 + 0x37);
          uStack_208 = 0;
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          uStack_1d0 = 0;
          pbVar15 = abStack_328;
          func_0x00010748c200(in_stack_00000078);
          func_0x0001072bc64c(abStack_328);
          func_0x000104c2f714(auStack_1c8);
        }
      }
      func_0x00010745c048(&uStack_190);
      puVar29 = in_stack_00000078;
    }
  }
  plVar32 = alStack_348;
  func_0x00010730b734();
  func_0x0001074d39e4(uStack_10);
  if ((bool)uVar4) {
    return plVar32;
  }
  ___stack_chk_fail();
  plVar13 = plVar32;
  func_0x0001074d4c9c();
  if (plVar13 != (long *)0x0) {
    func_0x0001074d3aa8();
  }
  plVar13 = alStack_348;
  func_0x00010730b734();
  func_0x0001074d3bc4();
  pcStack_628 = FUN_1074cd0b8;
  plVar20 = plVar13 + 3;
  uStack_670 = uVar31;
  plStack_668 = plVar33;
  puStack_660 = puVar7;
  puStack_658 = param_8;
  puStack_650 = puVar30;
  puStack_648 = puVar29;
  pbStack_640 = pbVar26;
  plStack_638 = plVar32;
  puStack_630 = &stack0x00000060;
  func_0x00010784b274();
  plVar32 = (long *)plVar13[1];
  if (plVar32 != (long *)0x0) {
    uVar31 = (long)plVar32 - 1;
    if (((ulong)plVar32 & uVar31) == 0) {
      plVar33 = (long *)(uVar31 & (ulong)plVar20);
    }
    else {
      plVar33 = plVar20;
      if (plVar32 <= plVar20) {
        uVar19 = 0;
        if (plVar32 != (long *)0x0) {
          uVar19 = (ulong)plVar20 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar20 - uVar19 * (long)plVar32);
      }
    }
    plVar27 = *(long **)(*plVar13 + (long)plVar33 * 8);
    if (plVar27 != (long *)0x0) {
      do {
        while( true ) {
          plVar27 = (long *)*plVar27;
          if (plVar27 == (long *)0x0) goto LAB_1074cd178;
          plVar17 = (long *)plVar27[1];
          if (plVar17 != plVar20) break;
          plVar17 = plVar27 + 2;
          FUN_1074b07f0(plVar17,pbVar15);
          if (((ulong)plVar17 & 1) != 0) goto LAB_1074cd43c;
        }
        if (((ulong)plVar32 & uVar31) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar31);
        }
        else if (plVar32 <= plVar17) {
          uVar19 = 0;
          if (plVar32 != (long *)0x0) {
            uVar19 = (ulong)plVar17 / (ulong)plVar32;
          }
          plVar17 = (long *)((long)plVar17 - uVar19 * (long)plVar32);
        }
      } while (plVar17 == plVar33);
    }
  }
LAB_1074cd178:
  plVar17 = plVar13 + 2;
  plVar27 = (long *)0xa0;
  __Znwm();
  uStack_678 = 1;
  *plVar27 = 0;
  plVar27[1] = (long)plVar20;
  lVar21 = *(long *)pbVar15;
  plVar27[3] = *(long *)(pbVar15 + 8);
  plVar27[2] = lVar21;
  plVar27[5] = 0;
  plVar27[4] = 0;
  plVar27[7] = 0;
  plVar27[6] = 0;
  plVar27[9] = 0;
  plVar27[8] = 0;
  plVar27[0xb] = 0;
  plVar27[10] = 0;
  plVar27[0xd] = 0;
  plVar27[0xc] = 0;
  plVar27[0xf] = 0;
  plVar27[0xe] = 0;
  plVar27[0x11] = 0;
  plVar27[0x10] = 0;
  plVar27[0x13] = 0;
  plVar27[0x12] = 0;
  plStack_680 = plVar17;
  if ((plVar32 != (long *)0x0) &&
     ((float)(plVar13[3] + 1) <= *(float *)(plVar13 + 4) * (float)plVar32)) goto LAB_1074cd3c4;
  uVar31 = 1;
  if ((long *)0x2 < plVar32) {
    uVar31 = (ulong)(((ulong)plVar32 & (long)plVar32 - 1U) != 0);
  }
  plVar33 = (long *)(uVar31 | (long)plVar32 << 1);
  plVar32 = (long *)(long)((float)(plVar13[3] + 1) / *(float *)(plVar13 + 4));
  if (plVar33 <= plVar32) {
    plVar33 = plVar32;
  }
  plStack_688 = plVar27;
  if ((long)plVar33 - 1U == 0) {
    plVar33 = (long *)0x2;
  }
  else if (((ulong)plVar33 & (long)plVar33 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar32 = (long *)plVar13[1];
  if (plVar32 < plVar33) {
LAB_1074cd238:
    if ((ulong)plVar33 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1074cd468);
      (*pcVar3)();
    }
    lVar21 = (long)plVar33 << 3;
    __Znwm(lVar21);
    FUN_1074d3970(plVar13,lVar21);
    plVar13[1] = (long)plVar33;
    lVar21 = *plVar13;
    for (plVar32 = (long *)0x0; plVar33 != plVar32; plVar32 = (long *)((long)plVar32 + 1)) {
      *(undefined8 *)(lVar21 + (long)plVar32 * 8) = 0;
    }
    plVar22 = (long *)*plVar17;
    plVar32 = plVar33;
    if (plVar22 != (long *)0x0) {
      plVar23 = (long *)plVar22[1];
      uVar19 = (long)plVar33 - 1;
      uVar31 = 0;
      if (plVar33 != (long *)0x0) {
        uVar31 = (ulong)plVar23 / (ulong)plVar33;
      }
      plVar24 = plVar23;
      if (plVar33 <= plVar23) {
        plVar24 = (long *)((long)plVar23 - uVar31 * (long)plVar33);
      }
      if (((ulong)plVar33 & uVar19) == 0) {
        plVar24 = (long *)((ulong)plVar23 & uVar19);
      }
      *(long **)(lVar21 + (long)plVar24 * 8) = plVar17;
      while (plVar23 = plVar22, plVar22 = (long *)*plVar23, plVar22 != (long *)0x0) {
        plVar25 = (long *)plVar22[1];
        if (((ulong)plVar33 & uVar19) == 0) {
          plVar25 = (long *)((ulong)plVar25 & uVar19);
        }
        else if (plVar33 <= plVar25) {
          uVar31 = 0;
          if (plVar33 != (long *)0x0) {
            uVar31 = (ulong)plVar25 / (ulong)plVar33;
          }
          plVar25 = (long *)((long)plVar25 - uVar31 * (long)plVar33);
        }
        if (plVar25 != plVar24) {
          if (*(long *)(lVar21 + (long)plVar25 * 8) == 0) {
            *(long **)(lVar21 + (long)plVar25 * 8) = plVar23;
            plVar24 = plVar25;
          }
          else {
            *plVar23 = *plVar22;
            *plVar22 = **(undefined8 **)(lVar21 + (long)plVar25 * 8);
            **(long **)(lVar21 + (long)plVar25 * 8) = (long)plVar22;
            plVar22 = plVar23;
          }
        }
      }
    }
  }
  else if (plVar33 < plVar32) {
    plVar22 = (long *)(long)((float)(ulong)plVar13[3] / *(float *)(plVar13 + 4));
    if ((plVar32 < (long *)0x3) || (((ulong)plVar32 & (long)plVar32 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar22) {
      plVar22 = (long *)(1L << (-LZCOUNT((long)plVar22 + -1) & 0x3fU));
    }
    if (plVar33 <= plVar22) {
      plVar33 = plVar22;
    }
    if (plVar33 < plVar32) {
      if (plVar33 != (long *)0x0) goto LAB_1074cd238;
      FUN_1074d3970(plVar13,0);
      plVar13[1] = 0;
      plVar32 = (long *)0x0;
    }
    else {
      plVar32 = (long *)plVar13[1];
    }
  }
  if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
    plVar33 = (long *)((long)plVar32 - 1U & (ulong)plVar20);
  }
  else {
    plVar33 = plVar20;
    if (plVar32 <= plVar20) {
      uVar31 = 0;
      if (plVar32 != (long *)0x0) {
        uVar31 = (ulong)plVar20 / (ulong)plVar32;
      }
      plVar33 = (long *)((long)plVar20 - uVar31 * (long)plVar32);
    }
  }
LAB_1074cd3c4:
  lVar21 = *plVar13;
  plVar20 = *(long **)(lVar21 + (long)plVar33 * 8);
  if (plVar20 == (long *)0x0) {
    *plVar27 = *plVar17;
    *plVar17 = (long)plVar27;
    *(long **)(lVar21 + (long)plVar33 * 8) = plVar17;
    if (*plVar27 != 0) {
      plVar33 = *(long **)(*plVar27 + 8);
      if (((ulong)plVar32 & (long)plVar32 - 1U) == 0) {
        plVar33 = (long *)((ulong)plVar33 & (long)plVar32 - 1U);
      }
      else if (plVar32 <= plVar33) {
        uVar31 = 0;
        if (plVar32 != (long *)0x0) {
          uVar31 = (ulong)plVar33 / (ulong)plVar32;
        }
        plVar33 = (long *)((long)plVar33 - uVar31 * (long)plVar32);
      }
      *(long **)(lVar21 + (long)plVar33 * 8) = plVar27;
    }
  }
  else {
    *plVar27 = *plVar20;
    *plVar20 = (long)plVar27;
  }
  plStack_688 = (long *)0x0;
  plVar13[3] = plVar13[3] + 1;
  FUN_1074d3988(&plStack_688);
LAB_1074cd43c:
  *(undefined4 *)(plVar27 + 4) = 0;
  return plVar27 + 5;
}



/* Entry: 1074cd0b8; end: 1074cd473;  */

long * FUN_1074cd0b8(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1 + 3;
  func_0x00010784b274();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar12 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar13 <= plVar6) {
        uVar5 = 0;
        if (plVar13 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar13);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_1074cd178;
          plVar3 = (long *)plVar11[1];
          if (plVar3 != plVar6) break;
          plVar3 = plVar11 + 2;
          FUN_1074b07f0(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) goto LAB_1074cd43c;
        }
        if (((ulong)plVar13 & uVar12) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar12);
        }
        else if (plVar13 <= plVar3) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar13;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar13);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_1074cd178:
  plVar3 = param_1 + 2;
  plVar11 = (long *)0xa0;
  __Znwm();
  uStack_58 = 1;
  *plVar11 = 0;
  plVar11[1] = (long)plVar6;
  lVar2 = *param_2;
  plVar11[3] = param_2[1];
  plVar11[2] = lVar2;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  plVar11[0xe] = 0;
  plVar11[0x11] = 0;
  plVar11[0x10] = 0;
  plVar11[0x13] = 0;
  plVar11[0x12] = 0;
  plStack_60 = plVar3;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1074cd3c4;
  uVar12 = 1;
  if ((long *)0x2 < plVar13) {
    uVar12 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar4 = (long *)(uVar12 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar4 <= plVar13) {
    plVar4 = plVar13;
  }
  plStack_68 = plVar11;
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar4) {
LAB_1074cd238:
    if ((ulong)plVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1074cd468);
      (*pcVar1)();
    }
    lVar2 = (long)plVar4 << 3;
    __Znwm(lVar2);
    FUN_1074d3970(param_1,lVar2);
    param_1[1] = (long)plVar4;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar4 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar7 = (long *)*plVar3;
    plVar13 = plVar4;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar5 = (long)plVar4 - 1;
      uVar12 = 0;
      if (plVar4 != (long *)0x0) {
        uVar12 = (ulong)plVar8 / (ulong)plVar4;
      }
      plVar9 = plVar8;
      if (plVar4 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar12 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar5);
      }
      *(long **)(lVar2 + (long)plVar9 * 8) = plVar3;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar4 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar4 <= plVar10) {
          uVar12 = 0;
          if (plVar4 != (long *)0x0) {
            uVar12 = (ulong)plVar10 / (ulong)plVar4;
          }
          plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar4);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (plVar4 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 - 1) & 0x3fU));
    }
    if (plVar4 <= plVar7) {
      plVar4 = plVar7;
    }
    if (plVar4 < plVar13) {
      if (plVar4 != (long *)0x0) goto LAB_1074cd238;
      FUN_1074d3970(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar6);
  }
  else {
    unaff_x25 = plVar6;
    if (plVar13 <= plVar6) {
      uVar12 = 0;
      if (plVar13 != (long *)0x0) {
        uVar12 = (ulong)plVar6 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
    }
  }
LAB_1074cd3c4:
  lVar2 = *param_1;
  plVar6 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar11 = *plVar3;
    *plVar3 = (long)plVar11;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar11 != 0) {
      plVar6 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar6) {
        uVar12 = 0;
        if (plVar13 != (long *)0x0) {
          uVar12 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar6 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar6 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1074d3988(&plStack_68);
LAB_1074cd43c:
  *(undefined4 *)(plVar11 + 4) = 0;
  return plVar11 + 5;
}



/* Entry: 1074cdc24; end: 1074ce39f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074cdc24(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long *param_7,long *param_8,long param_9,
                  long *param_10,long param_11,long *param_12)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  uint extraout_w8;
  uint uVar15;
  undefined4 extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  uint uVar16;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  undefined8 *extraout_x8_17;
  long extraout_x8_18;
  code *extraout_x8_19;
  code *extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  undefined8 *extraout_x8_23;
  long extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x10;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  float unaff_s9;
  undefined8 in_stack_00000060;
  int in_stack_00000070;
  byte bStack0000000000000078;
  byte bStack0000000000000079;
  undefined8 in_stack_00000080;
  undefined8 uStack_a00;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_978;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  long lStack_938;
  undefined1 uStack_928;
  undefined1 uStack_920;
  long *plStack_918;
  ulong uStack_910;
  undefined8 uStack_908;
  long lStack_840;
  undefined1 auStack_838 [16];
  ulong uStack_828;
  long *plStack_820;
  double dStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined4 uStack_7e8;
  undefined **ppuStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 auStack_770 [56];
  undefined1 uStack_738;
  undefined1 uStack_730;
  undefined1 uStack_6f8;
  undefined1 auStack_6f0 [16];
  undefined1 uStack_6e0;
  undefined1 uStack_6c0;
  undefined1 uStack_6b8;
  undefined1 uStack_6a8;
  long alStack_6a0 [7];
  undefined1 auStack_668 [304];
  undefined4 uStack_538;
  long alStack_4e8 [33];
  undefined8 uStack_3e0;
  ulong uStack_3c0;
  long *plStack_3b8;
  long lStack_3b0;
  uint uStack_3a4;
  long lStack_3a0;
  long lStack_398;
  uint uStack_38c;
  long *plStack_388;
  undefined8 *puStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  byte bStack_360;
  undefined7 uStack_35f;
  undefined8 uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  byte bStack_339;
  long alStack_330 [8];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [56];
  undefined1 auStack_2a0 [56];
  undefined1 uStack_268;
  undefined1 uStack_260;
  undefined1 uStack_228;
  undefined1 auStack_220 [16];
  undefined1 uStack_210;
  undefined1 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  long *plStack_1c8;
  uint uStack_1c0;
  undefined2 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined4 uStack_a0;
  undefined8 uStack_50;
  long lStack_30;
  long *plStack_28;
  long *plStack_20;
  long *plStack_18;
  undefined8 uStack_10;
  
  func_0x0001074d40b4();
  plVar17 = param_8;
  plStack_3b8 = param_10;
  lStack_3b0 = param_5;
  lStack_3a0 = param_11;
  func_0x0001074d3a98();
  bStack_339 = bStack0000000000000078;
  uVar22 = plVar17[5];
  uVar13 = param_9 + 0x20;
  uVar10 = uVar22;
  lStack_398 = param_9;
  uStack_10 = extraout_x8;
  FUN_1074d0bd4();
  plVar12 = param_8 + 0x1d;
  uStack_350 = uVar13;
  uStack_348 = uVar10;
  FUN_1074d04ec(plVar12,param_6);
  if (*(char *)(uVar22 + 0x298) == '\0') {
    uStack_3a4 = 0;
  }
  else {
    uStack_3a4 = (uint)(*(char *)(uVar22 + 0x700) == '\0');
  }
  uVar15 = in_stack_00000070 + 0x490;
  plStack_388 = plVar12;
  func_0x00010724e330();
  uStack_38c = uVar15 & 0x101;
  lVar23 = *(long *)(param_7[0x44] + 8);
  uStack_3c0 = uVar10 >> 0x28;
  if ((*(ushort *)((long)param_8 + 0x74) >> 6 & 1) == 0) {
    cVar1 = bStack0000000000000078 == 0;
    puVar6 = (undefined4 *)param_12[0x12];
    uStack_1d0 = 0x27;
    uStack_1c0 = 4;
    if ((bool)cVar1) {
      uStack_1c0 = 0;
    }
    plStack_1c8 = plStack_388 + 0x19;
    func_0x0001074d4b40();
    uStack_1b4 = 0x501;
    uStack_1a4 = 0;
    uStack_1ac = 0;
    uStack_1b0 = 1;
    uStack_19c = 0x1010101;
    uStack_198 = 0xf01;
    plVar11 = (long *)(extraout_x9 + 0xb48);
    plVar12 = (long *)&uStack_1d0;
    FUN_1073ca29c(&bStack_360);
    if (CONCAT71(uStack_35f,bStack_360) == 0) goto LAB_1074ce298;
    func_0x0001074d3adc();
    (*extraout_x8_00)();
    cVar2 = (int)puVar6 == 2;
    cVar1 = cVar2;
    if (!(bool)cVar2) goto LAB_1074ce298;
    func_0x0001074d3b54();
    uVar24 = (undefined4)CONCAT71(uStack_35f,bStack_360);
    dVar27 = (double)(ulong)(uint)(float)param_1;
    func_0x0001074d42cc(dVar27,param_12[3]);
    func_0x0001074d3b54();
    lVar7 = param_8[0x1c];
    FUN_1074d0604((float)dVar27);
    _uStack_368 = CONCAT44(uStack_364,uVar24);
    plVar11 = (long *)(ulong)(*(ushort *)((long)param_8 + 0x74) >> 8 & 1);
    puStack_370 = (undefined8 *)lVar7;
    func_0x0001074d4784(bStack0000000000000079 ^ 1);
    param_10 = param_7;
    func_0x0001074d3b60();
    if ((uVar13 & 0xff) == 0) {
      func_0x0001074d4a48();
      func_0x0001074d48ec();
      func_0x0001074d4478();
    }
    func_0x0001074d42ac();
    param_11 = *param_7;
    func_0x0001074d485c((int)param_12[0xf]);
    func_0x0001074d45b4();
    lVar7 = lStack_3b0;
    plVar18 = (long *)(lStack_3b0 + 0x30);
    if (*plVar18 == 0) {
      lVar8 = *param_12;
      func_0x0001074d4204();
      func_0x0001074d3dd0();
      func_0x0001074d429c();
      func_0x0001074d3db4();
      func_0x0001074d4900();
      func_0x0001074d44a4();
      func_0x0001074d4850();
      if (lVar8 != 0) {
        func_0x0001074d3aa8();
      }
    }
    plVar20 = (long *)(lVar7 + 0x40);
    if (*plVar20 == 0) {
      lVar8 = *param_12;
      func_0x0001074d4204();
      func_0x0001074d3dd0();
      func_0x0001074d429c();
      func_0x0001074d3db4();
      func_0x0001074d490c();
      func_0x0001074d44a4();
      func_0x0001074d4850();
      if (lVar8 != 0) {
        func_0x0001074d3aa8();
      }
    }
    uStack_50._0_4_ = 0x303;
    uStack_50._4_1_ = 0;
    func_0x0001074d43f4(param_12[3]);
    plVar12 = &uStack_50;
    func_0x0001074d454c();
    func_0x0001074d4440(*(undefined1 *)(lVar7 + 0x72));
    plStack_28 = plStack_3b8;
    lStack_30 = lVar23;
    plStack_20 = param_8;
    if (((uStack_3c0 & 1) != 0) && (cVar2 = uStack_38c == 0x101, !(bool)cVar2)) {
      func_0x0001074d0e0c(0x3f800000,&uStack_50);
      plVar11 = plVar18;
    }
    func_0x0001074d42ac();
    if (((uVar10 >> 0x30 & 1) != 0) || ((extraout_w8 & extraout_w9) != 0)) {
      func_0x0001074d0e0c(0,&uStack_50);
      plVar11 = plVar20;
    }
    *(undefined1 *)(lVar7 + 0x72) = 1;
LAB_1074ce1b4:
    func_0x0001074d4898();
    func_0x0001074cf4c8(&uStack_1d0,lStack_398 + 0x20);
    func_0x0001074d42e4(uStack_a0);
    uVar28 = extraout_x9_00;
    if (!(bool)cVar2) {
      uVar28 = 0;
    }
    func_0x0001074d3d18(uVar28);
    lVar7 = param_8[0xf];
    lVar8 = param_8[0x10];
    func_0x0001074d4728();
    while( true ) {
      cVar1 = lVar7 == lVar8;
      if ((bool)cVar1) break;
      if ((cVar2 != '\0') && ((*(byte *)(lVar7 + 0x30) & 1) != 0)) {
        func_0x0001074d42f0(*(undefined8 *)(lVar7 + 0x180));
        (*extraout_x8_02)();
        func_0x00010726236c(alStack_330);
        func_0x0001074d4a90(&uStack_50,alStack_330);
        func_0x00010724b3d8(alStack_330);
        FUN_10748ee94(alStack_330,&uStack_50);
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        func_0x000104c2f64c(auStack_2d8);
        func_0x000104c2f64c(auStack_2a0);
        uStack_268 = (undefined1)lVar23;
        uStack_260 = 0;
        uStack_228 = 0;
        FUN_1074d0b14(auStack_220,lVar7 + 0x78);
        uStack_210 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_1d8 = 0;
        plVar11 = alStack_330;
        func_0x00010748c200(in_stack_00000080);
        func_0x0001072bc64c(alStack_330);
        func_0x0001074d44ac();
      }
      lVar7 = lVar7 + 0x670;
    }
    puVar6 = &uStack_1d0;
    func_0x00010745c048();
  }
  else {
    plVar18 = *(long **)(lVar23 + 0x20);
    plVar12 = (long *)param_8[0x1c];
    func_0x0001074d3b54();
    dVar27 = (double)(ulong)(uint)(float)param_1;
    (**(code **)(*plVar12 + 0x18))();
    if ((uVar13 & 0xff00) == 0) {
      uVar15 = 1;
    }
    else {
      FUN_1074163dc(param_12[5]);
      uVar15 = (uint)(dVar27 != 0.0);
    }
    lVar7 = param_12[5];
    if ((((*(byte *)(lVar7 + 0x5c) & 1) == 0) && ((*(byte *)(lVar7 + 0x5d) & 1) == 0)) &&
       ((*(byte *)(lVar7 + 0x5e) & 1) == 0)) {
      uVar15 = *(byte *)(lVar7 + 0x5f) | uVar15;
    }
    else {
      uVar15 = 1;
    }
    cVar1 = ((uVar15 | (uint)plVar12 ^ 0xffffffff) & 1) == 0;
    uVar3 = 3;
    if ((bool)cVar1) {
      uVar3 = 0;
    }
    uStack_1d0 = (uint)CONCAT11(uVar3,uVar3);
    uStack_1cc = 0;
    func_0x0001074d43f4(param_12[3]);
    func_0x0001074d454c();
    dVar27 = 3.80924612943601e-321;
    uStack_1d0 = 0x303;
    uStack_1cc = 0;
    func_0x0001074d43f4(param_12[3]);
    func_0x0001074d454c();
    puVar6 = (undefined4 *)param_12[0x12];
    uStack_1c0 = (uint)bStack_339 << 2 | 2;
    uStack_1d0 = 0x27;
    plStack_1c8 = plStack_388 + 0x19;
    func_0x0001074d4b40(0x1010101);
    uStack_1b4 = 0x501;
    uStack_1a4 = 0;
    uStack_1ac = 0;
    uStack_1b0 = 1;
    uStack_198 = 0xf01;
    plVar11 = (long *)(extraout_x10 + 0xb48);
    plVar12 = (long *)&uStack_1d0;
    uStack_19c = extraout_w8_00;
    FUN_1073ca29c(&bStack_360);
    if (CONCAT71(uStack_35f,bStack_360) != 0) {
      func_0x0001074d3adc();
      (*extraout_x8_01)();
      cVar2 = (int)puVar6 == 2;
      cVar1 = 0;
      if ((bool)cVar2) {
        func_0x0001074d3b54();
        uVar24 = (undefined4)CONCAT71(uStack_35f,bStack_360);
        dVar27 = (double)(ulong)(uint)(float)dVar27;
        func_0x0001074d42cc(dVar27,param_12[3]);
        func_0x0001074d3b54();
        lVar7 = param_8[0x1c];
        FUN_1074d0604((float)dVar27);
        _uStack_368 = CONCAT44(uStack_364,uVar24);
        plVar11 = (long *)(ulong)(*(ushort *)((long)param_8 + 0x74) >> 8 & 1);
        puStack_370 = (undefined8 *)lVar7;
        func_0x0001074d4784(1);
        func_0x0001074d3b60();
        param_10 = (long *)param_12[5];
        if ((uVar13 & 0xff) == 0) {
          func_0x0001074d4a48();
          param_10 = (long *)param_12[5];
          func_0x0001074d48ec();
          func_0x0001074d4478();
        }
        func_0x0001074d42ac();
        param_11 = *param_7;
        plVar17 = (long *)(ulong)*(uint *)((long)plVar18 + 4);
        func_0x0001074d485c((int)param_12[0xf]);
        FUN_1074d07f0();
        lVar7 = lStack_3b0;
        plVar20 = (long *)(lStack_3b0 + 0x50);
        if (*plVar20 == 0) {
          lVar8 = *param_12;
          func_0x0001074d4204();
          func_0x0001074d3dd0();
          func_0x0001074d429c();
          func_0x0001074d3db4();
          func_0x0001074d4900();
          func_0x0001074d44a4();
          func_0x0001074d4850();
          if (lVar8 != 0) {
            func_0x0001074d3aa8();
          }
        }
        plVar21 = (long *)(lVar7 + 0x60);
        if (*plVar21 == 0) {
          lVar8 = *param_12;
          func_0x0001074d4204();
          func_0x0001074d3dd0();
          func_0x0001074d429c();
          func_0x0001074d3db4();
          func_0x0001074d490c();
          func_0x0001074d44a4();
          func_0x0001074d4850();
          if (lVar8 != 0) {
            func_0x0001074d3aa8();
          }
        }
        func_0x0001074d4440(*(undefined1 *)(lVar7 + 0x73));
        plStack_20 = plStack_3b8;
        lStack_30 = lVar23;
        plStack_28 = plVar18;
        plStack_18 = param_8;
        if (((uStack_3c0 & 1) != 0) && (cVar2 = uStack_38c == 0x101, !(bool)cVar2)) {
          func_0x0001074d0d54(0x3f800000,&uStack_50);
          plVar11 = plVar20;
        }
        func_0x0001074d42ac();
        if (((uVar10 >> 0x30 & 1) != 0) || ((extraout_w8_01 & extraout_w9_00) != 0)) {
          func_0x0001074d0d54(0,&uStack_50);
          plVar11 = plVar21;
        }
        *(undefined1 *)(lVar7 + 0x73) = 1;
        goto LAB_1074ce1b4;
      }
    }
LAB_1074ce298:
    func_0x0001074d4898();
  }
  func_0x0001074d39e4(uStack_10);
  if ((bool)cVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d4850();
  if (puVar6 != (undefined4 *)0x0) {
    func_0x0001074d3aa8();
  }
  func_0x0001074d4898();
  func_0x0001074d3bc4();
  func_0x0001074d40b4(FUN_1074ce3a0);
  plVar18 = plVar12;
  plVar21 = plVar17;
  puStack_370 = &stack0x00000060;
  func_0x0001074d3a98();
  uStack_3e0 = extraout_x8_03;
  func_0x00010002b838(&dStack_818,&UNK_10f415c06);
  dVar27 = dStack_818;
  uStack_7f8 = uStack_810;
  uStack_800 = dStack_818;
  uStack_7f0 = uStack_808;
  uStack_810 = 0;
  uStack_808 = 0;
  dStack_818 = 0.0;
  uStack_7e8 = 1;
  uStack_7d0 = 0;
  uStack_7c8 = 0;
  ppuStack_7e0 = &PTR_DAT_110996720;
  uStack_7d8 = 0;
  uStack_7c0 = (ulong)uStack_7c0._4_4_ << 0x20;
  uStack_7b8 = CONCAT35(uStack_7b8._5_3_,0x100000000);
  uStack_7a8 = 0;
  uStack_7a0 = 0;
  uStack_7b0 = 0;
  FUN_10743cc34(auStack_668,&uStack_800,1);
  FUN_10743d7bc(alStack_4e8,auStack_668);
  func_0x000107288cd8(auStack_668);
  func_0x000107262330(&uStack_800);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&dStack_818);
  lVar7 = *plVar12;
  lVar23 = plVar12[2];
  plVar19 = *(long **)(lVar7 + 0x28);
  uVar13 = lVar23 + 0x20;
  plVar20 = plVar19;
  FUN_1074d0bd4();
  plVar12 = plVar20;
  uStack_828 = uVar13;
  plStack_820 = plVar20;
  func_0x0001074cf4c8(auStack_668,lVar23 + 0x20);
  if ((char)plVar19[0x53] != '\0') {
    cVar1 = (char)plVar19[0xe0] == '\0';
  }
  plVar19 = (long *)(param_11 + 0x490);
  func_0x00010724e330();
  iVar9 = (int)plVar12;
  uVar15 = (uint)plVar19 & 0x101;
  if ((*(ushort *)(lVar7 + 0x74) >> 6 & 1) == 0) {
    if ((((ulong)plVar20 >> 0x28 & 1) != 0) && (cVar1 = uVar15 == 0x101, !(bool)cVar1)) {
      func_0x0001074d4c14();
      iVar5 = (int)plVar19;
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_800 = (double)CONCAT44(uStack_800._4_4_,0x37);
      func_0x0001074d3a14(uVar13 + 0x50);
      func_0x0001074d45fc();
      iVar14 = (int)plVar21;
      if (alStack_6a0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_04)();
        iVar14 = (int)plVar21;
        cVar1 = iVar5 == 2;
        if ((bool)cVar1) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d36c4(auStack_838);
          func_0x0001074d4244();
          func_0x0001074d3a58(bStack_360 ^ 1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d36f0();
          func_0x0001074d4b68();
          if (extraout_w8_02 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4aa0();
            dVar27 = (double)(ulong)(uint)(float)(dVar27 * (double)unaff_s9);
          }
          func_0x0001074d3f28();
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d3ce0();
          func_0x0001074d4944();
          func_0x0001074d3ce0();
          func_0x0001074d412c();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_05 + 0x70));
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          plVar19 = param_10;
          func_0x0001074d45a4();
          func_0x0001074d4390();
          plVar12 = plVar17;
          goto LAB_1074ce62c;
        }
      }
      goto LAB_1074ceac4;
    }
LAB_1074ce62c:
    iVar9 = (int)plVar12;
    iVar5 = (int)plVar19;
    if (((ulong)plVar20 >> 0x30 & 1) != 0) {
      func_0x0001074d4c14();
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_800 = (double)CONCAT44(uStack_800._4_4_,0x37);
      func_0x0001074d3a14(uVar13 + 0x50);
      func_0x0001074d45fc();
      iVar14 = (int)plVar21;
      if (alStack_6a0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_06)();
        iVar14 = (int)plVar21;
        cVar1 = 0;
        if (iVar5 == 2) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d36c4(auStack_838);
          func_0x0001074d4244();
          func_0x0001074d3a58(bStack_360 ^ 1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d36f0();
          func_0x0001074d4b68();
          if (extraout_w8_03 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4958(param_10[5]);
            func_0x0001074d4478();
            dVar27 = (double)(ulong)(uint)(float)dVar27;
          }
          func_0x0001074d3f28(param_10[3]);
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d3ce0();
          func_0x0001074d494c();
          uVar3 = uVar15 == 0x101;
          plVar18 = (long *)(ulong)(byte)uVar3;
          func_0x0001074d3ce0();
          plVar12 = (long *)0xd;
          (*extraout_x8_07)();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_08 + 0x70));
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          func_0x0001074d4090();
LAB_1074ce9e0:
          func_0x0001074d4390();
          cVar1 = uVar3;
          goto LAB_1074ce9e4;
        }
      }
      goto LAB_1074ceac4;
    }
LAB_1074ce9e4:
    func_0x0001074d42e4(uStack_538);
    uVar28 = extraout_x9_01;
    if (!(bool)cVar1) {
      uVar28 = 0;
    }
    func_0x0001074d3d18(uVar28);
    lVar23 = *(long *)(lVar7 + 0x78);
    lVar7 = *(long *)(lVar7 + 0x80);
    while( true ) {
      iVar14 = (int)plVar21;
      iVar9 = (int)plVar12;
      uVar3 = 1;
      if (lVar23 == lVar7) break;
      if ((cVar1 != '\0') && ((*(byte *)(lVar23 + 0x30) & 1) != 0)) {
        func_0x0001074d42f0(*(undefined8 *)(lVar23 + 0x180));
        (*extraout_x8_15)();
        func_0x00010726236c(&uStack_800);
        func_0x000107262398(alStack_6a0,&uStack_800,0x1138369c0);
        func_0x00010724b3d8(&uStack_800);
        FUN_10748ee94(&uStack_800,alStack_6a0);
        uStack_7c0 = 0;
        uStack_7b8 = 0;
        uStack_7b0 = 0;
        func_0x000104c2f64c(&uStack_7a8);
        func_0x000104c2f64c(auStack_770);
        uStack_738 = 1;
        uStack_730 = 0;
        uStack_6f8 = 0;
        FUN_1074d0b14(auStack_6f0,lVar23 + 0x78);
        uStack_6e0 = 0;
        uStack_6c0 = 0;
        uStack_6b8 = 0;
        uStack_6a8 = 0;
        plVar12 = &uStack_800;
        func_0x00010748c200(uStack_358);
        func_0x0001072bc64c(&uStack_800);
        func_0x000104c2f714(alStack_6a0);
      }
      lVar23 = lVar23 + 0x670;
    }
  }
  else {
    func_0x0001074d3ac0();
    func_0x0001074d479c();
    (**(code **)(*plVar19 + 0x18))();
    if ((uVar13 & 0xff00) == 0) {
      uVar16 = 1;
    }
    else {
      FUN_1074163dc(param_10[5]);
      uVar16 = (uint)(dVar27 != 0.0);
    }
    dVar26 = uStack_800;
    plVar11 = *(long **)(*(long *)(plVar11[0x44] + 8) + 0x20);
    lVar23 = param_10[5];
    if ((((*(byte *)(lVar23 + 0x5c) & 1) == 0) && ((*(byte *)(lVar23 + 0x5d) & 1) == 0)) &&
       ((*(byte *)(lVar23 + 0x5e) & 1) == 0)) {
      uVar16 = *(byte *)(lVar23 + 0x5f) | uVar16;
    }
    else {
      uVar16 = 1;
    }
    cVar1 = ((uVar16 | (uint)plVar19 ^ 0xffffffff) & 1) == 0;
    uVar3 = 3;
    if ((bool)cVar1) {
      uVar3 = 0;
    }
    iVar5 = (int)param_10[3];
    uStack_800._5_3_ = SUB83(dVar26,5);
    uStack_800._0_5_ = (uint5)CONCAT11(uVar3,uVar3);
    func_0x0001074d43f4();
    plVar18 = &uStack_800;
    plVar12 = plVar11;
    (*extraout_x8_09)();
    iVar9 = (int)plVar12;
    if ((((ulong)plVar20 >> 0x28 & 1) == 0) || (cVar1 = uVar15 == 0x101, (bool)cVar1)) {
LAB_1074ce8f0:
      if (((ulong)plVar20 >> 0x30 & 1) == 0) goto LAB_1074ce9e4;
      func_0x0001074d4c14();
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_800 = (double)CONCAT44(uStack_800._4_4_,0x26);
      func_0x0001074d3a14(uVar13 + 0x78);
      func_0x0001074d45ec();
      iVar14 = (int)plVar21;
      iVar9 = (int)plVar12;
      if (alStack_6a0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_13)();
        iVar14 = (int)plVar21;
        iVar9 = (int)plVar12;
        uVar3 = iVar5 == 2;
        cVar1 = 0;
        if ((bool)uVar3) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d35a0(auStack_838);
          func_0x0001074d4244();
          func_0x0001074d3a58(1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d35cc();
          func_0x0001074d4b68();
          if (extraout_w8_05 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4958(param_10[5]);
            func_0x0001074d4478();
            dVar27 = (double)(ulong)(uint)(float)dVar27;
          }
          func_0x0001074d3f28(param_10[3]);
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d4400();
          plVar18 = &lStack_840;
          func_0x0001074d436c();
          func_0x0001074d3ce0();
          func_0x0001074d412c();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_14 + 0x70));
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          func_0x0001074d4090();
          goto LAB_1074ce9e0;
        }
      }
    }
    else {
      func_0x0001074d4c14();
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_800 = (double)CONCAT44(uStack_800._4_4_,0x26);
      func_0x0001074d3a14(uVar13 + 0x78);
      func_0x0001074d45ec();
      iVar14 = (int)plVar21;
      if (alStack_6a0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_10)();
        iVar14 = (int)plVar21;
        cVar1 = iVar5 == 2;
        if ((bool)cVar1) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d35a0(auStack_838);
          func_0x0001074d4244();
          func_0x0001074d3a58(1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d35cc();
          func_0x0001074d4b68();
          if (extraout_w8_04 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4aa0();
            dVar27 = (double)(ulong)(uint)(float)(dVar27 * (double)unaff_s9);
          }
          func_0x0001074d3f28();
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d4400();
          func_0x0001074d436c();
          func_0x0001074d3ce0();
          func_0x0001074d4944();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_11 + 0x70));
          func_0x0001074d3f4c();
          (**(code **)(extraout_x8_12 + 0x70))();
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          plVar12 = param_10;
          func_0x0001074d45a4();
          iVar5 = (int)plVar12;
          func_0x0001074d4390();
          plVar12 = plVar17;
          plVar18 = plVar11;
          goto LAB_1074ce8f0;
        }
      }
    }
LAB_1074ceac4:
    func_0x0001074d4390();
    uVar3 = cVar1;
  }
  func_0x00010745c048(auStack_668);
  FUN_10743d7e4();
  func_0x0001074d39e4(uStack_3e0);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d4390();
  func_0x00010745c048(auStack_668);
  plVar12 = alStack_4e8;
  FUN_10743d7e4();
  func_0x0001074d3bc4();
  plVar17 = &uStack_a00;
  if ((((ulong)plVar18 & 1) == 0) && (iVar14 == 0)) {
    return;
  }
  lVar23 = *plVar12;
  lVar7 = plVar12[1];
  func_0x0001074d3b54();
  func_0x0001074d455c((float)dVar27,*(undefined1 *)(lVar23 + 4));
  func_0x0001074d43d4();
  dVar26 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(lVar23 + 0x218) + 0xc));
  dVar27 = dVar27 - dVar26;
  _exp2();
  uVar28 = *(undefined8 *)(lVar7 + 0x7c);
  uStack_908 = CONCAT44((float)((ulong)uVar28 >> 0x20) / ((float)dVar27 * unaff_s9),
                        (float)uVar28 / ((float)dVar27 * unaff_s9));
  uVar13 = *(ulong *)(plVar12[3] + 0x28);
  plVar11 = (long *)(*(long *)(*(long *)plVar12[2] + 0x10) + 0x20);
  if (iVar9 == 0) {
    FUN_1074d0444();
  }
  else {
    FUN_1074d0bd4();
  }
  bVar4 = ((ulong)plVar11 & 0x7fffffff00000000) == 0 && (uVar13 & 0x7fffffff) == 0;
  plStack_918 = plVar11;
  uStack_910 = uVar13;
  func_0x0001074d3d0c();
  uStack_978 = 7;
  uStack_970 = 0x3f800000;
  uStack_a00._4_4_ = 7;
  uStack_9f8 = 0;
  uStack_9f4 = 0;
  uStack_9f0 = CONCAT53(uStack_9f0._3_5_,0x10101);
  (**(code **)(*plVar11 + 0x80))();
  func_0x0001074d3d0c();
  uStack_a00._2_1_ = 1;
  uStack_a00._0_1_ = 0;
  uStack_a00._1_1_ = 1;
  (**(code **)(*plVar11 + 0x88))();
  uVar24 = (undefined4)uVar28;
  uVar13 = uVar13 >> 0x20 & 1;
  if ((int)plVar18 != 0) {
    lVar7 = plVar12[3];
    lVar23 = 0xa40;
    if (iVar9 == 0) {
      lVar23 = 0xa38;
    }
    uStack_928 = 0;
    uStack_920 = 0;
    func_0x0001074d418c();
    func_0x0001074d3c40();
    if (lStack_938 == 0) goto LAB_1074cf25c;
    func_0x0001074d3adc();
    (*extraout_x8_16)();
    uVar3 = (int)plVar11 == 2;
    if (!(bool)uVar3) goto LAB_1074cf25c;
    func_0x0001074d3d0c();
    (**(code **)(*plVar11 + 0x40))();
    func_0x0001074d418c();
    if (((bool)uVar3) && ((*(byte *)(extraout_x8_17 + 0x16) >> 6 & 1) != 0)) {
      if ((*(byte *)(*(long *)(lVar7 + lVar23) + 200) & 1) == 0) {
        func_0x0001074d4204(*extraout_x8_17);
        func_0x0001074d496c();
        uStack_a00._0_1_ = 0x60;
        uStack_a00._1_1_ = 0;
        uStack_a00._2_1_ = 0;
        uStack_a00._3_1_ = 0;
        uStack_a00._4_4_ = 0;
        uStack_9f8 = (undefined4)uStack_978;
        uStack_9f4 = (undefined4)((ulong)uStack_978 >> 0x20);
        func_0x0001074d492c(*(undefined8 *)(lVar7 + lVar23));
        if (CONCAT44(uStack_9f4,uStack_9f8) != 0) {
          func_0x0001074d3aa8();
        }
      }
      uStack_9b8 = 0;
      uStack_9c0 = 0;
      uStack_9a8 = 0;
      uStack_9b0 = 0;
      uStack_9d8 = 0;
      uStack_9e0 = 0;
      uStack_9c8 = 0;
      uStack_9d0 = 0;
      uStack_9f8 = 0;
      uStack_9f4 = 0;
      uStack_a00._0_1_ = 0;
      uStack_a00._1_1_ = 0;
      uStack_a00._2_1_ = 0;
      uStack_a00._3_1_ = 0;
      uStack_a00._4_4_ = 0;
      uStack_9e8 = 0;
      uStack_9f0 = 0;
      func_0x0001074d4960();
      uStack_9f8 = uStack_970;
      uStack_9f4 = uStack_96c;
      uStack_a00._0_1_ = (undefined1)uStack_978;
      uStack_a00._1_1_ = (undefined1)((ulong)uStack_978 >> 8);
      uStack_a00._2_1_ = (undefined1)((ulong)uStack_978 >> 0x10);
      uStack_a00._3_1_ = (undefined1)((ulong)uStack_978 >> 0x18);
      uStack_a00._4_4_ = (undefined4)((ulong)uStack_978 >> 0x20);
      uStack_9e8 = uStack_960;
      uStack_9f0 = uStack_968;
      uStack_9d8 = uStack_950;
      uStack_9e0 = uStack_958;
      uStack_9c8 = uStack_940;
      uStack_9d0 = uStack_948;
      uStack_9c0 = uStack_908;
      uVar24 = *(undefined4 *)(*(long *)(plVar12[1] + 0x28) + 0xa4);
      uStack_9b8 = CONCAT44(uStack_9b8._4_4_,uVar24);
      uVar28 = uStack_948;
      func_0x0001074d3ca4(*(undefined8 *)(*plVar12 + 0x218));
      uStack_9b8 = CONCAT44(uVar24,(undefined4)uStack_9b8);
      func_0x0001074d3cc0();
      if ((bool)uVar3) {
        func_0x0001074d3f90();
        uStack_9b0 = CONCAT44((int)uVar28,uVar24);
        uStack_9a8 = CONCAT44(param_4,param_3);
      }
      plVar11 = *(long **)(*(long *)(lVar7 + lVar23) + 0xc0);
      (**(code **)(*plVar11 + 0x20))
                (plVar11,&uStack_a00,*(undefined8 *)(*(long *)(lVar7 + lVar23) + 0xb8));
      func_0x0001074d3d0c();
      func_0x0001074d4b74();
      func_0x0001074d4288();
      func_0x0001074d3cc0();
      if ((bool)uVar3) {
        func_0x0001074d3b9c(plVar12[1]);
        func_0x0001074d3e40();
      }
    }
    else {
      if (bVar4) {
        plVar11 = (long *)(*plVar12 + 0x10);
      }
      else {
        FUN_107501f68(&uStack_a00,*plVar12,(ulong)&plStack_918 | 4,uVar13,extraout_x8_17[5]);
        plVar11 = &uStack_a00;
      }
      func_0x000107482794(&uStack_978);
      func_0x0001074d3d0c();
      func_0x0001074d3f58(*(undefined8 *)(*plVar11 + 0xd0));
      func_0x0001074d3d0c();
      func_0x0001074d3e40(*(undefined8 *)(*plVar11 + 0xa8));
      func_0x0001074d3d0c();
      uVar24 = *(undefined4 *)(*(long *)(extraout_x8_18 + 0x28) + 0xa4);
      func_0x0001074d3f28();
      (*extraout_x8_19)();
      func_0x0001074d3cc0();
      if ((bool)uVar3) {
        plVar18 = *(long **)(plVar12[1] + 0x18);
        func_0x0001074d3f90(*(undefined8 *)(plVar12[1] + 0x28),*plVar12);
        uStack_a00._0_1_ = (undefined1)uVar24;
        uStack_a00._1_1_ = (undefined1)((uint)uVar24 >> 8);
        uStack_a00._2_1_ = (undefined1)((uint)uVar24 >> 0x10);
        uStack_a00._3_1_ = (undefined1)((uint)uVar24 >> 0x18);
        uStack_a00._4_4_ = (undefined4)uVar28;
        uStack_9f8 = param_3;
        uStack_9f4 = param_4;
        func_0x0001074d4174(*(undefined8 *)(*plVar18 + 0xb8),plVar18);
        plVar11 = *(long **)(plVar12[1] + 0x18);
        lVar8 = *(long *)(plVar12[1] + 0x28);
        FUN_107416bf8(lVar8);
        func_0x000107482794(&uStack_a00,lVar8 + 0xaa0);
        func_0x0001074d416c(*(undefined8 *)(*plVar11 + 0xd0));
        func_0x0001074d3d0c();
        func_0x0001074d4b94();
        func_0x0001074d3f28();
        (*extraout_x8_20)();
      }
    }
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    (**(code **)(extraout_x9_02 + 0x58))();
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    func_0x0001074d4288();
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    func_0x0001074d48f4();
    lVar8 = *(long *)(*(long *)(lVar7 + lVar23) + 0x38);
    for (lVar23 = *(long *)(*(long *)(lVar7 + lVar23) + 0x30); uVar24 = (undefined4)uVar28,
        lVar23 != lVar8; lVar23 = lVar23 + 0x28) {
      func_0x0001074d3d0c();
      func_0x0001074d3e8c();
      (*extraout_x8_21)();
      func_0x0001074d3d0c();
      uStack_a00._0_1_ = 1;
      uStack_a00._4_4_ = 0x3f800000;
      func_0x0001074d3df8(*(undefined8 *)(*plVar11 + 0x138));
    }
    func_0x0001074d48e4();
  }
  if (iVar14 == 0) {
    return;
  }
  lVar7 = plVar12[3];
  lVar23 = 0xa50;
  if (iVar9 == 0) {
    lVar23 = 0xa48;
  }
  uStack_928 = 0;
  uStack_920 = 0;
  func_0x0001074d418c();
  func_0x0001074d3c40();
  if (lStack_938 != 0) {
    func_0x0001074d3adc();
    (*extraout_x8_22)();
    uVar3 = (int)plVar11 == 2;
    if ((bool)uVar3) {
      func_0x0001074d3d0c();
      (**(code **)(*plVar11 + 0x40))();
      func_0x0001074d418c();
      if (((bool)uVar3) && ((*(byte *)(extraout_x8_23 + 0x16) >> 6 & 1) != 0)) {
        if ((*(byte *)(*(long *)(lVar7 + lVar23) + 200) & 1) == 0) {
          func_0x0001074d4204(*extraout_x8_23);
          func_0x0001074d496c();
          uStack_a00._0_1_ = 0x60;
          uStack_a00._1_1_ = 0;
          uStack_a00._2_1_ = 0;
          uStack_a00._3_1_ = 0;
          uStack_a00._4_4_ = 0;
          uStack_9f8 = (undefined4)uStack_978;
          uStack_9f4 = (undefined4)((ulong)uStack_978 >> 0x20);
          func_0x0001074d492c(*(undefined8 *)(lVar7 + lVar23));
          if (CONCAT44(uStack_9f4,uStack_9f8) != 0) {
            func_0x0001074d3aa8();
          }
        }
        uStack_9b0 = 0;
        uStack_9a8 = 0;
        func_0x0001074d4960();
        uStack_9f8 = uStack_970;
        uStack_9f4 = uStack_96c;
        uStack_a00._0_1_ = (undefined1)uStack_978;
        uStack_a00._1_1_ = (undefined1)((ulong)uStack_978 >> 8);
        uStack_a00._2_1_ = (undefined1)((ulong)uStack_978 >> 0x10);
        uStack_a00._3_1_ = (undefined1)((ulong)uStack_978 >> 0x18);
        uStack_a00._4_4_ = (undefined4)((ulong)uStack_978 >> 0x20);
        uStack_9e8 = uStack_960;
        uStack_9f0 = uStack_968;
        uStack_9d8 = uStack_950;
        uStack_9e0 = uStack_958;
        uStack_9c8 = uStack_940;
        uStack_9d0 = uStack_948;
        uStack_9c0 = uStack_908;
        uVar24 = *(undefined4 *)(*(long *)(plVar12[1] + 0x28) + 0xa4);
        uStack_9b8 = CONCAT44(uStack_9b8._4_4_,uVar24);
        func_0x0001074d3ca4(*(undefined8 *)(*plVar12 + 0x218));
        uVar25 = (undefined4)uStack_948;
        uStack_9b8 = CONCAT44(uVar24,(undefined4)uStack_9b8);
        func_0x0001074d3cc0();
        if ((bool)uVar3) {
          func_0x0001074d3f90();
          uStack_9b0 = CONCAT44(uVar25,uVar24);
          uStack_9a8 = CONCAT44(param_4,param_3);
        }
        plVar17 = *(long **)(*(long *)(lVar7 + lVar23) + 0xc0);
        (**(code **)(*plVar17 + 0x20))
                  (plVar17,&uStack_a00,*(undefined8 *)(*(long *)(lVar7 + lVar23) + 0xb8));
        func_0x0001074d3d0c();
        func_0x0001074d4b20();
        func_0x0001074d4288();
        func_0x0001074d3cc0();
        if ((bool)uVar3) {
          func_0x0001074d3b9c(plVar12[1]);
          func_0x0001074d3e40();
        }
      }
      else {
        if (bVar4) {
          plVar17 = (long *)(*plVar12 + 0x10);
        }
        else {
          FUN_107501f68(&uStack_a00,*plVar12,(ulong)&plStack_918 | 4,uVar13,extraout_x8_23[5]);
        }
        func_0x000107482794(&uStack_978);
        func_0x0001074d3d0c();
        func_0x0001074d3f58(*(undefined8 *)(*plVar17 + 0xd0));
        func_0x0001074d3d0c();
        func_0x0001074d3e40(*(undefined8 *)(*plVar17 + 0xa8));
        func_0x0001074d3d0c();
        uVar25 = *(undefined4 *)(*(long *)(extraout_x8_24 + 0x28) + 0xa4);
        func_0x0001074d3f28();
        (*extraout_x8_25)();
        func_0x0001074d3cc0();
        if ((bool)uVar3) {
          plVar17 = *(long **)(plVar12[1] + 0x18);
          func_0x0001074d3f90(*(undefined8 *)(plVar12[1] + 0x28),*plVar12);
          uStack_a00._0_1_ = (undefined1)uVar25;
          uStack_a00._1_1_ = (undefined1)((uint)uVar25 >> 8);
          uStack_a00._2_1_ = (undefined1)((uint)uVar25 >> 0x10);
          uStack_a00._3_1_ = (undefined1)((uint)uVar25 >> 0x18);
          uStack_a00._4_4_ = uVar24;
          uStack_9f8 = param_3;
          uStack_9f4 = param_4;
          func_0x0001074d4174(*(undefined8 *)(*plVar17 + 0xb8),plVar17);
          uVar28 = *(undefined8 *)(plVar12[1] + 0x18);
          func_0x0001074d43a0();
          func_0x0001074d4154();
          func_0x0001074d3fa0();
          func_0x0001074d416c(uVar28);
          func_0x0001074d3d0c();
          func_0x0001074d4b94();
          func_0x0001074d3f28();
          (*extraout_x8_26)();
        }
        func_0x0001074d3ca4(*(undefined8 *)(*plVar12 + 0x218),*(undefined8 *)(plVar12[1] + 0x18));
        func_0x0001074d3f28();
        (*extraout_x8_27)();
      }
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      (**(code **)(extraout_x9_03 + 0x58))();
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      func_0x0001074d4288();
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      func_0x0001074d48f4();
      lVar8 = *(long *)(*(long *)(lVar7 + lVar23) + 0x38);
      for (lVar23 = *(long *)(*(long *)(lVar7 + lVar23) + 0x30); lVar23 != lVar8;
          lVar23 = lVar23 + 0x28) {
        func_0x0001074d3d0c();
        func_0x0001074d3e8c();
        (*extraout_x8_28)();
        func_0x0001074d3d0c();
        uStack_a00._0_1_ = 4;
        func_0x0001074d4748();
        func_0x0001074d3df8();
      }
    }
  }
LAB_1074cf25c:
  func_0x0001074d48e4();
  return;
}



/* Entry: 1074ce3a0; end: 1074cec23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074ce3a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,long *param_7,long *param_8,undefined8 param_9,
                  long *param_10,long param_11)

{
  uint uVar1;
  char in_ZR;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int extraout_w8;
  int extraout_w8_00;
  uint uVar12;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  undefined8 *extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  code *extraout_x8_18;
  undefined8 *extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  code *extraout_x8_23;
  code *extraout_x8_24;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  float unaff_s9;
  byte in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack_630;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined1 uStack_558;
  undefined1 uStack_550;
  long *plStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  long lStack_470;
  undefined1 auStack_468 [16];
  ulong uStack_458;
  long *plStack_450;
  double dStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined **ppuStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3a0 [56];
  undefined1 uStack_368;
  undefined1 uStack_360;
  undefined1 uStack_328;
  undefined1 auStack_320 [16];
  undefined1 uStack_310;
  undefined1 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2d8;
  long alStack_2d0 [7];
  undefined1 auStack_298 [304];
  undefined4 uStack_168;
  long alStack_118 [33];
  undefined8 uStack_10;
  
  func_0x0001074d40b4();
  plVar10 = param_7;
  plVar15 = param_8;
  func_0x0001074d3a98();
  uStack_10 = extraout_x8;
  func_0x00010002b838(&dStack_448,&UNK_10f415c06);
  dVar21 = dStack_448;
  uStack_428 = uStack_440;
  uStack_430 = dStack_448;
  uStack_420 = uStack_438;
  uStack_440 = 0;
  uStack_438 = 0;
  dStack_448 = 0.0;
  uStack_418 = 1;
  uStack_400 = 0;
  uStack_3f8 = 0;
  ppuStack_410 = &PTR_DAT_110996720;
  uStack_408 = 0;
  uStack_3f0 = (ulong)uStack_3f0._4_4_ << 0x20;
  uStack_3e8 = CONCAT35(uStack_3e8._5_3_,0x100000000);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3e0 = 0;
  FUN_10743cc34(auStack_298,&uStack_430,1);
  FUN_10743d7bc(alStack_118,auStack_298);
  func_0x000107288cd8(auStack_298);
  func_0x000107262330(&uStack_430);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&dStack_448);
  lVar17 = *param_7;
  lVar14 = param_7[2];
  plVar13 = *(long **)(lVar17 + 0x28);
  uVar9 = lVar14 + 0x20;
  plVar5 = plVar13;
  FUN_1074d0bd4();
  plVar7 = plVar5;
  uStack_458 = uVar9;
  plStack_450 = plVar5;
  func_0x0001074cf4c8(auStack_298,lVar14 + 0x20);
  if ((char)plVar13[0x53] != '\0') {
    in_ZR = (char)plVar13[0xe0] == '\0';
  }
  plVar13 = (long *)(param_11 + 0x490);
  func_0x00010724e330();
  iVar6 = (int)plVar7;
  uVar1 = (uint)plVar13 & 0x101;
  if ((*(ushort *)(lVar17 + 0x74) >> 6 & 1) == 0) {
    if ((((ulong)plVar5 >> 0x28 & 1) != 0) && (in_ZR = uVar1 == 0x101, !(bool)in_ZR)) {
      func_0x0001074d4c14();
      iVar4 = (int)plVar13;
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_430 = (double)CONCAT44(uStack_430._4_4_,0x37);
      func_0x0001074d3a14(uVar9 + 0x50);
      func_0x0001074d45fc();
      iVar11 = (int)plVar15;
      if (alStack_2d0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_00)();
        iVar11 = (int)plVar15;
        in_ZR = iVar4 == 2;
        if ((bool)in_ZR) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d36c4(auStack_468);
          func_0x0001074d4244();
          func_0x0001074d3a58(in_stack_00000070 ^ 1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d36f0();
          func_0x0001074d4b68();
          if (extraout_w8 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4aa0();
            dVar21 = (double)(ulong)(uint)(float)(dVar21 * (double)unaff_s9);
          }
          func_0x0001074d3f28();
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d3ce0();
          func_0x0001074d4944();
          func_0x0001074d3ce0();
          func_0x0001074d412c();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_01 + 0x70));
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          plVar13 = param_10;
          func_0x0001074d45a4();
          func_0x0001074d4390();
          plVar7 = param_8;
          goto LAB_1074ce62c;
        }
      }
      goto LAB_1074ceac4;
    }
LAB_1074ce62c:
    iVar6 = (int)plVar7;
    iVar4 = (int)plVar13;
    if (((ulong)plVar5 >> 0x30 & 1) != 0) {
      func_0x0001074d4c14();
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_430 = (double)CONCAT44(uStack_430._4_4_,0x37);
      func_0x0001074d3a14(uVar9 + 0x50);
      func_0x0001074d45fc();
      iVar11 = (int)plVar15;
      if (alStack_2d0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_02)();
        iVar11 = (int)plVar15;
        in_ZR = 0;
        if (iVar4 == 2) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d36c4(auStack_468);
          func_0x0001074d4244();
          func_0x0001074d3a58(in_stack_00000070 ^ 1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d36f0();
          func_0x0001074d4b68();
          if (extraout_w8_00 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4958(param_10[5]);
            func_0x0001074d4478();
            dVar21 = (double)(ulong)(uint)(float)dVar21;
          }
          func_0x0001074d3f28(param_10[3]);
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d3ce0();
          func_0x0001074d494c();
          uVar2 = uVar1 == 0x101;
          plVar10 = (long *)(ulong)(byte)uVar2;
          func_0x0001074d3ce0();
          plVar7 = (long *)0xd;
          (*extraout_x8_03)();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_04 + 0x70));
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          func_0x0001074d4090();
LAB_1074ce9e0:
          func_0x0001074d4390();
          in_ZR = uVar2;
          goto LAB_1074ce9e4;
        }
      }
      goto LAB_1074ceac4;
    }
LAB_1074ce9e4:
    func_0x0001074d42e4(uStack_168);
    uVar22 = extraout_x9;
    if (!(bool)in_ZR) {
      uVar22 = 0;
    }
    func_0x0001074d3d18(uVar22);
    lVar14 = *(long *)(lVar17 + 0x78);
    lVar17 = *(long *)(lVar17 + 0x80);
    while( true ) {
      iVar11 = (int)plVar15;
      iVar6 = (int)plVar7;
      uVar2 = 1;
      if (lVar14 == lVar17) break;
      if ((in_ZR != '\0') && ((*(byte *)(lVar14 + 0x30) & 1) != 0)) {
        func_0x0001074d42f0(*(undefined8 *)(lVar14 + 0x180));
        (*extraout_x8_11)();
        func_0x00010726236c(&uStack_430);
        func_0x000107262398(alStack_2d0,&uStack_430,0x1138369c0);
        func_0x00010724b3d8(&uStack_430);
        FUN_10748ee94(&uStack_430,alStack_2d0);
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        func_0x000104c2f64c(&uStack_3d8);
        func_0x000104c2f64c(auStack_3a0);
        uStack_368 = 1;
        uStack_360 = 0;
        uStack_328 = 0;
        FUN_1074d0b14(auStack_320,lVar14 + 0x78);
        uStack_310 = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2d8 = 0;
        plVar7 = &uStack_430;
        func_0x00010748c200(in_stack_00000078);
        func_0x0001072bc64c(&uStack_430);
        func_0x000104c2f714(alStack_2d0);
      }
      lVar14 = lVar14 + 0x670;
    }
  }
  else {
    func_0x0001074d3ac0();
    func_0x0001074d479c();
    (**(code **)(*plVar13 + 0x18))();
    if ((uVar9 & 0xff00) == 0) {
      uVar12 = 1;
    }
    else {
      FUN_1074163dc(param_10[5]);
      uVar12 = (uint)(dVar21 != 0.0);
    }
    dVar20 = uStack_430;
    plVar8 = *(long **)(*(long *)(*(long *)(param_6 + 0x220) + 8) + 0x20);
    lVar14 = param_10[5];
    if ((((*(byte *)(lVar14 + 0x5c) & 1) == 0) && ((*(byte *)(lVar14 + 0x5d) & 1) == 0)) &&
       ((*(byte *)(lVar14 + 0x5e) & 1) == 0)) {
      uVar12 = *(byte *)(lVar14 + 0x5f) | uVar12;
    }
    else {
      uVar12 = 1;
    }
    in_ZR = ((uVar12 | (uint)plVar13 ^ 0xffffffff) & 1) == 0;
    uVar2 = 3;
    if ((bool)in_ZR) {
      uVar2 = 0;
    }
    iVar4 = (int)param_10[3];
    uStack_430._5_3_ = SUB83(dVar20,5);
    uStack_430._0_5_ = (uint5)CONCAT11(uVar2,uVar2);
    func_0x0001074d43f4();
    plVar10 = &uStack_430;
    plVar7 = plVar8;
    (*extraout_x8_05)();
    iVar6 = (int)plVar7;
    if ((((ulong)plVar5 >> 0x28 & 1) == 0) || (in_ZR = uVar1 == 0x101, (bool)in_ZR)) {
LAB_1074ce8f0:
      if (((ulong)plVar5 >> 0x30 & 1) == 0) goto LAB_1074ce9e4;
      func_0x0001074d4c14();
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_430 = (double)CONCAT44(uStack_430._4_4_,0x26);
      func_0x0001074d3a14(uVar9 + 0x78);
      func_0x0001074d45ec();
      iVar11 = (int)plVar15;
      iVar6 = (int)plVar7;
      if (alStack_2d0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_09)();
        iVar11 = (int)plVar15;
        iVar6 = (int)plVar7;
        uVar2 = iVar4 == 2;
        in_ZR = 0;
        if ((bool)uVar2) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d35a0(auStack_468);
          func_0x0001074d4244();
          func_0x0001074d3a58(1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d35cc();
          func_0x0001074d4b68();
          if (extraout_w8_02 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4958(param_10[5]);
            func_0x0001074d4478();
            dVar21 = (double)(ulong)(uint)(float)dVar21;
          }
          func_0x0001074d3f28(param_10[3]);
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d4400();
          plVar10 = &lStack_470;
          func_0x0001074d436c();
          func_0x0001074d3ce0();
          func_0x0001074d412c();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_10 + 0x70));
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          func_0x0001074d4090();
          goto LAB_1074ce9e0;
        }
      }
    }
    else {
      func_0x0001074d4c14();
      func_0x0001074d3dec();
      func_0x0001074d4cb4();
      uStack_430 = (double)CONCAT44(uStack_430._4_4_,0x26);
      func_0x0001074d3a14(uVar9 + 0x78);
      func_0x0001074d45ec();
      iVar11 = (int)plVar15;
      if (alStack_2d0[0] != 0) {
        func_0x0001074d3adc();
        (*extraout_x8_06)();
        iVar11 = (int)plVar15;
        in_ZR = iVar4 == 2;
        if ((bool)in_ZR) {
          func_0x0001074d3ac0();
          func_0x0001074d4210();
          func_0x0001074d4278();
          FUN_1074d0c7c();
          func_0x0001074d3ac0();
          func_0x0001074d479c();
          FUN_1074d0604();
          func_0x0001074d40f8();
          FUN_1074d35a0(auStack_468);
          func_0x0001074d4244();
          func_0x0001074d3a58(1);
          func_0x0001074d4c40();
          func_0x0001074d41d8();
          FUN_1074d35cc();
          func_0x0001074d4b68();
          if (extraout_w8_01 == 0) {
            FUN_1074163dc(param_10[5]);
            func_0x0001074d4aa0();
            dVar21 = (double)(ulong)(uint)(float)(dVar21 * (double)unaff_s9);
          }
          func_0x0001074d3f28();
          func_0x0001074d4350();
          func_0x0001074d3d68();
          func_0x0001074d4348();
          func_0x0001074d4400();
          func_0x0001074d436c();
          func_0x0001074d3ce0();
          func_0x0001074d4944();
          func_0x0001074d3f4c();
          func_0x0001074d3e04(*(undefined8 *)(extraout_x8_07 + 0x70));
          func_0x0001074d3f4c();
          (**(code **)(extraout_x8_08 + 0x70))();
          func_0x0001074d459c();
          func_0x0001074d3e48();
          func_0x0001074d4594();
          func_0x0001074d458c();
          plVar10 = param_10;
          func_0x0001074d45a4();
          iVar4 = (int)plVar10;
          func_0x0001074d4390();
          plVar7 = param_8;
          plVar10 = plVar8;
          goto LAB_1074ce8f0;
        }
      }
    }
LAB_1074ceac4:
    func_0x0001074d4390();
    uVar2 = in_ZR;
  }
  func_0x00010745c048(auStack_298);
  FUN_10743d7e4();
  func_0x0001074d39e4(uStack_10);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d4390();
  func_0x00010745c048(auStack_298);
  plVar7 = alStack_118;
  FUN_10743d7e4();
  func_0x0001074d3bc4();
  plVar5 = &uStack_630;
  if ((((ulong)plVar10 & 1) == 0) && (iVar11 == 0)) {
    return;
  }
  lVar14 = *plVar7;
  lVar17 = plVar7[1];
  func_0x0001074d3b54();
  func_0x0001074d455c((float)dVar21,*(undefined1 *)(lVar14 + 4));
  func_0x0001074d43d4();
  dVar20 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(lVar14 + 0x218) + 0xc));
  dVar21 = dVar21 - dVar20;
  _exp2();
  uVar22 = *(undefined8 *)(lVar17 + 0x7c);
  uStack_538 = CONCAT44((float)((ulong)uVar22 >> 0x20) / ((float)dVar21 * unaff_s9),
                        (float)uVar22 / ((float)dVar21 * unaff_s9));
  uVar9 = *(ulong *)(plVar7[3] + 0x28);
  plVar15 = (long *)(*(long *)(*(long *)plVar7[2] + 0x10) + 0x20);
  if (iVar6 == 0) {
    FUN_1074d0444();
  }
  else {
    FUN_1074d0bd4();
  }
  bVar3 = ((ulong)plVar15 & 0x7fffffff00000000) == 0 && (uVar9 & 0x7fffffff) == 0;
  plStack_548 = plVar15;
  uStack_540 = uVar9;
  func_0x0001074d3d0c();
  uStack_5a8 = 7;
  uStack_5a0 = 0x3f800000;
  uStack_630._4_4_ = 7;
  uStack_628 = 0;
  uStack_624 = 0;
  uStack_620 = CONCAT53(uStack_620._3_5_,0x10101);
  (**(code **)(*plVar15 + 0x80))();
  func_0x0001074d3d0c();
  uStack_630._2_1_ = 1;
  uStack_630._0_1_ = 0;
  uStack_630._1_1_ = 1;
  (**(code **)(*plVar15 + 0x88))();
  uVar18 = (undefined4)uVar22;
  uVar9 = uVar9 >> 0x20 & 1;
  if ((int)plVar10 != 0) {
    lVar17 = plVar7[3];
    lVar14 = 0xa40;
    if (iVar6 == 0) {
      lVar14 = 0xa38;
    }
    uStack_558 = 0;
    uStack_550 = 0;
    func_0x0001074d418c();
    func_0x0001074d3c40();
    if (lStack_568 == 0) goto LAB_1074cf25c;
    func_0x0001074d3adc();
    (*extraout_x8_12)();
    uVar2 = (int)plVar15 == 2;
    if (!(bool)uVar2) goto LAB_1074cf25c;
    func_0x0001074d3d0c();
    (**(code **)(*plVar15 + 0x40))();
    func_0x0001074d418c();
    if (((bool)uVar2) && ((*(byte *)(extraout_x8_13 + 0x16) >> 6 & 1) != 0)) {
      if ((*(byte *)(*(long *)(lVar17 + lVar14) + 200) & 1) == 0) {
        func_0x0001074d4204(*extraout_x8_13);
        func_0x0001074d496c();
        uStack_630._0_1_ = 0x60;
        uStack_630._1_1_ = 0;
        uStack_630._2_1_ = 0;
        uStack_630._3_1_ = 0;
        uStack_630._4_4_ = 0;
        uStack_628 = (undefined4)uStack_5a8;
        uStack_624 = (undefined4)((ulong)uStack_5a8 >> 0x20);
        func_0x0001074d492c(*(undefined8 *)(lVar17 + lVar14));
        if (CONCAT44(uStack_624,uStack_628) != 0) {
          func_0x0001074d3aa8();
        }
      }
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_630._0_1_ = 0;
      uStack_630._1_1_ = 0;
      uStack_630._2_1_ = 0;
      uStack_630._3_1_ = 0;
      uStack_630._4_4_ = 0;
      uStack_618 = 0;
      uStack_620 = 0;
      func_0x0001074d4960();
      uStack_628 = uStack_5a0;
      uStack_624 = uStack_59c;
      uStack_630._0_1_ = (undefined1)uStack_5a8;
      uStack_630._1_1_ = (undefined1)((ulong)uStack_5a8 >> 8);
      uStack_630._2_1_ = (undefined1)((ulong)uStack_5a8 >> 0x10);
      uStack_630._3_1_ = (undefined1)((ulong)uStack_5a8 >> 0x18);
      uStack_630._4_4_ = (undefined4)((ulong)uStack_5a8 >> 0x20);
      uStack_618 = uStack_590;
      uStack_620 = uStack_598;
      uStack_608 = uStack_580;
      uStack_610 = uStack_588;
      uStack_5f8 = uStack_570;
      uStack_600 = uStack_578;
      uStack_5f0 = uStack_538;
      uVar18 = *(undefined4 *)(*(long *)(plVar7[1] + 0x28) + 0xa4);
      uStack_5e8 = CONCAT44(uStack_5e8._4_4_,uVar18);
      uVar22 = uStack_578;
      func_0x0001074d3ca4(*(undefined8 *)(*plVar7 + 0x218));
      uStack_5e8 = CONCAT44(uVar18,(undefined4)uStack_5e8);
      func_0x0001074d3cc0();
      if ((bool)uVar2) {
        func_0x0001074d3f90();
        uStack_5e0 = CONCAT44((int)uVar22,uVar18);
        uStack_5d8 = CONCAT44(param_4,param_3);
      }
      plVar15 = *(long **)(*(long *)(lVar17 + lVar14) + 0xc0);
      (**(code **)(*plVar15 + 0x20))
                (plVar15,&uStack_630,*(undefined8 *)(*(long *)(lVar17 + lVar14) + 0xb8));
      func_0x0001074d3d0c();
      func_0x0001074d4b74();
      func_0x0001074d4288();
      func_0x0001074d3cc0();
      if ((bool)uVar2) {
        func_0x0001074d3b9c(plVar7[1]);
        func_0x0001074d3e40();
      }
    }
    else {
      if (bVar3) {
        plVar15 = (long *)(*plVar7 + 0x10);
      }
      else {
        FUN_107501f68(&uStack_630,*plVar7,(ulong)&plStack_548 | 4,uVar9,extraout_x8_13[5]);
        plVar15 = &uStack_630;
      }
      func_0x000107482794(&uStack_5a8);
      func_0x0001074d3d0c();
      func_0x0001074d3f58(*(undefined8 *)(*plVar15 + 0xd0));
      func_0x0001074d3d0c();
      func_0x0001074d3e40(*(undefined8 *)(*plVar15 + 0xa8));
      func_0x0001074d3d0c();
      uVar18 = *(undefined4 *)(*(long *)(extraout_x8_14 + 0x28) + 0xa4);
      func_0x0001074d3f28();
      (*extraout_x8_15)();
      func_0x0001074d3cc0();
      if ((bool)uVar2) {
        plVar10 = *(long **)(plVar7[1] + 0x18);
        func_0x0001074d3f90(*(undefined8 *)(plVar7[1] + 0x28),*plVar7);
        uStack_630._0_1_ = (undefined1)uVar18;
        uStack_630._1_1_ = (undefined1)((uint)uVar18 >> 8);
        uStack_630._2_1_ = (undefined1)((uint)uVar18 >> 0x10);
        uStack_630._3_1_ = (undefined1)((uint)uVar18 >> 0x18);
        uStack_630._4_4_ = (undefined4)uVar22;
        uStack_628 = param_3;
        uStack_624 = param_4;
        func_0x0001074d4174(*(undefined8 *)(*plVar10 + 0xb8),plVar10);
        plVar15 = *(long **)(plVar7[1] + 0x18);
        lVar16 = *(long *)(plVar7[1] + 0x28);
        FUN_107416bf8(lVar16);
        func_0x000107482794(&uStack_630,lVar16 + 0xaa0);
        func_0x0001074d416c(*(undefined8 *)(*plVar15 + 0xd0));
        func_0x0001074d3d0c();
        func_0x0001074d4b94();
        func_0x0001074d3f28();
        (*extraout_x8_16)();
      }
    }
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    (**(code **)(extraout_x9_00 + 0x58))();
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    func_0x0001074d4288();
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    func_0x0001074d48f4();
    lVar16 = *(long *)(*(long *)(lVar17 + lVar14) + 0x38);
    for (lVar14 = *(long *)(*(long *)(lVar17 + lVar14) + 0x30); uVar18 = (undefined4)uVar22,
        lVar14 != lVar16; lVar14 = lVar14 + 0x28) {
      func_0x0001074d3d0c();
      func_0x0001074d3e8c();
      (*extraout_x8_17)();
      func_0x0001074d3d0c();
      uStack_630._0_1_ = 1;
      uStack_630._4_4_ = 0x3f800000;
      func_0x0001074d3df8(*(undefined8 *)(*plVar15 + 0x138));
    }
    func_0x0001074d48e4();
  }
  if (iVar11 == 0) {
    return;
  }
  lVar17 = plVar7[3];
  lVar14 = 0xa50;
  if (iVar6 == 0) {
    lVar14 = 0xa48;
  }
  uStack_558 = 0;
  uStack_550 = 0;
  func_0x0001074d418c();
  func_0x0001074d3c40();
  if (lStack_568 != 0) {
    func_0x0001074d3adc();
    (*extraout_x8_18)();
    uVar2 = (int)plVar15 == 2;
    if ((bool)uVar2) {
      func_0x0001074d3d0c();
      (**(code **)(*plVar15 + 0x40))();
      func_0x0001074d418c();
      if (((bool)uVar2) && ((*(byte *)(extraout_x8_19 + 0x16) >> 6 & 1) != 0)) {
        if ((*(byte *)(*(long *)(lVar17 + lVar14) + 200) & 1) == 0) {
          func_0x0001074d4204(*extraout_x8_19);
          func_0x0001074d496c();
          uStack_630._0_1_ = 0x60;
          uStack_630._1_1_ = 0;
          uStack_630._2_1_ = 0;
          uStack_630._3_1_ = 0;
          uStack_630._4_4_ = 0;
          uStack_628 = (undefined4)uStack_5a8;
          uStack_624 = (undefined4)((ulong)uStack_5a8 >> 0x20);
          func_0x0001074d492c(*(undefined8 *)(lVar17 + lVar14));
          if (CONCAT44(uStack_624,uStack_628) != 0) {
            func_0x0001074d3aa8();
          }
        }
        uStack_5e0 = 0;
        uStack_5d8 = 0;
        func_0x0001074d4960();
        uStack_628 = uStack_5a0;
        uStack_624 = uStack_59c;
        uStack_630._0_1_ = (undefined1)uStack_5a8;
        uStack_630._1_1_ = (undefined1)((ulong)uStack_5a8 >> 8);
        uStack_630._2_1_ = (undefined1)((ulong)uStack_5a8 >> 0x10);
        uStack_630._3_1_ = (undefined1)((ulong)uStack_5a8 >> 0x18);
        uStack_630._4_4_ = (undefined4)((ulong)uStack_5a8 >> 0x20);
        uStack_618 = uStack_590;
        uStack_620 = uStack_598;
        uStack_608 = uStack_580;
        uStack_610 = uStack_588;
        uStack_5f8 = uStack_570;
        uStack_600 = uStack_578;
        uStack_5f0 = uStack_538;
        uVar18 = *(undefined4 *)(*(long *)(plVar7[1] + 0x28) + 0xa4);
        uStack_5e8 = CONCAT44(uStack_5e8._4_4_,uVar18);
        func_0x0001074d3ca4(*(undefined8 *)(*plVar7 + 0x218));
        uVar19 = (undefined4)uStack_578;
        uStack_5e8 = CONCAT44(uVar18,(undefined4)uStack_5e8);
        func_0x0001074d3cc0();
        if ((bool)uVar2) {
          func_0x0001074d3f90();
          uStack_5e0 = CONCAT44(uVar19,uVar18);
          uStack_5d8 = CONCAT44(param_4,param_3);
        }
        plVar10 = *(long **)(*(long *)(lVar17 + lVar14) + 0xc0);
        (**(code **)(*plVar10 + 0x20))
                  (plVar10,&uStack_630,*(undefined8 *)(*(long *)(lVar17 + lVar14) + 0xb8));
        func_0x0001074d3d0c();
        func_0x0001074d4b20();
        func_0x0001074d4288();
        func_0x0001074d3cc0();
        if ((bool)uVar2) {
          func_0x0001074d3b9c(plVar7[1]);
          func_0x0001074d3e40();
        }
      }
      else {
        if (bVar3) {
          plVar5 = (long *)(*plVar7 + 0x10);
        }
        else {
          FUN_107501f68(&uStack_630,*plVar7,(ulong)&plStack_548 | 4,uVar9,extraout_x8_19[5]);
        }
        func_0x000107482794(&uStack_5a8);
        func_0x0001074d3d0c();
        func_0x0001074d3f58(*(undefined8 *)(*plVar5 + 0xd0));
        func_0x0001074d3d0c();
        func_0x0001074d3e40(*(undefined8 *)(*plVar5 + 0xa8));
        func_0x0001074d3d0c();
        uVar19 = *(undefined4 *)(*(long *)(extraout_x8_20 + 0x28) + 0xa4);
        func_0x0001074d3f28();
        (*extraout_x8_21)();
        func_0x0001074d3cc0();
        if ((bool)uVar2) {
          plVar10 = *(long **)(plVar7[1] + 0x18);
          func_0x0001074d3f90(*(undefined8 *)(plVar7[1] + 0x28),*plVar7);
          uStack_630._0_1_ = (undefined1)uVar19;
          uStack_630._1_1_ = (undefined1)((uint)uVar19 >> 8);
          uStack_630._2_1_ = (undefined1)((uint)uVar19 >> 0x10);
          uStack_630._3_1_ = (undefined1)((uint)uVar19 >> 0x18);
          uStack_630._4_4_ = uVar18;
          uStack_628 = param_3;
          uStack_624 = param_4;
          func_0x0001074d4174(*(undefined8 *)(*plVar10 + 0xb8),plVar10);
          uVar22 = *(undefined8 *)(plVar7[1] + 0x18);
          func_0x0001074d43a0();
          func_0x0001074d4154();
          func_0x0001074d3fa0();
          func_0x0001074d416c(uVar22);
          func_0x0001074d3d0c();
          func_0x0001074d4b94();
          func_0x0001074d3f28();
          (*extraout_x8_22)();
        }
        func_0x0001074d3ca4(*(undefined8 *)(*plVar7 + 0x218),*(undefined8 *)(plVar7[1] + 0x18));
        func_0x0001074d3f28();
        (*extraout_x8_23)();
      }
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      (**(code **)(extraout_x9_01 + 0x58))();
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      func_0x0001074d4288();
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      func_0x0001074d48f4();
      lVar16 = *(long *)(*(long *)(lVar17 + lVar14) + 0x38);
      for (lVar14 = *(long *)(*(long *)(lVar17 + lVar14) + 0x30); lVar14 != lVar16;
          lVar14 = lVar14 + 0x28) {
        func_0x0001074d3d0c();
        func_0x0001074d3e8c();
        (*extraout_x8_24)();
        func_0x0001074d3d0c();
        uStack_630._0_1_ = 4;
        func_0x0001074d4748();
        func_0x0001074d3df8();
      }
    }
  }
LAB_1074cf25c:
  func_0x0001074d48e4();
  return;
}



/* Entry: 1074cec24; end: 1074cf3d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074cec24(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,int param_6,uint param_7,int param_8)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  code *extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined8 uVar12;
  float unaff_s9;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  
  plVar4 = &uStack_180;
  if (((param_7 & 1) == 0) && (param_8 == 0)) {
    return;
  }
  lVar5 = *param_5;
  lVar8 = param_5[1];
  func_0x0001074d3b54();
  func_0x0001074d455c((float)param_1,*(undefined1 *)(lVar5 + 4));
  func_0x0001074d43d4();
  dVar11 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(lVar5 + 0x218) + 0xc));
  param_1 = param_1 - dVar11;
  _exp2();
  uVar12 = *(undefined8 *)(lVar8 + 0x7c);
  uStack_88 = CONCAT44((float)((ulong)uVar12 >> 0x20) / ((float)param_1 * unaff_s9),
                       (float)uVar12 / ((float)param_1 * unaff_s9));
  uVar3 = *(ulong *)(param_5[3] + 0x28);
  plVar6 = (long *)(*(long *)(*(long *)param_5[2] + 0x10) + 0x20);
  if (param_6 == 0) {
    FUN_1074d0444();
  }
  else {
    FUN_1074d0bd4();
  }
  bVar1 = ((ulong)plVar6 & 0x7fffffff00000000) == 0 && (uVar3 & 0x7fffffff) == 0;
  plStack_98 = plVar6;
  uStack_90 = uVar3;
  func_0x0001074d3d0c();
  uStack_f8 = 7;
  uStack_f0 = 0x3f800000;
  uStack_180._4_4_ = 7;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = CONCAT53(uStack_170._3_5_,0x10101);
  (**(code **)(*plVar6 + 0x80))();
  func_0x0001074d3d0c();
  uStack_180._2_1_ = 1;
  uStack_180._0_1_ = 0;
  uStack_180._1_1_ = 1;
  (**(code **)(*plVar6 + 0x88))();
  uVar9 = (undefined4)uVar12;
  uVar3 = uVar3 >> 0x20 & 1;
  if (param_7 != 0) {
    lVar8 = param_5[3];
    lVar5 = 0xa40;
    if (param_6 == 0) {
      lVar5 = 0xa38;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x0001074d418c();
    func_0x0001074d3c40();
    if (lStack_b8 == 0) goto LAB_1074cf25c;
    func_0x0001074d3adc();
    (*extraout_x8)();
    uVar2 = (int)plVar6 == 2;
    if (!(bool)uVar2) goto LAB_1074cf25c;
    func_0x0001074d3d0c();
    (**(code **)(*plVar6 + 0x40))();
    func_0x0001074d418c();
    if (((bool)uVar2) && ((*(byte *)(extraout_x8_00 + 0x16) >> 6 & 1) != 0)) {
      if ((*(byte *)(*(long *)(lVar8 + lVar5) + 200) & 1) == 0) {
        func_0x0001074d4204(*extraout_x8_00);
        func_0x0001074d496c();
        uStack_180._0_1_ = 0x60;
        uStack_180._1_1_ = 0;
        uStack_180._2_1_ = 0;
        uStack_180._3_1_ = 0;
        uStack_180._4_4_ = 0;
        uStack_178 = (undefined4)uStack_f8;
        uStack_174 = (undefined4)((ulong)uStack_f8 >> 0x20);
        func_0x0001074d492c(*(undefined8 *)(lVar8 + lVar5));
        if (CONCAT44(uStack_174,uStack_178) != 0) {
          func_0x0001074d3aa8();
        }
      }
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_180._0_1_ = 0;
      uStack_180._1_1_ = 0;
      uStack_180._2_1_ = 0;
      uStack_180._3_1_ = 0;
      uStack_180._4_4_ = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      func_0x0001074d4960();
      uStack_178 = uStack_f0;
      uStack_174 = uStack_ec;
      uStack_180._0_1_ = (undefined1)uStack_f8;
      uStack_180._1_1_ = (undefined1)((ulong)uStack_f8 >> 8);
      uStack_180._2_1_ = (undefined1)((ulong)uStack_f8 >> 0x10);
      uStack_180._3_1_ = (undefined1)((ulong)uStack_f8 >> 0x18);
      uStack_180._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
      uStack_168 = uStack_e0;
      uStack_170 = uStack_e8;
      uStack_158 = uStack_d0;
      uStack_160 = uStack_d8;
      uStack_148 = uStack_c0;
      uStack_150 = uStack_c8;
      uStack_140 = uStack_88;
      uVar9 = *(undefined4 *)(*(long *)(param_5[1] + 0x28) + 0xa4);
      uStack_138 = CONCAT44(uStack_138._4_4_,uVar9);
      uVar12 = uStack_c8;
      func_0x0001074d3ca4(*(undefined8 *)(*param_5 + 0x218));
      uStack_138 = CONCAT44(uVar9,(undefined4)uStack_138);
      func_0x0001074d3cc0();
      if ((bool)uVar2) {
        func_0x0001074d3f90();
        uStack_130 = CONCAT44((int)uVar12,uVar9);
        uStack_128 = CONCAT44(param_4,param_3);
      }
      plVar6 = *(long **)(*(long *)(lVar8 + lVar5) + 0xc0);
      (**(code **)(*plVar6 + 0x20))
                (plVar6,&uStack_180,*(undefined8 *)(*(long *)(lVar8 + lVar5) + 0xb8));
      func_0x0001074d3d0c();
      func_0x0001074d4b74();
      func_0x0001074d4288();
      func_0x0001074d3cc0();
      if ((bool)uVar2) {
        func_0x0001074d3b9c(param_5[1]);
        func_0x0001074d3e40();
      }
    }
    else {
      if (bVar1) {
        plVar6 = (long *)(*param_5 + 0x10);
      }
      else {
        FUN_107501f68(&uStack_180,*param_5,(ulong)&plStack_98 | 4,uVar3,extraout_x8_00[5]);
        plVar6 = &uStack_180;
      }
      func_0x000107482794(&uStack_f8);
      func_0x0001074d3d0c();
      func_0x0001074d3f58(*(undefined8 *)(*plVar6 + 0xd0));
      func_0x0001074d3d0c();
      func_0x0001074d3e40(*(undefined8 *)(*plVar6 + 0xa8));
      func_0x0001074d3d0c();
      uVar9 = *(undefined4 *)(*(long *)(extraout_x8_01 + 0x28) + 0xa4);
      func_0x0001074d3f28();
      (*extraout_x8_02)();
      func_0x0001074d3cc0();
      if ((bool)uVar2) {
        plVar6 = *(long **)(param_5[1] + 0x18);
        func_0x0001074d3f90(*(undefined8 *)(param_5[1] + 0x28),*param_5);
        uStack_180._0_1_ = (undefined1)uVar9;
        uStack_180._1_1_ = (undefined1)((uint)uVar9 >> 8);
        uStack_180._2_1_ = (undefined1)((uint)uVar9 >> 0x10);
        uStack_180._3_1_ = (undefined1)((uint)uVar9 >> 0x18);
        uStack_180._4_4_ = (undefined4)uVar12;
        uStack_178 = param_3;
        uStack_174 = param_4;
        func_0x0001074d4174(*(undefined8 *)(*plVar6 + 0xb8),plVar6);
        plVar6 = *(long **)(param_5[1] + 0x18);
        lVar7 = *(long *)(param_5[1] + 0x28);
        FUN_107416bf8(lVar7);
        func_0x000107482794(&uStack_180,lVar7 + 0xaa0);
        func_0x0001074d416c(*(undefined8 *)(*plVar6 + 0xd0));
        func_0x0001074d3d0c();
        func_0x0001074d4b94();
        func_0x0001074d3f28();
        (*extraout_x8_03)();
      }
    }
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    (**(code **)(extraout_x9 + 0x58))();
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    func_0x0001074d4288();
    func_0x0001074d3d0c();
    func_0x0001074d4b74();
    func_0x0001074d48f4();
    lVar7 = *(long *)(*(long *)(lVar8 + lVar5) + 0x38);
    for (lVar5 = *(long *)(*(long *)(lVar8 + lVar5) + 0x30); uVar9 = (undefined4)uVar12,
        lVar5 != lVar7; lVar5 = lVar5 + 0x28) {
      func_0x0001074d3d0c();
      func_0x0001074d3e8c();
      (*extraout_x8_04)();
      func_0x0001074d3d0c();
      uStack_180._0_1_ = 1;
      uStack_180._4_4_ = 0x3f800000;
      func_0x0001074d3df8(*(undefined8 *)(*plVar6 + 0x138));
    }
    func_0x0001074d48e4();
  }
  if (param_8 == 0) {
    return;
  }
  lVar8 = param_5[3];
  lVar5 = 0xa50;
  if (param_6 == 0) {
    lVar5 = 0xa48;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  func_0x0001074d418c();
  func_0x0001074d3c40();
  if (lStack_b8 != 0) {
    func_0x0001074d3adc();
    (*extraout_x8_05)();
    uVar2 = (int)plVar6 == 2;
    if ((bool)uVar2) {
      func_0x0001074d3d0c();
      (**(code **)(*plVar6 + 0x40))();
      func_0x0001074d418c();
      if (((bool)uVar2) && ((*(byte *)(extraout_x8_06 + 0x16) >> 6 & 1) != 0)) {
        if ((*(byte *)(*(long *)(lVar8 + lVar5) + 200) & 1) == 0) {
          func_0x0001074d4204(*extraout_x8_06);
          func_0x0001074d496c();
          uStack_180._0_1_ = 0x60;
          uStack_180._1_1_ = 0;
          uStack_180._2_1_ = 0;
          uStack_180._3_1_ = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = (undefined4)uStack_f8;
          uStack_174 = (undefined4)((ulong)uStack_f8 >> 0x20);
          func_0x0001074d492c(*(undefined8 *)(lVar8 + lVar5));
          if (CONCAT44(uStack_174,uStack_178) != 0) {
            func_0x0001074d3aa8();
          }
        }
        uStack_130 = 0;
        uStack_128 = 0;
        func_0x0001074d4960();
        uStack_178 = uStack_f0;
        uStack_174 = uStack_ec;
        uStack_180._0_1_ = (undefined1)uStack_f8;
        uStack_180._1_1_ = (undefined1)((ulong)uStack_f8 >> 8);
        uStack_180._2_1_ = (undefined1)((ulong)uStack_f8 >> 0x10);
        uStack_180._3_1_ = (undefined1)((ulong)uStack_f8 >> 0x18);
        uStack_180._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
        uStack_168 = uStack_e0;
        uStack_170 = uStack_e8;
        uStack_158 = uStack_d0;
        uStack_160 = uStack_d8;
        uStack_148 = uStack_c0;
        uStack_150 = uStack_c8;
        uStack_140 = uStack_88;
        uVar9 = *(undefined4 *)(*(long *)(param_5[1] + 0x28) + 0xa4);
        uStack_138 = CONCAT44(uStack_138._4_4_,uVar9);
        func_0x0001074d3ca4(*(undefined8 *)(*param_5 + 0x218));
        uVar10 = (undefined4)uStack_c8;
        uStack_138 = CONCAT44(uVar9,(undefined4)uStack_138);
        func_0x0001074d3cc0();
        if ((bool)uVar2) {
          func_0x0001074d3f90();
          uStack_130 = CONCAT44(uVar10,uVar9);
          uStack_128 = CONCAT44(param_4,param_3);
        }
        plVar4 = *(long **)(*(long *)(lVar8 + lVar5) + 0xc0);
        (**(code **)(*plVar4 + 0x20))
                  (plVar4,&uStack_180,*(undefined8 *)(*(long *)(lVar8 + lVar5) + 0xb8));
        func_0x0001074d3d0c();
        func_0x0001074d4b20();
        func_0x0001074d4288();
        func_0x0001074d3cc0();
        if ((bool)uVar2) {
          func_0x0001074d3b9c(param_5[1]);
          func_0x0001074d3e40();
        }
      }
      else {
        if (bVar1) {
          plVar4 = (long *)(*param_5 + 0x10);
        }
        else {
          FUN_107501f68(&uStack_180,*param_5,(ulong)&plStack_98 | 4,uVar3,extraout_x8_06[5]);
        }
        func_0x000107482794(&uStack_f8);
        func_0x0001074d3d0c();
        func_0x0001074d3f58(*(undefined8 *)(*plVar4 + 0xd0));
        func_0x0001074d3d0c();
        func_0x0001074d3e40(*(undefined8 *)(*plVar4 + 0xa8));
        func_0x0001074d3d0c();
        uVar10 = *(undefined4 *)(*(long *)(extraout_x8_07 + 0x28) + 0xa4);
        func_0x0001074d3f28();
        (*extraout_x8_08)();
        func_0x0001074d3cc0();
        if ((bool)uVar2) {
          plVar4 = *(long **)(param_5[1] + 0x18);
          func_0x0001074d3f90(*(undefined8 *)(param_5[1] + 0x28),*param_5);
          uStack_180._0_1_ = (undefined1)uVar10;
          uStack_180._1_1_ = (undefined1)((uint)uVar10 >> 8);
          uStack_180._2_1_ = (undefined1)((uint)uVar10 >> 0x10);
          uStack_180._3_1_ = (undefined1)((uint)uVar10 >> 0x18);
          uStack_180._4_4_ = uVar9;
          uStack_178 = param_3;
          uStack_174 = param_4;
          func_0x0001074d4174(*(undefined8 *)(*plVar4 + 0xb8),plVar4);
          uVar12 = *(undefined8 *)(param_5[1] + 0x18);
          func_0x0001074d43a0();
          func_0x0001074d4154();
          func_0x0001074d3fa0();
          func_0x0001074d416c(uVar12);
          func_0x0001074d3d0c();
          func_0x0001074d4b94();
          func_0x0001074d3f28();
          (*extraout_x8_09)();
        }
        func_0x0001074d3ca4(*(undefined8 *)(*param_5 + 0x218),*(undefined8 *)(param_5[1] + 0x18));
        func_0x0001074d3f28();
        (*extraout_x8_10)();
      }
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      (**(code **)(extraout_x9_00 + 0x58))();
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      func_0x0001074d4288();
      func_0x0001074d3d0c();
      func_0x0001074d4b20();
      func_0x0001074d48f4();
      lVar7 = *(long *)(*(long *)(lVar8 + lVar5) + 0x38);
      for (lVar5 = *(long *)(*(long *)(lVar8 + lVar5) + 0x30); lVar5 != lVar7; lVar5 = lVar5 + 0x28)
      {
        func_0x0001074d3d0c();
        func_0x0001074d3e8c();
        (*extraout_x8_11)();
        func_0x0001074d3d0c();
        uStack_180._0_1_ = 4;
        func_0x0001074d4748();
        func_0x0001074d3df8();
      }
    }
  }
LAB_1074cf25c:
  func_0x0001074d48e4();
  return;
}



/* Entry: 1074cf3d8; end: 1074cf487;  */

void FUN_1074cf3d8(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_68 [24];
  
  func_0x0001074d4018();
  lVar2 = ((long *)param_1[5])[1];
  for (lVar3 = *(long *)param_1[5]; lVar3 != lVar2; lVar3 = lVar3 + 8) {
    func_0x0001074d42fc();
    FUN_1074e3c98();
    bVar1 = param_1 != (long *)0x0;
    param_1 = (long *)0x0;
    if (bVar1) {
      func_0x00010724ef84(auStack_68,*(long *)(unaff_x20 + 0x18) + 8);
      param_1 = unaff_x19;
      (**(code **)(*unaff_x19 + 0x40))();
      func_0x0001074d3fd8();
    }
  }
  return;
}



/* Entry: 1074cf488; end: 1074cf507;  */

void FUN_1074cf488(undefined8 param_1,long param_2)

{
  FUN_1074d37e0(param_1,param_2,param_2 + 0x48,param_2 + 0x80,param_2 + 200,param_2 + 0x100,
                param_2 + 0x138,param_2 + 0x170,param_2 + 0x178);
  return;
}



/* Entry: 1074cf508; end: 1074cfaab;  */

ulong FUN_1074cf508(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8_02;
  float *pfVar9;
  code *extraout_x8_03;
  long *plVar10;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar11;
  undefined1 uVar12;
  long *plVar13;
  long *plVar14;
  ulong *puVar15;
  undefined4 uVar16;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  long *aplStack_3a0 [2];
  long *aplStack_390 [2];
  uint uStack_380;
  uint uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [8];
  undefined1 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_298;
  long alStack_1e8 [18];
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  undefined1 auStack_58 [56];
  undefined1 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001074d40b4();
  func_0x0001074d3a98();
  uStack_10 = extraout_x8;
  (**(code **)(*(long *)*param_2 + 0x68))(alStack_1e8);
  FUN_107486e5c(param_1 + 0x28,alStack_1e8);
  func_0x0001073ad4a0(alStack_1e8);
  FUN_1074e3b28(param_1);
  plVar5 = (long *)(param_1 + 0x40);
  FUN_1073ad3c4(plVar5);
  plVar1 = (long *)(*(undefined8 **)(param_1 + 0x28))[1];
  for (plVar13 = (long *)**(undefined8 **)(param_1 + 0x28); plVar13 != plVar1; plVar13 = plVar13 + 1
      ) {
    (**(code **)(**(long **)(*plVar13 + 0x220) + 0x28))
              (alStack_1e8,*(long **)(*plVar13 + 0x220),*(undefined8 *)(param_1 + 0x18));
    lVar8 = alStack_1e8[0];
    func_0x0001073e091c(alStack_1e8);
    if (lVar8 != 0) {
      lVar4 = lVar8 + 0x38;
      func_0x000104c32db4(lVar4,*(long *)(param_1 + 0x18) + 8);
      if ((int)lVar4 != 0) {
        func_0x0001074d43f4(*param_2);
        (*extraout_x8_00)();
        func_0x00010782f9e0(&uStack_380);
        puVar15 = *(ulong **)(lVar8 + 0xb0);
        puVar2 = *(ulong **)(lVar8 + 0xb8);
        if (puVar15 == puVar2) {
          func_0x0001074d4820();
          if (extraout_x8_02 != 0) {
            do {
              func_0x0001074d41f4();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001074d4494();
          func_0x0001074d4484();
          uStack_158 = uStack_158 & 0xffffffffffffff00;
          uStack_140 = 0;
          plVar10 = alStack_1e8;
          FUN_1074d3918();
          plVar10[1] = (long)plVar5;
          lVar8 = *(long *)(param_1 + 0x40);
          *plVar10 = lVar8;
          *(long **)(lVar8 + 8) = plVar10;
          *(long **)(param_1 + 0x40) = plVar10;
          func_0x0001074d43a8();
        }
        else {
          for (; puVar15 != puVar2; puVar15 = puVar15 + 3) {
            func_0x0001074d4820();
            if (extraout_x8_01 != 0) {
              do {
                func_0x0001074d41f4();
              } while (extraout_w10 != 0);
            }
            func_0x0001074d4494();
            func_0x0001074d4484();
            uVar6 = 0;
            uStack_150 = puVar15[1];
            uStack_158 = *puVar15;
            uStack_148 = puVar15[2];
            uStack_140 = 1;
            plVar14 = *(long **)(param_1 + 0x48);
            for (plVar10 = plVar14; plVar10 != plVar5; plVar10 = (long *)plVar10[1]) {
              uVar6 = uVar6 + 1;
            }
            while (uVar7 = uVar6, uVar7 != 0) {
              uVar6 = uVar7 >> 1;
              plVar10 = plVar14;
              uVar11 = uVar6;
              while (0 < (long)uVar11) {
                plVar10 = (long *)plVar10[1];
                uVar11 = uVar11 - 1;
              }
              if (*(float *)(plVar10 + 0x14) <= (float)uStack_158) {
                plVar14 = (long *)plVar10[1];
                uVar6 = uVar7 + ~uVar6;
              }
            }
            plVar10 = alStack_1e8;
            FUN_1074d3918();
            lVar8 = *plVar14;
            *(long **)(lVar8 + 8) = plVar10;
            *plVar10 = lVar8;
            *plVar14 = (long)plVar10;
            plVar10[1] = (long)plVar14;
            func_0x0001074d43a8();
          }
        }
        func_0x0001073ad47c(&uStack_380);
      }
    }
  }
  func_0x0001077512dc(*(undefined4 *)param_2[7],&uStack_380);
  uStack_298 = param_2[6];
  func_0x000107751334(alStack_1e8,&uStack_380);
  func_0x000107267da8(&uStack_380);
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar8 + 0x950) == 1) {
    func_0x0001072f64f4(aplStack_390,lVar8 + 0x910);
  }
  else if (*(int *)(lVar8 + 0x950) == 0) {
    FUN_107403c84(aplStack_390);
  }
  else {
    uStack_380 = uStack_380 & 0xffffff00;
    uStack_348 = 0;
    uStack_340 = 0;
    func_0x0001072f6da0(auStack_58);
    FUN_1073f20f4(aplStack_390,lVar8 + 0x910,alStack_1e8,&uStack_380,auStack_58);
    func_0x0001072dbd40(auStack_58);
    func_0x0001074d4554();
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar8 + 0x998) == 1) {
    func_0x000107278b70(aplStack_3a0,lVar8 + 0x958);
  }
  else if (*(int *)(lVar8 + 0x998) == 0) {
    func_0x0001072d124c(aplStack_3a0);
  }
  else {
    uStack_380 = uStack_380 & 0xffffff00;
    uStack_348 = 0;
    uStack_340 = 0;
    func_0x0001072d124c(auStack_58);
    FUN_10733d1e8(aplStack_3a0,lVar8 + 0x958,alStack_1e8,&uStack_380,auStack_58);
    func_0x00010726b09c(auStack_58);
    func_0x0001074d4554();
  }
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3b0 = 0x3f800000;
  FUN_107372aa4(&uStack_3d0,(aplStack_3a0[0][1] - *aplStack_3a0[0]) / 0x38);
  lVar4 = aplStack_3a0[0][1];
  for (lVar8 = *aplStack_3a0[0]; uVar3 = lVar8 == lVar4, !(bool)uVar3; lVar8 = lVar8 + 0x38) {
    func_0x0001072e89a4(&uStack_3d0,lVar8);
  }
  uStack_380 = *(uint *)param_2[7];
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar8 + 0x5e0) == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(int *)(lVar8 + 0x5e0) == 1;
    if ((bool)uVar3) {
      uVar12 = *(undefined1 *)(lVar8 + 0x5b0);
    }
    else {
      auStack_58[0] = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      lVar8 = lVar8 + 0x5b0;
      func_0x000107280464(lVar8,alStack_1e8,auStack_58,0);
      uVar12 = (undefined1)lVar8;
      func_0x0001074d4a98();
      lVar8 = *(long *)(param_1 + 0x18);
    }
  }
  uStack_37c = CONCAT31(uStack_37c._1_3_,uVar12) & 0xffffff01;
  if (*(int *)(lVar8 + 0x9d0) == 0) {
    uVar16 = 0;
  }
  else {
    uVar3 = *(int *)(lVar8 + 0x9d0) == 1;
    if ((bool)uVar3) {
      uVar16 = *(undefined4 *)(lVar8 + 0x9a0);
    }
    else {
      auStack_58[0] = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      uVar16 = 0;
      func_0x00010727f6f4((undefined4 *)(lVar8 + 0x9a0),alStack_1e8,auStack_58);
      func_0x0001074d4a98();
    }
  }
  pfVar9 = (float *)*aplStack_390[0];
  uStack_378 = uVar16;
  func_0x00010725aba0((double)*pfVar9,(double)pfVar9[1],(double)pfVar9[2],(double)pfVar9[3],
                      &uStack_370);
  func_0x0001072638b4(auStack_350,&uStack_3d0);
  *(ulong *)(param_1 + 0x780) = CONCAT44(uStack_374,uStack_378);
  *(ulong *)(param_1 + 0x778) = CONCAT44(uStack_37c,uStack_380);
  *(undefined8 *)(param_1 + 0x790) = uStack_368;
  *(undefined8 *)(param_1 + 0x788) = uStack_370;
  *(undefined8 *)(param_1 + 0x7a0) = uStack_358;
  *(undefined8 *)(param_1 + 0x798) = uStack_360;
  func_0x0001072e89fc(param_1 + 0x7a8,auStack_350);
  func_0x00010726ea70(auStack_350);
  lVar8 = *(long *)(param_1 + 0x18);
  func_0x0001074d42f0();
  (*extraout_x8_03)();
  if (*(int *)(lVar8 + 0x14) == 0) {
    uVar3 = *(long *)(param_1 + 0x50) == 0;
    uVar6 = (ulong)!(bool)uVar3;
  }
  else {
    uVar6 = 0;
  }
  func_0x00010726ea70(&uStack_3d0);
  func_0x00010726b09c(aplStack_3a0);
  func_0x0001072dbd40(aplStack_390);
  func_0x000107267da8(alStack_1e8);
  func_0x0001074d39e4(uStack_10);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001074d4a98();
    func_0x00010726ea70(&uStack_3d0);
    func_0x00010726b09c(aplStack_3a0);
    func_0x0001072dbd40(aplStack_390);
    plVar5 = alStack_1e8;
    func_0x000107267da8();
    func_0x0001074d3bc4();
    return plVar5[0xd9];
  }
  return uVar6;
}



/* Entry: 1074cfaac; end: 1074cfab3;  */

undefined8 FUN_1074cfaac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x6c8);
}



/* Entry: 1074cfab4; end: 1074cfb5b;  */

long FUN_1074cfab4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074cfb5c; end: 1074cfb73;  */

void FUN_1074cfb5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074cfb74; end: 1074cfce3;  */

void FUN_1074cfb74(long param_1)

{
  FUN_10748aa80(param_1 + 0x5d0);
  FUN_107482af4(param_1 + 0x570);
  func_0x000107410c2c(param_1 + 0x518);
  func_0x000107410c2c(param_1 + 0x4c0);
  func_0x000107410c2c(param_1 + 0x468);
  FUN_1074335c8(param_1 + 0x400);
  func_0x000107410c2c(param_1 + 0x3a8);
  FUN_1074335c8(param_1 + 0x340);
  func_0x000107410c2c(param_1 + 0x2e8);
  FUN_10748aa80(param_1 + 0x290);
  FUN_107482af4(param_1 + 0x230);
  func_0x000107410c2c(param_1 + 0x1d8);
  func_0x000107410c2c(param_1 + 0x180);
  func_0x000107410c2c(param_1 + 0x128);
  FUN_1074335c8(param_1 + 0xc0);
  func_0x000107410c2c(param_1 + 0x68);
  FUN_107432d98(param_1 + 0x20);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433574();
  }
  return;
}



/* Entry: 1074cfce4; end: 1074cfcfb;  */

void FUN_1074cfce4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074cfcfc; end: 1074cfd7b;  */

long FUN_1074cfcfc(long param_1)

{
  FUN_1073dd4c4(param_1 + 0x2f0);
  FUN_1073dd4c4(param_1 + 0x2b8);
  FUN_1073dd4c4(param_1 + 0x280);
  FUN_1073debc4(param_1 + 0x238);
  FUN_1073dd4c4(param_1 + 0x200);
  FUN_1073debc4(param_1 + 0x1b8);
  FUN_1073dd4c4(param_1 + 0x180);
  FUN_1073dd4c4(param_1 + 0x138);
  FUN_1073dd4c4(param_1 + 0x100);
  FUN_1073dd4c4(param_1 + 200);
  FUN_1073debc4(param_1 + 0x80);
  func_0x0001074d49f4();
  FUN_1073debc4(param_1);
  return param_1;
}



/* Entry: 1074cfd7c; end: 1074cfddf;  */

long FUN_1074cfd7c(float param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x0001074d46d8();
    param_1 = 0.0;
    func_0x00010727f6f4();
    func_0x0001074d3f34();
  }
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001074d3c20();
  func_0x0001074d3bc4();
  if (*(float *)(param_2 + 0x18) != param_1) {
    *(float *)(param_2 + 0x18) = param_1;
  }
  func_0x0001074d4924(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68));
  lVar1 = *(long *)(param_2 + 0x1a0);
  func_0x0001074d4924(lVar1,*(undefined8 *)(param_2 + 0x1a8));
  if (*(char *)(param_2 + 0x420) == '\x01') {
    lVar1 = *(long *)(param_2 + 0x2e0);
    func_0x0001074d4924(lVar1,*(undefined8 *)(param_2 + 0x2e8));
  }
  if (*(char *)(param_2 + 0x568) == '\x01') {
    lVar2 = *(long *)(param_2 + 0x430);
    lVar3 = 0;
    for (lVar1 = *(long *)(param_2 + 0x428); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      if (*(float *)(lVar1 + 8) != param_1) {
        *(float *)(lVar1 + 8) = param_1;
        lVar3 = 1;
      }
    }
    return lVar3;
  }
  return lVar1;
}



/* Entry: 1074cfde0; end: 1074cfe67;  */

undefined8 FUN_1074cfde0(float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(float *)(param_2 + 0x18) != param_1) {
    *(float *)(param_2 + 0x18) = param_1;
  }
  func_0x0001074d4924(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68));
  uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  func_0x0001074d4924(uVar1,*(undefined8 *)(param_2 + 0x1a8));
  if (*(char *)(param_2 + 0x420) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x2e0);
    func_0x0001074d4924(uVar1,*(undefined8 *)(param_2 + 0x2e8));
  }
  if (*(char *)(param_2 + 0x568) == '\x01') {
    lVar3 = *(long *)(param_2 + 0x430);
    uVar1 = 0;
    for (lVar2 = *(long *)(param_2 + 0x428); lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
      if (*(float *)(lVar2 + 8) != param_1) {
        *(float *)(lVar2 + 8) = param_1;
        uVar1 = 1;
      }
    }
    return uVar1;
  }
  return uVar1;
}



/* Entry: 1074cfe68; end: 1074cfe97;  */

undefined8 FUN_1074cfe68(float param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    if (*(float *)(param_2 + 8) != param_1) {
      *(float *)(param_2 + 8) = param_1;
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 1074cfe98; end: 1074cff07;  */

long FUN_1074cfe98(long param_1)

{
  func_0x00010726ea70(param_1 + 0x68);
  FUN_10748ab6c(param_1 + 0x28);
  FUN_1074ae918(param_1 + 8);
  return param_1;
}



/* Entry: 1074cff08; end: 1074cff63;  */

void FUN_1074cff08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001074d46f8();
    FUN_1074cff64();
    func_0x0001074d4c4c();
    FUN_1074cffb0();
  }
  uStack_38 = 1;
  FUN_1074d00f8(&uStack_40);
  return;
}



/* Entry: 1074cff64; end: 1074cffaf;  */

void FUN_1074cff64(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xe38e38e38e38e4) {
    plVar1 = param_1 + 2;
    func_0x0001074c6d30();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x24);
  }
  else {
    FUN_1074c6cf0();
    plVar1 = param_1 + 2;
    FUN_1074cffe0();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1074cffb0; end: 1074cffdf;  */

void FUN_1074cffb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1074cffe0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1074cffe0; end: 1074cfff3;  */

void FUN_1074cffe0(void)

{
  FUN_1074cfff4();
  return;
}



/* Entry: 1074cfff4; end: 1074d0057;  */

long FUN_1074cfff4(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001074d41b0();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x120) {
    func_0x0001074d42fc();
    FUN_1074d0058();
    unaff_x20 = lStack_38 + 0x120;
    lStack_38 = unaff_x20;
  }
  uStack_48 = 1;
  FUN_1074c6e2c(auStack_60);
  return unaff_x20;
}



/* Entry: 1074d0058; end: 1074d00f7;  */

void FUN_1074d0058(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074d3e80();
  func_0x000107269bac();
  func_0x000104c2fe00(param_1 + 0x40,unaff_x20 + 0x40);
  *(undefined2 *)(unaff_x19 + 0x78) = *(undefined2 *)(unaff_x20 + 0x78);
  func_0x000104c2fe00(unaff_x19 + 0x80,unaff_x20 + 0x80);
  func_0x000104c2fe00(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0xf0) = *(undefined4 *)(unaff_x20 + 0xf0);
  func_0x000107268400(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined4 *)(unaff_x19 + 0x118) = *(undefined4 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar1;
  return;
}



/* Entry: 1074d00f8; end: 1074d0123;  */

long FUN_1074d00f8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001074ae93c(param_1);
  }
  return param_1;
}



/* Entry: 1074d0124; end: 1074d0143;  */

void FUN_1074d0124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1074d0144; end: 1074d01db;  */

undefined8 FUN_1074d0144(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  undefined8 uVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x10;
  float *pfVar6;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = 0;
  lVar4 = *(long *)(param_2 + 0x80);
  lVar2 = *(long *)(param_2 + 0x88);
  do {
    if (lVar4 == lVar2) {
      return uVar5;
    }
    uVar7 = *(ulong *)(lVar4 + 0x80);
    uVar8 = (uVar7 + *(long *)(lVar4 + 0x68)) - *(long *)(lVar4 + 0x60);
    uVar9 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 4;
    if (uVar8 <= uVar9) {
      uVar9 = uVar8;
    }
    uVar8 = uVar7 << 4 | 8;
    for (; uVar7 < uVar9; uVar7 = uVar7 + 1) {
      lVar1 = *(long *)(param_2 + 0x18);
      if ((ulong)(*(long *)(param_2 + 0x20) - lVar1 >> 4) <= uVar7) {
        FUN_1074d03a4();
        if (*(float *)(param_3 + 0x18) != param_1) {
          *(float *)(param_3 + 0x18) = param_1;
        }
        bVar3 = *(char *)(param_3 + 0x5f0) != '\0';
        if (((*(char *)(param_3 + 0x5f0) != '\x01') ||
            (func_0x0001074d4cec(FUN_1074d01dc), param_2 = extraout_x8, bVar3)) ||
           (pfVar6 = (float *)(extraout_x9 + extraout_x10 * 0xa8 + 8), *pfVar6 == param_1)) {
          uVar5 = 0;
        }
        else {
          *pfVar6 = param_1;
          uVar5 = 1;
        }
        bVar3 = *(char *)(param_3 + 0x600) != '\0';
        if (((*(char *)(param_3 + 0x600) == '\x01') &&
            (func_0x0001074d4cec(uVar5), param_2 = extraout_x8_00, !bVar3)) &&
           (pfVar6 = (float *)(extraout_x9_00 + extraout_x10_00 * 0xa8 + 8), *pfVar6 != param_1)) {
          *pfVar6 = param_1;
          uVar5 = 1;
        }
        bVar3 = *(char *)(param_3 + 0x610) != '\0';
        if (((*(char *)(param_3 + 0x610) == '\x01') &&
            (func_0x0001074d4cec(), param_2 = extraout_x8_01, !bVar3)) &&
           (pfVar6 = (float *)(extraout_x9_01 + extraout_x10_01 * 0xa8 + 8), *pfVar6 != param_1)) {
          *pfVar6 = param_1;
          uVar5 = 1;
        }
        bVar3 = *(char *)(param_3 + 0x620) != '\0';
        if (((*(char *)(param_3 + 0x620) == '\x01') &&
            (func_0x0001074d4cec(), param_2 = extraout_x8_02, !bVar3)) &&
           (pfVar6 = (float *)(extraout_x9_02 + extraout_x10_02 * 0xa8 + 8), *pfVar6 != param_1)) {
          *pfVar6 = param_1;
          uVar5 = 1;
        }
        lVar4 = 0x418;
        if ((*(byte *)(param_3 + 0x30) & 4) != 0) {
          lVar4 = 0x728;
        }
        param_2 = param_2 + lVar4;
        lVar4 = *(long *)(param_2 + 0x80);
        if (((*(char *)(param_3 + 0x630) == '\x01') &&
            (*(ulong *)(param_3 + 0x628) < (ulong)((*(long *)(param_2 + 0x88) - lVar4) / 0xa8))) &&
           (pfVar6 = (float *)(lVar4 + *(ulong *)(param_3 + 0x628) * 0xa8 + 8), *pfVar6 != param_1))
        {
          *pfVar6 = param_1;
          lVar4 = *(long *)(param_2 + 0x80);
          uVar5 = 1;
        }
        if (((*(char *)(param_3 + 0x640) == '\x01') &&
            (*(ulong *)(param_3 + 0x638) < (ulong)((*(long *)(param_2 + 0x88) - lVar4) / 0xa8))) &&
           (pfVar6 = (float *)(lVar4 + *(ulong *)(param_3 + 0x638) * 0xa8 + 8), *pfVar6 != param_1))
        {
          *pfVar6 = param_1;
          uVar5 = 1;
        }
        return uVar5;
      }
      param_1 = *(float *)(lVar4 + 8);
      if (*(float *)(lVar1 + uVar8) != param_1) {
        *(float *)(lVar1 + uVar8) = param_1;
        uVar5 = 1;
      }
      uVar8 = uVar8 + 0x10;
    }
    lVar4 = lVar4 + 0xa8;
  } while( true );
}



/* Entry: 1074d01dc; end: 1074d03a3;  */

void FUN_1074d01dc(float param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x10;
  float *pfVar4;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  
  if (*(float *)(param_3 + 0x18) != param_1) {
    *(float *)(param_3 + 0x18) = param_1;
  }
  bVar1 = *(char *)(param_3 + 0x5f0) != '\0';
  if (((*(char *)(param_3 + 0x5f0) != '\x01') ||
      (func_0x0001074d4cec(), param_2 = extraout_x8, bVar1)) ||
     (pfVar4 = (float *)(extraout_x9 + extraout_x10 * 0xa8 + 8), *pfVar4 == param_1)) {
    uVar2 = 0;
  }
  else {
    *pfVar4 = param_1;
    uVar2 = 1;
  }
  bVar1 = *(char *)(param_3 + 0x600) != '\0';
  if (((*(char *)(param_3 + 0x600) == '\x01') &&
      (func_0x0001074d4cec(uVar2), param_2 = extraout_x8_00, !bVar1)) &&
     (pfVar4 = (float *)(extraout_x9_00 + extraout_x10_00 * 0xa8 + 8), *pfVar4 != param_1)) {
    *pfVar4 = param_1;
  }
  bVar1 = *(char *)(param_3 + 0x610) != '\0';
  if (((*(char *)(param_3 + 0x610) == '\x01') &&
      (func_0x0001074d4cec(), param_2 = extraout_x8_01, !bVar1)) &&
     (pfVar4 = (float *)(extraout_x9_01 + extraout_x10_01 * 0xa8 + 8), *pfVar4 != param_1)) {
    *pfVar4 = param_1;
  }
  bVar1 = *(char *)(param_3 + 0x620) != '\0';
  if (((*(char *)(param_3 + 0x620) == '\x01') &&
      (func_0x0001074d4cec(), param_2 = extraout_x8_02, !bVar1)) &&
     (pfVar4 = (float *)(extraout_x9_02 + extraout_x10_02 * 0xa8 + 8), *pfVar4 != param_1)) {
    *pfVar4 = param_1;
  }
  lVar3 = 0x418;
  if ((*(byte *)(param_3 + 0x30) & 4) != 0) {
    lVar3 = 0x728;
  }
  param_2 = param_2 + lVar3;
  lVar3 = *(long *)(param_2 + 0x80);
  if (((*(char *)(param_3 + 0x630) == '\x01') &&
      (*(ulong *)(param_3 + 0x628) < (ulong)((*(long *)(param_2 + 0x88) - lVar3) / 0xa8))) &&
     (pfVar4 = (float *)(lVar3 + *(ulong *)(param_3 + 0x628) * 0xa8 + 8), *pfVar4 != param_1)) {
    *pfVar4 = param_1;
    lVar3 = *(long *)(param_2 + 0x80);
  }
  if (((*(char *)(param_3 + 0x640) == '\x01') &&
      (*(ulong *)(param_3 + 0x638) < (ulong)((*(long *)(param_2 + 0x88) - lVar3) / 0xa8))) &&
     (pfVar4 = (float *)(lVar3 + *(ulong *)(param_3 + 0x638) * 0xa8 + 8), *pfVar4 != param_1)) {
    *pfVar4 = param_1;
  }
  return;
}



/* Entry: 1074d03a4; end: 1074d0417;  */

bool FUN_1074d03a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c03f28();
  if (*(float *)(puVar1 + 0x20) < *(float *)(param_2 + 0x20)) {
    return true;
  }
  if (*(float *)(puVar1 + 0x20) == *(float *)(param_2 + 0x20)) {
    if ((puVar1[0x24] != '\0') && (*(char *)(param_2 + 0x24) == '\0')) {
      return true;
    }
    if (puVar1[0x24] == *(char *)(param_2 + 0x24)) {
      uVar2 = *(undefined8 *)(puVar1 + 8);
      FUN_1074d0418(uVar2,*(undefined8 *)(param_2 + 8));
      return (char)uVar2 < '\0';
    }
  }
  return false;
}



/* Entry: 1074d0418; end: 1074d0443;  */

uint FUN_1074d0418(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  
  sVar5 = *param_1;
  sVar6 = *param_2;
  uVar8 = (uint)(sVar6 < sVar5);
  if (sVar5 < sVar6) {
    uVar8 = 0xffffffff;
  }
  if (sVar5 != sVar6) {
    return uVar8;
  }
  bVar3 = *(byte *)(param_1 + 2);
  bVar4 = *(byte *)(param_2 + 2);
  uVar8 = (uint)(bVar4 < bVar3);
  if (bVar3 < bVar4) {
    uVar8 = 0xffffffff;
  }
  if (bVar3 == bVar4) {
    uVar7 = *(uint *)(param_1 + 4);
    uVar1 = *(uint *)(param_2 + 4);
    uVar8 = (uint)(uVar1 < uVar7);
    if (uVar7 < uVar1) {
      uVar8 = 0xffffffff;
    }
    if (uVar7 == uVar1) {
      uVar1 = *(uint *)(param_1 + 6);
      uVar2 = *(uint *)(param_2 + 6);
      uVar7 = (uint)(uVar2 < uVar1);
      if (uVar1 < uVar2) {
        uVar7 = 0xffffffff;
      }
      uVar8 = 0;
      if (uVar1 != uVar2) {
        uVar8 = uVar7;
      }
    }
  }
  return uVar8;
}



/* Entry: 1074d0444; end: 1074d04eb;  */

void FUN_1074d0444(long param_1)

{
  ulong extraout_x8;
  undefined8 uVar1;
  long extraout_x9;
  float in_s3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  FUN_1073ba8b4(param_1 + 0x80,&uStack_60);
  if (in_s3 <= 0.0) {
    uVar1 = 0;
  }
  else {
    func_0x0001074d3d2c(*(undefined4 *)(param_1 + 0xf8));
    uVar1 = 0x10000000000;
    if ((extraout_x8 & 0x7fffffff) == 0 && extraout_x9 != 0) {
      uVar1 = 0;
    }
  }
  func_0x0001074d4b54(uVar1);
  FUN_1073ba8b4(param_1,auStack_70);
  uVar1 = 0x1000000000000;
  if (in_s3 <= 0.0) {
    uVar1 = 0;
  }
  func_0x0001074d4b2c(uVar1);
  return;
}



/* Entry: 1074d04ec; end: 1074d0523;  */

undefined8 * FUN_1074d04ec(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *unaff_x21;
  undefined1 auStack_18 [8];
  
  FUN_10745da08(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return (undefined8 *)(*param_1 + 0x58);
  }
  func_0x000104c03f28("map::at:  key not found");
  func_0x0001074d3fb8();
  func_0x0001074d39cc(*unaff_x21);
  func_0x0001074d39cc(unaff_x21[1]);
  func_0x0001074d39cc(unaff_x21[2]);
  func_0x0001074d39cc(unaff_x21[3]);
  func_0x0001074d39cc(unaff_x21[4]);
  func_0x0001074d39cc(unaff_x21[5]);
  func_0x0001074d3e8c(*unaff_x21);
  (*extraout_x8)();
  func_0x0001074d3e8c(unaff_x21[1]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[2]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[3]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[4]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[5]);
  func_0x0001074d3ab4();
  func_0x0001074d4cc0();
  if ((bool)in_ZR) {
    puVar1 = unaff_x21 + 0x16;
    func_0x00010745d404(puVar1);
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  func_0x0001074d3ff8();
  return puVar1;
}



/* Entry: 1074d0524; end: 1074d0603;  */

void FUN_1074d0524(void)

{
  undefined1 in_ZR;
  code *extraout_x8;
  undefined8 *unaff_x21;
  
  func_0x0001074d3fb8();
  func_0x0001074d39cc(*unaff_x21);
  func_0x0001074d39cc(unaff_x21[1]);
  func_0x0001074d39cc(unaff_x21[2]);
  func_0x0001074d39cc(unaff_x21[3]);
  func_0x0001074d39cc(unaff_x21[4]);
  func_0x0001074d39cc(unaff_x21[5]);
  func_0x0001074d3e8c(*unaff_x21);
  (*extraout_x8)();
  func_0x0001074d3e8c(unaff_x21[1]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[2]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[3]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[4]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[5]);
  func_0x0001074d3ab4();
  func_0x0001074d4cc0();
  if ((bool)in_ZR) {
    func_0x00010745d404(unaff_x21 + 0x16);
  }
  func_0x0001074d3ff8();
  return;
}



/* Entry: 1074d0604; end: 1074d062f;  */

undefined1  [16] FUN_1074d0604(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  (**(code **)(*param_1 + 0x18))();
  auVar1._8_8_ = param_2 & 0xffffffff;
  auVar1._0_8_ = (ulong)param_1 & 0xffffffff00000101;
  return auVar1;
}



/* Entry: 1074d0630; end: 1074d07ef;  */

void FUN_1074d0630(undefined4 param_1,long param_2,uint param_3,char *param_4,undefined8 *param_5,
                  uint param_6,long param_7,long param_8,undefined1 param_9)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 in_stack_00000070;
  undefined1 auStack_288 [128];
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001074d40b4();
  dVar6 = *(double *)(param_8 + 0x78);
  _log2(dVar6);
  func_0x0001074d455c((float)dVar6,*(undefined1 *)(param_7 + 4));
  func_0x0001074d43d4();
  cVar2 = *param_4;
  cVar3 = param_4[1];
  FUN_10740b2c4(&uStack_88,param_7 + 0x10,cVar2 == '\0',cVar3 == '\0',param_8);
  param_3 = param_3 | param_6;
  if (param_3 == 1) {
    func_0x0001078769cc(auStack_108,&uStack_88);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0x3ff0000000000000;
    uStack_60 = 0x3ff0000000000000;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_38 = 0x3ff0000000000000;
    uStack_10 = 0x3ff0000000000000;
  }
  bVar4 = cVar2 == '\0';
  if (bVar4) {
    param_6 = 1;
  }
  bVar1 = 0;
  if (cVar3 == '\0') {
    bVar1 = (byte)param_6 ^ 1;
  }
  FUN_10740b378(auStack_188,param_7 + 0x10,bVar4,cVar3 == '\0',param_8);
  FUN_107501f68(auStack_208,param_7,param_4 + 4,param_4[0xc],param_8);
  func_0x000107482794(param_2,auStack_208);
  func_0x000107482794(param_2 + 0x40,&uStack_88);
  func_0x000107482794(param_2 + 0x80,auStack_108);
  FUN_107501db8(auStack_288,auStack_188,param_4 + 4,param_4[0xc],param_8,1,param_7);
  func_0x000107482794(param_2 + 0xc0,auStack_288);
  uVar7 = NEON_ucvtf(*param_5,4);
  *(undefined8 *)(param_2 + 0x100) = uVar7;
  *(undefined4 *)(param_2 + 0x108) = param_1;
  *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_8 + 0xa4);
  *(bool *)(param_2 + 0x110) = bVar4;
  *(byte *)(param_2 + 0x111) = bVar1;
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_8 + 0x4c));
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_8 + 0x50));
  *(float *)(param_2 + 0x114) = fVar5 / fVar8;
  *(undefined1 *)(param_2 + 0x118) = param_9;
  *(undefined1 *)(param_2 + 0x119) = in_stack_00000070;
  *(char *)(param_2 + 0x11a) = (char)param_3;
  return;
}



/* Entry: 1074d07f0; end: 1074d093b;  */

void FUN_1074d07f0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  char *param_5,uint param_6,uint param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  int extraout_w8;
  int extraout_w9;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = *param_4;
  uVar6 = param_4[3];
  uVar8 = param_4[2];
  param_3[1] = param_4[1];
  *param_3 = uVar5;
  param_3[3] = uVar6;
  param_3[2] = uVar8;
  uVar5 = param_4[4];
  uVar6 = param_4[7];
  uVar8 = param_4[6];
  param_3[5] = param_4[5];
  param_3[4] = uVar5;
  param_3[7] = uVar6;
  param_3[6] = uVar8;
  uVar5 = param_4[8];
  uVar6 = param_4[0xb];
  uVar8 = param_4[10];
  param_3[9] = param_4[9];
  param_3[8] = uVar5;
  param_3[0xb] = uVar6;
  param_3[10] = uVar8;
  uVar5 = param_4[0xc];
  uVar6 = param_4[0xf];
  uVar8 = param_4[0xe];
  param_3[0xd] = param_4[0xd];
  param_3[0xc] = uVar5;
  param_3[0xf] = uVar6;
  param_3[0xe] = uVar8;
  uVar5 = param_4[0x10];
  uVar6 = param_4[0x13];
  uVar8 = param_4[0x12];
  param_3[0x11] = param_4[0x11];
  param_3[0x10] = uVar5;
  param_3[0x13] = uVar6;
  param_3[0x12] = uVar8;
  uVar5 = param_4[0x14];
  uVar6 = param_4[0x17];
  uVar8 = param_4[0x16];
  param_3[0x15] = param_4[0x15];
  param_3[0x14] = uVar5;
  param_3[0x17] = uVar6;
  param_3[0x16] = uVar8;
  uVar5 = param_4[0x18];
  uVar6 = param_4[0x1b];
  uVar8 = param_4[0x1a];
  param_3[0x19] = param_4[0x19];
  param_3[0x18] = uVar5;
  param_3[0x1b] = uVar6;
  param_3[0x1a] = uVar8;
  uVar5 = param_4[0x1c];
  uVar6 = param_4[0x1f];
  uVar8 = param_4[0x1e];
  param_3[0x1d] = param_4[0x1d];
  param_3[0x1c] = uVar5;
  param_3[0x1f] = uVar6;
  param_3[0x1e] = uVar8;
  uVar7 = 0;
  uVar2 = 0x3f800000;
  uVar3 = 0x3f800000;
  uVar4 = uVar2;
  if (*param_5 == '\0') {
    uVar4 = 0;
  }
  *(undefined4 *)(param_3 + 0x20) = uVar4;
  if (param_5[1] == '\0') {
    uVar2 = 0;
  }
  *(undefined4 *)((long)param_3 + 0x104) = uVar2;
  uVar5 = *(undefined8 *)(param_5 + 4);
  uVar8 = param_4[0x20];
  param_3[0x22] = param_4[0x21];
  param_3[0x21] = uVar5;
  uVar4 = *(undefined4 *)((long)param_4 + 0x114);
  *(undefined4 *)(param_3 + 0x23) = uVar4;
  puVar1 = param_3;
  uStack_30 = param_9;
  uStack_28 = param_10;
  func_0x0001074d47fc(param_11._1_1_);
  *(undefined4 *)((long)puVar1 + 0x11c) = uVar4;
  func_0x0001074d47fc();
  *(undefined4 *)(puVar1 + 0x24) = uVar4;
  func_0x0001074d47fc();
  *(undefined4 *)((long)puVar1 + 0x124) = uVar4;
  func_0x0001074d47fc();
  *(undefined4 *)(puVar1 + 0x25) = uVar4;
  func_0x0001074d47fc();
  *(undefined4 *)((long)puVar1 + 300) = uVar4;
  puVar1[0x28] = uVar8;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  *(float *)(puVar1 + 0x29) = (float)param_6;
  *(float *)((long)puVar1 + 0x14c) = (float)param_7;
  *(undefined4 *)(puVar1 + 0x26) = 0;
  if (extraout_w9 == 0) {
    uVar3 = uVar7;
  }
  *(undefined4 *)((long)puVar1 + 0x134) = uVar3;
  *(undefined4 *)(puVar1 + 0x27) = param_2;
  uVar3 = 0;
  uVar2 = 0;
  *(undefined4 *)((long)puVar1 + 0x13c) = param_1;
  uVar4 = 0;
  if (extraout_w8 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    func_0x0001074d3f90(param_8,&uStack_30);
    uVar7 = param_1;
    uVar4 = param_2;
  }
  *(undefined4 *)(param_3 + 0x2a) = uVar7;
  *(undefined4 *)((long)param_3 + 0x154) = uVar4;
  *(undefined4 *)(param_3 + 0x2b) = uVar3;
  *(undefined4 *)((long)param_3 + 0x15c) = uVar2;
  return;
}



/* Entry: 1074d093c; end: 1074d09b3;  */

void FUN_1074d093c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long unaff_x19;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [24];
  
  func_0x0001074d3e80();
  func_0x0001074d4024(*param_1);
  if ((bool)in_ZR) {
    func_0x0001074d3b38();
  }
  func_0x0001074d3b1c();
  func_0x000107459d08(*(long *)(unaff_x19 + 0x20) + 0x9d0);
  func_0x000107459cf8(*(long *)(unaff_x19 + 0x20) + 0x7c0);
  func_0x000107459cf8(*(long *)(unaff_x19 + 0x20) + 0x870);
  lVar2 = *(long *)(unaff_x19 + 0x20) + 0x920;
  func_0x000107459cf8();
  func_0x0001074d3cf0();
  (**(code **)(**(long **)(lVar2 + 0x18) + 0x58))(*(long **)(lVar2 + 0x18),param_3);
  func_0x0001074d4718();
  (*extraout_x8)();
  func_0x0001074d4718();
  (*extraout_x8_00)();
  func_0x0001074d4718();
  (*extraout_x8_01)();
  puVar3 = (undefined8 *)*param_2;
  if (*(int *)(param_2 + 1) == 0) {
    func_0x0001074d3e8c(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)puVar3);
    (*extraout_x8_03)();
    func_0x0001074d4978();
    func_0x0001074d43bc();
    FUN_1074d6874();
    func_0x0001074d3fd8();
    func_0x0001074d4748(*(undefined8 *)(lVar2 + 0x18));
    func_0x0001074d3df8();
  }
  else {
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar1; puVar4 = puVar4 + 10) {
      func_0x0001074d3e8c(*(undefined8 *)(lVar2 + 0x18),*puVar4);
      (*extraout_x8_02)();
      func_0x00010002b838(auStack_58,&DAT_10f4102db);
      func_0x0001074d43bc();
      FUN_1074d6874();
      func_0x0001074d3fd8();
      func_0x0001074d3df8(*(undefined8 *)(**(long **)(lVar2 + 0x18) + 0x138));
    }
  }
  return;
}



/* Entry: 1074d09b4; end: 1074d0b13;  */

void FUN_1074d09b4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x58))(*(long **)(param_1 + 0x18),param_3);
  func_0x0001074d4718();
  (*extraout_x8)();
  func_0x0001074d4718();
  (*extraout_x8_00)();
  func_0x0001074d4718();
  (*extraout_x8_01)();
  puVar2 = (undefined8 *)*param_2;
  if (*(int *)(param_2 + 1) == 0) {
    func_0x0001074d3e8c(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)puVar2);
    (*extraout_x8_03)();
    func_0x0001074d4978();
    func_0x0001074d43bc();
    FUN_1074d6874();
    func_0x0001074d3fd8();
    func_0x0001074d4748(*(undefined8 *)(param_1 + 0x18));
    func_0x0001074d3df8();
  }
  else {
    puVar1 = (undefined4 *)puVar2[1];
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar1; puVar3 = puVar3 + 10) {
      func_0x0001074d3e8c(*(undefined8 *)(param_1 + 0x18),*puVar3);
      (*extraout_x8_02)();
      func_0x00010002b838(auStack_58,&DAT_10f4102db);
      func_0x0001074d43bc();
      FUN_1074d6874();
      func_0x0001074d3fd8();
      func_0x0001074d3df8(*(undefined8 *)(**(long **)(param_1 + 0x18) + 0x138));
    }
  }
  return;
}



/* Entry: 1074d0b14; end: 1074d0bd3;  */

void FUN_1074d0b14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  long *plVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  func_0x0001074d3e80();
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3f800000;
  FUN_10737efb4(&uStack_60,
                *(long *)(*(long *)(param_2 + 0x80) + 0x18) +
                *(long *)(*(long *)(param_2 + 0x90) + 0x18));
  plVar1 = (long *)(*(long *)(unaff_x20 + 0x90) + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_107373114(&uStack_60,plVar1 + 2);
  }
  plVar1 = (long *)(*(long *)(unaff_x20 + 0x80) + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_107373114(&uStack_60,plVar1 + 2);
  }
  FUN_10737efc8();
  func_0x0001072981bc(&uStack_60);
  return;
}



/* Entry: 1074d0bd4; end: 1074d0c7b;  */

void FUN_1074d0bd4(long param_1)

{
  ulong extraout_x8;
  undefined8 uVar1;
  long extraout_x9;
  float in_s3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  FUN_1073ba8b4(param_1 + 0x238,&uStack_60);
  if (in_s3 <= 0.0) {
    uVar1 = 0;
  }
  else {
    func_0x0001074d3d2c(*(undefined4 *)(param_1 + 0x2b0));
    uVar1 = 0x10000000000;
    if ((extraout_x8 & 0x7fffffff) == 0 && extraout_x9 != 0) {
      uVar1 = 0;
    }
  }
  func_0x0001074d4b54(uVar1);
  FUN_1073ba8b4(param_1 + 0x1b8,auStack_70);
  uVar1 = 0x1000000000000;
  if (in_s3 <= 0.0) {
    uVar1 = 0;
  }
  func_0x0001074d4b2c(uVar1);
  return;
}



/* Entry: 1074d0c7c; end: 1074d0d53;  */

void FUN_1074d0c7c(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x21;
  
  func_0x0001074d3fb8();
  func_0x0001074d39cc(*unaff_x21);
  func_0x0001074d39cc(unaff_x21[1]);
  func_0x0001074d39cc(unaff_x21[2]);
  func_0x0001074d39cc(unaff_x21[3]);
  func_0x0001074d39cc(unaff_x21[4]);
  func_0x0001074d39cc(unaff_x21[5]);
  func_0x0001074d3e8c(*unaff_x21);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[1]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[2]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[3]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[4]);
  func_0x0001074d3ab4();
  func_0x0001074d3e8c(unaff_x21[5]);
  func_0x0001074d3ab4();
  func_0x0001074d4cc0();
  if ((bool)in_ZR) {
    func_0x00010745d404(unaff_x21 + 0x16);
  }
  func_0x0001074d3ff8();
  return;
}



/* Entry: 1074d0d54; end: 1074d0eaf;  */

void FUN_1074d0d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long unaff_x19;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x0001074d3e80();
  func_0x0001074d4024(*param_1);
  if ((bool)in_ZR) {
    func_0x0001074d3b38();
  }
  func_0x0001074d3b1c();
  func_0x0001074d4024(*(undefined8 *)(unaff_x19 + 0x18));
  if ((bool)in_ZR) {
    func_0x0001074d3b9c(*(undefined8 *)(unaff_x19 + 0x10));
    func_0x0001074d3e40();
  }
  func_0x0001074d4030(*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18));
  func_0x0001074d3f58();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x0001074d4030(*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18));
  func_0x0001074d3e40();
  func_0x000107459d08(*(long *)(unaff_x19 + 0x38) + 0x3a8);
  func_0x000107459cf8(*(long *)(unaff_x19 + 0x38) + 0x198);
  func_0x000107459cf8(*(long *)(unaff_x19 + 0x38) + 0x248);
  lVar2 = *(long *)(unaff_x19 + 0x38) + 0x2f8;
  func_0x000107459cf8();
  func_0x0001074d3cf0();
  (**(code **)(**(long **)(lVar2 + 0x18) + 0x58))(*(long **)(lVar2 + 0x18),uVar3);
  func_0x0001074d4718();
  (*extraout_x8)();
  func_0x0001074d4718();
  (*extraout_x8_00)();
  func_0x0001074d4718();
  (*extraout_x8_01)();
  puVar4 = (undefined8 *)*param_2;
  if (*(int *)(param_2 + 1) == 0) {
    func_0x0001074d3e8c(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)puVar4);
    (*extraout_x8_03)();
    func_0x0001074d4978();
    func_0x0001074d43bc();
    FUN_1074d6874();
    func_0x0001074d3fd8();
    func_0x0001074d4748(*(undefined8 *)(lVar2 + 0x18));
    func_0x0001074d3df8();
  }
  else {
    puVar1 = (undefined4 *)puVar4[1];
    for (puVar5 = (undefined4 *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 10) {
      func_0x0001074d3e8c(*(undefined8 *)(lVar2 + 0x18),*puVar5);
      (*extraout_x8_02)();
      func_0x00010002b838(auStack_58,&DAT_10f4102db);
      func_0x0001074d43bc();
      FUN_1074d6874();
      func_0x0001074d3fd8();
      func_0x0001074d3df8(*(undefined8 *)(**(long **)(lVar2 + 0x18) + 0x138));
    }
  }
  return;
}



/* Entry: 1074d0eb0; end: 1074d0f03;  */

undefined8 * FUN_1074d0eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *(char *)(param_1 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_2[1] = 0;
  if (cVar2 == '\x01') {
    lVar3 = param_1[1];
    param_1[1] = uVar1;
    if (lVar3 != 0) {
      func_0x0001074d3aa8();
    }
  }
  else {
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 1074d0f04; end: 1074d0f7f;  */

void FUN_1074d0f04(undefined8 *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001074d4c20();
  if ((ulong)(extraout_x9 / 0x98) < param_2) {
    if (0x1af286bca1af286 < param_2) {
      FUN_10748bbc4();
      func_0x0001074d403c();
      func_0x00010748bd98();
      func_0x0001074d3bc4();
      *param_1 = &PTR_FUN_1109b5190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    FUN_10748bbd0(auStack_48);
    func_0x0001074d43bc();
    FUN_10748bb80();
    func_0x0001074d44ec();
  }
  return;
}



/* Entry: 1074d0f80; end: 1074d0f83;  */

void FUN_1074d0f80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b5190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074d0f84; end: 1074d0f97;  */

void FUN_1074d0f84(void)

{
  func_0x0001074d0fa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074d0f98; end: 1074d0fb3;  */

undefined8 * FUN_1074d0f98(long param_1)

{
  FUN_1074cfcfc(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1074d0fb4; end: 1074d0fdb;  */

long FUN_1074d0fb4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074d0fdc; end: 1074d113f;  */

long FUN_1074d0fdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107432c64();
  func_0x000107432f04(lVar1 + 0x68,param_3);
  func_0x000107432c64(param_1 + 0xc0,param_4);
  func_0x000107432f04(param_1 + 0x128,param_5);
  func_0x000107432f04(param_1 + 0x180,param_6);
  func_0x000107432f04(param_1 + 0x1d8,param_7);
  func_0x000107482cec(param_1 + 0x230,param_8);
  func_0x00010748ae9c(param_1 + 0x290,param_9);
  func_0x000107432f04(param_1 + 0x2e8,param_10);
  func_0x000107432c64(param_1 + 0x340,param_11);
  func_0x000107432f04(param_1 + 0x3a8,param_12);
  func_0x000107432c64(param_1 + 0x400,param_13);
  func_0x000107432f04(param_1 + 0x468,param_14);
  func_0x000107432f04(param_1 + 0x4c0,param_15);
  func_0x000107432f04(param_1 + 0x518,param_16);
  func_0x000107482cec(param_1 + 0x570,param_17);
  func_0x00010748ae9c(param_1 + 0x5d0,param_18);
  return param_1;
}



/* Entry: 1074d1140; end: 1074d11af;  */

void FUN_1074d1140(void)

{
  func_0x0001074d3ed0();
  func_0x0001074d1194();
  return;
}



/* Entry: 1074d11b0; end: 1074d1213;  */

long * FUN_1074d11b0(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  long alStack_48 [4];
  undefined8 uStack_28;
  
  if ((int)param_1[9] == 0) {
    return (long *)0x0;
  }
  uVar2 = (int)param_1[9] == 1;
  if (!(bool)uVar2) {
    func_0x0001074d3a98(param_2 + 8);
    func_0x0001074d3bcc();
    plVar3 = alStack_48;
    FUN_1074d1278(plVar3,auStack_68);
    func_0x0001074d4b00();
    func_0x0001074d4160();
    func_0x0001074d39e4(uStack_28);
    if ((bool)uVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x0001074d42c4();
    func_0x0001074d3bc4();
    func_0x0001074d3c2c();
    func_0x0001074d3bec(&PTR_FUN_1109b51e0);
    return plVar3;
  }
  lVar1 = *param_1;
  do {
    lVar4 = lVar1;
    if (lVar4 == param_1[1]) break;
    lVar1 = lVar4 + 0x120;
  } while (*(char *)(lVar4 + 0xd8) != '\x01');
  return (long *)(ulong)(lVar4 != param_1[1]);
}



/* Entry: 1074d1214; end: 1074d1277;  */

undefined1 * FUN_1074d1214(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001074d3a98();
  func_0x0001074d3bcc();
  puVar1 = auStack_48;
  FUN_1074d1278(puVar1,auStack_68);
  func_0x0001074d4b00();
  func_0x0001074d4160();
  func_0x0001074d39e4(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001074d42c4();
  func_0x0001074d3bc4();
  func_0x0001074d3c2c();
  func_0x0001074d3bec(&PTR_FUN_1109b51e0);
  return puVar1;
}



/* Entry: 1074d1278; end: 1074d129b;  */

void FUN_1074d1278(void)

{
  func_0x0001074d3c2c();
  func_0x0001074d3bec(&PTR_FUN_1109b51e0);
  return;
}



/* Entry: 1074d129c; end: 1074d12a3;  */

void FUN_1074d129c(void)

{
  return;
}



/* Entry: 1074d12a4; end: 1074d12cb;  */

void FUN_1074d12a4(void)

{
  func_0x0001074d3ff0();
  func_0x0001074d3f78(&PTR_FUN_1109b51e0);
  return;
}



/* Entry: 1074d12cc; end: 1074d12ef;  */

void FUN_1074d12cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b51e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074d12f0; end: 1074d1317;  */

void FUN_1074d12f0(undefined8 param_1)

{
  func_0x0001074d43c8();
  func_0x0001074d4050(param_1,&PTR_DAT_1109b5240);
  func_0x0001074d3f3c();
  return;
}



/* Entry: 1074d1318; end: 1074d1323;  */

undefined ** FUN_1074d1318(void)

{
  return &PTR_DAT_1109b5240;
}



/* Entry: 1074d1324; end: 1074d141b;  */

void FUN_1074d1324(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_c8 [24];
  char cStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  
  func_0x0001074d3a84();
  if ((*(byte *)*param_1 & 1) == 0) {
    func_0x0001074d3e80();
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 == 2) {
      uStack_a0 = 9;
      func_0x0001074d4254();
      func_0x0001074d3da4();
      if (unaff_w21 != 0) {
        func_0x0001074d4140();
        func_0x0001074d3dc0();
        func_0x0001074d4138();
        in_ZR = cStack_b0 == '\x01';
        if ((bool)in_ZR) {
          uVar3 = *(undefined8 *)(unaff_x19 + 8);
          func_0x0001074d11f0(uVar3,auStack_c8);
          if ((int)uVar3 != 0) {
            func_0x0001074d3cd0();
          }
        }
        func_0x0001074d414c();
        goto LAB_1074d13d8;
      }
      iVar2 = *(int *)(unaff_x20 + 8);
    }
    in_ZR = iVar2 == 0x12;
    if ((bool)in_ZR) {
      lVar4 = *(long *)(unaff_x20 + 0x48);
      do {
        in_ZR = 1;
        if (lVar4 == *(long *)(unaff_x20 + 0x50)) goto LAB_1074d13d8;
        pcVar1 = (char *)(lVar4 + 0x50);
        lVar4 = lVar4 + 0x100;
        in_ZR = *pcVar1 == '\x01';
      } while (!(bool)in_ZR);
      func_0x0001074d3cd0();
    }
    else {
      func_0x0001074d46e8();
      func_0x0001074d4398();
    }
  }
LAB_1074d13d8:
  func_0x0001074d39e4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074d403c();
  FUN_1074030e4();
  func_0x0001074d3bc4();
  func_0x0001074d419c();
  FUN_1074d1438();
  return;
}



/* Entry: 1074d141c; end: 1074d1437;  */

void FUN_1074d141c(void)

{
  func_0x0001074d419c();
  FUN_1074d1438();
  return;
}



/* Entry: 1074d1438; end: 1074d149b;  */

long * FUN_1074d1438(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  long alStack_48 [4];
  undefined8 uStack_28;
  
  if ((int)param_1[9] == 0) {
    return (long *)0x0;
  }
  uVar2 = (int)param_1[9] == 1;
  if (!(bool)uVar2) {
    func_0x0001074d3a98(param_2 + 8);
    func_0x0001074d3bcc();
    plVar3 = alStack_48;
    FUN_1074d1500(plVar3,auStack_68);
    func_0x0001074d4b00();
    func_0x0001074d4160();
    func_0x0001074d39e4(uStack_28);
    if ((bool)uVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x0001074d42c4();
    func_0x0001074d3bc4();
    func_0x0001074d3c2c();
    func_0x0001074d3bec(&PTR_FUN_1109b5260);
    return plVar3;
  }
  lVar1 = *param_1;
  do {
    lVar4 = lVar1;
    if (lVar4 == param_1[1]) break;
    lVar1 = lVar4 + 0x120;
  } while (*(char *)(lVar4 + 0x108) != '\x01');
  return (long *)(ulong)(lVar4 != param_1[1]);
}



/* Entry: 1074d149c; end: 1074d14ff;  */

undefined1 * FUN_1074d149c(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001074d3a98();
  func_0x0001074d3bcc();
  puVar1 = auStack_48;
  FUN_1074d1500(puVar1,auStack_68);
  func_0x0001074d4b00();
  func_0x0001074d4160();
  func_0x0001074d39e4(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001074d42c4();
  func_0x0001074d3bc4();
  func_0x0001074d3c2c();
  func_0x0001074d3bec(&PTR_FUN_1109b5260);
  return puVar1;
}



/* Entry: 1074d1500; end: 1074d1523;  */

void FUN_1074d1500(void)

{
  func_0x0001074d3c2c();
  func_0x0001074d3bec(&PTR_FUN_1109b5260);
  return;
}



/* Entry: 1074d1524; end: 1074d152b;  */

void FUN_1074d1524(void)

{
  return;
}


