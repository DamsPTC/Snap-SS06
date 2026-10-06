/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f71a38; end: 101f71ae3;  */

undefined * FUN_101f71a38(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar4 + 0x38);
  puVar1 = &UNK_1104a9cb0;
  func_0x000107c613fc(&UNK_1104a9cb0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar4);
  func_0x000107c6157c(uVar5);
  uVar2 = 0x112e46990;
  func_0x0001000285a8(0x112e46990,&UNK_10da3b120);
  pcVar3 = FUN_101f71ba4;
  func_0x0001000bfde0(FUN_101f71ba4,puVar1,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar1);
  FUN_101f71bac();
  func_0x000104884898();
  func_0x000107c61574(pcVar3);
  return puVar1;
}



/* Entry: 101f71ae4; end: 101f71ba3;  */

undefined8 FUN_101f71ae4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  char cVar19;
  byte bVar20;
  
  uVar5 = *param_1;
  uVar13 = param_1[3];
  uVar6 = *param_2;
  uVar11 = param_2[3];
  if ((long)uVar13 < 0) {
    if ((long)uVar11 < 0) {
      lVar12 = *(long *)(uVar5 + 0x10);
      if (lVar12 == *(long *)(uVar6 + 0x10)) {
        if ((lVar12 == 0) || (uVar5 == uVar6)) {
          return 1;
        }
        uVar11 = *(ulong *)(uVar5 + 0x20);
        dVar17 = *(double *)(uVar5 + 0x30);
        bVar20 = *(byte *)(uVar5 + 0x38);
        uVar13 = *(ulong *)(uVar5 + 0x40);
        dVar18 = *(double *)(uVar6 + 0x30);
        cVar19 = *(char *)(uVar6 + 0x38);
        uVar16 = *(ulong *)(uVar6 + 0x40);
        if (((uVar11 == *(ulong *)(uVar6 + 0x20)) &&
            (*(long *)(uVar5 + 0x28) == *(long *)(uVar6 + 0x28))) ||
           (func_0x000107c605b8(uVar11,*(long *)(uVar5 + 0x28),*(ulong *)(uVar6 + 0x20),
                                *(long *)(uVar6 + 0x28),0), (uVar11 & 1) != 0)) {
          lVar8 = 1;
          do {
            if (bVar20 < 2) {
              if (bVar20 == 0) {
                if (cVar19 != '\0') {
                  return 0;
                }
                goto LAB_101f71d50;
              }
              if (cVar19 != '\x01') {
                return 0;
              }
              if (dVar17 != dVar18) {
                return 0;
              }
            }
            else {
              if (bVar20 == 2) {
                if (cVar19 != '\x02') {
                  return 0;
                }
              }
              else if (bVar20 == 3) {
                if (cVar19 != '\x03') {
                  return 0;
                }
              }
              else if (cVar19 != '\x04') {
                return 0;
              }
LAB_101f71d50:
              if (dVar17 != dVar18) {
                return 0;
              }
            }
            lVar7 = *(long *)(uVar13 + 0x10);
            if (lVar7 != *(long *)(uVar16 + 0x10)) {
              return 0;
            }
            if ((lVar7 != 0) && (uVar13 != uVar16)) {
              pbVar9 = (byte *)(uVar13 + 0x28);
              pcVar10 = (char *)(uVar16 + 0x28);
              do {
                dVar17 = *(double *)(pbVar9 + -8);
                bVar20 = *pbVar9;
                dVar18 = *(double *)(pcVar10 + -8);
                cVar19 = *pcVar10;
                if (bVar20 < 2) {
                  if (bVar20 == 0) {
                    if (cVar19 != '\0' || dVar17 != dVar18) {
                      return 0;
                    }
                  }
                  else {
                    bVar4 = false;
                    if ((cVar19 == '\x01') && (bVar4 = false, !NAN(dVar17) && !NAN(dVar18))) {
                      bVar4 = dVar17 == dVar18;
                    }
                    if (!bVar4) {
                      return 0;
                    }
                  }
                }
                else if (bVar20 == 2) {
                  if (cVar19 != '\x02' || dVar17 != dVar18) {
                    return 0;
                  }
                }
                else if (bVar20 == 3) {
                  if (cVar19 != '\x03' || dVar17 != dVar18) {
                    return 0;
                  }
                }
                else if (cVar19 != '\x04' || dVar17 != dVar18) {
                  return 0;
                }
                pbVar9 = pbVar9 + 0x10;
                pcVar10 = pcVar10 + 0x10;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (lVar8 == lVar12) {
              return 1;
            }
            lVar7 = lVar8 + 1;
            puVar1 = (ulong *)(uVar5 + 0x20 + lVar8 * 0x28);
            uVar11 = *puVar1;
            dVar17 = (double)puVar1[2];
            bVar20 = (byte)puVar1[3];
            uVar13 = puVar1[4];
            puVar2 = (ulong *)(uVar6 + 0x20 + lVar8 * 0x28);
            dVar18 = (double)puVar2[2];
            cVar19 = (char)puVar2[3];
            uVar16 = puVar2[4];
            lVar8 = lVar7;
            if ((uVar11 != *puVar2 || puVar1[1] != puVar2[1]) &&
               (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
              return 0;
            }
          } while( true );
        }
      }
      return 0;
    }
  }
  else if (-1 < (long)uVar11) {
    uVar16 = param_1[2];
    uVar3 = param_2[2];
    uVar14 = param_2[4];
    uVar15 = param_1[4];
    if ((((uVar5 == uVar6 && param_1[1] == param_2[1]) ||
         (func_0x000107c605b8(uVar5,param_1[1],uVar6,param_2[1],0), (uVar5 & 1) != 0)) &&
        (FUN_101f7081c(uVar16,uVar13,uVar3,uVar11), (uVar16 & 1) != 0)) &&
       (FUN_101f71ebc(uVar15,uVar14), (uVar15 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 101f71ba4; end: 101f71bab;  */

void FUN_101f71ba4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  lVar4 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    func_0x000107c61574();
    func_0x000102991150(0);
    lVar2 = lVar4;
    func_0x000107c436c8();
    func_0x00010298f8f0();
    lVar5 = *(long *)(lVar2 + 0x10);
    if (lVar5 == 0) {
      func_0x000107c6142c(lVar2);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_88 = puVar3;
      func_0x000101f72014(0,lVar5,0);
      do {
        puVar3 = puStack_88;
        func_0x000107c61174(lVar4);
        FUN_101f7013c(&uStack_b0);
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puStack_88 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          func_0x000101f72014(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
        }
        puVar7 = puStack_88;
        *(ulong *)(puStack_88 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_88 + uVar1 * 0x28 + 0x40) = uStack_90;
        *(undefined8 *)(puStack_88 + uVar1 * 0x28 + 0x28) = uStack_a8;
        *(undefined8 *)(puStack_88 + uVar1 * 0x28 + 0x20) = uStack_b0;
        *(undefined8 *)(puStack_88 + uVar1 * 0x28 + 0x38) = uStack_98;
        *(undefined8 *)(puStack_88 + uVar1 * 0x28 + 0x30) = uStack_a0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      func_0x000107c6142c(lVar2);
    }
    puVar3 = (undefined *)0x112e469a8;
    func_0x0001000285a8(0x112e469a8,&UNK_10da3b128);
    if (lVar6 == 5) {
      func_0x000107c613fc();
      *(undefined8 *)(puVar3 + 0x18) = 4;
      *(undefined8 *)(puVar3 + 0x10) = 2;
      func_0x000107c61174(lVar4);
      FUN_101f7013c(&puStack_88);
      *(undefined8 *)(puVar3 + 0x28) = uStack_80;
      *(undefined **)(puVar3 + 0x20) = puStack_88;
      *(undefined8 *)(puVar3 + 0x30) = uStack_78;
      *(ulong *)(puVar3 + 0x38) = (ulong)bStack_70;
      *(undefined8 *)(puVar3 + 0x40) = uStack_68;
      *(undefined **)(puVar3 + 0x48) = puVar7;
      *(undefined8 *)(puVar3 + 0x50) = 0;
      *(undefined8 *)(puVar3 + 0x58) = 0;
      *(undefined8 *)(puVar3 + 0x68) = 0;
      *(undefined8 *)(puVar3 + 0x60) = 0x8000000000000000;
    }
    else {
      func_0x000107c613fc();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined8 *)(puVar3 + 0x28) = 0;
      *(undefined8 *)(puVar3 + 0x30) = 0;
      *(undefined **)(puVar3 + 0x20) = puVar7;
      *(undefined8 *)(puVar3 + 0x40) = 0;
      *(undefined8 *)(puVar3 + 0x38) = 0x8000000000000000;
    }
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 101f71bac; end: 101f71c1b;  */

void FUN_101f71bac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112e46998 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e46990;
  func_0x00010002969c(0x112e46990,&UNK_10da3b120);
  uVar2 = uVar1;
  FUN_101f71c1c();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112e46998 = puVar3;
  return;
}



/* Entry: 101f71c1c; end: 101f71c5b;  */

void FUN_101f71c1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e469a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3b0e8;
  func_0x000107c61520(&UNK_10da3b0e8,&UNK_1104a9c60);
  puRam0000000112e469a0 = puVar1;
  return;
}



/* Entry: 101f71c5c; end: 101f71ebb;  */

undefined8 FUN_101f71c5c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  byte bVar15;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 == 0) || (param_1 == param_2)) {
      return 1;
    }
    uVar4 = *(ulong *)(param_1 + 0x20);
    dVar12 = *(double *)(param_1 + 0x30);
    bVar15 = *(byte *)(param_1 + 0x38);
    uVar10 = *(ulong *)(param_1 + 0x40);
    dVar13 = *(double *)(param_2 + 0x30);
    cVar14 = *(char *)(param_2 + 0x38);
    uVar11 = *(ulong *)(param_2 + 0x40);
    if (((uVar4 == *(ulong *)(param_2 + 0x20)) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) ||
       (func_0x000107c605b8(uVar4,*(long *)(param_1 + 0x28),*(ulong *)(param_2 + 0x20),
                            *(long *)(param_2 + 0x28),0), (uVar4 & 1) != 0)) {
      lVar6 = 1;
      do {
        if (bVar15 < 2) {
          if (bVar15 == 0) {
            if (cVar14 != '\0') {
              return 0;
            }
            goto LAB_101f71d50;
          }
          if (cVar14 != '\x01') {
            return 0;
          }
          if (dVar12 != dVar13) {
            return 0;
          }
        }
        else {
          if (bVar15 == 2) {
            if (cVar14 != '\x02') {
              return 0;
            }
          }
          else if (bVar15 == 3) {
            if (cVar14 != '\x03') {
              return 0;
            }
          }
          else if (cVar14 != '\x04') {
            return 0;
          }
LAB_101f71d50:
          if (dVar12 != dVar13) {
            return 0;
          }
        }
        lVar5 = *(long *)(uVar10 + 0x10);
        if (lVar5 != *(long *)(uVar11 + 0x10)) {
          return 0;
        }
        if ((lVar5 != 0) && (uVar10 != uVar11)) {
          pbVar7 = (byte *)(uVar10 + 0x28);
          pcVar8 = (char *)(uVar11 + 0x28);
          do {
            dVar12 = *(double *)(pbVar7 + -8);
            bVar15 = *pbVar7;
            dVar13 = *(double *)(pcVar8 + -8);
            cVar14 = *pcVar8;
            if (bVar15 < 2) {
              if (bVar15 == 0) {
                if (cVar14 != '\0' || dVar12 != dVar13) {
                  return 0;
                }
              }
              else {
                bVar3 = false;
                if ((cVar14 == '\x01') && (bVar3 = false, !NAN(dVar12) && !NAN(dVar13))) {
                  bVar3 = dVar12 == dVar13;
                }
                if (!bVar3) {
                  return 0;
                }
              }
            }
            else if (bVar15 == 2) {
              if (cVar14 != '\x02' || dVar12 != dVar13) {
                return 0;
              }
            }
            else if (bVar15 == 3) {
              if (cVar14 != '\x03' || dVar12 != dVar13) {
                return 0;
              }
            }
            else if (cVar14 != '\x04' || dVar12 != dVar13) {
              return 0;
            }
            pbVar7 = pbVar7 + 0x10;
            pcVar8 = pcVar8 + 0x10;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar6 == lVar9) {
          return 1;
        }
        lVar5 = lVar6 + 1;
        puVar1 = (ulong *)(param_1 + 0x20 + lVar6 * 0x28);
        uVar4 = *puVar1;
        dVar12 = (double)puVar1[2];
        bVar15 = (byte)puVar1[3];
        uVar10 = puVar1[4];
        puVar2 = (ulong *)(param_2 + 0x20 + lVar6 * 0x28);
        dVar13 = (double)puVar2[2];
        cVar14 = (char)puVar2[3];
        uVar11 = puVar2[4];
        lVar6 = lVar5;
        if ((uVar4 != *puVar2 || puVar1[1] != puVar2[1]) &&
           (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



/* Entry: 101f71ebc; end: 101f71f7f;  */

undefined8 FUN_101f71ebc(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  double dVar7;
  double dVar8;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    pbVar5 = (byte *)(param_1 + 0x28);
    pcVar6 = (char *)(param_2 + 0x28);
    do {
      dVar7 = *(double *)(pbVar5 + -8);
      bVar1 = *pbVar5;
      dVar8 = *(double *)(pcVar6 + -8);
      cVar2 = *pcVar6;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (cVar2 != '\0' || dVar7 != dVar8) {
            return 0;
          }
        }
        else {
          bVar3 = false;
          if ((cVar2 == '\x01') && (bVar3 = false, !NAN(dVar7) && !NAN(dVar8))) {
            bVar3 = dVar7 == dVar8;
          }
          if (!bVar3) {
            return 0;
          }
        }
      }
      else if (bVar1 == 2) {
        if (cVar2 != '\x02' || dVar7 != dVar8) {
          return 0;
        }
      }
      else if (bVar1 == 3) {
        if (cVar2 != '\x03' || dVar7 != dVar8) {
          return 0;
        }
      }
      else if (cVar2 != '\x04' || dVar7 != dVar8) {
        return 0;
      }
      pbVar5 = pbVar5 + 0x10;
      pcVar6 = pcVar6 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Entry: 101f71f80; end: 101f71ff7;  */

void FUN_101f71f80(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101f7249c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101f71ff8; end: 101f7204b;  */

void FUN_101f71ff8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101f7204c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101f7204c; end: 101f72263;  */

undefined * FUN_101f7204c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f72148);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e469b0;
    func_0x0001000285a8(0x112e469b0,&UNK_10da3b130);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4();
  }
  else {
    if (puVar3 != param_4 || param_4 + uVar6 * 0x10 + 0x20 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101f72264; end: 101f72477;  */

undefined * FUN_101f72264(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f723b8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d56ea0;
    FUN_101f71f80(0x112d56ea0,&PTR_PTR_1126b10a0,0x112d57348,&UNK_10da3b140);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101f7249c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101f72478; end: 101f7249b;  */

void FUN_101f72478(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d4();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (param_1 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&uStack_90);
      func_0x000107c615e8(param_1);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 == 0) {
      func_0x000107c61170(puVar2);
      func_0x000107c61574(lVar1);
      func_0x00010006e7f4(&uStack_70);
    }
    else {
      uVar3 = 0;
      FUN_101f7249c(0,0x112e469c8,&PTR_PTR_1126c19c0);
      puVar4 = &uStack_98;
      func_0x000107c6147c(puVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c61170(puVar2);
        func_0x000107c61574(lVar1);
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + 0x38);
        uStack_70 = uStack_98;
        func_0x000107c6157c(uVar3);
        func_0x000100087c34(&uStack_70);
        func_0x000107c61170(uStack_98);
        func_0x000107c61574(uVar3);
        func_0x000107c61574(lVar1);
        func_0x000107c61170(puVar2);
      }
    }
  }
  return;
}



/* Entry: 101f7249c; end: 101f724db;  */

void FUN_101f7249c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101f724dc; end: 101f724e3;  */

long FUN_101f724dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f724e4; end: 101f72563; -[_TtC40SCSpectaclesFlightSettingsImplementation18FlightSettingsCell initWithReuseIdentifier:] */

undefined1 * FUN_101f724e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 != 0) {
    func_0x000107c5faec(param_3);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithReuseIdentifier__1125eda10,param_3);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 101f72564; end: 101f725b7;  */

void FUN_101f72564(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f725b8; end: 101f72723;  */

void FUN_101f725b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = param_1[6];
  func_0x000107c5fadc(uVar1,param_1[7]);
  func_0x000107c520f4();
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  func_0x000107c5405c();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  uVar1 = *param_1;
  func_0x000107c5fadc(uVar1,param_1[1]);
  func_0x000107c59e44(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  if (param_1[4] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1[3];
    func_0x000107c5fadc(uVar1);
  }
  func_0x000107c5a4a8(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  func_0x000107c52170();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5c868();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c59c78();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c41880();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c59c78();
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 101f72724; end: 101f728cf;  */

void FUN_101f72724(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_80 = uStack_90;
  uStack_78 = uStack_88;
  func_0x000107c61168();
  func_0x000107c61438(uStack_78,2);
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uVar8 = 0xe400000000000000;
  func_0x000107c5fb78(0x6c6c6543);
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  uVar9 = param_2[2];
  bVar1 = *(byte *)(param_2 + 3);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar8 = 0;
      func_0x00010298f760();
      func_0x00010298f06c();
      uVar7 = uVar9;
    }
    else {
      uVar4 = 0;
      func_0x00010298f760();
      func_0x00010298f210();
      uVar7 = (ulong)(uVar4 & 1);
      func_0x00010298f17c(uVar9);
    }
  }
  else if (bVar1 == 2) {
    uVar8 = 0;
    func_0x00010298f760();
    func_0x00010298f180();
    uVar7 = uVar9;
  }
  else if (bVar1 == 3) {
    uVar8 = 0;
    func_0x00010298f760();
    func_0x00010298f184();
    uVar7 = uVar9;
  }
  else {
    uVar8 = 0;
    func_0x000102991150();
    func_0x00010298f854();
    uVar7 = uVar9;
  }
  func_0x000100bcb1dc(&uStack_80);
  uStack_a0 = param_2[4];
  FUN_101f728d0(&uStack_a0);
  func_0x000107c5af88();
  func_0x000107c61180();
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[2] = puVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  param_1[5] = puVar5;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}



/* Entry: 101f728d0; end: 101f72917;  */

undefined8 FUN_101f728d0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e469f8;
  func_0x0001000285a8(0x112e469f8,&UNK_10da3b1b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101f72918; end: 101f72a83;  */

void FUN_101f72918(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = param_2[2];
  bVar1 = *(byte *)(param_2 + 3);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_3 = 0;
      func_0x00010298f760();
      func_0x00010298f06c();
      uVar3 = uVar5;
    }
    else {
      uVar2 = 0;
      func_0x00010298f760();
      func_0x00010298f210();
      uVar3 = (ulong)(uVar2 & 1);
      func_0x00010298f17c(uVar5);
    }
  }
  else if (bVar1 == 2) {
    param_3 = 0;
    func_0x00010298f760();
    func_0x00010298f180();
    uVar3 = uVar5;
  }
  else if (bVar1 == 3) {
    param_3 = 0;
    func_0x00010298f760();
    func_0x00010298f184();
    uVar3 = uVar5;
  }
  else {
    param_3 = 0;
    func_0x000102991150();
    func_0x00010298f854();
    uVar3 = uVar5;
  }
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  func_0x000100bcb1dc();
  uStack_68 = param_2[4];
  FUN_101f728d0(&uStack_68);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  *param_1 = uVar3;
  param_1[1] = param_3;
  param_1[2] = (ulong)puVar4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x6150746867696c66;
  param_1[7] = 0xee006c6c65436874;
  return;
}



/* Entry: 101f72a84; end: 101f72aef;  */

long FUN_101f72a84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f72af0; end: 101f72b63;  */

undefined8 * FUN_101f72af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 101f72b64; end: 101f72c1f;  */

undefined8 * FUN_101f72b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f72c20; end: 101f72c93;  */

undefined8 * FUN_101f72c20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  param_1[3] = param_2[3];
  func_0x000107c6142c(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101f72c94; end: 101f72d3b;  */

int FUN_101f72c94(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f72d3c; end: 101f72dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f72d3c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e46a30;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e46a30);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIRefreshControl_1126d6e28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c3d8b8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101f72dc4; end: 101f7305f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f72dc4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar11 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12;
  uStack_70 = 0;
  puStack_88 = (undefined *)0x0;
  puStack_90 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  pcStack_80 = (code *)0x0;
  uStack_98 = 0;
  puStack_a0 = (undefined *)0x0;
  func_0x0001002a64a8(&puStack_a0);
  uVar3 = 0;
  FUN_101f75070(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  func_0x000107c5f830(lVar13);
  func_0x000107c5f85c(lVar12,0x4000000000000000,lVar13);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar13,lVar2);
  puVar4 = &UNK_1104a9da0;
  func_0x000107c613fc(&UNK_1104a9da0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_80 = FUN_101f750b0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1104a9f20;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61574(puStack_78);
  func_0x000107c5f808(lVar11);
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_a0,uVar6,uVar7,lVar1,puVar4);
  func_0x000107c5ffc8(lVar12,lVar11,puVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  (**(code **)(lStack_a8 + 8))(puVar8,lVar1);
  (**(code **)(lStack_b8 + 8))(lVar11,lStack_b0);
  (*pcVar10)(lVar12,lVar2);
  return;
}



/* Entry: 101f73060; end: 101f730c7;  */

void FUN_101f73060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_101f72d3c();
    func_0x000107c61170(param_1);
    func_0x000107c42864(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101f730c8; end: 101f730ef; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController handleRefresh] */

void FUN_101f730c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f72dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f730f0; end: 101f7315b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f730f0(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112e46a00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5b71c();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f7315c; end: 101f731d7; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7315c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = param_1 + _DAT_112e46a00;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar2 != 0) {
    func_0x000107c5b71c(lVar2);
    func_0x000107c615e8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f731d8; end: 101f7326f; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f73224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f73254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f73228) */
/* WARNING: Removing unreachable block (ram,0x000101f73258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f731d8(long param_1)

{
  FUN_101f750b8(param_1 + _DAT_112e46a00);
  func_0x0001000834e4(param_1 + _DAT_112e46a08);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e46a10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46a18));
  return;
}



/* Entry: 101f73270; end: 101f73297; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController initWithCoder:] */

void FUN_101f73270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101f74c40();
  return;
}



/* Entry: 101f73298; end: 101f733ff; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f73298(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToParentViewController__1125bb948;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if (param_3 == 0) {
    lVar2 = param_1 + _DAT_112e46a00;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c5b71c();
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101f73400; end: 101f73897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f73400(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  ppuVar14 = &puStack_a0;
  plVar13 = (long *)(unaff_x20 + _DAT_112e46a08);
  lVar15 = plVar13[3];
  plVar3 = plVar13;
  func_0x0001000a8868(plVar13,lVar15);
  lVar16 = *plVar3;
  func_0x000102991150(0);
  uVar2 = *(undefined8 *)(lVar16 + 0x10);
  func_0x00010298f854(uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar15);
  func_0x000107c59e18();
  func_0x000107c61170(uVar2);
  lVar15 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  lVar16 = plVar13[3];
  plVar3 = plVar13;
  func_0x0001000a8868(plVar13,lVar16);
  uVar2 = *(undefined8 *)(*plVar3 + 0x10);
  func_0x00010298f854(uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar16);
  func_0x000107c59e18(lVar15);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar2);
  func_0x0001000a8868(plVar13,plVar13[3]);
  plVar3 = (long *)0x0;
  func_0x000101f7109c();
  FUN_101f71a38();
  puVar11 = &UNK_1104a9da0;
  puVar4 = puVar11;
  func_0x000107c613fc(&UNK_1104a9da0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar1 = FUN_101f75010;
  puVar6 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_101f75010);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar5 = pcVar1;
  func_0x000107c614f0(pcVar1);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e46a10),pcVar5,puVar6);
  func_0x000107c615e8(pcVar1);
  plVar3 = plVar13;
  func_0x0001000a8868(plVar13,plVar13[3]);
  FUN_101f718f4();
  puVar6 = puVar11;
  func_0x000107c613fc(&UNK_1104a9da0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101f75018;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x101d08874;
  puStack_88 = &UNK_1104a9e30;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  plVar8 = plVar3;
  func_0x000107c5c320(plVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(plVar3);
  func_0x000107c3e924(plVar8);
  func_0x000107c61170(plVar8);
  plVar3 = plVar13;
  func_0x0001000a8868(plVar13,plVar13[3]);
  uVar9 = *(undefined8 *)(*plVar3 + 0x20);
  func_0x000107c59004(uVar9);
  func_0x000107c61180();
  pcVar10 = "setError";
  func_0x0001000c10c0("setError");
  func_0x000107c61180();
  uVar2 = uVar9;
  func_0x000107c4da88(uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(pcVar10);
  func_0x000107c613fc(&UNK_1104a9da0,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  pcStack_80 = (code *)0x101f75038;
  puStack_a0 = puVar4;
  uStack_98 = 0x42000000;
  uStack_90 = 0x101d08874;
  puStack_88 = &UNK_1104a9e58;
  puStack_78 = puVar11;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar9 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar9);
  func_0x000107c61170(uVar9);
  func_0x0001000a8868(plVar13,plVar13[3]);
  lVar15 = *(long *)(*plVar13 + 0x18);
  func_0x000107c5bcd4();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar16 = lVar15;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    pcVar10 = "isDeviceConnected";
    func_0x0001000c10c0("isDeviceConnected");
    func_0x000107c61180();
    lVar15 = lVar16;
    func_0x000107c4da88(lVar16);
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    func_0x000107c615e8(pcVar10);
    puVar11 = &UNK_1104a9da0;
    func_0x000107c613fc(&UNK_1104a9da0,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    pcStack_80 = FUN_101f75058;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    uStack_90 = 0x101f75114;
    puStack_88 = &UNK_1104a9e80;
    puStack_78 = puVar11;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar16 = lVar15;
    func_0x000107c5c320(lVar15);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(lVar15);
    func_0x000107c3e924(lVar16);
    func_0x000107c61170(lVar16);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f73898);
  (*pcVar1)();
}



/* Entry: 101f73898; end: 101f738bf; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController viewDidLoad] */

void FUN_101f73898(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101f7333c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f738c0; end: 101f73a0b; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f738c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e46a38);
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_101f72d3c();
  func_0x000107c57c2c(uVar2,param_2,lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c53fcc(uVar2,param_2,param_1);
  func_0x000107c53e08(uVar2,param_2,param_1);
  func_0x000107c6117c(uVar2);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 101f73a0c; end: 101f73c4f;  */

void FUN_101f73a0c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  lVar2 = param_1;
  func_0x0001090250c0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_1104a9eb8;
    func_0x000107c613fc(&UNK_1104a9eb8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    uStack_70 = 0x101f75068;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100de205c;
    puStack_78 = &UNK_1104a9ed0;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000100b64c10(param_5,param_6);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    puVar5 = puStack_68;
    func_0x000107c61574();
    func_0x000100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x18) = 3;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    if (param_2 == 0) {
      func_0x000107c61174(puVar3);
      func_0x000107c61434(param_4);
      param_1 = 0;
    }
    else {
      func_0x000107c61174(puVar3);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_2);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c6142c(param_2);
    }
    puVar6 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
    uVar7 = 0;
    FUN_101f75070(0,0x112d360a8,&PTR_PTR_1126aed70);
    puVar8 = puVar5;
    func_0x000107c5fc48(puVar5,uVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c48d50(puVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar8);
    func_0x000107c4f018();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f73c50);
  (*pcVar1)();
}



/* Entry: 101f73c50; end: 101f73e0f;  */

void FUN_101f73c50(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    (*param_3)();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar6 = 0;
      puVar5 = (undefined1 *)0x0;
      puVar4 = puVar3;
    }
    else {
      lVar6 = lVar1;
      func_0x000107c5faec();
      puVar4 = puVar3;
      func_0x000107c61170(lVar1);
      puVar5 = puVar3;
    }
    func_0x000107c4b85c(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_101f73a0c(lVar6,puVar5,uVar2,puVar4,0,0);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 101f73e10; end: 101f73e8f;  */

void FUN_101f73e10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4eb48();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101f73e90; end: 101f7431b;  */

void FUN_101f73e90(undefined8 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 unaff_x20;
  undefined *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_e8 [16];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_90 [2];
  
  lVar15 = param_1[4];
  puVar18 = *(undefined1 **)(lVar15 + 0x10);
  puVar11 = param_1;
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  alStack_90[0] = lVar15;
  if (puVar18 != (undefined1 *)0x0) {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar14 = puVar18;
    func_0x000101f72030(0,puVar18,0);
    puVar17 = puStack_a8;
    puVar5 = (undefined8 *)PTR_PTR_1126b10a0;
    func_0x000107c61168();
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    pbVar16 = (byte *)(lVar15 + 0x28);
    do {
      uVar19 = *(ulong *)(pbVar16 + -8);
      bVar2 = *pbVar16;
      uVar6 = uVar19;
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          func_0x00010298f760(0);
          func_0x00010298f06c(uVar19);
        }
        else {
          uVar4 = 0;
          func_0x00010298f760(0);
          func_0x00010298f210();
          uVar6 = (ulong)(uVar4 & 1);
          func_0x00010298f17c(uVar19,uVar6);
        }
      }
      else if (bVar2 == 2) {
        func_0x00010298f760(0);
        func_0x00010298f180(uVar19);
      }
      else if (bVar2 == 3) {
        func_0x00010298f760(0);
        func_0x00010298f184(uVar19);
      }
      else {
        func_0x000102991150(0);
        func_0x00010298f854(uVar19);
      }
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar14);
      puVar11 = puVar5;
      func_0x000107c51c1c();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      puVar7 = &UNK_1104a9da0;
      func_0x000107c613fc(&UNK_1104a9da0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,unaff_x20);
      puVar8 = &UNK_1104a9dc8;
      func_0x000107c613fc(&UNK_1104a9dc8,0x50,7);
      uVar20 = *param_1;
      uVar21 = param_1[3];
      uVar12 = param_1[2];
      *(undefined8 *)(puVar8 + 0x30) = param_1[1];
      *(undefined8 *)(puVar8 + 0x28) = uVar20;
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(ulong *)(puVar8 + 0x18) = uVar19;
      puVar8[0x20] = bVar2;
      *(undefined8 *)(puVar8 + 0x40) = uVar21;
      *(undefined8 *)(puVar8 + 0x38) = uVar12;
      *(undefined8 *)(puVar8 + 0x48) = param_1[4];
      pcStack_b8 = FUN_101f74be0;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_101054b14;
      puStack_c0 = &UNK_1104a9de0;
      ppuVar9 = &puStack_d8;
      puStack_b0 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_b0;
      func_0x000100402194(&uStack_a0,auStack_e8);
      puVar14 = auStack_e8;
      FUN_101f74b90(alStack_90);
      func_0x000107c61574(puVar7);
      puVar10 = puVar11;
      func_0x000107c3eae8();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170();
      uVar6 = *(ulong *)(puVar17 + 0x10);
      puVar1 = (undefined1 *)(uVar6 + 1);
      puStack_a8 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar6) {
        puVar11 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
        puVar14 = puVar1;
        func_0x000101f72030(puVar11,puVar1,1);
      }
      pbVar16 = pbVar16 + 0x10;
      *(undefined1 **)(puStack_a8 + 0x10) = puVar1;
      *(undefined8 **)(puStack_a8 + uVar6 * 8 + 0x20) = puVar10;
      puVar18 = puVar18 + -1;
      puVar17 = puStack_a8;
    } while (puVar18 != (undefined1 *)0x0);
  }
  func_0x000109025078();
  func_0x000107c61180();
  if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101f7431c);
    (*pcVar3)();
  }
  puVar7 = PTR_PTR_1126b10a0;
  func_0x000107c61168(PTR_PTR_1126b10a0);
  func_0x000107c437a0();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  pcStack_b8 = FUN_101f74438;
  puStack_b0 = (undefined *)0x0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_101054b14;
  puStack_c0 = &UNK_1104a9e08;
  ppuVar9 = &puStack_d8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puVar7;
  func_0x000107c3eae8(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puVar7);
  uVar20 = *param_1;
  uVar12 = param_1[1];
  puVar7 = PTR_PTR_1126b10a8;
  func_0x000107c610f8(PTR_PTR_1126b10a8);
  func_0x000107c61174(puVar8);
  func_0x000107c5fadc(uVar20,uVar12);
  uVar12 = 0;
  FUN_101f75070(0,0x112d56ea0,&PTR_PTR_1126b10a0);
  puVar13 = puVar17;
  func_0x000107c5fc48(puVar17,uVar12);
  func_0x000107c6142c(puVar17);
  func_0x000107c46c9c(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(puVar13);
  func_0x000107c4ee8c(unaff_x20);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101f7431c; end: 101f74437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7431c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar6 = param_5[2];
  bVar3 = *(byte *)(param_5 + 3);
  uVar4 = param_5[4];
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + _DAT_112e46a28);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(param_2);
    uStack_68 = param_5[1];
    uStack_70 = *param_5;
    uStack_c0 = param_4 & 0xff;
    uStack_c8 = param_3;
    uStack_b8 = uVar1;
    uStack_b0 = uVar2;
    uStack_a8 = uVar6;
    uStack_a0 = (ulong)bVar3;
    uStack_98 = uVar4;
    uStack_78 = uVar4;
    func_0x000100402194(&uStack_70,auStack_d8);
    FUN_101f74b90(&uStack_78,auStack_d8);
    func_0x0001002a64a8(&uStack_c8);
    func_0x000107c61574(uVar5);
    func_0x000100bcb1dc(&uStack_70);
    FUN_101f728d0(&uStack_78);
  }
  func_0x000107c4200c(param_1);
  return;
}



/* Entry: 101f74438; end: 101f7443b;  */

void FUN_101f74438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 101f7443c; end: 101f7452b;  */

void FUN_101f7443c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_2 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1104a9ef8;
    lStack_40 = param_2;
    uStack_38 = param_3;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101f7452c; end: 101f74557; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController initWithNibName:bundle:] */

void FUN_101f7452c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesFlightSettingsImplementation.FlightSettingsViewController",0x45,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f74558);
  (*pcVar1)();
}



/* Entry: 101f74558; end: 101f745a3; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_101f74558(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesFlightSettingsImplementation.FlightSettingsViewController",0x45,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f74584);
  (*pcVar1)();
}



/* Entry: 101f745a4; end: 101f745b7; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f745a4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_112e46a20) + 0x10);
}



/* Entry: 101f745b8; end: 101f74617; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController tableView:numberOfRowsInSection:] */

undefined8
FUN_101f745b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101f74de4(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 101f74618; end: 101f74677; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_101f74618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101f74ebc(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101f74678; end: 101f7488b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_101f74678(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
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
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  uVar5 = 0;
  func_0x000101f72598();
  uVar6 = 0x112e46a68;
  uStack_f0 = uVar5;
  func_0x0001000285a8(0x112e46a68,&UNK_10da3b1c0);
  puVar7 = &uStack_f0;
  func_0x000107c5fb18(puVar7);
  func_0x00010257b364(uVar5,puVar7,uVar6,param_2,uVar5);
  func_0x000107c6142c();
  func_0x000107c5eff4();
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101f74880);
    (*pcVar4)();
  }
  if (*(ulong *)(*(long *)(unaff_x20 + _DAT_112e46a20) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101f74884);
    (*pcVar4)();
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112e46a20) + uVar6 * 0x28;
  uVar6 = *(ulong *)(lVar10 + 0x20);
  uVar2 = *(undefined8 *)(lVar10 + 0x28);
  uVar1 = *(undefined8 *)(lVar10 + 0x30);
  lVar3 = *(long *)(lVar10 + 0x38);
  uVar9 = *(undefined8 *)(lVar10 + 0x40);
  if (lVar3 < 0) {
    uVar8 = uVar6;
    func_0x000107c61434();
    func_0x000107c5efe4();
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101f74888);
      (*pcVar4)();
    }
    if (*(ulong *)(uVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101f7488c);
      (*pcVar4)();
    }
    lVar10 = uVar6 + uVar8 * 0x28;
    uStack_a8 = *(undefined8 *)(lVar10 + 0x28);
    uStack_b0 = *(ulong *)(lVar10 + 0x20);
    uStack_98 = *(undefined8 *)(lVar10 + 0x38);
    uStack_a0 = *(undefined8 *)(lVar10 + 0x30);
    uStack_90 = *(undefined8 *)(lVar10 + 0x40);
    uStack_80 = uStack_b0;
    uStack_78 = uStack_a8;
    uStack_68 = uStack_90;
    func_0x000100402194(&uStack_80,&uStack_f0);
    FUN_101f74b90(&uStack_68,&uStack_f0);
    FUN_101f714c4(uVar6,uVar2,uVar1,lVar3,uVar9);
    FUN_101f72724(&uStack_130,&uStack_b0);
  }
  else {
    uStack_98 = CONCAT71(uStack_98._1_7_,(char)lVar3);
    uStack_b0 = uVar6;
    uStack_a8 = uVar2;
    uStack_a0 = uVar1;
    uStack_90 = uVar9;
    FUN_101f71484(uVar6);
    FUN_101f72918(&uStack_130,&uStack_b0);
  }
  uStack_170 = uStack_130;
  uStack_160 = uStack_120;
  uStack_168 = uStack_128;
  uStack_150 = uStack_110;
  uStack_158 = uStack_118;
  uStack_140 = uStack_100;
  uStack_148 = uStack_108;
  uStack_138 = uStack_f8;
  uStack_e8 = uStack_128;
  uStack_f0 = uStack_130;
  uStack_d8 = uStack_118;
  uStack_e0 = uStack_120;
  uStack_c8 = uStack_108;
  uStack_d0 = uStack_110;
  uStack_b8 = uStack_f8;
  uStack_c0 = uStack_100;
  puVar7 = &uStack_f0;
  FUN_101f725b8(puVar7);
  func_0x000107c61180();
  FUN_101f74c0c(&uStack_170);
  func_0x000107c61170(uVar5);
  return puVar7;
}



/* Entry: 101f7488c; end: 101f74953; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_101f7488c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101f74678(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101f74954; end: 101f74acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f74954(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  uVar7 = param_1;
  func_0x000107c5efd4();
  func_0x000107c41818(param_1);
  func_0x000107c61170();
  func_0x000107c5eff4();
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101f74ac4);
    (*pcVar3)();
  }
  if (*(ulong *)(*(long *)(unaff_x20 + _DAT_112e46a20) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101f74ac8);
    (*pcVar3)();
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112e46a20) + uVar7 * 0x28;
  uVar7 = *(ulong *)(lVar5 + 0x20);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = uVar7;
  if (-1 < lVar8) {
    uVar6 = *(ulong *)(lVar5 + 0x40);
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    uVar4 = 0x112e469b8;
    func_0x0001000285a8(0x112e469b8,&UNK_10da3b138);
    func_0x000107c613fc();
    *(undefined8 *)(uVar4 + 0x18) = 2;
    *(undefined8 *)(uVar4 + 0x10) = 1;
    *(ulong *)(uVar4 + 0x20) = uVar7;
    *(undefined8 *)(uVar4 + 0x28) = uVar1;
    *(undefined8 *)(uVar4 + 0x30) = uVar2;
    *(char *)(uVar4 + 0x38) = (char)lVar8;
    *(ulong *)(uVar4 + 0x40) = uVar6;
    func_0x000107c61434(uVar1);
    uVar7 = uVar4;
  }
  func_0x000107c61434();
  func_0x000107c5efe4();
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101f74acc);
    (*pcVar3)();
  }
  if (*(ulong *)(uVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101f74ad0);
    (*pcVar3)();
  }
  lVar5 = uVar7 + uVar6 * 0x28;
  uStack_98 = *(undefined8 *)(lVar5 + 0x28);
  uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x38);
  uStack_90 = *(undefined8 *)(lVar5 + 0x30);
  uStack_80 = *(undefined8 *)(lVar5 + 0x40);
  uStack_70 = uStack_a0;
  uStack_68 = uStack_98;
  uStack_58 = uStack_80;
  func_0x000100402194(&uStack_70,auStack_b0);
  FUN_101f74b90(&uStack_58,auStack_b0);
  func_0x000107c6142c(uVar7);
  FUN_101f73e90(&uStack_a0);
  func_0x000100bcb1dc(&uStack_70);
  FUN_101f728d0(&uStack_58);
  return;
}



/* Entry: 101f74ad0; end: 101f74b8f; -[_TtC40SCSpectaclesFlightSettingsImplementation28FlightSettingsViewController tableView:didSelectRowAtIndexPath:] */

void FUN_101f74ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101f74954(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101f74b90; end: 101f74bdf;  */

undefined8 FUN_101f74b90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e469f8;
  func_0x0001000285a8(0x112e469f8,&UNK_10da3b1b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101f74be0; end: 101f74c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f74be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar5 = *(byte *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar4 = *(byte *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar6 + 0x10,auStack_90,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(lVar6 + _DAT_112e46a28);
    func_0x000107c6157c(uVar8);
    func_0x000107c61170(lVar6);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_c8 = uVar3;
    uStack_c0 = (ulong)bVar5;
    uStack_b8 = uVar1;
    uStack_b0 = uVar2;
    uStack_a8 = uVar9;
    uStack_a0 = (ulong)bVar4;
    uStack_98 = uVar7;
    uStack_78 = uVar7;
    func_0x000100402194(&uStack_70,auStack_d8);
    FUN_101f74b90(&uStack_78,auStack_d8);
    func_0x0001002a64a8(&uStack_c8);
    func_0x000107c61574(uVar8);
    func_0x000100bcb1dc(&uStack_70);
    FUN_101f728d0(&uStack_78);
  }
  func_0x000107c4200c(param_1);
  return;
}



/* Entry: 101f74c0c; end: 101f74c3f;  */

undefined8 FUN_101f74c0c(undefined8 param_1)

{
  (*(code *)(undefined *)0x101f72ab0)();
  return param_1;
}



/* Entry: 101f74c40; end: 101f74ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f74c40(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000107c61614(unaff_x20 + _DAT_112e46a00,0);
  lVar1 = _DAT_112e46a10;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112e46a18;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined **)(unaff_x20 + _DAT_112e46a20) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112e46a28;
  uVar3 = 0x112e46a70;
  func_0x0001000285a8(0x112e46a70,&UNK_10da3b1c8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e46a30) = 0;
  lVar1 = _DAT_112e46a38;
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8();
  func_0x000107c469d8(0,0,0,0);
  func_0x000107c58f5c();
  uVar5 = 0;
  func_0x000101f72598();
  uVar3 = 0x112e46a68;
  uStack_48 = uVar5;
  func_0x0001000285a8(0x112e46a68,&UNK_10da3b1c0);
  puVar6 = &uStack_48;
  func_0x000107c5fb18(puVar6,uVar3);
  func_0x00010257b4d8(uVar5,puVar6,uVar3,uVar5);
  func_0x000107c6142c(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "SCSpectaclesFlightSettingsImplementation/FlightSettingsViewController.swift",
                      0x4b,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f74de4);
  (*pcVar2)();
}



/* Entry: 101f74ebc; end: 101f7500f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f74ebc(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  puVar6 = PTR_PTR_1126c3020;
  func_0x000107c610f8(PTR_PTR_1126c3020);
  func_0x000107c469a4(0,0,0,0);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101f75008);
    (*pcVar5)();
  }
  if (param_1 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112e46a20) + 0x10)) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112e46a20) + param_1 * 0x28;
    lVar1 = *(long *)(lVar9 + 0x20);
    uVar3 = *(undefined8 *)(lVar9 + 0x28);
    uVar2 = *(undefined8 *)(lVar9 + 0x30);
    lVar4 = *(long *)(lVar9 + 0x38);
    uVar10 = *(undefined8 *)(lVar9 + 0x40);
    func_0x000107c61174();
    lVar9 = lVar1;
    uVar8 = uVar3;
    FUN_101f71484(lVar1,uVar3,uVar2,lVar4,uVar10);
    if (lVar4 < 0) {
      func_0x000109025a98();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101f75010);
        (*pcVar5)();
      }
    }
    else {
      func_0x000109025ab0();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101f74f64);
        (*pcVar5)();
      }
    }
    lVar7 = lVar9;
    func_0x000107c5faec();
    FUN_101f714c4(lVar1,uVar3,uVar2,lVar4,uVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c5fadc(lVar7,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c59e18(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c59a2c(puVar6);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101f7500c);
  (*pcVar5)();
}



/* Entry: 101f75010; end: 101f75017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f75010(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112e46a20);
    *(undefined8 *)(lVar1 + _DAT_112e46a20) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e46a38);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c4fd7c(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101f75018; end: 101f75057;  */

void FUN_101f75018(void)

{
  FUN_101f73c50();
  return;
}



/* Entry: 101f75058; end: 101f7506f;  */

void FUN_101f75058(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c3ea90();
  if (param_1 != 2) {
    puVar5 = auStack_58;
    func_0x000107c61428(unaff_x20 + 0x10,puVar5,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000109025a80();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f73e10);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c6157c();
      FUN_101f73a0c(0,0,lVar4,puVar5,0x101f75060);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(puVar5);
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 101f75070; end: 101f750af;  */

void FUN_101f75070(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101f750b0; end: 101f750b7;  */

void FUN_101f750b0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_101f72d3c();
    func_0x000107c61170(lVar1);
    func_0x000107c42864(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101f750b8; end: 101f750db;  */

undefined8 FUN_101f750b8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101f750dc; end: 101f75117;  */

void FUN_101f750dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f75118; end: 101f75147;  */

void FUN_101f75118(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f75148; end: 101f75153;  */

void FUN_101f75148(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f75154; end: 101f75387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f75154(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long alStack_90 [4];
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(lVar11 + _DAT_11307af00);
  uVar8 = *(undefined8 *)(lVar11 + _DAT_11307af08);
  uVar9 = *(undefined8 *)(lVar11 + _DAT_11307af10);
  lVar1 = 0;
  func_0x000101f7109c();
  func_0x000107c613fc();
  func_0x000107c615f0(uVar8);
  func_0x000107c615f0(uVar9);
  func_0x000101f723b8(lVar7,uVar8,uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8(uVar9);
  lVar2 = _DAT_11307aef8;
  func_0x000107c61428(lVar11 + _DAT_11307aef8,auStack_68,0,0);
  lVar2 = lVar11 + lVar2;
  func_0x000107c61618();
  ppuStack_70 = &PTR_DAT_1104a9c70;
  uVar8 = 0;
  alStack_90[0] = lVar7;
  alStack_90[3] = lVar1;
  func_0x000101f74584(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  uVar9 = *puVar10;
  func_0x000107c6157c(lVar7);
  lVar1 = lVar2;
  FUN_101f75430(lVar2,uVar9,uVar8);
  func_0x000107c615e8(lVar2);
  func_0x0001000834e4(alStack_90);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_112e46a28);
  puVar3 = &UNK_1104a9f58;
  func_0x000107c613fc(&UNK_1104a9f58,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar7);
  func_0x000107c6157c(uVar8);
  pcVar4 = FUN_101f7564c;
  puVar6 = puVar3;
  func_0x0001000b6504(FUN_101f7564c);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(lVar7 + 0x28),pcVar5,puVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c615e8(pcVar4);
  func_0x000107c3e2c0(*(undefined8 *)(lVar11 + _DAT_11307aef0));
  func_0x000107c61574(lVar7);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 101f75388; end: 101f753db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f75388(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307aef0),param_2,0);
  return 0;
}



/* Entry: 101f753dc; end: 101f753fb;  */

void FUN_101f753dc(void)

{
  FUN_101f75154();
  return;
}



/* Entry: 101f753fc; end: 101f7542f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f753fc(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_11307aef0),param_2,0);
  return 0;
}



/* Entry: 101f75430; end: 101f7564b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f75430(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  plVar8 = &lStack_90;
  lVar3 = param_3;
  func_0x000107c614f0();
  uVar4 = 0;
  func_0x000101f7109c();
  lVar1 = _DAT_112e46a00;
  ppuStack_58 = &PTR_DAT_1104a9c70;
  auStack_78[0] = param_2;
  uStack_60 = uVar4;
  func_0x000107c61614(param_3 + _DAT_112e46a00,0);
  lVar2 = _DAT_112e46a10;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_3 + lVar2) = uVar4;
  lVar2 = _DAT_112e46a18;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar2) = puVar5;
  *(undefined **)(param_3 + _DAT_112e46a20) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_112e46a28;
  uVar4 = 0x112e46a70;
  func_0x0001000285a8(0x112e46a70,&UNK_10da3b1c8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_3 + lVar2) = uVar4;
  *(undefined8 *)(param_3 + _DAT_112e46a30) = 0;
  lVar2 = _DAT_112e46a38;
  puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8();
  func_0x000107c469d8(0,0,0,0);
  func_0x000107c58f5c();
  uVar6 = 0;
  func_0x000101f72598();
  uVar4 = 0x112e46a68;
  uStack_80 = uVar6;
  func_0x0001000285a8(0x112e46a68,&UNK_10da3b1c0);
  puVar7 = &uStack_80;
  func_0x000107c5fb18(puVar7,uVar4);
  func_0x00010257b4d8(uVar6,puVar7,uVar4,uVar6);
  func_0x000107c6142c(uVar4);
  *(undefined **)(param_3 + lVar2) = puVar5;
  func_0x000107c61604(param_3 + lVar1,param_1);
  FUN_101f75674(auStack_78,param_3 + _DAT_112e46a08);
  lStack_90 = param_3;
  lStack_88 = lVar3;
  func_0x000107c61154(&lStack_90,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c5a304(plVar8);
  func_0x000107c53dec(plVar8);
  func_0x000107c61170(plVar8);
  func_0x0001000834e4(auStack_78);
  return (undefined1 *)plVar8;
}



/* Entry: 101f7564c; end: 101f75653;  */

void FUN_101f7564c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = param_1[6];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101f70e34(&uStack_60);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101f75654; end: 101f75673;  */

void FUN_101f75654(void)

{
  func_0x000107c61168(&PTR_PTR_112e46ab8);
  return;
}



/* Entry: 101f75674; end: 101f756b7;  */

long FUN_101f75674(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101f756b8; end: 101f75723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f756b8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f75aac();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e46b20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f75724; end: 101f7578f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f75724(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e46b20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f75790; end: 101f757ef; -[_TtC46SpectaclesHomeWifiScopedFactoryServiceProvider34SCSpectaclesHomeWifiScopedServices init] */

void FUN_101f75790(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesHomeWifiScopedFactoryServiceProvider.SCSpectaclesHomeWifiScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f757bc);
  (*pcVar1)();
}



/* Entry: 101f757f0; end: 101f757ff; -[_TtC46SpectaclesHomeWifiScopedFactoryServiceProvider34SCSpectaclesHomeWifiScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f757f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e46b20));
  return;
}



/* Entry: 101f75800; end: 101f7586b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f75800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104aa158;
  func_0x000107c613fc(&UNK_1104aa158,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f75b44,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f7586c; end: 101f75907;  */

void FUN_101f7586c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104aa068;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104aa068;
  return;
}



/* Entry: 101f75908; end: 101f7593f;  */

void FUN_101f75908(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101f75940; end: 101f75947;  */

undefined8 FUN_101f75940(void)

{
  return 0x1b;
}



/* Entry: 101f75948; end: 101f75a7b;  */

void FUN_101f75948(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104aa180;
  func_0x000107c613fc(&UNK_1104aa180,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f75b1c;
  func_0x00010058fa64(FUN_101f75b1c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f75a7c; end: 101f75aab;  */

undefined ** FUN_101f75a7c(void)

{
  return &PTR_DAT_113066f70;
}



/* Entry: 101f75aac; end: 101f75acb;  */

void FUN_101f75aac(void)

{
  func_0x000107c61168(&PTR_PTR_11280de98);
  return;
}



/* Entry: 101f75acc; end: 101f75b1b;  */

undefined1  [16] FUN_101f75acc(void)

{
  return ZEXT816(0x1104aa0b8);
}



/* Entry: 101f75b1c; end: 101f75b43;  */

void FUN_101f75b1c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f75b44; end: 101f75b47;  */

void FUN_101f75b44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f75b48; end: 101f75cb7;  */

void FUN_101f75b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e46b88,&UNK_10da3b450);
  puVar1 = &UNK_1104aa1c0;
  func_0x000107c613fc(&UNK_1104aa1c0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f75cb8,puVar1);
  return;
}



/* Entry: 101f75cb8; end: 101f75cd3;  */

/* WARNING: Possible PIC construction at 0x000101f75c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f75c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f75c90) */
/* WARNING: Removing unreachable block (ram,0x000101f75ca0) */

void FUN_101f75cb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1104aa208;
  func_0x000107c613fc(&UNK_1104aa208,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e46b90;
  func_0x0001000285a8(0x112e46b90,&UNK_10da3b498);
  func_0x000107c613fc();
  pcVar6 = FUN_101f75ffc;
  func_0x0001000841fc(FUN_101f75ffc,puVar4,uVar5);
  func_0x000100084214(&UNK_10da3b460,0x30,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f75cd4; end: 101f75ffb;  */

void FUN_101f75cd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e46b98,&UNK_10da3b4a0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e46ba0,&UNK_10da3b4b0);
  puVar2 = &UNK_1104aa230;
  func_0x000107c613fc(&UNK_1104aa230,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x101f76008;
  func_0x0001000823a8(0x101f76008,puVar2);
  func_0x000100082720("SCSpectaclesHomeWifiEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f75908;
  func_0x0001000823a8(FUN_101f75908,0);
  pcVar4 = "SCSpectaclesHomeWifiScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesHomeWifiScopedServicesCleanupRelayServiceProvider",0x3d,2);
  FUN_101f770a8();
  func_0x000100082720("SpectaclesHomeWifiScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e46ba8,&UNK_10da3b4a8);
  puVar2 = &UNK_1104aa258;
  func_0x000107c613fc(&UNK_1104aa258,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101f76054;
  func_0x0001000823a8(FUN_101f76054,puVar2);
  func_0x000100082720("SCSpectaclesHomeWifiScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e46b28,&UNK_10da3b230);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101f76060;
  func_0x0001000823a8(0x101f76060,pcVar5);
  func_0x000100082720("SCSpectaclesHomeWifiScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e46b18,&UNK_10da3b220);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f76068;
  func_0x0001000823a8(0x101f76068,uVar6);
  func_0x000100082720("SCSpectaclesHomeWifiScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104aa280;
  func_0x000107c613fc(&UNK_1104aa280,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101f76070;
  func_0x0001000823a8(0x101f76070,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesHomeWifiScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f75ffc; end: 101f76017;  */

void FUN_101f75ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e46b98,&UNK_10da3b4a0);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e46ba0,&UNK_10da3b4b0);
  puVar3 = &UNK_1104aa230;
  func_0x000107c613fc(&UNK_1104aa230,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar4 = 0x101f76008;
  func_0x0001000823a8(0x101f76008,puVar3);
  func_0x000100082720("SCSpectaclesHomeWifiEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101f75908;
  func_0x0001000823a8(FUN_101f75908,0);
  pcVar6 = "SCSpectaclesHomeWifiScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesHomeWifiScopedServicesCleanupRelayServiceProvider",0x3d,2);
  FUN_101f770a8();
  func_0x000100082720("SpectaclesHomeWifiScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e46ba8,&UNK_10da3b4a8);
  puVar3 = &UNK_1104aa258;
  func_0x000107c613fc(&UNK_1104aa258,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar5;
  *(char **)(puVar3 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_101f76054;
  func_0x0001000823a8(FUN_101f76054,puVar3);
  func_0x000100082720("SCSpectaclesHomeWifiScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e46b28,&UNK_10da3b230);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101f76060;
  func_0x0001000823a8(0x101f76060,pcVar7);
  func_0x000100082720("SCSpectaclesHomeWifiScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e46b18,&UNK_10da3b220);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f76068;
  func_0x0001000823a8(0x101f76068,uVar8);
  func_0x000100082720("SCSpectaclesHomeWifiScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104aa280;
  func_0x000107c613fc(&UNK_1104aa280,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar9 = 0x101f76070;
  func_0x0001000823a8(0x101f76070,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesHomeWifiScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f76018; end: 101f76053;  */

void FUN_101f76018(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f76054; end: 101f76077;  */

void FUN_101f76054(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f76864(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesHomeWifiScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101f76078; end: 101f76663;  */

void FUN_101f76078(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_101f767b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a9b50;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x69666957656d6f68;
  func_0x000107c5fadc(0x69666957656d6f68,0xed000065706f6353);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01d700);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019f40);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f022fb0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 101f76664; end: 101f766a7;  */

void FUN_101f76664(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f766a8; end: 101f766af;  */

undefined8 FUN_101f766a8(void)

{
  return 0x1b;
}



/* Entry: 101f766b0; end: 101f76733;  */

void FUN_101f766b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f767f4,param_2,FUN_101f767f8,param_2,FUN_101f76820,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f76734; end: 101f76783;  */

undefined8 FUN_101f76734(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


