/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083773e8; end: 10837742b;  */

void FUN_1083773e8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_20 = *(undefined8 *)(*param_1 + 0x28);
  FUN_10837742c(param_1,0,&uStack_14,&uStack_20,param_3,param_4,param_2);
  return;
}



/* Entry: 10837742c; end: 1083777d3;  */

undefined4
FUN_10837742c(long *param_1,uint param_2,uint *param_3,undefined8 *param_4,undefined1 *param_5,
             uint *param_6,long param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte bStack_69;
  undefined4 uStack_68;
  undefined1 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  pfVar8 = (float *)0x0;
  uVar18 = 0;
  uVar20 = 0;
  bVar7 = false;
  pfVar13 = (float *)0x0;
  iVar17 = 0;
  uStack_64 = 0xff;
  uStack_68 = 0xffffffff;
  lVar12 = *param_1;
  iVar3 = *(int *)(lVar12 + 0x48);
  uVar15 = *param_3;
  fVar24 = 0.0;
  uVar19 = 0xff;
  fVar26 = 0.0;
  pfVar11 = (float *)*param_4;
  pfVar14 = (float *)0x0;
  while (((int)uVar15 < iVar3 && ((param_2 & uVar20) == 0))) {
    pfVar10 = pfVar14;
    pfVar9 = pfVar11;
    pfVar4 = pfVar11;
    if (bVar7) {
      bVar7 = false;
      uVar21 = 1;
      goto code_r0x0001083774d0;
    }
    if (((int)uVar15 < 0) || (*(int *)(lVar12 + 0x48) <= (int)uVar15)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1083777d4);
      (*pcVar5)();
    }
    bVar7 = false;
    uVar21 = 1;
    switch(*(undefined1 *)(*(long *)(lVar12 + 0x40) + (ulong)uVar15)) {
    case 0:
      if (((param_2 == 0) || (uVar20 == 1)) || (uVar19 >> 7 != 0)) {
        pfVar10 = pfVar11;
        if (((iVar17 != 0) && (pfVar10 = pfVar14, *pfVar14 - *pfVar13 != 0.0)) &&
           (pfVar14[1] - pfVar13[1] != 0.0)) {
          return 0;
        }
        bVar7 = false;
        pfVar9 = pfVar11 + 2;
        fVar24 = *pfVar11;
        fVar26 = pfVar11[1];
        iVar22 = 1;
        uVar18 = 1;
      }
      else {
        bVar7 = true;
        iVar22 = -1;
      }
      break;
    case 1:
      pfVar9 = pfVar11 + 2;
      bVar7 = true;
      pfVar13 = pfVar11;
      pfVar4 = pfVar8;
      pfVar14 = pfVar11;
      uVar21 = uVar20;
    case 5:
code_r0x0001083774d0:
      pfVar8 = pfVar4;
      fVar1 = *pfVar14;
      fVar2 = pfVar14[1];
      fVar27 = fVar1 - fVar24;
      if ((fVar27 != 0.0) && (fVar2 - fVar26 != 0.0)) {
        return 0;
      }
      if (NAN((fVar27 - fVar27) * (fVar2 - fVar26))) {
        return 0;
      }
      bVar6 = false;
      if ((fVar24 == fVar1) && (bVar6 = false, !NAN(fVar26) && !NAN(fVar2))) {
        bVar6 = fVar26 == fVar2;
      }
      fVar23 = fVar24;
      fVar25 = fVar26;
      if (!bVar6) {
        uVar16 = 2;
        if (fVar27 <= 0.0) {
          uVar16 = 0;
        }
        if (fVar27 != 0.0) {
          uVar16 = uVar16 + 1;
        }
        if (iVar17 == 0) {
          uVar18 = 0;
          bVar7 = false;
          uStack_68 = CONCAT31(uStack_68._1_3_,(char)uVar16);
          iVar22 = 1;
          iVar17 = 1;
          fVar24 = fVar1;
          fVar26 = fVar2;
          uVar20 = uVar21;
          uVar19 = uVar16;
          break;
        }
        if (uVar18 != 0) {
          return 0;
        }
        if ((uVar21 & uVar16 == (int)(char)uVar19) == 0) {
          fVar23 = fVar1;
          fVar25 = fVar2;
          uVar18 = uVar21;
          if (uVar16 == (&bStack_69)[iVar17]) {
            bVar7 = (bool)(bVar7 ^ 1);
            if (iVar17 != 3) {
              bVar7 = true;
            }
            if (!bVar7) {
LAB_1083776b8:
              iVar17 = 3;
              fStack_60 = fVar1;
              fStack_5c = fVar2;
            }
          }
          else {
            *(char *)((long)&uStack_68 + (long)iVar17) = (char)uVar16;
            if (iVar17 == 3) {
              if ((uStack_68._3_1_ ^ uStack_68._1_1_) != 2) {
                return 0;
              }
              iVar17 = 4;
            }
            else {
              if (iVar17 == 2) {
                if ((uStack_68 >> 0x10 & 0xff ^ uVar19) != 2) {
                  return 0;
                }
                goto LAB_1083776b8;
              }
              if (iVar17 != 1) {
                return 0;
              }
              iVar17 = 2;
              fStack_58 = fVar24;
              fStack_54 = fVar26;
            }
          }
        }
        else {
          uVar21 = 1;
          uVar18 = 0;
        }
      }
      iVar22 = 1;
      bVar7 = false;
      fVar24 = fVar23;
      fVar26 = fVar25;
      uVar20 = uVar21;
      break;
    case 2:
    case 3:
    case 4:
      goto LAB_108377770;
    default:
      iVar22 = 1;
    }
    uVar15 = iVar22 + uVar15;
    *param_3 = uVar15;
    pfVar11 = pfVar9;
    pfVar14 = pfVar10;
  }
  if (0xfffffffd < iVar17 - 5U) {
    if (pfVar8 != (float *)0x0) {
      *param_4 = pfVar8;
    }
    if ((*pfVar14 - *pfVar13 == 0.0) || (pfVar14[1] - pfVar13[1] == 0.0)) {
      if (param_7 != 0) {
        FUN_10833f168(param_7,&fStack_58,&fStack_60);
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = (char)uVar20;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = (uint)(((uStack_68 >> 8 & 0xff) + 1 & 3) != uVar19);
      }
      return 1;
    }
  }
LAB_108377770:
  return 0;
}



/* Entry: 1083777d4; end: 1083777eb;  */

void FUN_1083777d4(int param_1,undefined8 param_2)

{
  uint *unaff_x19;
  undefined1 uStack_21;
  
  func_0x0001082d8814(param_1,param_2,0,0);
  FUN_1082d86c0();
  if ((unaff_x19 != (uint *)0x0) && (param_1 != 0)) {
    *unaff_x19 = (uint)uStack_21;
  }
  return;
}



/* Entry: 1083777ec; end: 108377827;  */

uint FUN_1083777ec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010837cce4();
  uVar2 = *(uint *)(extraout_x8 + 0x30);
  uVar1 = uVar2;
  if ((int)param_3 <= (int)uVar2) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    func_0x00010837cc1c(*(undefined8 *)(extraout_x8 + 0x28),uVar2,param_2,
                        -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    uVar2 = *(uint *)(*unaff_x19 + 0x30);
  }
  return uVar2;
}



/* Entry: 108377828; end: 10837785f;  */

undefined4 FUN_108377828(long *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(*param_1 + 0x30);
  uVar3 = 0;
  if (param_2 < uVar1) {
    if (((int)param_2 < 0) || ((int)uVar1 <= (int)param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108377860);
      (*pcVar2)();
    }
    uVar3 = *(undefined4 *)(*(long *)(*param_1 + 0x28) + (ulong)param_2 * 8);
  }
  return uVar3;
}



/* Entry: 108377860; end: 10837789b;  */

int FUN_108377860(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010837cce4();
  iVar2 = *(int *)(extraout_x8 + 0x48);
  iVar1 = iVar2;
  if (param_3 <= iVar2) {
    iVar1 = param_3;
  }
  if (iVar1 != 0) {
    func_0x00010837cc1c(*(undefined8 *)(extraout_x8 + 0x40),iVar2,param_2,(long)iVar1);
    iVar2 = *(int *)(*unaff_x19 + 0x48);
  }
  return iVar2;
}



/* Entry: 10837789c; end: 1083778c3;  */

long FUN_10837789c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_10837e0e8();
    return lVar1 + 0x10;
  }
  return 0x10;
}



/* Entry: 1083778c4; end: 108377977;  */

long * FUN_1083778c4(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  long lStack_38;
  
  func_0x00010837cf24();
  iVar2 = *(int *)(*param_1 + 0x30);
  if (iVar2 != 0) {
    plVar3 = &lStack_38;
    func_0x00010837cac4(plVar3);
    *(undefined1 *)(lStack_38 + 0xc0) = 0;
    lVar1 = *(long *)(lStack_38 + 0x28) + (long)iVar2 * 8;
    *(undefined4 *)(lVar1 + -8) = unaff_s9;
    *(undefined4 *)(lVar1 + -4) = unaff_s8;
    return plVar3;
  }
  func_0x00010837cc84(param_1);
  func_0x00010837cf24();
  plVar3 = &lStack_38;
  func_0x00010837ca9c();
  func_0x00010837cd20();
  func_0x00010837cee4();
  func_0x00010837cd94();
  *(undefined4 *)plVar3 = unaff_s9;
  *(undefined4 *)((long)plVar3 + 4) = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 108377978; end: 108377c4f;  */

bool FUN_108377978(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  char *pcVar6;
  byte **ppbVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  byte *pbVar23;
  float fVar24;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined1 uStack_54;
  int iVar17;
  
  plVar5 = param_1;
  func_0x000108377398();
  if (((ulong)plVar5 & 1) == 0) {
LAB_108377c2c:
    bVar13 = true;
LAB_108377c30:
    *(bool *)((long)param_1 + 0xc) = bVar13;
  }
  else {
    lVar14 = *param_1;
    iVar15 = *(int *)(lVar14 + 0x30);
    pcVar12 = *(char **)(lVar14 + 0x40);
    iVar10 = *(int *)(lVar14 + 0x48);
    pcVar6 = pcVar12;
    FUN_10837a418(pcVar12,iVar10);
    uVar9 = (int)pcVar6 - 1;
    uVar2 = *(uint *)(param_1 + 1);
    if (-1 < (int)uVar2) {
      if (uVar2 == iVar15 - 1U) {
        pcVar11 = pcVar12 + iVar10;
        while ((pcVar11 = pcVar11 + -1, pcVar12 < pcVar11 && (*pcVar11 == '\0'))) {
          iVar15 = iVar15 + -1;
        }
      }
      else if (uVar2 != uVar9) goto LAB_108377c2c;
    }
    if ((int)pcVar6 < 2) {
      uVar9 = 0;
    }
    if (3 < (int)(iVar15 - uVar9)) {
      puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x28) + (ulong)uVar9 * 8);
      ppbVar7 = (byte **)(puVar1 + 1);
      pbStack_80 = (byte *)*puVar1;
      uVar16 = 0;
      uVar19 = 0x200000002;
      for (iVar10 = 0; uVar20 = uVar19, pbVar23 = pbStack_80, iVar10 != 2; iVar10 = iVar10 + 1) {
        do {
          uVar19 = uVar20;
          pbStack_80 = pbVar23;
          if (ppbVar7 == (byte **)(puVar1 + (iVar15 - uVar9))) break;
          pbStack_80 = *ppbVar7;
          fVar22 = SUB84(pbStack_80,0) - SUB84(pbVar23,0);
          fVar24 = (float)((ulong)pbStack_80 >> 0x20) - (float)((ulong)pbVar23 >> 0x20);
          if ((fVar22 != 0.0) || (fVar24 != 0.0)) {
            uVar19 = CONCAT44(-(uint)(fVar24 < 0.0),-(uint)(fVar22 < 0.0)) & 0x100000001;
            iVar18 = -(uint)((int)uVar20 == (int)uVar19);
            iVar21 = -(uint)((int)(uVar20 >> 0x20) == (int)(uVar19 >> 0x20));
            iVar17 = CONCAT13(~(byte)((uint)iVar18 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar18 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18)));
            iVar18 = (int)uVar16 - iVar17;
            iVar17 = (int)((ulong)uVar16 >> 0x20) -
                     (int)(CONCAT17(~(byte)((uint)iVar21 >> 0x18),
                                    CONCAT16(~(byte)((uint)iVar21 >> 0x10),
                                             CONCAT15(~(byte)((uint)iVar21 >> 8),
                                                      CONCAT14(~(byte)iVar21,iVar17)))) >> 0x20);
            uVar16 = CONCAT44(iVar17,iVar18);
            if ((NAN(fVar24 * (fVar22 - fVar22)) || 3 < iVar18) || 3 < iVar17) goto LAB_108377c2c;
          }
          ppbVar7 = ppbVar7 + 1;
          uVar20 = uVar19;
          pbVar23 = pbStack_80;
        } while (iVar10 == 0);
        ppbVar7 = &pbStack_80;
      }
    }
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_68 = 0;
    pbStack_70 = (byte *)0x0;
    uStack_60 = 0x200000005;
    iStack_58 = 0;
    uStack_54 = 1;
    ppbVar7 = &pbStack_a0;
    FUN_1081e8e40(ppbVar7,param_1);
    iVar15 = 0;
    bVar13 = false;
    pbStack_b8 = pbStack_a0;
    uStack_a8 = uStack_88;
    lStack_b0 = lStack_90;
    while (pbStack_b8 != pbStack_98) {
      bVar3 = *pbStack_b8;
      if (5 < bVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108377c50);
        (*pcVar4)();
      }
      if (iVar15 == 1) {
LAB_108377a9c:
        uVar9 = (uint)bVar3;
        if (uVar9 == 5 || uVar9 == 0) {
          uVar19 = 0;
          FUN_10837a448();
          if ((uVar19 & 1) == 0) goto LAB_108377c2c;
          bVar13 = false;
          iVar15 = 2;
        }
        else {
          lVar14 = (ulong)(byte)(&UNK_10df1dedb)[uVar9] + 1;
          lVar8 = lStack_b0 + *(long *)(&UNK_10df1dee8 + (ulong)(uint)bVar3 * 8) * 8;
          while( true ) {
            lVar8 = lVar8 + 8;
            lVar14 = lVar14 + -1;
            if (lVar14 == 0) break;
            ppbVar7 = &pbStack_80;
            func_0x00010837a480(ppbVar7,lVar8);
            if (((ulong)ppbVar7 & 1) == 0) goto LAB_108377c2c;
          }
          iVar15 = 1;
        }
      }
      else if (iVar15 == 0) {
        if (bVar3 != 0) {
          bVar13 = true;
          goto LAB_108377a9c;
        }
        iVar15 = 0;
        pbStack_80 = *(byte **)(lStack_b0 + *(long *)(&UNK_10df1dee8 + (ulong)(uint)bVar3 * 8) * 8);
        uStack_60 = CONCAT44(uStack_60._4_4_,5);
        pbStack_70 = pbStack_80;
      }
      else if (bVar3 != 0) goto LAB_108377c2c;
      ppbVar7 = &pbStack_b8;
      func_0x0001081e8ec8();
    }
    if (bVar13) {
      ppbVar7 = &pbStack_80;
      FUN_10837a448();
      if (((ulong)ppbVar7 & 1) == 0) goto LAB_108377c2c;
    }
    uVar16 = uStack_60;
    if (*(char *)((long)param_1 + 0xd) == '\x02') {
      if (((uStack_60._4_4_ == 2) &&
          (func_0x00010837ce48(), *(float *)ppbVar7 < *(float *)(ppbVar7 + 1))) &&
         (*(float *)((long)ppbVar7 + 4) < *(float *)((long)ppbVar7 + 0xc))) {
        bVar13 = 2 < iStack_58;
        goto LAB_108377c30;
      }
      *(char *)((long)param_1 + 0xd) = (char)((ulong)uVar16 >> 0x20);
    }
    bVar13 = false;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return bVar13;
}



/* Entry: 108377c50; end: 108377c8b;  */

void FUN_108377c50(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  if (0 < (int)param_2) {
    iVar1 = (int)param_2;
    if (param_3 != 0) {
      iVar1 = param_3;
    }
    FUN_10837ded0(auStack_18,param_1,iVar1,param_2,param_4);
  }
  return;
}



/* Entry: 108377c8c; end: 108377cd3;  */

undefined8 FUN_108377c8c(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  func_0x00010837cf24();
  FUN_108377cd4();
  puVar1 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cee4();
  FUN_10837e8b4();
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 108377cd4; end: 108377d1b;  */

long * FUN_108377cd4(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  if (-1 < (int)*(uint *)(param_1 + 1)) {
    return param_1;
  }
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x48) == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar1 = ~*(uint *)(param_1 + 1);
    if (*(int *)(lVar4 + 0x30) <= (int)uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108377d1c);
      (*pcVar2)();
    }
    puVar3 = (undefined4 *)(*(long *)(lVar4 + 0x28) + (ulong)uVar1 * 8);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
  }
  func_0x00010837cf24(uVar5,uVar6);
  puVar3 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cd20();
  func_0x00010837cee4();
  func_0x00010837cd94();
  *puVar3 = unaff_s9;
  puVar3[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 108377d1c; end: 108377d93;  */

long FUN_108377d1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 *puStack_48;
  
  FUN_108377cd4();
  FUN_10837ca9c(&puStack_48);
  FUN_10837e8b4(0,puStack_48,2);
  *puStack_48 = param_1;
  puStack_48[1] = param_2;
  puStack_48[2] = param_3;
  puStack_48[3] = param_4;
  *(undefined1 *)(param_5 + 0xc) = 2;
  *(undefined1 *)(param_5 + 0xd) = 2;
  return param_5;
}



/* Entry: 108377d94; end: 108377ec7;  */

undefined8
FUN_108377d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  undefined4 *puStack_58;
  
  fVar1 = (float)param_5;
  if (0.0 < fVar1) {
    if (!NAN(fVar1 - fVar1)) {
      if (fVar1 == 1.0) {
        FUN_108377d1c(param_1,param_2,param_3,param_4);
        return param_6;
      }
      FUN_108377cd4(param_6);
      FUN_10837ca9c(&puStack_58);
      FUN_10837e8b4(param_5,puStack_58,3);
      *puStack_58 = (int)param_1;
      puStack_58[1] = (int)param_2;
      puStack_58[2] = (int)param_3;
      puStack_58[3] = (int)param_4;
      func_0x00010837cb1c();
      return param_6;
    }
    FUN_108377c8c(param_1,param_2,param_6);
  }
  func_0x00010837cc84();
  FUN_108377c8c();
  return param_6;
}



/* Entry: 108377ec8; end: 108377f1f;  */

void FUN_108377ec8(void)

{
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x00010837cce4();
  if ((0 < (int)*(uint *)(extraout_x8 + 0x48)) &&
     (*(byte *)(*(long *)(extraout_x8 + 0x40) + (ulong)*(uint *)(extraout_x8 + 0x48) + -1) < 5)) {
    func_0x00010837ca9c(auStack_28);
    func_0x00010837cee4();
    FUN_10837e8b4();
  }
  func_0x00010837cf6c();
  return;
}



/* Entry: 108377f20; end: 10837805f;  */

long * FUN_108377f20(long *param_1,undefined8 param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  iVar3 = param_3;
  if (*(char *)(*param_1 + 0xc3) != '\0') {
    iVar3 = 2;
  }
  *(undefined1 *)((long)param_1 + 0xd) = (char)iVar3;
  uVar2 = *(undefined1 *)((long)param_1 + 0xd);
  FUN_10837bf90(auStack_60,param_1,param_2);
  FUN_10837ded0(&uStack_68,param_1,5,4,0);
  iVar3 = 3;
  if (param_3 == 0) {
    iVar3 = 1;
  }
  func_0x00010837cd20();
  func_0x00010837cd94(0,uStack_68);
  func_0x00010837cf18(param_4 & 3);
  func_0x00010837cb94();
  func_0x00010837cf18(iVar3 + param_4 & 3);
  func_0x00010837cb94();
  uVar1 = iVar3 + param_4 + iVar3;
  func_0x00010837cf18(uVar1 & 3);
  func_0x00010837cb94();
  func_0x00010837cf18(uVar1 + iVar3 & 3);
  func_0x00010837cc30();
  func_0x00010837cb1c();
  FUN_10837c078(auStack_60);
  *(undefined1 *)((long)param_1 + 0xd) = uVar2;
  return param_1;
}



/* Entry: 108378060; end: 108378123;  */

undefined8 FUN_108378060(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puStack_48;
  
  if (0 < (int)param_3) {
    uVar2 = param_3;
    iVar3 = param_4;
    func_0x00010837cd20();
    FUN_10837ded0(&puStack_48,param_1,(int)uVar2 + iVar3,param_3,0);
    puVar1 = puStack_48;
    func_0x00010837cd94(0);
    *puVar1 = *param_2;
    iVar3 = (int)param_3 + -1;
    if (iVar3 != 0) {
      FUN_10837e7c8(puStack_48,1,iVar3,0);
      _memcpy();
    }
    if (param_4 != 0) {
      FUN_10837e8b4(0,puStack_48,5);
      func_0x00010837cf6c();
    }
    func_0x00010837cb1c();
  }
  return param_1;
}



/* Entry: 108378124; end: 10837816b;  */

void FUN_108378124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_108384f00(&uStack_60);
  FUN_10837816c(param_1,&uStack_60,param_4);
  return;
}



/* Entry: 10837816c; end: 10837817b;  */

long * FUN_10837816c(long *param_1,float *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  int iStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [40];
  
  uVar5 = 6;
  if (param_3 != 0) {
    uVar5 = 7;
  }
  if ((uint)param_2[0xc] < 2) {
    func_0x00010837cf80();
    FUN_108377f20();
  }
  else if (param_2[0xc] == 2.8026e-45) {
    func_0x00010837cf80();
    FUN_108378418();
  }
  else {
    cVar2 = *(char *)(*param_1 + 0xc3);
    iVar6 = param_3;
    if (cVar2 != '\0') {
      iVar6 = 2;
    }
    *(char *)((long)param_1 + 0xd) = (char)iVar6;
    func_0x00010837cde8(auStack_98);
    uVar1 = param_3 == 0 ^ uVar5;
    bVar4 = (uVar1 & 1) != 0;
    uVar7 = 9;
    if (bVar4) {
      uVar7 = 10;
    }
    uVar8 = 0xc;
    if (bVar4) {
      uVar8 = 0xd;
    }
    FUN_108377c50(param_1,uVar8,uVar7,4);
    bVar4 = param_3 == 0;
    uStack_9c = 7;
    if (bVar4) {
      uStack_9c = 1;
    }
    fStack_108 = *param_2;
    fStack_104 = param_2[1];
    uStack_f8 = *(undefined8 *)(param_2 + 2);
    fStack_100 = (float)uStack_f8;
    fStack_d8 = fStack_100 - param_2[6];
    fStack_ec = (float)((ulong)uStack_f8 >> 0x20);
    uStack_c4 = NEON_rev64(CONCAT44(fStack_ec - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20)
                                    ,fStack_100 - (float)*(undefined8 *)(param_2 + 8)),4);
    fStack_ac = fStack_ec - param_2[0xb];
    fStack_e0 = fStack_108 + param_2[4];
    fStack_cc = fStack_104 + param_2[7];
    fStack_b8 = fStack_108 + param_2[10];
    fStack_a4 = fStack_104 + param_2[5];
    uVar3 = uVar5 >> 1;
    if (!bVar4) {
      uVar3 = uVar3 + 1;
    }
    iVar6 = 3;
    if (bVar4) {
      iVar6 = 1;
    }
    fStack_fc = fStack_104;
    fStack_f0 = fStack_108;
    uStack_e8 = uVar3 & 3;
    iStack_e4 = iVar6;
    fStack_dc = fStack_104;
    fStack_d4 = fStack_104;
    fStack_d0 = fStack_100;
    fStack_c8 = fStack_100;
    fStack_bc = fStack_ec;
    fStack_b4 = fStack_ec;
    fStack_b0 = fStack_108;
    fStack_a8 = fStack_108;
    uStack_a0 = uVar5;
    func_0x00010837ccdc();
    if ((uVar1 & 1) == 0) {
      iVar9 = 3;
      uStack_e8 = uVar3 & 3;
      while( true ) {
        uStack_e8 = iVar6 + uStack_e8 & 3;
        func_0x00010837cb5c();
        if (iVar9 == 0) break;
        func_0x00010837cba4();
        func_0x00010837cb5c();
        func_0x00010837cc60();
        iVar9 = iVar9 + -1;
        iVar6 = iStack_e4;
      }
      func_0x00010837cba4();
    }
    else {
      iVar6 = 4;
      do {
        func_0x00010837cb5c();
        func_0x00010837cc60();
        uStack_e8 = iStack_e4 + uStack_e8 & 3;
        func_0x00010837cb5c();
        func_0x00010837cba4();
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    func_0x00010837cc30();
    if (cVar2 == '\0') {
      func_0x00010837ca9c(&lStack_110);
      *(undefined1 *)(lStack_110 + 0xc0) = 2;
      *(bool *)(lStack_110 + 0xc6) = param_3 == 1;
      *(char *)(lStack_110 + 0xc2) = (char)uVar5;
    }
    func_0x00010837cdf4();
  }
  return param_1;
}



/* Entry: 10837817c; end: 108378417;  */

long * FUN_10837817c(long *param_1,float *param_2,int param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  int iStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [40];
  
  if ((uint)param_2[0xc] < 2) {
    func_0x00010837cf80();
    FUN_108377f20();
  }
  else if (param_2[0xc] == 2.8026e-45) {
    func_0x00010837cf80();
    FUN_108378418();
  }
  else {
    cVar2 = *(char *)(*param_1 + 0xc3);
    iVar5 = param_3;
    if (cVar2 != '\0') {
      iVar5 = 2;
    }
    *(char *)((long)param_1 + 0xd) = (char)iVar5;
    func_0x00010837cde8(auStack_98);
    uVar1 = param_3 == 0 ^ param_4;
    bVar4 = (uVar1 & 1) != 0;
    uVar6 = 9;
    if (bVar4) {
      uVar6 = 10;
    }
    uVar7 = 0xc;
    if (bVar4) {
      uVar7 = 0xd;
    }
    FUN_108377c50(param_1,uVar7,uVar6,4);
    uStack_a0 = param_4 & 7;
    bVar4 = param_3 == 0;
    uStack_9c = 7;
    if (bVar4) {
      uStack_9c = 1;
    }
    fStack_108 = *param_2;
    fStack_104 = param_2[1];
    uStack_f8 = *(undefined8 *)(param_2 + 2);
    fStack_100 = (float)uStack_f8;
    fStack_d8 = fStack_100 - param_2[6];
    fStack_ec = (float)((ulong)uStack_f8 >> 0x20);
    uStack_c4 = NEON_rev64(CONCAT44(fStack_ec - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20)
                                    ,fStack_100 - (float)*(undefined8 *)(param_2 + 8)),4);
    fStack_ac = fStack_ec - param_2[0xb];
    fStack_e0 = fStack_108 + param_2[4];
    fStack_cc = fStack_104 + param_2[7];
    fStack_b8 = fStack_108 + param_2[10];
    fStack_a4 = fStack_104 + param_2[5];
    uVar3 = param_4 >> 1;
    if (!bVar4) {
      uVar3 = uVar3 + 1;
    }
    iVar5 = 3;
    if (bVar4) {
      iVar5 = 1;
    }
    fStack_fc = fStack_104;
    fStack_f0 = fStack_108;
    uStack_e8 = uVar3 & 3;
    iStack_e4 = iVar5;
    fStack_dc = fStack_104;
    fStack_d4 = fStack_104;
    fStack_d0 = fStack_100;
    fStack_c8 = fStack_100;
    fStack_bc = fStack_ec;
    fStack_b4 = fStack_ec;
    fStack_b0 = fStack_108;
    fStack_a8 = fStack_108;
    func_0x00010837ccdc();
    if ((uVar1 & 1) == 0) {
      iVar8 = 3;
      uStack_e8 = uVar3 & 3;
      while( true ) {
        uStack_e8 = iVar5 + uStack_e8 & 3;
        func_0x00010837cb5c();
        if (iVar8 == 0) break;
        func_0x00010837cba4();
        func_0x00010837cb5c();
        func_0x00010837cc60();
        iVar8 = iVar8 + -1;
        iVar5 = iStack_e4;
      }
      func_0x00010837cba4();
    }
    else {
      iVar5 = 4;
      do {
        func_0x00010837cb5c();
        func_0x00010837cc60();
        uStack_e8 = iStack_e4 + uStack_e8 & 3;
        func_0x00010837cb5c();
        func_0x00010837cba4();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    func_0x00010837cc30();
    if (cVar2 == '\0') {
      func_0x00010837ca9c(&lStack_110);
      *(undefined1 *)(lStack_110 + 0xc0) = 2;
      *(bool *)(lStack_110 + 0xc6) = param_3 == 1;
      *(byte *)(lStack_110 + 0xc2) = (byte)param_4 & 7;
    }
    func_0x00010837cdf4();
  }
  return param_1;
}



/* Entry: 108378418; end: 1083785db;  */

long * FUN_108378418(long *param_1,undefined8 *param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  long lStack_d8;
  float fStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  float fStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  float fStack_8c;
  uint uStack_88;
  int iStack_84;
  undefined1 auStack_80 [32];
  
  cVar1 = *(char *)(*param_1 + 0xc3);
  uVar2 = (undefined1)param_3;
  if (cVar1 != '\0') {
    uVar2 = 2;
  }
  *(undefined1 *)((long)param_1 + 0xd) = uVar2;
  uVar2 = *(undefined1 *)((long)param_1 + 0xd);
  func_0x00010837cde8(auStack_80);
  FUN_108377c50(param_1,9,6,4);
  uStack_88 = param_4 & 3;
  iStack_ac = 3;
  if (param_3 == 0) {
    iStack_ac = 1;
  }
  uVar5 = *param_2;
  uVar6 = param_2[1];
  fStack_d0 = (float)uVar5;
  fVar4 = (float)((ulong)uVar5 >> 0x20);
  fStack_a0 = (float)uVar6;
  fStack_b4 = (float)((ulong)uVar6 >> 0x20);
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  fVar7 = (float)(((double)fStack_d0 + (double)fStack_a0) * auVar8._0_8_);
  fStack_8c = (float)(((double)fVar4 + (double)fStack_b4) * auVar8._8_8_);
  uStack_9c = NEON_rev64(CONCAT44(fStack_8c,fVar7),4);
  uStack_a8 = CONCAT44(fVar4,fVar7);
  uStack_bc = NEON_ext(uVar6,uVar5,4,1);
  uStack_b0 = param_4;
  if (param_3 != 0) {
    uStack_b0 = param_4 + 1;
  }
  uStack_b0 = uStack_b0 & 3;
  uStack_cc = NEON_ext(uVar5,uVar6,4,1);
  uStack_c4 = uStack_cc;
  uStack_94 = uStack_bc;
  iStack_84 = iStack_ac;
  func_0x00010837ccdc();
  iVar3 = 4;
  do {
    uStack_b0 = iStack_ac + uStack_b0 & 3;
    uStack_88 = iStack_84 + uStack_88 & 3;
    func_0x00010837cba4();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  func_0x00010837cc30();
  if (cVar1 == '\0') {
    func_0x00010837ca9c(&lStack_d8);
    *(undefined1 *)(lStack_d8 + 0xc0) = 1;
    *(bool *)(lStack_d8 + 0xc6) = param_3 == 1;
    *(byte *)(lStack_d8 + 0xc2) = (byte)param_4 & 3;
  }
  FUN_10837c078(auStack_80);
  *(undefined1 *)((long)param_1 + 0xd) = uVar2;
  return param_1;
}



/* Entry: 1083785dc; end: 108378627;  */

bool FUN_1083785dc(long *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  
  uVar3 = *(int *)(*param_1 + 0x30) - param_2;
  uVar5 = (ulong)uVar3;
  if ((int)uVar3 < 2) {
    return true;
  }
  pfVar2 = (float *)(*(long *)(*param_1 + 0x28) + (long)param_2 * 8);
  pfVar6 = pfVar2 + 3;
  do {
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) {
      return uVar5 == 0;
    }
    pfVar1 = pfVar6 + -1;
    fVar7 = *pfVar6;
    pfVar6 = pfVar6 + 2;
    bVar4 = false;
    if ((*pfVar2 == *pfVar1) && (bVar4 = false, !NAN(pfVar2[1]) && !NAN(fVar7))) {
      bVar4 = pfVar2[1] == fVar7;
    }
  } while (bVar4);
  return uVar5 == 0;
}



/* Entry: 108378628; end: 108378683;  */

undefined8
FUN_108378628(float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((0.0 <= param_1) && (0.0 <= param_2)) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_108384d8c(&uStack_60);
    FUN_10837816c(param_3,&uStack_60,param_5);
  }
  return param_3;
}



/* Entry: 108378684; end: 10837868b;  */

long * FUN_108378684(long *param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  long lStack_d8;
  float fStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  float fStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  float fStack_8c;
  uint uStack_88;
  int iStack_84;
  undefined1 auStack_80 [32];
  
  cVar1 = *(char *)(*param_1 + 0xc3);
  uVar2 = (undefined1)param_3;
  if (cVar1 != '\0') {
    uVar2 = 2;
  }
  *(undefined1 *)((long)param_1 + 0xd) = uVar2;
  uVar2 = *(undefined1 *)((long)param_1 + 0xd);
  func_0x00010837cde8(auStack_80);
  FUN_108377c50(param_1,9,6,4);
  uStack_b0 = 1;
  iStack_ac = 3;
  if (param_3 == 0) {
    iStack_ac = 1;
  }
  uStack_88 = 1;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  fStack_d0 = (float)uVar5;
  fVar4 = (float)((ulong)uVar5 >> 0x20);
  fStack_a0 = (float)uVar6;
  fStack_b4 = (float)((ulong)uVar6 >> 0x20);
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  fVar7 = (float)(((double)fStack_d0 + (double)fStack_a0) * auVar8._0_8_);
  fStack_8c = (float)(((double)fVar4 + (double)fStack_b4) * auVar8._8_8_);
  uStack_9c = NEON_rev64(CONCAT44(fStack_8c,fVar7),4);
  uStack_a8 = CONCAT44(fVar4,fVar7);
  uStack_bc = NEON_ext(uVar6,uVar5,4,1);
  if (param_3 != 0) {
    uStack_b0 = 2;
  }
  uStack_cc = NEON_ext(uVar5,uVar6,4,1);
  uStack_c4 = uStack_cc;
  uStack_94 = uStack_bc;
  iStack_84 = iStack_ac;
  func_0x00010837ccdc();
  iVar3 = 4;
  do {
    uStack_b0 = iStack_ac + uStack_b0 & 3;
    uStack_88 = iStack_84 + uStack_88 & 3;
    func_0x00010837cba4();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  func_0x00010837cc30();
  if (cVar1 == '\0') {
    func_0x00010837ca9c(&lStack_d8);
    *(undefined1 *)(lStack_d8 + 0xc0) = 1;
    *(bool *)(lStack_d8 + 0xc6) = param_3 == 1;
    *(undefined1 *)(lStack_d8 + 0xc2) = 1;
  }
  FUN_10837c078(auStack_80);
  *(undefined1 *)((long)param_1 + 0xd) = uVar2;
  return param_1;
}



/* Entry: 10837868c; end: 1083786cf;  */

void FUN_10837868c(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (0.0 < param_3) {
    fStack_20 = param_1 - param_3;
    fStack_1c = param_2 - param_3;
    fStack_18 = param_1 + param_3;
    fStack_14 = param_2 + param_3;
    FUN_108378684(param_4,&fStack_20,param_5);
  }
  return;
}



/* Entry: 1083786d0; end: 108378adf;  */

undefined1 **
FUN_1083786d0(undefined8 param_1,undefined8 param_2,undefined1 **param_3,float *param_4,int param_5)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  float *pfVar10;
  undefined8 extraout_x8;
  float *unaff_x20;
  undefined1 *puVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  uint in_register_00005028;
  undefined4 uVar20;
  uint in_register_0000502c;
  undefined4 uVar21;
  float extraout_s2;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_d8;
  ulong unaff_d9;
  undefined4 auStack_258 [2];
  ulong uStack_250;
  undefined8 uStack_248;
  float *pfStack_240;
  undefined1 **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  uint uStack_198;
  uint uStack_194;
  float fStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined1 *puStack_170;
  byte *pbStack_168;
  undefined1 **ppuStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  uint uStack_10c;
  float fStack_104;
  float fStack_100;
  undefined1 auStack_f4 [124];
  undefined8 uStack_78;
  
  uVar20 = (undefined4)((ulong)param_2 >> 0x20);
  uVar19 = (undefined4)param_2;
  ppuVar8 = param_3;
  func_0x00010837caf0();
  uStack_131 = (undefined1)param_5;
  fVar24 = param_4[2] - *param_4;
  uVar4 = fVar24 == 0.0;
  pfVar10 = param_4;
  uStack_78 = extraout_x8;
  if (fVar24 < 0.0) goto LAB_108378aa4;
  fVar25 = param_4[3] - param_4[1];
  uVar4 = fVar25 == 0.0;
  unaff_x20 = param_4;
  if (fVar25 < 0.0) goto LAB_108378aa4;
  uStack_1d8 = 0;
  uStack_1e0 = (ulong)(uint)fVar25;
  uStack_1c8 = 0;
  uStack_1d0 = (ulong)(uint)param_4[1];
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1a0 = CONCAT44(uVar20,uVar19);
  uStack_200 = (ulong)(uint)*param_4;
  uStack_1f0 = (ulong)(uint)param_4[3];
  uStack_1c0 = (ulong)(uint)param_4[2];
  uStack_1b0 = (ulong)(uint)fVar24;
  uStack_198 = in_register_00005028;
  uStack_194 = in_register_0000502c;
  unaff_d8 = func_0x00010837ce20();
  puVar11 = *param_3;
  if (*(int *)(puVar11 + 0x48) == 0) {
    param_5 = 1;
    uStack_131 = 1;
  }
  fVar24 = (float)unaff_d8;
  if ((float)uStack_1a0 == 0.0) {
    uVar4 = true;
    if ((fVar24 != 0.0) && (uVar4 = false, !NAN(fVar24))) {
      uVar4 = fVar24 == 360.0;
    }
    if (!(bool)uVar4) goto LAB_108378798;
    dVar16 = (double)func_0x00010837cf58((double)(float)uStack_1d0,(int)uStack_1f0);
    fStack_100 = (float)dVar16;
  }
  else {
LAB_108378798:
    if (((float)uStack_1b0 != 0.0) || ((float)uStack_1e0 != 0.0)) {
      fVar18 = 0.017453292;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      unaff_d9 = (ulong)(uint)((fVar24 + (float)uStack_1a0) * 0.017453292);
      fVar13 = (float)___sincosf_stret();
      fVar25 = 0.0;
      if (1.5258789e-05 < ABS(fVar13)) {
        fVar25 = fVar13;
      }
      fVar13 = 0.0;
      if (1.5258789e-05 < ABS(fVar18)) {
        fVar13 = fVar18;
      }
      fStack_13c = fVar13;
      fStack_138 = fVar25;
      uVar17 = ___sincosf_stret(unaff_d9);
      uVar23 = CONCAT44(uVar19,fVar18);
      fStack_140 = 0.0;
      if (1.5258789e-05 < ABS((float)uVar17)) {
        fStack_140 = (float)uVar17;
      }
      fStack_144 = 0.0;
      if (1.5258789e-05 < ABS(fVar18)) {
        fStack_144 = fVar18;
      }
      bVar5 = false;
      if ((fVar13 == fStack_144) && (bVar5 = false, !NAN(fVar25) && !NAN(fStack_140))) {
        bVar5 = fVar25 == fStack_140;
      }
      fVar18 = ABS((float)uStack_1a0);
      bVar3 = false;
      if ((bVar5) && (bVar3 = false, !NAN(fVar18))) {
        bVar3 = fVar18 < 360.0;
      }
      if ((bVar3) && (359.0 < fVar18)) {
        uStack_188 = uStack_198 & 0x80000000;
        uStack_184 = uStack_194 & 0x80000000;
        fStack_190 = (float)((uint)(float)uStack_1a0 & 0x80000000 ^ 0x3b000000);
        uStack_18c = uStack_1a0._4_4_ & 0x80000000 ^ 0x3b000000;
        fVar18 = NAN;
        uStack_220 = uVar17;
        uStack_210 = uVar23;
        uStack_208 = CONCAT44(uVar21,uVar20);
        do {
          unaff_d9 = (ulong)(uint)((float)unaff_d9 - fStack_190);
          fVar14 = (float)___sincosf_stret(unaff_d9);
          fVar15 = 0.0;
          if (1.5258789e-05 < ABS(fVar14)) {
            fVar15 = fVar14;
          }
          fVar14 = 0.0;
          if (1.5258789e-05 < ABS(fVar18)) {
            fVar14 = fVar18;
          }
          bVar5 = false;
          if ((fVar13 == fVar14) && (bVar5 = false, !NAN(fVar25) && !NAN(fVar15))) {
            bVar5 = fVar25 == fVar15;
          }
          fVar18 = fVar14;
        } while (bVar5);
        uVar23 = uStack_210;
        uVar17 = uStack_220;
        fStack_144 = fVar14;
        fStack_140 = fVar15;
      }
      bStack_151 = puVar11[0xc3] == '\0';
      puStack_170 = &uStack_131;
      pbStack_168 = &bStack_151;
      uVar4 = false;
      if ((fVar13 == fStack_144) && (uVar4 = false, !NAN(fVar25) && !NAN(fStack_140))) {
        uVar4 = fVar25 == fStack_140;
      }
      ppuStack_160 = param_3;
      if ((bool)uVar4) {
        auVar22 = NEON_fmov(0x3fe0000000000000,8);
        dVar16 = ((double)(float)uStack_1c0 + (double)(float)uStack_200) * auVar22._0_8_;
        dVar2 = ((double)(float)uStack_1f0 + (double)(float)uStack_1d0) * auVar22._8_8_;
        auVar22._8_4_ = SUB84(dVar2,0);
        auVar22._0_8_ = dVar16;
        auVar22._12_4_ = (int)((ulong)dVar2 >> 0x20);
        uStack_150 = CONCAT44((float)auVar22._8_8_ + (float)uVar17 * (float)uStack_1e0 * 0.5,
                              (float)dVar16 + (float)uVar23 * (float)uStack_1b0 * 0.5);
        func_0x00010837cdd4();
      }
      else {
        bVar5 = (float)uStack_1a0 <= 0.0;
        uStack_130._0_4_ = (float)uStack_1b0 * 0.5;
        fStack_120 = (float)uStack_1e0 * 0.5;
        bVar3 = true;
        if ((fStack_120 != 0.0) && (bVar3 = false, !NAN((float)uStack_130))) {
          bVar3 = (float)uStack_130 == 0.0;
        }
        uStack_10c = 0;
        if (!bVar3) {
          uStack_10c = 0x10;
        }
        uVar4 = false;
        if ((fStack_120 == 1.0) && (uVar4 = false, !NAN((float)uStack_130))) {
          uVar4 = (float)uStack_130 == 1.0;
        }
        if (!(bool)uVar4) {
          uStack_10c = uStack_10c | 2;
        }
        uStack_128 = 0;
        uStack_130._4_4_ = 0;
        uStack_114 = 0x3f80000000000000;
        uStack_11c = 0;
        uVar19 = (undefined4)(uStack_1c0 >> 0x20);
        fVar25 = (float)uStack_1c0;
        uVar12 = uStack_1f0;
        dVar16 = (double)func_0x00010837cf58((double)(float)uStack_200,(float)uStack_1c0,uStack_1d0,
                                             uStack_1f0);
        FUN_108363ef4((float)dVar16,
                      (float)(((double)(float)uVar12 + (double)extraout_s2) *
                             (double)CONCAT44(uVar19,fVar25)),&uStack_130);
        pfVar10 = &fStack_13c;
        FUN_1083534b0(pfVar10,&fStack_144,bVar5,&uStack_130,&fStack_104);
        uVar6 = (uint)pfVar10;
        if (uVar6 == 0) {
          ppuVar8 = (undefined1 **)&uStack_130;
          pfVar10 = (float *)&uStack_150;
          FUN_10836464c(fStack_144,fStack_140);
          func_0x00010837cdd4();
        }
        else {
          FUN_108377c50(param_3,uVar6 << 1 | 1,uVar6 + 1,pfVar10);
          ppuVar8 = &puStack_170;
          pfVar10 = &fStack_104;
          FUN_108378ae0();
          puVar11 = auStack_f4;
          for (uVar12 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
              uVar12 = uVar12 - 1) {
            pfVar10 = (float *)(puVar11 + -8);
            ppuVar8 = param_3;
            FUN_1081f770c(param_3,pfVar10,puVar11);
            puVar11 = puVar11 + 0x1c;
          }
          if ((bStack_151 & 1) != 0) {
            ppuVar8 = (undefined1 **)&uStack_130;
            func_0x00010837ca9c();
            uVar23 = *(undefined8 *)param_4;
            uVar17 = *(undefined8 *)(param_4 + 2);
            lVar1 = CONCAT44(uStack_130._4_4_,(float)uStack_130);
            *(undefined1 *)(lVar1 + 0xc0) = 3;
            *(undefined8 *)(lVar1 + 0x80) = uVar17;
            *(undefined8 *)(lVar1 + 0x78) = uVar23;
            *(float *)(lVar1 + 0xb8) = fVar24;
            *(int *)(lVar1 + 0xbc) = (int)uStack_1a0;
            *(undefined1 *)(lVar1 + 0xc4) = 0;
          }
        }
      }
      goto LAB_108378aa4;
    }
    uVar4 = 1;
    fStack_100 = (float)uStack_1d0;
  }
  fStack_104 = (float)uStack_1c0;
  if (param_5 == 0) {
    pfVar10 = &fStack_104;
    func_0x00010837cc60();
    param_3 = ppuVar8;
  }
  else {
    pfVar10 = &fStack_104;
    func_0x00010837ccdc();
    param_3 = ppuVar8;
  }
LAB_108378aa4:
  func_0x00010837cab0(uStack_78);
  if ((bool)uVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_228 = FUN_108378ae0;
  ppuVar9 = (undefined1 **)ppuVar8[2];
  pfStack_240 = unaff_x20;
  ppuStack_238 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  if (**ppuVar8 != '\x01') {
    uVar6 = *(uint *)(*ppuVar9 + 0x30);
    if ((((int)uVar6 < 1) ||
        (lVar1 = *(long *)(*ppuVar9 + 0x28) + (ulong)uVar6 * 8,
        0.00024414062 < ABS(*(float *)(lVar1 + -8) - *pfVar10))) ||
       (0.00024414062 < ABS(*(float *)(lVar1 + -4) - pfVar10[1]))) {
      func_0x0001081f7a64();
      *ppuVar8[1] = 0;
    }
    return ppuVar9;
  }
  uStack_250 = unaff_d9;
  uStack_248 = unaff_d8;
  func_0x00010837cf24(*pfVar10,pfVar10[1]);
  puVar7 = auStack_258;
  func_0x00010837ca9c();
  func_0x00010837cd20();
  func_0x00010837cee4();
  func_0x00010837cd94();
  *puVar7 = (int)unaff_d9;
  puVar7[1] = (int)unaff_d8;
  func_0x00010837cb1c();
  return ppuVar9;
}



/* Entry: 108378ae0; end: 108378b73;  */

long * FUN_108378ae0(undefined8 *param_1,float *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  plVar4 = (long *)param_1[2];
  if (*(char *)*param_1 != '\x01') {
    uVar2 = *(uint *)(*plVar4 + 0x30);
    if ((((int)uVar2 < 1) ||
        (lVar1 = *(long *)(*plVar4 + 0x28) + (ulong)uVar2 * 8,
        0.00024414062 < ABS(*(float *)(lVar1 + -8) - *param_2))) ||
       (0.00024414062 < ABS(*(float *)(lVar1 + -4) - param_2[1]))) {
      func_0x0001081f7a64();
      *(undefined1 *)param_1[1] = 0;
    }
    return plVar4;
  }
  func_0x00010837cf24(*param_2,param_2[1]);
  puVar3 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cd20();
  func_0x00010837cee4();
  func_0x00010837cd94();
  *puVar3 = unaff_s9;
  puVar3[1] = unaff_s8;
  func_0x00010837cb1c();
  return plVar4;
}



/* Entry: 108378b74; end: 108379033;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 **
FUN_108378b74(double param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
             undefined1 **param_6,float *param_7,float *param_8)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar14;
  int iVar15;
  undefined1 *puVar16;
  ulong uVar17;
  float *unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double extraout_d0;
  double in_register_00005008;
  float fVar22;
  float fVar23;
  undefined8 extraout_d1;
  double extraout_d1_00;
  undefined8 extraout_var;
  float extraout_s2;
  float fVar24;
  float fVar25;
  ulong unaff_d11;
  float fVar26;
  ulong unaff_d12;
  float fVar27;
  ulong unaff_d13;
  ulong uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined4 auStack_388 [2];
  ulong uStack_380;
  ulong uStack_378;
  float *pfStack_370;
  undefined1 **ppuStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  ulong uStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  undefined1 *puStack_2a0;
  byte *pbStack_298;
  undefined1 **ppuStack_290;
  byte bStack_281;
  undefined8 uStack_280;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined1 uStack_261;
  float fStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  float fStack_250;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  uint uStack_23c;
  float fStack_234;
  undefined4 uStack_230;
  undefined1 auStack_224 [124];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  float *pfStack_160;
  float *pfStack_158;
  float *pfStack_150;
  undefined1 **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  float fStack_124;
  ulong uStack_120;
  double dStack_110;
  double dStack_108;
  undefined1 auStack_100 [8];
  float fStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  uint uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [2];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  
  fVar18 = (float)param_5;
  pfVar13 = param_7;
  uStack_120 = param_2;
  dStack_110 = param_1;
  dStack_108 = in_register_00005008;
  func_0x00010837caf0();
  uStack_98 = extraout_x8_00;
  FUN_108377cd4();
  uVar7 = *(uint *)(*param_6 + 0x30);
  if ((int)uVar7 < 1) {
    uStack_a8 = 0;
    fVar22 = 0.0;
    fVar24 = 0.0;
  }
  else {
    uStack_a8 = *(undefined8 *)(*(long *)(*param_6 + 0x28) + (ulong)uVar7 * 8 + -8);
    fVar24 = (float)uStack_a8;
    fVar22 = (float)((ulong)uStack_a8 >> 0x20);
  }
  ppuVar11 = param_6;
  if ((SUB84(dStack_110,0) == 0.0) || ((float)uStack_120 == 0.0)) {
LAB_108378de0:
    uVar3 = 1;
    uVar17 = func_0x00010837cc84();
LAB_108378de8:
    FUN_108377c8c(uVar17);
  }
  else {
    fVar25 = (float)param_4;
    bVar4 = false;
    if ((fVar24 == fVar25) && (bVar4 = false, !NAN(fVar22) && !NAN(fVar18))) {
      bVar4 = fVar22 == fVar18;
    }
    fStack_a0 = fVar25;
    fStack_9c = fVar18;
    if (bVar4) goto LAB_108378de0;
    fVar26 = ABS(SUB84(dStack_110,0));
    fVar27 = ABS((float)uStack_120);
    fStack_d0 = (fVar24 - fVar25) * 0.5;
    fStack_cc = (fVar22 - fVar18) * 0.5;
    fStack_124 = fVar18;
    FUN_10836417c(-(float)param_3,&fStack_f8);
    FUN_1083645e0(&fStack_f8,auStack_100,&fStack_d0,1);
    fVar18 = (auStack_100._0_4_ * auStack_100._0_4_) / (dStack_110._0_4_ * dStack_110._0_4_) +
             (auStack_100._4_4_ * auStack_100._4_4_) / ((float)uStack_120 * (float)uStack_120);
    fVar22 = SQRT(fVar18);
    fStack_f8 = fVar26 * fVar22;
    fStack_e8 = fVar27 * fVar22;
    if (fVar18 <= 1.0) {
      fStack_f8 = fVar26;
      fStack_e8 = fVar27;
    }
    dStack_110 = (double)CONCAT44(dStack_110._4_4_,fStack_f8);
    fStack_f8 = 1.0 / fStack_f8;
    uStack_120 = CONCAT44(uStack_120._4_4_,fStack_e8);
    fStack_e8 = 1.0 / fStack_e8;
    bVar4 = true;
    if ((fStack_e8 != 0.0) && (bVar4 = false, !NAN(fStack_f8))) {
      bVar4 = fStack_f8 == 0.0;
    }
    uStack_d4 = 0;
    if (!bVar4) {
      uStack_d4 = 0x10;
    }
    bVar4 = false;
    if ((fStack_e8 == 1.0) && (bVar4 = false, !NAN(fStack_f8))) {
      bVar4 = fStack_f8 == 1.0;
    }
    uStack_f0 = 0;
    uStack_f4 = 0;
    if (!bVar4) {
      uStack_d4 = uStack_d4 | 2;
    }
    uStack_dc = 0x3f80000000000000;
    uStack_e4 = 0;
    func_0x0001083641b4(-(float)param_3,&fStack_f8);
    pfVar13 = &fStack_b8;
    FUN_1083645e0(&fStack_f8,pfVar13,&uStack_a8,2);
    fVar22 = fStack_b0 - fStack_b8;
    fVar24 = fStack_ac - fStack_b4;
    fVar26 = 1.0 / (fVar24 * fVar24 + fVar22 * fVar22) + -0.25;
    fVar18 = 0.0;
    if (0.0 <= fVar26) {
      fVar18 = fVar26;
    }
    iVar15 = (int)param_8;
    fVar26 = SQRT(fVar18);
    if (((int)param_7 != 0) == (iVar15 != 1)) {
      fVar26 = -SQRT(fVar18);
    }
    fVar24 = (fStack_b0 + fStack_b8) * 0.5 - fVar24 * fVar26;
    unaff_d13 = (ulong)(uint)fVar24;
    fVar22 = (fStack_ac + fStack_b4) * 0.5 + fVar22 * fVar26;
    param_5 = (ulong)(uint)fVar22;
    fStack_b8 = fStack_b8 - fVar24;
    fStack_b4 = fStack_b4 - fVar22;
    fVar18 = fStack_b0 - fVar24;
    fVar26 = fStack_ac - fVar22;
    fStack_b0 = fVar18;
    fStack_ac = fVar26;
    unaff_d11 = _atan2f();
    fVar18 = (float)_atan2f(fVar26,fVar18);
    fVar18 = fVar18 - (float)unaff_d11;
    if ((iVar15 != 0) || (0.0 <= fVar18)) {
      fVar26 = fVar18 + -6.2831855;
      if (fVar18 <= 0.0 || iVar15 == 0) {
        fVar26 = fVar18;
      }
    }
    else {
      fVar26 = fVar18 + 6.2831855;
    }
    uVar3 = ABS(fVar26) == 3.1415927e-06;
    fVar18 = (float)uStack_120;
    unaff_d12 = uStack_120 & 0xffffffff;
    uVar28 = (ulong)dStack_110 & 0xffffffff;
    uVar17 = param_4;
    if (ABS(fVar26) < 3.1415927e-06) goto LAB_108378de8;
    FUN_10836417c(&fStack_f8);
    ppuVar11 = (undefined1 **)&fStack_f8;
    func_0x000108363fe4(uVar28,unaff_d12);
    fVar27 = (float)NEON_fminnm((int)ABS(fVar26 / 2.0943952),0x4effffff);
    if (fVar27 <= -2.1474835e+09) {
      fVar27 = -2.1474835e+09;
    }
    unaff_d12 = (ulong)(uint)fVar27;
    fVar26 = fVar26 / (float)(int)fVar27;
    param_3 = (ulong)(uint)fVar26;
    fVar19 = (float)_tanf();
    uVar3 = !NAN(fVar19 - fVar19);
    if (!NAN(fVar19 - fVar19)) {
      fVar20 = (float)_cosf(param_3);
      fVar23 = ABS(1.5707964 - ABS(fVar26));
      bVar4 = false;
      if ((fVar25 == (float)(int)fVar25) &&
         (bVar4 = false, !NAN(fVar18) && !NAN((float)(int)fVar18))) {
        bVar4 = fVar18 == (float)(int)fVar18;
      }
      bVar6 = false;
      if ((bVar4) && (bVar6 = false, !NAN(dStack_110._0_4_) && !NAN((float)(int)dStack_110._0_4_)))
      {
        bVar6 = dStack_110._0_4_ == (float)(int)dStack_110._0_4_;
      }
      bVar4 = false;
      bVar5 = true;
      if (bVar6) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar23)) {
          bVar4 = fVar23 == 0.00024414062;
          bVar5 = 0.00024414062 <= fVar23;
        }
      }
      if (bVar5 && !bVar4) {
        param_8 = (float *)0x0;
      }
      else {
        param_8 = (float *)(ulong)(fStack_124 == (float)(int)fStack_124);
      }
      param_7 = (float *)0x0;
      unaff_x22 = afStack_c8;
      unaff_x23 = 0x37800000;
      auVar29 = NEON_fmov(0x3fe0000000000000,8);
      uVar7 = (int)fVar27 & ((int)fVar27 >> 0x1f ^ 0xffffffffU);
      unaff_x24 = (ulong)uVar7;
      unaff_d12 = (ulong)(uint)SQRT(fVar20 * 0.5 + 0.5);
      dStack_108 = auVar29._8_8_;
      dStack_110 = auVar29._0_8_;
      while( true ) {
        uVar3 = (uint)param_7 == uVar7;
        if ((bool)uVar3) break;
        unaff_d11 = (ulong)(uint)(fVar26 + (float)unaff_d11);
        uVar30 = ___sincosf_stret(unaff_d11);
        fVar25 = (float)((ulong)uVar30 >> 0x20);
        fVar18 = 0.0;
        if (1.5258789e-05 < ABS((float)uVar30)) {
          fVar18 = (float)uVar30;
        }
        fVar27 = 0.0;
        if (1.5258789e-05 < ABS(fVar25)) {
          fVar27 = fVar25;
        }
        fStack_b0 = fVar24 + fVar27;
        fStack_ac = fVar22 + fVar18;
        fStack_b8 = fVar19 * fVar18 + fStack_b0;
        fStack_b4 = fStack_ac - fVar19 * fVar27;
        FUN_1083645e0(&fStack_f8,afStack_c8,&fStack_b8,2);
        if ((int)param_8 != 0) {
          for (lVar14 = 0; lVar14 != 0x10; lVar14 = lVar14 + 8) {
            *(ulong *)((long)unaff_x22 + lVar14) =
                 CONCAT44((float)(double)(long)((double)(float)((ulong)*(undefined8 *)
                                                                        ((long)unaff_x22 + lVar14)
                                                               >> 0x20) + dStack_108),
                          (float)(double)(long)((double)(float)*(undefined8 *)
                                                                ((long)unaff_x22 + lVar14) +
                                               dStack_110));
          }
        }
        pfVar13 = afStack_c8;
        FUN_1081f770c(unaff_d12,param_6,pfVar13,auStack_c0);
        param_7 = (float *)(ulong)((uint)param_7 + 1);
      }
      ppuVar11 = param_6;
      FUN_1083778c4(param_4);
    }
  }
  func_0x00010837cab0(uStack_98);
  if ((bool)uVar3) {
    return param_6;
  }
  uVar30 = ___stack_chk_fail();
  fVar18 = (float)((ulong)uVar30 >> 0x20);
  if (pfVar13[2] <= *pfVar13) {
    return ppuVar11;
  }
  bVar4 = false;
  if ((fVar18 != 0.0) && (bVar4 = false, !NAN(pfVar13[1]) && !NAN(pfVar13[3]))) {
    bVar4 = pfVar13[1] < pfVar13[3];
  }
  if (!bVar4) {
    return ppuVar11;
  }
  fVar22 = (float)uVar30 / 90.0;
  fVar22 = ABS(fVar22 - (float)(double)(long)(fVar22 + 0.5));
  bVar4 = false;
  bVar6 = true;
  if (360.0 <= ABS(fVar18)) {
    bVar4 = false;
    bVar6 = true;
    if (!NAN(fVar22)) {
      bVar4 = fVar22 == 0.00024414062;
      bVar6 = 0.00024414062 <= fVar22;
    }
  }
  puStack_140 = &stack0xfffffffffffffff0;
  if (!bVar6 || bVar4) {
    pcStack_138 = FUN_108379034;
    FUN_108378418();
    return ppuVar11;
  }
  iVar15 = 1;
  pcStack_138 = FUN_108379034;
  ppuVar9 = ppuVar11;
  uStack_1a0 = unaff_d13;
  uStack_198 = unaff_d12;
  uStack_190 = unaff_d11;
  uStack_188 = param_3;
  uStack_180 = param_4;
  uStack_178 = param_5;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  pfStack_160 = unaff_x22;
  pfStack_158 = param_7;
  pfStack_150 = param_8;
  ppuStack_148 = param_6;
  func_0x00010837caf0();
  uStack_1a8 = extraout_x8;
  uStack_261 = (undefined1)iVar15;
  fVar18 = pfVar13[2] - *pfVar13;
  uVar3 = fVar18 == 0.0;
  pfVar12 = pfVar13;
  if (fVar18 < 0.0) goto LAB_108378aa4;
  fVar22 = pfVar13[3] - pfVar13[1];
  uVar3 = fVar22 == 0.0;
  param_8 = pfVar13;
  if (fVar22 < 0.0) goto LAB_108378aa4;
  uStack_308 = 0;
  uStack_310 = (ulong)(uint)fVar22;
  uStack_2f8 = 0;
  uStack_300 = (ulong)(uint)pfVar13[1];
  uStack_2e8 = 0;
  uStack_2d8 = 0;
  uStack_328 = 0;
  uStack_318 = 0;
  uStack_330 = (ulong)(uint)*pfVar13;
  uStack_320 = (ulong)(uint)pfVar13[3];
  uStack_2f0 = (ulong)(uint)pfVar13[2];
  uStack_2e0 = (ulong)(uint)fVar18;
  uStack_2d0 = extraout_d1;
  uStack_2c8 = extraout_var;
  param_5 = func_0x00010837ce20();
  puVar16 = *ppuVar11;
  if (*(int *)(puVar16 + 0x48) == 0) {
    iVar15 = 1;
    uStack_261 = 1;
  }
  fVar18 = (float)param_5;
  if ((float)uStack_2d0 == 0.0) {
    uVar3 = true;
    if ((fVar18 != 0.0) && (uVar3 = false, !NAN(fVar18))) {
      uVar3 = fVar18 == 360.0;
    }
    if (!(bool)uVar3) goto LAB_108378798;
    dVar21 = (double)func_0x00010837cf58((double)(float)uStack_300,uStack_320);
    uVar17 = (ulong)(uint)(float)dVar21;
  }
  else {
LAB_108378798:
    if (((float)uStack_2e0 != 0.0) || ((float)uStack_310 != 0.0)) {
      param_4 = (ulong)(uint)((fVar18 + (float)uStack_2d0) * 0.017453292);
      uVar30 = ___sincosf_stret();
      fVar24 = (float)((ulong)uVar30 >> 0x20);
      fVar22 = 0.0;
      if (1.5258789e-05 < ABS((float)uVar30)) {
        fVar22 = (float)uVar30;
      }
      fVar25 = 0.0;
      if (1.5258789e-05 < ABS(fVar24)) {
        fVar25 = fVar24;
      }
      fStack_26c = fVar25;
      fStack_268 = fVar22;
      auVar29 = ___sincosf_stret(param_4);
      auVar2 = auVar29._0_12_;
      fStack_270 = 0.0;
      if (1.5258789e-05 < ABS(auVar29._0_4_)) {
        fStack_270 = auVar29._0_4_;
      }
      fStack_274 = 0.0;
      if (1.5258789e-05 < ABS(auVar29._8_4_)) {
        fStack_274 = auVar29._8_4_;
      }
      bVar4 = false;
      if ((fVar25 == fStack_274) && (bVar4 = false, !NAN(fVar22) && !NAN(fStack_270))) {
        bVar4 = fVar22 == fStack_270;
      }
      fVar24 = ABS((float)uStack_2d0);
      bVar6 = false;
      if ((bVar4) && (bVar6 = false, !NAN(fVar24))) {
        bVar6 = fVar24 < 360.0;
      }
      if ((bVar6) && (359.0 < fVar24)) {
        uStack_2b8 = (uint)uStack_2c8 & 0x80000000;
        uStack_2b4 = (uint)((ulong)uStack_2c8 >> 0x20) & 0x80000000;
        fStack_2c0 = (float)((uint)(float)uStack_2d0 & 0x80000000 ^ 0x3b000000);
        uStack_2bc = uStack_2d0._4_4_ & 0x80000000 ^ 0x3b000000;
        do {
          uStack_340 = auVar29._8_8_;
          uStack_350 = auVar29._0_8_;
          param_4 = (ulong)(uint)((float)param_4 - fStack_2c0);
          uVar30 = ___sincosf_stret(param_4);
          auVar29._8_8_ = uStack_340;
          auVar29._0_8_ = uStack_350;
          auVar2 = auVar29._0_12_;
          fVar26 = (float)((ulong)uVar30 >> 0x20);
          fVar24 = 0.0;
          if (1.5258789e-05 < ABS((float)uVar30)) {
            fVar24 = (float)uVar30;
          }
          fVar27 = 0.0;
          if (1.5258789e-05 < ABS(fVar26)) {
            fVar27 = fVar26;
          }
          bVar4 = false;
          if ((fVar25 == fVar27) && (bVar4 = false, !NAN(fVar22) && !NAN(fVar24))) {
            bVar4 = fVar22 == fVar24;
          }
        } while (bVar4);
        fStack_274 = fVar27;
        fStack_270 = fVar24;
      }
      bStack_281 = puVar16[0xc3] == '\0';
      puStack_2a0 = &uStack_261;
      pbStack_298 = &bStack_281;
      uVar3 = false;
      if ((fVar25 == fStack_274) && (uVar3 = false, !NAN(fVar22) && !NAN(fStack_270))) {
        uVar3 = fVar22 == fStack_270;
      }
      ppuStack_290 = ppuVar11;
      if ((bool)uVar3) {
        auVar29 = NEON_fmov(0x3fe0000000000000,8);
        uStack_280 = CONCAT44((float)(((double)(float)uStack_320 + (double)(float)uStack_300) *
                                     auVar29._8_8_) + auVar2._0_4_ * (float)uStack_310 * 0.5,
                              (float)(((double)(float)uStack_2f0 + (double)(float)uStack_330) *
                                     auVar29._0_8_) + auVar2._8_4_ * (float)uStack_2e0 * 0.5);
        func_0x00010837cdd4();
      }
      else {
        bVar4 = (float)uStack_2d0 <= 0.0;
        fStack_260 = (float)uStack_2e0 * 0.5;
        fStack_250 = (float)uStack_310 * 0.5;
        bVar6 = true;
        if ((fStack_250 != 0.0) && (bVar6 = false, !NAN(fStack_260))) {
          bVar6 = fStack_260 == 0.0;
        }
        uStack_23c = 0;
        if (!bVar6) {
          uStack_23c = 0x10;
        }
        uVar3 = false;
        if ((fStack_250 == 1.0) && (uVar3 = false, !NAN(fStack_260))) {
          uVar3 = fStack_260 == 1.0;
        }
        if (!(bool)uVar3) {
          uStack_23c = uStack_23c | 2;
        }
        uStack_258 = 0;
        uStack_25c = 0;
        uStack_244 = 0x3f80000000000000;
        uStack_24c = 0;
        uVar17 = uStack_320;
        func_0x00010837cf58((double)(float)uStack_330,uStack_2f0,uStack_300,uStack_320);
        dVar21 = (double)(float)uVar17 + (double)extraout_s2;
        FUN_108363ef4((float)extraout_d0,(float)(dVar21 * extraout_d1_00),dVar21,&fStack_260);
        pfVar12 = &fStack_26c;
        FUN_1083534b0(pfVar12,&fStack_274,bVar4,&fStack_260,&fStack_234);
        uVar7 = (uint)pfVar12;
        if (uVar7 == 0) {
          ppuVar9 = (undefined1 **)&fStack_260;
          pfVar12 = (float *)&uStack_280;
          FUN_10836464c();
          func_0x00010837cdd4();
        }
        else {
          FUN_108377c50(ppuVar11,uVar7 << 1 | 1,uVar7 + 1,pfVar12);
          ppuVar9 = &puStack_2a0;
          pfVar12 = &fStack_234;
          FUN_108378ae0();
          puVar16 = auStack_224;
          for (uVar17 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar17 != 0;
              uVar17 = uVar17 - 1) {
            pfVar12 = (float *)(puVar16 + -8);
            ppuVar9 = ppuVar11;
            FUN_1081f770c(ppuVar11,pfVar12,puVar16);
            puVar16 = puVar16 + 0x1c;
          }
          if ((bStack_281 & 1) != 0) {
            ppuVar9 = (undefined1 **)&fStack_260;
            func_0x00010837ca9c();
            uVar30 = *(undefined8 *)pfVar13;
            uVar1 = *(undefined8 *)(pfVar13 + 2);
            lVar14 = CONCAT44(uStack_25c,fStack_260);
            *(undefined1 *)(lVar14 + 0xc0) = 3;
            *(undefined8 *)(lVar14 + 0x80) = uVar1;
            *(undefined8 *)(lVar14 + 0x78) = uVar30;
            *(float *)(lVar14 + 0xb8) = fVar18;
            *(int *)(lVar14 + 0xbc) = (int)uStack_2d0;
            *(undefined1 *)(lVar14 + 0xc4) = 0;
          }
        }
      }
      goto LAB_108378aa4;
    }
    uVar3 = 1;
    uVar17 = uStack_300;
  }
  fStack_234 = (float)uStack_2f0;
  uStack_230 = (undefined4)uVar17;
  if (iVar15 == 0) {
    pfVar12 = &fStack_234;
    func_0x00010837cc60();
    ppuVar11 = ppuVar9;
  }
  else {
    pfVar12 = &fStack_234;
    func_0x00010837ccdc();
    ppuVar11 = ppuVar9;
  }
LAB_108378aa4:
  func_0x00010837cab0(uStack_1a8);
  if ((bool)uVar3) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_358 = FUN_108378ae0;
  ppuVar10 = (undefined1 **)ppuVar9[2];
  pfStack_370 = param_8;
  ppuStack_368 = ppuVar11;
  ppuStack_360 = &puStack_140;
  if (**ppuVar9 == '\x01') {
    uStack_380 = param_4;
    uStack_378 = param_5;
    func_0x00010837cf24();
    puVar8 = auStack_388;
    func_0x00010837ca9c();
    func_0x00010837cd20();
    func_0x00010837cee4();
    func_0x00010837cd94();
    *puVar8 = (int)param_4;
    puVar8[1] = (int)param_5;
    func_0x00010837cb1c();
    return ppuVar10;
  }
  uVar7 = *(uint *)(*ppuVar10 + 0x30);
  if ((((int)uVar7 < 1) ||
      (lVar14 = *(long *)(*ppuVar10 + 0x28) + (ulong)uVar7 * 8,
      0.00024414062 < ABS(*(float *)(lVar14 + -8) - *pfVar12))) ||
     (0.00024414062 < ABS(*(float *)(lVar14 + -4) - pfVar12[1]))) {
    func_0x0001081f7a64();
    *ppuVar9[1] = 0;
  }
  return ppuVar10;
}



/* Entry: 108379034; end: 10837915b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 ** FUN_108379034(float param_1,undefined8 param_2,undefined1 **param_3,float *param_4)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  float *pfVar10;
  undefined8 extraout_x8;
  float *unaff_x20;
  int iVar11;
  undefined1 *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint in_register_00005028;
  undefined4 uVar22;
  uint in_register_0000502c;
  float extraout_s2;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined8 uVar26;
  undefined8 unaff_d8;
  ulong unaff_d9;
  undefined4 auStack_258 [2];
  ulong uStack_250;
  undefined8 uStack_248;
  float *pfStack_240;
  undefined1 **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  uint uStack_198;
  uint uStack_194;
  float fStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined1 *puStack_170;
  byte *pbStack_168;
  undefined1 **ppuStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined1 uStack_131;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  float fStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  uint uStack_10c;
  float fStack_104;
  float fStack_100;
  undefined1 auStack_f4 [124];
  undefined8 uStack_78;
  
  uVar20 = (undefined4)((ulong)param_2 >> 0x20);
  fVar18 = (float)param_2;
  if (param_4[2] <= *param_4) {
    return param_3;
  }
  bVar3 = false;
  if ((fVar18 != 0.0) && (bVar3 = false, !NAN(param_4[1]) && !NAN(param_4[3]))) {
    bVar3 = param_4[1] < param_4[3];
  }
  if (!bVar3) {
    return param_3;
  }
  fVar23 = (float)(double)(long)(param_1 / 90.0 + 0.5);
  fVar25 = ABS(param_1 / 90.0 - fVar23);
  bVar3 = false;
  bVar5 = true;
  if (360.0 <= ABS(fVar18)) {
    bVar3 = false;
    bVar5 = true;
    if (!NAN(fVar25)) {
      bVar3 = fVar25 == 0.00024414062;
      bVar5 = 0.00024414062 <= fVar25;
    }
  }
  if (!bVar5 || bVar3) {
    fVar23 = fVar23 + 1.0;
    fVar23 = (float)((uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)(fVar23 - (float)(int)(fVar23 * 0.25) * 4.0)) & 0x7fffffff
                    );
    fVar25 = fVar23 + 4.0;
    if (0.0 <= fVar23) {
      fVar25 = fVar23;
    }
    FUN_108378418(param_3,param_4,fVar18 <= 0.0,(int)fVar25);
    return param_3;
  }
  iVar11 = 1;
  ppuVar8 = param_3;
  func_0x00010837caf0();
  uStack_131 = (undefined1)iVar11;
  fVar23 = param_4[2] - *param_4;
  uVar4 = fVar23 == 0.0;
  pfVar10 = param_4;
  uStack_78 = extraout_x8;
  if (fVar23 < 0.0) goto LAB_108378aa4;
  fVar25 = param_4[3] - param_4[1];
  uVar4 = fVar25 == 0.0;
  unaff_x20 = param_4;
  if (fVar25 < 0.0) goto LAB_108378aa4;
  uStack_1d8 = 0;
  uStack_1e0 = (ulong)(uint)fVar25;
  uStack_1c8 = 0;
  uStack_1d0 = (ulong)(uint)param_4[1];
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  uStack_1a0 = CONCAT44(uVar20,fVar18);
  uStack_200 = (ulong)(uint)*param_4;
  uStack_1f0 = (ulong)(uint)param_4[3];
  uStack_1c0 = (ulong)(uint)param_4[2];
  uStack_1b0 = (ulong)(uint)fVar23;
  uStack_198 = in_register_00005028;
  uStack_194 = in_register_0000502c;
  unaff_d8 = func_0x00010837ce20();
  puVar12 = *param_3;
  if (*(int *)(puVar12 + 0x48) == 0) {
    iVar11 = 1;
    uStack_131 = 1;
  }
  fVar18 = (float)unaff_d8;
  if ((float)uStack_1a0 == 0.0) {
    uVar4 = true;
    if ((fVar18 != 0.0) && (uVar4 = false, !NAN(fVar18))) {
      uVar4 = fVar18 == 360.0;
    }
    if (!(bool)uVar4) goto LAB_108378798;
    dVar16 = (double)func_0x00010837cf58((double)(float)uStack_1d0,(int)uStack_1f0);
    fStack_100 = (float)dVar16;
  }
  else {
LAB_108378798:
    if (((float)uStack_1b0 != 0.0) || ((float)uStack_1e0 != 0.0)) {
      fVar19 = 0.017453292;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      unaff_d9 = (ulong)(uint)((fVar18 + (float)uStack_1a0) * 0.017453292);
      fVar25 = (float)___sincosf_stret();
      fVar23 = 0.0;
      if (1.5258789e-05 < ABS(fVar25)) {
        fVar23 = fVar25;
      }
      fVar25 = 0.0;
      if (1.5258789e-05 < ABS(fVar19)) {
        fVar25 = fVar19;
      }
      fStack_13c = fVar25;
      fStack_138 = fVar23;
      uVar17 = ___sincosf_stret(unaff_d9);
      uVar26 = CONCAT44(uVar20,fVar19);
      fStack_140 = 0.0;
      if (1.5258789e-05 < ABS((float)uVar17)) {
        fStack_140 = (float)uVar17;
      }
      fStack_144 = 0.0;
      if (1.5258789e-05 < ABS(fVar19)) {
        fStack_144 = fVar19;
      }
      bVar3 = false;
      if ((fVar25 == fStack_144) && (bVar3 = false, !NAN(fVar23) && !NAN(fStack_140))) {
        bVar3 = fVar23 == fStack_140;
      }
      fVar19 = ABS((float)uStack_1a0);
      bVar5 = false;
      if ((bVar3) && (bVar5 = false, !NAN(fVar19))) {
        bVar5 = fVar19 < 360.0;
      }
      if ((bVar5) && (359.0 < fVar19)) {
        uStack_188 = uStack_198 & 0x80000000;
        uStack_184 = uStack_194 & 0x80000000;
        fStack_190 = (float)((uint)(float)uStack_1a0 & 0x80000000 ^ 0x3b000000);
        uStack_18c = uStack_1a0._4_4_ & 0x80000000 ^ 0x3b000000;
        fVar19 = NAN;
        uStack_220 = uVar17;
        uStack_210 = uVar26;
        uStack_208 = CONCAT44(uVar22,uVar21);
        do {
          unaff_d9 = (ulong)(uint)((float)unaff_d9 - fStack_190);
          fVar14 = (float)___sincosf_stret(unaff_d9);
          fVar15 = 0.0;
          if (1.5258789e-05 < ABS(fVar14)) {
            fVar15 = fVar14;
          }
          fVar14 = 0.0;
          if (1.5258789e-05 < ABS(fVar19)) {
            fVar14 = fVar19;
          }
          bVar3 = false;
          if ((fVar25 == fVar14) && (bVar3 = false, !NAN(fVar23) && !NAN(fVar15))) {
            bVar3 = fVar23 == fVar15;
          }
          fVar19 = fVar14;
        } while (bVar3);
        uVar26 = uStack_210;
        uVar17 = uStack_220;
        fStack_144 = fVar14;
        fStack_140 = fVar15;
      }
      bStack_151 = puVar12[0xc3] == '\0';
      puStack_170 = &uStack_131;
      pbStack_168 = &bStack_151;
      uVar4 = false;
      if ((fVar25 == fStack_144) && (uVar4 = false, !NAN(fVar23) && !NAN(fStack_140))) {
        uVar4 = fVar23 == fStack_140;
      }
      ppuStack_160 = param_3;
      if ((bool)uVar4) {
        auVar24 = NEON_fmov(0x3fe0000000000000,8);
        dVar16 = ((double)(float)uStack_1c0 + (double)(float)uStack_200) * auVar24._0_8_;
        dVar2 = ((double)(float)uStack_1f0 + (double)(float)uStack_1d0) * auVar24._8_8_;
        auVar24._8_4_ = SUB84(dVar2,0);
        auVar24._0_8_ = dVar16;
        auVar24._12_4_ = (int)((ulong)dVar2 >> 0x20);
        uStack_150 = CONCAT44((float)auVar24._8_8_ + (float)uVar17 * (float)uStack_1e0 * 0.5,
                              (float)dVar16 + (float)uVar26 * (float)uStack_1b0 * 0.5);
        func_0x00010837cdd4();
      }
      else {
        bVar3 = (float)uStack_1a0 <= 0.0;
        fStack_130 = (float)uStack_1b0 * 0.5;
        fStack_120 = (float)uStack_1e0 * 0.5;
        bVar5 = true;
        if ((fStack_120 != 0.0) && (bVar5 = false, !NAN(fStack_130))) {
          bVar5 = fStack_130 == 0.0;
        }
        uStack_10c = 0;
        if (!bVar5) {
          uStack_10c = 0x10;
        }
        uVar4 = false;
        if ((fStack_120 == 1.0) && (uVar4 = false, !NAN(fStack_130))) {
          uVar4 = fStack_130 == 1.0;
        }
        if (!(bool)uVar4) {
          uStack_10c = uStack_10c | 2;
        }
        uStack_128 = 0;
        uStack_12c = 0;
        uStack_114 = 0x3f80000000000000;
        uStack_11c = 0;
        uVar20 = (undefined4)(uStack_1c0 >> 0x20);
        fVar23 = (float)uStack_1c0;
        uVar13 = uStack_1f0;
        dVar16 = (double)func_0x00010837cf58((double)(float)uStack_200,(float)uStack_1c0,uStack_1d0,
                                             uStack_1f0);
        FUN_108363ef4((float)dVar16,
                      (float)(((double)(float)uVar13 + (double)extraout_s2) *
                             (double)CONCAT44(uVar20,fVar23)),&fStack_130);
        pfVar10 = &fStack_13c;
        FUN_1083534b0(pfVar10,&fStack_144,bVar3,&fStack_130,&fStack_104);
        uVar6 = (uint)pfVar10;
        if (uVar6 == 0) {
          ppuVar8 = (undefined1 **)&fStack_130;
          pfVar10 = (float *)&uStack_150;
          FUN_10836464c(fStack_144,fStack_140);
          func_0x00010837cdd4();
        }
        else {
          FUN_108377c50(param_3,uVar6 << 1 | 1,uVar6 + 1,pfVar10);
          ppuVar8 = &puStack_170;
          pfVar10 = &fStack_104;
          FUN_108378ae0();
          puVar12 = auStack_f4;
          for (uVar13 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
              uVar13 = uVar13 - 1) {
            pfVar10 = (float *)(puVar12 + -8);
            ppuVar8 = param_3;
            FUN_1081f770c(param_3,pfVar10,puVar12);
            puVar12 = puVar12 + 0x1c;
          }
          if ((bStack_151 & 1) != 0) {
            ppuVar8 = (undefined1 **)&fStack_130;
            func_0x00010837ca9c();
            uVar26 = *(undefined8 *)param_4;
            uVar17 = *(undefined8 *)(param_4 + 2);
            lVar1 = CONCAT44(uStack_12c,fStack_130);
            *(undefined1 *)(lVar1 + 0xc0) = 3;
            *(undefined8 *)(lVar1 + 0x80) = uVar17;
            *(undefined8 *)(lVar1 + 0x78) = uVar26;
            *(float *)(lVar1 + 0xb8) = fVar18;
            *(int *)(lVar1 + 0xbc) = (int)uStack_1a0;
            *(undefined1 *)(lVar1 + 0xc4) = 0;
          }
        }
      }
      goto LAB_108378aa4;
    }
    uVar4 = 1;
    fStack_100 = (float)uStack_1d0;
  }
  fStack_104 = (float)uStack_1c0;
  if (iVar11 == 0) {
    pfVar10 = &fStack_104;
    func_0x00010837cc60();
    param_3 = ppuVar8;
  }
  else {
    pfVar10 = &fStack_104;
    func_0x00010837ccdc();
    param_3 = ppuVar8;
  }
LAB_108378aa4:
  func_0x00010837cab0(uStack_78);
  if ((bool)uVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_228 = FUN_108378ae0;
  ppuVar9 = (undefined1 **)ppuVar8[2];
  pfStack_240 = unaff_x20;
  ppuStack_238 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  if (**ppuVar8 == '\x01') {
    uStack_250 = unaff_d9;
    uStack_248 = unaff_d8;
    func_0x00010837cf24(*pfVar10,pfVar10[1]);
    puVar7 = auStack_258;
    func_0x00010837ca9c();
    func_0x00010837cd20();
    func_0x00010837cee4();
    func_0x00010837cd94();
    *puVar7 = (int)unaff_d9;
    puVar7[1] = (int)unaff_d8;
    func_0x00010837cb1c();
    return ppuVar9;
  }
  uVar6 = *(uint *)(*ppuVar9 + 0x30);
  if ((((int)uVar6 < 1) ||
      (lVar1 = *(long *)(*ppuVar9 + 0x28) + (ulong)uVar6 * 8,
      0.00024414062 < ABS(*(float *)(lVar1 + -8) - *pfVar10))) ||
     (0.00024414062 < ABS(*(float *)(lVar1 + -4) - pfVar10[1]))) {
    func_0x0001081f7a64();
    *ppuVar8[1] = 0;
  }
  return ppuVar9;
}



/* Entry: 10837915c; end: 108379447;  */

float * FUN_10837915c(float *param_1,float *param_2,float *param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 in_ZR;
  bool bVar4;
  float *pfVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  code *pcVar12;
  undefined4 *puVar13;
  float fVar14;
  float *pfStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  float *pfStack_a8;
  float *pfStack_a0;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 uStack_78;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 *puVar11;
  
  pfVar5 = param_1;
  func_0x00010837caf0();
  pfVar7 = param_2;
  uStack_58 = extraout_x8;
  if (*(int *)(*(long *)param_2 + 0x48) == 0) goto LAB_1083793e4;
  if ((*(int *)(*(long *)param_1 + 0x48) == 0) &&
     (pfVar5 = param_3, func_0x0001081420b8(), (int)pfVar5 != 0)) {
    bVar2 = *(byte *)((long)param_1 + 0xe);
    func_0x00010837cf80();
    FUN_108376b90();
    *(byte *)((long)param_1 + 0xe) = *(byte *)((long)param_1 + 0xe) & 0xfc | bVar2 & 3;
    goto LAB_1083793e4;
  }
  auStack_88[0] = 0;
  uStack_78 = 0;
  if (param_1 == param_2) {
    pfVar5 = (float *)auStack_88;
    FUN_1081a06c8(pfVar5,param_2);
    param_2 = pfVar5;
    pfVar7 = pfVar5;
    if (param_4 == 0) goto LAB_1083791fc;
LAB_108379204:
    pfVar5 = param_3;
    func_0x0001081421e0();
    pcVar12 = (code *)(&PTR_FUN_110a3ee28)[(uint)pfVar5 & 0x1f];
    FUN_1081e8e40(&pfStack_a8);
    pfStack_c0 = pfStack_a8;
    puStack_b0 = puStack_90;
    uStack_b8 = uStack_98;
    bVar2 = 1;
    while (puVar13 = puStack_b0, in_ZR = 1, pfStack_c0 != pfStack_a0) {
      switch(*(char *)pfStack_c0) {
      case '\x01':
        func_0x00010837cc90();
        pfVar7 = &fStack_70;
        func_0x00010837cc60();
        break;
      case '\x02':
        func_0x00010837cca0();
        pfVar7 = &fStack_70;
        FUN_1081f7aa0(param_1,pfVar7,auStack_68);
        break;
      case '\x03':
        func_0x00010837cca0();
        pfVar7 = &fStack_70;
        FUN_1081f770c(*puVar13,param_1,pfVar7,auStack_68);
        break;
      case '\x04':
        (*pcVar12)(param_3,&fStack_70,uStack_b8,3);
        pfVar7 = &fStack_70;
        func_0x00010817abc4(param_1,pfVar7,auStack_68,auStack_60);
        break;
      case '\x05':
        func_0x00010837cc30();
        break;
      default:
        if (*(char *)pfStack_c0 != '\0') {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x108379414);
          (*pcVar12)();
        }
        func_0x00010837cc90();
        if ((param_4 != 1 || (bool)(bVar2 ^ 1)) || (*(int *)(*(long *)param_1 + 0x48) == 0)) {
          pfVar7 = &fStack_70;
          func_0x00010837ccdc();
        }
        else {
          FUN_108377cd4(param_1);
          uVar1 = *(uint *)(*(long *)param_1 + 0x30);
          if (0 < (int)uVar1) {
            lVar8 = *(long *)(*(long *)param_1 + 0x28) + (ulong)uVar1 * 8;
            fVar14 = *(float *)(lVar8 + -4);
            bVar4 = false;
            if ((*(float *)(lVar8 + -8) == fStack_70) &&
               (bVar4 = false, !NAN(fVar14) && !NAN(fStack_6c))) {
              bVar4 = fVar14 == fStack_6c;
            }
            if (bVar4) break;
          }
          pfVar7 = &fStack_70;
          func_0x00010837cc60();
        }
      }
      func_0x0001081e8ec8(&pfStack_c0);
      bVar2 = 0;
    }
  }
  else {
    pfVar7 = param_2;
    if (param_4 != 0) goto LAB_108379204;
LAB_1083791fc:
    func_0x00010837cde0();
    pfVar7 = param_2;
    if (((ulong)pfVar5 & 1) != 0) goto LAB_108379204;
    fVar14 = param_2[2];
    in_ZR = fVar14 == 0.0;
    iVar3 = -*(int *)(*(long *)param_1 + 0x30);
    if (-1 < (int)fVar14) {
      iVar3 = *(int *)(*(long *)param_1 + 0x30);
    }
    param_1[2] = (float)(iVar3 + (int)fVar14);
    func_0x00010837ca9c(&pfStack_a8);
    uVar6 = *(undefined8 *)param_2;
    FUN_10837e72c();
    FUN_1083645e0(param_3,pfStack_a8,*(undefined8 *)(*(long *)param_2 + 0x28),
                  *(undefined4 *)(*(long *)param_2 + 0x30));
    iVar3 = *(int *)(*(long *)param_2 + 0x60);
    pfVar7 = pfStack_a8;
    if (iVar3 != 0) {
      pfVar7 = *(float **)(*(long *)param_2 + 0x58);
      _memcpy(uVar6,pfVar7,(long)iVar3 << 2);
    }
    func_0x00010837cb1c();
  }
  func_0x00010819e850();
LAB_1083793e4:
  func_0x00010837cab0(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pfVar5 = (float *)auStack_88;
  func_0x00010819e850(pfVar5);
  func_0x00010837cb78();
  lVar8 = *(long *)pfVar7;
  if (*(int *)(lVar8 + 0x48) != 0) {
    puVar9 = *(undefined1 **)(lVar8 + 0x40);
    puVar13 = (undefined4 *)(*(long *)(lVar8 + 0x58) + (long)*(int *)(lVar8 + 0x60) * 4);
    puVar11 = puVar9 + *(int *)(lVar8 + 0x48);
    do {
      puVar10 = puVar11 + -1;
      if (puVar11 <= puVar9) {
        return pfVar5;
      }
      puVar11 = puVar10;
      switch(*puVar10) {
      case 0:
        goto LAB_108379508;
      case 1:
        func_0x00010837cd88();
        func_0x0001081f7a64();
        break;
      case 2:
        func_0x00010837cc38();
        FUN_1081f7aa0();
        break;
      case 3:
        puVar13 = puVar13 + -1;
        func_0x00010837cc38(*puVar13);
        FUN_1081f770c();
        break;
      case 4:
        func_0x00010837cc70();
      }
    } while( true );
  }
LAB_108379508:
  return pfVar5;
}



/* Entry: 108379448; end: 108379513;  */

undefined8 FUN_108379448(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar5;
  undefined1 *puVar4;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x48) != 0) {
    puVar2 = *(undefined1 **)(lVar1 + 0x40);
    puVar5 = (undefined4 *)(*(long *)(lVar1 + 0x58) + (long)*(int *)(lVar1 + 0x60) * 4);
    puVar4 = puVar2 + *(int *)(lVar1 + 0x48);
    do {
      puVar3 = puVar4 + -1;
      if (puVar4 <= puVar2) {
        return param_1;
      }
      puVar4 = puVar3;
      switch(*puVar3) {
      case 0:
        goto LAB_108379508;
      case 1:
        func_0x00010837cd88();
        func_0x0001081f7a64();
        break;
      case 2:
        func_0x00010837cc38();
        FUN_1081f7aa0();
        break;
      case 3:
        puVar5 = puVar5 + -1;
        func_0x00010837cc38(*puVar5);
        FUN_1081f770c();
        break;
      case 4:
        func_0x00010837cc70();
      }
    } while( true );
  }
LAB_108379508:
  return param_1;
}



/* Entry: 108379514; end: 10837967f;  */

long * FUN_108379514(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 auStack_78 [16];
  undefined1 uStack_68;
  byte *pbVar9;
  
  auStack_78[0] = 0;
  uStack_68 = 0;
  if (param_1 == param_2) {
    param_2 = (long *)auStack_78;
    FUN_1081a06c8();
  }
  bVar11 = false;
  lVar4 = *param_2;
  pbVar7 = *(byte **)(lVar4 + 0x40);
  puVar5 = (undefined4 *)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x30) * 8);
  puVar10 = (undefined4 *)(*(long *)(lVar4 + 0x58) + (long)*(int *)(lVar4 + 0x60) * 4);
  bVar3 = true;
  pbVar9 = pbVar7 + *(int *)(lVar4 + 0x48);
LAB_108379594:
  pbVar8 = pbVar9 + -1;
  if (pbVar9 <= pbVar7) {
    func_0x00010819e850(auStack_78);
    return param_1;
  }
  bVar1 = *pbVar8;
  bVar2 = (&UNK_10df1dedb)[bVar1];
  puVar6 = puVar5;
  if (bVar3) {
    puVar6 = puVar5 + -2;
    func_0x000108377934(*puVar6,puVar5[-1],param_1);
  }
  puVar5 = puVar6 + (ulong)bVar2 * -2;
  pbVar9 = pbVar8;
  switch((ulong)bVar1) {
  case 0:
    if (bVar11) {
      func_0x00010837cc30();
    }
    bVar11 = false;
    puVar5 = puVar5 + 2;
    bVar3 = true;
    goto LAB_108379594;
  case 1:
    func_0x00010837cd88();
    func_0x0001081f7a64();
    break;
  case 2:
    func_0x00010837cc38();
    FUN_1081f7aa0();
    break;
  case 3:
    puVar10 = puVar10 + -1;
    func_0x00010837cc38(*puVar10);
    FUN_1081f770c();
    bVar3 = false;
    goto LAB_108379594;
  case 4:
    func_0x00010837cc70();
    break;
  case 5:
    goto code_r0x00010837962c;
  }
  bVar3 = false;
  goto LAB_108379594;
code_r0x00010837962c:
  bVar3 = false;
  bVar11 = true;
  goto LAB_108379594;
}



/* Entry: 108379680; end: 1083796e3;  */

void FUN_108379680(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uStack_38;
  float fStack_30;
  undefined8 uStack_2c;
  float fStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  bVar1 = false;
  if ((param_2 == 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  uStack_38 = 0x3f800000;
  uStack_2c = 0x3f80000000000000;
  uStack_14 = 0x10;
  if (!bVar1) {
    uStack_14 = 0x11;
  }
  uStack_20 = 0;
  uStack_18 = 0x3f800000;
  fStack_30 = param_1;
  fStack_24 = param_2;
  FUN_1083796e4(param_3,&uStack_38,param_4,1);
  return;
}



/* Entry: 1083796e4; end: 108379cc7;  */

float * FUN_1083796e4(float *param_1,float *param_2,float *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined1 in_ZR;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  ulong *puVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  float *pfVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 auStack_1b0 [2];
  float *pfStack_1a0;
  byte bStack_192;
  ulong auStack_190 [2];
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong auStack_160 [2];
  long alStack_150 [6];
  ulong uStack_120;
  undefined8 uStack_118;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  uint uStack_c0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar8 = (int)auStack_1b0;
  pfVar9 = param_2;
  func_0x00010837caf0();
  pfVar14 = pfVar9;
  uStack_68 = extraout_x8;
  func_0x0001081420b8();
  if ((int)pfVar9 == 0) {
    pfVar12 = param_1;
    if (param_3 != (float *)0x0) {
      pfVar12 = param_3;
    }
    func_0x00010837cde0();
    if ((int)pfVar9 == 0) {
      cVar6 = *(char *)(param_1 + 3);
      pfVar14 = *(float **)param_1;
      pfVar9 = pfVar12;
      FUN_10837e1fc(pfVar12,pfVar14,param_2);
      if (param_1 != pfVar12) {
        pfVar12[2] = param_1[2];
        bVar3 = *(byte *)((long)pfVar12 + 0xe);
        bVar1 = *(byte *)((long)param_1 + 0xe) & 3;
        *(byte *)((long)pfVar12 + 0xe) = bVar3 & 0xfc | bVar1;
        *(byte *)((long)pfVar12 + 0xe) = bVar3 & 0xf8 | bVar1 | *(byte *)((long)param_1 + 0xe) & 4;
      }
      if (cVar6 == '\0') {
        pfVar9 = param_2;
        FUN_1082878d0();
        if ((int)pfVar9 == 0) {
LAB_108379874:
          cVar6 = '\x02';
        }
        else {
          pfVar15 = *(float **)(*(long *)param_1 + 0x28);
          for (lVar16 = 1; lVar16 < *(int *)(*(long *)param_1 + 0x30); lVar16 = lVar16 + 1) {
            if ((*pfVar15 != pfVar15[2]) && (pfVar15[1] != pfVar15[3])) goto LAB_108379874;
            pfVar15 = pfVar15 + 2;
          }
          cVar6 = '\0';
        }
      }
      *(char *)(pfVar12 + 3) = cVar6;
      cVar6 = *(char *)((long)param_1 + 0xd);
      in_ZR = cVar6 == '\x02';
      if (!(bool)in_ZR) {
        fVar19 = -(param_2[3] * param_2[1]) + param_2[4] * *param_2;
        in_ZR = fVar19 == 0.0;
        if (0.0 <= fVar19) {
          if (fVar19 <= 0.0) {
            cVar6 = '\x02';
          }
          else {
            cVar6 = *(char *)((long)param_1 + 0xd);
          }
        }
        else {
          cVar6 = (char)*(undefined4 *)(&UNK_10df16b14 + (ulong)*(byte *)((long)param_1 + 0xd) * 4);
        }
      }
      *(char *)((long)pfVar12 + 0xd) = cVar6;
      goto LAB_108379bfc;
    }
    FUN_108376ad8(&pfStack_1a0);
    bStack_192 = bStack_192 & 0xfc | *(byte *)((long)param_1 + 0xe) & 3;
    FUN_108376ad8();
    if ((param_4 == 1) && (func_0x00010837cde0(), iVar8 != 0)) {
      fVar19 = param_2[6];
      fVar23 = param_2[7];
      fVar25 = fVar23 * fVar23 + fVar19 * fVar19;
      if (fVar25 == 0.0) {
        fVar25 = 1.0;
        fVar23 = 0.0;
        fVar19 = 0.0;
LAB_108379930:
        pfVar9 = param_1;
        func_0x0001083773e0();
        fVar20 = pfVar9[2];
        fVar5 = *pfVar9;
        if (0.0 <= fVar19) {
          fVar20 = *pfVar9;
          fVar5 = pfVar9[2];
        }
        fVar24 = pfVar9[1];
        fVar4 = pfVar9[3];
        if (0.0 <= fVar23) {
          fVar24 = pfVar9[3];
          fVar4 = pfVar9[1];
        }
        fVar20 = fVar25 + fVar23 * fVar4 + fVar20 * fVar19;
        cVar6 = 0.0 <= fVar20;
        if (fVar20 * (fVar25 + fVar23 * fVar24 + fVar5 * fVar19) <= 0.0) {
          cVar6 = '\x02';
        }
        if (cVar6 == '\x01') goto LAB_108379af0;
        if (cVar6 != '\x02') goto LAB_108379aa0;
        alStack_150[1] = 0;
        alStack_150[0] = 0x3f800000;
        alStack_150[3] = 0;
        alStack_150[2] = 0x3f800000;
        alStack_150[4] = 0x103f800000;
        fStack_84 = -fVar19;
        fStack_88 = -(fVar19 * fVar25);
        fStack_7c = -(fVar23 * fVar25);
        uStack_78 = 0;
        uStack_70 = 0x803f800000;
        pfVar9 = &fStack_90;
        fStack_90 = fVar23;
        fStack_8c = fVar19;
        fStack_80 = fVar23;
        FUN_10818cfd0(pfVar9,alStack_150);
        if (((ulong)pfVar9 & 1) == 0) {
          FUN_108376ad8(auStack_190);
        }
        else {
          FUN_108376ad8(auStack_160);
          FUN_1083796e4(param_1,alStack_150,auStack_160,1);
          uVar10 = auStack_160[0];
          FUN_1083773a0();
          if ((uVar10 & 1) == 0) {
            FUN_108376ad8(auStack_190);
          }
          else {
            uStack_168 = 0x7f7fffff7f7fffff;
            uStack_170 = 0xff7fffff;
            func_0x00010837cf98(&uStack_120);
            uStack_98 = 0;
            FUN_10834ec60(auStack_160,&uStack_170,0,FUN_10837c914,&uStack_120);
            uStack_c0 = *(byte *)((long)param_1 + 0xe) & 3;
            FUN_10837d48c(auStack_180,&uStack_120);
            FUN_1081a40d4(auStack_190,auStack_180,&fStack_90,1);
            func_0x00010837cdb4();
            uVar10 = auStack_190[0];
            FUN_1083773a0();
            if ((uVar10 & 1) == 0) {
              FUN_108376ad8(auStack_180);
              FUN_108376b90(auStack_190,auStack_180);
              func_0x00010837cdb4();
            }
            FUN_10837d00c(&uStack_120);
          }
          FUN_10837ca5c(auStack_160[0]);
        }
        FUN_108376b90(auStack_1b0,auStack_190);
        uStack_120 = auStack_190[0];
      }
      else {
        fVar25 = 1.0 / SQRT(fVar25);
        fVar19 = fVar25 * fVar19;
        fVar23 = fVar25 * fVar23;
        fVar25 = fVar25 * (param_2[8] + -6.1035156e-05);
        if ((!NAN(fVar23 * (fVar19 - fVar19) * fVar25)) && ((fVar19 != 0.0 || (fVar23 != 0.0))))
        goto LAB_108379930;
LAB_108379aa0:
        FUN_108376ad8(&uStack_120);
        FUN_108376b90(auStack_1b0,&uStack_120);
      }
      FUN_10837ca5c(uStack_120);
      param_1 = (float *)auStack_1b0;
    }
LAB_108379af0:
    uStack_120 = *(ulong *)(*(long *)param_1 + 0x28);
    uStack_118 = *(undefined8 *)(*(long *)param_1 + 0x40);
    func_0x00010837cb00();
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    puStack_108 = extraout_x8_00;
    while( true ) {
      puVar11 = &uStack_120;
      FUN_108379cc8(puVar11,&fStack_90);
      in_ZR = (int)puVar11 == 6;
      if ((bool)in_ZR) break;
      uVar21 = 0x3f800000;
      switch((ulong)puVar11 & 0xffffffff) {
      case 0:
        FUN_10817abbc(&pfStack_1a0,&fStack_90);
        break;
      case 1:
        func_0x0001081f7a64(&pfStack_1a0,&fStack_88);
        break;
      case 3:
        uVar21 = *puStack_108;
      case 2:
        func_0x0001083533ec(uVar21,&fStack_90,param_2);
        FUN_1081f770c(&pfStack_1a0,&fStack_88,&fStack_80);
        break;
      case 4:
        FUN_108379e48(&pfStack_1a0,&fStack_90,2);
        break;
      case 5:
        FUN_108377ec8(0x3f800000,&pfStack_1a0);
      }
    }
    func_0x000108376c1c(pfVar12,&pfStack_1a0);
    func_0x00010837ca9c(alStack_150);
    *(undefined1 *)(alStack_150[0] + 0xc0) = 0;
    pfVar14 = *(float **)(alStack_150[0] + 0x28);
    func_0x00010827a0cc(param_2,pfVar14,*(undefined4 *)(alStack_150[0] + 0x30));
    *(undefined1 *)((long)pfVar12 + 0xd) = 2;
    FUN_10837ca5c(auStack_1b0[0]);
    pfVar9 = pfStack_1a0;
    FUN_10837ca5c();
LAB_108379bfc:
    func_0x00010837cab0(uStack_68);
    if ((bool)in_ZR) {
      return pfVar9;
    }
  }
  else {
    if (param_3 == (float *)0x0) goto LAB_108379bfc;
    bVar7 = param_3 == param_1;
    in_ZR = 1;
    if (bVar7) goto LAB_108379bfc;
    func_0x00010837cab0(uStack_68);
    if (bVar7) {
      if (param_3 != param_1) {
        piVar13 = *(int **)param_1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar7) {
            *piVar13 = *piVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        FUN_108376bdc(param_3);
        func_0x00010837cd88();
        FUN_108376b50();
      }
      return param_3;
    }
  }
  ___stack_chk_fail();
  func_0x00010837cdb4();
  FUN_10837ca5c(auStack_190[0]);
  FUN_10837d00c(&uStack_120);
  FUN_10837ca5c(auStack_160[0]);
  FUN_10837ca5c(auStack_1b0[0]);
  FUN_10837ca5c();
  pfVar9 = pfStack_1a0;
  func_0x00010837cb78();
  pbVar2 = *(byte **)(pfVar9 + 2);
  if (pbVar2 == *(byte **)(pfVar9 + 4)) {
    if (*(char *)((long)pfVar9 + 0x31) != '\x01') {
      return (float *)0x6;
    }
    pfVar14 = pfVar9;
    func_0x00010837ce40();
    if ((int)pfVar14 == 1) {
      return (float *)0x1;
    }
LAB_108379d54:
    *(undefined1 *)((long)pfVar9 + 0x31) = 0;
    pfVar12 = (float *)0x5;
  }
  else {
    *(byte **)(pfVar9 + 2) = pbVar2 + 1;
    pfVar12 = (float *)(ulong)*pbVar2;
    plVar17 = *(long **)pfVar9;
    plVar18 = plVar17;
    switch(pfVar12) {
    case (float *)0x0:
      if (*(char *)((long)pfVar9 + 0x31) == '\x01') {
        *(byte **)(pfVar9 + 2) = pbVar2;
        func_0x00010837ce40();
        if ((int)pfVar12 != 5) {
          return pfVar12;
        }
        goto LAB_108379d54;
      }
      if (pbVar2 + 1 == *(byte **)(pfVar9 + 4)) {
        return (float *)0x6;
      }
      pfVar12 = (float *)0x0;
      *(long *)(pfVar9 + 8) = *plVar17;
      plVar18 = plVar17 + 1;
      *(long *)pfVar14 = *plVar17;
      *(long *)(pfVar9 + 10) = *(long *)(pfVar9 + 8);
      *(undefined1 *)((long)pfVar9 + 0x31) = *(undefined1 *)(pfVar9 + 0xc);
      break;
    case (float *)0x1:
      *(long *)pfVar14 = *(long *)(pfVar9 + 10);
      *(long *)(pfVar14 + 2) = *plVar17;
      plVar18 = plVar17 + 1;
      *(long *)(pfVar9 + 10) = *plVar17;
      *(undefined1 *)((long)pfVar9 + 0x32) = 0;
      pfVar12 = (float *)0x1;
      break;
    case (float *)0x3:
      *(long *)(pfVar9 + 6) = *(long *)(pfVar9 + 6) + 4;
    case (float *)0x2:
      *(long *)pfVar14 = *(long *)(pfVar9 + 10);
      lVar16 = *plVar17;
      *(long *)(pfVar14 + 4) = plVar17[1];
      *(long *)(pfVar14 + 2) = lVar16;
      *(long *)(pfVar9 + 10) = plVar17[1];
      plVar18 = plVar17 + 2;
      break;
    case (float *)0x4:
      *(long *)pfVar14 = *(long *)(pfVar9 + 10);
      lVar22 = plVar17[1];
      lVar16 = *plVar17;
      *(long *)(pfVar14 + 6) = plVar17[2];
      *(long *)(pfVar14 + 4) = lVar22;
      *(long *)(pfVar14 + 2) = lVar16;
      *(long *)(pfVar9 + 10) = plVar17[2];
      plVar18 = plVar17 + 3;
      pfVar12 = (float *)0x4;
      break;
    case (float *)0x5:
      func_0x00010837ce40();
      if ((int)pfVar12 == 1) {
        *(long *)(pfVar9 + 2) = *(long *)(pfVar9 + 2) + -1;
      }
      else {
        *(undefined1 *)((long)pfVar9 + 0x31) = 0;
      }
      *(long *)(pfVar9 + 10) = *(long *)(pfVar9 + 8);
    }
    *(long **)pfVar9 = plVar18;
  }
  return pfVar12;
}



/* Entry: 108379cc8; end: 108379e47;  */

void FUN_108379cc8(long *param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  pbVar1 = (byte *)param_1[1];
  if (pbVar1 == (byte *)param_1[2]) {
    if (*(char *)((long)param_1 + 0x31) != '\x01') {
      return;
    }
    plVar3 = param_1;
    func_0x00010837ce40();
    if ((int)plVar3 == 1) {
      return;
    }
LAB_108379d54:
    *(undefined1 *)((long)param_1 + 0x31) = 0;
  }
  else {
    param_1[1] = (long)(pbVar1 + 1);
    uVar2 = (uint)*pbVar1;
    plVar4 = (long *)*param_1;
    plVar3 = plVar4;
    switch(*pbVar1) {
    case 0:
      if (*(char *)((long)param_1 + 0x31) == '\x01') {
        param_1[1] = (long)pbVar1;
        func_0x00010837ce40();
        if (uVar2 != 5) {
          return;
        }
        goto LAB_108379d54;
      }
      if (pbVar1 + 1 == (byte *)param_1[2]) {
        return;
      }
      param_1[4] = *plVar4;
      plVar3 = plVar4 + 1;
      *param_2 = *plVar4;
      param_1[5] = param_1[4];
      *(char *)((long)param_1 + 0x31) = (char)param_1[6];
      break;
    case 1:
      *param_2 = param_1[5];
      param_2[1] = *plVar4;
      plVar3 = plVar4 + 1;
      param_1[5] = *plVar4;
      *(undefined1 *)((long)param_1 + 0x32) = 0;
      break;
    case 3:
      param_1[3] = param_1[3] + 4;
    case 2:
      *param_2 = param_1[5];
      lVar5 = *plVar4;
      param_2[2] = plVar4[1];
      param_2[1] = lVar5;
      param_1[5] = plVar4[1];
      plVar3 = plVar4 + 2;
      break;
    case 4:
      *param_2 = param_1[5];
      lVar6 = plVar4[1];
      lVar5 = *plVar4;
      param_2[3] = plVar4[2];
      param_2[2] = lVar6;
      param_2[1] = lVar5;
      param_1[5] = plVar4[2];
      plVar3 = plVar4 + 3;
      break;
    case 5:
      func_0x00010837ce40();
      if (uVar2 == 1) {
        param_1[1] = param_1[1] + -1;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x31) = 0;
      }
      param_1[5] = param_1[4];
    }
    *param_1 = (long)plVar3;
  }
  return;
}



/* Entry: 108379e48; end: 108379efb;  */

long FUN_108379e48(long param_1,long param_2,int param_3)

{
  char cVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_70 [24];
  undefined4 auStack_58 [2];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined4 *)(param_2 + 0xc);
      uVar7 = *(undefined4 *)(param_2 + 0x10);
      uVar8 = *(undefined4 *)(param_2 + 0x14);
      uVar9 = *(undefined4 *)(param_2 + 0x18);
      uVar10 = *(undefined4 *)(param_2 + 0x1c);
      FUN_108377cd4();
      puVar2 = auStack_58;
      func_0x00010837ca9c();
      func_0x00010837cee4();
      FUN_10837e8b4();
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar2[4] = uVar9;
      puVar2[5] = uVar10;
      func_0x00010837cb1c();
      return param_1;
    }
  }
  else {
    FUN_108351de8(param_2,auStack_70);
    func_0x00010837ce34();
    func_0x00010837ce34();
    func_0x00010837cab0(lVar3);
    param_1 = param_2;
    if ((bool)in_ZR) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  pcVar4 = *(char **)(param_1 + 8);
  if ((pcVar4 == (char *)0x0) || (pcVar4 == *(char **)(param_1 + 0x10))) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*pcVar4 == '\0') {
      pcVar4 = pcVar4 + 1;
    }
    do {
      if (*(char **)(param_1 + 0x10) <= pcVar4) {
        return 0;
      }
      cVar1 = '\x03';
      if (*pcVar4 != '\0') {
        cVar1 = *pcVar4 == '\x05';
      }
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == '\0');
    if (cVar1 == '\x03') {
      return 0;
    }
  }
  return 1;
}



/* Entry: 108379efc; end: 108379fb3;  */

undefined8 FUN_108379efc(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 8);
  if ((pcVar2 == (char *)0x0) || (pcVar2 == *(char **)(param_1 + 0x10))) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*pcVar2 == '\0') {
      pcVar2 = pcVar2 + 1;
    }
    do {
      if (*(char **)(param_1 + 0x10) <= pcVar2) {
        return 0;
      }
      cVar1 = '\x03';
      if (*pcVar2 != '\0') {
        cVar1 = *pcVar2 == '\x05';
      }
      pcVar2 = pcVar2 + 1;
    } while (cVar1 == '\0');
    if (cVar1 == '\x03') {
      return 0;
    }
  }
  return 1;
}



/* Entry: 108379fb4; end: 10837a0c3;  */

void FUN_108379fb4(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1081e8e40(&uStack_40);
  *param_1 = uStack_40;
  param_1[2] = uStack_28;
  param_1[1] = uStack_30;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = uStack_38;
  return;
}



/* Entry: 10837a0c4; end: 10837a2cf;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3774) */
/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_10837a0c4(ulong param_1,long *param_2,long param_3,undefined1 *param_4,undefined8 param_5,
                  undefined1 *param_6)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 extraout_x8;
  uint *extraout_x8_00;
  ulong uVar15;
  float fVar16;
  ulong uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  uint *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  
  puVar13 = param_4;
  func_0x00010837caf0();
  lStack_d0 = *(long *)(*param_2 + 0x28);
  uStack_c8 = *(undefined8 *)(*param_2 + 0x40);
  uStack_78 = extraout_x8;
  func_0x00010837cb00();
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_e0 = (long *)(&PTR_DAT_110a3f000)[(ulong)*(byte *)((long)param_2 + 0xe) & 3];
  plStack_d8 = (long *)0x1138270b0;
  puStack_b8 = extraout_x8_00;
  FUN_1083a394c(&plStack_d8,&UNK_10f49010c);
  uVar15 = 0xc640e400;
LAB_10837a190:
  do {
    plVar8 = &lStack_d0;
    FUN_108379cc8(plVar8,auStack_98);
    fVar16 = (float)param_1;
    iVar14 = (int)param_5;
    uVar7 = (uint)plVar8 == 6;
    if ((bool)uVar7) {
      if (param_3 != 0) {
        func_0x00010818662c(param_3,plStack_d8 + 1);
      }
      plVar8 = plStack_d8;
      FUN_1083a3ca0();
      func_0x00010837cab0(uStack_78);
      if (!(bool)uVar7) {
        ___stack_chk_fail();
        plVar9 = plStack_d8;
        FUN_1083a3ca0();
        func_0x00010837cb78();
        puStack_130 = &UNK_10df1deb6;
        puStack_128 = &UNK_10f490134;
        puStack_118 = &UNK_10f490172;
        puStack_110 = &UNK_10f4901ac;
        puStack_108 = &UNK_10f490158;
        pcStack_e8 = FUN_10837a2d0;
        uStack_138 = uVar15;
        puStack_120 = auStack_90;
        puStack_100 = param_4;
        plStack_f8 = plVar8;
        puStack_f0 = &stack0xfffffffffffffff0;
        FUN_10818f348();
        func_0x00010837cc68();
        uVar3 = iVar14 * 2;
        for (uVar15 = 0; uVar3 != uVar15; uVar15 = uVar15 + 1) {
          FUN_1083a3e1c(*(undefined4 *)(puVar13 + uVar15 * 4),plVar9,param_6);
          if (uVar15 < uVar3 - 1) {
            func_0x00010837cf80();
            FUN_10818f348();
          }
        }
        if (fVar16 != -12345.0) {
          func_0x00010837cc68();
          func_0x00010837cbb0();
          FUN_1083a3e1c();
        }
        func_0x00010837cc68();
        if ((int)param_6 != 0) {
          func_0x00010837cc68();
          for (uVar15 = 0; uVar3 != uVar15; uVar15 = uVar15 + 1) {
            FUN_10837c0f4(*(undefined4 *)(puVar13 + uVar15 * 4),plVar9);
            if (uVar15 < uVar3 - 1) {
              FUN_10818f348(plVar9,&UNK_10f4901af);
            }
          }
          if (0.0 <= fVar16) {
            func_0x00010837cc68();
            func_0x00010837cbb0();
            FUN_10837c0f4();
          }
        }
        puVar6 = puStack_118;
        puVar13 = puStack_120;
        puVar5 = puStack_128;
        puVar12 = puStack_130;
        plVar8 = plVar9;
        FUN_1083a3d50();
        if (plVar8 != (long *)0x0) {
          uVar15 = (ulong)*(uint *)*plVar9;
          plVar2 = (long *)(uVar15 ^ 0xffffffff);
          if ((long)plVar8 + uVar15 >> 0x20 == 0) {
            plVar2 = plVar8;
          }
          if (plVar2 != (long *)0x0) {
            uVar1 = (long)plVar2 + uVar15;
            puStack_130 = puVar12;
            puStack_128 = puVar5;
            puStack_120 = puVar13;
            puStack_118 = puVar6;
            if (((uint *)*plVar9)[1] == 1 && (uVar1 ^ uVar15) < 4) {
              plVar8 = plVar9;
              func_0x0001083a3dbc(plVar9,0xffffffffffffffff,&UNK_10f490213);
              func_0x0001083a3dd4((long)plVar8 + uVar15);
              *(undefined1 *)((long)plVar8 + uVar1) = 0;
              *(int *)*plVar9 = (int)uVar1;
            }
            else {
              puVar10 = &uStack_138;
              FUN_1083a3310(puVar10,(long)plVar2 + (ulong)*(uint *)*plVar9);
              func_0x0001083a3de0();
              if (uVar15 != 0) {
                func_0x0001083a3d9c(puVar10,*plVar9 + 8);
              }
              func_0x0001083a3dd4((long)puVar10 + uVar15);
              puVar11 = (uint *)*plVar9;
              lVar4 = *puVar11 - uVar15;
              if (uVar15 <= *puVar11 && lVar4 != 0) {
                _memcpy((long)puVar10 + uVar15 + (long)plVar2,(long)puVar11 + uVar15 + 8,lVar4);
                puVar11 = (uint *)*plVar9;
              }
              func_0x0001083a3cdc(puVar11);
            }
          }
        }
        return;
      }
      return;
    }
    if (5 < (uint)plVar8) goto LAB_10837a254;
    param_5 = 1;
    puVar13 = auStack_98;
    puVar12 = &UNK_10f490134;
    param_1 = uVar15;
    switch((ulong)plVar8 & 0xffffffff) {
    case 1:
      puVar12 = &UNK_10f490140;
      puVar13 = auStack_90;
      break;
    case 2:
      param_5 = 2;
      puVar12 = &UNK_10f49014c;
      puVar13 = auStack_90;
      break;
    case 3:
      param_5 = 2;
      puVar12 = &UNK_10f490158;
      puVar13 = auStack_90;
      param_1 = (ulong)*puStack_b8;
      break;
    case 4:
      param_5 = 3;
      puVar12 = &UNK_10f490165;
      puVar13 = auStack_90;
      break;
    case 5:
      FUN_10818f348(&plStack_d8,&UNK_10f490172);
      goto code_r0x00010837a21c;
    }
    param_6 = param_4;
    FUN_10837a2d0(&plStack_d8,puVar12);
code_r0x00010837a21c:
  } while (param_3 != 0);
  goto LAB_10837a220;
LAB_10837a254:
  plStack_e0 = plVar8;
  FUN_10841076c(&UNK_10f490181);
  if (param_3 == 0) {
LAB_10837a220:
    if ((int)*plStack_d8 != 0) {
      plStack_e0 = plStack_d8 + 1;
      FUN_10841076c(&UNK_10f4901ac);
      FUN_1083a357c(&plStack_d8);
    }
  }
  goto LAB_10837a190;
}



/* Entry: 10837a2d0; end: 10837a417;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3774) */
/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_10837a2d0(float param_1,long *param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  uint *puVar7;
  ulong uVar8;
  
  FUN_10818f348();
  func_0x00010837cc68();
  uVar3 = param_5 * 2;
  for (uVar8 = 0; uVar3 != uVar8; uVar8 = uVar8 + 1) {
    FUN_1083a3e1c(*(undefined4 *)(param_4 + uVar8 * 4),param_2,param_6);
    if (uVar8 < uVar3 - 1) {
      func_0x00010837cf80();
      FUN_10818f348();
    }
  }
  if (param_1 != -12345.0) {
    func_0x00010837cc68();
    func_0x00010837cbb0();
    FUN_1083a3e1c();
  }
  func_0x00010837cc68();
  if ((int)param_6 != 0) {
    func_0x00010837cc68();
    for (uVar8 = 0; uVar3 != uVar8; uVar8 = uVar8 + 1) {
      FUN_10837c0f4(*(undefined4 *)(param_4 + uVar8 * 4),param_2);
      if (uVar8 < uVar3 - 1) {
        FUN_10818f348(param_2,&UNK_10f4901af);
      }
    }
    if (0.0 <= param_1) {
      func_0x00010837cc68();
      func_0x00010837cbb0();
      FUN_10837c0f4();
    }
  }
  plVar5 = param_2;
  FUN_1083a3d50();
  if (plVar5 != (long *)0x0) {
    uVar8 = (ulong)*(uint *)*param_2;
    plVar2 = (long *)(uVar8 ^ 0xffffffff);
    if ((long)plVar5 + uVar8 >> 0x20 == 0) {
      plVar2 = plVar5;
    }
    if (plVar2 != (long *)0x0) {
      uVar1 = (long)plVar2 + uVar8;
      if (((uint *)*param_2)[1] == 1 && (uVar1 ^ uVar8) < 4) {
        plVar5 = param_2;
        func_0x0001083a3dbc(param_2,0xffffffffffffffff,&UNK_10f490213);
        func_0x0001083a3dd4((long)plVar5 + uVar8);
        *(undefined1 *)((long)plVar5 + uVar1) = 0;
        *(int *)*param_2 = (int)uVar1;
      }
      else {
        puVar6 = &stack0xffffffffffffffa8;
        FUN_1083a3310(puVar6,(long)plVar2 + (ulong)*(uint *)*param_2);
        func_0x0001083a3de0();
        if (uVar8 != 0) {
          func_0x0001083a3d9c(puVar6,*param_2 + 8);
        }
        func_0x0001083a3dd4(puVar6 + uVar8);
        puVar7 = (uint *)*param_2;
        lVar4 = *puVar7 - uVar8;
        if (uVar8 <= *puVar7 && lVar4 != 0) {
          _memcpy(puVar6 + uVar8 + (long)plVar2,(long)puVar7 + uVar8 + 8,lVar4);
          puVar7 = (uint *)*param_2;
        }
        func_0x0001083a3cdc(puVar7);
      }
    }
  }
  return;
}



/* Entry: 10837a418; end: 10837a447;  */

uint FUN_10837a418(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  do {
    if (uVar1 == uVar2) {
LAB_10837a43c:
      if ((int)param_2 <= (int)uVar1) {
        uVar1 = param_2;
      }
      return uVar1;
    }
    if (*(char *)(param_1 + uVar2) != '\0') {
      uVar1 = (uint)uVar2;
      goto LAB_10837a43c;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 10837a448; end: 10837a52f;  */

ulong FUN_10837a448(ulong param_1)

{
  float *pfVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  
  uVar3 = param_1;
  func_0x00010837a480(param_1,param_1);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  pfVar1 = (float *)(param_1 + 8);
  fVar4 = -(*pfVar1 * *(float *)(param_1 + 0x1c)) +
          *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x18);
  if (NAN(fVar4 - fVar4)) {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else {
    if (fVar4 == 0.0) {
      if (*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0xc) +
          *pfVar1 * *(float *)(param_1 + 0x18) < 0.0) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)pfVar1;
        iVar2 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        return (ulong)(iVar2 < 2);
      }
    }
    else {
      iVar2 = 2;
      if (fVar4 <= 0.0) {
        iVar2 = 1;
      }
      if (*(int *)(param_1 + 0x20) == 5) {
        *(int *)(param_1 + 0x20) = iVar2;
        *(uint *)(param_1 + 0x24) = (uint)(fVar4 <= 0.0);
      }
      else if (iVar2 != *(int *)(param_1 + 0x20)) {
        *(undefined4 *)(param_1 + 0x24) = 2;
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)pfVar1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10837a530; end: 10837a60f;  */

void FUN_10837a530(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined1 **)(param_1 + 4);
  puVar1 = *(undefined1 **)(param_1 + 6);
  if (puVar3 < puVar1) {
    if ((*(byte *)(param_1 + 10) & 1) == 0) {
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + (long)*param_1 * 8;
      iVar2 = 1;
LAB_10837a564:
      puVar3 = puVar3 + 1;
      if (puVar1 <= puVar3) goto LAB_10837a5c4;
      switch(*puVar3) {
      case 0:
        goto code_r0x00010837a5c0;
      case 1:
        iVar4 = 1;
        break;
      case 3:
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
      case 2:
        iVar4 = 2;
        break;
      case 4:
        iVar4 = 3;
        break;
      default:
        goto LAB_10837a564;
      }
      iVar2 = iVar2 + iVar4;
      goto LAB_10837a564;
    }
  }
  else {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
code_r0x00010837a5c0:
  puVar1 = puVar3;
LAB_10837a5c4:
  *param_1 = iVar2;
  *(undefined1 **)(param_1 + 4) = puVar1;
  return;
}



/* Entry: 10837a610; end: 10837b00f;  */

uint FUN_10837a610(float *param_1)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  ulong *puVar15;
  undefined8 extraout_x8;
  float *extraout_x8_00;
  long lVar16;
  float *extraout_x8_01;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  ulong uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  ulong unaff_d8;
  float unaff_s9;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float *pfStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [2];
  undefined8 uStack_110;
  float afStack_108 [4];
  float fStack_f8;
  float afStack_f4 [15];
  undefined8 uStack_b8;
  
  func_0x00010837caf0();
  bVar2 = *(byte *)((long)param_1 + 0xe);
  uVar17 = bVar2 >> 1 & 1;
  uStack_b8 = extraout_x8;
  if (*(int *)(*(long *)param_1 + 0x48) != 0) {
    func_0x00010837cf24();
    pfVar13 = param_1;
    func_0x0001083773e0();
    fVar32 = pfVar13[1];
    fVar24 = pfVar13[2];
    uVar19 = (ulong)(uint)*pfVar13;
    bVar4 = false;
    bVar6 = true;
    if (*pfVar13 <= unaff_s9) {
      bVar4 = false;
      bVar6 = true;
      if (!NAN(unaff_s9) && !NAN(fVar24)) {
        bVar4 = unaff_s9 == fVar24;
        bVar6 = fVar24 <= unaff_s9;
      }
    }
    in_ZR = false;
    bVar7 = true;
    fVar24 = (float)unaff_d8;
    if (!bVar6 || bVar4) {
      in_ZR = false;
      bVar7 = true;
      if (!NAN(fVar32) && !NAN(fVar24)) {
        in_ZR = fVar32 == fVar24;
        bVar7 = fVar24 <= fVar32;
      }
    }
    if (!bVar7 || (bool)in_ZR) {
      fVar32 = pfVar13[3];
      uVar27 = (ulong)(uint)fVar32;
      in_ZR = fVar24 == fVar32;
      if (fVar24 <= fVar32) {
        uVar17 = 0;
        uStack_198 = *(undefined8 *)(*(long *)param_1 + 0x28);
        uStack_190 = *(undefined8 *)(*(long *)param_1 + 0x40);
        func_0x00010837cb00();
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 1;
        uStack_19c = 0;
        pfStack_180 = extraout_x8_00;
        do {
          func_0x00010837ce08();
          iVar12 = (int)pfVar13 + -1;
          cVar9 = SBORROW4(iVar12,5);
          cVar10 = (int)pfVar13 + -6 < 0;
          bVar4 = iVar12 == 5;
          iVar21 = -1;
          switch(iVar12) {
          case 0:
            func_0x00010837cd10();
            fVar34 = (float)uVar19;
            fVar36 = (float)uVar27;
            fVar32 = fVar34;
            fVar29 = fVar36;
            if (bVar4 || cVar10 != cVar9) {
              iVar21 = 1;
              fVar32 = fVar36;
              fVar29 = fVar34;
            }
            bVar4 = false;
            bVar6 = false;
            bVar7 = false;
            if (fVar29 <= fVar24) {
              bVar4 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar24) && !NAN(fVar32)) {
                bVar4 = fVar24 < fVar32;
                bVar6 = fVar24 == fVar32;
                bVar7 = false;
              }
            }
            if (!bVar6 && bVar4 == bVar7) goto code_r0x00010837a9a4;
            if (fVar34 == fVar36) {
              bVar4 = true;
              if (((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0) &&
                 (bVar4 = false, !NAN(unaff_s9) && !NAN(fStack_130))) {
                bVar4 = unaff_s9 == fStack_130;
              }
              if (!bVar4) goto code_r0x00010837aa20;
code_r0x00010837a99c:
              if (fVar24 == fVar32) {
code_r0x00010837a9a4:
                iVar12 = 0;
              }
              else {
                fVar32 = -((unaff_s9 - fStack_138) * (fVar36 - fVar34)) +
                         (fVar24 - fVar34) * (fStack_130 - fStack_138);
                if (fVar32 == 0.0) {
                  bVar4 = false;
                  if ((unaff_s9 == fStack_130) && (bVar4 = false, !NAN(fVar24) && !NAN(fVar36))) {
                    bVar4 = fVar24 == fVar36;
                  }
                  if (!bVar4) goto code_r0x00010837aa20;
                  goto code_r0x00010837a9a4;
                }
                bVar4 = false;
                bVar6 = true;
                bVar7 = false;
                if (fVar34 <= fVar36) {
                  bVar4 = false;
                  bVar6 = false;
                  bVar7 = true;
                  if (!NAN(fVar32)) {
                    bVar4 = fVar32 < 0.0;
                    bVar6 = fVar32 == 0.0;
                    bVar7 = false;
                  }
                }
                bVar1 = fVar36 < fVar34;
                if (0.0 <= fVar32) {
                  bVar1 = !bVar6 && bVar4 == bVar7;
                }
                iVar12 = 0;
                if (!bVar1) {
                  iVar12 = iVar21;
                }
              }
            }
            else {
              bVar4 = false;
              if ((unaff_s9 == fStack_138) && (bVar4 = false, !NAN(fVar24) && !NAN(fVar34))) {
                bVar4 = fVar24 == fVar34;
              }
              if (!bVar4) goto code_r0x00010837a99c;
code_r0x00010837aa20:
              uStack_19c = uStack_19c + 1;
              iVar12 = 0;
            }
            uVar17 = iVar12 + uVar17;
            break;
          case 1:
            func_0x00010837cd10();
            if (bVar4) {
code_r0x00010837a900:
              iVar21 = 0;
              pfVar13 = &fStack_138;
              pfVar14 = &fStack_128;
            }
            else {
              uVar19 = (ulong)(uint)fStack_124;
              if (!(bool)cVar10) {
                if ((float)uVar27 < fStack_124) goto code_r0x00010837a9b4;
                goto code_r0x00010837a900;
              }
              if ((float)uVar27 <= fStack_124) goto code_r0x00010837a900;
code_r0x00010837a9b4:
              pfVar13 = (float *)&uStack_110;
              pfVar14 = &fStack_138;
              FUN_1083516a8(pfVar14,&uStack_110);
              iVar21 = (int)pfVar14;
              pfVar14 = afStack_108 + 2;
            }
            func_0x00010837cc84(pfVar13,&uStack_19c);
            FUN_10837c1a8();
            iVar12 = (int)pfVar13;
            if (iVar21 != 0) {
              func_0x00010837cc84(pfVar14,&uStack_19c);
              FUN_10837c1a8();
              iVar12 = (int)pfVar14 + iVar12;
              pfVar13 = pfVar14;
            }
            uVar17 = iVar12 + uVar17;
            break;
          case 2:
            fVar32 = *pfStack_180;
            lStack_158 = CONCAT44(fStack_12c,fStack_130);
            uVar19 = CONCAT44(fStack_134,fStack_138);
            uStack_150 = CONCAT44(fStack_124,fStack_128);
            uStack_160 = uVar19;
            func_0x00010837ce74();
            bVar4 = false;
            bVar6 = true;
            bVar7 = false;
            if (!(bool)cVar9) {
              bVar4 = false;
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar32)) {
                bVar4 = fVar32 < 0.0;
                bVar6 = fVar32 == 0.0;
                bVar7 = false;
              }
            }
            fStack_148 = fVar32;
            if (bVar6 || bVar4 != bVar7) {
              fStack_148 = 1.0;
            }
            uVar27 = (ulong)(uint)fStack_148;
            func_0x00010837cd10();
            if (bVar6) {
code_r0x00010837a76c:
              uVar22 = 1;
              pfVar13 = (float *)&uStack_160;
            }
            else {
              uVar19 = (ulong)(uint)fStack_124;
              if (!bVar4) {
                if ((float)uVar27 < fStack_124) goto code_r0x00010837a970;
                goto code_r0x00010837a76c;
              }
              if ((float)uVar27 <= fStack_124) goto code_r0x00010837a76c;
code_r0x00010837a970:
              puVar15 = &uStack_160;
              FUN_1083533a0(puVar15,&uStack_110);
              uVar22 = (uint)puVar15 ^ 1;
              pfVar13 = (float *)&uStack_110;
              if ((uint)puVar15 == 0) {
                pfVar13 = (float *)&uStack_160;
              }
            }
            func_0x00010837cc84(pfVar13,&uStack_19c);
            FUN_10837c2e0();
            iVar21 = (int)pfVar13;
            if ((uVar22 & 1) == 0) {
              pfVar13 = afStack_108 + 5;
              func_0x00010837cc84(pfVar13,&uStack_19c);
              FUN_10837c2e0();
              iVar21 = (int)pfVar13 + iVar21;
            }
            uVar17 = iVar21 + uVar17;
            break;
          case 3:
            puVar20 = &uStack_110;
            func_0x00010837cd9c();
            iVar12 = 0;
            iVar11 = (int)pfVar13;
            uVar22 = uStack_19c;
            for (lVar18 = 0; lVar18 <= iVar11; lVar18 = lVar18 + 1) {
              pfVar14 = (float *)((long)&uStack_110 + lVar18 * 6 * 4);
              fVar29 = afStack_108[lVar18 * 6 + -1];
              uVar19 = (ulong)(uint)fVar29;
              fVar36 = afStack_108[lVar18 * 6 + 5];
              fVar32 = fVar29;
              if (fVar29 <= fVar36) {
                fVar32 = fVar36;
              }
              uVar27 = (ulong)(uint)fVar32;
              iVar23 = iVar21;
              fVar34 = fVar36;
              if (fVar29 <= fVar36) {
                iVar23 = 1;
                fVar34 = fVar29;
              }
              bVar4 = false;
              bVar6 = false;
              bVar7 = false;
              if (fVar34 <= fVar24) {
                bVar4 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar24) && !NAN(fVar32)) {
                  bVar4 = fVar24 < fVar32;
                  bVar6 = fVar24 == fVar32;
                  bVar7 = false;
                }
              }
              if (!bVar6 && bVar4 == bVar7) goto code_r0x00010837a868;
              fVar35 = *pfVar14;
              uVar28 = (ulong)(uint)fVar35;
              fVar34 = afStack_108[lVar18 * 6 + 4];
              if (fVar29 == fVar36) {
                fVar29 = (fVar35 - unaff_s9) * (fVar34 - unaff_s9);
                uVar19 = (ulong)(uint)fVar29;
                bVar4 = true;
                if ((fVar29 <= 0.0) && (bVar4 = false, !NAN(unaff_s9) && !NAN(fVar34))) {
                  bVar4 = unaff_s9 == fVar34;
                }
                if (!bVar4) goto code_r0x00010837a8bc;
code_r0x00010837a828:
                if (fVar24 == fVar32) {
code_r0x00010837a868:
                  iVar23 = 0;
                }
                else {
                  lVar16 = 8;
                  uVar27 = uVar28;
                  uVar19 = uVar28;
                  while( true ) {
                    fVar32 = (float)uVar27;
                    if (lVar16 == 0x20) break;
                    fVar29 = *(float *)((long)puVar20 + lVar16);
                    uVar30 = (ulong)(uint)fVar29;
                    if ((float)uVar19 <= fVar29) {
                      uVar30 = uVar19;
                    }
                    uVar19 = (ulong)(uint)fVar29;
                    if (fVar29 <= fVar32) {
                      uVar19 = uVar27;
                    }
                    lVar16 = lVar16 + 8;
                    uVar27 = uVar19;
                    uVar19 = uVar30;
                  }
                  if (unaff_s9 < (float)uVar19) goto code_r0x00010837a868;
                  uVar8 = fVar32 <= unaff_s9;
                  uVar5 = unaff_s9 == fVar32;
                  if (unaff_s9 <= fVar32) {
                    uVar27 = unaff_d8;
                    FUN_108346090(pfVar14,&uStack_160);
                    pfVar13 = pfVar14;
                    if ((int)pfVar14 == 0) goto code_r0x00010837a868;
                    FUN_10837c450(uVar28,afStack_108[lVar18 * 6],afStack_108[lVar18 * 6 + 2],fVar34,
                                  uStack_160 & 0xffffffff);
                    uVar19 = (ulong)(uint)ABS((float)uVar28 - unaff_s9);
                    func_0x00010837ccf0();
                    pfVar13 = pfVar14;
                    uVar27 = uVar28;
                    if (!(bool)uVar8 || (bool)uVar5) {
                      bVar4 = false;
                      if ((fVar24 == fVar36) && (bVar4 = false, !NAN(unaff_s9) && !NAN(fVar34))) {
                        bVar4 = unaff_s9 == fVar34;
                      }
                      if (!bVar4) goto code_r0x00010837a8bc;
                    }
                    if (unaff_s9 <= (float)uVar28) {
                      iVar23 = 0;
                    }
                  }
                }
              }
              else {
                bVar4 = false;
                if ((fVar24 == fVar29) && (bVar4 = false, !NAN(unaff_s9) && !NAN(fVar35))) {
                  bVar4 = unaff_s9 == fVar35;
                }
                if (!bVar4) goto code_r0x00010837a828;
code_r0x00010837a8bc:
                iVar23 = 0;
                uVar22 = uVar22 + 1;
              }
              iVar12 = iVar23 + iVar12;
              puVar20 = puVar20 + 3;
            }
            uVar17 = iVar12 + uVar17;
            uStack_19c = uVar22;
            break;
          case 5:
            goto code_r0x00010837aa54;
          }
        } while( true );
      }
    }
  }
LAB_10837aab8:
  func_0x00010837cab0(uStack_b8);
  if ((bool)in_ZR) {
    return uVar17 & 1;
  }
  ___stack_chk_fail();
code_r0x00010837afe8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10837afec);
  (*pcVar3)();
code_r0x00010837aa54:
  if ((*(byte *)((long)param_1 + 0xe) & 1) != 0) {
    uVar17 = uVar17 & 1;
  }
  if (uVar17 == 0) {
    in_ZR = uStack_19c == 1;
    if ((int)uStack_19c < 2) {
      in_ZR = uStack_19c == 0;
      uVar17 = (uint)!(bool)in_ZR;
    }
    else {
      uVar17 = uStack_19c;
      if (((uStack_19c & 1) == 0) &&
         (in_ZR = (*(byte *)((long)param_1 + 0xe) & 3 | 2) == 3, !(bool)in_ZR)) {
        uStack_198 = *(undefined8 *)(*(long *)param_1 + 0x28);
        uStack_190 = *(undefined8 *)(*(long *)param_1 + 0x40);
        func_0x00010837cb00();
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 1;
        uStack_160 = CONCAT44(uStack_160._4_4_,8);
        lStack_158 = 0;
        uStack_150 = 0;
        pfStack_180 = extraout_x8_01;
        do {
          iVar21 = uStack_150._4_4_;
          func_0x00010837ce08();
          fVar36 = fStack_128;
          fVar29 = fStack_130;
          fVar32 = fStack_138;
          bVar4 = false;
          switch((int)pfVar13) {
          case 1:
            if (((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) &&
               ((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0)) {
              if (ABS((fStack_12c - fStack_134) * (unaff_s9 - fStack_138) -
                      (fVar24 - fStack_134) * (fStack_130 - fStack_138)) <= 0.00024414062) {
                uStack_110 = CONCAT44(fStack_12c - fStack_134,fStack_130 - fStack_138);
                pfVar13 = (float *)&uStack_160;
                FUN_1082d2254(pfVar13,&uStack_110);
              }
            }
            break;
          case 2:
            if ((((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) ||
                ((fStack_12c - fVar24) * (fStack_124 - fVar24) <= 0.0)) &&
               (((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0 ||
                ((fStack_130 - unaff_s9) * (fStack_128 - unaff_s9) <= 0.0)))) {
              pfVar13 = (float *)&uStack_110;
              FUN_108351300(fStack_134 + fStack_12c * -2.0 + fStack_124,
                            (fStack_12c - fStack_134) + (fStack_12c - fStack_134));
              uVar17 = (uint)pfVar13;
              for (lVar18 = 0; (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) << 2 != lVar18;
                  lVar18 = lVar18 + 4) {
                fVar34 = *(float *)((long)afStack_108 + lVar18 + -8);
                fVar35 = ABS(unaff_s9 -
                             (fVar32 + fVar34 * ((fVar29 - fVar32) + (fVar29 - fVar32) +
                                                fVar34 * (fVar32 + fVar36 + fVar29 * -2.0))));
                if (fVar35 <= 0.00024414062) {
                  pfVar13 = &fStack_138;
                  func_0x0001083514d0();
                  afStack_118[1] = fVar35;
                  afStack_118[0] = fVar34;
                  func_0x00010837cdc8();
                }
              }
            }
            break;
          case 3:
            fVar34 = *pfStack_180;
            if ((((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) ||
                ((fStack_12c - fVar24) * (fStack_124 - fVar24) <= 0.0)) &&
               (((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0 ||
                ((fStack_130 - unaff_s9) * (fStack_128 - unaff_s9) <= 0.0)))) {
              fVar33 = fVar24 + -(fVar34 * fVar24) + fVar34 * fStack_12c;
              fVar35 = fVar33 - fStack_134;
              pfVar13 = afStack_118;
              FUN_108351300(fStack_134 + fVar33 * -2.0 + fStack_124,fVar35 + fVar35);
              lVar18 = 0;
              fVar35 = fVar34 + -1.0 + fVar34 + -1.0;
              bVar4 = false;
              bVar6 = true;
              bVar7 = false;
              if (!NAN(fVar34 - fVar34)) {
                bVar4 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar34)) {
                  bVar4 = fVar34 < 0.0;
                  bVar6 = fVar34 == 0.0;
                  bVar7 = false;
                }
              }
              fVar33 = fVar34;
              if (bVar6 || bVar4 != bVar7) {
                fVar33 = 1.0;
              }
              uVar17 = (uint)pfVar13;
              fVar25 = fVar34 * fVar29 - fVar32;
              for (; (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) << 2 != lVar18;
                  lVar18 = lVar18 + 4) {
                fVar26 = *(float *)((long)afStack_118 + lVar18);
                if (ABS(unaff_s9 -
                        (fVar32 + fVar26 * (fVar25 + fVar25 +
                                           fVar26 * (fVar32 + fVar36 + fVar34 * fVar29 * -2.0))) /
                        (fVar26 * (fVar35 + fVar26 * -fVar35) + 1.0)) <= 0.00024414062) {
                  uVar31 = CONCAT44(fStack_134,fStack_138);
                  uStack_110 = uVar31;
                  fStack_f8 = fVar33;
                  FUN_108352dd0(&uStack_110);
                  fStack_140 = fVar26;
                  uStack_13c = (undefined4)uVar31;
                  pfVar13 = (float *)&uStack_160;
                  FUN_1082d2254(pfVar13,&fStack_140);
                }
              }
            }
            break;
          case 4:
            if (((((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) ||
                 ((fStack_12c - fVar24) * (fStack_124 - fVar24) <= 0.0)) ||
                ((fStack_124 - fVar24) * (fStack_11c - fVar24) <= 0.0)) &&
               ((((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0 ||
                 ((fStack_130 - unaff_s9) * (fStack_128 - unaff_s9) <= 0.0)) ||
                ((fStack_128 - unaff_s9) * (fStack_120 - unaff_s9) <= 0.0)))) {
              pfVar14 = (float *)&uStack_110;
              func_0x00010837cd9c();
              iVar12 = (int)pfVar13;
              for (lVar18 = 0; lVar18 <= iVar12; lVar18 = lVar18 + 1) {
                func_0x00010837cbb0();
                FUN_108346090();
                fVar32 = fStack_140;
                if ((int)pfVar13 != 0) {
                  fVar29 = *pfVar14;
                  FUN_10837c450(fVar29,pfVar14[2],pfVar14[4],pfVar14[6],fStack_140);
                  if (ABS(unaff_s9 - fVar29) <= 0.00024414062) {
                    pfVar13 = pfVar14;
                    FUN_1083518ac(fVar32,pfVar14,0,afStack_118,0);
                    func_0x00010837cdc8();
                  }
                }
                pfVar14 = pfVar14 + 6;
              }
            }
            break;
          default:
            goto code_r0x00010837ae9c;
          case 6:
            bVar4 = true;
            goto code_r0x00010837ae9c;
          }
          bVar4 = false;
code_r0x00010837ae9c:
          if (iVar21 < uStack_150._4_4_) {
            if (uStack_150._4_4_ < 1) goto code_r0x00010837afe8;
            pfVar14 = (float *)(lStack_158 + (ulong)(uStack_150._4_4_ - 1) * 8);
            fVar32 = *pfVar14;
            fVar29 = pfVar14[1];
            if (ABS(fVar29 * fVar29 + fVar32 * fVar32) <= 0.00024414062) {
              func_0x00010837cdbc();
            }
            else {
              pfVar14 = (float *)(lStack_158 + 4);
              for (uVar19 = 0; uStack_150._4_4_ - 1 != uVar19; uVar19 = uVar19 + 1) {
                if (((ABS(*pfVar14 * -fVar32 + fVar29 * pfVar14[-1]) <= 0.00024414062) &&
                    (fVar32 * pfVar14[-1] <= 0.0)) && (fVar29 * *pfVar14 <= 0.0)) {
                  func_0x00010837cdbc();
                  pfVar13 = (float *)&uStack_160;
                  FUN_10840f328(pfVar13,uVar19);
                  break;
                }
                pfVar14 = pfVar14 + 2;
              }
            }
          }
        } while (!bVar4);
        in_ZR = uStack_150._4_4_ == 0;
        uVar17 = (uint)!(bool)in_ZR ^ (bVar2 & 2) >> 1;
        _free(lStack_158);
        goto LAB_10837aab8;
      }
    }
    uVar17 = uVar17 ^ (bVar2 & 2) >> 1;
  }
  else {
    in_ZR = (bVar2 & 2) == 0;
    uVar17 = (uint)(byte)in_ZR;
  }
  goto LAB_10837aab8;
}



/* Entry: 10837b010; end: 10837b0a3;  */

void FUN_10837b010(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar4;
  int *extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010837cce4();
  uVar1 = *extraout_x8 == 1;
  if (!(bool)uVar1) {
    uVar3 = 200;
    __Znwm(200);
    FUN_10837c488();
    param_2 = *unaff_x19;
    FUN_10837e040(uVar3,param_2,0,0,0);
    func_0x00010837cd88();
    FUN_108376bdc();
  }
  FUN_10837b0a4(*unaff_x19 + 0x28);
  func_0x00010837b120(*unaff_x19 + 0x40);
  iVar2 = (int)*unaff_x19 + 0x58;
  if (((*(uint *)(*unaff_x19 + 100) & 1) != 0) && (func_0x00010837cd60(), !(bool)uVar1)) {
    if (iVar2 == 0) {
      func_0x00010837cbec();
      func_0x00010837cd00();
      uVar4 = extraout_w8_00;
    }
    else {
      FUN_10818424c(0x3ff0000000000000);
      if ((int)unaff_x19[1] != 0) {
        func_0x00010837cc00();
      }
      if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
        func_0x00010837cbec();
      }
      func_0x00010837cbdc(param_2 >> 2);
      func_0x00010837cd30();
      uVar4 = extraout_w8;
    }
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar4;
  }
  return;
}



/* Entry: 10837b0a4; end: 10837b217;  */

void FUN_10837b0a4(long param_1,ulong param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar2;
  long unaff_x19;
  
  iVar1 = (int)param_1;
  if (((*(uint *)(param_1 + 0xc) & 1) != 0) && (func_0x00010837cd60(), !(bool)in_ZR)) {
    if (iVar1 == 0) {
      func_0x00010837cbec();
      func_0x00010837cd00();
      uVar2 = extraout_w8_00;
    }
    else {
      func_0x0001082d3764(0x3ff0000000000000);
      if (*(int *)(unaff_x19 + 8) != 0) {
        func_0x00010837cc00();
      }
      if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
        func_0x00010837cbec();
      }
      func_0x00010837cbdc(param_2 >> 3);
      func_0x00010837cd30();
      uVar2 = extraout_w8;
    }
    *(undefined4 *)(unaff_x19 + 0xc) = uVar2;
  }
  return;
}



/* Entry: 10837b218; end: 10837b26b;  */

void FUN_10837b218(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined1 in_OV;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  
  uStack_30 = *param_2;
  uStack_28 = *param_3;
  uStack_20 = *param_4;
  func_0x00010837ce74();
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (!(bool)in_OV) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 0.0;
      bVar2 = param_1 == 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    param_1 = 1.0;
  }
  fStack_18 = param_1;
  FUN_108353014(&uStack_30,param_5,param_6);
  return;
}



/* Entry: 10837b26c; end: 10837b4bf;  */

void FUN_10837b26c(long *param_1,uint param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  byte *pbStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar5 = false;
  if (*(char *)(*param_1 + 0xc3) == '\x01') {
    param_2 = param_2 ^ 1;
    FUN_1081e8e40(&pbStack_a0,param_1);
    iVar8 = 0;
    pbStack_b8 = pbStack_a0;
    uStack_a8 = uStack_88;
    puStack_b0 = puStack_90;
    while (pbStack_b8 != pbStack_98) {
      bVar1 = *pbStack_b8;
      if (bVar1 - 1 < 5) {
        if (bVar1 == 1) {
          bVar5 = true;
          if (iVar8 == 5) goto LAB_10837b458;
          (&uStack_80)[iVar8] = *puStack_b0;
          iVar8 = iVar8 + 1;
        }
        else {
          bVar5 = bVar1 == 5;
          if (!bVar5) goto LAB_10837b458;
          if (iVar8 == 4) {
            param_2 = 0;
            uStack_60 = uStack_80;
            iVar8 = 5;
          }
          else {
            param_2 = 0;
          }
        }
      }
      else {
        if (bVar1 != 0) goto LAB_10837b4bc;
        bVar5 = false;
        if (iVar8 != 0) goto LAB_10837b458;
        uStack_80 = *puStack_b0;
        iVar8 = 1;
      }
      func_0x0001081e8ec8(&pbStack_b8);
    }
    bVar5 = iVar8 == 5;
    if ((param_2 & 1) != 0 || iVar8 < 5) goto LAB_10837b458;
    bVar3 = false;
    if (((float)uStack_80 == (float)uStack_60) &&
       (bVar3 = false, !NAN(uStack_80._4_4_) && !NAN(uStack_60._4_4_))) {
      bVar3 = uStack_80._4_4_ == uStack_60._4_4_;
    }
    bVar5 = false;
    if (!bVar3) goto LAB_10837b458;
    if ((float)uStack_80 == fStack_68) {
      bVar5 = false;
      if ((fStack_78 == fStack_70) && (bVar5 = false, !NAN(uStack_80._4_4_) && !NAN(fStack_74))) {
        bVar5 = uStack_80._4_4_ == fStack_74;
      }
      if ((bVar5) && (fStack_64 == fStack_6c)) {
        bVar3 = true;
        if (((float)uStack_80 != fStack_78) &&
           (bVar3 = false, !NAN(uStack_80._4_4_) && !NAN(fStack_64))) {
          bVar3 = uStack_80._4_4_ == fStack_64;
        }
        bVar5 = true;
        if (bVar3) goto LAB_10837b458;
        uVar6 = 1;
        goto LAB_10837b40c;
      }
    }
    bVar5 = false;
    if (uStack_80._4_4_ == fStack_64) {
      uVar6 = 0;
      bVar5 = false;
      if ((fStack_74 == fStack_6c) && (bVar5 = false, !NAN((float)uStack_80) && !NAN(fStack_78))) {
        bVar5 = (float)uStack_80 == fStack_78;
      }
      bVar3 = false;
      if ((bVar5) && (bVar3 = false, !NAN(fStack_68) && !NAN(fStack_70))) {
        bVar3 = fStack_68 == fStack_70;
      }
      bVar4 = true;
      if ((bVar3) && (bVar4 = false, !NAN((float)uStack_80) && !NAN(fStack_68))) {
        bVar4 = (float)uStack_80 == fStack_68;
      }
      bVar5 = true;
      if ((!bVar4) && (bVar5 = false, !NAN(uStack_80._4_4_) && !NAN(fStack_74))) {
        bVar5 = uStack_80._4_4_ == fStack_74;
      }
      if (!bVar5) {
LAB_10837b40c:
        uVar7 = 0;
        if (fStack_6c <= uStack_80._4_4_) {
          uVar7 = 2;
        }
        if (fStack_70 <= (float)uStack_80) {
          uVar7 = uVar7 + 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010837b434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df1decd)[uVar7] * 4 + 0x10837b438))(uVar6);
        return;
      }
    }
  }
LAB_10837b458:
  func_0x00010837cab0(uStack_58,0);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10837b4bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10837b4c0);
  (*pcVar2)();
}



/* Entry: 10837b4c0; end: 10837b717;  */

void FUN_10837b4c0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  func_0x00010837ccd0();
  uVar5 = param_2[1];
  uVar1 = *param_2;
  fVar4 = *(float *)((long)param_2 + 0x14);
  fVar6 = ABS(fVar4);
  if (3600.0 < fVar6) {
    fVar6 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ 0x45610000) & 0x7fffffff);
    func_0x00010837ce20();
    fVar4 = fVar6 + fVar4;
    fVar6 = ABS(fVar4);
  }
  FUN_108376d4c();
  *(byte *)(unaff_x19 + 0xe) = *(byte *)(unaff_x19 + 0xe) & 0xf8 | 4;
  if ((param_3 != 0) && (360.0 <= fVar6)) {
    FUN_108378684();
    return;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    fStack_70 = (float)uVar1;
    fStack_6c = (float)((ulong)uVar1 >> 0x20);
    fStack_68 = (float)uVar5;
    fStack_64 = (float)((ulong)uVar5 >> 0x20);
    func_0x000108377934((fStack_70 + fStack_68) * 0.5,
                        (float)(((double)fStack_6c + (double)fStack_64) * 0.5),0,(double)fStack_64);
    if ((param_3 == 0) || (fVar6 < 360.0)) {
      if (*(char *)(unaff_x20 + 0x18) != '\0') {
        bVar2 = fVar6 <= 180.0;
        goto LAB_10837b63c;
      }
code_r0x00010837b638:
      bVar2 = fVar6 <= 360.0;
      goto LAB_10837b63c;
    }
  }
  else if ((param_3 == 0) || (fVar6 < 360.0)) goto code_r0x00010837b638;
  bVar2 = true;
LAB_10837b63c:
  bVar3 = fVar4 <= 0.0;
  while (fVar4 <= -360.0) {
    func_0x00010837cbb0();
    func_0x00010837ce50();
    func_0x00010837cbb0();
    func_0x00010837ce5c();
    func_0x00010837cd70();
  }
  while (360.0 <= fVar4) {
    func_0x00010837cbb0();
    func_0x00010837ce50();
    func_0x00010837cbb0();
    func_0x00010837ce5c();
    func_0x00010837cd70();
  }
  func_0x00010837cbb0();
  FUN_1083786d0();
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x00010837cc30();
  }
  *(byte *)(unaff_x19 + 0xc) = bVar2 ^ 1;
  *(bool *)(unaff_x19 + 0xd) = bVar3;
  return;
}



/* Entry: 10837b718; end: 10837ba2b;  */

byte ** FUN_10837b718(undefined4 param_1,ulong param_2,byte **param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte **ppbVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 extraout_x8;
  int iVar11;
  ulong uVar12;
  ulong *unaff_x20;
  long lVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbStack_130;
  byte *pbStack_120;
  byte *pbStack_108;
  ulong *puStack_100;
  float *pfStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong *puStack_e0;
  float *pfStack_d8;
  ulong auStack_d0 [5];
  byte *pbStack_a8;
  ulong auStack_a0 [3];
  float fStack_88;
  undefined8 uStack_80;
  
  func_0x00010837caf0();
  uStack_80 = extraout_x8;
  if (*(int *)(*param_3 + 0x48) == 0) {
    pbVar17 = (byte *)0x0;
  }
  else {
    in_ZR = (*param_3)[0xc3] == 1;
    if ((bool)in_ZR) {
      func_0x00010837ce48();
      pbVar17 = *param_3;
    }
    else {
      FUN_108377828(param_3,0);
      pbVar17 = (byte *)CONCAT44((int)param_2,param_1);
      ppbVar8 = &pbStack_f0;
      FUN_1081e8e40();
      pbStack_108 = pbStack_f0;
      pfStack_f8 = pfStack_d8;
      puStack_100 = puStack_e0;
      pbStack_120 = pbVar17;
      while (puVar1 = puStack_100, param_4 = (uint)param_3, pbStack_108 != pbStack_e8) {
        uVar10 = *pbStack_108 - 1;
        if (uVar10 < 5) {
          bVar6 = SBORROW4(uVar10,3);
          if (uVar10 < 4) {
            puVar9 = puStack_100 + -1;
            iVar11 = (int)auStack_a0;
            switch(uVar10) {
            case 0:
              auStack_d0[0] = *puStack_100;
              goto code_r0x00010837b818;
            case 1:
              func_0x00010837cf44();
              iVar7 = (int)auStack_a0;
              FUN_108351698();
              func_0x00010837cea8();
              iVar11 = iVar11 + iVar7 * 4;
              FUN_108351698();
              uVar10 = iVar11 + (int)unaff_x20;
              unaff_x20 = (ulong *)(ulong)uVar10;
              puVar14 = (undefined4 *)((ulong)auStack_d0 | 4);
              for (lVar13 = 0; (long)unaff_x20 << 2 != lVar13; lVar13 = lVar13 + 4) {
                uVar16 = *(undefined4 *)((long)auStack_a0 + lVar13);
                FUN_1083514a0(puVar9);
                puVar14[-1] = uVar16;
                *puVar14 = (int)param_2;
                puVar14 = puVar14 + 2;
              }
              auStack_d0[(long)unaff_x20] = puVar1[1];
              break;
            case 2:
              fVar15 = *pfStack_f8;
              auStack_a0[1] = *puStack_100;
              param_2 = puStack_100[-1];
              auStack_a0[2] = puStack_100[1];
              auStack_a0[0] = param_2;
              func_0x00010837ce74();
              bVar3 = false;
              bVar4 = true;
              bVar5 = false;
              if (!bVar6) {
                bVar3 = false;
                bVar4 = false;
                bVar5 = true;
                if (!NAN(fVar15)) {
                  bVar3 = fVar15 < 0.0;
                  bVar4 = fVar15 == 0.0;
                  bVar5 = false;
                }
              }
              fStack_88 = fVar15;
              if (bVar4 || bVar3 != bVar5) {
                fStack_88 = 1.0;
              }
              puVar9 = auStack_a0;
              FUN_108353314(puVar9,&pbStack_a8);
              lVar13 = 4;
              if ((int)puVar9 == 0) {
                lVar13 = 0;
              }
              iVar11 = (int)auStack_a0;
              param_3 = (byte **)((long)&pbStack_a8 + lVar13);
              FUN_108353394();
              uVar10 = iVar11 + (int)puVar9;
              puVar14 = (undefined4 *)((ulong)auStack_d0 | 4);
              for (unaff_x20 = (ulong *)0x0; (ulong *)((ulong)uVar10 << 2) != unaff_x20;
                  unaff_x20 = (ulong *)((long)unaff_x20 + 4)) {
                uVar16 = *(undefined4 *)((long)&pbStack_a8 + (long)unaff_x20);
                FUN_108352d70(auStack_a0);
                puVar14[-1] = uVar16;
                *puVar14 = (int)param_2;
                puVar14 = puVar14 + 2;
              }
              auStack_d0[uVar10] = puVar1[1];
              uVar10 = uVar10 + 1;
              goto LAB_10837b9a4;
            case 3:
              func_0x00010837cf44();
              iVar7 = (int)auStack_a0;
              func_0x000108351a40();
              func_0x00010837cea8();
              iVar11 = iVar11 + iVar7 * 4;
              func_0x000108351a40();
              uVar10 = iVar11 + (int)unaff_x20;
              unaff_x20 = auStack_d0;
              for (lVar13 = 0; (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) << 2 != lVar13;
                  lVar13 = lVar13 + 4) {
                func_0x00010837cd88(*(undefined4 *)((long)auStack_a0 + lVar13));
                FUN_1083518ac();
                unaff_x20 = unaff_x20 + 1;
              }
              auStack_d0[(int)uVar10] = puVar1[2];
            }
            uVar10 = uVar10 + 1;
            pbVar17 = pbStack_130;
          }
          else {
            uVar10 = 0;
          }
        }
        else {
          if (*pbStack_108 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10837ba28);
            (*pcVar2)();
          }
          auStack_d0[0] = *puStack_100;
code_r0x00010837b818:
          uVar10 = 1;
        }
LAB_10837b9a4:
        puVar1 = auStack_d0;
        for (uVar12 = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
            uVar12 = uVar12 - 1) {
          uVar18 = *puVar1;
          pbVar17 = (byte *)((ulong)pbVar17 ^
                            ((ulong)pbVar17 ^ uVar18) &
                            CONCAT44(-(uint)((float)(uVar18 >> 0x20) <
                                            (float)((ulong)pbVar17 >> 0x20)),
                                     -(uint)((float)uVar18 < SUB84(pbVar17,0))));
          param_2 = (ulong)-(uint)(SUB84(pbStack_120,0) < (float)uVar18);
          pbStack_120 = (byte *)((ulong)pbStack_120 ^ ((ulong)pbStack_120 ^ uVar18) & param_2);
          puVar1 = puVar1 + 1;
        }
        ppbVar8 = &pbStack_108;
        func_0x0001081e8ec8();
        pbStack_130 = pbVar17;
      }
      in_ZR = 1;
      param_3 = ppbVar8;
    }
  }
  func_0x00010837cab0(uStack_80,pbVar17);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  if (0x2aaaaaa9 < (int)param_4) {
    return (byte **)0x0;
  }
  iVar7 = 0;
  iVar11 = 0;
  uVar12 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar12 == 0) {
      return (byte **)CONCAT44(iVar7,iVar11);
    }
    switch(*(undefined1 *)param_3) {
    case 0:
      goto code_r0x00010837bae8;
    case 1:
code_r0x00010837bae8:
      iVar11 = iVar11 + 1;
      break;
    case 2:
      iVar11 = iVar11 + 2;
      break;
    case 3:
      iVar11 = iVar11 + 2;
      iVar7 = iVar7 + 1;
      break;
    case 4:
      iVar11 = iVar11 + 3;
      break;
    case 5:
      break;
    default:
    }
    param_3 = (byte **)((long)param_3 + 1);
    uVar12 = uVar12 - 1;
  } while( true );
}



/* Entry: 10837ba2c; end: 10837bb2b;  */

undefined1  [16] FUN_10837ba2c(undefined1 *param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (0x2aaaaaa9 < (int)param_2) {
    return ZEXT816(0);
  }
  uVar5 = 0;
  iVar3 = 0;
  iVar4 = 0;
  bVar1 = false;
  uVar6 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  bVar2 = 1;
  do {
    if (uVar6 == 0) {
      uVar6 = 0;
      if (!bVar1) {
        uVar6 = 0x100000000;
      }
      auVar7._8_8_ = uVar6 | uVar5;
      auVar7._4_4_ = iVar3;
      auVar7._0_4_ = iVar4;
      return auVar7;
    }
    switch(*param_1) {
    case 0:
      bVar2 = 0;
      goto code_r0x00010837bae8;
    case 1:
      bVar1 = (bool)(bVar2 | bVar1);
      uVar5 = uVar5 & 0xfffffffe | 1;
code_r0x00010837bae8:
      iVar4 = iVar4 + 1;
      break;
    case 2:
      bVar1 = (bool)(bVar2 | bVar1);
      uVar5 = uVar5 & 0xfffffffd | 2;
      iVar4 = iVar4 + 2;
      break;
    case 3:
      bVar1 = (bool)(bVar2 | bVar1);
      uVar5 = uVar5 & 0xfffffffb | 4;
      iVar4 = iVar4 + 2;
      iVar3 = iVar3 + 1;
      break;
    case 4:
      bVar1 = (bool)(bVar2 | bVar1);
      uVar5 = uVar5 & 0xfffffff7 | 8;
      iVar4 = iVar4 + 3;
      break;
    case 5:
      bVar1 = (bool)(bVar2 | bVar1);
      bVar2 = 1;
      break;
    default:
      bVar1 = true;
    }
    param_1 = param_1 + 1;
    uVar6 = uVar6 - 1;
  } while( true );
}



/* Entry: 10837bb2c; end: 10837bbef;  */

void FUN_10837bb2c(undefined8 *param_1)

{
  undefined8 uVar1;
  byte in_w5;
  int in_w6;
  byte bVar2;
  
  uVar1 = 200;
  __Znwm();
  FUN_10837c6e8();
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xc) = 0x202;
  bVar2 = 4;
  if (in_w6 == 0) {
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + 0xe) = bVar2 | in_w5 & 3 | *(byte *)((long)param_1 + 0xe) & 0xf8;
  return;
}



/* Entry: 10837bbf0; end: 10837bc47;  */

undefined8 * FUN_10837bbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack_240;
  undefined8 auStack_23c [3];
  float fStack_224;
  undefined8 uStack_218;
  float fStack_210;
  undefined8 uStack_20c;
  undefined8 uStack_204;
  float fStack_1fc;
  undefined8 auStack_180 [17];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_c0 [17];
  undefined8 uStack_38;
  
  puVar2 = auStack_c0;
  uVar11 = param_2;
  func_0x00010837cad4();
  iVar5 = (int)uVar11;
  func_0x00010837cf30();
  FUN_10837d658();
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837cb3c();
    func_0x00010837cb78();
    puVar3 = auStack_180;
    uStack_f0 = param_1;
    uStack_e8 = param_2;
    uStack_e0 = param_3;
    func_0x00010837cad4();
    FUN_10837bca0();
    func_0x00010837cbd4();
    func_0x00010837cb8c();
    puVar4 = puVar2;
    func_0x00010837cab0(uStack_f8);
    puVar2 = puVar3;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010837cb3c();
      func_0x00010837cb78();
      iVar1 = *(int *)((long)puVar3 + 0x7c);
      FUN_10837d250();
      uVar7 = 1;
      iVar6 = 3;
      if (iVar5 == 0) {
        iVar6 = 1;
      }
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      fStack_240 = (float)uVar11;
      fVar10 = (float)((ulong)uVar11 >> 0x20);
      fStack_210 = (float)uVar12;
      fStack_224 = (float)((ulong)uVar12 >> 0x20);
      auVar14 = NEON_fmov(0x3fe0000000000000,8);
      fVar13 = (float)(((double)fStack_240 + (double)fStack_210) * auVar14._0_8_);
      fStack_1fc = (float)(((double)fVar10 + (double)fStack_224) * auVar14._8_8_);
      uStack_20c = NEON_rev64(CONCAT44(fStack_1fc,fVar13),4);
      uStack_218 = CONCAT44(fVar10,fVar13);
      auStack_23c[2] = NEON_ext(uVar12,uVar11,4,1);
      if (iVar5 != 0) {
        uVar7 = 2;
      }
      auStack_23c[0] = NEON_ext(uVar11,uVar12,4,1);
      auStack_23c[1] = auStack_23c[0];
      uStack_204 = auStack_23c[2];
      func_0x00010837dba4(&fStack_210);
      iVar8 = 4;
      uVar9 = 1;
      do {
        uVar7 = uVar7 + iVar6 & 3;
        uVar9 = uVar9 + iVar6 & 3;
        func_0x00010837dbdc(&uStack_218 + uVar9,(&fStack_240)[(ulong)uVar7 * 2],
                            *(undefined4 *)(auStack_23c + uVar7));
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      func_0x00010837dc40();
      if (iVar1 == 0) {
        *(bool *)((long)puVar3 + 0x84) = iVar5 == 1;
        *(undefined4 *)((long)puVar3 + 0x7c) = 2;
        *(undefined4 *)(puVar3 + 0x10) = 1;
      }
      return puVar3;
    }
  }
  return puVar2;
}



/* Entry: 10837bc48; end: 10837bc9f;  */

undefined1 * FUN_10837bc48(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fStack_180;
  undefined8 auStack_17c [3];
  float fStack_164;
  undefined8 uStack_158;
  float fStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  float fStack_13c;
  undefined1 auStack_c0 [136];
  undefined8 uStack_38;
  
  puVar2 = auStack_c0;
  func_0x00010837cad4();
  FUN_10837bca0();
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837cb3c();
    func_0x00010837cb78();
    iVar1 = *(int *)(puVar2 + 0x7c);
    FUN_10837d250();
    uVar4 = 1;
    iVar3 = 3;
    if (param_2 == 0) {
      iVar3 = 1;
    }
    uVar8 = *param_1;
    uVar9 = param_1[1];
    fStack_180 = (float)uVar8;
    fVar7 = (float)((ulong)uVar8 >> 0x20);
    fStack_150 = (float)uVar9;
    fStack_164 = (float)((ulong)uVar9 >> 0x20);
    auVar11 = NEON_fmov(0x3fe0000000000000,8);
    fVar10 = (float)(((double)fStack_180 + (double)fStack_150) * auVar11._0_8_);
    fStack_13c = (float)(((double)fVar7 + (double)fStack_164) * auVar11._8_8_);
    uStack_14c = NEON_rev64(CONCAT44(fStack_13c,fVar10),4);
    uStack_158 = CONCAT44(fVar7,fVar10);
    auStack_17c[2] = NEON_ext(uVar9,uVar8,4,1);
    if (param_2 != 0) {
      uVar4 = 2;
    }
    auStack_17c[0] = NEON_ext(uVar8,uVar9,4,1);
    auStack_17c[1] = auStack_17c[0];
    uStack_144 = auStack_17c[2];
    func_0x00010837dba4(&fStack_150);
    iVar5 = 4;
    uVar6 = 1;
    do {
      uVar4 = uVar4 + iVar3 & 3;
      uVar6 = uVar6 + iVar3 & 3;
      func_0x00010837dbdc(&uStack_158 + uVar6,(&fStack_180)[(ulong)uVar4 * 2],
                          *(undefined4 *)(auStack_17c + uVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    func_0x00010837dc40();
    if (iVar1 == 0) {
      puVar2[0x84] = param_2 == 1;
      *(undefined4 *)(puVar2 + 0x7c) = 2;
      *(undefined4 *)(puVar2 + 0x80) = 1;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10837bca0; end: 10837bca7;  */

long FUN_10837bca0(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_c0;
  undefined8 auStack_bc [3];
  float fStack_a4;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  float fStack_7c;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  FUN_10837d250(param_1,9,6);
  uVar3 = 1;
  iVar2 = 3;
  if (param_3 == 0) {
    iVar2 = 1;
  }
  uVar7 = *param_2;
  uVar8 = param_2[1];
  fStack_c0 = (float)uVar7;
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  fStack_90 = (float)uVar8;
  fStack_a4 = (float)((ulong)uVar8 >> 0x20);
  auVar10 = NEON_fmov(0x3fe0000000000000,8);
  fVar9 = (float)(((double)fStack_c0 + (double)fStack_90) * auVar10._0_8_);
  fStack_7c = (float)(((double)fVar6 + (double)fStack_a4) * auVar10._8_8_);
  uStack_8c = NEON_rev64(CONCAT44(fStack_7c,fVar9),4);
  uStack_98 = CONCAT44(fVar6,fVar9);
  auStack_bc[2] = NEON_ext(uVar8,uVar7,4,1);
  if (param_3 != 0) {
    uVar3 = 2;
  }
  auStack_bc[0] = NEON_ext(uVar7,uVar8,4,1);
  auStack_bc[1] = auStack_bc[0];
  uStack_84 = auStack_bc[2];
  func_0x00010837dba4(&fStack_90);
  iVar4 = 4;
  uVar5 = 1;
  do {
    uVar3 = uVar3 + iVar2 & 3;
    uVar5 = uVar5 + iVar2 & 3;
    func_0x00010837dbdc(&uStack_98 + uVar5,(&fStack_c0)[(ulong)uVar3 * 2],
                        *(undefined4 *)(auStack_bc + uVar3));
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  func_0x00010837dc40();
  if (iVar1 == 0) {
    *(bool *)(param_1 + 0x84) = param_3 == 1;
    *(undefined4 *)(param_1 + 0x7c) = 2;
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  return param_1;
}



/* Entry: 10837bca8; end: 10837bd2f;  */

undefined1 *
FUN_10837bca8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *unaff_x22;
  uint uVar11;
  float afStack_248 [4];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined8 uStack_22c;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_190 [136];
  undefined8 uStack_108;
  undefined1 auStack_d0 [136];
  undefined8 uStack_48;
  
  puVar4 = auStack_d0;
  func_0x00010837caf0();
  func_0x00010837cda8();
  FUN_10837d918(param_2,param_3,param_4,auStack_d0);
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_48);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010837cb3c();
  func_0x00010837cb78();
  puVar5 = auStack_190;
  func_0x00010837cad4();
  puVar6 = puVar4;
  FUN_10837bd88();
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_108);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837cb3c();
    func_0x00010837cb78();
    uStack_200 = param_3;
    uStack_1f8 = param_4;
    func_0x00010837dc60();
    iVar2 = *(int *)(puVar5 + 0x7c);
    if (*(uint *)(puVar6 + 0x30) < 2) {
      FUN_10837d658(param_1);
    }
    else if (*(uint *)(puVar6 + 0x30) == 2) {
      FUN_10837d514(param_1);
    }
    else {
      bVar3 = (int)puVar4 == 0;
      iVar8 = 7;
      if (bVar3) {
        iVar8 = 1;
      }
      iVar9 = 2;
      if (!bVar3) {
        iVar9 = 6;
      }
      uVar1 = (bVar3 ^ param_5) & 1;
      uVar7 = 9;
      if (uVar1 != 0) {
        uVar7 = 10;
      }
      FUN_10816192c(param_1,uVar7);
      uVar11 = param_5 & 7;
      fStack_218 = *unaff_x22;
      afStack_248[1] = unaff_x22[1];
      fStack_238 = (float)*(undefined8 *)(unaff_x22 + 2);
      afStack_248[2] = fStack_238 - unaff_x22[6];
      fStack_224 = (float)((ulong)*(undefined8 *)(unaff_x22 + 2) >> 0x20);
      uStack_22c = NEON_rev64(CONCAT44(fStack_224 -
                                       (float)((ulong)*(undefined8 *)(unaff_x22 + 8) >> 0x20),
                                       fStack_238 - (float)*(undefined8 *)(unaff_x22 + 8)),4);
      fStack_214 = fStack_224 - unaff_x22[0xb];
      afStack_248[0] = fStack_218 + unaff_x22[4];
      fStack_234 = afStack_248[1] + unaff_x22[7];
      fStack_220 = fStack_218 + unaff_x22[10];
      fStack_20c = afStack_248[1] + unaff_x22[5];
      afStack_248[3] = afStack_248[1];
      fStack_230 = fStack_238;
      fStack_21c = fStack_224;
      fStack_210 = fStack_218;
      func_0x00010837dba4(afStack_248 + (ulong)uVar11 * 2);
      if (uVar1 == 0) {
        iVar10 = 3;
        while( true ) {
          func_0x00010837dc88();
          func_0x00010837dbdc(afStack_248 + (ulong)(uVar11 + iVar8 & 7) * 2);
          if (iVar10 == 0) break;
          uVar11 = uVar11 + iVar9 & 7;
          func_0x00010837dc2c(afStack_248 + (ulong)uVar11 * 2);
          iVar10 = iVar10 + -1;
        }
      }
      else {
        iVar10 = 4;
        do {
          func_0x00010837dc2c(afStack_248 + (ulong)(uVar11 + iVar8 & 7) * 2);
          func_0x00010837dc88();
          uVar11 = uVar11 + iVar9 & 7;
          func_0x00010837d120();
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      func_0x00010837dc40();
      puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffff);
    }
    if (iVar2 == 0) {
      param_1[0x84] = (int)puVar4 == 1;
      *(undefined4 *)(param_1 + 0x7c) = 3;
      *(uint *)(param_1 + 0x80) = param_5 & 7;
    }
    return param_1;
  }
  return puVar5;
}



/* Entry: 10837bd30; end: 10837bd87;  */

void FUN_10837bd30(ulong param_1,uint param_2)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long unaff_x19;
  int iVar7;
  float *unaff_x22;
  uint uVar8;
  float afStack_178 [4];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined8 uStack_15c;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_c0 [136];
  undefined8 uStack_38;
  
  puVar3 = auStack_c0;
  func_0x00010837cad4();
  uVar4 = param_1;
  FUN_10837bd88();
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837cb3c();
    func_0x00010837cb78();
    func_0x00010837dc60();
    iVar1 = *(int *)(puVar3 + 0x7c);
    if (*(uint *)(uVar4 + 0x30) < 2) {
      FUN_10837d658();
    }
    else if (*(uint *)(uVar4 + 0x30) == 2) {
      FUN_10837d514();
    }
    else {
      bVar2 = (int)param_1 == 0;
      iVar5 = 7;
      if (bVar2) {
        iVar5 = 1;
      }
      iVar6 = 2;
      if (!bVar2) {
        iVar6 = 6;
      }
      FUN_10816192c();
      uVar8 = param_2 & 7;
      fStack_148 = *unaff_x22;
      afStack_178[1] = unaff_x22[1];
      fStack_168 = (float)*(undefined8 *)(unaff_x22 + 2);
      afStack_178[2] = fStack_168 - unaff_x22[6];
      fStack_154 = (float)((ulong)*(undefined8 *)(unaff_x22 + 2) >> 0x20);
      uStack_15c = NEON_rev64(CONCAT44(fStack_154 -
                                       (float)((ulong)*(undefined8 *)(unaff_x22 + 8) >> 0x20),
                                       fStack_168 - (float)*(undefined8 *)(unaff_x22 + 8)),4);
      fStack_144 = fStack_154 - unaff_x22[0xb];
      afStack_178[0] = fStack_148 + unaff_x22[4];
      fStack_164 = afStack_178[1] + unaff_x22[7];
      fStack_150 = fStack_148 + unaff_x22[10];
      fStack_13c = afStack_178[1] + unaff_x22[5];
      afStack_178[3] = afStack_178[1];
      fStack_160 = fStack_168;
      fStack_14c = fStack_154;
      fStack_140 = fStack_148;
      func_0x00010837dba4(afStack_178 + (ulong)uVar8 * 2);
      if (((bVar2 ^ param_2) & 1) == 0) {
        iVar7 = 3;
        while( true ) {
          func_0x00010837dc88();
          func_0x00010837dbdc(afStack_178 + (ulong)(uVar8 + iVar5 & 7) * 2);
          if (iVar7 == 0) break;
          uVar8 = uVar8 + iVar6 & 7;
          func_0x00010837dc2c(afStack_178 + (ulong)uVar8 * 2);
          iVar7 = iVar7 + -1;
        }
      }
      else {
        iVar7 = 4;
        do {
          func_0x00010837dc2c(afStack_178 + (ulong)(uVar8 + iVar5 & 7) * 2);
          func_0x00010837dc88();
          uVar8 = uVar8 + iVar6 & 7;
          func_0x00010837d120();
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      func_0x00010837dc40();
      param_1 = param_1 & 0xffffffff;
    }
    if (iVar1 == 0) {
      *(bool *)(unaff_x19 + 0x84) = (int)param_1 == 1;
      *(undefined4 *)(unaff_x19 + 0x7c) = 3;
      *(uint *)(unaff_x19 + 0x80) = param_2 & 7;
    }
    return;
  }
  return;
}



/* Entry: 10837bd88; end: 10837bd97;  */

void FUN_10837bd88(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int iVar5;
  float *unaff_x22;
  uint uVar6;
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 uStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  func_0x00010837dc60();
  iVar1 = *(int *)(param_1 + 0x7c);
  if (*(uint *)(param_2 + 0x30) < 2) {
    FUN_10837d658();
  }
  else if (*(uint *)(param_2 + 0x30) == 2) {
    FUN_10837d514();
  }
  else {
    bVar2 = unaff_w21 == 0;
    iVar3 = 7;
    if (bVar2) {
      iVar3 = 1;
    }
    iVar4 = 2;
    if (!bVar2) {
      iVar4 = 6;
    }
    FUN_10816192c();
    uVar6 = unaff_w20 & 7;
    fStack_88 = *unaff_x22;
    afStack_b8[1] = unaff_x22[1];
    fStack_a8 = (float)*(undefined8 *)(unaff_x22 + 2);
    afStack_b8[2] = fStack_a8 - unaff_x22[6];
    fStack_94 = (float)((ulong)*(undefined8 *)(unaff_x22 + 2) >> 0x20);
    uStack_9c = NEON_rev64(CONCAT44(fStack_94 -
                                    (float)((ulong)*(undefined8 *)(unaff_x22 + 8) >> 0x20),
                                    fStack_a8 - (float)*(undefined8 *)(unaff_x22 + 8)),4);
    fStack_84 = fStack_94 - unaff_x22[0xb];
    afStack_b8[0] = fStack_88 + unaff_x22[4];
    fStack_a4 = afStack_b8[1] + unaff_x22[7];
    fStack_90 = fStack_88 + unaff_x22[10];
    fStack_7c = afStack_b8[1] + unaff_x22[5];
    afStack_b8[3] = afStack_b8[1];
    fStack_a0 = fStack_a8;
    fStack_8c = fStack_94;
    fStack_80 = fStack_88;
    func_0x00010837dba4(afStack_b8 + (ulong)uVar6 * 2);
    if (((bVar2 ^ unaff_w20) & 1) == 0) {
      iVar5 = 3;
      while( true ) {
        func_0x00010837dc88();
        func_0x00010837dbdc(afStack_b8 + (ulong)(uVar6 + iVar3 & 7) * 2);
        if (iVar5 == 0) break;
        uVar6 = uVar6 + iVar4 & 7;
        func_0x00010837dc2c(afStack_b8 + (ulong)uVar6 * 2);
        iVar5 = iVar5 + -1;
      }
    }
    else {
      iVar5 = 4;
      do {
        func_0x00010837dc2c(afStack_b8 + (ulong)(uVar6 + iVar3 & 7) * 2);
        func_0x00010837dc88();
        uVar6 = uVar6 + iVar4 & 7;
        func_0x00010837d120();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    func_0x00010837dc40();
  }
  if (iVar1 == 0) {
    *(bool *)(unaff_x19 + 0x84) = unaff_w21 == 1;
    *(undefined4 *)(unaff_x19 + 0x7c) = 3;
    *(uint *)(unaff_x19 + 0x80) = unaff_w20 & 7;
  }
  return;
}



/* Entry: 10837bd98; end: 10837bdeb;  */

long * FUN_10837bd98(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  int iVar12;
  float fVar13;
  undefined4 uStack_204;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long alStack_190 [12];
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined8 uStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_38;
  
  func_0x00010837cad4();
  func_0x00010837cf30();
  FUN_10837d6f0();
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010837cb3c();
  func_0x00010837cb78();
  plVar3 = alStack_190;
  pcStack_c8 = FUN_10837bdec;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010837caf0();
  func_0x00010837cda8();
  plVar7 = param_1;
  plVar9 = param_2;
  FUN_10837d968(alStack_190,param_1,param_2,param_3);
  uStack_130 = (undefined4)param_4;
  uStack_12c = (undefined1)param_5;
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_108);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010837cb3c();
  func_0x00010837cb78();
  pcStack_198 = FUN_10837be7c;
  plVar4 = plVar3;
  plStack_1d0 = param_1;
  plStack_1c8 = param_2;
  uStack_1c0 = param_3;
  uStack_1b8 = param_4;
  uStack_1b0 = param_5;
  ppuStack_1a0 = &puStack_d0;
  func_0x00010837caf0();
  uStack_204 = 0;
  lStack_1f8 = 0;
  lStack_200 = 0;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  plVar10 = (long *)&uStack_204;
  plVar8 = (long *)0x1;
  uStack_1d8 = extraout_x8;
  FUN_10837742c();
  if ((int)plVar4 != 0) {
    plVar10 = (long *)&uStack_204;
    plVar8 = (long *)0x0;
    FUN_10837742c();
    plVar4 = plVar3;
    if ((int)plVar3 != 0) {
      iVar2 = (int)&lStack_200;
      plVar8 = &lStack_1f0;
      FUN_108281a6c();
      if (iVar2 == 0) {
        plVar4 = &lStack_1f0;
        plVar8 = &lStack_200;
        FUN_108281a6c();
        if ((int)plVar4 == 0) goto LAB_10837bf68;
        uVar1 = uStack_1e0;
        uStack_1e0 = uStack_1dc;
        if (plVar7 != (long *)0x0) {
          plVar7[1] = lStack_1e8;
          *plVar7 = lStack_1f0;
          plVar7[3] = lStack_1f8;
          plVar7[2] = lStack_200;
        }
      }
      else {
        uVar1 = uStack_1dc;
        if (plVar7 != (long *)0x0) {
          plVar7[1] = lStack_1f8;
          *plVar7 = lStack_200;
          plVar7[3] = lStack_1e8;
          plVar7[2] = lStack_1f0;
        }
      }
      if (plVar9 != (long *)0x0) {
        *(undefined4 *)plVar9 = uStack_1e0;
        *(undefined4 *)((long)plVar9 + 4) = uVar1;
      }
      plVar4 = (long *)0x1;
    }
  }
LAB_10837bf68:
  func_0x00010837cab0(uStack_1d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837ccd0();
    *plVar4 = (long)plVar8;
    lVar11 = *plVar10;
    plVar4[2] = plVar10[1];
    plVar4[1] = lVar11;
    FUN_1082d8070(plVar4 + 1);
    lVar11 = *plVar7;
    if (*(char *)(lVar11 + 0xc1) == '\0') {
      plVar3 = plVar7;
      func_0x000108377398();
      iVar2 = (int)plVar3;
      lVar11 = *plVar7;
    }
    else {
      iVar2 = 0;
    }
    *(char *)(plVar9 + 3) = (char)iVar2;
    iVar12 = *(int *)(lVar11 + 0x48);
    *(bool *)((long)plVar9 + 0x1a) = iVar12 == 0;
    if ((iVar2 != 0) && (iVar12 != 0)) {
      pfVar5 = (float *)*plVar9;
      func_0x0001083773e0();
      fVar13 = *pfVar5;
      if (*(float *)(plVar9 + 1) <= *pfVar5) {
        fVar13 = *(float *)(plVar9 + 1);
      }
      *(float *)(plVar9 + 1) = fVar13;
      fVar13 = pfVar5[1];
      if (*(float *)((long)plVar9 + 0xc) <= pfVar5[1]) {
        fVar13 = *(float *)((long)plVar9 + 0xc);
      }
      *(float *)((long)plVar9 + 0xc) = fVar13;
      fVar13 = pfVar5[2];
      if (pfVar5[2] <= *(float *)(plVar9 + 2)) {
        fVar13 = *(float *)(plVar9 + 2);
      }
      *(float *)(plVar9 + 2) = fVar13;
      fVar13 = pfVar5[3];
      if (pfVar5[3] <= *(float *)((long)plVar9 + 0x14)) {
        fVar13 = *(float *)((long)plVar9 + 0x14);
      }
      *(float *)((long)plVar9 + 0x14) = fVar13;
      lVar11 = *plVar7;
      iVar12 = *(int *)(lVar11 + 0x48);
    }
    uVar6 = *(undefined8 *)(lVar11 + 0x40);
    FUN_10837a418(uVar6,iVar12);
    *(bool *)((long)plVar9 + 0x19) = iVar12 == (int)uVar6;
    return plVar9;
  }
  return plVar4;
}



/* Entry: 10837bdec; end: 10837be7b;  */

long * FUN_10837bdec(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  int iVar12;
  float fVar13;
  undefined4 uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long alStack_d0 [12];
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_48;
  
  plVar3 = alStack_d0;
  func_0x00010837caf0();
  func_0x00010837cda8();
  plVar7 = param_2;
  plVar9 = param_3;
  FUN_10837d968(alStack_d0,param_2,param_3,param_4);
  uStack_70 = (undefined4)param_5;
  uStack_6c = (undefined1)param_6;
  func_0x00010837cbd4();
  func_0x00010837cb8c();
  func_0x00010837cab0(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010837cb3c();
  func_0x00010837cb78();
  pcStack_d8 = FUN_10837be7c;
  plVar4 = plVar3;
  plStack_110 = param_2;
  plStack_108 = param_3;
  uStack_100 = param_4;
  uStack_f8 = param_5;
  uStack_f0 = param_6;
  uStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010837caf0();
  uStack_144 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plVar10 = (long *)&uStack_144;
  plVar8 = (long *)0x1;
  uStack_118 = extraout_x8;
  FUN_10837742c();
  if ((int)plVar4 != 0) {
    plVar10 = (long *)&uStack_144;
    plVar8 = (long *)0x0;
    FUN_10837742c();
    plVar4 = plVar3;
    if ((int)plVar3 != 0) {
      iVar2 = (int)&lStack_140;
      plVar8 = &lStack_130;
      FUN_108281a6c();
      if (iVar2 == 0) {
        plVar4 = &lStack_130;
        plVar8 = &lStack_140;
        FUN_108281a6c();
        if ((int)plVar4 == 0) goto LAB_10837bf68;
        uVar1 = uStack_120;
        uStack_120 = uStack_11c;
        if (plVar7 != (long *)0x0) {
          plVar7[1] = lStack_128;
          *plVar7 = lStack_130;
          plVar7[3] = lStack_138;
          plVar7[2] = lStack_140;
        }
      }
      else {
        uVar1 = uStack_11c;
        if (plVar7 != (long *)0x0) {
          plVar7[1] = lStack_138;
          *plVar7 = lStack_140;
          plVar7[3] = lStack_128;
          plVar7[2] = lStack_130;
        }
      }
      if (plVar9 != (long *)0x0) {
        *(undefined4 *)plVar9 = uStack_120;
        *(undefined4 *)((long)plVar9 + 4) = uVar1;
      }
      plVar4 = (long *)0x1;
    }
  }
LAB_10837bf68:
  func_0x00010837cab0(uStack_118);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837ccd0();
    *plVar4 = (long)plVar8;
    lVar11 = *plVar10;
    plVar4[2] = plVar10[1];
    plVar4[1] = lVar11;
    FUN_1082d8070(plVar4 + 1);
    lVar11 = *plVar7;
    if (*(char *)(lVar11 + 0xc1) == '\0') {
      plVar3 = plVar7;
      func_0x000108377398();
      iVar2 = (int)plVar3;
      lVar11 = *plVar7;
    }
    else {
      iVar2 = 0;
    }
    *(char *)(plVar9 + 3) = (char)iVar2;
    iVar12 = *(int *)(lVar11 + 0x48);
    *(bool *)((long)plVar9 + 0x1a) = iVar12 == 0;
    if ((iVar2 != 0) && (iVar12 != 0)) {
      pfVar5 = (float *)*plVar9;
      func_0x0001083773e0();
      fVar13 = *pfVar5;
      if (*(float *)(plVar9 + 1) <= *pfVar5) {
        fVar13 = *(float *)(plVar9 + 1);
      }
      *(float *)(plVar9 + 1) = fVar13;
      fVar13 = pfVar5[1];
      if (*(float *)((long)plVar9 + 0xc) <= pfVar5[1]) {
        fVar13 = *(float *)((long)plVar9 + 0xc);
      }
      *(float *)((long)plVar9 + 0xc) = fVar13;
      fVar13 = pfVar5[2];
      if (pfVar5[2] <= *(float *)(plVar9 + 2)) {
        fVar13 = *(float *)(plVar9 + 2);
      }
      *(float *)(plVar9 + 2) = fVar13;
      fVar13 = pfVar5[3];
      if (pfVar5[3] <= *(float *)((long)plVar9 + 0x14)) {
        fVar13 = *(float *)((long)plVar9 + 0x14);
      }
      *(float *)((long)plVar9 + 0x14) = fVar13;
      lVar11 = *plVar7;
      iVar12 = *(int *)(lVar11 + 0x48);
    }
    uVar6 = *(undefined8 *)(lVar11 + 0x40);
    FUN_10837a418(uVar6,iVar12);
    *(bool *)((long)plVar9 + 0x19) = iVar12 == (int)uVar6;
    return plVar9;
  }
  return plVar4;
}



/* Entry: 10837be7c; end: 10837bf8f;  */

long * FUN_10837be7c(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  plVar3 = param_1;
  func_0x00010837caf0();
  uStack_74 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  plVar4 = (long *)&uStack_74;
  plVar7 = (long *)0x1;
  uStack_48 = extraout_x8;
  FUN_10837742c();
  if ((int)plVar3 != 0) {
    plVar4 = (long *)&uStack_74;
    plVar7 = (long *)0x0;
    FUN_10837742c();
    plVar3 = param_1;
    if ((int)param_1 != 0) {
      iVar2 = (int)&lStack_70;
      plVar7 = &lStack_60;
      FUN_108281a6c();
      if (iVar2 == 0) {
        plVar3 = &lStack_60;
        plVar7 = &lStack_70;
        FUN_108281a6c();
        if ((int)plVar3 == 0) goto LAB_10837bf68;
        uVar1 = uStack_50;
        uStack_50 = uStack_4c;
        if (param_2 != (long *)0x0) {
          param_2[1] = lStack_58;
          *param_2 = lStack_60;
          param_2[3] = lStack_68;
          param_2[2] = lStack_70;
        }
      }
      else {
        uVar1 = uStack_4c;
        if (param_2 != (long *)0x0) {
          param_2[1] = lStack_68;
          *param_2 = lStack_70;
          param_2[3] = lStack_58;
          param_2[2] = lStack_60;
        }
      }
      if (param_3 != (long *)0x0) {
        *(undefined4 *)param_3 = uStack_50;
        *(undefined4 *)((long)param_3 + 4) = uVar1;
      }
      plVar3 = (long *)0x1;
    }
  }
LAB_10837bf68:
  func_0x00010837cab0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010837ccd0();
    *plVar3 = (long)plVar7;
    lVar8 = *plVar4;
    plVar3[2] = plVar4[1];
    plVar3[1] = lVar8;
    FUN_1082d8070(plVar3 + 1);
    lVar8 = *param_2;
    if (*(char *)(lVar8 + 0xc1) == '\0') {
      plVar4 = param_2;
      func_0x000108377398();
      iVar2 = (int)plVar4;
      lVar8 = *param_2;
    }
    else {
      iVar2 = 0;
    }
    *(char *)(param_3 + 3) = (char)iVar2;
    iVar9 = *(int *)(lVar8 + 0x48);
    *(bool *)((long)param_3 + 0x1a) = iVar9 == 0;
    if ((iVar2 != 0) && (iVar9 != 0)) {
      pfVar5 = (float *)*param_3;
      func_0x0001083773e0();
      fVar10 = *pfVar5;
      if (*(float *)(param_3 + 1) <= *pfVar5) {
        fVar10 = *(float *)(param_3 + 1);
      }
      *(float *)(param_3 + 1) = fVar10;
      fVar10 = pfVar5[1];
      if (*(float *)((long)param_3 + 0xc) <= pfVar5[1]) {
        fVar10 = *(float *)((long)param_3 + 0xc);
      }
      *(float *)((long)param_3 + 0xc) = fVar10;
      fVar10 = pfVar5[2];
      if (pfVar5[2] <= *(float *)(param_3 + 2)) {
        fVar10 = *(float *)(param_3 + 2);
      }
      *(float *)(param_3 + 2) = fVar10;
      fVar10 = pfVar5[3];
      if (pfVar5[3] <= *(float *)((long)param_3 + 0x14)) {
        fVar10 = *(float *)((long)param_3 + 0x14);
      }
      *(float *)((long)param_3 + 0x14) = fVar10;
      lVar8 = *param_2;
      iVar9 = *(int *)(lVar8 + 0x48);
    }
    uVar6 = *(undefined8 *)(lVar8 + 0x40);
    FUN_10837a418(uVar6,iVar9);
    *(bool *)((long)param_3 + 0x19) = iVar9 == (int)uVar6;
    return param_3;
  }
  return plVar3;
}



/* Entry: 10837bf90; end: 10837c077;  */

void FUN_10837bf90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  int iVar6;
  float fVar7;
  
  func_0x00010837ccd0();
  *param_1 = param_2;
  uVar4 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar4;
  FUN_1082d8070(param_1 + 1);
  lVar5 = *unaff_x20;
  if (*(char *)(lVar5 + 0xc1) == '\0') {
    plVar2 = unaff_x20;
    func_0x000108377398();
    iVar1 = (int)plVar2;
    lVar5 = *unaff_x20;
  }
  else {
    iVar1 = 0;
  }
  *(char *)(unaff_x19 + 3) = (char)iVar1;
  iVar6 = *(int *)(lVar5 + 0x48);
  *(bool *)((long)unaff_x19 + 0x1a) = iVar6 == 0;
  if ((iVar1 != 0) && (iVar6 != 0)) {
    pfVar3 = (float *)*unaff_x19;
    func_0x0001083773e0();
    fVar7 = *pfVar3;
    if (*(float *)(unaff_x19 + 1) <= *pfVar3) {
      fVar7 = *(float *)(unaff_x19 + 1);
    }
    *(float *)(unaff_x19 + 1) = fVar7;
    fVar7 = pfVar3[1];
    if (*(float *)((long)unaff_x19 + 0xc) <= pfVar3[1]) {
      fVar7 = *(float *)((long)unaff_x19 + 0xc);
    }
    *(float *)((long)unaff_x19 + 0xc) = fVar7;
    fVar7 = pfVar3[2];
    if (pfVar3[2] <= *(float *)(unaff_x19 + 2)) {
      fVar7 = *(float *)(unaff_x19 + 2);
    }
    *(float *)(unaff_x19 + 2) = fVar7;
    fVar7 = pfVar3[3];
    if (pfVar3[3] <= *(float *)((long)unaff_x19 + 0x14)) {
      fVar7 = *(float *)((long)unaff_x19 + 0x14);
    }
    *(float *)((long)unaff_x19 + 0x14) = fVar7;
    lVar5 = *unaff_x20;
    iVar6 = *(int *)(lVar5 + 0x48);
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x40);
  FUN_10837a418(uVar4,iVar6);
  *(bool *)((long)unaff_x19 + 0x19) = iVar6 == (int)uVar4;
  return;
}



/* Entry: 10837c078; end: 10837c0f3;  */

void FUN_10837c078(long param_1)

{
  char cVar1;
  int iVar2;
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  long lStack_28;
  
  func_0x00010837cce4();
  *(byte *)(extraout_x8 + 0xc) = *(char *)(param_1 + 0x19) << 1 ^ 2;
  if (((*(byte *)(param_1 + 0x1a) & 1) != 0) || (*(char *)(unaff_x19 + 3) == '\x01')) {
    iVar2 = (int)unaff_x19 + 8;
    FUN_1082ffd68();
    if (iVar2 != 0) {
      func_0x00010837cac4(&lStack_28,*unaff_x19);
      uVar3 = unaff_x19[1];
      *(undefined8 *)(lStack_28 + 0x70) = unaff_x19[2];
      *(undefined8 *)(lStack_28 + 0x68) = uVar3;
      *(undefined1 *)(lStack_28 + 0xc1) = 0;
      cVar1 = (char)lStack_28 + 'h';
      FUN_1082ffd68();
      *(char *)(lStack_28 + 0xc5) = cVar1;
    }
  }
  return;
}



/* Entry: 10837c0f4; end: 10837c1a7;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3e34) */
/* WARNING: Removing unreachable block (ram,0x0001083a3e3c) */

void FUN_10837c0f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0x1138270b0;
  FUN_1083a394c(&uStack_28,&UNK_10f490662);
  puVar1 = &uStack_28;
  FUN_1083a3ed0(puVar1,0x2e);
  if ((int)puVar1 != 0) {
    func_0x00010818f354(&uStack_28,0x66);
  }
  FUN_1081fe608(param_1,&uStack_28);
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 10837c1a8; end: 10837c2df;  */

ulong FUN_10837c1a8(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                   undefined1 *param_6)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  float *pfVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s11;
  float unaff_s12;
  float fVar16;
  float afStack_f0 [2];
  undefined8 uStack_e8;
  float afStack_70 [2];
  undefined8 uStack_68;
  
  pfVar7 = afStack_70;
  func_0x00010837caf0();
  fVar13 = *(float *)(param_6 + 4);
  fVar14 = *(float *)(param_6 + 0x14);
  fVar9 = fVar13;
  fVar11 = fVar14;
  if (fVar13 <= fVar14) {
    fVar9 = fVar14;
    fVar11 = fVar13;
  }
  uVar10 = 0;
  uVar8 = 0xffffffff;
  if (fVar13 <= fVar14) {
    uVar8 = 1;
  }
  bVar2 = false;
  uVar3 = false;
  bVar6 = false;
  if (fVar11 <= param_2) {
    bVar2 = false;
    uVar3 = false;
    bVar6 = true;
    if (!NAN(param_2) && !NAN(fVar9)) {
      bVar2 = param_2 < fVar9;
      uVar3 = param_2 == fVar9;
      bVar6 = false;
    }
  }
  uStack_68 = extraout_x8;
  if ((bool)uVar3 || bVar2 != bVar6) {
    func_0x00010837ced0();
    if (fVar13 == fVar14) {
      param_4 = unaff_s11 - param_1;
      fVar11 = (unaff_s12 - param_1) * param_4;
      bVar2 = true;
      if ((fVar11 <= 0.0) && (bVar2 = false, !NAN(param_1) && !NAN(unaff_s11))) {
        bVar2 = param_1 == unaff_s11;
      }
      if (bVar2) {
LAB_10837c234:
        uVar5 = fVar9 <= param_2;
        uVar4 = param_2 == fVar9;
        uVar3 = true;
        if ((bool)uVar4) goto LAB_10837c23c;
        fVar9 = fVar14 + fVar13 + *(float *)(unaff_x20 + 0xc) * -2.0;
        uVar10 = 0;
        fVar11 = *(float *)(unaff_x20 + 0xc) - fVar13;
        FUN_108351300(fVar9,fVar11 + fVar11,fVar13 - param_2);
        if ((int)pfVar7 == 0) {
          func_0x00010837cebc();
          param_6 = (undefined1 *)pfVar7;
        }
        else {
          fVar11 = *(float *)(unaff_x20 + 8);
          func_0x00010837cef0(afStack_70[0],fVar11,unaff_s11 + fVar11 * -2.0);
          fVar9 = unaff_s12 + afStack_70[0] * fVar11;
          uVar10 = 0;
          param_6 = (undefined1 *)pfVar7;
        }
        fVar11 = ABS(fVar9 - param_1);
        func_0x00010837ccf0();
        if (!(bool)uVar5 || (bool)uVar4) {
          uVar3 = false;
          if ((param_2 == fVar14) && (uVar3 = false, !NAN(param_1) && !NAN(unaff_s11))) {
            uVar3 = param_1 == unaff_s11;
          }
          if (!(bool)uVar3) goto LAB_10837c2a0;
        }
        uVar3 = fVar9 == param_1;
        if (param_1 <= fVar9) {
          uVar8 = 0;
        }
        param_6 = (undefined1 *)(ulong)uVar8;
        goto LAB_10837c2b0;
      }
      uVar3 = false;
    }
    else {
      uVar3 = false;
      if ((param_2 == fVar13) && (uVar3 = false, !NAN(param_1) && !NAN(unaff_s12))) {
        uVar3 = param_1 == unaff_s12;
      }
      if (!(bool)uVar3) goto LAB_10837c234;
    }
LAB_10837c2a0:
    func_0x00010837cf04();
  }
  else {
LAB_10837c23c:
    param_6 = (undefined1 *)0x0;
  }
LAB_10837c2b0:
  func_0x00010837cab0(uStack_68);
  if ((bool)uVar3) {
    return CONCAT44(uVar10,fVar9);
  }
  ___stack_chk_fail();
  iVar1 = (int)afStack_f0;
  func_0x00010837caf0();
  fVar12 = *(float *)(param_6 + 4);
  fVar15 = *(float *)(param_6 + 0x14);
  fVar14 = fVar12;
  fVar13 = fVar15;
  if (fVar12 <= fVar15) {
    fVar14 = fVar15;
    fVar13 = fVar12;
  }
  uVar10 = 0;
  bVar2 = false;
  uVar3 = false;
  bVar6 = false;
  if (fVar13 <= fVar11) {
    bVar2 = false;
    uVar3 = false;
    bVar6 = true;
    if (!NAN(fVar11) && !NAN(fVar14)) {
      bVar2 = fVar11 < fVar14;
      uVar3 = fVar11 == fVar14;
      bVar6 = false;
    }
  }
  uStack_e8 = extraout_x8_00;
  if (!(bool)uVar3 && bVar2 == bVar6) goto LAB_10837c41c;
  func_0x00010837ced0(0xffffffff);
  if (fVar12 == fVar15) {
    param_4 = unaff_s11 - fVar9;
    fVar13 = (unaff_s12 - fVar9) * param_4;
    bVar2 = true;
    if ((fVar13 <= 0.0) && (bVar2 = false, !NAN(fVar9) && !NAN(unaff_s11))) {
      bVar2 = fVar9 == unaff_s11;
    }
    if (bVar2) {
LAB_10837c370:
      uVar5 = fVar14 <= fVar11;
      uVar4 = fVar11 == fVar14;
      uVar3 = 1;
      if ((bool)uVar4) goto LAB_10837c41c;
      fVar16 = *(float *)(unaff_x20 + 0x18);
      param_4 = fVar11 + -(fVar16 * fVar11) + fVar16 * *(float *)(unaff_x20 + 0xc);
      fVar14 = fVar15 + fVar12 + param_4 * -2.0;
      uVar10 = 0;
      param_4 = param_4 - fVar12;
      fVar13 = fVar12 - fVar11;
      FUN_108351300(fVar14,param_4 + param_4,fVar13);
      if (iVar1 == 0) {
        func_0x00010837cebc();
      }
      else {
        fVar14 = fVar16 * *(float *)(unaff_x20 + 8);
        func_0x00010837cef0(afStack_f0[0],fVar14,unaff_s11 + fVar14 * -2.0);
        fVar13 = fVar16 + -1.0 + fVar16 + -1.0;
        fVar13 = fVar13 - afStack_f0[0] * fVar13;
        param_4 = 1.0;
        fVar14 = (unaff_s12 + afStack_f0[0] * fVar14) / (afStack_f0[0] * fVar13 + 1.0);
        uVar10 = 0;
      }
      fVar12 = ABS(fVar14 - fVar9);
      func_0x00010837ccf0();
      if (!(bool)uVar5 || (bool)uVar4) {
        uVar3 = false;
        if ((fVar11 == fVar15) && (uVar3 = false, !NAN(fVar9) && !NAN(unaff_s11))) {
          uVar3 = fVar9 == unaff_s11;
        }
        if (!(bool)uVar3) goto LAB_10837c40c;
      }
      uVar3 = fVar14 == fVar9;
      goto LAB_10837c41c;
    }
    uVar3 = false;
  }
  else {
    uVar3 = false;
    if ((fVar11 == fVar12) && (uVar3 = false, !NAN(fVar9) && !NAN(unaff_s12))) {
      uVar3 = fVar9 == unaff_s12;
    }
    if (!(bool)uVar3) goto LAB_10837c370;
  }
LAB_10837c40c:
  func_0x00010837cf04();
LAB_10837c41c:
  func_0x00010837cab0(uStack_e8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    return (ulong)(uint)(fVar14 + param_5 * ((fVar12 - fVar14) * 3.0 +
                                            param_5 * ((fVar14 + ((fVar13 - fVar12) - fVar12)) * 3.0
                                                      + param_5 * ((param_4 +
                                                                   (fVar12 - fVar13) * 3.0) - fVar14
                                                                  ))));
  }
  return CONCAT44(uVar10,fVar14);
}



/* Entry: 10837c2e0; end: 10837c44f;  */

ulong FUN_10837c2e0(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                   long param_6)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 extraout_x8;
  long unaff_x20;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float fVar12;
  float afStack_80 [2];
  undefined8 uStack_78;
  
  iVar1 = (int)afStack_80;
  func_0x00010837caf0();
  fVar9 = *(float *)(param_6 + 4);
  fVar11 = *(float *)(param_6 + 0x14);
  fVar7 = fVar9;
  fVar10 = fVar11;
  if (fVar9 <= fVar11) {
    fVar7 = fVar11;
    fVar10 = fVar9;
  }
  uVar8 = 0;
  bVar2 = false;
  uVar3 = false;
  bVar6 = false;
  if (fVar10 <= param_2) {
    bVar2 = false;
    uVar3 = false;
    bVar6 = true;
    if (!NAN(param_2) && !NAN(fVar7)) {
      bVar2 = param_2 < fVar7;
      uVar3 = param_2 == fVar7;
      bVar6 = false;
    }
  }
  uStack_78 = extraout_x8;
  if (!(bool)uVar3 && bVar2 == bVar6) goto LAB_10837c41c;
  func_0x00010837ced0(0xffffffff);
  if (fVar9 == fVar11) {
    param_4 = unaff_s11 - param_1;
    fVar10 = (unaff_s12 - param_1) * param_4;
    bVar2 = true;
    if ((fVar10 <= 0.0) && (bVar2 = false, !NAN(param_1) && !NAN(unaff_s11))) {
      bVar2 = param_1 == unaff_s11;
    }
    if (bVar2) {
LAB_10837c370:
      uVar5 = fVar7 <= param_2;
      uVar4 = param_2 == fVar7;
      uVar3 = 1;
      if ((bool)uVar4) goto LAB_10837c41c;
      fVar12 = *(float *)(unaff_x20 + 0x18);
      param_4 = param_2 + -(fVar12 * param_2) + fVar12 * *(float *)(unaff_x20 + 0xc);
      fVar7 = fVar11 + fVar9 + param_4 * -2.0;
      uVar8 = 0;
      param_4 = param_4 - fVar9;
      fVar10 = fVar9 - param_2;
      FUN_108351300(fVar7,param_4 + param_4,fVar10);
      if (iVar1 == 0) {
        func_0x00010837cebc();
      }
      else {
        fVar7 = fVar12 * *(float *)(unaff_x20 + 8);
        func_0x00010837cef0(afStack_80[0],fVar7,unaff_s11 + fVar7 * -2.0);
        fVar10 = fVar12 + -1.0 + fVar12 + -1.0;
        fVar10 = fVar10 - afStack_80[0] * fVar10;
        param_4 = 1.0;
        fVar7 = (unaff_s12 + afStack_80[0] * fVar7) / (afStack_80[0] * fVar10 + 1.0);
        uVar8 = 0;
      }
      fVar9 = ABS(fVar7 - param_1);
      func_0x00010837ccf0();
      if (!(bool)uVar5 || (bool)uVar4) {
        uVar3 = false;
        if ((param_2 == fVar11) && (uVar3 = false, !NAN(param_1) && !NAN(unaff_s11))) {
          uVar3 = param_1 == unaff_s11;
        }
        if (!(bool)uVar3) goto LAB_10837c40c;
      }
      uVar3 = fVar7 == param_1;
      goto LAB_10837c41c;
    }
    uVar3 = false;
  }
  else {
    uVar3 = false;
    if ((param_2 == fVar9) && (uVar3 = false, !NAN(param_1) && !NAN(unaff_s12))) {
      uVar3 = param_1 == unaff_s12;
    }
    if (!(bool)uVar3) goto LAB_10837c370;
  }
LAB_10837c40c:
  func_0x00010837cf04();
LAB_10837c41c:
  func_0x00010837cab0(uStack_78);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    return (ulong)(uint)(fVar7 + param_5 * ((fVar9 - fVar7) * 3.0 +
                                           param_5 * ((fVar7 + ((fVar10 - fVar9) - fVar9)) * 3.0 +
                                                     param_5 * ((param_4 + (fVar9 - fVar10) * 3.0) -
                                                               fVar7))));
  }
  return CONCAT44(uVar8,fVar7);
}



/* Entry: 10837c450; end: 10837c487;  */

float FUN_10837c450(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return param_1 + param_5 * ((param_2 - param_1) * 3.0 +
                             param_5 * ((param_1 + ((param_3 - param_2) - param_2)) * 3.0 +
                                       param_5 * ((param_4 + (param_2 - param_3) * 3.0) - param_1)))
  ;
}



/* Entry: 10837c488; end: 10837c5b3;  */

undefined4 * FUN_10837c488(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  *param_1 = 1;
  *(undefined4 **)(param_1 + 10) = param_1 + 2;
  *(undefined8 *)(param_1 + 0xc) = 0x800000000;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 0xe;
  *(undefined8 *)(param_1 + 0x12) = 0x1000000000;
  *(undefined4 **)(param_1 + 0x16) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  param_1[0x24] = 1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined4 **)(param_1 + 0x2a) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x2c) = 0x200000000;
  param_1[0x22] = 1;
  *(undefined1 *)((long)param_1 + 0xc6) = 0;
  param_1[0x30] = 0xac0100;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  if (0 < param_3) {
    func_0x00010837cf8c();
    FUN_10837c5b4();
  }
  if (0 < (int)param_2) {
    func_0x00010837c5cc(param_1 + 0x10,param_2);
  }
  if (0 < (int)param_4) {
    FUN_1081a0f10(param_1 + 0x16,param_4);
  }
  return param_1;
}



/* Entry: 10837c5b4; end: 10837c5e3;  */

void FUN_10837c5b4(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = param_2 - (int)param_1[1];
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0 || param_2 < (int)param_1[1]) {
    return;
  }
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - (int)param_1[1]) < (int)uVar1) {
    plVar2 = param_1;
    FUN_1082d3740(0x3ff0000000000000);
    if ((int)param_1[1] != 0) {
      _memcpy(plVar2,*param_1,(long)(int)param_1[1] << 3);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    uVar3 = uVar3 >> 3;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    *param_1 = (long)plVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar3 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 10837c5e4; end: 10837c6e7;  */

void FUN_10837c5e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *unaff_x19;
  
  func_0x00010837cd50();
  if (param_3 < 5) {
    *unaff_x19 = param_2;
    *(int *)(unaff_x19 + 1) = param_3;
    *(undefined4 *)((long)unaff_x19 + 0xc) = 8;
  }
  else {
    func_0x00010837cf8c();
    func_0x00010837c620();
  }
  return;
}



/* Entry: 10837c6e8; end: 10837c7eb;  */

undefined4 *
FUN_10837c6e8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  *param_1 = 1;
  FUN_10837c7ec(param_1 + 2);
  func_0x00010837c850(param_1 + 0xe,param_4,param_5);
  func_0x00010837c8b0(param_1 + 0x14,param_6,param_7);
  param_1[0x24] = 1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined4 **)(param_1 + 0x2a) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x2c) = 0x200000000;
  param_1[0x22] = 0;
  *(undefined1 *)((long)param_1 + 0xc3) = param_8;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  *(undefined1 *)((long)param_1 + 0xc6) = 0;
  *(undefined1 *)((long)param_1 + 0xc2) = 0xac;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  func_0x0001082d8764(param_1);
  return param_1;
}



/* Entry: 10837c7ec; end: 10837c913;  */

long FUN_10837c7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010837c814(param_1 + 0x20,param_2,param_3,param_1);
  return param_1;
}



/* Entry: 10837c914; end: 10837ca37;  */

undefined8 * FUN_10837c914(undefined8 *param_1,ulong param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  bVar1 = false;
  func_0x00010837caf0();
  uStack_48 = extraout_x8;
  do {
    puVar4 = param_1;
    FUN_10834ebe8(param_1,&fStack_68);
    iVar3 = (int)puVar4;
    bVar2 = iVar3 == 6;
    if (bVar2) {
      func_0x00010837cab0(uStack_48);
      if (bVar2) {
        return puVar4;
      }
      ___stack_chk_fail();
      FUN_10837ca5c(*puVar4);
      return puVar4;
    }
    if ((param_2 & 1) != 0) {
      func_0x00010837d040(param_3);
      *(ulong *)(param_3 + 0x88) = CONCAT44(fStack_64,fStack_68);
    }
    if (bVar1) {
LAB_10837c994:
      func_0x00010837d08c(param_3);
    }
    else {
      bVar1 = false;
      if ((fStack_68 == *(float *)(param_3 + 0x88)) &&
         (bVar1 = false, !NAN(fStack_64) && !NAN(*(float *)(param_3 + 0x8c)))) {
        bVar1 = fStack_64 == *(float *)(param_3 + 0x8c);
      }
      if (!bVar1) goto LAB_10837c994;
    }
    if (iVar3 == 4) {
      FUN_10837d184(uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,param_3);
      uVar5 = CONCAT44(uStack_4c,uStack_50);
      goto LAB_10837ca00;
    }
    if (iVar3 == 2) {
      FUN_10837d0d4(uStack_60,uStack_5c,uStack_58,uStack_54,param_3);
      uVar5 = CONCAT44(uStack_54,uStack_58);
      goto LAB_10837ca00;
    }
    param_2 = 0;
    bVar1 = true;
    if (iVar3 == 1) {
      func_0x00010837d08c(uStack_60,uStack_5c,param_3);
      uVar5 = CONCAT44(uStack_5c,uStack_60);
LAB_10837ca00:
      param_2 = 0;
      *(undefined8 *)(param_3 + 0x88) = uVar5;
      bVar1 = true;
    }
  } while( true );
}



/* Entry: 10837ca38; end: 10837ca5b;  */

undefined8 * FUN_10837ca38(undefined8 *param_1)

{
  FUN_10837ca5c(*param_1);
  return param_1;
}



/* Entry: 10837ca5c; end: 10837ca67;  */

void FUN_10837ca5c(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    FUN_10837e114();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10837ca68; end: 10837ca9b;  */

void FUN_10837ca68(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_10837e114();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10837ca9c; end: 10837d00b;  */

long * FUN_10837ca9c(long *param_1)

{
  int iVar1;
  long lVar2;
  long *unaff_x19;
  
  lVar2 = *unaff_x19;
  if (*(int *)*unaff_x19 == 1) {
    FUN_10837dfc8(lVar2,0,0,0);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x88);
    func_0x00010837efa0();
    if (iVar1 == 1) {
      FUN_10837c488(lVar2,0,0,0);
    }
    else {
      func_0x00010837ef50(lVar2);
      FUN_10837e040(lVar2,*unaff_x19,0,0,0);
    }
    FUN_108376bdc();
  }
  *param_1 = *unaff_x19;
  func_0x00010837ef98();
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x88) = 0;
  *(undefined1 *)(lVar2 + 0xc1) = 1;
  return param_1;
}



/* Entry: 10837d00c; end: 10837d0d3;  */

long FUN_10837d00c(long param_1)

{
  FUN_1081842d4(param_1 + 0x50);
  FUN_1082f398c(param_1 + 0x38);
  FUN_1082e7088(param_1 + 0x20);
  return param_1;
}



/* Entry: 10837d0d4; end: 10837d183;  */

void FUN_10837d0d4(undefined4 *param_1)

{
  long unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  func_0x00010837dbfc();
  FUN_10837d394();
  func_0x00010837dc48();
  *param_1 = unaff_s11;
  param_1[1] = unaff_s10;
  param_1[2] = unaff_s9;
  param_1[3] = unaff_s8;
  func_0x00010837dbbc();
  func_0x00010837dc9c(*(uint *)(unaff_x19 + 0x68) | 2);
  return;
}



/* Entry: 10837d184; end: 10837d20b;  */

void FUN_10837d184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined4 *puVar1;
  
  FUN_10837d394();
  puVar1 = (undefined4 *)(param_7 + 0x20);
  FUN_1082d3644(puVar1,3);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  func_0x00010837dbbc();
  func_0x00010837dc9c(*(uint *)(param_7 + 0x68) | 8);
  return;
}



/* Entry: 10837d20c; end: 10837d24f;  */

long FUN_10837d20c(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10837d394(param_1);
    func_0x00010837dbbc();
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return param_1;
}



/* Entry: 10837d250; end: 10837d393;  */

void FUN_10837d250(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (long)*(int *)(param_1 + 0x28) + (long)param_2;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  FUN_10837c5b4(param_1 + 0x20,lVar2);
  lVar2 = (long)*(int *)(param_1 + 0x40) + (long)param_3;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  uVar1 = (int)lVar2 - *(int *)(param_1 + 0x40);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0 && *(int *)(param_1 + 0x40) <= (int)lVar2) {
    if ((int)((*(uint *)(param_1 + 0x44) >> 1) - *(int *)(param_1 + 0x40)) < (int)uVar1) {
      lVar2 = param_1 + 0x38;
      FUN_1082f3938(0x3ff0000000000000);
      if (*(int *)(param_1 + 0x40) != 0) {
        func_0x0001082f3a48(param_1 + 0x38,lVar2);
      }
      if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
        func_0x0001082f3a40();
      }
      if (0x7ffffffe < uVar3) {
        uVar3 = 0x7fffffff;
      }
      func_0x0001082f3a54(uVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10837d394; end: 10837d3b3;  */

long FUN_10837d394(long param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uStack_28 = *(undefined4 *)(param_1 + 0x6c);
    uStack_24 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x28);
    func_0x00010837d2bc(param_1 + 0x20,&uStack_28);
    func_0x00010837dc54();
    *(ulong *)(param_1 + 0x6c) = CONCAT44(uStack_24,uStack_28);
    *(undefined1 *)(param_1 + 0x78) = 0;
    return param_1;
  }
  return param_1;
}



/* Entry: 10837d3b4; end: 10837d48b;  */

void FUN_10837d3b4(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uStack_38;
  
  lVar8 = *param_3;
  if (*(int *)(param_2 + 0x7c) == 2) {
    uVar7 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x7c) != 3) {
      uVar5 = 2;
      uVar6 = 2;
      goto LAB_10837d418;
    }
    uVar7 = 2;
  }
  uVar6 = 0;
  uVar5 = *(undefined1 *)(param_2 + 0x84);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  *(undefined1 *)(lVar8 + 0xc0) = uVar7;
  *(undefined1 *)(lVar8 + 0xc6) = uVar5;
  *(char *)(lVar8 + 0xc2) = (char)uVar1;
LAB_10837d418:
  *param_3 = 0;
  bVar3 = *(byte *)(param_2 + 0x60);
  cVar4 = *(char *)(param_2 + 100);
  uStack_38 = 0;
  *param_1 = lVar8;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = uVar6;
  *(undefined1 *)((long)param_1 + 0xd) = uVar5;
  *(byte *)((long)param_1 + 0xe) = *(byte *)((long)param_1 + 0xe) & 0xf8 | bVar3 & 3 | cVar4 << 2;
  FUN_10837ca38(&uStack_38);
  if (0 < (int)*(uint *)(lVar8 + 0x48)) {
    uVar2 = *(uint *)(param_2 + 0x74);
    if (*(char *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(lVar8 + 0x48) + -1) == '\x05') {
      uVar2 = ~uVar2;
    }
    *(uint *)(param_1 + 1) = uVar2;
  }
  return;
}



/* Entry: 10837d48c; end: 10837d513;  */

void FUN_10837d48c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 200;
  __Znwm();
  FUN_10837c6e8();
  uStack_38 = uVar1;
  FUN_10837d3b4(param_1,param_2,&uStack_38);
  FUN_10837ca38(&uStack_38);
  func_0x00010837cfe0(param_2);
  return;
}



/* Entry: 10837d514; end: 10837d657;  */

long FUN_10837d514(long param_1,undefined8 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_c0;
  undefined8 auStack_bc [3];
  float fStack_a4;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  float fStack_7c;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  FUN_10837d250(param_1,9,6);
  uVar1 = param_4 & 3;
  iVar3 = 3;
  if (param_3 == 0) {
    iVar3 = 1;
  }
  uVar7 = *param_2;
  uVar8 = param_2[1];
  fStack_c0 = (float)uVar7;
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  fStack_90 = (float)uVar8;
  fStack_a4 = (float)((ulong)uVar8 >> 0x20);
  auVar10 = NEON_fmov(0x3fe0000000000000,8);
  fVar9 = (float)(((double)fStack_c0 + (double)fStack_90) * auVar10._0_8_);
  fStack_7c = (float)(((double)fVar6 + (double)fStack_a4) * auVar10._8_8_);
  uStack_8c = NEON_rev64(CONCAT44(fStack_7c,fVar9),4);
  uStack_98 = CONCAT44(fVar6,fVar9);
  auStack_bc[2] = NEON_ext(uVar8,uVar7,4,1);
  if (param_3 != 0) {
    param_4 = param_4 + 1;
  }
  auStack_bc[0] = NEON_ext(uVar7,uVar8,4,1);
  auStack_bc[1] = auStack_bc[0];
  uStack_84 = auStack_bc[2];
  func_0x00010837dba4(&uStack_98 + uVar1);
  iVar4 = 4;
  uVar5 = uVar1;
  do {
    param_4 = param_4 + iVar3 & 3;
    uVar5 = uVar5 + iVar3 & 3;
    func_0x00010837dbdc(&uStack_98 + uVar5,(&fStack_c0)[(ulong)param_4 * 2],
                        *(undefined4 *)(auStack_bc + param_4));
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  func_0x00010837dc40();
  if (iVar2 == 0) {
    *(bool *)(param_1 + 0x84) = param_3 == 1;
    *(undefined4 *)(param_1 + 0x7c) = 2;
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  return param_1;
}



/* Entry: 10837d658; end: 10837d6ef;  */

long FUN_10837d658(long param_1)

{
  uint uVar1;
  int iVar2;
  uint unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined8 auStack_60 [6];
  
  func_0x00010837dc60();
  FUN_10837d250();
  iVar2 = 3;
  if (unaff_w21 == 0) {
    iVar2 = 1;
  }
  auStack_60[0] = *unaff_x22;
  auStack_60[2] = unaff_x22[1];
  auStack_60[1] = CONCAT44((int)((ulong)auStack_60[0] >> 0x20),(int)auStack_60[2]);
  auStack_60[3] = CONCAT44((int)((ulong)auStack_60[2] >> 0x20),(int)auStack_60[0]);
  func_0x00010837dba4(auStack_60 + (unaff_w20 & 3));
  func_0x00010837dbb0(iVar2 + unaff_w20 & 3);
  uVar1 = iVar2 + unaff_w20 + iVar2;
  func_0x00010837dbb0(uVar1 & 3);
  func_0x00010837dbb0(uVar1 + iVar2 & 3);
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10837d394(param_1);
    func_0x00010837dbbc();
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return param_1;
}



/* Entry: 10837d6f0; end: 10837d917;  */

void FUN_10837d6f0(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int iVar5;
  float *unaff_x22;
  uint uVar6;
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 uStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  func_0x00010837dc60();
  iVar1 = *(int *)(param_1 + 0x7c);
  if (*(uint *)(param_2 + 0x30) < 2) {
    FUN_10837d658();
  }
  else if (*(uint *)(param_2 + 0x30) == 2) {
    FUN_10837d514();
  }
  else {
    bVar2 = unaff_w21 == 0;
    iVar3 = 7;
    if (bVar2) {
      iVar3 = 1;
    }
    iVar4 = 2;
    if (!bVar2) {
      iVar4 = 6;
    }
    FUN_10816192c();
    uVar6 = unaff_w20 & 7;
    fStack_88 = *unaff_x22;
    afStack_b8[1] = unaff_x22[1];
    fStack_a8 = (float)*(undefined8 *)(unaff_x22 + 2);
    afStack_b8[2] = fStack_a8 - unaff_x22[6];
    fStack_94 = (float)((ulong)*(undefined8 *)(unaff_x22 + 2) >> 0x20);
    uStack_9c = NEON_rev64(CONCAT44(fStack_94 -
                                    (float)((ulong)*(undefined8 *)(unaff_x22 + 8) >> 0x20),
                                    fStack_a8 - (float)*(undefined8 *)(unaff_x22 + 8)),4);
    fStack_84 = fStack_94 - unaff_x22[0xb];
    afStack_b8[0] = fStack_88 + unaff_x22[4];
    fStack_a4 = afStack_b8[1] + unaff_x22[7];
    fStack_90 = fStack_88 + unaff_x22[10];
    fStack_7c = afStack_b8[1] + unaff_x22[5];
    afStack_b8[3] = afStack_b8[1];
    fStack_a0 = fStack_a8;
    fStack_8c = fStack_94;
    fStack_80 = fStack_88;
    func_0x00010837dba4(afStack_b8 + (ulong)uVar6 * 2);
    if (((bVar2 ^ unaff_w20) & 1) == 0) {
      iVar5 = 3;
      while( true ) {
        func_0x00010837dc88();
        func_0x00010837dbdc(afStack_b8 + (ulong)(uVar6 + iVar3 & 7) * 2);
        if (iVar5 == 0) break;
        uVar6 = uVar6 + iVar4 & 7;
        func_0x00010837dc2c(afStack_b8 + (ulong)uVar6 * 2);
        iVar5 = iVar5 + -1;
      }
    }
    else {
      iVar5 = 4;
      do {
        func_0x00010837dc2c(afStack_b8 + (ulong)(uVar6 + iVar3 & 7) * 2);
        func_0x00010837dc88();
        uVar6 = uVar6 + iVar4 & 7;
        func_0x00010837d120();
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    func_0x00010837dc40();
  }
  if (iVar1 == 0) {
    *(bool *)(unaff_x19 + 0x84) = unaff_w21 == 1;
    *(undefined4 *)(unaff_x19 + 0x7c) = 3;
    *(uint *)(unaff_x19 + 0x80) = unaff_w20 & 7;
  }
  return;
}



/* Entry: 10837d918; end: 10837d967;  */

undefined8
FUN_10837d918(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (0.0 <= param_3) {
    fStack_30 = param_1 - param_3;
    fStack_2c = param_2 - param_3;
    fStack_28 = param_1 + param_3;
    fStack_24 = param_2 + param_3;
    FUN_10837bca0(param_4,&fStack_30,param_5);
  }
  return param_4;
}



/* Entry: 10837d968; end: 10837da33;  */

void FUN_10837d968(undefined8 param_1,undefined4 *param_2,int param_3,int param_4)

{
  if (0 < param_3) {
    func_0x00010837d040(*param_2,param_2[1]);
    func_0x00010837d9ac(param_1,param_2 + 2,param_3 + -1);
    if (param_4 != 0) {
      FUN_10837d20c();
    }
  }
  return;
}



/* Entry: 10837da34; end: 10837db8b;  */

void FUN_10837da34(void)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  puVar1 = auStack_80;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010837db24(auStack_80);
  func_0x000108379ff4(auStack_80,auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010837da84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df1df50)[(ulong)puVar1 & 0xffffffff] * 4 + 0x10837da88))();
  return;
}



/* Entry: 10837db8c; end: 10837dcb3;  */

void FUN_10837db8c(void)

{
  return;
}



/* Entry: 10837dcb4; end: 10837dd77;  */

long * FUN_10837dcb4(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 auStack_60 [2];
  
  FUN_108376ad8(auStack_60);
  puVar1 = auStack_60;
  if (param_2 != param_3) {
    puVar1 = (undefined8 *)param_2;
  }
  (**(code **)(*param_1 + 0x38))(param_1,puVar1,param_3,param_4,param_5,param_6);
  uVar2 = (uint)param_1 ^ 1;
  if (param_2 != param_3) {
    uVar2 = 1;
  }
  if ((uVar2 & 1) == 0) {
    FUN_108376b90(param_2,auStack_60);
  }
  FUN_10837ca5c(auStack_60[0]);
  return param_1;
}



/* Entry: 10837dd78; end: 10837dd93;  */

undefined8 FUN_10837dd78(void)

{
  return 6;
}



/* Entry: 10837dd94; end: 10837de13;  */

long FUN_10837dd94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  FUN_108345058();
  *(undefined8 *)(lVar2 + 8) = 0;
  FUN_108345194(&uStack_38);
  uVar1 = uStack_38;
  uStack_38 = 0;
  func_0x00010816378c((undefined8 *)(lVar2 + 8),uVar1);
  FUN_10837dec8();
  return param_1;
}



/* Entry: 10837de14; end: 10837de3b;  */

long FUN_10837de14(long param_1)

{
  func_0x0001081428c0(param_1 + 8);
  FUN_10834517c(param_1,0);
  return param_1;
}



/* Entry: 10837de3c; end: 10837de6b;  */

bool FUN_10837de3c(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fStack_34;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 == 0) {
    return false;
  }
  if (NAN(param_1)) {
    bVar5 = false;
  }
  else {
    fVar7 = param_1;
    if (*(float *)(lVar4 + 0x40) < param_1) {
      fVar7 = *(float *)(lVar4 + 0x40);
    }
    fVar6 = 0.0;
    if (0.0 <= param_1) {
      fVar6 = fVar7;
    }
    lVar3 = lVar4;
    func_0x000108345218(fVar6,lVar4,&fStack_34);
    bVar5 = !NAN(fStack_34);
    if (!NAN(fStack_34)) {
      uVar1 = *(uint *)(lVar3 + 4);
      if (((int)uVar1 < 0) || (*(int *)(lVar4 + 0x3c) <= (int)uVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1083453e0);
        (*pcVar2)();
      }
      FUN_1083453e0(*(long *)(lVar4 + 0x30) + (ulong)uVar1 * 8,*(uint *)(lVar3 + 8) >> 0x1e,param_3,
                    param_4);
    }
  }
  return bVar5;
}



/* Entry: 10837de6c; end: 10837dec7;  */

bool FUN_10837de6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_108345194(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  func_0x00010816378c(param_1 + 8,uVar1);
  FUN_10837dec8();
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 10837dec8; end: 10837decf;  */

undefined8 * FUN_10837dec8(void)

{
  undefined8 in_stack_00000008;
  
  func_0x0001081428e8(in_stack_00000008);
  return &stack0x00000008;
}



/* Entry: 10837ded0; end: 10837dfc7;  */

long * FUN_10837ded0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (*(int *)*param_2 == 1) {
    FUN_10837dfc8(lVar2,param_3,param_4,param_5);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x88);
    func_0x00010837efa0();
    if (iVar1 == 1) {
      FUN_10837c488(lVar2,param_3,param_4,param_5);
    }
    else {
      func_0x00010837ef50(lVar2);
      FUN_10837e040(lVar2,*param_2,param_3,param_4,param_5);
    }
    FUN_108376bdc(param_2,lVar2);
  }
  *param_1 = *param_2;
  func_0x00010837ef98();
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x88) = 0;
  *(undefined1 *)(lVar2 + 0xc1) = 1;
  return param_1;
}


