/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10744b2dc; end: 10744b2ef;  */

void FUN_10744b2dc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10744b2f0; end: 10744b357;  */

void FUN_10744b2f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010744c4e8();
  do {
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 == 0) {
      iVar2 = unaff_w19;
      FUN_10744b6e4(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    *(int *)(param_2 + 0x28) = iVar2;
    lVar4 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
    param_2 = lVar4;
  } while (lVar4 != unaff_x20);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar6 = 1;
  while( true ) {
    lVar8 = 0;
    uVar7 = 0;
    uVar1 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    lVar3 = 0;
    if (lVar4 != 0) break;
LAB_10744b85c:
    *(undefined8 *)(lVar8 + 0x38) = 0;
    uVar6 = uVar6 << 1;
    lVar4 = lVar3;
    if (uVar7 < 2) {
      return;
    }
  }
LAB_10744b798:
  uVar7 = uVar7 + 1;
  lVar12 = lVar4;
  uVar9 = 0;
  do {
    lVar11 = lVar4;
    uVar10 = uVar1;
    uVar13 = uVar6;
    if (uVar1 == uVar9) break;
    uVar10 = uVar9 + 1;
    lVar12 = *(long *)(lVar12 + 0x38);
    uVar9 = uVar10;
  } while (lVar12 != 0);
  do {
    lVar4 = lVar12;
    lVar5 = lVar4;
    if ((int)uVar10 < 1) {
      uVar9 = uVar13 - 1;
      if (((int)uVar13 < 1) || (lVar4 == 0)) break;
      if (uVar10 != 0) goto LAB_10744b7dc;
      lVar12 = *(long *)(lVar4 + 0x38);
    }
    else {
LAB_10744b7dc:
      if (((uVar13 == 0) || (lVar4 == 0)) || (*(int *)(lVar11 + 0x28) <= *(int *)(lVar4 + 0x28))) {
        uVar10 = uVar10 - 1;
        lVar5 = lVar11;
        lVar11 = *(long *)(lVar11 + 0x38);
        lVar12 = lVar4;
        uVar9 = uVar13;
      }
      else {
        lVar12 = *(long *)(lVar4 + 0x38);
        uVar9 = uVar13 - 1;
      }
    }
    lVar4 = lVar5;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x38) = lVar5;
      lVar4 = lVar3;
    }
    lVar3 = lVar4;
    *(long *)(lVar5 + 0x30) = lVar8;
    lVar8 = lVar5;
    uVar13 = uVar9;
  } while( true );
  if (lVar4 == 0) goto LAB_10744b85c;
  goto LAB_10744b798;
}



/* Entry: 10744b358; end: 10744b4cb;  */

undefined8 FUN_10744b358(undefined8 param_1,long param_2)

{
  char in_NG;
  char in_OV;
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
  undefined8 unaff_x20;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = (int)unaff_x20;
  func_0x00010744c454();
  lVar7 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010744cd40();
  FUN_10744c73c();
  if (in_NG != in_OV) {
    dVar10 = *(double *)(lVar5 + 8);
    dVar11 = *(double *)(lVar5 + 0x10);
    dVar12 = *(double *)(unaff_x19 + 8);
    dVar13 = *(double *)(unaff_x19 + 0x10);
    dVar8 = dVar10;
    if (dVar12 <= dVar10) {
      dVar8 = dVar12;
    }
    dVar14 = *(double *)(lVar7 + 8);
    dVar15 = *(double *)(lVar7 + 0x10);
    if (dVar14 <= dVar8) {
      dVar8 = dVar14;
    }
    dVar9 = dVar11;
    if (dVar13 <= dVar11) {
      dVar9 = dVar13;
    }
    if (dVar15 <= dVar9) {
      dVar9 = dVar15;
    }
    if (dVar10 <= dVar12) {
      dVar10 = dVar12;
    }
    if (dVar10 <= dVar14) {
      dVar10 = dVar14;
    }
    if (dVar11 <= dVar13) {
      dVar11 = dVar13;
    }
    if (dVar11 <= dVar15) {
      dVar11 = dVar15;
    }
    FUN_10744b6e4(dVar8,dVar9);
    uVar3 = unaff_x20;
    FUN_10744b6e4(dVar10,dVar11);
    uVar4 = uVar3;
    lVar7 = unaff_x19;
    do {
      do {
        do {
          lVar7 = *(long *)(lVar7 + 0x38);
          lVar5 = unaff_x19;
          if ((lVar7 == 0) || ((int)uVar3 < *(int *)(lVar7 + 0x28))) {
            while ((lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0 && (iVar6 <= *(int *)(lVar5 + 0x28))
                   )) {
              if (lVar5 != *(long *)(unaff_x19 + 0x18)) {
                lVar7 = *(long *)(unaff_x19 + 0x20);
                cVar1 = SBORROW8(lVar5,lVar7);
                cVar2 = lVar5 - lVar7 < 0;
                if (lVar5 != lVar7) {
                  func_0x00010744cdc0();
                  func_0x00010744cf14();
                  if (((int)uVar4 != 0) && (uVar4 = unaff_x20, FUN_10744c73c(), cVar2 == cVar1)) {
                    return 0;
                  }
                }
              }
            }
            return 1;
          }
        } while (lVar7 == *(long *)(unaff_x19 + 0x18));
        lVar5 = *(long *)(unaff_x19 + 0x20);
        cVar1 = SBORROW8(lVar7,lVar5);
        cVar2 = lVar7 - lVar5 < 0;
      } while (lVar7 == lVar5);
      func_0x00010744cdc0();
      func_0x00010744cf14();
    } while (((int)uVar4 == 0) || (uVar4 = unaff_x20, FUN_10744c73c(), cVar2 != cVar1));
  }
  return 0;
}



/* Entry: 10744b4cc; end: 10744b62b;  */

undefined1 FUN_10744b4cc(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  char cVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  
  func_0x00010744c454();
  func_0x00010744cd40();
  FUN_10744c73c();
  if (in_NG != in_OV) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    do {
      lVar4 = *(long *)(lVar4 + 0x20);
      lVar3 = *(long *)(unaff_x19 + 0x18);
      cVar1 = SBORROW8(lVar4,lVar3);
      cVar2 = lVar4 - lVar3 < 0;
      if (lVar4 == lVar3) {
        return 1;
      }
      func_0x00010744cdc0();
      func_0x00010744cf14();
    } while (((int)param_1 == 0) || (param_1 = unaff_x20, FUN_10744c73c(), cVar2 != cVar1));
  }
  return 0;
}



/* Entry: 10744b62c; end: 10744b6e3;  */

void FUN_10744b62c(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *unaff_x19;
  int iVar3;
  int *piVar4;
  int *unaff_x21;
  int *piVar5;
  
code_r0x00010744b62c:
  func_0x00010744d090();
  do {
    piVar5 = *(int **)(param_2 + 8);
    while (piVar5 = *(int **)(piVar5 + 8), piVar5 != *(int **)(param_2 + 6)) {
      if (*param_2 != *piVar5) {
        func_0x00010744c81c();
        FUN_10744ba00();
        if ((int)param_1 != 0) {
          func_0x00010744c81c();
          FUN_10744b088();
          func_0x00010744c81c();
          func_0x00010744a200();
          func_0x00010744c7d0();
          func_0x00010744a200();
          func_0x00010744c81c();
          FUN_107449da0();
          func_0x00010744c7d0();
          iVar3 = 0;
          func_0x00010744d090();
          param_1 = unaff_x21;
          goto LAB_107449dbc;
        }
      }
    }
    param_2 = *(int **)(param_2 + 8);
    if (param_2 == unaff_x21) {
      return;
    }
  } while( true );
LAB_107449dbc:
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar5 = param_1;
  piVar4 = param_1;
  if ((iVar3 == 0) && ((char)unaff_x19[8] == '\x01')) {
    func_0x00010744c7d0();
    FUN_10744b2f0();
  }
LAB_107449ddc:
  do {
    piVar1 = *(int **)(piVar5 + 6);
    piVar2 = *(int **)(piVar5 + 8);
    if (piVar1 == piVar2) {
      return;
    }
    param_1 = unaff_x19;
    param_2 = piVar5;
    if ((char)unaff_x19[8] == '\x01') {
      FUN_10744b358();
      if (((ulong)param_1 & 1) != 0) {
LAB_107449e20:
        func_0x0001009eba34(unaff_x19,piVar1);
        func_0x0001009eba34(unaff_x19,piVar5);
        func_0x00010744caec();
        func_0x0001009eba34();
        FUN_107449f28(unaff_x19,piVar5);
        piVar5 = *(int **)(piVar2 + 8);
        piVar4 = piVar5;
        goto LAB_107449ddc;
      }
    }
    else {
      func_0x00010744b4cc();
      if ((int)param_1 != 0) goto LAB_107449e20;
    }
    piVar5 = piVar2;
  } while (piVar2 != piVar4);
  if (iVar3 == 0) {
    func_0x00010744caec();
    func_0x00010744a200();
    iVar3 = 1;
    goto LAB_107449dbc;
  }
  if (iVar3 == 1) {
    func_0x00010744caec();
    func_0x00010744a200();
    piVar5 = unaff_x19;
    func_0x00010744b554(unaff_x19,param_1);
    iVar3 = 2;
    param_1 = piVar5;
    goto LAB_107449dbc;
  }
  if (iVar3 != 2) {
    return;
  }
  func_0x00010744caec();
  goto code_r0x00010744b62c;
}



/* Entry: 10744b6e4; end: 10744b86f;  */

undefined4 FUN_10744b6e4(double param_1,double param_2,long param_3)

{
  undefined2 uVar1;
  uint uVar3;
  byte bVar7;
  byte bVar8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar9;
  int iVar10;
  int iVar12;
  undefined8 uVar11;
  undefined4 uVar2;
  
  lVar4 = (long)((param_2 - *(double *)(param_3 + 0x38)) * 32767.0 * *(double *)(param_3 + 0x48));
  lVar9 = (long)((param_1 - *(double *)(param_3 + 0x28)) * 32767.0 * *(double *)(param_3 + 0x48));
  bVar7 = (byte)((ulong)lVar4 >> 8) | (byte)((ulong)lVar4 >> 0x10);
  bVar8 = (byte)((ulong)lVar9 >> 8) | (byte)((ulong)lVar9 >> 0x10);
  uVar3 = (uint)CONCAT12(bVar7,(ushort)(byte)lVar4);
  iVar10 = uVar3 << 4;
  iVar12 = (uint)(uint3)(CONCAT16(bVar8,(uint6)CONCAT14((char)lVar9,uVar3)) >> 0x20) << 4;
  uVar1 = CONCAT11((char)((uint)iVar10 >> 8),(byte)lVar4);
  uVar2 = CONCAT13((char)((uint)iVar10 >> 0x18),CONCAT12(bVar7,uVar1));
  uVar6 = CONCAT62((int6)(CONCAT17((char)((uint)iVar12 >> 0x18),
                                   CONCAT16(bVar8,CONCAT15((char)((uint)iVar12 >> 8),
                                                           CONCAT14((char)lVar9,uVar2)))) >> 0x10),
                   uVar1) & 0xffffffffffffff0f;
  uVar5 = CONCAT44((int)(uVar6 >> 0x20),CONCAT22((short)((uint)uVar2 >> 0x10),(short)uVar6)) &
          0xffffffffff0fffff;
  uVar6 = CONCAT26((short)(uVar5 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar5)) &
          0xff0fff0fffffffff;
  iVar10 = (int)uVar6 << 2;
  iVar12 = (int)(uVar6 >> 0x20) << 2;
  uVar3 = CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)(uVar6 >> 0x18),
                   CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)(uVar6 >> 0x10),
                            CONCAT11((byte)((uint)iVar10 >> 8) | (byte)(uVar6 >> 8),
                                     (byte)iVar10 | (byte)uVar6)));
  uVar6 = CONCAT17((byte)((uint)iVar12 >> 0x18) | (byte)(uVar6 >> 0x38),
                   CONCAT16((byte)((uint)iVar12 >> 0x10) | (byte)(uVar6 >> 0x30),
                            CONCAT15((byte)((uint)iVar12 >> 8) | (byte)(uVar6 >> 0x28),
                                     CONCAT14((byte)iVar12 | (byte)(uVar6 >> 0x20),uVar3)))) &
          0x3333333333333333;
  uVar11 = NEON_ushl(uVar6,0x100000002,4);
  iVar10 = (uVar3 & 0x33333333) << 1;
  uVar6 = CONCAT17((byte)((ulong)uVar11 >> 0x38) | (byte)(uVar6 >> 0x38),
                   CONCAT16((byte)((ulong)uVar11 >> 0x30) | (byte)(uVar6 >> 0x30),
                            CONCAT15((byte)((ulong)uVar11 >> 0x28) | (byte)(uVar6 >> 0x28),
                                     CONCAT14((byte)((ulong)uVar11 >> 0x20) | (byte)(uVar6 >> 0x20),
                                              CONCAT13((byte)((ulong)uVar11 >> 0x18) |
                                                       (byte)((uint)iVar10 >> 0x18),
                                                       CONCAT12((byte)((ulong)uVar11 >> 0x10) |
                                                                (byte)((uint)iVar10 >> 0x10),
                                                                CONCAT11((byte)((ulong)uVar11 >> 8)
                                                                         | (byte)((uint)iVar10 >> 8)
                                                                         ,(byte)uVar11 |
                                                                          (byte)iVar10))))))) &
          0x55555555aaaaaaaa;
  return CONCAT13((byte)(uVar6 >> 0x18) | (byte)(uVar6 >> 0x38),
                  CONCAT12((byte)(uVar6 >> 0x10) | (byte)(uVar6 >> 0x30),
                           CONCAT11((byte)(uVar6 >> 8) | (byte)(uVar6 >> 0x28),
                                    (byte)uVar6 | (byte)(uVar6 >> 0x20))));
}



/* Entry: 10744b870; end: 10744b99f;  */

undefined8
FUN_10744b870(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte in_NG;
  undefined1 in_ZR;
  byte in_OV;
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_10744c73c();
  uVar2 = (uint)(!(bool)in_ZR && in_NG == in_OV);
  uVar6 = (uint)in_NG;
  func_0x00010744d078();
  FUN_10744c73c();
  uVar3 = (uint)(!(bool)in_ZR && in_NG == in_OV);
  uVar7 = (uint)in_NG;
  func_0x00010744cd40(param_1);
  FUN_10744c73c();
  uVar4 = (uint)(!(bool)in_ZR && in_NG == in_OV);
  uVar8 = (uint)in_NG;
  uVar1 = param_1;
  func_0x00010744cd40();
  FUN_10744c73c();
  uVar5 = (uint)(!(bool)in_ZR && in_NG == in_OV);
  if (uVar2 - uVar6 == uVar3 - uVar7 || uVar4 - uVar8 == uVar5 - in_NG) {
    if (uVar2 == uVar6) {
      func_0x00010744d078();
      FUN_10744b9a0();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    if (uVar3 == uVar7) {
      func_0x00010744d078();
      FUN_10744b9a0();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    if (((uVar4 != uVar8) ||
        (uVar1 = param_1, FUN_10744b9a0(param_1,param_4,param_2,param_5), (uVar1 & 1) == 0)) &&
       ((uVar5 != in_NG || (FUN_10744b9a0(param_1,param_4,param_3,param_5), (param_1 & 1) == 0)))) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 10744b9a0; end: 10744b9ff;  */

bool FUN_10744b9a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_2 + 8);
  dVar2 = *(double *)(param_4 + 8);
  dVar3 = dVar2;
  if (dVar2 <= dVar1) {
    dVar3 = dVar1;
  }
  if (*(double *)(param_3 + 8) <= dVar3) {
    if (dVar1 <= dVar2) {
      dVar2 = dVar1;
    }
    if (dVar2 <= *(double *)(param_3 + 8)) {
      dVar1 = *(double *)(param_2 + 0x10);
      dVar2 = *(double *)(param_4 + 0x10);
      dVar3 = dVar2;
      if (dVar2 <= dVar1) {
        dVar3 = dVar1;
      }
      if (*(double *)(param_3 + 0x10) <= dVar3) {
        if (dVar1 <= dVar2) {
          dVar2 = dVar1;
        }
        return dVar2 <= *(double *)(param_3 + 0x10);
      }
    }
  }
  return false;
}



/* Entry: 10744ba00; end: 10744bb8f;  */

bool FUN_10744ba00(ulong param_1,long param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  if (((**(int **)(param_2 + 0x20) != *param_3) &&
      (uVar3 = **(int **)(param_2 + 0x18) == *param_3, !(bool)uVar3)) &&
     (uVar5 = param_1, func_0x00010744bb0c(param_1,param_2), (uVar5 & 1) == 0)) {
    uVar5 = param_1;
    func_0x00010744cd40();
    iVar4 = (int)uVar5;
    FUN_10744b144();
    if ((iVar4 != 0) && (uVar5 = param_1, FUN_10744b144(param_1,param_3,param_2), (int)uVar5 != 0))
    {
      uVar5 = param_1;
      func_0x00010744cd40();
      iVar4 = (int)uVar5;
      FUN_10744bb90();
      if ((iVar4 != 0) &&
         ((FUN_10744c73c(param_1,*(undefined8 *)(param_2 + 0x18),param_2,
                         *(undefined8 *)(param_3 + 6)), !(bool)uVar3 ||
          (FUN_10744c73c(param_1,param_2,*(undefined8 *)(param_3 + 6),param_3), !(bool)uVar3)))) {
        return true;
      }
    }
    if (*(double *)(param_2 + 8) == *(double *)(param_3 + 2)) {
      dVar6 = *(double *)(param_2 + 0x10);
      dVar7 = *(double *)(param_3 + 4);
      cVar2 = NAN(dVar6) || NAN(dVar7);
      uVar3 = dVar6 == dVar7;
      cVar1 = dVar6 < dVar7;
      if (((bool)uVar3) &&
         (FUN_10744c73c(param_1,*(undefined8 *)(param_2 + 0x18),param_2,
                        *(undefined8 *)(param_2 + 0x20)), !(bool)uVar3 && cVar1 == cVar2)) {
        func_0x00010744d00c();
        FUN_10744c73c();
        return !(bool)uVar3 && cVar1 == cVar2;
      }
    }
  }
  return false;
}



/* Entry: 10744bb90; end: 10744bc1f;  */

uint FUN_10744bb90(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = 0;
  dVar6 = (*(double *)(param_2 + 0x10) + *(double *)(param_3 + 0x10)) * 0.5;
  lVar2 = param_2;
  dVar4 = *(double *)(param_2 + 0x10);
  do {
    lVar3 = *(long *)(lVar2 + 0x20);
    dVar5 = *(double *)(lVar3 + 0x10);
    if ((dVar5 != dVar4 && dVar6 < dVar4 != dVar6 < dVar5) &&
       ((*(double *)(param_2 + 8) + *(double *)(param_3 + 8)) * 0.5 <
        *(double *)(lVar2 + 8) +
        ((dVar6 - dVar4) * (*(double *)(lVar3 + 8) - *(double *)(lVar2 + 8))) / (dVar5 - dVar4))) {
      uVar1 = uVar1 ^ 1;
    }
    lVar2 = lVar3;
    dVar4 = dVar5;
  } while (lVar3 != param_2);
  return uVar1;
}



/* Entry: 10744bc20; end: 10744bc47;  */

long FUN_10744bc20(long param_1)

{
  long lStack_28;
  
  FUN_10744bc48(param_1 + 0x50);
  lStack_28 = param_1;
  FUN_10731e298(&lStack_28);
  return param_1;
}



/* Entry: 10744bc48; end: 10744bc73;  */

long FUN_10744bc48(long param_1)

{
  FUN_107449ec4();
  FUN_10744b2b8(param_1 + 0x18);
  return param_1;
}



/* Entry: 10744bc74; end: 10744bca7;  */

void FUN_10744bc74(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010744ca08();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010744c590(uVar1);
  return;
}



/* Entry: 10744bca8; end: 10744bd3f;  */

long FUN_10744bca8(long param_1)

{
  long unaff_x19;
  int unaff_w20;
  
  func_0x00010744c4e8();
  func_0x00010744bcf4();
  if ((unaff_x19 + 8 == param_1) || (func_0x000104c2fc44(), unaff_w20 != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 10744bd40; end: 10744bd73;  */

long FUN_10744bd40(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10744bdc4();
  }
  else {
    FUN_10744bde8();
  }
  return param_1;
}



/* Entry: 10744bd74; end: 10744bd8b;  */

long * FUN_10744bd74(long *param_1,long *param_2,long *param_3,long param_4)

{
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (param_1[param_4 + 5] != 0) {
    if ((ulong)param_1[param_4 + 10] < (ulong)(param_2[1] - *param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010744bdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3,*param_2 + param_1[param_4 + 10]);
      return param_3;
    }
  }
  return (long *)0x0;
}



/* Entry: 10744bd8c; end: 10744bdc3;  */

long * FUN_10744bd8c(long param_1,long *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  
  param_1 = param_1 + param_4 * 8;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    if (uVar1 < (ulong)(param_2[1] - *param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010744bdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3,*param_2 + uVar1);
      return param_3;
    }
  }
  return (long *)0x0;
}



/* Entry: 10744bdc4; end: 10744bde7;  */

undefined8 FUN_10744bdc4(undefined8 param_1)

{
  func_0x0001006202b4();
  return param_1;
}



/* Entry: 10744bde8; end: 10744be43;  */

void FUN_10744bde8(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10744be44; end: 10744be9f;  */

void FUN_10744be44(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_48 [40];
  
  func_0x00010744c258();
  if ((ulong)(extraout_x9 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_107440cec();
      func_0x00010744c408();
      FUN_107440d88();
      func_0x00010744c3c8();
      unaff_x19[1] = unaff_x21;
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
    func_0x00010744c4c8();
    FUN_107440d00(auStack_48);
    func_0x00010744c4f4();
    FUN_107440c6c();
    FUN_107440d88(auStack_48);
  }
  return;
}



/* Entry: 10744bea0; end: 10744c73b;  */

void FUN_10744bea0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
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



/* Entry: 10744c73c; end: 10744c74f;  */

void FUN_10744c73c(void)

{
  FUN_10744b234();
  return;
}



/* Entry: 10744c750; end: 10744d0c3;  */

void FUN_10744c750(void)

{
  return;
}



/* Entry: 10744d0c4; end: 10744d877;  */

long * FUN_10744d0c4(undefined4 param_1,long *param_2,long param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  undefined8 extraout_x8;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 extraout_x8_00;
  ulong uVar17;
  undefined8 extraout_x9;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined1 *puVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long alStack_158 [3];
  long alStack_140 [6];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_80;
  
  plVar22 = param_2;
  func_0x0001074518e8();
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&PTR_DAT_1109ace68;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar10) {
      cVar5 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar5 != '\0');
  *(int *)(param_2 + 3) = iVar1;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = (long)&PTR_FUN_1109b1b58;
  *(undefined4 *)(param_2 + 6) = param_1;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[5] = param_3;
  param_2[10] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  param_2[0xc] = (long)&UNK_10e52b660;
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  param_2[0x13] = (long)&PTR_DAT_1109af1d8;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  plVar29 = param_2 + 0x1e;
  *(undefined1 *)plVar29 = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  param_2[0x23] = 0;
  param_2[0x22] = 0;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  plVar28 = param_2 + 0x14;
  *plVar28 = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0x3f800000;
  plVar13 = param_2 + 0x27;
  *plVar13 = (long)&UNK_10e52b660;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x28] = 0;
  plVar14 = param_2 + 0x2b;
  *plVar14 = (long)&UNK_10e52b660;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2c] = 0;
  uStack_80 = extraout_x8;
  func_0x000104c2fe00(param_2 + 0x2f,param_6);
  plVar22 = param_2 + 0x36;
  func_0x000104c2fe00(plVar22,param_7);
  lVar15 = 0;
  lVar23 = *param_8;
  param_2[0x3e] = param_8[1];
  param_2[0x3d] = lVar23;
  do {
    *(undefined1 *)((long)param_2 + lVar15 + 0x1f8) = 0;
    *(undefined1 *)((long)param_2 + lVar15 + 0x200) = 0;
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x200);
  lVar15 = 0;
  *(undefined1 *)(param_2 + 0x7f) = 0;
  *(undefined1 *)(param_2 + 0x80) = 0;
  *(undefined1 *)(param_2 + 0x81) = 0;
  *(undefined1 *)(param_2 + 0x82) = 0;
  do {
    *(undefined1 *)((long)param_2 + lVar15 + 0x418) = 0;
    *(undefined1 *)((long)param_2 + lVar15 + 0x420) = 0;
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x200);
  *(undefined1 *)(param_2 + 0xc3) = 0;
  *(undefined1 *)(param_2 + 0xc4) = 0;
  *(undefined1 *)(param_2 + 0xc5) = 0;
  *(undefined1 *)(param_2 + 0xc6) = 0;
  plVar2 = param_2 + 199;
  param_2[0xc9] = 0;
  param_2[200] = 0;
  param_2[199] = (long)(param_2 + 200);
  func_0x00010785f1f4();
  plStack_e0 = (long *)((ulong)plStack_e0 & 0xffffffffffffff00);
  plVar22 = plVar22 + 0xbc;
  func_0x00010724e2c8(plVar22,&plStack_e0);
  *(char *)(param_2 + 0xca) = (char)plVar22;
  func_0x00010785f1f4();
  plStack_e0 = (long *)((ulong)plStack_e0 & 0xffffffff00000000);
  plVar22 = plVar22 + 0xc2;
  func_0x0001072b86c8(plVar22,&plStack_e0);
  *(int *)((long)param_2 + 0x654) = (int)plVar22;
  FUN_107450c48(param_2 + 0x22,(long)((float)(ulong)param_4[2] / *(float *)(param_2 + 0x26)));
  FUN_10744d878(plVar13,param_4[2]);
  plVar12 = (long *)param_4[2];
  plVar11 = plVar14;
  FUN_10744d878();
  plVar25 = param_4 + 1;
  plVar21 = (long *)*param_4;
  plVar22 = param_2 + 0x24;
  do {
    uVar9 = (long)plVar21 - (long)plVar25 < 0;
    if (plVar21 == plVar25) {
      plVar22 = (long *)*param_4;
      while (bVar10 = plVar22 == plVar25, !bVar10) {
        plVar12 = param_2 + 0x22;
        FUN_1073b935c(plVar12,plVar22 + 4);
        FUN_1073be238(&plStack_e0,0x17,plVar12,plVar22[0xb] + 0x28);
        plVar12 = alStack_140;
        plVar11 = plVar2;
        FUN_107451224(plVar2,plVar12,plVar22 + 4);
        if (*plVar11 == 0) {
          plVar12 = (long *)0x80;
          __Znwm();
          func_0x000104c2fe00(plVar12 + 4,plVar22 + 4);
          lVar15 = lStack_d0;
          plVar12[0xc] = (long)plStack_d8;
          plVar12[0xb] = (long)plStack_e0;
          plStack_d8 = (long *)0x0;
          lStack_d0 = 0;
          plStack_e0 = (long *)0x0;
          plVar12[0xd] = lVar15;
          plVar12[0xe] = lStack_c8;
          *(undefined4 *)(plVar12 + 0xf) = uStack_c0;
          *plVar12 = 0;
          plVar12[1] = 0;
          plVar12[2] = alStack_140[0];
          *plVar11 = (long)plVar12;
          if (*(long *)*plVar2 != 0) {
            *plVar2 = *(long *)*plVar2;
          }
          func_0x00010002c5b0(param_2[200]);
          param_2[0xc9] = param_2[0xc9] + 1;
        }
        func_0x0001073bc770(&plStack_e0);
        func_0x00010002c7d4();
        plVar11 = plVar22;
      }
      func_0x00010745183c(uStack_80);
      if (bVar10) {
        return param_2;
      }
      ___stack_chk_fail();
      FUN_107450bbc(plVar2);
      func_0x000104c2f714(plVar28 + 0x22);
      func_0x000104c2f714(plVar28 + 0x1b);
      FUN_1074503a8(plVar14);
      FUN_1074503a8(plVar13);
      FUN_107450a80(param_2 + 0x22);
      func_0x00010730b10c(plVar29);
      func_0x00010730b13c(param_2 + 0x17);
      func_0x00010731e26c(plVar28);
      func_0x000107450420(param_2 + 0x10);
      func_0x000107261dac(plVar25);
      func_0x0001074509ec(&plStack_e0);
      func_0x0001073eafd0(param_2);
      __Unwind_Resume();
      if (plVar12 <= (long *)(*(long *)(*plVar11 + -8) + plVar11[3])) {
        return plVar11;
      }
      if (plVar12 == (long *)0x7) {
        lVar15 = 8;
      }
      else {
        lVar15 = ((long)plVar12 + -1) / 7 + (long)plVar12;
      }
      uVar17 = 0xffffffffffffffff >> (LZCOUNT(lVar15) & 0x3fU);
      if (lVar15 == 0) {
        uVar17 = 1;
      }
      lVar4 = *plVar11;
      lVar23 = plVar11[1];
      lVar26 = plVar11[2];
      plVar11[2] = uVar17;
      plVar22 = plVar11;
      FUN_107450e80();
      lVar30 = plVar11[1];
      for (lVar15 = 0; lVar26 != lVar15; lVar15 = lVar15 + 1) {
        if (-1 < *(char *)(lVar4 + lVar15)) {
          lVar19 = lVar23;
          func_0x000104c2fe38();
          plVar22 = plVar11;
          func_0x000100061de0(plVar11,lVar19);
          bVar6 = (byte)lVar19 & 0x7f;
          uVar17 = plVar11[2];
          lVar19 = *plVar11;
          *(byte *)(lVar19 + (long)plVar22) = bVar6;
          *(byte *)(lVar19 + ((long)plVar22 - 7U & uVar17) + (uVar17 & 7)) = bVar6;
          plVar22 = (long *)(lVar30 + (long)plVar22 * 0x60);
          func_0x000107450ed8(plVar22,lVar23);
        }
        lVar23 = lVar23 + 0x60;
      }
      if (lVar26 == 0) {
        return plVar22;
      }
      plVar22 = (long *)(lVar4 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar22);
      return plVar22;
    }
    lVar23 = plVar21[0xb];
    plVar11 = (long *)0x168;
    __Znwm();
    lStack_d0 = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plStack_e0 = plVar11;
    plStack_d8 = plVar22;
    func_0x000104c2fe00(plVar11 + 2,plVar21 + 4);
    lVar15 = param_2[6];
    func_0x0001074519a4(alStack_140,lVar23 + 0x28);
    func_0x0001074518d0(alStack_158,lVar23 + 0x60);
    func_0x0001074519a4(&lStack_e8,lVar23 + 0xb0);
    func_0x000107445c14(&lStack_f0,(int)lVar15,0x3f800000,0x3f800000,lVar23 + 0xf0);
    func_0x0001074471c0(&lStack_f8,(int)lVar15,0x3f800000,lVar23 + 0x130);
    func_0x0001074519a4(&lStack_100,lVar23 + 0x188);
    func_0x0001074518d0(&lStack_108,lVar23 + 0x1c0);
    func_0x0001074518d0(&lStack_110,lVar23 + 0x218);
    plVar11[9] = alStack_140[0];
    plVar11[10] = alStack_158[0];
    plVar11[0xb] = lStack_e8;
    plVar11[0xc] = lStack_f0;
    plVar11[0xd] = lStack_f8;
    plVar11[0xe] = lStack_100;
    plVar11[0xf] = lStack_108;
    plVar11[0x10] = lStack_110;
    *(undefined1 *)(plVar11 + 0x24) = 0;
    *(undefined1 *)(plVar11 + 0x25) = 0;
    *(undefined1 *)(plVar11 + 0x2b) = 0;
    plVar11[0x2c] = 0;
    plVar12 = plVar11 + 0x11;
    _bzero(plVar12,0x81);
    lStack_d0 = CONCAT71(lStack_d0._1_7_,1);
    func_0x000107451be8();
    plVar11[1] = (long)plVar12;
    func_0x000107451be8();
    plVar11[1] = (long)plVar12;
    plVar29 = (long *)param_2[0x23];
    if (plVar29 != (long *)0x0) {
      puVar24 = (undefined1 *)((long)plVar29 + -1);
      if (((ulong)plVar29 & (ulong)puVar24) == 0) {
        plVar31 = (long *)((ulong)puVar24 & (ulong)plVar12);
        uVar9 = false;
      }
      else {
        uVar9 = (long)plVar12 - (long)plVar29 < 0;
        plVar31 = plVar12;
        if (plVar29 <= plVar12) {
          uVar17 = 0;
          if (plVar29 != (long *)0x0) {
            uVar17 = (ulong)plVar12 / (ulong)plVar29;
          }
          plVar31 = (long *)((long)plVar12 - uVar17 * (long)plVar29);
        }
      }
      plVar27 = *(long **)(param_2[0x22] + (long)plVar31 * 8);
      plVar28 = (long *)0x0;
      if (plVar27 != (long *)0x0) {
        do {
          while( true ) {
            plVar28 = (long *)*plVar27;
            if (plVar28 == (long *)0x0) goto LAB_10744d478;
            plVar16 = (long *)plVar28[1];
            uVar9 = (long)plVar16 - (long)plVar12 < 0;
            plVar27 = plVar28;
            if (plVar16 != plVar12) break;
            plVar16 = plVar28 + 2;
            func_0x000104c32db4(plVar16,plVar11 + 2);
            if (((ulong)plVar16 & 1) != 0) goto LAB_10744d558;
          }
          if (((ulong)plVar29 & (ulong)puVar24) == 0) {
            plVar16 = (long *)((ulong)plVar16 & (ulong)puVar24);
          }
          else if (plVar29 <= plVar16) {
            uVar17 = 0;
            if (plVar29 != (long *)0x0) {
              uVar17 = (ulong)plVar16 / (ulong)plVar29;
            }
            plVar16 = (long *)((long)plVar16 - uVar17 * (long)plVar29);
          }
          uVar9 = (long)plVar16 - (long)plVar31 < 0;
        } while (plVar16 == plVar31);
      }
    }
LAB_10744d478:
    func_0x000107451ca8(param_2[0x25]);
    if ((plVar29 == (long *)0x0) || (func_0x000107451c88(), (bool)uVar9)) {
      bVar8 = (long *)0x2 < plVar29;
      bVar10 = plVar29 == (long *)0x3;
      func_0x000107451920((long)plVar29 << 1);
      uVar3 = extraout_x8_00;
      if (!bVar8 || bVar10) {
        uVar3 = extraout_x9;
      }
      FUN_107450c48(param_2 + 0x22,uVar3);
    }
    uVar17 = param_2[0x23];
    uVar20 = plVar11[1];
    uVar18 = uVar17 - 1;
    if ((uVar17 & uVar18) == 0) {
      uVar20 = uVar18 & uVar20;
    }
    else if (uVar17 <= uVar20) {
      uVar7 = 0;
      if (uVar17 != 0) {
        uVar7 = uVar20 / uVar17;
      }
      uVar20 = uVar20 - uVar7 * uVar17;
    }
    lVar15 = param_2[0x22];
    plVar12 = *(long **)(lVar15 + uVar20 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar11 = *plVar22;
      *plVar22 = (long)plVar11;
      *(long **)(lVar15 + uVar20 * 8) = plVar22;
      if (*plVar11 != 0) {
        uVar20 = *(ulong *)(*plVar11 + 8);
        if ((uVar17 & uVar18) == 0) {
          uVar20 = uVar20 & uVar18;
        }
        else if (uVar17 <= uVar20) {
          uVar18 = 0;
          if (uVar17 != 0) {
            uVar18 = uVar20 / uVar17;
          }
          uVar20 = uVar20 - uVar18 * uVar17;
        }
        *(long **)(lVar15 + uVar20 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar12;
      *plVar12 = (long)plVar11;
    }
    param_2[0x25] = param_2[0x25] + 1;
    plStack_e0 = (long *)0x0;
LAB_10744d558:
    func_0x000107451c6c();
    alStack_140[1] = 0;
    alStack_140[0] = 0;
    alStack_140[3] = 0;
    alStack_140[2] = 0;
    func_0x000107451a60();
    FUN_107450fd4(alStack_158,plVar13,&plStack_e0);
    func_0x000107451b7c();
    func_0x000107451b58();
    alStack_140[1] = 0;
    alStack_140[0] = 0;
    alStack_140[3] = 0;
    alStack_140[2] = 0;
    func_0x000107451a60();
    plVar12 = plVar14;
    FUN_107450fd4(alStack_158,plVar14,&plStack_e0);
    func_0x000107451b7c();
    func_0x000107451b58();
    func_0x00010002c7d4();
    plVar11 = plVar21;
  } while( true );
}



/* Entry: 10744d878; end: 10744d8cb;  */

void FUN_10744d878(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar4 = 8;
  }
  else {
    lVar4 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar5 = 0xffffffffffffffff >> (LZCOUNT(lVar4) & 0x3fU);
  if (lVar4 == 0) {
    uVar5 = 1;
  }
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = uVar5;
  FUN_107450e80();
  lVar9 = param_1[1];
  for (lVar4 = 0; lVar8 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      lVar6 = lVar7;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar6);
      bVar2 = (byte)lVar6 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar2;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      func_0x000107450ed8(lVar9 + (long)plVar3 * 0x60,lVar7);
    }
    lVar7 = lVar7 + 0x60;
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
  return;
}



/* Entry: 10744d8cc; end: 10744d94b;  */

undefined8 * FUN_10744d8cc(undefined8 *param_1)

{
  FUN_107450bbc(param_1 + 199);
  func_0x000104c2f714(param_1 + 0x36);
  func_0x000104c2f714(param_1 + 0x2f);
  FUN_1074503a8(param_1 + 0x2b);
  FUN_1074503a8(param_1 + 0x27);
  FUN_107450a80(param_1 + 0x22);
  func_0x00010730b10c(param_1 + 0x1e);
  func_0x00010730b13c(param_1 + 0x17);
  func_0x00010731e26c(param_1 + 0x14);
  func_0x000107450420(param_1 + 0x10);
  func_0x000107261dac(param_1 + 0xc);
  func_0x0001074509ec(param_1 + 7);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 10744d94c; end: 10744d94f;  */

undefined8 * FUN_10744d94c(undefined8 *param_1)

{
  FUN_107450bbc(param_1 + 199);
  func_0x000104c2f714(param_1 + 0x36);
  func_0x000104c2f714(param_1 + 0x2f);
  FUN_1074503a8(param_1 + 0x2b);
  FUN_1074503a8(param_1 + 0x27);
  FUN_107450a80(param_1 + 0x22);
  func_0x00010730b10c(param_1 + 0x1e);
  func_0x00010730b13c(param_1 + 0x17);
  func_0x00010731e26c(param_1 + 0x14);
  func_0x000107450420(param_1 + 0x10);
  func_0x000107261dac(param_1 + 0xc);
  func_0x0001074509ec(param_1 + 7);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 10744d950; end: 10744d963;  */

void FUN_10744d950(void)

{
  FUN_10744d8cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10744d964; end: 10744d99b;  */

void FUN_10744d964(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long lVar10;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long *in_x6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar11;
  int extraout_w10;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *apuStack_3a0 [2];
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [24];
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 **ppuStack_328;
  long *plStack_320;
  undefined8 **ppuStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [56];
  long lStack_298;
  long lStack_290;
  undefined8 **ppuStack_288;
  undefined8 uStack_280;
  undefined8 *apuStack_278 [7];
  undefined8 uStack_240;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [112];
  undefined1 auStack_128 [168];
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  func_0x0001074519e4();
  FUN_10744d99c();
  lVar10 = (*(long *)(unaff_x20 + 0x88) - *(long *)(unaff_x20 + 0x80)) / 0x14;
  lVar6 = unaff_x20;
  plVar9 = unaff_x19;
  func_0x0001074518e8();
  uVar5 = *(char *)(lVar6 + 0x650) == '\x01';
  if ((bool)uVar5) {
    uVar5 = *(int *)(unaff_x20 + 0x654) == 0;
    iVar16 = 0;
    if (!(bool)uVar5) {
      iVar16 = *(int *)(unaff_x20 + 0x654);
    }
  }
  else {
    iVar16 = 0;
  }
  plVar17 = (long *)(unaff_x20 + 0x120);
  uStack_78 = extraout_x8;
  while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
    lVar6 = unaff_x19[3];
    plVar9 = plVar17 + 2;
    FUN_10744bca8();
    if (unaff_x19[3] + 8 == lVar6) {
      puVar12 = (undefined8 *)*unaff_x19;
      uStack_1a8 = puVar12[1];
      uStack_1b0 = *puVar12;
      if (puVar12[1] != 0) {
        do {
          func_0x000107451b94();
        } while (extraout_w10 != 0);
      }
      in_x3 = unaff_x19[4];
      in_x6 = (long *)unaff_x19[2];
      auStack_128[0] = 0;
      uStack_80 = 0;
      func_0x000107451aa8();
      func_0x000107451a14();
      FUN_10744fd38();
    }
    else {
      puVar12 = (undefined8 *)*unaff_x19;
      uStack_1a8 = puVar12[1];
      uStack_1b0 = *puVar12;
      if (puVar12[1] != 0) {
        plVar9 = (long *)(puVar12[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      in_x3 = unaff_x19[4];
      in_x6 = (long *)unaff_x19[2];
      plVar9 = (long *)(lVar6 + 0x58);
      FUN_107443404(auStack_128);
      func_0x000107451aa8();
      func_0x000107451a14();
      FUN_10744fd38();
    }
    func_0x00010726af18(auStack_198);
    FUN_107408214(auStack_128);
    func_0x000107267e44();
    *(int *)(plVar17 + 0x2c) = iVar16;
    if (*(char *)(plVar17[0xb] + 0x1c) == '\x01') {
      lVar6 = *(long *)(plVar17[0xb] + 0x14);
      plVar7 = (long *)(unaff_x20 + 0x138);
      FUN_10744f560();
      func_0x0001074519cc(*unaff_x19);
      (*extraout_x8_00)();
      plVar9 = plVar7;
      func_0x000107451c3c();
      *plVar7 = lVar6;
    }
    uVar5 = *(char *)(plVar17[9] + 0x1c) == '\x01';
    if ((bool)uVar5) {
      lVar6 = *(long *)(plVar17[9] + 0x14);
      plVar7 = (long *)(unaff_x20 + 0x158);
      FUN_10744f560();
      func_0x0001074519cc(*unaff_x19);
      (*extraout_x8_01)();
      plVar9 = plVar7;
      func_0x000107451c3c();
      *plVar7 = lVar6;
    }
  }
  func_0x00010745183c(uStack_78);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(auStack_198);
  FUN_107408214(auStack_128);
  puVar12 = &uStack_1b0;
  func_0x000107267e44();
  func_0x000107451974();
  func_0x0001074518e8();
  lStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  lVar1 = (in_x6[1] - *in_x6) / 0x38;
  uStack_240 = extraout_x8_02;
  FUN_1073bf8d4(&lStack_348,lVar1);
  lStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  func_0x0001072dd514(&lStack_360,lVar1);
  lVar20 = 0;
  lVar15 = in_x6[1];
  uVar18 = 0;
  for (lVar6 = *in_x6; lVar6 != lVar15; lVar6 = lVar6 + 0x38) {
    (**(code **)(**(long **)(lVar6 + 8) + 0x38))(&puStack_330);
    ppuVar8 = &puStack_330;
    FUN_107330078();
    uVar19 = uVar18;
    if (*ppuVar8 != ppuVar8[1]) {
      ppuVar8 = &puStack_330;
      FUN_107330078();
      lVar11 = 0;
      for (plVar17 = *ppuVar8; plVar17 != ppuVar8[1]; plVar17 = plVar17 + 3) {
        lVar11 = lVar11 + (plVar17[1] - *plVar17 >> 2);
      }
      lVar4 = (lVar11 + -1) * 5;
      uVar19 = uVar18 + lVar4 + 1;
      lVar20 = lVar20 + (lVar11 + -1) * 6;
      if (((*(byte *)(puVar12 + 0xca) & 1) != 0) &&
         (uVar13 = (ulong)*(uint *)((long)puVar12 + 0x654), *(uint *)((long)puVar12 + 0x654) != 0))
      {
        uVar19 = 0;
        if (uVar13 != 0) {
          uVar19 = (lVar4 + uVar18 + uVar13) / uVar13;
        }
        uVar19 = uVar19 * uVar13;
      }
    }
    uVar18 = uVar19;
  }
  if (uVar18 != 0) {
    lVar6 = puVar12[0x10];
    if ((ulong)((puVar12[0x12] - lVar6) / 0x14) < (uVar18 & 0xffffffff)) {
      FUN_1074516ec(&puStack_330,uVar18 & 0xffffffff,(puVar12[0x11] - lVar6) / 0x14);
      FUN_107451658(puVar12 + 0x10,&puStack_330);
      FUN_107451754(&puStack_330);
    }
    puVar14 = puVar12 + 0x24;
    while (puVar14 = (undefined8 *)*puVar14, puVar14 != (undefined8 *)0x0) {
      func_0x000107451bf4();
    }
  }
  if (lVar20 != 0) {
    func_0x0001056c5718(puVar12 + 0x14,((lVar20 + 2U) / 3) * 3);
  }
  func_0x0001078696e8(auStack_378);
  lVar6 = 0;
  for (lVar15 = lVar1; lVar15 != 0; lVar15 = lVar15 + -1) {
    lVar20 = *in_x6;
    puVar14 = (undefined8 *)(lVar20 + lVar6) + 1;
    (**(code **)(*(long *)*puVar14 + 0x30))();
    func_0x00010726236c(&puStack_330);
    func_0x000107262398(apuStack_278,&puStack_330,0x1138369c0);
    func_0x00010724b3d8(&puStack_330);
    func_0x000107869b38(&puStack_330,in_x4,apuStack_278);
    func_0x000107451c00(&puStack_390);
    func_0x000107451b1c();
    puStack_330 = puVar14;
    (**(code **)(*(long *)*puVar14 + 0x38))(apuStack_3a0);
    ppuVar8 = apuStack_3a0;
    FUN_107330078();
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_310 = *(undefined8 *)(lVar20 + lVar6);
    puStack_3b8 = &uStack_3b0;
    ppuStack_328 = ppuVar8;
    plStack_320 = plVar9;
    ppuStack_318 = &puStack_3b8;
    func_0x000104c2fe00(auStack_308,puVar12 + 0x2f);
    func_0x000104c2fe00(auStack_2d0,puVar12 + 0x36);
    ppuStack_288 = &puStack_390;
    lStack_298 = lVar10;
    lStack_290 = in_x3;
    uStack_280 = in_x5;
    FUN_10744d99c(puVar12,&puStack_330);
    func_0x000107451b14();
    FUN_1073dff1c(&puStack_3b8);
    puStack_330 = (undefined8 *)((long)(puVar12[0x11] - puVar12[0x10]) / 0x14);
    func_0x0001057f9264(&lStack_348,&puStack_330);
    func_0x0001072d17f4(&lStack_360,apuStack_278);
    func_0x00010726b264(&puStack_390);
    func_0x000104c2f714(apuStack_278);
    lVar6 = lVar6 + 0x38;
  }
  puVar14 = puVar12 + 0x24;
  while (puVar14 = (undefined8 *)*puVar14, puVar14 != (undefined8 *)0x0) {
    func_0x000107451bf4();
  }
  lVar15 = 0;
  for (lVar6 = 0; uVar5 = lVar1 == lVar6, !(bool)uVar5; lVar6 = lVar6 + 1) {
    lVar11 = *in_x6;
    func_0x000107869b38(&puStack_330,in_x4,lStack_360 + lVar15);
    func_0x000107451c00(apuStack_278);
    func_0x000107451b1c();
    lVar20 = lVar11 + lVar15;
    puStack_330 = (undefined8 *)(lVar20 + 8);
    (**(code **)(**(long **)(lVar20 + 8) + 0x38))(&puStack_3b8);
    ppuVar8 = &puStack_3b8;
    FUN_107330078();
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_310 = *(undefined8 *)(lVar11 + lVar15);
    puStack_390 = &uStack_388;
    ppuStack_328 = ppuVar8;
    plStack_320 = plVar9;
    ppuStack_318 = &puStack_390;
    func_0x000104c2fe00(auStack_308,puVar12 + 0x2f);
    func_0x000104c2fe00(auStack_2d0,puVar12 + 0x36);
    lStack_298 = lVar10;
    lStack_290 = in_x3;
    ppuStack_288 = apuStack_278;
    uStack_280 = in_x5;
    FUN_10744e7b8(puVar12,&puStack_330,*(undefined8 *)(lStack_348 + lVar6 * 8));
    func_0x000107451b14();
    FUN_1073dff1c(&puStack_390);
    func_0x00010726b264(apuStack_278);
    lVar15 = lVar15 + 0x38;
  }
  func_0x00010726b264(auStack_378);
  func_0x00010726e078(&lStack_360);
  func_0x0001057f951c(&lStack_348);
  func_0x00010745183c(uStack_240);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    do {
      func_0x00010726e078(&lStack_360);
      func_0x0001057f951c(&lStack_348);
      func_0x000107451974();
    } while( true );
  }
  return;
}



/* Entry: 10744d99c; end: 10744e7b7;  */

void FUN_10744d99c(undefined **param_1,long *param_2)

{
  uint *puVar1;
  short *psVar2;
  undefined *puVar3;
  long *plVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 **ppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined8 in_x5;
  long *in_x6;
  int iVar21;
  uint uVar22;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar23;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  long lVar24;
  int iVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar28;
  undefined *puVar29;
  ulong uVar30;
  ulong uVar31;
  undefined ***pppuVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long *plVar35;
  undefined **unaff_x25;
  undefined8 unaff_x26;
  undefined **ppuVar36;
  undefined ***pppuVar37;
  long lVar38;
  undefined **ppuVar39;
  undefined **ppuVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  float fVar43;
  undefined **unaff_d9;
  double dVar44;
  undefined8 uVar45;
  undefined8 *puStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 *apuStack_c30 [2];
  undefined8 *puStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined1 auStack_c08 [24];
  long lStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  long lStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 **ppuStack_bb8;
  undefined **ppuStack_bb0;
  undefined8 **ppuStack_ba8;
  undefined8 uStack_ba0;
  undefined1 auStack_b98 [56];
  undefined1 auStack_b60 [56];
  undefined ***pppuStack_b28;
  undefined ***pppuStack_b20;
  undefined8 **ppuStack_b18;
  undefined8 uStack_b10;
  undefined8 *apuStack_b08 [7];
  undefined8 uStack_ad0;
  undefined ***pppuStack_ac0;
  undefined8 *puStack_ab8;
  undefined **ppuStack_ab0;
  undefined1 *puStack_aa8;
  ulong uStack_aa0;
  long *plStack_a98;
  undefined ***pppuStack_a90;
  undefined **ppuStack_a88;
  undefined **ppuStack_a80;
  undefined **ppuStack_a78;
  undefined1 **ppuStack_a70;
  code *pcStack_a68;
  undefined *puStack_a40;
  undefined8 uStack_a38;
  undefined1 auStack_a30 [8];
  undefined1 auStack_a28 [112];
  undefined1 auStack_9b8 [168];
  undefined1 uStack_910;
  undefined8 uStack_908;
  undefined **ppuStack_900;
  ulong uStack_8f8;
  undefined ***pppuStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 uStack_8e0;
  undefined **ppuStack_8d8;
  undefined **ppuStack_8d0;
  undefined8 uStack_8c8;
  undefined ***pppuStack_8c0;
  ulong uStack_8b8;
  undefined **ppuStack_8b0;
  undefined1 *puStack_8a8;
  undefined1 *puStack_8a0;
  code *pcStack_898;
  long *plStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  ulong uStack_878;
  uint uStack_86c;
  long *plStack_868;
  undefined **ppuStack_860;
  undefined8 uStack_858;
  long lStack_850;
  long lStack_848;
  undefined1 *puStack_838;
  long lStack_830;
  uint uStack_828;
  undefined2 uStack_822;
  undefined **ppuStack_820;
  undefined **ppuStack_818;
  undefined **ppuStack_810;
  undefined **ppuStack_808;
  undefined **ppuStack_800;
  undefined **ppuStack_7f8;
  undefined **ppuStack_7f0;
  long lStack_7e8;
  undefined8 uStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  int iStack_7c4;
  undefined **ppuStack_7c0;
  long lStack_7b8;
  undefined8 uStack_7b0;
  byte bStack_7a8;
  undefined **ppuStack_7a0;
  undefined **ppuStack_798;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined1 auStack_770 [24];
  char cStack_758;
  undefined **appuStack_750 [7];
  undefined *apuStack_718 [7];
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  ulong uStack_690;
  undefined1 uStack_630;
  undefined8 uStack_620;
  undefined **ppuStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  ushort uStack_5e8;
  undefined1 uStack_5e6;
  undefined1 uStack_5b0;
  undefined1 auStack_490 [56];
  char cStack_458;
  undefined1 auStack_450 [56];
  undefined1 auStack_418 [56];
  undefined2 uStack_3e0;
  undefined1 uStack_3de;
  undefined1 auStack_3d8 [400];
  undefined *apuStack_248 [50];
  undefined8 uStack_b8;
  
  ppuVar16 = param_1;
  func_0x0001074518e8();
  uStack_b8 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(ppuVar16 + 6),auStack_3d8);
  pppuVar37 = &ppuStack_7a0;
  puVar26 = (undefined8 *)*param_2;
  uStack_698._0_4_ = (int)puVar26[1];
  uStack_698._4_4_ = (undefined4)((ulong)puVar26[1] >> 0x20);
  uStack_6a0._0_4_ = (uint)*puVar26;
  uStack_6a0._4_4_ = (int)((ulong)*puVar26 >> 0x20);
  if (puVar26[1] != 0) {
    do {
      func_0x000107451b94();
    } while (extraout_w10 != 0);
  }
  uStack_620 = (undefined **)((ulong)uStack_620 & 0xffffffffffffff00);
  uStack_5b0 = 0;
  func_0x000107751444(auStack_3d8,&uStack_6a0,&uStack_620);
  func_0x000107451d14();
  func_0x000107751334();
  func_0x000107267e8c(&uStack_620);
  func_0x000107267e44(&uStack_6a0);
  func_0x000107267da8(auStack_3d8);
  func_0x000104c2f64c(auStack_418);
  uStack_3e0 = 0;
  uStack_3de = 0;
  puVar29 = param_1[5];
  func_0x00010745194c();
  FUN_1073e9830(&uStack_620);
  FUN_1074506d8(&uStack_6a0,apuStack_248,auStack_3d8,puVar29 + 0x38,&uStack_620);
  func_0x000107451a74();
  puVar12 = auStack_418;
  func_0x000104c2f1f0(puVar12,&uStack_6a0);
  uVar11 = SUB81(puVar12,0);
  func_0x00010745197c();
  func_0x000107451984();
  func_0x00010745194c(param_1[5]);
  uStack_620 = (undefined **)((ulong)uStack_620 & 0xffffffffffffff00);
  func_0x000107451d14();
  func_0x000107451c74();
  uStack_3e0 = CONCAT11(uStack_3e0._1_1_,uVar11);
  func_0x000107451984();
  func_0x00010745194c();
  uStack_620 = (undefined **)((ulong)uStack_620 & 0xffffffffffffff00);
  func_0x000107451d14();
  func_0x000107451c74();
  uStack_3e0 = CONCAT11(uVar11,(undefined1)uStack_3e0);
  func_0x000107451984();
  func_0x00010745194c(param_1[5]);
  uStack_620 = (undefined **)((ulong)uStack_620 & 0xffffffffffffff00);
  func_0x000107451d14();
  func_0x000107451c74();
  uStack_3de = uVar11;
  func_0x000107451984();
  puVar29 = param_1[5];
  func_0x00010745194c();
  func_0x0001073e9840(&uStack_620);
  pppuVar20 = (undefined ***)&uStack_620;
  FUN_1074506d8(auStack_450,apuStack_248,auStack_3d8,puVar29 + 0x2c8);
  func_0x000107451a74();
  func_0x000107451984();
  puVar12 = auStack_418;
  FUN_10744f604(puVar12,param_1);
  ppuVar16 = (undefined **)(puVar12 + 0x40);
  FUN_107373e44(ppuVar16,*param_2);
  func_0x0001074519cc(*param_2);
  (*extraout_x8_00)();
  func_0x00010726236c(auStack_490);
  if (cStack_458 == '\x01') {
    ppuVar16 = param_1 + 0xc;
    FUN_10732f3ac(auStack_3d8,ppuVar16,auStack_490);
  }
  fVar43 = 0.0;
  if (uStack_3e0._1_1_ == '\x01') {
    fVar43 = (float)((double)((uint)(*(int *)((long)param_1 + 0x34) +
                                    *(int *)(param_2[0x13] + 8) * *(int *)(param_2[0x13] + 4)) %
                             1000) * 0.005);
  }
  *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
  func_0x0001074519cc(*param_2);
  (*extraout_x8_01)();
  plStack_890 = param_2;
  switch(*(undefined4 *)ppuVar16) {
  case 1:
    pppuVar32 = (undefined ***)0x9e3779b97f4a7c15;
    if ((double)ppuVar16[1] != 0.0) {
      pppuVar32 = (undefined ***)(ppuVar16[1] + -0x61c8864680b583eb);
    }
    break;
  case 2:
  case 3:
    pppuVar32 = (undefined ***)ppuVar16[1];
    break;
  default:
    pppuVar32 = (undefined ***)
                (ulong)(uint)(*(int *)(param_2[0x13] + 4) + *(int *)((long)param_1 + 0x34) +
                             *(int *)(param_2[0x13] + 8));
  }
  func_0x0001077512dc(*(undefined4 *)(param_1 + 6),&uStack_620);
  puVar26 = (undefined8 *)*plStack_890;
  uStack_6d8 = puVar26[1];
  uStack_6e0 = *puVar26;
  if (puVar26[1] != 0) {
    do {
      func_0x000107451b94();
    } while (extraout_w10_00 != 0);
  }
  uStack_6a0._0_4_ = (uint)uStack_6a0 & 0xffffff00;
  uStack_630 = 0;
  puStack_838 = puVar12;
  func_0x000107751444(&uStack_620,&uStack_6e0,&uStack_6a0);
  func_0x000107751334(auStack_3d8,&uStack_620);
  func_0x000107267e8c(&uStack_6a0);
  func_0x000107267e44(&uStack_6e0);
  func_0x000107267da8(&uStack_620);
  func_0x00010745195c();
  func_0x0001073e9834();
  func_0x000107451c24(&uStack_6e0,auStack_3d8,&uStack_620,puVar12 + 0x160);
  func_0x00010745197c();
  func_0x0001074519dc();
  func_0x00010745195c();
  func_0x0001073e983c();
  func_0x000107451c24(apuStack_718,auStack_3d8,&uStack_620,puVar12 + 0x250);
  func_0x00010745197c();
  func_0x0001074519dc();
  func_0x00010745195c();
  func_0x0001073e9838();
  pppuVar19 = (undefined ***)(puVar12 + 0x1d8);
  func_0x000107451c24(appuStack_750,auStack_3d8,&uStack_620);
  func_0x00010745197c();
  func_0x0001074519dc();
  ppuVar16 = apuStack_718;
  pppuVar17 = appuStack_750;
  FUN_107441d9c(auStack_770,&uStack_6e0);
  puVar12 = puStack_838;
  uStack_788 = 0;
  uStack_780 = 0;
  uStack_778 = 0;
  func_0x00010783376c(&ppuStack_7a0,plStack_890[1]);
  uVar31 = 0;
  ppuStack_888 = ppuStack_798;
  uVar45 = 0x200000001;
  lStack_848 = 6;
  lStack_850 = 4;
  uStack_858 = 0x200000001;
  ppuVar36 = ppuStack_7a0;
  do {
    plVar35 = (long *)0x14;
    uVar11 = ppuVar36 == ppuStack_888;
    if ((bool)uVar11) {
      FUN_1073f0f44(&ppuStack_7a0);
      func_0x00010731e26c(&uStack_788);
      FUN_107443458(auStack_770);
      func_0x000104c2f714(appuStack_750);
      func_0x000104c2f714(apuStack_718);
      func_0x000104c2f714(&uStack_6e0);
      func_0x000107267da8(auStack_3d8);
      func_0x00010724b3d8(auStack_490);
      func_0x000104c2f714(auStack_450);
      func_0x000104c2f714(auStack_418);
      ppuVar39 = apuStack_248;
      func_0x000107267da8();
      func_0x00010745183c(uStack_b8);
      if ((bool)uVar11) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010724b3d8(auStack_490);
      func_0x000104c2f714(auStack_450);
      func_0x000104c2f714(auStack_418);
      func_0x000107267da8(apuStack_248);
      ppuVar14 = ppuVar39;
      __Unwind_Resume();
      uStack_8c8 = 0x14;
      pcStack_898 = FUN_10744e7b8;
      ppuVar13 = ppuVar14;
      ppuVar41 = ppuVar16;
      ppuStack_900 = unaff_d9;
      uStack_8f8 = (ulong)(uint)fVar43;
      pppuStack_8f0 = pppuVar37;
      puStack_8e8 = &uStack_6a0;
      uStack_8e0 = unaff_x26;
      ppuStack_8d8 = unaff_x25;
      ppuStack_8d0 = ppuVar36;
      pppuStack_8c0 = pppuVar32;
      uStack_8b8 = uVar31;
      ppuStack_8b0 = ppuVar39;
      puStack_8a8 = puVar12;
      puStack_8a0 = &stack0xfffffffffffffff0;
      func_0x0001074518e8();
      uStack_908 = extraout_x8_04;
      uVar11 = *(char *)(ppuVar13 + 0xca) == '\x01';
      if ((bool)uVar11) {
        uVar11 = *(uint *)((long)ppuVar14 + 0x654) == 0;
        uVar22 = 0;
        if (!(bool)uVar11) {
          uVar22 = *(uint *)((long)ppuVar14 + 0x654);
        }
        uVar31 = (ulong)uVar22;
      }
      else {
        uVar31 = 0;
      }
      ppuVar36 = ppuVar14 + 0x24;
      while (ppuVar36 = (undefined **)*ppuVar36, ppuVar36 != (undefined **)0x0) {
        pppuVar32 = (undefined ***)(ppuVar16 + 3);
        ppuVar39 = *pppuVar32;
        ppuVar41 = ppuVar36 + 2;
        FUN_10744bca8();
        if (*pppuVar32 + 1 == ppuVar39) {
          puVar26 = (undefined8 *)*ppuVar16;
          uStack_a38 = puVar26[1];
          puStack_a40 = (undefined *)*puVar26;
          if (puVar26[1] != 0) {
            do {
              func_0x000107451b94();
            } while (extraout_w10_01 != 0);
          }
          pppuVar19 = (undefined ***)ppuVar16[4];
          in_x6 = (long *)ppuVar16[2];
          auStack_9b8[0] = 0;
          uStack_910 = 0;
          func_0x000107451aa8();
          func_0x000107451a14();
          FUN_10744fd38();
        }
        else {
          puVar26 = (undefined8 *)*ppuVar16;
          uStack_a38 = puVar26[1];
          puStack_a40 = (undefined *)*puVar26;
          if (puVar26[1] != 0) {
            plVar35 = (long *)(puVar26[1] + 8);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar8) {
                *plVar35 = *plVar35 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          pppuVar32 = (undefined ***)ppuVar16[4];
          plVar35 = (long *)ppuVar16[2];
          ppuVar41 = ppuVar39 + 0xb;
          FUN_107443404(auStack_9b8);
          func_0x000107451aa8();
          func_0x000107451a14();
          pppuVar19 = pppuVar32;
          in_x6 = plVar35;
          FUN_10744fd38();
        }
        func_0x00010726af18(auStack_a28);
        FUN_107408214(auStack_9b8);
        ppuVar13 = &puStack_a40;
        func_0x000107267e44();
        *(int *)(ppuVar36 + 0x2c) = (int)uVar31;
        if (ppuVar36[0xb][0x1c] == '\x01') {
          puVar29 = *(undefined **)(ppuVar36[0xb] + 0x14);
          ppuVar13 = ppuVar14 + 0x27;
          pppuVar32 = (undefined ***)(ppuVar36 + 2);
          FUN_10744f560();
          func_0x0001074519cc(*ppuVar16);
          (*extraout_x8_05)();
          ppuVar41 = ppuVar13;
          func_0x000107451c3c();
          *ppuVar13 = puVar29;
        }
        uVar11 = ppuVar36[9][0x1c] == '\x01';
        if ((bool)uVar11) {
          puVar29 = *(undefined **)(ppuVar36[9] + 0x14);
          ppuVar13 = ppuVar14 + 0x2b;
          pppuVar32 = (undefined ***)(ppuVar36 + 2);
          FUN_10744f560();
          func_0x0001074519cc(*ppuVar16);
          (*extraout_x8_06)();
          ppuVar41 = ppuVar13;
          func_0x000107451c3c();
          *ppuVar13 = puVar29;
        }
      }
      func_0x00010745183c(uStack_908);
      if ((bool)uVar11) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010726af18(auStack_a28);
      FUN_107408214(auStack_9b8);
      ppuVar39 = &puStack_a40;
      func_0x000107267e44();
      func_0x000107451974();
      pcStack_a68 = FUN_10744e9d4;
      pppuStack_ac0 = pppuVar37;
      puStack_ab8 = &uStack_6a0;
      ppuStack_ab0 = ppuVar36;
      puStack_aa8 = auStack_a30;
      uStack_aa0 = uVar31;
      plStack_a98 = plVar35;
      pppuStack_a90 = pppuVar32;
      ppuStack_a88 = ppuVar14;
      ppuStack_a80 = ppuVar16;
      ppuStack_a78 = ppuVar13;
      ppuStack_a70 = &puStack_8a0;
      func_0x0001074518e8();
      lStack_bd8 = 0;
      uStack_bd0 = 0;
      uStack_bc8 = 0;
      lVar27 = (in_x6[1] - *in_x6) / 0x38;
      uStack_ad0 = extraout_x8_07;
      FUN_1073bf8d4(&lStack_bd8,lVar27);
      lStack_bf0 = 0;
      uStack_be8 = 0;
      uStack_be0 = 0;
      func_0x0001072dd514(&lStack_bf0,lVar27);
      lVar38 = 0;
      lVar28 = in_x6[1];
      uVar31 = 0;
      for (lVar23 = *in_x6; lVar23 != lVar28; lVar23 = lVar23 + 0x38) {
        (**(code **)(**(long **)(lVar23 + 8) + 0x38))(&puStack_bc0);
        ppuVar15 = &puStack_bc0;
        FUN_107330078();
        uVar30 = uVar31;
        if (*ppuVar15 != ppuVar15[1]) {
          ppuVar15 = &puStack_bc0;
          FUN_107330078();
          lVar24 = 0;
          for (plVar35 = *ppuVar15; plVar35 != ppuVar15[1]; plVar35 = plVar35 + 3) {
            lVar24 = lVar24 + (plVar35[1] - *plVar35 >> 2);
          }
          lVar10 = (lVar24 + -1) * 5;
          uVar30 = uVar31 + lVar10 + 1;
          lVar38 = lVar38 + (lVar24 + -1) * 6;
          if ((((ulong)ppuVar39[0xca] & 1) != 0) &&
             (uVar33 = (ulong)*(uint *)((long)ppuVar39 + 0x654),
             *(uint *)((long)ppuVar39 + 0x654) != 0)) {
            uVar30 = 0;
            if (uVar33 != 0) {
              uVar30 = (lVar10 + uVar31 + uVar33) / uVar33;
            }
            uVar30 = uVar30 * uVar33;
          }
        }
        uVar31 = uVar30;
      }
      if (uVar31 != 0) {
        puVar29 = ppuVar39[0x10];
        if ((ulong)(((long)ppuVar39[0x12] - (long)puVar29) / 0x14) < (uVar31 & 0xffffffff)) {
          FUN_1074516ec(&puStack_bc0,uVar31 & 0xffffffff,
                        ((long)ppuVar39[0x11] - (long)puVar29) / 0x14);
          FUN_107451658(ppuVar39 + 0x10,&puStack_bc0);
          FUN_107451754(&puStack_bc0);
        }
        ppuVar16 = ppuVar39 + 0x24;
        while (ppuVar16 = (undefined **)*ppuVar16, ppuVar16 != (undefined **)0x0) {
          func_0x000107451bf4();
        }
      }
      if (lVar38 != 0) {
        func_0x0001056c5718(ppuVar39 + 0x14,((lVar38 + 2U) / 3) * 3);
      }
      func_0x0001078696e8(auStack_c08);
      lVar23 = 0;
      for (lVar28 = lVar27; lVar28 != 0; lVar28 = lVar28 + -1) {
        lVar38 = *in_x6;
        puVar26 = (undefined8 *)(lVar38 + lVar23) + 1;
        (**(code **)(*(long *)*puVar26 + 0x30))();
        func_0x00010726236c(&puStack_bc0);
        func_0x000107262398(apuStack_b08,&puStack_bc0,0x1138369c0);
        func_0x00010724b3d8(&puStack_bc0);
        func_0x000107869b38(&puStack_bc0,pppuVar20,apuStack_b08);
        func_0x000107451c00(&puStack_c20);
        func_0x000107451b1c();
        puStack_bc0 = puVar26;
        (**(code **)(*(long *)*puVar26 + 0x38))(apuStack_c30);
        ppuVar15 = apuStack_c30;
        FUN_107330078();
        uStack_c40 = 0;
        uStack_c38 = 0;
        uStack_ba0 = *(undefined8 *)(lVar38 + lVar23);
        puStack_c48 = &uStack_c40;
        ppuStack_bb8 = ppuVar15;
        ppuStack_bb0 = ppuVar41;
        ppuStack_ba8 = &puStack_c48;
        func_0x000104c2fe00(auStack_b98,ppuVar39 + 0x2f);
        func_0x000104c2fe00(auStack_b60,ppuVar39 + 0x36);
        ppuStack_b18 = &puStack_c20;
        pppuStack_b28 = pppuVar17;
        pppuStack_b20 = pppuVar19;
        uStack_b10 = in_x5;
        FUN_10744d99c(ppuVar39,&puStack_bc0);
        func_0x000107451b14();
        FUN_1073dff1c(&puStack_c48);
        puStack_bc0 = (undefined8 *)(((long)ppuVar39[0x11] - (long)ppuVar39[0x10]) / 0x14);
        func_0x0001057f9264(&lStack_bd8,&puStack_bc0);
        func_0x0001072d17f4(&lStack_bf0,apuStack_b08);
        func_0x00010726b264(&puStack_c20);
        func_0x000104c2f714(apuStack_b08);
        lVar23 = lVar23 + 0x38;
      }
      ppuVar16 = ppuVar39 + 0x24;
      while (ppuVar16 = (undefined **)*ppuVar16, ppuVar16 != (undefined **)0x0) {
        func_0x000107451bf4();
      }
      lVar28 = 0;
      for (lVar23 = 0; uVar11 = lVar27 == lVar23, !(bool)uVar11; lVar23 = lVar23 + 1) {
        lVar24 = *in_x6;
        func_0x000107869b38(&puStack_bc0,pppuVar20,lStack_bf0 + lVar28);
        func_0x000107451c00(apuStack_b08);
        func_0x000107451b1c();
        lVar38 = lVar24 + lVar28;
        puStack_bc0 = (undefined8 *)(lVar38 + 8);
        (**(code **)(**(long **)(lVar38 + 8) + 0x38))(&puStack_c48);
        ppuVar15 = &puStack_c48;
        FUN_107330078();
        uStack_c18 = 0;
        uStack_c10 = 0;
        uStack_ba0 = *(undefined8 *)(lVar24 + lVar28);
        puStack_c20 = &uStack_c18;
        ppuStack_bb8 = ppuVar15;
        ppuStack_bb0 = ppuVar41;
        ppuStack_ba8 = &puStack_c20;
        func_0x000104c2fe00(auStack_b98,ppuVar39 + 0x2f);
        func_0x000104c2fe00(auStack_b60,ppuVar39 + 0x36);
        pppuStack_b28 = pppuVar17;
        pppuStack_b20 = pppuVar19;
        ppuStack_b18 = apuStack_b08;
        uStack_b10 = in_x5;
        FUN_10744e7b8(ppuVar39,&puStack_bc0,*(undefined8 *)(lStack_bd8 + lVar23 * 8));
        func_0x000107451b14();
        FUN_1073dff1c(&puStack_c20);
        func_0x00010726b264(apuStack_b08);
        lVar28 = lVar28 + 0x38;
      }
      func_0x00010726b264(auStack_c08);
      func_0x00010726e078(&lStack_bf0);
      func_0x0001057f951c(&lStack_bd8);
      func_0x00010745183c(uStack_ad0);
      if ((bool)uVar11) {
        return;
      }
      ___stack_chk_fail();
      do {
        func_0x00010726e078(&lStack_bf0);
        func_0x0001057f951c(&lStack_bd8);
        func_0x000107451974();
      } while( true );
    }
    if ((cStack_758 == '\x01') &&
       (uVar31 < (ulong)(((long)pppuVar37[7] - (long)pppuVar37[6]) / 0x18))) {
      FUN_10740d930(&ppuStack_7c0,pppuVar37[6] + uVar31 * 3);
      uVar31 = (ulong)((int)uVar31 + 1);
      if ((bStack_7a8 & 1) == 0) goto LAB_10744ddd0;
    }
    else {
      ppuStack_7c0 = (undefined **)((ulong)ppuStack_7c0 & 0xffffffffffffff00);
      bStack_7a8 = 0;
      uVar31 = (ulong)((int)uVar31 + 1);
LAB_10744ddd0:
      func_0x0001078338dc(ppuVar36,500);
    }
    ppuVar16 = (undefined **)0x0;
    for (plVar35 = (long *)*ppuVar36; plVar35 != (long *)ppuVar36[1]; plVar35 = plVar35 + 3) {
      ppuVar16 = (undefined **)((long)ppuVar16 + (plVar35[1] - *plVar35 >> 2));
    }
    if (ppuVar16 != (undefined **)0x0) {
      ppuStack_880 = ppuVar16;
      func_0x0001056c5718(&uStack_788);
      puVar29 = param_1[0x10];
      puVar3 = param_1[0x11];
      unaff_x25 = (undefined **)((long)param_1[0x15] - (long)param_1[0x14] >> 2);
      lVar23 = *(long *)(puVar12 + 0x60);
      lVar28 = *(long *)(puVar12 + 0x68);
      pppuVar18 = pppuVar19;
      if (lVar23 == lVar28) {
        func_0x000107451b04();
        lVar23 = *(long *)(puVar12 + 0x60);
        lVar28 = *(long *)(puVar12 + 0x68);
        pppuVar18 = pppuVar19;
      }
      if ((lVar23 == lVar28) ||
         (lVar23 = *(long *)(lVar28 + -0x18),
         lVar23 + *(long *)(lVar28 + -0x28) != ((long)puVar3 - (long)puVar29) / 0x14)) {
        func_0x000107451b04();
        lVar28 = *(long *)(puVar12 + 0x68);
        lVar23 = *(long *)(lVar28 + -0x18);
      }
      lStack_830 = lVar28;
      uStack_86c = (uint)uVar31;
      iStack_7c4 = (int)lVar23;
      plVar35 = (long *)*ppuVar36;
      plVar4 = (long *)ppuVar36[1];
      ppuStack_860 = ppuVar36;
      for (; ppuVar36 = ppuStack_860, plVar35 != plVar4; plVar35 = plVar35 + 3) {
        if (plVar35[1] - *plVar35 != 0) {
          lVar23 = 0;
          for (lVar28 = plVar35[1] - *plVar35 >> 2; lVar28 != 0; lVar28 = lVar28 + -1) {
            lVar27 = *plVar35;
            pppuVar37[0x20] = (undefined **)0x0;
            pppuVar37[0x21] = (undefined **)0x0;
            ppuStack_7d8 = (undefined **)0x3ff0000000000000;
            ppuStack_7d0 = (undefined **)((ulong)ppuStack_7d0 & 0xffffffffffffff00);
            uVar31 = (ulong)ppuStack_800 >> 0x10;
            ppuStack_800 = (undefined **)CONCAT62((int6)uVar31,1);
            pppuVar17 = &ppuStack_7f0;
            pppuVar18 = &ppuStack_7d8;
            pppuVar20 = &ppuStack_800;
            in_x5 = 0;
            in_x6 = (long *)0x0;
            func_0x000107451884(&uStack_620,lVar27 + lVar23,&uStack_6a0);
            FUN_107451540(param_1 + 0x10,&uStack_620);
            ppuVar16 = (undefined **)&iStack_7c4;
            func_0x000107443060(&uStack_788);
            iStack_7c4 = iStack_7c4 + 1;
            lVar23 = lVar23 + 4;
          }
        }
      }
      if ((bStack_7a8 & 1) == 0) {
        uStack_620 = &PTR_FUN_1109b1ca8;
        puStack_608 = &uStack_620;
        pppuVar17 = (undefined ***)&uStack_620;
        ppuVar16 = ppuStack_860;
        ppuStack_618 = ppuStack_860;
        FUN_10740ccb8(&ppuStack_7f0,plStack_890[0x16]);
        uVar22 = uStack_86c;
        FUN_10744bc74(&uStack_620);
      }
      else {
        lStack_7e8 = lStack_7b8;
        ppuStack_7f0 = ppuStack_7c0;
        uStack_7e0 = uStack_7b0;
        lStack_7b8 = 0;
        uStack_7b0 = 0;
        ppuStack_7c0 = (undefined **)0x0;
        uVar22 = uStack_86c;
      }
      uVar31 = (ulong)uVar22;
      uVar33 = lStack_7e8 - (long)ppuStack_7f0 >> 2;
      for (uVar30 = 0; uVar30 < uVar33; uVar30 = uVar30 + 3) {
        puVar1 = (uint *)((long)ppuStack_7f0 + uVar30 * 4);
        ppuVar16 = pppuVar37[3];
        uStack_620 = (undefined **)
                     CONCAT44(*(undefined4 *)((long)ppuVar16 + (ulong)puVar1[2] * 4),
                              *(undefined4 *)((long)ppuVar16 + (ulong)*puVar1 * 4));
        ppuStack_618 = (undefined **)
                       CONCAT44(ppuStack_618._4_4_,
                                *(undefined4 *)((long)ppuVar16 + (ulong)puVar1[1] * 4));
        ppuVar16 = (undefined **)&uStack_620;
        pppuVar17 = (undefined ***)0x3;
        FUN_107442138(param_1 + 0x13);
      }
      plStack_868 = (long *)ppuVar36[1];
      uStack_878 = uVar33;
      for (plVar35 = (long *)*ppuVar36; plVar35 != plStack_868; plVar35 = plVar35 + 3) {
        if (plVar35[1] - *plVar35 != 0) {
          lVar23 = 0;
          uStack_828 = 0;
          lVar28 = 0;
          unaff_x25 = (undefined **)(plVar35[1] - *plVar35 >> 2);
          uStack_620 = (undefined **)((ulong)uStack_620 & 0xffffffffffffff00);
          puStack_610 = (undefined8 *)((ulong)puStack_610 & 0xffffffffffffff00);
          for (ppuVar36 = (undefined **)0x1; ppuVar36 < unaff_x25;
              ppuVar36 = (undefined **)((long)ppuVar36 + 1)) {
            psVar2 = (short *)(*plVar35 + lVar23);
            pppuVar37 = (undefined ***)(psVar2 + 2);
            sVar6 = *(short *)pppuVar37;
            ppuVar41 = (undefined **)(double)(int)psVar2[3];
            sVar5 = *psVar2;
            dVar44 = (double)(int)psVar2[1] - (double)ppuVar41;
            unaff_d9 = (undefined **)-dVar44;
            uStack_6a0 = unaff_d9;
            uStack_698 = (double)(int)sVar5 - (double)(int)sVar6;
            FUN_10744fbe8(&uStack_6a0);
            iVar21 = (int)((double)(int)sVar5 - (double)(int)sVar6);
            iVar25 = (int)dVar44;
            ppuVar39 = (undefined **)SQRT((double)(uint)(iVar21 * iVar21 + iVar25 * iVar25));
            uVar22 = (uint)(double)ppuVar39;
            lVar27 = 0;
            if ((ulong)(lVar28 + (int)uVar22) >> 0xf == 0) {
              lVar27 = lVar28;
            }
            ppuStack_7d8 = unaff_d9;
            ppuStack_7d0 = ppuVar41;
            if ((uStack_3e0 & 1) == 0) {
              func_0x000107451cf0();
              ppuStack_810 = (undefined **)((ulong)ppuStack_810 & 0xffffffffffff0000);
              func_0x0001074519f0();
              func_0x000107451860();
              func_0x0001074518c4();
              func_0x000107451cf0();
              ppuStack_810._0_2_ = 1;
              func_0x0001074519f0();
              pppuVar17 = &ppuStack_7d8;
              pppuVar18 = &ppuStack_800;
              pppuVar20 = &ppuStack_810;
              func_0x000107451860();
              func_0x0001074518c4();
              func_0x000107451cf0();
              ppuStack_810._0_2_ = 0x100;
              func_0x00010745189c();
              func_0x000107451884(psVar2);
              func_0x000107451ad0();
              func_0x000107451cf0();
              ppuStack_810 = (undefined **)CONCAT62(ppuStack_810._2_6_,0x101);
              func_0x00010745189c();
              in_x6 = (long *)(ulong)(uVar22 & 0xffff);
              func_0x000107451884(psVar2);
              func_0x0001074518c4();
            }
            else {
              ppuVar16 = (undefined **)*plVar35;
              ppuVar13 = ppuVar36;
              ppuVar14 = ppuVar41;
              FUN_10744fc18(ppuVar36,ppuVar16,unaff_x25);
              ppuStack_800 = ppuVar39;
              ppuStack_7f8 = ppuVar14;
              if ((uStack_828 & 1) == 0) {
                ppuVar13 = (undefined **)((long)ppuVar36 + -1);
                ppuVar16 = (undefined **)*plVar35;
                ppuVar40 = ppuVar39;
                ppuVar42 = ppuVar14;
                FUN_10744fc18(ppuVar13,ppuVar16,unaff_x25);
                uStack_620 = ppuVar40;
                ppuStack_618 = ppuVar42;
              }
              ppuVar42 = ppuStack_618;
              ppuVar40 = uStack_620;
              FUN_10744fce0(unaff_d9,ppuVar41,ppuVar39,ppuVar14);
              ppuStack_810 = ppuVar13;
              ppuStack_808 = ppuVar16;
              FUN_10744fce0(unaff_d9,ppuVar41,ppuVar40,ppuVar42);
              uStack_822 = 0;
              ppuStack_820 = ppuVar13;
              ppuStack_818 = ppuVar16;
              func_0x0001074519f0();
              func_0x000107451860();
              func_0x0001074518c4();
              uStack_822 = 1;
              func_0x0001074519f0();
              pppuVar17 = &ppuStack_800;
              pppuVar18 = &ppuStack_810;
              pppuVar20 = (undefined ***)&uStack_822;
              func_0x000107451860();
              func_0x0001074518c4();
              uStack_822 = 0x100;
              func_0x0001074519f0();
              func_0x000107451c94();
              func_0x000107451884(psVar2);
              func_0x000107451ad0();
              uStack_822 = 0x101;
              func_0x0001074519f0();
              func_0x000107451c94();
              in_x6 = (long *)(ulong)(uVar22 & 0xffff);
              func_0x000107451884(psVar2);
              func_0x0001074518c4();
              ppuStack_618 = ppuStack_7f8;
              uStack_620 = ppuStack_800;
              uStack_828 = 1;
              uVar45 = uStack_858;
            }
            lVar28 = lVar27 + (int)uVar22;
            *(int *)(psVar2 + 0x82) = iStack_7c4;
            uStack_6a0._4_4_ = iStack_7c4 + 2;
            uStack_698._0_4_ = iStack_7c4 + 1;
            func_0x000107451b84();
            uStack_6a0._0_4_ = iStack_7c4 + (int)uVar45;
            uStack_6a0._4_4_ = iStack_7c4 + (int)((ulong)uVar45 >> 0x20);
            uStack_698._0_4_ = iStack_7c4 + 3;
            func_0x000107451b84();
            iStack_7c4 = iStack_7c4 + 4;
            *(long *)(lStack_830 + -0x10) = *(long *)(lStack_830 + -0x10) + lStack_848;
            *(long *)(lStack_830 + -0x18) = *(long *)(lStack_830 + -0x18) + lStack_850;
            *(long *)(puStack_838 + 0x58) = *(long *)(puStack_838 + 0x58) + 2;
            lVar23 = lVar23 + 4;
          }
          uVar31 = (ulong)uStack_86c;
          uVar33 = uStack_878;
          ppuVar36 = ppuStack_860;
        }
      }
      uVar30 = 0;
      func_0x000104c2d614();
      if ((uVar30 & 1) == 0) {
        func_0x000104c2fe00(&uStack_620,auStack_418);
        uStack_5e8 = uStack_3e0;
        uStack_5e6 = uStack_3de;
        func_0x000107262f3c(&uStack_620,auStack_450);
        unaff_x25 = (undefined **)&uStack_620;
        ppuVar16 = param_1;
        FUN_10744f604();
        pppuVar19 = (undefined ***)(unaff_x25 + 0xe);
        if (unaff_x25[0xd] < *pppuVar19) {
          func_0x000107451cdc();
          puVar29 = (undefined *)(extraout_x8_02 + 0x28);
          pppuVar19 = pppuVar18;
          uVar30 = extraout_x9;
        }
        else {
          ppuVar39 = unaff_x25 + 0xc;
          ppuVar16 = ppuVar39;
          FUN_1074084f8(ppuVar39,((long)unaff_x25[0xd] - (long)*ppuVar39) / 0x28 + 1);
          pppuVar17 = (undefined ***)(((long)unaff_x25[0xd] - (long)unaff_x25[0xc]) / 0x28);
          FUN_10740857c(&uStack_6a0,ppuVar16);
          func_0x000107451cdc(uStack_690);
          uStack_690 = extraout_x8_03 + 0x28;
          ppuVar16 = (undefined **)&uStack_6a0;
          FUN_107408540(ppuVar39);
          puVar29 = unaff_x25[0xd];
          FUN_1074085fc(&uStack_6a0);
          uVar30 = uStack_878;
        }
        unaff_x25[0xd] = puVar29;
        unaff_x25[0xb] = unaff_x25[0xb] + uVar30 / 3;
        func_0x000107451a74();
      }
      else {
        *(long *)(lStack_830 + -0x18) = *(long *)(lStack_830 + -0x18) + (long)ppuStack_880;
        *(ulong *)(lStack_830 + -0x10) = *(long *)(lStack_830 + -0x10) + uVar33;
        pppuVar19 = pppuVar18;
      }
      unaff_x26 = 0x14;
      if ((*(char *)(param_1 + 0xca) == '\x01') &&
         (uVar30 = (ulong)*(uint *)((long)param_1 + 0x654), *(uint *)((long)param_1 + 0x654) != 0))
      {
        uVar33 = ((long)param_1[0x11] - (long)param_1[0x10]) / 0x14;
        uVar9 = 0;
        if (uVar30 != 0) {
          uVar9 = uVar33 / uVar30;
        }
        if (uVar33 != uVar9 * uVar30) {
          uVar9 = 0;
          if (uVar30 != 0) {
            uVar9 = ((uVar30 + uVar33) - 1) / uVar30;
          }
          uVar33 = uVar9 * uVar30 - uVar33;
          if (uVar33 != 0) {
            uStack_6a0._0_4_ = 0;
            uStack_6a0._4_4_ = 0;
            uStack_698._0_4_ = 0;
            uStack_698._4_4_ = 0;
            uStack_690 = uStack_690 & 0xffffffff00000000;
            puVar26 = (undefined8 *)param_1[0x11];
            for (uVar31 = 0; uVar31 < uVar33; uVar31 = uVar31 + 1) {
              if (puVar26 < param_1[0x12]) {
                *(undefined4 *)(puVar26 + 2) = (undefined4)uStack_690;
                puVar34 = (undefined8 *)((long)puVar26 + 0x14);
                puVar26[1] = CONCAT44(uStack_698._4_4_,(int)uStack_698);
                *puVar26 = CONCAT44(uStack_6a0._4_4_,(uint)uStack_6a0);
              }
              else {
                ppuVar16 = param_1 + 0x10;
                FUN_107451608(ppuVar16,((long)puVar26 - (long)param_1[0x10]) / 0x14 + 1);
                pppuVar17 = (undefined ***)(((long)param_1[0x11] - (long)param_1[0x10]) / 0x14);
                pppuVar19 = (undefined ***)(param_1 + 0x12);
                FUN_1074516ec(&uStack_620,ppuVar16);
                puStack_610[1] = CONCAT44(uStack_698._4_4_,(int)uStack_698);
                *puStack_610 = CONCAT44(uStack_6a0._4_4_,(uint)uStack_6a0);
                *(undefined4 *)(puStack_610 + 2) = (undefined4)uStack_690;
                puStack_610 = (undefined8 *)((long)puStack_610 + 0x14);
                ppuVar16 = (undefined **)&uStack_620;
                FUN_107451658(param_1 + 0x10);
                puVar34 = (undefined8 *)param_1[0x11];
                FUN_107451754(&uStack_620);
              }
              param_1[0x11] = (undefined *)puVar34;
              puVar26 = puVar34;
            }
            *(ulong *)(lStack_830 + -0x18) = *(long *)(lStack_830 + -0x18) + uVar33;
            uVar31 = (ulong)uStack_86c;
          }
        }
      }
      func_0x00010731e26c(&ppuStack_7f0);
      pppuVar37[4] = pppuVar37[3];
      puVar12 = puStack_838;
    }
    FUN_10740d418(&ppuStack_7c0);
    ppuVar36 = ppuVar36 + 3;
  } while( true );
}



/* Entry: 10744e7b8; end: 10744e9d3;  */

void FUN_10744e7b8(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar10;
  int extraout_w10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *apuStack_3a0 [2];
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [24];
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 **ppuStack_328;
  long *plStack_320;
  undefined8 **ppuStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [56];
  undefined8 uStack_298;
  long lStack_290;
  undefined8 **ppuStack_288;
  undefined8 uStack_280;
  undefined8 *apuStack_278 [7];
  undefined8 uStack_240;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [112];
  undefined1 auStack_128 [168];
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  lVar6 = param_1;
  plVar9 = param_2;
  func_0x0001074518e8();
  uVar5 = *(char *)(lVar6 + 0x650) == '\x01';
  if ((bool)uVar5) {
    uVar5 = *(int *)(param_1 + 0x654) == 0;
    iVar15 = 0;
    if (!(bool)uVar5) {
      iVar15 = *(int *)(param_1 + 0x654);
    }
  }
  else {
    iVar15 = 0;
  }
  plVar16 = (long *)(param_1 + 0x120);
  uStack_78 = extraout_x8;
  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
    lVar6 = param_2[3];
    plVar9 = plVar16 + 2;
    FUN_10744bca8();
    if (param_2[3] + 8 == lVar6) {
      puVar11 = (undefined8 *)*param_2;
      uStack_1a8 = puVar11[1];
      uStack_1b0 = *puVar11;
      if (puVar11[1] != 0) {
        do {
          func_0x000107451b94();
        } while (extraout_w10 != 0);
      }
      param_4 = param_2[4];
      param_7 = (long *)param_2[2];
      auStack_128[0] = 0;
      uStack_80 = 0;
      func_0x000107451aa8();
      func_0x000107451a14();
      FUN_10744fd38();
    }
    else {
      puVar11 = (undefined8 *)*param_2;
      uStack_1a8 = puVar11[1];
      uStack_1b0 = *puVar11;
      if (puVar11[1] != 0) {
        plVar9 = (long *)(puVar11[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_4 = param_2[4];
      param_7 = (long *)param_2[2];
      plVar9 = (long *)(lVar6 + 0x58);
      FUN_107443404(auStack_128);
      func_0x000107451aa8();
      func_0x000107451a14();
      FUN_10744fd38();
    }
    func_0x00010726af18(auStack_198);
    FUN_107408214(auStack_128);
    func_0x000107267e44();
    *(int *)(plVar16 + 0x2c) = iVar15;
    if (*(char *)(plVar16[0xb] + 0x1c) == '\x01') {
      lVar6 = *(long *)(plVar16[0xb] + 0x14);
      plVar7 = (long *)(param_1 + 0x138);
      FUN_10744f560();
      func_0x0001074519cc(*param_2);
      (*extraout_x8_00)();
      plVar9 = plVar7;
      func_0x000107451c3c();
      *plVar7 = lVar6;
    }
    uVar5 = *(char *)(plVar16[9] + 0x1c) == '\x01';
    if ((bool)uVar5) {
      lVar6 = *(long *)(plVar16[9] + 0x14);
      plVar7 = (long *)(param_1 + 0x158);
      FUN_10744f560();
      func_0x0001074519cc(*param_2);
      (*extraout_x8_01)();
      plVar9 = plVar7;
      func_0x000107451c3c();
      *plVar7 = lVar6;
    }
  }
  func_0x00010745183c(uStack_78);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(auStack_198);
  FUN_107408214(auStack_128);
  puVar11 = &uStack_1b0;
  func_0x000107267e44();
  func_0x000107451974();
  func_0x0001074518e8();
  lStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  lVar1 = (param_7[1] - *param_7) / 0x38;
  uStack_240 = extraout_x8_02;
  FUN_1073bf8d4(&lStack_348,lVar1);
  lStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  func_0x0001072dd514(&lStack_360,lVar1);
  lVar19 = 0;
  lVar14 = param_7[1];
  uVar17 = 0;
  for (lVar6 = *param_7; lVar6 != lVar14; lVar6 = lVar6 + 0x38) {
    (**(code **)(**(long **)(lVar6 + 8) + 0x38))(&puStack_330);
    ppuVar8 = &puStack_330;
    FUN_107330078();
    uVar18 = uVar17;
    if (*ppuVar8 != ppuVar8[1]) {
      ppuVar8 = &puStack_330;
      FUN_107330078();
      lVar10 = 0;
      for (plVar16 = *ppuVar8; plVar16 != ppuVar8[1]; plVar16 = plVar16 + 3) {
        lVar10 = lVar10 + (plVar16[1] - *plVar16 >> 2);
      }
      lVar4 = (lVar10 + -1) * 5;
      uVar18 = uVar17 + lVar4 + 1;
      lVar19 = lVar19 + (lVar10 + -1) * 6;
      if (((*(byte *)(puVar11 + 0xca) & 1) != 0) &&
         (uVar12 = (ulong)*(uint *)((long)puVar11 + 0x654), *(uint *)((long)puVar11 + 0x654) != 0))
      {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = (lVar4 + uVar17 + uVar12) / uVar12;
        }
        uVar18 = uVar18 * uVar12;
      }
    }
    uVar17 = uVar18;
  }
  if (uVar17 != 0) {
    lVar6 = puVar11[0x10];
    if ((ulong)((puVar11[0x12] - lVar6) / 0x14) < (uVar17 & 0xffffffff)) {
      FUN_1074516ec(&puStack_330,uVar17 & 0xffffffff,(puVar11[0x11] - lVar6) / 0x14);
      FUN_107451658(puVar11 + 0x10,&puStack_330);
      FUN_107451754(&puStack_330);
    }
    puVar13 = puVar11 + 0x24;
    while (puVar13 = (undefined8 *)*puVar13, puVar13 != (undefined8 *)0x0) {
      func_0x000107451bf4();
    }
  }
  if (lVar19 != 0) {
    func_0x0001056c5718(puVar11 + 0x14,((lVar19 + 2U) / 3) * 3);
  }
  func_0x0001078696e8(auStack_378);
  lVar6 = 0;
  for (lVar14 = lVar1; lVar14 != 0; lVar14 = lVar14 + -1) {
    lVar19 = *param_7;
    puVar13 = (undefined8 *)(lVar19 + lVar6) + 1;
    (**(code **)(*(long *)*puVar13 + 0x30))();
    func_0x00010726236c(&puStack_330);
    func_0x000107262398(apuStack_278,&puStack_330,0x1138369c0);
    func_0x00010724b3d8(&puStack_330);
    func_0x000107869b38(&puStack_330,param_5,apuStack_278);
    func_0x000107451c00(&puStack_390);
    func_0x000107451b1c();
    puStack_330 = puVar13;
    (**(code **)(*(long *)*puVar13 + 0x38))(apuStack_3a0);
    ppuVar8 = apuStack_3a0;
    FUN_107330078();
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_310 = *(undefined8 *)(lVar19 + lVar6);
    puStack_3b8 = &uStack_3b0;
    ppuStack_328 = ppuVar8;
    plStack_320 = plVar9;
    ppuStack_318 = &puStack_3b8;
    func_0x000104c2fe00(auStack_308,puVar11 + 0x2f);
    func_0x000104c2fe00(auStack_2d0,puVar11 + 0x36);
    ppuStack_288 = &puStack_390;
    uStack_298 = param_3;
    lStack_290 = param_4;
    uStack_280 = param_6;
    FUN_10744d99c(puVar11,&puStack_330);
    func_0x000107451b14();
    FUN_1073dff1c(&puStack_3b8);
    puStack_330 = (undefined8 *)((long)(puVar11[0x11] - puVar11[0x10]) / 0x14);
    func_0x0001057f9264(&lStack_348,&puStack_330);
    func_0x0001072d17f4(&lStack_360,apuStack_278);
    func_0x00010726b264(&puStack_390);
    func_0x000104c2f714(apuStack_278);
    lVar6 = lVar6 + 0x38;
  }
  puVar13 = puVar11 + 0x24;
  while (puVar13 = (undefined8 *)*puVar13, puVar13 != (undefined8 *)0x0) {
    func_0x000107451bf4();
  }
  lVar14 = 0;
  for (lVar6 = 0; uVar5 = lVar1 == lVar6, !(bool)uVar5; lVar6 = lVar6 + 1) {
    lVar10 = *param_7;
    func_0x000107869b38(&puStack_330,param_5,lStack_360 + lVar14);
    func_0x000107451c00(apuStack_278);
    func_0x000107451b1c();
    lVar19 = lVar10 + lVar14;
    puStack_330 = (undefined8 *)(lVar19 + 8);
    (**(code **)(**(long **)(lVar19 + 8) + 0x38))(&puStack_3b8);
    ppuVar8 = &puStack_3b8;
    FUN_107330078();
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_310 = *(undefined8 *)(lVar10 + lVar14);
    puStack_390 = &uStack_388;
    ppuStack_328 = ppuVar8;
    plStack_320 = plVar9;
    ppuStack_318 = &puStack_390;
    func_0x000104c2fe00(auStack_308,puVar11 + 0x2f);
    func_0x000104c2fe00(auStack_2d0,puVar11 + 0x36);
    uStack_298 = param_3;
    lStack_290 = param_4;
    ppuStack_288 = apuStack_278;
    uStack_280 = param_6;
    FUN_10744e7b8(puVar11,&puStack_330,*(undefined8 *)(lStack_348 + lVar6 * 8));
    func_0x000107451b14();
    FUN_1073dff1c(&puStack_390);
    func_0x00010726b264(apuStack_278);
    lVar14 = lVar14 + 0x38;
  }
  func_0x00010726b264(auStack_378);
  func_0x00010726e078(&lStack_360);
  func_0x0001057f951c(&lStack_348);
  func_0x00010745183c(uStack_240);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    do {
      func_0x00010726e078(&lStack_360);
      func_0x0001057f951c(&lStack_348);
      func_0x000107451974();
    } while( true );
  }
  return;
}



/* Entry: 10744e9d4; end: 10744eed7;  */

void FUN_10744e9d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 **ppuVar4;
  undefined8 extraout_x8;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *apuStack_1d0 [2];
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [24];
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined8 uStack_150;
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 *apuStack_a8 [7];
  undefined8 uStack_70;
  
  func_0x0001074518e8();
  lStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  lVar1 = (param_7[1] - *param_7) / 0x38;
  uStack_70 = extraout_x8;
  FUN_1073bf8d4(&lStack_178,lVar1);
  lStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x0001072dd514(&lStack_190,lVar1);
  lVar13 = 0;
  lVar9 = param_7[1];
  uVar11 = 0;
  for (lVar6 = *param_7; lVar6 != lVar9; lVar6 = lVar6 + 0x38) {
    (**(code **)(**(long **)(lVar6 + 8) + 0x38))(&puStack_160);
    ppuVar4 = &puStack_160;
    FUN_107330078();
    uVar12 = uVar11;
    if (*ppuVar4 != ppuVar4[1]) {
      ppuVar4 = &puStack_160;
      FUN_107330078();
      lVar5 = 0;
      for (plVar8 = *ppuVar4; plVar8 != ppuVar4[1]; plVar8 = plVar8 + 3) {
        lVar5 = lVar5 + (plVar8[1] - *plVar8 >> 2);
      }
      lVar2 = (lVar5 + -1) * 5;
      uVar12 = uVar11 + lVar2 + 1;
      lVar13 = lVar13 + (lVar5 + -1) * 6;
      if (((*(byte *)(param_1 + 0x650) & 1) != 0) &&
         (uVar7 = (ulong)*(uint *)(param_1 + 0x654), *(uint *)(param_1 + 0x654) != 0)) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = (lVar2 + uVar11 + uVar7) / uVar7;
        }
        uVar12 = uVar12 * uVar7;
      }
    }
    uVar11 = uVar12;
  }
  if (uVar11 != 0) {
    lVar6 = *(long *)(param_1 + 0x80);
    if ((ulong)((*(long *)(param_1 + 0x90) - lVar6) / 0x14) < (uVar11 & 0xffffffff)) {
      FUN_1074516ec(&puStack_160,uVar11 & 0xffffffff,(*(long *)(param_1 + 0x88) - lVar6) / 0x14);
      FUN_107451658((long *)(param_1 + 0x80),&puStack_160);
      FUN_107451754(&puStack_160);
    }
    plVar8 = (long *)(param_1 + 0x120);
    while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
      func_0x000107451bf4();
    }
  }
  if (lVar13 != 0) {
    func_0x0001056c5718(param_1 + 0xa0,((lVar13 + 2U) / 3) * 3);
  }
  func_0x0001078696e8(auStack_1a8);
  lVar6 = 0;
  for (lVar9 = lVar1; lVar9 != 0; lVar9 = lVar9 + -1) {
    lVar13 = *param_7;
    puVar10 = (undefined8 *)(lVar13 + lVar6) + 1;
    (**(code **)(*(long *)*puVar10 + 0x30))();
    func_0x00010726236c(&puStack_160);
    func_0x000107262398(apuStack_a8,&puStack_160,0x1138369c0);
    func_0x00010724b3d8(&puStack_160);
    func_0x000107869b38(&puStack_160,param_5,apuStack_a8);
    func_0x000107451c00(&puStack_1c0);
    func_0x000107451b1c();
    puStack_160 = puVar10;
    (**(code **)(*(long *)*puVar10 + 0x38))(apuStack_1d0);
    ppuVar4 = apuStack_1d0;
    FUN_107330078();
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_140 = *(undefined8 *)(lVar13 + lVar6);
    puStack_1e8 = &uStack_1e0;
    ppuStack_158 = ppuVar4;
    uStack_150 = param_2;
    ppuStack_148 = &puStack_1e8;
    func_0x000104c2fe00(auStack_138,param_1 + 0x178);
    func_0x000104c2fe00(auStack_100,param_1 + 0x1b0);
    ppuStack_b8 = &puStack_1c0;
    uStack_c8 = param_3;
    uStack_c0 = param_4;
    uStack_b0 = param_6;
    FUN_10744d99c(param_1,&puStack_160);
    func_0x000107451b14();
    FUN_1073dff1c(&puStack_1e8);
    puStack_160 = (undefined8 *)((*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) / 0x14);
    func_0x0001057f9264(&lStack_178,&puStack_160);
    func_0x0001072d17f4(&lStack_190,apuStack_a8);
    func_0x00010726b264(&puStack_1c0);
    func_0x000104c2f714(apuStack_a8);
    lVar6 = lVar6 + 0x38;
  }
  plVar8 = (long *)(param_1 + 0x120);
  while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
    func_0x000107451bf4();
  }
  lVar9 = 0;
  for (lVar6 = 0; uVar3 = lVar1 == lVar6, !(bool)uVar3; lVar6 = lVar6 + 1) {
    lVar5 = *param_7;
    func_0x000107869b38(&puStack_160,param_5,lStack_190 + lVar9);
    func_0x000107451c00(apuStack_a8);
    func_0x000107451b1c();
    lVar13 = lVar5 + lVar9;
    puStack_160 = (undefined8 *)(lVar13 + 8);
    (**(code **)(**(long **)(lVar13 + 8) + 0x38))(&puStack_1e8);
    ppuVar4 = &puStack_1e8;
    FUN_107330078();
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_140 = *(undefined8 *)(lVar5 + lVar9);
    puStack_1c0 = &uStack_1b8;
    ppuStack_158 = ppuVar4;
    uStack_150 = param_2;
    ppuStack_148 = &puStack_1c0;
    func_0x000104c2fe00(auStack_138,param_1 + 0x178);
    func_0x000104c2fe00(auStack_100,param_1 + 0x1b0);
    uStack_c8 = param_3;
    uStack_c0 = param_4;
    ppuStack_b8 = apuStack_a8;
    uStack_b0 = param_6;
    FUN_10744e7b8(param_1,&puStack_160,*(undefined8 *)(lStack_178 + lVar6 * 8));
    func_0x000107451b14();
    FUN_1073dff1c(&puStack_1c0);
    func_0x00010726b264(apuStack_a8);
    lVar9 = lVar9 + 0x38;
  }
  func_0x00010726b264(auStack_1a8);
  func_0x00010726e078(&lStack_190);
  func_0x0001057f951c(&lStack_178);
  func_0x00010745183c(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    do {
      func_0x00010726e078(&lStack_190);
      func_0x0001057f951c(&lStack_178);
      func_0x000107451974();
    } while( true );
  }
  return;
}



/* Entry: 10744eed8; end: 10744ef03;  */

void FUN_10744eed8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[2] = param_2[2];
    return;
  }
  func_0x000107277f30();
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  return;
}



/* Entry: 10744ef04; end: 10744ef6f;  */

void FUN_10744ef04(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001074519e4();
  (**(code **)(*(long *)*param_1 + 0x70))();
  func_0x000107451850(*(undefined8 *)(unaff_x20 + 8));
  func_0x000107451850(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107451850(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107451850(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107451850(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107451850(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010744ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x38) + 0x70))();
  return;
}



/* Entry: 10744ef70; end: 10744ef77;  */

bool FUN_10744ef70(long param_1)

{
  param_1 = param_1 + 0x60;
  func_0x0001072a0454(param_1);
  return param_1 != 0;
}



/* Entry: 10744ef78; end: 10744f327;  */

void FUN_10744ef78(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_68;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((bVar1 & 1) == 0) {
    FUN_1073da3e8(param_2,0xac,1);
    FUN_1073da3e8(param_2,0xad,*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80));
    lVar19 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80);
    (**(code **)(*param_2 + 0x40))(&lStack_98,param_2,*(long *)(param_1 + 0x80),lVar19,1);
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    lStack_80 = 0x14;
    uStack_78 = 1;
    lStack_68 = lStack_98;
    lStack_90 = lVar19 / 0x14;
    func_0x000107309708(param_1 + 0xb8,&lStack_90);
    lVar19 = lStack_68;
    lStack_68 = 0;
    if (lVar19 != 0) {
      func_0x000107451878();
    }
    FUN_1073da574(&lStack_90,param_2,param_1 + 0x98,1);
    func_0x000107309778(param_1 + 0xf0,&lStack_90);
    lVar19 = lStack_80;
    lStack_80 = 0;
    if (lVar19 != 0) {
      func_0x000107451878();
    }
  }
  uVar22 = bVar1 ^ 1;
  plVar21 = (long *)(param_1 + 0x120);
  do {
    plVar21 = (long *)*plVar21;
    if (plVar21 == (long *)0x0) {
      if ((uVar22 & 1) != 0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      *(undefined1 *)(param_1 + 0x1c) = 1;
      return;
    }
    if ((*(byte *)(plVar21 + 0x24) & 1) == 0) {
      lVar9 = plVar21[9];
      func_0x0001074518b8();
      plVar21[0x11] = lVar9;
      lVar10 = plVar21[10];
      func_0x0001074518b8();
      plVar21[0x12] = lVar10;
      lVar11 = plVar21[0xb];
      func_0x0001074518b8();
      plVar21[0x13] = lVar11;
      lVar12 = plVar21[0xc];
      func_0x0001074518b8();
      plVar21[0x14] = lVar12;
      lVar13 = plVar21[0xd];
      func_0x0001074518b8();
      plVar21[0x15] = lVar13;
      lVar14 = plVar21[0xe];
      func_0x0001074518b8();
      plVar21[0x16] = lVar14;
      lVar15 = plVar21[0xf];
      func_0x0001074518b8();
      plVar21[0x17] = lVar15;
      lVar16 = plVar21[0x10];
      func_0x0001074518b8();
      lVar19 = 0;
      plVar21[0x18] = lVar16;
      plVar21[0x19] = 0;
      lVar20 = 7;
      plVar17 = plVar21 + 0x1a;
      do {
        lVar19 = plVar17[-9] + lVar19;
        *plVar17 = lVar19;
        lVar20 = lVar20 + -1;
        plVar17 = plVar17 + 1;
      } while (lVar20 != 0);
      lStack_90 = 0;
      uStack_88 = 0;
      lStack_80 = 0;
      func_0x000100651cb4(&lStack_90,
                          lVar10 + lVar9 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16);
      FUN_10744bd40(plVar21 + 0x21,&lStack_90);
      func_0x000100100fec(&lStack_90);
    }
    plVar17 = plVar21 + 0x21;
    FUN_10744bd74();
    plVar18 = plVar17;
    func_0x000107451a9c();
    uVar3 = (uint)plVar18;
    FUN_10745129c();
    uVar4 = uVar3;
    func_0x000107451a9c();
    func_0x0001074512c8();
    uVar5 = uVar4;
    func_0x000107451a9c();
    FUN_10745129c();
    if (plVar21[0x14] == 0) {
LAB_10744f1e0:
      uVar6 = 0;
      uVar7 = uVar5;
    }
    else {
      if ((ulong)(plVar17[1] - *plVar17) <= (ulong)plVar21[0x1c]) goto LAB_10744f1e0;
      plVar18 = (long *)plVar21[0xc];
      (**(code **)(*plVar18 + 0x20))(plVar18,*plVar17 + plVar21[0x1c]);
      uVar6 = (uint)plVar18;
      uVar7 = uVar6;
    }
    func_0x000107451a9c();
    FUN_10745129c();
    uVar6 = uVar6 | uVar7;
    func_0x000107451a9c();
    FUN_10745129c();
    uVar6 = uVar6 | uVar7;
    func_0x000107451a9c();
    func_0x0001074512c8();
    uVar8 = uVar7;
    func_0x000107451a9c();
    func_0x0001074512c8();
    lVar19 = *plVar17;
    uVar5 = (uint)(lVar19 != plVar17[1]) & (uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8);
    if (uVar5 == 1) {
      FUN_1073da4dc(&lStack_90,param_2,lVar19,plVar17[1] - lVar19,1);
      func_0x000107309708(plVar21 + 0x25,&lStack_90);
      lVar19 = lStack_68;
      lStack_68 = 0;
      if (lVar19 != 0) {
        func_0x000107451878();
      }
      iVar2 = *(int *)((long)plVar21 + 0x164);
      *(int *)((long)plVar21 + 0x164) = iVar2 + 1;
      *(int *)(plVar21 + 0x29) = iVar2;
    }
    uVar22 = uVar22 | uVar5;
  } while( true );
}



/* Entry: 10744f328; end: 10744f36b;  */

bool FUN_10744f328(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x48);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) break;
  } while (*(long *)(plVar1[3] + 0x60) == *(long *)(plVar1[3] + 0x68));
  return plVar1 != (long *)0x0;
}



/* Entry: 10744f36c; end: 10744f4f3;  */

ulong FUN_10744f36c(long param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                   long param_6,undefined8 *param_7)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [4];
  int iStack_17c;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [24];
  undefined8 *puStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [184];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  fVar5 = (float)param_2;
  lVar1 = param_6;
  puVar2 = param_7;
  func_0x0001074518e8();
  lVar1 = lVar1 + 0x110;
  uStack_48 = extraout_x8;
  FUN_1073be170(lVar1,puVar2[10]);
  if (lVar1 == 0) {
LAB_10744f490:
    uVar4 = 1;
  }
  else {
    puVar2 = param_7;
    FUN_1074400f8(auStack_140);
    func_0x000107451ac8();
    *puVar2 = &PTR_DAT_1109b1bf8;
    puVar2[1] = param_7;
    puVar2[2] = lVar1 + 0x48;
    puVar2[3] = param_6;
    uStack_148 = 1;
    puStack_150 = puVar2;
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x48));
    param_7 = &uStack_88;
    func_0x000107451890(&uStack_88);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x50));
    func_0x000107451890(auStack_80);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x58));
    func_0x000107451890(auStack_78);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x60));
    func_0x000107451890(auStack_70);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x68));
    func_0x000107451890(auStack_68);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x70));
    func_0x000107451890(auStack_60);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x78));
    func_0x000107451890(auStack_58);
    func_0x000107451a08(*(undefined8 *)(lVar1 + 0x80));
    func_0x000107451890(auStack_50);
    puStack_178 = &uStack_88;
    uStack_170 = 8;
    func_0x00010744be14(auStack_180,&puStack_178);
    FUN_1074434e4(auStack_168);
    func_0x000107443538();
    if (iStack_17c != 0) goto LAB_10744f490;
    *(undefined1 *)(param_6 + 0x1c) = 0;
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  func_0x00010745183c(uStack_48);
  if ((bool)in_ZR) {
    return CONCAT44(uVar7,fVar5);
  }
  ___stack_chk_fail();
  puVar3 = auStack_140;
  func_0x000107443538();
  func_0x000107451974();
  func_0x000107451bc4();
  puVar3 = puVar3 + 0x138;
  FUN_10744f560(puVar3,extraout_x8_00 + 8);
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107451a38();
    func_0x000107451c0c();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x000107451b60();
      fVar6 = 0.0;
      if (0.0 <= param_4) {
        fVar6 = param_5;
      }
      fVar6 = fVar5 + fVar6 * (param_3 - fVar5);
      goto LAB_10744f558;
    }
  }
  func_0x000107451b3c(*(undefined4 *)(param_7 + 0x1c));
  fVar6 = 0.0;
  if (!(bool)in_ZR) {
    fVar6 = fVar5;
  }
LAB_10744f558:
  return (ulong)(uint)fVar6;
}



/* Entry: 10744f4f4; end: 10744f55f;  */

float FUN_10744f4f4(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x22;
  float fVar1;
  
  func_0x000107451bc4();
  param_5 = param_5 + 0x138;
  FUN_10744f560(param_5,extraout_x8 + 8);
  if (param_5 != 0) {
    func_0x000107451a38();
    func_0x000107451c0c();
    if (param_5 != 0) {
      func_0x000107451b60();
      fVar1 = 0.0;
      if (0.0 <= param_3) {
        fVar1 = param_4;
      }
      return param_1 + fVar1 * (param_2 - param_1);
    }
  }
  func_0x000107451b3c(*(undefined4 *)(unaff_x22 + 0xe0));
  fVar1 = 0.0;
  if (!(bool)in_ZR) {
    fVar1 = param_1;
  }
  return fVar1;
}



/* Entry: 10744f560; end: 10744f597;  */

long FUN_10744f560(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  func_0x0001074519e4();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  puVar4 = unaff_x20;
  func_0x000107451bdc();
  lVar7 = 0;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar8 = *puVar4;
  uVar6 = uVar8 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      lVar5 = uVar1 + uVar10 * 0x60;
      func_0x000104c32db4(lVar5,unaff_x20);
      if ((int)lVar5 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 10744f598; end: 10744f603;  */

float FUN_10744f598(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x22;
  float fVar1;
  
  func_0x000107451bc4();
  param_5 = param_5 + 0x158;
  FUN_10744f560(param_5,extraout_x8 + 8);
  if (param_5 != 0) {
    func_0x000107451a38();
    func_0x000107451c0c();
    if (param_5 != 0) {
      func_0x000107451b60();
      fVar1 = 0.0;
      if (0.0 <= param_3) {
        fVar1 = param_4;
      }
      return param_1 + fVar1 * (param_2 - param_1);
    }
  }
  func_0x000107451b3c(*(undefined4 *)(unaff_x22 + 0x58));
  fVar1 = 0.0;
  if (!(bool)in_ZR) {
    fVar1 = param_1;
  }
  return fVar1;
}



/* Entry: 10744f604; end: 10744fb03;  */

long ***** FUN_10744f604(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long *****ppppplVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long *****ppppplVar12;
  long *plVar13;
  long *****ppppplVar14;
  long unaff_x19;
  long unaff_x20;
  long *****ppppplVar15;
  long *****unaff_x24;
  long *****ppppplStack_78;
  long *****ppppplStack_70;
  long *****ppppplStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001074519e4();
  pppppplVar7 = &ppppplStack_68;
  func_0x00010726364c();
  uVar11 = (long)pppppplVar7 + 0x9e3779b97f4a7c15;
  uVar11 = uVar11 * 0x1000 + (uVar11 >> 4) + (ulong)*(byte *)(unaff_x20 + 0x38) + 0x9e3779b97f4a7c15
           ^ uVar11;
  uVar11 = ((ulong)*(byte *)(unaff_x20 + 0x39) | uVar11 << 0xc) + (uVar11 >> 4) + 0x9e3779b97f4a7c15
           ^ uVar11;
  ppppplVar15 = (long *****)
                (((ulong)*(byte *)(unaff_x20 + 0x3a) | uVar11 << 0xc) + (uVar11 >> 4) +
                 0x9e3779b97f4a7c15 ^ uVar11);
  ppppplVar9 = *(long ******)(unaff_x19 + 0x40);
  if ((ppppplVar9 != (long *****)0x0) && (*(long *)(unaff_x19 + 0x50) != 0)) {
    uVar11 = (long)ppppplVar9 - 1;
    if (((ulong)ppppplVar9 & uVar11) == 0) {
      ppppplVar12 = (long *****)((ulong)ppppplVar15 & uVar11);
      in_NG = false;
    }
    else {
      in_NG = (long)ppppplVar15 - (long)ppppplVar9 < 0;
      ppppplVar12 = ppppplVar15;
      if (ppppplVar9 <= ppppplVar15) {
        uVar3 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar3 = (ulong)ppppplVar15 / (ulong)ppppplVar9;
        }
        ppppplVar12 = (long *****)((long)ppppplVar15 - uVar3 * (long)ppppplVar9);
      }
    }
    plVar13 = *(long **)(*(long *)(unaff_x19 + 0x38) + (long)ppppplVar12 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10744f718;
          ppppplVar14 = (long *****)plVar13[1];
          if (ppppplVar14 != ppppplVar15) break;
          in_NG = plVar13[2] - (long)ppppplVar15 < 0;
          if ((long *****)plVar13[2] == ppppplVar15) {
            return (long *****)plVar13[3];
          }
        }
        if (((ulong)ppppplVar9 & uVar11) == 0) {
          ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar11);
        }
        else if (ppppplVar9 <= ppppplVar14) {
          uVar3 = 0;
          if (ppppplVar9 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar14 / (ulong)ppppplVar9;
          }
          ppppplVar14 = (long *****)((long)ppppplVar14 - uVar3 * (long)ppppplVar9);
        }
        in_NG = (long)ppppplVar14 - (long)ppppplVar12 < 0;
      } while (ppppplVar14 == ppppplVar12);
    }
  }
LAB_10744f718:
  pppppplVar8 = (long ******)0x1b8;
  __Znwm();
  _bzero();
  func_0x000104c2f64c(pppppplVar8);
  pppppplVar8[8] = (long *****)0x0;
  pppppplVar8[9] = (long *****)0x0;
  pppppplVar8[10] = (long *****)0x0;
  pppppplVar8[0xd] = (long *****)0x0;
  pppppplVar8[0xe] = (long *****)0x0;
  pppppplVar8[0xc] = (long *****)0x0;
  _bzero(pppppplVar8 + 0x11,0x130);
  pppppplVar7 = pppppplVar8;
  ppppplStack_70 = (long *****)pppppplVar8;
  func_0x000107262f3c();
  ppppplVar9 = ppppplStack_70;
  *(undefined2 *)(pppppplVar8 + 7) = *(undefined2 *)(unaff_x20 + 0x38);
  *(undefined1 *)((long)pppppplVar8 + 0x3a) = *(undefined1 *)(unaff_x20 + 0x3a);
  ppppplStack_70[0xb] = (long ****)0x0;
  ppppplStack_78 = ppppplStack_70;
  ppppplStack_70 = (long *****)0x0;
  ppppplVar12 = *(long ******)(unaff_x19 + 0x40);
  if (ppppplVar12 != (long *****)0x0) {
    uVar11 = (long)ppppplVar12 - 1;
    if (((ulong)ppppplVar12 & uVar11) == 0) {
      unaff_x24 = (long *****)(uVar11 & (ulong)ppppplVar15);
      in_NG = false;
    }
    else {
      in_NG = (long)ppppplVar15 - (long)ppppplVar12 < 0;
      unaff_x24 = ppppplVar15;
      if (ppppplVar12 <= ppppplVar15) {
        uVar3 = 0;
        if (ppppplVar12 != (long *****)0x0) {
          uVar3 = (ulong)ppppplVar15 / (ulong)ppppplVar12;
        }
        unaff_x24 = (long *****)((long)ppppplVar15 - uVar3 * (long)ppppplVar12);
      }
    }
    plVar13 = *(long **)(*(long *)(unaff_x19 + 0x38) + (long)unaff_x24 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10744f810;
          ppppplVar14 = (long *****)plVar13[1];
          if (ppppplVar14 != ppppplVar15) break;
          in_NG = plVar13[2] - (long)ppppplVar15 < 0;
          if ((long *****)plVar13[2] == ppppplVar15) goto LAB_10744f910;
        }
        if (((ulong)ppppplVar12 & uVar11) == 0) {
          ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar11);
        }
        else if (ppppplVar12 <= ppppplVar14) {
          uVar3 = 0;
          if (ppppplVar12 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar14 / (ulong)ppppplVar12;
          }
          ppppplVar14 = (long *****)((long)ppppplVar14 - uVar3 * (long)ppppplVar12);
        }
        in_NG = (long)ppppplVar14 - (long)unaff_x24 < 0;
      } while (ppppplVar14 == unaff_x24);
    }
  }
LAB_10744f810:
  func_0x000107451ac8();
  puVar1 = (undefined8 *)(unaff_x19 + 0x48);
  uStack_58 = 1;
  *pppppplVar7 = (long *****)0x0;
  pppppplVar7[1] = ppppplVar15;
  ppppplStack_78 = (long *****)0x0;
  pppppplVar7[2] = ppppplVar15;
  pppppplVar7[3] = ppppplVar9;
  ppppplStack_68 = (long *****)pppppplVar7;
  puStack_60 = puVar1;
  func_0x000107451ca8(*(undefined8 *)(unaff_x19 + 0x50));
  if (ppppplVar12 != (long *****)0x0) {
    func_0x000107451c88(param_1,*(undefined4 *)(unaff_x19 + 0x58),(float)ppppplVar12);
    uVar5 = false;
    if (!(bool)in_NG) goto LAB_10744f8ac;
  }
  bVar4 = (long *****)0x2 < ppppplVar12;
  bVar6 = ppppplVar12 == (long *****)0x3;
  func_0x000107451920((long)ppppplVar12 << 1);
  uVar2 = extraout_x8;
  if (!bVar4 || bVar6) {
    uVar2 = extraout_x9;
  }
  FUN_1074507bc(unaff_x19 + 0x38,uVar2);
  ppppplVar12 = *(long ******)(unaff_x19 + 0x40);
  if (((ulong)ppppplVar12 & (long)ppppplVar12 - 1U) == 0) {
    uVar5 = false;
    unaff_x24 = (long *****)((long)ppppplVar12 - 1U & (ulong)ppppplVar15);
  }
  else {
    uVar5 = (long)ppppplVar15 - (long)ppppplVar12 < 0;
    unaff_x24 = ppppplVar15;
    if (ppppplVar12 <= ppppplVar15) {
      uVar11 = 0;
      if (ppppplVar12 != (long *****)0x0) {
        uVar11 = (ulong)ppppplVar15 / (ulong)ppppplVar12;
      }
      unaff_x24 = (long *****)((long)ppppplVar15 - uVar11 * (long)ppppplVar12);
    }
  }
LAB_10744f8ac:
  lVar10 = *(long *)(unaff_x19 + 0x38);
  if (*(long *)(lVar10 + (long)unaff_x24 * 8) == 0) {
    *pppppplVar7 = (long *****)*puVar1;
    *puVar1 = pppppplVar7;
    *(undefined8 **)(lVar10 + (long)unaff_x24 * 8) = puVar1;
    if (*pppppplVar7 != (long *****)0x0) {
      ppppplVar9 = (long *****)(*pppppplVar7)[1];
      if (((ulong)ppppplVar12 & (long)ppppplVar12 - 1U) == 0) {
        ppppplVar9 = (long *****)((ulong)ppppplVar9 & (long)ppppplVar12 - 1U);
        uVar5 = false;
      }
      else {
        uVar5 = (long)ppppplVar9 - (long)ppppplVar12 < 0;
        if (ppppplVar12 <= ppppplVar9) {
          uVar11 = 0;
          if (ppppplVar12 != (long *****)0x0) {
            uVar11 = (ulong)ppppplVar9 / (ulong)ppppplVar12;
          }
          ppppplVar9 = (long *****)((long)ppppplVar9 - uVar11 * (long)ppppplVar12);
        }
      }
      *(long *******)(lVar10 + (long)ppppplVar9 * 8) = pppppplVar7;
    }
  }
  else {
    func_0x000107451ba4();
  }
  func_0x00010745198c();
  in_NG = uVar5;
LAB_10744f910:
  pppppplVar7 = &ppppplStack_78;
  func_0x000107450958();
  ppppplVar9 = *(long ******)(unaff_x19 + 0x40);
  if (ppppplVar9 != (long *****)0x0) {
    uVar11 = (long)ppppplVar9 - 1;
    if (((ulong)ppppplVar9 & uVar11) == 0) {
      ppppplVar12 = (long *****)(uVar11 & (ulong)ppppplVar15);
      in_NG = false;
    }
    else {
      in_NG = (long)ppppplVar15 - (long)ppppplVar9 < 0;
      ppppplVar12 = ppppplVar15;
      if (ppppplVar9 <= ppppplVar15) {
        uVar3 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar3 = (ulong)ppppplVar15 / (ulong)ppppplVar9;
        }
        ppppplVar12 = (long *****)((long)ppppplVar15 - uVar3 * (long)ppppplVar9);
      }
    }
    pppppplVar8 = *(long *******)(*(long *)(unaff_x19 + 0x38) + (long)ppppplVar12 * 8);
    if (pppppplVar8 != (long ******)0x0) {
      do {
        while( true ) {
          pppppplVar8 = (long ******)*pppppplVar8;
          if (pppppplVar8 == (long ******)0x0) goto LAB_10744f9a4;
          ppppplVar14 = pppppplVar8[1];
          if (ppppplVar14 != ppppplVar15) break;
          in_NG = (long)pppppplVar8[2] - (long)ppppplVar15 < 0;
          if (pppppplVar8[2] == ppppplVar15) goto LAB_10744fa98;
        }
        if (((ulong)ppppplVar9 & uVar11) == 0) {
          ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar11);
        }
        else if (ppppplVar9 <= ppppplVar14) {
          uVar3 = 0;
          if (ppppplVar9 != (long *****)0x0) {
            uVar3 = (ulong)ppppplVar14 / (ulong)ppppplVar9;
          }
          ppppplVar14 = (long *****)((long)ppppplVar14 - uVar3 * (long)ppppplVar9);
        }
        in_NG = (long)ppppplVar14 - (long)ppppplVar12 < 0;
      } while (ppppplVar14 == ppppplVar12);
    }
  }
LAB_10744f9a4:
  func_0x000107451ac8();
  puVar1 = (undefined8 *)(unaff_x19 + 0x48);
  uStack_58 = 1;
  ppppplStack_68 = (long *****)pppppplVar7;
  puStack_60 = puVar1;
  *pppppplVar7 = (long *****)0x0;
  pppppplVar7[1] = ppppplVar15;
  pppppplVar7[2] = ppppplVar15;
  pppppplVar7[3] = (long *****)0x0;
  func_0x000107451ca8(*(undefined8 *)(unaff_x19 + 0x50));
  if ((ppppplVar9 == (long *****)0x0) ||
     (func_0x000107451c88(param_1,*(undefined4 *)(unaff_x19 + 0x58),(float)ppppplVar9), (bool)in_NG)
     ) {
    bVar4 = (long *****)0x2 < ppppplVar9;
    bVar6 = ppppplVar9 == (long *****)0x3;
    func_0x000107451920((long)ppppplVar9 << 1);
    uVar2 = extraout_x8_00;
    if (!bVar4 || bVar6) {
      uVar2 = extraout_x9_00;
    }
    FUN_1074507bc(unaff_x19 + 0x38,uVar2);
    ppppplVar9 = *(long ******)(unaff_x19 + 0x40);
    if (((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) == 0) {
      ppppplVar12 = (long *****)((long)ppppplVar9 - 1U & (ulong)ppppplVar15);
    }
    else {
      ppppplVar12 = ppppplVar15;
      if (ppppplVar9 <= ppppplVar15) {
        uVar11 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar11 = (ulong)ppppplVar15 / (ulong)ppppplVar9;
        }
        ppppplVar12 = (long *****)((long)ppppplVar15 - uVar11 * (long)ppppplVar9);
      }
    }
  }
  lVar10 = *(long *)(unaff_x19 + 0x38);
  if (*(long *)(lVar10 + (long)ppppplVar12 * 8) == 0) {
    *pppppplVar7 = (long *****)*puVar1;
    *puVar1 = pppppplVar7;
    *(undefined8 **)(lVar10 + (long)ppppplVar12 * 8) = puVar1;
    if (*pppppplVar7 != (long *****)0x0) {
      ppppplVar15 = (long *****)(*pppppplVar7)[1];
      if (((ulong)ppppplVar9 & (long)ppppplVar9 - 1U) == 0) {
        ppppplVar15 = (long *****)((ulong)ppppplVar15 & (long)ppppplVar9 - 1U);
      }
      else if (ppppplVar9 <= ppppplVar15) {
        uVar11 = 0;
        if (ppppplVar9 != (long *****)0x0) {
          uVar11 = (ulong)ppppplVar15 / (ulong)ppppplVar9;
        }
        ppppplVar15 = (long *****)((long)ppppplVar15 - uVar11 * (long)ppppplVar9);
      }
      *(long *******)(lVar10 + (long)ppppplVar15 * 8) = pppppplVar7;
    }
  }
  else {
    func_0x000107451ba4();
  }
  func_0x00010745198c();
  pppppplVar8 = pppppplVar7;
LAB_10744fa98:
  ppppplVar9 = pppppplVar8[3];
  func_0x000107450958(&ppppplStack_70);
  return ppppplVar9;
}



/* Entry: 10744fb04; end: 10744fbe7;  */

void FUN_10744fb04(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar3 = puVar2 + 5;
    *(undefined4 *)(puVar2 + 4) = 0;
  }
  else {
    plVar1 = param_1;
    FUN_1074084f8(param_1,((long)puVar2 - *param_1) / 0x28 + 1);
    FUN_10740857c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
    *puStack_58 = param_2;
    puStack_58[1] = param_3;
    puStack_58[2] = 0;
    puStack_58[3] = 0;
    *(undefined4 *)(puStack_58 + 4) = 0;
    puStack_58 = puStack_58 + 5;
    FUN_107408540(param_1,auStack_68);
    puVar3 = (undefined8 *)param_1[1];
    FUN_1074085fc(auStack_68);
  }
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 10744fbe8; end: 10744fc17;  */

undefined1  [16] FUN_10744fbe8(undefined1 (*param_1) [16])

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar1 = *(double *)*param_1;
  dVar2 = *(double *)(*param_1 + 8);
  dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar3 == 0.0) {
    return *param_1;
  }
  dVar3 = 1.0 / SQRT(dVar3);
  auVar4._0_8_ = dVar1 * dVar3;
  auVar4._8_8_ = dVar2 * dVar3;
  return auVar4;
}



/* Entry: 10744fc18; end: 10744fcdf;  */

void FUN_10744fc18(void)

{
  func_0x000107451c64();
  func_0x000107451c64();
  func_0x000107451c64();
  return;
}



/* Entry: 10744fce0; end: 10744fd37;  */

undefined1  [16] FUN_10744fce0(double param_1,double param_2,double param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = param_2 * param_4 + param_3 * param_1;
  dVar3 = SQRT(1.0 - dVar2 * dVar2);
  if ((1e-06 < ABS(param_3 - (-(dVar3 * param_2) + dVar2 * param_1))) ||
     (1e-06 < ABS(param_4 - (param_2 * dVar2 + dVar3 * param_1)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 10744fd38; end: 10744ff67;  */

void FUN_10744fd38(undefined8 *param_1)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x0001074519fc(*param_1);
  (*extraout_x8)();
  func_0x0001074519fc(param_1[1]);
  (*extraout_x8_00)();
  func_0x0001074519fc(param_1[2]);
  (*extraout_x8_01)();
  func_0x0001074519fc(param_1[3]);
  (*extraout_x8_02)();
  func_0x0001074519fc(param_1[4]);
  (*extraout_x8_03)();
  func_0x0001074519fc(param_1[5]);
  (*extraout_x8_04)();
  func_0x0001074519fc(param_1[6]);
  func_0x000107451a7c();
  (*extraout_x8_05)();
  func_0x0001074519fc(param_1[7]);
  func_0x000107451a7c();
                    /* WARNING: Could not recover jumptable at 0x00010744ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10744ff68; end: 1074502d7;  */

long * FUN_10744ff68(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar6;
  ulong extraout_x9_00;
  long *plVar7;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 3;
  func_0x00010786e5e4();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar14 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar7 - (long)plVar15 < 0;
      unaff_x25 = plVar7;
      if (plVar15 <= plVar7) {
        uVar6 = 0;
        if (plVar15 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar15);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107450028;
          plVar5 = (long *)plVar12[1];
          in_NG = (long)plVar5 - (long)plVar7 < 0;
          if (plVar5 != plVar7) break;
          plVar5 = plVar12 + 2;
          func_0x00010735c498(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) goto LAB_10745029c;
        }
        if (((ulong)plVar15 & uVar14) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar14);
        }
        else if (plVar15 <= plVar5) {
          uVar6 = 0;
          if (plVar15 != (long *)0x0) {
            uVar6 = (ulong)plVar5 / (ulong)plVar15;
          }
          plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar15);
        }
        in_NG = (long)plVar5 - (long)unaff_x25 < 0;
      } while (plVar5 == unaff_x25);
    }
  }
LAB_107450028:
  plVar5 = param_1 + 2;
  plVar12 = (long *)0x58;
  __Znwm();
  uStack_58 = 0;
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  plStack_68 = plVar12;
  plStack_60 = plVar5;
  func_0x000107269bac(plVar12 + 2,param_2);
  plVar12[10] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  func_0x000107451ca8(param_1[3]);
  if ((plVar15 != (long *)0x0) && (func_0x000107451c88(), !(bool)in_NG)) goto LAB_10745022c;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x000107451920((long)plVar15 << 1);
  plVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar13) {
LAB_1074500c8:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1074502c4);
      (*pcVar1)();
    }
    lVar4 = (long)plVar13 << 3;
    __Znwm(lVar4);
    FUN_1074513dc(param_1,lVar4);
    param_1[1] = (long)plVar13;
    lVar4 = *param_1;
    for (plVar15 = (long *)0x0; plVar13 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar5;
    plVar15 = plVar13;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar13 - 1;
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar13;
      }
      plVar10 = plVar9;
      if (plVar13 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar4 + (long)plVar10 * 8) = plVar5;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar13 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar13 <= plVar11) {
          uVar14 = 0;
          if (plVar13 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            func_0x000107451934();
            lVar4 = extraout_x8_00;
            uVar6 = extraout_x9_00;
            plVar8 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074518f8();
    }
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_1074500c8;
      FUN_1074513dc(param_1,0);
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar15 <= plVar7) {
      uVar14 = 0;
      if (plVar15 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
    }
  }
LAB_10745022c:
  lVar4 = *param_1;
  if (*(long *)(lVar4 + (long)unaff_x25 * 8) == 0) {
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar7) {
        uVar14 = 0;
        if (plVar15 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar15;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    func_0x000107451ba4();
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1074513f4(&plStack_68);
LAB_10745029c:
  return plVar12 + 10;
}



/* Entry: 1074502d8; end: 1074502e3;  */

undefined1  [16] FUN_1074502d8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x1e8);
}



/* Entry: 1074502e4; end: 107450313;  */

long FUN_1074502e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  FUN_107450314(lVar1 + 0x38,param_3);
  return param_1;
}



/* Entry: 107450314; end: 107450383;  */

void FUN_107450314(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 107450384; end: 1074503a7;  */

void FUN_107450384(void)

{
  func_0x000107451cfc();
  func_0x000107450f40();
  func_0x000107451b24();
  return;
}



/* Entry: 1074503a8; end: 1074503e3;  */

long * FUN_1074503a8(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1074503e4(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1074503e4; end: 107450453;  */

void FUN_1074503e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      FUN_107450384(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x60;
  }
  return;
}



/* Entry: 107450454; end: 107450473;  */

void FUN_107450454(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107450474; end: 1074504ab;  */

void FUN_107450474(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107451ac8();
  *puVar1 = &PTR_DAT_1109b1bf8;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_1[3];
  return;
}



/* Entry: 1074504ac; end: 1074504db;  */

void FUN_1074504ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109b1bf8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074504dc; end: 107450693;  */

undefined1 * FUN_1074504dc(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  char cStack_50;
  
  func_0x0001074519e4();
  func_0x0001074518e8();
  lVar7 = *(long *)(param_1 + 0x18);
  func_0x0001078696e8(auStack_a0);
  func_0x000107451c2c(*(undefined8 *)(*unaff_x19 + 0x30));
  func_0x00010726236c(&stack0xffffffffffffff78);
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    func_0x000107444e28(&uStack_b8,*(long *)(unaff_x20 + 8) + 0x18,&stack0xffffffffffffff78);
    param_2 = &uStack_b8;
    func_0x00010726c924(auStack_a0);
    func_0x00010726b264(&uStack_b8);
  }
  func_0x00010724b3d8(&stack0xffffffffffffff78);
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x0001000df524(&uStack_b8);
  plVar2 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107451c18(*(undefined8 *)(*plVar2 + 0x40));
  if (((ulong)param_2 & 1) != 0) {
    puVar3 = (undefined8 *)(lVar7 + 0x138);
    FUN_10744f560(puVar3,*(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x50));
    func_0x000107451c2c(*(undefined8 *)(*unaff_x19 + 0x30));
    param_2 = puVar3;
    func_0x000107451c3c();
    *(int *)puVar3 = (int)plVar2;
    *(int *)((long)puVar3 + 4) = (int)((ulong)plVar2 >> 0x20);
  }
  plVar2 = (long *)**(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107451c18(*(undefined8 *)(*plVar2 + 0x40));
  if (((ulong)param_2 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x20 + 8) + 0x50);
    param_2 = (undefined8 *)(lVar7 + 0x158);
    FUN_10744f560();
    func_0x000107451c2c(*(undefined8 *)(*unaff_x19 + 0x30));
    puVar4 = (undefined4 *)(lVar6 + 0x38);
    FUN_10744ff68();
    *puVar4 = (int)plVar2;
    puVar4[1] = (int)((ulong)plVar2 >> 0x20);
  }
  func_0x000107267e44(&stack0xffffffffffffff78);
  puVar5 = auStack_a0;
  func_0x00010726b264();
  func_0x00010745183c(extraout_x8);
  if ((bool)uVar1) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(&stack0xffffffffffffff78);
  puVar5 = auStack_a0;
  func_0x00010726b264(puVar5);
  func_0x000107451974();
  func_0x0001004a5364(param_2,&PTR_DAT_1109b1c68);
  puVar5 = puVar5 + 8;
  if ((int)param_2 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  return puVar5;
}



/* Entry: 107450694; end: 1074506cb;  */

long FUN_107450694(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b1c68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1074506cc; end: 1074506d7;  */

undefined ** FUN_1074506cc(void)

{
  return &PTR_DAT_1109b1c68;
}



/* Entry: 1074506d8; end: 107450793;  */

/* WARNING: Possible PIC construction at 0x000107450714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107450718) */
/* WARNING: Removing unreachable block (ram,0x000107450744) */

undefined1 *
FUN_1074506d8(undefined1 *param_1,undefined8 param_2,byte *param_3,byte *param_4,byte *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_70 [64];
  
  puVar3 = auStack_70;
  puVar6 = auStack_70;
  puVar1 = &stack0xfffffffffffffff0;
  pbVar5 = param_4;
  func_0x0001074518e8();
  if (*(int *)(pbVar5 + 0x70) == 0) {
    func_0x00010745183c(extraout_x8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000104c2f714(auStack_70);
      func_0x000107451974();
      if (*(int *)(param_3 + 0x30) != 0) {
        bVar2 = *pbVar5;
        pbVar5 = param_3;
        func_0x0001072804a4(param_3,puVar6,param_2);
        uVar4 = (uint)pbVar5;
        if (((uVar4 >> 8 & 1) == 0) && (uVar4 = (uint)bVar2, param_3[0x29] == 1)) {
          uVar4 = (uint)param_3[0x28];
        }
        return (undefined1 *)(ulong)(uVar4 & 1);
      }
      return (undefined1 *)(ulong)*param_3;
    }
    param_5 = param_4 + 8;
    puVar6 = param_1;
  }
  else {
    unaff_x30 = 0x107450718;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    puVar6 = puVar3;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8(puVar6,param_5);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(byte **)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107450794; end: 1074507bb;  */

uint FUN_107450794(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_3 + 0x30) != 0) {
    bVar1 = *param_4;
    pbVar3 = param_3;
    func_0x0001072804a4(param_3,param_1,param_2);
    uVar2 = (uint)pbVar3;
    if (((uVar2 >> 8 & 1) == 0) && (uVar2 = (uint)bVar1, param_3[0x29] == 1)) {
      uVar2 = (uint)param_3[0x28];
    }
    return uVar2 & 1;
  }
  return (uint)*param_3;
}



/* Entry: 1074507bc; end: 107450907;  */

void FUN_1074507bc(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x000107451ae0();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x0001074518f8();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107450908(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_107450908(param_1,lVar3);
    param_1[1] = (long)param_2;
    lVar3 = *param_1;
    for (plVar5 = (long *)0x0; param_2 != plVar5; plVar5 = (long *)((long)plVar5 + 1)) {
      *(undefined8 *)(lVar3 + (long)plVar5 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107451cc8();
      func_0x000107451cb4();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x000107451934();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_00;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107450908; end: 10745091f;  */

void FUN_107450908(long *param_1,long param_2)

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



/* Entry: 107450920; end: 107450977;  */

void FUN_107450920(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107451bb4();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x000107450958(unaff_x20 + 0x18);
    }
    func_0x000107451c5c();
  }
  return;
}



/* Entry: 107450978; end: 10745098f;  */

void FUN_107450978(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074509ac(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107450990; end: 1074509ab;  */

void FUN_107450990(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074509ac(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074509ac; end: 107450a67;  */

long FUN_1074509ac(long param_1)

{
  func_0x00010730b284(param_1 + 0x1a8);
  func_0x00010730b284(param_1 + 0x198);
  FUN_1073eb118(param_1 + 0x60);
  FUN_107374434(param_1 + 0x40);
  func_0x000107451b24();
  return param_1;
}



/* Entry: 107450a68; end: 107450a7f;  */

void FUN_107450a68(long *param_1)

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



/* Entry: 107450a80; end: 107450ba3;  */

undefined8 FUN_107450a80(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107450aa8(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107451d08(param_1);
  FUN_107450ba4();
  return unaff_x19;
}



/* Entry: 107450ba4; end: 107450bbb;  */

void FUN_107450ba4(long *param_1)

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



/* Entry: 107450bbc; end: 107450c47;  */

long FUN_107450bbc(long param_1)

{
  func_0x000107450be0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107450c48; end: 107450d93;  */

void FUN_107450c48(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x000107451ae0();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x0001074518f8();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107450d94(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_107450d94(param_1,lVar3);
    param_1[1] = (long)param_2;
    lVar3 = *param_1;
    for (plVar5 = (long *)0x0; param_2 != plVar5; plVar5 = (long *)((long)plVar5 + 1)) {
      *(undefined8 *)(lVar3 + (long)plVar5 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107451cc8();
      func_0x000107451cb4();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x000107451934();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_00;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107450d94; end: 107450dab;  */

void FUN_107450d94(long *param_1,long param_2)

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



/* Entry: 107450dac; end: 107450e7f;  */

void FUN_107450dac(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_107450e80();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      func_0x000107450ed8(lVar9 + (long)plVar3 * 0x60,lVar6);
    }
    lVar6 = lVar6 + 0x60;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107450e80; end: 107450fbb;  */

void FUN_107450e80(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 0x60);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0(param_1,0x60);
  return;
}



/* Entry: 107450fbc; end: 107450fd3;  */

void FUN_107450fbc(long *param_1)

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



/* Entry: 107450fd4; end: 107451117;  */

void FUN_107450fd4(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  uVar6 = param_3;
  func_0x000107451bdc();
  Hint_Prefetch(*param_2,0,2,0);
  func_0x000104c2fe38(*param_2);
  lVar9 = 0;
  uVar7 = *unaff_x20;
  uVar8 = unaff_x20[2];
  uVar4 = uVar7 >> 0xc ^ uVar6 >> 7;
  bVar1 = (byte)uVar6;
  uVar11 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar4);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar18 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar6 != 0;
        uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar8);
      uVar2 = unaff_x20[1] + (long)puVar5 * 0x60;
      func_0x000104c32db4(uVar2,param_3);
      if ((uVar2 & 1) != 0) {
        uVar3 = 0;
        goto LAB_1074510a4;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar9 = lVar9 + 8;
    uVar4 = lVar9 + uVar4;
  }
  puVar5 = unaff_x20;
  FUN_107451118();
  lVar9 = unaff_x20[1] + (long)puVar5 * 0x60;
  func_0x000104c318bc(lVar9,param_3);
  FUN_107450314(lVar9 + 0x38,param_3 + 0x38);
  uVar3 = 1;
LAB_1074510a4:
  uVar4 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)puVar5;
  unaff_x19[1] = uVar4 + (long)puVar5 * 0x60;
  *(undefined1 *)(unaff_x19 + 2) = uVar3;
  return;
}



/* Entry: 107451118; end: 10745120f;  */

long * FUN_107451118(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x20;
  
  func_0x000107451bdc();
  func_0x0001074518e8();
  func_0x000100061de0();
  lVar3 = *unaff_x19;
  if ((*(long *)(lVar3 + -8) == 0) && (*(char *)(lVar3 + (long)param_1) != -2)) {
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_107450dac();
    }
    else {
      func_0x00010ae6c914();
    }
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    func_0x000100061de0();
    lVar3 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar2 = *(char *)(lVar3 + (long)param_1) == -0x80;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) - (ulong)bVar2;
  bVar1 = (byte)unaff_x20 & 0x7f;
  uVar4 = unaff_x19[2];
  *(byte *)(lVar3 + (long)param_1) = bVar1;
  *(byte *)(lVar3 + (uVar4 & (long)param_1 - 7U) + (uVar4 & 7)) = bVar1;
  func_0x00010745183c(extraout_x8);
  if (bVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar5 = (long *)param_2[6];
  if (plVar5 == (long *)0xffffffffffffffff) {
    plVar5 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(plVar5,(long)plVar5 + (long)param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar5;
}



/* Entry: 107451210; end: 107451223;  */

long FUN_107451210(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107451224; end: 10745129b;  */

long * FUN_107451224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x0001074519e4();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_10745128c;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_10745128c;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_10745128c:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 10745129c; end: 1074512f3;  */

long * FUN_10745129c(long param_1,long *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  
  param_1 = param_1 + param_4 * 8;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x80);
    if (uVar1 < (ulong)(param_2[1] - *param_2)) {
                    /* WARNING: Could not recover jumptable at 0x000107451a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3,*param_2 + uVar1);
      return param_3;
    }
  }
  return (long *)0x0;
}



/* Entry: 1074512f4; end: 1074513db;  */

long FUN_1074512f4(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x000107451bdc();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar11 * 0x60;
      func_0x000104c32db4();
      if (iVar4 != 0) {
        return *unaff_x19 + uVar11;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 1074513dc; end: 1074513f3;  */

void FUN_1074513dc(long *param_1,long param_2)

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



/* Entry: 1074513f4; end: 10745142b;  */

void FUN_1074513f4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107451bb4();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x000104c319e0(unaff_x20 + 0x10);
    }
    func_0x000107451c5c();
  }
  return;
}



/* Entry: 10745142c; end: 1074514ff;  */

long FUN_10745142c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010786e5e4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x00010735c498(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 107451500; end: 10745153f;  */

void FUN_107451500(ulong *param_1,double *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = -0x61c8864680b583eb;
  if (*param_2 != 0.0) {
    lVar1 = (long)*param_2 + -0x61c8864680b583eb;
  }
  uVar2 = *param_1;
  *param_1 = (uVar2 >> 4) + uVar2 * 0x1000 + lVar1 ^ uVar2;
  return;
}



/* Entry: 107451540; end: 107451607;  */

void FUN_107451540(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x000107451bdc();
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
    uVar6 = unaff_x20[1];
    uVar5 = *unaff_x20;
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(unaff_x20 + 2);
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    lVar4 = (long)puVar3 + 0x14;
  }
  else {
    plVar2 = unaff_x19;
    FUN_107451608();
    FUN_1074516ec(auStack_58,plVar2,(unaff_x19[1] - *unaff_x19) / 0x14,(ulong *)(param_1 + 0x10));
    uVar1 = *(undefined4 *)(unaff_x20 + 2);
    uVar5 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar5;
    *(undefined4 *)(puStack_48 + 2) = uVar1;
    puStack_48 = (undefined8 *)((long)puStack_48 + 0x14);
    FUN_107451658();
    lVar4 = unaff_x19[1];
    FUN_107451754(auStack_58);
  }
  unaff_x19[1] = lVar4;
  return;
}



/* Entry: 107451608; end: 107451657;  */

ulong FUN_107451608(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 < 0xccccccccccccccd) {
    uVar3 = (param_1[2] - *param_1) / 0x14;
    uVar2 = uVar3 * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x666666666666665 < uVar3) {
      uVar2 = 0xccccccccccccccc;
    }
    return uVar2;
  }
  FUN_1074516d8();
  func_0x0001074519e4();
  uVar3 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x14) * 0x14;
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
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
  return uVar2;
}



/* Entry: 107451658; end: 1074516d7;  */

void FUN_107451658(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001074519e4();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x14) * 0x14;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
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



/* Entry: 1074516d8; end: 1074516eb;  */

long * FUN_1074516d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107451bdc();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0xccccccccccccccc < unaff_x20) {
      func_0x000104bd35f4();
      lVar2 = plVar1[2];
      while (lVar2 != plVar1[1]) {
        lVar2 = lVar2 + -0x14;
        plVar1[2] = lVar2;
      }
      if (*plVar1 != 0) {
        __ZdlPv();
      }
      return plVar1;
    }
    lVar2 = unaff_x20 * 0x14;
    __Znwm();
  }
  lVar3 = lVar2 + param_3 * 0x14;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar3;
  unaff_x19[2] = lVar3;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x14;
  return unaff_x19;
}



/* Entry: 1074516ec; end: 107451753;  */

long * FUN_1074516ec(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107451bdc();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xccccccccccccccc < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x14;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x14;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x14;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x14;
  return unaff_x19;
}



/* Entry: 107451754; end: 107451793;  */

long * FUN_107451754(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x14;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107451794; end: 10745179b;  */

void FUN_107451794(void)

{
  return;
}



/* Entry: 10745179c; end: 1074517cb;  */

void FUN_10745179c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109b1ca8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074517cc; end: 1074517f7;  */

void FUN_1074517cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b1ca8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074517f8; end: 10745182f;  */

long FUN_1074517f8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b1d08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107451830; end: 107451e73;  */

undefined ** FUN_107451830(void)

{
  return &PTR_DAT_1109b1d08;
}



/* Entry: 107451e74; end: 10745204f;  */

void FUN_107451e74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_50;
  long lStack_48;
  
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) &&
     (*(long *)(param_1 + 0xd0) != *(long *)(param_1 + 0xd8))) {
    func_0x0001074529b4(param_2);
    func_0x00010745296c(*(undefined8 *)(param_1 + 0xa0));
    lVar2 = *(long *)(param_1 + 0x98);
    lVar1 = *(long *)(param_1 + 0xa0);
    func_0x00010745299c(&lStack_48);
    uStack_70 = 1;
    uStack_68 = 0x10;
    uStack_60 = 1;
    lStack_50 = lStack_48;
    lStack_78 = lVar1 - lVar2 >> 4;
    func_0x000107309708(param_1 + 0xe8,&lStack_78);
    lVar2 = lStack_50;
    lStack_50 = 0;
    if (lVar2 != 0) {
      func_0x000107452908();
    }
    func_0x000107452958(&lStack_78);
    lVar2 = param_1 + 0x120;
    func_0x0001074529c0();
    func_0x000107452a0c();
    if (lVar2 != 0) {
      func_0x000107452908();
    }
    func_0x000107452958(&lStack_78);
    lVar2 = param_1 + 0x178;
    func_0x0001074529c0();
    func_0x000107452a0c();
    if (lVar2 != 0) {
      func_0x000107452908();
    }
    if (*(long *)(param_1 + 0x198) != *(long *)(param_1 + 0x1a0)) {
      func_0x0001074529b4(param_2);
      func_0x00010745296c(*(undefined8 *)(param_1 + 0x1a0));
      lVar2 = *(long *)(param_1 + 0x198);
      lVar1 = *(long *)(param_1 + 0x1a0);
      func_0x00010745299c(&lStack_50);
      uStack_70 = 1;
      uStack_68 = 4;
      uStack_60 = 1;
      lStack_78 = lVar1 - lVar2 >> 2;
      func_0x000107309708(param_1 + 0x1e8,&lStack_78);
      lVar2 = lStack_50;
      lStack_50 = 0;
      if (lVar2 != 0) {
        func_0x000107452908();
      }
    }
    if (*(long *)(param_1 + 0x1b8) != *(long *)(param_1 + 0x1c0)) {
      func_0x000107452958(&lStack_78);
      lVar2 = param_1 + 0x220;
      func_0x0001074529c0();
      func_0x000107452a0c();
      if (lVar2 != 0) {
        func_0x000107452908();
      }
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  *(byte *)(param_1 + 0x1c) = 1;
  return;
}



/* Entry: 107452050; end: 10745207f;  */

bool FUN_107452050(long param_1)

{
  if ((*(long *)(param_1 + 0xd0) == *(long *)(param_1 + 0xd8)) &&
     (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x70))) {
    return *(long *)(param_1 + 0x80) != *(long *)(param_1 + 0x88);
  }
  return true;
}


